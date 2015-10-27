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
#ifndef INCLUDED_view_component_lines_Gates
#include <view/component/lines/Gates.h>
#endif
namespace view{
namespace component{
namespace lines{

Void Gates_obj::__construct()
{
HX_STACK_FRAME("view.component.lines.Gates","new",0x63917ab1,"view.component.lines.Gates.new","view/component/lines/Gates.hx",35,0x5f0869a2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(36)
	super::__construct();
	HX_STACK_LINE(37)
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
		HX_STACK_FRAME("view.component.lines.Gates","addedToStageHandler",0x02f333f8,"view.component.lines.Gates.addedToStageHandler","view/component/lines/Gates.hx",40,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(41)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(42)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G1-out-0.png")),this->g1Out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(43)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G1-out-1.png")),this->g1Out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(44)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G1-out-2.png")),this->g1Out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(45)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G1-out-3.png")),this->g1Out3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(46)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G2-out.png")),this->g2OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(47)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G3-out.png")),this->g3OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(48)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G4-out.png")),this->g4OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(49)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G5-out.png")),this->g5OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(50)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G6-out.png")),this->g6OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(51)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G7-out.png")),this->g7OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(52)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G8-out.png")),this->g8OutLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(53)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/G9-out.png")),this->g9OutLoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,addedToStageHandler,(void))

Void Gates_obj::g1Out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Gates","g1Out0LoadCompleteHandler",0x10b42410,"view.component.lines.Gates.g1Out0LoadCompleteHandler","view/component/lines/Gates.hx",60,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(61)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		this->g1Out0 = _g;
		HX_STACK_LINE(62)
		this->g1Out0->set_name(HX_CSTRING("g1Out0"));
		HX_STACK_LINE(63)
		Float _g1 = this->g1Out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		this->g1Out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g1Out0LoadCompleteHandler,(void))

Void Gates_obj::g1Out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Gates","g1Out1LoadCompleteHandler",0x7718c8af,"view.component.lines.Gates.g1Out1LoadCompleteHandler","view/component/lines/Gates.hx",66,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(67)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		this->g1Out1 = _g;
		HX_STACK_LINE(68)
		this->g1Out1->set_name(HX_CSTRING("g1Out1"));
		HX_STACK_LINE(69)
		Float _g1 = this->g1Out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(69)
		this->g1Out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g1Out1LoadCompleteHandler,(void))

Void Gates_obj::g1Out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Gates","g1Out2LoadCompleteHandler",0xdd7d6d4e,"view.component.lines.Gates.g1Out2LoadCompleteHandler","view/component/lines/Gates.hx",72,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(73)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		this->g1Out2 = _g;
		HX_STACK_LINE(74)
		this->g1Out2->set_name(HX_CSTRING("g1Out2"));
		HX_STACK_LINE(75)
		Float _g1 = this->g1Out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(75)
		this->g1Out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g1Out2LoadCompleteHandler,(void))

Void Gates_obj::g1Out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Gates","g1Out3LoadCompleteHandler",0x43e211ed,"view.component.lines.Gates.g1Out3LoadCompleteHandler","view/component/lines/Gates.hx",78,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(79)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(79)
		this->g1Out3 = _g;
		HX_STACK_LINE(80)
		this->g1Out3->set_name(HX_CSTRING("g1Out3"));
		HX_STACK_LINE(81)
		Float _g1 = this->g1Out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		this->g1Out3->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g1Out3LoadCompleteHandler,(void))

Void Gates_obj::g2OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Gates","g2OutLoadCompleteHandler",0xcc16f4f7,"view.component.lines.Gates.g2OutLoadCompleteHandler","view/component/lines/Gates.hx",87,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(88)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		this->g2Out = _g;
		HX_STACK_LINE(89)
		this->g2Out->set_name(HX_CSTRING("g2Out"));
		HX_STACK_LINE(90)
		Float _g1 = this->g2Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(90)
		this->g2Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g2OutLoadCompleteHandler,(void))

Void Gates_obj::g3OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Gates","g3OutLoadCompleteHandler",0x4c49bdb8,"view.component.lines.Gates.g3OutLoadCompleteHandler","view/component/lines/Gates.hx",97,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(98)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		this->g3Out = _g;
		HX_STACK_LINE(99)
		this->g3Out->set_name(HX_CSTRING("g3Out"));
		HX_STACK_LINE(100)
		Float _g1 = this->g3Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		this->g3Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g3OutLoadCompleteHandler,(void))

