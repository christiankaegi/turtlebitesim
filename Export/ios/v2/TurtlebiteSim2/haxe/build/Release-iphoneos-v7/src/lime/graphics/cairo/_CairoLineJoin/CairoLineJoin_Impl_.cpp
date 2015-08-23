#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoLineJoin_CairoLineJoin_Impl_
#include <lime/graphics/cairo/_CairoLineJoin/CairoLineJoin_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoLineJoin{

Void CairoLineJoin_Impl__obj::__construct()
{
	return null();
}

//CairoLineJoin_Impl__obj::~CairoLineJoin_Impl__obj() { }

Dynamic CairoLineJoin_Impl__obj::__CreateEmpty() { return  new CairoLineJoin_Impl__obj; }
hx::ObjectPtr< CairoLineJoin_Impl__obj > CairoLineJoin_Impl__obj::__new()
{  hx::ObjectPtr< CairoLineJoin_Impl__obj > result = new CairoLineJoin_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoLineJoin_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoLineJoin_Impl__obj > result = new CairoLineJoin_Impl__obj();
	result->__construct();
	return result;}

int CairoLineJoin_Impl__obj::MITER;

int CairoLineJoin_Impl__obj::ROUND;

int CairoLineJoin_Impl__obj::BEVEL;


CairoLineJoin_Impl__obj::CairoLineJoin_Impl__obj()
{
}

Dynamic CairoLineJoin_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CairoLineJoin_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoLineJoin_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MITER"),
	HX_CSTRING("ROUND"),
	HX_CSTRING("BEVEL"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoLineJoin_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoLineJoin_Impl__obj::MITER,"MITER");
	HX_MARK_MEMBER_NAME(CairoLineJoin_Impl__obj::ROUND,"ROUND");
	HX_MARK_MEMBER_NAME(CairoLineJoin_Impl__obj::BEVEL,"BEVEL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoLineJoin_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoLineJoin_Impl__obj::MITER,"MITER");
	HX_VISIT_MEMBER_NAME(CairoLineJoin_Impl__obj::ROUND,"ROUND");
	HX_VISIT_MEMBER_NAME(CairoLineJoin_Impl__obj::BEVEL,"BEVEL");
};

#endif

Class CairoLineJoin_Impl__obj::__mClass;

void CairoLineJoin_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoLineJoin.CairoLineJoin_Impl_"), hx::TCanCast< CairoLineJoin_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoLineJoin_Impl__obj::__boot()
{
	MITER= (int)0;
	ROUND= (int)1;
	BEVEL= (int)2;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoLineJoin
