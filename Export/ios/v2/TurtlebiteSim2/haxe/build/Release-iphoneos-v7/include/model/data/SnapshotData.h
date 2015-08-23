#ifndef INCLUDED_model_data_SnapshotData
#define INCLUDED_model_data_SnapshotData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(model,data,SnapshotData)
HX_DECLARE_CLASS2(model,vo,SnapshotVO)
namespace model{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  SnapshotData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SnapshotData_obj OBJ_;
		SnapshotData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SnapshotData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SnapshotData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SnapshotData"); }

		::model::vo::SnapshotVO register1;
		::model::vo::SnapshotVO register2;
		::model::vo::SnapshotVO accumulator;
		::model::vo::SnapshotVO keyboard;
		Array< ::Dynamic > rom;
		Array< ::Dynamic > ram;
		virtual Void reset( );
		Dynamic reset_dyn();

};

} // end namespace model
} // end namespace data

#endif /* INCLUDED_model_data_SnapshotData */ 
