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
#ifndef INCLUDED_view_component_basis_Register
#include <view/component/basis/Register.h>
#endif
namespace view{
namespace component{
namespace basis{

Void Register_obj::__construct()
{
HX_STACK_FRAME("view.component.basis.Register","new",0x5f10e35f,"view.component.basis.Register.new","view/component/basis/Register.hx",23,0x1d3f250e)
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

//Register_obj::~Register_obj() { }

Dynamic Register_obj::__CreateEmpty() { return  new Register_obj; }
hx::ObjectPtr< Register_obj > Register_obj::__new()
{  hx::ObjectPtr< Register_obj > result = new Register_obj();
	result->__construct();
	return result;}

Dynamic Register_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Register_obj > result = new Register_obj();
	result->__construct();
	return result;}

Void Register_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.basis.Register","addedToStageHandler",0x3b7b58a6,"view.component.basis.Register.addedToStageHandler","view/component/basis/Register.hx",28,0x1d3f250e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(29)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(30)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R1-out-0.png")),this->r1out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(31)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R1-out-1.png")),this->r1out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(32)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R1-out-2.png")),this->r1out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(33)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R1-out-3.png")),this->r1out3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(35)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R2-out-0.png")),this->r2out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(36)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R2-out-1.png")),this->r2out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(37)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R2-out-2.png")),this->r2out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(38)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R2-out-3.png")),this->r2out3LoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,addedToStageHandler,(void))

Void Register_obj::r1out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Register","r1out0LoadCompleteHandler",0x112ea069,"view.component.basis.Register.r1out0LoadCompleteHandler","view/component/basis/Register.hx",46,0x1d3f250e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(47)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		this->r1out0 = _g;
		HX_STACK_LINE(48)
		this->r1out0->set_name(HX_CSTRING("r1Out0"));
		HX_STACK_LINE(49)
		Float _g1 = this->r1out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(49)
		this->r1out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r1out0LoadCompleteHandler,(void))

Void Register_obj::r1out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Register","r1out1LoadCompleteHandler",0x77934508,"view.component.basis.Register.r1out1LoadCompleteHandler","view/component/basis/Register.hx",53,0x1d3f250e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(54)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		this->r1out1 = _g;
		HX_STACK_LINE(55)
		this->r1out1->set_name(HX_CSTRING("r1Out1"));
		HX_STACK_LINE(56)
		Float _g1 = this->r1out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(56)
		this->r1out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r1out1LoadCompleteHandler,(void))

Void Register_obj::r1out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Register","r1out2LoadCompleteHandler",0xddf7e9a7,"view.component.basis.Register.r1out2LoadCompleteHandler","view/component/basis/Register.hx",60,0x1d3f250e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(61)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		this->r1out2 = _g;
		HX_STACK_LINE(62)
		this->r1out2->set_name(HX_CSTRING("r1Out2"));
		HX_STACK_LINE(63)
		Float _g1 = this->r1out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		this->r1out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r1out2LoadCompleteHandler,(void))

Void Register_obj::r1out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Register","r1out3LoadCompleteHandler",0x445c8e46,"view.component.basis.Register.r1out3LoadCompleteHandler","view/component/basis/Register.hx",67,0x1d3f250e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(68)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		this->r1out3 = _g;
		HX_STACK_LINE(69)
		this->r1out3->set_name(HX_CSTRING("r1Out3"));
		HX_STACK_LINE(70)
		Float _g1 = this->r1out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		this->r1out3->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r1out3LoadCompleteHandler,(void))

Void Register_obj::r2out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Register","r2out0LoadCompleteHandler",0xbd6b8088,"view.component.basis.Register.r2out0LoadCompleteHandler","view/component/basis/Register.hx",78,0x1d3f250e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(79)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(79)
		this->r2out0 = _g;
		HX_STACK_LINE(80)
		this->r2out0->set_name(HX_CSTRING("r2Out0"));
		HX_STACK_LINE(81)
		Float _g1 = this->r2out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		this->r2out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r2out0LoadCompleteHandler,(void))

Void Register_obj::r2out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Register","r2out1LoadCompleteHandler",0x23d02527,"view.component.basis.Register.r2out1LoadCompleteHandler","view/component/basis/Register.hx",85,0x1d3f250e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(86)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		this->r2out1 = _g;
		HX_STACK_LINE(87)
		this->r2out1->set_name(HX_CSTRING("r2Out1"));
		HX_STACK_LINE(88)
		Float _g1 = this->r2out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		this->r2out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r2out1LoadCompleteHandler,(void))

