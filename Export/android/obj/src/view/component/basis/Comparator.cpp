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
#ifndef INCLUDED_view_component_basis_Comparator
#include <view/component/basis/Comparator.h>
#endif
namespace view{
namespace component{
namespace basis{

Void Comparator_obj::__construct()
{
HX_STACK_FRAME("view.component.basis.Comparator","new",0xbb33b192,"view.component.basis.Comparator.new","view/component/basis/Comparator.hx",24,0x5c025f7b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Comparator_obj::~Comparator_obj() { }

Dynamic Comparator_obj::__CreateEmpty() { return  new Comparator_obj; }
hx::ObjectPtr< Comparator_obj > Comparator_obj::__new()
{  hx::ObjectPtr< Comparator_obj > result = new Comparator_obj();
	result->__construct();
	return result;}

Dynamic Comparator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Comparator_obj > result = new Comparator_obj();
	result->__construct();
	return result;}

Void Comparator_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.basis.Comparator","addedToStageHandler",0xc52cfcd9,"view.component.basis.Comparator.addedToStageHandler","view/component/basis/Comparator.hx",29,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(30)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(31)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/MOV-out.png")),this->movLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(32)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/LDI-out.png")),this->ldiLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(33)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/ALU-out.png")),this->aluLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(34)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/SDA-out.png")),this->sdaLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(35)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/LDA-out.png")),this->ldaLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(36)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/INP-out.png")),this->inpLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(37)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/OUT-out.png")),this->outLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(38)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/JE-out.png")),this->jeLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(39)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/JNE-out.png")),this->jneLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(40)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/JMP-out.png")),this->jmpLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(41)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/comp_static_lines.png")),this->compStaticLinesLoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparator_obj,addedToStageHandler,(void))

Void Comparator_obj::movLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparator","movLoadCompleteHandler",0x6aac7425,"view.component.basis.Comparator.movLoadCompleteHandler","view/component/basis/Comparator.hx",48,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(49)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		this->MOVLine = _g;
		HX_STACK_LINE(50)
		this->MOVLine->set_name(HX_CSTRING("MOVLine"));
		HX_STACK_LINE(51)
		Float _g1 = this->MOVLine->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(51)
		this->MOVLine->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparator_obj,movLoadCompleteHandler,(void))

Void Comparator_obj::ldiLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparator","ldiLoadCompleteHandler",0xd0e46628,"view.component.basis.Comparator.ldiLoadCompleteHandler","view/component/basis/Comparator.hx",55,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(56)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		this->LDILine = _g;
		HX_STACK_LINE(57)
		this->LDILine->set_name(HX_CSTRING("LDILine"));
		HX_STACK_LINE(58)
		Float _g1 = this->LDILine->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(58)
		this->LDILine->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparator_obj,ldiLoadCompleteHandler,(void))

Void Comparator_obj::aluLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparator","aluLoadCompleteHandler",0x3b9a1f8f,"view.component.basis.Comparator.aluLoadCompleteHandler","view/component/basis/Comparator.hx",62,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(63)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		this->ALULine = _g;
		HX_STACK_LINE(64)
		this->ALULine->set_name(HX_CSTRING("ALULine"));
		HX_STACK_LINE(65)
		Float _g1 = this->ALULine->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(65)
		this->ALULine->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparator_obj,aluLoadCompleteHandler,(void))

Void Comparator_obj::sdaLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparator","sdaLoadCompleteHandler",0x7be349c9,"view.component.basis.Comparator.sdaLoadCompleteHandler","view/component/basis/Comparator.hx",69,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(70)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		this->SDALine = _g;
		HX_STACK_LINE(71)
		this->SDALine->set_name(HX_CSTRING("SDALine"));
		HX_STACK_LINE(72)
		Float _g1 = this->SDALine->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(72)
		this->SDALine->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparator_obj,sdaLoadCompleteHandler,(void))

