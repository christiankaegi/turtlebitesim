#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoFormat_CairoFormat_Impl_
#include <lime/graphics/cairo/_CairoFormat/CairoFormat_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFormat{

Void CairoFormat_Impl__obj::__construct()
{
	return null();
}

//CairoFormat_Impl__obj::~CairoFormat_Impl__obj() { }

Dynamic CairoFormat_Impl__obj::__CreateEmpty() { return  new CairoFormat_Impl__obj; }
hx::ObjectPtr< CairoFormat_Impl__obj > CairoFormat_Impl__obj::__new()
{  hx::ObjectPtr< CairoFormat_Impl__obj > result = new CairoFormat_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoFormat_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoFormat_Impl__obj > result = new CairoFormat_Impl__obj();
	result->__construct();
	return result;}

int CairoFormat_Impl__obj::INVALID;

int CairoFormat_Impl__obj::ARGB32;

int CairoFormat_Impl__obj::RGB24;

int CairoFormat_Impl__obj::A8;

int CairoFormat_Impl__obj::A1;

int CairoFormat_Impl__obj::RGB16_565;

int CairoFormat_Impl__obj::RGB30;


CairoFormat_Impl__obj::CairoFormat_Impl__obj()
{
}

Dynamic CairoFormat_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CairoFormat_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoFormat_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("INVALID"),
	HX_CSTRING("ARGB32"),
	HX_CSTRING("RGB24"),
	HX_CSTRING("A8"),
	HX_CSTRING("A1"),
	HX_CSTRING("RGB16_565"),
	HX_CSTRING("RGB30"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFormat_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoFormat_Impl__obj::INVALID,"INVALID");
	HX_MARK_MEMBER_NAME(CairoFormat_Impl__obj::ARGB32,"ARGB32");
	HX_MARK_MEMBER_NAME(CairoFormat_Impl__obj::RGB24,"RGB24");
	HX_MARK_MEMBER_NAME(CairoFormat_Impl__obj::A8,"A8");
	HX_MARK_MEMBER_NAME(CairoFormat_Impl__obj::A1,"A1");
	HX_MARK_MEMBER_NAME(CairoFormat_Impl__obj::RGB16_565,"RGB16_565");
	HX_MARK_MEMBER_NAME(CairoFormat_Impl__obj::RGB30,"RGB30");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFormat_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoFormat_Impl__obj::INVALID,"INVALID");
	HX_VISIT_MEMBER_NAME(CairoFormat_Impl__obj::ARGB32,"ARGB32");
	HX_VISIT_MEMBER_NAME(CairoFormat_Impl__obj::RGB24,"RGB24");
	HX_VISIT_MEMBER_NAME(CairoFormat_Impl__obj::A8,"A8");
	HX_VISIT_MEMBER_NAME(CairoFormat_Impl__obj::A1,"A1");
	HX_VISIT_MEMBER_NAME(CairoFormat_Impl__obj::RGB16_565,"RGB16_565");
	HX_VISIT_MEMBER_NAME(CairoFormat_Impl__obj::RGB30,"RGB30");
};

#endif

Class CairoFormat_Impl__obj::__mClass;

void CairoFormat_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoFormat.CairoFormat_Impl_"), hx::TCanCast< CairoFormat_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoFormat_Impl__obj::__boot()
{
	INVALID= (int)-1;
	ARGB32= (int)0;
	RGB24= (int)1;
	A8= (int)2;
	A1= (int)3;
	RGB16_565= (int)4;
	RGB30= (int)5;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFormat
