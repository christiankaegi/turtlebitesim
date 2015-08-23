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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_view_component_basis_Enablers
#include <view/component/basis/Enablers.h>
#endif
namespace view{
namespace component{
namespace basis{

Void Enablers_obj::__construct()
{
HX_STACK_FRAME("view.component.basis.Enablers","new",0x0fb89a80,"view.component.basis.Enablers.new","view/component/basis/Enablers.hx",22,0x2cf66d0d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(24)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Enablers_obj::~Enablers_obj() { }

Dynamic Enablers_obj::__CreateEmpty() { return  new Enablers_obj; }
hx::ObjectPtr< Enablers_obj > Enablers_obj::__new()
{  hx::ObjectPtr< Enablers_obj > result = new Enablers_obj();
	result->__construct();
	return result;}

Dynamic Enablers_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Enablers_obj > result = new Enablers_obj();
	result->__construct();
	return result;}

Void Enablers_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.basis.Enablers","addedToStageHandler",0x16af21c7,"view.component.basis.Enablers.addedToStageHandler","view/component/basis/Enablers.hx",27,0x2cf66d0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(28)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(29)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler1-out-0.png")),this->e1Out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(30)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler1-out-1.png")),this->e1Out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(31)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler1-out-2.png")),this->e1Out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(32)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler1-out-3.png")),this->e1Out3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(33)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler2-out-0.png")),this->e2Out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(34)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler2-out-1.png")),this->e2Out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(35)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler2-out-2.png")),this->e2Out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(36)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Enabler2-out-3.png")),this->e2Out3LoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enablers_obj,addedToStageHandler,(void))

Void Enablers_obj::e1Out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enablers","e1Out0LoadCompleteHandler",0x0f6c611d,"view.component.basis.Enablers.e1Out0LoadCompleteHandler","view/component/basis/Enablers.hx",43,0x2cf66d0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(44)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		this->e1Out0 = _g;
		HX_STACK_LINE(45)
		this->e1Out0->set_name(HX_CSTRING("e1Out0"));
		HX_STACK_LINE(46)
		Float _g1 = this->e1Out0->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(46)
		this->e1Out0->set_scaleX(_g1);
		HX_STACK_LINE(47)
		this->addChild(this->e1Out0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enablers_obj,e1Out0LoadCompleteHandler,(void))

Void Enablers_obj::e1Out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enablers","e1Out1LoadCompleteHandler",0x75d105bc,"view.component.basis.Enablers.e1Out1LoadCompleteHandler","view/component/basis/Enablers.hx",50,0x2cf66d0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(51)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		this->e1Out1 = _g;
		HX_STACK_LINE(52)
		this->e1Out1->set_name(HX_CSTRING("e1Out1"));
		HX_STACK_LINE(53)
		Float _g1 = this->e1Out1->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		this->e1Out1->set_scaleX(_g1);
		HX_STACK_LINE(54)
		this->addChild(this->e1Out1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enablers_obj,e1Out1LoadCompleteHandler,(void))

Void Enablers_obj::e1Out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enablers","e1Out2LoadCompleteHandler",0xdc35aa5b,"view.component.basis.Enablers.e1Out2LoadCompleteHandler","view/component/basis/Enablers.hx",57,0x2cf66d0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(58)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		this->e1Out2 = _g;
		HX_STACK_LINE(59)
		this->e1Out2->set_name(HX_CSTRING("e1Out2"));
		HX_STACK_LINE(60)
		Float _g1 = this->e1Out2->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		this->e1Out2->set_scaleX(_g1);
		HX_STACK_LINE(61)
		this->addChild(this->e1Out2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enablers_obj,e1Out2LoadCompleteHandler,(void))

Void Enablers_obj::e1Out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enablers","e1Out3LoadCompleteHandler",0x429a4efa,"view.component.basis.Enablers.e1Out3LoadCompleteHandler","view/component/basis/Enablers.hx",64,0x2cf66d0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(65)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		this->e1Out3 = _g;
		HX_STACK_LINE(66)
		this->e1Out3->set_name(HX_CSTRING("e1Out3"));
		HX_STACK_LINE(67)
		Float _g1 = this->e1Out3->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		this->e1Out3->set_scaleX(_g1);
		HX_STACK_LINE(68)
		this->addChild(this->e1Out3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enablers_obj,e1Out3LoadCompleteHandler,(void))

