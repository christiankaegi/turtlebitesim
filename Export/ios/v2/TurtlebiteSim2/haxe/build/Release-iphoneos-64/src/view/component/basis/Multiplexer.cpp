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
#ifndef INCLUDED_view_component_basis_Multiplexer
#include <view/component/basis/Multiplexer.h>
#endif
namespace view{
namespace component{
namespace basis{

Void Multiplexer_obj::__construct()
{
HX_STACK_FRAME("view.component.basis.Multiplexer","new",0xb28861fd,"view.component.basis.Multiplexer.new","view/component/basis/Multiplexer.hx",18,0xd0b4a416)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
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

Void Multiplexer_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.basis.Multiplexer","addedToStageHandler",0x00ca7344,"view.component.basis.Multiplexer.addedToStageHandler","view/component/basis/Multiplexer.hx",23,0xd0b4a416)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(24)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(25)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/MUX-out-0.png")),this->out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(26)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/MUX-out-1.png")),this->out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(27)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/MUX-out-2.png")),this->out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(28)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/MUX-out-3.png")),this->out3LoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Multiplexer_obj,addedToStageHandler,(void))

Void Multiplexer_obj::out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Multiplexer","out0LoadCompleteHandler",0xca7fd7e6,"view.component.basis.Multiplexer.out0LoadCompleteHandler","view/component/basis/Multiplexer.hx",31,0xd0b4a416)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(32)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		this->out0 = _g;
		HX_STACK_LINE(33)
		this->out0->set_name(HX_CSTRING("muxOut0"));
		HX_STACK_LINE(34)
		Float _g1 = this->out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(34)
		this->out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Multiplexer_obj,out0LoadCompleteHandler,(void))

Void Multiplexer_obj::out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Multiplexer","out1LoadCompleteHandler",0x30e47c85,"view.component.basis.Multiplexer.out1LoadCompleteHandler","view/component/basis/Multiplexer.hx",37,0xd0b4a416)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(38)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		this->out1 = _g;
		HX_STACK_LINE(39)
		this->out1->set_name(HX_CSTRING("muxOut1"));
		HX_STACK_LINE(40)
		Float _g1 = this->out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		this->out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Multiplexer_obj,out1LoadCompleteHandler,(void))

Void Multiplexer_obj::out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Multiplexer","out2LoadCompleteHandler",0x97492124,"view.component.basis.Multiplexer.out2LoadCompleteHandler","view/component/basis/Multiplexer.hx",43,0xd0b4a416)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(44)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		this->out2 = _g;
		HX_STACK_LINE(45)
		this->out2->set_name(HX_CSTRING("muxOut2"));
		HX_STACK_LINE(46)
		Float _g1 = this->out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(46)
		this->out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Multiplexer_obj,out2LoadCompleteHandler,(void))

Void Multiplexer_obj::out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Multiplexer","out3LoadCompleteHandler",0xfdadc5c3,"view.component.basis.Multiplexer.out3LoadCompleteHandler","view/component/basis/Multiplexer.hx",49,0xd0b4a416)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(50)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		this->out3 = _g;
		HX_STACK_LINE(51)
		this->out3->set_name(HX_CSTRING("muxOut3"));
		HX_STACK_LINE(52)
		Float _g1 = this->out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(52)
		this->out3->set_scaleX(_g1);
		HX_STACK_LINE(53)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(53)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Multiplexer_obj,out3LoadCompleteHandler,(void))

Void Multiplexer_obj::showLines( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.component.basis.Multiplexer","showLines",0x1d87691f,"view.component.basis.Multiplexer.showLines","view/component/basis/Multiplexer.hx",56,0xd0b4a416)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(57)
		this->hideAllLines();
		HX_STACK_LINE(58)
		if (((codeArr->__get((int)4) == true))){
			HX_STACK_LINE(59)
			this->addChild(this->out3);
		}
		HX_STACK_LINE(61)
		if (((codeArr->__get((int)5) == true))){
			HX_STACK_LINE(62)
			this->addChild(this->out2);
		}
		HX_STACK_LINE(64)
		if (((codeArr->__get((int)6) == true))){
			HX_STACK_LINE(65)
			this->addChild(this->out1);
		}
		HX_STACK_LINE(67)
		if (((codeArr->__get((int)7) == true))){
			HX_STACK_LINE(68)
			this->addChild(this->out0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Multiplexer_obj,showLines,(void))

Void Multiplexer_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.basis.Multiplexer","hideAllLines",0xb1c7f2c3,"view.component.basis.Multiplexer.hideAllLines","view/component/basis/Multiplexer.hx",73,0xd0b4a416)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		while((true)){
			HX_STACK_LINE(73)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(73)
				break;
			}
			HX_STACK_LINE(73)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(74)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("muxOut") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(74)
			if (((_g1 != null()))){
				HX_STACK_LINE(75)
				::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("muxOut") + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(75)
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
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Multiplexer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(out0,"out0");
	HX_VISIT_MEMBER_NAME(out1,"out1");
	HX_VISIT_MEMBER_NAME(out2,"out2");
	HX_VISIT_MEMBER_NAME(out3,"out3");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
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
		if (HX_FIELD_EQ(inName,"out0") ) { out0=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out1") ) { out1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out2") ) { out2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out3") ) { out3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
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
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Multiplexer_obj,out0),HX_CSTRING("out0")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Multiplexer_obj,out1),HX_CSTRING("out1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Multiplexer_obj,out2),HX_CSTRING("out2")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Multiplexer_obj,out3),HX_CSTRING("out3")},
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.basis.Multiplexer"), hx::TCanCast< Multiplexer_obj> ,sStaticFields,sMemberFields,
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
} // end namespace basis
