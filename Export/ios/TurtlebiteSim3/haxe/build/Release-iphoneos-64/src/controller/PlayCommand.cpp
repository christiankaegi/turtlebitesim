#include <hxcpp.h>

#ifndef INCLUDED_controller_PlayCommand
#include <controller/PlayCommand.h>
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

Void PlayCommand_obj::__construct()
{
HX_STACK_FRAME("controller.PlayCommand","new",0x234b1637,"controller.PlayCommand.new","controller/PlayCommand.hx",15,0xa5367cda)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

//PlayCommand_obj::~PlayCommand_obj() { }

Dynamic PlayCommand_obj::__CreateEmpty() { return  new PlayCommand_obj; }
hx::ObjectPtr< PlayCommand_obj > PlayCommand_obj::__new()
{  hx::ObjectPtr< PlayCommand_obj > result = new PlayCommand_obj();
	result->__construct();
	return result;}

Dynamic PlayCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayCommand_obj > result = new PlayCommand_obj();
	result->__construct();
	return result;}

Void PlayCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.PlayCommand","execute",0xa7b1878c,"controller.PlayCommand.execute","controller/PlayCommand.hx",18,0xa5367cda)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(20)
		::model::proxy::AppProxy appProxy;		HX_STACK_VAR(appProxy,"appProxy");
		HX_STACK_LINE(20)
		appProxy = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(21)
		::model::proxy::ClockProxy clockProxy;		HX_STACK_VAR(clockProxy,"clockProxy");
		HX_STACK_LINE(21)
		clockProxy = hx::TCast< model::proxy::ClockProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ClockProxy_obj::NAME));
		HX_STACK_LINE(23)
		appProxy->setAutoClockOn(true);
		HX_STACK_LINE(24)
		clockProxy->startClock();
	}
return null();
}



PlayCommand_obj::PlayCommand_obj()
{
}

Dynamic PlayCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayCommand_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(PlayCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayCommand_obj::__mClass,"__mClass");
};

#endif

Class PlayCommand_obj::__mClass;

void PlayCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.PlayCommand"), hx::TCanCast< PlayCommand_obj> ,sStaticFields,sMemberFields,
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

void PlayCommand_obj::__boot()
{
}

} // end namespace controller
