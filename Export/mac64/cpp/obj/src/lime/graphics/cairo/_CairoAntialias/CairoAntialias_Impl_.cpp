#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoAntialias_CairoAntialias_Impl_
#include <lime/graphics/cairo/_CairoAntialias/CairoAntialias_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoAntialias{

Void CairoAntialias_Impl__obj::__construct()
{
	return null();
}

//CairoAntialias_Impl__obj::~CairoAntialias_Impl__obj() { }

Dynamic CairoAntialias_Impl__obj::__CreateEmpty() { return  new CairoAntialias_Impl__obj; }
hx::ObjectPtr< CairoAntialias_Impl__obj > CairoAntialias_Impl__obj::__new()
{  hx::ObjectPtr< CairoAntialias_Impl__obj > result = new CairoAntialias_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoAntialias_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoAntialias_Impl__obj > result = new CairoAntialias_Impl__obj();
	result->__construct();
	return result;}

int CairoAntialias_Impl__obj::DEFAULT;

int CairoAntialias_Impl__obj::NONE;

int CairoAntialias_Impl__obj::GRAY;

int CairoAntialias_Impl__obj::SUBPIXEL;

int CairoAntialias_Impl__obj::FAST;

int CairoAntialias_Impl__obj::GOOD;

int CairoAntialias_Impl__obj::BEST;


CairoAntialias_Impl__obj::CairoAntialias_Impl__obj()
{
}

Dynamic CairoAntialias_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CairoAntialias_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoAntialias_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT"),
	HX_CSTRING("NONE"),
	HX_CSTRING("GRAY"),
	HX_CSTRING("SUBPIXEL"),
	HX_CSTRING("FAST"),
	HX_CSTRING("GOOD"),
	HX_CSTRING("BEST"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoAntialias_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoAntialias_Impl__obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(CairoAntialias_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(CairoAntialias_Impl__obj::GRAY,"GRAY");
	HX_MARK_MEMBER_NAME(CairoAntialias_Impl__obj::SUBPIXEL,"SUBPIXEL");
	HX_MARK_MEMBER_NAME(CairoAntialias_Impl__obj::FAST,"FAST");
	HX_MARK_MEMBER_NAME(CairoAntialias_Impl__obj::GOOD,"GOOD");
	HX_MARK_MEMBER_NAME(CairoAntialias_Impl__obj::BEST,"BEST");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoAntialias_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoAntialias_Impl__obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(CairoAntialias_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(CairoAntialias_Impl__obj::GRAY,"GRAY");
	HX_VISIT_MEMBER_NAME(CairoAntialias_Impl__obj::SUBPIXEL,"SUBPIXEL");
	HX_VISIT_MEMBER_NAME(CairoAntialias_Impl__obj::FAST,"FAST");
	HX_VISIT_MEMBER_NAME(CairoAntialias_Impl__obj::GOOD,"GOOD");
	HX_VISIT_MEMBER_NAME(CairoAntialias_Impl__obj::BEST,"BEST");
};

#endif

Class CairoAntialias_Impl__obj::__mClass;

void CairoAntialias_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoAntialias.CairoAntialias_Impl_"), hx::TCanCast< CairoAntialias_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoAntialias_Impl__obj::__boot()
{
	DEFAULT= (int)0;
	NONE= (int)1;
	GRAY= (int)2;
	SUBPIXEL= (int)3;
	FAST= (int)4;
	GOOD= (int)5;
	BEST= (int)6;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoAntialias
