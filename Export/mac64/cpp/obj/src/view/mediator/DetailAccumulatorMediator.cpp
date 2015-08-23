#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_data_SnapshotData
#include <model/data/SnapshotData.h>
#endif
#ifndef INCLUDED_model_proxy_AppProxy
#include <model/proxy/AppProxy.h>
#endif
#ifndef INCLUDED_model_proxy_ClockProxy
#include <model/proxy/ClockProxy.h>
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
#ifndef INCLUDED_view_component_DetailAccumulator
#include <view/component/DetailAccumulator.h>
#endif
#ifndef INCLUDED_view_mediator_DetailAccumulatorMediator
#include <view/mediator/DetailAccumulatorMediator.h>
#endif
namespace view{
namespace mediator{

Void DetailAccumulatorMediator_obj::__construct(::view::component::DetailAccumulator viewComponent)
{
HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","new",0x94a10bc8,"view.mediator.DetailAccumulatorMediator.new","view/mediator/DetailAccumulatorMediator.hx",21,0x079c0c88)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(21)
	super::__construct(HX_CSTRING("DetailAccumulatorMediator"),viewComponent);
}
;
	return null();
}

//DetailAccumulatorMediator_obj::~DetailAccumulatorMediator_obj() { }

Dynamic DetailAccumulatorMediator_obj::__CreateEmpty() { return  new DetailAccumulatorMediator_obj; }
hx::ObjectPtr< DetailAccumulatorMediator_obj > DetailAccumulatorMediator_obj::__new(::view::component::DetailAccumulator viewComponent)
{  hx::ObjectPtr< DetailAccumulatorMediator_obj > result = new DetailAccumulatorMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic DetailAccumulatorMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DetailAccumulatorMediator_obj > result = new DetailAccumulatorMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void DetailAccumulatorMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","onRegister",0xca74fc3a,"view.mediator.DetailAccumulatorMediator.onRegister","view/mediator/DetailAccumulatorMediator.hx",24,0x079c0c88)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(25)
		this->appProxy = _g;
		HX_STACK_LINE(26)
		::model::proxy::ClockProxy _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		_g1 = hx::TCast< model::proxy::ClockProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ClockProxy_obj::NAME));
		HX_STACK_LINE(26)
		this->clockProxy = _g1;
		HX_STACK_LINE(27)
		::model::proxy::SnapshotProxy _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(27)
		_g2 = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(27)
		this->snapshotProxy = _g2;
		HX_STACK_LINE(28)
		this->getView()->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(29)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(30)
		::view::component::DetailAccumulator _g3 = this->getView();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(30)
		this->sendNotification(::AppConstants_obj::ADD_TO_DETAIL_POPUP_VIEW,_g3,null());
	}
return null();
}


Void DetailAccumulatorMediator_obj::onRemove( ){
{
		HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","onRemove",0x3c2ffe5b,"view.mediator.DetailAccumulatorMediator.onRemove","view/mediator/DetailAccumulatorMediator.hx",34,0x079c0c88)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->getView()->destroy();
	}
return null();
}


Array< ::String > DetailAccumulatorMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","listNotificationInterests",0x4928d248,"view.mediator.DetailAccumulatorMediator.listNotificationInterests","view/mediator/DetailAccumulatorMediator.hx",38,0x079c0c88)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::ACCUMULATOR_CHANGED).Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CLOCK_OFF).Add(::AppConstants_obj::POWER_OFF);
}


