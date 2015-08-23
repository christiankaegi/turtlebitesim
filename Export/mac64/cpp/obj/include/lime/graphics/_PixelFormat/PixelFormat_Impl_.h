#ifndef INCLUDED_lime_graphics__PixelFormat_PixelFormat_Impl_
#define INCLUDED_lime_graphics__PixelFormat_PixelFormat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,_PixelFormat,PixelFormat_Impl_)
namespace lime{
namespace graphics{
namespace _PixelFormat{


class HXCPP_CLASS_ATTRIBUTES  PixelFormat_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PixelFormat_Impl__obj OBJ_;
		PixelFormat_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PixelFormat_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PixelFormat_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PixelFormat_Impl_"); }

		static int RGBA;
		static int ARGB;
		static int BGRA;
};

} // end namespace lime
} // end namespace graphics
} // end namespace _PixelFormat

#endif /* INCLUDED_lime_graphics__PixelFormat_PixelFormat_Impl_ */ 
