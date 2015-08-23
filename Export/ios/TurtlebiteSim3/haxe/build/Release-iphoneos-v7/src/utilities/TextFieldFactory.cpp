#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_utilities_TextFieldFactory
#include <utilities/TextFieldFactory.h>
#endif
namespace utilities{

Void TextFieldFactory_obj::__construct()
{
HX_STACK_FRAME("utilities.TextFieldFactory","new",0xd3205f33,"utilities.TextFieldFactory.new","utilities/TextFieldFactory.hx",45,0x3bb76c3c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//TextFieldFactory_obj::~TextFieldFactory_obj() { }

Dynamic TextFieldFactory_obj::__CreateEmpty() { return  new TextFieldFactory_obj; }
hx::ObjectPtr< TextFieldFactory_obj > TextFieldFactory_obj::__new()
{  hx::ObjectPtr< TextFieldFactory_obj > result = new TextFieldFactory_obj();
	result->__construct();
	return result;}

Dynamic TextFieldFactory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFieldFactory_obj > result = new TextFieldFactory_obj();
	result->__construct();
	return result;}

int TextFieldFactory_obj::TF_WIDTH;

int TextFieldFactory_obj::TF_HEIGHT;

Float TextFieldFactory_obj::SCALE_FACTOR;

::openfl::_legacy::text::TextFormat TextFieldFactory_obj::TEXT_FORMAT;

::openfl::_legacy::text::TextFormat TextFieldFactory_obj::TEXT_FORMAT_CENTERED;

::openfl::_legacy::text::TextFormat TextFieldFactory_obj::TEXT_FORMAT_BOLD;

::openfl::_legacy::text::TextFormat TextFieldFactory_obj::TEXT_FORMAT_CENTERED_BOLD;

::openfl::_legacy::text::TextFormat TextFieldFactory_obj::TEXT_FORMAT_BUTTON_LABEL;

::openfl::_legacy::text::TextFormat TextFieldFactory_obj::OUTPUT_TEXT_FORMAT_BOLD;

::openfl::_legacy::text::TextFormat TextFieldFactory_obj::STEP_TEXT_FORMAT;

int TextFieldFactory_obj::TEXT_ACTIVE_COLOR;

int TextFieldFactory_obj::TEXT_INACTIVE_COLOR;

::openfl::_legacy::text::TextField TextFieldFactory_obj::getOutputTFBold( ){
	HX_STACK_FRAME("utilities.TextFieldFactory","getOutputTFBold",0x19c2b2e1,"utilities.TextFieldFactory.getOutputTFBold","utilities/TextFieldFactory.hx",48,0x3bb76c3c)
	HX_STACK_LINE(49)
	::openfl::_legacy::text::TextField tf = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(50)
	tf->set_defaultTextFormat(::utilities::TextFieldFactory_obj::OUTPUT_TEXT_FORMAT_BOLD);
	HX_STACK_LINE(51)
	tf->set_embedFonts(true);
	HX_STACK_LINE(52)
	tf->set_textColor(::utilities::TextFieldFactory_obj::TEXT_ACTIVE_COLOR);
	HX_STACK_LINE(53)
	tf->set_border(true);
	HX_STACK_LINE(54)
	tf->set_borderColor((int)10526880);
	HX_STACK_LINE(55)
	tf->set_background(true);
	HX_STACK_LINE(56)
	tf->set_backgroundColor((int)0);
	HX_STACK_LINE(57)
	tf->set_width(::utilities::TextFieldFactory_obj::TF_WIDTH);
	HX_STACK_LINE(58)
	tf->set_height(::utilities::TextFieldFactory_obj::TF_HEIGHT);
	HX_STACK_LINE(59)
	return tf;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TextFieldFactory_obj,getOutputTFBold,return )

::openfl::_legacy::text::TextField TextFieldFactory_obj::getInstructionOutput( ){
	HX_STACK_FRAME("utilities.TextFieldFactory","getInstructionOutput",0xfb750206,"utilities.TextFieldFactory.getInstructionOutput","utilities/TextFieldFactory.hx",62,0x3bb76c3c)
	HX_STACK_LINE(63)
	::openfl::_legacy::text::TextField tf = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(65)
	::openfl::_legacy::text::TextFormat _g = ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Myriad Pro"),(int)40,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(65)
	tf->set_defaultTextFormat(_g);
	HX_STACK_LINE(69)
	tf->set_embedFonts(true);
	HX_STACK_LINE(70)
	tf->set_textColor((int)16777215);
	HX_STACK_LINE(71)
	tf->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(72)
	return tf;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TextFieldFactory_obj,getInstructionOutput,return )


TextFieldFactory_obj::TextFieldFactory_obj()
{
}

Dynamic TextFieldFactory_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"TF_WIDTH") ) { return TF_WIDTH; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TF_HEIGHT") ) { return TF_HEIGHT; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TEXT_FORMAT") ) { return TEXT_FORMAT; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SCALE_FACTOR") ) { return SCALE_FACTOR; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getOutputTFBold") ) { return getOutputTFBold_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"TEXT_FORMAT_BOLD") ) { return TEXT_FORMAT_BOLD; }
		if (HX_FIELD_EQ(inName,"STEP_TEXT_FORMAT") ) { return STEP_TEXT_FORMAT; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"TEXT_ACTIVE_COLOR") ) { return TEXT_ACTIVE_COLOR; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TEXT_INACTIVE_COLOR") ) { return TEXT_INACTIVE_COLOR; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"TEXT_FORMAT_CENTERED") ) { return TEXT_FORMAT_CENTERED; }
		if (HX_FIELD_EQ(inName,"getInstructionOutput") ) { return getInstructionOutput_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"OUTPUT_TEXT_FORMAT_BOLD") ) { return OUTPUT_TEXT_FORMAT_BOLD; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXT_FORMAT_BUTTON_LABEL") ) { return TEXT_FORMAT_BUTTON_LABEL; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"TEXT_FORMAT_CENTERED_BOLD") ) { return TEXT_FORMAT_CENTERED_BOLD; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextFieldFactory_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"TF_WIDTH") ) { TF_WIDTH=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TF_HEIGHT") ) { TF_HEIGHT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TEXT_FORMAT") ) { TEXT_FORMAT=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SCALE_FACTOR") ) { SCALE_FACTOR=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"TEXT_FORMAT_BOLD") ) { TEXT_FORMAT_BOLD=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STEP_TEXT_FORMAT") ) { STEP_TEXT_FORMAT=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"TEXT_ACTIVE_COLOR") ) { TEXT_ACTIVE_COLOR=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TEXT_INACTIVE_COLOR") ) { TEXT_INACTIVE_COLOR=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"TEXT_FORMAT_CENTERED") ) { TEXT_FORMAT_CENTERED=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"OUTPUT_TEXT_FORMAT_BOLD") ) { OUTPUT_TEXT_FORMAT_BOLD=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXT_FORMAT_BUTTON_LABEL") ) { TEXT_FORMAT_BUTTON_LABEL=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"TEXT_FORMAT_CENTERED_BOLD") ) { TEXT_FORMAT_CENTERED_BOLD=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFieldFactory_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TF_WIDTH"),
	HX_CSTRING("TF_HEIGHT"),
	HX_CSTRING("SCALE_FACTOR"),
	HX_CSTRING("TEXT_FORMAT"),
	HX_CSTRING("TEXT_FORMAT_CENTERED"),
	HX_CSTRING("TEXT_FORMAT_BOLD"),
	HX_CSTRING("TEXT_FORMAT_CENTERED_BOLD"),
	HX_CSTRING("TEXT_FORMAT_BUTTON_LABEL"),
	HX_CSTRING("OUTPUT_TEXT_FORMAT_BOLD"),
	HX_CSTRING("STEP_TEXT_FORMAT"),
	HX_CSTRING("TEXT_ACTIVE_COLOR"),
	HX_CSTRING("TEXT_INACTIVE_COLOR"),
	HX_CSTRING("getOutputTFBold"),
	HX_CSTRING("getInstructionOutput"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldFactory_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextFieldFactory_obj::TF_WIDTH,"TF_WIDTH");
	HX_MARK_MEMBER_NAME(TextFieldFactory_obj::TF_HEIGHT,"TF_HEIGHT");
	HX_MARK_MEMBER_NAME(TextFieldFactory_obj::SCALE_FACTOR,"SCALE_FACTOR");
	HX_MARK_MEMBER_NAME(TextFieldFactory_obj::TEXT_FORMAT,"TEXT_FORMAT");
	HX_MARK_MEMBER_NAME(TextFieldFactory_obj::TEXT_FORMAT_CENTERED,"TEXT_FORMAT_CENTERED");
	HX_MARK_MEMBER_NAME(TextFieldFactory_obj::TEXT_FORMAT_BOLD,"TEXT_FORMAT_BOLD");
	HX_MARK_MEMBER_NAME(TextFieldFactory_obj::TEXT_FORMAT_CENTERED_BOLD,"TEXT_FORMAT_CENTERED_BOLD");
	HX_MARK_MEMBER_NAME(TextFieldFactory_obj::TEXT_FORMAT_BUTTON_LABEL,"TEXT_FORMAT_BUTTON_LABEL");
	HX_MARK_MEMBER_NAME(TextFieldFactory_obj::OUTPUT_TEXT_FORMAT_BOLD,"OUTPUT_TEXT_FORMAT_BOLD");
	HX_MARK_MEMBER_NAME(TextFieldFactory_obj::STEP_TEXT_FORMAT,"STEP_TEXT_FORMAT");
	HX_MARK_MEMBER_NAME(TextFieldFactory_obj::TEXT_ACTIVE_COLOR,"TEXT_ACTIVE_COLOR");
	HX_MARK_MEMBER_NAME(TextFieldFactory_obj::TEXT_INACTIVE_COLOR,"TEXT_INACTIVE_COLOR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldFactory_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFieldFactory_obj::TF_WIDTH,"TF_WIDTH");
	HX_VISIT_MEMBER_NAME(TextFieldFactory_obj::TF_HEIGHT,"TF_HEIGHT");
	HX_VISIT_MEMBER_NAME(TextFieldFactory_obj::SCALE_FACTOR,"SCALE_FACTOR");
	HX_VISIT_MEMBER_NAME(TextFieldFactory_obj::TEXT_FORMAT,"TEXT_FORMAT");
	HX_VISIT_MEMBER_NAME(TextFieldFactory_obj::TEXT_FORMAT_CENTERED,"TEXT_FORMAT_CENTERED");
	HX_VISIT_MEMBER_NAME(TextFieldFactory_obj::TEXT_FORMAT_BOLD,"TEXT_FORMAT_BOLD");
	HX_VISIT_MEMBER_NAME(TextFieldFactory_obj::TEXT_FORMAT_CENTERED_BOLD,"TEXT_FORMAT_CENTERED_BOLD");
	HX_VISIT_MEMBER_NAME(TextFieldFactory_obj::TEXT_FORMAT_BUTTON_LABEL,"TEXT_FORMAT_BUTTON_LABEL");
	HX_VISIT_MEMBER_NAME(TextFieldFactory_obj::OUTPUT_TEXT_FORMAT_BOLD,"OUTPUT_TEXT_FORMAT_BOLD");
	HX_VISIT_MEMBER_NAME(TextFieldFactory_obj::STEP_TEXT_FORMAT,"STEP_TEXT_FORMAT");
	HX_VISIT_MEMBER_NAME(TextFieldFactory_obj::TEXT_ACTIVE_COLOR,"TEXT_ACTIVE_COLOR");
	HX_VISIT_MEMBER_NAME(TextFieldFactory_obj::TEXT_INACTIVE_COLOR,"TEXT_INACTIVE_COLOR");
};

