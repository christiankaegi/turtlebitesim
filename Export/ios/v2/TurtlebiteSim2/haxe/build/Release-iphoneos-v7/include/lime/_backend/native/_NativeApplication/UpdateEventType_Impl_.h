#ifndef INCLUDED_lime__backend_native__NativeApplication_UpdateEventType_Impl_
#define INCLUDED_lime__backend_native__NativeApplication_UpdateEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,UpdateEventType_Impl_)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  UpdateEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UpdateEventType_Impl__obj OBJ_;
		UpdateEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UpdateEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UpdateEventType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UpdateEventType_Impl_"); }

		static int UPDATE;
};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_UpdateEventType_Impl_ */ 
