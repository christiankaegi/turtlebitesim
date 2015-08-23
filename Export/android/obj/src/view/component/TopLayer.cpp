#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
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
#ifndef INCLUDED_view_component_TopLayer
#include <view/component/TopLayer.h>
#endif
namespace view{
namespace component{

Void TopLayer_obj::__construct()
{
HX_STACK_FRAME("view.component.TopLayer","new",0x81b66148,"view.component.TopLayer.new","view/component/TopLayer.hx",15,0x958f1726)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//TopLayer_obj::~TopLayer_obj() { }

Dynamic TopLayer_obj::__CreateEmpty() { return  new TopLayer_obj; }
hx::ObjectPtr< TopLayer_obj > TopLayer_obj::__new()
{  hx::ObjectPtr< TopLayer_obj > result = new TopLayer_obj();
	result->__construct();
	return result;}

Dynamic TopLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TopLayer_obj > result = new TopLayer_obj();
	result->__construct();
	return result;}

Void TopLayer_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.TopLayer","addedToStageHandler",0xf594f88f,"view.component.TopLayer.addedToStageHandler","view/component/TopLayer.hx",20,0x958f1726)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(21)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(25)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/top_layer.png")),this->bmpLoadCompleteHandler_dyn(),true);
		HX_STACK_LINE(27)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/clockGlow.png")),this->clockLoadCompleteHandler_dyn(),true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TopLayer_obj,addedToStageHandler,(void))

Void TopLayer_obj::bmpLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.TopLayer","bmpLoadCompleteHandler",0xdc70535e,"view.component.TopLayer.bmpLoadCompleteHandler","view/component/TopLayer.hx",30,0x958f1726)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(31)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		this->bmp = _g;
		HX_STACK_LINE(32)
		this->addChild(this->bmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TopLayer_obj,bmpLoadCompleteHandler,(void))

Void TopLayer_obj::bmp2048LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.TopLayer","bmp2048LoadCompleteHandler",0x3846455c,"view.component.TopLayer.bmp2048LoadCompleteHandler","view/component/TopLayer.hx",35,0x958f1726)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(36)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		this->bmp2048 = _g;
		HX_STACK_LINE(37)
		this->addChild(this->bmp2048);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TopLayer_obj,bmp2048LoadCompleteHandler,(void))

Void TopLayer_obj::clockLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.TopLayer","clockLoadCompleteHandler",0xd1327575,"view.component.TopLayer.clockLoadCompleteHandler","view/component/TopLayer.hx",40,0x958f1726)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(41)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		this->clock = _g;
		HX_STACK_LINE(42)
		this->clock->set_name(HX_CSTRING("clockGlow"));
		HX_STACK_LINE(45)
		Float _g1 = this->clock->set_scaleY(0.5);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		this->clock->set_scaleX(_g1);
		HX_STACK_LINE(47)
		this->clock->set_x(((int)561 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(48)
		this->clock->set_y(((int)574 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(49)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(49)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TopLayer_obj,clockLoadCompleteHandler,(void))

Void TopLayer_obj::showClock( ){
{
		HX_STACK_FRAME("view.component.TopLayer","showClock",0xefe99e79,"view.component.TopLayer.showClock","view/component/TopLayer.hx",56,0x958f1726)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->hideClock();
		HX_STACK_LINE(58)
		this->addChild(this->clock);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TopLayer_obj,showClock,(void))

Void TopLayer_obj::hideClock( ){
{
		HX_STACK_FRAME("view.component.TopLayer","hideClock",0x1ce3f494,"view.component.TopLayer.hideClock","view/component/TopLayer.hx",61,0x958f1726)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("clockGlow"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		if (((_g != null()))){
			HX_STACK_LINE(63)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("clockGlow"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(63)
			this->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TopLayer_obj,hideClock,(void))


TopLayer_obj::TopLayer_obj()
{
}

void TopLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TopLayer);
	HX_MARK_MEMBER_NAME(bmp,"bmp");
	HX_MARK_MEMBER_NAME(bmp2048,"bmp2048");
	HX_MARK_MEMBER_NAME(clock,"clock");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TopLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bmp,"bmp");
	HX_VISIT_MEMBER_NAME(bmp2048,"bmp2048");
	HX_VISIT_MEMBER_NAME(clock,"clock");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TopLayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmp") ) { return bmp; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clock") ) { return clock; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bmp2048") ) { return bmp2048; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showClock") ) { return showClock_dyn(); }
		if (HX_FIELD_EQ(inName,"hideClock") ) { return hideClock_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"bmpLoadCompleteHandler") ) { return bmpLoadCompleteHandler_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"clockLoadCompleteHandler") ) { return clockLoadCompleteHandler_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"bmp2048LoadCompleteHandler") ) { return bmp2048LoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TopLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmp") ) { bmp=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clock") ) { clock=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bmp2048") ) { bmp2048=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TopLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bmp"));
	outFields->push(HX_CSTRING("bmp2048"));
	outFields->push(HX_CSTRING("clock"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(TopLayer_obj,bmp),HX_CSTRING("bmp")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(TopLayer_obj,bmp2048),HX_CSTRING("bmp2048")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(TopLayer_obj,clock),HX_CSTRING("clock")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bmp"),
	HX_CSTRING("bmp2048"),
	HX_CSTRING("clock"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("bmpLoadCompleteHandler"),
	HX_CSTRING("bmp2048LoadCompleteHandler"),
	HX_CSTRING("clockLoadCompleteHandler"),
	HX_CSTRING("showClock"),
	HX_CSTRING("hideClock"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TopLayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TopLayer_obj::__mClass,"__mClass");
};

#endif

Class TopLayer_obj::__mClass;

void TopLayer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.TopLayer"), hx::TCanCast< TopLayer_obj> ,sStaticFields,sMemberFields,
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

void TopLayer_obj::__boot()
{
}

} // end namespace view
} // end namespace component
