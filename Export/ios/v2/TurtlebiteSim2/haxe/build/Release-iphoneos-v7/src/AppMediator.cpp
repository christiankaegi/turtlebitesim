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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_mediator_Mediator
#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif

Void AppMediator_obj::__construct(::App viewComponent)
{
HX_STACK_FRAME("AppMediator","new",0x6c3bfcc6,"AppMediator.new","AppMediator.hx",11,0x8a3e3d6a)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(11)
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
		HX_STACK_FRAME("AppMediator","onRegister",0x852546fc,"AppMediator.onRegister","AppMediator.hx",14,0x8a3e3d6a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15)
		::haxe::Log_obj::trace(HX_CSTRING("AppMediator on register"),hx::SourceInfo(HX_CSTRING("AppMediator.hx"),15,HX_CSTRING("AppMediator"),HX_CSTRING("onRegister")));
		HX_STACK_LINE(16)
		this->getView()->addEventListener(::events::AppEvent_obj::DRAG_START,this->dragStartHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(17)
		this->getView()->addEventListener(::events::AppEvent_obj::DRAG_STOP,this->dragStopHandler_dyn(),null(),null(),null());
	}
return null();
}


Array< ::String > AppMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("AppMediator","listNotificationInterests",0xf2daf1c6,"AppMediator.listNotificationInterests","AppMediator.hx",22,0x8a3e3d6a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::ADD_TO_ZOOM_VIEW).Add(::AppConstants_obj::ADD_TO_NAVIG_VIEW).Add(::AppConstants_obj::ZOOM_IN).Add(::AppConstants_obj::ZOOM_OUT);
}


Void AppMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("AppMediator","handleNotification",0x877f590d,"AppMediator.handleNotification","AppMediator.hx",31,0x8a3e3d6a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(31)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::ADD_TO_ZOOM_VIEW)){
			HX_STACK_LINE(34)
			Dynamic _g1 = note->getBody();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(34)
			this->getView()->addZoomView(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::ADD_TO_NAVIG_VIEW)){
			HX_STACK_LINE(36)
			Dynamic _g1 = note->getBody();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(36)
			this->getView()->addNavigView(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::ZOOM_IN)){
			HX_STACK_LINE(38)
			this->getView()->zoomIn();
		}
		else if (  ( _switch_1==::AppConstants_obj::ZOOM_OUT)){
			HX_STACK_LINE(40)
			this->getView()->resetZoom();
		}
	}
return null();
}


Void AppMediator_obj::dragStartHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("AppMediator","dragStartHandler",0x190bb576,"AppMediator.dragStartHandler","AppMediator.hx",65,0x8a3e3d6a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(65)
		this->getView()->dragStart();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppMediator_obj,dragStartHandler,(void))

Void AppMediator_obj::dragStopHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("AppMediator","dragStopHandler",0xc75ac1ba,"AppMediator.dragStopHandler","AppMediator.hx",69,0x8a3e3d6a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(69)
		this->getView()->dragStop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppMediator_obj,dragStopHandler,(void))

::App AppMediator_obj::getView( ){
	HX_STACK_FRAME("AppMediator","getView",0xfd1f3981,"AppMediator.getView","AppMediator.hx",73,0x8a3e3d6a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(AppMediator_obj,getView,return )

::String AppMediator_obj::NAME;


AppMediator_obj::AppMediator_obj()
{
}

Dynamic AppMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
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
	return super::__SetField(inName,inValue,inCallProp);
}

void AppMediator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
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

