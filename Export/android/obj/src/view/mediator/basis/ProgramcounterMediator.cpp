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
#ifndef INCLUDED_view_component_basis_Programcounter
#include <view/component/basis/Programcounter.h>
#endif
#ifndef INCLUDED_view_mediator_basis_ProgramcounterMediator
#include <view/mediator/basis/ProgramcounterMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void ProgramcounterMediator_obj::__construct(::view::component::basis::Programcounter viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.ProgramcounterMediator","new",0x2abd30df,"view.mediator.basis.ProgramcounterMediator.new","view/mediator/basis/ProgramcounterMediator.hx",13,0x6a82d970)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(13)
	super::__construct(HX_CSTRING("ProgramcounterMediator"),viewComponent);
}
;
	return null();
}

//ProgramcounterMediator_obj::~ProgramcounterMediator_obj() { }

Dynamic ProgramcounterMediator_obj::__CreateEmpty() { return  new ProgramcounterMediator_obj; }
hx::ObjectPtr< ProgramcounterMediator_obj > ProgramcounterMediator_obj::__new(::view::component::basis::Programcounter viewComponent)
{  hx::ObjectPtr< ProgramcounterMediator_obj > result = new ProgramcounterMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic ProgramcounterMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProgramcounterMediator_obj > result = new ProgramcounterMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ProgramcounterMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.ProgramcounterMediator","onRegister",0xdddfb803,"view.mediator.basis.ProgramcounterMediator.onRegister","view/mediator/basis/ProgramcounterMediator.hx",16,0x6a82d970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(18)
		::view::component::basis::Programcounter _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(18)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > ProgramcounterMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.ProgramcounterMediator","listNotificationInterests",0x2fd8c09f,"view.mediator.basis.ProgramcounterMediator.listNotificationInterests","view/mediator/basis/ProgramcounterMediator.hx",22,0x6a82d970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return Array_obj< ::String >::__new();
}


Void ProgramcounterMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.ProgramcounterMediator","handleNotification",0x7e2ca914,"view.mediator.basis.ProgramcounterMediator.handleNotification","view/mediator/basis/ProgramcounterMediator.hx",25,0x6a82d970)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
	}
return null();
}


Void ProgramcounterMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.ProgramcounterMediator","viewReadyHandler",0xc70f57cd,"view.mediator.basis.ProgramcounterMediator.viewReadyHandler","view/mediator/basis/ProgramcounterMediator.hx",36,0x6a82d970)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(36)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("ProgramcounterMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgramcounterMediator_obj,viewReadyHandler,(void))

::view::component::basis::Programcounter ProgramcounterMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.ProgramcounterMediator","getView",0xcb4eee1a,"view.mediator.basis.ProgramcounterMediator.getView","view/mediator/basis/ProgramcounterMediator.hx",40,0x6a82d970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(ProgramcounterMediator_obj,getView,return )

::String ProgramcounterMediator_obj::NAME;


ProgramcounterMediator_obj::ProgramcounterMediator_obj()
{
}

Dynamic ProgramcounterMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ProgramcounterMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgramcounterMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ProgramcounterMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ProgramcounterMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgramcounterMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProgramcounterMediator_obj::NAME,"NAME");
};

#endif

Class ProgramcounterMediator_obj::__mClass;

void ProgramcounterMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.ProgramcounterMediator"), hx::TCanCast< ProgramcounterMediator_obj> ,sStaticFields,sMemberFields,
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

void ProgramcounterMediator_obj::__boot()
{
	NAME= HX_CSTRING("ProgramcounterMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
