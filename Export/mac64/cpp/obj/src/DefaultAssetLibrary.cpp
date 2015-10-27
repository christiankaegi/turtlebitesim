#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__assets_fonts_consolas_bold_ttf
#include <__ASSET__OPENFL__assets_fonts_consolas_bold_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__assets_fonts_myriadpro_bold_otf
#include <__ASSET__OPENFL__assets_fonts_myriadpro_bold_otf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__assets_fonts_myriadpro_regular_otf
#include <__ASSET__OPENFL__assets_fonts_myriadpro_regular_otf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__fonts_consolas_bold_ttf
#include <__ASSET__OPENFL__fonts_consolas_bold_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__fonts_myriadpro_bold_otf
#include <__ASSET__OPENFL__fonts_myriadpro_bold_otf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__fonts_myriadpro_regular_otf
#include <__ASSET__OPENFL__fonts_myriadpro_regular_otf.h>
#endif
#ifndef INCLUDED___ASSET__assets_fonts_consolas_bold_ttf
#include <__ASSET__assets_fonts_consolas_bold_ttf.h>
#endif
#ifndef INCLUDED___ASSET__assets_fonts_myriadpro_bold_otf
#include <__ASSET__assets_fonts_myriadpro_bold_otf.h>
#endif
#ifndef INCLUDED___ASSET__assets_fonts_myriadpro_regular_otf
#include <__ASSET__assets_fonts_myriadpro_regular_otf.h>
#endif
#ifndef INCLUDED___ASSET__fonts_consolas_bold_ttf
#include <__ASSET__fonts_consolas_bold_ttf.h>
#endif
#ifndef INCLUDED___ASSET__fonts_myriadpro_bold_otf
#include <__ASSET__fonts_myriadpro_bold_otf.h>
#endif
#ifndef INCLUDED___ASSET__fonts_myriadpro_regular_otf
#include <__ASSET__fonts_myriadpro_regular_otf.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

