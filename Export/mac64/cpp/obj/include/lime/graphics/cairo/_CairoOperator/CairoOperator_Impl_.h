#ifndef INCLUDED_lime_graphics_cairo__CairoOperator_CairoOperator_Impl_
#define INCLUDED_lime_graphics_cairo__CairoOperator_CairoOperator_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoOperator,CairoOperator_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoOperator{


class HXCPP_CLASS_ATTRIBUTES  CairoOperator_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoOperator_Impl__obj OBJ_;
		CairoOperator_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoOperator_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoOperator_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoOperator_Impl_"); }

		static int CLEAR;
		static int SOURCE;
		static int OVER;
		static int IN;
		static int OUT;
		static int ATOP;
		static int DEST;
		static int DEST_OVER;
		static int DEST_IN;
		static int DEST_OUT;
		static int DEST_ATOP;
		static int XOR;
		static int ADD;
		static int SATURATE;
		static int MULTIPLY;
		static int SCREEN;
		static int OVERLAY;
		static int DARKEN;
		static int LIGHTEN;
		static int COLOR_DODGE;
		static int COLOR_BURN;
		static int HARD_LIGHT;
		static int SOFT_LIGHT;
		static int DIFFERENCE;
		static int EXCLUSION;
		static int HSL_HUE;
		static int HSL_SATURATION;
		static int HSL_COLOR;
		static int HSL_LUMINOSITY;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoOperator

#endif /* INCLUDED_lime_graphics_cairo__CairoOperator_CairoOperator_Impl_ */ 
