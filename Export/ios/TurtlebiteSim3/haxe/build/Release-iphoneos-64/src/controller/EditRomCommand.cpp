#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_controller_EditRomCommand
#include <controller/EditRomCommand.h>
#endif
#ifndef INCLUDED_model_data_ProgramData
#include <model/data/ProgramData.h>
#endif
#ifndef INCLUDED_model_proxy_ProgramProxy
#include <model/proxy/ProgramProxy.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IProxy
#include <org/puremvc/haxe/multicore/interfaces/IProxy.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_proxy_Proxy
#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
#endif
#ifndef INCLUDED_view_component_EditRom
#include <view/component/EditRom.h>
#endif
#ifndef INCLUDED_view_mediator_EditRomMediator
#include <view/mediator/EditRomMediator.h>
#endif
namespace controller{

Void EditRomCommand_obj::__construct()
{
HX_STACK_FRAME("controller.EditRomCommand","new",0x58537fe9,"controller.EditRomCommand.new","controller/EditRomCommand.hx",12,0xa36e9e86)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	super::__construct();
}
;
	return null();
}

//EditRomCommand_obj::~EditRomCommand_obj() { }

Dynamic EditRomCommand_obj::__CreateEmpty() { return  new EditRomCommand_obj; }
hx::ObjectPtr< EditRomCommand_obj > EditRomCommand_obj::__new()
{  hx::ObjectPtr< EditRomCommand_obj > result = new EditRomCommand_obj();
	result->__construct();
	return result;}

Dynamic EditRomCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EditRomCommand_obj > result = new EditRomCommand_obj();
	result->__construct();
	return result;}

Void EditRomCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.EditRomCommand","execute",0x90f5b23e,"controller.EditRomCommand.execute","controller/EditRomCommand.hx",17,0xa36e9e86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(17)
		if ((!(this->get_facade()->hasMediator(HX_CSTRING("EditRomMediator"))))){
			HX_STACK_LINE(18)
			::model::proxy::ProgramProxy programProxy;		HX_STACK_VAR(programProxy,"programProxy");
			HX_STACK_LINE(18)
			programProxy = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
			HX_STACK_LINE(20)
			this->sendNotification(::AppConstants_obj::PAUSE,null(),null());
			HX_STACK_LINE(21)
			this->get_facade()->removeMediator(HX_CSTRING("DetailAccumulatorMediator"));
			HX_STACK_LINE(22)
			::model::data::ProgramData _g = programProxy->getData();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(22)
			::view::component::EditRom _g1 = ::view::component::EditRom_obj::__new(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(22)
			::view::mediator::EditRomMediator _g2 = ::view::mediator::EditRomMediator_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(22)
			this->get_facade()->registerMediator(_g2);
		}
	}
return null();
}



EditRomCommand_obj::EditRomCommand_obj()
{
}

Dynamic EditRomCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EditRomCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void EditRomCommand_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(EditRomCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EditRomCommand_obj::__mClass,"__mClass");
};

#endif

Class EditRomCommand_obj::__mClass;

void EditRomCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.EditRomCommand"), hx::TCanCast< EditRomCommand_obj> ,sStaticFields,sMemberFields,
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

void EditRomCommand_obj::__boot()
{
}

} // end namespace controller
