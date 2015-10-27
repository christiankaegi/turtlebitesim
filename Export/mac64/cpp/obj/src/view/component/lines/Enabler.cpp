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
#ifndef INCLUDED_view_component_lines_Enabler
#include <view/component/lines/Enabler.h>
#endif
namespace view{
namespace component{
namespace lines{

Void Enabler_obj::__construct()
{
HX_STACK_FRAME("view.component.lines.Enabler","new",0xf9371a78,"view.component.lines.Enabler.new","view/component/lines/Enabler.hx",30,0xe04cd67b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(32)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Enabler_obj::~Enabler_obj() { }

Dynamic Enabler_obj::__CreateEmpty() { return  new Enabler_obj; }
hx::ObjectPtr< Enabler_obj > Enabler_obj::__new()
{  hx::ObjectPtr< Enabler_obj > result = new Enabler_obj();
	result->__construct();
	return result;}

Dynamic Enabler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Enabler_obj > result = new Enabler_obj();
	result->__construct();
	return result;}

Void Enabler_obj::addedToStageHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("view.component.lines.Enabler","addedToStageHandler",0x2d8f11bf,"view.component.lines.Enabler.addedToStageHandler","view/component/lines/Enabler.hx",35,0xe04cd67b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(36)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(37)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler1-out-0.png")),this->e1Out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(38)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler1-out-1.png")),this->e1Out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(39)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler1-out-2.png")),this->e1Out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(40)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler1-out-3.png")),this->e1Out3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(41)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler2-out-0.png")),this->e2Out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(42)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler2-out-1.png")),this->e2Out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(43)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler2-out-2.png")),this->e2Out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(44)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler2-out-3.png")),this->e2Out3LoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,addedToStageHandler,(void))

Void Enabler_obj::e1Out0LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Enabler","e1Out0LoadCompleteHandler",0xea349b15,"view.component.lines.Enabler.e1Out0LoadCompleteHandler","view/component/lines/Enabler.hx",51,0xe04cd67b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(52)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		this->e1Out0 = _g;
		HX_STACK_LINE(53)
		this->e1Out0->set_name(HX_CSTRING("e1Out0"));
		HX_STACK_LINE(54)
		Float _g1 = this->e1Out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(54)
		this->e1Out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e1Out0LoadCompleteHandler,(void))

Void Enabler_obj::e1Out1LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Enabler","e1Out1LoadCompleteHandler",0x50993fb4,"view.component.lines.Enabler.e1Out1LoadCompleteHandler","view/component/lines/Enabler.hx",57,0xe04cd67b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(58)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		this->e1Out1 = _g;
		HX_STACK_LINE(59)
		this->e1Out1->set_name(HX_CSTRING("e1Out1"));
		HX_STACK_LINE(60)
		Float _g1 = this->e1Out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		this->e1Out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e1Out1LoadCompleteHandler,(void))

Void Enabler_obj::e1Out2LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Enabler","e1Out2LoadCompleteHandler",0xb6fde453,"view.component.lines.Enabler.e1Out2LoadCompleteHandler","view/component/lines/Enabler.hx",63,0xe04cd67b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(64)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		this->e1Out2 = _g;
		HX_STACK_LINE(65)
		this->e1Out2->set_name(HX_CSTRING("e1Out2"));
		HX_STACK_LINE(66)
		Float _g1 = this->e1Out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(66)
		this->e1Out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e1Out2LoadCompleteHandler,(void))

Void Enabler_obj::e1Out3LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Enabler","e1Out3LoadCompleteHandler",0x1d6288f2,"view.component.lines.Enabler.e1Out3LoadCompleteHandler","view/component/lines/Enabler.hx",69,0xe04cd67b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(70)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		this->e1Out3 = _g;
		HX_STACK_LINE(71)
		this->e1Out3->set_name(HX_CSTRING("e1Out3"));
		HX_STACK_LINE(72)
		Float _g1 = this->e1Out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(72)
		this->e1Out3->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e1Out3LoadCompleteHandler,(void))

Void Enabler_obj::e2Out0LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Enabler","e2Out0LoadCompleteHandler",0x96717b34,"view.component.lines.Enabler.e2Out0LoadCompleteHandler","view/component/lines/Enabler.hx",79,0xe04cd67b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(80)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		this->e2Out0 = _g;
		HX_STACK_LINE(81)
		this->e2Out0->set_name(HX_CSTRING("e2Out0"));
		HX_STACK_LINE(82)
		Float _g1 = this->e2Out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(82)
		this->e2Out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e2Out0LoadCompleteHandler,(void))

Void Enabler_obj::e2Out1LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Enabler","e2Out1LoadCompleteHandler",0xfcd61fd3,"view.component.lines.Enabler.e2Out1LoadCompleteHandler","view/component/lines/Enabler.hx",85,0xe04cd67b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(86)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		this->e2Out1 = _g;
		HX_STACK_LINE(87)
		this->e2Out1->set_name(HX_CSTRING("e2Out1"));
		HX_STACK_LINE(88)
		Float _g1 = this->e2Out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		this->e2Out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e2Out1LoadCompleteHandler,(void))

