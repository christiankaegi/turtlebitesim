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
#ifndef INCLUDED_utilities_NumberFormat
#include <utilities/NumberFormat.h>
#endif
#ifndef INCLUDED_view_component_lines_Display
#include <view/component/lines/Display.h>
#endif
#ifndef INCLUDED_view_elements_SimpleRectangle
#include <view/elements/SimpleRectangle.h>
#endif
namespace view{
namespace component{
namespace lines{

Void Display_obj::__construct()
{
HX_STACK_FRAME("view.component.lines.Display","new",0x1b0095ab,"view.component.lines.Display.new","view/component/lines/Display.hx",25,0x040a02a8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(27)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Display_obj::~Display_obj() { }

Dynamic Display_obj::__CreateEmpty() { return  new Display_obj; }
hx::ObjectPtr< Display_obj > Display_obj::__new()
{  hx::ObjectPtr< Display_obj > result = new Display_obj();
	result->__construct();
	return result;}

Dynamic Display_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Display_obj > result = new Display_obj();
	result->__construct();
	return result;}

Void Display_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.lines.Display","addedToStageHandler",0x6dd162f2,"view.component.lines.Display.addedToStageHandler","view/component/lines/Display.hx",30,0x040a02a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(31)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(32)
		this->createOutputTextField();
		HX_STACK_LINE(33)
		this->createCharCodeButton();
		HX_STACK_LINE(34)
		this->createClickArea();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Display_obj,addedToStageHandler,(void))

Void Display_obj::createOutputTextField( ){
{
		HX_STACK_FRAME("view.component.lines.Display","createOutputTextField",0x06425dfb,"view.component.lines.Display.createOutputTextField","view/component/lines/Display.hx",37,0x040a02a8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		::openfl::_legacy::text::TextField _g = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		this->tf = _g;
		HX_STACK_LINE(42)
		::openfl::_legacy::text::TextFormat _g1 = ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Myriad Pro Bold"),(int)18,(int)11184895,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		this->tf->set_defaultTextFormat(_g1);
		HX_STACK_LINE(44)
		this->tf->set_textColor((int)0);
		HX_STACK_LINE(45)
		this->tf->set_x(((int)817 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(46)
		this->tf->set_y(((int)515 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(49)
		this->tf->set_height(((int)100 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(50)
		this->tf->set_width(((int)145 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(51)
		this->tf->set_multiline(true);
		HX_STACK_LINE(52)
		this->tf->set_wordWrap(true);
		HX_STACK_LINE(53)
		this->tf->set_text(HX_CSTRING(""));
		HX_STACK_LINE(54)
		this->addChild(this->tf);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,createOutputTextField,(void))

Void Display_obj::createCharCodeButton( ){
{
		HX_STACK_FRAME("view.component.lines.Display","createCharCodeButton",0x5e0303e6,"view.component.lines.Display.createCharCodeButton","view/component/lines/Display.hx",57,0x040a02a8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		::openfl::_legacy::display::Sprite _g = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		this->checkBoxContainer = _g;
		HX_STACK_LINE(59)
		this->checkBoxContainer->set_x(((int)812 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(60)
		this->checkBoxContainer->set_y(((int)618 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(61)
		Float size = ((int)14 * ::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(63)
		::view::elements::SimpleRectangle _g1 = ::view::elements::SimpleRectangle_obj::__new(size,size,(int)2565927,(int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		this->charCodeCheckbox = _g1;
		HX_STACK_LINE(64)
		this->checkBoxContainer->addChild(this->charCodeCheckbox);
		HX_STACK_LINE(66)
		::view::elements::SimpleRectangle _g2 = ::view::elements::SimpleRectangle_obj::__new(size,size,(int)9177353,(int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(66)
		this->charCodeCheckboxActive = _g2;
		HX_STACK_LINE(67)
		this->charCodeCheckboxActive->set_visible(false);
		HX_STACK_LINE(68)
		this->checkBoxContainer->addChild(this->charCodeCheckboxActive);
		HX_STACK_LINE(70)
		this->addChild(this->checkBoxContainer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,createCharCodeButton,(void))

Void Display_obj::createClickArea( ){
{
		HX_STACK_FRAME("view.component.lines.Display","createClickArea",0xbd0dbb24,"view.component.lines.Display.createClickArea","view/component/lines/Display.hx",74,0x040a02a8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		::view::elements::SimpleRectangle s = ::view::elements::SimpleRectangle_obj::__new(((int)170 * ::AppConstants_obj::SCALE_FACTOR),((int)130 * ::AppConstants_obj::SCALE_FACTOR),(int)16776960,(int)0);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(76)
		::openfl::_legacy::display::Sprite _g = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		this->clickArea = _g;
		HX_STACK_LINE(77)
		this->clickArea->addChild(s);
		HX_STACK_LINE(78)
		this->clickArea->buttonMode = true;
		HX_STACK_LINE(79)
		this->clickArea->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(80)
		this->clickArea->set_x(((int)805 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(81)
		this->clickArea->set_y(((int)505 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(82)
		this->addChild(this->clickArea);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,createClickArea,(void))

Void Display_obj::dataEventHandler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.lines.Display","dataEventHandler",0x98a167ef,"view.component.lines.Display.dataEventHandler","view/component/lines/Display.hx",85,0x040a02a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/lines/Display.hx",86,0x040a02a8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , HX_CSTRING("charCodeButton"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(86)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Display_obj,dataEventHandler,(void))

Void Display_obj::setCharCodeCheckBox( bool on){
{
		HX_STACK_FRAME("view.component.lines.Display","setCharCodeCheckBox",0x7b24a773,"view.component.lines.Display.setCharCodeCheckBox","view/component/lines/Display.hx",89,0x040a02a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(90)
		this->charCodeCheckboxActive->set_visible(on);
		HX_STACK_LINE(91)
		if ((on)){
			HX_STACK_LINE(92)
			this->tf->set_text(this->displayBufferChars);
		}
		else{
			HX_STACK_LINE(94)
			this->tf->set_text(this->displayBufferNumbers);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Display_obj,setCharCodeCheckBox,(void))

Void Display_obj::setOutput( int value){
{
		HX_STACK_FRAME("view.component.lines.Display","setOutput",0x0300d3ce,"view.component.lines.Display.setOutput","view/component/lines/Display.hx",98,0x040a02a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(99)
		::String _g = ::Std_obj::string(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		::String _g1 = (this->displayBufferNumbers + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		::String _g2 = (_g1 + HX_CSTRING(" "));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(99)
		this->displayBufferNumbers = _g2;
		HX_STACK_LINE(100)
		::String _g3 = ::utilities::NumberFormat_obj::decimalToChar(value);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(100)
		::String _g4 = (this->displayBufferChars + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(100)
		::String _g5 = (_g4 + HX_CSTRING(" "));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(100)
		this->displayBufferChars = _g5;
		HX_STACK_LINE(101)
		if ((this->charCodeCheckboxActive->get_visible())){
			HX_STACK_LINE(102)
			this->tf->set_text(this->displayBufferChars);
		}
		else{
			HX_STACK_LINE(104)
			this->tf->set_text(this->displayBufferNumbers);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Display_obj,setOutput,(void))

Void Display_obj::clear( ){
{
		HX_STACK_FRAME("view.component.lines.Display","clear",0xfbbc5f98,"view.component.lines.Display.clear","view/component/lines/Display.hx",108,0x040a02a8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		this->tf->set_text(HX_CSTRING(""));
		HX_STACK_LINE(110)
		this->displayBufferNumbers = HX_CSTRING("");
		HX_STACK_LINE(111)
		this->displayBufferChars = HX_CSTRING("");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,clear,(void))


Display_obj::Display_obj()
{
}

void Display_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Display);
	HX_MARK_MEMBER_NAME(tf,"tf");
	HX_MARK_MEMBER_NAME(checkBoxContainer,"checkBoxContainer");
	HX_MARK_MEMBER_NAME(charCodeCheckbox,"charCodeCheckbox");
	HX_MARK_MEMBER_NAME(charCodeCheckboxActive,"charCodeCheckboxActive");
	HX_MARK_MEMBER_NAME(clickArea,"clickArea");
	HX_MARK_MEMBER_NAME(displayBufferNumbers,"displayBufferNumbers");
	HX_MARK_MEMBER_NAME(displayBufferChars,"displayBufferChars");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Display_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tf,"tf");
	HX_VISIT_MEMBER_NAME(checkBoxContainer,"checkBoxContainer");
	HX_VISIT_MEMBER_NAME(charCodeCheckbox,"charCodeCheckbox");
	HX_VISIT_MEMBER_NAME(charCodeCheckboxActive,"charCodeCheckboxActive");
	HX_VISIT_MEMBER_NAME(clickArea,"clickArea");
	HX_VISIT_MEMBER_NAME(displayBufferNumbers,"displayBufferNumbers");
	HX_VISIT_MEMBER_NAME(displayBufferChars,"displayBufferChars");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Display_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"tf") ) { return tf; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickArea") ) { return clickArea; }
		if (HX_FIELD_EQ(inName,"setOutput") ) { return setOutput_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createClickArea") ) { return createClickArea_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"charCodeCheckbox") ) { return charCodeCheckbox; }
		if (HX_FIELD_EQ(inName,"dataEventHandler") ) { return dataEventHandler_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkBoxContainer") ) { return checkBoxContainer; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"displayBufferChars") ) { return displayBufferChars; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"setCharCodeCheckBox") ) { return setCharCodeCheckBox_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"displayBufferNumbers") ) { return displayBufferNumbers; }
		if (HX_FIELD_EQ(inName,"createCharCodeButton") ) { return createCharCodeButton_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createOutputTextField") ) { return createOutputTextField_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"charCodeCheckboxActive") ) { return charCodeCheckboxActive; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Display_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"tf") ) { tf=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickArea") ) { clickArea=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"charCodeCheckbox") ) { charCodeCheckbox=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkBoxContainer") ) { checkBoxContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"displayBufferChars") ) { displayBufferChars=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"displayBufferNumbers") ) { displayBufferNumbers=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"charCodeCheckboxActive") ) { charCodeCheckboxActive=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Display_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tf"));
	outFields->push(HX_CSTRING("checkBoxContainer"));
	outFields->push(HX_CSTRING("charCodeCheckbox"));
	outFields->push(HX_CSTRING("charCodeCheckboxActive"));
	outFields->push(HX_CSTRING("clickArea"));
	outFields->push(HX_CSTRING("displayBufferNumbers"));
	outFields->push(HX_CSTRING("displayBufferChars"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Display_obj,tf),HX_CSTRING("tf")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Display_obj,checkBoxContainer),HX_CSTRING("checkBoxContainer")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Display_obj,charCodeCheckbox),HX_CSTRING("charCodeCheckbox")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Display_obj,charCodeCheckboxActive),HX_CSTRING("charCodeCheckboxActive")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Display_obj,clickArea),HX_CSTRING("clickArea")},
	{hx::fsString,(int)offsetof(Display_obj,displayBufferNumbers),HX_CSTRING("displayBufferNumbers")},
	{hx::fsString,(int)offsetof(Display_obj,displayBufferChars),HX_CSTRING("displayBufferChars")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tf"),
	HX_CSTRING("checkBoxContainer"),
	HX_CSTRING("charCodeCheckbox"),
	HX_CSTRING("charCodeCheckboxActive"),
	HX_CSTRING("clickArea"),
	HX_CSTRING("displayBufferNumbers"),
	HX_CSTRING("displayBufferChars"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("createOutputTextField"),
	HX_CSTRING("createCharCodeButton"),
	HX_CSTRING("createClickArea"),
	HX_CSTRING("dataEventHandler"),
	HX_CSTRING("setCharCodeCheckBox"),
	HX_CSTRING("setOutput"),
	HX_CSTRING("clear"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Display_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Display_obj::__mClass,"__mClass");
};

#endif

Class Display_obj::__mClass;

void Display_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.lines.Display"), hx::TCanCast< Display_obj> ,sStaticFields,sMemberFields,
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

void Display_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace lines
