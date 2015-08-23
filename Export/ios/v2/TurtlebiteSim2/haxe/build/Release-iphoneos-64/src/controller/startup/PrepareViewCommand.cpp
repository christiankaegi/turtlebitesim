#include <hxcpp.h>

#ifndef INCLUDED_App
#include <App.h>
#endif
#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_AppMediator
#include <AppMediator.h>
#endif
#ifndef INCLUDED_controller_startup_PrepareViewCommand
#include <controller/startup/PrepareViewCommand.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_ICommand
#include <org/puremvc/haxe/multicore/interfaces/ICommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade
#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IMediator
#include <org/puremvc/haxe/multicore/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotification
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_command_SimpleCommand
#include <org/puremvc/haxe/multicore/patterns/command/SimpleCommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_mediator_Mediator
#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_view_component_Hotspot
#include <view/component/Hotspot.h>
#endif
#ifndef INCLUDED_view_component_ICCover
#include <view/component/ICCover.h>
#endif
#ifndef INCLUDED_view_component_InstructionDisplay
#include <view/component/InstructionDisplay.h>
#endif
#ifndef INCLUDED_view_component_MainMenu
#include <view/component/MainMenu.h>
#endif
#ifndef INCLUDED_view_component_Output
#include <view/component/Output.h>
#endif
#ifndef INCLUDED_view_component_Overlay
#include <view/component/Overlay.h>
#endif
#ifndef INCLUDED_view_component_Welcome
#include <view/component/Welcome.h>
#endif
#ifndef INCLUDED_view_component_basis_Accumulator
#include <view/component/basis/Accumulator.h>
#endif
#ifndef INCLUDED_view_component_basis_Alu
#include <view/component/basis/Alu.h>
#endif
#ifndef INCLUDED_view_component_basis_BottomLayer
#include <view/component/basis/BottomLayer.h>
#endif
#ifndef INCLUDED_view_component_basis_Clock
#include <view/component/basis/Clock.h>
#endif
#ifndef INCLUDED_view_component_basis_Comparator
#include <view/component/basis/Comparator.h>
#endif
#ifndef INCLUDED_view_component_basis_Decoder
#include <view/component/basis/Decoder.h>
#endif
#ifndef INCLUDED_view_component_basis_Display
#include <view/component/basis/Display.h>
#endif
#ifndef INCLUDED_view_component_basis_Enabler
#include <view/component/basis/Enabler.h>
#endif
#ifndef INCLUDED_view_component_basis_Gates
#include <view/component/basis/Gates.h>
#endif
#ifndef INCLUDED_view_component_basis_MainBus
#include <view/component/basis/MainBus.h>
#endif
#ifndef INCLUDED_view_component_basis_Multiplexer
#include <view/component/basis/Multiplexer.h>
#endif
#ifndef INCLUDED_view_component_basis_Programcounter
#include <view/component/basis/Programcounter.h>
#endif
#ifndef INCLUDED_view_component_basis_Ram
#include <view/component/basis/Ram.h>
#endif
#ifndef INCLUDED_view_component_basis_Register
#include <view/component/basis/Register.h>
#endif
#ifndef INCLUDED_view_component_basis_TopLayer
#include <view/component/basis/TopLayer.h>
#endif
#ifndef INCLUDED_view_mediator_HotspotMediator
#include <view/mediator/HotspotMediator.h>
#endif
#ifndef INCLUDED_view_mediator_ICCoverMediator
#include <view/mediator/ICCoverMediator.h>
#endif
#ifndef INCLUDED_view_mediator_InstructionDisplayMediator
#include <view/mediator/InstructionDisplayMediator.h>
#endif
#ifndef INCLUDED_view_mediator_MainMenuMediator
#include <view/mediator/MainMenuMediator.h>
#endif
#ifndef INCLUDED_view_mediator_OutputMediator
#include <view/mediator/OutputMediator.h>
#endif
#ifndef INCLUDED_view_mediator_OverlayMediator
#include <view/mediator/OverlayMediator.h>
#endif
#ifndef INCLUDED_view_mediator_WelcomeMediator
#include <view/mediator/WelcomeMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_AccumulatorMediator
#include <view/mediator/basis/AccumulatorMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_AluMediator
#include <view/mediator/basis/AluMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_BottomLayerMediator
#include <view/mediator/basis/BottomLayerMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_ClockMediator
#include <view/mediator/basis/ClockMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_ComparatorMediator
#include <view/mediator/basis/ComparatorMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_DecoderMediator
#include <view/mediator/basis/DecoderMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_DisplayMediator
#include <view/mediator/basis/DisplayMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_EnablerMediator
#include <view/mediator/basis/EnablerMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_GatesMediator
#include <view/mediator/basis/GatesMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_MainBusMediator
#include <view/mediator/basis/MainBusMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_MultiplexerMediator
#include <view/mediator/basis/MultiplexerMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_ProgramcounterMediator
#include <view/mediator/basis/ProgramcounterMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_RamMediator
#include <view/mediator/basis/RamMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_RegisterMediator
#include <view/mediator/basis/RegisterMediator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_TopLayerMediator
#include <view/mediator/basis/TopLayerMediator.h>
#endif
namespace controller{
namespace startup{

Void PrepareViewCommand_obj::__construct()
{
HX_STACK_FRAME("controller.startup.PrepareViewCommand","new",0xf2090654,"controller.startup.PrepareViewCommand.new","controller/startup/PrepareViewCommand.hx",57,0x14c3ab5a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(57)
	super::__construct();
}
;
	return null();
}

//PrepareViewCommand_obj::~PrepareViewCommand_obj() { }

Dynamic PrepareViewCommand_obj::__CreateEmpty() { return  new PrepareViewCommand_obj; }
hx::ObjectPtr< PrepareViewCommand_obj > PrepareViewCommand_obj::__new()
{  hx::ObjectPtr< PrepareViewCommand_obj > result = new PrepareViewCommand_obj();
	result->__construct();
	return result;}

Dynamic PrepareViewCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PrepareViewCommand_obj > result = new PrepareViewCommand_obj();
	result->__construct();
	return result;}

Void PrepareViewCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.startup.PrepareViewCommand","execute",0xf6c64a29,"controller.startup.PrepareViewCommand.execute","controller/startup/PrepareViewCommand.hx",60,0x14c3ab5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(61)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		if (((_g == ::AppConstants_obj::PREPARE_VIEW))){
			HX_STACK_LINE(62)
			::haxe::Log_obj::trace(HX_CSTRING("hello PrepareViewCommand"),hx::SourceInfo(HX_CSTRING("PrepareViewCommand.hx"),62,HX_CSTRING("controller.startup.PrepareViewCommand"),HX_CSTRING("execute")));
			HX_STACK_LINE(63)
			::App app;		HX_STACK_VAR(app,"app");
			HX_STACK_LINE(63)
			app = hx::TCast< App >::cast(note->getBody());
			HX_STACK_LINE(64)
			::AppMediator _g1 = ::AppMediator_obj::__new(app);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(64)
			this->get_facade()->registerMediator(_g1);
			HX_STACK_LINE(65)
			::view::component::basis::BottomLayer _g2 = ::view::component::basis::BottomLayer_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(65)
			::view::mediator::basis::BottomLayerMediator _g3 = ::view::mediator::basis::BottomLayerMediator_obj::__new(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(65)
			this->get_facade()->registerMediator(_g3);
			HX_STACK_LINE(66)
			::view::component::basis::MainBus _g4 = ::view::component::basis::MainBus_obj::__new();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(66)
			::view::mediator::basis::MainBusMediator _g5 = ::view::mediator::basis::MainBusMediator_obj::__new(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(66)
			this->get_facade()->registerMediator(_g5);
			HX_STACK_LINE(67)
			::view::component::basis::Comparator _g6 = ::view::component::basis::Comparator_obj::__new();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(67)
			::view::mediator::basis::ComparatorMediator _g7 = ::view::mediator::basis::ComparatorMediator_obj::__new(_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(67)
			this->get_facade()->registerMediator(_g7);
			HX_STACK_LINE(68)
			::view::component::basis::Gates _g8 = ::view::component::basis::Gates_obj::__new();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(68)
			::view::mediator::basis::GatesMediator _g9 = ::view::mediator::basis::GatesMediator_obj::__new(_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(68)
			this->get_facade()->registerMediator(_g9);
			HX_STACK_LINE(69)
			::view::component::basis::Accumulator _g10 = ::view::component::basis::Accumulator_obj::__new();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(69)
			::view::mediator::basis::AccumulatorMediator _g11 = ::view::mediator::basis::AccumulatorMediator_obj::__new(_g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(69)
			this->get_facade()->registerMediator(_g11);
			HX_STACK_LINE(70)
			::view::component::basis::Alu _g12 = ::view::component::basis::Alu_obj::__new();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(70)
			::view::mediator::basis::AluMediator _g13 = ::view::mediator::basis::AluMediator_obj::__new(_g12);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(70)
			this->get_facade()->registerMediator(_g13);
			HX_STACK_LINE(71)
			::view::component::basis::Enabler _g14 = ::view::component::basis::Enabler_obj::__new();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(71)
			::view::mediator::basis::EnablerMediator _g15 = ::view::mediator::basis::EnablerMediator_obj::__new(_g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(71)
			this->get_facade()->registerMediator(_g15);
			HX_STACK_LINE(72)
			::view::component::basis::Decoder _g16 = ::view::component::basis::Decoder_obj::__new();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(72)
			::view::mediator::basis::DecoderMediator _g17 = ::view::mediator::basis::DecoderMediator_obj::__new(_g16);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(72)
			this->get_facade()->registerMediator(_g17);
			HX_STACK_LINE(73)
			::view::component::basis::Register _g18 = ::view::component::basis::Register_obj::__new();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(73)
			::view::mediator::basis::RegisterMediator _g19 = ::view::mediator::basis::RegisterMediator_obj::__new(_g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(73)
			this->get_facade()->registerMediator(_g19);
			HX_STACK_LINE(74)
			::view::component::basis::Multiplexer _g20 = ::view::component::basis::Multiplexer_obj::__new();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(74)
			::view::mediator::basis::MultiplexerMediator _g21 = ::view::mediator::basis::MultiplexerMediator_obj::__new(_g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(74)
			this->get_facade()->registerMediator(_g21);
			HX_STACK_LINE(75)
			::view::component::basis::Programcounter _g22 = ::view::component::basis::Programcounter_obj::__new();		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(75)
			::view::mediator::basis::ProgramcounterMediator _g23 = ::view::mediator::basis::ProgramcounterMediator_obj::__new(_g22);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(75)
			this->get_facade()->registerMediator(_g23);
			HX_STACK_LINE(76)
			::view::component::basis::Ram _g24 = ::view::component::basis::Ram_obj::__new();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(76)
			::view::mediator::basis::RamMediator _g25 = ::view::mediator::basis::RamMediator_obj::__new(_g24);		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(76)
			this->get_facade()->registerMediator(_g25);
			HX_STACK_LINE(78)
			::view::component::basis::Clock _g26 = ::view::component::basis::Clock_obj::__new();		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(78)
			::view::mediator::basis::ClockMediator _g27 = ::view::mediator::basis::ClockMediator_obj::__new(_g26);		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(78)
			this->get_facade()->registerMediator(_g27);
			HX_STACK_LINE(79)
			::view::component::basis::TopLayer _g28 = ::view::component::basis::TopLayer_obj::__new();		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(79)
			::view::mediator::basis::TopLayerMediator _g29 = ::view::mediator::basis::TopLayerMediator_obj::__new(_g28);		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(79)
			this->get_facade()->registerMediator(_g29);
			HX_STACK_LINE(80)
			::view::component::basis::Display _g30 = ::view::component::basis::Display_obj::__new();		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(80)
			::view::mediator::basis::DisplayMediator _g31 = ::view::mediator::basis::DisplayMediator_obj::__new(_g30);		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(80)
			this->get_facade()->registerMediator(_g31);
			HX_STACK_LINE(81)
			::view::component::Output _g32 = ::view::component::Output_obj::__new();		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(81)
			::view::mediator::OutputMediator _g33 = ::view::mediator::OutputMediator_obj::__new(_g32);		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(81)
			this->get_facade()->registerMediator(_g33);
			HX_STACK_LINE(82)
			::view::component::ICCover _g34 = ::view::component::ICCover_obj::__new();		HX_STACK_VAR(_g34,"_g34");
			HX_STACK_LINE(82)
			::view::mediator::ICCoverMediator _g35 = ::view::mediator::ICCoverMediator_obj::__new(_g34);		HX_STACK_VAR(_g35,"_g35");
			HX_STACK_LINE(82)
			this->get_facade()->registerMediator(_g35);
			HX_STACK_LINE(83)
			::view::component::Hotspot _g36 = ::view::component::Hotspot_obj::__new();		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(83)
			::view::mediator::HotspotMediator _g37 = ::view::mediator::HotspotMediator_obj::__new(_g36);		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(83)
			this->get_facade()->registerMediator(_g37);
			HX_STACK_LINE(84)
			::view::component::MainMenu _g38 = ::view::component::MainMenu_obj::__new();		HX_STACK_VAR(_g38,"_g38");
			HX_STACK_LINE(84)
			::view::mediator::MainMenuMediator _g39 = ::view::mediator::MainMenuMediator_obj::__new(_g38);		HX_STACK_VAR(_g39,"_g39");
			HX_STACK_LINE(84)
			this->get_facade()->registerMediator(_g39);
			HX_STACK_LINE(85)
			::view::component::InstructionDisplay _g40 = ::view::component::InstructionDisplay_obj::__new();		HX_STACK_VAR(_g40,"_g40");
			HX_STACK_LINE(85)
			::view::mediator::InstructionDisplayMediator _g41 = ::view::mediator::InstructionDisplayMediator_obj::__new(_g40);		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(85)
			this->get_facade()->registerMediator(_g41);
			HX_STACK_LINE(86)
			::view::component::Overlay _g42 = ::view::component::Overlay_obj::__new();		HX_STACK_VAR(_g42,"_g42");
			HX_STACK_LINE(86)
			::view::mediator::OverlayMediator _g43 = ::view::mediator::OverlayMediator_obj::__new(_g42);		HX_STACK_VAR(_g43,"_g43");
			HX_STACK_LINE(86)
			this->get_facade()->registerMediator(_g43);
			HX_STACK_LINE(87)
			::view::component::Welcome _g44 = ::view::component::Welcome_obj::__new();		HX_STACK_VAR(_g44,"_g44");
			HX_STACK_LINE(87)
			::view::mediator::WelcomeMediator _g45 = ::view::mediator::WelcomeMediator_obj::__new(_g44);		HX_STACK_VAR(_g45,"_g45");
			HX_STACK_LINE(87)
			this->get_facade()->registerMediator(_g45);
			HX_STACK_LINE(89)
			this->sendNotification(::AppConstants_obj::STARTUP_COMPLETE,null(),null());
		}
		else{
		}
	}
return null();
}



PrepareViewCommand_obj::PrepareViewCommand_obj()
{
}

Dynamic PrepareViewCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PrepareViewCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PrepareViewCommand_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrepareViewCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrepareViewCommand_obj::__mClass,"__mClass");
};

#endif

Class PrepareViewCommand_obj::__mClass;

void PrepareViewCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.startup.PrepareViewCommand"), hx::TCanCast< PrepareViewCommand_obj> ,sStaticFields,sMemberFields,
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

void PrepareViewCommand_obj::__boot()
{
}

} // end namespace controller
} // end namespace startup
