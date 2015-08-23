#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoSurface{

Void CairoSurface_Impl__obj::__construct()
{
	return null();
}

//CairoSurface_Impl__obj::~CairoSurface_Impl__obj() { }

Dynamic CairoSurface_Impl__obj::__CreateEmpty() { return  new CairoSurface_Impl__obj; }
hx::ObjectPtr< CairoSurface_Impl__obj > CairoSurface_Impl__obj::__new()
{  hx::ObjectPtr< CairoSurface_Impl__obj > result = new CairoSurface_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoSurface_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoSurface_Impl__obj > result = new CairoSurface_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoSurface_Impl__obj::_new( int format,int width,int height){
	HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","_new",0x4072cdf0,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_._new","lime/graphics/cairo/CairoSurface.hx",17,0x58ce1be8)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(17)
	Dynamic this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(20)
	Dynamic _g = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::lime_cairo_image_surface_create(format,width,height);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	this1 = _g;
	HX_STACK_LINE(17)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoSurface_Impl__obj,_new,return )

Dynamic CairoSurface_Impl__obj::createForData( Dynamic data,int format,int width,int height,int stride){
	HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","createForData",0x586617c8,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.createForData","lime/graphics/cairo/CairoSurface.hx",31,0x58ce1be8)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(stride,"stride")
	HX_STACK_LINE(31)
	return ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::lime_cairo_image_surface_create_for_data(data,format,width,height,stride);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoSurface_Impl__obj,createForData,return )

Void CairoSurface_Impl__obj::destroy( Dynamic this1){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","destroy",0x76daf7cb,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.destroy","lime/graphics/cairo/CairoSurface.hx",42,0x58ce1be8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(42)
		::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::lime_cairo_surface_destroy(this1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,destroy,(void))

Void CairoSurface_Impl__obj::flush( Dynamic this1){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","flush",0x2a892755,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.flush","lime/graphics/cairo/CairoSurface.hx",51,0x58ce1be8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(51)
		::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::lime_cairo_surface_flush(this1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,flush,(void))

Dynamic CairoSurface_Impl__obj::fromImage( ::lime::graphics::Image image){
	HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","fromImage",0x9b2beaa2,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.fromImage","lime/graphics/cairo/CairoSurface.hx",57,0x58ce1be8)
	HX_STACK_ARG(image,"image")
	HX_STACK_LINE(60)
	Dynamic _g = image->get_data()->buffer->__getNativePointer();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(60)
	int _g1 = image->buffer->get_stride();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(60)
	return ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::createForData(_g,(int)0,image->width,image->height,_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,fromImage,return )

int CairoSurface_Impl__obj::get_height( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","get_height",0xdc3e857f,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.get_height","lime/graphics/cairo/CairoSurface.hx",78,0x58ce1be8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(78)
	return ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::lime_cairo_image_surface_get_height(this1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,get_height,return )

int CairoSurface_Impl__obj::get_width( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","get_width",0x3745f36e,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.get_width","lime/graphics/cairo/CairoSurface.hx",89,0x58ce1be8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(89)
	return ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::lime_cairo_image_surface_get_width(this1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,get_width,return )

Dynamic CairoSurface_Impl__obj::lime_cairo_image_surface_create;

Dynamic CairoSurface_Impl__obj::lime_cairo_image_surface_create_for_data;

Dynamic CairoSurface_Impl__obj::lime_cairo_image_surface_get_height;

Dynamic CairoSurface_Impl__obj::lime_cairo_image_surface_get_width;

Dynamic CairoSurface_Impl__obj::lime_cairo_surface_destroy;

Dynamic CairoSurface_Impl__obj::lime_cairo_surface_flush;


CairoSurface_Impl__obj::CairoSurface_Impl__obj()
{
}

Dynamic CairoSurface_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromImage") ) { return fromImage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createForData") ) { return createForData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoSurface_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoSurface_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("createForData"),
	HX_CSTRING("destroy"),
	HX_CSTRING("flush"),
	HX_CSTRING("fromImage"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("lime_cairo_image_surface_create"),
	HX_CSTRING("lime_cairo_image_surface_create_for_data"),
	HX_CSTRING("lime_cairo_image_surface_get_height"),
	HX_CSTRING("lime_cairo_image_surface_get_width"),
	HX_CSTRING("lime_cairo_surface_destroy"),
	HX_CSTRING("lime_cairo_surface_flush"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_create,"lime_cairo_image_surface_create");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_create_for_data,"lime_cairo_image_surface_create_for_data");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_get_height,"lime_cairo_image_surface_get_height");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_get_width,"lime_cairo_image_surface_get_width");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_surface_destroy,"lime_cairo_surface_destroy");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_surface_flush,"lime_cairo_surface_flush");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_create,"lime_cairo_image_surface_create");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_create_for_data,"lime_cairo_image_surface_create_for_data");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_get_height,"lime_cairo_image_surface_get_height");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_get_width,"lime_cairo_image_surface_get_width");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_surface_destroy,"lime_cairo_surface_destroy");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_surface_flush,"lime_cairo_surface_flush");
};

#endif

Class CairoSurface_Impl__obj::__mClass;

void CairoSurface_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_"), hx::TCanCast< CairoSurface_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoSurface_Impl__obj::__boot()
{
	lime_cairo_image_surface_create= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_image_surface_create"),(int)3,null());
	lime_cairo_image_surface_create_for_data= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_image_surface_create_for_data"),(int)5,null());
	lime_cairo_image_surface_get_height= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_image_surface_get_height"),(int)1,null());
	lime_cairo_image_surface_get_width= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_image_surface_get_width"),(int)1,null());
	lime_cairo_surface_destroy= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_surface_destroy"),(int)1,null());
	lime_cairo_surface_flush= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_surface_flush"),(int)1,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoSurface
