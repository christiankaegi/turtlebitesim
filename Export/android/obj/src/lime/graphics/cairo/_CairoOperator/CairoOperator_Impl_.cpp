#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoOperator_CairoOperator_Impl_
#include <lime/graphics/cairo/_CairoOperator/CairoOperator_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoOperator{

Void CairoOperator_Impl__obj::__construct()
{
	return null();
}

//CairoOperator_Impl__obj::~CairoOperator_Impl__obj() { }

Dynamic CairoOperator_Impl__obj::__CreateEmpty() { return  new CairoOperator_Impl__obj; }
hx::ObjectPtr< CairoOperator_Impl__obj > CairoOperator_Impl__obj::__new()
{  hx::ObjectPtr< CairoOperator_Impl__obj > result = new CairoOperator_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoOperator_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoOperator_Impl__obj > result = new CairoOperator_Impl__obj();
	result->__construct();
	return result;}

int CairoOperator_Impl__obj::CLEAR;

int CairoOperator_Impl__obj::SOURCE;

int CairoOperator_Impl__obj::OVER;

int CairoOperator_Impl__obj::IN;

int CairoOperator_Impl__obj::OUT;

int CairoOperator_Impl__obj::ATOP;

int CairoOperator_Impl__obj::DEST;

int CairoOperator_Impl__obj::DEST_OVER;

int CairoOperator_Impl__obj::DEST_IN;

int CairoOperator_Impl__obj::DEST_OUT;

int CairoOperator_Impl__obj::DEST_ATOP;

int CairoOperator_Impl__obj::XOR;

int CairoOperator_Impl__obj::ADD;

int CairoOperator_Impl__obj::SATURATE;

int CairoOperator_Impl__obj::MULTIPLY;

int CairoOperator_Impl__obj::SCREEN;

int CairoOperator_Impl__obj::OVERLAY;

int CairoOperator_Impl__obj::DARKEN;

int CairoOperator_Impl__obj::LIGHTEN;

int CairoOperator_Impl__obj::COLOR_DODGE;

int CairoOperator_Impl__obj::COLOR_BURN;

int CairoOperator_Impl__obj::HARD_LIGHT;

int CairoOperator_Impl__obj::SOFT_LIGHT;

int CairoOperator_Impl__obj::DIFFERENCE;

int CairoOperator_Impl__obj::EXCLUSION;

int CairoOperator_Impl__obj::HSL_HUE;

int CairoOperator_Impl__obj::HSL_SATURATION;

int CairoOperator_Impl__obj::HSL_COLOR;

int CairoOperator_Impl__obj::HSL_LUMINOSITY;


CairoOperator_Impl__obj::CairoOperator_Impl__obj()
{
}

