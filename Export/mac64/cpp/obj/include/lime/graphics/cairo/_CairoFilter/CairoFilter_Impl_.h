#ifndef INCLUDED_lime_graphics_cairo__CairoFilter_CairoFilter_Impl_
#define INCLUDED_lime_graphics_cairo__CairoFilter_CairoFilter_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoFilter,CairoFilter_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFilter{


class HXCPP_CLASS_ATTRIBUTES  CairoFilter_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoFilter_Impl__obj OBJ_;
		CairoFilter_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoFilter_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoFilter_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoFilter_Impl_"); }

		static int FAST;
		static int GOOD;
		static int BEST;
		static int NEAREST;
		static int BILINEAR;
		static int GAUSSIAN;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFilter

#endif /* INCLUDED_lime_graphics_cairo__CairoFilter_CairoFilter_Impl_ */ 
