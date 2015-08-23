#include <hxcpp.h>

#ifndef INCLUDED_App
#include <App.h>
#endif
#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_AppFacade
#include <AppFacade.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_controller_ChangeClockSpeedCommand
#include <controller/ChangeClockSpeedCommand.h>
#endif
#ifndef INCLUDED_controller_ClockSignalCommand
#include <controller/ClockSignalCommand.h>
#endif
#ifndef INCLUDED_controller_DetailAccumulatorCommand
#include <controller/DetailAccumulatorCommand.h>
#endif
#ifndef INCLUDED_controller_EditRomCommand
#include <controller/EditRomCommand.h>
#endif
#ifndef INCLUDED_controller_EnterInstructionCommand
#include <controller/EnterInstructionCommand.h>
#endif
#ifndef INCLUDED_controller_ManualModeOnCommand
#include <controller/ManualModeOnCommand.h>
#endif
#ifndef INCLUDED_controller_PauseCommand
#include <controller/PauseCommand.h>
#endif
#ifndef INCLUDED_controller_PlayCommand
#include <controller/PlayCommand.h>
#endif
#ifndef INCLUDED_controller_ProgramChangedCommand
#include <controller/ProgramChangedCommand.h>
#endif
#ifndef INCLUDED_controller_ResetCommand
#include <controller/ResetCommand.h>
#endif
#ifndef INCLUDED_controller_StartupCompleteCommand
#include <controller/StartupCompleteCommand.h>
#endif
#ifndef INCLUDED_controller_instruction_OpcodeALUCommand
#include <controller/instruction/OpcodeALUCommand.h>
#endif
#ifndef INCLUDED_controller_instruction_OpcodeJumpCommand
#include <controller/instruction/OpcodeJumpCommand.h>
#endif
#ifndef INCLUDED_controller_instruction_OpcodeLDACommand
#include <controller/instruction/OpcodeLDACommand.h>
#endif
#ifndef INCLUDED_controller_instruction_OpcodeLDICommand
#include <controller/instruction/OpcodeLDICommand.h>
#endif
#ifndef INCLUDED_controller_instruction_OpcodeMOVCommand
#include <controller/instruction/OpcodeMOVCommand.h>
#endif
#ifndef INCLUDED_controller_instruction_OpcodeSDACommand
#include <controller/instruction/OpcodeSDACommand.h>
#endif
#ifndef INCLUDED_controller_startup_PrepareModelCommand
#include <controller/startup/PrepareModelCommand.h>
#endif
#ifndef INCLUDED_controller_startup_PrepareViewCommand
#include <controller/startup/PrepareViewCommand.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_ICommand
#include <org/puremvc/haxe/multicore/interfaces/ICommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade
#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_command_SimpleCommand
#include <org/puremvc/haxe/multicore/patterns/command/SimpleCommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_facade_Facade
#include <org/puremvc/haxe/multicore/patterns/facade/Facade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif

Void AppFacade_obj::__construct(::String key)
{
HX_STACK_FRAME("AppFacade","new",0x7eccbe2d,"AppFacade.new","AppFacade.hx",30,0x4200e5e3)
HX_STACK_THIS(this)
HX_STACK_ARG(key,"key")
{
	HX_STACK_LINE(30)
	super::__construct(key);
}
;
	return null();
}

//AppFacade_obj::~AppFacade_obj() { }

Dynamic AppFacade_obj::__CreateEmpty() { return  new AppFacade_obj; }
hx::ObjectPtr< AppFacade_obj > AppFacade_obj::__new(::String key)
{  hx::ObjectPtr< AppFacade_obj > result = new AppFacade_obj();
	result->__construct(key);
	return result;}

Dynamic AppFacade_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppFacade_obj > result = new AppFacade_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *AppFacade_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::IFacade_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::IFacade_obj *();
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::INotifier_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::INotifier_obj *();
	return super::__ToInterface(inType);
}

