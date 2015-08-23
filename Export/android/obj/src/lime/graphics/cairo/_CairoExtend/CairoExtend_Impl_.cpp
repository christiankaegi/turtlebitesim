#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoExtend_CairoExtend_Impl_
#include <lime/graphics/cairo/_CairoExtend/CairoExtend_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoExtend{

Void CairoExtend_Impl__obj::__construct()
{
	return null();
}

//CairoExtend_Impl__obj::~CairoExtend_Impl__obj() { }

Dynamic CairoExtend_Impl__obj::__CreateEmpty() { return  new CairoExtend_Impl__obj; }
hx::ObjectPtr< CairoExtend_Impl__obj > CairoExtend_Impl__obj::__new()
{  hx::ObjectPtr< CairoExtend_Impl__obj > result = new CairoExtend_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoExtend_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoExtend_Impl__obj > result = new CairoExtend_Impl__obj();
	result->__construct();
	return result;}

int CairoExtend_Impl__obj::NONE;

int CairoExtend_Impl__obj::REPEAT;

int CairoExtend_Impl__obj::REFLECT;

int CairoExtend_Impl__obj::PAD;


CairoExtend_Impl__obj::CairoExtend_Impl__obj()
{
}

Dynamic CairoExtend_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CairoExtend_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoExtend_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NONE"),
	HX_CSTRING("REPEAT"),
	HX_CSTRING("REFLECT"),
	HX_CSTRING("PAD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoExtend_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoExtend_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(CairoExtend_Impl__obj::REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(CairoExtend_Impl__obj::REFLECT,"REFLECT");
	HX_MARK_MEMBER_NAME(CairoExtend_Impl__obj::PAD,"PAD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoExtend_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoExtend_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(CairoExtend_Impl__obj::REPEAT,"REPEAT");
	HX_VISIT_MEMBER_NAME(CairoExtend_Impl__obj::REFLECT,"REFLECT");
	HX_VISIT_MEMBER_NAME(CairoExtend_Impl__obj::PAD,"PAD");
};

#endif

Class CairoExtend_Impl__obj::__mClass;

void CairoExtend_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoExtend.CairoExtend_Impl_"), hx::TCanCast< CairoExtend_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoExtend_Impl__obj::__boot()
{
	NONE= (int)0;
	REPEAT= (int)1;
	REFLECT= (int)2;
	PAD= (int)3;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoExtend
