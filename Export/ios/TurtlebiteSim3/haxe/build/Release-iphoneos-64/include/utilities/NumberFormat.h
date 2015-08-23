#ifndef INCLUDED_utilities_NumberFormat
#define INCLUDED_utilities_NumberFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(model,vo,DecHexVO)
HX_DECLARE_CLASS1(utilities,NumberFormat)
namespace utilities{


class HXCPP_CLASS_ATTRIBUTES  NumberFormat_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NumberFormat_obj OBJ_;
		NumberFormat_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< NumberFormat_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NumberFormat_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("NumberFormat"); }

		static ::String intToString( int num);
		static Dynamic intToString_dyn();

		static Array< bool > binaryToArray( ::String bin,Dynamic length);
		static Dynamic binaryToArray_dyn();

		static ::model::vo::DecHexVO binaryToDecimal( ::String value);
		static Dynamic binaryToDecimal_dyn();

		static ::String decimalToBinary( int value);
		static Dynamic decimalToBinary_dyn();

		static ::String decimalToChar( int value);
		static Dynamic decimalToChar_dyn();

};

} // end namespace utilities

#endif /* INCLUDED_utilities_NumberFormat */ 
