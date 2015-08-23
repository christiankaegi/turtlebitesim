#ifndef INCLUDED_lime_graphics_cairo__CairoLineCap_CairoLineCap_Impl_
#define INCLUDED_lime_graphics_cairo__CairoLineCap_CairoLineCap_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoLineCap,CairoLineCap_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoLineCap{


class HXCPP_CLASS_ATTRIBUTES  CairoLineCap_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoLineCap_Impl__obj OBJ_;
		CairoLineCap_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoLineCap_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoLineCap_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoLineCap_Impl_"); }

		static int BUTT;
		static int ROUND;
		static int SQUARE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoLineCap

#endif /* INCLUDED_lime_graphics_cairo__CairoLineCap_CairoLineCap_Impl_ */ 
