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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
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
HX_STACK_FRAME("view.elements.RomRamDisplay","new",0x89786a78,"view.elements.RomRamDisplay.new","view/elements/RomRamDisplay.hx",28,0x9486c3d8)
HX_STACK_THIS(this)
HX_STACK_ARG(color,"color")
{
	HX_STACK_LINE(29)
	super::__construct();
	HX_STACK_LINE(30)
	this->textColor = color;
	HX_STACK_LINE(31)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	this->tfOut = _g;
	HX_STACK_LINE(33)
	this->tfOut[(int)0] = this->getBasicTextField();
	HX_STACK_LINE(34)
	this->addChild(this->tfOut->__get((int)0).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(36)
	this->tfOut[(int)1] = this->getBasicTextField();
	HX_STACK_LINE(37)
	Float _g1 = this->tfOut->__get((int)0).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(37)
	Float _g2 = (_g1 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(37)
	this->tfOut->__get((int)1).StaticCast< ::openfl::text::TextField >()->set_x(_g2);
	HX_STACK_LINE(38)
	this->addChild(this->tfOut->__get((int)1).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(40)
	this->tfOut[(int)2] = this->getBasicTextField();
	HX_STACK_LINE(41)
	Float _g3 = this->tfOut->__get((int)1).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(41)
	Float _g4 = (_g3 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(41)
	this->tfOut->__get((int)2).StaticCast< ::openfl::text::TextField >()->set_x(_g4);
	HX_STACK_LINE(42)
	this->addChild(this->tfOut->__get((int)2).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(44)
	this->tfOut[(int)3] = this->getBasicTextField();
	HX_STACK_LINE(45)
	Float _g5 = this->tfOut->__get((int)2).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(45)
	Float _g6 = (_g5 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(45)
	this->tfOut->__get((int)3).StaticCast< ::openfl::text::TextField >()->set_x(_g6);
	HX_STACK_LINE(46)
	this->addChild(this->tfOut->__get((int)3).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(48)
	this->tfOut[(int)4] = this->getBasicTextField();
	HX_STACK_LINE(49)
	Float _g7 = this->tfOut->__get((int)3).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(49)
	Float _g8 = (_g7 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(49)
	this->tfOut->__get((int)4).StaticCast< ::openfl::text::TextField >()->set_x(_g8);
	HX_STACK_LINE(50)
	this->addChild(this->tfOut->__get((int)4).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(52)
	this->tfOut[(int)5] = this->getBasicTextField();
	HX_STACK_LINE(53)
	Float _g9 = this->tfOut->__get((int)4).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(53)
	Float _g10 = (_g9 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(53)
	this->tfOut->__get((int)5).StaticCast< ::openfl::text::TextField >()->set_x(_g10);
	HX_STACK_LINE(54)
	this->addChild(this->tfOut->__get((int)5).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(56)
	this->tfOut[(int)6] = this->getBasicTextField();
	HX_STACK_LINE(57)
	Float _g11 = this->tfOut->__get((int)5).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(57)
	Float _g12 = (_g11 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(57)
	this->tfOut->__get((int)6).StaticCast< ::openfl::text::TextField >()->set_x(_g12);
	HX_STACK_LINE(58)
	this->addChild(this->tfOut->__get((int)6).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(60)
	this->tfOut[(int)7] = this->getBasicTextField();
	HX_STACK_LINE(61)
	Float _g13 = this->tfOut->__get((int)6).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(61)
	Float _g14 = (_g13 + ::utilities::TextFieldFactory_obj::TF_WIDTH);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(61)
	this->tfOut->__get((int)7).StaticCast< ::openfl::text::TextField >()->set_x(_g14);
	HX_STACK_LINE(62)
	this->addChild(this->tfOut->__get((int)7).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(65)
	this->tfOut[(int)8] = this->getBasicTextField();
	HX_STACK_LINE(66)
	Float _g15 = this->tfOut->__get((int)0).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(66)
	this->tfOut->__get((int)8).StaticCast< ::openfl::text::TextField >()->set_x(_g15);
	HX_STACK_LINE(67)
	Float _g16 = this->tfOut->__get((int)0).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(67)
	Float _g17 = (_g16 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(67)
	this->tfOut->__get((int)8).StaticCast< ::openfl::text::TextField >()->set_y(_g17);
	HX_STACK_LINE(68)
	this->addChild(this->tfOut->__get((int)8).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(70)
	this->tfOut[(int)9] = this->getBasicTextField();
	HX_STACK_LINE(71)
	Float _g18 = this->tfOut->__get((int)1).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(71)
	this->tfOut->__get((int)9).StaticCast< ::openfl::text::TextField >()->set_x(_g18);
	HX_STACK_LINE(72)
	Float _g19 = this->tfOut->__get((int)0).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(72)
	Float _g20 = (_g19 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(72)
	this->tfOut->__get((int)9).StaticCast< ::openfl::text::TextField >()->set_y(_g20);
	HX_STACK_LINE(73)
	this->addChild(this->tfOut->__get((int)9).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(75)
	this->tfOut[(int)10] = this->getBasicTextField();
	HX_STACK_LINE(76)
	Float _g21 = this->tfOut->__get((int)2).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(76)
	this->tfOut->__get((int)10).StaticCast< ::openfl::text::TextField >()->set_x(_g21);
	HX_STACK_LINE(77)
	Float _g22 = this->tfOut->__get((int)0).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(77)
	Float _g23 = (_g22 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(77)
	this->tfOut->__get((int)10).StaticCast< ::openfl::text::TextField >()->set_y(_g23);
	HX_STACK_LINE(78)
	this->addChild(this->tfOut->__get((int)10).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(80)
	this->tfOut[(int)11] = this->getBasicTextField();
	HX_STACK_LINE(81)
	Float _g24 = this->tfOut->__get((int)3).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(81)
	this->tfOut->__get((int)11).StaticCast< ::openfl::text::TextField >()->set_x(_g24);
	HX_STACK_LINE(82)
	Float _g25 = this->tfOut->__get((int)0).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(82)
	Float _g26 = (_g25 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(82)
	this->tfOut->__get((int)11).StaticCast< ::openfl::text::TextField >()->set_y(_g26);
	HX_STACK_LINE(83)
	this->addChild(this->tfOut->__get((int)11).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(85)
	this->tfOut[(int)12] = this->getBasicTextField();
	HX_STACK_LINE(86)
	Float _g27 = this->tfOut->__get((int)4).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(86)
	this->tfOut->__get((int)12).StaticCast< ::openfl::text::TextField >()->set_x(_g27);
	HX_STACK_LINE(87)
	Float _g28 = this->tfOut->__get((int)0).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(87)
	Float _g29 = (_g28 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(87)
	this->tfOut->__get((int)12).StaticCast< ::openfl::text::TextField >()->set_y(_g29);
	HX_STACK_LINE(88)
	this->addChild(this->tfOut->__get((int)12).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(90)
	this->tfOut[(int)13] = this->getBasicTextField();
	HX_STACK_LINE(91)
	Float _g30 = this->tfOut->__get((int)5).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(91)
	this->tfOut->__get((int)13).StaticCast< ::openfl::text::TextField >()->set_x(_g30);
	HX_STACK_LINE(92)
	Float _g31 = this->tfOut->__get((int)0).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(92)
	Float _g32 = (_g31 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(92)
	this->tfOut->__get((int)13).StaticCast< ::openfl::text::TextField >()->set_y(_g32);
	HX_STACK_LINE(93)
	this->addChild(this->tfOut->__get((int)13).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(95)
	this->tfOut[(int)14] = this->getBasicTextField();
	HX_STACK_LINE(96)
	Float _g33 = this->tfOut->__get((int)6).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(96)
	this->tfOut->__get((int)14).StaticCast< ::openfl::text::TextField >()->set_x(_g33);
	HX_STACK_LINE(97)
	Float _g34 = this->tfOut->__get((int)0).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(97)
	Float _g35 = (_g34 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(97)
	this->tfOut->__get((int)14).StaticCast< ::openfl::text::TextField >()->set_y(_g35);
	HX_STACK_LINE(98)
	this->addChild(this->tfOut->__get((int)14).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(100)
	this->tfOut[(int)15] = this->getBasicTextField();
	HX_STACK_LINE(101)
	Float _g36 = this->tfOut->__get((int)7).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g36,"_g36");
	HX_STACK_LINE(101)
	this->tfOut->__get((int)15).StaticCast< ::openfl::text::TextField >()->set_x(_g36);
	HX_STACK_LINE(102)
	Float _g37 = this->tfOut->__get((int)0).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g37,"_g37");
	HX_STACK_LINE(102)
	Float _g38 = (_g37 + ::utilities::TextFieldFactory_obj::TF_HEIGHT);		HX_STACK_VAR(_g38,"_g38");
	HX_STACK_LINE(102)
	this->tfOut->__get((int)15).StaticCast< ::openfl::text::TextField >()->set_y(_g38);
	HX_STACK_LINE(103)
	this->addChild(this->tfOut->__get((int)15).StaticCast< ::openfl::text::TextField >());
	HX_STACK_LINE(105)
	::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/tfFrame.png")),this->tfFrameBmpLoadCompleteHandler_dyn(),null());
	HX_STACK_LINE(106)
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

Void RomRamDisplay_obj::tfFrameBmpLoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.RomRamDisplay","tfFrameBmpLoadCompleteHandler",0x2f13e119,"view.elements.RomRamDisplay.tfFrameBmpLoadCompleteHandler","view/elements/RomRamDisplay.hx",109,0x9486c3d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(110)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		this->tfFrame = _g;
		HX_STACK_LINE(111)
		this->tfFrame->set_name(HX_CSTRING("tfFrame"));
		HX_STACK_LINE(114)
		Float _g1 = this->tfFrame->set_scaleY(0.5);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(114)
		this->tfFrame->set_scaleX(_g1);
		HX_STACK_LINE(116)
		this->tfFrame->set_visible(false);
		HX_STACK_LINE(117)
		this->addChild(this->tfFrame);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RomRamDisplay_obj,tfFrameBmpLoadCompleteHandler,(void))

Void RomRamDisplay_obj::resetValues( Dynamic __o_powerOff){
Dynamic powerOff = __o_powerOff.Default(false);
	HX_STACK_FRAME("view.elements.RomRamDisplay","resetValues",0x3cbbf929,"view.elements.RomRamDisplay.resetValues","view/elements/RomRamDisplay.hx",121,0x9486c3d8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(powerOff,"powerOff")
{
		HX_STACK_LINE(121)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		while((true)){
			HX_STACK_LINE(121)
			if ((!(((_g < (int)16))))){
				HX_STACK_LINE(121)
				break;
			}
			HX_STACK_LINE(121)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(122)
			if ((powerOff)){
				HX_STACK_LINE(123)
				this->tfOut->__get(i).StaticCast< ::openfl::text::TextField >()->set_text(HX_CSTRING(""));
			}
			else{
				HX_STACK_LINE(125)
				this->tfOut->__get(i).StaticCast< ::openfl::text::TextField >()->set_text(HX_CSTRING("0"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RomRamDisplay_obj,resetValues,(void))

::openfl::text::TextField RomRamDisplay_obj::getBasicTextField( ){
	HX_STACK_FRAME("view.elements.RomRamDisplay","getBasicTextField",0x78ead78d,"view.elements.RomRamDisplay.getBasicTextField","view/elements/RomRamDisplay.hx",134,0x9486c3d8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	::openfl::text::TextField tf = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(136)
	::openfl::text::TextFormat _g = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Consolas Bold"),((int)12 * ::AppConstants_obj::SCALE_FACTOR),(int)65280,null(),null(),null(),null(),null(),::openfl::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(136)
	tf->set_defaultTextFormat(_g);
	HX_STACK_LINE(137)
	tf->embedFonts = true;
	HX_STACK_LINE(138)
	tf->set_textColor(this->textColor);
	HX_STACK_LINE(139)
	tf->set_border(true);
	HX_STACK_LINE(140)
	tf->set_borderColor((int)10526880);
	HX_STACK_LINE(141)
	tf->set_background(true);
	HX_STACK_LINE(142)
	tf->set_backgroundColor((int)0);
	HX_STACK_LINE(143)
	tf->set_width(((int)18 * ::AppConstants_obj::SCALE_FACTOR));
	HX_STACK_LINE(144)
	tf->set_height(((int)15 * ::AppConstants_obj::SCALE_FACTOR));
	HX_STACK_LINE(145)
	return tf;
}


HX_DEFINE_DYNAMIC_FUNC0(RomRamDisplay_obj,getBasicTextField,return )

Void RomRamDisplay_obj::loadMemory( Array< ::Dynamic > instructions){
{
		HX_STACK_FRAME("view.elements.RomRamDisplay","loadMemory",0x12a852af,"view.elements.RomRamDisplay.loadMemory","view/elements/RomRamDisplay.hx",153,0x9486c3d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instructions,"instructions")
		HX_STACK_LINE(153)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(153)
		int _g = instructions->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
		while((true)){
			HX_STACK_LINE(153)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(153)
				break;
			}
			HX_STACK_LINE(153)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(154)
			this->tfOut->__get(i).StaticCast< ::openfl::text::TextField >()->set_text(instructions->__get(i).StaticCast< ::model::vo::InstructionVO >()->hex);
			HX_STACK_LINE(155)
			this->tfOut->__get(i).StaticCast< ::openfl::text::TextField >()->set_textColor(this->textColor);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RomRamDisplay_obj,loadMemory,(void))

Void RomRamDisplay_obj::updateCell( Array< ::Dynamic > values,int pointer){
{
		HX_STACK_FRAME("view.elements.RomRamDisplay","updateCell",0x532f6533,"view.elements.RomRamDisplay.updateCell","view/elements/RomRamDisplay.hx",159,0x9486c3d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(values,"values")
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(160)
		::String _g = values->__get(pointer).StaticCast< ::model::vo::SnapshotVO >()->getHex();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(160)
		this->tfOut->__get(pointer).StaticCast< ::openfl::text::TextField >()->set_text(_g);
		HX_STACK_LINE(161)
		Float _g1 = this->tfOut->__get(pointer).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(161)
		Float _g2 = (_g1 - (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(161)
		this->tfFrame->set_x(_g2);
		HX_STACK_LINE(165)
		Float _g3 = this->tfOut->__get(pointer).StaticCast< ::openfl::text::TextField >()->get_y();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(165)
		Float _g4 = (_g3 - (int)1);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(165)
		this->tfFrame->set_y(_g4);
		HX_STACK_LINE(167)
		this->tfFrame->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RomRamDisplay_obj,updateCell,(void))

Void RomRamDisplay_obj::setPointer( int pointer){
{
		HX_STACK_FRAME("view.elements.RomRamDisplay","setPointer",0xfcbe3e23,"view.elements.RomRamDisplay.setPointer","view/elements/RomRamDisplay.hx",170,0x9486c3d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(171)
		Float _g = this->tfOut->__get(pointer).StaticCast< ::openfl::text::TextField >()->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(171)
		Float _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(171)
		this->tfFrame->set_x(_g1);
		HX_STACK_LINE(175)
		Float _g2 = this->tfOut->__get(pointer).StaticCast< ::openfl::text::TextField >()->get_y();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(175)
		Float _g3 = (_g2 - (int)1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(175)
		this->tfFrame->set_y(_g3);
		HX_STACK_LINE(177)
		this->tfFrame->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RomRamDisplay_obj,setPointer,(void))

Void RomRamDisplay_obj::resetPointer( ){
{
		HX_STACK_FRAME("view.elements.RomRamDisplay","resetPointer",0xc8736996,"view.elements.RomRamDisplay.resetPointer","view/elements/RomRamDisplay.hx",182,0x9486c3d8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(182)
		this->tfFrame->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RomRamDisplay_obj,resetPointer,(void))

Void RomRamDisplay_obj::clear( Dynamic __o_powerOff){
Dynamic powerOff = __o_powerOff.Default(false);
	HX_STACK_FRAME("view.elements.RomRamDisplay","clear",0xd76cc1a5,"view.elements.RomRamDisplay.clear","view/elements/RomRamDisplay.hx",185,0x9486c3d8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(powerOff,"powerOff")
{
		HX_STACK_LINE(186)
		this->resetValues(powerOff);
		HX_STACK_LINE(187)
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
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RomRamDisplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tfOut,"tfOut");
	HX_VISIT_MEMBER_NAME(textColor,"textColor");
	HX_VISIT_MEMBER_NAME(tfFrame,"tfFrame");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
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
		if (HX_FIELD_EQ(inName,"tfFrame") ) { tfFrame=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
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
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(RomRamDisplay_obj,tfFrame),HX_CSTRING("tfFrame")},
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
