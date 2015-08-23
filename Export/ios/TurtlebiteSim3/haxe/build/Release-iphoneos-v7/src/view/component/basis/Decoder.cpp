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
#ifndef INCLUDED_view_component_basis_Decoder
#include <view/component/basis/Decoder.h>
#endif
namespace view{
namespace component{
namespace basis{

Void Decoder_obj::__construct()
{
HX_STACK_FRAME("view.component.basis.Decoder","new",0x93194f2c,"view.component.basis.Decoder.new","view/component/basis/Decoder.hx",16,0x864cb447)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(18)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
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

Void Decoder_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.basis.Decoder","addedToStageHandler",0xc588ee73,"view.component.basis.Decoder.addedToStageHandler","view/component/basis/Decoder.hx",21,0x864cb447)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(22)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(23)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Decoder-out-1.png")),this->out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(24)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Decoder-out-2.png")),this->out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(25)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Decoder-out-3.png")),this->out3LoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Decoder_obj,addedToStageHandler,(void))

Void Decoder_obj::out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Decoder","out1LoadCompleteHandler",0x85d1bb34,"view.component.basis.Decoder.out1LoadCompleteHandler","view/component/basis/Decoder.hx",28,0x864cb447)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(29)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
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

Void Decoder_obj::out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Decoder","out2LoadCompleteHandler",0xec365fd3,"view.component.basis.Decoder.out2LoadCompleteHandler","view/component/basis/Decoder.hx",34,0x864cb447)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(35)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
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

Void Decoder_obj::out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Decoder","out3LoadCompleteHandler",0x529b0472,"view.component.basis.Decoder.out3LoadCompleteHandler","view/component/basis/Decoder.hx",40,0x864cb447)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(41)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
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
		HX_STACK_FRAME("view.component.basis.Decoder","showLines",0xcb78e38e,"view.component.basis.Decoder.showLines","view/component/basis/Decoder.hx",48,0x864cb447)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(48)
		::String _g = code.substr((int)4,(int)2);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::MULTIPLEXER_ACCUMULATOR)){
			HX_STACK_LINE(50)
			this->addChild(this->out3);
		}
		else if (  ( _switch_1==::AppConstants_obj::MULTIPLEXER_REGISTER1)){
			HX_STACK_LINE(52)
			this->addChild(this->out2);
		}
		else if (  ( _switch_1==::AppConstants_obj::MULTIPLEXER_REGISTER2)){
			HX_STACK_LINE(54)
			this->addChild(this->out1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Decoder_obj,showLines,(void))

Void Decoder_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.basis.Decoder","hideAllLines",0x7ddd67b4,"view.component.basis.Decoder.hideAllLines","view/component/basis/Decoder.hx",59,0x864cb447)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		int _g = (int)1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		while((true)){
			HX_STACK_LINE(59)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(59)
				break;
			}
			HX_STACK_LINE(59)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(61)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("decOut") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(61)
			if (((_g1 != null()))){
				HX_STACK_LINE(62)
				::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("decOut") + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(62)
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
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Decoder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(out1,"out1");
	HX_VISIT_MEMBER_NAME(out2,"out2");
	HX_VISIT_MEMBER_NAME(out3,"out3");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
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
		if (HX_FIELD_EQ(inName,"out1") ) { out1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out2") ) { out2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out3") ) { out3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
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
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Decoder_obj,out1),HX_CSTRING("out1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Decoder_obj,out2),HX_CSTRING("out2")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Decoder_obj,out3),HX_CSTRING("out3")},
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.basis.Decoder"), hx::TCanCast< Decoder_obj> ,sStaticFields,sMemberFields,
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
} // end namespace basis
