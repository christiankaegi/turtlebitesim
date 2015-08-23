#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_view_component_basis_MainBus
#include <view/component/basis/MainBus.h>
#endif
namespace view{
namespace component{
namespace basis{

Void MainBus_obj::__construct()
{
HX_STACK_FRAME("view.component.basis.MainBus","new",0x4579cdaf,"view.component.basis.MainBus.new","view/component/basis/MainBus.hx",11,0xc9aeb724)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	this->maxLines = (int)8;
	HX_STACK_LINE(15)
	this->currentLineNum = (int)0;
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
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

Void MainBus_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.basis.MainBus","addedToStageHandler",0x3c09e2f6,"view.component.basis.MainBus.addedToStageHandler","view/component/basis/MainBus.hx",23,0xc9aeb724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(24)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
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
		HX_STACK_FRAME("view.component.basis.MainBus","showLines",0x5dc7a651,"view.component.basis.MainBus.showLines","view/component/basis/MainBus.hx",29,0xc9aeb724)
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
				HX_STACK_LINE(33)
				if ((instruction->codeArr->__get(i))){
					HX_STACK_LINE(34)
					this->addChild(this->linesActive->__get(i).StaticCast< ::openfl::_legacy::display::Bitmap >());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainBus_obj,showLines,(void))

Void MainBus_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.basis.MainBus","hideAllLines",0x8c9880d1,"view.component.basis.MainBus.hideAllLines","view/component/basis/MainBus.hx",45,0xc9aeb724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		int _g = this->linesActive->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		while((true)){
			HX_STACK_LINE(45)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(45)
				break;
			}
			HX_STACK_LINE(45)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(47)
			::openfl::_legacy::display::DisplayObject _g2 = this->getChildByName((HX_CSTRING("line") + i));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(47)
			if (((_g2 != null()))){
				HX_STACK_LINE(48)
				::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("line") + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(48)
				this->removeChild(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainBus_obj,hideAllLines,(void))

Void MainBus_obj::loadLine( ){
{
		HX_STACK_FRAME("view.component.basis.MainBus","loadLine",0x8d894d8b,"view.component.basis.MainBus.loadLine","view/component/basis/MainBus.hx",57,0xc9aeb724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		::openfl::_legacy::Assets_obj::loadBitmapData(((((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/busline")) + this->currentLineNum) + HX_CSTRING(".png")),this->bmpLoadCompleteHandler_dyn(),true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainBus_obj,loadLine,(void))

Void MainBus_obj::bmpLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.MainBus","bmpLoadCompleteHandler",0x067ea357,"view.component.basis.MainBus.bmpLoadCompleteHandler","view/component/basis/MainBus.hx",60,0xc9aeb724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(61)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		this->linesActive->push(_g);
		HX_STACK_LINE(62)
		Float _g1 = this->linesActive->__get(this->currentLineNum).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		this->linesActive->__get(this->currentLineNum).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_scaleX(_g1);
		HX_STACK_LINE(63)
		this->linesActive->__get(this->currentLineNum).StaticCast< ::openfl::_legacy::display::Bitmap >()->set_name((HX_CSTRING("line") + this->currentLineNum));
		HX_STACK_LINE(70)
		if (((this->currentLineNum < (this->maxLines - (int)1)))){
			HX_STACK_LINE(71)
			(this->currentLineNum)++;
			HX_STACK_LINE(72)
			this->loadLine();
		}
		else{
			HX_STACK_LINE(74)
			::haxe::Log_obj::trace(HX_CSTRING("MainBus REady!"),hx::SourceInfo(HX_CSTRING("MainBus.hx"),74,HX_CSTRING("view.component.basis.MainBus"),HX_CSTRING("bmpLoadCompleteHandler")));
			HX_STACK_LINE(75)
			::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(75)
			this->dispatchEvent(_g2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainBus_obj,bmpLoadCompleteHandler,(void))


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
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainBus_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bmp,"bmp");
	HX_VISIT_MEMBER_NAME(linesActive,"linesActive");
	HX_VISIT_MEMBER_NAME(currentLineNum,"currentLineNum");
	HX_VISIT_MEMBER_NAME(maxLines,"maxLines");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
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
		if (HX_FIELD_EQ(inName,"bmp") ) { bmp=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
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
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(MainBus_obj,bmp),HX_CSTRING("bmp")},
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
	HX_CSTRING("hideAllLines"),
	HX_CSTRING("loadLine"),
	HX_CSTRING("bmpLoadCompleteHandler"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.basis.MainBus"), hx::TCanCast< MainBus_obj> ,sStaticFields,sMemberFields,
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
} // end namespace basis