Void AppFacade_obj::startup( ::App app){
{
		HX_STACK_FRAME("AppFacade","startup",0x50338f8a,"AppFacade.startup","AppFacade.hx",42,0x4200e5e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(app,"app")
		HX_STACK_LINE(42)
		this->sendNotification(::AppConstants_obj::PREPARE_MODEL,app,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppFacade_obj,startup,(void))

Void AppFacade_obj::initializeController( ){
{
		HX_STACK_FRAME("AppFacade","initializeController",0x10a64d9f,"AppFacade.initializeController","AppFacade.hx",45,0x4200e5e3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->super::initializeController();
		HX_STACK_LINE(47)
		this->registerCommand(::AppConstants_obj::PREPARE_MODEL,hx::ClassOf< ::controller::startup::PrepareModelCommand >());
		HX_STACK_LINE(48)
		this->registerCommand(::AppConstants_obj::PROXY_INITIALIZED,hx::ClassOf< ::controller::startup::PrepareModelCommand >());
		HX_STACK_LINE(49)
		this->registerCommand(::AppConstants_obj::PREPARE_VIEW,hx::ClassOf< ::controller::startup::PrepareViewCommand >());
		HX_STACK_LINE(50)
		this->registerCommand(::AppConstants_obj::MEDIATOR_INITIALIZED,hx::ClassOf< ::controller::startup::PrepareViewCommand >());
		HX_STACK_LINE(51)
		this->registerCommand(::AppConstants_obj::CLOCK_SIGNAL,hx::ClassOf< ::controller::ClockSignalCommand >());
		HX_STACK_LINE(52)
		this->registerCommand(::AppConstants_obj::CHANGE_CLOCK_SPEED,hx::ClassOf< ::controller::ChangeClockSpeedCommand >());
		HX_STACK_LINE(53)
		this->registerCommand(::AppConstants_obj::STARTUP_COMPLETE,hx::ClassOf< ::controller::StartupCompleteCommand >());
		HX_STACK_LINE(54)
		this->registerCommand(::AppConstants_obj::OPCODE_MOV,hx::ClassOf< ::controller::instruction::OpcodeMOVCommand >());
		HX_STACK_LINE(55)
		this->registerCommand(::AppConstants_obj::OPCODE_LDI,hx::ClassOf< ::controller::instruction::OpcodeLDICommand >());
		HX_STACK_LINE(56)
		this->registerCommand(::AppConstants_obj::OPCODE_LDA,hx::ClassOf< ::controller::instruction::OpcodeLDACommand >());
		HX_STACK_LINE(57)
		this->registerCommand(::AppConstants_obj::OPCODE_SDA,hx::ClassOf< ::controller::instruction::OpcodeSDACommand >());
		HX_STACK_LINE(58)
		this->registerCommand(::AppConstants_obj::OPCODE_ALU,hx::ClassOf< ::controller::instruction::OpcodeALUCommand >());
		HX_STACK_LINE(59)
		this->registerCommand(::AppConstants_obj::OPCODE_JE,hx::ClassOf< ::controller::instruction::OpcodeJumpCommand >());
		HX_STACK_LINE(60)
		this->registerCommand(::AppConstants_obj::OPCODE_JNE,hx::ClassOf< ::controller::instruction::OpcodeJumpCommand >());
		HX_STACK_LINE(61)
		this->registerCommand(::AppConstants_obj::OPCODE_JMP,hx::ClassOf< ::controller::instruction::OpcodeJumpCommand >());
		HX_STACK_LINE(62)
		this->registerCommand(::AppConstants_obj::RESET,hx::ClassOf< ::controller::ResetCommand >());
		HX_STACK_LINE(63)
		this->registerCommand(::AppConstants_obj::POWER_OFF,hx::ClassOf< ::controller::ResetCommand >());
		HX_STACK_LINE(64)
		this->registerCommand(::AppConstants_obj::PLAY,hx::ClassOf< ::controller::PlayCommand >());
		HX_STACK_LINE(65)
		this->registerCommand(::AppConstants_obj::PAUSE,hx::ClassOf< ::controller::PauseCommand >());
		HX_STACK_LINE(66)
		this->registerCommand(::AppConstants_obj::EDIT_ROM,hx::ClassOf< ::controller::EditRomCommand >());
		HX_STACK_LINE(67)
		this->registerCommand(::AppConstants_obj::MANUAL_MODE_ON,hx::ClassOf< ::controller::ManualModeOnCommand >());
		HX_STACK_LINE(68)
		this->registerCommand(::AppConstants_obj::PROGRAM_CHANGED,hx::ClassOf< ::controller::ProgramChangedCommand >());
		HX_STACK_LINE(69)
		this->registerCommand(::AppConstants_obj::DETAIL_ACCUMULATOR,hx::ClassOf< ::controller::DetailAccumulatorCommand >());
		HX_STACK_LINE(70)
		this->registerCommand(::AppConstants_obj::ENTER_INSTRUCTION,hx::ClassOf< ::controller::EnterInstructionCommand >());
	}
return null();
}


::AppFacade AppFacade_obj::getInstance( ::String key){
	HX_STACK_FRAME("AppFacade","getInstance",0x9fd3e518,"AppFacade.getInstance","AppFacade.hx",33,0x4200e5e3)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(34)
	if ((!(::org::puremvc::haxe::multicore::patterns::facade::Facade_obj::instanceMap->exists(key)))){
		HX_STACK_LINE(35)
		::AppFacade _g = ::AppFacade_obj::__new(key);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		::org::puremvc::haxe::multicore::patterns::facade::Facade_obj::instanceMap->set(key,_g);
	}
	HX_STACK_LINE(37)
	return hx::TCast< AppFacade >::cast(::org::puremvc::haxe::multicore::patterns::facade::Facade_obj::instanceMap->get(key));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppFacade_obj,getInstance,return )


AppFacade_obj::AppFacade_obj()
{
}

Dynamic AppFacade_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"startup") ) { return startup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"initializeController") ) { return initializeController_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppFacade_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AppFacade_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getInstance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("startup"),
	HX_CSTRING("initializeController"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppFacade_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppFacade_obj::__mClass,"__mClass");
};

#endif

Class AppFacade_obj::__mClass;

void AppFacade_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("AppFacade"), hx::TCanCast< AppFacade_obj> ,sStaticFields,sMemberFields,
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

void AppFacade_obj::__boot()
{
}

