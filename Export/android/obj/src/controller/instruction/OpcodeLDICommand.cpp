#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_controller_instruction_OpcodeLDICommand
#include <controller/instruction/OpcodeLDICommand.h>
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
namespace instruction{

Void OpcodeLDICommand_obj::__construct()
{
HX_STACK_FRAME("controller.instruction.OpcodeLDICommand","new",0xc8cab24c,"controller.instruction.OpcodeLDICommand.new","controller/instruction/OpcodeLDICommand.hx",11,0x97ee5662)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

//OpcodeLDICommand_obj::~OpcodeLDICommand_obj() { }

Dynamic OpcodeLDICommand_obj::__CreateEmpty() { return  new OpcodeLDICommand_obj; }
hx::ObjectPtr< OpcodeLDICommand_obj > OpcodeLDICommand_obj::__new()
{  hx::ObjectPtr< OpcodeLDICommand_obj > result = new OpcodeLDICommand_obj();
	result->__construct();
	return result;}

Dynamic OpcodeLDICommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpcodeLDICommand_obj > result = new OpcodeLDICommand_obj();
	result->__construct();
	return result;}

Void OpcodeLDICommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.instruction.OpcodeLDICommand","execute",0x12995221,"controller.instruction.OpcodeLDICommand.execute","controller/instruction/OpcodeLDICommand.hx",14,0x97ee5662)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(16)
		::model::proxy::ProgramProxy programProxy;		HX_STACK_VAR(programProxy,"programProxy");
		HX_STACK_LINE(16)
		programProxy = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(17)
		::model::proxy::SnapshotProxy snapshotProxy;		HX_STACK_VAR(snapshotProxy,"snapshotProxy");
		HX_STACK_LINE(17)
		snapshotProxy = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(19)
		::String _g = programProxy->getAddressOrData();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		snapshotProxy->setAccumulator(_g);
		HX_STACK_LINE(20)
		this->sendNotification(::AppConstants_obj::BROADCAST_LDI,programProxy->getInstruction()->codeArr,null());
		HX_STACK_LINE(21)
		this->sendNotification(::AppConstants_obj::ACCUMULATOR_CHANGED,programProxy->getInstruction()->codeArr,null());
	}
return null();
}



OpcodeLDICommand_obj::OpcodeLDICommand_obj()
{
}

Dynamic OpcodeLDICommand_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic OpcodeLDICommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpcodeLDICommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OpcodeLDICommand_obj,pos),HX_CSTRING("pos")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pos"),
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpcodeLDICommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpcodeLDICommand_obj::__mClass,"__mClass");
};

#endif

Class OpcodeLDICommand_obj::__mClass;

void OpcodeLDICommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.instruction.OpcodeLDICommand"), hx::TCanCast< OpcodeLDICommand_obj> ,sStaticFields,sMemberFields,
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

void OpcodeLDICommand_obj::__boot()
{
}

} // end namespace controller
} // end namespace instruction
