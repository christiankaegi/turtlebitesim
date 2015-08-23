#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoContent_CairoContent_Impl_
#include <lime/graphics/cairo/_CairoContent/CairoContent_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoContent{

Void CairoContent_Impl__obj::__construct()
{
	return null();
}

//CairoContent_Impl__obj::~CairoContent_Impl__obj() { }

Dynamic CairoContent_Impl__obj::__CreateEmpty() { return  new CairoContent_Impl__obj; }
hx::ObjectPtr< CairoContent_Impl__obj > CairoContent_Impl__obj::__new()
{  hx::ObjectPtr< CairoContent_Impl__obj > result = new CairoContent_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoContent_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoContent_Impl__obj > result = new CairoContent_Impl__obj();
	result->__construct();
	return result;}

int CairoContent_Impl__obj::COLOR;

int CairoContent_Impl__obj::ALPHA;

int CairoContent_Impl__obj::COLOR_ALPHA;


CairoContent_Impl__obj::CairoContent_Impl__obj()
{
}

Dynamic CairoContent_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CairoContent_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoContent_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("COLOR"),
	HX_CSTRING("ALPHA"),
	HX_CSTRING("COLOR_ALPHA"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoContent_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoContent_Impl__obj::COLOR,"COLOR");
	HX_MARK_MEMBER_NAME(CairoContent_Impl__obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(CairoContent_Impl__obj::COLOR_ALPHA,"COLOR_ALPHA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoContent_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoContent_Impl__obj::COLOR,"COLOR");
	HX_VISIT_MEMBER_NAME(CairoContent_Impl__obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(CairoContent_Impl__obj::COLOR_ALPHA,"COLOR_ALPHA");
};

#endif

Class CairoContent_Impl__obj::__mClass;

void CairoContent_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoContent.CairoContent_Impl_"), hx::TCanCast< CairoContent_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoContent_Impl__obj::__boot()
{
	COLOR= (int)4096;
	ALPHA= (int)8192;
	COLOR_ALPHA= (int)12288;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoContent
