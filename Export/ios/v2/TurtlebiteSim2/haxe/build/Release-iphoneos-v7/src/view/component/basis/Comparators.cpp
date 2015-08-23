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
#ifndef INCLUDED_view_component_basis_Comparators
#include <view/component/basis/Comparators.h>
#endif
namespace view{
namespace component{
namespace basis{

Void Comparators_obj::__construct()
{
HX_STACK_FRAME("view.component.basis.Comparators","new",0xa266d245,"view.component.basis.Comparators.new","view/component/basis/Comparators.hx",23,0x5380d4ce)
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

//Comparators_obj::~Comparators_obj() { }

Dynamic Comparators_obj::__CreateEmpty() { return  new Comparators_obj; }
hx::ObjectPtr< Comparators_obj > Comparators_obj::__new()
{  hx::ObjectPtr< Comparators_obj > result = new Comparators_obj();
	result->__construct();
	return result;}

Dynamic Comparators_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Comparators_obj > result = new Comparators_obj();
	result->__construct();
	return result;}

Void Comparators_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.basis.Comparators","addedToStageHandler",0x8d1bf38c,"view.component.basis.Comparators.addedToStageHandler","view/component/basis/Comparators.hx",28,0x5380d4ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(29)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(30)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/MOV-Line.png")),this->movLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(31)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/SEA-Line.png")),this->seaLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(32)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/ALU-Line.png")),this->aluLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(33)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/STO-Line.png")),this->stoLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(34)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/LOA-Line.png")),this->loaLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(35)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/TAK-Line.png")),this->takLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(36)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/PRN-Line.png")),this->prnLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(37)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/JE-Line.png")),this->jeLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(38)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/JME-Line.png")),this->jmeLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(39)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/JMP-Line.png")),this->jmpLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(40)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/comparator_powered_lines.png")),this->compPoweredLinesLoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparators_obj,addedToStageHandler,(void))

Void Comparators_obj::movLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparators","movLoadCompleteHandler",0xdc4c6f52,"view.component.basis.Comparators.movLoadCompleteHandler","view/component/basis/Comparators.hx",43,0x5380d4ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(44)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		this->MOVLine = _g;
		HX_STACK_LINE(45)
		this->MOVLine->set_name(HX_CSTRING("MOVLine"));
		HX_STACK_LINE(46)
		Float _g1 = this->MOVLine->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(46)
		this->MOVLine->set_scaleX(_g1);
		HX_STACK_LINE(47)
		this->addChild(this->MOVLine);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparators_obj,movLoadCompleteHandler,(void))

Void Comparators_obj::seaLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparators","seaLoadCompleteHandler",0x1f2eab77,"view.component.basis.Comparators.seaLoadCompleteHandler","view/component/basis/Comparators.hx",50,0x5380d4ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(51)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		this->SEALine = _g;
		HX_STACK_LINE(52)
		this->SEALine->set_name(HX_CSTRING("SEALine"));
		HX_STACK_LINE(53)
		Float _g1 = this->SEALine->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		this->SEALine->set_scaleX(_g1);
		HX_STACK_LINE(54)
		this->addChild(this->SEALine);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparators_obj,seaLoadCompleteHandler,(void))

Void Comparators_obj::aluLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparators","aluLoadCompleteHandler",0xad3a1abc,"view.component.basis.Comparators.aluLoadCompleteHandler","view/component/basis/Comparators.hx",57,0x5380d4ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(58)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		this->ALULine = _g;
		HX_STACK_LINE(59)
		this->ALULine->set_name(HX_CSTRING("ALULine"));
		HX_STACK_LINE(60)
		Float _g1 = this->ALULine->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		this->ALULine->set_scaleX(_g1);
		HX_STACK_LINE(61)
		this->addChild(this->ALULine);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparators_obj,aluLoadCompleteHandler,(void))

