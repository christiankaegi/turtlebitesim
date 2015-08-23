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
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
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
#ifndef INCLUDED_view_component_lines_Comparator
#include <view/component/lines/Comparator.h>
#endif
#ifndef INCLUDED_view_mediator_lines_ComparatorMediator
#include <view/mediator/lines/ComparatorMediator.h>
#endif
namespace view{
namespace mediator{
namespace lines{

Void ComparatorMediator_obj::__construct(::view::component::lines::Comparator viewComponent)
{
HX_STACK_FRAME("view.mediator.lines.ComparatorMediator","new",0xaa7e2d5c,"view.mediator.lines.ComparatorMediator.new","view/mediator/lines/ComparatorMediator.hx",14,0x6b1d1013)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(14)
	super::__construct(HX_CSTRING("ComparatorMediator"),viewComponent);
}
;
	return null();
}

//ComparatorMediator_obj::~ComparatorMediator_obj() { }

Dynamic ComparatorMediator_obj::__CreateEmpty() { return  new ComparatorMediator_obj; }
hx::ObjectPtr< ComparatorMediator_obj > ComparatorMediator_obj::__new(::view::component::lines::Comparator viewComponent)
{  hx::ObjectPtr< ComparatorMediator_obj > result = new ComparatorMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic ComparatorMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComparatorMediator_obj > result = new ComparatorMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ComparatorMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.lines.ComparatorMediator","onRegister",0x6c17f526,"view.mediator.lines.ComparatorMediator.onRegister","view/mediator/lines/ComparatorMediator.hx",17,0x6b1d1013)
		HX_STACK_THIS(this)
		HX_STACK_LINE(18)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(19)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(19)
		this->appProxy = _g;
		HX_STACK_LINE(20)
		::view::component::lines::Comparator _g1 = this->getView();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(20)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g1,null());
	}
return null();
}


Array< ::String > ComparatorMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.lines.ComparatorMediator","listNotificationInterests",0x1602c2dc,"view.mediator.lines.ComparatorMediator.listNotificationInterests","view/mediator/lines/ComparatorMediator.hx",24,0x6b1d1013)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CHANGE_CLOCK_SPEED).Add(::AppConstants_obj::POWER_ON).Add(::AppConstants_obj::POWER_OFF).Add(::AppConstants_obj::MODEL_RESET_COMPLETE).Add(::AppConstants_obj::DETAIL_POPUP_ACTIVE);
}


Void ComparatorMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.lines.ComparatorMediator","handleNotification",0x616b4137,"view.mediator.lines.ComparatorMediator.handleNotification","view/mediator/lines/ComparatorMediator.hx",35,0x6b1d1013)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(35)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(38)
			if ((!(this->appProxy->getDetailPopupActive()))){
				HX_STACK_LINE(39)
				Dynamic _g1 = note->getBody();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(39)
				this->getView()->showLines(_g1);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::CHANGE_CLOCK_SPEED)){
			HX_STACK_LINE(42)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(44)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::DETAIL_POPUP_ACTIVE)){
			HX_STACK_LINE(46)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::POWER_ON)){
			HX_STACK_LINE(48)
			this->getView()->showCompStaticLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::POWER_OFF)){
			HX_STACK_LINE(50)
			this->getView()->hideCompStaticLines();
		}
	}
return null();
}


Void ComparatorMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.lines.ComparatorMediator","viewReadyHandler",0x1c029130,"view.mediator.lines.ComparatorMediator.viewReadyHandler","view/mediator/lines/ComparatorMediator.hx",55,0x6b1d1013)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(55)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("ComparatorMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ComparatorMediator_obj,viewReadyHandler,(void))

::view::component::lines::Comparator ComparatorMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.lines.ComparatorMediator","getView",0x1e546d17,"view.mediator.lines.ComparatorMediator.getView","view/mediator/lines/ComparatorMediator.hx",59,0x6b1d1013)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(ComparatorMediator_obj,getView,return )

::String ComparatorMediator_obj::NAME;


ComparatorMediator_obj::ComparatorMediator_obj()
{
}

void ComparatorMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComparatorMediator);
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComparatorMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ComparatorMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ComparatorMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComparatorMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(ComparatorMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("appProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComparatorMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ComparatorMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComparatorMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ComparatorMediator_obj::NAME,"NAME");
};

#endif

Class ComparatorMediator_obj::__mClass;

void ComparatorMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.lines.ComparatorMediator"), hx::TCanCast< ComparatorMediator_obj> ,sStaticFields,sMemberFields,
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

void ComparatorMediator_obj::__boot()
{
	NAME= HX_CSTRING("ComparatorMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace lines
