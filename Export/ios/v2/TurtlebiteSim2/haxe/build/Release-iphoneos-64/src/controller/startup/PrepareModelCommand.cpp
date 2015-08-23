#include <hxcpp.h>

#ifndef INCLUDED_App
#include <App.h>
#endif
#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_controller_startup_PrepareModelCommand
#include <controller/startup/PrepareModelCommand.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_model_data_AppData
#include <model/data/AppData.h>
#endif
#ifndef INCLUDED_model_data_ClockData
#include <model/data/ClockData.h>
#endif
#ifndef INCLUDED_model_data_ProgramData
#include <model/data/ProgramData.h>
#endif
#ifndef INCLUDED_model_data_SnapshotData
#include <model/data/SnapshotData.h>
#endif
#ifndef INCLUDED_model_proxy_AppProxy
#include <model/proxy/AppProxy.h>
#endif
#ifndef INCLUDED_model_proxy_ClockProxy
#include <model/proxy/ClockProxy.h>
#endif
#ifndef INCLUDED_model_proxy_ProgramProxy
#include <model/proxy/ProgramProxy.h>
#endif
#ifndef INCLUDED_model_proxy_SnapshotProxy
#include <model/proxy/SnapshotProxy.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_proxy_Proxy
#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
#endif
namespace controller{
namespace startup{

Void PrepareModelCommand_obj::__construct()
{
HX_STACK_FRAME("controller.startup.PrepareModelCommand","new",0x09921618,"controller.startup.PrepareModelCommand.new","controller/startup/PrepareModelCommand.hx",14,0x670deeda)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

//PrepareModelCommand_obj::~PrepareModelCommand_obj() { }

Dynamic PrepareModelCommand_obj::__CreateEmpty() { return  new PrepareModelCommand_obj; }
hx::ObjectPtr< PrepareModelCommand_obj > PrepareModelCommand_obj::__new()
{  hx::ObjectPtr< PrepareModelCommand_obj > result = new PrepareModelCommand_obj();
	result->__construct();
	return result;}

Dynamic PrepareModelCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PrepareModelCommand_obj > result = new PrepareModelCommand_obj();
	result->__construct();
	return result;}

Void PrepareModelCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.startup.PrepareModelCommand","execute",0xe40c8bed,"controller.startup.PrepareModelCommand.execute","controller/startup/PrepareModelCommand.hx",17,0x670deeda)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(18)
		::haxe::Log_obj::trace(HX_CSTRING("hello PrepModelCommand "),hx::SourceInfo(HX_CSTRING("PrepareModelCommand.hx"),18,HX_CSTRING("controller.startup.PrepareModelCommand"),HX_CSTRING("execute")));
		HX_STACK_LINE(19)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		if (((_g == ::AppConstants_obj::PREPARE_MODEL))){
			HX_STACK_LINE(20)
			::App app;		HX_STACK_VAR(app,"app");
			HX_STACK_LINE(20)
			app = hx::TCast< App >::cast(note->getBody());
			HX_STACK_LINE(21)
			::model::data::AppData _g1 = ::model::data::AppData_obj::__new(app);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(21)
			::model::proxy::AppProxy _g2 = ::model::proxy::AppProxy_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(21)
			this->get_facade()->registerProxy(_g2);
		}
		else{
			HX_STACK_LINE(23)
			::model::proxy::AppProxy appProxy;		HX_STACK_VAR(appProxy,"appProxy");
			HX_STACK_LINE(23)
			appProxy = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
			HX_STACK_LINE(24)
			{
				HX_STACK_LINE(24)
				::String _g1 = note->getType();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(24)
				::String _switch_1 = (_g1);
				if (  ( _switch_1==::model::proxy::AppProxy_obj::NAME)){
					HX_STACK_LINE(26)
					::haxe::Log_obj::trace(HX_CSTRING("APP PROXY"),hx::SourceInfo(HX_CSTRING("PrepareModelCommand.hx"),26,HX_CSTRING("controller.startup.PrepareModelCommand"),HX_CSTRING("execute")));
					HX_STACK_LINE(27)
					::model::data::ProgramData _g3 = ::model::data::ProgramData_obj::__new();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(27)
					::model::proxy::ProgramProxy _g4 = ::model::proxy::ProgramProxy_obj::__new(_g3);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(27)
					this->get_facade()->registerProxy(_g4);
				}
				else if (  ( _switch_1==::model::proxy::ProgramProxy_obj::NAME)){
					HX_STACK_LINE(29)
					::haxe::Log_obj::trace(HX_CSTRING("PROGRAM PROXY"),hx::SourceInfo(HX_CSTRING("PrepareModelCommand.hx"),29,HX_CSTRING("controller.startup.PrepareModelCommand"),HX_CSTRING("execute")));
					HX_STACK_LINE(30)
					::model::data::SnapshotData _g5 = ::model::data::SnapshotData_obj::__new();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(30)
					::model::proxy::SnapshotProxy _g6 = ::model::proxy::SnapshotProxy_obj::__new(_g5);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(30)
					this->get_facade()->registerProxy(_g6);
				}
				else if (  ( _switch_1==::model::proxy::SnapshotProxy_obj::NAME)){
					HX_STACK_LINE(32)
					::haxe::Log_obj::trace(HX_CSTRING("SNAPSHOT PROXY"),hx::SourceInfo(HX_CSTRING("PrepareModelCommand.hx"),32,HX_CSTRING("controller.startup.PrepareModelCommand"),HX_CSTRING("execute")));
					HX_STACK_LINE(33)
					::model::data::ClockData _g7 = ::model::data::ClockData_obj::__new();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(33)
					::model::proxy::ClockProxy _g8 = ::model::proxy::ClockProxy_obj::__new(_g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(33)
					this->get_facade()->registerProxy(_g8);
				}
				else if (  ( _switch_1==::model::proxy::ClockProxy_obj::NAME)){
					HX_STACK_LINE(35)
					::haxe::Log_obj::trace(HX_CSTRING("CLOCK PROXY"),hx::SourceInfo(HX_CSTRING("PrepareModelCommand.hx"),35,HX_CSTRING("controller.startup.PrepareModelCommand"),HX_CSTRING("execute")));
					HX_STACK_LINE(36)
					::App _g9 = appProxy->getApp();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(36)
					this->sendNotification(::AppConstants_obj::PREPARE_VIEW,_g9,null());
				}
			}
		}
	}
return null();
}



PrepareModelCommand_obj::PrepareModelCommand_obj()
{
}

Dynamic PrepareModelCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PrepareModelCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PrepareModelCommand_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(PrepareModelCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrepareModelCommand_obj::__mClass,"__mClass");
};

#endif

Class PrepareModelCommand_obj::__mClass;

void PrepareModelCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.startup.PrepareModelCommand"), hx::TCanCast< PrepareModelCommand_obj> ,sStaticFields,sMemberFields,
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

void PrepareModelCommand_obj::__boot()
{
}

} // end namespace controller
} // end namespace startup
