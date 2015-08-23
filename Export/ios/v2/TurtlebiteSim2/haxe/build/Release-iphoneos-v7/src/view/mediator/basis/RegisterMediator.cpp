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
#ifndef INCLUDED_view_component_basis_Register
#include <view/component/basis/Register.h>
#endif
#ifndef INCLUDED_view_mediator_basis_RegisterMediator
#include <view/mediator/basis/RegisterMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void RegisterMediator_obj::__construct(::view::component::basis::Register viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.RegisterMediator","new",0x8a67e94a,"view.mediator.basis.RegisterMediator.new","view/mediator/basis/RegisterMediator.hx",13,0x58eebe25)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(13)
	super::__construct(HX_CSTRING("RegisterMediator"),viewComponent);
}
;
	return null();
}

//RegisterMediator_obj::~RegisterMediator_obj() { }

Dynamic RegisterMediator_obj::__CreateEmpty() { return  new RegisterMediator_obj; }
hx::ObjectPtr< RegisterMediator_obj > RegisterMediator_obj::__new(::view::component::basis::Register viewComponent)
{  hx::ObjectPtr< RegisterMediator_obj > result = new RegisterMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic RegisterMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RegisterMediator_obj > result = new RegisterMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RegisterMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.RegisterMediator","onRegister",0x5191b2f8,"view.mediator.basis.RegisterMediator.onRegister","view/mediator/basis/RegisterMediator.hx",16,0x58eebe25)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(18)
		::view::component::basis::Register _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(18)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > RegisterMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.RegisterMediator","listNotificationInterests",0x3487614a,"view.mediator.basis.RegisterMediator.listNotificationInterests","view/mediator/basis/RegisterMediator.hx",22,0x58eebe25)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::REGISTER_1_CHANGED).Add(::AppConstants_obj::REGISTER_2_CHANGED).Add(::AppConstants_obj::MODEL_RESET_COMPLETE);
}


Void RegisterMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.RegisterMediator","handleNotification",0x2c722109,"view.mediator.basis.RegisterMediator.handleNotification","view/mediator/basis/RegisterMediator.hx",30,0x58eebe25)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(30)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::REGISTER_1_CHANGED)){
			HX_STACK_LINE(33)
			Dynamic _g1 = note->getBody();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(33)
			this->getView()->showLinesRegister1(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::REGISTER_2_CHANGED)){
			HX_STACK_LINE(35)
			Dynamic _g1 = note->getBody();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(35)
			this->getView()->showLinesRegister2(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(37)
			this->getView()->hideAllLines();
		}
	}
return null();
}


Void RegisterMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.RegisterMediator","viewReadyHandler",0x57837882,"view.mediator.basis.RegisterMediator.viewReadyHandler","view/mediator/basis/RegisterMediator.hx",42,0x58eebe25)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(42)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("RegisterMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMediator_obj,viewReadyHandler,(void))

::view::component::basis::Register RegisterMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.RegisterMediator","getView",0x9e95b805,"view.mediator.basis.RegisterMediator.getView","view/mediator/basis/RegisterMediator.hx",46,0x58eebe25)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(RegisterMediator_obj,getView,return )

::String RegisterMediator_obj::NAME;


RegisterMediator_obj::RegisterMediator_obj()
{
}

Dynamic RegisterMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic RegisterMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void RegisterMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(RegisterMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RegisterMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegisterMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RegisterMediator_obj::NAME,"NAME");
};

#endif

Class RegisterMediator_obj::__mClass;

void RegisterMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.RegisterMediator"), hx::TCanCast< RegisterMediator_obj> ,sStaticFields,sMemberFields,
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

void RegisterMediator_obj::__boot()
{
	NAME= HX_CSTRING("RegisterMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
