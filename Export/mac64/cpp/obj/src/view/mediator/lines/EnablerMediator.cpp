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
#ifndef INCLUDED_view_component_lines_Enabler
#include <view/component/lines/Enabler.h>
#endif
#ifndef INCLUDED_view_mediator_lines_EnablerMediator
#include <view/mediator/lines/EnablerMediator.h>
#endif
namespace view{
namespace mediator{
namespace lines{

Void EnablerMediator_obj::__construct(::view::component::lines::Enabler viewComponent)
{
HX_STACK_FRAME("view.mediator.lines.EnablerMediator","new",0x002ffe33,"view.mediator.lines.EnablerMediator.new","view/mediator/lines/EnablerMediator.hx",23,0x667434be)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(23)
	super::__construct(HX_CSTRING("EnablerMediator"),viewComponent);
}
;
	return null();
}

//EnablerMediator_obj::~EnablerMediator_obj() { }

Dynamic EnablerMediator_obj::__CreateEmpty() { return  new EnablerMediator_obj; }
hx::ObjectPtr< EnablerMediator_obj > EnablerMediator_obj::__new(::view::component::lines::Enabler viewComponent)
{  hx::ObjectPtr< EnablerMediator_obj > result = new EnablerMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic EnablerMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnablerMediator_obj > result = new EnablerMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void EnablerMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.lines.EnablerMediator","onRegister",0xa49dfd2f,"view.mediator.lines.EnablerMediator.onRegister","view/mediator/lines/EnablerMediator.hx",26,0x667434be)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(28)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(28)
		this->appProxy = _g;
		HX_STACK_LINE(29)
		::model::proxy::SnapshotProxy _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		_g1 = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(29)
		this->snapshotProxy = _g1;
		HX_STACK_LINE(30)
		::view::component::lines::Enabler _g2 = this->getView();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(30)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g2,null());
	}
return null();
}


Array< ::String > EnablerMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.lines.EnablerMediator","listNotificationInterests",0xe6372cf3,"view.mediator.lines.EnablerMediator.listNotificationInterests","view/mediator/lines/EnablerMediator.hx",34,0x667434be)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::BROADCAST_LDI).Add(::AppConstants_obj::BROADCAST_LDA).Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CHANGE_CLOCK_SPEED).Add(::AppConstants_obj::MODEL_RESET_COMPLETE).Add(::AppConstants_obj::DETAIL_POPUP_ACTIVE);
}


Void EnablerMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.lines.EnablerMediator","handleNotification",0x85b5fa40,"view.mediator.lines.EnablerMediator.handleNotification","view/mediator/lines/EnablerMediator.hx",45,0x667434be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(45)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(48)
			if ((!(this->appProxy->getDetailPopupActive()))){
				HX_STACK_LINE(49)
				this->getView()->hideAllLines();
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::BROADCAST_LDI)){
			HX_STACK_LINE(52)
			if ((!(this->appProxy->getDetailPopupActive()))){
				HX_STACK_LINE(53)
				Dynamic _g1 = note->getBody();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(53)
				this->getView()->showLinesEnabler2(_g1);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::BROADCAST_LDA)){
			HX_STACK_LINE(56)
			if ((!(this->appProxy->getDetailPopupActive()))){
				HX_STACK_LINE(57)
				::model::vo::SnapshotVO vo;		HX_STACK_VAR(vo,"vo");
				HX_STACK_LINE(57)
				vo = hx::TCast< model::vo::SnapshotVO >::cast(note->getBody()->__Field(HX_CSTRING("ram"),true)->__GetItem(note->getBody()->__Field(HX_CSTRING("pointer"),true)));
				HX_STACK_LINE(58)
				Array< bool > _g1 = vo->getCodeArr();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(58)
				this->getView()->showLinesEnabler1(_g1);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::CHANGE_CLOCK_SPEED)){
			HX_STACK_LINE(61)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(63)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::DETAIL_POPUP_ACTIVE)){
			HX_STACK_LINE(65)
			this->getView()->hideAllLines();
		}
	}
return null();
}


Void EnablerMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.lines.EnablerMediator","viewReadyHandler",0x9effc5f9,"view.mediator.lines.EnablerMediator.viewReadyHandler","view/mediator/lines/EnablerMediator.hx",70,0x667434be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(70)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("EnablerMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnablerMediator_obj,viewReadyHandler,(void))

::view::component::lines::Enabler EnablerMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.lines.EnablerMediator","getView",0xc454f56e,"view.mediator.lines.EnablerMediator.getView","view/mediator/lines/EnablerMediator.hx",74,0x667434be)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(EnablerMediator_obj,getView,return )

::String EnablerMediator_obj::NAME;


EnablerMediator_obj::EnablerMediator_obj()
{
}

void EnablerMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnablerMediator);
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	HX_MARK_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EnablerMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	HX_VISIT_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EnablerMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic EnablerMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void EnablerMediator_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(EnablerMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{hx::fsObject /*::model::proxy::SnapshotProxy*/ ,(int)offsetof(EnablerMediator_obj,snapshotProxy),HX_CSTRING("snapshotProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("appProxy"),
	HX_CSTRING("snapshotProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnablerMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EnablerMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnablerMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnablerMediator_obj::NAME,"NAME");
};

#endif

Class EnablerMediator_obj::__mClass;

void EnablerMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.lines.EnablerMediator"), hx::TCanCast< EnablerMediator_obj> ,sStaticFields,sMemberFields,
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

void EnablerMediator_obj::__boot()
{
	NAME= HX_CSTRING("EnablerMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace lines
