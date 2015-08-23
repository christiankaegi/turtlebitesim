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
#ifndef INCLUDED_view_component_basis_Enabler
#include <view/component/basis/Enabler.h>
#endif
#ifndef INCLUDED_view_mediator_basis_EnablerMediator
#include <view/mediator/basis/EnablerMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void EnablerMediator_obj::__construct(::view::component::basis::Enabler viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.EnablerMediator","new",0xd637c472,"view.mediator.basis.EnablerMediator.new","view/mediator/basis/EnablerMediator.hx",16,0xc6b23b5f)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(16)
	super::__construct(HX_CSTRING("EnablerMediator"),viewComponent);
}
;
	return null();
}

//EnablerMediator_obj::~EnablerMediator_obj() { }

Dynamic EnablerMediator_obj::__CreateEmpty() { return  new EnablerMediator_obj; }
hx::ObjectPtr< EnablerMediator_obj > EnablerMediator_obj::__new(::view::component::basis::Enabler viewComponent)
{  hx::ObjectPtr< EnablerMediator_obj > result = new EnablerMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic EnablerMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnablerMediator_obj > result = new EnablerMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void EnablerMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.EnablerMediator","onRegister",0xc5250cd0,"view.mediator.basis.EnablerMediator.onRegister","view/mediator/basis/EnablerMediator.hx",19,0xc6b23b5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(21)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(21)
		this->appProxy = _g;
		HX_STACK_LINE(22)
		::model::proxy::SnapshotProxy _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(22)
		_g1 = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(22)
		this->snapshotProxy = _g1;
		HX_STACK_LINE(23)
		::view::component::basis::Enabler _g2 = this->getView();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(23)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g2,null());
	}
return null();
}


Array< ::String > EnablerMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.EnablerMediator","listNotificationInterests",0x8d42da72,"view.mediator.basis.EnablerMediator.listNotificationInterests","view/mediator/basis/EnablerMediator.hx",27,0xc6b23b5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::BROADCAST_LDI).Add(::AppConstants_obj::BROADCAST_LDA).Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CHANGE_CLOCK_SPEED).Add(::AppConstants_obj::MODEL_RESET_COMPLETE);
}


Void EnablerMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.EnablerMediator","handleNotification",0xd43712e1,"view.mediator.basis.EnablerMediator.handleNotification","view/mediator/basis/EnablerMediator.hx",36,0xc6b23b5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(37)
		if ((this->appProxy->getDetailPopupActive())){
			HX_STACK_LINE(38)
			return null();
		}
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(40)
			::String _switch_1 = (_g);
			if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
				HX_STACK_LINE(43)
				this->getView()->hideAllLines();
			}
			else if (  ( _switch_1==::AppConstants_obj::BROADCAST_LDI)){
				HX_STACK_LINE(45)
				Dynamic _g1 = note->getBody();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(45)
				this->getView()->showLinesEnabler2(_g1);
			}
			else if (  ( _switch_1==::AppConstants_obj::BROADCAST_LDA)){
				HX_STACK_LINE(47)
				this->getView()->showLinesEnabler1(note->getBody()->__Field(HX_CSTRING("ram"),true));
			}
			else if (  ( _switch_1==::AppConstants_obj::CHANGE_CLOCK_SPEED)){
				HX_STACK_LINE(49)
				this->getView()->hideAllLines();
			}
			else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
				HX_STACK_LINE(51)
				this->getView()->hideAllLines();
			}
		}
	}
return null();
}


Void EnablerMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.EnablerMediator","viewReadyHandler",0x47bbc45a,"view.mediator.basis.EnablerMediator.viewReadyHandler","view/mediator/basis/EnablerMediator.hx",56,0xc6b23b5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(56)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("EnablerMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnablerMediator_obj,viewReadyHandler,(void))

::view::component::basis::Enabler EnablerMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.EnablerMediator","getView",0x46f6472d,"view.mediator.basis.EnablerMediator.getView","view/mediator/basis/EnablerMediator.hx",60,0xc6b23b5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.EnablerMediator"), hx::TCanCast< EnablerMediator_obj> ,sStaticFields,sMemberFields,
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
} // end namespace basis
