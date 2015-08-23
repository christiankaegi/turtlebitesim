#ifndef INCLUDED_lime_graphics_cairo__CairoAntialias_CairoAntialias_Impl_
#define INCLUDED_lime_graphics_cairo__CairoAntialias_CairoAntialias_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoAntialias,CairoAntialias_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoAntialias{


class HXCPP_CLASS_ATTRIBUTES  CairoAntialias_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoAntialias_Impl__obj OBJ_;
		CairoAntialias_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoAntialias_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoAntialias_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoAntialias_Impl_"); }

		static int DEFAULT;
		static int NONE;
		static int GRAY;
		static int SUBPIXEL;
		static int FAST;
		static int GOOD;
		static int BEST;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoAntialias

#endif /* INCLUDED_lime_graphics_cairo__CairoAntialias_CairoAntialias_Impl_ */ 
