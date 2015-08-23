#ifndef INCLUDED_lime_graphics_cairo__CairoExtend_CairoExtend_Impl_
#define INCLUDED_lime_graphics_cairo__CairoExtend_CairoExtend_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoExtend,CairoExtend_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoExtend{


class HXCPP_CLASS_ATTRIBUTES  CairoExtend_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoExtend_Impl__obj OBJ_;
		CairoExtend_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoExtend_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoExtend_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoExtend_Impl_"); }

		static int NONE;
		static int REPEAT;
		static int REFLECT;
		static int PAD;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoExtend

#endif /* INCLUDED_lime_graphics_cairo__CairoExtend_CairoExtend_Impl_ */ 
