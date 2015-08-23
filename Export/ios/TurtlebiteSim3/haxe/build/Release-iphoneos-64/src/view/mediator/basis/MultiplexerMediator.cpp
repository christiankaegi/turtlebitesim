#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_data_SnapshotData
#include <model/data/SnapshotData.h>
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
#ifndef INCLUDED_view_component_basis_Multiplexer
#include <view/component/basis/Multiplexer.h>
#endif
#ifndef INCLUDED_view_mediator_basis_MultiplexerMediator
#include <view/mediator/basis/MultiplexerMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void MultiplexerMediator_obj::__construct(::view::component::basis::Multiplexer viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.MultiplexerMediator","new",0xf97fe6b8,"view.mediator.basis.MultiplexerMediator.new","view/mediator/basis/MultiplexerMediator.hx",19,0x2588a859)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(19)
	super::__construct(HX_CSTRING("MultiplexerMediator"),viewComponent);
}
;
	return null();
}

//MultiplexerMediator_obj::~MultiplexerMediator_obj() { }

Dynamic MultiplexerMediator_obj::__CreateEmpty() { return  new MultiplexerMediator_obj; }
hx::ObjectPtr< MultiplexerMediator_obj > MultiplexerMediator_obj::__new(::view::component::basis::Multiplexer viewComponent)
{  hx::ObjectPtr< MultiplexerMediator_obj > result = new MultiplexerMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic MultiplexerMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MultiplexerMediator_obj > result = new MultiplexerMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MultiplexerMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.MultiplexerMediator","onRegister",0x71d05f4a,"view.mediator.basis.MultiplexerMediator.onRegister","view/mediator/basis/MultiplexerMediator.hx",22,0x2588a859)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(24)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(24)
		this->appProxy = _g;
		HX_STACK_LINE(25)
		::model::proxy::SnapshotProxy _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		_g1 = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(25)
		this->snapshotProxy = _g1;
		HX_STACK_LINE(26)
		::view::component::basis::Multiplexer _g2 = this->getView();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(26)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g2,null());
	}
return null();
}


Array< ::String > MultiplexerMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.MultiplexerMediator","listNotificationInterests",0x33176138,"view.mediator.basis.MultiplexerMediator.listNotificationInterests","view/mediator/basis/MultiplexerMediator.hx",30,0x2588a859)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CLOCK_OFF).Add(::AppConstants_obj::ALU_OUT_ACTIVE).Add(::AppConstants_obj::MODEL_RESET_COMPLETE);
}


