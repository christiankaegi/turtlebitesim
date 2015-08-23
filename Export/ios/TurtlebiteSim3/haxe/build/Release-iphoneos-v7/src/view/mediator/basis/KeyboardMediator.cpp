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
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_mediator_Mediator
#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_view_component_basis_Keyboard
#include <view/component/basis/Keyboard.h>
#endif
#ifndef INCLUDED_view_mediator_basis_KeyboardMediator
#include <view/mediator/basis/KeyboardMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void KeyboardMediator_obj::__construct(::view::component::basis::Keyboard viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.KeyboardMediator","new",0x5adc558e,"view.mediator.basis.KeyboardMediator.new","view/mediator/basis/KeyboardMediator.hx",12,0x23e98661)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(12)
	super::__construct(HX_CSTRING("KeyboardMediator"),viewComponent);
}
;
	return null();
}

//KeyboardMediator_obj::~KeyboardMediator_obj() { }

Dynamic KeyboardMediator_obj::__CreateEmpty() { return  new KeyboardMediator_obj; }
hx::ObjectPtr< KeyboardMediator_obj > KeyboardMediator_obj::__new(::view::component::basis::Keyboard viewComponent)
{  hx::ObjectPtr< KeyboardMediator_obj > result = new KeyboardMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic KeyboardMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyboardMediator_obj > result = new KeyboardMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void KeyboardMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.KeyboardMediator","onRegister",0xb1291734,"view.mediator.basis.KeyboardMediator.onRegister","view/mediator/basis/KeyboardMediator.hx",15,0x23e98661)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(17)
		::view::component::basis::Keyboard _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Void KeyboardMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.KeyboardMediator","viewReadyHandler",0x23c5b1be,"view.mediator.basis.KeyboardMediator.viewReadyHandler","view/mediator/basis/KeyboardMediator.hx",21,0x23e98661)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(21)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("KeyboardMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KeyboardMediator_obj,viewReadyHandler,(void))

::view::component::basis::Keyboard KeyboardMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.KeyboardMediator","getView",0x26ef9649,"view.mediator.basis.KeyboardMediator.getView","view/mediator/basis/KeyboardMediator.hx",25,0x23e98661)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(KeyboardMediator_obj,getView,return )

::String KeyboardMediator_obj::NAME;


KeyboardMediator_obj::KeyboardMediator_obj()
{
}

Dynamic KeyboardMediator_obj::__Field(const ::String &inName,bool inCallProp)
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KeyboardMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyboardMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyboardMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyboardMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyboardMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyboardMediator_obj::NAME,"NAME");
};

#endif

Class KeyboardMediator_obj::__mClass;

void KeyboardMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.KeyboardMediator"), hx::TCanCast< KeyboardMediator_obj> ,sStaticFields,sMemberFields,
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

void KeyboardMediator_obj::__boot()
{
	NAME= HX_CSTRING("KeyboardMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
