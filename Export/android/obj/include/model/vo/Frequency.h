#ifndef INCLUDED_model_vo_Frequency
#define INCLUDED_model_vo_Frequency

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(model,vo,Frequency)
namespace model{
namespace vo{


class HXCPP_CLASS_ATTRIBUTES  Frequency_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Frequency_obj OBJ_;
		Frequency_obj();
		Void __construct(Float ms,::String label);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Frequency_obj > __new(Float ms,::String label);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Frequency_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Frequency"); }

		Float ms;
		::String label;
};

} // end namespace model
} // end namespace vo

#endif /* INCLUDED_model_vo_Frequency */ 
