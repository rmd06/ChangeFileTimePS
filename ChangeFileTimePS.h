/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Sep 22 20:35:10 2016
 */
/* Compiler settings for E:\LEGACY\VC6\CHANGEFILETIMEPS\ChangeFileTimePS.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ChangeFileTimePS_h__
#define __ChangeFileTimePS_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IChangeFileTimeHandler_FWD_DEFINED__
#define __IChangeFileTimeHandler_FWD_DEFINED__
typedef interface IChangeFileTimeHandler IChangeFileTimeHandler;
#endif 	/* __IChangeFileTimeHandler_FWD_DEFINED__ */


#ifndef __ChangeFileTimeHandler_FWD_DEFINED__
#define __ChangeFileTimeHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class ChangeFileTimeHandler ChangeFileTimeHandler;
#else
typedef struct ChangeFileTimeHandler ChangeFileTimeHandler;
#endif /* __cplusplus */

#endif 	/* __ChangeFileTimeHandler_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IChangeFileTimeHandler_INTERFACE_DEFINED__
#define __IChangeFileTimeHandler_INTERFACE_DEFINED__

/* interface IChangeFileTimeHandler */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IChangeFileTimeHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5FC4D8AB-F704-407C-9E69-CAC0FC0F982E")
    IChangeFileTimeHandler : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IChangeFileTimeHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IChangeFileTimeHandler __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IChangeFileTimeHandler __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IChangeFileTimeHandler __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IChangeFileTimeHandler __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IChangeFileTimeHandler __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IChangeFileTimeHandler __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IChangeFileTimeHandler __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } IChangeFileTimeHandlerVtbl;

    interface IChangeFileTimeHandler
    {
        CONST_VTBL struct IChangeFileTimeHandlerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChangeFileTimeHandler_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IChangeFileTimeHandler_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IChangeFileTimeHandler_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IChangeFileTimeHandler_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IChangeFileTimeHandler_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IChangeFileTimeHandler_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IChangeFileTimeHandler_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IChangeFileTimeHandler_INTERFACE_DEFINED__ */



#ifndef __CHANGEFILETIMEPSLib_LIBRARY_DEFINED__
#define __CHANGEFILETIMEPSLib_LIBRARY_DEFINED__

/* library CHANGEFILETIMEPSLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_CHANGEFILETIMEPSLib;

EXTERN_C const CLSID CLSID_ChangeFileTimeHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("6736099C-D4FA-4006-8B89-223BC5BAA967")
ChangeFileTimeHandler;
#endif
#endif /* __CHANGEFILETIMEPSLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
