#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_proxy_ClockProxy
#include <model/proxy/ClockProxy.h>
#endif
#ifndef INCLUDED_model_proxy_ProgramProxy
#include <model/proxy/ProgramProxy.h>
#endif
#ifndef INCLUDED_model_vo_FrequencyVO
#include <model/vo/FrequencyVO.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
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
#ifndef INCLUDED_view_component_Test
#include <view/component/Test.h>
#endif
#ifndef INCLUDED_view_mediator_TestMediator
#include <view/mediator/TestMediator.h>
#endif
namespace view{
namespace mediator{

Void TestMediator_obj::__construct(::view::component::Test viewComponent)
{
HX_STACK_FRAME("view.mediator.TestMediator","new",0x85505789,"view.mediator.TestMediator.new","view/mediator/TestMediator.hx",10,0xd4421027)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(14)
	this->isZoomed = false;
	HX_STACK_LINE(19)
	super::__construct(HX_CSTRING("TestMediator"),viewComponent);
}
;
	return null();
}

//TestMediator_obj::~TestMediator_obj() { }

Dynamic TestMediator_obj::__CreateEmpty() { return  new TestMediator_obj; }
hx::ObjectPtr< TestMediator_obj > TestMediator_obj::__new(::view::component::Test viewComponent)
{  hx::ObjectPtr< TestMediator_obj > result = new TestMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic TestMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestMediator_obj > result = new TestMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TestMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.TestMediator","onRegister",0xc41d1a99,"view.mediator.TestMediator.onRegister","view/mediator/TestMediator.hx",22,0xd4421027)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		this->getView()->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(24)
		::view::component::Test _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		this->sendNotification(::AppConstants_obj::ADD_TO_NAVIG_VIEW,_g,null());
		HX_STACK_LINE(25)
		this->init();
	}
return null();
}


Void TestMediator_obj::init( ){
{
		HX_STACK_FRAME("view.mediator.TestMediator","init",0x1db4f7c7,"view.mediator.TestMediator.init","view/mediator/TestMediator.hx",28,0xd4421027)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::model::proxy::ClockProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		_g = hx::TCast< model::proxy::ClockProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ClockProxy_obj::NAME));
		HX_STACK_LINE(29)
		this->clockProxy = _g;
		HX_STACK_LINE(31)
		::model::proxy::ProgramProxy _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		_g1 = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(31)
		this->programProxy = _g1;
		HX_STACK_LINE(32)
		::model::vo::FrequencyVO _g2 = this->clockProxy->getCurrentFrequency();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(32)
		this->getView()->clockSpeedChanged(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestMediator_obj,init,(void))

Array< ::String > TestMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.TestMediator","listNotificationInterests",0xfc31b6c9,"view.mediator.TestMediator.listNotificationInterests","view/mediator/TestMediator.hx",36,0xd4421027)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_SPEED_CHANGED).Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CLOCK_OFF);
}


Void TestMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.TestMediator","handleNotification",0x6d0f91aa,"view.mediator.TestMediator.handleNotification","view/mediator/TestMediator.hx",41,0xd4421027)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(41)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_SPEED_CHANGED)){
			HX_STACK_LINE(44)
			::model::vo::FrequencyVO _g1 = this->clockProxy->getCurrentFrequency();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(44)
			this->getView()->clockSpeedChanged(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(47)
			::String text = HX_CSTRING("");		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(48)
			text = (this->programProxy->getInstruction()->pointer + HX_CSTRING(", "));
			HX_STACK_LINE(49)
			hx::AddEq(text,(this->programProxy->getInstruction()->_asm_ + HX_CSTRING(", ")));
			HX_STACK_LINE(50)
			hx::AddEq(text,(this->programProxy->getInstruction()->code + HX_CSTRING(", ")));
			HX_STACK_LINE(51)
			hx::AddEq(text,(this->programProxy->getInstruction()->hex + HX_CSTRING(", ")));
			HX_STACK_LINE(52)
			hx::AddEq(text,this->programProxy->getInstruction()->description);
			HX_STACK_LINE(53)
			this->getView()->showInstruction(text);
		}
		else if (  ( _switch_1==::AppConstants_obj::CLOCK_OFF)){
			HX_STACK_LINE(55)
			this->getView()->showInstruction(HX_CSTRING(""));
		}
	}
