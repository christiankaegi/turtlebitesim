#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
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
#ifndef INCLUDED_view_elements_OneBitMemory
#include <view/elements/OneBitMemory.h>
#endif
#ifndef INCLUDED_view_elements_SimpleRectangle
#include <view/elements/SimpleRectangle.h>
#endif
namespace view{
namespace elements{

Void OneBitMemory_obj::__construct(bool inputActive,bool setActive)
{
HX_STACK_FRAME("view.elements.OneBitMemory","new",0x68cc6c48,"view.elements.OneBitMemory.new","view/elements/OneBitMemory.hx",38,0xd66d1848)
HX_STACK_THIS(this)
HX_STACK_ARG(inputActive,"inputActive")
HX_STACK_ARG(setActive,"setActive")
{
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(40)
	this->inputActive = inputActive;
	HX_STACK_LINE(41)
	this->setActive = setActive;
	HX_STACK_LINE(42)
	::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	this->bmpContainer = _g;
	HX_STACK_LINE(43)
	this->addChild(this->bmpContainer);
	HX_STACK_LINE(44)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//OneBitMemory_obj::~OneBitMemory_obj() { }

Dynamic OneBitMemory_obj::__CreateEmpty() { return  new OneBitMemory_obj; }
hx::ObjectPtr< OneBitMemory_obj > OneBitMemory_obj::__new(bool inputActive,bool setActive)
{  hx::ObjectPtr< OneBitMemory_obj > result = new OneBitMemory_obj();
	result->__construct(inputActive,setActive);
	return result;}

Dynamic OneBitMemory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OneBitMemory_obj > result = new OneBitMemory_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void OneBitMemory_obj::addedToStageHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","addedToStageHandler",0x62b1038f,"view.elements.OneBitMemory.addedToStageHandler","view/elements/OneBitMemory.hx",47,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(48)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(49)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_bottomLayer2048.png")),this->bottomLayerLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(50)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_gate1_out.png")),this->gate1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(51)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_gate2_out.png")),this->gate2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(52)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_gate3_out.png")),this->gate3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(53)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_gate4_out.png")),this->gate4LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(54)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_input.png")),this->inputLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(55)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_set.png")),this->setLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(56)
		this->showGate1Line();
		HX_STACK_LINE(57)
		this->showGate3Line();
		HX_STACK_LINE(58)
		this->showGate4Line();
		HX_STACK_LINE(59)
		this->setStatus(this->inputActive,this->setActive);
		HX_STACK_LINE(60)
		this->createInputButton();
		HX_STACK_LINE(61)
		this->createSetButton();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,addedToStageHandler,(void))

