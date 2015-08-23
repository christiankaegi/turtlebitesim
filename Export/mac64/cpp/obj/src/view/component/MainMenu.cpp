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
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_model_data_AppData
#include <model/data/AppData.h>
#endif
#ifndef INCLUDED_model_vo_FrequencyVO
#include <model/vo/FrequencyVO.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_utilities_TextFieldFactory
#include <utilities/TextFieldFactory.h>
#endif
#ifndef INCLUDED_view_component_MainMenu
#include <view/component/MainMenu.h>
#endif
#ifndef INCLUDED_view_elements_LabelButton
#include <view/elements/LabelButton.h>
#endif
#ifndef INCLUDED_view_elements_SimpleRectangle
#include <view/elements/SimpleRectangle.h>
#endif
namespace view{
namespace component{

Void MainMenu_obj::__construct()
{
HX_STACK_FRAME("view.component.MainMenu","new",0x0722fac4,"view.component.MainMenu.new","view/component/MainMenu.hx",15,0x5147412a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->buttonGap = (int)5;
	HX_STACK_LINE(29)
	this->buttonWidth = (int)60;
	HX_STACK_LINE(56)
	super::__construct();
	HX_STACK_LINE(57)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//MainMenu_obj::~MainMenu_obj() { }

Dynamic MainMenu_obj::__CreateEmpty() { return  new MainMenu_obj; }
hx::ObjectPtr< MainMenu_obj > MainMenu_obj::__new()
{  hx::ObjectPtr< MainMenu_obj > result = new MainMenu_obj();
	result->__construct();
	return result;}

Dynamic MainMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainMenu_obj > result = new MainMenu_obj();
	result->__construct();
	return result;}

Void MainMenu_obj::addedToStageHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("view.component.MainMenu","addedToStageHandler",0x399d4a0b,"view.component.MainMenu.addedToStageHandler","view/component/MainMenu.hx",60,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(61)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(62)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		this->menuContainer = _g;
		HX_STACK_LINE(63)
		this->addChild(this->menuContainer);
		HX_STACK_LINE(64)
		this->createBG();
		HX_STACK_LINE(65)
		this->createStepController();
		HX_STACK_LINE(66)
		this->createZoomButton();
		HX_STACK_LINE(67)
		this->createEditRomButton();
		HX_STACK_LINE(68)
		this->createMiddleMenuContainer();
		HX_STACK_LINE(69)
		this->createMiddleMenuButtons();
		HX_STACK_LINE(70)
		this->createComponentsSubmenu();
		HX_STACK_LINE(71)
		this->createArchitectureButton();
		HX_STACK_LINE(72)
		this->showButtons(false);
		HX_STACK_LINE(73)
		::events::AppEvent _g1 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(73)
		this->dispatchEvent(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,addedToStageHandler,(void))

Void MainMenu_obj::createBG( ){
{
		HX_STACK_FRAME("view.component.MainMenu","createBG",0x0f9d02dd,"view.component.MainMenu.createBG","view/component/MainMenu.hx",76,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		::openfl::display::Shape _g = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		this->bg = _g;
		HX_STACK_LINE(78)
		this->bg->get_graphics()->beginFill((int)3684408,(int)1);
		HX_STACK_LINE(83)
		this->bg->get_graphics()->drawRect((int)0,(int)0,this->stage->stageWidth,::view::component::MainMenu_obj::NAVIG_BG_HEIGHT);
		HX_STACK_LINE(84)
		this->menuContainer->set_y((this->stage->stageHeight - ::view::component::MainMenu_obj::NAVIG_BG_HEIGHT));
		HX_STACK_LINE(86)
		this->menuContainer->addChild(this->bg);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainMenu_obj,createBG,(void))

Void MainMenu_obj::createStepController( ){
{
		HX_STACK_FRAME("view.component.MainMenu","createStepController",0xbce1bc40,"view.component.MainMenu.createStepController","view/component/MainMenu.hx",89,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		this->stepController = _g;
		HX_STACK_LINE(92)
		::view::elements::LabelButton _g1 = ::view::elements::LabelButton_obj::__new(this->buttonWidth,HX_CSTRING("Reset"),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(92)
		this->resetButton = _g1;
		HX_STACK_LINE(93)
		this->resetButton->set_name(HX_CSTRING("resetButton"));
		HX_STACK_LINE(94)
		this->resetButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(95)
		this->stepController->addChild(this->resetButton);
		HX_STACK_LINE(97)
		::openfl::display::Sprite _g2 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(97)
		this->stepCountContainer = _g2;
		struct _Function_1_1{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/MainMenu.hx",98,0x5147412a)
				{
					HX_STACK_LINE(98)
					int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(98)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(98)
		::view::elements::SimpleRectangle stepCountBG = ::view::elements::SimpleRectangle_obj::__new((this->buttonWidth * ::AppConstants_obj::SCALE_FACTOR),_Function_1_1::Block(),(int)0,(int)1,null(),null());		HX_STACK_VAR(stepCountBG,"stepCountBG");
		HX_STACK_LINE(99)
		Float _g3 = this->resetButton->get_x();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(99)
		Float _g4 = (_g3 + (this->buttonWidth * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(99)
		Float _g5 = (_g4 + (this->buttonGap * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(99)
		this->stepCountContainer->set_x(_g5);
		HX_STACK_LINE(100)
		this->stepCountContainer->addChild(stepCountBG);
		HX_STACK_LINE(101)
		::openfl::text::TextField _g6 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(101)
		this->tfStepCount = _g6;
		HX_STACK_LINE(102)
		this->tfStepCount->set_defaultTextFormat(::utilities::TextFieldFactory_obj::STEP_TEXT_FORMAT);
		HX_STACK_LINE(103)
		this->tfStepCount->embedFonts = true;
		HX_STACK_LINE(104)
		this->tfStepCount->set_textColor(::utilities::TextFieldFactory_obj::TEXT_ACTIVE_COLOR);
		HX_STACK_LINE(105)
		this->tfStepCount->set_width((this->buttonWidth * ::AppConstants_obj::SCALE_FACTOR));
		struct _Function_1_2{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/MainMenu.hx",106,0x5147412a)
				{
					HX_STACK_LINE(106)
					int _int = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(106)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(106)
		this->tfStepCount->set_height(_Function_1_2::Block());
		HX_STACK_LINE(107)
		this->tfStepCount->set_y(((int)15 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(108)
		this->tfStepCount->set_selectable(false);
		HX_STACK_LINE(109)
		this->tfStepCount->set_text(HX_CSTRING(""));
		HX_STACK_LINE(110)
		this->stepCountContainer->addChild(this->tfStepCount);
		HX_STACK_LINE(111)
		this->stepController->addChild(this->stepCountContainer);
		HX_STACK_LINE(113)
		::view::elements::LabelButton _g7 = ::view::elements::LabelButton_obj::__new(this->buttonWidth,HX_CSTRING("Ein"),null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(113)
		this->powerButton = _g7;
		HX_STACK_LINE(114)
		this->powerButton->set_name(HX_CSTRING("powerButton"));
		HX_STACK_LINE(115)
		this->powerButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(116)
		Float _g8;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			Float _g11 = this->resetButton->get_y();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(116)
			int _g9 = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_g9,"_g9");
			struct _Function_2_1{
				inline static Float Block( int &_g9){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/MainMenu.hx",116,0x5147412a)
					{
						HX_STACK_LINE(116)
						int _int = _g9;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(116)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(116)
			_g8 = (_Function_2_1::Block(_g9) + _g11);
		}
		HX_STACK_LINE(116)
		Float _g9 = (_g8 + (this->buttonGap * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(116)
		this->powerButton->set_y(_g9);
		HX_STACK_LINE(117)
		this->stepController->addChild(this->powerButton);
		HX_STACK_LINE(119)
		::view::elements::LabelButton _g10 = ::view::elements::LabelButton_obj::__new(this->buttonWidth,HX_CSTRING("Play"),null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(119)
		this->playButton = _g10;
		HX_STACK_LINE(120)
		this->playButton->set_name(HX_CSTRING("playButton"));
		HX_STACK_LINE(121)
		this->playButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(122)
		Float _g11 = this->powerButton->get_y();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(122)
		this->playButton->set_y(_g11);
		HX_STACK_LINE(123)
		Float _g12 = this->powerButton->get_x();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(123)
		Float _g13 = (_g12 + (this->buttonWidth * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(123)
		Float _g14 = (_g13 + (this->buttonGap * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(123)
		this->playButton->set_x(_g14);
		HX_STACK_LINE(124)
		this->stepController->addChild(this->playButton);
		HX_STACK_LINE(126)
		::view::elements::LabelButton _g15 = ::view::elements::LabelButton_obj::__new(this->buttonWidth,HX_CSTRING("Takt"),null(),null());		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(126)
		this->manualClockButton = _g15;
		HX_STACK_LINE(127)
		this->manualClockButton->set_name(HX_CSTRING("manualClockButton"));
		HX_STACK_LINE(128)
		this->manualClockButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(129)
		Float _g16 = this->playButton->get_y();		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(129)
		this->manualClockButton->set_y(_g16);
		HX_STACK_LINE(130)
		Float _g17 = this->playButton->get_x();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(130)
		Float _g18 = (_g17 + (this->buttonWidth * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(130)
		Float _g19 = (_g18 + (this->buttonGap * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(130)
		this->manualClockButton->set_x(_g19);
		HX_STACK_LINE(131)
		this->stepController->addChild(this->manualClockButton);
		HX_STACK_LINE(133)
		::view::elements::LabelButton _g20 = ::view::elements::LabelButton_obj::__new(this->buttonWidth,HX_CSTRING("16Hz"),null(),null());		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(133)
		this->hertzButton = _g20;
		HX_STACK_LINE(134)
		this->hertzButton->set_name(HX_CSTRING("hertzButton"));
		HX_STACK_LINE(135)
		this->hertzButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(136)
		Float _g21 = this->resetButton->get_y();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(136)
		this->hertzButton->set_y(_g21);
		HX_STACK_LINE(137)
		Float _g22 = this->manualClockButton->get_x();		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(137)
		this->hertzButton->set_x(_g22);
		HX_STACK_LINE(138)
		this->stepController->addChild(this->hertzButton);
		HX_STACK_LINE(140)
		this->stepController->set_x((((int)2 * this->buttonGap) * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(141)
		this->stepController->set_y((((int)2 * this->buttonGap) * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(142)
		this->menuContainer->addChild(this->stepController);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainMenu_obj,createStepController,(void))

Void MainMenu_obj::createZoomButton( ){
{
		HX_STACK_FRAME("view.component.MainMenu","createZoomButton",0xfe822e9d,"view.component.MainMenu.createZoomButton","view/component/MainMenu.hx",145,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		Float w = (int)96;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(147)
		::view::elements::LabelButton _g = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Zoom"),true,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(147)
		this->zoomButton = _g;
		HX_STACK_LINE(148)
		this->zoomButton->set_name(HX_CSTRING("zoomButton"));
		HX_STACK_LINE(149)
		this->zoomButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(150)
		this->zoomButton->set_y((((int)2 * this->buttonGap) * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(154)
		this->zoomButton->set_x(((this->stage->stageWidth - w) - (((int)2 * this->buttonGap) * ::AppConstants_obj::SCALE_FACTOR)));
		HX_STACK_LINE(156)
		this->menuContainer->addChild(this->zoomButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainMenu_obj,createZoomButton,(void))

Void MainMenu_obj::createEditRomButton( ){
{
		HX_STACK_FRAME("view.component.MainMenu","createEditRomButton",0x2ed49680,"view.component.MainMenu.createEditRomButton","view/component/MainMenu.hx",159,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		Float w = (int)96;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(161)
		::view::elements::LabelButton _g = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Edit ROM"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(161)
		this->editRomButton = _g;
		HX_STACK_LINE(162)
		this->editRomButton->set_name(HX_CSTRING("editRomButton"));
		HX_STACK_LINE(163)
		this->editRomButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(164)
		Float _g1 = this->zoomButton->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(164)
		this->editRomButton->set_x(_g1);
		HX_STACK_LINE(165)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			Float _g11 = this->zoomButton->get_y();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(165)
			int _g3 = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_1{
				inline static Float Block( int &_g3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/MainMenu.hx",165,0x5147412a)
					{
						HX_STACK_LINE(165)
						int _int = _g3;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(165)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(165)
			_g2 = (_Function_2_1::Block(_g3) + _g11);
		}
		HX_STACK_LINE(165)
		Float _g3 = (_g2 + (this->buttonGap * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(165)
		this->editRomButton->set_y(_g3);
		HX_STACK_LINE(166)
		this->menuContainer->addChild(this->editRomButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainMenu_obj,createEditRomButton,(void))

Void MainMenu_obj::createHertzSubmenu( Array< ::Dynamic > vo){
{
		HX_STACK_FRAME("view.component.MainMenu","createHertzSubmenu",0xa8af6bfc,"view.component.MainMenu.createHertzSubmenu","view/component/MainMenu.hx",169,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vo,"vo")
		HX_STACK_LINE(170)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(170)
		this->hertzSubmenuContainer = _g;
		HX_STACK_LINE(171)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(171)
		this->hertzSubmenuButtons = _g1;
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(172)
			int _g2 = vo->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(172)
			while((true)){
				HX_STACK_LINE(172)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(172)
					break;
				}
				HX_STACK_LINE(172)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(173)
				this->hertzSubmenuButtons[i] = ::view::elements::LabelButton_obj::__new(this->buttonWidth,vo->__get(i).StaticCast< ::model::vo::FrequencyVO >()->label,null(),null());
				HX_STACK_LINE(174)
				this->hertzSubmenuButtons->__get(i).StaticCast< ::view::elements::LabelButton >()->set_name((HX_CSTRING("hertzSubmenuButton") + i));
				HX_STACK_LINE(175)
				this->hertzSubmenuButtons->__get(i).StaticCast< ::view::elements::LabelButton >()->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
				HX_STACK_LINE(176)
				if (((i > (int)0))){
					HX_STACK_LINE(177)
					Float _g21;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(177)
					{
						HX_STACK_LINE(177)
						Float _g3 = this->hertzSubmenuButtons->__get((i - (int)1)).StaticCast< ::view::elements::LabelButton >()->get_y();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(177)
						int _g22 = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_g22,"_g22");
						struct _Function_5_1{
							inline static Float Block( int &_g22){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/MainMenu.hx",177,0x5147412a)
								{
									HX_STACK_LINE(177)
									int _int = _g22;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(177)
									return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(177)
						_g21 = (_Function_5_1::Block(_g22) + _g3);
					}
					HX_STACK_LINE(177)
					Float _g3 = (_g21 - (int)1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(177)
					this->hertzSubmenuButtons->__get(i).StaticCast< ::view::elements::LabelButton >()->set_y(_g3);
				}
				HX_STACK_LINE(179)
				this->hertzSubmenuContainer->addChild(this->hertzSubmenuButtons->__get(i).StaticCast< ::view::elements::LabelButton >());
			}
		}
		HX_STACK_LINE(181)
		Float _g4 = this->hertzButton->get_x();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(181)
		this->hertzSubmenuContainer->set_x(_g4);
		HX_STACK_LINE(182)
		Float _g5 = this->hertzButton->get_y();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(182)
		Float _g6 = this->hertzSubmenuContainer->get_height();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(182)
		Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(182)
		Float _g8 = (_g7 - (int)1);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(182)
		this->hertzSubmenuContainer->set_y(_g8);
		HX_STACK_LINE(183)
		this->hertzSubmenuContainer->set_visible(false);
		HX_STACK_LINE(184)
		this->stepController->addChild(this->hertzSubmenuContainer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,createHertzSubmenu,(void))

Void MainMenu_obj::createComponentsSubmenu( ){
{
		HX_STACK_FRAME("view.component.MainMenu","createComponentsSubmenu",0xd1b38271,"view.component.MainMenu.createComponentsSubmenu","view/component/MainMenu.hx",187,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		this->componentsSubmenuContainer = _g;
		HX_STACK_LINE(189)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(189)
		this->componentsSubmenuButtons = _g1;
		HX_STACK_LINE(190)
		Float w = (int)125;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(191)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(192)
		int _g2 = (i)++;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(192)
		this->componentsSubmenuButtons[_g2] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Bus"),false,true);
		HX_STACK_LINE(193)
		int _g3 = (i)++;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(193)
		this->componentsSubmenuButtons[_g3] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Gates"),false,true);
		HX_STACK_LINE(194)
		int _g4 = (i)++;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(194)
		this->componentsSubmenuButtons[_g4] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Comparator"),false,true);
		HX_STACK_LINE(195)
		int _g5 = (i)++;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(195)
		this->componentsSubmenuButtons[_g5] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Decoder"),false,true);
		HX_STACK_LINE(196)
		int _g6 = (i)++;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(196)
		this->componentsSubmenuButtons[_g6] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Enabler"),false,true);
		HX_STACK_LINE(197)
		int _g7 = (i)++;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(197)
		this->componentsSubmenuButtons[_g7] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Register"),false,true);
		HX_STACK_LINE(198)
		int _g8 = (i)++;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(198)
		this->componentsSubmenuButtons[_g8] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Multiplexer"),false,true);
		HX_STACK_LINE(199)
		int _g9 = (i)++;		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(199)
		this->componentsSubmenuButtons[_g9] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("ALU"),false,true);
		HX_STACK_LINE(201)
		this->componentsSubmenuButtons[i] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Accumulator"),null(),null());
		struct _Function_1_1{
			inline static Float Block( int &i){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/MainMenu.hx",202,0x5147412a)
				{
					HX_STACK_LINE(202)
					int _int = i;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(202)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(202)
		::String _g10 = ::Std_obj::string(_Function_1_1::Block(i));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(202)
		::String _g11 = (HX_CSTRING("componentsSubmenuButton") + _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(202)
		this->componentsSubmenuButtons->__get(i).StaticCast< ::view::elements::LabelButton >()->set_name(_g11);
		HX_STACK_LINE(203)
		int _g12 = (i)++;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(203)
		this->componentsSubmenuButtons->__get(_g12).StaticCast< ::view::elements::LabelButton >()->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(205)
		int _g13 = (i)++;		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(205)
		this->componentsSubmenuButtons[_g13] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Program Counter"),false,true);
		HX_STACK_LINE(206)
		int _g14 = (i)++;		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(206)
		this->componentsSubmenuButtons[_g14] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("RAM"),false,true);
		HX_STACK_LINE(207)
		int _g15 = (i)++;		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(207)
		this->componentsSubmenuButtons[_g15] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("ROM"),false,true);
		HX_STACK_LINE(208)
		int _g16 = (i)++;		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(208)
		this->componentsSubmenuButtons[_g16] = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Clock"),false,true);
		HX_STACK_LINE(209)
		this->componentsSubmenuContainer->addChild(this->componentsSubmenuButtons->__get((int)0).StaticCast< ::view::elements::LabelButton >());
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			int _g17 = (int)1;		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(210)
			int _g18 = this->componentsSubmenuButtons->length;		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(210)
			while((true)){
				HX_STACK_LINE(210)
				if ((!(((_g17 < _g18))))){
					HX_STACK_LINE(210)
					break;
				}
				HX_STACK_LINE(210)
				int i1 = (_g17)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(211)
				this->componentsSubmenuContainer->addChild(this->componentsSubmenuButtons->__get(i1).StaticCast< ::view::elements::LabelButton >());
				HX_STACK_LINE(212)
				Float _g171;		HX_STACK_VAR(_g171,"_g171");
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(212)
					Float _g31 = this->componentsSubmenuButtons->__get((i1 - (int)1)).StaticCast< ::view::elements::LabelButton >()->get_y();		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(212)
					int _g21 = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_g21,"_g21");
					struct _Function_4_1{
						inline static Float Block( int &_g21){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/MainMenu.hx",212,0x5147412a)
							{
								HX_STACK_LINE(212)
								int _int = _g21;		HX_STACK_VAR(_int,"int");
								HX_STACK_LINE(212)
								return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(212)
					_g171 = (_Function_4_1::Block(_g21) + _g31);
				}
				HX_STACK_LINE(212)
				Float _g181 = (_g171 - (int)1);		HX_STACK_VAR(_g181,"_g181");
				HX_STACK_LINE(212)
				this->componentsSubmenuButtons->__get(i1).StaticCast< ::view::elements::LabelButton >()->set_y(_g181);
			}
		}
		HX_STACK_LINE(214)
		Float _g19 = this->componentsButton->get_x();		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(214)
		this->componentsSubmenuContainer->set_x(_g19);
		HX_STACK_LINE(215)
		Float _g20 = this->componentsButton->get_y();		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(215)
		Float _g21 = this->componentsSubmenuContainer->get_height();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(215)
		Float _g22 = (_g20 - _g21);		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(215)
		Float _g23 = (_g22 - (int)1);		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(215)
		this->componentsSubmenuContainer->set_y(_g23);
		HX_STACK_LINE(216)
		this->componentsSubmenuContainer->set_visible(false);
		HX_STACK_LINE(217)
		this->middleMenuContainer->addChild(this->componentsSubmenuContainer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainMenu_obj,createComponentsSubmenu,(void))

Void MainMenu_obj::createMiddleMenuContainer( ){
{
		HX_STACK_FRAME("view.component.MainMenu","createMiddleMenuContainer",0x0da022d5,"view.component.MainMenu.createMiddleMenuContainer","view/component/MainMenu.hx",220,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(221)
		this->middleMenuContainer = _g;
		HX_STACK_LINE(222)
		this->middleMenuContainer->set_y((((int)2 * this->buttonGap) * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(223)
		Float _g1 = this->stepController->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(223)
		Float _g2 = this->stepController->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(223)
		Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(223)
		Float _g4 = (_g3 + (((int)4 * this->buttonGap) * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(223)
		this->middleMenuContainer->set_x(_g4);
		HX_STACK_LINE(224)
		this->menuContainer->addChild(this->middleMenuContainer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainMenu_obj,createMiddleMenuContainer,(void))

Void MainMenu_obj::createMiddleMenuButtons( ){
{
		HX_STACK_FRAME("view.component.MainMenu","createMiddleMenuButtons",0x0e59b2d5,"view.component.MainMenu.createMiddleMenuButtons","view/component/MainMenu.hx",227,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(228)
		Float w = (int)125;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(229)
		::view::elements::LabelButton _g = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Einheiten"),true,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		this->showUnitsButton = _g;
		HX_STACK_LINE(230)
		this->showUnitsButton->set_name(HX_CSTRING("showUnitsButton"));
		HX_STACK_LINE(231)
		this->showUnitsButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(232)
		this->middleMenuContainer->addChild(this->showUnitsButton);
		HX_STACK_LINE(234)
		::view::elements::LabelButton _g1 = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Datenfluss"),true,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(234)
		this->showFlowButton = _g1;
		HX_STACK_LINE(235)
		this->showFlowButton->set_name(HX_CSTRING("showFlowButton"));
		HX_STACK_LINE(236)
		this->showFlowButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(237)
		Float _g2 = this->showUnitsButton->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(237)
		Float _g3 = (_g2 + (this->buttonGap * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(237)
		this->showFlowButton->set_y(_g3);
		HX_STACK_LINE(238)
		this->middleMenuContainer->addChild(this->showFlowButton);
		HX_STACK_LINE(240)
		::view::elements::LabelButton _g4 = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Highlight"),true,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(240)
		this->showHighlightButton = _g4;
		HX_STACK_LINE(241)
		this->showHighlightButton->set_name(HX_CSTRING("showHighlightButton"));
		HX_STACK_LINE(242)
		this->showHighlightButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(243)
		Float _g5 = this->showUnitsButton->get_width();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(243)
		Float _g6 = (_g5 + (this->buttonGap * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(243)
		this->showHighlightButton->set_x(_g6);
		HX_STACK_LINE(244)
		Float _g7 = this->showFlowButton->get_y();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(244)
		this->showHighlightButton->set_y(_g7);
		HX_STACK_LINE(245)
		this->middleMenuContainer->addChild(this->showHighlightButton);
		HX_STACK_LINE(247)
		::view::elements::LabelButton _g8 = ::view::elements::LabelButton_obj::__new(w,HX_CSTRING("Komponenten"),null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(247)
		this->componentsButton = _g8;
		HX_STACK_LINE(248)
		this->componentsButton->set_name(HX_CSTRING("componentsButton"));
		HX_STACK_LINE(249)
		this->componentsButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(250)
		Float _g9 = this->showHighlightButton->get_x();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(250)
		this->componentsButton->set_x(_g9);
		HX_STACK_LINE(251)
		this->middleMenuContainer->addChild(this->componentsButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainMenu_obj,createMiddleMenuButtons,(void))

Void MainMenu_obj::createArchitectureButton( ){
{
		HX_STACK_FRAME("view.component.MainMenu","createArchitectureButton",0xfbf70c5d,"view.component.MainMenu.createArchitectureButton","view/component/MainMenu.hx",254,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(255)
		::view::elements::LabelButton _g = ::view::elements::LabelButton_obj::__new((int)120,HX_CSTRING("Architektur"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(255)
		this->architectureButton = _g;
		HX_STACK_LINE(256)
		this->architectureButton->set_name(HX_CSTRING("architectureButton"));
		HX_STACK_LINE(257)
		this->architectureButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(258)
		Float _g1 = this->playButton->get_y();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(258)
		Float _g2 = this->stepController->get_y();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(258)
		Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(258)
		this->architectureButton->set_y(_g3);
		HX_STACK_LINE(259)
		Float _g4 = this->playButton->get_x();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(259)
		Float _g5 = this->stepController->get_x();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(259)
		Float _g6 = (_g4 + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(259)
		this->architectureButton->set_x(_g6);
		HX_STACK_LINE(260)
		this->architectureButton->set_visible(false);
		HX_STACK_LINE(261)
		this->menuContainer->addChild(this->architectureButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainMenu_obj,createArchitectureButton,(void))

Void MainMenu_obj::dataEventHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.component.MainMenu","dataEventHandler",0xa4110736,"view.component.MainMenu.dataEventHandler","view/component/MainMenu.hx",264,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ::events::AppEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/MainMenu.hx",265,0x5147412a)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , event->data->__Field(HX_CSTRING("id"),true),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(265)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(event),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(265)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,dataEventHandler,(void))

Void MainMenu_obj::setProgramPointer( ::String pointer){
{
		HX_STACK_FRAME("view.component.MainMenu","setProgramPointer",0x620a4f3f,"view.component.MainMenu.setProgramPointer","view/component/MainMenu.hx",273,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(273)
		this->tfStepCount->set_text(pointer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,setProgramPointer,(void))

Void MainMenu_obj::setHertz( ::String label){
{
		HX_STACK_FRAME("view.component.MainMenu","setHertz",0x16a2dbb5,"view.component.MainMenu.setHertz","view/component/MainMenu.hx",277,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(label,"label")
		HX_STACK_LINE(277)
		this->hertzButton->setLabel(label);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,setHertz,(void))

Void MainMenu_obj::setHertzActive( bool on,Dynamic __o_pointer){
Dynamic pointer = __o_pointer.Default(-1);
	HX_STACK_FRAME("view.component.MainMenu","setHertzActive",0x4a40c75b,"view.component.MainMenu.setHertzActive","view/component/MainMenu.hx",280,0x5147412a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(on,"on")
	HX_STACK_ARG(pointer,"pointer")
{
		HX_STACK_LINE(281)
		this->hertzButton->setActive(on);
		HX_STACK_LINE(282)
		this->resetHertzSubmenu(pointer);
		HX_STACK_LINE(283)
		this->hertzSubmenuContainer->set_visible(on);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MainMenu_obj,setHertzActive,(void))

Void MainMenu_obj::setComponentsActive( bool on){
{
		HX_STACK_FRAME("view.component.MainMenu","setComponentsActive",0x428beda2,"view.component.MainMenu.setComponentsActive","view/component/MainMenu.hx",286,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(287)
		this->componentsButton->setActive(on);
		HX_STACK_LINE(288)
		this->componentsSubmenuContainer->set_visible(on);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,setComponentsActive,(void))

Void MainMenu_obj::setZoomActive( bool on){
{
		HX_STACK_FRAME("view.component.MainMenu","setZoomActive",0x9c0936df,"view.component.MainMenu.setZoomActive","view/component/MainMenu.hx",292,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(292)
		this->zoomButton->setActive(on);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,setZoomActive,(void))

Void MainMenu_obj::setShowUnitsActive( bool on){
{
		HX_STACK_FRAME("view.component.MainMenu","setShowUnitsActive",0xe3b1ef32,"view.component.MainMenu.setShowUnitsActive","view/component/MainMenu.hx",296,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(296)
		this->showUnitsButton->setActive(on);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,setShowUnitsActive,(void))

Void MainMenu_obj::setShowFlowActive( bool on){
{
		HX_STACK_FRAME("view.component.MainMenu","setShowFlowActive",0xf54de457,"view.component.MainMenu.setShowFlowActive","view/component/MainMenu.hx",300,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(300)
		this->showFlowButton->setActive(on);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,setShowFlowActive,(void))

Void MainMenu_obj::setShowHighlightActive( bool on){
{
		HX_STACK_FRAME("view.component.MainMenu","setShowHighlightActive",0x81e25037,"view.component.MainMenu.setShowHighlightActive","view/component/MainMenu.hx",304,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(304)
		this->showHighlightButton->setActive(on);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,setShowHighlightActive,(void))

Void MainMenu_obj::resetHertzSubmenu( int pointer){
{
		HX_STACK_FRAME("view.component.MainMenu","resetHertzSubmenu",0x31c9aa97,"view.component.MainMenu.resetHertzSubmenu","view/component/MainMenu.hx",307,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(308)
			int _g = this->hertzSubmenuButtons->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(308)
			while((true)){
				HX_STACK_LINE(308)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(308)
					break;
				}
				HX_STACK_LINE(308)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(309)
				this->hertzSubmenuButtons->__get(i).StaticCast< ::view::elements::LabelButton >()->reset();
			}
		}
		HX_STACK_LINE(311)
		if (((pointer > (int)-1))){
			HX_STACK_LINE(312)
			this->hertzSubmenuButtons->__get(pointer).StaticCast< ::view::elements::LabelButton >()->setActive(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,resetHertzSubmenu,(void))

Void MainMenu_obj::setPowerOn( bool on){
{
		HX_STACK_FRAME("view.component.MainMenu","setPowerOn",0x4d272b1e,"view.component.MainMenu.setPowerOn","view/component/MainMenu.hx",317,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(317)
		if ((on)){
			HX_STACK_LINE(318)
			this->powerButton->setLabel(HX_CSTRING("Aus"));
			HX_STACK_LINE(319)
			this->powerButton->setActive(true);
			HX_STACK_LINE(320)
			this->showButtons(true);
		}
		else{
			HX_STACK_LINE(322)
			this->powerButton->setLabel(HX_CSTRING("Ein"));
			HX_STACK_LINE(323)
			this->powerButton->setActive(false);
			HX_STACK_LINE(324)
			this->showButtons(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,setPowerOn,(void))

Void MainMenu_obj::showButtons( bool show){
{
		HX_STACK_FRAME("view.component.MainMenu","showButtons",0x96671d28,"view.component.MainMenu.showButtons","view/component/MainMenu.hx",329,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(show,"show")
		HX_STACK_LINE(330)
		this->middleMenuContainer->set_visible(show);
		HX_STACK_LINE(331)
		this->hertzButton->set_visible(show);
		HX_STACK_LINE(332)
		this->manualClockButton->set_visible(show);
		HX_STACK_LINE(333)
		this->playButton->set_visible(show);
		HX_STACK_LINE(334)
		this->tfStepCount->set_visible(show);
		HX_STACK_LINE(335)
		this->resetButton->set_visible(show);
		HX_STACK_LINE(336)
		this->zoomButton->set_visible(show);
		HX_STACK_LINE(337)
		this->editRomButton->set_visible(show);
		HX_STACK_LINE(338)
		this->stepCountContainer->set_visible(show);
		HX_STACK_LINE(339)
		this->architectureButton->set_visible(!(show));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,showButtons,(void))

Void MainMenu_obj::setPlay( bool on){
{
		HX_STACK_FRAME("view.component.MainMenu","setPlay",0x929c9b1a,"view.component.MainMenu.setPlay","view/component/MainMenu.hx",343,0x5147412a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(343)
		if ((on)){
			HX_STACK_LINE(344)
			this->playButton->setLabel(HX_CSTRING("Pause"));
		}
		else{
			HX_STACK_LINE(346)
			this->playButton->setLabel(HX_CSTRING("Play"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,setPlay,(void))

int MainMenu_obj::NAVIG_BG_HEIGHT;


MainMenu_obj::MainMenu_obj()
{
}

void MainMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenu);
	HX_MARK_MEMBER_NAME(appData,"appData");
	HX_MARK_MEMBER_NAME(menuContainer,"menuContainer");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(stepController,"stepController");
	HX_MARK_MEMBER_NAME(buttonWidth,"buttonWidth");
	HX_MARK_MEMBER_NAME(buttonGap,"buttonGap");
	HX_MARK_MEMBER_NAME(resetButton,"resetButton");
	HX_MARK_MEMBER_NAME(powerButton,"powerButton");
	HX_MARK_MEMBER_NAME(playButton,"playButton");
	HX_MARK_MEMBER_NAME(manualClockButton,"manualClockButton");
	HX_MARK_MEMBER_NAME(hertzButton,"hertzButton");
	HX_MARK_MEMBER_NAME(hertzSubmenuButtons,"hertzSubmenuButtons");
	HX_MARK_MEMBER_NAME(middleMenuContainer,"middleMenuContainer");
	HX_MARK_MEMBER_NAME(showUnitsButton,"showUnitsButton");
	HX_MARK_MEMBER_NAME(showFlowButton,"showFlowButton");
	HX_MARK_MEMBER_NAME(showHighlightButton,"showHighlightButton");
	HX_MARK_MEMBER_NAME(componentsButton,"componentsButton");
	HX_MARK_MEMBER_NAME(componentsSubmenuButtons,"componentsSubmenuButtons");
	HX_MARK_MEMBER_NAME(zoomButton,"zoomButton");
	HX_MARK_MEMBER_NAME(editRomButton,"editRomButton");
	HX_MARK_MEMBER_NAME(architectureButton,"architectureButton");
	HX_MARK_MEMBER_NAME(stepCountContainer,"stepCountContainer");
	HX_MARK_MEMBER_NAME(hertzSubmenuContainer,"hertzSubmenuContainer");
	HX_MARK_MEMBER_NAME(componentsSubmenuContainer,"componentsSubmenuContainer");
	HX_MARK_MEMBER_NAME(tfStepCount,"tfStepCount");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appData,"appData");
	HX_VISIT_MEMBER_NAME(menuContainer,"menuContainer");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(stepController,"stepController");
	HX_VISIT_MEMBER_NAME(buttonWidth,"buttonWidth");
	HX_VISIT_MEMBER_NAME(buttonGap,"buttonGap");
	HX_VISIT_MEMBER_NAME(resetButton,"resetButton");
	HX_VISIT_MEMBER_NAME(powerButton,"powerButton");
	HX_VISIT_MEMBER_NAME(playButton,"playButton");
	HX_VISIT_MEMBER_NAME(manualClockButton,"manualClockButton");
	HX_VISIT_MEMBER_NAME(hertzButton,"hertzButton");
	HX_VISIT_MEMBER_NAME(hertzSubmenuButtons,"hertzSubmenuButtons");
	HX_VISIT_MEMBER_NAME(middleMenuContainer,"middleMenuContainer");
	HX_VISIT_MEMBER_NAME(showUnitsButton,"showUnitsButton");
	HX_VISIT_MEMBER_NAME(showFlowButton,"showFlowButton");
	HX_VISIT_MEMBER_NAME(showHighlightButton,"showHighlightButton");
	HX_VISIT_MEMBER_NAME(componentsButton,"componentsButton");
	HX_VISIT_MEMBER_NAME(componentsSubmenuButtons,"componentsSubmenuButtons");
	HX_VISIT_MEMBER_NAME(zoomButton,"zoomButton");
	HX_VISIT_MEMBER_NAME(editRomButton,"editRomButton");
	HX_VISIT_MEMBER_NAME(architectureButton,"architectureButton");
	HX_VISIT_MEMBER_NAME(stepCountContainer,"stepCountContainer");
	HX_VISIT_MEMBER_NAME(hertzSubmenuContainer,"hertzSubmenuContainer");
	HX_VISIT_MEMBER_NAME(componentsSubmenuContainer,"componentsSubmenuContainer");
	HX_VISIT_MEMBER_NAME(tfStepCount,"tfStepCount");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MainMenu_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return bg; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"appData") ) { return appData; }
		if (HX_FIELD_EQ(inName,"setPlay") ) { return setPlay_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"createBG") ) { return createBG_dyn(); }
		if (HX_FIELD_EQ(inName,"setHertz") ) { return setHertz_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"buttonGap") ) { return buttonGap; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { return playButton; }
		if (HX_FIELD_EQ(inName,"zoomButton") ) { return zoomButton; }
		if (HX_FIELD_EQ(inName,"setPowerOn") ) { return setPowerOn_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonWidth") ) { return buttonWidth; }
		if (HX_FIELD_EQ(inName,"resetButton") ) { return resetButton; }
		if (HX_FIELD_EQ(inName,"powerButton") ) { return powerButton; }
		if (HX_FIELD_EQ(inName,"hertzButton") ) { return hertzButton; }
		if (HX_FIELD_EQ(inName,"tfStepCount") ) { return tfStepCount; }
		if (HX_FIELD_EQ(inName,"showButtons") ) { return showButtons_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"menuContainer") ) { return menuContainer; }
		if (HX_FIELD_EQ(inName,"editRomButton") ) { return editRomButton; }
		if (HX_FIELD_EQ(inName,"setZoomActive") ) { return setZoomActive_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stepController") ) { return stepController; }
		if (HX_FIELD_EQ(inName,"showFlowButton") ) { return showFlowButton; }
		if (HX_FIELD_EQ(inName,"setHertzActive") ) { return setHertzActive_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NAVIG_BG_HEIGHT") ) { return NAVIG_BG_HEIGHT; }
		if (HX_FIELD_EQ(inName,"showUnitsButton") ) { return showUnitsButton; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"componentsButton") ) { return componentsButton; }
		if (HX_FIELD_EQ(inName,"createZoomButton") ) { return createZoomButton_dyn(); }
		if (HX_FIELD_EQ(inName,"dataEventHandler") ) { return dataEventHandler_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"manualClockButton") ) { return manualClockButton; }
		if (HX_FIELD_EQ(inName,"setProgramPointer") ) { return setProgramPointer_dyn(); }
		if (HX_FIELD_EQ(inName,"setShowFlowActive") ) { return setShowFlowActive_dyn(); }
		if (HX_FIELD_EQ(inName,"resetHertzSubmenu") ) { return resetHertzSubmenu_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"architectureButton") ) { return architectureButton; }
		if (HX_FIELD_EQ(inName,"stepCountContainer") ) { return stepCountContainer; }
		if (HX_FIELD_EQ(inName,"createHertzSubmenu") ) { return createHertzSubmenu_dyn(); }
		if (HX_FIELD_EQ(inName,"setShowUnitsActive") ) { return setShowUnitsActive_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hertzSubmenuButtons") ) { return hertzSubmenuButtons; }
		if (HX_FIELD_EQ(inName,"middleMenuContainer") ) { return middleMenuContainer; }
		if (HX_FIELD_EQ(inName,"showHighlightButton") ) { return showHighlightButton; }
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"createEditRomButton") ) { return createEditRomButton_dyn(); }
		if (HX_FIELD_EQ(inName,"setComponentsActive") ) { return setComponentsActive_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createStepController") ) { return createStepController_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hertzSubmenuContainer") ) { return hertzSubmenuContainer; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setShowHighlightActive") ) { return setShowHighlightActive_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createComponentsSubmenu") ) { return createComponentsSubmenu_dyn(); }
		if (HX_FIELD_EQ(inName,"createMiddleMenuButtons") ) { return createMiddleMenuButtons_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"componentsSubmenuButtons") ) { return componentsSubmenuButtons; }
		if (HX_FIELD_EQ(inName,"createArchitectureButton") ) { return createArchitectureButton_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"createMiddleMenuContainer") ) { return createMiddleMenuContainer_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"componentsSubmenuContainer") ) { return componentsSubmenuContainer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MainMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"appData") ) { appData=inValue.Cast< ::model::data::AppData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"buttonGap") ) { buttonGap=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { playButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zoomButton") ) { zoomButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonWidth") ) { buttonWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetButton") ) { resetButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"powerButton") ) { powerButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hertzButton") ) { hertzButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tfStepCount") ) { tfStepCount=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"menuContainer") ) { menuContainer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"editRomButton") ) { editRomButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stepController") ) { stepController=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"showFlowButton") ) { showFlowButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NAVIG_BG_HEIGHT") ) { NAVIG_BG_HEIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"showUnitsButton") ) { showUnitsButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"componentsButton") ) { componentsButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"manualClockButton") ) { manualClockButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"architectureButton") ) { architectureButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepCountContainer") ) { stepCountContainer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hertzSubmenuButtons") ) { hertzSubmenuButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"middleMenuContainer") ) { middleMenuContainer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"showHighlightButton") ) { showHighlightButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hertzSubmenuContainer") ) { hertzSubmenuContainer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"componentsSubmenuButtons") ) { componentsSubmenuButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"componentsSubmenuContainer") ) { componentsSubmenuContainer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appData"));
	outFields->push(HX_CSTRING("menuContainer"));
	outFields->push(HX_CSTRING("bg"));
	outFields->push(HX_CSTRING("stepController"));
	outFields->push(HX_CSTRING("buttonWidth"));
	outFields->push(HX_CSTRING("buttonGap"));
	outFields->push(HX_CSTRING("resetButton"));
	outFields->push(HX_CSTRING("powerButton"));
	outFields->push(HX_CSTRING("playButton"));
	outFields->push(HX_CSTRING("manualClockButton"));
	outFields->push(HX_CSTRING("hertzButton"));
	outFields->push(HX_CSTRING("hertzSubmenuButtons"));
	outFields->push(HX_CSTRING("middleMenuContainer"));
	outFields->push(HX_CSTRING("showUnitsButton"));
	outFields->push(HX_CSTRING("showFlowButton"));
	outFields->push(HX_CSTRING("showHighlightButton"));
	outFields->push(HX_CSTRING("componentsButton"));
	outFields->push(HX_CSTRING("componentsSubmenuButtons"));
	outFields->push(HX_CSTRING("zoomButton"));
	outFields->push(HX_CSTRING("editRomButton"));
	outFields->push(HX_CSTRING("architectureButton"));
	outFields->push(HX_CSTRING("stepCountContainer"));
	outFields->push(HX_CSTRING("hertzSubmenuContainer"));
	outFields->push(HX_CSTRING("componentsSubmenuContainer"));
	outFields->push(HX_CSTRING("tfStepCount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAVIG_BG_HEIGHT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::data::AppData*/ ,(int)offsetof(MainMenu_obj,appData),HX_CSTRING("appData")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(MainMenu_obj,menuContainer),HX_CSTRING("menuContainer")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(MainMenu_obj,bg),HX_CSTRING("bg")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(MainMenu_obj,stepController),HX_CSTRING("stepController")},
	{hx::fsFloat,(int)offsetof(MainMenu_obj,buttonWidth),HX_CSTRING("buttonWidth")},
	{hx::fsInt,(int)offsetof(MainMenu_obj,buttonGap),HX_CSTRING("buttonGap")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(MainMenu_obj,resetButton),HX_CSTRING("resetButton")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(MainMenu_obj,powerButton),HX_CSTRING("powerButton")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(MainMenu_obj,playButton),HX_CSTRING("playButton")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(MainMenu_obj,manualClockButton),HX_CSTRING("manualClockButton")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(MainMenu_obj,hertzButton),HX_CSTRING("hertzButton")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MainMenu_obj,hertzSubmenuButtons),HX_CSTRING("hertzSubmenuButtons")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(MainMenu_obj,middleMenuContainer),HX_CSTRING("middleMenuContainer")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(MainMenu_obj,showUnitsButton),HX_CSTRING("showUnitsButton")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(MainMenu_obj,showFlowButton),HX_CSTRING("showFlowButton")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(MainMenu_obj,showHighlightButton),HX_CSTRING("showHighlightButton")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(MainMenu_obj,componentsButton),HX_CSTRING("componentsButton")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MainMenu_obj,componentsSubmenuButtons),HX_CSTRING("componentsSubmenuButtons")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(MainMenu_obj,zoomButton),HX_CSTRING("zoomButton")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(MainMenu_obj,editRomButton),HX_CSTRING("editRomButton")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(MainMenu_obj,architectureButton),HX_CSTRING("architectureButton")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(MainMenu_obj,stepCountContainer),HX_CSTRING("stepCountContainer")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(MainMenu_obj,hertzSubmenuContainer),HX_CSTRING("hertzSubmenuContainer")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(MainMenu_obj,componentsSubmenuContainer),HX_CSTRING("componentsSubmenuContainer")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(MainMenu_obj,tfStepCount),HX_CSTRING("tfStepCount")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("appData"),
	HX_CSTRING("menuContainer"),
	HX_CSTRING("bg"),
	HX_CSTRING("stepController"),
	HX_CSTRING("buttonWidth"),
	HX_CSTRING("buttonGap"),
	HX_CSTRING("resetButton"),
	HX_CSTRING("powerButton"),
	HX_CSTRING("playButton"),
	HX_CSTRING("manualClockButton"),
	HX_CSTRING("hertzButton"),
	HX_CSTRING("hertzSubmenuButtons"),
	HX_CSTRING("middleMenuContainer"),
	HX_CSTRING("showUnitsButton"),
	HX_CSTRING("showFlowButton"),
	HX_CSTRING("showHighlightButton"),
	HX_CSTRING("componentsButton"),
	HX_CSTRING("componentsSubmenuButtons"),
	HX_CSTRING("zoomButton"),
	HX_CSTRING("editRomButton"),
	HX_CSTRING("architectureButton"),
	HX_CSTRING("stepCountContainer"),
	HX_CSTRING("hertzSubmenuContainer"),
	HX_CSTRING("componentsSubmenuContainer"),
	HX_CSTRING("tfStepCount"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("createBG"),
	HX_CSTRING("createStepController"),
	HX_CSTRING("createZoomButton"),
	HX_CSTRING("createEditRomButton"),
	HX_CSTRING("createHertzSubmenu"),
	HX_CSTRING("createComponentsSubmenu"),
	HX_CSTRING("createMiddleMenuContainer"),
	HX_CSTRING("createMiddleMenuButtons"),
	HX_CSTRING("createArchitectureButton"),
	HX_CSTRING("dataEventHandler"),
	HX_CSTRING("setProgramPointer"),
	HX_CSTRING("setHertz"),
	HX_CSTRING("setHertzActive"),
	HX_CSTRING("setComponentsActive"),
	HX_CSTRING("setZoomActive"),
	HX_CSTRING("setShowUnitsActive"),
	HX_CSTRING("setShowFlowActive"),
	HX_CSTRING("setShowHighlightActive"),
	HX_CSTRING("resetHertzSubmenu"),
	HX_CSTRING("setPowerOn"),
	HX_CSTRING("showButtons"),
	HX_CSTRING("setPlay"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainMenu_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MainMenu_obj::NAVIG_BG_HEIGHT,"NAVIG_BG_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainMenu_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MainMenu_obj::NAVIG_BG_HEIGHT,"NAVIG_BG_HEIGHT");
};

#endif

Class MainMenu_obj::__mClass;

void MainMenu_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.MainMenu"), hx::TCanCast< MainMenu_obj> ,sStaticFields,sMemberFields,
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

void MainMenu_obj::__boot()
{
	NAVIG_BG_HEIGHT= (int)120;
}

} // end namespace view
} // end namespace component
