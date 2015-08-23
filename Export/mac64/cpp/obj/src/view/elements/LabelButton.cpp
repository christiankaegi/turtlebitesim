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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_utilities_TextFieldFactory
#include <utilities/TextFieldFactory.h>
#endif
#ifndef INCLUDED_view_elements_LabelButton
#include <view/elements/LabelButton.h>
#endif
#ifndef INCLUDED_view_elements_SimpleRectangle
#include <view/elements/SimpleRectangle.h>
#endif
namespace view{
namespace elements{

Void LabelButton_obj::__construct(Float width,::String __o_label,Dynamic __o_hasCheckbox,Dynamic __o_inactive)
{
HX_STACK_FRAME("view.elements.LabelButton","new",0x783687ca,"view.elements.LabelButton.new","view/elements/LabelButton.hx",10,0x10657ec6)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(__o_label,"label")
HX_STACK_ARG(__o_hasCheckbox,"hasCheckbox")
HX_STACK_ARG(__o_inactive,"inactive")
::String label = __o_label.Default(HX_CSTRING(""));
Dynamic hasCheckbox = __o_hasCheckbox.Default(false);
Dynamic inactive = __o_inactive.Default(false);
{
	HX_STACK_LINE(29)
	this->hasCheckbox = false;
	HX_STACK_LINE(41)
	super::__construct();
	HX_STACK_LINE(42)
	this->btnWidth = (width * ::AppConstants_obj::SCALE_FACTOR);
	HX_STACK_LINE(43)
	this->labelText = label;
	HX_STACK_LINE(44)
	this->inactive = inactive;
	HX_STACK_LINE(45)
	this->createBG();
	HX_STACK_LINE(46)
	this->hasCheckbox = hasCheckbox;
	HX_STACK_LINE(47)
	if ((this->hasCheckbox)){
		HX_STACK_LINE(48)
		this->createCheckbox();
	}
	HX_STACK_LINE(50)
	this->createLabel();
	HX_STACK_LINE(51)
	this->createClickArea();
}
;
	return null();
}

//LabelButton_obj::~LabelButton_obj() { }

Dynamic LabelButton_obj::__CreateEmpty() { return  new LabelButton_obj; }
hx::ObjectPtr< LabelButton_obj > LabelButton_obj::__new(Float width,::String __o_label,Dynamic __o_hasCheckbox,Dynamic __o_inactive)
{  hx::ObjectPtr< LabelButton_obj > result = new LabelButton_obj();
	result->__construct(width,__o_label,__o_hasCheckbox,__o_inactive);
	return result;}

Dynamic LabelButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LabelButton_obj > result = new LabelButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void LabelButton_obj::createBG( ){
{
		HX_STACK_FRAME("view.elements.LabelButton","createBG",0x91ae8017,"view.elements.LabelButton.createBG","view/elements/LabelButton.hx",55,0x10657ec6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		if ((this->inactive)){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",56,0x10657ec6)
					{
						HX_STACK_LINE(56)
						int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(56)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(56)
			::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(this->btnWidth,_Function_2_1::Block(),::view::elements::LabelButton_obj::BG_INACTIVE_COLOR,(int)1,true,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			this->bg = _g;
			HX_STACK_LINE(57)
			this->addChild(this->bg);
		}
		else{
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",59,0x10657ec6)
					{
						HX_STACK_LINE(59)
						int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(59)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(59)
			::view::elements::SimpleRectangle _g1 = ::view::elements::SimpleRectangle_obj::__new(this->btnWidth,_Function_2_1::Block(),::view::elements::LabelButton_obj::BG_COLOR,(int)1,true,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(59)
			this->bg = _g1;
			HX_STACK_LINE(60)
			this->addChild(this->bg);
			struct _Function_2_2{
				inline static Float Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",61,0x10657ec6)
					{
						HX_STACK_LINE(61)
						int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(61)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(61)
			::view::elements::SimpleRectangle _g2 = ::view::elements::SimpleRectangle_obj::__new(this->btnWidth,_Function_2_2::Block(),::view::elements::LabelButton_obj::BG_COLOR_HIGHLIGHT,0.2,null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(61)
			this->bgHighlight = _g2;
			HX_STACK_LINE(62)
			this->bgHighlight->set_visible(false);
			HX_STACK_LINE(63)
			this->addChild(this->bgHighlight);
			struct _Function_2_3{
				inline static Float Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",64,0x10657ec6)
					{
						HX_STACK_LINE(64)
						int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(64)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(64)
			::view::elements::SimpleRectangle _g3 = ::view::elements::SimpleRectangle_obj::__new(this->btnWidth,_Function_2_3::Block(),::view::elements::LabelButton_obj::BG_COLOR_ACTIVE,(int)1,null(),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(64)
			this->bgActive = _g3;
			HX_STACK_LINE(65)
			this->bgActive->set_visible(false);
			HX_STACK_LINE(66)
			this->addChild(this->bgActive);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LabelButton_obj,createBG,(void))

Void LabelButton_obj::createCheckbox( ){
{
		HX_STACK_FRAME("view.elements.LabelButton","createCheckbox",0xbf2e5e35,"view.elements.LabelButton.createCheckbox","view/elements/LabelButton.hx",70,0x10657ec6)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",71,0x10657ec6)
				{
					HX_STACK_LINE(71)
					int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(71)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",71,0x10657ec6)
				{
					HX_STACK_LINE(71)
					int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(71)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(71)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new((_Function_1_1::Block() * 0.5),(_Function_1_2::Block() * 0.5),(int)16777215,0.2,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		this->checkboxBgUnselected = _g;
		struct _Function_1_3{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",72,0x10657ec6)
				{
					HX_STACK_LINE(72)
					int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(72)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(72)
		this->checkboxBgUnselected->set_x((_Function_1_3::Block() * 0.25));
		struct _Function_1_4{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",73,0x10657ec6)
				{
					HX_STACK_LINE(73)
					int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(73)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(73)
		this->checkboxBgUnselected->set_y((_Function_1_4::Block() * 0.25));
		HX_STACK_LINE(74)
		this->addChild(this->checkboxBgUnselected);
		struct _Function_1_5{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",76,0x10657ec6)
				{
					HX_STACK_LINE(76)
					int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(76)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_6{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",76,0x10657ec6)
				{
					HX_STACK_LINE(76)
					int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(76)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(76)
		::view::elements::SimpleRectangle _g1 = ::view::elements::SimpleRectangle_obj::__new((_Function_1_5::Block() * 0.5),(_Function_1_6::Block() * 0.5),::view::elements::LabelButton_obj::BG_COLOR_ACTIVE,(int)1,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		this->checkboxBgSelected = _g1;
		struct _Function_1_7{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",77,0x10657ec6)
				{
					HX_STACK_LINE(77)
					int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(77)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(77)
		this->checkboxBgSelected->set_x((_Function_1_7::Block() * 0.25));
		struct _Function_1_8{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",78,0x10657ec6)
				{
					HX_STACK_LINE(78)
					int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(78)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(78)
		this->checkboxBgSelected->set_y((_Function_1_8::Block() * 0.25));
		HX_STACK_LINE(79)
		this->checkboxBgSelected->set_visible(false);
		HX_STACK_LINE(80)
		this->addChild(this->checkboxBgSelected);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LabelButton_obj,createCheckbox,(void))

Void LabelButton_obj::createLabel( ){
{
		HX_STACK_FRAME("view.elements.LabelButton","createLabel",0xad1176c2,"view.elements.LabelButton.createLabel","view/elements/LabelButton.hx",83,0x10657ec6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		::openfl::text::TextField _g = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		this->tfLabel = _g;
		HX_STACK_LINE(85)
		this->tfLabel->set_defaultTextFormat(::utilities::TextFieldFactory_obj::TEXT_FORMAT_BUTTON_LABEL);
		HX_STACK_LINE(86)
		this->tfLabel->embedFonts = true;
		HX_STACK_LINE(87)
		this->tfLabel->set_textColor((int)16777215);
		HX_STACK_LINE(88)
		this->tfLabel->set_alpha(0.7);
		HX_STACK_LINE(89)
		this->tfLabel->set_selectable(false);
		HX_STACK_LINE(90)
		this->tfLabel->set_y(((int)16 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(91)
		if ((this->hasCheckbox)){
			HX_STACK_LINE(92)
			this->tfLabel->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
			HX_STACK_LINE(93)
			Float _g1 = this->checkboxBgUnselected->get_x();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(93)
			Float _g2 = this->checkboxBgUnselected->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(93)
			Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(93)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",93,0x10657ec6)
					{
						HX_STACK_LINE(93)
						int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(93)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(93)
			_g4 = (_g3 + (_Function_2_1::Block() * 0.20));
			HX_STACK_LINE(93)
			this->tfLabel->set_x(_g4);
			HX_STACK_LINE(94)
			Float _g5 = this->bg->get_width();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(94)
			Float _g6 = this->checkboxBgUnselected->get_x();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(94)
			Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(94)
			Float _g8 = this->checkboxBgUnselected->get_width();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(94)
			Float _g9 = (_g7 - _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(94)
			this->tfLabel->set_width(_g9);
		}
		else{
			HX_STACK_LINE(96)
			Float _g10 = this->bg->get_width();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(96)
			this->tfLabel->set_width(_g10);
		}
		HX_STACK_LINE(98)
		this->tfLabel->set_height(((int)25 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(99)
		this->tfLabel->set_text(this->labelText);
		HX_STACK_LINE(100)
		this->addChild(this->tfLabel);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LabelButton_obj,createLabel,(void))

Void LabelButton_obj::createClickArea( ){
{
		HX_STACK_FRAME("view.elements.LabelButton","createClickArea",0xfeb5dfc3,"view.elements.LabelButton.createClickArea","view/elements/LabelButton.hx",104,0x10657ec6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		if ((!(this->inactive))){
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",105,0x10657ec6)
					{
						HX_STACK_LINE(105)
						int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(105)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(105)
			::view::elements::SimpleRectangle s = ::view::elements::SimpleRectangle_obj::__new(this->btnWidth,_Function_2_1::Block(),(int)0,(int)0,null(),null());		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(106)
			::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(106)
			this->clickArea = _g;
			HX_STACK_LINE(107)
			this->clickArea->addChild(s);
			HX_STACK_LINE(108)
			this->clickArea->buttonMode = true;
			HX_STACK_LINE(109)
			this->clickArea->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->buttonDownHandler_dyn(),null(),null(),null());
			HX_STACK_LINE(110)
			this->clickArea->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->buttonUpHandler_dyn(),null(),null(),null());
			HX_STACK_LINE(111)
			this->clickArea->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT,this->buttonUpHandler_dyn(),null(),null(),null());
			HX_STACK_LINE(112)
			this->addChild(this->clickArea);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LabelButton_obj,createClickArea,(void))

Void LabelButton_obj::buttonDownHandler( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("view.elements.LabelButton","buttonDownHandler",0x00ce23a0,"view.elements.LabelButton.buttonDownHandler","view/elements/LabelButton.hx",116,0x10657ec6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(117)
		this->bgHighlight->set_visible(true);
		HX_STACK_LINE(118)
		::String _g = this->get_name();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( ::String &_g){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/LabelButton.hx",118,0x10657ec6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , _g,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(118)
		Dynamic _g1 = _Function_1_1::Block(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(118)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(118)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LabelButton_obj,buttonDownHandler,(void))

Void LabelButton_obj::buttonUpHandler( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("view.elements.LabelButton","buttonUpHandler",0x499ea0c7,"view.elements.LabelButton.buttonUpHandler","view/elements/LabelButton.hx",122,0x10657ec6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(122)
		this->bgHighlight->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LabelButton_obj,buttonUpHandler,(void))

Void LabelButton_obj::setLabel( ::String label){
{
		HX_STACK_FRAME("view.elements.LabelButton","setLabel",0xe39d9f48,"view.elements.LabelButton.setLabel","view/elements/LabelButton.hx",126,0x10657ec6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(label,"label")
		HX_STACK_LINE(126)
		this->tfLabel->set_text(label);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LabelButton_obj,setLabel,(void))

Void LabelButton_obj::setActive( bool on){
{
		HX_STACK_FRAME("view.elements.LabelButton","setActive",0x1316d9f2,"view.elements.LabelButton.setActive","view/elements/LabelButton.hx",130,0x10657ec6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(130)
		if ((this->hasCheckbox)){
			HX_STACK_LINE(131)
			this->checkboxBgSelected->set_visible(on);
		}
		else{
			HX_STACK_LINE(133)
			this->bgActive->set_visible(on);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LabelButton_obj,setActive,(void))

Void LabelButton_obj::reset( ){
{
		HX_STACK_FRAME("view.elements.LabelButton","reset",0x26572fb9,"view.elements.LabelButton.reset","view/elements/LabelButton.hx",137,0x10657ec6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		bool _g = this->bgHighlight->set_visible(false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		this->bgActive->set_visible(_g);
		HX_STACK_LINE(139)
		if ((this->hasCheckbox)){
			HX_STACK_LINE(140)
			this->checkboxBgSelected->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LabelButton_obj,reset,(void))

Void LabelButton_obj::destroy( ){
{
		HX_STACK_FRAME("view.elements.LabelButton","destroy",0x9209e164,"view.elements.LabelButton.destroy","view/elements/LabelButton.hx",144,0x10657ec6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		this->removeChild(this->bg);
		HX_STACK_LINE(146)
		this->removeChild(this->tfLabel);
		HX_STACK_LINE(147)
		if ((!(this->inactive))){
			HX_STACK_LINE(148)
			this->removeChild(this->bgHighlight);
			HX_STACK_LINE(149)
			this->removeChild(this->bgActive);
			HX_STACK_LINE(150)
			this->clickArea->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->buttonDownHandler_dyn(),null());
			HX_STACK_LINE(151)
			this->clickArea->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->buttonUpHandler_dyn(),null());
			HX_STACK_LINE(152)
			this->clickArea->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT,this->buttonUpHandler_dyn(),null());
			HX_STACK_LINE(153)
			this->removeChild(this->clickArea);
		}
		HX_STACK_LINE(155)
		if ((this->hasCheckbox)){
			HX_STACK_LINE(156)
			this->removeChild(this->checkboxBgSelected);
			HX_STACK_LINE(157)
			this->removeChild(this->checkboxBgUnselected);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LabelButton_obj,destroy,(void))

int LabelButton_obj::BTN_HEIGHT;

int LabelButton_obj::BG_COLOR;

int LabelButton_obj::BG_INACTIVE_COLOR;

int LabelButton_obj::BG_COLOR_HIGHLIGHT;

int LabelButton_obj::BG_COLOR_ACTIVE;


LabelButton_obj::LabelButton_obj()
{
}

void LabelButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LabelButton);
	HX_MARK_MEMBER_NAME(inactive,"inactive");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(bgHighlight,"bgHighlight");
	HX_MARK_MEMBER_NAME(bgActive,"bgActive");
	HX_MARK_MEMBER_NAME(hasCheckbox,"hasCheckbox");
	HX_MARK_MEMBER_NAME(checkboxBgUnselected,"checkboxBgUnselected");
	HX_MARK_MEMBER_NAME(checkboxBgSelected,"checkboxBgSelected");
	HX_MARK_MEMBER_NAME(clickArea,"clickArea");
	HX_MARK_MEMBER_NAME(tfLabel,"tfLabel");
	HX_MARK_MEMBER_NAME(labelText,"labelText");
	HX_MARK_MEMBER_NAME(btnWidth,"btnWidth");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LabelButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inactive,"inactive");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(bgHighlight,"bgHighlight");
	HX_VISIT_MEMBER_NAME(bgActive,"bgActive");
	HX_VISIT_MEMBER_NAME(hasCheckbox,"hasCheckbox");
	HX_VISIT_MEMBER_NAME(checkboxBgUnselected,"checkboxBgUnselected");
	HX_VISIT_MEMBER_NAME(checkboxBgSelected,"checkboxBgSelected");
	HX_VISIT_MEMBER_NAME(clickArea,"clickArea");
	HX_VISIT_MEMBER_NAME(tfLabel,"tfLabel");
	HX_VISIT_MEMBER_NAME(labelText,"labelText");
	HX_VISIT_MEMBER_NAME(btnWidth,"btnWidth");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LabelButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return bg; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tfLabel") ) { return tfLabel; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"BG_COLOR") ) { return BG_COLOR; }
		if (HX_FIELD_EQ(inName,"inactive") ) { return inactive; }
		if (HX_FIELD_EQ(inName,"bgActive") ) { return bgActive; }
		if (HX_FIELD_EQ(inName,"btnWidth") ) { return btnWidth; }
		if (HX_FIELD_EQ(inName,"createBG") ) { return createBG_dyn(); }
		if (HX_FIELD_EQ(inName,"setLabel") ) { return setLabel_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickArea") ) { return clickArea; }
		if (HX_FIELD_EQ(inName,"labelText") ) { return labelText; }
		if (HX_FIELD_EQ(inName,"setActive") ) { return setActive_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BTN_HEIGHT") ) { return BTN_HEIGHT; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bgHighlight") ) { return bgHighlight; }
		if (HX_FIELD_EQ(inName,"hasCheckbox") ) { return hasCheckbox; }
		if (HX_FIELD_EQ(inName,"createLabel") ) { return createLabel_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createCheckbox") ) { return createCheckbox_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BG_COLOR_ACTIVE") ) { return BG_COLOR_ACTIVE; }
		if (HX_FIELD_EQ(inName,"createClickArea") ) { return createClickArea_dyn(); }
		if (HX_FIELD_EQ(inName,"buttonUpHandler") ) { return buttonUpHandler_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BG_INACTIVE_COLOR") ) { return BG_INACTIVE_COLOR; }
		if (HX_FIELD_EQ(inName,"buttonDownHandler") ) { return buttonDownHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BG_COLOR_HIGHLIGHT") ) { return BG_COLOR_HIGHLIGHT; }
		if (HX_FIELD_EQ(inName,"checkboxBgSelected") ) { return checkboxBgSelected; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"checkboxBgUnselected") ) { return checkboxBgUnselected; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LabelButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tfLabel") ) { tfLabel=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"BG_COLOR") ) { BG_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inactive") ) { inactive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bgActive") ) { bgActive=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"btnWidth") ) { btnWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickArea") ) { clickArea=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"labelText") ) { labelText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BTN_HEIGHT") ) { BTN_HEIGHT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bgHighlight") ) { bgHighlight=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasCheckbox") ) { hasCheckbox=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BG_COLOR_ACTIVE") ) { BG_COLOR_ACTIVE=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BG_INACTIVE_COLOR") ) { BG_INACTIVE_COLOR=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BG_COLOR_HIGHLIGHT") ) { BG_COLOR_HIGHLIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"checkboxBgSelected") ) { checkboxBgSelected=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"checkboxBgUnselected") ) { checkboxBgUnselected=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LabelButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inactive"));
	outFields->push(HX_CSTRING("bg"));
	outFields->push(HX_CSTRING("bgHighlight"));
	outFields->push(HX_CSTRING("bgActive"));
	outFields->push(HX_CSTRING("hasCheckbox"));
	outFields->push(HX_CSTRING("checkboxBgUnselected"));
	outFields->push(HX_CSTRING("checkboxBgSelected"));
	outFields->push(HX_CSTRING("clickArea"));
	outFields->push(HX_CSTRING("tfLabel"));
	outFields->push(HX_CSTRING("labelText"));
	outFields->push(HX_CSTRING("btnWidth"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BTN_HEIGHT"),
	HX_CSTRING("BG_COLOR"),
	HX_CSTRING("BG_INACTIVE_COLOR"),
	HX_CSTRING("BG_COLOR_HIGHLIGHT"),
	HX_CSTRING("BG_COLOR_ACTIVE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(LabelButton_obj,inactive),HX_CSTRING("inactive")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(LabelButton_obj,bg),HX_CSTRING("bg")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(LabelButton_obj,bgHighlight),HX_CSTRING("bgHighlight")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(LabelButton_obj,bgActive),HX_CSTRING("bgActive")},
	{hx::fsBool,(int)offsetof(LabelButton_obj,hasCheckbox),HX_CSTRING("hasCheckbox")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(LabelButton_obj,checkboxBgUnselected),HX_CSTRING("checkboxBgUnselected")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(LabelButton_obj,checkboxBgSelected),HX_CSTRING("checkboxBgSelected")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(LabelButton_obj,clickArea),HX_CSTRING("clickArea")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(LabelButton_obj,tfLabel),HX_CSTRING("tfLabel")},
	{hx::fsString,(int)offsetof(LabelButton_obj,labelText),HX_CSTRING("labelText")},
	{hx::fsFloat,(int)offsetof(LabelButton_obj,btnWidth),HX_CSTRING("btnWidth")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("inactive"),
	HX_CSTRING("bg"),
	HX_CSTRING("bgHighlight"),
	HX_CSTRING("bgActive"),
	HX_CSTRING("hasCheckbox"),
	HX_CSTRING("checkboxBgUnselected"),
	HX_CSTRING("checkboxBgSelected"),
	HX_CSTRING("clickArea"),
	HX_CSTRING("tfLabel"),
	HX_CSTRING("labelText"),
	HX_CSTRING("btnWidth"),
	HX_CSTRING("createBG"),
	HX_CSTRING("createCheckbox"),
	HX_CSTRING("createLabel"),
	HX_CSTRING("createClickArea"),
	HX_CSTRING("buttonDownHandler"),
	HX_CSTRING("buttonUpHandler"),
	HX_CSTRING("setLabel"),
	HX_CSTRING("setActive"),
	HX_CSTRING("reset"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LabelButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LabelButton_obj::BTN_HEIGHT,"BTN_HEIGHT");
	HX_MARK_MEMBER_NAME(LabelButton_obj::BG_COLOR,"BG_COLOR");
	HX_MARK_MEMBER_NAME(LabelButton_obj::BG_INACTIVE_COLOR,"BG_INACTIVE_COLOR");
	HX_MARK_MEMBER_NAME(LabelButton_obj::BG_COLOR_HIGHLIGHT,"BG_COLOR_HIGHLIGHT");
	HX_MARK_MEMBER_NAME(LabelButton_obj::BG_COLOR_ACTIVE,"BG_COLOR_ACTIVE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LabelButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LabelButton_obj::BTN_HEIGHT,"BTN_HEIGHT");
	HX_VISIT_MEMBER_NAME(LabelButton_obj::BG_COLOR,"BG_COLOR");
	HX_VISIT_MEMBER_NAME(LabelButton_obj::BG_INACTIVE_COLOR,"BG_INACTIVE_COLOR");
	HX_VISIT_MEMBER_NAME(LabelButton_obj::BG_COLOR_HIGHLIGHT,"BG_COLOR_HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(LabelButton_obj::BG_COLOR_ACTIVE,"BG_COLOR_ACTIVE");
};

#endif

Class LabelButton_obj::__mClass;

void LabelButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.elements.LabelButton"), hx::TCanCast< LabelButton_obj> ,sStaticFields,sMemberFields,
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

void LabelButton_obj::__boot()
{
	BTN_HEIGHT= (int)48;
	BG_COLOR= (int)2565927;
	BG_INACTIVE_COLOR= (int)7368816;
	BG_COLOR_HIGHLIGHT= (int)16777215;
	BG_COLOR_ACTIVE= (int)9177353;
}

} // end namespace view
} // end namespace elements
