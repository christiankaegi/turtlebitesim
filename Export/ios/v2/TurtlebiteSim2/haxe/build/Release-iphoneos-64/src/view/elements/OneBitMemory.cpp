#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_view_elements_OneBitMemory
#include <view/elements/OneBitMemory.h>
#endif
namespace view{
namespace elements{

Void OneBitMemory_obj::__construct()
{
HX_STACK_FRAME("view.elements.OneBitMemory","new",0x68cc6c48,"view.elements.OneBitMemory.new","view/elements/OneBitMemory.hx",27,0xd66d1848)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(29)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//OneBitMemory_obj::~OneBitMemory_obj() { }

Dynamic OneBitMemory_obj::__CreateEmpty() { return  new OneBitMemory_obj; }
hx::ObjectPtr< OneBitMemory_obj > OneBitMemory_obj::__new()
{  hx::ObjectPtr< OneBitMemory_obj > result = new OneBitMemory_obj();
	result->__construct();
	return result;}

Dynamic OneBitMemory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OneBitMemory_obj > result = new OneBitMemory_obj();
	result->__construct();
	return result;}

Void OneBitMemory_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","addedToStageHandler",0x62b1038f,"view.elements.OneBitMemory.addedToStageHandler","view/elements/OneBitMemory.hx",32,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(33)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(34)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_bottomLayer2048.png")),this->bottomLayerLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(35)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_gate1_out.png")),this->gate1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(36)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_gate2_out.png")),this->gate2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(37)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_gate3_out.png")),this->gate3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(38)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_gate4_out.png")),this->gate4LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(39)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_input.png")),this->inputLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(40)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_1Bit_set.png")),this->setLoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,addedToStageHandler,(void))

Void OneBitMemory_obj::bottomLayerLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","bottomLayerLoadCompleteHandler",0xe8b16e5d,"view.elements.OneBitMemory.bottomLayerLoadCompleteHandler","view/elements/OneBitMemory.hx",44,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(45)
		this->bottomLayerBmpData = bmd;
		HX_STACK_LINE(46)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->bottomLayerBmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		this->bottomLayer = _g;
		HX_STACK_LINE(47)
		this->bottomLayer->set_name(HX_CSTRING("bottomLayer"));
		HX_STACK_LINE(52)
		this->addChild(this->bottomLayer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,bottomLayerLoadCompleteHandler,(void))

Void OneBitMemory_obj::gate1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","gate1LoadCompleteHandler",0x00645f7d,"view.elements.OneBitMemory.gate1LoadCompleteHandler","view/elements/OneBitMemory.hx",55,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(56)
		this->gate1BmpData = bmd;
		HX_STACK_LINE(57)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->gate1BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		this->gate1 = _g;
		HX_STACK_LINE(58)
		this->gate1->set_name(HX_CSTRING("gate1"));
		HX_STACK_LINE(59)
		Float _g1 = this->gate1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(59)
		this->gate1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,gate1LoadCompleteHandler,(void))

Void OneBitMemory_obj::gate2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","gate2LoadCompleteHandler",0x66c9041c,"view.elements.OneBitMemory.gate2LoadCompleteHandler","view/elements/OneBitMemory.hx",63,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(64)
		this->gate2BmpData = bmd;
		HX_STACK_LINE(65)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->gate2BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		this->gate2 = _g;
		HX_STACK_LINE(66)
		this->gate2->set_name(HX_CSTRING("gate2"));
		HX_STACK_LINE(67)
		Float _g1 = this->gate2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		this->gate2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,gate2LoadCompleteHandler,(void))

Void OneBitMemory_obj::gate3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","gate3LoadCompleteHandler",0xcd2da8bb,"view.elements.OneBitMemory.gate3LoadCompleteHandler","view/elements/OneBitMemory.hx",71,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(72)
		this->gate3BmpData = bmd;
		HX_STACK_LINE(73)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->gate3BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		this->gate3 = _g;
		HX_STACK_LINE(74)
		this->gate3->set_name(HX_CSTRING("gate3"));
		HX_STACK_LINE(75)
		Float _g1 = this->gate3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(75)
		this->gate3->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,gate3LoadCompleteHandler,(void))