return null();
}


Void TestMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.TestMediator","viewReadyHandler",0x0e15cee3,"view.mediator.TestMediator.viewReadyHandler","view/mediator/TestMediator.hx",60,0xd4421027)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(60)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("TestMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestMediator_obj,viewReadyHandler,(void))

::view::component::Test TestMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.TestMediator","getView",0x878bb1c4,"view.mediator.TestMediator.getView","view/mediator/TestMediator.hx",64,0xd4421027)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(TestMediator_obj,getView,return )

Void TestMediator_obj::dataEventHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.TestMediator","dataEventHandler",0x271b5351,"view.mediator.TestMediator.dataEventHandler","view/mediator/TestMediator.hx",68,0xd4421027)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(68)
		Dynamic _g = event->data->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		Dynamic _switch_2 = (_g);
		if (  ( _switch_2==HX_CSTRING("btnClockSpeed"))){
			HX_STACK_LINE(70)
			this->sendNotification(::AppConstants_obj::CHANGE_CLOCK_SPEED,HX_CSTRING("+"),null());
		}
		else if (  ( _switch_2==HX_CSTRING("btnZoom"))){
			HX_STACK_LINE(72)
			if ((this->isZoomed)){
				HX_STACK_LINE(73)
				this->isZoomed = false;
				HX_STACK_LINE(74)
				this->sendNotification(::AppConstants_obj::ZOOM_OUT,null(),null());
			}
			else{
				HX_STACK_LINE(76)
				this->isZoomed = true;
				HX_STACK_LINE(77)
				this->sendNotification(::AppConstants_obj::ZOOM_IN,null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestMediator_obj,dataEventHandler,(void))

::String TestMediator_obj::NAME;


TestMediator_obj::TestMediator_obj()
{
}

void TestMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestMediator);
	HX_MARK_MEMBER_NAME(clockProxy,"clockProxy");
	HX_MARK_MEMBER_NAME(programProxy,"programProxy");
	HX_MARK_MEMBER_NAME(isZoomed,"isZoomed");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TestMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clockProxy,"clockProxy");
	HX_VISIT_MEMBER_NAME(programProxy,"programProxy");
	HX_VISIT_MEMBER_NAME(isZoomed,"isZoomed");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TestMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isZoomed") ) { return isZoomed; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clockProxy") ) { return clockProxy; }
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"programProxy") ) { return programProxy; }
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

Dynamic TestMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isZoomed") ) { isZoomed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clockProxy") ) { clockProxy=inValue.Cast< ::model::proxy::ClockProxy >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"programProxy") ) { programProxy=inValue.Cast< ::model::proxy::ProgramProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("clockProxy"));
	outFields->push(HX_CSTRING("programProxy"));
	outFields->push(HX_CSTRING("isZoomed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::ClockProxy*/ ,(int)offsetof(TestMediator_obj,clockProxy),HX_CSTRING("clockProxy")},
	{hx::fsObject /*::model::proxy::ProgramProxy*/ ,(int)offsetof(TestMediator_obj,programProxy),HX_CSTRING("programProxy")},
	{hx::fsBool,(int)offsetof(TestMediator_obj,isZoomed),HX_CSTRING("isZoomed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("clockProxy"),
	HX_CSTRING("programProxy"),
	HX_CSTRING("isZoomed"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("init"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	HX_CSTRING("dataEventHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TestMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TestMediator_obj::NAME,"NAME");
};

#endif

Class TestMediator_obj::__mClass;

void TestMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.TestMediator"), hx::TCanCast< TestMediator_obj> ,sStaticFields,sMemberFields,
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

void TestMediator_obj::__boot()
{
	NAME= HX_CSTRING("TestMediator");
}

} // end namespace view
} // end namespace mediator
