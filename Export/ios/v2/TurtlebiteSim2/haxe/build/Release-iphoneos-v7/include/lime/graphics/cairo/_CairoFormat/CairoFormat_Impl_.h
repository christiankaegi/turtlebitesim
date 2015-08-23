#ifndef INCLUDED_lime_graphics_cairo__CairoFormat_CairoFormat_Impl_
#define INCLUDED_lime_graphics_cairo__CairoFormat_CairoFormat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoFormat,CairoFormat_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFormat{


class HXCPP_CLASS_ATTRIBUTES  CairoFormat_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoFormat_Impl__obj OBJ_;
		CairoFormat_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoFormat_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoFormat_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoFormat_Impl_"); }

		static int INVALID;
		static int ARGB32;
		static int RGB24;
		static int A8;
		static int A1;
		static int RGB16_565;
		static int RGB30;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFormat

#endif /* INCLUDED_lime_graphics_cairo__CairoFormat_CairoFormat_Impl_ */ 
