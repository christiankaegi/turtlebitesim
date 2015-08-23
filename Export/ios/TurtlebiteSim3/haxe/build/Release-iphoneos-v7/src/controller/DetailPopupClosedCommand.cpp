#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_controller_DetailPopupClosedCommand
#include <controller/DetailPopupClosedCommand.h>
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

Void DetailPopupClosedCommand_obj::__construct()
{
HX_STACK_FRAME("controller.DetailPopupClosedCommand","new",0xe2fd2c48,"controller.DetailPopupClosedCommand.new","controller/DetailPopupClosedCommand.hx",12,0xc3f5cfc7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	super::__construct();
}
;
	return null();
}

//DetailPopupClosedCommand_obj::~DetailPopupClosedCommand_obj() { }

Dynamic DetailPopupClosedCommand_obj::__CreateEmpty() { return  new DetailPopupClosedCommand_obj; }
hx::ObjectPtr< DetailPopupClosedCommand_obj > DetailPopupClosedCommand_obj::__new()
{  hx::ObjectPtr< DetailPopupClosedCommand_obj > result = new DetailPopupClosedCommand_obj();
	result->__construct();
	return result;}

Dynamic DetailPopupClosedCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DetailPopupClosedCommand_obj > result = new DetailPopupClosedCommand_obj();
	result->__construct();
	return result;}

Void DetailPopupClosedCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.DetailPopupClosedCommand","execute",0xc2f67a1d,"controller.DetailPopupClosedCommand.execute","controller/DetailPopupClosedCommand.hx",15,0xc3f5cfc7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(17)
		::model::proxy::AppProxy appProxy;		HX_STACK_VAR(appProxy,"appProxy");
		HX_STACK_LINE(17)
		appProxy = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(18)
		::model::proxy::ClockProxy clockProxy;		HX_STACK_VAR(clockProxy,"clockProxy");
		HX_STACK_LINE(18)
		clockProxy = hx::TCast< model::proxy::ClockProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ClockProxy_obj::NAME));
		HX_STACK_LINE(19)
		::model::proxy::ProgramProxy programProxy;		HX_STACK_VAR(programProxy,"programProxy");
		HX_STACK_LINE(19)
		programProxy = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(21)
		appProxy->setDetailPopupActive(false);
		HX_STACK_LINE(23)
		if ((!(appProxy->getAutoClockOn()))){
			HX_STACK_LINE(26)
			this->sendNotification(::AppConstants_obj::IGNORE_NEXT_CLOCKSIGNAL,null(),null());
			HX_STACK_LINE(27)
			::model::vo::InstructionVO _g = programProxy->getInstruction();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(27)
			this->sendNotification(::AppConstants_obj::CLOCK_ON,_g,null());
			HX_STACK_LINE(28)
			::String _g1 = programProxy->getOpcode();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(28)
			::model::vo::InstructionVO _g2 = programProxy->getInstruction();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(28)
			this->sendNotification(_g1,_g2,null());
		}
	}
return null();
}



DetailPopupClosedCommand_obj::DetailPopupClosedCommand_obj()
{
}

Dynamic DetailPopupClosedCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DetailPopupClosedCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DetailPopupClosedCommand_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(DetailPopupClosedCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DetailPopupClosedCommand_obj::__mClass,"__mClass");
};

#endif

Class DetailPopupClosedCommand_obj::__mClass;

void DetailPopupClosedCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.DetailPopupClosedCommand"), hx::TCanCast< DetailPopupClosedCommand_obj> ,sStaticFields,sMemberFields,
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

void DetailPopupClosedCommand_obj::__boot()
{
}

} // end namespace controller