Void OneBitMemory_obj::gate4LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","gate4LoadCompleteHandler",0x33924d5a,"view.elements.OneBitMemory.gate4LoadCompleteHandler","view/elements/OneBitMemory.hx",79,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(80)
		this->gate4BmpData = bmd;
		HX_STACK_LINE(81)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->gate4BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		this->gate4 = _g;
		HX_STACK_LINE(82)
		this->gate4->set_name(HX_CSTRING("gate4"));
		HX_STACK_LINE(83)
		Float _g1 = this->gate4->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(83)
		this->gate4->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,gate4LoadCompleteHandler,(void))

Void OneBitMemory_obj::inputLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","inputLoadCompleteHandler",0xb146a5b9,"view.elements.OneBitMemory.inputLoadCompleteHandler","view/elements/OneBitMemory.hx",87,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(88)
		this->inputBmpData = bmd;
		HX_STACK_LINE(89)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->inputBmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		this->input = _g;
		HX_STACK_LINE(90)
		this->input->set_name(HX_CSTRING("input"));
		HX_STACK_LINE(91)
		Float _g1 = this->input->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(91)
		this->input->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,inputLoadCompleteHandler,(void))

Void OneBitMemory_obj::setLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","setLoadCompleteHandler",0x63977721,"view.elements.OneBitMemory.setLoadCompleteHandler","view/elements/OneBitMemory.hx",95,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(96)
		this->setBmpData = bmd;
		HX_STACK_LINE(97)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->setBmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		this->set = _g;
		HX_STACK_LINE(98)
		this->set->set_name(HX_CSTRING("set"));
		HX_STACK_LINE(99)
		Float _g1 = this->set->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		this->set->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OneBitMemory_obj,setLoadCompleteHandler,(void))

