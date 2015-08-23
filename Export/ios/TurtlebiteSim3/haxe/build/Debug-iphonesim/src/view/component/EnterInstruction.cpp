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
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormatAlign
#include <openfl/_legacy/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_utilities_NumberFormat
#include <utilities/NumberFormat.h>
#endif
#ifndef INCLUDED_view_component_EnterInstruction
#include <view/component/EnterInstruction.h>
#endif
#ifndef INCLUDED_view_elements_LabelButton
#include <view/elements/LabelButton.h>
#endif
#ifndef INCLUDED_view_elements_OpcodeMenu
#include <view/elements/OpcodeMenu.h>
#endif
#ifndef INCLUDED_view_elements_SimpleRectangle
#include <view/elements/SimpleRectangle.h>
#endif
namespace view{
namespace component{

Void EnterInstruction_obj::__construct(::model::vo::InstructionVO initialInstruction)
{
HX_STACK_FRAME("view.component.EnterInstruction","new",0xc2e17922,"view.component.EnterInstruction.new","view/component/EnterInstruction.hx",20,0xe2d6668c)
HX_STACK_THIS(this)
HX_STACK_ARG(initialInstruction,"initialInstruction")
{
	HX_STACK_LINE(36)
	this->posY = ((int)447 * ::AppConstants_obj::SCALE_FACTOR);
	HX_STACK_LINE(35)
	this->posX = ((int)309 * ::AppConstants_obj::SCALE_FACTOR);
	HX_STACK_LINE(41)
	super::__construct();
	HX_STACK_LINE(42)
	this->initialInstruction = initialInstruction;
	HX_STACK_LINE(43)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//EnterInstruction_obj::~EnterInstruction_obj() { }

Dynamic EnterInstruction_obj::__CreateEmpty() { return  new EnterInstruction_obj; }
hx::ObjectPtr< EnterInstruction_obj > EnterInstruction_obj::__new(::model::vo::InstructionVO initialInstruction)
{  hx::ObjectPtr< EnterInstruction_obj > result = new EnterInstruction_obj();
	result->__construct(initialInstruction);
	return result;}

Dynamic EnterInstruction_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnterInstruction_obj > result = new EnterInstruction_obj();
	result->__construct(inArgs[0]);
	return result;}

Void EnterInstruction_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.EnterInstruction","addedToStageHandler",0xe83ee469,"view.component.EnterInstruction.addedToStageHandler","view/component/EnterInstruction.hx",46,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(47)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(48)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		this->lines = _g;
		HX_STACK_LINE(49)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/enterInstruction_BG.png")),this->bgLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(50)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/enterInstruction_line0.png")),this->line0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(51)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/enterInstruction_line1.png")),this->line1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(52)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/enterInstruction_line2.png")),this->line2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(53)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/enterInstruction_line3.png")),this->line3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(54)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/enterInstruction_line4.png")),this->line4LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(55)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/enterInstruction_line5.png")),this->line5LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(56)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/enterInstruction_line6.png")),this->line6LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(57)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/enterInstruction_line7.png")),this->line7LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(58)
		::openfl::_legacy::display::Sprite _g1 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(58)
		this->linesContainer = _g1;
		HX_STACK_LINE(59)
		this->addChild(this->linesContainer);
		HX_STACK_LINE(60)
		this->createCloseButton();
		HX_STACK_LINE(61)
		this->createTfAssembler();
		HX_STACK_LINE(62)
		this->createLineButtons();
		HX_STACK_LINE(63)
		this->createOpcodeMenu();
		HX_STACK_LINE(64)
		this->createBarriere();
		HX_STACK_LINE(65)
		this->setInitialOutput();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,addedToStageHandler,(void))

Void EnterInstruction_obj::bgLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.EnterInstruction","bgLoadCompleteHandler",0x41e50b08,"view.component.EnterInstruction.bgLoadCompleteHandler","view/component/EnterInstruction.hx",68,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(69)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(69)
		this->bg = _g;
		HX_STACK_LINE(70)
		this->bg->set_name(HX_CSTRING("enterInstructionBg"));
		HX_STACK_LINE(71)
		this->bg->set_x(this->posX);
		HX_STACK_LINE(72)
		this->bg->set_y(this->posY);
		HX_STACK_LINE(73)
		Float _g1 = this->bg->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(73)
		this->bg->set_scaleX(_g1);
		HX_STACK_LINE(74)
		this->addChild(this->bg);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,bgLoadCompleteHandler,(void))

Void EnterInstruction_obj::line0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.EnterInstruction","line0LoadCompleteHandler",0xb4e36c2d,"view.component.EnterInstruction.line0LoadCompleteHandler","view/component/EnterInstruction.hx",77,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(78)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(79)
		this->lines[i] = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());
		HX_STACK_LINE(80)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_name((HX_CSTRING("enterInstructionLine") + i));
		HX_STACK_LINE(81)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_x(this->posX);
		HX_STACK_LINE(82)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_y(this->posY);
		HX_STACK_LINE(83)
		Float _g = this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleX(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,line0LoadCompleteHandler,(void))

Void EnterInstruction_obj::line1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.EnterInstruction","line1LoadCompleteHandler",0x1b4810cc,"view.component.EnterInstruction.line1LoadCompleteHandler","view/component/EnterInstruction.hx",86,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(87)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(88)
		this->lines[i] = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());
		HX_STACK_LINE(89)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_name((HX_CSTRING("enterInstructionLine") + i));
		HX_STACK_LINE(90)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_x(this->posX);
		HX_STACK_LINE(91)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_y(this->posY);
		HX_STACK_LINE(92)
		Float _g = this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(92)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleX(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,line1LoadCompleteHandler,(void))

Void EnterInstruction_obj::line2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.EnterInstruction","line2LoadCompleteHandler",0x81acb56b,"view.component.EnterInstruction.line2LoadCompleteHandler","view/component/EnterInstruction.hx",95,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(96)
		int i = (int)2;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(97)
		this->lines[i] = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());
		HX_STACK_LINE(98)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_name((HX_CSTRING("enterInstructionLine") + i));
		HX_STACK_LINE(99)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_x(this->posX);
		HX_STACK_LINE(100)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_y(this->posY);
		HX_STACK_LINE(101)
		Float _g = this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(101)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleX(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,line2LoadCompleteHandler,(void))

Void EnterInstruction_obj::line3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.EnterInstruction","line3LoadCompleteHandler",0xe8115a0a,"view.component.EnterInstruction.line3LoadCompleteHandler","view/component/EnterInstruction.hx",104,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(105)
		int i = (int)3;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(106)
		this->lines[i] = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());
		HX_STACK_LINE(107)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_name((HX_CSTRING("enterInstructionLine") + i));
		HX_STACK_LINE(108)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_x(this->posX);
		HX_STACK_LINE(109)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_y(this->posY);
		HX_STACK_LINE(110)
		Float _g = this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleX(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,line3LoadCompleteHandler,(void))

Void EnterInstruction_obj::line4LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.EnterInstruction","line4LoadCompleteHandler",0x4e75fea9,"view.component.EnterInstruction.line4LoadCompleteHandler","view/component/EnterInstruction.hx",113,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(114)
		int i = (int)4;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(115)
		this->lines[i] = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());
		HX_STACK_LINE(116)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_name((HX_CSTRING("enterInstructionLine") + i));
		HX_STACK_LINE(117)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_x(this->posX);
		HX_STACK_LINE(118)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_y(this->posY);
		HX_STACK_LINE(119)
		Float _g = this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(119)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleX(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,line4LoadCompleteHandler,(void))

Void EnterInstruction_obj::line5LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.EnterInstruction","line5LoadCompleteHandler",0xb4daa348,"view.component.EnterInstruction.line5LoadCompleteHandler","view/component/EnterInstruction.hx",122,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(123)
		int i = (int)5;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(124)
		this->lines[i] = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());
		HX_STACK_LINE(125)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_name((HX_CSTRING("enterInstructionLine") + i));
		HX_STACK_LINE(126)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_x(this->posX);
		HX_STACK_LINE(127)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_y(this->posY);
		HX_STACK_LINE(128)
		Float _g = this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(128)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleX(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,line5LoadCompleteHandler,(void))

Void EnterInstruction_obj::line6LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.EnterInstruction","line6LoadCompleteHandler",0x1b3f47e7,"view.component.EnterInstruction.line6LoadCompleteHandler","view/component/EnterInstruction.hx",131,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(132)
		int i = (int)6;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(133)
		this->lines[i] = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());
		HX_STACK_LINE(134)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_name((HX_CSTRING("enterInstructionLine") + i));
		HX_STACK_LINE(135)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_x(this->posX);
		HX_STACK_LINE(136)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_y(this->posY);
		HX_STACK_LINE(137)
		Float _g = this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleX(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,line6LoadCompleteHandler,(void))

Void EnterInstruction_obj::line7LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.EnterInstruction","line7LoadCompleteHandler",0x81a3ec86,"view.component.EnterInstruction.line7LoadCompleteHandler","view/component/EnterInstruction.hx",140,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(141)
		int i = (int)7;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(142)
		this->lines[i] = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());
		HX_STACK_LINE(143)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_name((HX_CSTRING("enterInstructionLine") + i));
		HX_STACK_LINE(144)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_x(this->posX);
		HX_STACK_LINE(145)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_y(this->posY);
		HX_STACK_LINE(146)
		Float _g = this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(146)
		this->lines->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleX(_g);
		HX_STACK_LINE(147)
		::events::AppEvent _g1 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(147)
		this->dispatchEvent(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,line7LoadCompleteHandler,(void))

