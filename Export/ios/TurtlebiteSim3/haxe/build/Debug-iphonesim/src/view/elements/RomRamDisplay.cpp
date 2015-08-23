#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
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
#ifndef INCLUDED_utilities_TextFieldFactory
#include <utilities/TextFieldFactory.h>
#endif
#ifndef INCLUDED_view_elements_RomRamDisplay
#include <view/elements/RomRamDisplay.h>
#endif
namespace view{
namespace elements{

Void RomRamDisplay_obj::__construct(int color)
{
HX_STACK_FRAME("view.elements.RomRamDisplay","new",0x89786a78,"view.elements.RomRamDisplay.new","view/elements/RomRamDisplay.hx",22,0x9486c3d8)
HX_STACK_THIS(this)
HX_STACK_ARG(color,"color")
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(24)
	this->textColor = color;
	HX_STACK_LINE(25)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(25)
	this->tfOut = _g;
	HX_STACK_LINE(27)
	this->tfOut[(int)0] = this->getBasicTextField();
	HX_STACK_LINE(28)
	this->addChild(this->tfOut->__get((int)0).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(30)
	this->tfOut[(int)1] = this->getBasicTextField();
	HX_STACK_LINE(31)
	Float _g1 = this->tfOut->__get((int)0).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(31)
	Float _g2 = (_g1 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(31)
	this->tfOut->__get((int)1).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g2);
	HX_STACK_LINE(32)
	this->addChild(this->tfOut->__get((int)1).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(34)
	this->tfOut[(int)2] = this->getBasicTextField();
	HX_STACK_LINE(35)
	Float _g3 = this->tfOut->__get((int)1).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(35)
	Float _g4 = (_g3 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(35)
	this->tfOut->__get((int)2).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g4);
	HX_STACK_LINE(36)
	this->addChild(this->tfOut->__get((int)2).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(38)
	this->tfOut[(int)3] = this->getBasicTextField();
	HX_STACK_LINE(39)
	Float _g5 = this->tfOut->__get((int)2).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(39)
	Float _g6 = (_g5 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(39)
	this->tfOut->__get((int)3).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g6);
	HX_STACK_LINE(40)
	this->addChild(this->tfOut->__get((int)3).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(42)
	this->tfOut[(int)4] = this->getBasicTextField();
	HX_STACK_LINE(43)
	Float _g7 = this->tfOut->__get((int)3).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(43)
	Float _g8 = (_g7 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(43)
	this->tfOut->__get((int)4).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g8);
	HX_STACK_LINE(44)
	this->addChild(this->tfOut->__get((int)4).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(46)
	this->tfOut[(int)5] = this->getBasicTextField();
	HX_STACK_LINE(47)
	Float _g9 = this->tfOut->__get((int)4).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(47)
	Float _g10 = (_g9 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(47)
	this->tfOut->__get((int)5).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g10);
	HX_STACK_LINE(48)
	this->addChild(this->tfOut->__get((int)5).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(50)
	this->tfOut[(int)6] = this->getBasicTextField();
	HX_STACK_LINE(51)
	Float _g11 = this->tfOut->__get((int)5).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(51)
	Float _g12 = (_g11 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(51)
	this->tfOut->__get((int)6).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g12);
	HX_STACK_LINE(52)
	this->addChild(this->tfOut->__get((int)6).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(54)
	this->tfOut[(int)7] = this->getBasicTextField();
	HX_STACK_LINE(55)
	Float _g13 = this->tfOut->__get((int)6).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(55)
	Float _g14 = (_g13 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(55)
	this->tfOut->__get((int)7).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g14);
	HX_STACK_LINE(56)
	this->addChild(this->tfOut->__get((int)7).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(59)
	this->tfOut[(int)8] = this->getBasicTextField();
	HX_STACK_LINE(60)
	Float _g15 = this->tfOut->__get((int)0).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(60)
	this->tfOut->__get((int)8).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g15);
	HX_STACK_LINE(61)
	Float _g16 = this->tfOut->__get((int)0).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(61)
	Float _g17 = (_g16 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(61)
	this->tfOut->__get((int)8).StaticCast< ::openfl::_legacy::text::TextField >()->set_y(_g17);
	HX_STACK_LINE(62)
	this->addChild(this->tfOut->__get((int)8).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(64)
	this->tfOut[(int)9] = this->getBasicTextField();
	HX_STACK_LINE(65)
	Float _g18 = this->tfOut->__get((int)1).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(65)
	this->tfOut->__get((int)9).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g18);
	HX_STACK_LINE(66)
	Float _g19 = this->tfOut->__get((int)0).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(66)
	Float _g20 = (_g19 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(66)
	this->tfOut->__get((int)9).StaticCast< ::openfl::_legacy::text::TextField >()->set_y(_g20);
	HX_STACK_LINE(67)
	this->addChild(this->tfOut->__get((int)9).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(69)
	this->tfOut[(int)10] = this->getBasicTextField();
	HX_STACK_LINE(70)
	Float _g21 = this->tfOut->__get((int)2).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(70)
	this->tfOut->__get((int)10).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g21);
	HX_STACK_LINE(71)
	Float _g22 = this->tfOut->__get((int)0).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(71)
	Float _g23 = (_g22 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(71)
	this->tfOut->__get((int)10).StaticCast< ::openfl::_legacy::text::TextField >()->set_y(_g23);
	HX_STACK_LINE(72)
	this->addChild(this->tfOut->__get((int)10).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(74)
	this->tfOut[(int)11] = this->getBasicTextField();
	HX_STACK_LINE(75)
	Float _g24 = this->tfOut->__get((int)3).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(75)
	this->tfOut->__get((int)11).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g24);
	HX_STACK_LINE(76)
	Float _g25 = this->tfOut->__get((int)0).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(76)
	Float _g26 = (_g25 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(76)
	this->tfOut->__get((int)11).StaticCast< ::openfl::_legacy::text::TextField >()->set_y(_g26);
	HX_STACK_LINE(77)
	this->addChild(this->tfOut->__get((int)11).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(79)
	this->tfOut[(int)12] = this->getBasicTextField();
	HX_STACK_LINE(80)
	Float _g27 = this->tfOut->__get((int)4).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(80)
	this->tfOut->__get((int)12).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g27);
	HX_STACK_LINE(81)
	Float _g28 = this->tfOut->__get((int)0).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(81)
	Float _g29 = (_g28 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(81)
	this->tfOut->__get((int)12).StaticCast< ::openfl::_legacy::text::TextField >()->set_y(_g29);
	HX_STACK_LINE(82)
	this->addChild(this->tfOut->__get((int)12).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(84)
	this->tfOut[(int)13] = this->getBasicTextField();
	HX_STACK_LINE(85)
	Float _g30 = this->tfOut->__get((int)5).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(85)
	this->tfOut->__get((int)13).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g30);
	HX_STACK_LINE(86)
	Float _g31 = this->tfOut->__get((int)0).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(86)
	Float _g32 = (_g31 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(86)
	this->tfOut->__get((int)13).StaticCast< ::openfl::_legacy::text::TextField >()->set_y(_g32);
	HX_STACK_LINE(87)
	this->addChild(this->tfOut->__get((int)13).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(89)
	this->tfOut[(int)14] = this->getBasicTextField();
	HX_STACK_LINE(90)
	Float _g33 = this->tfOut->__get((int)6).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(90)
	this->tfOut->__get((int)14).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g33);
	HX_STACK_LINE(91)
	Float _g34 = this->tfOut->__get((int)0).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(91)
	Float _g35 = (_g34 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(91)
	this->tfOut->__get((int)14).StaticCast< ::openfl::_legacy::text::TextField >()->set_y(_g35);
	HX_STACK_LINE(92)
	this->addChild(this->tfOut->__get((int)14).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(94)
	this->tfOut[(int)15] = this->getBasicTextField();
	HX_STACK_LINE(95)
	Float _g36 = this->tfOut->__get((int)7).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g36,"_g36");
	HX_STACK_LINE(95)
	this->tfOut->__get((int)15).StaticCast< ::openfl::_legacy::text::TextField >()->set_x(_g36);
	HX_STACK_LINE(96)
	Float _g37 = this->tfOut->__get((int)0).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g37,"_g37");
	HX_STACK_LINE(96)
	Float _g38 = (_g37 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g38,"_g38");
	HX_STACK_LINE(96)
	this->tfOut->__get((int)15).StaticCast< ::openfl::_legacy::text::TextField >()->set_y(_g38);
	HX_STACK_LINE(97)
	this->addChild(this->tfOut->__get((int)15).StaticCast< ::openfl::_legacy::text::TextField >());
	HX_STACK_LINE(99)
	::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/tfFrame.png")),this->tfFrameBmpLoadCompleteHandler_dyn(),null());
	HX_STACK_LINE(100)
	this->resetValues(true);
}
;
	return null();
}

//RomRamDisplay_obj::~RomRamDisplay_obj() { }

Dynamic RomRamDisplay_obj::__CreateEmpty() { return  new RomRamDisplay_obj; }
hx::ObjectPtr< RomRamDisplay_obj > RomRamDisplay_obj::__new(int color)
{  hx::ObjectPtr< RomRamDisplay_obj > result = new RomRamDisplay_obj();
	result->__construct(color);
	return result;}

Dynamic RomRamDisplay_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RomRamDisplay_obj > result = new RomRamDisplay_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RomRamDisplay_obj::tfFrameBmpLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.RomRamDisplay","tfFrameBmpLoadCompleteHandler",0x2f13e119,"view.elements.RomRamDisplay.tfFrameBmpLoadCompleteHandler","view/elements/RomRamDisplay.hx",103,0x9486c3d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(104)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		this->tfFrame = _g;
		HX_STACK_LINE(105)
		this->tfFrame->set_name(HX_CSTRING("tfFrame"));
		HX_STACK_LINE(110)
		this->tfFrame->set_visible(false);
		HX_STACK_LINE(111)
		this->addChild(this->tfFrame);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RomRamDisplay_obj,tfFrameBmpLoadCompleteHandler,(void))

Void RomRamDisplay_obj::resetValues( Dynamic __o_powerOff){
Dynamic powerOff = __o_powerOff.Default(false);
	HX_STACK_FRAME("view.elements.RomRamDisplay","resetValues",0x3cbbf929,"view.elements.RomRamDisplay.resetValues","view/elements/RomRamDisplay.hx",115,0x9486c3d8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(powerOff,"powerOff")
{
		HX_STACK_LINE(115)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		while((true)){
			HX_STACK_LINE(115)
			if ((!(((_g < (int)16))))){
				HX_STACK_LINE(115)
				break;
			}
			HX_STACK_LINE(115)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(116)
			if ((powerOff)){
				HX_STACK_LINE(117)
				this->tfOut->__get(i).StaticCast< ::openfl::_legacy::text::TextField >()->set_text(HX_CSTRING(""));
			}
			else{
				HX_STACK_LINE(119)
				this->tfOut->__get(i).StaticCast< ::openfl::_legacy::text::TextField >()->set_text(HX_CSTRING("0"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RomRamDisplay_obj,resetValues,(void))

::openfl::_legacy::text::TextField RomRamDisplay_obj::getBasicTextField( ){
	HX_STACK_FRAME("view.elements.RomRamDisplay","getBasicTextField",0x78ead78d,"view.elements.RomRamDisplay.getBasicTextField","view/elements/RomRamDisplay.hx",128,0x9486c3d8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	::openfl::_legacy::text::TextField tf = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(130)
	::openfl::_legacy::text::TextFormat _g = ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Consolas Bold"),((int)12 * ::AppConstants_obj::SCALE_FACTOR),(int)65280,null(),null(),null(),null(),null(),::openfl::_legacy::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(130)
	tf->set_defaultTextFormat(_g);
	HX_STACK_LINE(131)
	tf->set_embedFonts(true);
	HX_STACK_LINE(132)
	tf->set_textColor(this->textColor);
	HX_STACK_LINE(133)
	tf->set_border(true);
	HX_STACK_LINE(134)
	tf->set_borderColor((int)10526880);
	HX_STACK_LINE(135)
	tf->set_background(true);
	HX_STACK_LINE(136)
	tf->set_backgroundColor((int)0);
	HX_STACK_LINE(137)
	tf->set_width(((int)18 * ::AppConstants_obj::SCALE_FACTOR));
	HX_STACK_LINE(138)
	tf->set_height(((int)15 * ::AppConstants_obj::SCALE_FACTOR));
	HX_STACK_LINE(139)
	return tf;
}


HX_DEFINE_DYNAMIC_FUNC0(RomRamDisplay_obj,getBasicTextField,return )

Void RomRamDisplay_obj::loadMemory( Array< ::Dynamic > instructions){
{
		HX_STACK_FRAME("view.elements.RomRamDisplay","loadMemory",0x12a852af,"view.elements.RomRamDisplay.loadMemory","view/elements/RomRamDisplay.hx",147,0x9486c3d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instructions,"instructions")
		HX_STACK_LINE(147)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(147)
		int _g = instructions->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(147)
		while((true)){
			HX_STACK_LINE(147)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(147)
				break;
			}
			HX_STACK_LINE(147)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(148)
			this->tfOut->__get(i).StaticCast< ::openfl::_legacy::text::TextField >()->set_text(instructions->__get(i).StaticCast< ::model::vo::InstructionVO >()->hex);
			HX_STACK_LINE(149)
			this->tfOut->__get(i).StaticCast< ::openfl::_legacy::text::TextField >()->set_textColor(this->textColor);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RomRamDisplay_obj,loadMemory,(void))

Void RomRamDisplay_obj::updateCell( Array< ::Dynamic > values,int pointer){
{
		HX_STACK_FRAME("view.elements.RomRamDisplay","updateCell",0x532f6533,"view.elements.RomRamDisplay.updateCell","view/elements/RomRamDisplay.hx",153,0x9486c3d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(values,"values")
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(154)
		::String _g = values->__get(pointer).StaticCast< ::model::vo::SnapshotVO >()->getHex();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		this->tfOut->__get(pointer).StaticCast< ::openfl::_legacy::text::TextField >()->set_text(_g);
		HX_STACK_LINE(155)
		Float _g1 = this->tfOut->__get(pointer).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(155)
		Float _g2 = (_g1 - (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(155)
		this->tfFrame->set_x(_g2);
		HX_STACK_LINE(157)
		Float _g3 = this->tfOut->__get(pointer).StaticCast< ::openfl::_legacy::text::TextField >()->get_y();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(157)
		Float _g4 = (_g3 - (int)3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(157)
		this->tfFrame->set_y(_g4);
		HX_STACK_LINE(161)
		this->tfFrame->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RomRamDisplay_obj,updateCell,(void))

Void RomRamDisplay_obj::setPointer( int pointer){
{
		HX_STACK_FRAME("view.elements.RomRamDisplay","setPointer",0xfcbe3e23,"view.elements.RomRamDisplay.setPointer","view/elements/RomRamDisplay.hx",164,0x9486c3d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(165)
		Float _g = this->tfOut->__get(pointer).StaticCast< ::openfl::_legacy::text::TextField >()->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(165)
		Float _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(165)
		this->tfFrame->set_x(_g1);
		HX_STACK_LINE(167)
		Float _g2 = this->tfOut->__get(pointer).StaticCast< ::openfl::_legacy::text::TextField >()->get_y();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(167)
		Float _g3 = (_g2 - (int)3);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(167)
		this->tfFrame->set_y(_g3);
		HX_STACK_LINE(171)
		this->tfFrame->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RomRamDisplay_obj,setPointer,(void))

Void RomRamDisplay_obj::resetPointer( ){
{
		HX_STACK_FRAME("view.elements.RomRamDisplay","resetPointer",0xc8736996,"view.elements.RomRamDisplay.resetPointer","view/elements/RomRamDisplay.hx",176,0x9486c3d8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		this->tfFrame->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RomRamDisplay_obj,resetPointer,(void))

Void RomRamDisplay_obj::clear( Dynamic __o_powerOff){
Dynamic powerOff = __o_powerOff.Default(false);
	HX_STACK_FRAME("view.elements.RomRamDisplay","clear",0xd76cc1a5,"view.elements.RomRamDisplay.clear","view/elements/RomRamDisplay.hx",179,0x9486c3d8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(powerOff,"powerOff")
{
		HX_STACK_LINE(180)
		this->resetValues(powerOff);
		HX_STACK_LINE(181)
		this->resetPointer();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RomRamDisplay_obj,clear,(void))


RomRamDisplay_obj::RomRamDisplay_obj()
{
}

void RomRamDisplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RomRamDisplay);
	HX_MARK_MEMBER_NAME(tfOut,"tfOut");
	HX_MARK_MEMBER_NAME(textColor,"textColor");
	HX_MARK_MEMBER_NAME(tfFrame,"tfFrame");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RomRamDisplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tfOut,"tfOut");
	HX_VISIT_MEMBER_NAME(textColor,"textColor");
	HX_VISIT_MEMBER_NAME(tfFrame,"tfFrame");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RomRamDisplay_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tfOut") ) { return tfOut; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tfFrame") ) { return tfFrame; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textColor") ) { return textColor; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadMemory") ) { return loadMemory_dyn(); }
		if (HX_FIELD_EQ(inName,"updateCell") ) { return updateCell_dyn(); }
		if (HX_FIELD_EQ(inName,"setPointer") ) { return setPointer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetValues") ) { return resetValues_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetPointer") ) { return resetPointer_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getBasicTextField") ) { return getBasicTextField_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"tfFrameBmpLoadCompleteHandler") ) { return tfFrameBmpLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RomRamDisplay_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tfOut") ) { tfOut=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tfFrame") ) { tfFrame=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textColor") ) { textColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RomRamDisplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tfOut"));
	outFields->push(HX_CSTRING("textColor"));
	outFields->push(HX_CSTRING("tfFrame"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RomRamDisplay_obj,tfOut),HX_CSTRING("tfOut")},
	{hx::fsInt,(int)offsetof(RomRamDisplay_obj,textColor),HX_CSTRING("textColor")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(RomRamDisplay_obj,tfFrame),HX_CSTRING("tfFrame")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tfOut"),
	HX_CSTRING("textColor"),
	HX_CSTRING("tfFrame"),
	HX_CSTRING("tfFrameBmpLoadCompleteHandler"),
	HX_CSTRING("resetValues"),
	HX_CSTRING("getBasicTextField"),
	HX_CSTRING("loadMemory"),
	HX_CSTRING("updateCell"),
	HX_CSTRING("setPointer"),
	HX_CSTRING("resetPointer"),
	HX_CSTRING("clear"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RomRamDisplay_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RomRamDisplay_obj::__mClass,"__mClass");
};

#endif

Class RomRamDisplay_obj::__mClass;

void RomRamDisplay_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.elements.RomRamDisplay"), hx::TCanCast< RomRamDisplay_obj> ,sStaticFields,sMemberFields,
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

void RomRamDisplay_obj::__boot()
{
}

} // end namespace view
} // end namespace elements
