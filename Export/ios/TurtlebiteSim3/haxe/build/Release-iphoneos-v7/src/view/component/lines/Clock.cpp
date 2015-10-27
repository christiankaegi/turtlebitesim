#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_view_component_lines_Clock
#include <view/component/lines/Clock.h>
#endif
namespace view{
namespace component{
namespace lines{

Void Clock_obj::__construct()
{
HX_STACK_FRAME("view.component.lines.Clock","new",0x55200f77,"view.component.lines.Clock.new","view/component/lines/Clock.hx",20,0x17cb0f9c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Clock_obj::~Clock_obj() { }

Dynamic Clock_obj::__CreateEmpty() { return  new Clock_obj; }
hx::ObjectPtr< Clock_obj > Clock_obj::__new()
{  hx::ObjectPtr< Clock_obj > result = new Clock_obj();
	result->__construct();
	return result;}

Dynamic Clock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Clock_obj > result = new Clock_obj();
	result->__construct();
	return result;}

Void Clock_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.lines.Clock","addedToStageHandler",0xae7e34be,"view.component.lines.Clock.addedToStageHandler","view/component/lines/Clock.hx",25,0x17cb0f9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(26)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(27)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Clock.png")),this->outLoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Clock_obj,addedToStageHandler,(void))

Void Clock_obj::outLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Clock","outLoadCompleteHandler",0x41ed2be6,"view.component.lines.Clock.outLoadCompleteHandler","view/component/lines/Clock.hx",30,0x17cb0f9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(31)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		this->out = _g;
		HX_STACK_LINE(32)
		this->out->set_name(HX_CSTRING("clockOut"));
		HX_STACK_LINE(33)
		Float _g1 = this->out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		this->out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Clock_obj,outLoadCompleteHandler,(void))

Void Clock_obj::showLines( ){
{
		HX_STACK_FRAME("view.component.lines.Clock","showLines",0x1dd96e19,"view.component.lines.Clock.showLines","view/component/lines/Clock.hx",37,0x17cb0f9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		this->addChild(this->out);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Clock_obj,showLines,(void))

Void Clock_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.lines.Clock","hideAllLines",0x7acfc609,"view.component.lines.Clock.hideAllLines","view/component/lines/Clock.hx",40,0x17cb0f9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("clockOut"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		if (((_g != null()))){
			HX_STACK_LINE(42)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("clockOut"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			this->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Clock_obj,hideAllLines,(void))


Clock_obj::Clock_obj()
{
}

void Clock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Clock);
	HX_MARK_MEMBER_NAME(out,"out");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Clock_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(out,"out");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Clock_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { return out; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showLines") ) { return showLines_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideAllLines") ) { return hideAllLines_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"outLoadCompleteHandler") ) { return outLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Clock_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { out=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Clock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("out"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Clock_obj,out),HX_CSTRING("out")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("out"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("outLoadCompleteHandler"),
	HX_CSTRING("showLines"),
	HX_CSTRING("hideAllLines"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Clock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Clock_obj::__mClass,"__mClass");
};

#endif

Class Clock_obj::__mClass;

void Clock_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.lines.Clock"), hx::TCanCast< Clock_obj> ,sStaticFields,sMemberFields,
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

void Clock_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace lines