Void Enablers_obj::e2Out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enablers","e2Out0LoadCompleteHandler",0xbba9413c,"view.component.basis.Enablers.e2Out0LoadCompleteHandler","view/component/basis/Enablers.hx",75,0x2cf66d0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(76)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		this->e2Out0 = _g;
		HX_STACK_LINE(77)
		this->e2Out0->set_name(HX_CSTRING("e2Out0"));
		HX_STACK_LINE(78)
		Float _g1 = this->e2Out0->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(78)
		this->e2Out0->set_scaleX(_g1);
		HX_STACK_LINE(79)
		this->addChild(this->e2Out0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enablers_obj,e2Out0LoadCompleteHandler,(void))

Void Enablers_obj::e2Out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enablers","e2Out1LoadCompleteHandler",0x220de5db,"view.component.basis.Enablers.e2Out1LoadCompleteHandler","view/component/basis/Enablers.hx",82,0x2cf66d0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(83)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		this->e2Out1 = _g;
		HX_STACK_LINE(84)
		this->e2Out1->set_name(HX_CSTRING("e2Out1"));
		HX_STACK_LINE(85)
		Float _g1 = this->e2Out1->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(85)
		this->e2Out1->set_scaleX(_g1);
		HX_STACK_LINE(86)
		this->addChild(this->e2Out1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enablers_obj,e2Out1LoadCompleteHandler,(void))

Void Enablers_obj::e2Out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enablers","e2Out2LoadCompleteHandler",0x88728a7a,"view.component.basis.Enablers.e2Out2LoadCompleteHandler","view/component/basis/Enablers.hx",89,0x2cf66d0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(90)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		this->e2Out2 = _g;
		HX_STACK_LINE(91)
		this->e2Out2->set_name(HX_CSTRING("e2Out2"));
		HX_STACK_LINE(92)
		Float _g1 = this->e2Out2->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(92)
		this->e2Out2->set_scaleX(_g1);
		HX_STACK_LINE(93)
		this->addChild(this->e2Out2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enablers_obj,e2Out2LoadCompleteHandler,(void))

Void Enablers_obj::e2Out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Enablers","e2Out3LoadCompleteHandler",0xeed72f19,"view.component.basis.Enablers.e2Out3LoadCompleteHandler","view/component/basis/Enablers.hx",96,0x2cf66d0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(97)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		this->e2Out3 = _g;
		HX_STACK_LINE(98)
		this->e2Out3->set_name(HX_CSTRING("e2Out3"));
		HX_STACK_LINE(99)
		Float _g1 = this->e2Out3->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		this->e2Out3->set_scaleX(_g1);
		HX_STACK_LINE(100)
		this->addChild(this->e2Out3);
		HX_STACK_LINE(101)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(101)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enablers_obj,e2Out3LoadCompleteHandler,(void))


Enablers_obj::Enablers_obj()
{
}

