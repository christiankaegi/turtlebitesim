#ifndef INCLUDED_lime_graphics_cairo__CairoFillRule_CairoFillRule_Impl_
#define INCLUDED_lime_graphics_cairo__CairoFillRule_CairoFillRule_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoFillRule,CairoFillRule_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFillRule{


class HXCPP_CLASS_ATTRIBUTES  CairoFillRule_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoFillRule_Impl__obj OBJ_;
		CairoFillRule_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoFillRule_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoFillRule_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoFillRule_Impl_"); }

		static int WINDING;
		static int EVEN_ODD;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFillRule

#endif /* INCLUDED_lime_graphics_cairo__CairoFillRule_CairoFillRule_Impl_ */ 
