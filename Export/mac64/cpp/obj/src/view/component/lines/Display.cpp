#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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
#ifndef INCLUDED_view_component_lines_Display
#include <view/component/lines/Display.h>
#endif
namespace view{
namespace component{
namespace lines{

Void Display_obj::__construct()
{
HX_STACK_FRAME("view.component.lines.Display","new",0x1b0095ab,"view.component.lines.Display.new","view/component/lines/Display.hx",16,0x040a02a8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(18)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
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

Void Display_obj::addedToStageHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("view.component.lines.Display","addedToStageHandler",0x6dd162f2,"view.component.lines.Display.addedToStageHandler","view/component/lines/Display.hx",21,0x040a02a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(22)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(23)
		::openfl::text::TextField _g = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		this->tf = _g;
		HX_STACK_LINE(27)
		::openfl::text::TextFormat _g1 = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Myriad Pro Bold"),(int)18,(int)11184895,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		this->tf->set_defaultTextFormat(_g1);
		HX_STACK_LINE(29)
		this->tf->set_textColor((int)0);
		HX_STACK_LINE(30)
		this->tf->set_x(((int)817 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(31)
		this->tf->set_y(((int)520 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(34)
		this->tf->set_width(((int)145 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(35)
		this->tf->set_height(((int)100 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(36)
		this->tf->multiline = true;
		HX_STACK_LINE(37)
		this->tf->set_wordWrap(true);
		HX_STACK_LINE(38)
		this->tf->set_text(HX_CSTRING(""));
		HX_STACK_LINE(39)
		this->addChild(this->tf);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Display_obj,addedToStageHandler,(void))

Void Display_obj::setOutput( ::String value){
{
		HX_STACK_FRAME("view.component.lines.Display","setOutput",0x0300d3ce,"view.component.lines.Display.setOutput","view/component/lines/Display.hx",42,0x040a02a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(43)
		::String _g = this->tf->get_text();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		::String _g1 = (_g + value);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		this->tf->set_text(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Display_obj,setOutput,(void))

Void Display_obj::clear( ){
{
		HX_STACK_FRAME("view.component.lines.Display","clear",0xfbbc5f98,"view.component.lines.Display.clear","view/component/lines/Display.hx",47,0x040a02a8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->tf->set_text(HX_CSTRING(""));
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
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Display_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tf,"tf");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
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
		if (HX_FIELD_EQ(inName,"setOutput") ) { return setOutput_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Display_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"tf") ) { tf=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Display_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tf"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Display_obj,tf),HX_CSTRING("tf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tf"),
	HX_CSTRING("addedToStageHandler"),
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
