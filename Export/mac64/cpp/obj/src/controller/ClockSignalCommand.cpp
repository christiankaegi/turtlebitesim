#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_controller_ClockSignalCommand
#include <controller/ClockSignalCommand.h>
#endif
#ifndef INCLUDED_model_proxy_AppProxy
#include <model/proxy/AppProxy.h>
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

Void ClockSignalCommand_obj::__construct()
{
HX_STACK_FRAME("controller.ClockSignalCommand","new",0x743d5639,"controller.ClockSignalCommand.new","controller/ClockSignalCommand.hx",21,0x8d265db6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
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
		HX_STACK_FRAME("controller.ClockSignalCommand","execute",0x2590f08e,"controller.ClockSignalCommand.execute","controller/ClockSignalCommand.hx",24,0x8d265db6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(26)
		::model::proxy::AppProxy appProxy;		HX_STACK_VAR(appProxy,"appProxy");
		HX_STACK_LINE(26)
		appProxy = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(27)
		::model::proxy::ClockProxy clockProxy;		HX_STACK_VAR(clockProxy,"clockProxy");
		HX_STACK_LINE(27)
		clockProxy = hx::TCast< model::proxy::ClockProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ClockProxy_obj::NAME));
		HX_STACK_LINE(28)
		::model::proxy::ProgramProxy programProxy;		HX_STACK_VAR(programProxy,"programProxy");
		HX_STACK_LINE(28)
		programProxy = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(29)
		::model::proxy::SnapshotProxy snapshotProxy;		HX_STACK_VAR(snapshotProxy,"snapshotProxy");
		HX_STACK_LINE(29)
		snapshotProxy = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(30)
		bool on;		HX_STACK_VAR(on,"on");
		HX_STACK_LINE(30)
		on = hx::TCast< Bool >::cast(note->getBody());
		HX_STACK_LINE(32)
		::model::vo::InstructionVO _g = programProxy->getInstruction();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		this->instruction = _g;
		HX_STACK_LINE(33)
		appProxy->setStarted(true);
		HX_STACK_LINE(34)
		if ((on)){
			HX_STACK_LINE(40)
			if (((this->instruction != null()))){
				HX_STACK_LINE(41)
				this->sendNotification(::AppConstants_obj::CLOCK_ON,this->instruction,null());
				HX_STACK_LINE(42)
				this->sendNotification(this->instruction->codeOpcode,this->instruction,null());
				struct _Function_3_1{
					inline static bool Block( ::model::proxy::SnapshotProxy &snapshotProxy){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","controller/ClockSignalCommand.hx",44,0x8d265db6)
						{
							HX_STACK_LINE(44)
							int a = snapshotProxy->getAccumulator()->getDecimal();		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(44)
							Float b;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(44)
							{
								HX_STACK_LINE(44)
								int this1 = snapshotProxy->getRegister1()->getDecimal();		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(44)
								int _int = this1;		HX_STACK_VAR(_int,"int");
								HX_STACK_LINE(44)
								if (((_int < (int)0))){
									HX_STACK_LINE(44)
									b = (4294967296.0 + _int);
								}
								else{
									HX_STACK_LINE(44)
									b = (_int + 0.0);
								}
							}
							struct _Function_4_1{
								inline static Float Block( int &a){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","controller/ClockSignalCommand.hx",44,0x8d265db6)
									{
										HX_STACK_LINE(44)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(44)
										return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(44)
							return (_Function_4_1::Block(a) == b);
						}
						return null();
					}
				};
				HX_STACK_LINE(44)
				if ((_Function_3_1::Block(snapshotProxy))){
					HX_STACK_LINE(45)
					this->sendNotification(::AppConstants_obj::ALU_EQUAL_ON,null(),null());
				}
				else{
					HX_STACK_LINE(47)
					this->sendNotification(::AppConstants_obj::ALU_EQUAL_OFF,null(),null());
				}
				HX_STACK_LINE(50)
				int _g1 = programProxy->getInstructionPointer();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(50)
				if (((  (((_g1 == (int)0))) ? bool(!(appProxy->getEnterInstructionActive())) : bool(false) ))){
					HX_STACK_LINE(51)
					this->sendNotification(::AppConstants_obj::LOOP,null(),null());
				}
				HX_STACK_LINE(54)
				if ((!(appProxy->getEnterInstructionActive()))){
					HX_STACK_LINE(55)
					int _g2 = programProxy->getInstructionPointer();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(55)
					int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(55)
					this->pointer = _g3;
					HX_STACK_LINE(65)
					int _g4 = programProxy->getNumberOfInstructions();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(65)
					if (((  ((!(((this->pointer == _g4))))) ? bool((this->pointer == ::AppConstants_obj::INSTRUCTIONS_MAX)) : bool(true) ))){
						HX_STACK_LINE(66)
						this->pointer = (int)0;
					}
					HX_STACK_LINE(68)
					programProxy->setInstructionPointer(this->pointer);
				}
			}
		}
		else{
			HX_STACK_LINE(73)
			::model::vo::InstructionVO _g5 = programProxy->getPreviousInstruction();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(73)
			this->sendNotification(::AppConstants_obj::CLOCK_OFF,_g5,null());
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
	HX_MARK_MEMBER_NAME(pointer,"pointer");
	::org::puremvc::haxe::multicore::patterns::observer::Notifier_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ClockSignalCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(instruction,"instruction");
	HX_VISIT_MEMBER_NAME(pointer,"pointer");
	::org::puremvc::haxe::multicore::patterns::observer::Notifier_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ClockSignalCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pointer") ) { return pointer; }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"instruction") ) { return instruction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClockSignalCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pointer") ) { pointer=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"instruction") ) { instruction=inValue.Cast< ::model::vo::InstructionVO >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClockSignalCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("instruction"));
	outFields->push(HX_CSTRING("pointer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::vo::InstructionVO*/ ,(int)offsetof(ClockSignalCommand_obj,instruction),HX_CSTRING("instruction")},
	{hx::fsInt,(int)offsetof(ClockSignalCommand_obj,pointer),HX_CSTRING("pointer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("instruction"),
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
