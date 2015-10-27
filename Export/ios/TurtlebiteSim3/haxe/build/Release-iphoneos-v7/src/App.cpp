#include <hxcpp.h>

#ifndef INCLUDED_App
#include <App.h>
#endif
#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_AppFacade
#include <AppFacade.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade
#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_facade_Facade
#include <org/puremvc/haxe/multicore/patterns/facade/Facade.h>
#endif

Void App_obj::__construct()
{
HX_STACK_FRAME("App","new",0xf28829f3,"App.new","App.hx",16,0xc43e94dd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	this->isZoomed = false;
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
	HX_STACK_LINE(26)
	this->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
	HX_STACK_LINE(27)
	::openfl::_legacy::display::Sprite _g = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(27)
	this->zoomContainer = _g;
	HX_STACK_LINE(28)
	this->addChild(this->zoomContainer);
	HX_STACK_LINE(29)
	this->zoomContainer->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDownHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(30)
	this->zoomContainer->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP,this->mouseUpHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(31)
	::openfl::_legacy::display::Sprite _g1 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(31)
	this->detailPopupContainer = _g1;
	HX_STACK_LINE(32)
	this->addChild(this->detailPopupContainer);
	HX_STACK_LINE(33)
	::openfl::_legacy::display::Sprite _g2 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(33)
	this->navigContainer = _g2;
	HX_STACK_LINE(34)
	this->addChild(this->navigContainer);
	HX_STACK_LINE(35)
	::AppFacade_obj::getInstance(::AppConstants_obj::APP_NAME)->startup(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//App_obj::~App_obj() { }

Dynamic App_obj::__CreateEmpty() { return  new App_obj; }
hx::ObjectPtr< App_obj > App_obj::__new()
{  hx::ObjectPtr< App_obj > result = new App_obj();
	result->__construct();
	return result;}

Dynamic App_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< App_obj > result = new App_obj();
	result->__construct();
	return result;}

Void App_obj::addZoomView( ::openfl::_legacy::display::DisplayObject view){
{
		HX_STACK_FRAME("App","addZoomView",0x2cfc62ec,"App.addZoomView","App.hx",39,0xc43e94dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(view,"view")
		HX_STACK_LINE(39)
		this->zoomContainer->addChild(view);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,addZoomView,(void))

Void App_obj::addDetailPopupView( ::openfl::_legacy::display::DisplayObject view){
{
		HX_STACK_FRAME("App","addDetailPopupView",0xfd48188c,"App.addDetailPopupView","App.hx",43,0xc43e94dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(view,"view")
		HX_STACK_LINE(43)
		this->detailPopupContainer->addChild(view);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,addDetailPopupView,(void))

Void App_obj::addNavigView( ::openfl::_legacy::display::DisplayObject view){
{
		HX_STACK_FRAME("App","addNavigView",0x72b39832,"App.addNavigView","App.hx",47,0xc43e94dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(view,"view")
		HX_STACK_LINE(47)
		this->navigContainer->addChild(view);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,addNavigView,(void))

Void App_obj::mouseDownHandler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("App","mouseDownHandler",0xc10a8ff0,"App.mouseDownHandler","App.hx",51,0xc43e94dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(51)
		if ((this->isZoomed)){
			HX_STACK_LINE(52)
			::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DRAG_START,null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			this->dispatchEvent(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,mouseDownHandler,(void))

Void App_obj::mouseUpHandler( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("App","mouseUpHandler",0xf3c05917,"App.mouseUpHandler","App.hx",57,0xc43e94dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(57)
		if ((this->isZoomed)){
			HX_STACK_LINE(58)
			::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::DRAG_STOP,null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			this->dispatchEvent(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,mouseUpHandler,(void))

Void App_obj::dragStart( ){
{
		HX_STACK_FRAME("App","dragStart",0x4eb12da1,"App.dragStart","App.hx",63,0xc43e94dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		this->zoomContainer->startDrag(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,dragStart,(void))

Void App_obj::dragStop( ){
{
		HX_STACK_FRAME("App","dragStop",0x453b63a3,"App.dragStop","App.hx",67,0xc43e94dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		this->zoomContainer->stopDrag();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,dragStop,(void))

Void App_obj::zoomIn( ){
{
		HX_STACK_FRAME("App","zoomIn",0x9629b225,"App.zoomIn","App.hx",70,0xc43e94dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		this->isZoomed = true;
		HX_STACK_LINE(72)
		this->zoomContainer->set_scaleX((int)2);
		HX_STACK_LINE(73)
		this->zoomContainer->set_scaleY((int)2);
		HX_STACK_LINE(74)
		int _g = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		Float _g1 = (_g * 0.5);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		Float _g2 = this->zoomContainer->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(74)
		Float _g3 = (_g2 * 0.5);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(74)
		Float _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(74)
		int _g5 = ::Math_obj::floor(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(74)
		this->zoomContainer->set_x(_g5);
		HX_STACK_LINE(75)
		int _g6 = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(75)
		Float _g7 = (_g6 * 0.5);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(75)
		Float _g8 = this->zoomContainer->get_height();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(75)
		Float _g9 = (_g8 * 0.5);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(75)
		Float _g10 = (_g7 - _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(75)
		int _g11 = ::Math_obj::floor(_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(75)
		this->zoomContainer->set_y(_g11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,zoomIn,(void))

Void App_obj::resetZoom( ){
{
		HX_STACK_FRAME("App","resetZoom",0xff34f655,"App.resetZoom","App.hx",78,0xc43e94dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->isZoomed = false;
		HX_STACK_LINE(80)
		this->zoomContainer->set_scaleX((int)1);
		HX_STACK_LINE(81)
		this->zoomContainer->set_scaleY((int)1);
		HX_STACK_LINE(82)
		this->zoomContainer->set_x((int)0);
		HX_STACK_LINE(83)
		this->zoomContainer->set_y((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,resetZoom,(void))


App_obj::App_obj()
{
}

void App_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(App);
	HX_MARK_MEMBER_NAME(zoomContainer,"zoomContainer");
	HX_MARK_MEMBER_NAME(detailPopupContainer,"detailPopupContainer");
	HX_MARK_MEMBER_NAME(navigContainer,"navigContainer");
	HX_MARK_MEMBER_NAME(isZoomed,"isZoomed");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void App_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zoomContainer,"zoomContainer");
	HX_VISIT_MEMBER_NAME(detailPopupContainer,"detailPopupContainer");
	HX_VISIT_MEMBER_NAME(navigContainer,"navigContainer");
	HX_VISIT_MEMBER_NAME(isZoomed,"isZoomed");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic App_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"zoomIn") ) { return zoomIn_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isZoomed") ) { return isZoomed; }
		if (HX_FIELD_EQ(inName,"dragStop") ) { return dragStop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragStart") ) { return dragStart_dyn(); }
		if (HX_FIELD_EQ(inName,"resetZoom") ) { return resetZoom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addZoomView") ) { return addZoomView_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addNavigView") ) { return addNavigView_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"zoomContainer") ) { return zoomContainer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"navigContainer") ) { return navigContainer; }
		if (HX_FIELD_EQ(inName,"mouseUpHandler") ) { return mouseUpHandler_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mouseDownHandler") ) { return mouseDownHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addDetailPopupView") ) { return addDetailPopupView_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"detailPopupContainer") ) { return detailPopupContainer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic App_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isZoomed") ) { isZoomed=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"zoomContainer") ) { zoomContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"navigContainer") ) { navigContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"detailPopupContainer") ) { detailPopupContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void App_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zoomContainer"));
	outFields->push(HX_CSTRING("detailPopupContainer"));
	outFields->push(HX_CSTRING("navigContainer"));
	outFields->push(HX_CSTRING("isZoomed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(App_obj,zoomContainer),HX_CSTRING("zoomContainer")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(App_obj,detailPopupContainer),HX_CSTRING("detailPopupContainer")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(App_obj,navigContainer),HX_CSTRING("navigContainer")},
	{hx::fsBool,(int)offsetof(App_obj,isZoomed),HX_CSTRING("isZoomed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zoomContainer"),
	HX_CSTRING("detailPopupContainer"),
	HX_CSTRING("navigContainer"),
	HX_CSTRING("isZoomed"),
	HX_CSTRING("addZoomView"),
	HX_CSTRING("addDetailPopupView"),
	HX_CSTRING("addNavigView"),
	HX_CSTRING("mouseDownHandler"),
	HX_CSTRING("mouseUpHandler"),
	HX_CSTRING("dragStart"),
	HX_CSTRING("dragStop"),
	HX_CSTRING("zoomIn"),
	HX_CSTRING("resetZoom"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(App_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(App_obj::__mClass,"__mClass");
};

#endif

Class App_obj::__mClass;

void App_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("App"), hx::TCanCast< App_obj> ,sStaticFields,sMemberFields,
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

void App_obj::__boot()
{
}

