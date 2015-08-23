#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_proxy_AppProxy
#include <model/proxy/AppProxy.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_mediator_Mediator
#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_proxy_Proxy
#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
#endif
#ifndef INCLUDED_view_component_lines_Clock
#include <view/component/lines/Clock.h>
#endif
#ifndef INCLUDED_view_mediator_lines_ClockMediator
#include <view/mediator/lines/ClockMediator.h>
#endif
namespace view{
namespace mediator{
namespace lines{

Void ClockMediator_obj::__construct(::view::component::lines::Clock viewComponent)
{
HX_STACK_FRAME("view.mediator.lines.ClockMediator","new",0x0e744032,"view.mediator.lines.ClockMediator.new","view/mediator/lines/ClockMediator.hx",9,0x64117d5f)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(11)
	this->clockOn = false;
	HX_STACK_LINE(15)
	super::__construct(HX_CSTRING("ClockMediator"),viewComponent);
}
;
	return null();
}

//ClockMediator_obj::~ClockMediator_obj() { }

Dynamic ClockMediator_obj::__CreateEmpty() { return  new ClockMediator_obj; }
hx::ObjectPtr< ClockMediator_obj > ClockMediator_obj::__new(::view::component::lines::Clock viewComponent)
{  hx::ObjectPtr< ClockMediator_obj > result = new ClockMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic ClockMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClockMediator_obj > result = new ClockMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ClockMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.lines.ClockMediator","onRegister",0x6f138910,"view.mediator.lines.ClockMediator.onRegister","view/mediator/lines/ClockMediator.hx",18,0x64117d5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(20)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(20)
		this->appProxy = _g;
		HX_STACK_LINE(21)
		::view::component::lines::Clock _g1 = this->getView();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(21)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g1,null());
	}
return null();
}


Array< ::String > ClockMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.lines.ClockMediator","listNotificationInterests",0x5f0a2632,"view.mediator.lines.ClockMediator.listNotificationInterests","view/mediator/lines/ClockMediator.hx",25,0x64117d5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CLOCK_OFF).Add(::AppConstants_obj::CHANGE_CLOCK_SPEED).Add(::AppConstants_obj::MODEL_RESET_COMPLETE);
}


Void ClockMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.lines.ClockMediator","handleNotification",0xc75bcf21,"view.mediator.lines.ClockMediator.handleNotification","view/mediator/lines/ClockMediator.hx",34,0x64117d5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(34)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(37)
			this->getView()->showLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::CLOCK_OFF)){
			HX_STACK_LINE(39)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::CHANGE_CLOCK_SPEED)){
			HX_STACK_LINE(41)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(43)
			this->getView()->hideAllLines();
		}
	}
return null();
}


Void ClockMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.lines.ClockMediator","viewReadyHandler",0xe30cf09a,"view.mediator.lines.ClockMediator.viewReadyHandler","view/mediator/lines/ClockMediator.hx",48,0x64117d5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(48)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("ClockMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ClockMediator_obj,viewReadyHandler,(void))

::view::component::lines::Clock ClockMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.lines.ClockMediator","getView",0x237ba2ed,"view.mediator.lines.ClockMediator.getView","view/mediator/lines/ClockMediator.hx",52,0x64117d5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(ClockMediator_obj,getView,return )

::String ClockMediator_obj::NAME;


ClockMediator_obj::ClockMediator_obj()
{
}

void ClockMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClockMediator);
	HX_MARK_MEMBER_NAME(clockOn,"clockOn");
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ClockMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clockOn,"clockOn");
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ClockMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"clockOn") ) { return clockOn; }
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { return appProxy; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"viewReadyHandler") ) { return viewReadyHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleNotification") ) { return handleNotification_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listNotificationInterests") ) { return listNotificationInterests_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClockMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"clockOn") ) { clockOn=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClockMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("clockOn"));
	outFields->push(HX_CSTRING("appProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ClockMediator_obj,clockOn),HX_CSTRING("clockOn")},
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(ClockMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("clockOn"),
	HX_CSTRING("appProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClockMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ClockMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClockMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ClockMediator_obj::NAME,"NAME");
};

#endif

Class ClockMediator_obj::__mClass;

void ClockMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.lines.ClockMediator"), hx::TCanCast< ClockMediator_obj> ,sStaticFields,sMemberFields,
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

void ClockMediator_obj::__boot()
{
	NAME= HX_CSTRING("ClockMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace lines