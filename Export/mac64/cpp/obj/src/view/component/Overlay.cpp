#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
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
#ifndef INCLUDED_view_component_Overlay
#include <view/component/Overlay.h>
#endif
namespace view{
namespace component{

Void Overlay_obj::__construct()
{
HX_STACK_FRAME("view.component.Overlay","new",0xc26d1268,"view.component.Overlay.new","view/component/Overlay.hx",23,0xc6ed03ca)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Overlay_obj::~Overlay_obj() { }

Dynamic Overlay_obj::__CreateEmpty() { return  new Overlay_obj; }
hx::ObjectPtr< Overlay_obj > Overlay_obj::__new()
{  hx::ObjectPtr< Overlay_obj > result = new Overlay_obj();
	result->__construct();
	return result;}

Dynamic Overlay_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Overlay_obj > result = new Overlay_obj();
	result->__construct();
	return result;}

Void Overlay_obj::addedToStageHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("view.component.Overlay","addedToStageHandler",0x74f7e9af,"view.component.Overlay.addedToStageHandler","view/component/Overlay.hx",28,0xc6ed03ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(29)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(30)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/FlowArrows2048.png")),this->flowArrowsLoadCompleteHandler_dyn(),true);
		HX_STACK_LINE(34)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/MarkUnits.png")),this->markUnitsLoadCompleteHandler_dyn(),true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Overlay_obj,addedToStageHandler,(void))

Void Overlay_obj::markUnitsLoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.Overlay","markUnitsLoadCompleteHandler",0xefb01081,"view.component.Overlay.markUnitsLoadCompleteHandler","view/component/Overlay.hx",38,0xc6ed03ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(39)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		this->bmpMarkUnits = _g;
		HX_STACK_LINE(40)
		this->bmpMarkUnits->set_name(HX_CSTRING("markUnits"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Overlay_obj,markUnitsLoadCompleteHandler,(void))

Void Overlay_obj::flowArrowsLoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.Overlay","flowArrowsLoadCompleteHandler",0xc666025b,"view.component.Overlay.flowArrowsLoadCompleteHandler","view/component/Overlay.hx",43,0xc6ed03ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(44)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		this->bmpFlowArrows = _g;
		HX_STACK_LINE(45)
		this->bmpFlowArrows->set_name(HX_CSTRING("flowArrows"));
		HX_STACK_LINE(48)
		Float _g1 = this->bmpFlowArrows->set_scaleY(0.5);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(48)
		this->bmpFlowArrows->set_scaleX(_g1);
		HX_STACK_LINE(50)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(50)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Overlay_obj,flowArrowsLoadCompleteHandler,(void))

Void Overlay_obj::showUnits( ){
{
		HX_STACK_FRAME("view.component.Overlay","showUnits",0x856e473a,"view.component.Overlay.showUnits","view/component/Overlay.hx",57,0xc6ed03ca)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		this->hideUnits();
		HX_STACK_LINE(59)
		this->addChild(this->bmpMarkUnits);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Overlay_obj,showUnits,(void))

Void Overlay_obj::hideUnits( ){
{
		HX_STACK_FRAME("view.component.Overlay","hideUnits",0xb2689d55,"view.component.Overlay.hideUnits","view/component/Overlay.hx",62,0xc6ed03ca)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		::openfl::display::DisplayObject _g = this->getChildByName(HX_CSTRING("markUnits"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		if (((_g != null()))){
			HX_STACK_LINE(64)
			::openfl::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("markUnits"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(64)
			this->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Overlay_obj,hideUnits,(void))

Void Overlay_obj::showFlow( ){
{
		HX_STACK_FRAME("view.component.Overlay","showFlow",0x6f373c83,"view.component.Overlay.showFlow","view/component/Overlay.hx",68,0xc6ed03ca)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		this->hideFlow();
		HX_STACK_LINE(70)
		this->addChild(this->bmpFlowArrows);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Overlay_obj,showFlow,(void))

Void Overlay_obj::hideFlow( ){
{
		HX_STACK_FRAME("view.component.Overlay","hideFlow",0x607e62c8,"view.component.Overlay.hideFlow","view/component/Overlay.hx",73,0xc6ed03ca)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		::openfl::display::DisplayObject _g = this->getChildByName(HX_CSTRING("flowArrows"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		if (((_g != null()))){
			HX_STACK_LINE(75)
			::openfl::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("flowArrows"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(75)
			this->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Overlay_obj,hideFlow,(void))


Overlay_obj::Overlay_obj()
{
}

void Overlay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Overlay);
	HX_MARK_MEMBER_NAME(bmpMarkUnits,"bmpMarkUnits");
	HX_MARK_MEMBER_NAME(bmpFlowArrows,"bmpFlowArrows");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Overlay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bmpMarkUnits,"bmpMarkUnits");
	HX_VISIT_MEMBER_NAME(bmpFlowArrows,"bmpFlowArrows");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Overlay_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"showFlow") ) { return showFlow_dyn(); }
		if (HX_FIELD_EQ(inName,"hideFlow") ) { return hideFlow_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showUnits") ) { return showUnits_dyn(); }
		if (HX_FIELD_EQ(inName,"hideUnits") ) { return hideUnits_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bmpMarkUnits") ) { return bmpMarkUnits; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bmpFlowArrows") ) { return bmpFlowArrows; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"markUnitsLoadCompleteHandler") ) { return markUnitsLoadCompleteHandler_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"flowArrowsLoadCompleteHandler") ) { return flowArrowsLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Overlay_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"bmpMarkUnits") ) { bmpMarkUnits=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bmpFlowArrows") ) { bmpFlowArrows=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Overlay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bmpMarkUnits"));
	outFields->push(HX_CSTRING("bmpFlowArrows"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Overlay_obj,bmpMarkUnits),HX_CSTRING("bmpMarkUnits")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Overlay_obj,bmpFlowArrows),HX_CSTRING("bmpFlowArrows")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bmpMarkUnits"),
	HX_CSTRING("bmpFlowArrows"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("markUnitsLoadCompleteHandler"),
	HX_CSTRING("flowArrowsLoadCompleteHandler"),
	HX_CSTRING("showUnits"),
	HX_CSTRING("hideUnits"),
	HX_CSTRING("showFlow"),
	HX_CSTRING("hideFlow"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Overlay_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Overlay_obj::__mClass,"__mClass");
};

#endif

Class Overlay_obj::__mClass;

void Overlay_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.Overlay"), hx::TCanCast< Overlay_obj> ,sStaticFields,sMemberFields,
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

void Overlay_obj::__boot()
{
}

} // end namespace view
} // end namespace component
