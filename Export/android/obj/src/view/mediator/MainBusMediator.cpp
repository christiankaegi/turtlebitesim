#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
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
#ifndef INCLUDED_view_component_MainBus
#include <view/component/MainBus.h>
#endif
#ifndef INCLUDED_view_mediator_MainBusMediator
#include <view/mediator/MainBusMediator.h>
#endif
namespace view{
namespace mediator{

Void MainBusMediator_obj::__construct(::view::component::MainBus viewComponent)
{
HX_STACK_FRAME("view.mediator.MainBusMediator","new",0x4eeb479a,"view.mediator.MainBusMediator.new","view/mediator/MainBusMediator.hx",12,0x154318f6)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(12)
	super::__construct(HX_CSTRING("MainBusMediator"),viewComponent);
}
;
	return null();
}

//MainBusMediator_obj::~MainBusMediator_obj() { }

Dynamic MainBusMediator_obj::__CreateEmpty() { return  new MainBusMediator_obj; }
hx::ObjectPtr< MainBusMediator_obj > MainBusMediator_obj::__new(::view::component::MainBus viewComponent)
{  hx::ObjectPtr< MainBusMediator_obj > result = new MainBusMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic MainBusMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainBusMediator_obj > result = new MainBusMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MainBusMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.MainBusMediator","onRegister",0xd919bea8,"view.mediator.MainBusMediator.onRegister","view/mediator/MainBusMediator.hx",15,0x154318f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		::view::component::MainBus _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > MainBusMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.MainBusMediator","listNotificationInterests",0x68dffb9a,"view.mediator.MainBusMediator.listNotificationInterests","view/mediator/MainBusMediator.hx",21,0x154318f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CLOCK_OFF).Add(::AppConstants_obj::CHANGE_CLOCK_SPEED);
}


Void MainBusMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.MainBusMediator","handleNotification",0xe1755cb9,"view.mediator.MainBusMediator.handleNotification","view/mediator/MainBusMediator.hx",25,0x154318f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(25)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(28)
			Dynamic _g1 = note->getBody();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(28)
			this->getView()->show(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::CLOCK_OFF)){
			HX_STACK_LINE(30)
			this->getView()->hide();
		}
		else if (  ( _switch_1==::AppConstants_obj::CHANGE_CLOCK_SPEED)){
			HX_STACK_LINE(37)
			this->getView()->hide();
		}
	}
return null();
}


::view::component::MainBus MainBusMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.MainBusMediator","getView",0x1b2e7e55,"view.mediator.MainBusMediator.getView","view/mediator/MainBusMediator.hx",57,0x154318f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(MainBusMediator_obj,getView,return )

::String MainBusMediator_obj::NAME;


MainBusMediator_obj::MainBusMediator_obj()
{
}

Dynamic MainBusMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleNotification") ) { return handleNotification_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listNotificationInterests") ) { return listNotificationInterests_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MainBusMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MainBusMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainBusMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MainBusMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainBusMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MainBusMediator_obj::NAME,"NAME");
};

#endif

Class MainBusMediator_obj::__mClass;

void MainBusMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.MainBusMediator"), hx::TCanCast< MainBusMediator_obj> ,sStaticFields,sMemberFields,
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

void MainBusMediator_obj::__boot()
{
	NAME= HX_CSTRING("MainBusMediator");
}

} // end namespace view
} // end namespace mediator
