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
#ifndef INCLUDED_model_vo_SnapshotVO
#include <model/vo/SnapshotVO.h>
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
HX_STACK_FRAME("view.component.basis.Gates","new",0xe012cc30,"view.component.basis.Gates.new","view/component/basis/Gates.hx",29,0xe2760d03)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(31)
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
		HX_STACK_FRAME("view.component.basis.Gates","addedToStageHandler",0x6ddbb377,"view.component.basis.Gates.addedToStageHandler","view/component/basis/Gates.hx",34,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(35)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(36)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G1-out-0.png")),this->g1Out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(37)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G1-out-1.png")),this->g1Out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(38)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G1-out-2.png")),this->g1Out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(39)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G1-out-3.png")),this->g1Out3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(40)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G2-out.png")),this->g2OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(41)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G3-out.png")),this->g3OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(42)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G4-out.png")),this->g4OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(43)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G5-out.png")),this->g5OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(44)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G6-out.png")),this->g6OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(45)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G7-out.png")),this->g7OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(46)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G8-out.png")),this->g8OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(47)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G9-out.png")),this->g9OutLoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,addedToStageHandler,(void))

Void Gates_obj::g1Out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g1Out0LoadCompleteHandler",0x60abcccf,"view.component.basis.Gates.g1Out0LoadCompleteHandler","view/component/basis/Gates.hx",54,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(55)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		this->g1Out0 = _g;
		HX_STACK_LINE(56)
		this->g1Out0->set_name(HX_CSTRING("g1Out0"));
		HX_STACK_LINE(57)
		Float _g1 = this->g1Out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(57)
		this->g1Out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g1Out0LoadCompleteHandler,(void))

Void Gates_obj::g1Out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g1Out1LoadCompleteHandler",0xc710716e,"view.component.basis.Gates.g1Out1LoadCompleteHandler","view/component/basis/Gates.hx",60,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(61)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		this->g1Out1 = _g;
		HX_STACK_LINE(62)
		this->g1Out1->set_name(HX_CSTRING("g1Out1"));
		HX_STACK_LINE(63)
		Float _g1 = this->g1Out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		this->g1Out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g1Out1LoadCompleteHandler,(void))

Void Gates_obj::g1Out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g1Out2LoadCompleteHandler",0x2d75160d,"view.component.basis.Gates.g1Out2LoadCompleteHandler","view/component/basis/Gates.hx",66,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(67)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		this->g1Out2 = _g;
		HX_STACK_LINE(68)
		this->g1Out2->set_name(HX_CSTRING("g1Out2"));
		HX_STACK_LINE(69)
		Float _g1 = this->g1Out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(69)
		this->g1Out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g1Out2LoadCompleteHandler,(void))

Void Gates_obj::g1Out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g1Out3LoadCompleteHandler",0x93d9baac,"view.component.basis.Gates.g1Out3LoadCompleteHandler","view/component/basis/Gates.hx",72,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(73)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		this->g1Out3 = _g;
		HX_STACK_LINE(74)
		this->g1Out3->set_name(HX_CSTRING("g1Out3"));
		HX_STACK_LINE(75)
		Float _g1 = this->g1Out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(75)
		this->g1Out3->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g1Out3LoadCompleteHandler,(void))

Void Gates_obj::g2OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g2OutLoadCompleteHandler",0xf254e918,"view.component.basis.Gates.g2OutLoadCompleteHandler","view/component/basis/Gates.hx",81,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(82)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		this->g2Out = _g;
		HX_STACK_LINE(83)
		this->g2Out->set_name(HX_CSTRING("g2Out"));
		HX_STACK_LINE(84)
		Float _g1 = this->g2Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(84)
		this->g2Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g2OutLoadCompleteHandler,(void))

Void Gates_obj::g3OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g3OutLoadCompleteHandler",0x7287b1d9,"view.component.basis.Gates.g3OutLoadCompleteHandler","view/component/basis/Gates.hx",91,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(92)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(92)
		this->g3Out = _g;
		HX_STACK_LINE(93)
		this->g3Out->set_name(HX_CSTRING("g3Out"));
		HX_STACK_LINE(94)
		Float _g1 = this->g3Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(94)
		this->g3Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g3OutLoadCompleteHandler,(void))