Void OneBitMemory_obj::destroy( ){
{
		HX_STACK_FRAME("view.elements.OneBitMemory","destroy",0xd9dedce2,"view.elements.OneBitMemory.destroy","view/elements/OneBitMemory.hx",104,0xd66d1848)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		this->bottomLayerBmpData->dispose();
		HX_STACK_LINE(106)
		this->gate1BmpData->dispose();
		HX_STACK_LINE(107)
		this->gate2BmpData->dispose();
		HX_STACK_LINE(108)
		this->gate3BmpData->dispose();
		HX_STACK_LINE(109)
		this->gate4BmpData->dispose();
		HX_STACK_LINE(110)
		this->inputBmpData->dispose();
		HX_STACK_LINE(111)
		this->setBmpData->dispose();
		HX_STACK_LINE(112)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("bottomLayer"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		if (((_g != null()))){
			HX_STACK_LINE(113)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("bottomLayer"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(113)
			this->removeChild(_g1);
		}
		HX_STACK_LINE(115)
		::openfl::_legacy::display::DisplayObject _g2 = this->getChildByName(HX_CSTRING("gate1"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(115)
		if (((_g2 != null()))){
			HX_STACK_LINE(116)
			::openfl::_legacy::display::DisplayObject _g3 = this->getChildByName(HX_CSTRING("gate1"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(116)
			this->removeChild(_g3);
		}
		HX_STACK_LINE(118)
		::openfl::_legacy::display::DisplayObject _g4 = this->getChildByName(HX_CSTRING("gate2"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(118)
		if (((_g4 != null()))){
			HX_STACK_LINE(119)
			::openfl::_legacy::display::DisplayObject _g5 = this->getChildByName(HX_CSTRING("gate2"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(119)
			this->removeChild(_g5);
		}
		HX_STACK_LINE(121)
		::openfl::_legacy::display::DisplayObject _g6 = this->getChildByName(HX_CSTRING("gate3"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(121)
		if (((_g6 != null()))){
			HX_STACK_LINE(122)
			::openfl::_legacy::display::DisplayObject _g7 = this->getChildByName(HX_CSTRING("gate3"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(122)
			this->removeChild(_g7);
		}
		HX_STACK_LINE(124)
		::openfl::_legacy::display::DisplayObject _g8 = this->getChildByName(HX_CSTRING("gate4"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(124)
		if (((_g8 != null()))){
			HX_STACK_LINE(125)
			::openfl::_legacy::display::DisplayObject _g9 = this->getChildByName(HX_CSTRING("gate4"));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(125)
			this->removeChild(_g9);
		}
		HX_STACK_LINE(127)
		::openfl::_legacy::display::DisplayObject _g10 = this->getChildByName(HX_CSTRING("input"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(127)
		if (((_g10 != null()))){
			HX_STACK_LINE(128)
			::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName(HX_CSTRING("input"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(128)
			this->removeChild(_g11);
		}
		HX_STACK_LINE(130)
		::openfl::_legacy::display::DisplayObject _g12 = this->getChildByName(HX_CSTRING("set"));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(130)
		if (((_g12 != null()))){
			HX_STACK_LINE(131)
			::openfl::_legacy::display::DisplayObject _g13 = this->getChildByName(HX_CSTRING("set"));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(131)
			this->removeChild(_g13);
		}
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
	HX_MARK_MEMBER_NAME(bottomLayer,"bottomLayer");
	HX_MARK_MEMBER_NAME(bottomLayerBmpData,"bottomLayerBmpData");
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
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OneBitMemory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bottomLayer,"bottomLayer");
	HX_VISIT_MEMBER_NAME(bottomLayerBmpData,"bottomLayerBmpData");
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
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
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
	case 10:
		if (HX_FIELD_EQ(inName,"setBmpData") ) { return setBmpData; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomLayer") ) { return bottomLayer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gate1BmpData") ) { return gate1BmpData; }
		if (HX_FIELD_EQ(inName,"gate2BmpData") ) { return gate2BmpData; }
		if (HX_FIELD_EQ(inName,"gate3BmpData") ) { return gate3BmpData; }
		if (HX_FIELD_EQ(inName,"gate4BmpData") ) { return gate4BmpData; }
		if (HX_FIELD_EQ(inName,"inputBmpData") ) { return inputBmpData; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bottomLayerBmpData") ) { return bottomLayerBmpData; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setLoadCompleteHandler") ) { return setLoadCompleteHandler_dyn(); }
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
		if (HX_FIELD_EQ(inName,"set") ) { set=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gate1") ) { gate1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gate2") ) { gate2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gate3") ) { gate3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gate4") ) { gate4=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setBmpData") ) { setBmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomLayer") ) { bottomLayer=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gate1BmpData") ) { gate1BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gate2BmpData") ) { gate2BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gate3BmpData") ) { gate3BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gate4BmpData") ) { gate4BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputBmpData") ) { inputBmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bottomLayerBmpData") ) { bottomLayerBmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OneBitMemory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bottomLayer"));
	outFields->push(HX_CSTRING("bottomLayerBmpData"));
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
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,bottomLayer),HX_CSTRING("bottomLayer")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,bottomLayerBmpData),HX_CSTRING("bottomLayerBmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,gate1),HX_CSTRING("gate1")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,gate1BmpData),HX_CSTRING("gate1BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,gate2),HX_CSTRING("gate2")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,gate2BmpData),HX_CSTRING("gate2BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,gate3),HX_CSTRING("gate3")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,gate3BmpData),HX_CSTRING("gate3BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,gate4),HX_CSTRING("gate4")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,gate4BmpData),HX_CSTRING("gate4BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,input),HX_CSTRING("input")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,inputBmpData),HX_CSTRING("inputBmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(OneBitMemory_obj,set),HX_CSTRING("set")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(OneBitMemory_obj,setBmpData),HX_CSTRING("setBmpData")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bottomLayer"),
	HX_CSTRING("bottomLayerBmpData"),
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
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("bottomLayerLoadCompleteHandler"),
	HX_CSTRING("gate1LoadCompleteHandler"),
	HX_CSTRING("gate2LoadCompleteHandler"),
	HX_CSTRING("gate3LoadCompleteHandler"),
	HX_CSTRING("gate4LoadCompleteHandler"),
	HX_CSTRING("inputLoadCompleteHandler"),
	HX_CSTRING("setLoadCompleteHandler"),
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
