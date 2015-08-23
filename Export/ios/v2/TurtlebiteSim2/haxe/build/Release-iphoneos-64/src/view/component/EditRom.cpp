#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_data_ProgramData
#include <model/data/ProgramData.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_view_component_EditRom
#include <view/component/EditRom.h>
#endif
#ifndef INCLUDED_view_elements_LabelButton
#include <view/elements/LabelButton.h>
#endif
#ifndef INCLUDED_view_elements_RomRow
#include <view/elements/RomRow.h>
#endif
#ifndef INCLUDED_view_elements_SimpleRectangle
#include <view/elements/SimpleRectangle.h>
#endif
namespace view{
namespace component{

Void EditRom_obj::__construct(::model::data::ProgramData programData)
{
HX_STACK_FRAME("view.component.EditRom","new",0x69ad03fe,"view.component.EditRom.new","view/component/EditRom.hx",20,0x4965d6f4)
HX_STACK_THIS(this)
HX_STACK_ARG(programData,"programData")
{
	HX_STACK_LINE(28)
	this->buttonGap = (int)5;
	HX_STACK_LINE(27)
	this->btnWidth = (int)125;
	HX_STACK_LINE(45)
	super::__construct();
	HX_STACK_LINE(46)
	this->programData = programData;
	HX_STACK_LINE(47)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//EditRom_obj::~EditRom_obj() { }

Dynamic EditRom_obj::__CreateEmpty() { return  new EditRom_obj; }
hx::ObjectPtr< EditRom_obj > EditRom_obj::__new(::model::data::ProgramData programData)
{  hx::ObjectPtr< EditRom_obj > result = new EditRom_obj();
	result->__construct(programData);
	return result;}

Dynamic EditRom_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EditRom_obj > result = new EditRom_obj();
	result->__construct(inArgs[0]);
	return result;}

Void EditRom_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.EditRom","addedToStageHandler",0x0dc6e745,"view.component.EditRom.addedToStageHandler","view/component/EditRom.hx",50,0x4965d6f4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(51)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(52)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/EditRomPopup2048.png")),this->bmpLoadCompleteHandler_dyn(),true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditRom_obj,addedToStageHandler,(void))