Void Gates_obj::g4OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g4OutLoadCompleteHandler",0xf2ba7a9a,"view.component.basis.Gates.g4OutLoadCompleteHandler","view/component/basis/Gates.hx",101,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(102)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		this->g4Out = _g;
		HX_STACK_LINE(103)
		this->g4Out->set_name(HX_CSTRING("g4Out"));
		HX_STACK_LINE(104)
		Float _g1 = this->g4Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(104)
		this->g4Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g4OutLoadCompleteHandler,(void))

Void Gates_obj::g5OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g5OutLoadCompleteHandler",0x72ed435b,"view.component.basis.Gates.g5OutLoadCompleteHandler","view/component/basis/Gates.hx",111,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(112)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		this->g5Out = _g;
		HX_STACK_LINE(113)
		this->g5Out->set_name(HX_CSTRING("g5Out"));
		HX_STACK_LINE(114)
		Float _g1 = this->g5Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(114)
		this->g5Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g5OutLoadCompleteHandler,(void))

Void Gates_obj::g6OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g6OutLoadCompleteHandler",0xf3200c1c,"view.component.basis.Gates.g6OutLoadCompleteHandler","view/component/basis/Gates.hx",121,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(122)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		this->g6Out = _g;
		HX_STACK_LINE(123)
		this->g6Out->set_name(HX_CSTRING("g6Out"));
		HX_STACK_LINE(124)
		Float _g1 = this->g6Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(124)
		this->g6Out->set_scaleX(_g1);
		HX_STACK_LINE(126)
		this->addChild(this->g6Out);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g6OutLoadCompleteHandler,(void))

Void Gates_obj::g7OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g7OutLoadCompleteHandler",0x7352d4dd,"view.component.basis.Gates.g7OutLoadCompleteHandler","view/component/basis/Gates.hx",133,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(134)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		this->g7Out = _g;
		HX_STACK_LINE(135)
		this->g7Out->set_name(HX_CSTRING("g7Out"));
		HX_STACK_LINE(136)
		Float _g1 = this->g7Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(136)
		this->g7Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g7OutLoadCompleteHandler,(void))

Void Gates_obj::g8OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g8OutLoadCompleteHandler",0xf3859d9e,"view.component.basis.Gates.g8OutLoadCompleteHandler","view/component/basis/Gates.hx",143,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(144)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(144)
		this->g8Out = _g;
		HX_STACK_LINE(145)
		this->g8Out->set_name(HX_CSTRING("g8Out"));
		HX_STACK_LINE(146)
		Float _g1 = this->g8Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(146)
		this->g8Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g8OutLoadCompleteHandler,(void))

Void Gates_obj::g9OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Gates","g9OutLoadCompleteHandler",0x73b8665f,"view.component.basis.Gates.g9OutLoadCompleteHandler","view/component/basis/Gates.hx",153,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(154)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		this->g9Out = _g;
		HX_STACK_LINE(155)
		this->g9Out->set_name(HX_CSTRING("g9Out"));
		HX_STACK_LINE(156)
		Float _g1 = this->g9Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(156)
		this->g9Out->set_scaleX(_g1);
		HX_STACK_LINE(157)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(157)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g9OutLoadCompleteHandler,(void))

