#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoFillRule_CairoFillRule_Impl_
#include <lime/graphics/cairo/_CairoFillRule/CairoFillRule_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFillRule{

Void CairoFillRule_Impl__obj::__construct()
{
	return null();
}

//CairoFillRule_Impl__obj::~CairoFillRule_Impl__obj() { }

Dynamic CairoFillRule_Impl__obj::__CreateEmpty() { return  new CairoFillRule_Impl__obj; }
hx::ObjectPtr< CairoFillRule_Impl__obj > CairoFillRule_Impl__obj::__new()
{  hx::ObjectPtr< CairoFillRule_Impl__obj > result = new CairoFillRule_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoFillRule_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoFillRule_Impl__obj > result = new CairoFillRule_Impl__obj();
	result->__construct();
	return result;}

int CairoFillRule_Impl__obj::WINDING;

int CairoFillRule_Impl__obj::EVEN_ODD;


CairoFillRule_Impl__obj::CairoFillRule_Impl__obj()
{
}

Dynamic CairoFillRule_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CairoFillRule_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoFillRule_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("WINDING"),
	HX_CSTRING("EVEN_ODD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFillRule_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoFillRule_Impl__obj::WINDING,"WINDING");
	HX_MARK_MEMBER_NAME(CairoFillRule_Impl__obj::EVEN_ODD,"EVEN_ODD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFillRule_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoFillRule_Impl__obj::WINDING,"WINDING");
	HX_VISIT_MEMBER_NAME(CairoFillRule_Impl__obj::EVEN_ODD,"EVEN_ODD");
};

#endif

Class CairoFillRule_Impl__obj::__mClass;

void CairoFillRule_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoFillRule.CairoFillRule_Impl_"), hx::TCanCast< CairoFillRule_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoFillRule_Impl__obj::__boot()
{
	WINDING= (int)0;
	EVEN_ODD= (int)1;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFillRule
