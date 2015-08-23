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
#ifndef INCLUDED_view_component_lines_Accumulator
#include <view/component/lines/Accumulator.h>
#endif
#ifndef INCLUDED_view_mediator_lines_AccumulatorMediator
#include <view/mediator/lines/AccumulatorMediator.h>
#endif
namespace view{
namespace mediator{
namespace lines{

Void AccumulatorMediator_obj::__construct(::view::component::lines::Accumulator viewComponent)
{
HX_STACK_FRAME("view.mediator.lines.AccumulatorMediator","new",0xe89814ea,"view.mediator.lines.AccumulatorMediator.new","view/mediator/lines/AccumulatorMediator.hx",22,0xa04ac667)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(22)
	super::__construct(HX_CSTRING("AccumulatorMediator"),viewComponent);
}
;
	return null();
}

//AccumulatorMediator_obj::~AccumulatorMediator_obj() { }

Dynamic AccumulatorMediator_obj::__CreateEmpty() { return  new AccumulatorMediator_obj; }
hx::ObjectPtr< AccumulatorMediator_obj > AccumulatorMediator_obj::__new(::view::component::lines::Accumulator viewComponent)
{  hx::ObjectPtr< AccumulatorMediator_obj > result = new AccumulatorMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic AccumulatorMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AccumulatorMediator_obj > result = new AccumulatorMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void AccumulatorMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.lines.AccumulatorMediator","onRegister",0x52143b58,"view.mediator.lines.AccumulatorMediator.onRegister","view/mediator/lines/AccumulatorMediator.hx",25,0xa04ac667)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(27)
		::model::proxy::SnapshotProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		_g = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(27)
		this->snapshotProxy = _g;
		HX_STACK_LINE(28)
		::model::proxy::AppProxy _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(28)
		_g1 = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(28)
		this->appProxy = _g1;
		HX_STACK_LINE(29)
		::view::component::lines::Accumulator _g2 = this->getView();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(29)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g2,null());
	}
return null();
}


Array< ::String > AccumulatorMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.lines.AccumulatorMediator","listNotificationInterests",0x5e2d44ea,"view.mediator.lines.AccumulatorMediator.listNotificationInterests","view/mediator/lines/AccumulatorMediator.hx",33,0xa04ac667)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::ACCUMULATOR_CHANGED).Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CLOCK_OFF).Add(::AppConstants_obj::MODEL_RESET_COMPLETE).Add(::AppConstants_obj::DETAIL_POPUP_ACTIVE);
}


Void AccumulatorMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.lines.AccumulatorMediator","handleNotification",0xd9440969,"view.mediator.lines.AccumulatorMediator.handleNotification","view/mediator/lines/AccumulatorMediator.hx",43,0xa04ac667)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(43)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::ACCUMULATOR_CHANGED)){
			HX_STACK_LINE(46)
			if ((!(this->appProxy->getDetailPopupActive()))){
				HX_STACK_LINE(47)
				Dynamic _g1 = note->getBody();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(47)
				this->getView()->showLines(_g1);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(50)
			if ((!(this->appProxy->getDetailPopupActive()))){
				HX_STACK_LINE(51)
				Array< bool > _g1 = this->snapshotProxy->getAccumulator()->getCodeArr();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(51)
				this->getView()->showLines(_g1);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::CLOCK_OFF)){
			HX_STACK_LINE(54)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(56)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::DETAIL_POPUP_ACTIVE)){
			HX_STACK_LINE(58)
			this->getView()->hideAllLines();
		}
	}
return null();
}


Void AccumulatorMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.lines.AccumulatorMediator","viewReadyHandler",0xa4a888e2,"view.mediator.lines.AccumulatorMediator.viewReadyHandler","view/mediator/lines/AccumulatorMediator.hx",63,0xa04ac667)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(63)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("AccumulatorMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AccumulatorMediator_obj,viewReadyHandler,(void))

::view::component::lines::Accumulator AccumulatorMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.lines.AccumulatorMediator","getView",0x2fd433a5,"view.mediator.lines.AccumulatorMediator.getView","view/mediator/lines/AccumulatorMediator.hx",67,0xa04ac667)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(AccumulatorMediator_obj,getView,return )

::String AccumulatorMediator_obj::NAME;


AccumulatorMediator_obj::AccumulatorMediator_obj()
{
}

void AccumulatorMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AccumulatorMediator);
	HX_MARK_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AccumulatorMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AccumulatorMediator_obj::__Field(const ::String &inName,bool inCallProp)
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
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { snapshotProxy=inValue.Cast< ::model::proxy::SnapshotProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AccumulatorMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("snapshotProxy"));
	outFields->push(HX_CSTRING("appProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::SnapshotProxy*/ ,(int)offsetof(AccumulatorMediator_obj,snapshotProxy),HX_CSTRING("snapshotProxy")},
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(AccumulatorMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("snapshotProxy"),
	HX_CSTRING("appProxy"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.lines.AccumulatorMediator"), hx::TCanCast< AccumulatorMediator_obj> ,sStaticFields,sMemberFields,
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
} // end namespace lines
