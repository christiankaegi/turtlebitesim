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
#ifndef INCLUDED_view_component_Rot
#include <view/component/Rot.h>
#endif
#ifndef INCLUDED_view_mediator_RotMediator
#include <view/mediator/RotMediator.h>
#endif
namespace view{
namespace mediator{

Void RotMediator_obj::__construct(::view::component::Rot viewComponent)
{
HX_STACK_FRAME("view.mediator.RotMediator","new",0x03e3562a,"view.mediator.RotMediator.new","view/mediator/RotMediator.hx",11,0x58329c66)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(11)
	super::__construct(HX_CSTRING("RotMediator"),viewComponent);
}
;
	return null();
}

//RotMediator_obj::~RotMediator_obj() { }

Dynamic RotMediator_obj::__CreateEmpty() { return  new RotMediator_obj; }
hx::ObjectPtr< RotMediator_obj > RotMediator_obj::__new(::view::component::Rot viewComponent)
{  hx::ObjectPtr< RotMediator_obj > result = new RotMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic RotMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RotMediator_obj > result = new RotMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RotMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.RotMediator","onRegister",0x21bfa218,"view.mediator.RotMediator.onRegister","view/mediator/RotMediator.hx",14,0x58329c66)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		::view::component::Rot _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16)
		this->sendNotification(::AppConstants_obj::ADD_TO_VIEW,_g,null());
	}
return null();
}


Array< ::String > RotMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.RotMediator","listNotificationInterests",0x7b63762a,"view.mediator.RotMediator.listNotificationInterests","view/mediator/RotMediator.hx",20,0x58329c66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_SIGNAL).Add(::AppConstants_obj::CHANGE_CLOCK_SPEED);
}


Void RotMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.RotMediator","handleNotification",0x30d43029,"view.mediator.RotMediator.handleNotification","view/mediator/RotMediator.hx",24,0x58329c66)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(24)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_SIGNAL)){
			HX_STACK_LINE(28)
			bool _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(28)
			_g1 = hx::TCast< Bool >::cast(note->getBody());
			HX_STACK_LINE(28)
			this->getView()->show(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::CHANGE_CLOCK_SPEED)){
			HX_STACK_LINE(30)
			this->getView()->powerOff();
		}
	}
return null();
}


::view::component::Rot RotMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.RotMediator","getView",0x31f914e5,"view.mediator.RotMediator.getView","view/mediator/RotMediator.hx",50,0x58329c66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(RotMediator_obj,getView,return )

::String RotMediator_obj::NAME;


RotMediator_obj::RotMediator_obj()
{
}

Dynamic RotMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic RotMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void RotMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(RotMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RotMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RotMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RotMediator_obj::NAME,"NAME");
};

#endif

Class RotMediator_obj::__mClass;

void RotMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.RotMediator"), hx::TCanCast< RotMediator_obj> ,sStaticFields,sMemberFields,
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

void RotMediator_obj::__boot()
{
	NAME= HX_CSTRING("RotMediator");
}

} // end namespace view
} // end namespace mediator
