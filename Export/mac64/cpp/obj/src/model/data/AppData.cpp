#include <hxcpp.h>

#ifndef INCLUDED_App
#include <App.h>
#endif
#ifndef INCLUDED_model_data_AppData
#include <model/data/AppData.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace model{
namespace data{

Void AppData_obj::__construct(::App app)
{
HX_STACK_FRAME("model.data.AppData","new",0x0cd337de,"model.data.AppData.new","model/data/AppData.hx",8,0xbc0f81b2)
HX_STACK_THIS(this)
HX_STACK_ARG(app,"app")
{
	HX_STACK_LINE(23)
	this->enterInstructionOutputValid = true;
	HX_STACK_LINE(22)
	this->enterInstructionActive = false;
	HX_STACK_LINE(21)
	this->charCodeActive = false;
	HX_STACK_LINE(20)
	this->detailPopupActive = false;
	HX_STACK_LINE(19)
	this->showHighlightOn = false;
	HX_STACK_LINE(18)
	this->showFlowOn = false;
	HX_STACK_LINE(17)
	this->showUnitsOn = false;
	HX_STACK_LINE(16)
	this->componentsSubmenuActive = false;
	HX_STACK_LINE(15)
	this->hertzSubmenuActive = false;
	HX_STACK_LINE(14)
	this->autoClockOn = false;
	HX_STACK_LINE(13)
	this->powerOn = false;
	HX_STACK_LINE(12)
	this->isZoomed = false;
	HX_STACK_LINE(26)
	this->app = app;
}
;
	return null();
}

//AppData_obj::~AppData_obj() { }

Dynamic AppData_obj::__CreateEmpty() { return  new AppData_obj; }
hx::ObjectPtr< AppData_obj > AppData_obj::__new(::App app)
{  hx::ObjectPtr< AppData_obj > result = new AppData_obj();
	result->__construct(app);
	return result;}

Dynamic AppData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppData_obj > result = new AppData_obj();
	result->__construct(inArgs[0]);
	return result;}


AppData_obj::AppData_obj()
{
}

void AppData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppData);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(isZoomed,"isZoomed");
	HX_MARK_MEMBER_NAME(powerOn,"powerOn");
	HX_MARK_MEMBER_NAME(autoClockOn,"autoClockOn");
	HX_MARK_MEMBER_NAME(hertzSubmenuActive,"hertzSubmenuActive");
	HX_MARK_MEMBER_NAME(componentsSubmenuActive,"componentsSubmenuActive");
	HX_MARK_MEMBER_NAME(showUnitsOn,"showUnitsOn");
	HX_MARK_MEMBER_NAME(showFlowOn,"showFlowOn");
	HX_MARK_MEMBER_NAME(showHighlightOn,"showHighlightOn");
	HX_MARK_MEMBER_NAME(detailPopupActive,"detailPopupActive");
	HX_MARK_MEMBER_NAME(charCodeActive,"charCodeActive");
	HX_MARK_MEMBER_NAME(enterInstructionActive,"enterInstructionActive");
	HX_MARK_MEMBER_NAME(enterInstructionOutputValid,"enterInstructionOutputValid");
	HX_MARK_END_CLASS();
}

void AppData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(isZoomed,"isZoomed");
	HX_VISIT_MEMBER_NAME(powerOn,"powerOn");
	HX_VISIT_MEMBER_NAME(autoClockOn,"autoClockOn");
	HX_VISIT_MEMBER_NAME(hertzSubmenuActive,"hertzSubmenuActive");
	HX_VISIT_MEMBER_NAME(componentsSubmenuActive,"componentsSubmenuActive");
	HX_VISIT_MEMBER_NAME(showUnitsOn,"showUnitsOn");
	HX_VISIT_MEMBER_NAME(showFlowOn,"showFlowOn");
	HX_VISIT_MEMBER_NAME(showHighlightOn,"showHighlightOn");
	HX_VISIT_MEMBER_NAME(detailPopupActive,"detailPopupActive");
	HX_VISIT_MEMBER_NAME(charCodeActive,"charCodeActive");
	HX_VISIT_MEMBER_NAME(enterInstructionActive,"enterInstructionActive");
	HX_VISIT_MEMBER_NAME(enterInstructionOutputValid,"enterInstructionOutputValid");
}

