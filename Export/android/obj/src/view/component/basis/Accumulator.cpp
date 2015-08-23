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
#ifndef INCLUDED_view_component_basis_Accumulator
#include <view/component/basis/Accumulator.h>
#endif
namespace view{
namespace component{
namespace basis{

Void Accumulator_obj::__construct()
{
HX_STACK_FRAME("view.component.basis.Accumulator","new",0x0de808ee,"view.component.basis.Accumulator.new","view/component/basis/Accumulator.hx",19,0x9c4ee645)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Accumulator_obj::~Accumulator_obj() { }

Dynamic Accumulator_obj::__CreateEmpty() { return  new Accumulator_obj; }
hx::ObjectPtr< Accumulator_obj > Accumulator_obj::__new()
{  hx::ObjectPtr< Accumulator_obj > result = new Accumulator_obj();
	result->__construct();
	return result;}

Dynamic Accumulator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Accumulator_obj > result = new Accumulator_obj();
	result->__construct();
	return result;}

Void Accumulator_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.basis.Accumulator","addedToStageHandler",0xabdecc35,"view.component.basis.Accumulator.addedToStageHandler","view/component/basis/Accumulator.hx",24,0x9c4ee645)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(25)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(26)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Accu-out-0.png")),this->out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(27)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Accu-out-1.png")),this->out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(28)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Accu-out-2.png")),this->out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(29)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/Accu-out-3.png")),this->out3LoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accumulator_obj,addedToStageHandler,(void))

Void Accumulator_obj::out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Accumulator","out0LoadCompleteHandler",0x9631fd57,"view.component.basis.Accumulator.out0LoadCompleteHandler","view/component/basis/Accumulator.hx",32,0x9c4ee645)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(33)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		this->out0 = _g;
		HX_STACK_LINE(34)
		this->out0->set_name(HX_CSTRING("accuOut0"));
		HX_STACK_LINE(35)
		Float _g1 = this->out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		this->out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accumulator_obj,out0LoadCompleteHandler,(void))

Void Accumulator_obj::out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Accumulator","out1LoadCompleteHandler",0xfc96a1f6,"view.component.basis.Accumulator.out1LoadCompleteHandler","view/component/basis/Accumulator.hx",39,0x9c4ee645)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(40)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		this->out1 = _g;
		HX_STACK_LINE(41)
		this->out1->set_name(HX_CSTRING("accuOut1"));
		HX_STACK_LINE(42)
		Float _g1 = this->out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		this->out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accumulator_obj,out1LoadCompleteHandler,(void))

Void Accumulator_obj::out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Accumulator","out2LoadCompleteHandler",0x62fb4695,"view.component.basis.Accumulator.out2LoadCompleteHandler","view/component/basis/Accumulator.hx",46,0x9c4ee645)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(47)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		this->out2 = _g;
		HX_STACK_LINE(48)
		this->out2->set_name(HX_CSTRING("accuOut2"));
		HX_STACK_LINE(49)
		Float _g1 = this->out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(49)
		this->out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accumulator_obj,out2LoadCompleteHandler,(void))

Void Accumulator_obj::out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Accumulator","out3LoadCompleteHandler",0xc95feb34,"view.component.basis.Accumulator.out3LoadCompleteHandler","view/component/basis/Accumulator.hx",53,0x9c4ee645)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(54)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		this->out3 = _g;
		HX_STACK_LINE(55)
		this->out3->set_name(HX_CSTRING("accuOut3"));
		HX_STACK_LINE(56)
		Float _g1 = this->out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(56)
		this->out3->set_scaleX(_g1);
		HX_STACK_LINE(58)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(58)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accumulator_obj,out3LoadCompleteHandler,(void))

Void Accumulator_obj::showLines( ::model::vo::InstructionVO instruction){
{
		HX_STACK_FRAME("view.component.basis.Accumulator","showLines",0xdadc5ad0,"view.component.basis.Accumulator.showLines","view/component/basis/Accumulator.hx",61,0x9c4ee645)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instruction,"instruction")
		HX_STACK_LINE(62)
		this->hideAllLines();
		HX_STACK_LINE(63)
		if (((instruction->codeArr->__get((int)4) == true))){
			HX_STACK_LINE(64)
			this->addChild(this->out0);
		}
		HX_STACK_LINE(66)
		if (((instruction->codeArr->__get((int)5) == true))){
			HX_STACK_LINE(67)
			this->addChild(this->out1);
		}
		HX_STACK_LINE(69)
		if (((instruction->codeArr->__get((int)6) == true))){
			HX_STACK_LINE(70)
			this->addChild(this->out2);
		}
		HX_STACK_LINE(72)
		if (((instruction->codeArr->__get((int)7) == true))){
			HX_STACK_LINE(73)
			this->addChild(this->out3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accumulator_obj,showLines,(void))

Void Accumulator_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.basis.Accumulator","hideAllLines",0xc25e65b2,"view.component.basis.Accumulator.hideAllLines","view/component/basis/Accumulator.hx",78,0x9c4ee645)
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
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("accuOut") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(79)
			if (((_g1 != null()))){
				HX_STACK_LINE(80)
				::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("accuOut") + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(80)
				this->removeChild(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Accumulator_obj,hideAllLines,(void))


Accumulator_obj::Accumulator_obj()
{
}

void Accumulator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Accumulator);
	HX_MARK_MEMBER_NAME(out0,"out0");
	HX_MARK_MEMBER_NAME(out1,"out1");
	HX_MARK_MEMBER_NAME(out2,"out2");
	HX_MARK_MEMBER_NAME(out3,"out3");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Accumulator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(out0,"out0");
	HX_VISIT_MEMBER_NAME(out1,"out1");
	HX_VISIT_MEMBER_NAME(out2,"out2");
	HX_VISIT_MEMBER_NAME(out3,"out3");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Accumulator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic Accumulator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void Accumulator_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Accumulator_obj,out0),HX_CSTRING("out0")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Accumulator_obj,out1),HX_CSTRING("out1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Accumulator_obj,out2),HX_CSTRING("out2")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Accumulator_obj,out3),HX_CSTRING("out3")},
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
	HX_MARK_MEMBER_NAME(Accumulator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Accumulator_obj::__mClass,"__mClass");
};

#endif

Class Accumulator_obj::__mClass;

void Accumulator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.basis.Accumulator"), hx::TCanCast< Accumulator_obj> ,sStaticFields,sMemberFields,
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

void Accumulator_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace basis