Void Enabler_obj::e2Out2LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Enabler","e2Out2LoadCompleteHandler",0x633ac472,"view.component.lines.Enabler.e2Out2LoadCompleteHandler","view/component/lines/Enabler.hx",91,0xe04cd67b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(92)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(92)
		this->e2Out2 = _g;
		HX_STACK_LINE(93)
		this->e2Out2->set_name(HX_CSTRING("e2Out2"));
		HX_STACK_LINE(94)
		Float _g1 = this->e2Out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(94)
		this->e2Out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e2Out2LoadCompleteHandler,(void))

Void Enabler_obj::e2Out3LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Enabler","e2Out3LoadCompleteHandler",0xc99f6911,"view.component.lines.Enabler.e2Out3LoadCompleteHandler","view/component/lines/Enabler.hx",97,0xe04cd67b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(98)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		this->e2Out3 = _g;
		HX_STACK_LINE(99)
		this->e2Out3->set_name(HX_CSTRING("e2Out3"));
		HX_STACK_LINE(100)
		Float _g1 = this->e2Out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		this->e2Out3->set_scaleX(_g1);
		HX_STACK_LINE(101)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(101)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e2Out3LoadCompleteHandler,(void))

Void Enabler_obj::showLinesEnabler1( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.component.lines.Enabler","showLinesEnabler1",0x9d1f4ebc,"view.component.lines.Enabler.showLinesEnabler1","view/component/lines/Enabler.hx",108,0xe04cd67b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(109)
		this->hideAllLines();
		HX_STACK_LINE(110)
		if (((codeArr->__get((int)4) == true))){
			HX_STACK_LINE(111)
			this->addChild(this->e1Out3);
		}
		HX_STACK_LINE(113)
		if (((codeArr->__get((int)5) == true))){
			HX_STACK_LINE(114)
			this->addChild(this->e1Out2);
		}
		HX_STACK_LINE(116)
		if (((codeArr->__get((int)6) == true))){
			HX_STACK_LINE(117)
			this->addChild(this->e1Out1);
		}
		HX_STACK_LINE(119)
		if (((codeArr->__get((int)7) == true))){
			HX_STACK_LINE(120)
			this->addChild(this->e1Out0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,showLinesEnabler1,(void))

Void Enabler_obj::showLinesEnabler2( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.component.lines.Enabler","showLinesEnabler2",0x9d1f4ebd,"view.component.lines.Enabler.showLinesEnabler2","view/component/lines/Enabler.hx",124,0xe04cd67b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(125)
		this->hideAllLines();
		HX_STACK_LINE(126)
		if (((codeArr->__get((int)4) == true))){
			HX_STACK_LINE(127)
			this->addChild(this->e2Out3);
		}
		HX_STACK_LINE(129)
		if (((codeArr->__get((int)5) == true))){
			HX_STACK_LINE(130)
			this->addChild(this->e2Out2);
		}
		HX_STACK_LINE(132)
		if (((codeArr->__get((int)6) == true))){
			HX_STACK_LINE(133)
			this->addChild(this->e2Out1);
		}
		HX_STACK_LINE(135)
		if (((codeArr->__get((int)7) == true))){
			HX_STACK_LINE(136)
			this->addChild(this->e2Out0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,showLinesEnabler2,(void))

Void Enabler_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.lines.Enabler","hideAllLines",0x0f49d2e8,"view.component.lines.Enabler.hideAllLines","view/component/lines/Enabler.hx",141,0xe04cd67b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		while((true)){
			HX_STACK_LINE(141)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(141)
				break;
			}
			HX_STACK_LINE(141)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(142)
			::openfl::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("e1Out") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(142)
			if (((_g1 != null()))){
				HX_STACK_LINE(143)
				::openfl::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("e1Out") + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(143)
				this->removeChild(_g11);
			}
			HX_STACK_LINE(145)
			::openfl::display::DisplayObject _g2 = this->getChildByName((HX_CSTRING("e2Out") + i));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(145)
			if (((_g2 != null()))){
				HX_STACK_LINE(146)
				::openfl::display::DisplayObject _g3 = this->getChildByName((HX_CSTRING("e2Out") + i));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(146)
				this->removeChild(_g3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enabler_obj,hideAllLines,(void))


Enabler_obj::Enabler_obj()
{
}

void Enabler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enabler);
	HX_MARK_MEMBER_NAME(e1Out0,"e1Out0");
	HX_MARK_MEMBER_NAME(e1Out1,"e1Out1");
	HX_MARK_MEMBER_NAME(e1Out2,"e1Out2");
	HX_MARK_MEMBER_NAME(e1Out3,"e1Out3");
	HX_MARK_MEMBER_NAME(e2Out0,"e2Out0");
	HX_MARK_MEMBER_NAME(e2Out1,"e2Out1");
	HX_MARK_MEMBER_NAME(e2Out2,"e2Out2");
	HX_MARK_MEMBER_NAME(e2Out3,"e2Out3");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Enabler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(e1Out0,"e1Out0");
	HX_VISIT_MEMBER_NAME(e1Out1,"e1Out1");
	HX_VISIT_MEMBER_NAME(e1Out2,"e1Out2");
	HX_VISIT_MEMBER_NAME(e1Out3,"e1Out3");
	HX_VISIT_MEMBER_NAME(e2Out0,"e2Out0");
	HX_VISIT_MEMBER_NAME(e2Out1,"e2Out1");
	HX_VISIT_MEMBER_NAME(e2Out2,"e2Out2");
	HX_VISIT_MEMBER_NAME(e2Out3,"e2Out3");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Enabler_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"e1Out0") ) { return e1Out0; }
		if (HX_FIELD_EQ(inName,"e1Out1") ) { return e1Out1; }
		if (HX_FIELD_EQ(inName,"e1Out2") ) { return e1Out2; }
		if (HX_FIELD_EQ(inName,"e1Out3") ) { return e1Out3; }
		if (HX_FIELD_EQ(inName,"e2Out0") ) { return e2Out0; }
		if (HX_FIELD_EQ(inName,"e2Out1") ) { return e2Out1; }
		if (HX_FIELD_EQ(inName,"e2Out2") ) { return e2Out2; }
		if (HX_FIELD_EQ(inName,"e2Out3") ) { return e2Out3; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideAllLines") ) { return hideAllLines_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"showLinesEnabler1") ) { return showLinesEnabler1_dyn(); }
		if (HX_FIELD_EQ(inName,"showLinesEnabler2") ) { return showLinesEnabler2_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"e1Out0LoadCompleteHandler") ) { return e1Out0LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e1Out1LoadCompleteHandler") ) { return e1Out1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e1Out2LoadCompleteHandler") ) { return e1Out2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e1Out3LoadCompleteHandler") ) { return e1Out3LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e2Out0LoadCompleteHandler") ) { return e2Out0LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e2Out1LoadCompleteHandler") ) { return e2Out1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e2Out2LoadCompleteHandler") ) { return e2Out2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e2Out3LoadCompleteHandler") ) { return e2Out3LoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Enabler_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"e1Out0") ) { e1Out0=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e1Out1") ) { e1Out1=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e1Out2") ) { e1Out2=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e1Out3") ) { e1Out3=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e2Out0") ) { e2Out0=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e2Out1") ) { e2Out1=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e2Out2") ) { e2Out2=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e2Out3") ) { e2Out3=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Enabler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("e1Out0"));
	outFields->push(HX_CSTRING("e1Out1"));
	outFields->push(HX_CSTRING("e1Out2"));
	outFields->push(HX_CSTRING("e1Out3"));
	outFields->push(HX_CSTRING("e2Out0"));
	outFields->push(HX_CSTRING("e2Out1"));
	outFields->push(HX_CSTRING("e2Out2"));
	outFields->push(HX_CSTRING("e2Out3"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e1Out0),HX_CSTRING("e1Out0")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e1Out1),HX_CSTRING("e1Out1")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e1Out2),HX_CSTRING("e1Out2")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e1Out3),HX_CSTRING("e1Out3")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e2Out0),HX_CSTRING("e2Out0")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e2Out1),HX_CSTRING("e2Out1")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e2Out2),HX_CSTRING("e2Out2")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e2Out3),HX_CSTRING("e2Out3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("e1Out0"),
	HX_CSTRING("e1Out1"),
	HX_CSTRING("e1Out2"),
	HX_CSTRING("e1Out3"),
	HX_CSTRING("e2Out0"),
	HX_CSTRING("e2Out1"),
	HX_CSTRING("e2Out2"),
	HX_CSTRING("e2Out3"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("e1Out0LoadCompleteHandler"),
	HX_CSTRING("e1Out1LoadCompleteHandler"),
	HX_CSTRING("e1Out2LoadCompleteHandler"),
	HX_CSTRING("e1Out3LoadCompleteHandler"),
	HX_CSTRING("e2Out0LoadCompleteHandler"),
	HX_CSTRING("e2Out1LoadCompleteHandler"),
	HX_CSTRING("e2Out2LoadCompleteHandler"),
	HX_CSTRING("e2Out3LoadCompleteHandler"),
	HX_CSTRING("showLinesEnabler1"),
	HX_CSTRING("showLinesEnabler2"),
	HX_CSTRING("hideAllLines"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Enabler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Enabler_obj::__mClass,"__mClass");
};

#endif

Class Enabler_obj::__mClass;

void Enabler_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.lines.Enabler"), hx::TCanCast< Enabler_obj> ,sStaticFields,sMemberFields,
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

void Enabler_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace lines
