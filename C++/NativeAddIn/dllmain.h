// dllmain.h : 模块类的声明。

class CNativeAddInModule : public ATL::CAtlDllModuleT< CNativeAddInModule >
{
public :
	DECLARE_LIBID(LIBID_NativeAddInLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_NATIVEADDIN, "{7DB0B841-170B-4A82-A83D-4328CC7C109C}")
};

extern class CNativeAddInModule _AtlModule;
