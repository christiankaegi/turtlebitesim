#ifndef INCLUDED_lime_graphics_cairo__CairoContent_CairoContent_Impl_
#define INCLUDED_lime_graphics_cairo__CairoContent_CairoContent_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoContent,CairoContent_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoContent{


class HXCPP_CLASS_ATTRIBUTES  CairoContent_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoContent_Impl__obj OBJ_;
		CairoContent_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoContent_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoContent_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoContent_Impl_"); }

		static int COLOR;
		static int ALPHA;
		static int COLOR_ALPHA;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoContent

#endif /* INCLUDED_lime_graphics_cairo__CairoContent_CairoContent_Impl_ */ 