Void Comparator_obj::ldaLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparator","ldaLoadCompleteHandler",0x9dbf4130,"view.component.basis.Comparator.ldaLoadCompleteHandler","view/component/basis/Comparator.hx",76,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(77)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		this->LDALine = _g;
		HX_STACK_LINE(78)
		this->LDALine->set_name(HX_CSTRING("LDALine"));
		HX_STACK_LINE(79)
		Float _g1 = this->LDALine->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(79)
		this->LDALine->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparator_obj,ldaLoadCompleteHandler,(void))

Void Comparator_obj::inpLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparator","inpLoadCompleteHandler",0xc16c086e,"view.component.basis.Comparator.inpLoadCompleteHandler","view/component/basis/Comparator.hx",83,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(84)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		this->INPLine = _g;
		HX_STACK_LINE(85)
		this->INPLine->set_name(HX_CSTRING("INPLine"));
		HX_STACK_LINE(86)
		Float _g1 = this->INPLine->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		this->INPLine->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparator_obj,inpLoadCompleteHandler,(void))

Void Comparator_obj::outLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparator","outLoadCompleteHandler",0x508426ab,"view.component.basis.Comparator.outLoadCompleteHandler","view/component/basis/Comparator.hx",90,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(91)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		this->OUTLine = _g;
		HX_STACK_LINE(92)
		this->OUTLine->set_name(HX_CSTRING("OUTLine"));
		HX_STACK_LINE(93)
		Float _g1 = this->OUTLine->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(93)
		this->OUTLine->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparator_obj,outLoadCompleteHandler,(void))

Void Comparator_obj::jeLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparator","jeLoadCompleteHandler",0x89700a42,"view.component.basis.Comparator.jeLoadCompleteHandler","view/component/basis/Comparator.hx",97,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(98)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		this->JELine = _g;
		HX_STACK_LINE(99)
		this->JELine->set_name(HX_CSTRING("JELine"));
		HX_STACK_LINE(100)
		Float _g1 = this->JELine->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		this->JELine->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparator_obj,jeLoadCompleteHandler,(void))

Void Comparator_obj::jneLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparator","jneLoadCompleteHandler",0x9f673ff8,"view.component.basis.Comparator.jneLoadCompleteHandler","view/component/basis/Comparator.hx",104,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(105)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		this->JNELine = _g;
		HX_STACK_LINE(106)
		this->JNELine->set_name(HX_CSTRING("JNELine"));
		HX_STACK_LINE(107)
		Float _g1 = this->JNELine->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(107)
		this->JNELine->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparator_obj,jneLoadCompleteHandler,(void))

Void Comparator_obj::jmpLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparator","jmpLoadCompleteHandler",0xd40eec4c,"view.component.basis.Comparator.jmpLoadCompleteHandler","view/component/basis/Comparator.hx",111,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(112)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		this->JMPLine = _g;
		HX_STACK_LINE(113)
		this->JMPLine->set_name(HX_CSTRING("JMPLine"));
		HX_STACK_LINE(114)
		Float _g1 = this->JMPLine->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(114)
		this->JMPLine->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparator_obj,jmpLoadCompleteHandler,(void))

Void Comparator_obj::compStaticLinesLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparator","compStaticLinesLoadCompleteHandler",0x2907fb17,"view.component.basis.Comparator.compStaticLinesLoadCompleteHandler","view/component/basis/Comparator.hx",118,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(119)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(119)
		this->compStaticLines = _g;
		HX_STACK_LINE(120)
		this->compStaticLines->set_name(HX_CSTRING("compStaticLines"));
		HX_STACK_LINE(121)
		Float _g1 = this->compStaticLines->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(121)
		this->compStaticLines->set_scaleX(_g1);
		HX_STACK_LINE(122)
		this->addChild(this->compStaticLines);
		HX_STACK_LINE(123)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(123)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparator_obj,compStaticLinesLoadCompleteHandler,(void))

