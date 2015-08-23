#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
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
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
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
HX_STACK_FRAME("view.component.DetailAccumulator","new",0x6775f70d,"view.component.DetailAccumulator.new","view/component/DetailAccumulator.hx",34,0x6390c145)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(35)
	super::__construct();
	HX_STACK_LINE(36)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
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

Void DetailAccumulator_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","addedToStageHandler",0x382f2854,"view.component.DetailAccumulator.addedToStageHandler","view/component/DetailAccumulator.hx",39,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(40)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(41)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_bottomLayer2048.png")),this->accuBottomLayerLoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulator_obj,addedToStageHandler,(void))

Void DetailAccumulator_obj::accuBottomLayerLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","accuBottomLayerLoadCompleteHandler",0x79d5ba6c,"view.component.DetailAccumulator.accuBottomLayerLoadCompleteHandler","view/component/DetailAccumulator.hx",44,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(45)
		this->accuBottomLayerBmpData = bmd;
		HX_STACK_LINE(46)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->accuBottomLayerBmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		this->accuBottomLayer = _g;
		HX_STACK_LINE(47)
		this->accuBottomLayer->set_name(HX_CSTRING("accuBottomLayer"));
		HX_STACK_LINE(52)
		this->addChild(this->accuBottomLayer);
		HX_STACK_LINE(53)
		::view::elements::DetailAccumulatorLines _g1 = ::view::elements::DetailAccumulatorLines_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		this->accuLines = _g1;
		HX_STACK_LINE(54)
		this->addChild(this->accuLines);
		HX_STACK_LINE(55)
		::openfl::_legacy::display::Sprite _g2 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(55)
		this->oneBitMemoryContainer = _g2;
		HX_STACK_LINE(56)
		this->addChild(this->oneBitMemoryContainer);
		HX_STACK_LINE(57)
		this->createOutputText();
		HX_STACK_LINE(58)
		this->createCloseButton();
		HX_STACK_LINE(59)
		this->createOneBitButton();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulator_obj,accuBottomLayerLoadCompleteHandler,(void))

