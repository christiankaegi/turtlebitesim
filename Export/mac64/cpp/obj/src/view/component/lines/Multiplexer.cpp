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
#ifndef INCLUDED_view_component_lines_Multiplexer
#include <view/component/lines/Multiplexer.h>
#endif
namespace view{
namespace component{
namespace lines{

Void Multiplexer_obj::__construct()
{
HX_STACK_FRAME("view.component.lines.Multiplexer","new",0x738e673e,"view.component.lines.Multiplexer.new","view/component/lines/Multiplexer.hx",24,0x9148c1f5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Multiplexer_obj::~Multiplexer_obj() { }

Dynamic Multiplexer_obj::__CreateEmpty() { return  new Multiplexer_obj; }
hx::ObjectPtr< Multiplexer_obj > Multiplexer_obj::__new()
{  hx::ObjectPtr< Multiplexer_obj > result = new Multiplexer_obj();
	result->__construct();
	return result;}

Dynamic Multiplexer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Multiplexer_obj > result = new Multiplexer_obj();
	result->__construct();
	return result;}

Void Multiplexer_obj::addedToStageHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("view.component.lines.Multiplexer","addedToStageHandler",0xb0d2ca85,"view.component.lines.Multiplexer.addedToStageHandler","view/component/lines/Multiplexer.hx",29,0x9148c1f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(30)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(31)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/MUX-out-0.png")),this->out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(32)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/MUX-out-1.png")),this->out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(33)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/MUX-out-2.png")),this->out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(34)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/MUX-out-3.png")),this->out3LoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Multiplexer_obj,addedToStageHandler,(void))

Void Multiplexer_obj::out0LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Multiplexer","out0LoadCompleteHandler",0x680b63a7,"view.component.lines.Multiplexer.out0LoadCompleteHandler","view/component/lines/Multiplexer.hx",37,0x9148c1f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(38)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		this->out0 = _g;
		HX_STACK_LINE(39)
		this->out0->set_name(HX_CSTRING("muxOut0"));
		HX_STACK_LINE(40)
		Float _g1 = this->out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		this->out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Multiplexer_obj,out0LoadCompleteHandler,(void))

Void Multiplexer_obj::out1LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Multiplexer","out1LoadCompleteHandler",0xce700846,"view.component.lines.Multiplexer.out1LoadCompleteHandler","view/component/lines/Multiplexer.hx",43,0x9148c1f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(44)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		this->out1 = _g;
		HX_STACK_LINE(45)
		this->out1->set_name(HX_CSTRING("muxOut1"));
		HX_STACK_LINE(46)
		Float _g1 = this->out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(46)
		this->out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Multiplexer_obj,out1LoadCompleteHandler,(void))

Void Multiplexer_obj::out2LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Multiplexer","out2LoadCompleteHandler",0x34d4ace5,"view.component.lines.Multiplexer.out2LoadCompleteHandler","view/component/lines/Multiplexer.hx",49,0x9148c1f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(50)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		this->out2 = _g;
		HX_STACK_LINE(51)
		this->out2->set_name(HX_CSTRING("muxOut2"));
		HX_STACK_LINE(52)
		Float _g1 = this->out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(52)
		this->out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Multiplexer_obj,out2LoadCompleteHandler,(void))

Void Multiplexer_obj::out3LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Multiplexer","out3LoadCompleteHandler",0x9b395184,"view.component.lines.Multiplexer.out3LoadCompleteHandler","view/component/lines/Multiplexer.hx",55,0x9148c1f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(56)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		this->out3 = _g;
		HX_STACK_LINE(57)
		this->out3->set_name(HX_CSTRING("muxOut3"));
		HX_STACK_LINE(58)
		Float _g1 = this->out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(58)
		this->out3->set_scaleX(_g1);
		HX_STACK_LINE(59)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(59)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Multiplexer_obj,out3LoadCompleteHandler,(void))

Void Multiplexer_obj::showLines( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.component.lines.Multiplexer","showLines",0xe1525520,"view.component.lines.Multiplexer.showLines","view/component/lines/Multiplexer.hx",66,0x9148c1f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(67)
		this->hideAllLines();
		HX_STACK_LINE(68)
		if (((codeArr->__get((int)4) == true))){
			HX_STACK_LINE(69)
			this->addChild(this->out3);
		}
		HX_STACK_LINE(71)
		if (((codeArr->__get((int)5) == true))){
			HX_STACK_LINE(72)
			this->addChild(this->out2);
		}
		HX_STACK_LINE(74)
		if (((codeArr->__get((int)6) == true))){
			HX_STACK_LINE(75)
			this->addChild(this->out1);
		}
		HX_STACK_LINE(77)
		if (((codeArr->__get((int)7) == true))){
			HX_STACK_LINE(78)
			this->addChild(this->out0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Multiplexer_obj,showLines,(void))

Void Multiplexer_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.lines.Multiplexer","hideAllLines",0xe741bd62,"view.component.lines.Multiplexer.hideAllLines","view/component/lines/Multiplexer.hx",83,0x9148c1f5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		while((true)){
			HX_STACK_LINE(83)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(83)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(84)
			::openfl::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("muxOut") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(84)
			if (((_g1 != null()))){
				HX_STACK_LINE(85)
				::openfl::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("muxOut") + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(85)
				this->removeChild(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Multiplexer_obj,hideAllLines,(void))


Multiplexer_obj::Multiplexer_obj()
{
}

void Multiplexer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Multiplexer);
	HX_MARK_MEMBER_NAME(out0,"out0");
	HX_MARK_MEMBER_NAME(out1,"out1");
	HX_MARK_MEMBER_NAME(out2,"out2");
	HX_MARK_MEMBER_NAME(out3,"out3");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Multiplexer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(out0,"out0");
	HX_VISIT_MEMBER_NAME(out1,"out1");
	HX_VISIT_MEMBER_NAME(out2,"out2");
	HX_VISIT_MEMBER_NAME(out3,"out3");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Multiplexer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"out0") ) { return out0; }
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
		if (HX_FIELD_EQ(inName,"out0LoadCompleteHandler") ) { return out0LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"out1LoadCompleteHandler") ) { return out1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"out2LoadCompleteHandler") ) { return out2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"out3LoadCompleteHandler") ) { return out3LoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Multiplexer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"out0") ) { out0=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out1") ) { out1=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out2") ) { out2=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out3") ) { out3=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Multiplexer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("out0"));
	outFields->push(HX_CSTRING("out1"));
	outFields->push(HX_CSTRING("out2"));
	outFields->push(HX_CSTRING("out3"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Multiplexer_obj,out0),HX_CSTRING("out0")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Multiplexer_obj,out1),HX_CSTRING("out1")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Multiplexer_obj,out2),HX_CSTRING("out2")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Multiplexer_obj,out3),HX_CSTRING("out3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("out0"),
	HX_CSTRING("out1"),
	HX_CSTRING("out2"),
	HX_CSTRING("out3"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("out0LoadCompleteHandler"),
	HX_CSTRING("out1LoadCompleteHandler"),
	HX_CSTRING("out2LoadCompleteHandler"),
	HX_CSTRING("out3LoadCompleteHandler"),
	HX_CSTRING("showLines"),
	HX_CSTRING("hideAllLines"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Multiplexer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Multiplexer_obj::__mClass,"__mClass");
};

#endif

Class Multiplexer_obj::__mClass;

void Multiplexer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.lines.Multiplexer"), hx::TCanCast< Multiplexer_obj> ,sStaticFields,sMemberFields,
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

void Multiplexer_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace lines