Dynamic CairoOperator_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CairoOperator_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoOperator_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLEAR"),
	HX_CSTRING("SOURCE"),
	HX_CSTRING("OVER"),
	HX_CSTRING("IN"),
	HX_CSTRING("OUT"),
	HX_CSTRING("ATOP"),
	HX_CSTRING("DEST"),
	HX_CSTRING("DEST_OVER"),
	HX_CSTRING("DEST_IN"),
	HX_CSTRING("DEST_OUT"),
	HX_CSTRING("DEST_ATOP"),
	HX_CSTRING("XOR"),
	HX_CSTRING("ADD"),
	HX_CSTRING("SATURATE"),
	HX_CSTRING("MULTIPLY"),
	HX_CSTRING("SCREEN"),
	HX_CSTRING("OVERLAY"),
	HX_CSTRING("DARKEN"),
	HX_CSTRING("LIGHTEN"),
	HX_CSTRING("COLOR_DODGE"),
	HX_CSTRING("COLOR_BURN"),
	HX_CSTRING("HARD_LIGHT"),
	HX_CSTRING("SOFT_LIGHT"),
	HX_CSTRING("DIFFERENCE"),
	HX_CSTRING("EXCLUSION"),
	HX_CSTRING("HSL_HUE"),
	HX_CSTRING("HSL_SATURATION"),
	HX_CSTRING("HSL_COLOR"),
	HX_CSTRING("HSL_LUMINOSITY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::CLEAR,"CLEAR");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::SOURCE,"SOURCE");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::OVER,"OVER");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::IN,"IN");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::OUT,"OUT");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::ATOP,"ATOP");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::DEST,"DEST");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::DEST_OVER,"DEST_OVER");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::DEST_IN,"DEST_IN");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::DEST_OUT,"DEST_OUT");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::DEST_ATOP,"DEST_ATOP");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::XOR,"XOR");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::ADD,"ADD");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::SATURATE,"SATURATE");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::MULTIPLY,"MULTIPLY");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::SCREEN,"SCREEN");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::OVERLAY,"OVERLAY");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::DARKEN,"DARKEN");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::LIGHTEN,"LIGHTEN");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::COLOR_DODGE,"COLOR_DODGE");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::COLOR_BURN,"COLOR_BURN");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::HARD_LIGHT,"HARD_LIGHT");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::SOFT_LIGHT,"SOFT_LIGHT");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::DIFFERENCE,"DIFFERENCE");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::EXCLUSION,"EXCLUSION");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::HSL_HUE,"HSL_HUE");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::HSL_SATURATION,"HSL_SATURATION");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::HSL_COLOR,"HSL_COLOR");
	HX_MARK_MEMBER_NAME(CairoOperator_Impl__obj::HSL_LUMINOSITY,"HSL_LUMINOSITY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::CLEAR,"CLEAR");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::SOURCE,"SOURCE");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::OVER,"OVER");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::IN,"IN");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::OUT,"OUT");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::ATOP,"ATOP");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::DEST,"DEST");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::DEST_OVER,"DEST_OVER");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::DEST_IN,"DEST_IN");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::DEST_OUT,"DEST_OUT");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::DEST_ATOP,"DEST_ATOP");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::XOR,"XOR");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::ADD,"ADD");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::SATURATE,"SATURATE");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::MULTIPLY,"MULTIPLY");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::SCREEN,"SCREEN");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::OVERLAY,"OVERLAY");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::DARKEN,"DARKEN");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::LIGHTEN,"LIGHTEN");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::COLOR_DODGE,"COLOR_DODGE");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::COLOR_BURN,"COLOR_BURN");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::HARD_LIGHT,"HARD_LIGHT");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::SOFT_LIGHT,"SOFT_LIGHT");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::DIFFERENCE,"DIFFERENCE");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::EXCLUSION,"EXCLUSION");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::HSL_HUE,"HSL_HUE");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::HSL_SATURATION,"HSL_SATURATION");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::HSL_COLOR,"HSL_COLOR");
	HX_VISIT_MEMBER_NAME(CairoOperator_Impl__obj::HSL_LUMINOSITY,"HSL_LUMINOSITY");
};

#endif

Class CairoOperator_Impl__obj::__mClass;

void CairoOperator_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoOperator.CairoOperator_Impl_"), hx::TCanCast< CairoOperator_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoOperator_Impl__obj::__boot()
{
	CLEAR= (int)0;
	SOURCE= (int)1;
	OVER= (int)2;
	IN= (int)3;
	OUT= (int)4;
	ATOP= (int)5;
	DEST= (int)6;
	DEST_OVER= (int)7;
	DEST_IN= (int)8;
	DEST_OUT= (int)9;
	DEST_ATOP= (int)10;
	XOR= (int)11;
	ADD= (int)12;
	SATURATE= (int)13;
	MULTIPLY= (int)14;
	SCREEN= (int)15;
	OVERLAY= (int)16;
	DARKEN= (int)17;
	LIGHTEN= (int)18;
	COLOR_DODGE= (int)19;
	COLOR_BURN= (int)20;
	HARD_LIGHT= (int)21;
	SOFT_LIGHT= (int)22;
	DIFFERENCE= (int)23;
	EXCLUSION= (int)24;
	HSL_HUE= (int)25;
	HSL_SATURATION= (int)26;
	HSL_COLOR= (int)27;
	HSL_LUMINOSITY= (int)28;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoOperator
