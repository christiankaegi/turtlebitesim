#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
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
#ifndef INCLUDED_view_component_basis_MainBus
#include <view/component/basis/MainBus.h>
#endif
#ifndef INCLUDED_view_mediator_basis_MainBusMediator
#include <view/mediator/basis/MainBusMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void MainBusMediator_obj::__construct(::view::component::basis::MainBus viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.MainBusMediator","new",0x7cbb406a,"view.mediator.basis.MainBusMediator.new","view/mediator/basis/MainBusMediator.hx",13,0x96146667)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(13)
	super::__construct(HX_CSTRING("MainBusMediator"),viewComponent);
}
;
	return null();
}

//MainBusMediator_obj::~MainBusMediator_obj() { }

Dynamic MainBusMediator_obj::__CreateEmpty() { return  new MainBusMediator_obj; }
hx::ObjectPtr< MainBusMediator_obj > MainBusMediator_obj::__new(::view::component::basis::MainBus viewComponent)
{  hx::ObjectPtr< MainBusMediator_obj > result = new MainBusMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic MainBusMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainBusMediator_obj > result = new MainBusMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MainBusMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.MainBusMediator","onRegister",0xeab57fd8,"view.mediator.basis.MainBusMediator.onRegister","view/mediator/basis/MainBusMediator.hx",16,0x96146667)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(18)
		::view::component::basis::MainBus _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(18)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > MainBusMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.MainBusMediator","listNotificationInterests",0x05ad106a,"view.mediator.basis.MainBusMediator.listNotificationInterests","view/mediator/basis/MainBusMediator.hx",22,0x96146667)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CLOCK_OFF).Add(::AppConstants_obj::CHANGE_CLOCK_SPEED).Add(::AppConstants_obj::MODEL_RESET_COMPLETE);
}


Void MainBusMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.MainBusMediator","handleNotification",0x137dcde9,"view.mediator.basis.MainBusMediator.handleNotification","view/mediator/basis/MainBusMediator.hx",31,0x96146667)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(31)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(34)
			::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
			HX_STACK_LINE(34)
			instruction = hx::TCast< model::vo::InstructionVO >::cast(note->getBody());
			HX_STACK_LINE(35)
			this->getView()->showLines(instruction);
		}
		else if (  ( _switch_1==::AppConstants_obj::CLOCK_OFF)){
		}
		else if (  ( _switch_1==::AppConstants_obj::CHANGE_CLOCK_SPEED)){
			HX_STACK_LINE(39)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(41)
			this->getView()->hideAllLines();
		}
	}
return null();
}


Void MainBusMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.MainBusMediator","viewReadyHandler",0x6a502d62,"view.mediator.basis.MainBusMediator.viewReadyHandler","view/mediator/basis/MainBusMediator.hx",61,0x96146667)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(61)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("MainBusMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainBusMediator_obj,viewReadyHandler,(void))

::view::component::basis::MainBus MainBusMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.MainBusMediator","getView",0xffb31f25,"view.mediator.basis.MainBusMediator.getView","view/mediator/basis/MainBusMediator.hx",65,0x96146667)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(MainBusMediator_obj,getView,return )

::String MainBusMediator_obj::NAME;


MainBusMediator_obj::MainBusMediator_obj()
{
}

Dynamic MainBusMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic MainBusMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MainBusMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(MainBusMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MainBusMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainBusMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MainBusMediator_obj::NAME,"NAME");
};

#endif

Class MainBusMediator_obj::__mClass;

void MainBusMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.MainBusMediator"), hx::TCanCast< MainBusMediator_obj> ,sStaticFields,sMemberFields,
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

void MainBusMediator_obj::__boot()
{
	NAME= HX_CSTRING("MainBusMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
