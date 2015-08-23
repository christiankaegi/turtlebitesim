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
#ifndef INCLUDED_view_component_MainBus
#include <view/component/MainBus.h>
#endif
namespace view{
namespace component{

Void MainBus_obj::__construct()
{
HX_STACK_FRAME("view.component.MainBus","new",0x19c682df,"view.component.MainBus.new","view/component/MainBus.hx",15,0xec0d8f33)
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

//MainBus_obj::~MainBus_obj() { }

Dynamic MainBus_obj::__CreateEmpty() { return  new MainBus_obj; }
hx::ObjectPtr< MainBus_obj > MainBus_obj::__new()
{  hx::ObjectPtr< MainBus_obj > result = new MainBus_obj();
	result->__construct();
	return result;}

Dynamic MainBus_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainBus_obj > result = new MainBus_obj();
	result->__construct();
	return result;}

Void MainBus_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.MainBus","addedToStageHandler",0x5987f826,"view.component.MainBus.addedToStageHandler","view/component/MainBus.hx",20,0xec0d8f33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(21)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(22)
		this->initLines();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainBus_obj,addedToStageHandler,(void))

Void MainBus_obj::show( Array< bool > bus){
{
		HX_STACK_FRAME("view.component.MainBus","show",0x773c519e,"view.component.MainBus.show","view/component/MainBus.hx",26,0xec0d8f33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bus,"bus")
		HX_STACK_LINE(26)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		int _g = this->lines->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		while((true)){
			HX_STACK_LINE(26)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(26)
				break;
			}
			HX_STACK_LINE(26)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(27)
			this->linesActive->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_visible(bus->__get(i));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainBus_obj,show,(void))

Void MainBus_obj::hide( ){
{
		HX_STACK_FRAME("view.component.MainBus","hide",0x6ff7b163,"view.component.MainBus.hide","view/component/MainBus.hx",32,0xec0d8f33)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(32)
		int _g = this->lines->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(32)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(33)
			this->linesActive->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainBus_obj,hide,(void))

Void MainBus_obj::initLines( ){
{
		HX_STACK_FRAME("view.component.MainBus","initLines",0xd93e148e,"view.component.MainBus.initLines","view/component/MainBus.hx",37,0xec0d8f33)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		this->lines = _g;
		HX_STACK_LINE(39)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(39)
		this->linesActive = _g1;
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(40)
			while((true)){
				HX_STACK_LINE(40)
				if ((!(((_g2 < (int)8))))){
					HX_STACK_LINE(40)
					break;
				}
				HX_STACK_LINE(40)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(41)
				::openfl::_legacy::display::BitmapData _g21 = ::openfl::_legacy::Assets_obj::getBitmapData(((HX_CSTRING("assets/line") + i) + HX_CSTRING("_x2.png")),null());		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(41)
				::openfl::_legacy::display::Bitmap _g3 = ::openfl::_legacy::display::Bitmap_obj::__new(_g21,null(),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(41)
				this->lines->push(_g3);
				HX_STACK_LINE(42)
				::openfl::_legacy::display::BitmapData _g4 = ::openfl::_legacy::Assets_obj::getBitmapData(((HX_CSTRING("assets/line") + i) + HX_CSTRING("_active_x2.png")),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(42)
				::openfl::_legacy::display::Bitmap _g5 = ::openfl::_legacy::display::Bitmap_obj::__new(_g4,null(),null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(42)
				this->linesActive->push(_g5);
				HX_STACK_LINE(45)
				Float _g6 = this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleY(::view::component::MainBus_obj::SCALE_XY);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(45)
				this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleX(_g6);
				HX_STACK_LINE(46)
				Float _g7 = this->linesActive->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleY(::view::component::MainBus_obj::SCALE_XY);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(46)
				this->linesActive->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleX(_g7);
				HX_STACK_LINE(48)
				this->linesActive->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_visible(false);
				HX_STACK_LINE(49)
				this->addChild(this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >());
				HX_STACK_LINE(50)
				this->addChild(this->linesActive->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainBus_obj,initLines,(void))

Float MainBus_obj::SCALE_XY;


MainBus_obj::MainBus_obj()
{
}

void MainBus_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainBus);
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(linesActive,"linesActive");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainBus_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(linesActive,"linesActive");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MainBus_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { return lines; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SCALE_XY") ) { return SCALE_XY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initLines") ) { return initLines_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"linesActive") ) { return linesActive; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MainBus_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { lines=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SCALE_XY") ) { SCALE_XY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"linesActive") ) { linesActive=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainBus_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lines"));
	outFields->push(HX_CSTRING("linesActive"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SCALE_XY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MainBus_obj,lines),HX_CSTRING("lines")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MainBus_obj,linesActive),HX_CSTRING("linesActive")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("lines"),
	HX_CSTRING("linesActive"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("show"),
	HX_CSTRING("hide"),
	HX_CSTRING("initLines"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainBus_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MainBus_obj::SCALE_XY,"SCALE_XY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainBus_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MainBus_obj::SCALE_XY,"SCALE_XY");
};

#endif

Class MainBus_obj::__mClass;

void MainBus_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.MainBus"), hx::TCanCast< MainBus_obj> ,sStaticFields,sMemberFields,
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

void MainBus_obj::__boot()
{
	SCALE_XY= 0.5;
}

} // end namespace view
} // end namespace component
