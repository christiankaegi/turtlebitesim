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
#ifndef INCLUDED_view_component_basis_Ram
#include <view/component/basis/Ram.h>
#endif
#ifndef INCLUDED_view_mediator_basis_RamMediator
#include <view/mediator/basis/RamMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void RamMediator_obj::__construct(::view::component::basis::Ram viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.RamMediator","new",0xdeb4a941,"view.mediator.basis.RamMediator.new","view/mediator/basis/RamMediator.hx",17,0x02ef40f0)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(17)
	super::__construct(HX_CSTRING("RamMediator"),viewComponent);
}
;
	return null();
}

//RamMediator_obj::~RamMediator_obj() { }

Dynamic RamMediator_obj::__CreateEmpty() { return  new RamMediator_obj; }
hx::ObjectPtr< RamMediator_obj > RamMediator_obj::__new(::view::component::basis::Ram viewComponent)
{  hx::ObjectPtr< RamMediator_obj > result = new RamMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic RamMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RamMediator_obj > result = new RamMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RamMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.RamMediator","onRegister",0x3196efe1,"view.mediator.basis.RamMediator.onRegister","view/mediator/basis/RamMediator.hx",20,0x02ef40f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(22)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(22)
		this->appProxy = _g;
		HX_STACK_LINE(23)
		::model::proxy::SnapshotProxy _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(23)
		_g1 = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(23)
		this->snapshotProxy = _g1;
		HX_STACK_LINE(24)
		::view::component::basis::Ram _g2 = this->getView();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(24)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g2,null());
	}
return null();
}


Array< ::String > RamMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.RamMediator","listNotificationInterests",0xb69b1281,"view.mediator.basis.RamMediator.listNotificationInterests","view/mediator/basis/RamMediator.hx",28,0x02ef40f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::BROADCAST_SDA).Add(::AppConstants_obj::MODEL_RESET_COMPLETE);
}


Void RamMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.RamMediator","handleNotification",0xabcbeef2,"view.mediator.basis.RamMediator.handleNotification","view/mediator/basis/RamMediator.hx",35,0x02ef40f0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(36)
		if ((this->appProxy->getDetailPopupActive())){
			HX_STACK_LINE(37)
			return null();
		}
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(39)
			::String _switch_1 = (_g);
			if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
				HX_STACK_LINE(42)
				this->getView()->hideAllLines();
			}
			else if (  ( _switch_1==::AppConstants_obj::BROADCAST_SDA)){
				HX_STACK_LINE(44)
				this->getView()->showLines(note->getBody()->__Field(HX_CSTRING("ram"),true)->__GetItem(note->getBody()->__Field(HX_CSTRING("pointer"),true)));
			}
			else if (  ( _switch_1==::AppConstants_obj::BROADCAST_LDA)){
				HX_STACK_LINE(46)
				this->getView()->showLines(note->getBody()->__Field(HX_CSTRING("ram"),true));
			}
			else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
				HX_STACK_LINE(48)
				this->getView()->hideAllLines();
			}
		}
	}
return null();
}


Void RamMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.RamMediator","viewReadyHandler",0x6a26ca2b,"view.mediator.basis.RamMediator.viewReadyHandler","view/mediator/basis/RamMediator.hx",54,0x02ef40f0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(54)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("RamMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RamMediator_obj,viewReadyHandler,(void))

::view::component::basis::Ram RamMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.RamMediator","getView",0xc9a73f7c,"view.mediator.basis.RamMediator.getView","view/mediator/basis/RamMediator.hx",58,0x02ef40f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(RamMediator_obj,getView,return )

::String RamMediator_obj::NAME;


RamMediator_obj::RamMediator_obj()
{
}

void RamMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RamMediator);
	HX_MARK_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RamMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RamMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic RamMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void RamMediator_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::model::proxy::SnapshotProxy*/ ,(int)offsetof(RamMediator_obj,snapshotProxy),HX_CSTRING("snapshotProxy")},
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(RamMediator_obj,appProxy),HX_CSTRING("appProxy")},
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
	HX_MARK_MEMBER_NAME(RamMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RamMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RamMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RamMediator_obj::NAME,"NAME");
};

#endif

Class RamMediator_obj::__mClass;

void RamMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.RamMediator"), hx::TCanCast< RamMediator_obj> ,sStaticFields,sMemberFields,
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

void RamMediator_obj::__boot()
{
	NAME= HX_CSTRING("RamMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
