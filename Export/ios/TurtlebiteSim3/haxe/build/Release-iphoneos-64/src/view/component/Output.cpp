#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
#endif
#ifndef INCLUDED_model_vo_SnapshotVO
#include <model/vo/SnapshotVO.h>
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
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_utilities_TextFieldFactory
#include <utilities/TextFieldFactory.h>
#endif
#ifndef INCLUDED_view_component_Output
#include <view/component/Output.h>
#endif
#ifndef INCLUDED_view_elements_RomRamDisplay
#include <view/elements/RomRamDisplay.h>
#endif
namespace view{
namespace component{

Void Output_obj::__construct()
{
HX_STACK_FRAME("view.component.Output","new",0xa0ac5d4d,"view.component.Output.new","view/component/Output.hx",28,0xe160a741)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	super::__construct();
	HX_STACK_LINE(30)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Output_obj::~Output_obj() { }

Dynamic Output_obj::__CreateEmpty() { return  new Output_obj; }
hx::ObjectPtr< Output_obj > Output_obj::__new()
{  hx::ObjectPtr< Output_obj > result = new Output_obj();
	result->__construct();
	return result;}

Dynamic Output_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Output_obj > result = new Output_obj();
	result->__construct();
	return result;}

Void Output_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.Output","addedToStageHandler",0xa0060e94,"view.component.Output.addedToStageHandler","view/component/Output.hx",33,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(34)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(35)
		this->createRegister1Display();
		HX_STACK_LINE(36)
		this->createRegister2Display();
		HX_STACK_LINE(37)
		this->createAccumulatorDisplay();
		HX_STACK_LINE(38)
		this->createRomDisplay();
		HX_STACK_LINE(39)
		this->createRamDisplay();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,addedToStageHandler,(void))

Void Output_obj::createRomDisplay( ){
{
		HX_STACK_FRAME("view.component.Output","createRomDisplay",0x3ccf7321,"view.component.Output.createRomDisplay","view/component/Output.hx",45,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		::view::elements::RomRamDisplay _g = ::view::elements::RomRamDisplay_obj::__new((int)4494335);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		this->rom = _g;
		HX_STACK_LINE(47)
		this->rom->set_x(((int)432 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(48)
		this->rom->set_y(((int)541 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(49)
		this->addChild(this->rom);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,createRomDisplay,(void))

Void Output_obj::createRamDisplay( ){
{
		HX_STACK_FRAME("view.component.Output","createRamDisplay",0xb39bb513,"view.component.Output.createRamDisplay","view/component/Output.hx",52,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		::view::elements::RomRamDisplay _g = ::view::elements::RomRamDisplay_obj::__new((int)65280);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		this->ram = _g;
		HX_STACK_LINE(54)
		this->ram->set_x(((int)797 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(55)
		this->ram->set_y(((int)377 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(56)
		this->addChild(this->ram);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,createRamDisplay,(void))

Void Output_obj::createRegister1Display( ){
{
		HX_STACK_FRAME("view.component.Output","createRegister1Display",0x5de8c1c3,"view.component.Output.createRegister1Display","view/component/Output.hx",59,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		::openfl::_legacy::text::TextField _g = ::utilities::TextFieldFactory_obj::getOutputTFBold();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		this->r1 = _g;
		HX_STACK_LINE(61)
		this->r1->set_x(((int)532 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(62)
		this->r1->set_y(((int)281 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(63)
		this->r1->set_text(HX_CSTRING(""));
		HX_STACK_LINE(64)
		this->addChild(this->r1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,createRegister1Display,(void))

Void Output_obj::createRegister2Display( ){
{
		HX_STACK_FRAME("view.component.Output","createRegister2Display",0x971b33e2,"view.component.Output.createRegister2Display","view/component/Output.hx",67,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		::openfl::_legacy::text::TextField _g = ::utilities::TextFieldFactory_obj::getOutputTFBold();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		this->r2 = _g;
		HX_STACK_LINE(69)
		this->r2->set_x(((int)532 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(70)
		this->r2->set_y(((int)206 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(71)
		this->r2->set_text(HX_CSTRING(""));
		HX_STACK_LINE(72)
		this->addChild(this->r2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,createRegister2Display,(void))

Void Output_obj::createAccumulatorDisplay( ){
{
		HX_STACK_FRAME("view.component.Output","createAccumulatorDisplay",0x362525ab,"view.component.Output.createAccumulatorDisplay","view/component/Output.hx",75,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		::openfl::_legacy::text::TextField _g = ::utilities::TextFieldFactory_obj::getOutputTFBold();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		this->accu = _g;
		HX_STACK_LINE(77)
		this->accu->set_x(((int)775 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(78)
		this->accu->set_y(((int)219 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(79)
		this->accu->set_text(HX_CSTRING(""));
		HX_STACK_LINE(80)
		this->addChild(this->accu);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,createAccumulatorDisplay,(void))

Void Output_obj::setRegister1( ::String value){
{
		HX_STACK_FRAME("view.component.Output","setRegister1",0x32889ddf,"view.component.Output.setRegister1","view/component/Output.hx",87,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(88)
		this->r1->set_text(value);
		HX_STACK_LINE(89)
		this->r1->set_textColor(::utilities::TextFieldFactory_obj::TEXT_ACTIVE_COLOR);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,setRegister1,(void))

Void Output_obj::setRegister2( ::String value){
{
		HX_STACK_FRAME("view.component.Output","setRegister2",0x32889de0,"view.component.Output.setRegister2","view/component/Output.hx",92,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(93)
		this->r2->set_text(value);
		HX_STACK_LINE(94)
		this->r2->set_textColor(::utilities::TextFieldFactory_obj::TEXT_ACTIVE_COLOR);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,setRegister2,(void))

Void Output_obj::setAccumulator( ::String value){
{
		HX_STACK_FRAME("view.component.Output","setAccumulator",0x192ff4f7,"view.component.Output.setAccumulator","view/component/Output.hx",97,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(98)
		this->accu->set_text(value);
		HX_STACK_LINE(99)
		this->accu->set_textColor(::utilities::TextFieldFactory_obj::TEXT_ACTIVE_COLOR);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,setAccumulator,(void))

Void Output_obj::loadRomDisplay( Array< ::Dynamic > instructions){
{
		HX_STACK_FRAME("view.component.Output","loadRomDisplay",0x2e704c0b,"view.component.Output.loadRomDisplay","view/component/Output.hx",102,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instructions,"instructions")
		HX_STACK_LINE(103)
		this->rom->clear(null());
		HX_STACK_LINE(104)
		this->rom->loadMemory(instructions);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,loadRomDisplay,(void))

Void Output_obj::powerOn( ){
{
		HX_STACK_FRAME("view.component.Output","powerOn",0x964f63f1,"view.component.Output.powerOn","view/component/Output.hx",107,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		this->ram->clear(null());
		HX_STACK_LINE(109)
		this->r1->set_text(HX_CSTRING("0"));
		HX_STACK_LINE(110)
		this->r2->set_text(HX_CSTRING("0"));
		HX_STACK_LINE(111)
		this->accu->set_text(HX_CSTRING("0"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,powerOn,(void))

Void Output_obj::powerOff( ){
{
		HX_STACK_FRAME("view.component.Output","powerOff",0xef28085d,"view.component.Output.powerOff","view/component/Output.hx",114,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		this->rom->clear(true);
		HX_STACK_LINE(116)
		this->ram->clear(true);
		HX_STACK_LINE(117)
		this->r1->set_text(HX_CSTRING(""));
		HX_STACK_LINE(118)
		this->r2->set_text(HX_CSTRING(""));
		HX_STACK_LINE(119)
		this->accu->set_text(HX_CSTRING(""));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,powerOff,(void))

Void Output_obj::setProgramCountPointer( int pointer){
{
		HX_STACK_FRAME("view.component.Output","setProgramCountPointer",0x9d3bfd03,"view.component.Output.setProgramCountPointer","view/component/Output.hx",123,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(123)
		this->rom->setPointer(pointer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,setProgramCountPointer,(void))

Void Output_obj::updateRam( Array< ::Dynamic > values,int pointer){
{
		HX_STACK_FRAME("view.component.Output","updateRam",0x318c3002,"view.component.Output.updateRam","view/component/Output.hx",127,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(values,"values")
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(127)
		this->ram->updateCell(values,pointer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Output_obj,updateRam,(void))

Void Output_obj::resetRamPointer( ){
{
		HX_STACK_FRAME("view.component.Output","resetRamPointer",0x6ba5ad9b,"view.component.Output.resetRamPointer","view/component/Output.hx",131,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		this->ram->resetPointer();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,resetRamPointer,(void))

Void Output_obj::setRamPointer( int pointer){
{
		HX_STACK_FRAME("view.component.Output","setRamPointer",0x17f0bfee,"view.component.Output.setRamPointer","view/component/Output.hx",135,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(135)
		this->ram->setPointer(pointer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,setRamPointer,(void))

Void Output_obj::resetRam( ){
{
		HX_STACK_FRAME("view.component.Output","resetRam",0x299d8742,"view.component.Output.resetRam","view/component/Output.hx",139,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		this->ram->clear(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,resetRam,(void))

Void Output_obj::resetAll( ){
{
		HX_STACK_FRAME("view.component.Output","resetAll",0x2990aa85,"view.component.Output.resetAll","view/component/Output.hx",142,0xe160a741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		this->ram->clear(null());
		HX_STACK_LINE(144)
		this->rom->resetPointer();
		HX_STACK_LINE(145)
		this->r1->set_text(HX_CSTRING("0"));
		HX_STACK_LINE(146)
		this->r2->set_text(HX_CSTRING("0"));
		HX_STACK_LINE(147)
		this->accu->set_text(HX_CSTRING("0"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,resetAll,(void))


Output_obj::Output_obj()
{
}

void Output_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Output);
	HX_MARK_MEMBER_NAME(r1,"r1");
	HX_MARK_MEMBER_NAME(r2,"r2");
	HX_MARK_MEMBER_NAME(accu,"accu");
	HX_MARK_MEMBER_NAME(rom,"rom");
	HX_MARK_MEMBER_NAME(ram,"ram");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Output_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r1,"r1");
	HX_VISIT_MEMBER_NAME(r2,"r2");
	HX_VISIT_MEMBER_NAME(accu,"accu");
	HX_VISIT_MEMBER_NAME(rom,"rom");
	HX_VISIT_MEMBER_NAME(ram,"ram");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Output_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"r1") ) { return r1; }
		if (HX_FIELD_EQ(inName,"r2") ) { return r2; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"rom") ) { return rom; }
		if (HX_FIELD_EQ(inName,"ram") ) { return ram; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"accu") ) { return accu; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"powerOn") ) { return powerOn_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"powerOff") ) { return powerOff_dyn(); }
		if (HX_FIELD_EQ(inName,"resetRam") ) { return resetRam_dyn(); }
		if (HX_FIELD_EQ(inName,"resetAll") ) { return resetAll_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateRam") ) { return updateRam_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setRegister1") ) { return setRegister1_dyn(); }
		if (HX_FIELD_EQ(inName,"setRegister2") ) { return setRegister2_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setRamPointer") ) { return setRamPointer_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setAccumulator") ) { return setAccumulator_dyn(); }
		if (HX_FIELD_EQ(inName,"loadRomDisplay") ) { return loadRomDisplay_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resetRamPointer") ) { return resetRamPointer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createRomDisplay") ) { return createRomDisplay_dyn(); }
		if (HX_FIELD_EQ(inName,"createRamDisplay") ) { return createRamDisplay_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createRegister1Display") ) { return createRegister1Display_dyn(); }
		if (HX_FIELD_EQ(inName,"createRegister2Display") ) { return createRegister2Display_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgramCountPointer") ) { return setProgramCountPointer_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createAccumulatorDisplay") ) { return createAccumulatorDisplay_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Output_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"r1") ) { r1=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2") ) { r2=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"rom") ) { rom=inValue.Cast< ::view::elements::RomRamDisplay >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ram") ) { ram=inValue.Cast< ::view::elements::RomRamDisplay >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"accu") ) { accu=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Output_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("r1"));
	outFields->push(HX_CSTRING("r2"));
	outFields->push(HX_CSTRING("accu"));
	outFields->push(HX_CSTRING("rom"));
	outFields->push(HX_CSTRING("ram"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Output_obj,r1),HX_CSTRING("r1")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Output_obj,r2),HX_CSTRING("r2")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Output_obj,accu),HX_CSTRING("accu")},
	{hx::fsObject /*::view::elements::RomRamDisplay*/ ,(int)offsetof(Output_obj,rom),HX_CSTRING("rom")},
	{hx::fsObject /*::view::elements::RomRamDisplay*/ ,(int)offsetof(Output_obj,ram),HX_CSTRING("ram")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("r1"),
	HX_CSTRING("r2"),
	HX_CSTRING("accu"),
	HX_CSTRING("rom"),
	HX_CSTRING("ram"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("createRomDisplay"),
	HX_CSTRING("createRamDisplay"),
	HX_CSTRING("createRegister1Display"),
	HX_CSTRING("createRegister2Display"),
	HX_CSTRING("createAccumulatorDisplay"),
	HX_CSTRING("setRegister1"),
	HX_CSTRING("setRegister2"),
	HX_CSTRING("setAccumulator"),
	HX_CSTRING("loadRomDisplay"),
	HX_CSTRING("powerOn"),
	HX_CSTRING("powerOff"),
	HX_CSTRING("setProgramCountPointer"),
	HX_CSTRING("updateRam"),
	HX_CSTRING("resetRamPointer"),
	HX_CSTRING("setRamPointer"),
	HX_CSTRING("resetRam"),
	HX_CSTRING("resetAll"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#endif

Class Output_obj::__mClass;

void Output_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.Output"), hx::TCanCast< Output_obj> ,sStaticFields,sMemberFields,
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

void Output_obj::__boot()
{
}

} // end namespace view
} // end namespace component
