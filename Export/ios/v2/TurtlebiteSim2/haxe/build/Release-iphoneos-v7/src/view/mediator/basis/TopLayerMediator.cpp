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
#ifndef INCLUDED_view_component_basis_TopLayer
#include <view/component/basis/TopLayer.h>
#endif
#ifndef INCLUDED_view_mediator_basis_TopLayerMediator
#include <view/mediator/basis/TopLayerMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void TopLayerMediator_obj::__construct(::view::component::basis::TopLayer viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.TopLayerMediator","new",0x411fd363,"view.mediator.basis.TopLayerMediator.new","view/mediator/basis/TopLayerMediator.hx",12,0x78bf5a2c)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(12)
	super::__construct(HX_CSTRING("TopLayerMediator"),viewComponent);
}
;
	return null();
}

//TopLayerMediator_obj::~TopLayerMediator_obj() { }

Dynamic TopLayerMediator_obj::__CreateEmpty() { return  new TopLayerMediator_obj; }
hx::ObjectPtr< TopLayerMediator_obj > TopLayerMediator_obj::__new(::view::component::basis::TopLayer viewComponent)
{  hx::ObjectPtr< TopLayerMediator_obj > result = new TopLayerMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic TopLayerMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TopLayerMediator_obj > result = new TopLayerMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TopLayerMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.TopLayerMediator","onRegister",0xa1f82dff,"view.mediator.basis.TopLayerMediator.onRegister","view/mediator/basis/TopLayerMediator.hx",15,0x78bf5a2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(17)
		::view::component::basis::TopLayer _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > TopLayerMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.TopLayerMediator","listNotificationInterests",0xdcf46623,"view.mediator.basis.TopLayerMediator.listNotificationInterests","view/mediator/basis/TopLayerMediator.hx",21,0x78bf5a2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CLOCK_OFF).Add(::AppConstants_obj::RESET).Add(::AppConstants_obj::POWER_OFF);
}


Void TopLayerMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.TopLayerMediator","handleNotification",0x14e57b10,"view.mediator.basis.TopLayerMediator.handleNotification","view/mediator/basis/TopLayerMediator.hx",30,0x78bf5a2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(30)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(33)
			this->getView()->showClock();
		}
		else if (  ( _switch_1==::AppConstants_obj::CLOCK_OFF)){
			HX_STACK_LINE(35)
			this->getView()->hideClock();
		}
		else if (  ( _switch_1==::AppConstants_obj::POWER_OFF)){
			HX_STACK_LINE(37)
			this->getView()->hideClock();
		}
		else if (  ( _switch_1==::AppConstants_obj::RESET)){
			HX_STACK_LINE(39)
			this->getView()->hideClock();
		}
	}
return null();
}


Void TopLayerMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.TopLayerMediator","viewReadyHandler",0xeb8e72c9,"view.mediator.basis.TopLayerMediator.viewReadyHandler","view/mediator/basis/TopLayerMediator.hx",58,0x78bf5a2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(58)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("TopLayerMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TopLayerMediator_obj,viewReadyHandler,(void))

::view::component::basis::TopLayer TopLayerMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.TopLayerMediator","getView",0xa58f229e,"view.mediator.basis.TopLayerMediator.getView","view/mediator/basis/TopLayerMediator.hx",62,0x78bf5a2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(TopLayerMediator_obj,getView,return )

::String TopLayerMediator_obj::NAME;


TopLayerMediator_obj::TopLayerMediator_obj()
{
}

Dynamic TopLayerMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic TopLayerMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TopLayerMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(TopLayerMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TopLayerMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TopLayerMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TopLayerMediator_obj::NAME,"NAME");
};

#endif

Class TopLayerMediator_obj::__mClass;

void TopLayerMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.TopLayerMediator"), hx::TCanCast< TopLayerMediator_obj> ,sStaticFields,sMemberFields,
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

void TopLayerMediator_obj::__boot()
{
	NAME= HX_CSTRING("TopLayerMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
