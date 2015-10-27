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
#ifndef INCLUDED_view_component_Welcome
#include <view/component/Welcome.h>
#endif
namespace view{
namespace component{

Void Welcome_obj::__construct()
{
HX_STACK_FRAME("view.component.Welcome","new",0x3418c47a,"view.component.Welcome.new","view/component/Welcome.hx",20,0xf680b9f8)
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

//Welcome_obj::~Welcome_obj() { }

Dynamic Welcome_obj::__CreateEmpty() { return  new Welcome_obj; }
hx::ObjectPtr< Welcome_obj > Welcome_obj::__new()
{  hx::ObjectPtr< Welcome_obj > result = new Welcome_obj();
	result->__construct();
	return result;}

Dynamic Welcome_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Welcome_obj > result = new Welcome_obj();
	result->__construct();
	return result;}

Void Welcome_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.Welcome","addedToStageHandler",0xe9cc5fc1,"view.component.Welcome.addedToStageHandler","view/component/Welcome.hx",25,0xf680b9f8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(26)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(27)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/architecture.png")),this->architectureLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(29)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/PowerOffCover2048.png")),this->powerLoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Welcome_obj,addedToStageHandler,(void))

Void Welcome_obj::powerLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.Welcome","powerLoadCompleteHandler",0x87d7152c,"view.component.Welcome.powerLoadCompleteHandler","view/component/Welcome.hx",35,0xf680b9f8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(36)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		this->bmpPower = _g;
		HX_STACK_LINE(37)
		this->bmpPower->set_name(HX_CSTRING("powerOffCover"));
		HX_STACK_LINE(38)
		this->addChild(this->bmpPower);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Welcome_obj,powerLoadCompleteHandler,(void))

Void Welcome_obj::architectureLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.Welcome","architectureLoadCompleteHandler",0xd13d8e92,"view.component.Welcome.architectureLoadCompleteHandler","view/component/Welcome.hx",41,0xf680b9f8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(42)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		this->bmpArchitecture = _g;
		HX_STACK_LINE(43)
		this->bmpArchitecture->set_name(HX_CSTRING("architecture"));
		HX_STACK_LINE(48)
		::events::AppEvent _g1 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(48)
		this->dispatchEvent(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Welcome_obj,architectureLoadCompleteHandler,(void))

Void Welcome_obj::show( ){
{
		HX_STACK_FRAME("view.component.Welcome","show",0x64e377a3,"view.component.Welcome.show","view/component/Welcome.hx",55,0xf680b9f8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->hide();
		HX_STACK_LINE(57)
		this->addChild(this->bmpPower);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Welcome_obj,show,(void))

Void Welcome_obj::hide( ){
{
		HX_STACK_FRAME("view.component.Welcome","hide",0x5d9ed768,"view.component.Welcome.hide","view/component/Welcome.hx",60,0xf680b9f8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("powerOffCover"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		if (((_g != null()))){
			HX_STACK_LINE(62)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("powerOffCover"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(62)
			this->removeChild(_g1);
		}
		HX_STACK_LINE(64)
		::openfl::_legacy::display::DisplayObject _g2 = this->getChildByName(HX_CSTRING("architecture"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(64)
		if (((_g2 != null()))){
			HX_STACK_LINE(65)
			::openfl::_legacy::display::DisplayObject _g3 = this->getChildByName(HX_CSTRING("architecture"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(65)
			this->removeChild(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Welcome_obj,hide,(void))

Void Welcome_obj::toggleArchitecture( ){
{
		HX_STACK_FRAME("view.component.Welcome","toggleArchitecture",0xc42d8bad,"view.component.Welcome.toggleArchitecture","view/component/Welcome.hx",69,0xf680b9f8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("architecture"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		if (((_g != null()))){
			HX_STACK_LINE(71)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("architecture"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(71)
			this->removeChild(_g1);
		}
		else{
			HX_STACK_LINE(73)
			this->addChild(this->bmpArchitecture);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Welcome_obj,toggleArchitecture,(void))


Welcome_obj::Welcome_obj()
{
}

void Welcome_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Welcome);
	HX_MARK_MEMBER_NAME(bmpPower,"bmpPower");
	HX_MARK_MEMBER_NAME(bmpArchitecture,"bmpArchitecture");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Welcome_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bmpPower,"bmpPower");
	HX_VISIT_MEMBER_NAME(bmpArchitecture,"bmpArchitecture");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Welcome_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bmpPower") ) { return bmpPower; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bmpArchitecture") ) { return bmpArchitecture; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"toggleArchitecture") ) { return toggleArchitecture_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"powerLoadCompleteHandler") ) { return powerLoadCompleteHandler_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"architectureLoadCompleteHandler") ) { return architectureLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Welcome_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"bmpPower") ) { bmpPower=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bmpArchitecture") ) { bmpArchitecture=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Welcome_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bmpPower"));
	outFields->push(HX_CSTRING("bmpArchitecture"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Welcome_obj,bmpPower),HX_CSTRING("bmpPower")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Welcome_obj,bmpArchitecture),HX_CSTRING("bmpArchitecture")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bmpPower"),
	HX_CSTRING("bmpArchitecture"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("powerLoadCompleteHandler"),
	HX_CSTRING("architectureLoadCompleteHandler"),
	HX_CSTRING("show"),
	HX_CSTRING("hide"),
	HX_CSTRING("toggleArchitecture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Welcome_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Welcome_obj::__mClass,"__mClass");
};

#endif

Class Welcome_obj::__mClass;

void Welcome_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.Welcome"), hx::TCanCast< Welcome_obj> ,sStaticFields,sMemberFields,
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

void Welcome_obj::__boot()
{
}

} // end namespace view
} // end namespace component
