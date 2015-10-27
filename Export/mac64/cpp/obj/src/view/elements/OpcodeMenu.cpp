#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
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
#ifndef INCLUDED_view_elements_LabelButton
#include <view/elements/LabelButton.h>
#endif
#ifndef INCLUDED_view_elements_OpcodeMenu
#include <view/elements/OpcodeMenu.h>
#endif
namespace view{
namespace elements{

Void OpcodeMenu_obj::__construct()
{
HX_STACK_FRAME("view.elements.OpcodeMenu","new",0xd11bfa6d,"view.elements.OpcodeMenu.new","view/elements/OpcodeMenu.hx",23,0xe23c0dc3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->createMenu();
}
;
	return null();
}

//OpcodeMenu_obj::~OpcodeMenu_obj() { }

Dynamic OpcodeMenu_obj::__CreateEmpty() { return  new OpcodeMenu_obj; }
hx::ObjectPtr< OpcodeMenu_obj > OpcodeMenu_obj::__new()
{  hx::ObjectPtr< OpcodeMenu_obj > result = new OpcodeMenu_obj();
	result->__construct();
	return result;}

Dynamic OpcodeMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpcodeMenu_obj > result = new OpcodeMenu_obj();
	result->__construct();
	return result;}

Void OpcodeMenu_obj::createMenu( ){
{
		HX_STACK_FRAME("view.elements.OpcodeMenu","createMenu",0xe167e84e,"view.elements.OpcodeMenu.createMenu","view/elements/OpcodeMenu.hx",28,0xe23c0dc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		this->menuContainer = _g;
		HX_STACK_LINE(30)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		this->menuButtons = _g1;
		HX_STACK_LINE(31)
		Float w = (int)50;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(32)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(33)
		int _g2 = (i)++;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(33)
		this->menuButtons[_g2] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("NOP"),null(),null());
		HX_STACK_LINE(34)
		int _g3 = (i)++;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(34)
		this->menuButtons[_g3] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("MOV"),null(),null());
		HX_STACK_LINE(35)
		int _g4 = (i)++;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(35)
		this->menuButtons[_g4] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("LDI"),null(),null());
		HX_STACK_LINE(36)
		int _g5 = (i)++;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(36)
		this->menuButtons[_g5] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("ADD"),null(),null());
		HX_STACK_LINE(37)
		int _g6 = (i)++;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(37)
		this->menuButtons[_g6] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("SUB"),null(),null());
		HX_STACK_LINE(38)
		int _g7 = (i)++;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(38)
		this->menuButtons[_g7] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("INC"),null(),null());
		HX_STACK_LINE(39)
		int _g8 = (i)++;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(39)
		this->menuButtons[_g8] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("DEC"),null(),null());
		HX_STACK_LINE(40)
		int _g9 = (i)++;		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(40)
		this->menuButtons[_g9] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("SDA"),null(),null());
		HX_STACK_LINE(41)
		int _g10 = (i)++;		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(41)
		this->menuButtons[_g10] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("LDA"),null(),null());
		HX_STACK_LINE(42)
		int _g11 = (i)++;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(42)
		this->menuButtons[_g11] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("INP"),null(),null());
		HX_STACK_LINE(43)
		int _g12 = (i)++;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(43)
		this->menuButtons[_g12] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("OUT"),null(),null());
		HX_STACK_LINE(44)
		int _g13 = (i)++;		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(44)
		this->menuButtons[_g13] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("JE"),null(),null());
		HX_STACK_LINE(45)
		int _g14 = (i)++;		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(45)
		this->menuButtons[_g14] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("JNE"),null(),null());
		HX_STACK_LINE(46)
		int _g15 = (i)++;		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(46)
		this->menuButtons[_g15] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("JMP"),null(),null());
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			int _g16 = (int)0;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(47)
			int _g17 = this->menuButtons->length;		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(47)
			while((true)){
				HX_STACK_LINE(47)
				if ((!(((_g16 < _g17))))){
					HX_STACK_LINE(47)
					break;
				}
				HX_STACK_LINE(47)
				int i1 = (_g16)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(48)
				this->menuContainer->addChild(this->menuButtons->__get(i1).StaticCast< ::view::elements::LabelButton >());
				HX_STACK_LINE(49)
				this->menuButtons->__get(i1).StaticCast< ::view::elements::LabelButton >()->set_name((HX_CSTRING("opcodeMenuButton") + i1));
				HX_STACK_LINE(50)
				this->menuButtons->__get(i1).StaticCast< ::view::elements::LabelButton >()->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
				HX_STACK_LINE(51)
				if (((i1 > (int)0))){
					HX_STACK_LINE(52)
					Float _g161 = this->menuButtons->__get((i1 - (int)1)).StaticCast< ::view::elements::LabelButton >()->get_x();		HX_STACK_VAR(_g161,"_g161");
					HX_STACK_LINE(52)
					Float _g171 = (_g161 + (w * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g171,"_g171");
					HX_STACK_LINE(52)
					this->menuButtons->__get(i1).StaticCast< ::view::elements::LabelButton >()->set_x(_g171);
				}
			}
		}
		HX_STACK_LINE(55)
		this->addChild(this->menuContainer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OpcodeMenu_obj,createMenu,(void))

