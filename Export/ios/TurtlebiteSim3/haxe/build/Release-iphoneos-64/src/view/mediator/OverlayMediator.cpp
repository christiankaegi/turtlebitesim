#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
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
#ifndef INCLUDED_view_component_Overlay
#include <view/component/Overlay.h>
#endif
#ifndef INCLUDED_view_mediator_OverlayMediator
#include <view/mediator/OverlayMediator.h>
#endif
namespace view{
namespace mediator{

Void OverlayMediator_obj::__construct(::view::component::Overlay viewComponent)
{
HX_STACK_FRAME("view.mediator.OverlayMediator","new",0xca6a0823,"view.mediator.OverlayMediator.new","view/mediator/OverlayMediator.hx",18,0x371b7c8d)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(18)
	super::__construct(HX_CSTRING("OverlayMediator"),viewComponent);
}
;
	return null();
}

//OverlayMediator_obj::~OverlayMediator_obj() { }

Dynamic OverlayMediator_obj::__CreateEmpty() { return  new OverlayMediator_obj; }
hx::ObjectPtr< OverlayMediator_obj > OverlayMediator_obj::__new(::view::component::Overlay viewComponent)
{  hx::ObjectPtr< OverlayMediator_obj > result = new OverlayMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic OverlayMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OverlayMediator_obj > result = new OverlayMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void OverlayMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.OverlayMediator","onRegister",0x5af2113f,"view.mediator.OverlayMediator.onRegister","view/mediator/OverlayMediator.hx",21,0x371b7c8d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(23)
		::view::component::Overlay _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > OverlayMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.OverlayMediator","listNotificationInterests",0xa49c2ae3,"view.mediator.OverlayMediator.listNotificationInterests","view/mediator/OverlayMediator.hx",27,0x371b7c8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::SHOW_OVERLAY_UNITS).Add(::AppConstants_obj::HIDE_OVERLAY_UNITS).Add(::AppConstants_obj::SHOW_OVERLAY_FLOW).Add(::AppConstants_obj::HIDE_OVERLAY_FLOW);
}


Void OverlayMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.OverlayMediator","handleNotification",0xbb549e50,"view.mediator.OverlayMediator.handleNotification","view/mediator/OverlayMediator.hx",36,0x371b7c8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(36)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::SHOW_OVERLAY_UNITS)){
			HX_STACK_LINE(39)
			this->getView()->showUnits();
		}
		else if (  ( _switch_1==::AppConstants_obj::HIDE_OVERLAY_UNITS)){
			HX_STACK_LINE(41)
			this->getView()->hideUnits();
		}
		else if (  ( _switch_1==::AppConstants_obj::SHOW_OVERLAY_FLOW)){
			HX_STACK_LINE(43)
			this->getView()->showFlow();
		}
		else if (  ( _switch_1==::AppConstants_obj::HIDE_OVERLAY_FLOW)){
			HX_STACK_LINE(45)
			this->getView()->hideFlow();
		}
	}
return null();
}


Void OverlayMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.OverlayMediator","viewReadyHandler",0x12f24609,"view.mediator.OverlayMediator.viewReadyHandler","view/mediator/OverlayMediator.hx",50,0x371b7c8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(50)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("OverlayMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OverlayMediator_obj,viewReadyHandler,(void))

::view::component::Overlay OverlayMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.OverlayMediator","getView",0xfef2b75e,"view.mediator.OverlayMediator.getView","view/mediator/OverlayMediator.hx",54,0x371b7c8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayMediator_obj,getView,return )

::String OverlayMediator_obj::NAME;


OverlayMediator_obj::OverlayMediator_obj()
{
}

Dynamic OverlayMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
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

Dynamic OverlayMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void OverlayMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OverlayMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OverlayMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OverlayMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OverlayMediator_obj::NAME,"NAME");
};

#endif

Class OverlayMediator_obj::__mClass;

void OverlayMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.OverlayMediator"), hx::TCanCast< OverlayMediator_obj> ,sStaticFields,sMemberFields,
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

void OverlayMediator_obj::__boot()
{
	NAME= HX_CSTRING("OverlayMediator");
}

} // end namespace view
} // end namespace mediator
