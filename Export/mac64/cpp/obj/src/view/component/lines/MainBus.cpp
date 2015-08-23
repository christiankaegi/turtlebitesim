#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
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
#ifndef INCLUDED_view_component_lines_MainBus
#include <view/component/lines/MainBus.h>
#endif
namespace view{
namespace component{
namespace lines{

Void MainBus_obj::__construct()
{
HX_STACK_FRAME("view.component.lines.MainBus","new",0xa8e1de70,"view.component.lines.MainBus.new","view/component/lines/MainBus.hx",11,0x5508b983)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	this->maxLines = (int)8;
	HX_STACK_LINE(15)
	this->currentLineNum = (int)0;
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//MainBus_obj::~MainBus_obj() { }

Dynamic MainBus_obj::__CreateEmpty() { return  new MainBus_obj; }
hx::ObjectPtr< MainBus_obj > MainBus_obj::__new()
{  hx::ObjectPtr< MainBus_obj > result = new MainBus_obj();
	result->__construct();
	return result;}

Dynamic MainBus_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainBus_obj > result = new MainBus_obj();
	result->__construct();
	return result;}

Void MainBus_obj::addedToStageHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("view.component.lines.MainBus","addedToStageHandler",0xe66345b7,"view.component.lines.MainBus.addedToStageHandler","view/component/lines/MainBus.hx",23,0x5508b983)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(24)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(25)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		this->linesActive = _g;
		HX_STACK_LINE(26)
		this->loadLine();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainBus_obj,addedToStageHandler,(void))

Void MainBus_obj::showLines( ::model::vo::InstructionVO instruction){
{
		HX_STACK_FRAME("view.component.lines.MainBus","showLines",0xf04a3dd2,"view.component.lines.MainBus.showLines","view/component/lines/MainBus.hx",29,0x5508b983)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instruction,"instruction")
		HX_STACK_LINE(30)
		this->hideAllLines();
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(31)
			int _g = this->linesActive->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(31)
			while((true)){
				HX_STACK_LINE(31)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(31)
					break;
				}
				HX_STACK_LINE(31)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(37)
				this->linesActive->__get(i).StaticCast< ::openfl::display::Bitmap >()->set_visible(instruction->codeArr->__get(i));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainBus_obj,showLines,(void))

Void MainBus_obj::loadLine( ){
{
		HX_STACK_FRAME("view.component.lines.MainBus","loadLine",0xb1c7e12a,"view.component.lines.MainBus.loadLine","view/component/lines/MainBus.hx",43,0x5508b983)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		::openfl::Assets_obj::loadBitmapData(((((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/busline")) + this->currentLineNum) + HX_CSTRING(".png")),this->bmpLoadCompleteHandler_dyn(),true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainBus_obj,loadLine,(void))

Void MainBus_obj::bmpLoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.MainBus","bmpLoadCompleteHandler",0xe040af36,"view.component.lines.MainBus.bmpLoadCompleteHandler","view/component/lines/MainBus.hx",46,0x5508b983)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(47)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		this->linesActive->push(_g);
		HX_STACK_LINE(48)
		Float _g1 = this->linesActive->__get(this->currentLineNum).StaticCast< ::openfl::display::Bitmap >()->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(48)
		this->linesActive->__get(this->currentLineNum).StaticCast< ::openfl::display::Bitmap >()->set_scaleX(_g1);
		HX_STACK_LINE(49)
		this->linesActive->__get(this->currentLineNum).StaticCast< ::openfl::display::Bitmap >()->set_name((HX_CSTRING("line") + this->currentLineNum));
		HX_STACK_LINE(52)
		this->addChild(this->linesActive->__get(this->currentLineNum).StaticCast< ::openfl::display::Bitmap >());
		HX_STACK_LINE(53)
		this->linesActive->__get(this->currentLineNum).StaticCast< ::openfl::display::Bitmap >()->set_visible(false);
		HX_STACK_LINE(56)
		if (((this->currentLineNum < (this->maxLines - (int)1)))){
			HX_STACK_LINE(57)
			(this->currentLineNum)++;
			HX_STACK_LINE(58)
			this->loadLine();
		}
		else{
			HX_STACK_LINE(61)
			::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(61)
			this->dispatchEvent(_g2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainBus_obj,bmpLoadCompleteHandler,(void))

Void MainBus_obj::toggleSingleLine( int id,bool on){
{
		HX_STACK_FRAME("view.component.lines.MainBus","toggleSingleLine",0xc43d7b40,"view.component.lines.MainBus.toggleSingleLine","view/component/lines/MainBus.hx",78,0x5508b983)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(78)
		this->linesActive->__get(id).StaticCast< ::openfl::display::Bitmap >()->set_visible(on);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MainBus_obj,toggleSingleLine,(void))

Void MainBus_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.lines.MainBus","hideAllLines",0x1bd2cff0,"view.component.lines.MainBus.hideAllLines","view/component/lines/MainBus.hx",83,0x5508b983)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(83)
		int _g = this->linesActive->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		while((true)){
			HX_STACK_LINE(83)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(83)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(89)
			this->linesActive->__get(i).StaticCast< ::openfl::display::Bitmap >()->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainBus_obj,hideAllLines,(void))


MainBus_obj::MainBus_obj()
{
}

void MainBus_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainBus);
	HX_MARK_MEMBER_NAME(bmp,"bmp");
	HX_MARK_MEMBER_NAME(linesActive,"linesActive");
	HX_MARK_MEMBER_NAME(currentLineNum,"currentLineNum");
	HX_MARK_MEMBER_NAME(maxLines,"maxLines");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainBus_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bmp,"bmp");
	HX_VISIT_MEMBER_NAME(linesActive,"linesActive");
	HX_VISIT_MEMBER_NAME(currentLineNum,"currentLineNum");
	HX_VISIT_MEMBER_NAME(maxLines,"maxLines");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MainBus_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmp") ) { return bmp; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxLines") ) { return maxLines; }
		if (HX_FIELD_EQ(inName,"loadLine") ) { return loadLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showLines") ) { return showLines_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"linesActive") ) { return linesActive; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideAllLines") ) { return hideAllLines_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentLineNum") ) { return currentLineNum; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"toggleSingleLine") ) { return toggleSingleLine_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"bmpLoadCompleteHandler") ) { return bmpLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MainBus_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmp") ) { bmp=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxLines") ) { maxLines=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"linesActive") ) { linesActive=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentLineNum") ) { currentLineNum=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainBus_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bmp"));
	outFields->push(HX_CSTRING("linesActive"));
	outFields->push(HX_CSTRING("currentLineNum"));
	outFields->push(HX_CSTRING("maxLines"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(MainBus_obj,bmp),HX_CSTRING("bmp")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MainBus_obj,linesActive),HX_CSTRING("linesActive")},
	{hx::fsInt,(int)offsetof(MainBus_obj,currentLineNum),HX_CSTRING("currentLineNum")},
	{hx::fsInt,(int)offsetof(MainBus_obj,maxLines),HX_CSTRING("maxLines")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bmp"),
	HX_CSTRING("linesActive"),
	HX_CSTRING("currentLineNum"),
	HX_CSTRING("maxLines"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("showLines"),
	HX_CSTRING("loadLine"),
	HX_CSTRING("bmpLoadCompleteHandler"),
	HX_CSTRING("toggleSingleLine"),
	HX_CSTRING("hideAllLines"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainBus_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainBus_obj::__mClass,"__mClass");
};

#endif

Class MainBus_obj::__mClass;

void MainBus_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.lines.MainBus"), hx::TCanCast< MainBus_obj> ,sStaticFields,sMemberFields,
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

void MainBus_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace lines
