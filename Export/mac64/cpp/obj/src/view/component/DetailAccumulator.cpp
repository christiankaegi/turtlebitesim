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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_view_component_DetailAccumulator
#include <view/component/DetailAccumulator.h>
#endif
#ifndef INCLUDED_view_elements_DetailAccumulatorLines
#include <view/elements/DetailAccumulatorLines.h>
#endif
#ifndef INCLUDED_view_elements_LabelButton
#include <view/elements/LabelButton.h>
#endif
#ifndef INCLUDED_view_elements_OneBitMemory
#include <view/elements/OneBitMemory.h>
#endif
#ifndef INCLUDED_view_elements_SimpleRectangle
#include <view/elements/SimpleRectangle.h>
#endif
namespace view{
namespace component{

Void DetailAccumulator_obj::__construct()
{
HX_STACK_FRAME("view.component.DetailAccumulator","new",0x6775f70d,"view.component.DetailAccumulator.new","view/component/DetailAccumulator.hx",43,0x6390c145)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(44)
	super::__construct();
	HX_STACK_LINE(45)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//DetailAccumulator_obj::~DetailAccumulator_obj() { }

Dynamic DetailAccumulator_obj::__CreateEmpty() { return  new DetailAccumulator_obj; }
hx::ObjectPtr< DetailAccumulator_obj > DetailAccumulator_obj::__new()
{  hx::ObjectPtr< DetailAccumulator_obj > result = new DetailAccumulator_obj();
	result->__construct();
	return result;}

Dynamic DetailAccumulator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DetailAccumulator_obj > result = new DetailAccumulator_obj();
	result->__construct();
	return result;}

Void DetailAccumulator_obj::addedToStageHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","addedToStageHandler",0x382f2854,"view.component.DetailAccumulator.addedToStageHandler","view/component/DetailAccumulator.hx",48,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(49)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(50)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_bottomLayer2048.png")),this->accuBottomLayerLoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulator_obj,addedToStageHandler,(void))