Void Gates_obj::g4OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Gates","g4OutLoadCompleteHandler",0xcc7c8679,"view.component.lines.Gates.g4OutLoadCompleteHandler","view/component/lines/Gates.hx",107,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(108)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		this->g4Out = _g;
		HX_STACK_LINE(109)
		this->g4Out->set_name(HX_CSTRING("g4Out"));
		HX_STACK_LINE(110)
		Float _g1 = this->g4Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(110)
		this->g4Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g4OutLoadCompleteHandler,(void))

Void Gates_obj::g5OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Gates","g5OutLoadCompleteHandler",0x4caf4f3a,"view.component.lines.Gates.g5OutLoadCompleteHandler","view/component/lines/Gates.hx",117,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(118)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		this->g5Out = _g;
		HX_STACK_LINE(119)
		this->g5Out->set_name(HX_CSTRING("g5Out"));
		HX_STACK_LINE(120)
		Float _g1 = this->g5Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		this->g5Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g5OutLoadCompleteHandler,(void))

Void Gates_obj::g6OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Gates","g6OutLoadCompleteHandler",0xcce217fb,"view.component.lines.Gates.g6OutLoadCompleteHandler","view/component/lines/Gates.hx",127,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(128)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(128)
		this->g6Out = _g;
		HX_STACK_LINE(129)
		this->g6Out->set_name(HX_CSTRING("g6Out"));
		HX_STACK_LINE(130)
		Float _g1 = this->g6Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(130)
		this->g6Out->set_scaleX(_g1);
		HX_STACK_LINE(132)
		this->addChild(this->g6Out);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g6OutLoadCompleteHandler,(void))

Void Gates_obj::g7OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Gates","g7OutLoadCompleteHandler",0x4d14e0bc,"view.component.lines.Gates.g7OutLoadCompleteHandler","view/component/lines/Gates.hx",139,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(140)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		this->g7Out = _g;
		HX_STACK_LINE(141)
		this->g7Out->set_name(HX_CSTRING("g7Out"));
		HX_STACK_LINE(142)
		Float _g1 = this->g7Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(142)
		this->g7Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g7OutLoadCompleteHandler,(void))

Void Gates_obj::g8OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Gates","g8OutLoadCompleteHandler",0xcd47a97d,"view.component.lines.Gates.g8OutLoadCompleteHandler","view/component/lines/Gates.hx",149,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(150)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(150)
		this->g8Out = _g;
		HX_STACK_LINE(151)
		this->g8Out->set_name(HX_CSTRING("g8Out"));
		HX_STACK_LINE(152)
		Float _g1 = this->g8Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(152)
		this->g8Out->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g8OutLoadCompleteHandler,(void))

Void Gates_obj::g9OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Gates","g9OutLoadCompleteHandler",0x4d7a723e,"view.component.lines.Gates.g9OutLoadCompleteHandler","view/component/lines/Gates.hx",159,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(160)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(160)
		this->g9Out = _g;
		HX_STACK_LINE(161)
		this->g9Out->set_name(HX_CSTRING("g9Out"));
		HX_STACK_LINE(162)
		Float _g1 = this->g9Out->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(162)
		this->g9Out->set_scaleX(_g1);
		HX_STACK_LINE(163)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(163)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,g9OutLoadCompleteHandler,(void))