Void OpcodeMenu_obj::dataEventHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.elements.OpcodeMenu","dataEventHandler",0x2990b1ed,"view.elements.OpcodeMenu.dataEventHandler","view/elements/OpcodeMenu.hx",58,0xe23c0dc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(59)
		::String opcode = HX_CSTRING("");		HX_STACK_VAR(opcode,"opcode");
		HX_STACK_LINE(60)
		::String address = HX_CSTRING("");		HX_STACK_VAR(address,"address");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			Dynamic _g = event->data->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(61)
			Dynamic _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("opcodeMenuButton0"))){
				HX_STACK_LINE(63)
				opcode = HX_CSTRING("0000");
				HX_STACK_LINE(64)
				address = HX_CSTRING("0000");
			}
			else if (  ( _switch_1==HX_CSTRING("opcodeMenuButton1"))){
				HX_STACK_LINE(66)
				opcode = HX_CSTRING("0001");
			}
			else if (  ( _switch_1==HX_CSTRING("opcodeMenuButton2"))){
				HX_STACK_LINE(68)
				opcode = HX_CSTRING("0010");
			}
			else if (  ( _switch_1==HX_CSTRING("opcodeMenuButton3"))){
				HX_STACK_LINE(70)
				opcode = HX_CSTRING("0011");
				HX_STACK_LINE(71)
				address = HX_CSTRING("0000");
			}
			else if (  ( _switch_1==HX_CSTRING("opcodeMenuButton4"))){
				HX_STACK_LINE(73)
				opcode = HX_CSTRING("0011");
				HX_STACK_LINE(74)
				address = HX_CSTRING("0001");
			}
			else if (  ( _switch_1==HX_CSTRING("opcodeMenuButton5"))){
				HX_STACK_LINE(76)
				opcode = HX_CSTRING("0011");
				HX_STACK_LINE(77)
				address = HX_CSTRING("0010");
			}
			else if (  ( _switch_1==HX_CSTRING("opcodeMenuButton6"))){
				HX_STACK_LINE(79)
				opcode = HX_CSTRING("0011");
				HX_STACK_LINE(80)
				address = HX_CSTRING("0011");
			}
			else if (  ( _switch_1==HX_CSTRING("opcodeMenuButton7"))){
				HX_STACK_LINE(82)
				opcode = HX_CSTRING("0100");
			}
			else if (  ( _switch_1==HX_CSTRING("opcodeMenuButton8"))){
				HX_STACK_LINE(84)
				opcode = HX_CSTRING("0101");
			}
			else if (  ( _switch_1==HX_CSTRING("opcodeMenuButton9"))){
				HX_STACK_LINE(86)
				opcode = HX_CSTRING("0110");
			}
			else if (  ( _switch_1==HX_CSTRING("opcodeMenuButton10"))){
				HX_STACK_LINE(88)
				opcode = HX_CSTRING("0111");
			}
			else if (  ( _switch_1==HX_CSTRING("opcodeMenuButton11"))){
				HX_STACK_LINE(90)
				opcode = HX_CSTRING("1000");
			}
			else if (  ( _switch_1==HX_CSTRING("opcodeMenuButton12"))){
				HX_STACK_LINE(92)
				opcode = HX_CSTRING("1001");
			}
			else if (  ( _switch_1==HX_CSTRING("opcodeMenuButton13"))){
				HX_STACK_LINE(94)
				opcode = HX_CSTRING("1010");
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::String &address,::String &opcode,::events::AppEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/OpcodeMenu.hx",96,0xe23c0dc3)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , event->data->__Field(HX_CSTRING("id"),true),false);
					__result->Add(HX_CSTRING("opcode") , opcode,false);
					__result->Add(HX_CSTRING("address") , address,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(96)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(address,opcode,event),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OpcodeMenu_obj,dataEventHandler,(void))

Void OpcodeMenu_obj::destroy( ){
{
		HX_STACK_FRAME("view.elements.OpcodeMenu","destroy",0x49e0e187,"view.elements.OpcodeMenu.destroy","view/elements/OpcodeMenu.hx",103,0xe23c0dc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(104)
			int _g = this->menuButtons->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(105)
				this->menuButtons->__get(i).StaticCast< ::view::elements::LabelButton >()->destroy();
				HX_STACK_LINE(106)
				this->menuContainer->removeChild(this->menuButtons->__get(i).StaticCast< ::view::elements::LabelButton >());
			}
		}
		HX_STACK_LINE(108)
		this->removeChild(this->menuContainer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OpcodeMenu_obj,destroy,(void))


OpcodeMenu_obj::OpcodeMenu_obj()
{
}

void OpcodeMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OpcodeMenu);
	HX_MARK_MEMBER_NAME(menuContainer,"menuContainer");
	HX_MARK_MEMBER_NAME(menuButtons,"menuButtons");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OpcodeMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menuContainer,"menuContainer");
	HX_VISIT_MEMBER_NAME(menuButtons,"menuButtons");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic OpcodeMenu_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createMenu") ) { return createMenu_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"menuButtons") ) { return menuButtons; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"menuContainer") ) { return menuContainer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dataEventHandler") ) { return dataEventHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OpcodeMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"menuButtons") ) { menuButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"menuContainer") ) { menuContainer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpcodeMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("menuContainer"));
	outFields->push(HX_CSTRING("menuButtons"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(OpcodeMenu_obj,menuContainer),HX_CSTRING("menuContainer")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(OpcodeMenu_obj,menuButtons),HX_CSTRING("menuButtons")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("menuContainer"),
	HX_CSTRING("menuButtons"),
	HX_CSTRING("createMenu"),
	HX_CSTRING("dataEventHandler"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpcodeMenu_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpcodeMenu_obj::__mClass,"__mClass");
};

#endif

Class OpcodeMenu_obj::__mClass;

void OpcodeMenu_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.elements.OpcodeMenu"), hx::TCanCast< OpcodeMenu_obj> ,sStaticFields,sMemberFields,
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

void OpcodeMenu_obj::__boot()
{
}

} // end namespace view
} // end namespace elements
