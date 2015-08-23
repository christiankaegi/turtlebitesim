#include <hxcpp.h>

#ifndef INCLUDED_App
#include <App.h>
#endif
#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_model_data_AppData
#include <model/data/AppData.h>
#endif
#ifndef INCLUDED_model_proxy_AppProxy
#include <model/proxy/AppProxy.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
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

Void AppProxy_obj::__construct(::model::data::AppData data)
{
HX_STACK_FRAME("model.proxy.AppProxy","new",0xced73144,"model.proxy.AppProxy.new","model/proxy/AppProxy.hx",9,0xb57eff2a)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(9)
	super::__construct(::model::proxy::AppProxy_obj::NAME,data);
}
;
	return null();
}

//AppProxy_obj::~AppProxy_obj() { }

Dynamic AppProxy_obj::__CreateEmpty() { return  new AppProxy_obj; }
hx::ObjectPtr< AppProxy_obj > AppProxy_obj::__new(::model::data::AppData data)
{  hx::ObjectPtr< AppProxy_obj > result = new AppProxy_obj();
	result->__construct(data);
	return result;}

Dynamic AppProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppProxy_obj > result = new AppProxy_obj();
	result->__construct(inArgs[0]);
	return result;}

Void AppProxy_obj::onRegister( ){
{
		HX_STACK_FRAME("model.proxy.AppProxy","onRegister",0xe1ecbe3e,"model.proxy.AppProxy.onRegister","model/proxy/AppProxy.hx",13,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13)
		this->sendNotification(::AppConstants_obj::PROXY_INITIALIZED,null(),::model::proxy::AppProxy_obj::NAME);
	}
return null();
}


