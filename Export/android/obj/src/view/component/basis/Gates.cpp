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
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_view_component_basis_Gates
#include <view/component/basis/Gates.h>
#endif
namespace view{
namespace component{
namespace basis{

Void Gates_obj::__construct()
{
HX_STACK_FRAME("view.component.basis.Gates","new",0xe012cc30,"view.component.basis.Gates.new","view/component/basis/Gates.hx",28,0xe2760d03)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	super::__construct();
	HX_STACK_LINE(30)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Gates_obj::~Gates_obj() { }

Dynamic Gates_obj::__CreateEmpty() { return  new Gates_obj; }
hx::ObjectPtr< Gates_obj > Gates_obj::__new()
{  hx::ObjectPtr< Gates_obj > result = new Gates_obj();
	result->__construct();
	return result;}

Dynamic Gates_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gates_obj > result = new Gates_obj();
	result->__construct();
	return result;}

Void Gates_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.basis.Gates","addedToStageHandler",0x6ddbb377,"view.component.basis.Gates.addedToStageHandler","view/component/basis/Gates.hx",33,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(34)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(35)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G1-out-0.png")),this->g1Out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(36)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G1-out-1.png")),this->g1Out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(37)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G1-out-2.png")),this->g1Out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(38)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G1-out-3.png")),this->g1Out3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(39)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G2-out.png")),this->g2OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(40)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G3-out.png")),this->g3OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(41)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G4-out.png")),this->g4OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(42)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G5-out.png")),this->g5OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(43)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G6-out.png")),this->g6OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(44)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G7-out.png")),this->g7OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(45)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G8-out.png")),this->g8OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(46)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G9-out.png")),this->g9OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(47)
		this->addLabel();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,addedToStageHandler,(void))

Void Gates_obj::addLabel( ){
{
		HX_STACK_FRAME("view.component.basis.Gates","addLabel",0xf65a6643,"view.component.basis.Gates.addLabel","view/component/basis/Gates.hx",51,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		::openfl::_legacy::text::TextField _g = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		this->tf = _g;
		HX_STACK_LINE(53)
		this->tf->set_defaultTextFormat(::AppConstants_obj::TEXT_FORMAT);
		HX_STACK_LINE(54)
		this->tf->set_embedFonts(true);
		HX_STACK_LINE(55)
		this->tf->set_textColor((int)16777215);
		HX_STACK_LINE(56)
		this->tf->set_width((int)500);
		HX_STACK_LINE(57)
		this->tf->set_text(HX_CSTRING("Gates"));
		HX_STACK_LINE(58)
		this->tf->set_x((int)100);
		HX_STACK_LINE(59)
		this->tf->set_y((int)600);
		HX_STACK_LINE(60)
		this->addChild(this->tf);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gates_obj,addLabel,(void))

Void Gates_obj::g1Out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g1Out0LoadCompleteHandler",0x60abcccf,"view.component.basis.Gates.g1Out0LoadCompleteHandler","view/component/basis/Gates.hx",67,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(68)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		this->g1Out0 = _g;
		HX_STACK_LINE(69)
		this->g1Out0->set_name(HX_CSTRING("g1Out0"));
		HX_STACK_LINE(72)
		Float _g1 = this->g1Out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(72)
		this->g1Out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g1Out0LoadCompleteHandler,(void))

Void Gates_obj::g1Out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g1Out1LoadCompleteHandler",0xc710716e,"view.component.basis.Gates.g1Out1LoadCompleteHandler","view/component/basis/Gates.hx",76,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(77)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		this->g1Out1 = _g;
		HX_STACK_LINE(78)
		this->g1Out1->set_name(HX_CSTRING("g1Out1"));
		HX_STACK_LINE(79)
		Float _g1 = this->g1Out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(79)
		this->g1Out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g1Out1LoadCompleteHandler,(void))

Void Gates_obj::g1Out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g1Out2LoadCompleteHandler",0x2d75160d,"view.component.basis.Gates.g1Out2LoadCompleteHandler","view/component/basis/Gates.hx",83,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(84)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		this->g1Out2 = _g;
		HX_STACK_LINE(85)
		this->g1Out2->set_name(HX_CSTRING("g1Out2"));
		HX_STACK_LINE(86)
		Float _g1 = this->g1Out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		this->g1Out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g1Out2LoadCompleteHandler,(void))

