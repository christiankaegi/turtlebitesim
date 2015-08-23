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
#ifndef INCLUDED_view_component_lines_Alu
#include <view/component/lines/Alu.h>
#endif
namespace view{
namespace component{
namespace lines{

Void Alu_obj::__construct()
{
HX_STACK_FRAME("view.component.lines.Alu","new",0x4e2c3113,"view.component.lines.Alu.new","view/component/lines/Alu.hx",19,0xdb388ec0)
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

//Alu_obj::~Alu_obj() { }

Dynamic Alu_obj::__CreateEmpty() { return  new Alu_obj; }
hx::ObjectPtr< Alu_obj > Alu_obj::__new()
{  hx::ObjectPtr< Alu_obj > result = new Alu_obj();
	result->__construct();
	return result;}

Dynamic Alu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Alu_obj > result = new Alu_obj();
	result->__construct();
	return result;}

Void Alu_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.lines.Alu","addedToStageHandler",0xba304e5a,"view.component.lines.Alu.addedToStageHandler","view/component/lines/Alu.hx",24,0xdb388ec0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(25)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(26)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/ALU-out-0.png")),this->out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(27)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/ALU-out-1.png")),this->out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(28)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/ALU-out-2.png")),this->out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(29)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/ALU-out-3.png")),this->out3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(30)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/ALU-out-equal.png")),this->equalLoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Alu_obj,addedToStageHandler,(void))

Void Alu_obj::out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Alu","out0LoadCompleteHandler",0x063ff5fc,"view.component.lines.Alu.out0LoadCompleteHandler","view/component/lines/Alu.hx",33,0xdb388ec0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(34)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		this->out0 = _g;
		HX_STACK_LINE(35)
		this->out0->set_name(HX_CSTRING("aluOut0"));
		HX_STACK_LINE(36)
		Float _g1 = this->out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		this->out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Alu_obj,out0LoadCompleteHandler,(void))

Void Alu_obj::out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Alu","out1LoadCompleteHandler",0x6ca49a9b,"view.component.lines.Alu.out1LoadCompleteHandler","view/component/lines/Alu.hx",39,0xdb388ec0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(40)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		this->out1 = _g;
		HX_STACK_LINE(41)
		this->out1->set_name(HX_CSTRING("aluOut1"));
		HX_STACK_LINE(42)
		Float _g1 = this->out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		this->out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Alu_obj,out1LoadCompleteHandler,(void))

Void Alu_obj::out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Alu","out2LoadCompleteHandler",0xd3093f3a,"view.component.lines.Alu.out2LoadCompleteHandler","view/component/lines/Alu.hx",45,0xdb388ec0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(46)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		this->out2 = _g;
		HX_STACK_LINE(47)
		this->out2->set_name(HX_CSTRING("aluOut2"));
		HX_STACK_LINE(48)
		Float _g1 = this->out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(48)
		this->out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Alu_obj,out2LoadCompleteHandler,(void))

Void Alu_obj::out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Alu","out3LoadCompleteHandler",0x396de3d9,"view.component.lines.Alu.out3LoadCompleteHandler","view/component/lines/Alu.hx",51,0xdb388ec0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(52)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		this->out3 = _g;
		HX_STACK_LINE(53)
		this->out3->set_name(HX_CSTRING("aluOut3"));
		HX_STACK_LINE(54)
		Float _g1 = this->out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(54)
		this->out3->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Alu_obj,out3LoadCompleteHandler,(void))

Void Alu_obj::equalLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Alu","equalLoadCompleteHandler",0x713081a4,"view.component.lines.Alu.equalLoadCompleteHandler","view/component/lines/Alu.hx",57,0xdb388ec0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(58)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		this->equal = _g;
		HX_STACK_LINE(59)
		this->equal->set_name(HX_CSTRING("aluEqual"));
		HX_STACK_LINE(60)
		Float _g1 = this->equal->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		this->equal->set_scaleX(_g1);
		HX_STACK_LINE(61)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(61)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Alu_obj,equalLoadCompleteHandler,(void))

