#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_controller_instruction_OpcodeMOVCommand
#include <controller/instruction/OpcodeMOVCommand.h>
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
#ifndef INCLUDED_model_vo_SnapshotVO
#include <model/vo/SnapshotVO.h>
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
namespace instruction{

Void OpcodeMOVCommand_obj::__construct()
{
HX_STACK_FRAME("controller.instruction.OpcodeMOVCommand","new",0xe175fb49,"controller.instruction.OpcodeMOVCommand.new","controller/instruction/OpcodeMOVCommand.hx",18,0x3c33fc05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	super::__construct();
}
;
	return null();
}

//OpcodeMOVCommand_obj::~OpcodeMOVCommand_obj() { }

Dynamic OpcodeMOVCommand_obj::__CreateEmpty() { return  new OpcodeMOVCommand_obj; }
hx::ObjectPtr< OpcodeMOVCommand_obj > OpcodeMOVCommand_obj::__new()
{  hx::ObjectPtr< OpcodeMOVCommand_obj > result = new OpcodeMOVCommand_obj();
	result->__construct();
	return result;}

Dynamic OpcodeMOVCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpcodeMOVCommand_obj > result = new OpcodeMOVCommand_obj();
	result->__construct();
	return result;}

Void OpcodeMOVCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.instruction.OpcodeMOVCommand","execute",0xe2e95d9e,"controller.instruction.OpcodeMOVCommand.execute","controller/instruction/OpcodeMOVCommand.hx",21,0x3c33fc05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(23)
		::model::proxy::ProgramProxy programProxy;		HX_STACK_VAR(programProxy,"programProxy");
		HX_STACK_LINE(23)
		programProxy = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(24)
		::model::proxy::SnapshotProxy snapshotProxy;		HX_STACK_VAR(snapshotProxy,"snapshotProxy");
		HX_STACK_LINE(24)
		snapshotProxy = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			::String _g = programProxy->getAddressOrData();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(26)
			::String _switch_1 = (_g);
			if (  ( _switch_1==::AppConstants_obj::ADDRESS_REGISTER1)){
				HX_STACK_LINE(28)
				::String _g1 = snapshotProxy->getAccumulator()->getBinary();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(28)
				snapshotProxy->setRegister1(_g1);
				HX_STACK_LINE(29)
				Array< bool > _g11 = snapshotProxy->getAccumulator()->getCodeArr();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(29)
				this->sendNotification(::AppConstants_obj::REGISTER_1_CHANGED,_g11,null());
			}
			else if (  ( _switch_1==::AppConstants_obj::ADDRESS_REGISTER2)){
				HX_STACK_LINE(31)
				::String _g2 = snapshotProxy->getAccumulator()->getBinary();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(31)
				snapshotProxy->setRegister2(_g2);
				HX_STACK_LINE(32)
				Array< bool > _g3 = snapshotProxy->getAccumulator()->getCodeArr();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(32)
				this->sendNotification(::AppConstants_obj::REGISTER_2_CHANGED,_g3,null());
			}
		}
		HX_STACK_LINE(35)
		this->sendNotification(::AppConstants_obj::BROADCAST_MOV,programProxy->getInstruction()->code,null());
	}
return null();
}



OpcodeMOVCommand_obj::OpcodeMOVCommand_obj()
{
}

Dynamic OpcodeMOVCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OpcodeMOVCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpcodeMOVCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OpcodeMOVCommand_obj,pos),HX_CSTRING("pos")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pos"),
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpcodeMOVCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpcodeMOVCommand_obj::__mClass,"__mClass");
};

#endif

Class OpcodeMOVCommand_obj::__mClass;

void OpcodeMOVCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.instruction.OpcodeMOVCommand"), hx::TCanCast< OpcodeMOVCommand_obj> ,sStaticFields,sMemberFields,
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

void OpcodeMOVCommand_obj::__boot()
{
}

} // end namespace controller
} // end namespace instruction
