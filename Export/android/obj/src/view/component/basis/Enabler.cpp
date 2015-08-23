#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
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
#ifndef INCLUDED_view_component_basis_Enabler
#include <view/component/basis/Enabler.h>
#endif
namespace view{
namespace component{
namespace basis{

Void Enabler_obj::__construct()
{
HX_STACK_FRAME("view.component.basis.Enabler","new",0x95cf09b7,"view.component.basis.Enabler.new","view/component/basis/Enabler.hx",23,0x54f2d41c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
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

Void Enabler_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.basis.Enabler","addedToStageHandler",0x8335aefe,"view.component.basis.Enabler.addedToStageHandler","view/component/basis/Enabler.hx",28,0x54f2d41c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(29)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(30)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler1-out-0.png")),this->e1Out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(31)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler1-out-1.png")),this->e1Out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(32)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler1-out-2.png")),this->e1Out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(33)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler1-out-3.png")),this->e1Out3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(34)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler2-out-0.png")),this->e2Out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(35)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler2-out-1.png")),this->e2Out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(36)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler2-out-2.png")),this->e2Out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(37)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler2-out-3.png")),this->e2Out3LoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,addedToStageHandler,(void))

Void Enabler_obj::e1Out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enabler","e1Out0LoadCompleteHandler",0xe5f73194,"view.component.basis.Enabler.e1Out0LoadCompleteHandler","view/component/basis/Enabler.hx",44,0x54f2d41c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(45)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		this->e1Out0 = _g;
		HX_STACK_LINE(46)
		this->e1Out0->set_name(HX_CSTRING("e1Out0"));
		HX_STACK_LINE(47)
		Float _g1 = this->e1Out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(47)
		this->e1Out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e1Out0LoadCompleteHandler,(void))

Void Enabler_obj::e1Out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enabler","e1Out1LoadCompleteHandler",0x4c5bd633,"view.component.basis.Enabler.e1Out1LoadCompleteHandler","view/component/basis/Enabler.hx",51,0x54f2d41c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(52)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		this->e1Out1 = _g;
		HX_STACK_LINE(53)
		this->e1Out1->set_name(HX_CSTRING("e1Out1"));
		HX_STACK_LINE(54)
		Float _g1 = this->e1Out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(54)
		this->e1Out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e1Out1LoadCompleteHandler,(void))

Void Enabler_obj::e1Out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enabler","e1Out2LoadCompleteHandler",0xb2c07ad2,"view.component.basis.Enabler.e1Out2LoadCompleteHandler","view/component/basis/Enabler.hx",58,0x54f2d41c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(59)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		this->e1Out2 = _g;
		HX_STACK_LINE(60)
		this->e1Out2->set_name(HX_CSTRING("e1Out2"));
		HX_STACK_LINE(61)
		Float _g1 = this->e1Out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(61)
		this->e1Out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e1Out2LoadCompleteHandler,(void))

Void Enabler_obj::e1Out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enabler","e1Out3LoadCompleteHandler",0x19251f71,"view.component.basis.Enabler.e1Out3LoadCompleteHandler","view/component/basis/Enabler.hx",65,0x54f2d41c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(66)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		this->e1Out3 = _g;
		HX_STACK_LINE(67)
		this->e1Out3->set_name(HX_CSTRING("e1Out3"));
		HX_STACK_LINE(68)
		Float _g1 = this->e1Out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		this->e1Out3->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e1Out3LoadCompleteHandler,(void))

Void Enabler_obj::e2Out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enabler","e2Out0LoadCompleteHandler",0x923411b3,"view.component.basis.Enabler.e2Out0LoadCompleteHandler","view/component/basis/Enabler.hx",76,0x54f2d41c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(77)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		this->e2Out0 = _g;
		HX_STACK_LINE(78)
		this->e2Out0->set_name(HX_CSTRING("e2Out0"));
		HX_STACK_LINE(79)
		Float _g1 = this->e2Out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(79)
		this->e2Out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e2Out0LoadCompleteHandler,(void))

Void Enabler_obj::e2Out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enabler","e2Out1LoadCompleteHandler",0xf898b652,"view.component.basis.Enabler.e2Out1LoadCompleteHandler","view/component/basis/Enabler.hx",83,0x54f2d41c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(84)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		this->e2Out1 = _g;
		HX_STACK_LINE(85)
		this->e2Out1->set_name(HX_CSTRING("e2Out1"));
		HX_STACK_LINE(86)
		Float _g1 = this->e2Out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		this->e2Out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e2Out1LoadCompleteHandler,(void))

