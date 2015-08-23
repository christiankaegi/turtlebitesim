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
#ifndef INCLUDED_model_proxy_ClockProxy
#include <model/proxy/ClockProxy.h>
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
#ifndef INCLUDED_view_component_Hotspot
#include <view/component/Hotspot.h>
#endif
#ifndef INCLUDED_view_mediator_HotspotMediator
#include <view/mediator/HotspotMediator.h>
#endif
namespace view{
namespace mediator{

Void HotspotMediator_obj::__construct(::view::component::Hotspot viewComponent)
{
HX_STACK_FRAME("view.mediator.HotspotMediator","new",0x36730422,"view.mediator.HotspotMediator.new","view/mediator/HotspotMediator.hx",10,0xf502456e)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(15)
	this->clockOn = true;
	HX_STACK_LINE(18)
	super::__construct(HX_CSTRING("HotspotMediator"),viewComponent);
}
;
	return null();
}

//HotspotMediator_obj::~HotspotMediator_obj() { }

Dynamic HotspotMediator_obj::__CreateEmpty() { return  new HotspotMediator_obj; }
hx::ObjectPtr< HotspotMediator_obj > HotspotMediator_obj::__new(::view::component::Hotspot viewComponent)
{  hx::ObjectPtr< HotspotMediator_obj > result = new HotspotMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic HotspotMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HotspotMediator_obj > result = new HotspotMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void HotspotMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.HotspotMediator","onRegister",0x6f0e2320,"view.mediator.HotspotMediator.onRegister","view/mediator/HotspotMediator.hx",21,0xf502456e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->getView()->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(23)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(24)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(24)
		this->appProxy = _g;
		HX_STACK_LINE(25)
		::model::proxy::ClockProxy _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		_g1 = hx::TCast< model::proxy::ClockProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ClockProxy_obj::NAME));
		HX_STACK_LINE(25)
		this->clockProxy = _g1;
		HX_STACK_LINE(26)
		::view::component::Hotspot _g2 = this->getView();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(26)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g2,null());
	}
return null();
}


Array< ::String > HotspotMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.HotspotMediator","listNotificationInterests",0xd40f5e22,"view.mediator.HotspotMediator.listNotificationInterests","view/mediator/HotspotMediator.hx",30,0xf502456e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return Array_obj< ::String >::__new();
}


Void HotspotMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.HotspotMediator","handleNotification",0xb996f931,"view.mediator.HotspotMediator.handleNotification","view/mediator/HotspotMediator.hx",33,0xf502456e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
	}
return null();
}


Void HotspotMediator_obj::dataEventHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.HotspotMediator","dataEventHandler",0xb653fb18,"view.mediator.HotspotMediator.dataEventHandler","view/mediator/HotspotMediator.hx",38,0xf502456e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(38)
		Dynamic _g = event->data->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		Dynamic _switch_1 = (_g);
		if (  ( _switch_1==HX_CSTRING("clockButton"))){
			HX_STACK_LINE(40)
			this->sendNotification(::AppConstants_obj::MANUAL_MODE_ON,null(),null());
			HX_STACK_LINE(41)
			if ((this->appProxy->getEnterInstructionOutputValid())){
				HX_STACK_LINE(42)
				bool _g1 = this->clockProxy->getClockOn();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(42)
				this->sendNotification(::AppConstants_obj::CLOCK_SIGNAL,_g1,null());
			}
		}
		else if (  ( _switch_1==HX_CSTRING("accumulatorButton"))){
			HX_STACK_LINE(45)
			this->sendNotification(::AppConstants_obj::DETAIL_ACCUMULATOR,null(),null());
		}
		else if (  ( _switch_1==HX_CSTRING("romButton"))){
			HX_STACK_LINE(47)
			this->sendNotification(::AppConstants_obj::ENTER_INSTRUCTION,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HotspotMediator_obj,dataEventHandler,(void))

Void HotspotMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.HotspotMediator","viewReadyHandler",0x9d4e76aa,"view.mediator.HotspotMediator.viewReadyHandler","view/mediator/HotspotMediator.hx",52,0xf502456e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(52)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("HotspotMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HotspotMediator_obj,viewReadyHandler,(void))

::view::component::Hotspot HotspotMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.HotspotMediator","getView",0x75c31edd,"view.mediator.HotspotMediator.getView","view/mediator/HotspotMediator.hx",56,0xf502456e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(HotspotMediator_obj,getView,return )

::String HotspotMediator_obj::NAME;


HotspotMediator_obj::HotspotMediator_obj()
{
}

void HotspotMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HotspotMediator);
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	HX_MARK_MEMBER_NAME(clockProxy,"clockProxy");
	HX_MARK_MEMBER_NAME(clockOn,"clockOn");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HotspotMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	HX_VISIT_MEMBER_NAME(clockProxy,"clockProxy");
	HX_VISIT_MEMBER_NAME(clockOn,"clockOn");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HotspotMediator_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"clockProxy") ) { return clockProxy; }
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dataEventHandler") ) { return dataEventHandler_dyn(); }
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

Dynamic HotspotMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"clockOn") ) { clockOn=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clockProxy") ) { clockProxy=inValue.Cast< ::model::proxy::ClockProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HotspotMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appProxy"));
	outFields->push(HX_CSTRING("clockProxy"));
	outFields->push(HX_CSTRING("clockOn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(HotspotMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{hx::fsObject /*::model::proxy::ClockProxy*/ ,(int)offsetof(HotspotMediator_obj,clockProxy),HX_CSTRING("clockProxy")},
	{hx::fsBool,(int)offsetof(HotspotMediator_obj,clockOn),HX_CSTRING("clockOn")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("appProxy"),
	HX_CSTRING("clockProxy"),
	HX_CSTRING("clockOn"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("dataEventHandler"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HotspotMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HotspotMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HotspotMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HotspotMediator_obj::NAME,"NAME");
};

#endif

Class HotspotMediator_obj::__mClass;

void HotspotMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.HotspotMediator"), hx::TCanCast< HotspotMediator_obj> ,sStaticFields,sMemberFields,
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

void HotspotMediator_obj::__boot()
{
	NAME= HX_CSTRING("HotspotMediator");
}

} // end namespace view
} // end namespace mediator
