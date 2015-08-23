#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_proxy_AppProxy
#include <model/proxy/AppProxy.h>
#endif
#ifndef INCLUDED_model_proxy_ProgramProxy
#include <model/proxy/ProgramProxy.h>
#endif
#ifndef INCLUDED_model_proxy_SnapshotProxy
#include <model/proxy/SnapshotProxy.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
#endif
#ifndef INCLUDED_model_vo_SnapshotVO
#include <model/vo/SnapshotVO.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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
#ifndef INCLUDED_view_component_Output
#include <view/component/Output.h>
#endif
#ifndef INCLUDED_view_mediator_OutputMediator
#include <view/mediator/OutputMediator.h>
#endif
namespace view{
namespace mediator{

Void OutputMediator_obj::__construct(::view::component::Output viewComponent)
{
HX_STACK_FRAME("view.mediator.OutputMediator","new",0x214b2938,"view.mediator.OutputMediator.new","view/mediator/OutputMediator.hx",20,0x8c529158)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(20)
	super::__construct(HX_CSTRING("OutputMediator"),viewComponent);
}
;
	return null();
}

//OutputMediator_obj::~OutputMediator_obj() { }

Dynamic OutputMediator_obj::__CreateEmpty() { return  new OutputMediator_obj; }
hx::ObjectPtr< OutputMediator_obj > OutputMediator_obj::__new(::view::component::Output viewComponent)
{  hx::ObjectPtr< OutputMediator_obj > result = new OutputMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic OutputMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OutputMediator_obj > result = new OutputMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void OutputMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.OutputMediator","onRegister",0x440a6cca,"view.mediator.OutputMediator.onRegister","view/mediator/OutputMediator.hx",23,0x8c529158)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(25)
		::view::component::Output _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
		HX_STACK_LINE(26)
		::model::proxy::AppProxy _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		_g1 = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(26)
		this->appProxy = _g1;
		HX_STACK_LINE(27)
		::model::proxy::ProgramProxy _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(27)
		_g2 = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(27)
		this->programProxy = _g2;
		HX_STACK_LINE(28)
		::model::proxy::SnapshotProxy _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(28)
		_g3 = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(28)
		this->snapshotProxy = _g3;
	}
return null();
}


Array< ::String > OutputMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.OutputMediator","listNotificationInterests",0xfc4883b8,"view.mediator.OutputMediator.listNotificationInterests","view/mediator/OutputMediator.hx",32,0x8c529158)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CLOCK_OFF).Add(::AppConstants_obj::BROADCAST_SDA).Add(::AppConstants_obj::BROADCAST_LDA).Add(::AppConstants_obj::REGISTER_1_CHANGED).Add(::AppConstants_obj::REGISTER_2_CHANGED).Add(::AppConstants_obj::ACCUMULATOR_CHANGED).Add(::AppConstants_obj::LOAD_ROM).Add(::AppConstants_obj::POWER_ON).Add(::AppConstants_obj::POWER_OFF).Add(::AppConstants_obj::MODEL_RESET_COMPLETE);
}


