#include <hxcpp.h>

#ifndef INCLUDED_App
#include <App.h>
#endif
#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_AppMediator
#include <AppMediator.h>
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

Void AppMediator_obj::__construct(::App viewComponent)
{
HX_STACK_FRAME("AppMediator","new",0x6c3bfcc6,"AppMediator.new","AppMediator.hx",13,0x8a3e3d6a)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(13)
	super::__construct(HX_CSTRING("AppMediator"),viewComponent);
}
;
	return null();
}

//AppMediator_obj::~AppMediator_obj() { }

Dynamic AppMediator_obj::__CreateEmpty() { return  new AppMediator_obj; }
hx::ObjectPtr< AppMediator_obj > AppMediator_obj::__new(::App viewComponent)
{  hx::ObjectPtr< AppMediator_obj > result = new AppMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic AppMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppMediator_obj > result = new AppMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void AppMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("AppMediator","onRegister",0x852546fc,"AppMediator.onRegister","AppMediator.hx",16,0x8a3e3d6a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(18)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(18)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(18)
		this->appProxy = _g;
		HX_STACK_LINE(19)
		this->getView()->addEventListener(::events::AppEvent_obj::DRAG_START,this->dragStartHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(20)
		this->getView()->addEventListener(::events::AppEvent_obj::DRAG_STOP,this->dragStopHandler_dyn(),null(),null(),null());
	}
return null();
}


Array< ::String > AppMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("AppMediator","listNotificationInterests",0xf2daf1c6,"AppMediator.listNotificationInterests","AppMediator.hx",25,0x8a3e3d6a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::ADD_TO_ZOOM_VIEW).Add(::AppConstants_obj::ADD_TO_NAVIG_VIEW).Add(::AppConstants_obj::ADD_TO_DETAIL_POPUP_VIEW).Add(::AppConstants_obj::ZOOM_IN).Add(::AppConstants_obj::ZOOM_OUT);
}


Void AppMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("AppMediator","handleNotification",0x877f590d,"AppMediator.handleNotification","AppMediator.hx",35,0x8a3e3d6a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(35)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::ADD_TO_ZOOM_VIEW)){
			HX_STACK_LINE(38)
			Dynamic _g1 = note->getBody();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(38)
			this->getView()->addZoomView(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::ADD_TO_DETAIL_POPUP_VIEW)){
			HX_STACK_LINE(40)
			Dynamic _g1 = note->getBody();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(40)
			this->getView()->addDetailPopupView(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::ADD_TO_NAVIG_VIEW)){
			HX_STACK_LINE(42)
			Dynamic _g2 = note->getBody();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(42)
			this->getView()->addNavigView(_g2);
		}
		else if (  ( _switch_1==::AppConstants_obj::ZOOM_IN)){
			HX_STACK_LINE(44)
			this->getView()->zoomIn();
		}
		else if (  ( _switch_1==::AppConstants_obj::ZOOM_OUT)){
			HX_STACK_LINE(46)
			this->getView()->resetZoom();
		}
	}
return null();
}


Void AppMediator_obj::dragStartHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("AppMediator","dragStartHandler",0x190bb576,"AppMediator.dragStartHandler","AppMediator.hx",51,0x8a3e3d6a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(51)
		if ((!(this->appProxy->getDetailPopupActive()))){
			HX_STACK_LINE(52)
			this->getView()->dragStart();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppMediator_obj,dragStartHandler,(void))

Void AppMediator_obj::dragStopHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("AppMediator","dragStopHandler",0xc75ac1ba,"AppMediator.dragStopHandler","AppMediator.hx",57,0x8a3e3d6a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(57)
		this->getView()->dragStop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppMediator_obj,dragStopHandler,(void))

::App AppMediator_obj::getView( ){
	HX_STACK_FRAME("AppMediator","getView",0xfd1f3981,"AppMediator.getView","AppMediator.hx",61,0x8a3e3d6a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(AppMediator_obj,getView,return )

::String AppMediator_obj::NAME;


AppMediator_obj::AppMediator_obj()
{
}

void AppMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppMediator);
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AppMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AppMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { return appProxy; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dragStopHandler") ) { return dragStopHandler_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dragStartHandler") ) { return dragStartHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleNotification") ) { return handleNotification_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listNotificationInterests") ) { return listNotificationInterests_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(AppMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("appProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("dragStartHandler"),
	HX_CSTRING("dragStopHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AppMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AppMediator_obj::NAME,"NAME");
};

#endif

Class AppMediator_obj::__mClass;

void AppMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("AppMediator"), hx::TCanCast< AppMediator_obj> ,sStaticFields,sMemberFields,
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

void AppMediator_obj::__boot()
{
	NAME= HX_CSTRING("AppMediator");
}