Void Comparator_obj::showLines( ::model::vo::InstructionVO instruction){
{
		HX_STACK_FRAME("view.component.basis.Comparator","showLines",0xcc161674,"view.component.basis.Comparator.showLines","view/component/basis/Comparator.hx",126,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instruction,"instruction")
		HX_STACK_LINE(127)
		this->hideAllLines();
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			::String _g = instruction->code.substr((int)0,(int)4);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(128)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("0001"))){
				HX_STACK_LINE(130)
				this->addChild(this->MOVLine);
			}
			else if (  ( _switch_1==HX_CSTRING("0010"))){
				HX_STACK_LINE(132)
				this->addChild(this->LDILine);
			}
			else if (  ( _switch_1==HX_CSTRING("0011"))){
				HX_STACK_LINE(134)
				this->addChild(this->ALULine);
			}
			else if (  ( _switch_1==HX_CSTRING("0100"))){
				HX_STACK_LINE(136)
				this->addChild(this->SDALine);
			}
			else if (  ( _switch_1==HX_CSTRING("0101"))){
				HX_STACK_LINE(138)
				this->addChild(this->LDALine);
			}
			else if (  ( _switch_1==HX_CSTRING("0110"))){
				HX_STACK_LINE(140)
				this->addChild(this->INPLine);
			}
			else if (  ( _switch_1==HX_CSTRING("0111"))){
				HX_STACK_LINE(142)
				this->addChild(this->OUTLine);
			}
			else if (  ( _switch_1==HX_CSTRING("1000"))){
				HX_STACK_LINE(144)
				this->addChild(this->JELine);
			}
			else if (  ( _switch_1==HX_CSTRING("1001"))){
				HX_STACK_LINE(146)
				this->addChild(this->JNELine);
			}
			else if (  ( _switch_1==HX_CSTRING("1010"))){
				HX_STACK_LINE(148)
				this->addChild(this->JMPLine);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparator_obj,showLines,(void))

