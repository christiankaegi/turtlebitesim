#include <hxcpp.h>

#ifndef INCLUDED_controller_StartupCompleteCommand
#include <controller/StartupCompleteCommand.h>
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

Void StartupCompleteCommand_obj::__construct()
{
HX_STACK_FRAME("controller.StartupCompleteCommand","new",0xa6cb40f9,"controller.StartupCompleteCommand.new","controller/StartupCompleteCommand.hx",14,0xa00e2676)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

//StartupCompleteCommand_obj::~StartupCompleteCommand_obj() { }

Dynamic StartupCompleteCommand_obj::__CreateEmpty() { return  new StartupCompleteCommand_obj; }
hx::ObjectPtr< StartupCompleteCommand_obj > StartupCompleteCommand_obj::__new()
{  hx::ObjectPtr< StartupCompleteCommand_obj > result = new StartupCompleteCommand_obj();
	result->__construct();
	return result;}

Dynamic StartupCompleteCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StartupCompleteCommand_obj > result = new StartupCompleteCommand_obj();
	result->__construct();
	return result;}

Void StartupCompleteCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.StartupCompleteCommand","execute",0x734b3b4e,"controller.StartupCompleteCommand.execute","controller/StartupCompleteCommand.hx",19,0xa00e2676)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(19)
		::model::proxy::ClockProxy clockProxy;		HX_STACK_VAR(clockProxy,"clockProxy");
		HX_STACK_LINE(19)
		clockProxy = hx::TCast< model::proxy::ClockProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ClockProxy_obj::NAME));
	}
return null();
}



StartupCompleteCommand_obj::StartupCompleteCommand_obj()
{
}

Dynamic StartupCompleteCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StartupCompleteCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StartupCompleteCommand_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(StartupCompleteCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StartupCompleteCommand_obj::__mClass,"__mClass");
};

#endif

Class StartupCompleteCommand_obj::__mClass;

void StartupCompleteCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.StartupCompleteCommand"), hx::TCanCast< StartupCompleteCommand_obj> ,sStaticFields,sMemberFields,
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

void StartupCompleteCommand_obj::__boot()
{
}

} // end namespace controller
