#ifndef INCLUDED_model_data_BusData
#define INCLUDED_model_data_BusData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(model,data,BusData)
namespace model{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  BusData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BusData_obj OBJ_;
		BusData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BusData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BusData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BusData"); }

		Array< bool > data;
		virtual Void setLine0( bool v);
		Dynamic setLine0_dyn();

		virtual bool getLine0( );
		Dynamic getLine0_dyn();

		virtual Void setLine1( bool v);
		Dynamic setLine1_dyn();

		virtual bool getLine1( );
		Dynamic getLine1_dyn();

		virtual Void setLine2( bool v);
		Dynamic setLine2_dyn();

		virtual bool getLine2( );
		Dynamic getLine2_dyn();

		virtual Void setLine3( bool v);
		Dynamic setLine3_dyn();

		virtual bool getLine3( );
		Dynamic getLine3_dyn();

		virtual Void setLine4( bool v);
		Dynamic setLine4_dyn();

		virtual bool getLine4( );
		Dynamic getLine4_dyn();

		virtual Void setLine5( bool v);
		Dynamic setLine5_dyn();

		virtual bool getLine5( );
		Dynamic getLine5_dyn();

		virtual Void setLine6( bool v);
		Dynamic setLine6_dyn();

		virtual bool getLine6( );
		Dynamic getLine6_dyn();

		virtual Void setLine7( bool v);
		Dynamic setLine7_dyn();

		virtual bool getLine7( );
		Dynamic getLine7_dyn();

		virtual Array< bool > getBusData( );
		Dynamic getBusData_dyn();

		virtual ::String getBusDataAsBinary( );
		Dynamic getBusDataAsBinary_dyn();

		virtual Void setBusData( Array< bool > v);
		Dynamic setBusData_dyn();

		virtual Void setBusDataAsBinary( ::String v);
		Dynamic setBusDataAsBinary_dyn();

};

} // end namespace model
} // end namespace data

#endif /* INCLUDED_model_data_BusData */ 
