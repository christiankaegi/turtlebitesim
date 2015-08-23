#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_vo_FrequencyVO
#include <model/vo/FrequencyVO.h>
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
#ifndef INCLUDED_openfl__legacy_system_Capabilities
#include <openfl/_legacy/system/Capabilities.h>
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
#ifndef INCLUDED_view_component_Test
#include <view/component/Test.h>
#endif
namespace view{
namespace component{

Void Test_obj::__construct()
{
HX_STACK_FRAME("view.component.Test","new",0xe316c89e,"view.component.Test.new","view/component/Test.hx",23,0x2ec21590)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Test_obj::~Test_obj() { }

Dynamic Test_obj::__CreateEmpty() { return  new Test_obj; }
hx::ObjectPtr< Test_obj > Test_obj::__new()
{  hx::ObjectPtr< Test_obj > result = new Test_obj();
	result->__construct();
	return result;}

Dynamic Test_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Test_obj > result = new Test_obj();
	result->__construct();
	return result;}

Void Test_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.Test","addedToStageHandler",0x2e5bebe5,"view.component.Test.addedToStageHandler","view/component/Test.hx",28,0x2ec21590)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(29)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(31)
		this->addBtnClockSpeed();
		HX_STACK_LINE(32)
		this->addBtnZoom();
		HX_STACK_LINE(33)
		this->addClockSpeedInfo();
		HX_STACK_LINE(34)
		this->addBusData();
		HX_STACK_LINE(35)
		this->addDebugInfo();
		HX_STACK_LINE(36)
		this->tfDebug->set_visible(false);
		HX_STACK_LINE(46)
		this->tfClockSpeed->set_x((int)50);
		HX_STACK_LINE(47)
		this->tfClockSpeed->set_y((int)725);
		HX_STACK_LINE(48)
		this->tfBusData->set_x((int)200);
		HX_STACK_LINE(49)
		this->tfBusData->set_y((int)650);
		HX_STACK_LINE(50)
		this->tfDebug->set_x((int)500);
		HX_STACK_LINE(51)
		this->tfDebug->set_y((int)725);
		HX_STACK_LINE(53)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Test_obj,addedToStageHandler,(void))

Void Test_obj::addBtnClockSpeed( ){
{
		HX_STACK_FRAME("view.component.Test","addBtnClockSpeed",0x07b39a76,"view.component.Test.addBtnClockSpeed","view/component/Test.hx",57,0x2ec21590)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		::openfl::_legacy::display::Bitmap bitmap;		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(62)
		::openfl::_legacy::display::BitmapData _g = ::openfl::_legacy::Assets_obj::getBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/simpleButton.png")),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		::openfl::_legacy::display::Bitmap _g1 = ::openfl::_legacy::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		bitmap = _g1;
		HX_STACK_LINE(64)
		::openfl::_legacy::display::Sprite _g2 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(64)
		this->btnClockSpeed = _g2;
		HX_STACK_LINE(65)
		this->btnClockSpeed->addChild(bitmap);
		HX_STACK_LINE(66)
		this->btnClockSpeed->buttonMode = true;
		HX_STACK_LINE(67)
		this->btnClockSpeed->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->btnClockSpeedHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(72)
		this->btnClockSpeed->set_x((int)50);
		HX_STACK_LINE(73)
		this->btnClockSpeed->set_y((int)675);
		HX_STACK_LINE(75)
		this->addChild(this->btnClockSpeed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Test_obj,addBtnClockSpeed,(void))

Void Test_obj::addBtnZoom( ){
{
		HX_STACK_FRAME("view.component.Test","addBtnZoom",0xd850c6f0,"view.component.Test.addBtnZoom","view/component/Test.hx",78,0x2ec21590)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		::openfl::_legacy::display::Bitmap bitmap;		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(83)
		::openfl::_legacy::display::BitmapData _g = ::openfl::_legacy::Assets_obj::getBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/simpleButton.png")),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		::openfl::_legacy::display::Bitmap _g1 = ::openfl::_legacy::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(83)
		bitmap = _g1;
		HX_STACK_LINE(85)
		::openfl::_legacy::display::Sprite _g2 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(85)
		this->btnZoom = _g2;
		HX_STACK_LINE(86)
		this->btnZoom->addChild(bitmap);
		HX_STACK_LINE(87)
		this->btnZoom->buttonMode = true;
		HX_STACK_LINE(88)
		this->btnZoom->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->btnZoomHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(93)
		this->btnZoom->set_x((int)700);
		HX_STACK_LINE(94)
		this->btnZoom->set_y((int)675);
		HX_STACK_LINE(96)
		this->addChild(this->btnZoom);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Test_obj,addBtnZoom,(void))

Void Test_obj::addClockSpeedInfo( ){
{
		HX_STACK_FRAME("view.component.Test","addClockSpeedInfo",0xfa293ea6,"view.component.Test.addClockSpeedInfo","view/component/Test.hx",99,0x2ec21590)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		::openfl::_legacy::text::TextField _g = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		this->tfClockSpeed = _g;
		HX_STACK_LINE(101)
		this->tfClockSpeed->set_defaultTextFormat(::AppConstants_obj::TEXT_FORMAT);
		HX_STACK_LINE(102)
		this->tfClockSpeed->set_embedFonts(true);
		HX_STACK_LINE(103)
		this->tfClockSpeed->set_textColor((int)16777215);
		HX_STACK_LINE(104)
		this->tfClockSpeed->set_wordWrap(true);
		HX_STACK_LINE(105)
		this->tfClockSpeed->set_multiline(true);
		HX_STACK_LINE(106)
		this->tfClockSpeed->set_width((int)900);
		HX_STACK_LINE(107)
		this->tfClockSpeed->set_x((int)300);
		HX_STACK_LINE(108)
		this->tfClockSpeed->set_text(HX_CSTRING("Hello World"));
		HX_STACK_LINE(109)
		this->addChild(this->tfClockSpeed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Test_obj,addClockSpeedInfo,(void))

Void Test_obj::addBusData( ){
{
		HX_STACK_FRAME("view.component.Test","addBusData",0x1117bceb,"view.component.Test.addBusData","view/component/Test.hx",112,0x2ec21590)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		::openfl::_legacy::text::TextField _g = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		this->tfBusData = _g;
		HX_STACK_LINE(114)
		this->tfBusData->set_defaultTextFormat(::AppConstants_obj::TEXT_FORMAT);
		HX_STACK_LINE(115)
		this->tfBusData->set_embedFonts(true);
		HX_STACK_LINE(116)
		this->tfBusData->set_textColor((int)65280);
		HX_STACK_LINE(117)
		this->tfBusData->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
		HX_STACK_LINE(118)
		this->addChild(this->tfBusData);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Test_obj,addBusData,(void))

Void Test_obj::addDebugInfo( ){
{
		HX_STACK_FRAME("view.component.Test","addDebugInfo",0x93820e02,"view.component.Test.addDebugInfo","view/component/Test.hx",121,0x2ec21590)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		::openfl::_legacy::text::TextField _g = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		this->tfDebug = _g;
		HX_STACK_LINE(123)
		this->tfDebug->set_defaultTextFormat(::AppConstants_obj::TEXT_FORMAT);
		HX_STACK_LINE(124)
		this->tfDebug->set_embedFonts(true);
		HX_STACK_LINE(125)
		this->tfDebug->set_textColor((int)16777215);
		HX_STACK_LINE(126)
		this->tfDebug->set_wordWrap(true);
		HX_STACK_LINE(127)
		this->tfDebug->set_multiline(true);
		HX_STACK_LINE(128)
		this->tfDebug->set_width((int)500);
		HX_STACK_LINE(129)
		this->tfDebug->set_text(HX_CSTRING("Hello Debug"));
		HX_STACK_LINE(130)
		this->addChild(this->tfDebug);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Test_obj,addDebugInfo,(void))

Void Test_obj::btnClockSpeedHandler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.Test","btnClockSpeedHandler",0x159099f7,"view.component.Test.btnClockSpeedHandler","view/component/Test.hx",133,0x2ec21590)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(134)
		Float _g = ::openfl::_legacy::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		::String str = (HX_CSTRING("Hello Event: screenDPI: ") + _g);		HX_STACK_VAR(str,"str");
		struct _Function_1_1{
			inline static Dynamic Block( ::String &str){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/Test.hx",135,0x2ec21590)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , HX_CSTRING("btnClockSpeed"),false);
					__result->Add(HX_CSTRING("str") , str,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(135)
		::events::AppEvent _g1 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(str),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(135)
		this->dispatchEvent(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Test_obj,btnClockSpeedHandler,(void))

Void Test_obj::btnZoomHandler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("view.component.Test","btnZoomHandler",0xc3aa1c7d,"view.component.Test.btnZoomHandler","view/component/Test.hx",138,0x2ec21590)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/component/Test.hx",139,0x2ec21590)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , HX_CSTRING("btnZoom"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(139)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DATA,_Function_1_1::Block(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(139)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Test_obj,btnZoomHandler,(void))

Void Test_obj::test( ::String str){
{
		HX_STACK_FRAME("view.component.Test","test",0xd4d00654,"view.component.Test.test","view/component/Test.hx",143,0x2ec21590)
		HX_STACK_THIS(this)
		HX_STACK_ARG(str,"str")
		HX_STACK_LINE(143)
		this->tfClockSpeed->set_text(str);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Test_obj,test,(void))

Void Test_obj::clockSpeedChanged( ::model::vo::FrequencyVO speed){
{
		HX_STACK_FRAME("view.component.Test","clockSpeedChanged",0xbaf8cbd9,"view.component.Test.clockSpeedChanged","view/component/Test.hx",146,0x2ec21590)
		HX_STACK_THIS(this)
		HX_STACK_ARG(speed,"speed")
		HX_STACK_LINE(147)
		Float _g = ::openfl::_legacy::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(147)
		::String _g1 = (HX_CSTRING("dpi: ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(147)
		::String _g2 = (_g1 + HX_CSTRING(", Clock Speed: "));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(147)
		::String _g3 = (_g2 + speed->label);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(147)
		this->tfClockSpeed->set_text(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Test_obj,clockSpeedChanged,(void))

Void Test_obj::showInstruction( ::String text){
{
		HX_STACK_FRAME("view.component.Test","showInstruction",0xd48cad4f,"view.component.Test.showInstruction","view/component/Test.hx",151,0x2ec21590)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(151)
		this->tfBusData->set_text(text);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Test_obj,showInstruction,(void))


Test_obj::Test_obj()
{
}

void Test_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Test);
	HX_MARK_MEMBER_NAME(btnClockSpeed,"btnClockSpeed");
	HX_MARK_MEMBER_NAME(btnZoom,"btnZoom");
	HX_MARK_MEMBER_NAME(tfClockSpeed,"tfClockSpeed");
	HX_MARK_MEMBER_NAME(tfBusData,"tfBusData");
	HX_MARK_MEMBER_NAME(tfDebug,"tfDebug");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Test_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(btnClockSpeed,"btnClockSpeed");
	HX_VISIT_MEMBER_NAME(btnZoom,"btnZoom");
	HX_VISIT_MEMBER_NAME(tfClockSpeed,"tfClockSpeed");
	HX_VISIT_MEMBER_NAME(tfBusData,"tfBusData");
	HX_VISIT_MEMBER_NAME(tfDebug,"tfDebug");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Test_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"btnZoom") ) { return btnZoom; }
		if (HX_FIELD_EQ(inName,"tfDebug") ) { return tfDebug; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tfBusData") ) { return tfBusData; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addBtnZoom") ) { return addBtnZoom_dyn(); }
		if (HX_FIELD_EQ(inName,"addBusData") ) { return addBusData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tfClockSpeed") ) { return tfClockSpeed; }
		if (HX_FIELD_EQ(inName,"addDebugInfo") ) { return addDebugInfo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"btnClockSpeed") ) { return btnClockSpeed; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"btnZoomHandler") ) { return btnZoomHandler_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"showInstruction") ) { return showInstruction_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addBtnClockSpeed") ) { return addBtnClockSpeed_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addClockSpeedInfo") ) { return addClockSpeedInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"clockSpeedChanged") ) { return clockSpeedChanged_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"btnClockSpeedHandler") ) { return btnClockSpeedHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Test_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"btnZoom") ) { btnZoom=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tfDebug") ) { tfDebug=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tfBusData") ) { tfBusData=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tfClockSpeed") ) { tfClockSpeed=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"btnClockSpeed") ) { btnClockSpeed=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Test_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("btnClockSpeed"));
	outFields->push(HX_CSTRING("btnZoom"));
	outFields->push(HX_CSTRING("tfClockSpeed"));
	outFields->push(HX_CSTRING("tfBusData"));
	outFields->push(HX_CSTRING("tfDebug"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Test_obj,btnClockSpeed),HX_CSTRING("btnClockSpeed")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Test_obj,btnZoom),HX_CSTRING("btnZoom")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Test_obj,tfClockSpeed),HX_CSTRING("tfClockSpeed")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Test_obj,tfBusData),HX_CSTRING("tfBusData")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Test_obj,tfDebug),HX_CSTRING("tfDebug")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("btnClockSpeed"),
	HX_CSTRING("btnZoom"),
	HX_CSTRING("tfClockSpeed"),
	HX_CSTRING("tfBusData"),
	HX_CSTRING("tfDebug"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("addBtnClockSpeed"),
	HX_CSTRING("addBtnZoom"),
	HX_CSTRING("addClockSpeedInfo"),
	HX_CSTRING("addBusData"),
	HX_CSTRING("addDebugInfo"),
	HX_CSTRING("btnClockSpeedHandler"),
	HX_CSTRING("btnZoomHandler"),
	HX_CSTRING("test"),
	HX_CSTRING("clockSpeedChanged"),
	HX_CSTRING("showInstruction"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Test_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Test_obj::__mClass,"__mClass");
};

#endif

Class Test_obj::__mClass;

void Test_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.Test"), hx::TCanCast< Test_obj> ,sStaticFields,sMemberFields,
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

void Test_obj::__boot()
{
}

} // end namespace view
} // end namespace component
