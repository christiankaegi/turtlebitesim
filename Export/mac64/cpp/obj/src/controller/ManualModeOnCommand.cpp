#include <hxcpp.h>

#ifndef INCLUDED_controller_ManualModeOnCommand
#include <controller/ManualModeOnCommand.h>
#endif
#ifndef INCLUDED_model_proxy_AppProxy
#include <model/proxy/AppProxy.h>
#endif
#ifndef INCLUDED_model_proxy_ClockProxy
#include <model/proxy/ClockProxy.h>
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

Void ManualModeOnCommand_obj::__construct()
{
HX_STACK_FRAME("controller.ManualModeOnCommand","new",0x0bd3e863,"controller.ManualModeOnCommand.new","controller/ManualModeOnCommand.hx",16,0x50093d2e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
}
;
	return null();
}

//ManualModeOnCommand_obj::~ManualModeOnCommand_obj() { }

Dynamic ManualModeOnCommand_obj::__CreateEmpty() { return  new ManualModeOnCommand_obj; }
hx::ObjectPtr< ManualModeOnCommand_obj > ManualModeOnCommand_obj::__new()
{  hx::ObjectPtr< ManualModeOnCommand_obj > result = new ManualModeOnCommand_obj();
	result->__construct();
	return result;}

Dynamic ManualModeOnCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ManualModeOnCommand_obj > result = new ManualModeOnCommand_obj();
	result->__construct();
	return result;}

Void ManualModeOnCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.ManualModeOnCommand","execute",0xefacdfb8,"controller.ManualModeOnCommand.execute","controller/ManualModeOnCommand.hx",19,0x50093d2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(21)
		::model::proxy::AppProxy appProxy;		HX_STACK_VAR(appProxy,"appProxy");
		HX_STACK_LINE(21)
		appProxy = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(22)
		::model::proxy::ClockProxy clockProxy;		HX_STACK_VAR(clockProxy,"clockProxy");
		HX_STACK_LINE(22)
		clockProxy = hx::TCast< model::proxy::ClockProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ClockProxy_obj::NAME));
		HX_STACK_LINE(24)
		appProxy->setAutoClockOn(false);
		HX_STACK_LINE(25)
		clockProxy->stopClock();
		HX_STACK_LINE(26)
		clockProxy->toggleClockOn();
	}
return null();
}



ManualModeOnCommand_obj::ManualModeOnCommand_obj()
{
}

Dynamic ManualModeOnCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ManualModeOnCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ManualModeOnCommand_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ManualModeOnCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManualModeOnCommand_obj::__mClass,"__mClass");
};

#endif

Class ManualModeOnCommand_obj::__mClass;

void ManualModeOnCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.ManualModeOnCommand"), hx::TCanCast< ManualModeOnCommand_obj> ,sStaticFields,sMemberFields,
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

void ManualModeOnCommand_obj::__boot()
{
}

} // end namespace controller