Void Enabler_obj::e2Out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enabler","e2Out2LoadCompleteHandler",0x5efd5af1,"view.component.basis.Enabler.e2Out2LoadCompleteHandler","view/component/basis/Enabler.hx",90,0x54f2d41c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(91)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		this->e2Out2 = _g;
		HX_STACK_LINE(92)
		this->e2Out2->set_name(HX_CSTRING("e2Out2"));
		HX_STACK_LINE(93)
		Float _g1 = this->e2Out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(93)
		this->e2Out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e2Out2LoadCompleteHandler,(void))

Void Enabler_obj::e2Out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enabler","e2Out3LoadCompleteHandler",0xc561ff90,"view.component.basis.Enabler.e2Out3LoadCompleteHandler","view/component/basis/Enabler.hx",97,0x54f2d41c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(98)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		this->e2Out3 = _g;
		HX_STACK_LINE(99)
		this->e2Out3->set_name(HX_CSTRING("e2Out3"));
		HX_STACK_LINE(100)
		Float _g1 = this->e2Out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		this->e2Out3->set_scaleX(_g1);
		HX_STACK_LINE(102)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(102)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,e2Out3LoadCompleteHandler,(void))

Void Enabler_obj::showLines( ::model::vo::InstructionVO instruction){
{
		HX_STACK_FRAME("view.component.basis.Enabler","showLines",0x705d9859,"view.component.basis.Enabler.showLines","view/component/basis/Enabler.hx",105,0x54f2d41c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instruction,"instruction")
		HX_STACK_LINE(106)
		this->hideAllLines();
		HX_STACK_LINE(107)
		::String _g = instruction->code.substr((int)0,(int)4);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		if (((_g == HX_CSTRING("0010")))){
			HX_STACK_LINE(108)
			if (((instruction->codeArr->__get((int)4) == true))){
				HX_STACK_LINE(109)
				this->addChild(this->e2Out0);
			}
			HX_STACK_LINE(111)
			if (((instruction->codeArr->__get((int)5) == true))){
				HX_STACK_LINE(112)
				this->addChild(this->e2Out1);
			}
			HX_STACK_LINE(114)
			if (((instruction->codeArr->__get((int)6) == true))){
				HX_STACK_LINE(115)
				this->addChild(this->e2Out2);
			}
			HX_STACK_LINE(117)
			if (((instruction->codeArr->__get((int)7) == true))){
				HX_STACK_LINE(118)
				this->addChild(this->e2Out3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enabler_obj,showLines,(void))

Void Enabler_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.basis.Enabler","hideAllLines",0x800f83c9,"view.component.basis.Enabler.hideAllLines","view/component/basis/Enabler.hx",124,0x54f2d41c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		while((true)){
			HX_STACK_LINE(124)
			if ((!(((_g < (int)5))))){
				HX_STACK_LINE(124)
				break;
			}
			HX_STACK_LINE(124)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(125)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("e1Out") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(125)
			if (((_g1 != null()))){
				HX_STACK_LINE(126)
				::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("e1Out") + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(126)
				this->removeChild(_g11);
			}
			HX_STACK_LINE(128)
			::openfl::_legacy::display::DisplayObject _g2 = this->getChildByName((HX_CSTRING("e2Out") + i));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(128)
			if (((_g2 != null()))){
				HX_STACK_LINE(129)
				::openfl::_legacy::display::DisplayObject _g3 = this->getChildByName((HX_CSTRING("e2Out") + i));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(129)
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
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
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
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
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
	case 9:
		if (HX_FIELD_EQ(inName,"showLines") ) { return showLines_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideAllLines") ) { return hideAllLines_dyn(); }
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
		if (HX_FIELD_EQ(inName,"e1Out0") ) { e1Out0=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e1Out1") ) { e1Out1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e1Out2") ) { e1Out2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e1Out3") ) { e1Out3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e2Out0") ) { e2Out0=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e2Out1") ) { e2Out1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e2Out2") ) { e2Out2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e2Out3") ) { e2Out3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
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
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e1Out0),HX_CSTRING("e1Out0")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e1Out1),HX_CSTRING("e1Out1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e1Out2),HX_CSTRING("e1Out2")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e1Out3),HX_CSTRING("e1Out3")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e2Out0),HX_CSTRING("e2Out0")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e2Out1),HX_CSTRING("e2Out1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e2Out2),HX_CSTRING("e2Out2")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enabler_obj,e2Out3),HX_CSTRING("e2Out3")},
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
	HX_CSTRING("showLines"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.basis.Enabler"), hx::TCanCast< Enabler_obj> ,sStaticFields,sMemberFields,
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
} // end namespace basis