Void DefaultAssetLibrary_obj::__construct()
{
HX_STACK_FRAME("DefaultAssetLibrary","new",0xbc37e41e,"DefaultAssetLibrary.new","DefaultAssetLibrary.hx",31,0x0fc48912)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(36)
	this->type = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(35)
	this->path = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(34)
	this->className = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(42)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	super::__construct();
	HX_STACK_LINE(793)
	::openfl::text::Font_obj::registerFont(hx::ClassOf< ::__ASSET__OPENFL__assets_fonts_consolas_bold_ttf >());
	HX_STACK_LINE(796)
	::openfl::text::Font_obj::registerFont(hx::ClassOf< ::__ASSET__OPENFL__assets_fonts_myriadpro_bold_otf >());
	HX_STACK_LINE(799)
	::openfl::text::Font_obj::registerFont(hx::ClassOf< ::__ASSET__OPENFL__assets_fonts_myriadpro_regular_otf >());
	HX_STACK_LINE(928)
	::openfl::text::Font_obj::registerFont(hx::ClassOf< ::__ASSET__OPENFL__fonts_consolas_bold_ttf >());
	HX_STACK_LINE(931)
	::openfl::text::Font_obj::registerFont(hx::ClassOf< ::__ASSET__OPENFL__fonts_myriadpro_bold_otf >());
	HX_STACK_LINE(934)
	::openfl::text::Font_obj::registerFont(hx::ClassOf< ::__ASSET__OPENFL__fonts_myriadpro_regular_otf >());
	HX_STACK_LINE(941)
	bool useManifest = false;		HX_STACK_VAR(useManifest,"useManifest");
	HX_STACK_LINE(942)
	useManifest = true;
	HX_STACK_LINE(943)
	useManifest = true;
	HX_STACK_LINE(945)
	this->className->set(HX_CSTRING("assets/fonts/Consolas Bold.ttf"),hx::ClassOf< ::__ASSET__assets_fonts_consolas_bold_ttf >());
	HX_STACK_LINE(946)
	this->type->set(HX_CSTRING("assets/fonts/Consolas Bold.ttf"),HX_CSTRING("FONT"));
	HX_STACK_LINE(947)
	useManifest = true;
	HX_STACK_LINE(948)
	useManifest = true;
	HX_STACK_LINE(950)
	this->className->set(HX_CSTRING("assets/fonts/MyriadPro-Bold.otf"),hx::ClassOf< ::__ASSET__assets_fonts_myriadpro_bold_otf >());
	HX_STACK_LINE(951)
	this->type->set(HX_CSTRING("assets/fonts/MyriadPro-Bold.otf"),HX_CSTRING("FONT"));
	HX_STACK_LINE(952)
	useManifest = true;
	HX_STACK_LINE(953)
	useManifest = true;
	HX_STACK_LINE(955)
	this->className->set(HX_CSTRING("assets/fonts/MyriadPro-Regular.otf"),hx::ClassOf< ::__ASSET__assets_fonts_myriadpro_regular_otf >());
	HX_STACK_LINE(956)
	this->type->set(HX_CSTRING("assets/fonts/MyriadPro-Regular.otf"),HX_CSTRING("FONT"));
	HX_STACK_LINE(957)
	useManifest = true;
	HX_STACK_LINE(958)
	useManifest = true;
	HX_STACK_LINE(959)
	useManifest = true;
	HX_STACK_LINE(960)
	useManifest = true;
	HX_STACK_LINE(961)
	useManifest = true;
	HX_STACK_LINE(962)
	useManifest = true;
	HX_STACK_LINE(963)
	useManifest = true;
	HX_STACK_LINE(964)
	useManifest = true;
	HX_STACK_LINE(965)
	useManifest = true;
	HX_STACK_LINE(966)
	useManifest = true;
	HX_STACK_LINE(967)
	useManifest = true;
	HX_STACK_LINE(968)
	useManifest = true;
	HX_STACK_LINE(969)
	useManifest = true;
	HX_STACK_LINE(970)
	useManifest = true;
	HX_STACK_LINE(971)
	useManifest = true;
	HX_STACK_LINE(972)
	useManifest = true;
	HX_STACK_LINE(973)
	useManifest = true;
	HX_STACK_LINE(974)
	useManifest = true;
	HX_STACK_LINE(975)
	useManifest = true;
	HX_STACK_LINE(976)
	useManifest = true;
	HX_STACK_LINE(977)
	useManifest = true;
	HX_STACK_LINE(978)
	useManifest = true;
	HX_STACK_LINE(979)
	useManifest = true;
	HX_STACK_LINE(980)
	useManifest = true;
	HX_STACK_LINE(981)
	useManifest = true;
	HX_STACK_LINE(982)
	useManifest = true;
	HX_STACK_LINE(983)
	useManifest = true;
	HX_STACK_LINE(984)
	useManifest = true;
	HX_STACK_LINE(985)
	useManifest = true;
	HX_STACK_LINE(986)
	useManifest = true;
	HX_STACK_LINE(987)
	useManifest = true;
	HX_STACK_LINE(988)
	useManifest = true;
	HX_STACK_LINE(989)
	useManifest = true;
	HX_STACK_LINE(990)
	useManifest = true;
	HX_STACK_LINE(991)
	useManifest = true;
	HX_STACK_LINE(992)
	useManifest = true;
	HX_STACK_LINE(993)
	useManifest = true;
	HX_STACK_LINE(994)
	useManifest = true;
	HX_STACK_LINE(995)
	useManifest = true;
	HX_STACK_LINE(996)
	useManifest = true;
	HX_STACK_LINE(997)
	useManifest = true;
	HX_STACK_LINE(998)
	useManifest = true;
	HX_STACK_LINE(999)
	useManifest = true;
	HX_STACK_LINE(1000)
	useManifest = true;
	HX_STACK_LINE(1001)
	useManifest = true;
	HX_STACK_LINE(1002)
	useManifest = true;
	HX_STACK_LINE(1003)
	useManifest = true;
	HX_STACK_LINE(1004)
	useManifest = true;
	HX_STACK_LINE(1005)
	useManifest = true;
	HX_STACK_LINE(1006)
	useManifest = true;
	HX_STACK_LINE(1007)
	useManifest = true;
	HX_STACK_LINE(1008)
	useManifest = true;
	HX_STACK_LINE(1009)
	useManifest = true;
	HX_STACK_LINE(1010)
	useManifest = true;
	HX_STACK_LINE(1011)
	useManifest = true;
	HX_STACK_LINE(1012)
	useManifest = true;
	HX_STACK_LINE(1013)
	useManifest = true;
	HX_STACK_LINE(1014)
	useManifest = true;
	HX_STACK_LINE(1015)
	useManifest = true;
	HX_STACK_LINE(1016)
	useManifest = true;
	HX_STACK_LINE(1017)
	useManifest = true;
	HX_STACK_LINE(1018)
	useManifest = true;
	HX_STACK_LINE(1019)
	useManifest = true;
	HX_STACK_LINE(1020)
	useManifest = true;
	HX_STACK_LINE(1021)
	useManifest = true;
	HX_STACK_LINE(1022)
	useManifest = true;
	HX_STACK_LINE(1023)
	useManifest = true;
	HX_STACK_LINE(1024)
	useManifest = true;
	HX_STACK_LINE(1025)
	useManifest = true;
	HX_STACK_LINE(1026)
	useManifest = true;
	HX_STACK_LINE(1027)
	useManifest = true;
	HX_STACK_LINE(1028)
	useManifest = true;
	HX_STACK_LINE(1029)
	useManifest = true;
	HX_STACK_LINE(1030)
	useManifest = true;
	HX_STACK_LINE(1031)
	useManifest = true;
	HX_STACK_LINE(1032)
	useManifest = true;
	HX_STACK_LINE(1033)
	useManifest = true;
	HX_STACK_LINE(1034)
	useManifest = true;
	HX_STACK_LINE(1035)
	useManifest = true;
	HX_STACK_LINE(1036)
	useManifest = true;
	HX_STACK_LINE(1037)
	useManifest = true;
	HX_STACK_LINE(1038)
	useManifest = true;
	HX_STACK_LINE(1039)
	useManifest = true;
	HX_STACK_LINE(1040)
	useManifest = true;
	HX_STACK_LINE(1041)
	useManifest = true;
	HX_STACK_LINE(1042)
	useManifest = true;
	HX_STACK_LINE(1043)
	useManifest = true;
	HX_STACK_LINE(1044)
	useManifest = true;
	HX_STACK_LINE(1045)
	useManifest = true;
	HX_STACK_LINE(1046)
	useManifest = true;
	HX_STACK_LINE(1047)
	useManifest = true;
	HX_STACK_LINE(1048)
	useManifest = true;
	HX_STACK_LINE(1049)
	useManifest = true;
	HX_STACK_LINE(1050)
	useManifest = true;
	HX_STACK_LINE(1051)
	useManifest = true;
	HX_STACK_LINE(1052)
	useManifest = true;
	HX_STACK_LINE(1053)
	useManifest = true;
	HX_STACK_LINE(1054)
	useManifest = true;
	HX_STACK_LINE(1055)
	useManifest = true;
	HX_STACK_LINE(1056)
	useManifest = true;
	HX_STACK_LINE(1057)
	useManifest = true;
	HX_STACK_LINE(1058)
	useManifest = true;
	HX_STACK_LINE(1059)
	useManifest = true;
	HX_STACK_LINE(1060)
	useManifest = true;
	HX_STACK_LINE(1061)
	useManifest = true;
	HX_STACK_LINE(1062)
	useManifest = true;
	HX_STACK_LINE(1063)
	useManifest = true;
	HX_STACK_LINE(1064)
	useManifest = true;
	HX_STACK_LINE(1065)
	useManifest = true;
	HX_STACK_LINE(1066)
	useManifest = true;
	HX_STACK_LINE(1067)
	useManifest = true;
	HX_STACK_LINE(1068)
	useManifest = true;
	HX_STACK_LINE(1069)
	useManifest = true;
	HX_STACK_LINE(1070)
	useManifest = true;
	HX_STACK_LINE(1071)
	useManifest = true;
	HX_STACK_LINE(1072)
	useManifest = true;
	HX_STACK_LINE(1073)
	useManifest = true;
	HX_STACK_LINE(1074)
	useManifest = true;
	HX_STACK_LINE(1075)
	useManifest = true;
	HX_STACK_LINE(1076)
	useManifest = true;
	HX_STACK_LINE(1077)
	useManifest = true;
	HX_STACK_LINE(1078)
	useManifest = true;
	HX_STACK_LINE(1079)
	useManifest = true;
	HX_STACK_LINE(1080)
	useManifest = true;
	HX_STACK_LINE(1081)
	useManifest = true;
	HX_STACK_LINE(1082)
	useManifest = true;
	HX_STACK_LINE(1083)
	useManifest = true;
	HX_STACK_LINE(1084)
	useManifest = true;
	HX_STACK_LINE(1086)
	this->className->set(HX_CSTRING("fonts/Consolas Bold.ttf"),hx::ClassOf< ::__ASSET__fonts_consolas_bold_ttf >());
	HX_STACK_LINE(1087)
	this->type->set(HX_CSTRING("fonts/Consolas Bold.ttf"),HX_CSTRING("FONT"));
	HX_STACK_LINE(1088)
	useManifest = true;
	HX_STACK_LINE(1089)
	useManifest = true;
	HX_STACK_LINE(1091)
	this->className->set(HX_CSTRING("fonts/MyriadPro-Bold.otf"),hx::ClassOf< ::__ASSET__fonts_myriadpro_bold_otf >());
	HX_STACK_LINE(1092)
	this->type->set(HX_CSTRING("fonts/MyriadPro-Bold.otf"),HX_CSTRING("FONT"));
	HX_STACK_LINE(1093)
	useManifest = true;
	HX_STACK_LINE(1094)
	useManifest = true;
	HX_STACK_LINE(1096)
	this->className->set(HX_CSTRING("fonts/MyriadPro-Regular.otf"),hx::ClassOf< ::__ASSET__fonts_myriadpro_regular_otf >());
	HX_STACK_LINE(1097)
	this->type->set(HX_CSTRING("fonts/MyriadPro-Regular.otf"),HX_CSTRING("FONT"));
	HX_STACK_LINE(1098)
	useManifest = true;
	HX_STACK_LINE(1101)
	if ((useManifest)){
		HX_STACK_LINE(1103)
		this->loadManifest();
		HX_STACK_LINE(1105)
		int _g1 = ::Sys_obj::args()->indexOf(HX_CSTRING("-livereload"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1105)
		if (((_g1 > (int)-1))){
			HX_STACK_LINE(1107)
			Array< ::String > path = Array_obj< ::String >::__new().Add(::sys::FileSystem_obj::fullPath(HX_CSTRING("manifest")));		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(1108)
			Float _g11 = ::sys::FileSystem_obj::stat(path->__get((int)0))->__Field(HX_CSTRING("mtime"),true)->__Field(HX_CSTRING("getTime"),true)();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1108)
			this->lastModified = _g11;
			HX_STACK_LINE(1110)
			::haxe::Timer _g2 = ::haxe::Timer_obj::__new((int)2000);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1110)
			this->timer = _g2;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g,Array< ::String >,path)
			Void run(){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","DefaultAssetLibrary.hx",1111,0x0fc48912)
				{
					HX_STACK_LINE(1113)
					Float modified = ::sys::FileSystem_obj::stat(path->__get((int)0))->__Field(HX_CSTRING("mtime"),true)->__Field(HX_CSTRING("getTime"),true)();		HX_STACK_VAR(modified,"modified");
					HX_STACK_LINE(1115)
					if (((modified > _g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->lastModified))){
						HX_STACK_LINE(1117)
						_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->lastModified = modified;
						HX_STACK_LINE(1118)
						_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->loadManifest();
						HX_STACK_LINE(1120)
						if (((_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->eventCallback != null()))){
							HX_STACK_LINE(1122)
							_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->eventCallback(_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >(),HX_CSTRING("change"));
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(1111)
			this->timer->run =  Dynamic(new _Function_3_1(_g,path));
		}
	}
}
;
	return null();
}

//DefaultAssetLibrary_obj::~DefaultAssetLibrary_obj() { }

Dynamic DefaultAssetLibrary_obj::__CreateEmpty() { return  new DefaultAssetLibrary_obj; }
hx::ObjectPtr< DefaultAssetLibrary_obj > DefaultAssetLibrary_obj::__new()
{  hx::ObjectPtr< DefaultAssetLibrary_obj > result = new DefaultAssetLibrary_obj();
	result->__construct();
	return result;}

Dynamic DefaultAssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultAssetLibrary_obj > result = new DefaultAssetLibrary_obj();
	result->__construct();
	return result;}