Void DetailAccumulator_obj::createCloseButton( ){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","createCloseButton",0xcd34fd9b,"view.component.DetailAccumulator.createCloseButton","view/component/DetailAccumulator.hx",63,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		::view::elements::LabelButton _g = ::view::elements::LabelButton_obj::__new((int)100,HX_CSTRING("Schliessen"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		this->closeButton = _g;
		HX_STACK_LINE(65)
		this->closeButton->set_name(HX_CSTRING("closeButton"));
		HX_STACK_LINE(66)
		this->closeButton->set_x(((int)880 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(67)
		this->closeButton->set_y(((int)565 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(68)
		this->closeButton->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(69)
		this->addChild(this->closeButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulator_obj,createCloseButton,(void))

Void DetailAccumulator_obj::createOneBitButton( ){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","createOneBitButton",0x27f31068,"view.component.DetailAccumulator.createOneBitButton","view/component/DetailAccumulator.hx",72,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::view::elements::SimpleRectangle s = ::view::elements::SimpleRectangle_obj::__new(((int)60 * ::AppConstants_obj::SCALE_FACTOR),((int)33 * ::AppConstants_obj::SCALE_FACTOR),(int)16711935,(int)0);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(74)
		::openfl::_legacy::display::Sprite _g = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		this->oneBitButton = _g;
		HX_STACK_LINE(75)
		this->oneBitButton->addChild(s);
		HX_STACK_LINE(76)
		this->oneBitButton->buttonMode = true;
		HX_STACK_LINE(77)
		this->oneBitButton->set_x(((int)415 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(78)
		this->oneBitButton->set_y(((int)325 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(79)
		this->oneBitButton->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->oneBitButtonEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(80)
		this->addChild(this->oneBitButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulator_obj,createOneBitButton,(void))

Void DetailAccumulator_obj::createOutputText( ){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","createOutputText",0x793b0b9d,"view.component.DetailAccumulator.createOutputText","view/component/DetailAccumulator.hx",83,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		::openfl::_legacy::text::TextField _g = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		this->tfOutput = _g;
		HX_STACK_LINE(85)
		::openfl::_legacy::text::TextFormat _g1 = ::openfl::_legacy::text::TextFormat_obj::__new(HX_CSTRING("Consolas Bold"),((int)80 * ::AppConstants_obj::SCALE_FACTOR),(int)65280,null(),null(),null(),null(),null(),::openfl::_legacy::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(85)
		this->tfOutput->set_defaultTextFormat(_g1);
		HX_STACK_LINE(86)
		this->tfOutput->set_embedFonts(true);
		HX_STACK_LINE(87)
		this->tfOutput->set_selectable(false);
		HX_STACK_LINE(88)
		this->tfOutput->set_border(true);
		HX_STACK_LINE(89)
		this->tfOutput->set_borderColor((int)10526880);
		HX_STACK_LINE(90)
		this->tfOutput->set_background(true);
		HX_STACK_LINE(91)
		this->tfOutput->set_backgroundColor((int)0);
		HX_STACK_LINE(92)
		this->tfOutput->set_width(((int)100 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(93)
		this->tfOutput->set_height(((int)80 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(94)
		this->tfOutput->set_x(((int)465 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(95)
		this->tfOutput->set_y(((int)125 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(96)
		this->tfOutput->set_text(HX_CSTRING(""));
		HX_STACK_LINE(97)
		this->addChild(this->tfOutput);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulator_obj,createOutputText,(void))

Void DetailAccumulator_obj::oneBitButtonEventHandler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","oneBitButtonEventHandler",0x0b33dffc,"view.component.DetailAccumulator.oneBitButtonEventHandler","view/component/DetailAccumulator.hx",101,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(101)
		if (((this->oneBitMemory != null()))){
			HX_STACK_LINE(102)
			this->oneBitMemory->destroy();
			HX_STACK_LINE(103)
			this->oneBitMemoryContainer->removeChild(this->oneBitMemory);
			HX_STACK_LINE(104)
			this->oneBitMemory = null();
		}
		else{
			HX_STACK_LINE(106)
			::view::elements::OneBitMemory _g = ::view::elements::OneBitMemory_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(106)
			this->oneBitMemory = _g;
			HX_STACK_LINE(107)
			this->oneBitMemory->set_name(HX_CSTRING("oneBitMemory"));
			HX_STACK_LINE(108)
			this->oneBitMemoryContainer->addChild(this->oneBitMemory);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulator_obj,oneBitButtonEventHandler,(void))

Void DetailAccumulator_obj::dataEventHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","dataEventHandler",0x19fd514d,"view.component.DetailAccumulator.dataEventHandler","view/component/DetailAccumulator.hx",112,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ::events::AppEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/DetailAccumulator.hx",113,0x6390c145)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , event->data->__Field(HX_CSTRING("id"),true),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(113)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(event),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulator_obj,dataEventHandler,(void))

Void DetailAccumulator_obj::setOutputText( ::String value){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","setOutputText",0xd0427b7d,"view.component.DetailAccumulator.setOutputText","view/component/DetailAccumulator.hx",121,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(121)
		this->tfOutput->set_text(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulator_obj,setOutputText,(void))

Void DetailAccumulator_obj::showLines( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","showLines",0x59aa2a2f,"view.component.DetailAccumulator.showLines","view/component/DetailAccumulator.hx",125,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(125)
		this->accuLines->showLines(codeArr);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulator_obj,showLines,(void))

Void DetailAccumulator_obj::destroy( ){
{
		HX_STACK_FRAME("view.component.DetailAccumulator","destroy",0x9b05ae27,"view.component.DetailAccumulator.destroy","view/component/DetailAccumulator.hx",128,0x6390c145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		this->accuBottomLayerBmpData->dispose();
		HX_STACK_LINE(130)
		this->removeChild(this->accuBottomLayer);
		HX_STACK_LINE(131)
		this->removeChild(this->closeButton);
		HX_STACK_LINE(132)
		this->accuLines->destroy();
		HX_STACK_LINE(133)
		this->removeChild(this->accuLines);
		HX_STACK_LINE(134)
		if (((this->oneBitMemory != null()))){
			HX_STACK_LINE(135)
			this->oneBitMemory->destroy();
			HX_STACK_LINE(136)
			this->oneBitMemoryContainer->removeChild(this->oneBitMemory);
			HX_STACK_LINE(137)
			this->oneBitMemory = null();
		}
		HX_STACK_LINE(139)
		this->removeChild(this->oneBitMemoryContainer);
		HX_STACK_LINE(140)
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
	HX_MARK_MEMBER_NAME(accuLinesContainer,"accuLinesContainer");
	HX_MARK_MEMBER_NAME(accuLines,"accuLines");
	HX_MARK_MEMBER_NAME(closeButton,"closeButton");
	HX_MARK_MEMBER_NAME(oneBitButton,"oneBitButton");
	HX_MARK_MEMBER_NAME(tfOutput,"tfOutput");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DetailAccumulator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(accuBottomLayer,"accuBottomLayer");
	HX_VISIT_MEMBER_NAME(accuBottomLayerBmpData,"accuBottomLayerBmpData");
	HX_VISIT_MEMBER_NAME(oneBitMemory,"oneBitMemory");
	HX_VISIT_MEMBER_NAME(oneBitMemoryContainer,"oneBitMemoryContainer");
	HX_VISIT_MEMBER_NAME(accuLinesContainer,"accuLinesContainer");
	HX_VISIT_MEMBER_NAME(accuLines,"accuLines");
	HX_VISIT_MEMBER_NAME(closeButton,"closeButton");
	HX_VISIT_MEMBER_NAME(oneBitButton,"oneBitButton");
	HX_VISIT_MEMBER_NAME(tfOutput,"tfOutput");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
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
		if (HX_FIELD_EQ(inName,"showLines") ) { return showLines_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeButton") ) { return closeButton; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"oneBitMemory") ) { return oneBitMemory; }
		if (HX_FIELD_EQ(inName,"oneBitButton") ) { return oneBitButton; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setOutputText") ) { return setOutputText_dyn(); }
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
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"oneBitMemoryContainer") ) { return oneBitMemoryContainer; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accuBottomLayerBmpData") ) { return accuBottomLayerBmpData; }
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
		if (HX_FIELD_EQ(inName,"tfOutput") ) { tfOutput=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"accuLines") ) { accuLines=inValue.Cast< ::view::elements::DetailAccumulatorLines >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeButton") ) { closeButton=inValue.Cast< ::view::elements::LabelButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"oneBitMemory") ) { oneBitMemory=inValue.Cast< ::view::elements::OneBitMemory >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oneBitButton") ) { oneBitButton=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"accuBottomLayer") ) { accuBottomLayer=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"accuLinesContainer") ) { accuLinesContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"oneBitMemoryContainer") ) { oneBitMemoryContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accuBottomLayerBmpData") ) { accuBottomLayerBmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DetailAccumulator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("accuBottomLayer"));
	outFields->push(HX_CSTRING("accuBottomLayerBmpData"));
	outFields->push(HX_CSTRING("oneBitMemory"));
	outFields->push(HX_CSTRING("oneBitMemoryContainer"));
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
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulator_obj,accuBottomLayer),HX_CSTRING("accuBottomLayer")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulator_obj,accuBottomLayerBmpData),HX_CSTRING("accuBottomLayerBmpData")},
	{hx::fsObject /*::view::elements::OneBitMemory*/ ,(int)offsetof(DetailAccumulator_obj,oneBitMemory),HX_CSTRING("oneBitMemory")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(DetailAccumulator_obj,oneBitMemoryContainer),HX_CSTRING("oneBitMemoryContainer")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(DetailAccumulator_obj,accuLinesContainer),HX_CSTRING("accuLinesContainer")},
	{hx::fsObject /*::view::elements::DetailAccumulatorLines*/ ,(int)offsetof(DetailAccumulator_obj,accuLines),HX_CSTRING("accuLines")},
	{hx::fsObject /*::view::elements::LabelButton*/ ,(int)offsetof(DetailAccumulator_obj,closeButton),HX_CSTRING("closeButton")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(DetailAccumulator_obj,oneBitButton),HX_CSTRING("oneBitButton")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(DetailAccumulator_obj,tfOutput),HX_CSTRING("tfOutput")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("accuBottomLayer"),
	HX_CSTRING("accuBottomLayerBmpData"),
	HX_CSTRING("oneBitMemory"),
	HX_CSTRING("oneBitMemoryContainer"),
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
	HX_CSTRING("showLines"),
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
