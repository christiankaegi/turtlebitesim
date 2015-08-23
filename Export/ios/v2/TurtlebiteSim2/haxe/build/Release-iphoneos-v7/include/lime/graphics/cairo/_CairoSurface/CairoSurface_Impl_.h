#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#define INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoSurface,CairoSurface_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoSurface{


class HXCPP_CLASS_ATTRIBUTES  CairoSurface_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoSurface_Impl__obj OBJ_;
		CairoSurface_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoSurface_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoSurface_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoSurface_Impl_"); }

		static Dynamic _new( int format,int width,int height);
		static Dynamic _new_dyn();

		static Dynamic createForData( Dynamic data,int format,int width,int height,int stride);
		static Dynamic createForData_dyn();

		static Void destroy( Dynamic this1);
		static Dynamic destroy_dyn();

		static Void flush( Dynamic this1);
		static Dynamic flush_dyn();

		static Dynamic fromImage( ::lime::graphics::Image image);
		static Dynamic fromImage_dyn();

		static int get_height( Dynamic this1);
		static Dynamic get_height_dyn();

		static int get_width( Dynamic this1);
		static Dynamic get_width_dyn();

		static Dynamic lime_cairo_image_surface_create;
		static Dynamic &lime_cairo_image_surface_create_dyn() { return lime_cairo_image_surface_create;}
		static Dynamic lime_cairo_image_surface_create_for_data;
		static Dynamic &lime_cairo_image_surface_create_for_data_dyn() { return lime_cairo_image_surface_create_for_data;}
		static Dynamic lime_cairo_image_surface_get_height;
		static Dynamic &lime_cairo_image_surface_get_height_dyn() { return lime_cairo_image_surface_get_height;}
		static Dynamic lime_cairo_image_surface_get_width;
		static Dynamic &lime_cairo_image_surface_get_width_dyn() { return lime_cairo_image_surface_get_width;}
		static Dynamic lime_cairo_surface_destroy;
		static Dynamic &lime_cairo_surface_destroy_dyn() { return lime_cairo_surface_destroy;}
		static Dynamic lime_cairo_surface_flush;
		static Dynamic &lime_cairo_surface_flush_dyn() { return lime_cairo_surface_flush;}
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoSurface

#endif /* INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_ */ 