bool DefaultAssetLibrary_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("DefaultAssetLibrary","exists",0x972074de,"DefaultAssetLibrary.exists","DefaultAssetLibrary.hx",1144,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1146)
	::String requestedType;		HX_STACK_VAR(requestedType,"requestedType");
	HX_STACK_LINE(1146)
	if (((type != null()))){
		HX_STACK_LINE(1146)
		requestedType = hx::TCast< String >::cast(type);
	}
	else{
		HX_STACK_LINE(1146)
		requestedType = null();
	}
	HX_STACK_LINE(1147)
	::String assetType = this->type->get(id);		HX_STACK_VAR(assetType,"assetType");
	HX_STACK_LINE(1149)
	if (((assetType != null()))){
		HX_STACK_LINE(1151)
		if (((bool((assetType == requestedType)) || bool((bool(((bool((requestedType == HX_CSTRING("SOUND"))) || bool((requestedType == HX_CSTRING("MUSIC")))))) && bool(((bool((assetType == HX_CSTRING("MUSIC"))) || bool((assetType == HX_CSTRING("SOUND"))))))))))){
			HX_STACK_LINE(1153)
			return true;
		}
		HX_STACK_LINE(1171)
		if (((bool((bool((requestedType == HX_CSTRING("BINARY"))) || bool((requestedType == null())))) || bool((bool((assetType == HX_CSTRING("BINARY"))) && bool((requestedType == HX_CSTRING("TEXT")))))))){
			HX_STACK_LINE(1173)
			return true;
		}
	}
	HX_STACK_LINE(1181)
	return false;
}


