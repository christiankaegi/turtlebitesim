#include <hxcpp.h>

#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
namespace events{

Void AppEvent_obj::__construct(::String type,Dynamic data,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_FRAME("events.AppEvent","new",0xefd493c0,"events.AppEvent.new","events/AppEvent.hx",14,0x932e914f)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(data,"data")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(15)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(16)
	this->data = data;
}
;
	return null();
}

//AppEvent_obj::~AppEvent_obj() { }

Dynamic AppEvent_obj::__CreateEmpty() { return  new AppEvent_obj; }
hx::ObjectPtr< AppEvent_obj > AppEvent_obj::__new(::String type,Dynamic data,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< AppEvent_obj > result = new AppEvent_obj();
	result->__construct(type,data,__o_bubbles,__o_cancelable);
	return result;}

Dynamic AppEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppEvent_obj > result = new AppEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String AppEvent_obj::DATA;

::String AppEvent_obj::DRAG_START;

::String AppEvent_obj::DRAG_STOP;

::String AppEvent_obj::VIEW_READY;


AppEvent_obj::AppEvent_obj()
{
}

void AppEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppEvent);
	HX_MARK_MEMBER_NAME(data,"data");
	::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AppEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AppEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"DATA") ) { return DATA; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DRAG_STOP") ) { return DRAG_STOP; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DRAG_START") ) { return DRAG_START; }
		if (HX_FIELD_EQ(inName,"VIEW_READY") ) { return VIEW_READY; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"DATA") ) { DATA=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DRAG_STOP") ) { DRAG_STOP=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DRAG_START") ) { DRAG_START=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VIEW_READY") ) { VIEW_READY=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DATA"),
	HX_CSTRING("DRAG_START"),
	HX_CSTRING("DRAG_STOP"),
	HX_CSTRING("VIEW_READY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AppEvent_obj,data),HX_CSTRING("data")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AppEvent_obj::DATA,"DATA");
	HX_MARK_MEMBER_NAME(AppEvent_obj::DRAG_START,"DRAG_START");
	HX_MARK_MEMBER_NAME(AppEvent_obj::DRAG_STOP,"DRAG_STOP");
	HX_MARK_MEMBER_NAME(AppEvent_obj::VIEW_READY,"VIEW_READY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::DATA,"DATA");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::DRAG_START,"DRAG_START");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::DRAG_STOP,"DRAG_STOP");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::VIEW_READY,"VIEW_READY");
};

#endif

Class AppEvent_obj::__mClass;

void AppEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("events.AppEvent"), hx::TCanCast< AppEvent_obj> ,sStaticFields,sMemberFields,
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

void AppEvent_obj::__boot()
{
	DATA= HX_CSTRING("data");
	DRAG_START= HX_CSTRING("dragStart");
	DRAG_STOP= HX_CSTRING("dragStop");
	VIEW_READY= HX_CSTRING("viewReady");
}

} // end namespace events
