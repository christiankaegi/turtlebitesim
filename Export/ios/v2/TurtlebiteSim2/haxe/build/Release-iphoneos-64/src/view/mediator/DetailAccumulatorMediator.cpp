#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_proxy_SnapshotProxy
#include <model/proxy/SnapshotProxy.h>
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
HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","new",0x94a10bc8,"view.mediator.DetailAccumulatorMediator.new","view/mediator/DetailAccumulatorMediator.hx",16,0x079c0c88)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(16)
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
		HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","onRegister",0xca74fc3a,"view.mediator.DetailAccumulatorMediator.onRegister","view/mediator/DetailAccumulatorMediator.hx",19,0x079c0c88)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		::model::proxy::SnapshotProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		_g = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(20)
		this->snapshotProxy = _g;
		HX_STACK_LINE(21)
		this->getView()->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(22)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(23)
		::view::component::DetailAccumulator _g1 = this->getView();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(23)
		this->sendNotification(::AppConstants_obj::ADD_TO_NAVIG_VIEW,_g1,null());
	}
return null();
}


Void DetailAccumulatorMediator_obj::onRemove( ){
{
		HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","onRemove",0x3c2ffe5b,"view.mediator.DetailAccumulatorMediator.onRemove","view/mediator/DetailAccumulatorMediator.hx",27,0x079c0c88)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->getView()->destroy();
	}
return null();
}


Array< ::String > DetailAccumulatorMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","listNotificationInterests",0x4928d248,"view.mediator.DetailAccumulatorMediator.listNotificationInterests","view/mediator/DetailAccumulatorMediator.hx",31,0x079c0c88)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::ACCUMULATOR_CHANGED).Add(::AppConstants_obj::UPDATE_DETAIL_ACCUMULATOR_LINES).Add(::AppConstants_obj::POWER_OFF);
}


Void DetailAccumulatorMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","handleNotification",0xf9837c4b,"view.mediator.DetailAccumulatorMediator.handleNotification","view/mediator/DetailAccumulatorMediator.hx",39,0x079c0c88)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(39)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::ACCUMULATOR_CHANGED)){
			HX_STACK_LINE(42)
			::String _g1 = this->snapshotProxy->getAccumulator()->getHex();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			this->getView()->setOutputText(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::UPDATE_DETAIL_ACCUMULATOR_LINES)){
			HX_STACK_LINE(44)
			Dynamic _g1 = note->getBody();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(44)
			this->getView()->showLines(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::POWER_OFF)){
			HX_STACK_LINE(46)
			this->get_facade()->removeMediator(HX_CSTRING("DetailAccumulatorMediator"));
		}
	}
return null();
}


Void DetailAccumulatorMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","viewReadyHandler",0x740c1f44,"view.mediator.DetailAccumulatorMediator.viewReadyHandler","view/mediator/DetailAccumulatorMediator.hx",51,0x079c0c88)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(51)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("DetailAccumulatorMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorMediator_obj,viewReadyHandler,(void))

::view::component::DetailAccumulator DetailAccumulatorMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","getView",0xe584f183,"view.mediator.DetailAccumulatorMediator.getView","view/mediator/DetailAccumulatorMediator.hx",55,0x079c0c88)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulatorMediator_obj,getView,return )

Void DetailAccumulatorMediator_obj::dataEventHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.DetailAccumulatorMediator","dataEventHandler",0x8d11a3b2,"view.mediator.DetailAccumulatorMediator.dataEventHandler","view/mediator/DetailAccumulatorMediator.hx",59,0x079c0c88)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(59)
		Dynamic _g = event->data->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		Dynamic _switch_2 = (_g);
		if (  ( _switch_2==HX_CSTRING("closeButton"))){
			HX_STACK_LINE(61)
			this->get_facade()->removeMediator(HX_CSTRING("DetailAccumulatorMediator"));
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
	HX_MARK_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DetailAccumulatorMediator_obj::__Visit(HX_VISIT_PARAMS)
{
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
		if (HX_FIELD_EQ(inName,"onRemove") ) { return onRemove_dyn(); }
		break;
	case 10:
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
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { snapshotProxy=inValue.Cast< ::model::proxy::SnapshotProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DetailAccumulatorMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("snapshotProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::SnapshotProxy*/ ,(int)offsetof(DetailAccumulatorMediator_obj,snapshotProxy),HX_CSTRING("snapshotProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
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
