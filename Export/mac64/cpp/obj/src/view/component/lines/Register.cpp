#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
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
#ifndef INCLUDED_view_component_lines_Register
#include <view/component/lines/Register.h>
#endif
namespace view{
namespace component{
namespace lines{

Void Register_obj::__construct()
{
HX_STACK_FRAME("view.component.lines.Register","new",0xf6b77b7e,"view.component.lines.Register.new","view/component/lines/Register.hx",23,0x80a735cf)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
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

Void Register_obj::addedToStageHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("view.component.lines.Register","addedToStageHandler",0x9f585ec5,"view.component.lines.Register.addedToStageHandler","view/component/lines/Register.hx",28,0x80a735cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(29)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(30)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R1-out-0.png")),this->r1out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(31)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R1-out-1.png")),this->r1out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(32)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R1-out-2.png")),this->r1out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(33)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R1-out-3.png")),this->r1out3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(35)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R2-out-0.png")),this->r2out0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(36)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R2-out-1.png")),this->r2out1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(37)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R2-out-2.png")),this->r2out2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(38)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/R2-out-3.png")),this->r2out3LoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,addedToStageHandler,(void))

Void Register_obj::r1out0LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Register","r1out0LoadCompleteHandler",0xc2ad87c8,"view.component.lines.Register.r1out0LoadCompleteHandler","view/component/lines/Register.hx",46,0x80a735cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(47)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
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

Void Register_obj::r1out1LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Register","r1out1LoadCompleteHandler",0x29122c67,"view.component.lines.Register.r1out1LoadCompleteHandler","view/component/lines/Register.hx",52,0x80a735cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(53)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		this->r1out1 = _g;
		HX_STACK_LINE(54)
		this->r1out1->set_name(HX_CSTRING("r1Out1"));
		HX_STACK_LINE(55)
		Float _g1 = this->r1out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(55)
		this->r1out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r1out1LoadCompleteHandler,(void))

Void Register_obj::r1out2LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Register","r1out2LoadCompleteHandler",0x8f76d106,"view.component.lines.Register.r1out2LoadCompleteHandler","view/component/lines/Register.hx",58,0x80a735cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(59)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		this->r1out2 = _g;
		HX_STACK_LINE(60)
		this->r1out2->set_name(HX_CSTRING("r1Out2"));
		HX_STACK_LINE(61)
		Float _g1 = this->r1out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(61)
		this->r1out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r1out2LoadCompleteHandler,(void))

Void Register_obj::r1out3LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Register","r1out3LoadCompleteHandler",0xf5db75a5,"view.component.lines.Register.r1out3LoadCompleteHandler","view/component/lines/Register.hx",64,0x80a735cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(65)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		this->r1out3 = _g;
		HX_STACK_LINE(66)
		this->r1out3->set_name(HX_CSTRING("r1Out3"));
		HX_STACK_LINE(67)
		Float _g1 = this->r1out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		this->r1out3->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r1out3LoadCompleteHandler,(void))

Void Register_obj::r2out0LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Register","r2out0LoadCompleteHandler",0x6eea67e7,"view.component.lines.Register.r2out0LoadCompleteHandler","view/component/lines/Register.hx",74,0x80a735cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(75)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		this->r2out0 = _g;
		HX_STACK_LINE(76)
		this->r2out0->set_name(HX_CSTRING("r2Out0"));
		HX_STACK_LINE(77)
		Float _g1 = this->r2out0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(77)
		this->r2out0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r2out0LoadCompleteHandler,(void))

Void Register_obj::r2out1LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Register","r2out1LoadCompleteHandler",0xd54f0c86,"view.component.lines.Register.r2out1LoadCompleteHandler","view/component/lines/Register.hx",80,0x80a735cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(81)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		this->r2out1 = _g;
		HX_STACK_LINE(82)
		this->r2out1->set_name(HX_CSTRING("r2Out1"));
		HX_STACK_LINE(83)
		Float _g1 = this->r2out1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(83)
		this->r2out1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r2out1LoadCompleteHandler,(void))

Void Register_obj::r2out2LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Register","r2out2LoadCompleteHandler",0x3bb3b125,"view.component.lines.Register.r2out2LoadCompleteHandler","view/component/lines/Register.hx",86,0x80a735cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(87)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		this->r2out2 = _g;
		HX_STACK_LINE(88)
		this->r2out2->set_name(HX_CSTRING("r2Out2"));
		HX_STACK_LINE(89)
		Float _g1 = this->r2out2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(89)
		this->r2out2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r2out2LoadCompleteHandler,(void))

