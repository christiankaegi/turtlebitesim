#ifndef INCLUDED_model_data_ClockData
#define INCLUDED_model_data_ClockData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(model,data,ClockData)
HX_DECLARE_CLASS2(model,vo,FrequencyVO)
namespace model{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  ClockData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ClockData_obj OBJ_;
		ClockData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ClockData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClockData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ClockData"); }

		Array< ::Dynamic > frequencies;
		int currentFrequencyPointer;
		bool clockOn;
};

} // end namespace model
} // end namespace data

#endif /* INCLUDED_model_data_ClockData */ 
