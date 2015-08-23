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
#ifndef INCLUDED_view_component_basis_Programcounter
#include <view/component/basis/Programcounter.h>
#endif
namespace view{
namespace component{
namespace basis{

Void Programcounter_obj::__construct()
{
HX_STACK_FRAME("view.component.basis.Programcounter","new",0x65f1abf4,"view.component.basis.Programcounter.new","view/component/basis/Programcounter.hx",23,0x77e3b9d9)
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

//Programcounter_obj::~Programcounter_obj() { }

Dynamic Programcounter_obj::__CreateEmpty() { return  new Programcounter_obj; }
hx::ObjectPtr< Programcounter_obj > Programcounter_obj::__new()
{  hx::ObjectPtr< Programcounter_obj > result = new Programcounter_obj();
	result->__construct();
	return result;}

Dynamic Programcounter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Programcounter_obj > result = new Programcounter_obj();
	result->__construct();
	return result;}

Void Programcounter_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.basis.Programcounter","addedToStageHandler",0xb6555b3b,"view.component.basis.Programcounter.addedToStageHandler","view/component/basis/Programcounter.hx",28,0x77e3b9d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(29)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(30)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/pc-out-0.png")),this->out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(31)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/pc-out-1.png")),this->out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(32)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/pc-out-2.png")),this->out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(33)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/pc-out-3.png")),this->out3LoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Programcounter_obj,addedToStageHandler,(void))

Void Programcounter_obj::out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Programcounter","out0LoadCompleteHandler",0xd503875d,"view.component.basis.Programcounter.out0LoadCompleteHandler","view/component/basis/Programcounter.hx",36,0x77e3b9d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(37)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		this->out0 = _g;
		HX_STACK_LINE(38)
		this->out0->set_name(HX_CSTRING("pcOut0"));
		HX_STACK_LINE(39)
		Float _g1 = this->out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(39)
		this->out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Programcounter_obj,out0LoadCompleteHandler,(void))

Void Programcounter_obj::out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Programcounter","out1LoadCompleteHandler",0x3b682bfc,"view.component.basis.Programcounter.out1LoadCompleteHandler","view/component/basis/Programcounter.hx",42,0x77e3b9d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(43)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		this->out1 = _g;
		HX_STACK_LINE(44)
		this->out1->set_name(HX_CSTRING("pcOut1"));
		HX_STACK_LINE(45)
		Float _g1 = this->out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		this->out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Programcounter_obj,out1LoadCompleteHandler,(void))

Void Programcounter_obj::out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Programcounter","out2LoadCompleteHandler",0xa1ccd09b,"view.component.basis.Programcounter.out2LoadCompleteHandler","view/component/basis/Programcounter.hx",48,0x77e3b9d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(49)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		this->out2 = _g;
		HX_STACK_LINE(50)
		this->out2->set_name(HX_CSTRING("pcOut2"));
		HX_STACK_LINE(51)
		Float _g1 = this->out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(51)
		this->out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Programcounter_obj,out2LoadCompleteHandler,(void))

Void Programcounter_obj::out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Programcounter","out3LoadCompleteHandler",0x0831753a,"view.component.basis.Programcounter.out3LoadCompleteHandler","view/component/basis/Programcounter.hx",54,0x77e3b9d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(55)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		this->out3 = _g;
		HX_STACK_LINE(56)
		this->out3->set_name(HX_CSTRING("pcOut3"));
		HX_STACK_LINE(57)
		Float _g1 = this->out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(57)
		this->out3->set_scaleX(_g1);
		HX_STACK_LINE(58)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(58)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Programcounter_obj,out3LoadCompleteHandler,(void))

Void Programcounter_obj::showLines( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.component.basis.Programcounter","showLines",0x83c30656,"view.component.basis.Programcounter.showLines","view/component/basis/Programcounter.hx",61,0x77e3b9d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(62)
		this->hideAllLines();
		HX_STACK_LINE(63)
		if (((codeArr->__get((int)4) == true))){
			HX_STACK_LINE(64)
			this->addChild(this->out3);
		}
		HX_STACK_LINE(66)
		if (((codeArr->__get((int)5) == true))){
			HX_STACK_LINE(67)
			this->addChild(this->out2);
		}
		HX_STACK_LINE(69)
		if (((codeArr->__get((int)6) == true))){
			HX_STACK_LINE(70)
			this->addChild(this->out1);
		}
		HX_STACK_LINE(72)
		if (((codeArr->__get((int)7) == true))){
			HX_STACK_LINE(73)
			this->addChild(this->out0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Programcounter_obj,showLines,(void))

Void Programcounter_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.basis.Programcounter","hideAllLines",0x8d4731ec,"view.component.basis.Programcounter.hideAllLines","view/component/basis/Programcounter.hx",78,0x77e3b9d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		while((true)){
			HX_STACK_LINE(78)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(78)
				break;
			}
			HX_STACK_LINE(78)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(79)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("pcOut") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(79)
			if (((_g1 != null()))){
				HX_STACK_LINE(80)
				::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("pcOut") + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(80)
				this->removeChild(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Programcounter_obj,hideAllLines,(void))


Programcounter_obj::Programcounter_obj()
{
}

void Programcounter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Programcounter);
	HX_MARK_MEMBER_NAME(out0,"out0");
	HX_MARK_MEMBER_NAME(out1,"out1");
	HX_MARK_MEMBER_NAME(out2,"out2");
	HX_MARK_MEMBER_NAME(out3,"out3");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Programcounter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(out0,"out0");
	HX_VISIT_MEMBER_NAME(out1,"out1");
	HX_VISIT_MEMBER_NAME(out2,"out2");
	HX_VISIT_MEMBER_NAME(out3,"out3");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Programcounter_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic Programcounter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"out0") ) { out0=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out1") ) { out1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out2") ) { out2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out3") ) { out3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Programcounter_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Programcounter_obj,out0),HX_CSTRING("out0")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Programcounter_obj,out1),HX_CSTRING("out1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Programcounter_obj,out2),HX_CSTRING("out2")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Programcounter_obj,out3),HX_CSTRING("out3")},
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
	HX_MARK_MEMBER_NAME(Programcounter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Programcounter_obj::__mClass,"__mClass");
};

#endif

Class Programcounter_obj::__mClass;

void Programcounter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.basis.Programcounter"), hx::TCanCast< Programcounter_obj> ,sStaticFields,sMemberFields,
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

void Programcounter_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace basis
