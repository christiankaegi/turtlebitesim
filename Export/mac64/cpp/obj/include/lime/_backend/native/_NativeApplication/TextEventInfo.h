#ifndef INCLUDED_lime__backend_native__NativeApplication_TextEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_TextEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,TextEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  TextEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextEventInfo_obj OBJ_;
		TextEventInfo_obj();
		Void __construct(Dynamic type,::String __o_text,hx::Null< int >  __o_start,hx::Null< int >  __o_length);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextEventInfo_obj > __new(Dynamic type,::String __o_text,hx::Null< int >  __o_start,hx::Null< int >  __o_length);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextEventInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextEventInfo"); }

		int id;
		int length;
		int start;
		::String text;
		int type;
		virtual ::lime::_backend::native::_NativeApplication::TextEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_TextEventInfo */ 