Void Register_obj::r2out3LoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.lines.Register","r2out3LoadCompleteHandler",0xa21855c4,"view.component.lines.Register.r2out3LoadCompleteHandler","view/component/lines/Register.hx",92,0x80a735cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(93)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		this->r2out3 = _g;
		HX_STACK_LINE(94)
		this->r2out3->set_name(HX_CSTRING("r2Out3"));
		HX_STACK_LINE(95)
		Float _g1 = this->r2out3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(95)
		this->r2out3->set_scaleX(_g1);
		HX_STACK_LINE(96)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(96)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,r2out3LoadCompleteHandler,(void))

Void Register_obj::showLinesRegister1( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.component.lines.Register","showLinesRegister1",0x86a68aee,"view.component.lines.Register.showLinesRegister1","view/component/lines/Register.hx",103,0x80a735cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(104)
		this->hideLines(HX_CSTRING("1"));
		HX_STACK_LINE(105)
		if (((codeArr->__get((int)4) == true))){
			HX_STACK_LINE(106)
			this->addChild(this->r1out3);
		}
		HX_STACK_LINE(108)
		if (((codeArr->__get((int)5) == true))){
			HX_STACK_LINE(109)
			this->addChild(this->r1out2);
		}
		HX_STACK_LINE(111)
		if (((codeArr->__get((int)6) == true))){
			HX_STACK_LINE(112)
			this->addChild(this->r1out1);
		}
		HX_STACK_LINE(114)
		if (((codeArr->__get((int)7) == true))){
			HX_STACK_LINE(115)
			this->addChild(this->r1out0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,showLinesRegister1,(void))

Void Register_obj::showLinesRegister2( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.component.lines.Register","showLinesRegister2",0x86a68aef,"view.component.lines.Register.showLinesRegister2","view/component/lines/Register.hx",119,0x80a735cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(120)
		this->hideLines(HX_CSTRING("2"));
		HX_STACK_LINE(121)
		if (((codeArr->__get((int)4) == true))){
			HX_STACK_LINE(122)
			this->addChild(this->r2out3);
		}
		HX_STACK_LINE(124)
		if (((codeArr->__get((int)5) == true))){
			HX_STACK_LINE(125)
			this->addChild(this->r2out2);
		}
		HX_STACK_LINE(127)
		if (((codeArr->__get((int)6) == true))){
			HX_STACK_LINE(128)
			this->addChild(this->r2out1);
		}
		HX_STACK_LINE(130)
		if (((codeArr->__get((int)7) == true))){
			HX_STACK_LINE(131)
			this->addChild(this->r2out0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,showLinesRegister2,(void))

Void Register_obj::hideLines( ::String id){
{
		HX_STACK_FRAME("view.component.lines.Register","hideLines",0xe8da6f7b,"view.component.lines.Register.hideLines","view/component/lines/Register.hx",136,0x80a735cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(136)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(136)
		while((true)){
			HX_STACK_LINE(136)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(136)
				break;
			}
			HX_STACK_LINE(136)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(137)
			::openfl::display::DisplayObject _g1 = this->getChildByName((((HX_CSTRING("r") + id) + HX_CSTRING("Out")) + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(137)
			if (((_g1 != null()))){
				HX_STACK_LINE(138)
				::openfl::display::DisplayObject _g11 = this->getChildByName((((HX_CSTRING("r") + id) + HX_CSTRING("Out")) + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(138)
				this->removeChild(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Register_obj,hideLines,(void))

Void Register_obj::hideAllLines( ){
{
		HX_STACK_FRAME("view.component.lines.Register","hideAllLines",0x1af42122,"view.component.lines.Register.hideAllLines","view/component/lines/Register.hx",143,0x80a735cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		this->hideLines(HX_CSTRING("1"));
		HX_STACK_LINE(145)
		this->hideLines(HX_CSTRING("2"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Register_obj,hideAllLines,(void))


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
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
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
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
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
	case 12:
		if (HX_FIELD_EQ(inName,"hideAllLines") ) { return hideAllLines_dyn(); }
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
		if (HX_FIELD_EQ(inName,"r1out0") ) { r1out0=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r1out1") ) { r1out1=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r1out2") ) { r1out2=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r1out3") ) { r1out3=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2out0") ) { r2out0=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2out1") ) { r2out1=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2out2") ) { r2out2=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2out3") ) { r2out3=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
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
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Register_obj,r1out0),HX_CSTRING("r1out0")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Register_obj,r1out1),HX_CSTRING("r1out1")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Register_obj,r1out2),HX_CSTRING("r1out2")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Register_obj,r1out3),HX_CSTRING("r1out3")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Register_obj,r2out0),HX_CSTRING("r2out0")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Register_obj,r2out1),HX_CSTRING("r2out1")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Register_obj,r2out2),HX_CSTRING("r2out2")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Register_obj,r2out3),HX_CSTRING("r2out3")},
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
	HX_CSTRING("hideAllLines"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.lines.Register"), hx::TCanCast< Register_obj> ,sStaticFields,sMemberFields,
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
} // end namespace lines
