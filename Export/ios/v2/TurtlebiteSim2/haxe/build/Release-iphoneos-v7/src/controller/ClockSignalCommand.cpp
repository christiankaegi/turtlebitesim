#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_controller_ClockSignalCommand
#include <controller/ClockSignalCommand.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_model_proxy_ClockProxy
#include <model/proxy/ClockProxy.h>
#endif
#ifndef INCLUDED_model_proxy_ProgramProxy
#include <model/proxy/ProgramProxy.h>
#endif
#ifndef INCLUDED_model_proxy_SnapshotProxy
#include <model/proxy/SnapshotProxy.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_ICommand
#include <org/puremvc/haxe/multicore/interfaces/ICommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade
#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotification
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IProxy
#include <org/puremvc/haxe/multicore/interfaces/IProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_command_SimpleCommand
#include <org/puremvc/haxe/multicore/patterns/command/SimpleCommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_proxy_Proxy
#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
#endif
namespace controller{

Void ClockSignalCommand_obj::__construct()
{
HX_STACK_FRAME("controller.ClockSignalCommand","new",0x743d5639,"controller.ClockSignalCommand.new","controller/ClockSignalCommand.hx",17,0x8d265db6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
}
;
	return null();
}

//ClockSignalCommand_obj::~ClockSignalCommand_obj() { }

Dynamic ClockSignalCommand_obj::__CreateEmpty() { return  new ClockSignalCommand_obj; }
hx::ObjectPtr< ClockSignalCommand_obj > ClockSignalCommand_obj::__new()
{  hx::ObjectPtr< ClockSignalCommand_obj > result = new ClockSignalCommand_obj();
	result->__construct();
	return result;}

Dynamic ClockSignalCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClockSignalCommand_obj > result = new ClockSignalCommand_obj();
	result->__construct();
	return result;}

