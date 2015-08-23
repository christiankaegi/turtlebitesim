#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace lime{
namespace system{

Void System_obj::__construct()
{
	return null();
}

//System_obj::~System_obj() { }

Dynamic System_obj::__CreateEmpty() { return  new System_obj; }
hx::ObjectPtr< System_obj > System_obj::__new()
{  hx::ObjectPtr< System_obj > result = new System_obj();
	result->__construct();
	return result;}

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< System_obj > result = new System_obj();
	result->__construct();
	return result;}

::String System_obj::applicationDirectory;

::String System_obj::applicationStorageDirectory;

::String System_obj::desktopDirectory;

bool System_obj::disableCFFI;

::String System_obj::documentsDirectory;

::String System_obj::fontsDirectory;

::String System_obj::userDirectory;

::haxe::ds::StringMap System_obj::__moduleNames;

Void System_obj::exit( int code){
{
		HX_STACK_FRAME("lime.system.System","exit",0x19210697,"lime.system.System.exit","lime/system/System.hx",114,0x6434b429)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(114)
		::Sys_obj::exit(code);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,exit,(void))

::String System_obj::findHaxeLib( ::String library){
	HX_STACK_FRAME("lime.system.System","findHaxeLib",0x4637f12d,"lime.system.System.findHaxeLib","lime/system/System.hx",120,0x6434b429)
	HX_STACK_ARG(library,"library")
	HX_STACK_LINE(124)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(126)
		::sys::io::Process proc = ::sys::io::Process_obj::__new(HX_CSTRING("haxelib"),Array_obj< ::String >::__new().Add(HX_CSTRING("path")).Add(library));		HX_STACK_VAR(proc,"proc");
		HX_STACK_LINE(128)
		if (((proc != null()))){
			HX_STACK_LINE(130)
			::haxe::io::Input stream = proc->_stdout;		HX_STACK_VAR(stream,"stream");
			HX_STACK_LINE(132)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(134)
				while((true)){
					HX_STACK_LINE(136)
					::String s = stream->readLine();		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(138)
					::String _g = s.substr((int)0,(int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(138)
					if (((_g != HX_CSTRING("-")))){
						HX_STACK_LINE(140)
						stream->close();
						HX_STACK_LINE(141)
						proc->close();
						HX_STACK_LINE(142)
						::lime::system::System_obj::loaderTrace((HX_CSTRING("Found haxelib ") + s));
						HX_STACK_LINE(143)
						return s;
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(151)
			stream->close();
			HX_STACK_LINE(152)
			proc->close();
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(160)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,findHaxeLib,return )

int System_obj::getTimer( ){
	HX_STACK_FRAME("lime.system.System","getTimer",0xb1bf8f48,"lime.system.System.getTimer","lime/system/System.hx",172,0x6434b429)
	HX_STACK_LINE(172)
	return ::lime::system::System_obj::lime_system_get_timer();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,getTimer,return )

Dynamic System_obj::load( ::String library,::String method,hx::Null< int >  __o_args,hx::Null< bool >  __o_lazy){
int args = __o_args.Default(0);
bool lazy = __o_lazy.Default(false);
	HX_STACK_FRAME("lime.system.System","load",0x1dbaa99f,"lime.system.System.load","lime/system/System.hx",184,0x6434b429)
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_ARG(lazy,"lazy")
{
		HX_STACK_LINE(194)
		if ((::lime::system::System_obj::disableCFFI)){

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			Dynamic run(Dynamic __){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/system/System.hx",196,0x6434b429)
				HX_STACK_ARG(__,"__")
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/system/System.hx",196,0x6434b429)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(196)
					return _Function_3_1::Block();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(196)
			return ::Reflect_obj::makeVarArgs( Dynamic(new _Function_2_1()));
		}
		HX_STACK_LINE(200)
		Dynamic result = null();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(205)
		if (((::lime::system::System_obj::__moduleNames == null()))){
			HX_STACK_LINE(205)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(205)
			::lime::system::System_obj::__moduleNames = _g;
		}
		HX_STACK_LINE(207)
		if ((lazy)){
			HX_STACK_LINE(209)
			::lime::system::System_obj::__moduleNames->set(library,library);
			HX_STACK_LINE(211)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(216)
				if (((library == HX_CSTRING("lime-legacy")))){
					HX_STACK_LINE(216)
					return null();
				}
				HX_STACK_LINE(222)
				Dynamic _g1 = ::cpp::Lib_obj::loadLazy(library,method,args);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(222)
				result = _g1;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
		}
		else{
			HX_STACK_LINE(230)
			return ::cpp::Lib_obj::load(library,method,args);
			HX_STACK_LINE(234)
			if ((::lime::system::System_obj::__moduleNames->exists(library))){
				HX_STACK_LINE(237)
				::String _g2 = ::lime::system::System_obj::__moduleNames->get(library);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(237)
				return ::cpp::Lib_obj::load(_g2,method,args);
			}
			HX_STACK_LINE(262)
			::lime::system::System_obj::__moduleNames->set(library,library);
			HX_STACK_LINE(264)
			Dynamic _g3 = ::lime::system::System_obj::tryLoad((HX_CSTRING("./") + library),library,method,args);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(264)
			result = _g3;
			HX_STACK_LINE(266)
			if (((result == null()))){
				HX_STACK_LINE(268)
				Dynamic _g4 = ::lime::system::System_obj::tryLoad((HX_CSTRING(".\\") + library),library,method,args);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(268)
				result = _g4;
			}
			HX_STACK_LINE(272)
			if (((result == null()))){
				HX_STACK_LINE(274)
				Dynamic _g5 = ::lime::system::System_obj::tryLoad(library,library,method,args);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(274)
				result = _g5;
			}
			HX_STACK_LINE(278)
			if (((result == null()))){
				HX_STACK_LINE(280)
				::String _g6 = ::lime::system::System_obj::sysName().substr((int)7,null()).toLowerCase();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(280)
				::String slash;		HX_STACK_VAR(slash,"slash");
				HX_STACK_LINE(280)
				if (((_g6 == HX_CSTRING("windows")))){
					HX_STACK_LINE(280)
					slash = HX_CSTRING("\\");
				}
				else{
					HX_STACK_LINE(280)
					slash = HX_CSTRING("/");
				}
				HX_STACK_LINE(281)
				::String haxelib = ::lime::system::System_obj::findHaxeLib(HX_CSTRING("lime"));		HX_STACK_VAR(haxelib,"haxelib");
				HX_STACK_LINE(283)
				if (((haxelib != HX_CSTRING("")))){
					HX_STACK_LINE(285)
					::String _g7 = ::lime::system::System_obj::sysName();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(285)
					::String _g8 = ((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(285)
					::String _g9 = (_g8 + slash);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(285)
					::String _g10 = (_g9 + library);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(285)
					Dynamic _g11 = ::lime::system::System_obj::tryLoad(_g10,library,method,args);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(285)
					result = _g11;
					HX_STACK_LINE(287)
					if (((result == null()))){
						HX_STACK_LINE(289)
						::String _g12 = ::lime::system::System_obj::sysName();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(289)
						::String _g13 = ((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + _g12);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(289)
						::String _g14 = (_g13 + HX_CSTRING("64"));		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(289)
						::String _g15 = (_g14 + slash);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(289)
						::String _g16 = (_g15 + library);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(289)
						Dynamic _g17 = ::lime::system::System_obj::tryLoad(_g16,library,method,args);		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(289)
						result = _g17;
					}
				}
			}
			HX_STACK_LINE(297)
			::String _g18 = ::Std_obj::string(result);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(297)
			::String _g19 = (HX_CSTRING("Result : ") + _g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(297)
			::lime::system::System_obj::loaderTrace(_g19);
		}
		HX_STACK_LINE(316)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,load,return )

::String System_obj::sysName( ){
	HX_STACK_FRAME("lime.system.System","sysName",0x424b781f,"lime.system.System.sysName","lime/system/System.hx",321,0x6434b429)
	HX_STACK_LINE(327)
	Dynamic sys_string = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_string"),(int)0);		HX_STACK_VAR(sys_string,"sys_string");
	HX_STACK_LINE(328)
	return sys_string().Cast< ::String >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,sysName,return )

Dynamic System_obj::tryLoad( ::String name,::String library,::String func,int args){
	HX_STACK_FRAME("lime.system.System","tryLoad",0x12810b28,"lime.system.System.tryLoad","lime/system/System.hx",345,0x6434b429)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(349)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(352)
		Dynamic result = ::cpp::Lib_obj::load(name,func,args);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(361)
		if (((result != null()))){
			HX_STACK_LINE(363)
			::lime::system::System_obj::loaderTrace((HX_CSTRING("Got result ") + name));
			HX_STACK_LINE(364)
			::lime::system::System_obj::__moduleNames->set(library,name);
			HX_STACK_LINE(365)
			return result;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(371)
				::lime::system::System_obj::loaderTrace((HX_CSTRING("Failed to load : ") + name));
			}
		}
	}
	HX_STACK_LINE(377)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,tryLoad,return )

Void System_obj::loaderTrace( ::String message){
{
		HX_STACK_FRAME("lime.system.System","loaderTrace",0xe7255319,"lime.system.System.loaderTrace","lime/system/System.hx",382,0x6434b429)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(388)
		Dynamic get_env = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("get_env"),(int)1);		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(389)
		Dynamic _g = get_env(HX_CSTRING("OPENFL_LOAD_DEBUG"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(389)
		bool debug = (_g != null());		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(397)
		if ((debug)){
			HX_STACK_LINE(399)
			::Sys_obj::println(message);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,loaderTrace,(void))

::String System_obj::get_applicationDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_applicationDirectory",0xf6955c7f,"lime.system.System.get_applicationDirectory","lime/system/System.hx",461,0x6434b429)
	HX_STACK_LINE(461)
	return ::lime::system::System_obj::lime_system_get_directory((int)0,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationDirectory,return )

::String System_obj::get_applicationStorageDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_applicationStorageDirectory",0x34818fe0,"lime.system.System.get_applicationStorageDirectory","lime/system/System.hx",469,0x6434b429)
	HX_STACK_LINE(471)
	::String company = HX_CSTRING("MyCompany");		HX_STACK_VAR(company,"company");
	HX_STACK_LINE(472)
	::String file = HX_CSTRING("MyApplication");		HX_STACK_VAR(file,"file");
	HX_STACK_LINE(475)
	if (((bool((::lime::app::Application_obj::current != null())) && bool((::lime::app::Application_obj::current->config != null()))))){
		HX_STACK_LINE(477)
		if (((::lime::app::Application_obj::current->config->__Field(HX_CSTRING("company"),true) != null()))){
			HX_STACK_LINE(479)
			company = ::lime::app::Application_obj::current->config->__Field(HX_CSTRING("company"),true);
		}
		HX_STACK_LINE(483)
		if (((::lime::app::Application_obj::current->config->__Field(HX_CSTRING("file"),true) != null()))){
			HX_STACK_LINE(485)
			file = ::lime::app::Application_obj::current->config->__Field(HX_CSTRING("file"),true);
		}
	}
	HX_STACK_LINE(493)
	return ::lime::system::System_obj::lime_system_get_directory((int)1,company,file);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationStorageDirectory,return )

::String System_obj::get_desktopDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_desktopDirectory",0x483b2773,"lime.system.System.get_desktopDirectory","lime/system/System.hx",504,0x6434b429)
	HX_STACK_LINE(504)
	return ::lime::system::System_obj::lime_system_get_directory((int)2,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_desktopDirectory,return )

::String System_obj::get_documentsDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_documentsDirectory",0x4a6a8557,"lime.system.System.get_documentsDirectory","lime/system/System.hx",515,0x6434b429)
	HX_STACK_LINE(515)
	return ::lime::system::System_obj::lime_system_get_directory((int)3,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_documentsDirectory,return )

::String System_obj::get_fontsDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_fontsDirectory",0x8242b40b,"lime.system.System.get_fontsDirectory","lime/system/System.hx",526,0x6434b429)
	HX_STACK_LINE(526)
	return ::lime::system::System_obj::lime_system_get_directory((int)4,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_fontsDirectory,return )

::String System_obj::get_userDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_userDirectory",0x2b5522e0,"lime.system.System.get_userDirectory","lime/system/System.hx",537,0x6434b429)
	HX_STACK_LINE(537)
	return ::lime::system::System_obj::lime_system_get_directory((int)5,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_userDirectory,return )

Dynamic System_obj::lime_system_get_directory;

Dynamic System_obj::lime_system_get_timer;


System_obj::System_obj()
{
}

Dynamic System_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sysName") ) { return sysName_dyn(); }
		if (HX_FIELD_EQ(inName,"tryLoad") ) { return tryLoad_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTimer") ) { return getTimer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { return disableCFFI; }
		if (HX_FIELD_EQ(inName,"findHaxeLib") ) { return findHaxeLib_dyn(); }
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { return loaderTrace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { return inCallProp ? get_userDirectory() : userDirectory; }
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { return __moduleNames; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { return inCallProp ? get_fontsDirectory() : fontsDirectory; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { return inCallProp ? get_desktopDirectory() : desktopDirectory; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { return get_userDirectory_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { return inCallProp ? get_documentsDirectory() : documentsDirectory; }
		if (HX_FIELD_EQ(inName,"get_fontsDirectory") ) { return get_fontsDirectory_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { return inCallProp ? get_applicationDirectory() : applicationDirectory; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { return get_desktopDirectory_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_system_get_timer") ) { return lime_system_get_timer; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { return get_documentsDirectory_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { return get_applicationDirectory_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_system_get_directory") ) { return lime_system_get_directory; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { return inCallProp ? get_applicationStorageDirectory() : applicationStorageDirectory; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { return get_applicationStorageDirectory_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic System_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { disableCFFI=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { userDirectory=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { __moduleNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { fontsDirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { desktopDirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { documentsDirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { applicationDirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_system_get_timer") ) { lime_system_get_timer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_system_get_directory") ) { lime_system_get_directory=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { applicationStorageDirectory=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void System_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("applicationDirectory"),
	HX_CSTRING("applicationStorageDirectory"),
	HX_CSTRING("desktopDirectory"),
	HX_CSTRING("disableCFFI"),
	HX_CSTRING("documentsDirectory"),
	HX_CSTRING("fontsDirectory"),
	HX_CSTRING("userDirectory"),
	HX_CSTRING("__moduleNames"),
	HX_CSTRING("exit"),
	HX_CSTRING("findHaxeLib"),
	HX_CSTRING("getTimer"),
	HX_CSTRING("load"),
	HX_CSTRING("sysName"),
	HX_CSTRING("tryLoad"),
	HX_CSTRING("loaderTrace"),
	HX_CSTRING("get_applicationDirectory"),
	HX_CSTRING("get_applicationStorageDirectory"),
	HX_CSTRING("get_desktopDirectory"),
	HX_CSTRING("get_documentsDirectory"),
	HX_CSTRING("get_fontsDirectory"),
	HX_CSTRING("get_userDirectory"),
	HX_CSTRING("lime_system_get_directory"),
	HX_CSTRING("lime_system_get_timer"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_MARK_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(System_obj::__moduleNames,"__moduleNames");
	HX_MARK_MEMBER_NAME(System_obj::lime_system_get_directory,"lime_system_get_directory");
	HX_MARK_MEMBER_NAME(System_obj::lime_system_get_timer,"lime_system_get_timer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_VISIT_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::__moduleNames,"__moduleNames");
	HX_VISIT_MEMBER_NAME(System_obj::lime_system_get_directory,"lime_system_get_directory");
	HX_VISIT_MEMBER_NAME(System_obj::lime_system_get_timer,"lime_system_get_timer");
};

#endif

Class System_obj::__mClass;

void System_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.system.System"), hx::TCanCast< System_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void System_obj::__boot()
{
	__moduleNames= null();
	lime_system_get_directory= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_system_get_directory"),(int)3,null());
	lime_system_get_timer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_system_get_timer"),(int)0,null());
}

} // end namespace lime
} // end namespace system