Void MultiplexerMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.MultiplexerMediator","handleNotification",0x7e906f5b,"view.mediator.basis.MultiplexerMediator.handleNotification","view/mediator/basis/MultiplexerMediator.hx",38,0x2588a859)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(39)
		if ((this->appProxy->getDetailPopupActive())){
			HX_STACK_LINE(40)
			return null();
		}
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(42)
			::String _switch_1 = (_g);
			if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
				HX_STACK_LINE(45)
				::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
				HX_STACK_LINE(45)
				instruction = hx::TCast< model::vo::InstructionVO >::cast(note->getBody());
				HX_STACK_LINE(46)
				::String opcode = instruction->code.substr((int)0,(int)4);		HX_STACK_VAR(opcode,"opcode");
				HX_STACK_LINE(47)
				Array< bool > codeArr = Array_obj< bool >::__new();		HX_STACK_VAR(codeArr,"codeArr");
				HX_STACK_LINE(48)
				if (((bool((bool((bool((opcode == ::AppConstants_obj::OPCODE_MOV)) || bool((opcode == ::AppConstants_obj::OPCODE_SDA)))) || bool((opcode == ::AppConstants_obj::OPCODE_INP)))) || bool((opcode == ::AppConstants_obj::OPCODE_OUT))))){
					HX_STACK_LINE(52)
					{
						HX_STACK_LINE(52)
						::String _g1 = instruction->code.substr((int)6,(int)2);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(52)
						::String _switch_2 = (_g1);
						if (  ( _switch_2==::AppConstants_obj::MULTIPLEXER_ACCUMULATOR)){
							HX_STACK_LINE(54)
							Array< bool > _g2 = this->snapshotProxy->getData()->__Field(HX_CSTRING("accumulator"),true)->__Field(HX_CSTRING("getCodeArr"),true)();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(54)
							codeArr = _g2;
						}
						else if (  ( _switch_2==::AppConstants_obj::MULTIPLEXER_REGISTER2)){
							HX_STACK_LINE(56)
							Array< bool > _g11 = this->snapshotProxy->getData()->__Field(HX_CSTRING("register2"),true)->__Field(HX_CSTRING("getCodeArr"),true)();		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(56)
							codeArr = _g11;
						}
						else if (  ( _switch_2==::AppConstants_obj::MULTIPLEXER_REGISTER1)){
							HX_STACK_LINE(58)
							Array< bool > _g2 = this->snapshotProxy->getData()->__Field(HX_CSTRING("register1"),true)->__Field(HX_CSTRING("getCodeArr"),true)();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(58)
							codeArr = _g2;
						}
						else if (  ( _switch_2==::AppConstants_obj::MULTIPLEXER_KEYBOARD_INPUT)){
							HX_STACK_LINE(60)
							Array< bool > _g3 = this->snapshotProxy->getData()->__Field(HX_CSTRING("keyboard"),true)->__Field(HX_CSTRING("getCodeArr"),true)();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(60)
							codeArr = _g3;
						}
					}
					HX_STACK_LINE(62)
					this->getView()->showLines(codeArr);
					HX_STACK_LINE(63)
					this->sendNotification(::AppConstants_obj::MULTIPLEXER_OUT_CHANGED,codeArr,null());
				}
			}
			else if (  ( _switch_1==::AppConstants_obj::ALU_OUT_ACTIVE)){
				HX_STACK_LINE(66)
				::model::vo::SnapshotVO snapshotVO;		HX_STACK_VAR(snapshotVO,"snapshotVO");
				HX_STACK_LINE(66)
				snapshotVO = hx::TCast< model::vo::SnapshotVO >::cast(note->getBody());
				HX_STACK_LINE(67)
				Array< bool > _g4 = snapshotVO->getCodeArr();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(67)
				this->getView()->showLines(_g4);
				HX_STACK_LINE(68)
				Array< bool > _g5 = snapshotVO->getCodeArr();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(68)
				this->sendNotification(::AppConstants_obj::MULTIPLEXER_OUT_CHANGED,_g5,null());
			}
			else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
				HX_STACK_LINE(70)
				this->getView()->hideAllLines();
			}
		}
	}
return null();
}


Void MultiplexerMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.MultiplexerMediator","viewReadyHandler",0xf7eb2e54,"view.mediator.basis.MultiplexerMediator.viewReadyHandler","view/mediator/basis/MultiplexerMediator.hx",75,0x2588a859)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(75)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("MultiplexerMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MultiplexerMediator_obj,viewReadyHandler,(void))

::view::component::basis::Multiplexer MultiplexerMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.MultiplexerMediator","getView",0x9c040473,"view.mediator.basis.MultiplexerMediator.getView","view/mediator/basis/MultiplexerMediator.hx",79,0x2588a859)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(MultiplexerMediator_obj,getView,return )

::String MultiplexerMediator_obj::NAME;


MultiplexerMediator_obj::MultiplexerMediator_obj()
{
}

void MultiplexerMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MultiplexerMediator);
	HX_MARK_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MultiplexerMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MultiplexerMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic MultiplexerMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void MultiplexerMediator_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::model::proxy::SnapshotProxy*/ ,(int)offsetof(MultiplexerMediator_obj,snapshotProxy),HX_CSTRING("snapshotProxy")},
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(MultiplexerMediator_obj,appProxy),HX_CSTRING("appProxy")},
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
	HX_MARK_MEMBER_NAME(MultiplexerMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MultiplexerMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MultiplexerMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MultiplexerMediator_obj::NAME,"NAME");
};

#endif

Class MultiplexerMediator_obj::__mClass;

void MultiplexerMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.MultiplexerMediator"), hx::TCanCast< MultiplexerMediator_obj> ,sStaticFields,sMemberFields,
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

void MultiplexerMediator_obj::__boot()
{
	NAME= HX_CSTRING("MultiplexerMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
