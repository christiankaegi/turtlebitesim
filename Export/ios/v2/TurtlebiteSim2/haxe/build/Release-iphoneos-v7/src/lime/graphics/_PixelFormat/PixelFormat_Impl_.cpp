#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics__PixelFormat_PixelFormat_Impl_
#include <lime/graphics/_PixelFormat/PixelFormat_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace _PixelFormat{

Void PixelFormat_Impl__obj::__construct()
{
	return null();
}

//PixelFormat_Impl__obj::~PixelFormat_Impl__obj() { }

Dynamic PixelFormat_Impl__obj::__CreateEmpty() { return  new PixelFormat_Impl__obj; }
hx::ObjectPtr< PixelFormat_Impl__obj > PixelFormat_Impl__obj::__new()
{  hx::ObjectPtr< PixelFormat_Impl__obj > result = new PixelFormat_Impl__obj();
	result->__construct();
	return result;}

Dynamic PixelFormat_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PixelFormat_Impl__obj > result = new PixelFormat_Impl__obj();
	result->__construct();
	return result;}

int PixelFormat_Impl__obj::RGBA;

int PixelFormat_Impl__obj::ARGB;

int PixelFormat_Impl__obj::BGRA;


PixelFormat_Impl__obj::PixelFormat_Impl__obj()
{
}

Dynamic PixelFormat_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic PixelFormat_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PixelFormat_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("RGBA"),
	HX_CSTRING("ARGB"),
	HX_CSTRING("BGRA"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PixelFormat_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PixelFormat_Impl__obj::RGBA,"RGBA");
	HX_MARK_MEMBER_NAME(PixelFormat_Impl__obj::ARGB,"ARGB");
	HX_MARK_MEMBER_NAME(PixelFormat_Impl__obj::BGRA,"BGRA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PixelFormat_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PixelFormat_Impl__obj::RGBA,"RGBA");
	HX_VISIT_MEMBER_NAME(PixelFormat_Impl__obj::ARGB,"ARGB");
	HX_VISIT_MEMBER_NAME(PixelFormat_Impl__obj::BGRA,"BGRA");
};

#endif

Class PixelFormat_Impl__obj::__mClass;

void PixelFormat_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics._PixelFormat.PixelFormat_Impl_"), hx::TCanCast< PixelFormat_Impl__obj> ,sStaticFields,sMemberFields,
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

void PixelFormat_Impl__obj::__boot()
{
	RGBA= (int)0;
	ARGB= (int)1;
	BGRA= (int)2;
}

} // end namespace lime
} // end namespace graphics
} // end namespace _PixelFormat
