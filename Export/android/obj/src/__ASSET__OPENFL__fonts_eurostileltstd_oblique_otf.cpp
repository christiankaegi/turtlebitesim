#include <hxcpp.h>

#ifndef INCLUDED___ASSET__OPENFL__fonts_eurostileltstd_oblique_otf
#include <__ASSET__OPENFL__fonts_eurostileltstd_oblique_otf.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontStyle
#include <openfl/_legacy/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
#endif

Void __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::__construct()
{
HX_STACK_FRAME("__ASSET__OPENFL__fonts_eurostileltstd_oblique_otf","new",0x9d90f168,"__ASSET__OPENFL__fonts_eurostileltstd_oblique_otf.new","DefaultAssetLibrary.hx",1685,0x0fc48912)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1685)
	this->__fontPath = HX_CSTRING("fonts/EurostileLTStd-Oblique.otf");
	HX_STACK_LINE(1685)
	this->set_name(HX_CSTRING("Eurostile LT Std Oblique"));
	HX_STACK_LINE(1685)
	super::__construct(null(),null(),null());
}
;
	return null();
}

//__ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::~__ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj() { }

Dynamic __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::__CreateEmpty() { return  new __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj; }
hx::ObjectPtr< __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj > __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::__new()
{  hx::ObjectPtr< __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj > result = new __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj();
	result->__construct();
	return result;}

Dynamic __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj > result = new __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj();
	result->__construct();
	return result;}


__ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::__ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj()
{
}

Dynamic __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(__ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::__mClass,"__mClass");
};

#endif

Class __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::__mClass;

void __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("__ASSET__OPENFL__fonts_eurostileltstd_oblique_otf"), hx::TCanCast< __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj> ,sStaticFields,sMemberFields,
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

void __ASSET__OPENFL__fonts_eurostileltstd_oblique_otf_obj::__boot()
{
}