Void Comparators_obj::stoLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparators","stoLoadCompleteHandler",0xa1baadb8,"view.component.basis.Comparators.stoLoadCompleteHandler","view/component/basis/Comparators.hx",64,0x5380d4ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(65)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		this->STOLine = _g;
		HX_STACK_LINE(66)
		this->STOLine->set_name(HX_CSTRING("STOLine"));
		HX_STACK_LINE(67)
		Float _g1 = this->STOLine->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		this->STOLine->set_scaleX(_g1);
		HX_STACK_LINE(68)
		this->addChild(this->STOLine);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparators_obj,stoLoadCompleteHandler,(void))

Void Comparators_obj::loaLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparators","loaLoadCompleteHandler",0x31bca3e8,"view.component.basis.Comparators.loaLoadCompleteHandler","view/component/basis/Comparators.hx",71,0x5380d4ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(72)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		this->LOALine = _g;
		HX_STACK_LINE(73)
		this->LOALine->set_name(HX_CSTRING("LOALine"));
		HX_STACK_LINE(74)
		Float _g1 = this->LOALine->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		this->LOALine->set_scaleX(_g1);
		HX_STACK_LINE(75)
		this->addChild(this->LOALine);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparators_obj,loaLoadCompleteHandler,(void))

Void Comparators_obj::takLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparators","takLoadCompleteHandler",0x9cbdca08,"view.component.basis.Comparators.takLoadCompleteHandler","view/component/basis/Comparators.hx",78,0x5380d4ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(79)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(79)
		this->TAKLine = _g;
		HX_STACK_LINE(80)
		this->TAKLine->set_name(HX_CSTRING("TAKLine"));
		HX_STACK_LINE(81)
		Float _g1 = this->TAKLine->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		this->TAKLine->set_scaleX(_g1);
		HX_STACK_LINE(82)
		this->addChild(this->TAKLine);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparators_obj,takLoadCompleteHandler,(void))

Void Comparators_obj::prnLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparators","prnLoadCompleteHandler",0x0b145cfa,"view.component.basis.Comparators.prnLoadCompleteHandler","view/component/basis/Comparators.hx",85,0x5380d4ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(86)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		this->PRNLine = _g;
		HX_STACK_LINE(87)
		this->PRNLine->set_name(HX_CSTRING("PRNLine"));
		HX_STACK_LINE(88)
		Float _g1 = this->PRNLine->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		this->PRNLine->set_scaleX(_g1);
		HX_STACK_LINE(89)
		this->addChild(this->PRNLine);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparators_obj,prnLoadCompleteHandler,(void))

Void Comparators_obj::jeLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparators","jeLoadCompleteHandler",0x641053b5,"view.component.basis.Comparators.jeLoadCompleteHandler","view/component/basis/Comparators.hx",92,0x5380d4ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(93)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		this->JELine = _g;
		HX_STACK_LINE(94)
		this->JELine->set_name(HX_CSTRING("JELine"));
		HX_STACK_LINE(95)
		Float _g1 = this->JELine->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(95)
		this->JELine->set_scaleX(_g1);
		HX_STACK_LINE(96)
		this->addChild(this->JELine);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparators_obj,jeLoadCompleteHandler,(void))

Void Comparators_obj::jmeLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparators","jmeLoadCompleteHandler",0xdf5bd4a4,"view.component.basis.Comparators.jmeLoadCompleteHandler","view/component/basis/Comparators.hx",99,0x5380d4ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(100)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		this->JMELine = _g;
		HX_STACK_LINE(101)
		this->JMELine->set_name(HX_CSTRING("JMELine"));
		HX_STACK_LINE(102)
		Float _g1 = this->JMELine->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(102)
		this->JMELine->set_scaleX(_g1);
		HX_STACK_LINE(103)
		this->addChild(this->JMELine);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparators_obj,jmeLoadCompleteHandler,(void))

