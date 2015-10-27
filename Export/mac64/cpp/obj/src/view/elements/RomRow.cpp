#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
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
#ifndef INCLUDED_view_elements_RomRow
#include <view/elements/RomRow.h>
#endif
namespace view{
namespace elements{

Void RomRow_obj::__construct(::model::vo::InstructionVO instruction)
{
HX_STACK_FRAME("view.elements.RomRow","new",0x1c65d84a,"view.elements.RomRow.new","view/elements/RomRow.hx",28,0x978cca86)
HX_STACK_THIS(this)
HX_STACK_ARG(instruction,"instruction")
{
	HX_STACK_LINE(29)
	super::__construct();
	HX_STACK_LINE(30)
	this->createTfPointer();
	HX_STACK_LINE(31)
	this->createTfOpcode();
	HX_STACK_LINE(32)
	this->createTfAddress();
	HX_STACK_LINE(33)
	this->createTfCode();
	HX_STACK_LINE(34)
	this->createTfHex();
	HX_STACK_LINE(35)
	this->createTfDescription();
	HX_STACK_LINE(36)
	if (((instruction != null()))){
		HX_STACK_LINE(37)
		this->populate(instruction);
	}
}
;
	return null();
}

//RomRow_obj::~RomRow_obj() { }

Dynamic RomRow_obj::__CreateEmpty() { return  new RomRow_obj; }
hx::ObjectPtr< RomRow_obj > RomRow_obj::__new(::model::vo::InstructionVO instruction)
{  hx::ObjectPtr< RomRow_obj > result = new RomRow_obj();
	result->__construct(instruction);
	return result;}

Dynamic RomRow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RomRow_obj > result = new RomRow_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RomRow_obj::createTfPointer( ){
{
		HX_STACK_FRAME("view.elements.RomRow","createTfPointer",0x1357edb9,"view.elements.RomRow.createTfPointer","view/elements/RomRow.hx",41,0x978cca86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		::openfl::text::TextField _g = this->getBasicTextField();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		this->tfPointer = _g;
		HX_STACK_LINE(43)
		this->tfPointer->set_width(((int)35 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(44)
		this->addChild(this->tfPointer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RomRow_obj,createTfPointer,(void))

Void RomRow_obj::createTfOpcode( ){
{
		HX_STACK_FRAME("view.elements.RomRow","createTfOpcode",0x91a23d52,"view.elements.RomRow.createTfOpcode","view/elements/RomRow.hx",47,0x978cca86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		::openfl::text::TextField _g = this->getBasicTextField();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		this->tfOpcode = _g;
		HX_STACK_LINE(49)
		this->tfOpcode->set_width(((int)60 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(50)
		Float _g1 = this->tfPointer->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		Float _g2 = this->tfPointer->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(50)
		Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(50)
		this->tfOpcode->set_x(_g3);
		HX_STACK_LINE(51)
		this->tfOpcode->set_textColor((int)16711680);
		HX_STACK_LINE(52)
		this->addChild(this->tfOpcode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RomRow_obj,createTfOpcode,(void))

Void RomRow_obj::createTfAddress( ){
{
		HX_STACK_FRAME("view.elements.RomRow","createTfAddress",0x5f419eb0,"view.elements.RomRow.createTfAddress","view/elements/RomRow.hx",55,0x978cca86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		::openfl::text::TextField _g = this->getBasicTextField();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		this->tfAddress = _g;
		HX_STACK_LINE(57)
		this->tfAddress->set_width(((int)90 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(58)
		Float _g1 = this->tfOpcode->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(58)
		Float _g2 = this->tfOpcode->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(58)
		Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(58)
		this->tfAddress->set_x(_g3);
		HX_STACK_LINE(59)
		this->tfAddress->set_textColor((int)16711680);
		HX_STACK_LINE(60)
		this->addChild(this->tfAddress);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RomRow_obj,createTfAddress,(void))

Void RomRow_obj::createTfCode( ){
{
		HX_STACK_FRAME("view.elements.RomRow","createTfCode",0x0a3eceb1,"view.elements.RomRow.createTfCode","view/elements/RomRow.hx",63,0x978cca86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		::openfl::text::TextField _g = this->getBasicTextField();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		this->tfCode = _g;
		HX_STACK_LINE(65)
		this->tfCode->set_width(((int)106 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(66)
		Float _g1 = this->tfAddress->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(66)
		Float _g2 = this->tfAddress->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(66)
		Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(66)
		this->tfCode->set_x(_g3);
		HX_STACK_LINE(67)
		this->tfCode->set_textColor((int)65280);
		HX_STACK_LINE(68)
		this->addChild(this->tfCode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RomRow_obj,createTfCode,(void))

Void RomRow_obj::createTfHex( ){
{
		HX_STACK_FRAME("view.elements.RomRow","createTfHex",0x203441d7,"view.elements.RomRow.createTfHex","view/elements/RomRow.hx",71,0x978cca86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		::openfl::text::TextField _g = this->getBasicTextField();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		this->tfHex = _g;
		HX_STACK_LINE(73)
		this->tfHex->set_width(((int)43 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(74)
		Float _g1 = this->tfCode->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		Float _g2 = this->tfCode->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(74)
		Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(74)
		this->tfHex->set_x(_g3);
		HX_STACK_LINE(75)
		this->tfHex->set_textColor((int)4494335);
		HX_STACK_LINE(76)
		this->addChild(this->tfHex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RomRow_obj,createTfHex,(void))

Void RomRow_obj::createTfDescription( ){
{
		HX_STACK_FRAME("view.elements.RomRow","createTfDescription",0x2ed363f8,"view.elements.RomRow.createTfDescription","view/elements/RomRow.hx",79,0x978cca86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::openfl::text::TextField _g = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		this->tfDescription = _g;
		HX_STACK_LINE(81)
		::openfl::text::TextFormat _g1 = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Myriad Pro"),((int)14 * ::AppConstants_obj::SCALE_FACTOR),(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		this->tfDescription->set_defaultTextFormat(_g1);
		HX_STACK_LINE(82)
		this->tfDescription->embedFonts = true;
		HX_STACK_LINE(83)
		this->tfDescription->set_selectable(false);
		HX_STACK_LINE(84)
		this->tfDescription->set_width(((int)465 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(85)
		Float _g2 = this->tfHex->get_x();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(85)
		Float _g3 = this->tfHex->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(85)
		Float _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(85)
		Float _g5 = (_g4 + ((int)5 * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(85)
		this->tfDescription->set_x(_g5);
		HX_STACK_LINE(86)
		this->tfDescription->set_y(((int)2 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(87)
		this->addChild(this->tfDescription);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RomRow_obj,createTfDescription,(void))

::openfl::text::TextField RomRow_obj::getBasicTextField( ){
	HX_STACK_FRAME("view.elements.RomRow","getBasicTextField",0xca0610df,"view.elements.RomRow.getBasicTextField","view/elements/RomRow.hx",90,0x978cca86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	::openfl::text::TextField tf = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(92)
	::openfl::text::TextFormat _g = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Consolas Bold"),((int)18 * ::AppConstants_obj::SCALE_FACTOR),(int)16777215,null(),null(),null(),null(),null(),::openfl::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(92)
	tf->set_defaultTextFormat(_g);
	HX_STACK_LINE(93)
	tf->embedFonts = true;
	HX_STACK_LINE(94)
	tf->set_selectable(false);
	HX_STACK_LINE(97)
	tf->set_height(((int)22 * ::AppConstants_obj::SCALE_FACTOR));
	HX_STACK_LINE(98)
	return tf;
}


HX_DEFINE_DYNAMIC_FUNC0(RomRow_obj,getBasicTextField,return )

Void RomRow_obj::populate( ::model::vo::InstructionVO instruction){
{
		HX_STACK_FRAME("view.elements.RomRow","populate",0x6d1ec6c0,"view.elements.RomRow.populate","view/elements/RomRow.hx",105,0x978cca86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instruction,"instruction")
		HX_STACK_LINE(106)
		::String _g = ::Std_obj::string(instruction->pointer);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		this->tfPointer->set_text(_g);
		HX_STACK_LINE(107)
		this->tfOpcode->set_text(instruction->asmOpcode);
		HX_STACK_LINE(108)
		this->tfAddress->set_text(instruction->asmAddress);
		HX_STACK_LINE(109)
		this->tfCode->set_text(((instruction->codeOpcode + HX_CSTRING(" ")) + instruction->codeAddress));
		HX_STACK_LINE(110)
		this->tfHex->set_text(instruction->hex);
		HX_STACK_LINE(111)
		::String _g1 = instruction->description.split(HX_CSTRING("x"))->join(instruction->asmAddress);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(111)
		this->tfDescription->set_text(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RomRow_obj,populate,(void))

Void RomRow_obj::clear( ){
{
		HX_STACK_FRAME("view.elements.RomRow","clear",0x12eec7f7,"view.elements.RomRow.clear","view/elements/RomRow.hx",114,0x978cca86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		this->tfPointer->set_text(HX_CSTRING(""));
		HX_STACK_LINE(116)
		this->tfOpcode->set_text(HX_CSTRING(""));
		HX_STACK_LINE(117)
		this->tfAddress->set_text(HX_CSTRING(""));
		HX_STACK_LINE(118)
		this->tfCode->set_text(HX_CSTRING(""));
		HX_STACK_LINE(119)
		this->tfHex->set_text(HX_CSTRING(""));
		HX_STACK_LINE(120)
		this->tfDescription->set_text(HX_CSTRING(""));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RomRow_obj,clear,(void))

Void RomRow_obj::destroy( ){
{
		HX_STACK_FRAME("view.elements.RomRow","destroy",0x3b6b71e4,"view.elements.RomRow.destroy","view/elements/RomRow.hx",123,0x978cca86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		this->removeChild(this->tfPointer);
		HX_STACK_LINE(125)
		this->removeChild(this->tfOpcode);
		HX_STACK_LINE(126)
		this->removeChild(this->tfAddress);
		HX_STACK_LINE(127)
		this->removeChild(this->tfCode);
		HX_STACK_LINE(128)
		this->removeChild(this->tfHex);
		HX_STACK_LINE(129)
		this->removeChild(this->tfDescription);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RomRow_obj,destroy,(void))


RomRow_obj::RomRow_obj()
{
}

void RomRow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RomRow);
	HX_MARK_MEMBER_NAME(tfPointer,"tfPointer");
	HX_MARK_MEMBER_NAME(tfOpcode,"tfOpcode");
	HX_MARK_MEMBER_NAME(tfAddress,"tfAddress");
	HX_MARK_MEMBER_NAME(tfCode,"tfCode");
	HX_MARK_MEMBER_NAME(tfHex,"tfHex");
	HX_MARK_MEMBER_NAME(tfDescription,"tfDescription");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RomRow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tfPointer,"tfPointer");
	HX_VISIT_MEMBER_NAME(tfOpcode,"tfOpcode");
	HX_VISIT_MEMBER_NAME(tfAddress,"tfAddress");
	HX_VISIT_MEMBER_NAME(tfCode,"tfCode");
	HX_VISIT_MEMBER_NAME(tfHex,"tfHex");
	HX_VISIT_MEMBER_NAME(tfDescription,"tfDescription");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RomRow_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tfHex") ) { return tfHex; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tfCode") ) { return tfCode; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tfOpcode") ) { return tfOpcode; }
		if (HX_FIELD_EQ(inName,"populate") ) { return populate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tfPointer") ) { return tfPointer; }
		if (HX_FIELD_EQ(inName,"tfAddress") ) { return tfAddress; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createTfHex") ) { return createTfHex_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createTfCode") ) { return createTfCode_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tfDescription") ) { return tfDescription; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createTfOpcode") ) { return createTfOpcode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTfPointer") ) { return createTfPointer_dyn(); }
		if (HX_FIELD_EQ(inName,"createTfAddress") ) { return createTfAddress_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getBasicTextField") ) { return getBasicTextField_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createTfDescription") ) { return createTfDescription_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RomRow_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tfHex") ) { tfHex=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tfCode") ) { tfCode=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tfOpcode") ) { tfOpcode=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tfPointer") ) { tfPointer=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tfAddress") ) { tfAddress=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tfDescription") ) { tfDescription=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RomRow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tfPointer"));
	outFields->push(HX_CSTRING("tfOpcode"));
	outFields->push(HX_CSTRING("tfAddress"));
	outFields->push(HX_CSTRING("tfCode"));
	outFields->push(HX_CSTRING("tfHex"));
	outFields->push(HX_CSTRING("tfDescription"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(RomRow_obj,tfPointer),HX_CSTRING("tfPointer")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(RomRow_obj,tfOpcode),HX_CSTRING("tfOpcode")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(RomRow_obj,tfAddress),HX_CSTRING("tfAddress")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(RomRow_obj,tfCode),HX_CSTRING("tfCode")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(RomRow_obj,tfHex),HX_CSTRING("tfHex")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(RomRow_obj,tfDescription),HX_CSTRING("tfDescription")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tfPointer"),
	HX_CSTRING("tfOpcode"),
	HX_CSTRING("tfAddress"),
	HX_CSTRING("tfCode"),
	HX_CSTRING("tfHex"),
	HX_CSTRING("tfDescription"),
	HX_CSTRING("createTfPointer"),
	HX_CSTRING("createTfOpcode"),
	HX_CSTRING("createTfAddress"),
	HX_CSTRING("createTfCode"),
	HX_CSTRING("createTfHex"),
	HX_CSTRING("createTfDescription"),
	HX_CSTRING("getBasicTextField"),
	HX_CSTRING("populate"),
	HX_CSTRING("clear"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RomRow_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RomRow_obj::__mClass,"__mClass");
};

#endif

Class RomRow_obj::__mClass;

void RomRow_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.elements.RomRow"), hx::TCanCast< RomRow_obj> ,sStaticFields,sMemberFields,
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

void RomRow_obj::__boot()
{
}

} // end namespace view
} // end namespace elements