Void Register_obj::r2out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Register","r2out2LoadCompleteHandler",0x8a34c9c6,"view.component.basis.Register.r2out2LoadCompleteHandler","view/component/basis/Register.hx",92,0x1d3f250e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(93)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		this->r2out2 = _g;
		HX_STACK_LINE(94)
		this->r2out2->set_name(HX_CSTRING("r2Out2"));
		HX_STACK_LINE(95)
		Float _g1 = this->r2out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(95)
		this->r2out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r2out2LoadCompleteHandler,(void))

Void Register_obj::r2out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Register","r2out3LoadCompleteHandler",0xf0996e65,"view.component.basis.Register.r2out3LoadCompleteHandler","view/component/basis/Register.hx",99,0x1d3f250e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(100)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		this->r2out3 = _g;
		HX_STACK_LINE(101)
		this->r2out3->set_name(HX_CSTRING("r2Out3"));
		HX_STACK_LINE(102)
		Float _g1 = this->r2out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(102)
		this->r2out3->set_scaleX(_g1);
		HX_STACK_LINE(104)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(104)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r2out3LoadCompleteHandler,(void))

Void Register_obj::showLinesRegister1( ::model::vo::InstructionVO instruction){
{
		HX_STACK_FRAME("view.component.basis.Register","showLinesRegister1",0xdc4d282d,"view.component.basis.Register.showLinesRegister1","view/component/basis/Register.hx",107,0x1d3f250e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instruction,"instruction")
		HX_STACK_LINE(108)
		this->hideLines(HX_CSTRING("1"));
		HX_STACK_LINE(109)
		if (((instruction->codeArr->__get((int)4) == true))){
			HX_STACK_LINE(110)
			this->addChild(this->r1out0);
		}
		HX_STACK_LINE(112)
		if (((instruction->codeArr->__get((int)5) == true))){
			HX_STACK_LINE(113)
			this->addChild(this->r1out1);
		}
		HX_STACK_LINE(115)
		if (((instruction->codeArr->__get((int)6) == true))){
			HX_STACK_LINE(116)
			this->addChild(this->r1out2);
		}
		HX_STACK_LINE(118)
		if (((instruction->codeArr->__get((int)7) == true))){
			HX_STACK_LINE(119)
			this->addChild(this->r1out3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,showLinesRegister1,(void))

Void Register_obj::showLinesRegister2( ::model::vo::InstructionVO instruction){
{
		HX_STACK_FRAME("view.component.basis.Register","showLinesRegister2",0xdc4d282e,"view.component.basis.Register.showLinesRegister2","view/component/basis/Register.hx",123,0x1d3f250e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instruction,"instruction")
		HX_STACK_LINE(124)
		this->hideLines(HX_CSTRING("2"));
		HX_STACK_LINE(125)
		if (((instruction->codeArr->__get((int)4) == true))){
			HX_STACK_LINE(126)
			this->addChild(this->r2out0);
		}
		HX_STACK_LINE(128)
		if (((instruction->codeArr->__get((int)5) == true))){
			HX_STACK_LINE(129)
			this->addChild(this->r2out1);
		}
		HX_STACK_LINE(131)
		if (((instruction->codeArr->__get((int)6) == true))){
			HX_STACK_LINE(132)
			this->addChild(this->r2out2);
		}
		HX_STACK_LINE(134)
		if (((instruction->codeArr->__get((int)7) == true))){
			HX_STACK_LINE(135)
			this->addChild(this->r2out3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,showLinesRegister2,(void))

Void Register_obj::hideLines( ::String id){
{
		HX_STACK_FRAME("view.component.basis.Register","hideLines",0x4918761c,"view.component.basis.Register.hideLines","view/component/basis/Register.hx",140,0x1d3f250e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(140)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(141)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName((((HX_CSTRING("r") + id) + HX_CSTRING("Out")) + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(141)
			if (((_g1 != null()))){
				HX_STACK_LINE(142)
				::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((((HX_CSTRING("r") + id) + HX_CSTRING("Out")) + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(142)
				this->removeChild(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,hideLines,(void))


Register_obj::Register_obj()
{
}

void Register_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Register);
	HX_MARK_MEMBER_NAME(r1out0,"r1out0");
	HX_MARK_MEMBER_NAME(r1out1,"r1out1");
	HX_MARK_MEMBER_NAME(r1out2,"r1out2");
	HX_MARK_MEMBER_NAME(r1out3,"r1out3");
	HX_MARK_MEMBER_NAME(r2out0,"r2out0");
	HX_MARK_MEMBER_NAME(r2out1,"r2out1");
	HX_MARK_MEMBER_NAME(r2out2,"r2out2");
	HX_MARK_MEMBER_NAME(r2out3,"r2out3");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Register_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r1out0,"r1out0");
	HX_VISIT_MEMBER_NAME(r1out1,"r1out1");
	HX_VISIT_MEMBER_NAME(r1out2,"r1out2");
	HX_VISIT_MEMBER_NAME(r1out3,"r1out3");
	HX_VISIT_MEMBER_NAME(r2out0,"r2out0");
	HX_VISIT_MEMBER_NAME(r2out1,"r2out1");
	HX_VISIT_MEMBER_NAME(r2out2,"r2out2");
	HX_VISIT_MEMBER_NAME(r2out3,"r2out3");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Register_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"r1out0") ) { return r1out0; }
		if (HX_FIELD_EQ(inName,"r1out1") ) { return r1out1; }
		if (HX_FIELD_EQ(inName,"r1out2") ) { return r1out2; }
		if (HX_FIELD_EQ(inName,"r1out3") ) { return r1out3; }
		if (HX_FIELD_EQ(inName,"r2out0") ) { return r2out0; }
		if (HX_FIELD_EQ(inName,"r2out1") ) { return r2out1; }
		if (HX_FIELD_EQ(inName,"r2out2") ) { return r2out2; }
		if (HX_FIELD_EQ(inName,"r2out3") ) { return r2out3; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hideLines") ) { return hideLines_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"showLinesRegister1") ) { return showLinesRegister1_dyn(); }
		if (HX_FIELD_EQ(inName,"showLinesRegister2") ) { return showLinesRegister2_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"r1out0LoadCompleteHandler") ) { return r1out0LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"r1out1LoadCompleteHandler") ) { return r1out1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"r1out2LoadCompleteHandler") ) { return r1out2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"r1out3LoadCompleteHandler") ) { return r1out3LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"r2out0LoadCompleteHandler") ) { return r2out0LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"r2out1LoadCompleteHandler") ) { return r2out1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"r2out2LoadCompleteHandler") ) { return r2out2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"r2out3LoadCompleteHandler") ) { return r2out3LoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Register_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"r1out0") ) { r1out0=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r1out1") ) { r1out1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r1out2") ) { r1out2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r1out3") ) { r1out3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2out0") ) { r2out0=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2out1") ) { r2out1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2out2") ) { r2out2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2out3") ) { r2out3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Register_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("r1out0"));
	outFields->push(HX_CSTRING("r1out1"));
	outFields->push(HX_CSTRING("r1out2"));
	outFields->push(HX_CSTRING("r1out3"));
	outFields->push(HX_CSTRING("r2out0"));
	outFields->push(HX_CSTRING("r2out1"));
	outFields->push(HX_CSTRING("r2out2"));
	outFields->push(HX_CSTRING("r2out3"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Register_obj,r1out0),HX_CSTRING("r1out0")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Register_obj,r1out1),HX_CSTRING("r1out1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Register_obj,r1out2),HX_CSTRING("r1out2")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Register_obj,r1out3),HX_CSTRING("r1out3")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Register_obj,r2out0),HX_CSTRING("r2out0")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Register_obj,r2out1),HX_CSTRING("r2out1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Register_obj,r2out2),HX_CSTRING("r2out2")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Register_obj,r2out3),HX_CSTRING("r2out3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("r1out0"),
	HX_CSTRING("r1out1"),
	HX_CSTRING("r1out2"),
	HX_CSTRING("r1out3"),
	HX_CSTRING("r2out0"),
	HX_CSTRING("r2out1"),
	HX_CSTRING("r2out2"),
	HX_CSTRING("r2out3"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("r1out0LoadCompleteHandler"),
	HX_CSTRING("r1out1LoadCompleteHandler"),
	HX_CSTRING("r1out2LoadCompleteHandler"),
	HX_CSTRING("r1out3LoadCompleteHandler"),
	HX_CSTRING("r2out0LoadCompleteHandler"),
	HX_CSTRING("r2out1LoadCompleteHandler"),
	HX_CSTRING("r2out2LoadCompleteHandler"),
	HX_CSTRING("r2out3LoadCompleteHandler"),
	HX_CSTRING("showLinesRegister1"),
	HX_CSTRING("showLinesRegister2"),
	HX_CSTRING("hideLines"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Register_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Register_obj::__mClass,"__mClass");
};

#endif

Class Register_obj::__mClass;

void Register_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.basis.Register"), hx::TCanCast< Register_obj> ,sStaticFields,sMemberFields,
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

void Register_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace basis
