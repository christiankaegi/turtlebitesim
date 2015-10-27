#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_proxy_AppProxy
#include <model/proxy/AppProxy.h>
#endif
#ifndef INCLUDED_model_proxy_SnapshotProxy
#include <model/proxy/SnapshotProxy.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_mediator_Mediator
#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_proxy_Proxy
#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
#endif
#ifndef INCLUDED_utilities_NumberFormat
#include <utilities/NumberFormat.h>
#endif
#ifndef INCLUDED_view_component_lines_Programcounter
#include <view/component/lines/Programcounter.h>
#endif
#ifndef INCLUDED_view_mediator_lines_ProgramcounterMediator
#include <view/mediator/lines/ProgramcounterMediator.h>
#endif
namespace view{
namespace mediator{
namespace lines{

Void ProgramcounterMediator_obj::__construct(::view::component::lines::Programcounter viewComponent)
{
HX_STACK_FRAME("view.mediator.lines.ProgramcounterMediator","new",0x0a36213e,"view.mediator.lines.ProgramcounterMediator.new","view/mediator/lines/ProgramcounterMediator.hx",25,0xff9a59f1)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(25)
	super::__construct(HX_CSTRING("ProgramcounterMediator"),viewComponent);
}
;
	return null();
}

//ProgramcounterMediator_obj::~ProgramcounterMediator_obj() { }

Dynamic ProgramcounterMediator_obj::__CreateEmpty() { return  new ProgramcounterMediator_obj; }
hx::ObjectPtr< ProgramcounterMediator_obj > ProgramcounterMediator_obj::__new(::view::component::lines::Programcounter viewComponent)
{  hx::ObjectPtr< ProgramcounterMediator_obj > result = new ProgramcounterMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic ProgramcounterMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProgramcounterMediator_obj > result = new ProgramcounterMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ProgramcounterMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.lines.ProgramcounterMediator","onRegister",0xe21d2184,"view.mediator.lines.ProgramcounterMediator.onRegister","view/mediator/lines/ProgramcounterMediator.hx",28,0xff9a59f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(30)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(30)
		this->appProxy = _g;
		HX_STACK_LINE(31)
		::model::proxy::SnapshotProxy _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		_g1 = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(31)
		this->snapshotProxy = _g1;
		HX_STACK_LINE(32)
		::view::component::lines::Programcounter _g2 = this->getView();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(32)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g2,null());
	}
return null();
}


Array< ::String > ProgramcounterMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.lines.ProgramcounterMediator","listNotificationInterests",0x985e303e,"view.mediator.lines.ProgramcounterMediator.listNotificationInterests","view/mediator/lines/ProgramcounterMediator.hx",36,0xff9a59f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::BROADCAST_JUMP).Add(::AppConstants_obj::MODEL_RESET_COMPLETE).Add(::AppConstants_obj::DETAIL_POPUP_ACTIVE);
}


Void ProgramcounterMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.lines.ProgramcounterMediator","handleNotification",0xd720fb95,"view.mediator.lines.ProgramcounterMediator.handleNotification","view/mediator/lines/ProgramcounterMediator.hx",45,0xff9a59f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(45)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(48)
			if ((!(this->appProxy->getDetailPopupActive()))){
				HX_STACK_LINE(49)
				::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
				HX_STACK_LINE(49)
				instruction = hx::TCast< model::vo::InstructionVO >::cast(note->getBody());
				HX_STACK_LINE(50)
				::String _g1 = ::utilities::NumberFormat_obj::decimalToBinary(instruction->pointer);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(50)
				Array< bool > codeArr = ::utilities::NumberFormat_obj::binaryToArray(_g1,(int)4);		HX_STACK_VAR(codeArr,"codeArr");
				HX_STACK_LINE(51)
				codeArr->unshift(false);
				HX_STACK_LINE(52)
				codeArr->unshift(false);
				HX_STACK_LINE(53)
				codeArr->unshift(false);
				HX_STACK_LINE(54)
				codeArr->unshift(false);
				HX_STACK_LINE(55)
				this->getView()->showLines(codeArr);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(58)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::DETAIL_POPUP_ACTIVE)){
			HX_STACK_LINE(60)
			this->getView()->hideAllLines();
		}
	}
return null();
}


Void ProgramcounterMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.lines.ProgramcounterMediator","viewReadyHandler",0x5912580e,"view.mediator.lines.ProgramcounterMediator.viewReadyHandler","view/mediator/lines/ProgramcounterMediator.hx",65,0xff9a59f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(65)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("ProgramcounterMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgramcounterMediator_obj,viewReadyHandler,(void))

::view::component::lines::Programcounter ProgramcounterMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.lines.ProgramcounterMediator","getView",0xa510f9f9,"view.mediator.lines.ProgramcounterMediator.getView","view/mediator/lines/ProgramcounterMediator.hx",69,0xff9a59f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(ProgramcounterMediator_obj,getView,return )

::String ProgramcounterMediator_obj::NAME;


ProgramcounterMediator_obj::ProgramcounterMediator_obj()
{
}

void ProgramcounterMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProgramcounterMediator);
	HX_MARK_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ProgramcounterMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ProgramcounterMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { return appProxy; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { return snapshotProxy; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"viewReadyHandler") ) { return viewReadyHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleNotification") ) { return handleNotification_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listNotificationInterests") ) { return listNotificationInterests_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProgramcounterMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { snapshotProxy=inValue.Cast< ::model::proxy::SnapshotProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgramcounterMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("snapshotProxy"));
	outFields->push(HX_CSTRING("appProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::SnapshotProxy*/ ,(int)offsetof(ProgramcounterMediator_obj,snapshotProxy),HX_CSTRING("snapshotProxy")},
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(ProgramcounterMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("snapshotProxy"),
	HX_CSTRING("appProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgramcounterMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ProgramcounterMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgramcounterMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProgramcounterMediator_obj::NAME,"NAME");
};

#endif

Class ProgramcounterMediator_obj::__mClass;

void ProgramcounterMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.lines.ProgramcounterMediator"), hx::TCanCast< ProgramcounterMediator_obj> ,sStaticFields,sMemberFields,
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

void ProgramcounterMediator_obj::__boot()
{
	NAME= HX_CSTRING("ProgramcounterMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace lines
