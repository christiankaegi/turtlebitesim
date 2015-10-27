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
#ifndef INCLUDED_view_component_lines_MainBus
#include <view/component/lines/MainBus.h>
#endif
#ifndef INCLUDED_view_mediator_lines_MainBusMediator
#include <view/mediator/lines/MainBusMediator.h>
#endif
namespace view{
namespace mediator{
namespace lines{

Void MainBusMediator_obj::__construct(::view::component::lines::MainBus viewComponent)
{
HX_STACK_FRAME("view.mediator.lines.MainBusMediator","new",0xa6b37a2b,"view.mediator.lines.MainBusMediator.new","view/mediator/lines/MainBusMediator.hx",21,0x35d65fc6)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(21)
	super::__construct(HX_CSTRING("MainBusMediator"),viewComponent);
}
;
	return null();
}

//MainBusMediator_obj::~MainBusMediator_obj() { }

Dynamic MainBusMediator_obj::__CreateEmpty() { return  new MainBusMediator_obj; }
hx::ObjectPtr< MainBusMediator_obj > MainBusMediator_obj::__new(::view::component::lines::MainBus viewComponent)
{  hx::ObjectPtr< MainBusMediator_obj > result = new MainBusMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic MainBusMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainBusMediator_obj > result = new MainBusMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MainBusMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.lines.MainBusMediator","onRegister",0xca2e7037,"view.mediator.lines.MainBusMediator.onRegister","view/mediator/lines/MainBusMediator.hx",24,0x35d65fc6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(26)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(26)
		this->appProxy = _g;
		HX_STACK_LINE(27)
		::view::component::lines::MainBus _g1 = this->getView();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g1,null());
	}
return null();
}


Array< ::String > MainBusMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.lines.MainBusMediator","listNotificationInterests",0x5ea162eb,"view.mediator.lines.MainBusMediator.listNotificationInterests","view/mediator/lines/MainBusMediator.hx",31,0x35d65fc6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CHANGE_CLOCK_SPEED).Add(::AppConstants_obj::MODEL_RESET_COMPLETE).Add(::AppConstants_obj::DETAIL_POPUP_ACTIVE);
}


Void MainBusMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.lines.MainBusMediator","handleNotification",0xc4fcb548,"view.mediator.lines.MainBusMediator.handleNotification","view/mediator/lines/MainBusMediator.hx",40,0x35d65fc6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(40)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(43)
			if ((!(this->appProxy->getDetailPopupActive()))){
				HX_STACK_LINE(44)
				::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
				HX_STACK_LINE(44)
				instruction = hx::TCast< model::vo::InstructionVO >::cast(note->getBody());
				HX_STACK_LINE(45)
				this->getView()->showLines(instruction);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::CHANGE_CLOCK_SPEED)){
			HX_STACK_LINE(48)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(50)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::DETAIL_POPUP_ACTIVE)){
			HX_STACK_LINE(52)
			this->getView()->hideAllLines();
		}
	}
return null();
}


Void MainBusMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.lines.MainBusMediator","viewReadyHandler",0xc1942f01,"view.mediator.lines.MainBusMediator.viewReadyHandler","view/mediator/lines/MainBusMediator.hx",57,0x35d65fc6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(57)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("MainBusMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainBusMediator_obj,viewReadyHandler,(void))

::view::component::lines::MainBus MainBusMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.lines.MainBusMediator","getView",0x7d11cd66,"view.mediator.lines.MainBusMediator.getView","view/mediator/lines/MainBusMediator.hx",61,0x35d65fc6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(MainBusMediator_obj,getView,return )

::String MainBusMediator_obj::NAME;


MainBusMediator_obj::MainBusMediator_obj()
{
}

void MainBusMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainBusMediator);
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainBusMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MainBusMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic MainBusMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainBusMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(MainBusMediator_obj,appProxy),HX_CSTRING("appProxy")},
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
	HX_MARK_MEMBER_NAME(MainBusMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MainBusMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainBusMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MainBusMediator_obj::NAME,"NAME");
};

#endif

Class MainBusMediator_obj::__mClass;

void MainBusMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.lines.MainBusMediator"), hx::TCanCast< MainBusMediator_obj> ,sStaticFields,sMemberFields,
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

void MainBusMediator_obj::__boot()
{
	NAME= HX_CSTRING("MainBusMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace lines
