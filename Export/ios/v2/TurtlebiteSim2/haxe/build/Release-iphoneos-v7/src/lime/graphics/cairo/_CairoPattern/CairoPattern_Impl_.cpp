#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoPattern{

Void CairoPattern_Impl__obj::__construct()
{
	return null();
}

//CairoPattern_Impl__obj::~CairoPattern_Impl__obj() { }

Dynamic CairoPattern_Impl__obj::__CreateEmpty() { return  new CairoPattern_Impl__obj; }
hx::ObjectPtr< CairoPattern_Impl__obj > CairoPattern_Impl__obj::__new()
{  hx::ObjectPtr< CairoPattern_Impl__obj > result = new CairoPattern_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoPattern_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoPattern_Impl__obj > result = new CairoPattern_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoPattern_Impl__obj::_new( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","_new",0xc71fdbd0,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_._new","lime/graphics/cairo/CairoPattern.hx",19,0x9806f3a5)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(19)
	return handle;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,_new,return )

Void CairoPattern_Impl__obj::addColorStopRGB( Dynamic this1,Float offset,Float r,Float g,Float b){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","addColorStopRGB",0xfbbadaba,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.addColorStopRGB","lime/graphics/cairo/CairoPattern.hx",27,0x9806f3a5)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(27)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgb(this1,offset,r,g,b);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoPattern_Impl__obj,addColorStopRGB,(void))

Void CairoPattern_Impl__obj::addColorStopRGBA( Dynamic this1,Float offset,Float r,Float g,Float b,Float a){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","addColorStopRGBA",0x47c48847,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.addColorStopRGBA","lime/graphics/cairo/CairoPattern.hx",36,0x9806f3a5)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(36)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgba(this1,offset,r,g,b,a);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoPattern_Impl__obj,addColorStopRGBA,(void))

Dynamic CairoPattern_Impl__obj::createForSurface( Dynamic surface){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createForSurface",0x941f592f,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createForSurface","lime/graphics/cairo/CairoPattern.hx",45,0x9806f3a5)
	HX_STACK_ARG(surface,"surface")
	HX_STACK_LINE(45)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_create_for_surface(surface);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,createForSurface,return )

Dynamic CairoPattern_Impl__obj::createLinear( Float x0,Float y0,Float x1,Float y1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createLinear",0xc4d8df70,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createLinear","lime/graphics/cairo/CairoPattern.hx",56,0x9806f3a5)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_LINE(56)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_create_linear(x0,y0,x1,y1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoPattern_Impl__obj,createLinear,return )

Dynamic CairoPattern_Impl__obj::createRadial( Float cx0,Float cy0,Float radius0,Float cx1,Float cy1,Float radius1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRadial",0x892f4c6a,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRadial","lime/graphics/cairo/CairoPattern.hx",67,0x9806f3a5)
	HX_STACK_ARG(cx0,"cx0")
	HX_STACK_ARG(cy0,"cy0")
	HX_STACK_ARG(radius0,"radius0")
	HX_STACK_ARG(cx1,"cx1")
	HX_STACK_ARG(cy1,"cy1")
	HX_STACK_ARG(radius1,"radius1")
	HX_STACK_LINE(67)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_create_radial(cx0,cy0,radius0,cx1,cy1,radius1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoPattern_Impl__obj,createRadial,return )

Dynamic CairoPattern_Impl__obj::createRGB( Float r,Float g,Float b){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRGB",0xccf31ca2,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRGB","lime/graphics/cairo/CairoPattern.hx",78,0x9806f3a5)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(78)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_create_rgb(r,g,b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoPattern_Impl__obj,createRGB,return )

Dynamic CairoPattern_Impl__obj::createRGBA( Float r,Float g,Float b,Float a){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRGBA",0x87c5f15f,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRGBA","lime/graphics/cairo/CairoPattern.hx",89,0x9806f3a5)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(89)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_create_rgba(r,g,b,a);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoPattern_Impl__obj,createRGBA,return )

Void CairoPattern_Impl__obj::destroy( Dynamic this1){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","destroy",0xc623d5eb,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.destroy","lime/graphics/cairo/CairoPattern.hx",100,0x9806f3a5)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(100)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_destroy(this1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,destroy,(void))

