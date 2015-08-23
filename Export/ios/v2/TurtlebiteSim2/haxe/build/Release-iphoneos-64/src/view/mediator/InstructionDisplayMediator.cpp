#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_proxy_ProgramProxy
#include <model/proxy/ProgramProxy.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade
#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IProxy
#include <org/puremvc/haxe/multicore/interfaces/IProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_mediator_Mediator
#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_proxy_Proxy
#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
#endif
#ifndef INCLUDED_view_component_InstructionDisplay
#include <view/component/InstructionDisplay.h>
#endif
#ifndef INCLUDED_view_mediator_InstructionDisplayMediator
#include <view/mediator/InstructionDisplayMediator.h>
#endif
namespace view{
namespace mediator{

Void InstructionDisplayMediator_obj::__construct(::view::component::InstructionDisplay viewComponent)
{
HX_STACK_FRAME("view.mediator.InstructionDisplayMediator","new",0x0dc5478b,"view.mediator.InstructionDisplayMediator.new","view/mediator/InstructionDisplayMediator.hx",16,0x885d8e65)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(16)
	super::__construct(HX_CSTRING("InstructionDisplayMediator"),viewComponent);
}
;
	return null();
}

//InstructionDisplayMediator_obj::~InstructionDisplayMediator_obj() { }

Dynamic InstructionDisplayMediator_obj::__CreateEmpty() { return  new InstructionDisplayMediator_obj; }
hx::ObjectPtr< InstructionDisplayMediator_obj > InstructionDisplayMediator_obj::__new(::view::component::InstructionDisplay viewComponent)
{  hx::ObjectPtr< InstructionDisplayMediator_obj > result = new InstructionDisplayMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic InstructionDisplayMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InstructionDisplayMediator_obj > result = new InstructionDisplayMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void InstructionDisplayMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.InstructionDisplayMediator","onRegister",0xaf8b0ed7,"view.mediator.InstructionDisplayMediator.onRegister","view/mediator/InstructionDisplayMediator.hx",19,0x885d8e65)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(21)
		::model::proxy::ProgramProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		_g = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(21)
		this->programProxy = _g;
		HX_STACK_LINE(22)
		this->getView()->set_visible(false);
		HX_STACK_LINE(23)
		this->getView()->set_x(((int)495 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(24)
		this->getView()->set_y(((int)657 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(25)
		::view::component::InstructionDisplay _g1 = this->getView();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		this->sendNotification(::AppConstants_obj::ADD_TO_NAVIG_VIEW,_g1,null());
	}
return null();
}


Array< ::String > InstructionDisplayMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.InstructionDisplayMediator","listNotificationInterests",0x1840384b,"view.mediator.InstructionDisplayMediator.listNotificationInterests","view/mediator/InstructionDisplayMediator.hx",29,0x885d8e65)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::POWER_ON).Add(::AppConstants_obj::POWER_OFF);
}


Void InstructionDisplayMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.InstructionDisplayMediator","handleNotification",0x3c08f3e8,"view.mediator.InstructionDisplayMediator.handleNotification","view/mediator/InstructionDisplayMediator.hx",38,0x885d8e65)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(38)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(41)
			::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
			HX_STACK_LINE(41)
			instruction = hx::TCast< model::vo::InstructionVO >::cast(this->programProxy->getInstruction());
			HX_STACK_LINE(42)
			this->getView()->setOutput(instruction);
		}
		else if (  ( _switch_1==::AppConstants_obj::POWER_ON)){
			HX_STACK_LINE(44)
			this->getView()->set_visible(true);
		}
		else if (  ( _switch_1==::AppConstants_obj::POWER_OFF)){
			HX_STACK_LINE(46)
			this->getView()->set_visible(false);
		}
	}
return null();
}


Void InstructionDisplayMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.InstructionDisplayMediator","viewReadyHandler",0x50a585a1,"view.mediator.InstructionDisplayMediator.viewReadyHandler","view/mediator/InstructionDisplayMediator.hx",51,0x885d8e65)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(51)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("InstructionDisplayMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InstructionDisplayMediator_obj,viewReadyHandler,(void))

::view::component::InstructionDisplay InstructionDisplayMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.InstructionDisplayMediator","getView",0xac05cac6,"view.mediator.InstructionDisplayMediator.getView","view/mediator/InstructionDisplayMediator.hx",55,0x885d8e65)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(InstructionDisplayMediator_obj,getView,return )

::String InstructionDisplayMediator_obj::NAME;


InstructionDisplayMediator_obj::InstructionDisplayMediator_obj()
{
}

void InstructionDisplayMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InstructionDisplayMediator);
	HX_MARK_MEMBER_NAME(programProxy,"programProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InstructionDisplayMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(programProxy,"programProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic InstructionDisplayMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"programProxy") ) { return programProxy; }
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

Dynamic InstructionDisplayMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"programProxy") ) { programProxy=inValue.Cast< ::model::proxy::ProgramProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InstructionDisplayMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("programProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::ProgramProxy*/ ,(int)offsetof(InstructionDisplayMediator_obj,programProxy),HX_CSTRING("programProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("programProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InstructionDisplayMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InstructionDisplayMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InstructionDisplayMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InstructionDisplayMediator_obj::NAME,"NAME");
};

#endif

Class InstructionDisplayMediator_obj::__mClass;

void InstructionDisplayMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.InstructionDisplayMediator"), hx::TCanCast< InstructionDisplayMediator_obj> ,sStaticFields,sMemberFields,
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

void InstructionDisplayMediator_obj::__boot()
{
	NAME= HX_CSTRING("InstructionDisplayMediator");
}

} // end namespace view
} // end namespace mediator