void Enablers_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enablers);
	HX_MARK_MEMBER_NAME(e1Out0,"e1Out0");
	HX_MARK_MEMBER_NAME(e1Out1,"e1Out1");
	HX_MARK_MEMBER_NAME(e1Out2,"e1Out2");
	HX_MARK_MEMBER_NAME(e1Out3,"e1Out3");
	HX_MARK_MEMBER_NAME(e2Out0,"e2Out0");
	HX_MARK_MEMBER_NAME(e2Out1,"e2Out1");
	HX_MARK_MEMBER_NAME(e2Out2,"e2Out2");
	HX_MARK_MEMBER_NAME(e2Out3,"e2Out3");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Enablers_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(e1Out0,"e1Out0");
	HX_VISIT_MEMBER_NAME(e1Out1,"e1Out1");
	HX_VISIT_MEMBER_NAME(e1Out2,"e1Out2");
	HX_VISIT_MEMBER_NAME(e1Out3,"e1Out3");
	HX_VISIT_MEMBER_NAME(e2Out0,"e2Out0");
	HX_VISIT_MEMBER_NAME(e2Out1,"e2Out1");
	HX_VISIT_MEMBER_NAME(e2Out2,"e2Out2");
	HX_VISIT_MEMBER_NAME(e2Out3,"e2Out3");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Enablers_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"e1Out0") ) { return e1Out0; }
		if (HX_FIELD_EQ(inName,"e1Out1") ) { return e1Out1; }
		if (HX_FIELD_EQ(inName,"e1Out2") ) { return e1Out2; }
		if (HX_FIELD_EQ(inName,"e1Out3") ) { return e1Out3; }
		if (HX_FIELD_EQ(inName,"e2Out0") ) { return e2Out0; }
		if (HX_FIELD_EQ(inName,"e2Out1") ) { return e2Out1; }
		if (HX_FIELD_EQ(inName,"e2Out2") ) { return e2Out2; }
		if (HX_FIELD_EQ(inName,"e2Out3") ) { return e2Out3; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"e1Out0LoadCompleteHandler") ) { return e1Out0LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e1Out1LoadCompleteHandler") ) { return e1Out1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e1Out2LoadCompleteHandler") ) { return e1Out2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e1Out3LoadCompleteHandler") ) { return e1Out3LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e2Out0LoadCompleteHandler") ) { return e2Out0LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e2Out1LoadCompleteHandler") ) { return e2Out1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e2Out2LoadCompleteHandler") ) { return e2Out2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"e2Out3LoadCompleteHandler") ) { return e2Out3LoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Enablers_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"e1Out0") ) { e1Out0=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e1Out1") ) { e1Out1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e1Out2") ) { e1Out2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e1Out3") ) { e1Out3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e2Out0") ) { e2Out0=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e2Out1") ) { e2Out1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e2Out2") ) { e2Out2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e2Out3") ) { e2Out3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Enablers_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("e1Out0"));
	outFields->push(HX_CSTRING("e1Out1"));
	outFields->push(HX_CSTRING("e1Out2"));
	outFields->push(HX_CSTRING("e1Out3"));
	outFields->push(HX_CSTRING("e2Out0"));
	outFields->push(HX_CSTRING("e2Out1"));
	outFields->push(HX_CSTRING("e2Out2"));
	outFields->push(HX_CSTRING("e2Out3"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enablers_obj,e1Out0),HX_CSTRING("e1Out0")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enablers_obj,e1Out1),HX_CSTRING("e1Out1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enablers_obj,e1Out2),HX_CSTRING("e1Out2")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enablers_obj,e1Out3),HX_CSTRING("e1Out3")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enablers_obj,e2Out0),HX_CSTRING("e2Out0")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enablers_obj,e2Out1),HX_CSTRING("e2Out1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enablers_obj,e2Out2),HX_CSTRING("e2Out2")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Enablers_obj,e2Out3),HX_CSTRING("e2Out3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("e1Out0"),
	HX_CSTRING("e1Out1"),
	HX_CSTRING("e1Out2"),
	HX_CSTRING("e1Out3"),
	HX_CSTRING("e2Out0"),
	HX_CSTRING("e2Out1"),
	HX_CSTRING("e2Out2"),
	HX_CSTRING("e2Out3"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("e1Out0LoadCompleteHandler"),
	HX_CSTRING("e1Out1LoadCompleteHandler"),
	HX_CSTRING("e1Out2LoadCompleteHandler"),
	HX_CSTRING("e1Out3LoadCompleteHandler"),
	HX_CSTRING("e2Out0LoadCompleteHandler"),
	HX_CSTRING("e2Out1LoadCompleteHandler"),
	HX_CSTRING("e2Out2LoadCompleteHandler"),
	HX_CSTRING("e2Out3LoadCompleteHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Enablers_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Enablers_obj::__mClass,"__mClass");
};

#endif

Class Enablers_obj::__mClass;

void Enablers_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.basis.Enablers"), hx::TCanCast< Enablers_obj> ,sStaticFields,sMemberFields,
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

void Enablers_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace basis
