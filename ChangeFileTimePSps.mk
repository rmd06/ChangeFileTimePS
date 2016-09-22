
ChangeFileTimePSps.dll: dlldata.obj ChangeFileTimePS_p.obj ChangeFileTimePS_i.obj
	link /dll /out:ChangeFileTimePSps.dll /def:ChangeFileTimePSps.def /entry:DllMain dlldata.obj ChangeFileTimePS_p.obj ChangeFileTimePS_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del ChangeFileTimePSps.dll
	@del ChangeFileTimePSps.lib
	@del ChangeFileTimePSps.exp
	@del dlldata.obj
	@del ChangeFileTimePS_p.obj
	@del ChangeFileTimePS_i.obj
