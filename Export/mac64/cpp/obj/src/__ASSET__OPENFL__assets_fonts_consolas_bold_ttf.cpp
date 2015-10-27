#include <hxcpp.h>

#ifndef INCLUDED___ASSET__OPENFL__assets_fonts_consolas_bold_ttf
#include <__ASSET__OPENFL__assets_fonts_consolas_bold_ttf.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif

Void __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__construct()
{
HX_STACK_FRAME("__ASSET__OPENFL__assets_fonts_consolas_bold_ttf","new",0x1d98c786,"__ASSET__OPENFL__assets_fonts_consolas_bold_ttf.new","DefaultAssetLibrary.hx",2015,0x0fc48912)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(2015)
	this->__fontPath = HX_CSTRING("assets/fonts/Consolas Bold.ttf");
	HX_STACK_LINE(2015)
	this->name = HX_CSTRING("Consolas Bold");
	HX_STACK_LINE(2015)
	super::__construct(null());
}
;
	return null();
}

//__ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::~__ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj() { }

Dynamic __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__CreateEmpty() { return  new __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj; }
hx::ObjectPtr< __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj > __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__new()
{  hx::ObjectPtr< __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj > result = new __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj();
	result->__construct();
	return result;}

Dynamic __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj > result = new __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj();
	result->__construct();
	return result;}


__ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj()
{
}

Dynamic __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__mClass,"__mClass");
};

#endif

Class __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__mClass;

void __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("__ASSET__OPENFL__assets_fonts_consolas_bold_ttf"), hx::TCanCast< __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj> ,sStaticFields,sMemberFields,
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

void __ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__boot()
{
}