int CairoPattern_Impl__obj::get_colorStopCount( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_colorStopCount",0x1c959302,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_colorStopCount","lime/graphics/cairo/CairoPattern.hx",116,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(116)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_get_color_stop_count(this1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_colorStopCount,return )

int CairoPattern_Impl__obj::get_extend( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_extend",0xe14a0552,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_extend","lime/graphics/cairo/CairoPattern.hx",127,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(127)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_get_extend(this1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_extend,return )

int CairoPattern_Impl__obj::set_extend( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_extend",0xe4c7a3c6,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_extend","lime/graphics/cairo/CairoPattern.hx",135,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(138)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_set_extend(this1,value);
	HX_STACK_LINE(141)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_extend,return )

int CairoPattern_Impl__obj::get_filter( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_filter",0x9f645330,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_filter","lime/graphics/cairo/CairoPattern.hx",149,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(149)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_get_filter(this1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_filter,return )

int CairoPattern_Impl__obj::set_filter( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_filter",0xa2e1f1a4,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_filter","lime/graphics/cairo/CairoPattern.hx",157,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(160)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_set_filter(this1,value);
	HX_STACK_LINE(163)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_filter,return )

::lime::math::Matrix3 CairoPattern_Impl__obj::get_matrix( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_matrix",0xd5f769b9,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_matrix","lime/graphics/cairo/CairoPattern.hx",168,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(171)
	Dynamic m = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_get_matrix(this1);		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(172)
	return ::lime::math::Matrix3_obj::__new(m->__Field(HX_CSTRING("a"),true),m->__Field(HX_CSTRING("b"),true),m->__Field(HX_CSTRING("c"),true),m->__Field(HX_CSTRING("d"),true),m->__Field(HX_CSTRING("tx"),true),m->__Field(HX_CSTRING("ty"),true));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_matrix,return )

::lime::math::Matrix3 CairoPattern_Impl__obj::set_matrix( Dynamic this1,::lime::math::Matrix3 value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_matrix",0xd975082d,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_matrix","lime/graphics/cairo/CairoPattern.hx",180,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(183)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_set_matrix(this1,value);
	HX_STACK_LINE(186)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_matrix,return )

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgb;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgba;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_for_surface;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_linear;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_radial;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_rgb;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_rgba;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_destroy;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_get_color_stop_count;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_get_extend;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_get_filter;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_get_matrix;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_set_extend;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_set_filter;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_set_matrix;


CairoPattern_Impl__obj::CairoPattern_Impl__obj()
{
}

Dynamic CairoPattern_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"createRGB") ) { return createRGB_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createRGBA") ) { return createRGBA_dyn(); }
		if (HX_FIELD_EQ(inName,"get_extend") ) { return get_extend_dyn(); }
		if (HX_FIELD_EQ(inName,"set_extend") ) { return set_extend_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filter") ) { return get_filter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filter") ) { return set_filter_dyn(); }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createLinear") ) { return createLinear_dyn(); }
		if (HX_FIELD_EQ(inName,"createRadial") ) { return createRadial_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addColorStopRGB") ) { return addColorStopRGB_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addColorStopRGBA") ) { return addColorStopRGBA_dyn(); }
		if (HX_FIELD_EQ(inName,"createForSurface") ) { return createForSurface_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_colorStopCount") ) { return get_colorStopCount_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoPattern_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoPattern_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("addColorStopRGB"),
	HX_CSTRING("addColorStopRGBA"),
	HX_CSTRING("createForSurface"),
	HX_CSTRING("createLinear"),
	HX_CSTRING("createRadial"),
	HX_CSTRING("createRGB"),
	HX_CSTRING("createRGBA"),
	HX_CSTRING("destroy"),
	HX_CSTRING("get_colorStopCount"),
	HX_CSTRING("get_extend"),
	HX_CSTRING("set_extend"),
	HX_CSTRING("get_filter"),
	HX_CSTRING("set_filter"),
	HX_CSTRING("get_matrix"),
	HX_CSTRING("set_matrix"),
	HX_CSTRING("lime_cairo_pattern_add_color_stop_rgb"),
	HX_CSTRING("lime_cairo_pattern_add_color_stop_rgba"),
	HX_CSTRING("lime_cairo_pattern_create_for_surface"),
	HX_CSTRING("lime_cairo_pattern_create_linear"),
	HX_CSTRING("lime_cairo_pattern_create_radial"),
	HX_CSTRING("lime_cairo_pattern_create_rgb"),
	HX_CSTRING("lime_cairo_pattern_create_rgba"),
	HX_CSTRING("lime_cairo_pattern_destroy"),
	HX_CSTRING("lime_cairo_pattern_get_color_stop_count"),
	HX_CSTRING("lime_cairo_pattern_get_extend"),
	HX_CSTRING("lime_cairo_pattern_get_filter"),
	HX_CSTRING("lime_cairo_pattern_get_matrix"),
	HX_CSTRING("lime_cairo_pattern_set_extend"),
	HX_CSTRING("lime_cairo_pattern_set_filter"),
	HX_CSTRING("lime_cairo_pattern_set_matrix"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgb,"lime_cairo_pattern_add_color_stop_rgb");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgba,"lime_cairo_pattern_add_color_stop_rgba");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_for_surface,"lime_cairo_pattern_create_for_surface");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_linear,"lime_cairo_pattern_create_linear");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_radial,"lime_cairo_pattern_create_radial");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_rgb,"lime_cairo_pattern_create_rgb");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_rgba,"lime_cairo_pattern_create_rgba");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_destroy,"lime_cairo_pattern_destroy");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_color_stop_count,"lime_cairo_pattern_get_color_stop_count");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_extend,"lime_cairo_pattern_get_extend");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_filter,"lime_cairo_pattern_get_filter");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_matrix,"lime_cairo_pattern_get_matrix");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_set_extend,"lime_cairo_pattern_set_extend");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_set_filter,"lime_cairo_pattern_set_filter");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_set_matrix,"lime_cairo_pattern_set_matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgb,"lime_cairo_pattern_add_color_stop_rgb");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgba,"lime_cairo_pattern_add_color_stop_rgba");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_for_surface,"lime_cairo_pattern_create_for_surface");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_linear,"lime_cairo_pattern_create_linear");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_radial,"lime_cairo_pattern_create_radial");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_rgb,"lime_cairo_pattern_create_rgb");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_rgba,"lime_cairo_pattern_create_rgba");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_destroy,"lime_cairo_pattern_destroy");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_color_stop_count,"lime_cairo_pattern_get_color_stop_count");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_extend,"lime_cairo_pattern_get_extend");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_filter,"lime_cairo_pattern_get_filter");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_matrix,"lime_cairo_pattern_get_matrix");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_set_extend,"lime_cairo_pattern_set_extend");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_set_filter,"lime_cairo_pattern_set_filter");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_set_matrix,"lime_cairo_pattern_set_matrix");
};