::lime::audio::AudioBuffer DefaultAssetLibrary_obj::getAudioBuffer( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getAudioBuffer",0xeeb56a82,"DefaultAssetLibrary.getAudioBuffer","DefaultAssetLibrary.hx",1201,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1201)
	if ((this->className->exists(id))){
		HX_STACK_LINE(1201)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1201)
		::lime::utils::ByteArray _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1201)
		_g1 = hx::TCast< lime::utils::ByteArray >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
		HX_STACK_LINE(1201)
		return ::lime::audio::AudioBuffer_obj::fromBytes(_g1);
	}
	else{
		HX_STACK_LINE(1202)
		::String _g2 = this->path->get(id);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1202)
		return ::lime::audio::AudioBuffer_obj::fromFile(_g2);
	}
	HX_STACK_LINE(1201)
	return null();
}


::lime::utils::ByteArray DefaultAssetLibrary_obj::getBytes( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBytes",0x86b4b377,"DefaultAssetLibrary.getBytes","DefaultAssetLibrary.hx",1264,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1264)
	if ((this->className->exists(id))){
		HX_STACK_LINE(1264)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1264)
		return hx::TCast< lime::utils::ByteArray >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(1265)
		::String _g1 = this->path->get(id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1265)
		return ::lime::utils::ByteArray_obj::readFile(_g1);
	}
	HX_STACK_LINE(1264)
	return null();
}


