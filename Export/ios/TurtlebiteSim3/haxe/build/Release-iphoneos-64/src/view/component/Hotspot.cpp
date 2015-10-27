#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
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
#ifndef INCLUDED_view_component_Hotspot
#include <view/component/Hotspot.h>
#endif
#ifndef INCLUDED_view_elements_SimpleRectangle
#include <view/elements/SimpleRectangle.h>
#endif
namespace view{
namespace component{

Void Hotspot_obj::__construct()
{
HX_STACK_FRAME("view.component.Hotspot","new",0xedfa7767,"view.component.Hotspot.new","view/component/Hotspot.hx",25,0xe98f83ab)
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

//Hotspot_obj::~Hotspot_obj() { }

Dynamic Hotspot_obj::__CreateEmpty() { return  new Hotspot_obj; }
hx::ObjectPtr< Hotspot_obj > Hotspot_obj::__new()
{  hx::ObjectPtr< Hotspot_obj > result = new Hotspot_obj();
	result->__construct();
	return result;}

Dynamic Hotspot_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hotspot_obj > result = new Hotspot_obj();
	result->__construct();
	return result;}

Void Hotspot_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.Hotspot","addedToStageHandler",0xf96b7cae,"view.component.Hotspot.addedToStageHandler","view/component/Hotspot.hx",30,0xe98f83ab)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(31)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(32)
		this->createClockButton();
		HX_STACK_LINE(33)
		this->createAccumulatorButton();
		HX_STACK_LINE(34)
		this->createRomButton();
		HX_STACK_LINE(35)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Hotspot_obj,addedToStageHandler,(void))

Void Hotspot_obj::createClockButton( ){
{
		HX_STACK_FRAME("view.component.Hotspot","createClockButton",0xc9694e0b,"view.component.Hotspot.createClockButton","view/component/Hotspot.hx",38,0xe98f83ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::view::elements::SimpleRectangle s = ::view::elements::SimpleRectangle_obj::__new(((int)37 * ::AppConstants_obj::SCALE_FACTOR),((int)37 * ::AppConstants_obj::SCALE_FACTOR),::view::component::Hotspot_obj::COLOR,::view::component::Hotspot_obj::ALPHA,null(),null());		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(40)
		::openfl::_legacy::display::Sprite _g = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		this->clockButton = _g;
		HX_STACK_LINE(41)
		this->clockButton->addChild(s);
		HX_STACK_LINE(42)
		this->clockButton->buttonMode = true;
		HX_STACK_LINE(43)
		this->clockButton->set_x(((int)569 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(44)
		this->clockButton->set_y(((int)583 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(45)
		this->clockButton->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->clockButtonEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(46)
		this->addChild(this->clockButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hotspot_obj,createClockButton,(void))

Void Hotspot_obj::createAccumulatorButton( ){
{
		HX_STACK_FRAME("view.component.Hotspot","createAccumulatorButton",0xcba509c3,"view.component.Hotspot.createAccumulatorButton","view/component/Hotspot.hx",49,0xe98f83ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		::view::elements::SimpleRectangle s = ::view::elements::SimpleRectangle_obj::__new(((int)33 * ::AppConstants_obj::SCALE_FACTOR),((int)70 * ::AppConstants_obj::SCALE_FACTOR),::view::component::Hotspot_obj::COLOR,::view::component::Hotspot_obj::ALPHA,null(),null());		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(51)
		::openfl::_legacy::display::Sprite _g = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		this->accumulatorButton = _g;
		HX_STACK_LINE(52)
		this->accumulatorButton->addChild(s);
		HX_STACK_LINE(53)
		this->accumulatorButton->buttonMode = true;
		HX_STACK_LINE(54)
		this->accumulatorButton->set_x(((int)767 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(55)
		this->accumulatorButton->set_y(((int)215 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(56)
		this->accumulatorButton->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->accumulatorButtonEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(57)
		this->addChild(this->accumulatorButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hotspot_obj,createAccumulatorButton,(void))

Void Hotspot_obj::createRomButton( ){
{
		HX_STACK_FRAME("view.component.Hotspot","createRomButton",0x6935f30d,"view.component.Hotspot.createRomButton","view/component/Hotspot.hx",60,0xe98f83ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		::view::elements::SimpleRectangle s = ::view::elements::SimpleRectangle_obj::__new(((int)147 * ::AppConstants_obj::SCALE_FACTOR),((int)52 * ::AppConstants_obj::SCALE_FACTOR),::view::component::Hotspot_obj::COLOR,::view::component::Hotspot_obj::ALPHA,null(),null());		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(62)
		::openfl::_legacy::display::Sprite _g = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		this->romButton = _g;
		HX_STACK_LINE(63)
		this->romButton->addChild(s);
		HX_STACK_LINE(64)
		this->romButton->buttonMode = true;
		HX_STACK_LINE(65)
		this->romButton->set_x(((int)431 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(66)
		this->romButton->set_y(((int)518 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(67)
		this->romButton->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->romButtonEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(68)
		this->addChild(this->romButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hotspot_obj,createRomButton,(void))

Void Hotspot_obj::clockButtonEventHandler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.Hotspot","clockButtonEventHandler",0x0eb725d7,"view.component.Hotspot.clockButtonEventHandler","view/component/Hotspot.hx",71,0xe98f83ab)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/Hotspot.hx",72,0xe98f83ab)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , HX_CSTRING("clockButton"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(72)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Hotspot_obj,clockButtonEventHandler,(void))

Void Hotspot_obj::accumulatorButtonEventHandler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.Hotspot","accumulatorButtonEventHandler",0xe710428f,"view.component.Hotspot.accumulatorButtonEventHandler","view/component/Hotspot.hx",75,0xe98f83ab)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/Hotspot.hx",76,0xe98f83ab)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , HX_CSTRING("accumulatorButton"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(76)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Hotspot_obj,accumulatorButtonEventHandler,(void))

Void Hotspot_obj::romButtonEventHandler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.Hotspot","romButtonEventHandler",0x006436d9,"view.component.Hotspot.romButtonEventHandler","view/component/Hotspot.hx",79,0xe98f83ab)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/Hotspot.hx",80,0xe98f83ab)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , HX_CSTRING("romButton"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(80)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Hotspot_obj,romButtonEventHandler,(void))

int Hotspot_obj::COLOR;

Float Hotspot_obj::ALPHA;


Hotspot_obj::Hotspot_obj()
{
}

void Hotspot_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hotspot);
	HX_MARK_MEMBER_NAME(clockButton,"clockButton");
	HX_MARK_MEMBER_NAME(accumulatorButton,"accumulatorButton");
	HX_MARK_MEMBER_NAME(romButton,"romButton");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Hotspot_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clockButton,"clockButton");
	HX_VISIT_MEMBER_NAME(accumulatorButton,"accumulatorButton");
	HX_VISIT_MEMBER_NAME(romButton,"romButton");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Hotspot_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"COLOR") ) { return COLOR; }
		if (HX_FIELD_EQ(inName,"ALPHA") ) { return ALPHA; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"romButton") ) { return romButton; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clockButton") ) { return clockButton; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createRomButton") ) { return createRomButton_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"accumulatorButton") ) { return accumulatorButton; }
		if (HX_FIELD_EQ(inName,"createClockButton") ) { return createClockButton_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"romButtonEventHandler") ) { return romButtonEventHandler_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createAccumulatorButton") ) { return createAccumulatorButton_dyn(); }
		if (HX_FIELD_EQ(inName,"clockButtonEventHandler") ) { return clockButtonEventHandler_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"accumulatorButtonEventHandler") ) { return accumulatorButtonEventHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hotspot_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"COLOR") ) { COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA") ) { ALPHA=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"romButton") ) { romButton=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clockButton") ) { clockButton=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"accumulatorButton") ) { accumulatorButton=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Hotspot_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("clockButton"));
	outFields->push(HX_CSTRING("accumulatorButton"));
	outFields->push(HX_CSTRING("romButton"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("COLOR"),
	HX_CSTRING("ALPHA"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Hotspot_obj,clockButton),HX_CSTRING("clockButton")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Hotspot_obj,accumulatorButton),HX_CSTRING("accumulatorButton")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Hotspot_obj,romButton),HX_CSTRING("romButton")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("clockButton"),
	HX_CSTRING("accumulatorButton"),
	HX_CSTRING("romButton"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("createClockButton"),
	HX_CSTRING("createAccumulatorButton"),
	HX_CSTRING("createRomButton"),
	HX_CSTRING("clockButtonEventHandler"),
	HX_CSTRING("accumulatorButtonEventHandler"),
	HX_CSTRING("romButtonEventHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hotspot_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Hotspot_obj::COLOR,"COLOR");
	HX_MARK_MEMBER_NAME(Hotspot_obj::ALPHA,"ALPHA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hotspot_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Hotspot_obj::COLOR,"COLOR");
	HX_VISIT_MEMBER_NAME(Hotspot_obj::ALPHA,"ALPHA");
};

#endif

Class Hotspot_obj::__mClass;

void Hotspot_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.Hotspot"), hx::TCanCast< Hotspot_obj> ,sStaticFields,sMemberFields,
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

void Hotspot_obj::__boot()
{
	COLOR= (int)16711935;
	ALPHA= (int)0;
}

} // end namespace view
} // end namespace component
