#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_controller_instruction_OpcodeALUCommand
#include <controller/instruction/OpcodeALUCommand.h>
#endif
#ifndef INCLUDED_model_proxy_ProgramProxy
#include <model/proxy/ProgramProxy.h>
#endif
#ifndef INCLUDED_model_proxy_SnapshotProxy
#include <model/proxy/SnapshotProxy.h>
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
#ifndef INCLUDED_utilities_NumberFormat
#include <utilities/NumberFormat.h>
#endif
namespace controller{
namespace instruction{

Void OpcodeALUCommand_obj::__construct()
{
HX_STACK_FRAME("controller.instruction.OpcodeALUCommand","new",0xae552cb3,"controller.instruction.OpcodeALUCommand.new","controller/instruction/OpcodeALUCommand.hx",13,0xb11165db)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	super::__construct();
}
;
	return null();
}

//OpcodeALUCommand_obj::~OpcodeALUCommand_obj() { }

Dynamic OpcodeALUCommand_obj::__CreateEmpty() { return  new OpcodeALUCommand_obj; }
hx::ObjectPtr< OpcodeALUCommand_obj > OpcodeALUCommand_obj::__new()
{  hx::ObjectPtr< OpcodeALUCommand_obj > result = new OpcodeALUCommand_obj();
	result->__construct();
	return result;}

Dynamic OpcodeALUCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpcodeALUCommand_obj > result = new OpcodeALUCommand_obj();
	result->__construct();
	return result;}

Void OpcodeALUCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.instruction.OpcodeALUCommand","execute",0xb62e8c08,"controller.instruction.OpcodeALUCommand.execute","controller/instruction/OpcodeALUCommand.hx",16,0xb11165db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(18)
		::model::proxy::ProgramProxy programProxy;		HX_STACK_VAR(programProxy,"programProxy");
		HX_STACK_LINE(18)
		programProxy = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(19)
		::model::proxy::SnapshotProxy snapshotProxy;		HX_STACK_VAR(snapshotProxy,"snapshotProxy");
		HX_STACK_LINE(19)
		snapshotProxy = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(21)
		int reg1 = snapshotProxy->getRegister1()->getDecimal();		HX_STACK_VAR(reg1,"reg1");
		HX_STACK_LINE(22)
		int accu = snapshotProxy->getAccumulator()->getDecimal();		HX_STACK_VAR(accu,"accu");
		HX_STACK_LINE(23)
		int result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			::String _g = programProxy->getAddressOrData();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			::String _switch_1 = (_g);
			if (  ( _switch_1==::AppConstants_obj::ADDRESS_ADD)){
				HX_STACK_LINE(26)
				result = (reg1 + accu);
				HX_STACK_LINE(27)
				if (((result > (int)15))){
					HX_STACK_LINE(28)
					result = (hx::Mod(result,(int)15) - (int)1);
				}
			}
			else if (  ( _switch_1==::AppConstants_obj::ADDRESS_SUB)){
				HX_STACK_LINE(31)
				result = (accu - reg1);
				HX_STACK_LINE(32)
				if (((result < (int)0))){
					HX_STACK_LINE(33)
					result = ((int)15 - hx::Mod(result,(int)15));
				}
			}
			else if (  ( _switch_1==::AppConstants_obj::ADDRESS_INC)){
				HX_STACK_LINE(36)
				result = (accu + (int)1);
				HX_STACK_LINE(37)
				if (((result > (int)15))){
					HX_STACK_LINE(38)
					result = (hx::Mod(result,(int)15) - (int)1);
				}
			}
			else if (  ( _switch_1==::AppConstants_obj::ADDRESS_DEC)){
				HX_STACK_LINE(41)
				result = (accu - (int)1);
				HX_STACK_LINE(42)
				if (((result < (int)0))){
					HX_STACK_LINE(43)
					result = (int)15;
				}
			}
		}
		HX_STACK_LINE(47)
		::String bin = ::utilities::NumberFormat_obj::decimalToBinary(result);		HX_STACK_VAR(bin,"bin");
		HX_STACK_LINE(48)
		snapshotProxy->setAccumulator(bin);
		HX_STACK_LINE(49)
		::model::vo::SnapshotVO _g = ::model::vo::SnapshotVO_obj::__new(bin,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		this->sendNotification(::AppConstants_obj::ALU_OUT_ACTIVE,_g,null());
		HX_STACK_LINE(50)
		Array< bool > _g1 = snapshotProxy->getAccumulator()->getCodeArr();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		this->sendNotification(::AppConstants_obj::ACCUMULATOR_CHANGED,_g1,null());
	}
return null();
}



OpcodeALUCommand_obj::OpcodeALUCommand_obj()
{
}

Dynamic OpcodeALUCommand_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic OpcodeALUCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpcodeALUCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OpcodeALUCommand_obj,pos),HX_CSTRING("pos")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pos"),
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpcodeALUCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpcodeALUCommand_obj::__mClass,"__mClass");
};

#endif

Class OpcodeALUCommand_obj::__mClass;

void OpcodeALUCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.instruction.OpcodeALUCommand"), hx::TCanCast< OpcodeALUCommand_obj> ,sStaticFields,sMemberFields,
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

void OpcodeALUCommand_obj::__boot()
{
}

} // end namespace controller
} // end namespace instruction