Void OutputMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.OutputMediator","handleNotification",0xd5d3fcdb,"view.mediator.OutputMediator.handleNotification","view/mediator/OutputMediator.hx",48,0x8c529158)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(48)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(51)
			if ((!(this->appProxy->getEnterInstructionActive()))){
				HX_STACK_LINE(52)
				::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
				HX_STACK_LINE(52)
				instruction = hx::TCast< model::vo::InstructionVO >::cast(note->getBody());
				HX_STACK_LINE(53)
				this->getView()->setProgramCountPointer(instruction->pointer);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::BROADCAST_LDA)){
			HX_STACK_LINE(56)
			this->getView()->setRamPointer(note->getBody()->__Field(HX_CSTRING("pointer"),true));
		}
		else if (  ( _switch_1==::AppConstants_obj::BROADCAST_SDA)){
			HX_STACK_LINE(58)
			this->getView()->updateRam(note->getBody()->__Field(HX_CSTRING("ram"),true),note->getBody()->__Field(HX_CSTRING("pointer"),true));
		}
		else if (  ( _switch_1==::AppConstants_obj::CLOCK_OFF)){
			HX_STACK_LINE(60)
			this->getView()->resetRamPointer();
		}
		else if (  ( _switch_1==::AppConstants_obj::REGISTER_1_CHANGED)){
			HX_STACK_LINE(62)
			::String _g1 = this->snapshotProxy->getRegister1()->getHex();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(62)
			this->getView()->setRegister1(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::REGISTER_2_CHANGED)){
			HX_STACK_LINE(64)
			::String _g1 = this->snapshotProxy->getRegister2()->getHex();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(64)
			this->getView()->setRegister2(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::ACCUMULATOR_CHANGED)){
			HX_STACK_LINE(66)
			::String _g2 = this->snapshotProxy->getAccumulator()->getHex();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(66)
			this->getView()->setAccumulator(_g2);
		}
		else if (  ( _switch_1==::AppConstants_obj::LOAD_ROM)){
			HX_STACK_LINE(68)
			Array< ::Dynamic > _g3 = this->programProxy->getCurrentInstructions();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(68)
			this->getView()->loadRomDisplay(_g3);
		}
		else if (  ( _switch_1==::AppConstants_obj::POWER_ON)){
			HX_STACK_LINE(70)
			this->getView()->powerOn();
			HX_STACK_LINE(71)
			Array< ::Dynamic > _g4 = this->programProxy->getCurrentInstructions();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(71)
			this->getView()->loadRomDisplay(_g4);
		}
		else if (  ( _switch_1==::AppConstants_obj::POWER_OFF)){
			HX_STACK_LINE(73)
			this->getView()->powerOff();
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(75)
			this->getView()->resetAll();
		}
	}
return null();
}


Void OutputMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.OutputMediator","viewReadyHandler",0x93685bd4,"view.mediator.OutputMediator.viewReadyHandler","view/mediator/OutputMediator.hx",80,0x8c529158)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(80)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("OutputMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OutputMediator_obj,viewReadyHandler,(void))

::view::component::Output OutputMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.OutputMediator","getView",0x2ae286f3,"view.mediator.OutputMediator.getView","view/mediator/OutputMediator.hx",84,0x8c529158)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(OutputMediator_obj,getView,return )

::String OutputMediator_obj::NAME;


OutputMediator_obj::OutputMediator_obj()
{
}

void OutputMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OutputMediator);
	HX_MARK_MEMBER_NAME(programProxy,"programProxy");
	HX_MARK_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OutputMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(programProxy,"programProxy");
	HX_VISIT_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic OutputMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { return appProxy; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"programProxy") ) { return programProxy; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { return snapshotProxy; }
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

Dynamic OutputMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"programProxy") ) { programProxy=inValue.Cast< ::model::proxy::ProgramProxy >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { snapshotProxy=inValue.Cast< ::model::proxy::SnapshotProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OutputMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("programProxy"));
	outFields->push(HX_CSTRING("snapshotProxy"));
	outFields->push(HX_CSTRING("appProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::ProgramProxy*/ ,(int)offsetof(OutputMediator_obj,programProxy),HX_CSTRING("programProxy")},
	{hx::fsObject /*::model::proxy::SnapshotProxy*/ ,(int)offsetof(OutputMediator_obj,snapshotProxy),HX_CSTRING("snapshotProxy")},
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(OutputMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("programProxy"),
	HX_CSTRING("snapshotProxy"),
	HX_CSTRING("appProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OutputMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OutputMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OutputMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OutputMediator_obj::NAME,"NAME");
};

#endif

Class OutputMediator_obj::__mClass;

void OutputMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.OutputMediator"), hx::TCanCast< OutputMediator_obj> ,sStaticFields,sMemberFields,
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

void OutputMediator_obj::__boot()
{
	NAME= HX_CSTRING("OutputMediator");
}

} // end namespace view
} // end namespace mediator