Void Comparator_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.basis.Comparator","hideAllLines",0xa212888e,"view.component.basis.Comparator.hideAllLines","view/component/basis/Comparator.hx",152,0x5c025f7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("MOVLine"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
		if (((_g != null()))){
			HX_STACK_LINE(154)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("MOVLine"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(154)
			this->removeChild(_g1);
		}
		HX_STACK_LINE(156)
		::openfl::_legacy::display::DisplayObject _g2 = this->getChildByName(HX_CSTRING("LDILine"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(156)
		if (((_g2 != null()))){
			HX_STACK_LINE(157)
			::openfl::_legacy::display::DisplayObject _g3 = this->getChildByName(HX_CSTRING("LDILine"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(157)
			this->removeChild(_g3);
		}
		HX_STACK_LINE(159)
		::openfl::_legacy::display::DisplayObject _g4 = this->getChildByName(HX_CSTRING("ALULine"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(159)
		if (((_g4 != null()))){
			HX_STACK_LINE(160)
			::openfl::_legacy::display::DisplayObject _g5 = this->getChildByName(HX_CSTRING("ALULine"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(160)
			this->removeChild(_g5);
		}
		HX_STACK_LINE(162)
		::openfl::_legacy::display::DisplayObject _g6 = this->getChildByName(HX_CSTRING("SDALine"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(162)
		if (((_g6 != null()))){
			HX_STACK_LINE(163)
			::openfl::_legacy::display::DisplayObject _g7 = this->getChildByName(HX_CSTRING("SDALine"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(163)
			this->removeChild(_g7);
		}
		HX_STACK_LINE(165)
		::openfl::_legacy::display::DisplayObject _g8 = this->getChildByName(HX_CSTRING("LDALine"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(165)
		if (((_g8 != null()))){
			HX_STACK_LINE(166)
			::openfl::_legacy::display::DisplayObject _g9 = this->getChildByName(HX_CSTRING("LDALine"));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(166)
			this->removeChild(_g9);
		}
		HX_STACK_LINE(168)
		::openfl::_legacy::display::DisplayObject _g10 = this->getChildByName(HX_CSTRING("INPLine"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(168)
		if (((_g10 != null()))){
			HX_STACK_LINE(169)
			::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName(HX_CSTRING("INPLine"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(169)
			this->removeChild(_g11);
		}
		HX_STACK_LINE(171)
		::openfl::_legacy::display::DisplayObject _g12 = this->getChildByName(HX_CSTRING("OUTLine"));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(171)
		if (((_g12 != null()))){
			HX_STACK_LINE(172)
			::openfl::_legacy::display::DisplayObject _g13 = this->getChildByName(HX_CSTRING("OUTLine"));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(172)
			this->removeChild(_g13);
		}
		HX_STACK_LINE(174)
		::openfl::_legacy::display::DisplayObject _g14 = this->getChildByName(HX_CSTRING("JELine"));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(174)
		if (((_g14 != null()))){
			HX_STACK_LINE(175)
			::openfl::_legacy::display::DisplayObject _g15 = this->getChildByName(HX_CSTRING("JELine"));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(175)
			this->removeChild(_g15);
		}
		HX_STACK_LINE(177)
		::openfl::_legacy::display::DisplayObject _g16 = this->getChildByName(HX_CSTRING("JNELine"));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(177)
		if (((_g16 != null()))){
			HX_STACK_LINE(178)
			::openfl::_legacy::display::DisplayObject _g17 = this->getChildByName(HX_CSTRING("JNELine"));		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(178)
			this->removeChild(_g17);
		}
		HX_STACK_LINE(180)
		::openfl::_legacy::display::DisplayObject _g18 = this->getChildByName(HX_CSTRING("JMPLine"));		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(180)
		if (((_g18 != null()))){
			HX_STACK_LINE(181)
			::openfl::_legacy::display::DisplayObject _g19 = this->getChildByName(HX_CSTRING("JMPLine"));		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(181)
			this->removeChild(_g19);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Comparator_obj,hideAllLines,(void))


Comparator_obj::Comparator_obj()
{
}

void Comparator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Comparator);
	HX_MARK_MEMBER_NAME(MOVLine,"MOVLine");
	HX_MARK_MEMBER_NAME(LDILine,"LDILine");
	HX_MARK_MEMBER_NAME(ALULine,"ALULine");
	HX_MARK_MEMBER_NAME(SDALine,"SDALine");
	HX_MARK_MEMBER_NAME(LDALine,"LDALine");
	HX_MARK_MEMBER_NAME(INPLine,"INPLine");
	HX_MARK_MEMBER_NAME(OUTLine,"OUTLine");
	HX_MARK_MEMBER_NAME(JELine,"JELine");
	HX_MARK_MEMBER_NAME(JNELine,"JNELine");
	HX_MARK_MEMBER_NAME(JMPLine,"JMPLine");
	HX_MARK_MEMBER_NAME(compStaticLines,"compStaticLines");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Comparator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(MOVLine,"MOVLine");
	HX_VISIT_MEMBER_NAME(LDILine,"LDILine");
	HX_VISIT_MEMBER_NAME(ALULine,"ALULine");
	HX_VISIT_MEMBER_NAME(SDALine,"SDALine");
	HX_VISIT_MEMBER_NAME(LDALine,"LDALine");
	HX_VISIT_MEMBER_NAME(INPLine,"INPLine");
	HX_VISIT_MEMBER_NAME(OUTLine,"OUTLine");
	HX_VISIT_MEMBER_NAME(JELine,"JELine");
	HX_VISIT_MEMBER_NAME(JNELine,"JNELine");
	HX_VISIT_MEMBER_NAME(JMPLine,"JMPLine");
	HX_VISIT_MEMBER_NAME(compStaticLines,"compStaticLines");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Comparator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"JELine") ) { return JELine; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MOVLine") ) { return MOVLine; }
		if (HX_FIELD_EQ(inName,"LDILine") ) { return LDILine; }
		if (HX_FIELD_EQ(inName,"ALULine") ) { return ALULine; }
		if (HX_FIELD_EQ(inName,"SDALine") ) { return SDALine; }
		if (HX_FIELD_EQ(inName,"LDALine") ) { return LDALine; }
		if (HX_FIELD_EQ(inName,"INPLine") ) { return INPLine; }
		if (HX_FIELD_EQ(inName,"OUTLine") ) { return OUTLine; }
		if (HX_FIELD_EQ(inName,"JNELine") ) { return JNELine; }
		if (HX_FIELD_EQ(inName,"JMPLine") ) { return JMPLine; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showLines") ) { return showLines_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideAllLines") ) { return hideAllLines_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"compStaticLines") ) { return compStaticLines; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"jeLoadCompleteHandler") ) { return jeLoadCompleteHandler_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"movLoadCompleteHandler") ) { return movLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"ldiLoadCompleteHandler") ) { return ldiLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"aluLoadCompleteHandler") ) { return aluLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"sdaLoadCompleteHandler") ) { return sdaLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"ldaLoadCompleteHandler") ) { return ldaLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"inpLoadCompleteHandler") ) { return inpLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"outLoadCompleteHandler") ) { return outLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"jneLoadCompleteHandler") ) { return jneLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"jmpLoadCompleteHandler") ) { return jmpLoadCompleteHandler_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"compStaticLinesLoadCompleteHandler") ) { return compStaticLinesLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Comparator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"JELine") ) { JELine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MOVLine") ) { MOVLine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LDILine") ) { LDILine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALULine") ) { ALULine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SDALine") ) { SDALine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LDALine") ) { LDALine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INPLine") ) { INPLine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUTLine") ) { OUTLine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JNELine") ) { JNELine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JMPLine") ) { JMPLine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"compStaticLines") ) { compStaticLines=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Comparator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("MOVLine"));
	outFields->push(HX_CSTRING("LDILine"));
	outFields->push(HX_CSTRING("ALULine"));
	outFields->push(HX_CSTRING("SDALine"));
	outFields->push(HX_CSTRING("LDALine"));
	outFields->push(HX_CSTRING("INPLine"));
	outFields->push(HX_CSTRING("OUTLine"));
	outFields->push(HX_CSTRING("JELine"));
	outFields->push(HX_CSTRING("JNELine"));
	outFields->push(HX_CSTRING("JMPLine"));
	outFields->push(HX_CSTRING("compStaticLines"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparator_obj,MOVLine),HX_CSTRING("MOVLine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparator_obj,LDILine),HX_CSTRING("LDILine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparator_obj,ALULine),HX_CSTRING("ALULine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparator_obj,SDALine),HX_CSTRING("SDALine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparator_obj,LDALine),HX_CSTRING("LDALine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparator_obj,INPLine),HX_CSTRING("INPLine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparator_obj,OUTLine),HX_CSTRING("OUTLine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparator_obj,JELine),HX_CSTRING("JELine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparator_obj,JNELine),HX_CSTRING("JNELine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparator_obj,JMPLine),HX_CSTRING("JMPLine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparator_obj,compStaticLines),HX_CSTRING("compStaticLines")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("MOVLine"),
	HX_CSTRING("LDILine"),
	HX_CSTRING("ALULine"),
	HX_CSTRING("SDALine"),
	HX_CSTRING("LDALine"),
	HX_CSTRING("INPLine"),
	HX_CSTRING("OUTLine"),
	HX_CSTRING("JELine"),
	HX_CSTRING("JNELine"),
	HX_CSTRING("JMPLine"),
	HX_CSTRING("compStaticLines"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("movLoadCompleteHandler"),
	HX_CSTRING("ldiLoadCompleteHandler"),
	HX_CSTRING("aluLoadCompleteHandler"),
	HX_CSTRING("sdaLoadCompleteHandler"),
	HX_CSTRING("ldaLoadCompleteHandler"),
	HX_CSTRING("inpLoadCompleteHandler"),
	HX_CSTRING("outLoadCompleteHandler"),
	HX_CSTRING("jeLoadCompleteHandler"),
	HX_CSTRING("jneLoadCompleteHandler"),
	HX_CSTRING("jmpLoadCompleteHandler"),
	HX_CSTRING("compStaticLinesLoadCompleteHandler"),
	HX_CSTRING("showLines"),
	HX_CSTRING("hideAllLines"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Comparator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Comparator_obj::__mClass,"__mClass");
};

#endif

Class Comparator_obj::__mClass;

void Comparator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.basis.Comparator"), hx::TCanCast< Comparator_obj> ,sStaticFields,sMemberFields,
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

void Comparator_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace basis
