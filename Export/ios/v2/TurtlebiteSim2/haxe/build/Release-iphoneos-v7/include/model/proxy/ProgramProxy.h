#ifndef INCLUDED_model_proxy_ProgramProxy
#define INCLUDED_model_proxy_ProgramProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
HX_DECLARE_CLASS2(model,data,ProgramData)
HX_DECLARE_CLASS2(model,proxy,ProgramProxy)
HX_DECLARE_CLASS2(model,vo,InstructionVO)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IProxy)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Notifier)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,proxy,Proxy)
namespace model{
namespace proxy{


class HXCPP_CLASS_ATTRIBUTES  ProgramProxy_obj : public ::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj super;
		typedef ProgramProxy_obj OBJ_;
		ProgramProxy_obj();
		Void __construct(::model::data::ProgramData data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ProgramProxy_obj > __new(::model::data::ProgramData data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProgramProxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ProgramProxy"); }

		virtual Void onRegister( );

		virtual int getNumberOfInstructions( );
		Dynamic getNumberOfInstructions_dyn();

		virtual Array< ::Dynamic > getCurrentInstructions( );
		Dynamic getCurrentInstructions_dyn();

		virtual Array< ::Dynamic > getInstructionsByProgramPointer( int pointer);
		Dynamic getInstructionsByProgramPointer_dyn();

		virtual ::model::vo::InstructionVO getInstruction( );
		Dynamic getInstruction_dyn();

		virtual Array< ::Dynamic > getProgram( int pointer);
		Dynamic getProgram_dyn();

		virtual ::String getOpcode( );
		Dynamic getOpcode_dyn();

		virtual ::String getAddressOrData( );
		Dynamic getAddressOrData_dyn();

		virtual Void setInstructionPointer( int pointer);
		Dynamic setInstructionPointer_dyn();

		virtual int getInstructionPointer( );
		Dynamic getInstructionPointer_dyn();

		virtual Void setProgramPointer( int pointer);
		Dynamic setProgramPointer_dyn();

		virtual int getProgramPointer( );
		Dynamic getProgramPointer_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Dynamic getData( );

		static ::String NAME;
};

} // end namespace model
} // end namespace proxy

#endif /* INCLUDED_model_proxy_ProgramProxy */ 