Void Gates_obj::showLines( ::model::vo::InstructionVO instruction,::model::vo::SnapshotVO accumulator,::model::vo::SnapshotVO register1,::model::vo::SnapshotVO ram){
{
		HX_STACK_FRAME("view.component.lines.Gates","showLines",0xfb8a00d3,"view.component.lines.Gates.showLines","view/component/lines/Gates.hx",170,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instruction,"instruction")
		HX_STACK_ARG(accumulator,"accumulator")
		HX_STACK_ARG(register1,"register1")
		HX_STACK_ARG(ram,"ram")
		HX_STACK_LINE(171)
		::String opcode = instruction->code.substr((int)0,(int)4);		HX_STACK_VAR(opcode,"opcode");
		HX_STACK_LINE(172)
		this->hideAllLines();
		HX_STACK_LINE(173)
		::String _switch_1 = (opcode);
		if (  ( _switch_1==::AppConstants_obj::OPCODE_MOV)){
			HX_STACK_LINE(175)
			this->addChild(this->g2Out);
			HX_STACK_LINE(176)
			this->addChild(this->g3Out);
			HX_STACK_LINE(177)
			::String _g = instruction->code.substr((int)4,(int)2);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(177)
			if (((_g == HX_CSTRING("00")))){
				HX_STACK_LINE(178)
				this->addChild(this->g4Out);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_LDI)){
			HX_STACK_LINE(181)
			this->addChild(this->g4Out);
			HX_STACK_LINE(182)
			this->showLinesG1(instruction->codeArr);
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_ALU)){
			HX_STACK_LINE(184)
			this->addChild(this->g4Out);
			HX_STACK_LINE(185)
			Array< bool > _g1 = accumulator->getCodeArr();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(185)
			this->showLinesG1(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_SDA)){
			HX_STACK_LINE(187)
			this->addChild(this->g3Out);
			HX_STACK_LINE(188)
			this->addChild(this->g5Out);
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_LDA)){
			HX_STACK_LINE(190)
			this->addChild(this->g4Out);
			HX_STACK_LINE(191)
			this->addChild(this->g5Out);
			HX_STACK_LINE(192)
			Array< bool > _g2 = ram->getCodeArr();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(192)
			this->showLinesG1(_g2);
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_INP)){
			HX_STACK_LINE(194)
			this->addChild(this->g2Out);
			HX_STACK_LINE(195)
			this->addChild(this->g3Out);
			HX_STACK_LINE(196)
			::String _g3 = instruction->code.substr((int)4,(int)2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(196)
			if (((_g3 == HX_CSTRING("00")))){
				HX_STACK_LINE(197)
				this->addChild(this->g4Out);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_OUT)){
			HX_STACK_LINE(200)
			this->addChild(this->g2Out);
			HX_STACK_LINE(201)
			this->addChild(this->g3Out);
			HX_STACK_LINE(202)
			::String _g4 = instruction->code.substr((int)4,(int)2);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(202)
			if (((_g4 == HX_CSTRING("00")))){
				HX_STACK_LINE(203)
				this->addChild(this->g4Out);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_JE)){
			struct _Function_2_1{
				inline static bool Block( ::model::vo::SnapshotVO &accumulator,::model::vo::SnapshotVO &register1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/lines/Gates.hx",206,0x5f0869a2)
					{
						HX_STACK_LINE(206)
						int a = accumulator->getDecimal();		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(206)
						Float b;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(206)
						{
							HX_STACK_LINE(206)
							int this1 = register1->getDecimal();		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(206)
							int _int = this1;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(206)
							if (((_int < (int)0))){
								HX_STACK_LINE(206)
								b = (4294967296.0 + _int);
							}
							else{
								HX_STACK_LINE(206)
								b = (_int + 0.0);
							}
						}
						struct _Function_3_1{
							inline static Float Block( int &a){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/lines/Gates.hx",206,0x5f0869a2)
								{
									HX_STACK_LINE(206)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(206)
									return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(206)
						return (_Function_3_1::Block(a) == b);
					}
					return null();
				}
			};
			HX_STACK_LINE(206)
			if ((_Function_2_1::Block(accumulator,register1))){
				HX_STACK_LINE(207)
				this->addChild(this->g7Out);
				HX_STACK_LINE(208)
				this->addChild(this->g8Out);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_JNE)){
			struct _Function_2_1{
				inline static bool Block( ::model::vo::SnapshotVO &accumulator,::model::vo::SnapshotVO &register1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/lines/Gates.hx",211,0x5f0869a2)
					{
						HX_STACK_LINE(211)
						int a = accumulator->getDecimal();		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(211)
						Float b;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(211)
						{
							HX_STACK_LINE(211)
							int this1 = register1->getDecimal();		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(211)
							int _int = this1;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(211)
							if (((_int < (int)0))){
								HX_STACK_LINE(211)
								b = (4294967296.0 + _int);
							}
							else{
								HX_STACK_LINE(211)
								b = (_int + 0.0);
							}
						}
						struct _Function_3_1{
							inline static Float Block( int &a){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/lines/Gates.hx",211,0x5f0869a2)
								{
									HX_STACK_LINE(211)
									int _int = a;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(211)
									return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(211)
						return (_Function_3_1::Block(a) != b);
					}
					return null();
				}
			};
			HX_STACK_LINE(211)
			if ((_Function_2_1::Block(accumulator,register1))){
				HX_STACK_LINE(212)
				this->addChild(this->g8Out);
				HX_STACK_LINE(213)
				this->addChild(this->g9Out);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::OPCODE_JMP)){
			HX_STACK_LINE(217)
			this->addChild(this->g8Out);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Gates_obj,showLines,(void))

Void Gates_obj::showLinesG1( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.component.lines.Gates","showLinesG1",0x72aa599d,"view.component.lines.Gates.showLinesG1","view/component/lines/Gates.hx",221,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(222)
		this->hideLinesG1();
		HX_STACK_LINE(223)
		if (((codeArr->__get((int)4) == true))){
			HX_STACK_LINE(224)
			this->addChild(this->g1Out3);
		}
		HX_STACK_LINE(226)
		if (((codeArr->__get((int)5) == true))){
			HX_STACK_LINE(227)
			this->addChild(this->g1Out2);
		}
		HX_STACK_LINE(229)
		if (((codeArr->__get((int)6) == true))){
			HX_STACK_LINE(230)
			this->addChild(this->g1Out1);
		}
		HX_STACK_LINE(232)
		if (((codeArr->__get((int)7) == true))){
			HX_STACK_LINE(233)
			this->addChild(this->g1Out0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gates_obj,showLinesG1,(void))

Void Gates_obj::hideLinesG1( ){
{
		HX_STACK_FRAME("view.component.lines.Gates","hideLinesG1",0x937aac78,"view.component.lines.Gates.hideLinesG1","view/component/lines/Gates.hx",238,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(238)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(238)
		while((true)){
			HX_STACK_LINE(238)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(238)
				break;
			}
			HX_STACK_LINE(238)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(239)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("g1Out") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(239)
			if (((_g1 != null()))){
				HX_STACK_LINE(240)
				::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("g1Out") + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(240)
				this->removeChild(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gates_obj,hideLinesG1,(void))

Void Gates_obj::showLineG6( ){
{
		HX_STACK_FRAME("view.component.lines.Gates","showLineG6",0x1d3691af,"view.component.lines.Gates.showLineG6","view/component/lines/Gates.hx",245,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(247)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("g6Out"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(247)
		if (((_g == null()))){
			HX_STACK_LINE(248)
			this->addChild(this->g6Out);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gates_obj,showLineG6,(void))

Void Gates_obj::hideLineG6( ){
{
		HX_STACK_FRAME("view.component.lines.Gates","hideLineG6",0x4b479334,"view.component.lines.Gates.hideLineG6","view/component/lines/Gates.hx",253,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(254)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("g6Out"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(254)
		if (((_g != null()))){
			HX_STACK_LINE(255)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("g6Out"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(255)
			this->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gates_obj,hideLineG6,(void))

Void Gates_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.lines.Gates","hideAllLines",0x4738238f,"view.component.lines.Gates.hideAllLines","view/component/lines/Gates.hx",259,0x5f0869a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(260)
			while((true)){
				HX_STACK_LINE(260)
				if ((!(((_g < (int)4))))){
					HX_STACK_LINE(260)
					break;
				}
				HX_STACK_LINE(260)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(261)
				::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("g1Out") + i));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(261)
				if (((_g1 != null()))){
					HX_STACK_LINE(262)
					::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("g1Out") + i));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(262)
					this->removeChild(_g11);
				}
			}
		}
		HX_STACK_LINE(265)
		{
			HX_STACK_LINE(265)
			int _g = (int)2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(265)
			while((true)){
				HX_STACK_LINE(265)
				if ((!(((_g < (int)10))))){
					HX_STACK_LINE(265)
					break;
				}
				HX_STACK_LINE(265)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(266)
				::openfl::_legacy::display::DisplayObject _g2 = this->getChildByName(((HX_CSTRING("g") + i) + HX_CSTRING("Out")));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(266)
				if (((  (((_g2 != null()))) ? bool((i != (int)6)) : bool(false) ))){
					HX_STACK_LINE(267)
					::openfl::_legacy::display::DisplayObject _g3 = this->getChildByName(((HX_CSTRING("g") + i) + HX_CSTRING("Out")));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(267)
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.lines.Gates"), hx::TCanCast< Gates_obj> ,sStaticFields,sMemberFields,
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
} // end namespace lines
