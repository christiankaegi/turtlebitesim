#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
#endif
#ifndef INCLUDED_openfl_system_TouchscreenType
#include <openfl/system/TouchscreenType.h>
#endif
namespace openfl{
namespace system{

Void Capabilities_obj::__construct()
{
	return null();
}

//Capabilities_obj::~Capabilities_obj() { }

Dynamic Capabilities_obj::__CreateEmpty() { return  new Capabilities_obj; }
hx::ObjectPtr< Capabilities_obj > Capabilities_obj::__new()
{  hx::ObjectPtr< Capabilities_obj > result = new Capabilities_obj();
	result->__construct();
	return result;}

Dynamic Capabilities_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Capabilities_obj > result = new Capabilities_obj();
	result->__construct();
	return result;}

bool Capabilities_obj::avHardwareDisable;

::String Capabilities_obj::cpuArchitecture;

bool Capabilities_obj::hasAccessibility;

bool Capabilities_obj::hasAudio;

bool Capabilities_obj::hasAudioEncoder;

bool Capabilities_obj::hasEmbeddedVideo;

bool Capabilities_obj::hasIME;

bool Capabilities_obj::hasMP3;

bool Capabilities_obj::hasPrinting;

bool Capabilities_obj::hasScreenBroadcast;

bool Capabilities_obj::hasScreenPlayback;

bool Capabilities_obj::hasStreamingAudio;

bool Capabilities_obj::hasStreamingVideo;

bool Capabilities_obj::hasTLS;

bool Capabilities_obj::hasVideoEncoder;

bool Capabilities_obj::isDebugger;

bool Capabilities_obj::isEmbeddedInAcrobat;

::String Capabilities_obj::language;

bool Capabilities_obj::localFileReadDisable;

::String Capabilities_obj::manufacturer;

int Capabilities_obj::maxLevelIDC;

::String Capabilities_obj::os;

Float Capabilities_obj::pixelAspectRatio;

::String Capabilities_obj::playerType;

::String Capabilities_obj::screenColor;

Float Capabilities_obj::screenDPI;

Float Capabilities_obj::screenResolutionX;

Float Capabilities_obj::screenResolutionY;

::String Capabilities_obj::serverString;

bool Capabilities_obj::supports32BitProcesses;

bool Capabilities_obj::supports64BitProcesses;

::openfl::system::TouchscreenType Capabilities_obj::touchscreenType;

::String Capabilities_obj::version;

bool Capabilities_obj::hasMultiChannelAudio( ::String type){
	HX_STACK_FRAME("openfl.system.Capabilities","hasMultiChannelAudio",0xb0db92e9,"openfl.system.Capabilities.hasMultiChannelAudio","openfl/system/Capabilities.hx",371,0xabe25da7)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(371)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Capabilities_obj,hasMultiChannelAudio,return )

::String Capabilities_obj::get_os( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_os",0x7acb30a4,"openfl.system.Capabilities.get_os","openfl/system/Capabilities.hx",396,0xabe25da7)
	HX_STACK_LINE(396)
	return HX_CSTRING("iOS");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_os,return )

Float Capabilities_obj::get_pixelAspectRatio( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_pixelAspectRatio",0xa176c2ad,"openfl.system.Capabilities.get_pixelAspectRatio","openfl/system/Capabilities.hx",410,0xabe25da7)
	HX_STACK_LINE(410)
	return (int)1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_pixelAspectRatio,return )

Float Capabilities_obj::get_screenDPI( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_screenDPI",0x6de6afd1,"openfl.system.Capabilities.get_screenDPI","openfl/system/Capabilities.hx",433,0xabe25da7)
	HX_STACK_LINE(433)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenDPI,return )

Float Capabilities_obj::get_screenResolutionX( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_screenResolutionX",0x9f8b6e20,"openfl.system.Capabilities.get_screenResolutionX","openfl/system/Capabilities.hx",448,0xabe25da7)
	HX_STACK_LINE(448)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenResolutionX,return )

Float Capabilities_obj::get_screenResolutionY( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_screenResolutionY",0x9f8b6e21,"openfl.system.Capabilities.get_screenResolutionY","openfl/system/Capabilities.hx",463,0xabe25da7)
	HX_STACK_LINE(463)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenResolutionY,return )

::String Capabilities_obj::get_language( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_language",0xce1cefd8,"openfl.system.Capabilities.get_language","openfl/system/Capabilities.hx",478,0xabe25da7)
	HX_STACK_LINE(478)
	return HX_CSTRING("en-US");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_language,return )

::String Capabilities_obj::get_version( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_version",0xb346e798,"openfl.system.Capabilities.get_version","openfl/system/Capabilities.hx",485,0xabe25da7)
	HX_STACK_LINE(494)
	::String value = HX_CSTRING("IOS");		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(507)
	{
		HX_STACK_LINE(509)
		::String _g = ::StringTools_obj::replace(HX_CSTRING("3.0.6"),HX_CSTRING("."),HX_CSTRING(","));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(509)
		::String _g1 = (HX_CSTRING(" ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(509)
		::String _g2 = (_g1 + HX_CSTRING(",0"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(509)
		hx::AddEq(value,_g2);
	}
	HX_STACK_LINE(513)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_version,return )


Capabilities_obj::Capabilities_obj()
{
}

Dynamic Capabilities_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"os") ) { return inCallProp ? get_os() : os; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hasIME") ) { return hasIME; }
		if (HX_FIELD_EQ(inName,"hasMP3") ) { return hasMP3; }
		if (HX_FIELD_EQ(inName,"hasTLS") ) { return hasTLS; }
		if (HX_FIELD_EQ(inName,"get_os") ) { return get_os_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return inCallProp ? get_version() : version; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasAudio") ) { return hasAudio; }
		if (HX_FIELD_EQ(inName,"language") ) { return inCallProp ? get_language() : language; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"screenDPI") ) { return inCallProp ? get_screenDPI() : screenDPI; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDebugger") ) { return isDebugger; }
		if (HX_FIELD_EQ(inName,"playerType") ) { return playerType; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasPrinting") ) { return hasPrinting; }
		if (HX_FIELD_EQ(inName,"maxLevelIDC") ) { return maxLevelIDC; }
		if (HX_FIELD_EQ(inName,"screenColor") ) { return screenColor; }
		if (HX_FIELD_EQ(inName,"get_version") ) { return get_version_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manufacturer") ) { return manufacturer; }
		if (HX_FIELD_EQ(inName,"serverString") ) { return serverString; }
		if (HX_FIELD_EQ(inName,"get_language") ) { return get_language_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_screenDPI") ) { return get_screenDPI_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cpuArchitecture") ) { return cpuArchitecture; }
		if (HX_FIELD_EQ(inName,"hasAudioEncoder") ) { return hasAudioEncoder; }
		if (HX_FIELD_EQ(inName,"hasVideoEncoder") ) { return hasVideoEncoder; }
		if (HX_FIELD_EQ(inName,"touchscreenType") ) { return touchscreenType; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasAccessibility") ) { return hasAccessibility; }
		if (HX_FIELD_EQ(inName,"hasEmbeddedVideo") ) { return hasEmbeddedVideo; }
		if (HX_FIELD_EQ(inName,"pixelAspectRatio") ) { return inCallProp ? get_pixelAspectRatio() : pixelAspectRatio; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"avHardwareDisable") ) { return avHardwareDisable; }
		if (HX_FIELD_EQ(inName,"hasScreenPlayback") ) { return hasScreenPlayback; }
		if (HX_FIELD_EQ(inName,"hasStreamingAudio") ) { return hasStreamingAudio; }
		if (HX_FIELD_EQ(inName,"hasStreamingVideo") ) { return hasStreamingVideo; }
		if (HX_FIELD_EQ(inName,"screenResolutionX") ) { return inCallProp ? get_screenResolutionX() : screenResolutionX; }
		if (HX_FIELD_EQ(inName,"screenResolutionY") ) { return inCallProp ? get_screenResolutionY() : screenResolutionY; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hasScreenBroadcast") ) { return hasScreenBroadcast; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isEmbeddedInAcrobat") ) { return isEmbeddedInAcrobat; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"localFileReadDisable") ) { return localFileReadDisable; }
		if (HX_FIELD_EQ(inName,"hasMultiChannelAudio") ) { return hasMultiChannelAudio_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixelAspectRatio") ) { return get_pixelAspectRatio_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_screenResolutionX") ) { return get_screenResolutionX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_screenResolutionY") ) { return get_screenResolutionY_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"supports32BitProcesses") ) { return supports32BitProcesses; }
		if (HX_FIELD_EQ(inName,"supports64BitProcesses") ) { return supports64BitProcesses; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Capabilities_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"os") ) { os=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hasIME") ) { hasIME=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasMP3") ) { hasMP3=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasTLS") ) { hasTLS=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasAudio") ) { hasAudio=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"language") ) { language=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"screenDPI") ) { screenDPI=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDebugger") ) { isDebugger=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playerType") ) { playerType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasPrinting") ) { hasPrinting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLevelIDC") ) { maxLevelIDC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenColor") ) { screenColor=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manufacturer") ) { manufacturer=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"serverString") ) { serverString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cpuArchitecture") ) { cpuArchitecture=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasAudioEncoder") ) { hasAudioEncoder=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasVideoEncoder") ) { hasVideoEncoder=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchscreenType") ) { touchscreenType=inValue.Cast< ::openfl::system::TouchscreenType >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasAccessibility") ) { hasAccessibility=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasEmbeddedVideo") ) { hasEmbeddedVideo=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixelAspectRatio") ) { pixelAspectRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"avHardwareDisable") ) { avHardwareDisable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasScreenPlayback") ) { hasScreenPlayback=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasStreamingAudio") ) { hasStreamingAudio=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasStreamingVideo") ) { hasStreamingVideo=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenResolutionX") ) { screenResolutionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenResolutionY") ) { screenResolutionY=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hasScreenBroadcast") ) { hasScreenBroadcast=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isEmbeddedInAcrobat") ) { isEmbeddedInAcrobat=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"localFileReadDisable") ) { localFileReadDisable=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"supports32BitProcesses") ) { supports32BitProcesses=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"supports64BitProcesses") ) { supports64BitProcesses=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Capabilities_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("avHardwareDisable"),
	HX_CSTRING("cpuArchitecture"),
	HX_CSTRING("hasAccessibility"),
	HX_CSTRING("hasAudio"),
	HX_CSTRING("hasAudioEncoder"),
	HX_CSTRING("hasEmbeddedVideo"),
	HX_CSTRING("hasIME"),
	HX_CSTRING("hasMP3"),
	HX_CSTRING("hasPrinting"),
	HX_CSTRING("hasScreenBroadcast"),
	HX_CSTRING("hasScreenPlayback"),
	HX_CSTRING("hasStreamingAudio"),
	HX_CSTRING("hasStreamingVideo"),
	HX_CSTRING("hasTLS"),
	HX_CSTRING("hasVideoEncoder"),
	HX_CSTRING("isDebugger"),
	HX_CSTRING("isEmbeddedInAcrobat"),
	HX_CSTRING("language"),
	HX_CSTRING("localFileReadDisable"),
	HX_CSTRING("manufacturer"),
	HX_CSTRING("maxLevelIDC"),
	HX_CSTRING("os"),
	HX_CSTRING("pixelAspectRatio"),
	HX_CSTRING("playerType"),
	HX_CSTRING("screenColor"),
	HX_CSTRING("screenDPI"),
	HX_CSTRING("screenResolutionX"),
	HX_CSTRING("screenResolutionY"),
	HX_CSTRING("serverString"),
	HX_CSTRING("supports32BitProcesses"),
	HX_CSTRING("supports64BitProcesses"),
	HX_CSTRING("touchscreenType"),
	HX_CSTRING("version"),
	HX_CSTRING("hasMultiChannelAudio"),
	HX_CSTRING("get_os"),
	HX_CSTRING("get_pixelAspectRatio"),
	HX_CSTRING("get_screenDPI"),
	HX_CSTRING("get_screenResolutionX"),
	HX_CSTRING("get_screenResolutionY"),
	HX_CSTRING("get_language"),
	HX_CSTRING("get_version"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Capabilities_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Capabilities_obj::avHardwareDisable,"avHardwareDisable");
	HX_MARK_MEMBER_NAME(Capabilities_obj::cpuArchitecture,"cpuArchitecture");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasAccessibility,"hasAccessibility");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasAudio,"hasAudio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasAudioEncoder,"hasAudioEncoder");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasEmbeddedVideo,"hasEmbeddedVideo");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasIME,"hasIME");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasMP3,"hasMP3");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasPrinting,"hasPrinting");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasScreenBroadcast,"hasScreenBroadcast");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasScreenPlayback,"hasScreenPlayback");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasStreamingAudio,"hasStreamingAudio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasStreamingVideo,"hasStreamingVideo");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasTLS,"hasTLS");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasVideoEncoder,"hasVideoEncoder");
	HX_MARK_MEMBER_NAME(Capabilities_obj::isDebugger,"isDebugger");
	HX_MARK_MEMBER_NAME(Capabilities_obj::isEmbeddedInAcrobat,"isEmbeddedInAcrobat");
	HX_MARK_MEMBER_NAME(Capabilities_obj::language,"language");
	HX_MARK_MEMBER_NAME(Capabilities_obj::localFileReadDisable,"localFileReadDisable");
	HX_MARK_MEMBER_NAME(Capabilities_obj::manufacturer,"manufacturer");
	HX_MARK_MEMBER_NAME(Capabilities_obj::maxLevelIDC,"maxLevelIDC");
	HX_MARK_MEMBER_NAME(Capabilities_obj::os,"os");
	HX_MARK_MEMBER_NAME(Capabilities_obj::pixelAspectRatio,"pixelAspectRatio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::playerType,"playerType");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenColor,"screenColor");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenDPI,"screenDPI");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenResolutionX,"screenResolutionX");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenResolutionY,"screenResolutionY");
	HX_MARK_MEMBER_NAME(Capabilities_obj::serverString,"serverString");
	HX_MARK_MEMBER_NAME(Capabilities_obj::supports32BitProcesses,"supports32BitProcesses");
	HX_MARK_MEMBER_NAME(Capabilities_obj::supports64BitProcesses,"supports64BitProcesses");
	HX_MARK_MEMBER_NAME(Capabilities_obj::touchscreenType,"touchscreenType");
	HX_MARK_MEMBER_NAME(Capabilities_obj::version,"version");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Capabilities_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::avHardwareDisable,"avHardwareDisable");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::cpuArchitecture,"cpuArchitecture");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasAccessibility,"hasAccessibility");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasAudio,"hasAudio");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasAudioEncoder,"hasAudioEncoder");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasEmbeddedVideo,"hasEmbeddedVideo");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasIME,"hasIME");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasMP3,"hasMP3");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasPrinting,"hasPrinting");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasScreenBroadcast,"hasScreenBroadcast");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasScreenPlayback,"hasScreenPlayback");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasStreamingAudio,"hasStreamingAudio");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasStreamingVideo,"hasStreamingVideo");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasTLS,"hasTLS");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasVideoEncoder,"hasVideoEncoder");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::isDebugger,"isDebugger");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::isEmbeddedInAcrobat,"isEmbeddedInAcrobat");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::language,"language");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::localFileReadDisable,"localFileReadDisable");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::manufacturer,"manufacturer");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::maxLevelIDC,"maxLevelIDC");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::os,"os");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::pixelAspectRatio,"pixelAspectRatio");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::playerType,"playerType");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenColor,"screenColor");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenDPI,"screenDPI");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenResolutionX,"screenResolutionX");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenResolutionY,"screenResolutionY");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::serverString,"serverString");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::supports32BitProcesses,"supports32BitProcesses");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::supports64BitProcesses,"supports64BitProcesses");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::touchscreenType,"touchscreenType");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::version,"version");
};

#endif

Class Capabilities_obj::__mClass;

void Capabilities_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.system.Capabilities"), hx::TCanCast< Capabilities_obj> ,sStaticFields,sMemberFields,
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

void Capabilities_obj::__boot()
{
	avHardwareDisable= true;
	cpuArchitecture= HX_CSTRING("");
	hasAccessibility= false;
	hasAudio= true;
	hasAudioEncoder= false;
	hasEmbeddedVideo= false;
	hasIME= false;
	hasMP3= false;
	hasPrinting= false;
	hasScreenBroadcast= false;
	hasScreenPlayback= false;
	hasStreamingAudio= false;
	hasStreamingVideo= false;
	hasTLS= true;
	hasVideoEncoder= false;
	isDebugger= false;
	isEmbeddedInAcrobat= false;
	localFileReadDisable= false;
	manufacturer= HX_CSTRING("OpenFL Contributors");
	maxLevelIDC= (int)0;
	playerType= HX_CSTRING("OpenFL");
	screenColor= HX_CSTRING("color");
	serverString= HX_CSTRING("");
	supports32BitProcesses= true;
	supports64BitProcesses= false;
	touchscreenType= ::openfl::system::TouchscreenType_obj::FINGER;
}

} // end namespace openfl
} // end namespace system
