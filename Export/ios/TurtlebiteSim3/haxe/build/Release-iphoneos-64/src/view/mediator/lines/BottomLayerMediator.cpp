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
#ifndef INCLUDED_view_component_lines_BottomLayer
#include <view/component/lines/BottomLayer.h>
#endif
#ifndef INCLUDED_view_mediator_lines_BottomLayerMediator
#include <view/mediator/lines/BottomLayerMediator.h>
#endif
namespace view{
namespace mediator{
namespace lines{

Void BottomLayerMediator_obj::__construct(::view::component::lines::BottomLayer viewComponent)
{
HX_STACK_FRAME("view.mediator.lines.BottomLayerMediator","new",0xe918d28a,"view.mediator.lines.BottomLayerMediator.new","view/mediator/lines/BottomLayerMediator.hx",18,0x3b459cc7)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(18)
	super::__construct(HX_CSTRING("BottomLayerMediator"),viewComponent);
}
;
	return null();
}

//BottomLayerMediator_obj::~BottomLayerMediator_obj() { }

Dynamic BottomLayerMediator_obj::__CreateEmpty() { return  new BottomLayerMediator_obj; }
hx::ObjectPtr< BottomLayerMediator_obj > BottomLayerMediator_obj::__new(::view::component::lines::BottomLayer viewComponent)
{  hx::ObjectPtr< BottomLayerMediator_obj > result = new BottomLayerMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic BottomLayerMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BottomLayerMediator_obj > result = new BottomLayerMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void BottomLayerMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.lines.BottomLayerMediator","onRegister",0x5f5c71b8,"view.mediator.lines.BottomLayerMediator.onRegister","view/mediator/lines/BottomLayerMediator.hx",21,0x3b459cc7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(23)
		::view::component::lines::BottomLayer _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > BottomLayerMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.lines.BottomLayerMediator","listNotificationInterests",0x5ca13a8a,"view.mediator.lines.BottomLayerMediator.listNotificationInterests","view/mediator/lines/BottomLayerMediator.hx",27,0x3b459cc7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return Array_obj< ::String >::__new();
}


Void BottomLayerMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.lines.BottomLayerMediator","handleNotification",0x75399fc9,"view.mediator.lines.BottomLayerMediator.handleNotification","view/mediator/lines/BottomLayerMediator.hx",30,0x3b459cc7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
	}
return null();
}


Void BottomLayerMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.lines.BottomLayerMediator","viewReadyHandler",0xf709c742,"view.mediator.lines.BottomLayerMediator.viewReadyHandler","view/mediator/lines/BottomLayerMediator.hx",34,0x3b459cc7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(34)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("BottomLayerMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BottomLayerMediator_obj,viewReadyHandler,(void))

::view::component::lines::BottomLayer BottomLayerMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.lines.BottomLayerMediator","getView",0x4c144145,"view.mediator.lines.BottomLayerMediator.getView","view/mediator/lines/BottomLayerMediator.hx",38,0x3b459cc7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.lines.BottomLayerMediator"), hx::TCanCast< BottomLayerMediator_obj> ,sStaticFields,sMemberFields,
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
} // end namespace lines