::App AppProxy_obj::getApp( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getApp",0x93a67b47,"model.proxy.AppProxy.getApp","model/proxy/AppProxy.hx",17,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	return this->getData()->__Field(HX_CSTRING("app"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getApp,return )

Void AppProxy_obj::setStarted( bool value){
{
		HX_STACK_FRAME("model.proxy.AppProxy","setStarted",0xbb90915b,"model.proxy.AppProxy.setStarted","model/proxy/AppProxy.hx",21,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(21)
		this->getData()->__FieldRef(HX_CSTRING("started")) = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppProxy_obj,setStarted,(void))

bool AppProxy_obj::getStarted( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getStarted",0xb812f2e7,"model.proxy.AppProxy.getStarted","model/proxy/AppProxy.hx",25,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return this->getData()->__Field(HX_CSTRING("started"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getStarted,return )

bool AppProxy_obj::getIsZoomed( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getIsZoomed",0x68f86956,"model.proxy.AppProxy.getIsZoomed","model/proxy/AppProxy.hx",29,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	return this->getData()->__Field(HX_CSTRING("isZoomed"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getIsZoomed,return )

Void AppProxy_obj::setIsZoomed( bool value){
{
		HX_STACK_FRAME("model.proxy.AppProxy","setIsZoomed",0x73657062,"model.proxy.AppProxy.setIsZoomed","model/proxy/AppProxy.hx",33,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(33)
		this->getData()->__FieldRef(HX_CSTRING("isZoomed")) = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppProxy_obj,setIsZoomed,(void))

bool AppProxy_obj::getHertzSubmenuOn( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getHertzSubmenuOn",0xf0115e1d,"model.proxy.AppProxy.getHertzSubmenuOn","model/proxy/AppProxy.hx",37,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return this->getData()->__Field(HX_CSTRING("hertzSubmenuActive"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getHertzSubmenuOn,return )

Void AppProxy_obj::setHertzSubmenuOn( bool on){
{
		HX_STACK_FRAME("model.proxy.AppProxy","setHertzSubmenuOn",0x137f3629,"model.proxy.AppProxy.setHertzSubmenuOn","model/proxy/AppProxy.hx",41,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(41)
		this->getData()->__FieldRef(HX_CSTRING("hertzSubmenuActive")) = on;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppProxy_obj,setHertzSubmenuOn,(void))

bool AppProxy_obj::getComponentsSubmenuOn( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getComponentsSubmenuOn",0x0f13bcce,"model.proxy.AppProxy.getComponentsSubmenuOn","model/proxy/AppProxy.hx",45,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	return this->getData()->__Field(HX_CSTRING("componentsSubmenuActive"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getComponentsSubmenuOn,return )

Void AppProxy_obj::setComponentsSubmenuOn( bool on){
{
		HX_STACK_FRAME("model.proxy.AppProxy","setComponentsSubmenuOn",0x42bf3942,"model.proxy.AppProxy.setComponentsSubmenuOn","model/proxy/AppProxy.hx",49,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(49)
		this->getData()->__FieldRef(HX_CSTRING("componentsSubmenuActive")) = on;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppProxy_obj,setComponentsSubmenuOn,(void))

bool AppProxy_obj::getShowUnitsOn( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getShowUnitsOn",0x84d85997,"model.proxy.AppProxy.getShowUnitsOn","model/proxy/AppProxy.hx",53,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	return this->getData()->__Field(HX_CSTRING("showUnitsOn"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getShowUnitsOn,return )

Void AppProxy_obj::setShowUnitsOn( bool on){
{
		HX_STACK_FRAME("model.proxy.AppProxy","setShowUnitsOn",0xa4f8420b,"model.proxy.AppProxy.setShowUnitsOn","model/proxy/AppProxy.hx",57,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(57)
		this->getData()->__FieldRef(HX_CSTRING("showUnitsOn")) = on;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppProxy_obj,setShowUnitsOn,(void))

bool AppProxy_obj::getShowFlowOn( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getShowFlowOn",0x65e09ba4,"model.proxy.AppProxy.getShowFlowOn","model/proxy/AppProxy.hx",61,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	return this->getData()->__Field(HX_CSTRING("showFlowOn"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getShowFlowOn,return )

Void AppProxy_obj::setShowFlowOn( bool on){
{
		HX_STACK_FRAME("model.proxy.AppProxy","setShowFlowOn",0xaae67db0,"model.proxy.AppProxy.setShowFlowOn","model/proxy/AppProxy.hx",65,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(65)
		this->getData()->__FieldRef(HX_CSTRING("showFlowOn")) = on;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppProxy_obj,setShowFlowOn,(void))

bool AppProxy_obj::getPowerOn( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getPowerOn",0xddc1262a,"model.proxy.AppProxy.getPowerOn","model/proxy/AppProxy.hx",69,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	return this->getData()->__Field(HX_CSTRING("powerOn"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getPowerOn,return )

Void AppProxy_obj::setPowerOn( bool on){
{
		HX_STACK_FRAME("model.proxy.AppProxy","setPowerOn",0xe13ec49e,"model.proxy.AppProxy.setPowerOn","model/proxy/AppProxy.hx",73,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(73)
		this->getData()->__FieldRef(HX_CSTRING("powerOn")) = on;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppProxy_obj,setPowerOn,(void))

bool AppProxy_obj::getAutoClockOn( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getAutoClockOn",0x3e0c1784,"model.proxy.AppProxy.getAutoClockOn","model/proxy/AppProxy.hx",77,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	return this->getData()->__Field(HX_CSTRING("autoClockOn"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getAutoClockOn,return )

Void AppProxy_obj::setAutoClockOn( bool on){
{
		HX_STACK_FRAME("model.proxy.AppProxy","setAutoClockOn",0x5e2bfff8,"model.proxy.AppProxy.setAutoClockOn","model/proxy/AppProxy.hx",81,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(81)
		this->getData()->__FieldRef(HX_CSTRING("autoClockOn")) = on;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppProxy_obj,setAutoClockOn,(void))

bool AppProxy_obj::getShowHighlightOn( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getShowHighlightOn",0x4a740a1c,"model.proxy.AppProxy.getShowHighlightOn","model/proxy/AppProxy.hx",85,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	return this->getData()->__Field(HX_CSTRING("showHighlightOn"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getShowHighlightOn,return )

Void AppProxy_obj::setShowHightlightOn( bool on){
{
		HX_STACK_FRAME("model.proxy.AppProxy","setShowHightlightOn",0x8f834446,"model.proxy.AppProxy.setShowHightlightOn","model/proxy/AppProxy.hx",89,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(89)
		this->getData()->__FieldRef(HX_CSTRING("showHighlightOn")) = on;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppProxy_obj,setShowHightlightOn,(void))

Void AppProxy_obj::reset( ){
{
		HX_STACK_FRAME("model.proxy.AppProxy","reset",0xe590abb3,"model.proxy.AppProxy.reset","model/proxy/AppProxy.hx",92,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		this->getData()->__FieldRef(HX_CSTRING("autoClockOn")) = false;
		HX_STACK_LINE(94)
		this->getData()->__FieldRef(HX_CSTRING("started")) = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,reset,(void))

bool AppProxy_obj::getDetailPopupActive( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getDetailPopupActive",0x9b81cb27,"model.proxy.AppProxy.getDetailPopupActive","model/proxy/AppProxy.hx",98,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(98)
	return this->getData()->__Field(HX_CSTRING("detailPopupActive"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getDetailPopupActive,return )

Void AppProxy_obj::setDetailPopupActive( bool on){
{
		HX_STACK_FRAME("model.proxy.AppProxy","setDetailPopupActive",0x6839829b,"model.proxy.AppProxy.setDetailPopupActive","model/proxy/AppProxy.hx",102,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(102)
		this->getData()->__FieldRef(HX_CSTRING("detailPopupActive")) = on;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppProxy_obj,setDetailPopupActive,(void))

Void AppProxy_obj::setCharCodeActive( bool on){
{
		HX_STACK_FRAME("model.proxy.AppProxy","setCharCodeActive",0x7026c06f,"model.proxy.AppProxy.setCharCodeActive","model/proxy/AppProxy.hx",106,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(106)
		this->getData()->__FieldRef(HX_CSTRING("charCodeActive")) = on;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppProxy_obj,setCharCodeActive,(void))

bool AppProxy_obj::getCharCodeActive( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getCharCodeActive",0x4cb8e863,"model.proxy.AppProxy.getCharCodeActive","model/proxy/AppProxy.hx",110,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(110)
	return this->getData()->__Field(HX_CSTRING("charCodeActive"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getCharCodeActive,return )

Void AppProxy_obj::setEnterInstructionActive( bool on){
{
		HX_STACK_FRAME("model.proxy.AppProxy","setEnterInstructionActive",0x504a4762,"model.proxy.AppProxy.setEnterInstructionActive","model/proxy/AppProxy.hx",114,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(114)
		this->getData()->__FieldRef(HX_CSTRING("enterInstructionActive")) = on;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppProxy_obj,setEnterInstructionActive,(void))

bool AppProxy_obj::getEnterInstructionActive( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getEnterInstructionActive",0xe3f38356,"model.proxy.AppProxy.getEnterInstructionActive","model/proxy/AppProxy.hx",118,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	return this->getData()->__Field(HX_CSTRING("enterInstructionActive"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getEnterInstructionActive,return )

Void AppProxy_obj::setEnterInstructionOutputValid( bool on){
{
		HX_STACK_FRAME("model.proxy.AppProxy","setEnterInstructionOutputValid",0xa57ff71f,"model.proxy.AppProxy.setEnterInstructionOutputValid","model/proxy/AppProxy.hx",122,0xb57eff2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(122)
		this->getData()->__FieldRef(HX_CSTRING("enterInstructionOutputValid")) = on;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppProxy_obj,setEnterInstructionOutputValid,(void))

bool AppProxy_obj::getEnterInstructionOutputValid( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getEnterInstructionOutputValid",0xca94e6ab,"model.proxy.AppProxy.getEnterInstructionOutputValid","model/proxy/AppProxy.hx",126,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(126)
	return this->getData()->__Field(HX_CSTRING("enterInstructionOutputValid"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AppProxy_obj,getEnterInstructionOutputValid,return )

Dynamic AppProxy_obj::getData( ){
	HX_STACK_FRAME("model.proxy.AppProxy","getData",0x9ff5a8c4,"model.proxy.AppProxy.getData","model/proxy/AppProxy.hx",130,0xb57eff2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	return this->data;
}


::String AppProxy_obj::NAME;


AppProxy_obj::AppProxy_obj()
{
}

Dynamic AppProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getApp") ) { return getApp_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		if (HX_FIELD_EQ(inName,"setStarted") ) { return setStarted_dyn(); }
		if (HX_FIELD_EQ(inName,"getStarted") ) { return getStarted_dyn(); }
		if (HX_FIELD_EQ(inName,"getPowerOn") ) { return getPowerOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setPowerOn") ) { return setPowerOn_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getIsZoomed") ) { return getIsZoomed_dyn(); }
		if (HX_FIELD_EQ(inName,"setIsZoomed") ) { return setIsZoomed_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getShowFlowOn") ) { return getShowFlowOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setShowFlowOn") ) { return setShowFlowOn_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getShowUnitsOn") ) { return getShowUnitsOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setShowUnitsOn") ) { return setShowUnitsOn_dyn(); }
		if (HX_FIELD_EQ(inName,"getAutoClockOn") ) { return getAutoClockOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setAutoClockOn") ) { return setAutoClockOn_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getHertzSubmenuOn") ) { return getHertzSubmenuOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setHertzSubmenuOn") ) { return setHertzSubmenuOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setCharCodeActive") ) { return setCharCodeActive_dyn(); }
		if (HX_FIELD_EQ(inName,"getCharCodeActive") ) { return getCharCodeActive_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getShowHighlightOn") ) { return getShowHighlightOn_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setShowHightlightOn") ) { return setShowHightlightOn_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getDetailPopupActive") ) { return getDetailPopupActive_dyn(); }
		if (HX_FIELD_EQ(inName,"setDetailPopupActive") ) { return setDetailPopupActive_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getComponentsSubmenuOn") ) { return getComponentsSubmenuOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setComponentsSubmenuOn") ) { return setComponentsSubmenuOn_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"setEnterInstructionActive") ) { return setEnterInstructionActive_dyn(); }
		if (HX_FIELD_EQ(inName,"getEnterInstructionActive") ) { return getEnterInstructionActive_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"setEnterInstructionOutputValid") ) { return setEnterInstructionOutputValid_dyn(); }
		if (HX_FIELD_EQ(inName,"getEnterInstructionOutputValid") ) { return getEnterInstructionOutputValid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppProxy_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("onRegister"),
	HX_CSTRING("getApp"),
	HX_CSTRING("setStarted"),
	HX_CSTRING("getStarted"),
	HX_CSTRING("getIsZoomed"),
	HX_CSTRING("setIsZoomed"),
	HX_CSTRING("getHertzSubmenuOn"),
	HX_CSTRING("setHertzSubmenuOn"),
	HX_CSTRING("getComponentsSubmenuOn"),
	HX_CSTRING("setComponentsSubmenuOn"),
	HX_CSTRING("getShowUnitsOn"),
	HX_CSTRING("setShowUnitsOn"),
	HX_CSTRING("getShowFlowOn"),
	HX_CSTRING("setShowFlowOn"),
	HX_CSTRING("getPowerOn"),
	HX_CSTRING("setPowerOn"),
	HX_CSTRING("getAutoClockOn"),
	HX_CSTRING("setAutoClockOn"),
	HX_CSTRING("getShowHighlightOn"),
	HX_CSTRING("setShowHightlightOn"),
	HX_CSTRING("reset"),
	HX_CSTRING("getDetailPopupActive"),
	HX_CSTRING("setDetailPopupActive"),
	HX_CSTRING("setCharCodeActive"),
	HX_CSTRING("getCharCodeActive"),
	HX_CSTRING("setEnterInstructionActive"),
	HX_CSTRING("getEnterInstructionActive"),
	HX_CSTRING("setEnterInstructionOutputValid"),
	HX_CSTRING("getEnterInstructionOutputValid"),
	HX_CSTRING("getData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppProxy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AppProxy_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppProxy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AppProxy_obj::NAME,"NAME");
};

#endif

Class AppProxy_obj::__mClass;

void AppProxy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.proxy.AppProxy"), hx::TCanCast< AppProxy_obj> ,sStaticFields,sMemberFields,
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

void AppProxy_obj::__boot()
{
	NAME= HX_CSTRING("appProxy");
}

} // end namespace model
} // end namespace proxy