Void Gates_obj::g1Out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g1Out3LoadCompleteHandler",0x93d9baac,"view.component.basis.Gates.g1Out3LoadCompleteHandler","view/component/basis/Gates.hx",90,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(91)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		this->g1Out3 = _g;
		HX_STACK_LINE(92)
		this->g1Out3->set_name(HX_CSTRING("g1Out3"));
		HX_STACK_LINE(93)
		Float _g1 = this->g1Out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(93)
		this->g1Out3->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g1Out3LoadCompleteHandler,(void))

Void Gates_obj::g2OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g2OutLoadCompleteHandler",0xf254e918,"view.component.basis.Gates.g2OutLoadCompleteHandler","view/component/basis/Gates.hx",100,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(101)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(101)
		this->g2Out = _g;
		HX_STACK_LINE(102)
		this->g2Out->set_name(HX_CSTRING("g2Out"));
		HX_STACK_LINE(103)
		Float _g1 = this->g2Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(103)
		this->g2Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g2OutLoadCompleteHandler,(void))

Void Gates_obj::g3OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g3OutLoadCompleteHandler",0x7287b1d9,"view.component.basis.Gates.g3OutLoadCompleteHandler","view/component/basis/Gates.hx",111,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(112)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		this->g3Out = _g;
		HX_STACK_LINE(113)
		this->g3Out->set_name(HX_CSTRING("g3Out"));
		HX_STACK_LINE(114)
		Float _g1 = this->g3Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(114)
		this->g3Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g3OutLoadCompleteHandler,(void))

Void Gates_obj::g4OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g4OutLoadCompleteHandler",0xf2ba7a9a,"view.component.basis.Gates.g4OutLoadCompleteHandler","view/component/basis/Gates.hx",122,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(123)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(123)
		this->g4Out = _g;
		HX_STACK_LINE(124)
		this->g4Out->set_name(HX_CSTRING("g4Out"));
		HX_STACK_LINE(125)
		Float _g1 = this->g4Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(125)
		this->g4Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g4OutLoadCompleteHandler,(void))

Void Gates_obj::g5OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g5OutLoadCompleteHandler",0x72ed435b,"view.component.basis.Gates.g5OutLoadCompleteHandler","view/component/basis/Gates.hx",133,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(134)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		this->g5Out = _g;
		HX_STACK_LINE(135)
		this->g5Out->set_name(HX_CSTRING("g5Out"));
		HX_STACK_LINE(136)
		Float _g1 = this->g5Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(136)
		this->g5Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g5OutLoadCompleteHandler,(void))

Void Gates_obj::g6OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g6OutLoadCompleteHandler",0xf3200c1c,"view.component.basis.Gates.g6OutLoadCompleteHandler","view/component/basis/Gates.hx",144,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(145)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(145)
		this->g6Out = _g;
		HX_STACK_LINE(146)
		this->g6Out->set_name(HX_CSTRING("g6Out"));
		HX_STACK_LINE(147)
		Float _g1 = this->g6Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(147)
		this->g6Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g6OutLoadCompleteHandler,(void))

Void Gates_obj::g7OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g7OutLoadCompleteHandler",0x7352d4dd,"view.component.basis.Gates.g7OutLoadCompleteHandler","view/component/basis/Gates.hx",155,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(156)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		this->g7Out = _g;
		HX_STACK_LINE(157)
		this->g7Out->set_name(HX_CSTRING("g7Out"));
		HX_STACK_LINE(158)
		Float _g1 = this->g7Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(158)
		this->g7Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g7OutLoadCompleteHandler,(void))

Void Gates_obj::g8OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g8OutLoadCompleteHandler",0xf3859d9e,"view.component.basis.Gates.g8OutLoadCompleteHandler","view/component/basis/Gates.hx",166,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(167)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		this->g8Out = _g;
		HX_STACK_LINE(168)
		this->g8Out->set_name(HX_CSTRING("g8Out"));
		HX_STACK_LINE(169)
		Float _g1 = this->g8Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		this->g8Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g8OutLoadCompleteHandler,(void))

Void Gates_obj::g9OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g9OutLoadCompleteHandler",0x73b8665f,"view.component.basis.Gates.g9OutLoadCompleteHandler","view/component/basis/Gates.hx",177,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(178)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(178)
		this->g9Out = _g;
		HX_STACK_LINE(179)
		this->g9Out->set_name(HX_CSTRING("g9Out"));
		HX_STACK_LINE(180)
		Float _g1 = this->g9Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(180)
		this->g9Out->set_scaleX(_g1);
		HX_STACK_LINE(182)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(182)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g9OutLoadCompleteHandler,(void))

