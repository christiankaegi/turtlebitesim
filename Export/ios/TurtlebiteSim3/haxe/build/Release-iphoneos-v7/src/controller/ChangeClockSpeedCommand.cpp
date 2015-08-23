#include <hxcpp.h>

#ifndef INCLUDED_controller_ChangeClockSpeedCommand
#include <controller/ChangeClockSpeedCommand.h>
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

Void ChangeClockSpeedCommand_obj::__construct()
{
HX_STACK_FRAME("controller.ChangeClockSpeedCommand","new",0x5c4386e2,"controller.ChangeClockSpeedCommand.new","controller/ChangeClockSpeedCommand.hx",11,0xfbeb280f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

//ChangeClockSpeedCommand_obj::~ChangeClockSpeedCommand_obj() { }

Dynamic ChangeClockSpeedCommand_obj::__CreateEmpty() { return  new ChangeClockSpeedCommand_obj; }
hx::ObjectPtr< ChangeClockSpeedCommand_obj > ChangeClockSpeedCommand_obj::__new()
{  hx::ObjectPtr< ChangeClockSpeedCommand_obj > result = new ChangeClockSpeedCommand_obj();
	result->__construct();
	return result;}

Dynamic ChangeClockSpeedCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ChangeClockSpeedCommand_obj > result = new ChangeClockSpeedCommand_obj();
	result->__construct();
	return result;}

Void ChangeClockSpeedCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.ChangeClockSpeedCommand","execute",0x132729b7,"controller.ChangeClockSpeedCommand.execute","controller/ChangeClockSpeedCommand.hx",14,0xfbeb280f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(16)
		::String pointer;		HX_STACK_VAR(pointer,"pointer");
		HX_STACK_LINE(16)
		pointer = hx::TCast< String >::cast(note->getBody());
		HX_STACK_LINE(17)
		::model::proxy::ClockProxy clockProxy;		HX_STACK_VAR(clockProxy,"clockProxy");
		HX_STACK_LINE(17)
		clockProxy = hx::TCast< model::proxy::ClockProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ClockProxy_obj::NAME));
		HX_STACK_LINE(19)
		if (((pointer == HX_CSTRING("+")))){
			HX_STACK_LINE(20)
			int _g = clockProxy->getCurrentFrequencyPointer();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(20)
			int _g1 = (_g + (int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(20)
			this->pos = _g1;
		}
		HX_STACK_LINE(22)
		clockProxy->changeClockSpeed(this->pos);
	}
return null();
}



ChangeClockSpeedCommand_obj::ChangeClockSpeedCommand_obj()
{
}

Dynamic ChangeClockSpeedCommand_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ChangeClockSpeedCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChangeClockSpeedCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ChangeClockSpeedCommand_obj,pos),HX_CSTRING("pos")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pos"),
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ChangeClockSpeedCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ChangeClockSpeedCommand_obj::__mClass,"__mClass");
};

#endif

Class ChangeClockSpeedCommand_obj::__mClass;

void ChangeClockSpeedCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.ChangeClockSpeedCommand"), hx::TCanCast< ChangeClockSpeedCommand_obj> ,sStaticFields,sMemberFields,
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

void ChangeClockSpeedCommand_obj::__boot()
{
}

} // end namespace controller
