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
#ifndef INCLUDED_view_component_lines_Alu
#include <view/component/lines/Alu.h>
#endif
#ifndef INCLUDED_view_mediator_lines_AluMediator
#include <view/mediator/lines/AluMediator.h>
#endif
namespace view{
namespace mediator{
namespace lines{

Void AluMediator_obj::__construct(::view::component::lines::Alu viewComponent)
{
HX_STACK_FRAME("view.mediator.lines.AluMediator","new",0x467b93ce,"view.mediator.lines.AluMediator.new","view/mediator/lines/AluMediator.hx",25,0xe341a703)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(25)
	super::__construct(HX_CSTRING("AluMediator"),viewComponent);
}
;
	return null();
}

//AluMediator_obj::~AluMediator_obj() { }

Dynamic AluMediator_obj::__CreateEmpty() { return  new AluMediator_obj; }
hx::ObjectPtr< AluMediator_obj > AluMediator_obj::__new(::view::component::lines::Alu viewComponent)
{  hx::ObjectPtr< AluMediator_obj > result = new AluMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic AluMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AluMediator_obj > result = new AluMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void AluMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.lines.AluMediator","onRegister",0x8baa20f4,"view.mediator.lines.AluMediator.onRegister","view/mediator/lines/AluMediator.hx",28,0xe341a703)
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
		::view::component::lines::Alu _g2 = this->getView();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(32)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g2,null());
	}
return null();
}


Array< ::String > AluMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.lines.AluMediator","listNotificationInterests",0xaa5a0ece,"view.mediator.lines.AluMediator.listNotificationInterests","view/mediator/lines/AluMediator.hx",36,0xe341a703)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CLOCK_OFF).Add(::AppConstants_obj::ALU_OUT_ACTIVE).Add(::AppConstants_obj::ALU_EQUAL_ON).Add(::AppConstants_obj::ALU_EQUAL_OFF).Add(::AppConstants_obj::MODEL_RESET_COMPLETE).Add(::AppConstants_obj::DETAIL_POPUP_ACTIVE);
}


Void AluMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.lines.AluMediator","handleNotification",0xade2eb05,"view.mediator.lines.AluMediator.handleNotification","view/mediator/lines/AluMediator.hx",48,0xe341a703)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(48)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(51)
			if ((!(this->appProxy->getDetailPopupActive()))){
				HX_STACK_LINE(52)
				::model::vo::SnapshotVO register1 = this->snapshotProxy->getRegister1();		HX_STACK_VAR(register1,"register1");
				HX_STACK_LINE(53)
				::model::vo::SnapshotVO accumulator = this->snapshotProxy->getAccumulator();		HX_STACK_VAR(accumulator,"accumulator");
				HX_STACK_LINE(54)
				::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
				HX_STACK_LINE(54)
				instruction = hx::TCast< model::vo::InstructionVO >::cast(note->getBody());
				HX_STACK_LINE(55)
				if (((instruction->codeOpcode != ::AppConstants_obj::OPCODE_ALU))){
					HX_STACK_LINE(56)
					this->getView()->hideLinesOut();
				}
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::CLOCK_OFF)){
			HX_STACK_LINE(60)
			this->getView()->hideLineEqual();
		}
		else if (  ( _switch_1==::AppConstants_obj::ALU_EQUAL_ON)){
			HX_STACK_LINE(62)
			if ((!(this->appProxy->getDetailPopupActive()))){
				HX_STACK_LINE(63)
				if ((!(this->appProxy->getDetailPopupActive()))){
					HX_STACK_LINE(64)
					this->getView()->showLineEqual();
				}
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::ALU_EQUAL_OFF)){
			HX_STACK_LINE(68)
			this->getView()->hideLineEqual();
		}
		else if (  ( _switch_1==::AppConstants_obj::ALU_OUT_ACTIVE)){
			HX_STACK_LINE(70)
			if ((!(this->appProxy->getDetailPopupActive()))){
				HX_STACK_LINE(71)
				::model::vo::SnapshotVO snapshotVO;		HX_STACK_VAR(snapshotVO,"snapshotVO");
				HX_STACK_LINE(71)
				snapshotVO = hx::TCast< model::vo::SnapshotVO >::cast(note->getBody());
				HX_STACK_LINE(72)
				Array< bool > _g1 = snapshotVO->getCodeArr();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(72)
				this->getView()->showLines(_g1);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(75)
			this->getView()->hideLineEqual();
			HX_STACK_LINE(76)
			this->getView()->hideLinesOut();
		}
		else if (  ( _switch_1==::AppConstants_obj::DETAIL_POPUP_ACTIVE)){
			HX_STACK_LINE(78)
			this->getView()->hideLineEqual();
			HX_STACK_LINE(79)
			this->getView()->hideLinesOut();
		}
	}
return null();
}


Void AluMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.lines.AluMediator","viewReadyHandler",0xc64c8b7e,"view.mediator.lines.AluMediator.viewReadyHandler","view/mediator/lines/AluMediator.hx",85,0xe341a703)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(85)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("AluMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AluMediator_obj,viewReadyHandler,(void))

::view::component::lines::Alu AluMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.lines.AluMediator","getView",0x7faaf489,"view.mediator.lines.AluMediator.getView","view/mediator/lines/AluMediator.hx",89,0xe341a703)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(AluMediator_obj,getView,return )

::String AluMediator_obj::NAME;


AluMediator_obj::AluMediator_obj()
{
}

void AluMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AluMediator);
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	HX_MARK_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AluMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	HX_VISIT_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AluMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic AluMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void AluMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appProxy"));
	outFields->push(HX_CSTRING("snapshotProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(AluMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{hx::fsObject /*::model::proxy::SnapshotProxy*/ ,(int)offsetof(AluMediator_obj,snapshotProxy),HX_CSTRING("snapshotProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("appProxy"),
	HX_CSTRING("snapshotProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AluMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AluMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AluMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AluMediator_obj::NAME,"NAME");
};

#endif

Class AluMediator_obj::__mClass;

void AluMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.lines.AluMediator"), hx::TCanCast< AluMediator_obj> ,sStaticFields,sMemberFields,
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

void AluMediator_obj::__boot()
{
	NAME= HX_CSTRING("AluMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace lines
