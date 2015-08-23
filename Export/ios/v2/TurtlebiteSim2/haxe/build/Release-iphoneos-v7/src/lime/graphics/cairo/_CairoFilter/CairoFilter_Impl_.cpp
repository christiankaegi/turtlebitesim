#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoFilter_CairoFilter_Impl_
#include <lime/graphics/cairo/_CairoFilter/CairoFilter_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFilter{

Void CairoFilter_Impl__obj::__construct()
{
	return null();
}

//CairoFilter_Impl__obj::~CairoFilter_Impl__obj() { }

Dynamic CairoFilter_Impl__obj::__CreateEmpty() { return  new CairoFilter_Impl__obj; }
hx::ObjectPtr< CairoFilter_Impl__obj > CairoFilter_Impl__obj::__new()
{  hx::ObjectPtr< CairoFilter_Impl__obj > result = new CairoFilter_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoFilter_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoFilter_Impl__obj > result = new CairoFilter_Impl__obj();
	result->__construct();
	return result;}

int CairoFilter_Impl__obj::FAST;

int CairoFilter_Impl__obj::GOOD;

int CairoFilter_Impl__obj::BEST;

int CairoFilter_Impl__obj::NEAREST;

int CairoFilter_Impl__obj::BILINEAR;

int CairoFilter_Impl__obj::GAUSSIAN;


CairoFilter_Impl__obj::CairoFilter_Impl__obj()
{
}

Dynamic CairoFilter_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CairoFilter_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoFilter_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FAST"),
	HX_CSTRING("GOOD"),
	HX_CSTRING("BEST"),
	HX_CSTRING("NEAREST"),
	HX_CSTRING("BILINEAR"),
	HX_CSTRING("GAUSSIAN"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFilter_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoFilter_Impl__obj::FAST,"FAST");
	HX_MARK_MEMBER_NAME(CairoFilter_Impl__obj::GOOD,"GOOD");
	HX_MARK_MEMBER_NAME(CairoFilter_Impl__obj::BEST,"BEST");
	HX_MARK_MEMBER_NAME(CairoFilter_Impl__obj::NEAREST,"NEAREST");
	HX_MARK_MEMBER_NAME(CairoFilter_Impl__obj::BILINEAR,"BILINEAR");
	HX_MARK_MEMBER_NAME(CairoFilter_Impl__obj::GAUSSIAN,"GAUSSIAN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFilter_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoFilter_Impl__obj::FAST,"FAST");
	HX_VISIT_MEMBER_NAME(CairoFilter_Impl__obj::GOOD,"GOOD");
	HX_VISIT_MEMBER_NAME(CairoFilter_Impl__obj::BEST,"BEST");
	HX_VISIT_MEMBER_NAME(CairoFilter_Impl__obj::NEAREST,"NEAREST");
	HX_VISIT_MEMBER_NAME(CairoFilter_Impl__obj::BILINEAR,"BILINEAR");
	HX_VISIT_MEMBER_NAME(CairoFilter_Impl__obj::GAUSSIAN,"GAUSSIAN");
};

#endif

Class CairoFilter_Impl__obj::__mClass;

void CairoFilter_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoFilter.CairoFilter_Impl_"), hx::TCanCast< CairoFilter_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoFilter_Impl__obj::__boot()
{
	FAST= (int)0;
	GOOD= (int)1;
	BEST= (int)2;
	NEAREST= (int)3;
	BILINEAR= (int)4;
	GAUSSIAN= (int)5;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFilter
