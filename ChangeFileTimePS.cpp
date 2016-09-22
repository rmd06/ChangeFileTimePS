// ChangeFileTimePS.cpp : Implementation of DLL Exports.


// Note: Proxy/Stub Information
//      To build a separate proxy/stub DLL, 
//      run nmake -f ChangeFileTimePSps.mk in the project directory.

#include "stdafx.h"
#include "resource.h"
#include <initguid.h>
#include "ChangeFileTimePS.h"

#include "ChangeFileTimePS_i.c"
#include "ChangeFileTimeHandler.h"


CComModule _Module;

BEGIN_OBJECT_MAP(ObjectMap)
OBJECT_ENTRY(CLSID_ChangeFileTimeHandler, CChangeFileTimeHandler)
END_OBJECT_MAP()

/////////////////////////////////////////////////////////////////////////////
// DLL Entry Point

extern "C"
BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID /*lpReserved*/)
{
    if (dwReason == DLL_PROCESS_ATTACH)
    {
        _Module.Init(ObjectMap, hInstance, &LIBID_CHANGEFILETIMEPSLib);
        DisableThreadLibraryCalls(hInstance);
    }
    else if (dwReason == DLL_PROCESS_DETACH)
        _Module.Term();
    return TRUE;    // ok
}

/////////////////////////////////////////////////////////////////////////////
// Used to determine whether the DLL can be unloaded by OLE

STDAPI DllCanUnloadNow(void)
{
    return (_Module.GetLockCount()==0) ? S_OK : S_FALSE;
}

/////////////////////////////////////////////////////////////////////////////
// Returns a class factory to create an object of the requested type

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    return _Module.GetClassObject(rclsid, riid, ppv);
}


/////////////////////////////////////////////////////////////////////////////
// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
    // On NT, add ourself to the list of approved shell extensions.
    if ( 0 == (GetVersion() & 0x80000000) )
        {
        LONG    lRet;
        CRegKey reg;

        lRet = reg.Open ( HKEY_LOCAL_MACHINE, 
                          _T("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Shell Extensions\\Approved"),
                          KEY_SET_VALUE );

        if ( ERROR_SUCCESS != lRet )
            return E_ACCESSDENIED;

        lRet = reg.SetValue ( _T("ChangeFileTimePS"),
                              _T("{6736099C-D4FA-4006-8B89-223BC5BAA967}") );

        if ( ERROR_SUCCESS != lRet )
            return E_ACCESSDENIED;
        }


    return _Module.RegisterServer(TRUE);
}

/////////////////////////////////////////////////////////////////////////////
// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
    // On NT, remove ourself from the list of approved shell extensions.
    if ( 0 == (GetVersion() & 0x80000000) )
        {
        CRegKey reg;
        LONG    lRet;

        lRet = reg.Open ( HKEY_LOCAL_MACHINE, 
                          _T("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Shell Extensions\\Approved"),
                          KEY_SET_VALUE );

        if ( ERROR_SUCCESS == lRet )
            {
            reg.DeleteValue ( _T("{6736099C-D4FA-4006-8B89-223BC5BAA967}") );
            reg.Close();
            }
        }
    return _Module.UnregisterServer(TRUE);
}


