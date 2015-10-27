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
#ifndef INCLUDED_view_component_lines_BottomLayer
#include <view/component/lines/BottomLayer.h>
#endif
namespace view{
namespace component{
namespace lines{

Void BottomLayer_obj::__construct()
{
HX_STACK_FRAME("view.component.lines.BottomLayer","new",0x55a82bcf,"view.component.lines.BottomLayer.new","view/component/lines/BottomLayer.hx",19,0x41f07a84)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//BottomLayer_obj::~BottomLayer_obj() { }

Dynamic BottomLayer_obj::__CreateEmpty() { return  new BottomLayer_obj; }
hx::ObjectPtr< BottomLayer_obj > BottomLayer_obj::__new()
{  hx::ObjectPtr< BottomLayer_obj > result = new BottomLayer_obj();
	result->__construct();
	return result;}

Dynamic BottomLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BottomLayer_obj > result = new BottomLayer_obj();
	result->__construct();
	return result;}

Void BottomLayer_obj::addedToStageHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("view.component.lines.BottomLayer","addedToStageHandler",0xedce8116,"view.component.lines.BottomLayer.addedToStageHandler","view/component/lines/BottomLayer.hx",24,0x41f07a84)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(25)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(26)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/bottom_layer.png")),this->bmpLoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BottomLayer_obj,addedToStageHandler,(void))

Void BottomLayer_obj::bmpLoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.BottomLayer","bmpLoadCompleteHandler",0x4c179937,"view.component.lines.BottomLayer.bmpLoadCompleteHandler","view/component/lines/BottomLayer.hx",29,0x41f07a84)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(30)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		this->bmp = _g;
		HX_STACK_LINE(31)
		Float _g1 = this->bmp->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		this->bmp->set_scaleX(_g1);
		HX_STACK_LINE(32)
		this->addChild(this->bmp);
		HX_STACK_LINE(33)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(33)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BottomLayer_obj,bmpLoadCompleteHandler,(void))


BottomLayer_obj::BottomLayer_obj()
{
}

void BottomLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BottomLayer);
	HX_MARK_MEMBER_NAME(bmp,"bmp");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BottomLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bmp,"bmp");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BottomLayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmp") ) { return bmp; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"bmpLoadCompleteHandler") ) { return bmpLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BottomLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmp") ) { bmp=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BottomLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bmp"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(BottomLayer_obj,bmp),HX_CSTRING("bmp")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bmp"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("bmpLoadCompleteHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BottomLayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BottomLayer_obj::__mClass,"__mClass");
};

#endif

Class BottomLayer_obj::__mClass;

void BottomLayer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.lines.BottomLayer"), hx::TCanCast< BottomLayer_obj> ,sStaticFields,sMemberFields,
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

void BottomLayer_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace lines
