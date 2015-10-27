#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_model_data_ClockData
#include <model/data/ClockData.h>
#endif
#ifndef INCLUDED_model_proxy_AppProxy
#include <model/proxy/AppProxy.h>
#endif
#ifndef INCLUDED_model_proxy_ClockProxy
#include <model/proxy/ClockProxy.h>
#endif
#ifndef INCLUDED_model_vo_FrequencyVO
#include <model/vo/FrequencyVO.h>
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
#ifndef INCLUDED_openfl__legacy_utils_Timer
#include <openfl/_legacy/utils/Timer.h>
#endif
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade
#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IProxy
#include <org/puremvc/haxe/multicore/interfaces/IProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_proxy_Proxy
#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
#endif
namespace model{
namespace proxy{

Void ClockProxy_obj::__construct(::model::data::ClockData data)
{
HX_STACK_FRAME("model.proxy.ClockProxy","new",0x5839d1b7,"model.proxy.ClockProxy.new","model/proxy/ClockProxy.hx",21,0x97ac0997)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(21)
	super::__construct(::model::proxy::ClockProxy_obj::NAME,data);
}
;
	return null();
}

//ClockProxy_obj::~ClockProxy_obj() { }

Dynamic ClockProxy_obj::__CreateEmpty() { return  new ClockProxy_obj; }
hx::ObjectPtr< ClockProxy_obj > ClockProxy_obj::__new(::model::data::ClockData data)
{  hx::ObjectPtr< ClockProxy_obj > result = new ClockProxy_obj();
	result->__construct(data);
	return result;}

Dynamic ClockProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClockProxy_obj > result = new ClockProxy_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ClockProxy_obj::onRegister( ){
{
		HX_STACK_FRAME("model.proxy.ClockProxy","onRegister",0x61c7622b,"model.proxy.ClockProxy.onRegister","model/proxy/ClockProxy.hx",24,0x97ac0997)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(25)
		this->appProxy = _g;
		HX_STACK_LINE(26)
		this->sendNotification(::AppConstants_obj::PROXY_INITIALIZED,null(),::model::proxy::ClockProxy_obj::NAME);
	}
return null();
}


Void ClockProxy_obj::startClock( ){
{
		HX_STACK_FRAME("model.proxy.ClockProxy","startClock",0x17eac995,"model.proxy.ClockProxy.startClock","model/proxy/ClockProxy.hx",29,0x97ac0997)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->stopClock();
		HX_STACK_LINE(31)
		::model::vo::FrequencyVO frequency = this->getCurrentFrequency();		HX_STACK_VAR(frequency,"frequency");
		HX_STACK_LINE(32)
		::openfl::_legacy::utils::Timer _g = ::openfl::_legacy::utils::Timer_obj::__new(frequency->ms,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		this->timer = _g;
		HX_STACK_LINE(33)
		this->timer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->sendClockSignal_dyn(),null(),null(),null());
		HX_STACK_LINE(34)
		this->getData()->__FieldRef(HX_CSTRING("clockOn")) = true;
		HX_STACK_LINE(35)
		this->sendNotification(::AppConstants_obj::CLOCK_SIGNAL,this->getData()->__Field(HX_CSTRING("clockOn"),true),null());
		HX_STACK_LINE(36)
		this->timer->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ClockProxy_obj,startClock,(void))

Void ClockProxy_obj::stopClock( ){
{
		HX_STACK_FRAME("model.proxy.ClockProxy","stopClock",0x584d5f03,"model.proxy.ClockProxy.stopClock","model/proxy/ClockProxy.hx",40,0x97ac0997)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		if (((  (((this->timer != null()))) ? bool(this->timer->hasEventListener(::openfl::events::TimerEvent_obj::TIMER)) : bool(false) ))){
			HX_STACK_LINE(41)
			this->timer->stop();
			HX_STACK_LINE(42)
			this->timer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->sendClockSignal_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ClockProxy_obj,stopClock,(void))

Void ClockProxy_obj::sendClockSignal( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("model.proxy.ClockProxy","sendClockSignal",0x2a182245,"model.proxy.ClockProxy.sendClockSignal","model/proxy/ClockProxy.hx",46,0x97ac0997)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(47)
		this->sendNotification(::AppConstants_obj::CLOCK_SIGNAL,this->getData()->__Field(HX_CSTRING("clockOn"),true),null());
		HX_STACK_LINE(48)
		this->toggleClockOn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ClockProxy_obj,sendClockSignal,(void))

int ClockProxy_obj::getCurrentFrequencyPointer( ){
	HX_STACK_FRAME("model.proxy.ClockProxy","getCurrentFrequencyPointer",0xadd86f6d,"model.proxy.ClockProxy.getCurrentFrequencyPointer","model/proxy/ClockProxy.hx",52,0x97ac0997)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	return this->getData()->__Field(HX_CSTRING("currentFrequencyPointer"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ClockProxy_obj,getCurrentFrequencyPointer,return )

Void ClockProxy_obj::setCurrentFrequencyPointer( int pos){
{
		HX_STACK_FRAME("model.proxy.ClockProxy","setCurrentFrequencyPointer",0x0d6d35e1,"model.proxy.ClockProxy.setCurrentFrequencyPointer","model/proxy/ClockProxy.hx",55,0x97ac0997)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(56)
		this->getData()->__FieldRef(HX_CSTRING("currentFrequencyPointer")) = pos;
		HX_STACK_LINE(57)
		if (((this->getData()->__Field(HX_CSTRING("currentFrequencyPointer"),true) > (this->getData()->__Field(HX_CSTRING("frequencies"),true)->__Field(HX_CSTRING("length"),true) - (int)1)))){
			HX_STACK_LINE(58)
			this->getData()->__FieldRef(HX_CSTRING("currentFrequencyPointer")) = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ClockProxy_obj,setCurrentFrequencyPointer,(void))

Void ClockProxy_obj::changeClockSpeed( int pointer){
{
		HX_STACK_FRAME("model.proxy.ClockProxy","changeClockSpeed",0xac5e28b2,"model.proxy.ClockProxy.changeClockSpeed","model/proxy/ClockProxy.hx",62,0x97ac0997)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(63)
		this->setCurrentFrequencyPointer(pointer);
		HX_STACK_LINE(64)
		this->sendNotification(::AppConstants_obj::CLOCK_SPEED_CHANGED,null(),null());
		HX_STACK_LINE(65)
		if ((this->appProxy->getAutoClockOn())){
			HX_STACK_LINE(66)
			this->startClock();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ClockProxy_obj,changeClockSpeed,(void))

::model::vo::FrequencyVO ClockProxy_obj::getCurrentFrequency( ){
	HX_STACK_FRAME("model.proxy.ClockProxy","getCurrentFrequency",0xe1d5bf30,"model.proxy.ClockProxy.getCurrentFrequency","model/proxy/ClockProxy.hx",71,0x97ac0997)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	return this->getData()->__Field(HX_CSTRING("frequencies"),true)->__GetItem(this->getData()->__Field(HX_CSTRING("currentFrequencyPointer"),true));
}


HX_DEFINE_DYNAMIC_FUNC0(ClockProxy_obj,getCurrentFrequency,return )

Array< ::Dynamic > ClockProxy_obj::getFrequencies( ){
	HX_STACK_FRAME("model.proxy.ClockProxy","getFrequencies",0x926dc90d,"model.proxy.ClockProxy.getFrequencies","model/proxy/ClockProxy.hx",75,0x97ac0997)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	return this->getData()->__Field(HX_CSTRING("frequencies"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ClockProxy_obj,getFrequencies,return )

Void ClockProxy_obj::toggleClockOn( ){
{
		HX_STACK_FRAME("model.proxy.ClockProxy","toggleClockOn",0x3cb8d570,"model.proxy.ClockProxy.toggleClockOn","model/proxy/ClockProxy.hx",79,0x97ac0997)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->getData()->__FieldRef(HX_CSTRING("clockOn")) = !(this->getData()->__Field(HX_CSTRING("clockOn"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ClockProxy_obj,toggleClockOn,(void))

Void ClockProxy_obj::setClockOff( ){
{
		HX_STACK_FRAME("model.proxy.ClockProxy","setClockOff",0xd289505a,"model.proxy.ClockProxy.setClockOff","model/proxy/ClockProxy.hx",83,0x97ac0997)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		this->getData()->__FieldRef(HX_CSTRING("clockOn")) = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ClockProxy_obj,setClockOff,(void))

bool ClockProxy_obj::getClockOn( ){
	HX_STACK_FRAME("model.proxy.ClockProxy","getClockOn",0x71664c20,"model.proxy.ClockProxy.getClockOn","model/proxy/ClockProxy.hx",87,0x97ac0997)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	return this->getData()->__Field(HX_CSTRING("clockOn"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ClockProxy_obj,getClockOn,return )

Void ClockProxy_obj::reset( ){
{
		HX_STACK_FRAME("model.proxy.ClockProxy","reset",0x85328ee6,"model.proxy.ClockProxy.reset","model/proxy/ClockProxy.hx",90,0x97ac0997)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		this->stopClock();
		HX_STACK_LINE(92)
		this->getData()->__FieldRef(HX_CSTRING("clockOn")) = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ClockProxy_obj,reset,(void))

Dynamic ClockProxy_obj::getData( ){
	HX_STACK_FRAME("model.proxy.ClockProxy","getData",0xd63cfeb7,"model.proxy.ClockProxy.getData","model/proxy/ClockProxy.hx",96,0x97ac0997)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	return this->data;
}


::String ClockProxy_obj::NAME;


ClockProxy_obj::ClockProxy_obj()
{
}

void ClockProxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClockProxy);
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ClockProxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ClockProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { return appProxy; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopClock") ) { return stopClock_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		if (HX_FIELD_EQ(inName,"startClock") ) { return startClock_dyn(); }
		if (HX_FIELD_EQ(inName,"getClockOn") ) { return getClockOn_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setClockOff") ) { return setClockOff_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toggleClockOn") ) { return toggleClockOn_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFrequencies") ) { return getFrequencies_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sendClockSignal") ) { return sendClockSignal_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"changeClockSpeed") ) { return changeClockSpeed_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getCurrentFrequency") ) { return getCurrentFrequency_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getCurrentFrequencyPointer") ) { return getCurrentFrequencyPointer_dyn(); }
		if (HX_FIELD_EQ(inName,"setCurrentFrequencyPointer") ) { return setCurrentFrequencyPointer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClockProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::openfl::_legacy::utils::Timer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClockProxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("appProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::utils::Timer*/ ,(int)offsetof(ClockProxy_obj,timer),HX_CSTRING("timer")},
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(ClockProxy_obj,appProxy),HX_CSTRING("appProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("timer"),
	HX_CSTRING("appProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("startClock"),
	HX_CSTRING("stopClock"),
	HX_CSTRING("sendClockSignal"),
	HX_CSTRING("getCurrentFrequencyPointer"),
	HX_CSTRING("setCurrentFrequencyPointer"),
	HX_CSTRING("changeClockSpeed"),
	HX_CSTRING("getCurrentFrequency"),
	HX_CSTRING("getFrequencies"),
	HX_CSTRING("toggleClockOn"),
	HX_CSTRING("setClockOff"),
	HX_CSTRING("getClockOn"),
	HX_CSTRING("reset"),
	HX_CSTRING("getData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClockProxy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ClockProxy_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClockProxy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ClockProxy_obj::NAME,"NAME");
};

#endif

Class ClockProxy_obj::__mClass;

void ClockProxy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.proxy.ClockProxy"), hx::TCanCast< ClockProxy_obj> ,sStaticFields,sMemberFields,
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

void ClockProxy_obj::__boot()
{
	NAME= HX_CSTRING("ClockProxy");
}

} // end namespace model
} // end namespace proxy