Void Gates_obj::showLines( ::model::vo::InstructionVO instruction){
{
		HX_STACK_FRAME("view.component.basis.Gates","showLines",0x3a83fb92,"view.component.basis.Gates.showLines","view/component/basis/Gates.hx",185,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instruction,"instruction")
		HX_STACK_LINE(186)
		this->hideAllLines();
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			::String _g = instruction->code.substr((int)0,(int)4);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(187)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("0001"))){
				HX_STACK_LINE(189)
				this->addChild(this->g2Out);
				HX_STACK_LINE(190)
				this->addChild(this->g3Out);
				HX_STACK_LINE(191)
				::String _g1 = instruction->code.substr((int)4,(int)2);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(191)
				if (((_g1 == HX_CSTRING("00")))){
					HX_STACK_LINE(192)
					this->addChild(this->g4Out);
				}
			}
			else if (  ( _switch_1==HX_CSTRING("0010"))){
				HX_STACK_LINE(195)
				this->addChild(this->g4Out);
				HX_STACK_LINE(196)
				if (((instruction->codeArr->__get((int)4) == true))){
					HX_STACK_LINE(197)
					this->addChild(this->g1Out0);
				}
				HX_STACK_LINE(199)
				if (((instruction->codeArr->__get((int)5) == true))){
					HX_STACK_LINE(200)
					this->addChild(this->g1Out1);
				}
				HX_STACK_LINE(202)
				if (((instruction->codeArr->__get((int)6) == true))){
					HX_STACK_LINE(203)
					this->addChild(this->g1Out2);
				}
				HX_STACK_LINE(205)
				if (((instruction->codeArr->__get((int)7) == true))){
					HX_STACK_LINE(206)
					this->addChild(this->g1Out3);
				}
			}
			else if (  ( _switch_1==HX_CSTRING("0011"))){
				HX_STACK_LINE(209)
				this->addChild(this->g4Out);
			}
			else if (  ( _switch_1==HX_CSTRING("0100"))){
				HX_STACK_LINE(211)
				this->addChild(this->g3Out);
				HX_STACK_LINE(212)
				this->addChild(this->g5Out);
			}
			else if (  ( _switch_1==HX_CSTRING("0101"))){
				HX_STACK_LINE(214)
				this->addChild(this->g3Out);
				HX_STACK_LINE(215)
				this->addChild(this->g4Out);
				HX_STACK_LINE(216)
				this->addChild(this->g5Out);
			}
			else if (  ( _switch_1==HX_CSTRING("0110"))){
				HX_STACK_LINE(218)
				this->addChild(this->g2Out);
				HX_STACK_LINE(219)
				this->addChild(this->g3Out);
				HX_STACK_LINE(220)
				::String _g1 = instruction->code.substr((int)4,(int)2);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(220)
				if (((_g1 == HX_CSTRING("00")))){
					HX_STACK_LINE(221)
					this->addChild(this->g4Out);
				}
			}
			else if (  ( _switch_1==HX_CSTRING("0111"))){
				HX_STACK_LINE(224)
				this->addChild(this->g2Out);
				HX_STACK_LINE(225)
				this->addChild(this->g3Out);
				HX_STACK_LINE(226)
				::String _g2 = instruction->code.substr((int)4,(int)2);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(226)
				if (((_g2 == HX_CSTRING("00")))){
					HX_STACK_LINE(227)
					this->addChild(this->g4Out);
				}
			}
			else if (  ( _switch_1==HX_CSTRING("1000"))){
			}
			else if (  ( _switch_1==HX_CSTRING("1001"))){
			}
			else if (  ( _switch_1==HX_CSTRING("1010"))){
				HX_STACK_LINE(236)
				this->addChild(this->g8Out);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,showLines,(void))