Void ClockSignalCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.ClockSignalCommand","execute",0x2590f08e,"controller.ClockSignalCommand.execute","controller/ClockSignalCommand.hx",20,0x8d265db6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(22)
		::model::proxy::ClockProxy clockProxy;		HX_STACK_VAR(clockProxy,"clockProxy");
		HX_STACK_LINE(22)
		clockProxy = hx::TCast< model::proxy::ClockProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ClockProxy_obj::NAME));
		HX_STACK_LINE(23)
		::model::proxy::ProgramProxy programProxy;		HX_STACK_VAR(programProxy,"programProxy");
		HX_STACK_LINE(23)
		programProxy = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(24)
		::model::proxy::SnapshotProxy snapshotProxy;		HX_STACK_VAR(snapshotProxy,"snapshotProxy");
		HX_STACK_LINE(24)
		snapshotProxy = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(25)
		bool on;		HX_STACK_VAR(on,"on");
		HX_STACK_LINE(25)
		on = hx::TCast< Bool >::cast(note->getBody());
		HX_STACK_LINE(27)
		::model::vo::InstructionVO _g = programProxy->getInstruction();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		this->instruction = _g;
		HX_STACK_LINE(28)
		::String _g1 = programProxy->getOpcode();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(28)
		this->opcode = _g1;
		HX_STACK_LINE(29)
		::String _g2 = programProxy->getAddressOrData();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(29)
		this->addressOrData = _g2;
		HX_STACK_LINE(31)
		if ((on)){
			HX_STACK_LINE(32)
			int _g3 = programProxy->getInstructionPointer();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(32)
			::String _g4 = (HX_CSTRING("-------------- Pointer: ") + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(32)
			::String _g5 = (_g4 + HX_CSTRING("------------------------"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(32)
			::haxe::Log_obj::trace(_g5,hx::SourceInfo(HX_CSTRING("ClockSignalCommand.hx"),32,HX_CSTRING("controller.ClockSignalCommand"),HX_CSTRING("execute")));
			HX_STACK_LINE(33)
			::haxe::Log_obj::trace((HX_CSTRING("asm: ") + programProxy->getInstruction()->_asm_),hx::SourceInfo(HX_CSTRING("ClockSignalCommand.hx"),33,HX_CSTRING("controller.ClockSignalCommand"),HX_CSTRING("execute")));
			HX_STACK_LINE(34)
			::haxe::Log_obj::trace((((((HX_CSTRING("code: ") + programProxy->getInstruction()->code) + HX_CSTRING(" (Opcode: ")) + this->opcode) + HX_CSTRING(", Address/Data: ")) + this->addressOrData),hx::SourceInfo(HX_CSTRING("ClockSignalCommand.hx"),34,HX_CSTRING("controller.ClockSignalCommand"),HX_CSTRING("execute")));
			HX_STACK_LINE(35)
			::haxe::Log_obj::trace((HX_CSTRING("hex: ") + programProxy->getInstruction()->hex),hx::SourceInfo(HX_CSTRING("ClockSignalCommand.hx"),35,HX_CSTRING("controller.ClockSignalCommand"),HX_CSTRING("execute")));
			HX_STACK_LINE(36)
			::haxe::Log_obj::trace((HX_CSTRING("desc: ") + programProxy->getInstruction()->description),hx::SourceInfo(HX_CSTRING("ClockSignalCommand.hx"),36,HX_CSTRING("controller.ClockSignalCommand"),HX_CSTRING("execute")));
			HX_STACK_LINE(38)
			this->sendNotification(::AppConstants_obj::CLOCK_ON,this->instruction,null());
			HX_STACK_LINE(39)
			this->sendNotification(this->opcode,this->instruction,null());
			HX_STACK_LINE(41)
			int _g6 = programProxy->getInstructionPointer();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(41)
			if (((_g6 == (int)0))){
				HX_STACK_LINE(42)
				this->sendNotification(::AppConstants_obj::LOOP,null(),null());
			}
			HX_STACK_LINE(45)
			int _g7 = programProxy->getInstructionPointer();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(45)
			int _g8 = (_g7 + (int)1);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(45)
			this->pointer = _g8;
			HX_STACK_LINE(55)
			int _g9 = programProxy->getNumberOfInstructions();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(55)
			if (((  ((!(((this->pointer == _g9))))) ? bool((this->pointer == ::AppConstants_obj::INSTRUCTIONS_MAX)) : bool(true) ))){
				HX_STACK_LINE(56)
				this->pointer = (int)0;
			}
			HX_STACK_LINE(58)
			programProxy->setInstructionPointer(this->pointer);
		}
		else{
			HX_STACK_LINE(61)
			this->sendNotification(::AppConstants_obj::CLOCK_OFF,this->instruction,null());
		}
	}
return null();
}



ClockSignalCommand_obj::ClockSignalCommand_obj()
{
}

void ClockSignalCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClockSignalCommand);
	HX_MARK_MEMBER_NAME(instruction,"instruction");
	HX_MARK_MEMBER_NAME(opcode,"opcode");
	HX_MARK_MEMBER_NAME(addressOrData,"addressOrData");
	HX_MARK_MEMBER_NAME(code,"code");
	HX_MARK_MEMBER_NAME(pointer,"pointer");
	::org::puremvc::haxe::multicore::patterns::observer::Notifier_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ClockSignalCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(instruction,"instruction");
	HX_VISIT_MEMBER_NAME(opcode,"opcode");
	HX_VISIT_MEMBER_NAME(addressOrData,"addressOrData");
	HX_VISIT_MEMBER_NAME(code,"code");
	HX_VISIT_MEMBER_NAME(pointer,"pointer");
	::org::puremvc::haxe::multicore::patterns::observer::Notifier_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ClockSignalCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { return code; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"opcode") ) { return opcode; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pointer") ) { return pointer; }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"instruction") ) { return instruction; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addressOrData") ) { return addressOrData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClockSignalCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"opcode") ) { opcode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pointer") ) { pointer=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"instruction") ) { instruction=inValue.Cast< ::model::vo::InstructionVO >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addressOrData") ) { addressOrData=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClockSignalCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("instruction"));
	outFields->push(HX_CSTRING("opcode"));
	outFields->push(HX_CSTRING("addressOrData"));
	outFields->push(HX_CSTRING("code"));
	outFields->push(HX_CSTRING("pointer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::vo::InstructionVO*/ ,(int)offsetof(ClockSignalCommand_obj,instruction),HX_CSTRING("instruction")},
	{hx::fsString,(int)offsetof(ClockSignalCommand_obj,opcode),HX_CSTRING("opcode")},
	{hx::fsString,(int)offsetof(ClockSignalCommand_obj,addressOrData),HX_CSTRING("addressOrData")},
	{hx::fsString,(int)offsetof(ClockSignalCommand_obj,code),HX_CSTRING("code")},
	{hx::fsInt,(int)offsetof(ClockSignalCommand_obj,pointer),HX_CSTRING("pointer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("instruction"),
	HX_CSTRING("opcode"),
	HX_CSTRING("addressOrData"),
	HX_CSTRING("code"),
	HX_CSTRING("pointer"),
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClockSignalCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClockSignalCommand_obj::__mClass,"__mClass");
};

#endif

Class ClockSignalCommand_obj::__mClass;

void ClockSignalCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.ClockSignalCommand"), hx::TCanCast< ClockSignalCommand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ClockSignalCommand_obj::__boot()
{
}

} // end namespace controller
