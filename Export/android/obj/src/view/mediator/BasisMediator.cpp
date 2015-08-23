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
#ifndef INCLUDED_view_component_Basis
#include <view/component/Basis.h>
#endif
#ifndef INCLUDED_view_mediator_BasisMediator
#include <view/mediator/BasisMediator.h>
#endif
namespace view{
namespace mediator{

Void BasisMediator_obj::__construct(::view::component::Basis viewComponent)
{
HX_STACK_FRAME("view.mediator.BasisMediator","new",0x544d4cd1,"view.mediator.BasisMediator.new","view/mediator/BasisMediator.hx",11,0x05f02f9f)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(11)
	super::__construct(HX_CSTRING("BasisMediator"),viewComponent);
}
;
	return null();
}

//BasisMediator_obj::~BasisMediator_obj() { }

Dynamic BasisMediator_obj::__CreateEmpty() { return  new BasisMediator_obj; }
hx::ObjectPtr< BasisMediator_obj > BasisMediator_obj::__new(::view::component::Basis viewComponent)
{  hx::ObjectPtr< BasisMediator_obj > result = new BasisMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic BasisMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BasisMediator_obj > result = new BasisMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void BasisMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.BasisMediator","onRegister",0x6a08de51,"view.mediator.BasisMediator.onRegister","view/mediator/BasisMediator.hx",14,0x05f02f9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		::view::component::Basis _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16)
		this->sendNotification(::AppConstants_obj::ADD_TO_VIEW,_g,null());
	}
return null();
}


Array< ::String > BasisMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.BasisMediator","listNotificationInterests",0x9096e211,"view.mediator.BasisMediator.listNotificationInterests","view/mediator/BasisMediator.hx",20,0x05f02f9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	return Array_obj< ::String >::__new();
}


Void BasisMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.BasisMediator","handleNotification",0xf679cd62,"view.mediator.BasisMediator.handleNotification","view/mediator/BasisMediator.hx",23,0x05f02f9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
	}
return null();
}


::view::component::Basis BasisMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.BasisMediator","getView",0x2580eb0c,"view.mediator.BasisMediator.getView","view/mediator/BasisMediator.hx",55,0x05f02f9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(BasisMediator_obj,getView,return )

::String BasisMediator_obj::NAME;


BasisMediator_obj::BasisMediator_obj()
{
}

Dynamic BasisMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic BasisMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BasisMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(BasisMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BasisMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BasisMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BasisMediator_obj::NAME,"NAME");
};

#endif

Class BasisMediator_obj::__mClass;

void BasisMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.BasisMediator"), hx::TCanCast< BasisMediator_obj> ,sStaticFields,sMemberFields,
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

void BasisMediator_obj::__boot()
{
	NAME= HX_CSTRING("BasisMediator");
}

} // end namespace view
} // end namespace mediator