Void DetailAccumulatorMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","handleNotification",0xf9837c4b,"view.mediator.DetailAccumulatorMediator.handleNotification","view/mediator/DetailAccumulatorMediator.hx",46,0x079c0c88)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(47)
		bool accuChanged = false;		HX_STACK_VAR(accuChanged,"accuChanged");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			::String _switch_1 = (_g);
			if (  ( _switch_1==::AppConstants_obj::ACCUMULATOR_CHANGED)){
				HX_STACK_LINE(51)
				::String _g1 = this->snapshotProxy->getAccumulator()->getHex();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(51)
				this->getView()->setOutputText(_g1);
				HX_STACK_LINE(52)
				Array< bool > _g11 = this->snapshotProxy->getAccumulator()->getCodeArr();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(52)
				this->getView()->showInputLines(_g11);
				HX_STACK_LINE(53)
				Array< bool > _g2 = this->snapshotProxy->getAccumulator()->getCodeArr();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(53)
				this->getView()->showEnablerOutLines(_g2);
				HX_STACK_LINE(54)
				this->getView()->showSetLine();
				HX_STACK_LINE(55)
				accuChanged = true;
			}
			else if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
				HX_STACK_LINE(57)
				::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
				HX_STACK_LINE(57)
				instruction = hx::TCast< model::vo::InstructionVO >::cast(note->getBody());
				HX_STACK_LINE(58)
				::String opcode = instruction->code.substr((int)0,(int)4);		HX_STACK_VAR(opcode,"opcode");
				HX_STACK_LINE(59)
				Array< bool > codeArr = Array_obj< bool >::__new();		HX_STACK_VAR(codeArr,"codeArr");
				HX_STACK_LINE(60)
				if (((bool((bool((bool((opcode == ::AppConstants_obj::OPCODE_MOV)) || bool((opcode == ::AppConstants_obj::OPCODE_SDA)))) || bool((opcode == ::AppConstants_obj::OPCODE_INP)))) || bool((opcode == ::AppConstants_obj::OPCODE_OUT))))){
					HX_STACK_LINE(61)
					::String _g1 = instruction->code.substr((int)6,(int)2);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(61)
					::String _switch_2 = (_g1);
					if (  ( _switch_2==::AppConstants_obj::MULTIPLEXER_ACCUMULATOR)){
						HX_STACK_LINE(63)
						Array< bool > _g3 = this->snapshotProxy->getData()->__Field(HX_CSTRING("accumulator"),true)->__Field(HX_CSTRING("getCodeArr"),true)();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(63)
						codeArr = _g3;
						HX_STACK_LINE(64)
						this->getView()->showInputLines(codeArr);
						HX_STACK_LINE(65)
						this->getView()->showEnableLine();
						HX_STACK_LINE(66)
						this->getView()->showEnablerOutLines(codeArr);
					}
				}
				else{
					HX_STACK_LINE(69)
					if ((!(accuChanged))){
						HX_STACK_LINE(70)
						this->getView()->showEnableLine();
						HX_STACK_LINE(71)
						Array< bool > _g4 = this->snapshotProxy->getAccumulator()->getCodeArr();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(71)
						this->getView()->showEnablerOutLines(_g4);
					}
				}
			}
			else if (  ( _switch_1==::AppConstants_obj::CLOCK_OFF)){
				HX_STACK_LINE(75)
				this->getView()->hideEnableLine();
				HX_STACK_LINE(76)
				this->getView()->hideEnablerOutLines();
				HX_STACK_LINE(77)
				this->getView()->hideSetLine();
			}
			else if (  ( _switch_1==::AppConstants_obj::POWER_OFF)){
				HX_STACK_LINE(79)
				this->get_facade()->removeMediator(HX_CSTRING("DetailAccumulatorMediator"));
			}
		}
	}
return null();
}


