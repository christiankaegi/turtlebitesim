#ifndef INCLUDED_lime_graphics_cairo__CairoLineJoin_CairoLineJoin_Impl_
#define INCLUDED_lime_graphics_cairo__CairoLineJoin_CairoLineJoin_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoLineJoin,CairoLineJoin_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoLineJoin{


class HXCPP_CLASS_ATTRIBUTES  CairoLineJoin_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoLineJoin_Impl__obj OBJ_;
		CairoLineJoin_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoLineJoin_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoLineJoin_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoLineJoin_Impl_"); }

		static int MITER;
		static int ROUND;
		static int BEVEL;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoLineJoin

#endif /* INCLUDED_lime_graphics_cairo__CairoLineJoin_CairoLineJoin_Impl_ */ 
