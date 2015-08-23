#ifndef INCLUDED_model_data_ProgramData
#define INCLUDED_model_data_ProgramData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(model,data,ProgramData)
HX_DECLARE_CLASS2(model,vo,InstructionVO)
namespace model{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  ProgramData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ProgramData_obj OBJ_;
		ProgramData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ProgramData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProgramData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ProgramData"); }

		int instructionPointer;
		Array< ::Dynamic > programs;
		int programPointer;
		Array< ::Dynamic > instructions;
		virtual ::model::vo::InstructionVO getInstruction( int pointer);
		Dynamic getInstruction_dyn();

		virtual Array< ::Dynamic > getCurrentInstructions( );
		Dynamic getCurrentInstructions_dyn();

		virtual Array< ::Dynamic > getInstructionsByProgramPointer( int pointer);
		Dynamic getInstructionsByProgramPointer_dyn();

};

} // end namespace model
} // end namespace data

#endif /* INCLUDED_model_data_ProgramData */ 