::lime::text::Font DefaultAssetLibrary_obj::getFont( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getFont",0x974ed843,"DefaultAssetLibrary.getFont","DefaultAssetLibrary.hx",1288,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1288)
	if ((this->className->exists(id))){
		HX_STACK_LINE(1290)
		Dynamic fontClass = this->className->get(id);		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(1291)
		return hx::TCast< lime::text::Font >::cast(::Type_obj::createInstance(fontClass,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(1295)
		::String _g = this->path->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1295)
		return ::lime::text::Font_obj::fromFile(_g);
	}
	HX_STACK_LINE(1288)
	return null();
}


::lime::graphics::Image DefaultAssetLibrary_obj::getImage( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getImage",0x8685ca67,"DefaultAssetLibrary.getImage","DefaultAssetLibrary.hx",1316,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1316)
	if ((this->className->exists(id))){
		HX_STACK_LINE(1318)
		Dynamic fontClass = this->className->get(id);		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(1319)
		return hx::TCast< lime::graphics::Image >::cast(::Type_obj::createInstance(fontClass,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(1323)
		::String _g = this->path->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1323)
		return ::lime::graphics::Image_obj::fromFile(_g,null(),null());
	}
	HX_STACK_LINE(1316)
	return null();
}


::String DefaultAssetLibrary_obj::getPath( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getPath",0x9de06019,"DefaultAssetLibrary.getPath","DefaultAssetLibrary.hx",1370,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1370)
	return this->path->get(id);
}


::String DefaultAssetLibrary_obj::getText( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getText",0xa0884721,"DefaultAssetLibrary.getText","DefaultAssetLibrary.hx",1377,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1410)
	::lime::utils::ByteArray bytes = this->getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(1412)
	if (((bytes == null()))){
		HX_STACK_LINE(1414)
		return null();
	}
	else{
		HX_STACK_LINE(1418)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(1412)
	return null();
}


bool DefaultAssetLibrary_obj::isLocal( ::String id,::String type){
	HX_STACK_FRAME("DefaultAssetLibrary","isLocal",0x968237df,"DefaultAssetLibrary.isLocal","DefaultAssetLibrary.hx",1427,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1429)
	::String requestedType;		HX_STACK_VAR(requestedType,"requestedType");
	HX_STACK_LINE(1429)
	if (((type != null()))){
		HX_STACK_LINE(1429)
		requestedType = hx::TCast< String >::cast(type);
	}
	else{
		HX_STACK_LINE(1429)
		requestedType = null();
	}
	HX_STACK_LINE(1441)
	return true;
}


Array< ::String > DefaultAssetLibrary_obj::list( ::String type){
	HX_STACK_FRAME("DefaultAssetLibrary","list",0xf3604ee0,"DefaultAssetLibrary.list","DefaultAssetLibrary.hx",1446,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1448)
	::String requestedType;		HX_STACK_VAR(requestedType,"requestedType");
	HX_STACK_LINE(1448)
	if (((type != null()))){
		HX_STACK_LINE(1448)
		requestedType = hx::TCast< String >::cast(type);
	}
	else{
		HX_STACK_LINE(1448)
		requestedType = null();
	}
	HX_STACK_LINE(1449)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(1451)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->type->keys());  __it->hasNext(); ){
		::String id = __it->next();
		if (((  ((!(((requestedType == null()))))) ? bool(this->exists(id,type)) : bool(true) ))){
			HX_STACK_LINE(1455)
			items->push(id);
		}
;
	}
	HX_STACK_LINE(1461)
	return items;
}


Void DefaultAssetLibrary_obj::loadAudioBuffer( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadAudioBuffer",0xf38e2aae,"DefaultAssetLibrary.loadAudioBuffer","DefaultAssetLibrary.hx",1466,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1486)
		::lime::audio::AudioBuffer _g = this->getAudioBuffer(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1486)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadBytes",0x8c71caa3,"DefaultAssetLibrary.loadBytes","DefaultAssetLibrary.hx",1493,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1519)
		::lime::utils::ByteArray _g = this->getBytes(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1519)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadImage( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadImage",0x8c42e193,"DefaultAssetLibrary.loadImage","DefaultAssetLibrary.hx",1526,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1549)
		::lime::graphics::Image _g = this->getImage(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1549)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadManifest( ){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadManifest",0x6f596c77,"DefaultAssetLibrary.loadManifest","DefaultAssetLibrary.hx",1559,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1559)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1572)
			::lime::utils::ByteArray bytes = ::lime::utils::ByteArray_obj::readFile(HX_CSTRING("manifest"));		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(1575)
			if (((bytes != null()))){
				HX_STACK_LINE(1577)
				bytes->position = (int)0;
				HX_STACK_LINE(1579)
				if (((bytes->length > (int)0))){
					HX_STACK_LINE(1581)
					::String data = bytes->readUTFBytes(bytes->length);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(1583)
					if (((bool((data != null())) && bool((data.length > (int)0))))){
						HX_STACK_LINE(1585)
						Dynamic manifest = ::haxe::Unserializer_obj::run(data);		HX_STACK_VAR(manifest,"manifest");
						HX_STACK_LINE(1587)
						{
							HX_STACK_LINE(1587)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1587)
							while((true)){
								HX_STACK_LINE(1587)
								if ((!(((_g < manifest->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(1587)
									break;
								}
								HX_STACK_LINE(1587)
								Dynamic asset = manifest->__GetItem(_g);		HX_STACK_VAR(asset,"asset");
								HX_STACK_LINE(1587)
								++(_g);
								struct _Function_7_1{
									inline static bool Block( hx::ObjectPtr< ::DefaultAssetLibrary_obj > __this,Dynamic &asset){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","DefaultAssetLibrary.hx",1589,0x0fc48912)
										{
											HX_STACK_LINE(1589)
											::String key = asset->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
											HX_STACK_LINE(1589)
											return __this->className->exists(key);
										}
										return null();
									}
								};
								HX_STACK_LINE(1589)
								if ((!(_Function_7_1::Block(this,asset)))){
									HX_STACK_LINE(1594)
									{
										HX_STACK_LINE(1594)
										::String key = asset->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(1594)
										::String value = asset->__Field(HX_CSTRING("path"),true);		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(1594)
										this->path->set(key,value);
									}
									HX_STACK_LINE(1596)
									{
										HX_STACK_LINE(1596)
										::String key = asset->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(1596)
										::String value;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(1596)
										value = hx::TCast< String >::cast(asset->__Field(HX_CSTRING("type"),true));
										HX_STACK_LINE(1596)
										this->type->set(key,value);
									}
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1608)
				::haxe::Log_obj::trace(HX_CSTRING("Warning: Could not load asset manifest (bytes was null)"),hx::SourceInfo(HX_CSTRING("DefaultAssetLibrary.hx"),1608,HX_CSTRING("DefaultAssetLibrary"),HX_CSTRING("loadManifest")));
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(1614)
					::String _g = ::Std_obj::string(e);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1614)
					::String _g1 = (HX_CSTRING("Warning: Could not load asset manifest (") + _g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1614)
					::String _g2 = (_g1 + HX_CSTRING(")"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1614)
					::haxe::Log_obj::trace(_g2,hx::SourceInfo(HX_CSTRING("DefaultAssetLibrary.hx"),1614,HX_CSTRING("DefaultAssetLibrary"),HX_CSTRING("loadManifest")));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultAssetLibrary_obj,loadManifest,(void))

Void DefaultAssetLibrary_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadText",0x26df3975,"DefaultAssetLibrary.loadText","DefaultAssetLibrary.hx",1651,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1651)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,handler1)
		Void run(::lime::utils::ByteArray bytes){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",1675,0x0fc48912)
			HX_STACK_ARG(bytes,"bytes")
			{
				HX_STACK_LINE(1675)
				if (((bytes == null()))){
					HX_STACK_LINE(1677)
					handler1->__GetItem((int)0)(null()).Cast< Void >();
				}
				else{
					HX_STACK_LINE(1681)
					::String _g = bytes->readUTFBytes(bytes->length);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1681)
					handler1->__GetItem((int)0)(_g).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1673)
		Dynamic callback =  Dynamic(new _Function_1_1(handler1));		HX_STACK_VAR(callback,"callback");
		HX_STACK_LINE(1687)
		this->loadBytes(id,callback);
	}
return null();
}



DefaultAssetLibrary_obj::DefaultAssetLibrary_obj()
{
}

void DefaultAssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultAssetLibrary);
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(lastModified,"lastModified");
	HX_MARK_MEMBER_NAME(timer,"timer");
	::lime::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultAssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(lastModified,"lastModified");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	::lime::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultAssetLibrary_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return getImage_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { return lastModified; }
		if (HX_FIELD_EQ(inName,"loadManifest") ) { return loadManifest_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return getAudioBuffer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return loadAudioBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultAssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { lastModified=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultAssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("className"));
	outFields->push(HX_CSTRING("path"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("lastModified"));
	outFields->push(HX_CSTRING("timer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,className),HX_CSTRING("className")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,path),HX_CSTRING("path")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,type),HX_CSTRING("type")},
	{hx::fsFloat,(int)offsetof(DefaultAssetLibrary_obj,lastModified),HX_CSTRING("lastModified")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(DefaultAssetLibrary_obj,timer),HX_CSTRING("timer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("className"),
	HX_CSTRING("path"),
	HX_CSTRING("type"),
	HX_CSTRING("lastModified"),
	HX_CSTRING("timer"),
	HX_CSTRING("exists"),
	HX_CSTRING("getAudioBuffer"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getImage"),
	HX_CSTRING("getPath"),
	HX_CSTRING("getText"),
	HX_CSTRING("isLocal"),
	HX_CSTRING("list"),
	HX_CSTRING("loadAudioBuffer"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("loadImage"),
	HX_CSTRING("loadManifest"),
	HX_CSTRING("loadText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#endif

Class DefaultAssetLibrary_obj::__mClass;

void DefaultAssetLibrary_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DefaultAssetLibrary"), hx::TCanCast< DefaultAssetLibrary_obj> ,sStaticFields,sMemberFields,
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

void DefaultAssetLibrary_obj::__boot()
{
}