Void Comparators_obj::jmpLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparators","jmpLoadCompleteHandler",0x45aee779,"view.component.basis.Comparators.jmpLoadCompleteHandler","view/component/basis/Comparators.hx",106,0x5380d4ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(107)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		this->JMPLine = _g;
		HX_STACK_LINE(108)
		this->JMPLine->set_name(HX_CSTRING("JMPLine"));
		HX_STACK_LINE(109)
		Float _g1 = this->JMPLine->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(109)
		this->JMPLine->set_scaleX(_g1);
		HX_STACK_LINE(110)
		this->addChild(this->JMPLine);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparators_obj,jmpLoadCompleteHandler,(void))

Void Comparators_obj::compPoweredLinesLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.basis.Comparators","compPoweredLinesLoadCompleteHandler",0xa7adc526,"view.component.basis.Comparators.compPoweredLinesLoadCompleteHandler","view/component/basis/Comparators.hx",113,0x5380d4ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(114)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(114)
		this->compPoweredLines = _g;
		HX_STACK_LINE(115)
		this->compPoweredLines->set_name(HX_CSTRING("compPoweredLines"));
		HX_STACK_LINE(116)
		Float _g1 = this->compPoweredLines->set_scaleY(::AppConstants_obj::BMP_SCALE);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(116)
		this->compPoweredLines->set_scaleX(_g1);
		HX_STACK_LINE(117)
		this->addChild(this->compPoweredLines);
		HX_STACK_LINE(118)
		::events::AppEvent _g2 = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(118)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Comparators_obj,compPoweredLinesLoadCompleteHandler,(void))


Comparators_obj::Comparators_obj()
{
}