Void DetailAccumulatorMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","viewReadyHandler",0x740c1f44,"view.mediator.DetailAccumulatorMediator.viewReadyHandler","view/mediator/DetailAccumulatorMediator.hx",83,0x079c0c88)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(84)
		::model::vo::SnapshotVO vo = this->snapshotProxy->getAccumulator();		HX_STACK_VAR(vo,"vo");
		HX_STACK_LINE(85)
		::String _g = vo->getHex();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		this->getView()->setOutputText(_g);
		HX_STACK_LINE(86)
		Array< bool > _g1 = vo->getCodeArr();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		this->getView()->showInputLines(_g1);
		HX_STACK_LINE(87)
		bool clkOn = this->clockProxy->getClockOn();		HX_STACK_VAR(clkOn,"clkOn");
		HX_STACK_LINE(88)
		if ((this->clockProxy->getClockOn())){
			HX_STACK_LINE(89)
			this->getView()->showEnableLine();
			HX_STACK_LINE(90)
			Array< bool > _g2 = vo->getCodeArr();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(90)
			this->getView()->showEnablerOutLines(_g2);
		}
		HX_STACK_LINE(92)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("DetailAccumulatorMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorMediator_obj,viewReadyHandler,(void))

::view::component::DetailAccumulator DetailAccumulatorMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","getView",0xe584f183,"view.mediator.DetailAccumulatorMediator.getView","view/mediator/DetailAccumulatorMediator.hx",96,0x079c0c88)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulatorMediator_obj,getView,return )

Void DetailAccumulatorMediator_obj::dataEventHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","dataEventHandler",0x8d11a3b2,"view.mediator.DetailAccumulatorMediator.dataEventHandler","view/mediator/DetailAccumulatorMediator.hx",100,0x079c0c88)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(100)
		Dynamic _g = event->data->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		Dynamic _switch_3 = (_g);
		if (  ( _switch_3==HX_CSTRING("closeButton"))){
			HX_STACK_LINE(102)
			this->get_facade()->removeMediator(HX_CSTRING("DetailAccumulatorMediator"));
			HX_STACK_LINE(103)
			this->appProxy->setDetailPopupActive(false);
		}
		else if (  ( _switch_3==HX_CSTRING("oneBitMemoryManualMode"))){
			HX_STACK_LINE(105)
			this->sendNotification(::AppConstants_obj::MANUAL_MODE_ON,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorMediator_obj,dataEventHandler,(void))

::String DetailAccumulatorMediator_obj::NAME;


DetailAccumulatorMediator_obj::DetailAccumulatorMediator_obj()
{
}

void DetailAccumulatorMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DetailAccumulatorMediator);
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	HX_MARK_MEMBER_NAME(clockProxy,"clockProxy");
	HX_MARK_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DetailAccumulatorMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	HX_VISIT_MEMBER_NAME(clockProxy,"clockProxy");
	HX_VISIT_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DetailAccumulatorMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { return appProxy; }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return onRemove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clockProxy") ) { return clockProxy; }
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { return snapshotProxy; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"viewReadyHandler") ) { return viewReadyHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"dataEventHandler") ) { return dataEventHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleNotification") ) { return handleNotification_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listNotificationInterests") ) { return listNotificationInterests_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DetailAccumulatorMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clockProxy") ) { clockProxy=inValue.Cast< ::model::proxy::ClockProxy >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { snapshotProxy=inValue.Cast< ::model::proxy::SnapshotProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DetailAccumulatorMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appProxy"));
	outFields->push(HX_CSTRING("clockProxy"));
	outFields->push(HX_CSTRING("snapshotProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(DetailAccumulatorMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{hx::fsObject /*::model::proxy::ClockProxy*/ ,(int)offsetof(DetailAccumulatorMediator_obj,clockProxy),HX_CSTRING("clockProxy")},
	{hx::fsObject /*::model::proxy::SnapshotProxy*/ ,(int)offsetof(DetailAccumulatorMediator_obj,snapshotProxy),HX_CSTRING("snapshotProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("appProxy"),
	HX_CSTRING("clockProxy"),
	HX_CSTRING("snapshotProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("onRemove"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	HX_CSTRING("dataEventHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DetailAccumulatorMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DetailAccumulatorMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DetailAccumulatorMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DetailAccumulatorMediator_obj::NAME,"NAME");
};

#endif

Class DetailAccumulatorMediator_obj::__mClass;

void DetailAccumulatorMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.DetailAccumulatorMediator"), hx::TCanCast< DetailAccumulatorMediator_obj> ,sStaticFields,sMemberFields,
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

void DetailAccumulatorMediator_obj::__boot()
{
	NAME= HX_CSTRING("DetailAccumulatorMediator");
}

} // end namespace view
} // end namespace mediator
