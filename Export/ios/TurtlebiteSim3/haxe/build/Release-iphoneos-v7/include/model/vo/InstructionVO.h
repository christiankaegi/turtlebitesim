#ifndef INCLUDED_model_vo_InstructionVO
#define INCLUDED_model_vo_InstructionVO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(model,vo,InstructionVO)
namespace model{
namespace vo{


class HXCPP_CLASS_ATTRIBUTES  InstructionVO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InstructionVO_obj OBJ_;
		InstructionVO_obj();
		Void __construct(int pointer,::String _asm_);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InstructionVO_obj > __new(int pointer,::String _asm_);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InstructionVO_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InstructionVO"); }

		int pointer;
		::String _asm_;
		::String asmOpcode;
		::String asmAddress;
		::String code;
		::String codeOpcode;
		::String codeAddress;
		Array< bool > codeArr;
		::String hex;
		::String hexOpcode;
		::String hexAddress;
		::String description;
		virtual Void assemble( );
		Dynamic assemble_dyn();

};

} // end namespace model
} // end namespace vo

#endif /* INCLUDED_model_vo_InstructionVO */ 
