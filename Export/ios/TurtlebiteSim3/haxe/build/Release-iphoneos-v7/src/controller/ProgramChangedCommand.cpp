#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_controller_ProgramChangedCommand
#include <controller/ProgramChangedCommand.h>
#endif
#ifndef INCLUDED_model_proxy_ProgramProxy
#include <model/proxy/ProgramProxy.h>
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

Void ProgramChangedCommand_obj::__construct()
{
HX_STACK_FRAME("controller.ProgramChangedCommand","new",0x9582b05b,"controller.ProgramChangedCommand.new","controller/ProgramChangedCommand.hx",15,0xaf020e76)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

//ProgramChangedCommand_obj::~ProgramChangedCommand_obj() { }

Dynamic ProgramChangedCommand_obj::__CreateEmpty() { return  new ProgramChangedCommand_obj; }
hx::ObjectPtr< ProgramChangedCommand_obj > ProgramChangedCommand_obj::__new()
{  hx::ObjectPtr< ProgramChangedCommand_obj > result = new ProgramChangedCommand_obj();
	result->__construct();
	return result;}

Dynamic ProgramChangedCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProgramChangedCommand_obj > result = new ProgramChangedCommand_obj();
	result->__construct();
	return result;}

Void ProgramChangedCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.ProgramChangedCommand","execute",0x712b03b0,"controller.ProgramChangedCommand.execute","controller/ProgramChangedCommand.hx",18,0xaf020e76)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(20)
		::model::proxy::ProgramProxy programProxy;		HX_STACK_VAR(programProxy,"programProxy");
		HX_STACK_LINE(20)
		programProxy = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(22)
		int programPointer = note->getBody();		HX_STACK_VAR(programPointer,"programPointer");
		HX_STACK_LINE(23)
		int _g = programProxy->getProgramPointer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		if (((_g != programPointer))){
			HX_STACK_LINE(24)
			programProxy->setProgramPointer(programPointer);
			HX_STACK_LINE(25)
			this->sendNotification(::AppConstants_obj::RESET,null(),null());
			HX_STACK_LINE(26)
			this->sendNotification(::AppConstants_obj::LOAD_ROM,programPointer,null());
		}
	}
return null();
}



ProgramChangedCommand_obj::ProgramChangedCommand_obj()
{
}

Dynamic ProgramChangedCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProgramChangedCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgramChangedCommand_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ProgramChangedCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgramChangedCommand_obj::__mClass,"__mClass");
};

#endif

Class ProgramChangedCommand_obj::__mClass;

void ProgramChangedCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.ProgramChangedCommand"), hx::TCanCast< ProgramChangedCommand_obj> ,sStaticFields,sMemberFields,
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

void ProgramChangedCommand_obj::__boot()
{
}

} // end namespace controller
