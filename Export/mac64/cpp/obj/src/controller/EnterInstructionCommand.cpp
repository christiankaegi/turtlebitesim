#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_controller_EnterInstructionCommand
#include <controller/EnterInstructionCommand.h>
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
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IMediator
#include <org/puremvc/haxe/multicore/interfaces/IMediator.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_mediator_Mediator
#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_proxy_Proxy
#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
#endif
#ifndef INCLUDED_view_component_EnterInstruction
#include <view/component/EnterInstruction.h>
#endif
#ifndef INCLUDED_view_mediator_EnterInstructionMediator
#include <view/mediator/EnterInstructionMediator.h>
#endif
namespace controller{

Void EnterInstructionCommand_obj::__construct()
{
HX_STACK_FRAME("controller.EnterInstructionCommand","new",0x49fe4095,"controller.EnterInstructionCommand.new","controller/EnterInstructionCommand.hx",15,0xe60665bc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

//EnterInstructionCommand_obj::~EnterInstructionCommand_obj() { }

Dynamic EnterInstructionCommand_obj::__CreateEmpty() { return  new EnterInstructionCommand_obj; }
hx::ObjectPtr< EnterInstructionCommand_obj > EnterInstructionCommand_obj::__new()
{  hx::ObjectPtr< EnterInstructionCommand_obj > result = new EnterInstructionCommand_obj();
	result->__construct();
	return result;}

Dynamic EnterInstructionCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnterInstructionCommand_obj > result = new EnterInstructionCommand_obj();
	result->__construct();
	return result;}

Void EnterInstructionCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.EnterInstructionCommand","execute",0x97ec38ea,"controller.EnterInstructionCommand.execute","controller/EnterInstructionCommand.hx",20,0xe60665bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(20)
		if ((!(this->get_facade()->hasMediator(HX_CSTRING("EnterInstructionMediator"))))){
			HX_STACK_LINE(22)
			::model::proxy::AppProxy appProxy;		HX_STACK_VAR(appProxy,"appProxy");
			HX_STACK_LINE(22)
			appProxy = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
			HX_STACK_LINE(23)
			::model::proxy::ProgramProxy programProxy;		HX_STACK_VAR(programProxy,"programProxy");
			HX_STACK_LINE(23)
			programProxy = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
			HX_STACK_LINE(24)
			::model::proxy::ClockProxy clockProxy;		HX_STACK_VAR(clockProxy,"clockProxy");
			HX_STACK_LINE(24)
			clockProxy = hx::TCast< model::proxy::ClockProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ClockProxy_obj::NAME));
			HX_STACK_LINE(26)
			appProxy->setAutoClockOn(false);
			HX_STACK_LINE(27)
			clockProxy->stopClock();
			HX_STACK_LINE(28)
			this->sendNotification(::AppConstants_obj::PAUSE,null(),null());
			HX_STACK_LINE(29)
			appProxy->setEnterInstructionActive(true);
			HX_STACK_LINE(30)
			::model::vo::InstructionVO _g = programProxy->getManualInstruction();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(30)
			::view::component::EnterInstruction _g1 = ::view::component::EnterInstruction_obj::__new(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(30)
			::view::mediator::EnterInstructionMediator _g2 = ::view::mediator::EnterInstructionMediator_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(30)
			this->get_facade()->registerMediator(_g2);
		}
	}
return null();
}



EnterInstructionCommand_obj::EnterInstructionCommand_obj()
{
}

Dynamic EnterInstructionCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnterInstructionCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void EnterInstructionCommand_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnterInstructionCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnterInstructionCommand_obj::__mClass,"__mClass");
};

#endif

Class EnterInstructionCommand_obj::__mClass;

void EnterInstructionCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.EnterInstructionCommand"), hx::TCanCast< EnterInstructionCommand_obj> ,sStaticFields,sMemberFields,
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

void EnterInstructionCommand_obj::__boot()
{
}

} // end namespace controller
