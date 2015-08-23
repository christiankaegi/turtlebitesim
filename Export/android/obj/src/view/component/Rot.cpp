#include <hxcpp.h>

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
#ifndef INCLUDED_view_component_Rot
#include <view/component/Rot.h>
#endif
namespace view{
namespace component{

Void Rot_obj::__construct()
{
HX_STACK_FRAME("view.component.Rot","new",0xf4e4956f,"view.component.Rot.new","view/component/Rot.hx",13,0x71f075a3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Rot_obj::~Rot_obj() { }

Dynamic Rot_obj::__CreateEmpty() { return  new Rot_obj; }
hx::ObjectPtr< Rot_obj > Rot_obj::__new()
{  hx::ObjectPtr< Rot_obj > result = new Rot_obj();
	result->__construct();
	return result;}

Dynamic Rot_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rot_obj > result = new Rot_obj();
	result->__construct();
	return result;}

Void Rot_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.Rot","addedToStageHandler",0x9e902ab6,"view.component.Rot.addedToStageHandler","view/component/Rot.hx",18,0x71f075a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(19)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(23)
		::openfl::_legacy::display::BitmapData _g = ::openfl::_legacy::Assets_obj::getBitmapData(HX_CSTRING("assets/active.png"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		this->bitmapData = _g;
		HX_STACK_LINE(26)
		::openfl::_legacy::display::Bitmap _g1 = ::openfl::_legacy::display::Bitmap_obj::__new(this->bitmapData,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		this->bmp = _g1;
		HX_STACK_LINE(27)
		this->bmp->set_visible(false);
		HX_STACK_LINE(28)
		this->addChild(this->bmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rot_obj,addedToStageHandler,(void))

Void Rot_obj::show( bool visible){
{
		HX_STACK_FRAME("view.component.Rot","show",0x566e7d0e,"view.component.Rot.show","view/component/Rot.hx",33,0x71f075a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(33)
		this->bmp->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rot_obj,show,(void))

Void Rot_obj::powerOff( ){
{
		HX_STACK_FRAME("view.component.Rot","powerOff",0xe44714fb,"view.component.Rot.powerOff","view/component/Rot.hx",37,0x71f075a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		this->bmp->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Rot_obj,powerOff,(void))


Rot_obj::Rot_obj()
{
}

void Rot_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rot);
	HX_MARK_MEMBER_NAME(bmp,"bmp");
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Rot_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bmp,"bmp");
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Rot_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmp") ) { return bmp; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"powerOff") ) { return powerOff_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rot_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmp") ) { bmp=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rot_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bmp"));
	outFields->push(HX_CSTRING("bitmapData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Rot_obj,bmp),HX_CSTRING("bmp")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Rot_obj,bitmapData),HX_CSTRING("bitmapData")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bmp"),
	HX_CSTRING("bitmapData"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("show"),
	HX_CSTRING("powerOff"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rot_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rot_obj::__mClass,"__mClass");
};

#endif

Class Rot_obj::__mClass;

void Rot_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.Rot"), hx::TCanCast< Rot_obj> ,sStaticFields,sMemberFields,
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

void Rot_obj::__boot()
{
}

} // end namespace view
} // end namespace component
