#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_controller_instruction_OpcodeJumpCommand
#include <controller/instruction/OpcodeJumpCommand.h>
#endif
#ifndef INCLUDED_model_proxy_ProgramProxy
#include <model/proxy/ProgramProxy.h>
#endif
#ifndef INCLUDED_model_proxy_SnapshotProxy
#include <model/proxy/SnapshotProxy.h>
#endif
#ifndef INCLUDED_model_vo_DecHexVO
#include <model/vo/DecHexVO.h>
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
#ifndef INCLUDED_utilities_NumberFormat
#include <utilities/NumberFormat.h>
#endif
namespace controller{
namespace instruction{

Void OpcodeJumpCommand_obj::__construct()
{
HX_STACK_FRAME("controller.instruction.OpcodeJumpCommand","new",0x388dcf6f,"controller.instruction.OpcodeJumpCommand.new","controller/instruction/OpcodeJumpCommand.hx",21,0x521a3d63)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	super::__construct();
}
;
	return null();
}

//OpcodeJumpCommand_obj::~OpcodeJumpCommand_obj() { }

Dynamic OpcodeJumpCommand_obj::__CreateEmpty() { return  new OpcodeJumpCommand_obj; }
hx::ObjectPtr< OpcodeJumpCommand_obj > OpcodeJumpCommand_obj::__new()
{  hx::ObjectPtr< OpcodeJumpCommand_obj > result = new OpcodeJumpCommand_obj();
	result->__construct();
	return result;}

Dynamic OpcodeJumpCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpcodeJumpCommand_obj > result = new OpcodeJumpCommand_obj();
	result->__construct();
	return result;}

Void OpcodeJumpCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.instruction.OpcodeJumpCommand","execute",0xe5b53cc4,"controller.instruction.OpcodeJumpCommand.execute","controller/instruction/OpcodeJumpCommand.hx",24,0x521a3d63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(26)
		::model::proxy::ProgramProxy programProxy;		HX_STACK_VAR(programProxy,"programProxy");
		HX_STACK_LINE(26)
		programProxy = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(27)
		::model::proxy::SnapshotProxy snapshotProxy;		HX_STACK_VAR(snapshotProxy,"snapshotProxy");
		HX_STACK_LINE(27)
		snapshotProxy = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(29)
		::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
		HX_STACK_LINE(29)
		instruction = hx::TCast< model::vo::InstructionVO >::cast(note->getBody());
		HX_STACK_LINE(30)
		::String _g = instruction->code.substr((int)4,(int)4);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		::model::vo::DecHexVO newPointer = ::utilities::NumberFormat_obj::binaryToDecimal(_g);		HX_STACK_VAR(newPointer,"newPointer");
		HX_STACK_LINE(31)
		bool equal;		HX_STACK_VAR(equal,"equal");
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			int a = snapshotProxy->getAccumulator()->getDecimal();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(31)
			Float b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(31)
			{
				HX_STACK_LINE(31)
				int this1 = snapshotProxy->getRegister1()->getDecimal();		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(31)
				int _int = this1;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(31)
				if (((_int < (int)0))){
					HX_STACK_LINE(31)
					b = (4294967296.0 + _int);
				}
				else{
					HX_STACK_LINE(31)
					b = (_int + 0.0);
				}
			}
			struct _Function_2_1{
				inline static Float Block( int &a){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","controller/instruction/OpcodeJumpCommand.hx",31,0x521a3d63)
					{
						HX_STACK_LINE(31)
						int _int = a;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(31)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(31)
			equal = (_Function_2_1::Block(a) == b);
		}
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			::String _g1 = instruction->code.substr((int)0,(int)4);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(33)
			::String _switch_1 = (_g1);
			if (  ( _switch_1==::AppConstants_obj::OPCODE_JE)){
				HX_STACK_LINE(35)
				if ((equal)){
					HX_STACK_LINE(36)
					programProxy->setInstructionPointer((newPointer->dec - (int)1));
				}
			}
			else if (  ( _switch_1==::AppConstants_obj::OPCODE_JNE)){
				HX_STACK_LINE(39)
				if ((!(equal))){
					HX_STACK_LINE(40)
					programProxy->setInstructionPointer((newPointer->dec - (int)1));
				}
			}
			else if (  ( _switch_1==::AppConstants_obj::OPCODE_JMP)){
				HX_STACK_LINE(43)
				programProxy->setInstructionPointer((newPointer->dec - (int)1));
			}
		}
	}
return null();
}



OpcodeJumpCommand_obj::OpcodeJumpCommand_obj()
{
}

Dynamic OpcodeJumpCommand_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic OpcodeJumpCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpcodeJumpCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OpcodeJumpCommand_obj,pos),HX_CSTRING("pos")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pos"),
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpcodeJumpCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpcodeJumpCommand_obj::__mClass,"__mClass");
};

#endif

Class OpcodeJumpCommand_obj::__mClass;

void OpcodeJumpCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.instruction.OpcodeJumpCommand"), hx::TCanCast< OpcodeJumpCommand_obj> ,sStaticFields,sMemberFields,
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

void OpcodeJumpCommand_obj::__boot()
{
}

} // end namespace controller
} // end namespace instruction