#endif

Class TextFieldFactory_obj::__mClass;

void TextFieldFactory_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("utilities.TextFieldFactory"), hx::TCanCast< TextFieldFactory_obj> ,sStaticFields,sMemberFields,
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

void TextFieldFactory_obj::__boot()
{
	TF_WIDTH= (int)36;
	TF_HEIGHT= (int)28;
	SCALE_FACTOR= (int)2;
	TEXT_FORMAT= ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Myriad Pro"),(int)24,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	TEXT_FORMAT_CENTERED= ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Myriad Pro"),(int)24,(int)16777215,null(),null(),null(),null(),null(),::openfl::_legacy::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());
	TEXT_FORMAT_BOLD= ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Myriad Pro Bold"),(int)24,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	TEXT_FORMAT_CENTERED_BOLD= ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Myriad Pro Bold"),(int)24,(int)16777215,null(),null(),null(),null(),null(),::openfl::_legacy::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());
	TEXT_FORMAT_BUTTON_LABEL= ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Myriad Pro Bold"),(int)28,(int)16777215,null(),null(),null(),null(),null(),::openfl::_legacy::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());
	OUTPUT_TEXT_FORMAT_BOLD= ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Consolas Bold"),(int)24,(int)65280,null(),null(),null(),null(),null(),::openfl::_legacy::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());
	STEP_TEXT_FORMAT= ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Consolas Bold"),(int)36,(int)65280,null(),null(),null(),null(),null(),::openfl::_legacy::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());
	TEXT_ACTIVE_COLOR= (int)65280;
	TEXT_INACTIVE_COLOR= (int)21760;
}

} // end namespace utilities