Void EditRom_obj::bmpLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.EditRom","bmpLoadCompleteHandler",0x01f3fa68,"view.component.EditRom.bmpLoadCompleteHandler","view/component/EditRom.hx",55,0x4965d6f4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(56)
		this->bmpData = bmd;
		HX_STACK_LINE(57)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->bmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		this->bmp = _g;
		HX_STACK_LINE(58)
		this->bmp->set_name(HX_CSTRING("editRomPopup"));
		HX_STACK_LINE(63)
		this->addChild(this->bmp);
		HX_STACK_LINE(64)
		::openfl::_legacy::display::Sprite _g1 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(64)
		this->buttonContainer = _g1;
		HX_STACK_LINE(65)
		this->buttonContainer->set_x(((int)855 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(66)
		this->buttonContainer->set_y(((int)80 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(67)
		this->addChild(this->buttonContainer);
		HX_STACK_LINE(68)
		this->createOkButton();
		HX_STACK_LINE(69)
		this->createCancelButton();
		HX_STACK_LINE(70)
		this->createLoadButton();
		HX_STACK_LINE(71)
		this->createSaveButton();
		HX_STACK_LINE(72)
		this->createSampleButtons();
		HX_STACK_LINE(73)
		this->createRomRows();
		HX_STACK_LINE(74)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(74)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditRom_obj,bmpLoadCompleteHandler,(void))

Void EditRom_obj::createOkButton( ){
{
		HX_STACK_FRAME("view.component.EditRom","createOkButton",0x994ac86c,"view.component.EditRom.createOkButton","view/component/EditRom.hx",77,0x4965d6f4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		::view::elements::LabelButton _g = ::view::elements::LabelButton_obj::__new(this->btnWidth,HX_CSTRING("OK"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		this->okButton = _g;
		HX_STACK_LINE(79)
		this->okButton->set_name(HX_CSTRING("okButton"));
		HX_STACK_LINE(80)
		this->okButton->set_y(((int)610 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(81)
		this->okButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(82)
		this->buttonContainer->addChild(this->okButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EditRom_obj,createOkButton,(void))

Void EditRom_obj::createCancelButton( ){
{
		HX_STACK_FRAME("view.component.EditRom","createCancelButton",0x23e2e64a,"view.component.EditRom.createCancelButton","view/component/EditRom.hx",85,0x4965d6f4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		::view::elements::LabelButton _g = ::view::elements::LabelButton_obj::__new(this->btnWidth,HX_CSTRING("Abbrechen"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		this->cancelButton = _g;
		HX_STACK_LINE(87)
		this->cancelButton->set_name(HX_CSTRING("cancelButton"));
		HX_STACK_LINE(88)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			Float a = this->okButton->get_y();		HX_STACK_VAR(a,"a");
			struct _Function_2_1{
				inline static Float Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EditRom.hx",88,0x4965d6f4)
					{
						HX_STACK_LINE(88)
						int _int;		HX_STACK_VAR(_int,"int");
						struct _Function_3_1{
							inline static Float Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EditRom.hx",88,0x4965d6f4)
								{
									HX_STACK_LINE(88)
									int int1 = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(int1,"int1");
									HX_STACK_LINE(88)
									return (  (((int1 < (int)0))) ? Float((4294967296.0 + int1)) : Float((int1 + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(88)
						_int = _Function_3_1::Block();
						HX_STACK_LINE(88)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(88)
			_g1 = (a - _Function_2_1::Block());
		}
		HX_STACK_LINE(88)
		Float _g2 = (_g1 - (this->buttonGap * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(88)
		this->cancelButton->set_y(_g2);
		HX_STACK_LINE(89)
		this->cancelButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(90)
		this->buttonContainer->addChild(this->cancelButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EditRom_obj,createCancelButton,(void))

Void EditRom_obj::createLoadButton( ){
{
		HX_STACK_FRAME("view.component.EditRom","createLoadButton",0x65d57076,"view.component.EditRom.createLoadButton","view/component/EditRom.hx",93,0x4965d6f4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		::view::elements::LabelButton _g = ::view::elements::LabelButton_obj::__new(this->btnWidth,HX_CSTRING("Laden"),false,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		this->loadButton = _g;
		HX_STACK_LINE(95)
		this->buttonContainer->addChild(this->loadButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EditRom_obj,createLoadButton,(void))

Void EditRom_obj::createSaveButton( ){
{
		HX_STACK_FRAME("view.component.EditRom","createSaveButton",0xf963cccd,"view.component.EditRom.createSaveButton","view/component/EditRom.hx",98,0x4965d6f4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		::view::elements::LabelButton _g = ::view::elements::LabelButton_obj::__new(this->btnWidth,HX_CSTRING("Speichern"),false,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		this->saveButton = _g;
		HX_STACK_LINE(100)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			Float _g11 = this->loadButton->get_y();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(100)
			int _g2 = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_g2,"_g2");
			struct _Function_2_1{
				inline static Float Block( int &_g2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EditRom.hx",100,0x4965d6f4)
					{
						HX_STACK_LINE(100)
						int _int = _g2;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(100)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(100)
			_g1 = (_Function_2_1::Block(_g2) + _g11);
		}
		HX_STACK_LINE(100)
		Float _g2 = (_g1 + (this->buttonGap * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(100)
		this->saveButton->set_y(_g2);
		HX_STACK_LINE(101)
		this->buttonContainer->addChild(this->saveButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EditRom_obj,createSaveButton,(void))

Void EditRom_obj::createSampleButtons( ){
{
		HX_STACK_FRAME("view.component.EditRom","createSampleButtons",0x15d0de39,"view.component.EditRom.createSampleButtons","view/component/EditRom.hx",104,0x4965d6f4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		::openfl::_legacy::text::TextField _g = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		this->tfSampleTitle = _g;
		HX_STACK_LINE(106)
		::openfl::_legacy::text::TextFormat _g1 = ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Myriad Pro"),((int)14 * ::AppConstants_obj::SCALE_FACTOR),(int)3355443,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(106)
		this->tfSampleTitle->set_defaultTextFormat(_g1);
		HX_STACK_LINE(107)
		this->tfSampleTitle->set_embedFonts(true);
		HX_STACK_LINE(108)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			Float _g11 = this->saveButton->get_y();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(108)
			int _g3 = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_1{
				inline static Float Block( int &_g3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EditRom.hx",108,0x4965d6f4)
					{
						HX_STACK_LINE(108)
						int _int = _g3;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(108)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(108)
			_g2 = (_Function_2_1::Block(_g3) + _g11);
		}
		HX_STACK_LINE(108)
		Float _g3 = (_g2 + (((int)8 * this->buttonGap) * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(108)
		this->tfSampleTitle->set_y(_g3);
		HX_STACK_LINE(109)
		this->tfSampleTitle->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
		HX_STACK_LINE(110)
		this->tfSampleTitle->set_text(HX_CSTRING("Lade Beispiele:"));
		HX_STACK_LINE(111)
		this->buttonContainer->addChild(this->tfSampleTitle);
		HX_STACK_LINE(113)
		::view::elements::LabelButton _g4 = ::view::elements::LabelButton_obj::__new(this->btnWidth,HX_CSTRING("Beispiel 1"),null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(113)
		this->sample1Button = _g4;
		HX_STACK_LINE(114)
		this->sample1Button->set_name(HX_CSTRING("sample1Button"));
		HX_STACK_LINE(115)
		Float _g5 = this->tfSampleTitle->get_y();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(115)
		Float _g6 = (_g5 + ((int)20 * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(115)
		this->sample1Button->set_y(_g6);
		HX_STACK_LINE(116)
		this->sample1Button->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(117)
		this->buttonContainer->addChild(this->sample1Button);
		HX_STACK_LINE(119)
		::view::elements::LabelButton _g7 = ::view::elements::LabelButton_obj::__new(this->btnWidth,HX_CSTRING("Beispiel 2"),null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(119)
		this->sample2Button = _g7;
		HX_STACK_LINE(120)
		this->sample2Button->set_name(HX_CSTRING("sample2Button"));
		HX_STACK_LINE(121)
		Float _g8;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			Float _g31 = this->sample1Button->get_y();		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(121)
			int _g21 = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_g21,"_g21");
			struct _Function_2_1{
				inline static Float Block( int &_g21){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EditRom.hx",121,0x4965d6f4)
					{
						HX_STACK_LINE(121)
						int _int = _g21;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(121)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(121)
			_g8 = (_Function_2_1::Block(_g21) + _g31);
		}
		HX_STACK_LINE(121)
		Float _g9 = (_g8 + (this->buttonGap * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(121)
		this->sample2Button->set_y(_g9);
		HX_STACK_LINE(122)
		this->sample2Button->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(123)
		this->buttonContainer->addChild(this->sample2Button);
		HX_STACK_LINE(125)
		::view::elements::LabelButton _g10 = ::view::elements::LabelButton_obj::__new(this->btnWidth,HX_CSTRING("Beispiel 3"),null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(125)
		this->sample3Button = _g10;
		HX_STACK_LINE(126)
		this->sample3Button->set_name(HX_CSTRING("sample3Button"));
		HX_STACK_LINE(127)
		Float _g11;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			Float _g51 = this->sample2Button->get_y();		HX_STACK_VAR(_g51,"_g51");
			HX_STACK_LINE(127)
			int _g41 = ::view::elements::LabelButton_obj::BTN_HEIGHT;		HX_STACK_VAR(_g41,"_g41");
			struct _Function_2_1{
				inline static Float Block( int &_g41){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EditRom.hx",127,0x4965d6f4)
					{
						HX_STACK_LINE(127)
						int _int = _g41;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(127)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(127)
			_g11 = (_Function_2_1::Block(_g41) + _g51);
		}
		HX_STACK_LINE(127)
		Float _g12 = (_g11 + (this->buttonGap * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(127)
		this->sample3Button->set_y(_g12);
		HX_STACK_LINE(128)
		this->sample3Button->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(129)
		this->buttonContainer->addChild(this->sample3Button);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EditRom_obj,createSampleButtons,(void))

Void EditRom_obj::createRomRows( ){
{
		HX_STACK_FRAME("view.component.EditRom","createRomRows",0x92e148cb,"view.component.EditRom.createRomRows","view/component/EditRom.hx",132,0x4965d6f4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		::openfl::_legacy::display::Sprite _g = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		this->romRowsContainer = _g;
		HX_STACK_LINE(134)
		this->romRowsContainer->set_x(((int)38 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(135)
		this->romRowsContainer->set_y(((int)92 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(136)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(136)
		this->romRows = _g1;
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(137)
			while((true)){
				HX_STACK_LINE(137)
				if ((!(((_g2 < (int)16))))){
					HX_STACK_LINE(137)
					break;
				}
				HX_STACK_LINE(137)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(138)
				::model::vo::InstructionVO _g21 = this->programData->getInstruction(i);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(138)
				this->romRows[i] = ::view::elements::RomRow_obj::__new(_g21);
				HX_STACK_LINE(139)
				this->romRows->__get(i).StaticCast< ::view::elements::RomRow >()->set_name((HX_CSTRING("row") + i));
				HX_STACK_LINE(140)
				if (((i > (int)0))){
					HX_STACK_LINE(141)
					Float _g3 = this->romRows->__get((i - (int)1)).StaticCast< ::view::elements::RomRow >()->get_y();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(141)
					Float _g4 = (_g3 + ((int)41 * ::AppConstants_obj::SCALE_FACTOR));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(141)
					this->romRows->__get(i).StaticCast< ::view::elements::RomRow >()->set_y(_g4);
				}
				HX_STACK_LINE(143)
				this->romRowsContainer->addChild(this->romRows->__get(i).StaticCast< ::view::elements::RomRow >());
			}
		}
		HX_STACK_LINE(145)
		this->addChild(this->romRowsContainer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EditRom_obj,createRomRows,(void))

Void EditRom_obj::populateRomRows( Array< ::Dynamic > instructions){
{
		HX_STACK_FRAME("view.component.EditRom","populateRomRows",0x25a1ee1d,"view.component.EditRom.populateRomRows","view/component/EditRom.hx",149,0x4965d6f4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instructions,"instructions")
		HX_STACK_LINE(149)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(149)
		int _g = (instructions->length - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(149)
		while((true)){
			HX_STACK_LINE(149)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(149)
				break;
			}
			HX_STACK_LINE(149)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(150)
			this->romRows->__get(i).StaticCast< ::view::elements::RomRow >()->populate(instructions->__get(i).StaticCast< ::model::vo::InstructionVO >());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditRom_obj,populateRomRows,(void))

Void EditRom_obj::dataEventHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.component.EditRom","dataEventHandler",0x267a41bc,"view.component.EditRom.dataEventHandler","view/component/EditRom.hx",154,0x4965d6f4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ::events::AppEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/EditRom.hx",155,0x4965d6f4)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , event->data->__Field(HX_CSTRING("id"),true),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(155)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(event),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(155)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditRom_obj,dataEventHandler,(void))

Void EditRom_obj::setActiveSample( int sample){
{
		HX_STACK_FRAME("view.component.EditRom","setActiveSample",0x8cc2a9f0,"view.component.EditRom.setActiveSample","view/component/EditRom.hx",158,0x4965d6f4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sample,"sample")
		HX_STACK_LINE(159)
		this->sample1Button->setActive(false);
		HX_STACK_LINE(160)
		this->sample2Button->setActive(false);
		HX_STACK_LINE(161)
		this->sample3Button->setActive(false);
		HX_STACK_LINE(162)
		switch( (int)(sample)){
			case (int)1: {
				HX_STACK_LINE(164)
				this->sample1Button->setActive(true);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(166)
				this->sample2Button->setActive(true);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(168)
				this->sample3Button->setActive(true);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditRom_obj,setActiveSample,(void))

Void EditRom_obj::destroy( ){
{
		HX_STACK_FRAME("view.component.EditRom","destroy",0x17448798,"view.component.EditRom.destroy","view/component/EditRom.hx",173,0x4965d6f4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(174)
		this->okButton->removeEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null());
		HX_STACK_LINE(175)
		this->cancelButton->removeEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null());
		HX_STACK_LINE(176)
		this->sample1Button->removeEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null());
		HX_STACK_LINE(177)
		this->sample2Button->removeEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null());
		HX_STACK_LINE(178)
		this->sample3Button->removeEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null());
		HX_STACK_LINE(179)
		this->buttonContainer->removeChild(this->okButton);
		HX_STACK_LINE(180)
		this->buttonContainer->removeChild(this->cancelButton);
		HX_STACK_LINE(181)
		this->buttonContainer->removeChild(this->loadButton);
		HX_STACK_LINE(182)
		this->buttonContainer->removeChild(this->saveButton);
		HX_STACK_LINE(183)
		this->buttonContainer->removeChild(this->tfSampleTitle);
		HX_STACK_LINE(184)
		this->buttonContainer->removeChild(this->sample1Button);
		HX_STACK_LINE(185)
		this->buttonContainer->removeChild(this->sample2Button);
		HX_STACK_LINE(186)
		this->buttonContainer->removeChild(this->sample3Button);
		HX_STACK_LINE(187)
		this->removeChild(this->buttonContainer);
		HX_STACK_LINE(188)
		this->bmpData->dispose();
		HX_STACK_LINE(189)
		this->removeChild(this->bmp);
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			while((true)){
				HX_STACK_LINE(190)
				if ((!(((_g < (int)16))))){
					HX_STACK_LINE(190)
					break;
				}
				HX_STACK_LINE(190)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(191)
				this->romRows->__get(i).StaticCast< ::view::elements::RomRow >()->destroy();
				HX_STACK_LINE(192)
				this->romRowsContainer->removeChild(this->romRows->__get(i).StaticCast< ::view::elements::RomRow >());
			}
		}
		HX_STACK_LINE(194)
		this->removeChild(this->romRowsContainer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EditRom_obj,destroy,(void))


EditRom_obj::EditRom_obj()
{
}

void EditRom_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EditRom);
	HX_MARK_MEMBER_NAME(programData,"programData");
	HX_MARK_MEMBER_NAME(bmpData,"bmpData");
	HX_MARK_MEMBER_NAME(bmp,"bmp");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(btnWidth,"btnWidth");
	HX_MARK_MEMBER_NAME(buttonGap,"buttonGap");
	HX_MARK_MEMBER_NAME(romRows,"romRows");
	HX_MARK_MEMBER_NAME(romRowsContainer,"romRowsContainer");
	HX_MARK_MEMBER_NAME(tfSampleTitle,"tfSampleTitle");
	HX_MARK_MEMBER_NAME(buttonContainer,"buttonContainer");
	HX_MARK_MEMBER_NAME(loadButton,"loadButton");
	HX_MARK_MEMBER_NAME(saveButton,"saveButton");
	HX_MARK_MEMBER_NAME(sample1Button,"sample1Button");
	HX_MARK_MEMBER_NAME(sample2Button,"sample2Button");
	HX_MARK_MEMBER_NAME(sample3Button,"sample3Button");
	HX_MARK_MEMBER_NAME(clearRomButton,"clearRomButton");
	HX_MARK_MEMBER_NAME(cancelButton,"cancelButton");
	HX_MARK_MEMBER_NAME(okButton,"okButton");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EditRom_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(programData,"programData");
	HX_VISIT_MEMBER_NAME(bmpData,"bmpData");
	HX_VISIT_MEMBER_NAME(bmp,"bmp");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(btnWidth,"btnWidth");
	HX_VISIT_MEMBER_NAME(buttonGap,"buttonGap");
	HX_VISIT_MEMBER_NAME(romRows,"romRows");
	HX_VISIT_MEMBER_NAME(romRowsContainer,"romRowsContainer");
	HX_VISIT_MEMBER_NAME(tfSampleTitle,"tfSampleTitle");
	HX_VISIT_MEMBER_NAME(buttonContainer,"buttonContainer");
	HX_VISIT_MEMBER_NAME(loadButton,"loadButton");
	HX_VISIT_MEMBER_NAME(saveButton,"saveButton");
	HX_VISIT_MEMBER_NAME(sample1Button,"sample1Button");
	HX_VISIT_MEMBER_NAME(sample2Button,"sample2Button");
	HX_VISIT_MEMBER_NAME(sample3Button,"sample3Button");
	HX_VISIT_MEMBER_NAME(clearRomButton,"clearRomButton");
	HX_VISIT_MEMBER_NAME(cancelButton,"cancelButton");
	HX_VISIT_MEMBER_NAME(okButton,"okButton");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EditRom_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return bg; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"bmp") ) { return bmp; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bmpData") ) { return bmpData; }
		if (HX_FIELD_EQ(inName,"romRows") ) { return romRows; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"btnWidth") ) { return btnWidth; }
		if (HX_FIELD_EQ(inName,"okButton") ) { return okButton; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"buttonGap") ) { return buttonGap; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadButton") ) { return loadButton; }
		if (HX_FIELD_EQ(inName,"saveButton") ) { return saveButton; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programData") ) { return programData; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cancelButton") ) { return cancelButton; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tfSampleTitle") ) { return tfSampleTitle; }
		if (HX_FIELD_EQ(inName,"sample1Button") ) { return sample1Button; }
		if (HX_FIELD_EQ(inName,"sample2Button") ) { return sample2Button; }
		if (HX_FIELD_EQ(inName,"sample3Button") ) { return sample3Button; }
		if (HX_FIELD_EQ(inName,"createRomRows") ) { return createRomRows_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"clearRomButton") ) { return clearRomButton; }
		if (HX_FIELD_EQ(inName,"createOkButton") ) { return createOkButton_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buttonContainer") ) { return buttonContainer; }
		if (HX_FIELD_EQ(inName,"populateRomRows") ) { return populateRomRows_dyn(); }
		if (HX_FIELD_EQ(inName,"setActiveSample") ) { return setActiveSample_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"romRowsContainer") ) { return romRowsContainer; }
		if (HX_FIELD_EQ(inName,"createLoadButton") ) { return createLoadButton_dyn(); }
		if (HX_FIELD_EQ(inName,"createSaveButton") ) { return createSaveButton_dyn(); }
		if (HX_FIELD_EQ(inName,"dataEventHandler") ) { return dataEventHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createCancelButton") ) { return createCancelButton_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"createSampleButtons") ) { return createSampleButtons_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"bmpLoadCompleteHandler") ) { return bmpLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EditRom_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"bmp") ) { bmp=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bmpData") ) { bmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"romRows") ) { romRows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"btnWidth") ) { btnWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"okButton") ) { okButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"buttonGap") ) { buttonGap=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadButton") ) { loadButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"saveButton") ) { saveButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programData") ) { programData=inValue.Cast< ::model::data::ProgramData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cancelButton") ) { cancelButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tfSampleTitle") ) { tfSampleTitle=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sample1Button") ) { sample1Button=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sample2Button") ) { sample2Button=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sample3Button") ) { sample3Button=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"clearRomButton") ) { clearRomButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buttonContainer") ) { buttonContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"romRowsContainer") ) { romRowsContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EditRom_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("programData"));
	outFields->push(HX_CSTRING("bmpData"));
	outFields->push(HX_CSTRING("bmp"));
	outFields->push(HX_CSTRING("bg"));
	outFields->push(HX_CSTRING("btnWidth"));
	outFields->push(HX_CSTRING("buttonGap"));
	outFields->push(HX_CSTRING("romRows"));
	outFields->push(HX_CSTRING("romRowsContainer"));
	outFields->push(HX_CSTRING("tfSampleTitle"));
	outFields->push(HX_CSTRING("buttonContainer"));
	outFields->push(HX_CSTRING("loadButton"));
	outFields->push(HX_CSTRING("saveButton"));
	outFields->push(HX_CSTRING("sample1Button"));
	outFields->push(HX_CSTRING("sample2Button"));
	outFields->push(HX_CSTRING("sample3Button"));
	outFields->push(HX_CSTRING("clearRomButton"));
	outFields->push(HX_CSTRING("cancelButton"));
	outFields->push(HX_CSTRING("okButton"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::data::ProgramData*/ ,(int)offsetof(EditRom_obj,programData),HX_CSTRING("programData")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(EditRom_obj,bmpData),HX_CSTRING("bmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(EditRom_obj,bmp),HX_CSTRING("bmp")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(EditRom_obj,bg),HX_CSTRING("bg")},
	{hx::fsFloat,(int)offsetof(EditRom_obj,btnWidth),HX_CSTRING("btnWidth")},
	{hx::fsInt,(int)offsetof(EditRom_obj,buttonGap),HX_CSTRING("buttonGap")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(EditRom_obj,romRows),HX_CSTRING("romRows")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(EditRom_obj,romRowsContainer),HX_CSTRING("romRowsContainer")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(EditRom_obj,tfSampleTitle),HX_CSTRING("tfSampleTitle")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(EditRom_obj,buttonContainer),HX_CSTRING("buttonContainer")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(EditRom_obj,loadButton),HX_CSTRING("loadButton")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(EditRom_obj,saveButton),HX_CSTRING("saveButton")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(EditRom_obj,sample1Button),HX_CSTRING("sample1Button")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(EditRom_obj,sample2Button),HX_CSTRING("sample2Button")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(EditRom_obj,sample3Button),HX_CSTRING("sample3Button")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(EditRom_obj,clearRomButton),HX_CSTRING("clearRomButton")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(EditRom_obj,cancelButton),HX_CSTRING("cancelButton")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(EditRom_obj,okButton),HX_CSTRING("okButton")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("programData"),
	HX_CSTRING("bmpData"),
	HX_CSTRING("bmp"),
	HX_CSTRING("bg"),
	HX_CSTRING("btnWidth"),
	HX_CSTRING("buttonGap"),
	HX_CSTRING("romRows"),
	HX_CSTRING("romRowsContainer"),
	HX_CSTRING("tfSampleTitle"),
	HX_CSTRING("buttonContainer"),
	HX_CSTRING("loadButton"),
	HX_CSTRING("saveButton"),
	HX_CSTRING("sample1Button"),
	HX_CSTRING("sample2Button"),
	HX_CSTRING("sample3Button"),
	HX_CSTRING("clearRomButton"),
	HX_CSTRING("cancelButton"),
	HX_CSTRING("okButton"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("bmpLoadCompleteHandler"),
	HX_CSTRING("createOkButton"),
	HX_CSTRING("createCancelButton"),
	HX_CSTRING("createLoadButton"),
	HX_CSTRING("createSaveButton"),
	HX_CSTRING("createSampleButtons"),
	HX_CSTRING("createRomRows"),
	HX_CSTRING("populateRomRows"),
	HX_CSTRING("dataEventHandler"),
	HX_CSTRING("setActiveSample"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EditRom_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EditRom_obj::__mClass,"__mClass");
};

#endif

Class EditRom_obj::__mClass;

void EditRom_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.EditRom"), hx::TCanCast< EditRom_obj> ,sStaticFields,sMemberFields,
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

void EditRom_obj::__boot()
{
}

} // end namespace view
} // end namespace component