Void Gates_obj::showLines( ::model::vo::InstructionVO instruction,::model::vo::SnapshotVO accumulator,::model::vo::SnapshotVO register1,::model::vo::SnapshotVO ram){
{
		HX_STACK_FRAME("view.component.basis.Gates","showLines",0x3a83fb92,"view.component.basis.Gates.showLines","view/component/basis/Gates.hx",160,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instruction,"instruction")
		HX_STACK_ARG(accumulator,"accumulator")
		HX_STACK_ARG(register1,"register1")
		HX_STACK_ARG(ram,"ram")
		HX_STACK_LINE(161)
		::String opcode = instruction->code.substr((int)0,(int)4);		HX_STACK_VAR(opcode,"opcode");
		HX_STACK_LINE(162)
		this->hideAllLines();
		HX_STACK_LINE(163)
		::String _switch_1 = (opcode);
		if (  ( _switch_1==::AppConstants_obj::OPCODE_MOV)){
			HX_STACK_LINE(165)
			this->addChild(this->g2Out);
			HX_STACK_LINE(166)
			this->addChild(this->g3Out);
			HX_STACK_LINE(167)
			::String _g = instruction->code.substr((int)4,(int)2);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(167)
			if (((_g == HX_CSTRING("00")))){
				HX_STACK_LINE(168)
				this->addChild(this->g4Out);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_LDI)){
			HX_STACK_LINE(171)
			this->addChild(this->g4Out);
			HX_STACK_LINE(172)
			this->showLinesG1(instruction->codeArr);
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_ALU)){
			HX_STACK_LINE(174)
			this->addChild(this->g4Out);
			HX_STACK_LINE(175)
			Array< bool > _g1 = accumulator->getCodeArr();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(175)
			this->showLinesG1(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_SDA)){
			HX_STACK_LINE(177)
			this->addChild(this->g3Out);
			HX_STACK_LINE(178)
			this->addChild(this->g5Out);
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_LDA)){
			HX_STACK_LINE(180)
			this->addChild(this->g3Out);
			HX_STACK_LINE(181)
			this->addChild(this->g4Out);
			HX_STACK_LINE(182)
			this->addChild(this->g5Out);
			HX_STACK_LINE(183)
			Array< bool > _g2 = ram->getCodeArr();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(183)
			this->showLinesG1(_g2);
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_INP)){
			HX_STACK_LINE(185)
			this->addChild(this->g2Out);
			HX_STACK_LINE(186)
			this->addChild(this->g3Out);
			HX_STACK_LINE(187)
			::String _g3 = instruction->code.substr((int)4,(int)2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(187)
			if (((_g3 == HX_CSTRING("00")))){
				HX_STACK_LINE(188)
				this->addChild(this->g4Out);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_OUT)){
			HX_STACK_LINE(191)
			this->addChild(this->g2Out);
			HX_STACK_LINE(192)
			this->addChild(this->g3Out);
			HX_STACK_LINE(193)
			::String _g4 = instruction->code.substr((int)4,(int)2);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(193)
			if (((_g4 == HX_CSTRING("00")))){
				HX_STACK_LINE(194)
				this->addChild(this->g4Out);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_JE)){
			struct _Function_2_1{
				inline static bool Block( ::model::vo::SnapshotVO &accumulator,::model::vo::SnapshotVO &register1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/basis/Gates.hx",197,0xe2760d03)
					{
						HX_STACK_LINE(197)
						int a = accumulator->getDecimal();		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(197)
						Float b;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(197)
						{
							HX_STACK_LINE(197)
							int this1 = register1->getDecimal();		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(197)
							int _int = this1;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(197)
							if (((_int < (int)0))){
								HX_STACK_LINE(197)
								b = (4294967296.0 + _int);
							}
							else{
								HX_STACK_LINE(197)
								b = (_int + 0.0);
							}
						}
						struct _Function_3_1{
							inline static Float Block( int &a){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/basis/Gates.hx",197,0xe2760d03)
								{
									HX_STACK_LINE(197)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(197)
									return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(197)
						return (_Function_3_1::Block(a) == b);
					}
					return null();
				}
			};
			HX_STACK_LINE(197)
			if ((_Function_2_1::Block(accumulator,register1))){
				HX_STACK_LINE(198)
				this->addChild(this->g7Out);
				HX_STACK_LINE(199)
				this->addChild(this->g8Out);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_JNE)){
			struct _Function_2_1{
				inline static bool Block( ::model::vo::SnapshotVO &accumulator,::model::vo::SnapshotVO &register1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/basis/Gates.hx",202,0xe2760d03)
					{
						HX_STACK_LINE(202)
						int a = accumulator->getDecimal();		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(202)
						Float b;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(202)
						{
							HX_STACK_LINE(202)
							int this1 = register1->getDecimal();		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(202)
							int _int = this1;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(202)
							if (((_int < (int)0))){
								HX_STACK_LINE(202)
								b = (4294967296.0 + _int);
							}
							else{
								HX_STACK_LINE(202)
								b = (_int + 0.0);
							}
						}
						struct _Function_3_1{
							inline static Float Block( int &a){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/basis/Gates.hx",202,0xe2760d03)
								{
									HX_STACK_LINE(202)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(202)
									return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(202)
						return (_Function_3_1::Block(a) != b);
					}
					return null();
				}
			};
			HX_STACK_LINE(202)
			if ((_Function_2_1::Block(accumulator,register1))){
				HX_STACK_LINE(203)
				this->addChild(this->g8Out);
				HX_STACK_LINE(204)
				this->addChild(this->g9Out);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_JMP)){
			HX_STACK_LINE(208)
			this->addChild(this->g8Out);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Gates_obj,showLines,(void))

Void Gates_obj::showLinesG1( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.component.basis.Gates","showLinesG1",0xe027c21c,"view.component.basis.Gates.showLinesG1","view/component/basis/Gates.hx",212,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(213)
		this->hideLinesG1();
		HX_STACK_LINE(214)
		if (((codeArr->__get((int)4) == true))){
			HX_STACK_LINE(215)
			this->addChild(this->g1Out3);
		}
		HX_STACK_LINE(217)
		if (((codeArr->__get((int)5) == true))){
			HX_STACK_LINE(218)
			this->addChild(this->g1Out2);
		}
		HX_STACK_LINE(220)
		if (((codeArr->__get((int)6) == true))){
			HX_STACK_LINE(221)
			this->addChild(this->g1Out1);
		}
		HX_STACK_LINE(223)
		if (((codeArr->__get((int)7) == true))){
			HX_STACK_LINE(224)
			this->addChild(this->g1Out0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,showLinesG1,(void))

Void Gates_obj::hideLinesG1( ){
{
		HX_STACK_FRAME("view.component.basis.Gates","hideLinesG1",0x00f814f7,"view.component.basis.Gates.hideLinesG1","view/component/basis/Gates.hx",229,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		while((true)){
			HX_STACK_LINE(229)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(229)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(230)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("g1Out") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(230)
			if (((_g1 != null()))){
				HX_STACK_LINE(231)
				::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("g1Out") + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(231)
				this->removeChild(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gates_obj,hideLinesG1,(void))

Void Gates_obj::showLineG6( ){
{
		HX_STACK_FRAME("view.component.basis.Gates","showLineG6",0xf8f7fe10,"view.component.basis.Gates.showLineG6","view/component/basis/Gates.hx",236,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(238)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("g6Out"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(238)
		if (((_g == null()))){
			HX_STACK_LINE(239)
			this->addChild(this->g6Out);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gates_obj,showLineG6,(void))

Void Gates_obj::hideLineG6( ){
{
		HX_STACK_FRAME("view.component.basis.Gates","hideLineG6",0x2708ff95,"view.component.basis.Gates.hideLineG6","view/component/basis/Gates.hx",244,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(245)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("g6Out"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(245)
		if (((_g != null()))){
			HX_STACK_LINE(246)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("g6Out"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(246)
			this->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gates_obj,hideLineG6,(void))

Void Gates_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.basis.Gates","hideAllLines",0xa7762a30,"view.component.basis.Gates.hideAllLines","view/component/basis/Gates.hx",250,0xe2760d03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(251)
		{
			HX_STACK_LINE(251)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(251)
			while((true)){
				HX_STACK_LINE(251)
				if ((!(((_g < (int)4))))){
					HX_STACK_LINE(251)
					break;
				}
				HX_STACK_LINE(251)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(252)
				::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("g1Out") + i));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(252)
				if (((_g1 != null()))){
					HX_STACK_LINE(253)
					::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("g1Out") + i));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(253)
					this->removeChild(_g11);
				}
			}
		}
		HX_STACK_LINE(256)
		{
			HX_STACK_LINE(256)
			int _g = (int)2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(256)
			while((true)){
				HX_STACK_LINE(256)
				if ((!(((_g < (int)10))))){
					HX_STACK_LINE(256)
					break;
				}
				HX_STACK_LINE(256)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(257)
				::openfl::_legacy::display::DisplayObject _g2 = this->getChildByName(((HX_CSTRING("g") + i) + HX_CSTRING("Out")));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(257)
				if (((  (((_g2 != null()))) ? bool((i != (int)6)) : bool(false) ))){
					HX_STACK_LINE(258)
					::openfl::_legacy::display::DisplayObject _g3 = this->getChildByName(((HX_CSTRING("g") + i) + HX_CSTRING("Out")));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(258)
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
	case 9:
		if (HX_FIELD_EQ(inName,"showLines") ) { return showLines_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"showLineG6") ) { return showLineG6_dyn(); }
		if (HX_FIELD_EQ(inName,"hideLineG6") ) { return hideLineG6_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"showLinesG1") ) { return showLinesG1_dyn(); }
		if (HX_FIELD_EQ(inName,"hideLinesG1") ) { return hideLinesG1_dyn(); }
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
	HX_CSTRING("showLinesG1"),
	HX_CSTRING("hideLinesG1"),
	HX_CSTRING("showLineG6"),
	HX_CSTRING("hideLineG6"),
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
