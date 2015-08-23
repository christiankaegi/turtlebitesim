#include <hxcpp.h>

#ifndef INCLUDED_controller_DetailAccumulatorCommand
#include <controller/DetailAccumulatorCommand.h>
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
#ifndef INCLUDED_view_component_DetailAccumulator
#include <view/component/DetailAccumulator.h>
#endif
#ifndef INCLUDED_view_mediator_DetailAccumulatorMediator
#include <view/mediator/DetailAccumulatorMediator.h>
#endif
namespace controller{

Void DetailAccumulatorCommand_obj::__construct()
{
HX_STACK_FRAME("controller.DetailAccumulatorCommand","new",0xa69c5aba,"controller.DetailAccumulatorCommand.new","controller/DetailAccumulatorCommand.hx",10,0x68ffb595)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	super::__construct();
}
;
	return null();
}

//DetailAccumulatorCommand_obj::~DetailAccumulatorCommand_obj() { }

Dynamic DetailAccumulatorCommand_obj::__CreateEmpty() { return  new DetailAccumulatorCommand_obj; }
hx::ObjectPtr< DetailAccumulatorCommand_obj > DetailAccumulatorCommand_obj::__new()
{  hx::ObjectPtr< DetailAccumulatorCommand_obj > result = new DetailAccumulatorCommand_obj();
	result->__construct();
	return result;}

Dynamic DetailAccumulatorCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DetailAccumulatorCommand_obj > result = new DetailAccumulatorCommand_obj();
	result->__construct();
	return result;}

Void DetailAccumulatorCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.DetailAccumulatorCommand","execute",0x5472c98f,"controller.DetailAccumulatorCommand.execute","controller/DetailAccumulatorCommand.hx",13,0x68ffb595)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(15)
		::view::component::DetailAccumulator _g = ::view::component::DetailAccumulator_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		::view::mediator::DetailAccumulatorMediator _g1 = ::view::mediator::DetailAccumulatorMediator_obj::__new(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(15)
		this->get_facade()->registerMediator(_g1);
	}
return null();
}



DetailAccumulatorCommand_obj::DetailAccumulatorCommand_obj()
{
}

Dynamic DetailAccumulatorCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DetailAccumulatorCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DetailAccumulatorCommand_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(DetailAccumulatorCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DetailAccumulatorCommand_obj::__mClass,"__mClass");
};

#endif

Class DetailAccumulatorCommand_obj::__mClass;

void DetailAccumulatorCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.DetailAccumulatorCommand"), hx::TCanCast< DetailAccumulatorCommand_obj> ,sStaticFields,sMemberFields,
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

void DetailAccumulatorCommand_obj::__boot()
{
}

} // end namespace controller