#endif

Class CairoPattern_Impl__obj::__mClass;

void CairoPattern_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_"), hx::TCanCast< CairoPattern_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoPattern_Impl__obj::__boot()
{
	lime_cairo_pattern_add_color_stop_rgb= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_add_color_stop_rgb"),(int)5,null());
	lime_cairo_pattern_add_color_stop_rgba= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_add_color_stop_rgba"),(int)-1,null());
	lime_cairo_pattern_create_for_surface= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_create_for_surface"),(int)1,null());
	lime_cairo_pattern_create_linear= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_create_linear"),(int)4,null());
	lime_cairo_pattern_create_radial= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_create_radial"),(int)-1,null());
	lime_cairo_pattern_create_rgb= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_create_rgb"),(int)3,null());
	lime_cairo_pattern_create_rgba= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_create_rgba"),(int)4,null());
	lime_cairo_pattern_destroy= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_destroy"),(int)1,null());
	lime_cairo_pattern_get_color_stop_count= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_get_color_stop_count"),(int)1,null());
	lime_cairo_pattern_get_extend= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_get_extend"),(int)1,null());
	lime_cairo_pattern_get_filter= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_get_filter"),(int)1,null());
	lime_cairo_pattern_get_matrix= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_get_matrix"),(int)1,null());
	lime_cairo_pattern_set_extend= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_set_extend"),(int)2,null());
	lime_cairo_pattern_set_filter= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_set_filter"),(int)2,null());
	lime_cairo_pattern_set_matrix= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pattern_set_matrix"),(int)2,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoPattern
