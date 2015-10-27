#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_openfl__legacy_text_TextFormatAlign
#include <openfl/_legacy/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
#ifndef INCLUDED_utilities_TextFieldFactory
#include <utilities/TextFieldFactory.h>
#endif
#ifndef INCLUDED_view_component_InstructionDisplay
#include <view/component/InstructionDisplay.h>
#endif
namespace view{
namespace component{

Void InstructionDisplay_obj::__construct()
{
HX_STACK_FRAME("view.component.InstructionDisplay","new",0xb7142ca0,"view.component.InstructionDisplay.new","view/component/InstructionDisplay.hx",37,0xdd15284e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(38)
	super::__construct();
	HX_STACK_LINE(39)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//InstructionDisplay_obj::~InstructionDisplay_obj() { }

Dynamic InstructionDisplay_obj::__CreateEmpty() { return  new InstructionDisplay_obj; }
hx::ObjectPtr< InstructionDisplay_obj > InstructionDisplay_obj::__new()
{  hx::ObjectPtr< InstructionDisplay_obj > result = new InstructionDisplay_obj();
	result->__construct();
	return result;}

Dynamic InstructionDisplay_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InstructionDisplay_obj > result = new InstructionDisplay_obj();
	result->__construct();
	return result;}

Void InstructionDisplay_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.InstructionDisplay","addedToStageHandler",0xd048f3e7,"view.component.InstructionDisplay.addedToStageHandler","view/component/InstructionDisplay.hx",42,0xdd15284e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(43)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(44)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/instructionTable2048.png")),this->bmpLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(45)
		this->createTfPointer();
		HX_STACK_LINE(46)
		this->createTfAssembler();
		HX_STACK_LINE(47)
		this->createTfMachine();
		HX_STACK_LINE(48)
		this->createTfHex();
		HX_STACK_LINE(49)
		this->createTfDescription();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InstructionDisplay_obj,addedToStageHandler,(void))

Void InstructionDisplay_obj::bmpLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.InstructionDisplay","bmpLoadCompleteHandler",0x9655ff06,"view.component.InstructionDisplay.bmpLoadCompleteHandler","view/component/InstructionDisplay.hx",52,0xdd15284e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(53)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		this->bmp = _g;
		HX_STACK_LINE(54)
		this->bmp->set_name(HX_CSTRING("table"));
		HX_STACK_LINE(59)
		this->addChild(this->bmp);
		HX_STACK_LINE(60)
		::events::AppEvent _g1 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		this->dispatchEvent(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InstructionDisplay_obj,bmpLoadCompleteHandler,(void))

Void InstructionDisplay_obj::createTfPointer( ){
{
		HX_STACK_FRAME("view.component.InstructionDisplay","createTfPointer",0x92de6b0f,"view.component.InstructionDisplay.createTfPointer","view/component/InstructionDisplay.hx",67,0xdd15284e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		::openfl::_legacy::text::TextField _g = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		this->tfPointer = _g;
		HX_STACK_LINE(69)
		::openfl::_legacy::text::TextFormat _g1 = ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Myriad Pro"),((int)14 * ::AppConstants_obj::SCALE_FACTOR),(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(69)
		this->tfPointer->set_defaultTextFormat(_g1);
		HX_STACK_LINE(70)
		this->tfPointer->set_embedFonts(true);
		HX_STACK_LINE(71)
		this->tfPointer->set_selectable(false);
		HX_STACK_LINE(72)
		this->tfPointer->set_x(((int)5 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(73)
		this->tfPointer->set_y(((int)6 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(74)
		this->tfPointer->set_width(((int)80 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(75)
		this->tfPointer->set_height(((int)22 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(76)
		this->tfPointer->set_text(HX_CSTRING(""));
		HX_STACK_LINE(77)
		this->addChild(this->tfPointer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InstructionDisplay_obj,createTfPointer,(void))

Void InstructionDisplay_obj::createTfAssembler( ){
{
		HX_STACK_FRAME("view.component.InstructionDisplay","createTfAssembler",0x5d11a9f2,"view.component.InstructionDisplay.createTfAssembler","view/component/InstructionDisplay.hx",80,0xdd15284e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		::openfl::_legacy::text::TextField _g = this->getBasicTextField();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		this->tfAssemblerOpcode = _g;
		HX_STACK_LINE(82)
		this->tfAssemblerOpcode->set_textColor((int)16712965);
		HX_STACK_LINE(83)
		this->tfAssemblerOpcode->set_width(((int)59 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(84)
		this->tfAssemblerOpcode->set_x(((int)80 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(85)
		this->tfAssemblerOpcode->set_y(((int)29 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(86)
		this->tfAssemblerOpcode->set_text(HX_CSTRING(""));
		HX_STACK_LINE(87)
		this->addChild(this->tfAssemblerOpcode);
		HX_STACK_LINE(89)
		::openfl::_legacy::text::TextField _g1 = this->getBasicTextField();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(89)
		this->tfAssemblerAddress = _g1;
		HX_STACK_LINE(90)
		this->tfAssemblerAddress->set_textColor((int)16712965);
		HX_STACK_LINE(91)
		this->tfAssemblerAddress->set_width(((int)90 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(92)
		this->tfAssemblerAddress->set_x(((int)137 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(93)
		Float _g2 = this->tfAssemblerOpcode->get_y();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(93)
		this->tfAssemblerAddress->set_y(_g2);
		HX_STACK_LINE(94)
		this->tfAssemblerAddress->set_text(HX_CSTRING(""));
		HX_STACK_LINE(95)
		this->addChild(this->tfAssemblerAddress);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InstructionDisplay_obj,createTfAssembler,(void))

Void InstructionDisplay_obj::createTfMachine( ){
{
		HX_STACK_FRAME("view.component.InstructionDisplay","createTfMachine",0x04b7e5d9,"view.component.InstructionDisplay.createTfMachine","view/component/InstructionDisplay.hx",98,0xdd15284e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		::openfl::_legacy::text::TextField _g = this->getBasicTextField();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		this->tfMachineOpcode = _g;
		HX_STACK_LINE(100)
		this->tfMachineOpcode->set_textColor(::utilities::TextFieldFactory_obj::TEXT_ACTIVE_COLOR);
		HX_STACK_LINE(101)
		Float _g1 = this->tfAssemblerOpcode->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(101)
		this->tfMachineOpcode->set_width(_g1);
		HX_STACK_LINE(102)
		Float _g2 = this->tfAssemblerOpcode->get_x();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(102)
		this->tfMachineOpcode->set_x(_g2);
		HX_STACK_LINE(103)
		this->tfMachineOpcode->set_type(::openfl::text::TextFieldType_obj::INPUT);
		HX_STACK_LINE(104)
		this->tfMachineOpcode->set_y(((int)54 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(105)
		this->tfMachineOpcode->set_text(HX_CSTRING(""));
		HX_STACK_LINE(106)
		this->addChild(this->tfMachineOpcode);
		HX_STACK_LINE(108)
		::openfl::_legacy::text::TextField _g3 = this->getBasicTextField();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(108)
		this->tfMachineAddress = _g3;
		HX_STACK_LINE(109)
		this->tfMachineAddress->set_textColor(::utilities::TextFieldFactory_obj::TEXT_ACTIVE_COLOR);
		HX_STACK_LINE(110)
		Float _g4 = this->tfAssemblerAddress->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(110)
		this->tfMachineAddress->set_width(_g4);
		HX_STACK_LINE(111)
		Float _g5 = this->tfAssemblerAddress->get_x();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(111)
		this->tfMachineAddress->set_x(_g5);
		HX_STACK_LINE(112)
		Float _g6 = this->tfMachineOpcode->get_y();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(112)
		this->tfMachineAddress->set_y(_g6);
		HX_STACK_LINE(113)
		this->tfMachineAddress->set_text(HX_CSTRING(""));
		HX_STACK_LINE(114)
		this->addChild(this->tfMachineAddress);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InstructionDisplay_obj,createTfMachine,(void))

Void InstructionDisplay_obj::createTfHex( ){
{
		HX_STACK_FRAME("view.component.InstructionDisplay","createTfHex",0x2c6fdc2d,"view.component.InstructionDisplay.createTfHex","view/component/InstructionDisplay.hx",117,0xdd15284e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		::openfl::_legacy::text::TextField _g = this->getBasicTextField();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		this->tfHexOpcode = _g;
		HX_STACK_LINE(119)
		this->tfHexOpcode->set_textColor((int)4494335);
		HX_STACK_LINE(120)
		Float _g1 = this->tfAssemblerOpcode->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		this->tfHexOpcode->set_width(_g1);
		HX_STACK_LINE(121)
		Float _g2 = this->tfAssemblerOpcode->get_x();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(121)
		this->tfHexOpcode->set_x(_g2);
		HX_STACK_LINE(122)
		this->tfHexOpcode->set_y(((int)79 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(123)
		this->tfHexOpcode->set_text(HX_CSTRING(""));
		HX_STACK_LINE(124)
		this->addChild(this->tfHexOpcode);
		HX_STACK_LINE(126)
		::openfl::_legacy::text::TextField _g3 = this->getBasicTextField();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(126)
		this->tfHexAddress = _g3;
		HX_STACK_LINE(127)
		this->tfHexAddress->set_textColor((int)4494335);
		HX_STACK_LINE(128)
		Float _g4 = this->tfAssemblerAddress->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(128)
		this->tfHexAddress->set_width(_g4);
		HX_STACK_LINE(129)
		Float _g5 = this->tfAssemblerAddress->get_x();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(129)
		this->tfHexAddress->set_x(_g5);
		HX_STACK_LINE(130)
		Float _g6 = this->tfHexOpcode->get_y();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(130)
		this->tfHexAddress->set_y(_g6);
		HX_STACK_LINE(131)
		this->tfHexAddress->set_text(HX_CSTRING(""));
		HX_STACK_LINE(132)
		this->addChild(this->tfHexAddress);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InstructionDisplay_obj,createTfHex,(void))

Void InstructionDisplay_obj::createTfDescription( ){
{
		HX_STACK_FRAME("view.component.InstructionDisplay","createTfDescription",0x8452444e,"view.component.InstructionDisplay.createTfDescription","view/component/InstructionDisplay.hx",135,0xdd15284e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		::openfl::_legacy::text::TextField _g = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(136)
		this->tfDescription = _g;
		HX_STACK_LINE(137)
		::openfl::_legacy::text::TextFormat _g1 = ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Myriad Pro"),((int)14 * ::AppConstants_obj::SCALE_FACTOR),(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(137)
		this->tfDescription->set_defaultTextFormat(_g1);
		HX_STACK_LINE(138)
		this->tfDescription->set_embedFonts(true);
		HX_STACK_LINE(139)
		this->tfDescription->set_selectable(false);
		HX_STACK_LINE(140)
		this->tfDescription->set_x(((int)230 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(141)
		this->tfDescription->set_y(((int)29 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(142)
		this->tfDescription->set_width(((int)175 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(143)
		this->tfDescription->set_height(((int)76 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(144)
		this->tfDescription->set_multiline(true);
		HX_STACK_LINE(145)
		this->tfDescription->set_wordWrap(true);
		HX_STACK_LINE(146)
		this->addChild(this->tfDescription);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InstructionDisplay_obj,createTfDescription,(void))

::openfl::_legacy::text::TextField InstructionDisplay_obj::getBasicTextField( ){
	HX_STACK_FRAME("view.component.InstructionDisplay","getBasicTextField",0x16270fb5,"view.component.InstructionDisplay.getBasicTextField","view/component/InstructionDisplay.hx",149,0xdd15284e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	::openfl::_legacy::text::TextField tf = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(151)
	::openfl::_legacy::text::TextFormat _g = ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Consolas Bold"),((int)18 * ::AppConstants_obj::SCALE_FACTOR),(int)16777215,null(),null(),null(),null(),null(),::openfl::_legacy::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(151)
	tf->set_defaultTextFormat(_g);
	HX_STACK_LINE(152)
	tf->set_embedFonts(true);
	HX_STACK_LINE(153)
	tf->set_selectable(false);
	HX_STACK_LINE(154)
	tf->set_height(((int)22 * ::AppConstants_obj::SCALE_FACTOR));
	HX_STACK_LINE(155)
	return tf;
}


HX_DEFINE_DYNAMIC_FUNC0(InstructionDisplay_obj,getBasicTextField,return )

Void InstructionDisplay_obj::setOutput( ::model::vo::InstructionVO instruction){
{
		HX_STACK_FRAME("view.component.InstructionDisplay","setOutput",0xcef39083,"view.component.InstructionDisplay.setOutput","view/component/InstructionDisplay.hx",162,0xdd15284e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instruction,"instruction")
		HX_STACK_LINE(163)
		::String _g = ::Std_obj::string(instruction->pointer);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		::String _g1 = (HX_CSTRING("Befehl #") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		this->tfPointer->set_text(_g1);
		HX_STACK_LINE(164)
		this->tfAssemblerOpcode->set_text(instruction->asmOpcode);
		HX_STACK_LINE(165)
		this->tfAssemblerAddress->set_text(instruction->asmAddress);
		HX_STACK_LINE(166)
		this->tfMachineOpcode->set_text(instruction->codeOpcode);
		HX_STACK_LINE(167)
		this->tfMachineAddress->set_text(instruction->codeAddress);
		HX_STACK_LINE(168)
		this->tfHexOpcode->set_text(instruction->hexOpcode);
		HX_STACK_LINE(169)
		this->tfHexAddress->set_text(instruction->hexAddress);
		HX_STACK_LINE(170)
		::String _g2 = instruction->description.split(HX_CSTRING("x"))->join(instruction->asmAddress);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(170)
		this->tfDescription->set_text(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InstructionDisplay_obj,setOutput,(void))

Void InstructionDisplay_obj::clearOutput( ){
{
		HX_STACK_FRAME("view.component.InstructionDisplay","clearOutput",0x9544b8ae,"view.component.InstructionDisplay.clearOutput","view/component/InstructionDisplay.hx",173,0xdd15284e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(174)
		this->tfPointer->set_text(HX_CSTRING(""));
		HX_STACK_LINE(175)
		this->tfAssemblerOpcode->set_text(HX_CSTRING(""));
		HX_STACK_LINE(176)
		this->tfAssemblerAddress->set_text(HX_CSTRING(""));
		HX_STACK_LINE(177)
		this->tfMachineOpcode->set_text(HX_CSTRING(""));
		HX_STACK_LINE(178)
		this->tfMachineAddress->set_text(HX_CSTRING(""));
		HX_STACK_LINE(179)
		this->tfHexOpcode->set_text(HX_CSTRING(""));
		HX_STACK_LINE(180)
		this->tfHexAddress->set_text(HX_CSTRING(""));
		HX_STACK_LINE(181)
		this->tfDescription->set_text(HX_CSTRING(""));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InstructionDisplay_obj,clearOutput,(void))


InstructionDisplay_obj::InstructionDisplay_obj()
{
}

void InstructionDisplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InstructionDisplay);
	HX_MARK_MEMBER_NAME(bmp,"bmp");
	HX_MARK_MEMBER_NAME(tfPointer,"tfPointer");
	HX_MARK_MEMBER_NAME(tfAssemblerOpcode,"tfAssemblerOpcode");
	HX_MARK_MEMBER_NAME(tfAssemblerAddress,"tfAssemblerAddress");
	HX_MARK_MEMBER_NAME(tfMachineOpcode,"tfMachineOpcode");
	HX_MARK_MEMBER_NAME(tfMachineAddress,"tfMachineAddress");
	HX_MARK_MEMBER_NAME(tfHexOpcode,"tfHexOpcode");
	HX_MARK_MEMBER_NAME(tfHexAddress,"tfHexAddress");
	HX_MARK_MEMBER_NAME(tfDescription,"tfDescription");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InstructionDisplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bmp,"bmp");
	HX_VISIT_MEMBER_NAME(tfPointer,"tfPointer");
	HX_VISIT_MEMBER_NAME(tfAssemblerOpcode,"tfAssemblerOpcode");
	HX_VISIT_MEMBER_NAME(tfAssemblerAddress,"tfAssemblerAddress");
	HX_VISIT_MEMBER_NAME(tfMachineOpcode,"tfMachineOpcode");
	HX_VISIT_MEMBER_NAME(tfMachineAddress,"tfMachineAddress");
	HX_VISIT_MEMBER_NAME(tfHexOpcode,"tfHexOpcode");
	HX_VISIT_MEMBER_NAME(tfHexAddress,"tfHexAddress");
	HX_VISIT_MEMBER_NAME(tfDescription,"tfDescription");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic InstructionDisplay_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmp") ) { return bmp; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tfPointer") ) { return tfPointer; }
		if (HX_FIELD_EQ(inName,"setOutput") ) { return setOutput_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tfHexOpcode") ) { return tfHexOpcode; }
		if (HX_FIELD_EQ(inName,"createTfHex") ) { return createTfHex_dyn(); }
		if (HX_FIELD_EQ(inName,"clearOutput") ) { return clearOutput_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tfHexAddress") ) { return tfHexAddress; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tfDescription") ) { return tfDescription; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tfMachineOpcode") ) { return tfMachineOpcode; }
		if (HX_FIELD_EQ(inName,"createTfPointer") ) { return createTfPointer_dyn(); }
		if (HX_FIELD_EQ(inName,"createTfMachine") ) { return createTfMachine_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tfMachineAddress") ) { return tfMachineAddress; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tfAssemblerOpcode") ) { return tfAssemblerOpcode; }
		if (HX_FIELD_EQ(inName,"createTfAssembler") ) { return createTfAssembler_dyn(); }
		if (HX_FIELD_EQ(inName,"getBasicTextField") ) { return getBasicTextField_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tfAssemblerAddress") ) { return tfAssemblerAddress; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"createTfDescription") ) { return createTfDescription_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"bmpLoadCompleteHandler") ) { return bmpLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InstructionDisplay_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmp") ) { bmp=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tfPointer") ) { tfPointer=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tfHexOpcode") ) { tfHexOpcode=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tfHexAddress") ) { tfHexAddress=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tfDescription") ) { tfDescription=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tfMachineOpcode") ) { tfMachineOpcode=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tfMachineAddress") ) { tfMachineAddress=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tfAssemblerOpcode") ) { tfAssemblerOpcode=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tfAssemblerAddress") ) { tfAssemblerAddress=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InstructionDisplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bmp"));
	outFields->push(HX_CSTRING("tfPointer"));
	outFields->push(HX_CSTRING("tfAssemblerOpcode"));
	outFields->push(HX_CSTRING("tfAssemblerAddress"));
	outFields->push(HX_CSTRING("tfMachineOpcode"));
	outFields->push(HX_CSTRING("tfMachineAddress"));
	outFields->push(HX_CSTRING("tfHexOpcode"));
	outFields->push(HX_CSTRING("tfHexAddress"));
	outFields->push(HX_CSTRING("tfDescription"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(InstructionDisplay_obj,bmp),HX_CSTRING("bmp")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(InstructionDisplay_obj,tfPointer),HX_CSTRING("tfPointer")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(InstructionDisplay_obj,tfAssemblerOpcode),HX_CSTRING("tfAssemblerOpcode")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(InstructionDisplay_obj,tfAssemblerAddress),HX_CSTRING("tfAssemblerAddress")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(InstructionDisplay_obj,tfMachineOpcode),HX_CSTRING("tfMachineOpcode")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(InstructionDisplay_obj,tfMachineAddress),HX_CSTRING("tfMachineAddress")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(InstructionDisplay_obj,tfHexOpcode),HX_CSTRING("tfHexOpcode")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(InstructionDisplay_obj,tfHexAddress),HX_CSTRING("tfHexAddress")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(InstructionDisplay_obj,tfDescription),HX_CSTRING("tfDescription")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bmp"),
	HX_CSTRING("tfPointer"),
	HX_CSTRING("tfAssemblerOpcode"),
	HX_CSTRING("tfAssemblerAddress"),
	HX_CSTRING("tfMachineOpcode"),
	HX_CSTRING("tfMachineAddress"),
	HX_CSTRING("tfHexOpcode"),
	HX_CSTRING("tfHexAddress"),
	HX_CSTRING("tfDescription"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("bmpLoadCompleteHandler"),
	HX_CSTRING("createTfPointer"),
	HX_CSTRING("createTfAssembler"),
	HX_CSTRING("createTfMachine"),
	HX_CSTRING("createTfHex"),
	HX_CSTRING("createTfDescription"),
	HX_CSTRING("getBasicTextField"),
	HX_CSTRING("setOutput"),
	HX_CSTRING("clearOutput"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InstructionDisplay_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InstructionDisplay_obj::__mClass,"__mClass");
};

#endif

Class InstructionDisplay_obj::__mClass;

void InstructionDisplay_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.InstructionDisplay"), hx::TCanCast< InstructionDisplay_obj> ,sStaticFields,sMemberFields,
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

void InstructionDisplay_obj::__boot()
{
}

} // end namespace view
} // end namespace component
