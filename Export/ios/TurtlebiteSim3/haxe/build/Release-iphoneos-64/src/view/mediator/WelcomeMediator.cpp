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
#ifndef INCLUDED_view_component_Welcome
#include <view/component/Welcome.h>
#endif
#ifndef INCLUDED_view_mediator_WelcomeMediator
#include <view/mediator/WelcomeMediator.h>
#endif
namespace view{
namespace mediator{

Void WelcomeMediator_obj::__construct(::view::component::Welcome viewComponent)
{
HX_STACK_FRAME("view.mediator.WelcomeMediator","new",0x0f111c35,"view.mediator.WelcomeMediator.new","view/mediator/WelcomeMediator.hx",18,0x39b610bb)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(18)
	super::__construct(HX_CSTRING("WelcomeMediator"),viewComponent);
}
;
	return null();
}

//WelcomeMediator_obj::~WelcomeMediator_obj() { }

Dynamic WelcomeMediator_obj::__CreateEmpty() { return  new WelcomeMediator_obj; }
hx::ObjectPtr< WelcomeMediator_obj > WelcomeMediator_obj::__new(::view::component::Welcome viewComponent)
{  hx::ObjectPtr< WelcomeMediator_obj > result = new WelcomeMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic WelcomeMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WelcomeMediator_obj > result = new WelcomeMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void WelcomeMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.WelcomeMediator","onRegister",0xffa1836d,"view.mediator.WelcomeMediator.onRegister","view/mediator/WelcomeMediator.hx",21,0x39b610bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(23)
		::view::component::Welcome _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > WelcomeMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.WelcomeMediator","listNotificationInterests",0xd9c45c75,"view.mediator.WelcomeMediator.listNotificationInterests","view/mediator/WelcomeMediator.hx",27,0x39b610bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::POWER_ON).Add(::AppConstants_obj::POWER_OFF).Add(::AppConstants_obj::SHOW_ARCHITECTURE);
}


Void WelcomeMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.WelcomeMediator","handleNotification",0x8f26ee7e,"view.mediator.WelcomeMediator.handleNotification","view/mediator/WelcomeMediator.hx",36,0x39b610bb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(36)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::POWER_ON)){
			HX_STACK_LINE(39)
			this->getView()->hide();
		}
		else if (  ( _switch_1==::AppConstants_obj::POWER_OFF)){
			HX_STACK_LINE(41)
			this->getView()->show();
		}
		else if (  ( _switch_1==::AppConstants_obj::SHOW_ARCHITECTURE)){
			HX_STACK_LINE(43)
			this->getView()->toggleArchitecture();
		}
	}
return null();
}


Void WelcomeMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.WelcomeMediator","viewReadyHandler",0xec9e8eb7,"view.mediator.WelcomeMediator.viewReadyHandler","view/mediator/WelcomeMediator.hx",48,0x39b610bb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(48)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("WelcomeMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WelcomeMediator_obj,viewReadyHandler,(void))

::view::component::Welcome WelcomeMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.WelcomeMediator","getView",0x83ea3c70,"view.mediator.WelcomeMediator.getView","view/mediator/WelcomeMediator.hx",52,0x39b610bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(WelcomeMediator_obj,getView,return )

::String WelcomeMediator_obj::NAME;


WelcomeMediator_obj::WelcomeMediator_obj()
{
}

Dynamic WelcomeMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic WelcomeMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void WelcomeMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(WelcomeMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WelcomeMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WelcomeMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WelcomeMediator_obj::NAME,"NAME");
};

#endif

Class WelcomeMediator_obj::__mClass;

void WelcomeMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.WelcomeMediator"), hx::TCanCast< WelcomeMediator_obj> ,sStaticFields,sMemberFields,
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

void WelcomeMediator_obj::__boot()
{
	NAME= HX_CSTRING("WelcomeMediator");
}

} // end namespace view
} // end namespace mediator