Void OneBitMemory_obj::bottomLayerLoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","bottomLayerLoadCompleteHandler",0xe8b16e5d,"view.elements.OneBitMemory.bottomLayerLoadCompleteHandler","view/elements/OneBitMemory.hx",65,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(66)
		this->bottomLayerBmpData = bmd;
		HX_STACK_LINE(67)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(this->bottomLayerBmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		this->bottomLayer = _g;
		HX_STACK_LINE(68)
		this->bottomLayer->set_name(HX_CSTRING("bottomLayer"));
		HX_STACK_LINE(71)
		Float _g1 = this->bottomLayer->set_scaleY(0.5);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		this->bottomLayer->set_scaleX(_g1);
		HX_STACK_LINE(73)
		this->bmpContainer->addChild(this->bottomLayer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,bottomLayerLoadCompleteHandler,(void))

Void OneBitMemory_obj::gate1LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","gate1LoadCompleteHandler",0x00645f7d,"view.elements.OneBitMemory.gate1LoadCompleteHandler","view/elements/OneBitMemory.hx",76,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(77)
		this->gate1BmpData = bmd;
		HX_STACK_LINE(78)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(this->gate1BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		this->gate1 = _g;
		HX_STACK_LINE(79)
		this->gate1->set_name(HX_CSTRING("gate1"));
		HX_STACK_LINE(80)
		Float _g1 = this->gate1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(80)
		this->gate1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,gate1LoadCompleteHandler,(void))

Void OneBitMemory_obj::gate2LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","gate2LoadCompleteHandler",0x66c9041c,"view.elements.OneBitMemory.gate2LoadCompleteHandler","view/elements/OneBitMemory.hx",83,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(84)
		this->gate2BmpData = bmd;
		HX_STACK_LINE(85)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(this->gate2BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		this->gate2 = _g;
		HX_STACK_LINE(86)
		this->gate2->set_name(HX_CSTRING("gate2"));
		HX_STACK_LINE(87)
		Float _g1 = this->gate2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(87)
		this->gate2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,gate2LoadCompleteHandler,(void))

Void OneBitMemory_obj::gate3LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","gate3LoadCompleteHandler",0xcd2da8bb,"view.elements.OneBitMemory.gate3LoadCompleteHandler","view/elements/OneBitMemory.hx",90,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(91)
		this->gate3BmpData = bmd;
		HX_STACK_LINE(92)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(this->gate3BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(92)
		this->gate3 = _g;
		HX_STACK_LINE(93)
		this->gate3->set_name(HX_CSTRING("gate3"));
		HX_STACK_LINE(94)
		Float _g1 = this->gate3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(94)
		this->gate3->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,gate3LoadCompleteHandler,(void))

Void OneBitMemory_obj::gate4LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","gate4LoadCompleteHandler",0x33924d5a,"view.elements.OneBitMemory.gate4LoadCompleteHandler","view/elements/OneBitMemory.hx",97,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(98)
		this->gate4BmpData = bmd;
		HX_STACK_LINE(99)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(this->gate4BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		this->gate4 = _g;
		HX_STACK_LINE(100)
		this->gate4->set_name(HX_CSTRING("gate4"));
		HX_STACK_LINE(101)
		Float _g1 = this->gate4->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(101)
		this->gate4->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,gate4LoadCompleteHandler,(void))

Void OneBitMemory_obj::inputLoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","inputLoadCompleteHandler",0xb146a5b9,"view.elements.OneBitMemory.inputLoadCompleteHandler","view/elements/OneBitMemory.hx",104,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(105)
		this->inputBmpData = bmd;
		HX_STACK_LINE(106)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(this->inputBmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		this->input = _g;
		HX_STACK_LINE(107)
		this->input->set_name(HX_CSTRING("input"));
		HX_STACK_LINE(108)
		Float _g1 = this->input->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(108)
		this->input->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,inputLoadCompleteHandler,(void))

Void OneBitMemory_obj::setLoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","setLoadCompleteHandler",0x63977721,"view.elements.OneBitMemory.setLoadCompleteHandler","view/elements/OneBitMemory.hx",111,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(112)
		this->setBmpData = bmd;
		HX_STACK_LINE(113)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(this->setBmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		this->set = _g;
		HX_STACK_LINE(114)
		this->set->set_name(HX_CSTRING("set"));
		HX_STACK_LINE(115)
		Float _g1 = this->set->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(115)
		this->set->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,setLoadCompleteHandler,(void))

Void OneBitMemory_obj::createInputButton( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","createInputButton",0xc9efb9e8,"view.elements.OneBitMemory.createInputButton","view/elements/OneBitMemory.hx",118,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		::view::elements::SimpleRectangle s = ::view::elements::SimpleRectangle_obj::__new(((int)100 * ::AppConstants_obj::SCALE_FACTOR),((int)60 * ::AppConstants_obj::SCALE_FACTOR),(int)16711935,(int)0,null(),null());		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(120)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		this->inputButton = _g;
		HX_STACK_LINE(121)
		this->inputButton->addChild(s);
		HX_STACK_LINE(122)
		this->inputButton->buttonMode = true;
		HX_STACK_LINE(123)
		this->inputButton->set_x(((int)30 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(124)
		this->inputButton->set_y(((int)98 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(125)
		this->inputButton->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->inputButtonEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(126)
		this->addChild(this->inputButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,createInputButton,(void))

Void OneBitMemory_obj::createSetButton( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","createSetButton",0xd9636880,"view.elements.OneBitMemory.createSetButton","view/elements/OneBitMemory.hx",129,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		::view::elements::SimpleRectangle s = ::view::elements::SimpleRectangle_obj::__new(((int)100 * ::AppConstants_obj::SCALE_FACTOR),((int)60 * ::AppConstants_obj::SCALE_FACTOR),(int)16711935,(int)0,null(),null());		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(131)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		this->setButton = _g;
		HX_STACK_LINE(132)
		this->setButton->addChild(s);
		HX_STACK_LINE(133)
		this->setButton->buttonMode = true;
		HX_STACK_LINE(134)
		this->setButton->set_x(((int)30 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(135)
		this->setButton->set_y(((int)210 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(136)
		this->setButton->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->setButtonEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(137)
		this->addChild(this->setButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,createSetButton,(void))

Void OneBitMemory_obj::inputButtonEventHandler( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","inputButtonEventHandler",0x59622a74,"view.elements.OneBitMemory.inputButtonEventHandler","view/elements/OneBitMemory.hx",140,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/OneBitMemory.hx",141,0xd66d1848)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , HX_CSTRING("oneBitMemoryManualMode"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(141)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		this->dispatchEvent(_g);
		HX_STACK_LINE(142)
		this->inputActive = !(this->inputActive);
		HX_STACK_LINE(143)
		this->setStatus(this->inputActive,this->setActive);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,inputButtonEventHandler,(void))

Void OneBitMemory_obj::setButtonEventHandler( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","setButtonEventHandler",0xc05a7e0c,"view.elements.OneBitMemory.setButtonEventHandler","view/elements/OneBitMemory.hx",146,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/elements/OneBitMemory.hx",147,0xd66d1848)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , HX_CSTRING("oneBitMemoryManualMode"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(147)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(147)
		this->dispatchEvent(_g);
		HX_STACK_LINE(148)
		this->setActive = !(this->setActive);
		HX_STACK_LINE(149)
		this->setStatus(this->inputActive,this->setActive);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,setButtonEventHandler,(void))

Void OneBitMemory_obj::showGate1Line( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","showGate1Line",0x414a0005,"view.elements.OneBitMemory.showGate1Line","view/elements/OneBitMemory.hx",152,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		this->hideGate1Line();
		HX_STACK_LINE(154)
		this->bmpContainer->addChild(this->gate1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,showGate1Line,(void))

Void OneBitMemory_obj::hideGate1Line( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","hideGate1Line",0x74f8ffa0,"view.elements.OneBitMemory.hideGate1Line","view/elements/OneBitMemory.hx",157,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(158)
		::openfl::display::DisplayObject _g = this->bmpContainer->getChildByName(HX_CSTRING("gate1"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(158)
		if (((_g != null()))){
			HX_STACK_LINE(159)
			::openfl::display::DisplayObject _g1 = this->bmpContainer->getChildByName(HX_CSTRING("gate1"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(159)
			this->bmpContainer->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,hideGate1Line,(void))

Void OneBitMemory_obj::showGate2Line( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","showGate2Line",0xd4b09486,"view.elements.OneBitMemory.showGate2Line","view/elements/OneBitMemory.hx",163,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		this->hideGate2Line();
		HX_STACK_LINE(165)
		this->bmpContainer->addChild(this->gate2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,showGate2Line,(void))

Void OneBitMemory_obj::hideGate2Line( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","hideGate2Line",0x085f9421,"view.elements.OneBitMemory.hideGate2Line","view/elements/OneBitMemory.hx",168,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		::openfl::display::DisplayObject _g = this->bmpContainer->getChildByName(HX_CSTRING("gate2"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		if (((_g != null()))){
			HX_STACK_LINE(170)
			::openfl::display::DisplayObject _g1 = this->bmpContainer->getChildByName(HX_CSTRING("gate2"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(170)
			this->bmpContainer->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,hideGate2Line,(void))

Void OneBitMemory_obj::showGate3Line( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","showGate3Line",0x68172907,"view.elements.OneBitMemory.showGate3Line","view/elements/OneBitMemory.hx",174,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(175)
		this->hideGate3Line();
		HX_STACK_LINE(176)
		this->bmpContainer->addChild(this->gate3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,showGate3Line,(void))

Void OneBitMemory_obj::hideGate3Line( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","hideGate3Line",0x9bc628a2,"view.elements.OneBitMemory.hideGate3Line","view/elements/OneBitMemory.hx",179,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(180)
		::openfl::display::DisplayObject _g = this->bmpContainer->getChildByName(HX_CSTRING("gate3"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(180)
		if (((_g != null()))){
			HX_STACK_LINE(181)
			::openfl::display::DisplayObject _g1 = this->bmpContainer->getChildByName(HX_CSTRING("gate3"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(181)
			this->bmpContainer->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,hideGate3Line,(void))

Void OneBitMemory_obj::showGate4Line( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","showGate4Line",0xfb7dbd88,"view.elements.OneBitMemory.showGate4Line","view/elements/OneBitMemory.hx",185,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		this->hideGate4Line();
		HX_STACK_LINE(187)
		this->bmpContainer->addChild(this->gate4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,showGate4Line,(void))

Void OneBitMemory_obj::hideGate4Line( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","hideGate4Line",0x2f2cbd23,"view.elements.OneBitMemory.hideGate4Line","view/elements/OneBitMemory.hx",190,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(191)
		::openfl::display::DisplayObject _g = this->bmpContainer->getChildByName(HX_CSTRING("gate4"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(191)
		if (((_g != null()))){
			HX_STACK_LINE(192)
			::openfl::display::DisplayObject _g1 = this->bmpContainer->getChildByName(HX_CSTRING("gate4"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(192)
			this->bmpContainer->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,hideGate4Line,(void))

Void OneBitMemory_obj::showInputLine( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","showInputLine",0x21f56649,"view.elements.OneBitMemory.showInputLine","view/elements/OneBitMemory.hx",200,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(201)
		this->hideInputLine();
		HX_STACK_LINE(202)
		this->bmpContainer->addChild(this->input);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,showInputLine,(void))

Void OneBitMemory_obj::hideInputLine( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","hideInputLine",0x55a465e4,"view.elements.OneBitMemory.hideInputLine","view/elements/OneBitMemory.hx",205,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		::openfl::display::DisplayObject _g = this->bmpContainer->getChildByName(HX_CSTRING("input"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		if (((_g != null()))){
			HX_STACK_LINE(207)
			::openfl::display::DisplayObject _g1 = this->bmpContainer->getChildByName(HX_CSTRING("input"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(207)
			this->bmpContainer->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,hideInputLine,(void))

Void OneBitMemory_obj::showSetLine( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","showSetLine",0xdfa5b921,"view.elements.OneBitMemory.showSetLine","view/elements/OneBitMemory.hx",211,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(212)
		this->hideSetLine();
		HX_STACK_LINE(213)
		this->bmpContainer->addChild(this->set);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,showSetLine,(void))

Void OneBitMemory_obj::hideSetLine( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","hideSetLine",0x00760bfc,"view.elements.OneBitMemory.hideSetLine","view/elements/OneBitMemory.hx",216,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		::openfl::display::DisplayObject _g = this->bmpContainer->getChildByName(HX_CSTRING("set"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		if (((_g != null()))){
			HX_STACK_LINE(218)
			::openfl::display::DisplayObject _g1 = this->bmpContainer->getChildByName(HX_CSTRING("set"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(218)
			this->bmpContainer->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,hideSetLine,(void))

Void OneBitMemory_obj::setStatus( bool input,bool set){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","setStatus",0xa675d65c,"view.elements.OneBitMemory.setStatus","view/elements/OneBitMemory.hx",222,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(input,"input")
		HX_STACK_ARG(set,"set")
		HX_STACK_LINE(223)
		this->inputActive = input;
		HX_STACK_LINE(224)
		this->setActive = set;
		HX_STACK_LINE(225)
		this->hideInputLine();
		HX_STACK_LINE(226)
		this->hideSetLine();
		HX_STACK_LINE(227)
		this->hideGate1Line();
		HX_STACK_LINE(228)
		this->hideGate2Line();
		HX_STACK_LINE(229)
		this->hideGate3Line();
		HX_STACK_LINE(230)
		this->hideGate4Line();
		HX_STACK_LINE(231)
		if (((bool(this->setActive) && bool(this->inputActive)))){
			HX_STACK_LINE(232)
			this->outActive = true;
			HX_STACK_LINE(233)
			this->showInputLine();
			HX_STACK_LINE(234)
			this->showSetLine();
			HX_STACK_LINE(235)
			this->showGate2Line();
			HX_STACK_LINE(236)
			this->showGate3Line();
		}
		else{
			HX_STACK_LINE(237)
			if (((bool(this->setActive) && bool(!(this->inputActive))))){
				HX_STACK_LINE(238)
				this->outActive = false;
				HX_STACK_LINE(239)
				this->showSetLine();
				HX_STACK_LINE(240)
				this->showGate1Line();
				HX_STACK_LINE(241)
				this->showGate4Line();
			}
			else{
				HX_STACK_LINE(242)
				if (((bool(!(this->setActive)) && bool(this->inputActive)))){
					HX_STACK_LINE(243)
					this->showInputLine();
					HX_STACK_LINE(244)
					this->showGate1Line();
					HX_STACK_LINE(245)
					this->showGate3Line();
					HX_STACK_LINE(246)
					if ((!(this->outActive))){
						HX_STACK_LINE(247)
						this->showGate4Line();
					}
					else{
						HX_STACK_LINE(249)
						this->showGate2Line();
					}
				}
				else{
					HX_STACK_LINE(252)
					if (((bool(!(this->setActive)) && bool(!(this->inputActive))))){
						HX_STACK_LINE(253)
						this->showGate1Line();
						HX_STACK_LINE(254)
						this->showGate3Line();
						HX_STACK_LINE(255)
						if ((!(this->outActive))){
							HX_STACK_LINE(256)
							this->showGate4Line();
						}
						else{
							HX_STACK_LINE(258)
							this->showGate2Line();
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(OneBitMemory_obj,setStatus,(void))

Void OneBitMemory_obj::destroy( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","destroy",0xd9dedce2,"view.elements.OneBitMemory.destroy","view/elements/OneBitMemory.hx",263,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(264)
		this->bottomLayerBmpData->dispose();
		HX_STACK_LINE(265)
		this->gate1BmpData->dispose();
		HX_STACK_LINE(266)
		this->gate2BmpData->dispose();
		HX_STACK_LINE(267)
		this->gate3BmpData->dispose();
		HX_STACK_LINE(268)
		this->gate4BmpData->dispose();
		HX_STACK_LINE(269)
		this->inputBmpData->dispose();
		HX_STACK_LINE(270)
		this->setBmpData->dispose();
		HX_STACK_LINE(271)
		::openfl::display::DisplayObject _g = this->getChildByName(HX_CSTRING("bottomLayer"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(271)
		if (((_g != null()))){
			HX_STACK_LINE(272)
			::openfl::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("bottomLayer"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(272)
			this->removeChild(_g1);
		}
		HX_STACK_LINE(274)
		{
			HX_STACK_LINE(274)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(274)
			while((true)){
				HX_STACK_LINE(274)
				if ((!(((_g1 < (int)5))))){
					HX_STACK_LINE(274)
					break;
				}
				HX_STACK_LINE(274)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(275)
				::openfl::display::DisplayObject _g2 = this->bmpContainer->getChildByName((HX_CSTRING("gate") + i));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(275)
				if (((_g2 != null()))){
					HX_STACK_LINE(276)
					::openfl::display::DisplayObject _g3 = this->bmpContainer->getChildByName((HX_CSTRING("gate") + i));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(276)
					this->bmpContainer->removeChild(_g3);
				}
			}
		}
		HX_STACK_LINE(279)
		::openfl::display::DisplayObject _g4 = this->bmpContainer->getChildByName(HX_CSTRING("input"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(279)
		if (((_g4 != null()))){
			HX_STACK_LINE(280)
			::openfl::display::DisplayObject _g5 = this->bmpContainer->getChildByName(HX_CSTRING("input"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(280)
			this->bmpContainer->removeChild(_g5);
		}
		HX_STACK_LINE(282)
		this->removeChild(this->inputButton);
		HX_STACK_LINE(283)
		this->removeChild(this->setButton);
		HX_STACK_LINE(284)
		this->hideSetLine();
		HX_STACK_LINE(285)
		this->removeChild(this->bmpContainer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OneBitMemory_obj,destroy,(void))


OneBitMemory_obj::OneBitMemory_obj()
{
}

void OneBitMemory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OneBitMemory);
	HX_MARK_MEMBER_NAME(inputActive,"inputActive");
	HX_MARK_MEMBER_NAME(setActive,"setActive");
	HX_MARK_MEMBER_NAME(outActive,"outActive");
	HX_MARK_MEMBER_NAME(bottomLayer,"bottomLayer");
	HX_MARK_MEMBER_NAME(bottomLayerBmpData,"bottomLayerBmpData");
	HX_MARK_MEMBER_NAME(inputButton,"inputButton");
	HX_MARK_MEMBER_NAME(setButton,"setButton");
	HX_MARK_MEMBER_NAME(gate1,"gate1");
	HX_MARK_MEMBER_NAME(gate1BmpData,"gate1BmpData");
	HX_MARK_MEMBER_NAME(gate2,"gate2");
	HX_MARK_MEMBER_NAME(gate2BmpData,"gate2BmpData");
	HX_MARK_MEMBER_NAME(gate3,"gate3");
	HX_MARK_MEMBER_NAME(gate3BmpData,"gate3BmpData");
	HX_MARK_MEMBER_NAME(gate4,"gate4");
	HX_MARK_MEMBER_NAME(gate4BmpData,"gate4BmpData");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(inputBmpData,"inputBmpData");
	HX_MARK_MEMBER_NAME(set,"set");
	HX_MARK_MEMBER_NAME(setBmpData,"setBmpData");
	HX_MARK_MEMBER_NAME(bmpContainer,"bmpContainer");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OneBitMemory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inputActive,"inputActive");
	HX_VISIT_MEMBER_NAME(setActive,"setActive");
	HX_VISIT_MEMBER_NAME(outActive,"outActive");
	HX_VISIT_MEMBER_NAME(bottomLayer,"bottomLayer");
	HX_VISIT_MEMBER_NAME(bottomLayerBmpData,"bottomLayerBmpData");
	HX_VISIT_MEMBER_NAME(inputButton,"inputButton");
	HX_VISIT_MEMBER_NAME(setButton,"setButton");
	HX_VISIT_MEMBER_NAME(gate1,"gate1");
	HX_VISIT_MEMBER_NAME(gate1BmpData,"gate1BmpData");
	HX_VISIT_MEMBER_NAME(gate2,"gate2");
	HX_VISIT_MEMBER_NAME(gate2BmpData,"gate2BmpData");
	HX_VISIT_MEMBER_NAME(gate3,"gate3");
	HX_VISIT_MEMBER_NAME(gate3BmpData,"gate3BmpData");
	HX_VISIT_MEMBER_NAME(gate4,"gate4");
	HX_VISIT_MEMBER_NAME(gate4BmpData,"gate4BmpData");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(inputBmpData,"inputBmpData");
	HX_VISIT_MEMBER_NAME(set,"set");
	HX_VISIT_MEMBER_NAME(setBmpData,"setBmpData");
	HX_VISIT_MEMBER_NAME(bmpContainer,"bmpContainer");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic OneBitMemory_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gate1") ) { return gate1; }
		if (HX_FIELD_EQ(inName,"gate2") ) { return gate2; }
		if (HX_FIELD_EQ(inName,"gate3") ) { return gate3; }
		if (HX_FIELD_EQ(inName,"gate4") ) { return gate4; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setActive") ) { return setActive; }
		if (HX_FIELD_EQ(inName,"outActive") ) { return outActive; }
		if (HX_FIELD_EQ(inName,"setButton") ) { return setButton; }
		if (HX_FIELD_EQ(inName,"setStatus") ) { return setStatus_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setBmpData") ) { return setBmpData; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inputActive") ) { return inputActive; }
		if (HX_FIELD_EQ(inName,"bottomLayer") ) { return bottomLayer; }
		if (HX_FIELD_EQ(inName,"inputButton") ) { return inputButton; }
		if (HX_FIELD_EQ(inName,"showSetLine") ) { return showSetLine_dyn(); }
		if (HX_FIELD_EQ(inName,"hideSetLine") ) { return hideSetLine_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gate1BmpData") ) { return gate1BmpData; }
		if (HX_FIELD_EQ(inName,"gate2BmpData") ) { return gate2BmpData; }
		if (HX_FIELD_EQ(inName,"gate3BmpData") ) { return gate3BmpData; }
		if (HX_FIELD_EQ(inName,"gate4BmpData") ) { return gate4BmpData; }
		if (HX_FIELD_EQ(inName,"inputBmpData") ) { return inputBmpData; }
		if (HX_FIELD_EQ(inName,"bmpContainer") ) { return bmpContainer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"showGate1Line") ) { return showGate1Line_dyn(); }
		if (HX_FIELD_EQ(inName,"hideGate1Line") ) { return hideGate1Line_dyn(); }
		if (HX_FIELD_EQ(inName,"showGate2Line") ) { return showGate2Line_dyn(); }
		if (HX_FIELD_EQ(inName,"hideGate2Line") ) { return hideGate2Line_dyn(); }
		if (HX_FIELD_EQ(inName,"showGate3Line") ) { return showGate3Line_dyn(); }
		if (HX_FIELD_EQ(inName,"hideGate3Line") ) { return hideGate3Line_dyn(); }
		if (HX_FIELD_EQ(inName,"showGate4Line") ) { return showGate4Line_dyn(); }
		if (HX_FIELD_EQ(inName,"hideGate4Line") ) { return hideGate4Line_dyn(); }
		if (HX_FIELD_EQ(inName,"showInputLine") ) { return showInputLine_dyn(); }
		if (HX_FIELD_EQ(inName,"hideInputLine") ) { return hideInputLine_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createSetButton") ) { return createSetButton_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createInputButton") ) { return createInputButton_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bottomLayerBmpData") ) { return bottomLayerBmpData; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setButtonEventHandler") ) { return setButtonEventHandler_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setLoadCompleteHandler") ) { return setLoadCompleteHandler_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"inputButtonEventHandler") ) { return inputButtonEventHandler_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"gate1LoadCompleteHandler") ) { return gate1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"gate2LoadCompleteHandler") ) { return gate2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"gate3LoadCompleteHandler") ) { return gate3LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"gate4LoadCompleteHandler") ) { return gate4LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"inputLoadCompleteHandler") ) { return inputLoadCompleteHandler_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"bottomLayerLoadCompleteHandler") ) { return bottomLayerLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OneBitMemory_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { set=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gate1") ) { gate1=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gate2") ) { gate2=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gate3") ) { gate3=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gate4") ) { gate4=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setActive") ) { setActive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outActive") ) { outActive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setButton") ) { setButton=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setBmpData") ) { setBmpData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inputActive") ) { inputActive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomLayer") ) { bottomLayer=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputButton") ) { inputButton=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gate1BmpData") ) { gate1BmpData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gate2BmpData") ) { gate2BmpData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gate3BmpData") ) { gate3BmpData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gate4BmpData") ) { gate4BmpData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputBmpData") ) { inputBmpData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bmpContainer") ) { bmpContainer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bottomLayerBmpData") ) { bottomLayerBmpData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OneBitMemory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inputActive"));
	outFields->push(HX_CSTRING("setActive"));
	outFields->push(HX_CSTRING("outActive"));
	outFields->push(HX_CSTRING("bottomLayer"));
	outFields->push(HX_CSTRING("bottomLayerBmpData"));
	outFields->push(HX_CSTRING("inputButton"));
	outFields->push(HX_CSTRING("setButton"));
	outFields->push(HX_CSTRING("gate1"));
	outFields->push(HX_CSTRING("gate1BmpData"));
	outFields->push(HX_CSTRING("gate2"));
	outFields->push(HX_CSTRING("gate2BmpData"));
	outFields->push(HX_CSTRING("gate3"));
	outFields->push(HX_CSTRING("gate3BmpData"));
	outFields->push(HX_CSTRING("gate4"));
	outFields->push(HX_CSTRING("gate4BmpData"));
	outFields->push(HX_CSTRING("input"));
	outFields->push(HX_CSTRING("inputBmpData"));
	outFields->push(HX_CSTRING("set"));
	outFields->push(HX_CSTRING("setBmpData"));
	outFields->push(HX_CSTRING("bmpContainer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(OneBitMemory_obj,inputActive),HX_CSTRING("inputActive")},
	{hx::fsBool,(int)offsetof(OneBitMemory_obj,setActive),HX_CSTRING("setActive")},
	{hx::fsBool,(int)offsetof(OneBitMemory_obj,outActive),HX_CSTRING("outActive")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,bottomLayer),HX_CSTRING("bottomLayer")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,bottomLayerBmpData),HX_CSTRING("bottomLayerBmpData")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(OneBitMemory_obj,inputButton),HX_CSTRING("inputButton")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(OneBitMemory_obj,setButton),HX_CSTRING("setButton")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,gate1),HX_CSTRING("gate1")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,gate1BmpData),HX_CSTRING("gate1BmpData")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,gate2),HX_CSTRING("gate2")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,gate2BmpData),HX_CSTRING("gate2BmpData")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,gate3),HX_CSTRING("gate3")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,gate3BmpData),HX_CSTRING("gate3BmpData")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,gate4),HX_CSTRING("gate4")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,gate4BmpData),HX_CSTRING("gate4BmpData")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,input),HX_CSTRING("input")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,inputBmpData),HX_CSTRING("inputBmpData")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,set),HX_CSTRING("set")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,setBmpData),HX_CSTRING("setBmpData")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(OneBitMemory_obj,bmpContainer),HX_CSTRING("bmpContainer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("inputActive"),
	HX_CSTRING("setActive"),
	HX_CSTRING("outActive"),
	HX_CSTRING("bottomLayer"),
	HX_CSTRING("bottomLayerBmpData"),
	HX_CSTRING("inputButton"),
	HX_CSTRING("setButton"),
	HX_CSTRING("gate1"),
	HX_CSTRING("gate1BmpData"),
	HX_CSTRING("gate2"),
	HX_CSTRING("gate2BmpData"),
	HX_CSTRING("gate3"),
	HX_CSTRING("gate3BmpData"),
	HX_CSTRING("gate4"),
	HX_CSTRING("gate4BmpData"),
	HX_CSTRING("input"),
	HX_CSTRING("inputBmpData"),
	HX_CSTRING("set"),
	HX_CSTRING("setBmpData"),
	HX_CSTRING("bmpContainer"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("bottomLayerLoadCompleteHandler"),
	HX_CSTRING("gate1LoadCompleteHandler"),
	HX_CSTRING("gate2LoadCompleteHandler"),
	HX_CSTRING("gate3LoadCompleteHandler"),
	HX_CSTRING("gate4LoadCompleteHandler"),
	HX_CSTRING("inputLoadCompleteHandler"),
	HX_CSTRING("setLoadCompleteHandler"),
	HX_CSTRING("createInputButton"),
	HX_CSTRING("createSetButton"),
	HX_CSTRING("inputButtonEventHandler"),
	HX_CSTRING("setButtonEventHandler"),
	HX_CSTRING("showGate1Line"),
	HX_CSTRING("hideGate1Line"),
	HX_CSTRING("showGate2Line"),
	HX_CSTRING("hideGate2Line"),
	HX_CSTRING("showGate3Line"),
	HX_CSTRING("hideGate3Line"),
	HX_CSTRING("showGate4Line"),
	HX_CSTRING("hideGate4Line"),
	HX_CSTRING("showInputLine"),
	HX_CSTRING("hideInputLine"),
	HX_CSTRING("showSetLine"),
	HX_CSTRING("hideSetLine"),
	HX_CSTRING("setStatus"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OneBitMemory_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OneBitMemory_obj::__mClass,"__mClass");
};

#endif

Class OneBitMemory_obj::__mClass;

void OneBitMemory_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.elements.OneBitMemory"), hx::TCanCast< OneBitMemory_obj> ,sStaticFields,sMemberFields,
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

void OneBitMemory_obj::__boot()
{
}

} // end namespace view
} // end namespace elements
