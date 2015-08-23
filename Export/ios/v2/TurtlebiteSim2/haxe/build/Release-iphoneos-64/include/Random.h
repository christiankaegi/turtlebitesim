#ifndef INCLUDED_Random
#define INCLUDED_Random

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(Random)


class HXCPP_CLASS_ATTRIBUTES  Random_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Random_obj OBJ_;
		Random_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Random_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Random_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Random"); }

		static bool _bool( );
		static Dynamic _bool_dyn();

		static int _int( int from,int to);
		static Dynamic _int_dyn();

		static Float _float( Float from,Float to);
		static Dynamic _float_dyn();

		static ::String string( int length,::String charactersToUse);
		static Dynamic string_dyn();

		static ::Date date( ::Date earliest,::Date latest);
		static Dynamic date_dyn();

		static Dynamic fromArray( Dynamic arr);
		static Dynamic fromArray_dyn();

		static Dynamic shuffle( Dynamic arr);
		static Dynamic shuffle_dyn();

		static Dynamic fromIterable( Dynamic it);
		static Dynamic fromIterable_dyn();

		static Dynamic enumConstructor( ::Enum e);
		static Dynamic enumConstructor_dyn();

};


#endif /* INCLUDED_Random */ 
