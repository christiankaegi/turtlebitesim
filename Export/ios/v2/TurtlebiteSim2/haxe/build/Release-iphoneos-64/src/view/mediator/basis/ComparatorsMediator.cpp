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
#ifndef INCLUDED_view_component_basis_Comparators
#include <view/component/basis/Comparators.h>
#endif
#ifndef INCLUDED_view_mediator_basis_ComparatorsMediator
#include <view/mediator/basis/ComparatorsMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void ComparatorsMediator_obj::__construct(::view::component::basis::Comparators viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.ComparatorsMediator","new",0xe933df00,"view.mediator.basis.ComparatorsMediator.new","view/mediator/basis/ComparatorsMediator.hx",12,0x35885111)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(12)
	super::__construct(HX_CSTRING("ComparatorsMediator"),viewComponent);
}
;
	return null();
}

//ComparatorsMediator_obj::~ComparatorsMediator_obj() { }

Dynamic ComparatorsMediator_obj::__CreateEmpty() { return  new ComparatorsMediator_obj; }
hx::ObjectPtr< ComparatorsMediator_obj > ComparatorsMediator_obj::__new(::view::component::basis::Comparators viewComponent)
{  hx::ObjectPtr< ComparatorsMediator_obj > result = new ComparatorsMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic ComparatorsMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComparatorsMediator_obj > result = new ComparatorsMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ComparatorsMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.ComparatorsMediator","onRegister",0x233b8002,"view.mediator.basis.ComparatorsMediator.onRegister","view/mediator/basis/ComparatorsMediator.hx",15,0x35885111)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(17)
		::view::component::basis::Comparators _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > ComparatorsMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.ComparatorsMediator","listNotificationInterests",0x01cdcf80,"view.mediator.basis.ComparatorsMediator.listNotificationInterests","view/mediator/basis/ComparatorsMediator.hx",21,0x35885111)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	return Array_obj< ::String >::__new();
}


Void ComparatorsMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.ComparatorsMediator","handleNotification",0xdd9f0813,"view.mediator.basis.ComparatorsMediator.handleNotification","view/mediator/basis/ComparatorsMediator.hx",24,0x35885111)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
	}
return null();
}


Void ComparatorsMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.ComparatorsMediator","viewReadyHandler",0x9ddba90c,"view.mediator.basis.ComparatorsMediator.viewReadyHandler","view/mediator/basis/ComparatorsMediator.hx",35,0x35885111)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(35)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("ComparatorsMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ComparatorsMediator_obj,viewReadyHandler,(void))

::view::component::basis::Comparators ComparatorsMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.ComparatorsMediator","getView",0xb5edc0bb,"view.mediator.basis.ComparatorsMediator.getView","view/mediator/basis/ComparatorsMediator.hx",39,0x35885111)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(ComparatorsMediator_obj,getView,return )

::String ComparatorsMediator_obj::NAME;


ComparatorsMediator_obj::ComparatorsMediator_obj()
{
}

Dynamic ComparatorsMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ComparatorsMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ComparatorsMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ComparatorsMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ComparatorsMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComparatorsMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ComparatorsMediator_obj::NAME,"NAME");
};

#endif

Class ComparatorsMediator_obj::__mClass;

void ComparatorsMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.ComparatorsMediator"), hx::TCanCast< ComparatorsMediator_obj> ,sStaticFields,sMemberFields,
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

void ComparatorsMediator_obj::__boot()
{
	NAME= HX_CSTRING("ComparatorsMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
