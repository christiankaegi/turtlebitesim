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
#ifndef INCLUDED_view_component_basis_Multiplexer
#include <view/component/basis/Multiplexer.h>
#endif
#ifndef INCLUDED_view_mediator_basis_MultiplexerMediator
#include <view/mediator/basis/MultiplexerMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void MultiplexerMediator_obj::__construct(::view::component::basis::Multiplexer viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.MultiplexerMediator","new",0xf97fe6b8,"view.mediator.basis.MultiplexerMediator.new","view/mediator/basis/MultiplexerMediator.hx",13,0x2588a859)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(13)
	super::__construct(HX_CSTRING("MultiplexerMediator"),viewComponent);
}
;
	return null();
}

//MultiplexerMediator_obj::~MultiplexerMediator_obj() { }

Dynamic MultiplexerMediator_obj::__CreateEmpty() { return  new MultiplexerMediator_obj; }
hx::ObjectPtr< MultiplexerMediator_obj > MultiplexerMediator_obj::__new(::view::component::basis::Multiplexer viewComponent)
{  hx::ObjectPtr< MultiplexerMediator_obj > result = new MultiplexerMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic MultiplexerMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MultiplexerMediator_obj > result = new MultiplexerMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MultiplexerMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.MultiplexerMediator","onRegister",0x71d05f4a,"view.mediator.basis.MultiplexerMediator.onRegister","view/mediator/basis/MultiplexerMediator.hx",16,0x2588a859)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(18)
		::view::component::basis::Multiplexer _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(18)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > MultiplexerMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.MultiplexerMediator","listNotificationInterests",0x33176138,"view.mediator.basis.MultiplexerMediator.listNotificationInterests","view/mediator/basis/MultiplexerMediator.hx",22,0x2588a859)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return Array_obj< ::String >::__new();
}


Void MultiplexerMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.MultiplexerMediator","handleNotification",0x7e906f5b,"view.mediator.basis.MultiplexerMediator.handleNotification","view/mediator/basis/MultiplexerMediator.hx",25,0x2588a859)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
	}
return null();
}


Void MultiplexerMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.MultiplexerMediator","viewReadyHandler",0xf7eb2e54,"view.mediator.basis.MultiplexerMediator.viewReadyHandler","view/mediator/basis/MultiplexerMediator.hx",36,0x2588a859)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(36)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("MultiplexerMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MultiplexerMediator_obj,viewReadyHandler,(void))

::view::component::basis::Multiplexer MultiplexerMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.MultiplexerMediator","getView",0x9c040473,"view.mediator.basis.MultiplexerMediator.getView","view/mediator/basis/MultiplexerMediator.hx",40,0x2588a859)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(MultiplexerMediator_obj,getView,return )

::String MultiplexerMediator_obj::NAME;


MultiplexerMediator_obj::MultiplexerMediator_obj()
{
}

Dynamic MultiplexerMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic MultiplexerMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MultiplexerMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(MultiplexerMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MultiplexerMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MultiplexerMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MultiplexerMediator_obj::NAME,"NAME");
};

#endif

Class MultiplexerMediator_obj::__mClass;

void MultiplexerMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.MultiplexerMediator"), hx::TCanCast< MultiplexerMediator_obj> ,sStaticFields,sMemberFields,
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

void MultiplexerMediator_obj::__boot()
{
	NAME= HX_CSTRING("MultiplexerMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
