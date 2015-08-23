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
#ifndef INCLUDED_view_component_lines_Decoder
#include <view/component/lines/Decoder.h>
#endif
namespace view{
namespace component{
namespace lines{

Void Decoder_obj::__construct()
{
HX_STACK_FRAME("view.component.lines.Decoder","new",0xf6815fed,"view.component.lines.Decoder.new","view/component/lines/Decoder.hx",16,0x11a6b6a6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(18)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Decoder_obj::~Decoder_obj() { }

Dynamic Decoder_obj::__CreateEmpty() { return  new Decoder_obj; }
hx::ObjectPtr< Decoder_obj > Decoder_obj::__new()
{  hx::ObjectPtr< Decoder_obj > result = new Decoder_obj();
	result->__construct();
	return result;}

Dynamic Decoder_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Decoder_obj > result = new Decoder_obj();
	result->__construct();
	return result;}

Void Decoder_obj::addedToStageHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("view.component.lines.Decoder","addedToStageHandler",0x6fe25134,"view.component.lines.Decoder.addedToStageHandler","view/component/lines/Decoder.hx",21,0x11a6b6a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(22)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(23)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Decoder-out-1.png")),this->out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(24)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Decoder-out-2.png")),this->out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(25)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Decoder-out-3.png")),this->out3LoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Decoder_obj,addedToStageHandler,(void))

Void Decoder_obj::out1LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Decoder","out1LoadCompleteHandler",0x35da1275,"view.component.lines.Decoder.out1LoadCompleteHandler","view/component/lines/Decoder.hx",28,0x11a6b6a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(29)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		this->out1 = _g;
		HX_STACK_LINE(30)
		this->out1->set_name(HX_CSTRING("decOut1"));
		HX_STACK_LINE(31)
		Float _g1 = this->out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		this->out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Decoder_obj,out1LoadCompleteHandler,(void))

Void Decoder_obj::out2LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Decoder","out2LoadCompleteHandler",0x9c3eb714,"view.component.lines.Decoder.out2LoadCompleteHandler","view/component/lines/Decoder.hx",34,0x11a6b6a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(35)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		this->out2 = _g;
		HX_STACK_LINE(36)
		this->out2->set_name(HX_CSTRING("decOut2"));
		HX_STACK_LINE(37)
		Float _g1 = this->out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(37)
		this->out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Decoder_obj,out2LoadCompleteHandler,(void))

Void Decoder_obj::out3LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Decoder","out3LoadCompleteHandler",0x02a35bb3,"view.component.lines.Decoder.out3LoadCompleteHandler","view/component/lines/Decoder.hx",40,0x11a6b6a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(41)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		this->out3 = _g;
		HX_STACK_LINE(42)
		this->out3->set_name(HX_CSTRING("decOut3"));
		HX_STACK_LINE(43)
		Float _g1 = this->out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		this->out3->set_scaleX(_g1);
		HX_STACK_LINE(44)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(44)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Decoder_obj,out3LoadCompleteHandler,(void))

Void Decoder_obj::showLines( ::String code){
{
		HX_STACK_FRAME("view.component.lines.Decoder","showLines",0x5dfb7b0f,"view.component.lines.Decoder.showLines","view/component/lines/Decoder.hx",52,0x11a6b6a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(52)
		::String _g = code.substr((int)4,(int)2);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::MULTIPLEXER_ACCUMULATOR)){
			HX_STACK_LINE(54)
			this->addChild(this->out3);
		}
		else if (  ( _switch_1==::AppConstants_obj::MULTIPLEXER_REGISTER1)){
			HX_STACK_LINE(56)
			this->addChild(this->out2);
		}
		else if (  ( _switch_1==::AppConstants_obj::MULTIPLEXER_REGISTER2)){
			HX_STACK_LINE(58)
			this->addChild(this->out1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Decoder_obj,showLines,(void))

Void Decoder_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.lines.Decoder","hideAllLines",0x0d17b6d3,"view.component.lines.Decoder.hideAllLines","view/component/lines/Decoder.hx",63,0x11a6b6a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		int _g = (int)1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		while((true)){
			HX_STACK_LINE(63)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(63)
				break;
			}
			HX_STACK_LINE(63)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(65)
			::openfl::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("decOut") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(65)
			if (((_g1 != null()))){
				HX_STACK_LINE(66)
				::openfl::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("decOut") + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(66)
				this->removeChild(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Decoder_obj,hideAllLines,(void))


Decoder_obj::Decoder_obj()
{
}

void Decoder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Decoder);
	HX_MARK_MEMBER_NAME(out1,"out1");
	HX_MARK_MEMBER_NAME(out2,"out2");
	HX_MARK_MEMBER_NAME(out3,"out3");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Decoder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(out1,"out1");
	HX_VISIT_MEMBER_NAME(out2,"out2");
	HX_VISIT_MEMBER_NAME(out3,"out3");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Decoder_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"out1") ) { return out1; }
		if (HX_FIELD_EQ(inName,"out2") ) { return out2; }
		if (HX_FIELD_EQ(inName,"out3") ) { return out3; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showLines") ) { return showLines_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideAllLines") ) { return hideAllLines_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"out1LoadCompleteHandler") ) { return out1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"out2LoadCompleteHandler") ) { return out2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"out3LoadCompleteHandler") ) { return out3LoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Decoder_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"out1") ) { out1=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out2") ) { out2=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out3") ) { out3=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Decoder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("out1"));
	outFields->push(HX_CSTRING("out2"));
	outFields->push(HX_CSTRING("out3"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Decoder_obj,out1),HX_CSTRING("out1")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Decoder_obj,out2),HX_CSTRING("out2")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Decoder_obj,out3),HX_CSTRING("out3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("out1"),
	HX_CSTRING("out2"),
	HX_CSTRING("out3"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("out1LoadCompleteHandler"),
	HX_CSTRING("out2LoadCompleteHandler"),
	HX_CSTRING("out3LoadCompleteHandler"),
	HX_CSTRING("showLines"),
	HX_CSTRING("hideAllLines"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Decoder_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Decoder_obj::__mClass,"__mClass");
};

#endif

Class Decoder_obj::__mClass;

void Decoder_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.lines.Decoder"), hx::TCanCast< Decoder_obj> ,sStaticFields,sMemberFields,
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

void Decoder_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace lines