Void Alu_obj::showLines( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.component.lines.Alu","showLines",0x0348acb5,"view.component.lines.Alu.showLines","view/component/lines/Alu.hx",64,0xdb388ec0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(65)
		this->hideLinesOut();
		HX_STACK_LINE(66)
		if (((codeArr->__get((int)4) == true))){
			HX_STACK_LINE(67)
			this->addChild(this->out3);
		}
		HX_STACK_LINE(69)
		if (((codeArr->__get((int)5) == true))){
			HX_STACK_LINE(70)
			this->addChild(this->out2);
		}
		HX_STACK_LINE(72)
		if (((codeArr->__get((int)6) == true))){
			HX_STACK_LINE(73)
			this->addChild(this->out1);
		}
		HX_STACK_LINE(75)
		if (((codeArr->__get((int)7) == true))){
			HX_STACK_LINE(76)
			this->addChild(this->out0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Alu_obj,showLines,(void))

Void Alu_obj::showLineEqual( ){
{
		HX_STACK_FRAME("view.component.lines.Alu","showLineEqual",0x393134d6,"view.component.lines.Alu.showLineEqual","view/component/lines/Alu.hx",80,0xdb388ec0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("aluEqual"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		if (((_g == null()))){
			HX_STACK_LINE(82)
			this->addChild(this->equal);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Alu_obj,showLineEqual,(void))

Void Alu_obj::hideLinesOut( ){
{
		HX_STACK_FRAME("view.component.lines.Alu","hideLinesOut",0xf7c2f79e,"view.component.lines.Alu.hideLinesOut","view/component/lines/Alu.hx",86,0xdb388ec0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(86)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(87)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("aluOut") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(87)
			if (((_g1 != null()))){
				HX_STACK_LINE(88)
				::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("aluOut") + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(88)
				this->removeChild(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Alu_obj,hideLinesOut,(void))

Void Alu_obj::hideLineEqual( ){
{
		HX_STACK_FRAME("view.component.lines.Alu","hideLineEqual",0x6ce03471,"view.component.lines.Alu.hideLineEqual","view/component/lines/Alu.hx",93,0xdb388ec0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("aluEqual"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		if (((_g != null()))){
			HX_STACK_LINE(95)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("aluEqual"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(95)
			this->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Alu_obj,hideLineEqual,(void))


Alu_obj::Alu_obj()
{
}

void Alu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Alu);
	HX_MARK_MEMBER_NAME(out0,"out0");
	HX_MARK_MEMBER_NAME(out1,"out1");
	HX_MARK_MEMBER_NAME(out2,"out2");
	HX_MARK_MEMBER_NAME(out3,"out3");
	HX_MARK_MEMBER_NAME(equal,"equal");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Alu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(out0,"out0");
	HX_VISIT_MEMBER_NAME(out1,"out1");
	HX_VISIT_MEMBER_NAME(out2,"out2");
	HX_VISIT_MEMBER_NAME(out3,"out3");
	HX_VISIT_MEMBER_NAME(equal,"equal");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Alu_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"out0") ) { return out0; }
		if (HX_FIELD_EQ(inName,"out1") ) { return out1; }
		if (HX_FIELD_EQ(inName,"out2") ) { return out2; }
		if (HX_FIELD_EQ(inName,"out3") ) { return out3; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"equal") ) { return equal; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showLines") ) { return showLines_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideLinesOut") ) { return hideLinesOut_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"showLineEqual") ) { return showLineEqual_dyn(); }
		if (HX_FIELD_EQ(inName,"hideLineEqual") ) { return hideLineEqual_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"out0LoadCompleteHandler") ) { return out0LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"out1LoadCompleteHandler") ) { return out1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"out2LoadCompleteHandler") ) { return out2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"out3LoadCompleteHandler") ) { return out3LoadCompleteHandler_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"equalLoadCompleteHandler") ) { return equalLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Alu_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"out0") ) { out0=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out1") ) { out1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out2") ) { out2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out3") ) { out3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"equal") ) { equal=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Alu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("out0"));
	outFields->push(HX_CSTRING("out1"));
	outFields->push(HX_CSTRING("out2"));
	outFields->push(HX_CSTRING("out3"));
	outFields->push(HX_CSTRING("equal"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Alu_obj,out0),HX_CSTRING("out0")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Alu_obj,out1),HX_CSTRING("out1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Alu_obj,out2),HX_CSTRING("out2")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Alu_obj,out3),HX_CSTRING("out3")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Alu_obj,equal),HX_CSTRING("equal")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("out0"),
	HX_CSTRING("out1"),
	HX_CSTRING("out2"),
	HX_CSTRING("out3"),
	HX_CSTRING("equal"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("out0LoadCompleteHandler"),
	HX_CSTRING("out1LoadCompleteHandler"),
	HX_CSTRING("out2LoadCompleteHandler"),
	HX_CSTRING("out3LoadCompleteHandler"),
	HX_CSTRING("equalLoadCompleteHandler"),
	HX_CSTRING("showLines"),
	HX_CSTRING("showLineEqual"),
	HX_CSTRING("hideLinesOut"),
	HX_CSTRING("hideLineEqual"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Alu_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Alu_obj::__mClass,"__mClass");
};

#endif

Class Alu_obj::__mClass;

void Alu_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.lines.Alu"), hx::TCanCast< Alu_obj> ,sStaticFields,sMemberFields,
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

void Alu_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace lines
