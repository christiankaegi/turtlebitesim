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
#ifndef INCLUDED_view_component_basis_Accumulator
#include <view/component/basis/Accumulator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_AccumulatorMediator
#include <view/mediator/basis/AccumulatorMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void AccumulatorMediator_obj::__construct(::view::component::basis::Accumulator viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.AccumulatorMediator","new",0x6b3966a9,"view.mediator.basis.AccumulatorMediator.new","view/mediator/basis/AccumulatorMediator.hx",19,0x12873188)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(19)
	super::__construct(HX_CSTRING("AccumulatorMediator"),viewComponent);
}
;
	return null();
}

//AccumulatorMediator_obj::~AccumulatorMediator_obj() { }

Dynamic AccumulatorMediator_obj::__CreateEmpty() { return  new AccumulatorMediator_obj; }
hx::ObjectPtr< AccumulatorMediator_obj > AccumulatorMediator_obj::__new(::view::component::basis::Accumulator viewComponent)
{  hx::ObjectPtr< AccumulatorMediator_obj > result = new AccumulatorMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic AccumulatorMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AccumulatorMediator_obj > result = new AccumulatorMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void AccumulatorMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.AccumulatorMediator","onRegister",0x78522f79,"view.mediator.basis.AccumulatorMediator.onRegister","view/mediator/basis/AccumulatorMediator.hx",22,0x12873188)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(24)
		::view::component::basis::Accumulator _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > AccumulatorMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.AccumulatorMediator","listNotificationInterests",0x58f71de9,"view.mediator.basis.AccumulatorMediator.listNotificationInterests","view/mediator/basis/AccumulatorMediator.hx",28,0x12873188)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::ACCUMULATOR_CHANGED);
}


Void AccumulatorMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.AccumulatorMediator","handleNotification",0x4db4868a,"view.mediator.basis.AccumulatorMediator.handleNotification","view/mediator/basis/AccumulatorMediator.hx",31,0x12873188)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(32)
		::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
		HX_STACK_LINE(32)
		instruction = hx::TCast< model::vo::InstructionVO >::cast(note->getBody());
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(33)
			::String _switch_1 = (_g);
			if (  ( _switch_1==::AppConstants_obj::ACCUMULATOR_CHANGED)){
				HX_STACK_LINE(36)
				this->getView()->showLines(instruction);
			}
		}
	}
return null();
}


Void AccumulatorMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.AccumulatorMediator","viewReadyHandler",0x6819cbc3,"view.mediator.basis.AccumulatorMediator.viewReadyHandler","view/mediator/basis/AccumulatorMediator.hx",41,0x12873188)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(41)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("AccumulatorMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AccumulatorMediator_obj,viewReadyHandler,(void))

::view::component::basis::Accumulator AccumulatorMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.AccumulatorMediator","getView",0x857ad0e4,"view.mediator.basis.AccumulatorMediator.getView","view/mediator/basis/AccumulatorMediator.hx",45,0x12873188)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(AccumulatorMediator_obj,getView,return )

::String AccumulatorMediator_obj::NAME;


AccumulatorMediator_obj::AccumulatorMediator_obj()
{
}

Dynamic AccumulatorMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic AccumulatorMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AccumulatorMediator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(AccumulatorMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AccumulatorMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AccumulatorMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AccumulatorMediator_obj::NAME,"NAME");
};

#endif

Class AccumulatorMediator_obj::__mClass;

void AccumulatorMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.AccumulatorMediator"), hx::TCanCast< AccumulatorMediator_obj> ,sStaticFields,sMemberFields,
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

void AccumulatorMediator_obj::__boot()
{
	NAME= HX_CSTRING("AccumulatorMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
