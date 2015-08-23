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
#ifndef INCLUDED_view_component_basis_Enablers
#include <view/component/basis/Enablers.h>
#endif
#ifndef INCLUDED_view_mediator_basis_EnablersMediator
#include <view/mediator/basis/EnablersMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void EnablersMediator_obj::__construct(::view::component::basis::Enablers viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.EnablersMediator","new",0x7d3d296b,"view.mediator.basis.EnablersMediator.new","view/mediator/basis/EnablersMediator.hx",12,0x8a3c9d24)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(12)
	super::__construct(HX_CSTRING("EnablersMediator"),viewComponent);
}
;
	return null();
}

//EnablersMediator_obj::~EnablersMediator_obj() { }

Dynamic EnablersMediator_obj::__CreateEmpty() { return  new EnablersMediator_obj; }
hx::ObjectPtr< EnablersMediator_obj > EnablersMediator_obj::__new(::view::component::basis::Enablers viewComponent)
{  hx::ObjectPtr< EnablersMediator_obj > result = new EnablersMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic EnablersMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnablersMediator_obj > result = new EnablersMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void EnablersMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.EnablersMediator","onRegister",0x8f6528f7,"view.mediator.basis.EnablersMediator.onRegister","view/mediator/basis/EnablersMediator.hx",15,0x8a3c9d24)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(17)
		::view::component::basis::Enablers _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > EnablersMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.EnablersMediator","listNotificationInterests",0xe7d8822b,"view.mediator.basis.EnablersMediator.listNotificationInterests","view/mediator/basis/EnablersMediator.hx",21,0x8a3c9d24)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	return Array_obj< ::String >::__new();
}


Void EnablersMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.EnablersMediator","handleNotification",0x68ba2e08,"view.mediator.basis.EnablersMediator.handleNotification","view/mediator/basis/EnablersMediator.hx",24,0x8a3c9d24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
	}
return null();
}


Void EnablersMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.EnablersMediator","viewReadyHandler",0xf0bdf7c1,"view.mediator.basis.EnablersMediator.viewReadyHandler","view/mediator/basis/EnablersMediator.hx",35,0x8a3c9d24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(35)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("EnablersMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnablersMediator_obj,viewReadyHandler,(void))

::view::component::basis::Enablers EnablersMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.EnablersMediator","getView",0xc5441ca6,"view.mediator.basis.EnablersMediator.getView","view/mediator/basis/EnablersMediator.hx",39,0x8a3c9d24)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(EnablersMediator_obj,getView,return )

::String EnablersMediator_obj::NAME;


EnablersMediator_obj::EnablersMediator_obj()
{
}

Dynamic EnablersMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic EnablersMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void EnablersMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(EnablersMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EnablersMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnablersMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnablersMediator_obj::NAME,"NAME");
};

#endif

Class EnablersMediator_obj::__mClass;

void EnablersMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.EnablersMediator"), hx::TCanCast< EnablersMediator_obj> ,sStaticFields,sMemberFields,
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

void EnablersMediator_obj::__boot()
{
	NAME= HX_CSTRING("EnablersMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
