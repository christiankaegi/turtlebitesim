#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoLineCap_CairoLineCap_Impl_
#include <lime/graphics/cairo/_CairoLineCap/CairoLineCap_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoLineCap{

Void CairoLineCap_Impl__obj::__construct()
{
	return null();
}

//CairoLineCap_Impl__obj::~CairoLineCap_Impl__obj() { }

Dynamic CairoLineCap_Impl__obj::__CreateEmpty() { return  new CairoLineCap_Impl__obj; }
hx::ObjectPtr< CairoLineCap_Impl__obj > CairoLineCap_Impl__obj::__new()
{  hx::ObjectPtr< CairoLineCap_Impl__obj > result = new CairoLineCap_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoLineCap_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoLineCap_Impl__obj > result = new CairoLineCap_Impl__obj();
	result->__construct();
	return result;}

int CairoLineCap_Impl__obj::BUTT;

int CairoLineCap_Impl__obj::ROUND;

int CairoLineCap_Impl__obj::SQUARE;


CairoLineCap_Impl__obj::CairoLineCap_Impl__obj()
{
}

Dynamic CairoLineCap_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CairoLineCap_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoLineCap_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BUTT"),
	HX_CSTRING("ROUND"),
	HX_CSTRING("SQUARE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoLineCap_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoLineCap_Impl__obj::BUTT,"BUTT");
	HX_MARK_MEMBER_NAME(CairoLineCap_Impl__obj::ROUND,"ROUND");
	HX_MARK_MEMBER_NAME(CairoLineCap_Impl__obj::SQUARE,"SQUARE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoLineCap_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoLineCap_Impl__obj::BUTT,"BUTT");
	HX_VISIT_MEMBER_NAME(CairoLineCap_Impl__obj::ROUND,"ROUND");
	HX_VISIT_MEMBER_NAME(CairoLineCap_Impl__obj::SQUARE,"SQUARE");
};

#endif

Class CairoLineCap_Impl__obj::__mClass;

void CairoLineCap_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoLineCap.CairoLineCap_Impl_"), hx::TCanCast< CairoLineCap_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoLineCap_Impl__obj::__boot()
{
	BUTT= (int)0;
	ROUND= (int)1;
	SQUARE= (int)2;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoLineCap
