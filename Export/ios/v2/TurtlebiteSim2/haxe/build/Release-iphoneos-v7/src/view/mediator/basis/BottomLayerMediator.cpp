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
#ifndef INCLUDED_view_component_basis_BottomLayer
#include <view/component/basis/BottomLayer.h>
#endif
#ifndef INCLUDED_view_mediator_basis_BottomLayerMediator
#include <view/mediator/basis/BottomLayerMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void BottomLayerMediator_obj::__construct(::view::component::basis::BottomLayer viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.BottomLayerMediator","new",0x6bba2449,"view.mediator.basis.BottomLayerMediator.new","view/mediator/basis/BottomLayerMediator.hx",12,0xad8207e8)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(12)
	super::__construct(HX_CSTRING("BottomLayerMediator"),viewComponent);
}
;
	return null();
}

//BottomLayerMediator_obj::~BottomLayerMediator_obj() { }

Dynamic BottomLayerMediator_obj::__CreateEmpty() { return  new BottomLayerMediator_obj; }
hx::ObjectPtr< BottomLayerMediator_obj > BottomLayerMediator_obj::__new(::view::component::basis::BottomLayer viewComponent)
{  hx::ObjectPtr< BottomLayerMediator_obj > result = new BottomLayerMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic BottomLayerMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BottomLayerMediator_obj > result = new BottomLayerMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void BottomLayerMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.BottomLayerMediator","onRegister",0x859a65d9,"view.mediator.basis.BottomLayerMediator.onRegister","view/mediator/basis/BottomLayerMediator.hx",15,0xad8207e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(17)
		::view::component::basis::BottomLayer _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > BottomLayerMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.BottomLayerMediator","listNotificationInterests",0x576b1389,"view.mediator.basis.BottomLayerMediator.listNotificationInterests","view/mediator/basis/BottomLayerMediator.hx",21,0xad8207e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	return Array_obj< ::String >::__new();
}


Void BottomLayerMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.BottomLayerMediator","handleNotification",0xe9aa1cea,"view.mediator.basis.BottomLayerMediator.handleNotification","view/mediator/basis/BottomLayerMediator.hx",24,0xad8207e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
	}
return null();
}


Void BottomLayerMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.BottomLayerMediator","viewReadyHandler",0xba7b0a23,"view.mediator.basis.BottomLayerMediator.viewReadyHandler","view/mediator/basis/BottomLayerMediator.hx",42,0xad8207e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(42)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("BottomLayerMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BottomLayerMediator_obj,viewReadyHandler,(void))

::view::component::basis::BottomLayer BottomLayerMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.BottomLayerMediator","getView",0xa1bade84,"view.mediator.basis.BottomLayerMediator.getView","view/mediator/basis/BottomLayerMediator.hx",46,0xad8207e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(BottomLayerMediator_obj,getView,return )

::String BottomLayerMediator_obj::NAME;


BottomLayerMediator_obj::BottomLayerMediator_obj()
{
}

Dynamic BottomLayerMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic BottomLayerMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BottomLayerMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(BottomLayerMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BottomLayerMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BottomLayerMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BottomLayerMediator_obj::NAME,"NAME");
};

#endif

Class BottomLayerMediator_obj::__mClass;

void BottomLayerMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.BottomLayerMediator"), hx::TCanCast< BottomLayerMediator_obj> ,sStaticFields,sMemberFields,
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

void BottomLayerMediator_obj::__boot()
{
	NAME= HX_CSTRING("BottomLayerMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