Void EnterInstruction_obj::createTfAssembler( ){
{
		HX_STACK_FRAME("view.component.EnterInstruction","createTfAssembler",0xf0d315f4,"view.component.EnterInstruction.createTfAssembler","view/component/EnterInstruction.hx",150,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		::openfl::_legacy::display::Sprite _g = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(151)
		this->tfAssemblerContainer = _g;
		HX_STACK_LINE(153)
		::openfl::_legacy::text::TextField _g1 = this->getBasicTextField();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(153)
		this->tfAssemblerOpcode = _g1;
		HX_STACK_LINE(154)
		this->tfAssemblerOpcode->set_text(HX_CSTRING("NOP"));
		HX_STACK_LINE(155)
		this->tfAssemblerContainer->addChild(this->tfAssemblerOpcode);
		HX_STACK_LINE(157)
		::openfl::_legacy::text::TextField _g2 = this->getBasicTextField();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(157)
		this->tfAssemblerAddress = _g2;
		HX_STACK_LINE(158)
		Float _g3 = this->tfAssemblerOpcode->get_x();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(158)
		Float _g4 = this->tfAssemblerOpcode->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(158)
		Float _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(158)
		Float _g6 = (_g5 + ((int)4 * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(158)
		this->tfAssemblerAddress->set_x(_g6);
		HX_STACK_LINE(159)
		this->tfAssemblerAddress->set_text(HX_CSTRING(""));
		HX_STACK_LINE(160)
		this->tfAssemblerContainer->addChild(this->tfAssemblerAddress);
		HX_STACK_LINE(162)
		this->tfAssemblerContainer->set_x(((int)312 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(163)
		this->tfAssemblerContainer->set_y(((int)455 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(165)
		this->addChild(this->tfAssemblerContainer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnterInstruction_obj,createTfAssembler,(void))

Void EnterInstruction_obj::createLineButtons( ){
{
		HX_STACK_FRAME("view.component.EnterInstruction","createLineButtons",0xa23c9b53,"view.component.EnterInstruction.createLineButtons","view/component/EnterInstruction.hx",168,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		::openfl::_legacy::display::Sprite _g = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		this->lineButtonsContainer = _g;
		HX_STACK_LINE(170)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(170)
		this->lineButtons = _g1;
		HX_STACK_LINE(171)
		int id = (int)7;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(172)
			while((true)){
				HX_STACK_LINE(172)
				if ((!(((_g2 < (int)8))))){
					HX_STACK_LINE(172)
					break;
				}
				HX_STACK_LINE(172)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(173)
				this->lineButtons[i] = ::openfl::_legacy::display::Sprite_obj::__new();
				HX_STACK_LINE(174)
				::view::elements::SimpleRectangle s = ::view::elements::SimpleRectangle_obj::__new(((int)30 * ::AppConstants_obj::SCALE_FACTOR),((int)30 * ::AppConstants_obj::SCALE_FACTOR),(int)16711935,(int)0,null(),null());		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(175)
				this->lineButtons->__get(i).StaticCast< ::openfl::_legacy::display::Sprite >()->addChild(s);
				HX_STACK_LINE(176)
				this->lineButtons->__get(i).StaticCast< ::openfl::_legacy::display::Sprite >()->set_name((HX_CSTRING("lineButton") + id));
				HX_STACK_LINE(177)
				this->lineButtons->__get(i).StaticCast< ::openfl::_legacy::display::Sprite >()->buttonMode = true;
				HX_STACK_LINE(178)
				if (((i > (int)0))){
					HX_STACK_LINE(179)
					Float _g21 = this->lineButtons->__get((i - (int)1)).StaticCast< ::openfl::_legacy::display::Sprite >()->get_x();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(179)
					Float _g3 = this->lineButtons->__get((i - (int)1)).StaticCast< ::openfl::_legacy::display::Sprite >()->get_width();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(179)
					Float _g4 = (_g21 + _g3);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(179)
					Float _g5 = (_g4 + ((int)17 * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(179)
					this->lineButtons->__get(i).StaticCast< ::openfl::_legacy::display::Sprite >()->set_x(_g5);
				}
				HX_STACK_LINE(181)
				this->lineButtonsContainer->addChild(this->lineButtons->__get(i).StaticCast< ::openfl::_legacy::display::Sprite >());
				HX_STACK_LINE(182)
				(id)--;
			}
		}
		HX_STACK_LINE(185)
		this->lineButtons->__get((int)0).StaticCast< ::openfl::_legacy::display::Sprite >()->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton0Handler_dyn(),null(),null(),null());
		HX_STACK_LINE(186)
		this->lineButtons->__get((int)1).StaticCast< ::openfl::_legacy::display::Sprite >()->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton1Handler_dyn(),null(),null(),null());
		HX_STACK_LINE(187)
		this->lineButtons->__get((int)2).StaticCast< ::openfl::_legacy::display::Sprite >()->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton2Handler_dyn(),null(),null(),null());
		HX_STACK_LINE(188)
		this->lineButtons->__get((int)3).StaticCast< ::openfl::_legacy::display::Sprite >()->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton3Handler_dyn(),null(),null(),null());
		HX_STACK_LINE(189)
		this->lineButtons->__get((int)4).StaticCast< ::openfl::_legacy::display::Sprite >()->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton4Handler_dyn(),null(),null(),null());
		HX_STACK_LINE(190)
		this->lineButtons->__get((int)5).StaticCast< ::openfl::_legacy::display::Sprite >()->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton5Handler_dyn(),null(),null(),null());
		HX_STACK_LINE(191)
		this->lineButtons->__get((int)6).StaticCast< ::openfl::_legacy::display::Sprite >()->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton6Handler_dyn(),null(),null(),null());
		HX_STACK_LINE(192)
		this->lineButtons->__get((int)7).StaticCast< ::openfl::_legacy::display::Sprite >()->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton7Handler_dyn(),null(),null(),null());
		HX_STACK_LINE(193)
		this->lineButtonsContainer->set_x(((int)325 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(194)
		this->lineButtonsContainer->set_y(((int)512 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(195)
		this->addChild(this->lineButtonsContainer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnterInstruction_obj,createLineButtons,(void))

Void EnterInstruction_obj::createCloseButton( ){
{
		HX_STACK_FRAME("view.component.EnterInstruction","createCloseButton",0x2da41a70,"view.component.EnterInstruction.createCloseButton","view/component/EnterInstruction.hx",198,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(199)
		::view::elements::LabelButton _g = ::view::elements::LabelButton_obj::__new((int)100,HX_CSTRING("Schliessen"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		this->closeButton = _g;
		HX_STACK_LINE(200)
		Float _g1 = this->bg->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(200)
		Float _g2 = this->bg->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(200)
		Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(200)
		Float _g4 = (_g3 - ((int)100 * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(200)
		this->closeButton->set_x(_g4);
		HX_STACK_LINE(201)
		Float _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			Float a = this->bg->get_y();		HX_STACK_VAR(a,"a");
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EnterInstruction.hx",201,0xe2d6668c)
					{
						HX_STACK_LINE(201)
						int _int;		HX_STACK_VAR(_int,"int");
						struct _Function_3_1{
							inline static Float Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EnterInstruction.hx",201,0xe2d6668c)
								{
									HX_STACK_LINE(201)
									int int1 = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(int1,"int1");
									HX_STACK_LINE(201)
									return (  (((int1 < (int)0))) ? Float((4294967296.0 + int1)) : Float((int1 + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(201)
						_int = _Function_3_1::Block();
						HX_STACK_LINE(201)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(201)
			_g5 = (a - _Function_2_1::Block());
		}
		HX_STACK_LINE(201)
		this->closeButton->set_y(_g5);
		HX_STACK_LINE(202)
		this->closeButton->addEventListener(::events::AppEvent_obj::DATA,this->closeButtonHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(203)
		this->addChild(this->closeButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnterInstruction_obj,createCloseButton,(void))

Void EnterInstruction_obj::createBarriere( ){
{
		HX_STACK_FRAME("view.component.EnterInstruction","createBarriere",0xc8d24ae8,"view.component.EnterInstruction.createBarriere","view/component/EnterInstruction.hx",206,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(207)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(((int)100 * ::AppConstants_obj::SCALE_FACTOR),((int)5 * ::AppConstants_obj::SCALE_FACTOR),(int)14483456,null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		this->barriere = _g;
		HX_STACK_LINE(208)
		Float _g1 = this->bg->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(208)
		Float _g2 = this->bg->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(208)
		Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(208)
		Float _g4 = (_g1 + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(208)
		Float _g5 = this->barriere->get_width();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(208)
		Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(208)
		Float _g7 = (_g4 - _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(208)
		this->barriere->set_x(_g7);
		HX_STACK_LINE(209)
		Float _g8 = this->bg->get_y();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(209)
		Float _g9 = this->bg->get_height();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(209)
		Float _g10 = (_g8 + _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(209)
		Float _g11 = (_g10 - ((int)2 * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(209)
		this->barriere->set_y(_g11);
		HX_STACK_LINE(210)
		this->barriere->set_visible(false);
		HX_STACK_LINE(211)
		this->addChild(this->barriere);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnterInstruction_obj,createBarriere,(void))

Void EnterInstruction_obj::createOpcodeMenu( ){
{
		HX_STACK_FRAME("view.component.EnterInstruction","createOpcodeMenu",0x8b23aba7,"view.component.EnterInstruction.createOpcodeMenu","view/component/EnterInstruction.hx",214,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(215)
		::view::elements::OpcodeMenu _g = ::view::elements::OpcodeMenu_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(215)
		this->opcodeMenu = _g;
		HX_STACK_LINE(216)
		this->opcodeMenu->set_x((this->posX - ((int)110 * ::AppConstants_obj::SCALE_FACTOR)));
		struct _Function_1_1{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EnterInstruction.hx",217,0xe2d6668c)
				{
					HX_STACK_LINE(217)
					int _int;		HX_STACK_VAR(_int,"int");
					struct _Function_2_1{
						inline static Float Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EnterInstruction.hx",217,0xe2d6668c)
							{
								HX_STACK_LINE(217)
								int int1 = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(int1,"int1");
								HX_STACK_LINE(217)
								return (  (((int1 < (int)0))) ? Float((4294967296.0 + int1)) : Float((int1 + 0.0)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(217)
					_int = _Function_2_1::Block();
					HX_STACK_LINE(217)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(217)
		this->opcodeMenu->set_y((this->posY - _Function_1_1::Block()));
		HX_STACK_LINE(218)
		this->opcodeMenu->set_visible(false);
		HX_STACK_LINE(219)
		this->opcodeMenu->addEventListener(::events::AppEvent_obj::DATA,this->opcodeMenuHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(220)
		this->addChild(this->opcodeMenu);
		HX_STACK_LINE(221)
		::openfl::_legacy::display::Sprite _g1 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(221)
		this->opcodeMenuButton = _g1;
		HX_STACK_LINE(222)
		Float _g2 = this->tfAssemblerOpcode->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(222)
		::view::elements::SimpleRectangle s = ::view::elements::SimpleRectangle_obj::__new(_g2,((int)48 * ::AppConstants_obj::SCALE_FACTOR),(int)16711935,(int)0,null(),null());		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(223)
		this->opcodeMenuButton->addChild(s);
		HX_STACK_LINE(224)
		this->opcodeMenuButton->buttonMode = true;
		HX_STACK_LINE(225)
		this->opcodeMenuButton->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->opcodeMenuButtonHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(226)
		Float _g3 = this->tfAssemblerContainer->get_x();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(226)
		Float _g4 = this->tfAssemblerOpcode->get_x();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(226)
		Float _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(226)
		this->opcodeMenuButton->set_x(_g5);
		HX_STACK_LINE(227)
		Float _g6 = this->tfAssemblerContainer->get_y();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(227)
		Float _g7 = this->tfAssemblerOpcode->get_y();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(227)
		Float _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(227)
		Float _g9 = (_g8 - ((int)5 * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(227)
		this->opcodeMenuButton->set_y(_g9);
		HX_STACK_LINE(228)
		this->addChild(this->opcodeMenuButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnterInstruction_obj,createOpcodeMenu,(void))

Void EnterInstruction_obj::opcodeMenuButtonHandler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.EnterInstruction","opcodeMenuButtonHandler",0x46c101ed,"view.component.EnterInstruction.opcodeMenuButtonHandler","view/component/EnterInstruction.hx",231,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(232)
		bool _g = !(this->opcodeMenu->get_visible());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		this->opcodeMenu->set_visible(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,opcodeMenuButtonHandler,(void))

Void EnterInstruction_obj::opcodeMenuHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.component.EnterInstruction","opcodeMenuHandler",0xe501a3ff,"view.component.EnterInstruction.opcodeMenuHandler","view/component/EnterInstruction.hx",235,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(236)
		this->opcodeMenu->set_visible(false);
		HX_STACK_LINE(237)
		this->barriere->set_visible(true);
		struct _Function_1_1{
			inline static Dynamic Block( ::events::AppEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EnterInstruction.hx",238,0xe2d6668c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , HX_CSTRING("opcodeMenu"),false);
					__result->Add(HX_CSTRING("opcode") , event->data->__Field(HX_CSTRING("opcode"),true),false);
					__result->Add(HX_CSTRING("address") , event->data->__Field(HX_CSTRING("address"),true),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(238)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(event),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(238)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,opcodeMenuHandler,(void))

Void EnterInstruction_obj::lineButton0Handler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.EnterInstruction","lineButton0Handler",0x998091fe,"view.component.EnterInstruction.lineButton0Handler","view/component/EnterInstruction.hx",245,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(245)
		this->lineButtonsHandler((int)7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,lineButton0Handler,(void))

Void EnterInstruction_obj::lineButton1Handler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.EnterInstruction","lineButton1Handler",0xd2b3041d,"view.component.EnterInstruction.lineButton1Handler","view/component/EnterInstruction.hx",248,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(248)
		this->lineButtonsHandler((int)6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,lineButton1Handler,(void))

Void EnterInstruction_obj::lineButton2Handler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.EnterInstruction","lineButton2Handler",0x0be5763c,"view.component.EnterInstruction.lineButton2Handler","view/component/EnterInstruction.hx",251,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(251)
		this->lineButtonsHandler((int)5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,lineButton2Handler,(void))

Void EnterInstruction_obj::lineButton3Handler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.EnterInstruction","lineButton3Handler",0x4517e85b,"view.component.EnterInstruction.lineButton3Handler","view/component/EnterInstruction.hx",254,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(254)
		this->lineButtonsHandler((int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,lineButton3Handler,(void))

Void EnterInstruction_obj::lineButton4Handler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.EnterInstruction","lineButton4Handler",0x7e4a5a7a,"view.component.EnterInstruction.lineButton4Handler","view/component/EnterInstruction.hx",257,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(257)
		this->lineButtonsHandler((int)3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,lineButton4Handler,(void))

Void EnterInstruction_obj::lineButton5Handler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.EnterInstruction","lineButton5Handler",0xb77ccc99,"view.component.EnterInstruction.lineButton5Handler","view/component/EnterInstruction.hx",260,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(260)
		this->lineButtonsHandler((int)2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,lineButton5Handler,(void))

Void EnterInstruction_obj::lineButton6Handler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.EnterInstruction","lineButton6Handler",0xf0af3eb8,"view.component.EnterInstruction.lineButton6Handler","view/component/EnterInstruction.hx",263,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(263)
		this->lineButtonsHandler((int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,lineButton6Handler,(void))

Void EnterInstruction_obj::lineButton7Handler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.EnterInstruction","lineButton7Handler",0x29e1b0d7,"view.component.EnterInstruction.lineButton7Handler","view/component/EnterInstruction.hx",266,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(266)
		this->lineButtonsHandler((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,lineButton7Handler,(void))

Void EnterInstruction_obj::lineButtonsHandler( int id){
{
		HX_STACK_FRAME("view.component.EnterInstruction","lineButtonsHandler",0x91b4701b,"view.component.EnterInstruction.lineButtonsHandler","view/component/EnterInstruction.hx",269,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(270)
		bool on = false;		HX_STACK_VAR(on,"on");
		HX_STACK_LINE(271)
		::openfl::_legacy::display::DisplayObject _g = this->linesContainer->getChildByName((HX_CSTRING("enterInstructionLine") + id));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(271)
		if (((_g != null()))){
			HX_STACK_LINE(272)
			on = true;
		}
		HX_STACK_LINE(274)
		this->barriere->set_visible(true);
		struct _Function_1_1{
			inline static Dynamic Block( int &id,bool &on){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EnterInstruction.hx",275,0xe2d6668c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , id,false);
					__result->Add(HX_CSTRING("on") , on,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(275)
		::events::AppEvent _g1 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(id,on),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(275)
		this->dispatchEvent(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,lineButtonsHandler,(void))

Void EnterInstruction_obj::closeButtonHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.component.EnterInstruction","closeButtonHandler",0xd281be9e,"view.component.EnterInstruction.closeButtonHandler","view/component/EnterInstruction.hx",278,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EnterInstruction.hx",279,0xe2d6668c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , HX_CSTRING("closeButton"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(279)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(279)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,closeButtonHandler,(void))

::openfl::_legacy::text::TextField EnterInstruction_obj::getBasicTextField( ){
	HX_STACK_FRAME("view.component.EnterInstruction","getBasicTextField",0xa9e87bb7,"view.component.EnterInstruction.getBasicTextField","view/component/EnterInstruction.hx",282,0xe2d6668c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(283)
	::openfl::_legacy::text::TextField tf = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(284)
	::openfl::_legacy::text::TextFormat _g = ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Consolas Bold"),((int)40 * ::AppConstants_obj::SCALE_FACTOR),(int)16777215,null(),null(),null(),null(),null(),::openfl::_legacy::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(284)
	tf->set_defaultTextFormat(_g);
	HX_STACK_LINE(285)
	tf->set_embedFonts(true);
	HX_STACK_LINE(286)
	tf->set_selectable(false);
	HX_STACK_LINE(287)
	tf->set_width(((int)190 * ::AppConstants_obj::SCALE_FACTOR));
	HX_STACK_LINE(288)
	tf->set_height(((int)50 * ::AppConstants_obj::SCALE_FACTOR));
	HX_STACK_LINE(289)
	return tf;
}


HX_DEFINE_DYNAMIC_FUNC0(EnterInstruction_obj,getBasicTextField,return )

Void EnterInstruction_obj::setInitialOutput( ){
{
		HX_STACK_FRAME("view.component.EnterInstruction","setInitialOutput",0xc636eba1,"view.component.EnterInstruction.setInitialOutput","view/component/EnterInstruction.hx",292,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(293)
		this->setTfOpcode(this->initialInstruction->asmOpcode);
		HX_STACK_LINE(294)
		this->setTfAddress(this->initialInstruction->asmAddress);
		HX_STACK_LINE(295)
		this->showLines(this->initialInstruction->codeOpcode,this->initialInstruction->codeAddress);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnterInstruction_obj,setInitialOutput,(void))

::String EnterInstruction_obj::getOpcode( ){
	HX_STACK_FRAME("view.component.EnterInstruction","getOpcode",0xe018e646,"view.component.EnterInstruction.getOpcode","view/component/EnterInstruction.hx",303,0xe2d6668c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(304)
	::String t = HX_CSTRING("");		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(305)
	{
		HX_STACK_LINE(305)
		int _g = (int)4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(305)
		while((true)){
			HX_STACK_LINE(305)
			if ((!(((_g < (int)8))))){
				HX_STACK_LINE(305)
				break;
			}
			HX_STACK_LINE(305)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(306)
			::openfl::_legacy::display::DisplayObject _g1 = this->linesContainer->getChildByName((HX_CSTRING("enterInstructionLine") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(306)
			if (((_g1 == null()))){
				HX_STACK_LINE(307)
				t = (HX_CSTRING("0") + t);
			}
			else{
				HX_STACK_LINE(309)
				t = (HX_CSTRING("1") + t);
			}
		}
	}
	HX_STACK_LINE(312)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC0(EnterInstruction_obj,getOpcode,return )

::String EnterInstruction_obj::getAddress( ){
	HX_STACK_FRAME("view.component.EnterInstruction","getAddress",0xb89ecb3c,"view.component.EnterInstruction.getAddress","view/component/EnterInstruction.hx",315,0xe2d6668c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(316)
	::String t = HX_CSTRING("");		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(317)
	{
		HX_STACK_LINE(317)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(317)
		while((true)){
			HX_STACK_LINE(317)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(317)
				break;
			}
			HX_STACK_LINE(317)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(318)
			::openfl::_legacy::display::DisplayObject _g1 = this->linesContainer->getChildByName((HX_CSTRING("enterInstructionLine") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(318)
			if (((_g1 == null()))){
				HX_STACK_LINE(319)
				t = (HX_CSTRING("0") + t);
			}
			else{
				HX_STACK_LINE(321)
				t = (HX_CSTRING("1") + t);
			}
		}
	}
	HX_STACK_LINE(324)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC0(EnterInstruction_obj,getAddress,return )

Void EnterInstruction_obj::setTfOpcode( ::String value){
{
		HX_STACK_FRAME("view.component.EnterInstruction","setTfOpcode",0xe1083664,"view.component.EnterInstruction.setTfOpcode","view/component/EnterInstruction.hx",328,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(328)
		this->tfAssemblerOpcode->set_text(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,setTfOpcode,(void))

Void EnterInstruction_obj::setTfAddress( ::String value){
{
		HX_STACK_FRAME("view.component.EnterInstruction","setTfAddress",0x8915955e,"view.component.EnterInstruction.setTfAddress","view/component/EnterInstruction.hx",332,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(332)
		this->tfAssemblerAddress->set_text(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,setTfAddress,(void))

Void EnterInstruction_obj::hideBarriere( ){
{
		HX_STACK_FRAME("view.component.EnterInstruction","hideBarriere",0x80f5132e,"view.component.EnterInstruction.hideBarriere","view/component/EnterInstruction.hx",336,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(336)
		this->barriere->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnterInstruction_obj,hideBarriere,(void))

Void EnterInstruction_obj::showLines( ::String opcode,::String address){
{
		HX_STACK_FRAME("view.component.EnterInstruction","showLines",0xe6e5ea04,"view.component.EnterInstruction.showLines","view/component/EnterInstruction.hx",339,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(opcode,"opcode")
		HX_STACK_ARG(address,"address")
		HX_STACK_LINE(340)
		Array< bool > codeArr = ::utilities::NumberFormat_obj::binaryToArray(((opcode + HX_CSTRING("")) + address),null());		HX_STACK_VAR(codeArr,"codeArr");
		HX_STACK_LINE(341)
		int pos = (int)7;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(342)
			while((true)){
				HX_STACK_LINE(342)
				if ((!(((_g < (int)8))))){
					HX_STACK_LINE(342)
					break;
				}
				HX_STACK_LINE(342)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(343)
				::openfl::_legacy::display::DisplayObject _g1 = this->linesContainer->getChildByName((HX_CSTRING("enterInstructionLine") + pos));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(343)
				if (((_g1 == null()))){
					HX_STACK_LINE(344)
					if ((codeArr->__get(i))){
						HX_STACK_LINE(345)
						this->linesContainer->addChild(this->lines->__get(pos).StaticCast< ::openfl::_legacy::display::Bitmap >());
					}
				}
				else{
					HX_STACK_LINE(347)
					if ((!(codeArr->__get(i)))){
						HX_STACK_LINE(348)
						this->linesContainer->removeChild(this->lines->__get(pos).StaticCast< ::openfl::_legacy::display::Bitmap >());
					}
				}
				HX_STACK_LINE(350)
				(pos)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(EnterInstruction_obj,showLines,(void))

Void EnterInstruction_obj::showLine( int id){
{
		HX_STACK_FRAME("view.component.EnterInstruction","showLine",0x1367338f,"view.component.EnterInstruction.showLine","view/component/EnterInstruction.hx",354,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(355)
		::openfl::_legacy::display::DisplayObject _g = this->linesContainer->getChildByName((HX_CSTRING("enterInstructionLine") + id));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(355)
		if (((_g == null()))){
			HX_STACK_LINE(356)
			this->linesContainer->addChild(this->lines->__get(id).StaticCast< ::openfl::_legacy::display::Bitmap >());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,showLine,(void))

Void EnterInstruction_obj::hideLine( int id){
{
		HX_STACK_FRAME("view.component.EnterInstruction","hideLine",0x04ae59d4,"view.component.EnterInstruction.hideLine","view/component/EnterInstruction.hx",360,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(361)
		::openfl::_legacy::display::DisplayObject _g = this->linesContainer->getChildByName((HX_CSTRING("enterInstructionLine") + id));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(361)
		if (((_g != null()))){
			HX_STACK_LINE(362)
			this->linesContainer->removeChild(this->lines->__get(id).StaticCast< ::openfl::_legacy::display::Bitmap >());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstruction_obj,hideLine,(void))

Void EnterInstruction_obj::destroy( ){
{
		HX_STACK_FRAME("view.component.EnterInstruction","destroy",0xb6c45ebc,"view.component.EnterInstruction.destroy","view/component/EnterInstruction.hx",366,0xe2d6668c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(367)
		this->removeChild(this->bg);
		HX_STACK_LINE(368)
		this->closeButton->destroy();
		HX_STACK_LINE(369)
		this->removeChild(this->closeButton);
		HX_STACK_LINE(370)
		this->removeChild(this->barriere);
		HX_STACK_LINE(371)
		this->lineButtons->__get((int)0).StaticCast< ::openfl::_legacy::display::Sprite >()->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton0Handler_dyn(),null());
		HX_STACK_LINE(372)
		this->lineButtons->__get((int)1).StaticCast< ::openfl::_legacy::display::Sprite >()->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton1Handler_dyn(),null());
		HX_STACK_LINE(373)
		this->lineButtons->__get((int)2).StaticCast< ::openfl::_legacy::display::Sprite >()->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton2Handler_dyn(),null());
		HX_STACK_LINE(374)
		this->lineButtons->__get((int)3).StaticCast< ::openfl::_legacy::display::Sprite >()->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton3Handler_dyn(),null());
		HX_STACK_LINE(375)
		this->lineButtons->__get((int)4).StaticCast< ::openfl::_legacy::display::Sprite >()->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton4Handler_dyn(),null());
		HX_STACK_LINE(376)
		this->lineButtons->__get((int)5).StaticCast< ::openfl::_legacy::display::Sprite >()->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton5Handler_dyn(),null());
		HX_STACK_LINE(377)
		this->lineButtons->__get((int)6).StaticCast< ::openfl::_legacy::display::Sprite >()->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton6Handler_dyn(),null());
		HX_STACK_LINE(378)
		this->lineButtons->__get((int)7).StaticCast< ::openfl::_legacy::display::Sprite >()->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->lineButton7Handler_dyn(),null());
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(379)
			while((true)){
				HX_STACK_LINE(379)
				if ((!(((_g < (int)8))))){
					HX_STACK_LINE(379)
					break;
				}
				HX_STACK_LINE(379)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(380)
				::openfl::_legacy::display::DisplayObject _g1 = this->linesContainer->getChildByName((HX_CSTRING("enterInstructionLine") + i));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(380)
				if (((_g1 != null()))){
					HX_STACK_LINE(381)
					::openfl::_legacy::display::DisplayObject _g11 = this->linesContainer->getChildByName((HX_CSTRING("enterInstructionLine") + i));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(381)
					this->linesContainer->removeChild(_g11);
				}
				HX_STACK_LINE(383)
				this->lineButtonsContainer->removeChild(this->lineButtons->__get(i).StaticCast< ::openfl::_legacy::display::Sprite >());
			}
		}
		HX_STACK_LINE(385)
		this->removeChild(this->lineButtonsContainer);
		HX_STACK_LINE(386)
		this->removeChild(this->linesContainer);
		HX_STACK_LINE(387)
		this->tfAssemblerContainer->removeChild(this->tfAssemblerOpcode);
		HX_STACK_LINE(388)
		this->tfAssemblerContainer->removeChild(this->tfAssemblerAddress);
		HX_STACK_LINE(389)
		this->removeChild(this->tfAssemblerContainer);
		HX_STACK_LINE(390)
		this->opcodeMenu->destroy();
		HX_STACK_LINE(391)
		this->removeChild(this->opcodeMenu);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnterInstruction_obj,destroy,(void))


EnterInstruction_obj::EnterInstruction_obj()
{
}

void EnterInstruction_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnterInstruction);
	HX_MARK_MEMBER_NAME(initialInstruction,"initialInstruction");
	HX_MARK_MEMBER_NAME(selectedButtonID,"selectedButtonID");
	HX_MARK_MEMBER_NAME(lineButtons,"lineButtons");
	HX_MARK_MEMBER_NAME(lineButtonsContainer,"lineButtonsContainer");
	HX_MARK_MEMBER_NAME(closeButton,"closeButton");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(linesContainer,"linesContainer");
	HX_MARK_MEMBER_NAME(tfAssemblerOpcode,"tfAssemblerOpcode");
	HX_MARK_MEMBER_NAME(opcodeMenuButton,"opcodeMenuButton");
	HX_MARK_MEMBER_NAME(tfAssemblerAddress,"tfAssemblerAddress");
	HX_MARK_MEMBER_NAME(tfAssemblerContainer,"tfAssemblerContainer");
	HX_MARK_MEMBER_NAME(codeArr,"codeArr");
	HX_MARK_MEMBER_NAME(posX,"posX");
	HX_MARK_MEMBER_NAME(posY,"posY");
	HX_MARK_MEMBER_NAME(opcodeMenu,"opcodeMenu");
	HX_MARK_MEMBER_NAME(barriere,"barriere");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EnterInstruction_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(initialInstruction,"initialInstruction");
	HX_VISIT_MEMBER_NAME(selectedButtonID,"selectedButtonID");
	HX_VISIT_MEMBER_NAME(lineButtons,"lineButtons");
	HX_VISIT_MEMBER_NAME(lineButtonsContainer,"lineButtonsContainer");
	HX_VISIT_MEMBER_NAME(closeButton,"closeButton");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(linesContainer,"linesContainer");
	HX_VISIT_MEMBER_NAME(tfAssemblerOpcode,"tfAssemblerOpcode");
	HX_VISIT_MEMBER_NAME(opcodeMenuButton,"opcodeMenuButton");
	HX_VISIT_MEMBER_NAME(tfAssemblerAddress,"tfAssemblerAddress");
	HX_VISIT_MEMBER_NAME(tfAssemblerContainer,"tfAssemblerContainer");
	HX_VISIT_MEMBER_NAME(codeArr,"codeArr");
	HX_VISIT_MEMBER_NAME(posX,"posX");
	HX_VISIT_MEMBER_NAME(posY,"posY");
	HX_VISIT_MEMBER_NAME(opcodeMenu,"opcodeMenu");
	HX_VISIT_MEMBER_NAME(barriere,"barriere");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EnterInstruction_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return bg; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { return posX; }
		if (HX_FIELD_EQ(inName,"posY") ) { return posY; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { return lines; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"codeArr") ) { return codeArr; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barriere") ) { return barriere; }
		if (HX_FIELD_EQ(inName,"showLine") ) { return showLine_dyn(); }
		if (HX_FIELD_EQ(inName,"hideLine") ) { return hideLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getOpcode") ) { return getOpcode_dyn(); }
		if (HX_FIELD_EQ(inName,"showLines") ) { return showLines_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"opcodeMenu") ) { return opcodeMenu; }
		if (HX_FIELD_EQ(inName,"getAddress") ) { return getAddress_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lineButtons") ) { return lineButtons; }
		if (HX_FIELD_EQ(inName,"closeButton") ) { return closeButton; }
		if (HX_FIELD_EQ(inName,"setTfOpcode") ) { return setTfOpcode_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setTfAddress") ) { return setTfAddress_dyn(); }
		if (HX_FIELD_EQ(inName,"hideBarriere") ) { return hideBarriere_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"linesContainer") ) { return linesContainer; }
		if (HX_FIELD_EQ(inName,"createBarriere") ) { return createBarriere_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedButtonID") ) { return selectedButtonID; }
		if (HX_FIELD_EQ(inName,"opcodeMenuButton") ) { return opcodeMenuButton; }
		if (HX_FIELD_EQ(inName,"createOpcodeMenu") ) { return createOpcodeMenu_dyn(); }
		if (HX_FIELD_EQ(inName,"setInitialOutput") ) { return setInitialOutput_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tfAssemblerOpcode") ) { return tfAssemblerOpcode; }
		if (HX_FIELD_EQ(inName,"createTfAssembler") ) { return createTfAssembler_dyn(); }
		if (HX_FIELD_EQ(inName,"createLineButtons") ) { return createLineButtons_dyn(); }
		if (HX_FIELD_EQ(inName,"createCloseButton") ) { return createCloseButton_dyn(); }
		if (HX_FIELD_EQ(inName,"opcodeMenuHandler") ) { return opcodeMenuHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"getBasicTextField") ) { return getBasicTextField_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"initialInstruction") ) { return initialInstruction; }
		if (HX_FIELD_EQ(inName,"tfAssemblerAddress") ) { return tfAssemblerAddress; }
		if (HX_FIELD_EQ(inName,"lineButton0Handler") ) { return lineButton0Handler_dyn(); }
		if (HX_FIELD_EQ(inName,"lineButton1Handler") ) { return lineButton1Handler_dyn(); }
		if (HX_FIELD_EQ(inName,"lineButton2Handler") ) { return lineButton2Handler_dyn(); }
		if (HX_FIELD_EQ(inName,"lineButton3Handler") ) { return lineButton3Handler_dyn(); }
		if (HX_FIELD_EQ(inName,"lineButton4Handler") ) { return lineButton4Handler_dyn(); }
		if (HX_FIELD_EQ(inName,"lineButton5Handler") ) { return lineButton5Handler_dyn(); }
		if (HX_FIELD_EQ(inName,"lineButton6Handler") ) { return lineButton6Handler_dyn(); }
		if (HX_FIELD_EQ(inName,"lineButton7Handler") ) { return lineButton7Handler_dyn(); }
		if (HX_FIELD_EQ(inName,"lineButtonsHandler") ) { return lineButtonsHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"closeButtonHandler") ) { return closeButtonHandler_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lineButtonsContainer") ) { return lineButtonsContainer; }
		if (HX_FIELD_EQ(inName,"tfAssemblerContainer") ) { return tfAssemblerContainer; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"bgLoadCompleteHandler") ) { return bgLoadCompleteHandler_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"opcodeMenuButtonHandler") ) { return opcodeMenuButtonHandler_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"line0LoadCompleteHandler") ) { return line0LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"line1LoadCompleteHandler") ) { return line1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"line2LoadCompleteHandler") ) { return line2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"line3LoadCompleteHandler") ) { return line3LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"line4LoadCompleteHandler") ) { return line4LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"line5LoadCompleteHandler") ) { return line5LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"line6LoadCompleteHandler") ) { return line6LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"line7LoadCompleteHandler") ) { return line7LoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnterInstruction_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { posX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posY") ) { posY=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { lines=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"codeArr") ) { codeArr=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barriere") ) { barriere=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"opcodeMenu") ) { opcodeMenu=inValue.Cast< ::view::elements::OpcodeMenu >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lineButtons") ) { lineButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"closeButton") ) { closeButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"linesContainer") ) { linesContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedButtonID") ) { selectedButtonID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opcodeMenuButton") ) { opcodeMenuButton=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tfAssemblerOpcode") ) { tfAssemblerOpcode=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"initialInstruction") ) { initialInstruction=inValue.Cast< ::model::vo::InstructionVO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tfAssemblerAddress") ) { tfAssemblerAddress=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lineButtonsContainer") ) { lineButtonsContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tfAssemblerContainer") ) { tfAssemblerContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnterInstruction_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("initialInstruction"));
	outFields->push(HX_CSTRING("selectedButtonID"));
	outFields->push(HX_CSTRING("lineButtons"));
	outFields->push(HX_CSTRING("lineButtonsContainer"));
	outFields->push(HX_CSTRING("closeButton"));
	outFields->push(HX_CSTRING("bg"));
	outFields->push(HX_CSTRING("lines"));
	outFields->push(HX_CSTRING("linesContainer"));
	outFields->push(HX_CSTRING("tfAssemblerOpcode"));
	outFields->push(HX_CSTRING("opcodeMenuButton"));
	outFields->push(HX_CSTRING("tfAssemblerAddress"));
	outFields->push(HX_CSTRING("tfAssemblerContainer"));
	outFields->push(HX_CSTRING("codeArr"));
	outFields->push(HX_CSTRING("posX"));
	outFields->push(HX_CSTRING("posY"));
	outFields->push(HX_CSTRING("opcodeMenu"));
	outFields->push(HX_CSTRING("barriere"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::vo::InstructionVO*/ ,(int)offsetof(EnterInstruction_obj,initialInstruction),HX_CSTRING("initialInstruction")},
	{hx::fsInt,(int)offsetof(EnterInstruction_obj,selectedButtonID),HX_CSTRING("selectedButtonID")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(EnterInstruction_obj,lineButtons),HX_CSTRING("lineButtons")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(EnterInstruction_obj,lineButtonsContainer),HX_CSTRING("lineButtonsContainer")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(EnterInstruction_obj,closeButton),HX_CSTRING("closeButton")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(EnterInstruction_obj,bg),HX_CSTRING("bg")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(EnterInstruction_obj,lines),HX_CSTRING("lines")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(EnterInstruction_obj,linesContainer),HX_CSTRING("linesContainer")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(EnterInstruction_obj,tfAssemblerOpcode),HX_CSTRING("tfAssemblerOpcode")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(EnterInstruction_obj,opcodeMenuButton),HX_CSTRING("opcodeMenuButton")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(EnterInstruction_obj,tfAssemblerAddress),HX_CSTRING("tfAssemblerAddress")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(EnterInstruction_obj,tfAssemblerContainer),HX_CSTRING("tfAssemblerContainer")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(EnterInstruction_obj,codeArr),HX_CSTRING("codeArr")},
	{hx::fsFloat,(int)offsetof(EnterInstruction_obj,posX),HX_CSTRING("posX")},
	{hx::fsFloat,(int)offsetof(EnterInstruction_obj,posY),HX_CSTRING("posY")},
	{hx::fsObject /*::view::elements::OpcodeMenu*/ ,(int)offsetof(EnterInstruction_obj,opcodeMenu),HX_CSTRING("opcodeMenu")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(EnterInstruction_obj,barriere),HX_CSTRING("barriere")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("initialInstruction"),
	HX_CSTRING("selectedButtonID"),
	HX_CSTRING("lineButtons"),
	HX_CSTRING("lineButtonsContainer"),
	HX_CSTRING("closeButton"),
	HX_CSTRING("bg"),
	HX_CSTRING("lines"),
	HX_CSTRING("linesContainer"),
	HX_CSTRING("tfAssemblerOpcode"),
	HX_CSTRING("opcodeMenuButton"),
	HX_CSTRING("tfAssemblerAddress"),
	HX_CSTRING("tfAssemblerContainer"),
	HX_CSTRING("codeArr"),
	HX_CSTRING("posX"),
	HX_CSTRING("posY"),
	HX_CSTRING("opcodeMenu"),
	HX_CSTRING("barriere"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("bgLoadCompleteHandler"),
	HX_CSTRING("line0LoadCompleteHandler"),
	HX_CSTRING("line1LoadCompleteHandler"),
	HX_CSTRING("line2LoadCompleteHandler"),
	HX_CSTRING("line3LoadCompleteHandler"),
	HX_CSTRING("line4LoadCompleteHandler"),
	HX_CSTRING("line5LoadCompleteHandler"),
	HX_CSTRING("line6LoadCompleteHandler"),
	HX_CSTRING("line7LoadCompleteHandler"),
	HX_CSTRING("createTfAssembler"),
	HX_CSTRING("createLineButtons"),
	HX_CSTRING("createCloseButton"),
	HX_CSTRING("createBarriere"),
	HX_CSTRING("createOpcodeMenu"),
	HX_CSTRING("opcodeMenuButtonHandler"),
	HX_CSTRING("opcodeMenuHandler"),
	HX_CSTRING("lineButton0Handler"),
	HX_CSTRING("lineButton1Handler"),
	HX_CSTRING("lineButton2Handler"),
	HX_CSTRING("lineButton3Handler"),
	HX_CSTRING("lineButton4Handler"),
	HX_CSTRING("lineButton5Handler"),
	HX_CSTRING("lineButton6Handler"),
	HX_CSTRING("lineButton7Handler"),
	HX_CSTRING("lineButtonsHandler"),
	HX_CSTRING("closeButtonHandler"),
	HX_CSTRING("getBasicTextField"),
	HX_CSTRING("setInitialOutput"),
	HX_CSTRING("getOpcode"),
	HX_CSTRING("getAddress"),
	HX_CSTRING("setTfOpcode"),
	HX_CSTRING("setTfAddress"),
	HX_CSTRING("hideBarriere"),
	HX_CSTRING("showLines"),
	HX_CSTRING("showLine"),
	HX_CSTRING("hideLine"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnterInstruction_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnterInstruction_obj::__mClass,"__mClass");
};

#endif

Class EnterInstruction_obj::__mClass;

void EnterInstruction_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.EnterInstruction"), hx::TCanCast< EnterInstruction_obj> ,sStaticFields,sMemberFields,
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

void EnterInstruction_obj::__boot()
{
}

} // end namespace view
} // end namespace component