Void DetailAccumulator_obj::accuBottomLayerLoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","accuBottomLayerLoadCompleteHandler",0x79d5ba6c,"view.component.DetailAccumulator.accuBottomLayerLoadCompleteHandler","view/component/DetailAccumulator.hx",53,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(54)
		this->accuBottomLayerBmpData = bmd;
		HX_STACK_LINE(55)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(this->accuBottomLayerBmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		this->accuBottomLayer = _g;
		HX_STACK_LINE(56)
		this->accuBottomLayer->set_name(HX_CSTRING("accuBottomLayer"));
		HX_STACK_LINE(59)
		Float _g1 = this->accuBottomLayer->set_scaleY(0.5);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(59)
		this->accuBottomLayer->set_scaleX(_g1);
		HX_STACK_LINE(61)
		this->addChild(this->accuBottomLayer);
		HX_STACK_LINE(62)
		::view::elements::DetailAccumulatorLines _g2 = ::view::elements::DetailAccumulatorLines_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(62)
		this->accuLines = _g2;
		HX_STACK_LINE(63)
		this->addChild(this->accuLines);
		HX_STACK_LINE(64)
		::openfl::display::Sprite _g3 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(64)
		this->oneBitMemoryContainer = _g3;
		HX_STACK_LINE(65)
		this->addChild(this->oneBitMemoryContainer);
		HX_STACK_LINE(66)
		this->createOutputText();
		HX_STACK_LINE(67)
		this->createCloseButton();
		HX_STACK_LINE(68)
		this->createOneBitButton();
		HX_STACK_LINE(69)
		::events::AppEvent _g4 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(69)
		this->dispatchEvent(_g4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulator_obj,accuBottomLayerLoadCompleteHandler,(void))

Void DetailAccumulator_obj::createCloseButton( ){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","createCloseButton",0xcd34fd9b,"view.component.DetailAccumulator.createCloseButton","view/component/DetailAccumulator.hx",72,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::view::elements::LabelButton _g = ::view::elements::LabelButton_obj::__new((int)100,HX_CSTRING("Schliessen"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		this->closeButton = _g;
		HX_STACK_LINE(74)
		this->closeButton->set_name(HX_CSTRING("closeButton"));
		HX_STACK_LINE(75)
		this->closeButton->set_x(((int)880 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(76)
		this->closeButton->set_y(((int)565 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(77)
		this->closeButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(78)
		this->addChild(this->closeButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulator_obj,createCloseButton,(void))

Void DetailAccumulator_obj::createOneBitButton( ){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","createOneBitButton",0x27f31068,"view.component.DetailAccumulator.createOneBitButton","view/component/DetailAccumulator.hx",81,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		::view::elements::SimpleRectangle s = ::view::elements::SimpleRectangle_obj::__new(((int)60 * ::AppConstants_obj::SCALE_FACTOR),((int)33 * ::AppConstants_obj::SCALE_FACTOR),(int)16711935,(int)0,null(),null());		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(83)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		this->oneBitButton = _g;
		HX_STACK_LINE(84)
		this->oneBitButton->addChild(s);
		HX_STACK_LINE(85)
		this->oneBitButton->buttonMode = true;
		HX_STACK_LINE(86)
		this->oneBitButton->set_x(((int)415 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(87)
		this->oneBitButton->set_y(((int)325 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(88)
		this->oneBitButton->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->oneBitButtonEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(89)
		this->addChild(this->oneBitButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulator_obj,createOneBitButton,(void))

Void DetailAccumulator_obj::createOutputText( ){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","createOutputText",0x793b0b9d,"view.component.DetailAccumulator.createOutputText","view/component/DetailAccumulator.hx",92,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		::openfl::text::TextField _g = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		this->tfOutput = _g;
		HX_STACK_LINE(94)
		::openfl::text::TextFormat _g1 = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Consolas Bold"),((int)80 * ::AppConstants_obj::SCALE_FACTOR),(int)65280,null(),null(),null(),null(),null(),::openfl::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(94)
		this->tfOutput->set_defaultTextFormat(_g1);
		HX_STACK_LINE(95)
		this->tfOutput->embedFonts = true;
		HX_STACK_LINE(96)
		this->tfOutput->set_selectable(false);
		HX_STACK_LINE(97)
		this->tfOutput->set_border(true);
		HX_STACK_LINE(98)
		this->tfOutput->set_borderColor((int)10526880);
		HX_STACK_LINE(99)
		this->tfOutput->set_background(true);
		HX_STACK_LINE(100)
		this->tfOutput->set_backgroundColor((int)0);
		HX_STACK_LINE(101)
		this->tfOutput->set_width(((int)100 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(102)
		this->tfOutput->set_height(((int)80 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(103)
		this->tfOutput->set_x(((int)465 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(104)
		this->tfOutput->set_y(((int)125 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(105)
		this->tfOutput->set_text(HX_CSTRING(""));
		HX_STACK_LINE(106)
		this->addChild(this->tfOutput);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulator_obj,createOutputText,(void))

Void DetailAccumulator_obj::oneBitButtonEventHandler( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","oneBitButtonEventHandler",0x0b33dffc,"view.component.DetailAccumulator.oneBitButtonEventHandler","view/component/DetailAccumulator.hx",110,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(110)
		if (((this->oneBitMemory != null()))){
			HX_STACK_LINE(111)
			this->oneBitMemory->destroy();
			HX_STACK_LINE(112)
			this->oneBitMemoryContainer->removeChild(this->oneBitMemory);
			HX_STACK_LINE(113)
			this->oneBitMemory = null();
		}
		else{
			HX_STACK_LINE(115)
			::view::elements::OneBitMemory _g = ::view::elements::OneBitMemory_obj::__new(this->oneBitMemoryInputActive,this->oneBitMemorySetActive);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(115)
			this->oneBitMemory = _g;
			HX_STACK_LINE(116)
			this->oneBitMemory->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
			HX_STACK_LINE(117)
			this->oneBitMemory->set_name(HX_CSTRING("oneBitMemory"));
			HX_STACK_LINE(118)
			this->oneBitMemoryContainer->addChild(this->oneBitMemory);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulator_obj,oneBitButtonEventHandler,(void))

Void DetailAccumulator_obj::dataEventHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","dataEventHandler",0x19fd514d,"view.component.DetailAccumulator.dataEventHandler","view/component/DetailAccumulator.hx",122,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ::events::AppEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/DetailAccumulator.hx",123,0x6390c145)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , event->data->__Field(HX_CSTRING("id"),true),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(123)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(event),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(123)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulator_obj,dataEventHandler,(void))

Void DetailAccumulator_obj::setOutputText( ::String value){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","setOutputText",0xd0427b7d,"view.component.DetailAccumulator.setOutputText","view/component/DetailAccumulator.hx",131,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(131)
		this->tfOutput->set_text(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulator_obj,setOutputText,(void))

Void DetailAccumulator_obj::showInputLines( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","showInputLines",0x7e222b65,"view.component.DetailAccumulator.showInputLines","view/component/DetailAccumulator.hx",134,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(135)
		this->accuLines->showInputLines(codeArr);
		HX_STACK_LINE(136)
		this->oneBitMemoryInputActive = codeArr->__get((int)4);
		HX_STACK_LINE(137)
		if (((this->oneBitMemory != null()))){
			HX_STACK_LINE(138)
			this->oneBitMemory->setStatus(this->oneBitMemoryInputActive,this->oneBitMemorySetActive);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulator_obj,showInputLines,(void))

Void DetailAccumulator_obj::showEnableLine( ){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","showEnableLine",0x2be675e7,"view.component.DetailAccumulator.showEnableLine","view/component/DetailAccumulator.hx",144,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		this->accuLines->showEnableLine();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulator_obj,showEnableLine,(void))

Void DetailAccumulator_obj::showEnablerOutLines( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","showEnablerOutLines",0xbb57ba70,"view.component.DetailAccumulator.showEnablerOutLines","view/component/DetailAccumulator.hx",148,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(148)
		this->accuLines->showEnablerOutLines(codeArr);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulator_obj,showEnablerOutLines,(void))

Void DetailAccumulator_obj::hideEnablerOutLines( ){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","hideEnablerOutLines",0xf44ee04b,"view.component.DetailAccumulator.hideEnablerOutLines","view/component/DetailAccumulator.hx",152,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		this->accuLines->hideEnablerOutLines();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulator_obj,hideEnablerOutLines,(void))

Void DetailAccumulator_obj::hideEnableLine( ){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","hideEnableLine",0x31571dec,"view.component.DetailAccumulator.hideEnableLine","view/component/DetailAccumulator.hx",156,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(156)
		this->accuLines->hideEnableLine();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulator_obj,hideEnableLine,(void))

Void DetailAccumulator_obj::showSetLine( ){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","showSetLine",0xa5af10e6,"view.component.DetailAccumulator.showSetLine","view/component/DetailAccumulator.hx",159,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		this->oneBitMemorySetActive = true;
		HX_STACK_LINE(161)
		this->accuLines->showSetLine();
		HX_STACK_LINE(162)
		if (((this->oneBitMemory != null()))){
			HX_STACK_LINE(163)
			this->oneBitMemory->setStatus(this->oneBitMemoryInputActive,this->oneBitMemorySetActive);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulator_obj,showSetLine,(void))

Void DetailAccumulator_obj::hideSetLine( ){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","hideSetLine",0xc67f63c1,"view.component.DetailAccumulator.hideSetLine","view/component/DetailAccumulator.hx",167,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		this->oneBitMemorySetActive = false;
		HX_STACK_LINE(169)
		this->accuLines->hideSetLine();
		HX_STACK_LINE(170)
		if (((this->oneBitMemory != null()))){
			HX_STACK_LINE(171)
			this->oneBitMemory->setStatus(this->oneBitMemoryInputActive,this->oneBitMemorySetActive);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulator_obj,hideSetLine,(void))

Void DetailAccumulator_obj::destroy( ){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","destroy",0x9b05ae27,"view.component.DetailAccumulator.destroy","view/component/DetailAccumulator.hx",175,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		this->accuBottomLayerBmpData->dispose();
		HX_STACK_LINE(177)
		this->removeChild(this->accuBottomLayer);
		HX_STACK_LINE(178)
		this->removeChild(this->closeButton);
		HX_STACK_LINE(179)
		this->accuLines->destroy();
		HX_STACK_LINE(180)
		this->removeChild(this->accuLines);
		HX_STACK_LINE(181)
		if (((this->oneBitMemory != null()))){
			HX_STACK_LINE(182)
			this->oneBitMemory->removeEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null());
			HX_STACK_LINE(183)
			this->oneBitMemory->destroy();
			HX_STACK_LINE(184)
			this->oneBitMemoryContainer->removeChild(this->oneBitMemory);
			HX_STACK_LINE(185)
			this->oneBitMemory = null();
		}
		HX_STACK_LINE(187)
		this->removeChild(this->oneBitMemoryContainer);
		HX_STACK_LINE(188)
		this->removeChild(this->tfOutput);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulator_obj,destroy,(void))


DetailAccumulator_obj::DetailAccumulator_obj()
{
}

void DetailAccumulator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DetailAccumulator);
	HX_MARK_MEMBER_NAME(accuBottomLayer,"accuBottomLayer");
	HX_MARK_MEMBER_NAME(accuBottomLayerBmpData,"accuBottomLayerBmpData");
	HX_MARK_MEMBER_NAME(oneBitMemory,"oneBitMemory");
	HX_MARK_MEMBER_NAME(oneBitMemoryContainer,"oneBitMemoryContainer");
	HX_MARK_MEMBER_NAME(oneBitMemoryInputActive,"oneBitMemoryInputActive");
	HX_MARK_MEMBER_NAME(oneBitMemorySetActive,"oneBitMemorySetActive");
	HX_MARK_MEMBER_NAME(accuLinesContainer,"accuLinesContainer");
	HX_MARK_MEMBER_NAME(accuLines,"accuLines");
	HX_MARK_MEMBER_NAME(closeButton,"closeButton");
	HX_MARK_MEMBER_NAME(oneBitButton,"oneBitButton");
	HX_MARK_MEMBER_NAME(tfOutput,"tfOutput");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DetailAccumulator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(accuBottomLayer,"accuBottomLayer");
	HX_VISIT_MEMBER_NAME(accuBottomLayerBmpData,"accuBottomLayerBmpData");
	HX_VISIT_MEMBER_NAME(oneBitMemory,"oneBitMemory");
	HX_VISIT_MEMBER_NAME(oneBitMemoryContainer,"oneBitMemoryContainer");
	HX_VISIT_MEMBER_NAME(oneBitMemoryInputActive,"oneBitMemoryInputActive");
	HX_VISIT_MEMBER_NAME(oneBitMemorySetActive,"oneBitMemorySetActive");
	HX_VISIT_MEMBER_NAME(accuLinesContainer,"accuLinesContainer");
	HX_VISIT_MEMBER_NAME(accuLines,"accuLines");
	HX_VISIT_MEMBER_NAME(closeButton,"closeButton");
	HX_VISIT_MEMBER_NAME(oneBitButton,"oneBitButton");
	HX_VISIT_MEMBER_NAME(tfOutput,"tfOutput");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DetailAccumulator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tfOutput") ) { return tfOutput; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"accuLines") ) { return accuLines; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeButton") ) { return closeButton; }
		if (HX_FIELD_EQ(inName,"showSetLine") ) { return showSetLine_dyn(); }
		if (HX_FIELD_EQ(inName,"hideSetLine") ) { return hideSetLine_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"oneBitMemory") ) { return oneBitMemory; }
		if (HX_FIELD_EQ(inName,"oneBitButton") ) { return oneBitButton; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setOutputText") ) { return setOutputText_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"showInputLines") ) { return showInputLines_dyn(); }
		if (HX_FIELD_EQ(inName,"showEnableLine") ) { return showEnableLine_dyn(); }
		if (HX_FIELD_EQ(inName,"hideEnableLine") ) { return hideEnableLine_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"accuBottomLayer") ) { return accuBottomLayer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createOutputText") ) { return createOutputText_dyn(); }
		if (HX_FIELD_EQ(inName,"dataEventHandler") ) { return dataEventHandler_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createCloseButton") ) { return createCloseButton_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"accuLinesContainer") ) { return accuLinesContainer; }
		if (HX_FIELD_EQ(inName,"createOneBitButton") ) { return createOneBitButton_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"showEnablerOutLines") ) { return showEnablerOutLines_dyn(); }
		if (HX_FIELD_EQ(inName,"hideEnablerOutLines") ) { return hideEnablerOutLines_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"oneBitMemoryContainer") ) { return oneBitMemoryContainer; }
		if (HX_FIELD_EQ(inName,"oneBitMemorySetActive") ) { return oneBitMemorySetActive; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accuBottomLayerBmpData") ) { return accuBottomLayerBmpData; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"oneBitMemoryInputActive") ) { return oneBitMemoryInputActive; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"oneBitButtonEventHandler") ) { return oneBitButtonEventHandler_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"accuBottomLayerLoadCompleteHandler") ) { return accuBottomLayerLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DetailAccumulator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tfOutput") ) { tfOutput=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"accuLines") ) { accuLines=inValue.Cast< ::view::elements::DetailAccumulatorLines >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeButton") ) { closeButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"oneBitMemory") ) { oneBitMemory=inValue.Cast< ::view::elements::OneBitMemory >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oneBitButton") ) { oneBitButton=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"accuBottomLayer") ) { accuBottomLayer=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"accuLinesContainer") ) { accuLinesContainer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"oneBitMemoryContainer") ) { oneBitMemoryContainer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oneBitMemorySetActive") ) { oneBitMemorySetActive=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accuBottomLayerBmpData") ) { accuBottomLayerBmpData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"oneBitMemoryInputActive") ) { oneBitMemoryInputActive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DetailAccumulator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("accuBottomLayer"));
	outFields->push(HX_CSTRING("accuBottomLayerBmpData"));
	outFields->push(HX_CSTRING("oneBitMemory"));
	outFields->push(HX_CSTRING("oneBitMemoryContainer"));
	outFields->push(HX_CSTRING("oneBitMemoryInputActive"));
	outFields->push(HX_CSTRING("oneBitMemorySetActive"));
	outFields->push(HX_CSTRING("accuLinesContainer"));
	outFields->push(HX_CSTRING("accuLines"));
	outFields->push(HX_CSTRING("closeButton"));
	outFields->push(HX_CSTRING("oneBitButton"));
	outFields->push(HX_CSTRING("tfOutput"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(DetailAccumulator_obj,accuBottomLayer),HX_CSTRING("accuBottomLayer")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(DetailAccumulator_obj,accuBottomLayerBmpData),HX_CSTRING("accuBottomLayerBmpData")},
	{hx::fsObject /*::view::elements::OneBitMemory*/ ,(int)offsetof(DetailAccumulator_obj,oneBitMemory),HX_CSTRING("oneBitMemory")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DetailAccumulator_obj,oneBitMemoryContainer),HX_CSTRING("oneBitMemoryContainer")},
	{hx::fsBool,(int)offsetof(DetailAccumulator_obj,oneBitMemoryInputActive),HX_CSTRING("oneBitMemoryInputActive")},
	{hx::fsBool,(int)offsetof(DetailAccumulator_obj,oneBitMemorySetActive),HX_CSTRING("oneBitMemorySetActive")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DetailAccumulator_obj,accuLinesContainer),HX_CSTRING("accuLinesContainer")},
	{hx::fsObject /*::view::elements::DetailAccumulatorLines*/ ,(int)offsetof(DetailAccumulator_obj,accuLines),HX_CSTRING("accuLines")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(DetailAccumulator_obj,closeButton),HX_CSTRING("closeButton")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DetailAccumulator_obj,oneBitButton),HX_CSTRING("oneBitButton")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(DetailAccumulator_obj,tfOutput),HX_CSTRING("tfOutput")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("accuBottomLayer"),
	HX_CSTRING("accuBottomLayerBmpData"),
	HX_CSTRING("oneBitMemory"),
	HX_CSTRING("oneBitMemoryContainer"),
	HX_CSTRING("oneBitMemoryInputActive"),
	HX_CSTRING("oneBitMemorySetActive"),
	HX_CSTRING("accuLinesContainer"),
	HX_CSTRING("accuLines"),
	HX_CSTRING("closeButton"),
	HX_CSTRING("oneBitButton"),
	HX_CSTRING("tfOutput"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("accuBottomLayerLoadCompleteHandler"),
	HX_CSTRING("createCloseButton"),
	HX_CSTRING("createOneBitButton"),
	HX_CSTRING("createOutputText"),
	HX_CSTRING("oneBitButtonEventHandler"),
	HX_CSTRING("dataEventHandler"),
	HX_CSTRING("setOutputText"),
	HX_CSTRING("showInputLines"),
	HX_CSTRING("showEnableLine"),
	HX_CSTRING("showEnablerOutLines"),
	HX_CSTRING("hideEnablerOutLines"),
	HX_CSTRING("hideEnableLine"),
	HX_CSTRING("showSetLine"),
	HX_CSTRING("hideSetLine"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DetailAccumulator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DetailAccumulator_obj::__mClass,"__mClass");
};

#endif

Class DetailAccumulator_obj::__mClass;

void DetailAccumulator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.DetailAccumulator"), hx::TCanCast< DetailAccumulator_obj> ,sStaticFields,sMemberFields,
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

void DetailAccumulator_obj::__boot()
{
}

} // end namespace view
} // end namespace component