Void Gates_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.basis.Gates","hideAllLines",0xa7762a30,"view.component.basis.Gates.hideAllLines","view/component/basis/Gates.hx",240,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(241)
			while((true)){
				HX_STACK_LINE(241)
				if ((!(((_g < (int)4))))){
					HX_STACK_LINE(241)
					break;
				}
				HX_STACK_LINE(241)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(243)
				::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("g1Out") + i));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(243)
				if (((_g1 != null()))){
					HX_STACK_LINE(244)
					::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("g1Out") + i));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(244)
					this->removeChild(_g11);
				}
			}
		}
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			int _g = (int)2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(247)
			while((true)){
				HX_STACK_LINE(247)
				if ((!(((_g < (int)10))))){
					HX_STACK_LINE(247)
					break;
				}
				HX_STACK_LINE(247)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(249)
				::openfl::_legacy::display::DisplayObject _g2 = this->getChildByName(((HX_CSTRING("g") + i) + HX_CSTRING("Out")));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(249)
				if (((_g2 != null()))){
					HX_STACK_LINE(250)
					::openfl::_legacy::display::DisplayObject _g3 = this->getChildByName(((HX_CSTRING("g") + i) + HX_CSTRING("Out")));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(250)
					this->removeChild(_g3);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gates_obj,hideAllLines,(void))


Gates_obj::Gates_obj()
{
}

void Gates_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gates);
	HX_MARK_MEMBER_NAME(g1Out0,"g1Out0");
	HX_MARK_MEMBER_NAME(g1Out1,"g1Out1");
	HX_MARK_MEMBER_NAME(g1Out2,"g1Out2");
	HX_MARK_MEMBER_NAME(g1Out3,"g1Out3");
	HX_MARK_MEMBER_NAME(g2Out,"g2Out");
	HX_MARK_MEMBER_NAME(g3Out,"g3Out");
	HX_MARK_MEMBER_NAME(g4Out,"g4Out");
	HX_MARK_MEMBER_NAME(g5Out,"g5Out");
	HX_MARK_MEMBER_NAME(g6Out,"g6Out");
	HX_MARK_MEMBER_NAME(g7Out,"g7Out");
	HX_MARK_MEMBER_NAME(g8Out,"g8Out");
	HX_MARK_MEMBER_NAME(g9Out,"g9Out");
	HX_MARK_MEMBER_NAME(tf,"tf");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Gates_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(g1Out0,"g1Out0");
	HX_VISIT_MEMBER_NAME(g1Out1,"g1Out1");
	HX_VISIT_MEMBER_NAME(g1Out2,"g1Out2");
	HX_VISIT_MEMBER_NAME(g1Out3,"g1Out3");
	HX_VISIT_MEMBER_NAME(g2Out,"g2Out");
	HX_VISIT_MEMBER_NAME(g3Out,"g3Out");
	HX_VISIT_MEMBER_NAME(g4Out,"g4Out");
	HX_VISIT_MEMBER_NAME(g5Out,"g5Out");
	HX_VISIT_MEMBER_NAME(g6Out,"g6Out");
	HX_VISIT_MEMBER_NAME(g7Out,"g7Out");
	HX_VISIT_MEMBER_NAME(g8Out,"g8Out");
	HX_VISIT_MEMBER_NAME(g9Out,"g9Out");
	HX_VISIT_MEMBER_NAME(tf,"tf");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Gates_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"tf") ) { return tf; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"g2Out") ) { return g2Out; }
		if (HX_FIELD_EQ(inName,"g3Out") ) { return g3Out; }
		if (HX_FIELD_EQ(inName,"g4Out") ) { return g4Out; }
		if (HX_FIELD_EQ(inName,"g5Out") ) { return g5Out; }
		if (HX_FIELD_EQ(inName,"g6Out") ) { return g6Out; }
		if (HX_FIELD_EQ(inName,"g7Out") ) { return g7Out; }
		if (HX_FIELD_EQ(inName,"g8Out") ) { return g8Out; }
		if (HX_FIELD_EQ(inName,"g9Out") ) { return g9Out; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"g1Out0") ) { return g1Out0; }
		if (HX_FIELD_EQ(inName,"g1Out1") ) { return g1Out1; }
		if (HX_FIELD_EQ(inName,"g1Out2") ) { return g1Out2; }
		if (HX_FIELD_EQ(inName,"g1Out3") ) { return g1Out3; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addLabel") ) { return addLabel_dyn(); }
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
	case 24:
		if (HX_FIELD_EQ(inName,"g2OutLoadCompleteHandler") ) { return g2OutLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"g3OutLoadCompleteHandler") ) { return g3OutLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"g4OutLoadCompleteHandler") ) { return g4OutLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"g5OutLoadCompleteHandler") ) { return g5OutLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"g6OutLoadCompleteHandler") ) { return g6OutLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"g7OutLoadCompleteHandler") ) { return g7OutLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"g8OutLoadCompleteHandler") ) { return g8OutLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"g9OutLoadCompleteHandler") ) { return g9OutLoadCompleteHandler_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"g1Out0LoadCompleteHandler") ) { return g1Out0LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"g1Out1LoadCompleteHandler") ) { return g1Out1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"g1Out2LoadCompleteHandler") ) { return g1Out2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"g1Out3LoadCompleteHandler") ) { return g1Out3LoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Gates_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"tf") ) { tf=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"g2Out") ) { g2Out=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g3Out") ) { g3Out=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g4Out") ) { g4Out=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g5Out") ) { g5Out=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g6Out") ) { g6Out=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g7Out") ) { g7Out=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g8Out") ) { g8Out=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g9Out") ) { g9Out=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"g1Out0") ) { g1Out0=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g1Out1") ) { g1Out1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g1Out2") ) { g1Out2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g1Out3") ) { g1Out3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Gates_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("g1Out0"));
	outFields->push(HX_CSTRING("g1Out1"));
	outFields->push(HX_CSTRING("g1Out2"));
	outFields->push(HX_CSTRING("g1Out3"));
	outFields->push(HX_CSTRING("g2Out"));
	outFields->push(HX_CSTRING("g3Out"));
	outFields->push(HX_CSTRING("g4Out"));
	outFields->push(HX_CSTRING("g5Out"));
	outFields->push(HX_CSTRING("g6Out"));
	outFields->push(HX_CSTRING("g7Out"));
	outFields->push(HX_CSTRING("g8Out"));
	outFields->push(HX_CSTRING("g9Out"));
	outFields->push(HX_CSTRING("tf"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Gates_obj,g1Out0),HX_CSTRING("g1Out0")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Gates_obj,g1Out1),HX_CSTRING("g1Out1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Gates_obj,g1Out2),HX_CSTRING("g1Out2")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Gates_obj,g1Out3),HX_CSTRING("g1Out3")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Gates_obj,g2Out),HX_CSTRING("g2Out")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Gates_obj,g3Out),HX_CSTRING("g3Out")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Gates_obj,g4Out),HX_CSTRING("g4Out")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Gates_obj,g5Out),HX_CSTRING("g5Out")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Gates_obj,g6Out),HX_CSTRING("g6Out")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Gates_obj,g7Out),HX_CSTRING("g7Out")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Gates_obj,g8Out),HX_CSTRING("g8Out")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Gates_obj,g9Out),HX_CSTRING("g9Out")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Gates_obj,tf),HX_CSTRING("tf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("g1Out0"),
	HX_CSTRING("g1Out1"),
	HX_CSTRING("g1Out2"),
	HX_CSTRING("g1Out3"),
	HX_CSTRING("g2Out"),
	HX_CSTRING("g3Out"),
	HX_CSTRING("g4Out"),
	HX_CSTRING("g5Out"),
	HX_CSTRING("g6Out"),
	HX_CSTRING("g7Out"),
	HX_CSTRING("g8Out"),
	HX_CSTRING("g9Out"),
	HX_CSTRING("tf"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("addLabel"),
	HX_CSTRING("g1Out0LoadCompleteHandler"),
	HX_CSTRING("g1Out1LoadCompleteHandler"),
	HX_CSTRING("g1Out2LoadCompleteHandler"),
	HX_CSTRING("g1Out3LoadCompleteHandler"),
	HX_CSTRING("g2OutLoadCompleteHandler"),
	HX_CSTRING("g3OutLoadCompleteHandler"),
	HX_CSTRING("g4OutLoadCompleteHandler"),
	HX_CSTRING("g5OutLoadCompleteHandler"),
	HX_CSTRING("g6OutLoadCompleteHandler"),
	HX_CSTRING("g7OutLoadCompleteHandler"),
	HX_CSTRING("g8OutLoadCompleteHandler"),
	HX_CSTRING("g9OutLoadCompleteHandler"),
	HX_CSTRING("showLines"),
	HX_CSTRING("hideAllLines"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gates_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gates_obj::__mClass,"__mClass");
};

#endif

Class Gates_obj::__mClass;

void Gates_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.basis.Gates"), hx::TCanCast< Gates_obj> ,sStaticFields,sMemberFields,
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

void Gates_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace basis