Dynamic AppData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"powerOn") ) { return powerOn; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isZoomed") ) { return isZoomed; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"showFlowOn") ) { return showFlowOn; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoClockOn") ) { return autoClockOn; }
		if (HX_FIELD_EQ(inName,"showUnitsOn") ) { return showUnitsOn; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"charCodeActive") ) { return charCodeActive; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"showHighlightOn") ) { return showHighlightOn; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"detailPopupActive") ) { return detailPopupActive; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hertzSubmenuActive") ) { return hertzSubmenuActive; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"enterInstructionActive") ) { return enterInstructionActive; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"componentsSubmenuActive") ) { return componentsSubmenuActive; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"enterInstructionOutputValid") ) { return enterInstructionOutputValid; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::App >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"powerOn") ) { powerOn=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isZoomed") ) { isZoomed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"showFlowOn") ) { showFlowOn=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoClockOn") ) { autoClockOn=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"showUnitsOn") ) { showUnitsOn=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"charCodeActive") ) { charCodeActive=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"showHighlightOn") ) { showHighlightOn=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"detailPopupActive") ) { detailPopupActive=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hertzSubmenuActive") ) { hertzSubmenuActive=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"enterInstructionActive") ) { enterInstructionActive=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"componentsSubmenuActive") ) { componentsSubmenuActive=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"enterInstructionOutputValid") ) { enterInstructionOutputValid=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("app"));
	outFields->push(HX_CSTRING("started"));
	outFields->push(HX_CSTRING("isZoomed"));
	outFields->push(HX_CSTRING("powerOn"));
	outFields->push(HX_CSTRING("autoClockOn"));
	outFields->push(HX_CSTRING("hertzSubmenuActive"));
	outFields->push(HX_CSTRING("componentsSubmenuActive"));
	outFields->push(HX_CSTRING("showUnitsOn"));
	outFields->push(HX_CSTRING("showFlowOn"));
	outFields->push(HX_CSTRING("showHighlightOn"));
	outFields->push(HX_CSTRING("detailPopupActive"));
	outFields->push(HX_CSTRING("charCodeActive"));
	outFields->push(HX_CSTRING("enterInstructionActive"));
	outFields->push(HX_CSTRING("enterInstructionOutputValid"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::App*/ ,(int)offsetof(AppData_obj,app),HX_CSTRING("app")},
	{hx::fsBool,(int)offsetof(AppData_obj,started),HX_CSTRING("started")},
	{hx::fsBool,(int)offsetof(AppData_obj,isZoomed),HX_CSTRING("isZoomed")},
	{hx::fsBool,(int)offsetof(AppData_obj,powerOn),HX_CSTRING("powerOn")},
	{hx::fsBool,(int)offsetof(AppData_obj,autoClockOn),HX_CSTRING("autoClockOn")},
	{hx::fsBool,(int)offsetof(AppData_obj,hertzSubmenuActive),HX_CSTRING("hertzSubmenuActive")},
	{hx::fsBool,(int)offsetof(AppData_obj,componentsSubmenuActive),HX_CSTRING("componentsSubmenuActive")},
	{hx::fsBool,(int)offsetof(AppData_obj,showUnitsOn),HX_CSTRING("showUnitsOn")},
	{hx::fsBool,(int)offsetof(AppData_obj,showFlowOn),HX_CSTRING("showFlowOn")},
	{hx::fsBool,(int)offsetof(AppData_obj,showHighlightOn),HX_CSTRING("showHighlightOn")},
	{hx::fsBool,(int)offsetof(AppData_obj,detailPopupActive),HX_CSTRING("detailPopupActive")},
	{hx::fsBool,(int)offsetof(AppData_obj,charCodeActive),HX_CSTRING("charCodeActive")},
	{hx::fsBool,(int)offsetof(AppData_obj,enterInstructionActive),HX_CSTRING("enterInstructionActive")},
	{hx::fsBool,(int)offsetof(AppData_obj,enterInstructionOutputValid),HX_CSTRING("enterInstructionOutputValid")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("app"),
	HX_CSTRING("started"),
	HX_CSTRING("isZoomed"),
	HX_CSTRING("powerOn"),
	HX_CSTRING("autoClockOn"),
	HX_CSTRING("hertzSubmenuActive"),
	HX_CSTRING("componentsSubmenuActive"),
	HX_CSTRING("showUnitsOn"),
	HX_CSTRING("showFlowOn"),
	HX_CSTRING("showHighlightOn"),
	HX_CSTRING("detailPopupActive"),
	HX_CSTRING("charCodeActive"),
	HX_CSTRING("enterInstructionActive"),
	HX_CSTRING("enterInstructionOutputValid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppData_obj::__mClass,"__mClass");
};

#endif

Class AppData_obj::__mClass;

void AppData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.data.AppData"), hx::TCanCast< AppData_obj> ,sStaticFields,sMemberFields,
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

void AppData_obj::__boot()
{
}

} // end namespace model
} // end namespace data