void Comparators_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Comparators);
	HX_MARK_MEMBER_NAME(MOVLine,"MOVLine");
	HX_MARK_MEMBER_NAME(SEALine,"SEALine");
	HX_MARK_MEMBER_NAME(ALULine,"ALULine");
	HX_MARK_MEMBER_NAME(STOLine,"STOLine");
	HX_MARK_MEMBER_NAME(LOALine,"LOALine");
	HX_MARK_MEMBER_NAME(TAKLine,"TAKLine");
	HX_MARK_MEMBER_NAME(PRNLine,"PRNLine");
	HX_MARK_MEMBER_NAME(JELine,"JELine");
	HX_MARK_MEMBER_NAME(JMELine,"JMELine");
	HX_MARK_MEMBER_NAME(JMPLine,"JMPLine");
	HX_MARK_MEMBER_NAME(compPoweredLines,"compPoweredLines");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Comparators_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(MOVLine,"MOVLine");
	HX_VISIT_MEMBER_NAME(SEALine,"SEALine");
	HX_VISIT_MEMBER_NAME(ALULine,"ALULine");
	HX_VISIT_MEMBER_NAME(STOLine,"STOLine");
	HX_VISIT_MEMBER_NAME(LOALine,"LOALine");
	HX_VISIT_MEMBER_NAME(TAKLine,"TAKLine");
	HX_VISIT_MEMBER_NAME(PRNLine,"PRNLine");
	HX_VISIT_MEMBER_NAME(JELine,"JELine");
	HX_VISIT_MEMBER_NAME(JMELine,"JMELine");
	HX_VISIT_MEMBER_NAME(JMPLine,"JMPLine");
	HX_VISIT_MEMBER_NAME(compPoweredLines,"compPoweredLines");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Comparators_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"JELine") ) { return JELine; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MOVLine") ) { return MOVLine; }
		if (HX_FIELD_EQ(inName,"SEALine") ) { return SEALine; }
		if (HX_FIELD_EQ(inName,"ALULine") ) { return ALULine; }
		if (HX_FIELD_EQ(inName,"STOLine") ) { return STOLine; }
		if (HX_FIELD_EQ(inName,"LOALine") ) { return LOALine; }
		if (HX_FIELD_EQ(inName,"TAKLine") ) { return TAKLine; }
		if (HX_FIELD_EQ(inName,"PRNLine") ) { return PRNLine; }
		if (HX_FIELD_EQ(inName,"JMELine") ) { return JMELine; }
		if (HX_FIELD_EQ(inName,"JMPLine") ) { return JMPLine; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"compPoweredLines") ) { return compPoweredLines; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"jeLoadCompleteHandler") ) { return jeLoadCompleteHandler_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"movLoadCompleteHandler") ) { return movLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"seaLoadCompleteHandler") ) { return seaLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"aluLoadCompleteHandler") ) { return aluLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"stoLoadCompleteHandler") ) { return stoLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"loaLoadCompleteHandler") ) { return loaLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"takLoadCompleteHandler") ) { return takLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"prnLoadCompleteHandler") ) { return prnLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"jmeLoadCompleteHandler") ) { return jmeLoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"jmpLoadCompleteHandler") ) { return jmpLoadCompleteHandler_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"compPoweredLinesLoadCompleteHandler") ) { return compPoweredLinesLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Comparators_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"JELine") ) { JELine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MOVLine") ) { MOVLine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SEALine") ) { SEALine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALULine") ) { ALULine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STOLine") ) { STOLine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOALine") ) { LOALine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAKLine") ) { TAKLine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PRNLine") ) { PRNLine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JMELine") ) { JMELine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JMPLine") ) { JMPLine=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"compPoweredLines") ) { compPoweredLines=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Comparators_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("MOVLine"));
	outFields->push(HX_CSTRING("SEALine"));
	outFields->push(HX_CSTRING("ALULine"));
	outFields->push(HX_CSTRING("STOLine"));
	outFields->push(HX_CSTRING("LOALine"));
	outFields->push(HX_CSTRING("TAKLine"));
	outFields->push(HX_CSTRING("PRNLine"));
	outFields->push(HX_CSTRING("JELine"));
	outFields->push(HX_CSTRING("JMELine"));
	outFields->push(HX_CSTRING("JMPLine"));
	outFields->push(HX_CSTRING("compPoweredLines"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparators_obj,MOVLine),HX_CSTRING("MOVLine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparators_obj,SEALine),HX_CSTRING("SEALine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparators_obj,ALULine),HX_CSTRING("ALULine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparators_obj,STOLine),HX_CSTRING("STOLine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparators_obj,LOALine),HX_CSTRING("LOALine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparators_obj,TAKLine),HX_CSTRING("TAKLine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparators_obj,PRNLine),HX_CSTRING("PRNLine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparators_obj,JELine),HX_CSTRING("JELine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparators_obj,JMELine),HX_CSTRING("JMELine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparators_obj,JMPLine),HX_CSTRING("JMPLine")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Comparators_obj,compPoweredLines),HX_CSTRING("compPoweredLines")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("MOVLine"),
	HX_CSTRING("SEALine"),
	HX_CSTRING("ALULine"),
	HX_CSTRING("STOLine"),
	HX_CSTRING("LOALine"),
	HX_CSTRING("TAKLine"),
	HX_CSTRING("PRNLine"),
	HX_CSTRING("JELine"),
	HX_CSTRING("JMELine"),
	HX_CSTRING("JMPLine"),
	HX_CSTRING("compPoweredLines"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("movLoadCompleteHandler"),
	HX_CSTRING("seaLoadCompleteHandler"),
	HX_CSTRING("aluLoadCompleteHandler"),
	HX_CSTRING("stoLoadCompleteHandler"),
	HX_CSTRING("loaLoadCompleteHandler"),
	HX_CSTRING("takLoadCompleteHandler"),
	HX_CSTRING("prnLoadCompleteHandler"),
	HX_CSTRING("jeLoadCompleteHandler"),
	HX_CSTRING("jmeLoadCompleteHandler"),
	HX_CSTRING("jmpLoadCompleteHandler"),
	HX_CSTRING("compPoweredLinesLoadCompleteHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Comparators_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Comparators_obj::__mClass,"__mClass");
};

#endif

Class Comparators_obj::__mClass;

void Comparators_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.basis.Comparators"), hx::TCanCast< Comparators_obj> ,sStaticFields,sMemberFields,
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

void Comparators_obj::__boot()
{
}

} // end namespace view
} // end namespace component
} // end namespace basis
