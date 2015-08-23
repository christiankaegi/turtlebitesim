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
#ifndef INCLUDED_model_proxy_SnapshotProxy
#include <model/proxy/SnapshotProxy.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
#endif
#ifndef INCLUDED_model_vo_SnapshotVO
#include <model/vo/SnapshotVO.h>
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
#ifndef INCLUDED_view_component_Display
#include <view/component/Display.h>
#endif
#ifndef INCLUDED_view_mediator_DisplayMediator
#include <view/mediator/DisplayMediator.h>
#endif
namespace view{
namespace mediator{

Void DisplayMediator_obj::__construct(::view::component::Display viewComponent)
{
HX_STACK_FRAME("view.mediator.DisplayMediator","new",0x3ebc31d5,"view.mediator.DisplayMediator.new","view/mediator/DisplayMediator.hx",18,0x81198f1b)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(18)
	super::__construct(HX_CSTRING("DisplayMediator"),viewComponent);
}
;
	return null();
}

//DisplayMediator_obj::~DisplayMediator_obj() { }

Dynamic DisplayMediator_obj::__CreateEmpty() { return  new DisplayMediator_obj; }
hx::ObjectPtr< DisplayMediator_obj > DisplayMediator_obj::__new(::view::component::Display viewComponent)
{  hx::ObjectPtr< DisplayMediator_obj > result = new DisplayMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic DisplayMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayMediator_obj > result = new DisplayMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void DisplayMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.DisplayMediator","onRegister",0xce3a61cd,"view.mediator.DisplayMediator.onRegister","view/mediator/DisplayMediator.hx",21,0x81198f1b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(23)
		this->getView()->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(24)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(24)
		this->appProxy = _g;
		HX_STACK_LINE(25)
		::model::proxy::SnapshotProxy _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		_g1 = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(25)
		this->snapshotProxy = _g1;
		HX_STACK_LINE(26)
		::view::component::Display _g2 = this->getView();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(26)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g2,null());
	}
return null();
}


Array< ::String > DisplayMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.DisplayMediator","listNotificationInterests",0xabe4aa15,"view.mediator.DisplayMediator.listNotificationInterests","view/mediator/DisplayMediator.hx",30,0x81198f1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::LOOP).Add(::AppConstants_obj::MODEL_RESET_COMPLETE).Add(::AppConstants_obj::DETAIL_POPUP_ACTIVE);
}


Void DisplayMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.DisplayMediator","handleNotification",0x29552cde,"view.mediator.DisplayMediator.handleNotification","view/mediator/DisplayMediator.hx",39,0x81198f1b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(39)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(42)
			if ((!(this->appProxy->getDetailPopupActive()))){
				HX_STACK_LINE(43)
				::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
				HX_STACK_LINE(43)
				instruction = hx::TCast< model::vo::InstructionVO >::cast(note->getBody());
				HX_STACK_LINE(44)
				if (((instruction->codeOpcode == ::AppConstants_obj::OPCODE_OUT))){
					HX_STACK_LINE(45)
					::String _g1 = instruction->codeAddress;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(45)
					::String _switch_2 = (_g1);
					if (  ( _switch_2==::AppConstants_obj::ADDRESS_ACCUMULATOR)){
						HX_STACK_LINE(47)
						int _g2 = this->snapshotProxy->getAccumulator()->getDecimal();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(47)
						this->getView()->setOutput(_g2);
					}
					else if (  ( _switch_2==::AppConstants_obj::ADDRESS_REGISTER1)){
						HX_STACK_LINE(49)
						int _g11 = this->snapshotProxy->getRegister1()->getDecimal();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(49)
						this->getView()->setOutput(_g11);
					}
					else if (  ( _switch_2==::AppConstants_obj::ADDRESS_REGISTER2)){
						HX_STACK_LINE(51)
						int _g2 = this->snapshotProxy->getRegister2()->getDecimal();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(51)
						this->getView()->setOutput(_g2);
					}
				}
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::LOOP)){
			HX_STACK_LINE(56)
			this->getView()->clear();
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(58)
			this->getView()->clear();
			HX_STACK_LINE(59)
			bool _g3 = this->appProxy->getCharCodeActive();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(59)
			this->getView()->setCharCodeCheckBox(_g3);
		}
		else if (  ( _switch_1==::AppConstants_obj::DETAIL_POPUP_ACTIVE)){
			HX_STACK_LINE(61)
			this->getView()->clear();
		}
	}
return null();
}


Void DisplayMediator_obj::dataEventHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.DisplayMediator","dataEventHandler",0x0b43f985,"view.mediator.DisplayMediator.dataEventHandler","view/mediator/DisplayMediator.hx",66,0x81198f1b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(67)
		::String id = event->data->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(68)
		::String _switch_3 = (id);
		if (  ( _switch_3==HX_CSTRING("charCodeButton"))){
			HX_STACK_LINE(70)
			bool _g = !(this->appProxy->getCharCodeActive());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(70)
			this->appProxy->setCharCodeActive(_g);
			HX_STACK_LINE(71)
			bool _g1 = this->appProxy->getCharCodeActive();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(71)
			this->getView()->setCharCodeCheckBox(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayMediator_obj,dataEventHandler,(void))

Void DisplayMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.DisplayMediator","viewReadyHandler",0xf23e7517,"view.mediator.DisplayMediator.viewReadyHandler","view/mediator/DisplayMediator.hx",76,0x81198f1b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(76)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("DisplayMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayMediator_obj,viewReadyHandler,(void))

::view::component::Display DisplayMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.DisplayMediator","getView",0xef60a210,"view.mediator.DisplayMediator.getView","view/mediator/DisplayMediator.hx",80,0x81198f1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayMediator_obj,getView,return )

::String DisplayMediator_obj::NAME;


DisplayMediator_obj::DisplayMediator_obj()
{
}

void DisplayMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayMediator);
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	HX_MARK_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	HX_VISIT_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayMediator_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { return snapshotProxy; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dataEventHandler") ) { return dataEventHandler_dyn(); }
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

Dynamic DisplayMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { snapshotProxy=inValue.Cast< ::model::proxy::SnapshotProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appProxy"));
	outFields->push(HX_CSTRING("snapshotProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(DisplayMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{hx::fsObject /*::model::proxy::SnapshotProxy*/ ,(int)offsetof(DisplayMediator_obj,snapshotProxy),HX_CSTRING("snapshotProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("appProxy"),
	HX_CSTRING("snapshotProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("dataEventHandler"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayMediator_obj::NAME,"NAME");
};

#endif

Class DisplayMediator_obj::__mClass;

void DisplayMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.DisplayMediator"), hx::TCanCast< DisplayMediator_obj> ,sStaticFields,sMemberFields,
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

void DisplayMediator_obj::__boot()
{
	NAME= HX_CSTRING("DisplayMediator");
}

} // end namespace view
} // end namespace mediator
