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
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
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
#ifndef INCLUDED_view_component_ICCover
#include <view/component/ICCover.h>
#endif
#ifndef INCLUDED_view_mediator_ICCoverMediator
#include <view/mediator/ICCoverMediator.h>
#endif
namespace view{
namespace mediator{

Void ICCoverMediator_obj::__construct(::view::component::ICCover viewComponent)
{
HX_STACK_FRAME("view.mediator.ICCoverMediator","new",0x3c86b530,"view.mediator.ICCoverMediator.new","view/mediator/ICCoverMediator.hx",15,0x6463f020)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(15)
	super::__construct(HX_CSTRING("ICCoverMediator"),viewComponent);
}
;
	return null();
}

//ICCoverMediator_obj::~ICCoverMediator_obj() { }

Dynamic ICCoverMediator_obj::__CreateEmpty() { return  new ICCoverMediator_obj; }
hx::ObjectPtr< ICCoverMediator_obj > ICCoverMediator_obj::__new(::view::component::ICCover viewComponent)
{  hx::ObjectPtr< ICCoverMediator_obj > result = new ICCoverMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic ICCoverMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ICCoverMediator_obj > result = new ICCoverMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ICCoverMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.ICCoverMediator","onRegister",0xa304cfd2,"view.mediator.ICCoverMediator.onRegister","view/mediator/ICCoverMediator.hx",18,0x6463f020)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(20)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(20)
		this->appProxy = _g;
		HX_STACK_LINE(21)
		::view::component::ICCover _g1 = this->getView();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(21)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g1,null());
	}
return null();
}


Array< ::String > ICCoverMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.ICCoverMediator","listNotificationInterests",0x5ff6c9b0,"view.mediator.ICCoverMediator.listNotificationInterests","view/mediator/ICCoverMediator.hx",25,0x6463f020)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::REGISTER_1_CHANGED).Add(::AppConstants_obj::REGISTER_2_CHANGED).Add(::AppConstants_obj::ACCUMULATOR_CHANGED).Add(::AppConstants_obj::OPCODE_OUT).Add(::AppConstants_obj::SHOW_HIGHLIGHT).Add(::AppConstants_obj::HIDE_HIGHLIGHT).Add(::AppConstants_obj::MODEL_RESET_COMPLETE);
}


Void ICCoverMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.ICCoverMediator","handleNotification",0xb1f4a7e3,"view.mediator.ICCoverMediator.handleNotification","view/mediator/ICCoverMediator.hx",38,0x6463f020)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(38)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(41)
			this->getView()->resetVisibilityAll(null());
			HX_STACK_LINE(42)
			::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
			HX_STACK_LINE(42)
			instruction = hx::TCast< model::vo::InstructionVO >::cast(note->getBody());
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				::String _g1 = instruction->codeOpcode;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(43)
				::String _switch_2 = (_g1);
				if (  ( _switch_2==::AppConstants_obj::OPCODE_MOV)){
					HX_STACK_LINE(46)
					this->getView()->setVisibilityMOV(false);
					HX_STACK_LINE(47)
					this->getView()->setVisibilityDecoder(false);
					HX_STACK_LINE(48)
					this->getView()->setVisibilityMultiplexer(false);
					HX_STACK_LINE(49)
					this->checkForAddressCover(instruction->asmAddress);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_LDI)){
					HX_STACK_LINE(51)
					this->getView()->setVisibilityLDI(false);
					HX_STACK_LINE(52)
					this->getView()->setVisibilityEnabler2(false);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_ALU)){
					HX_STACK_LINE(54)
					this->getView()->setVisibilityALU(false);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_SDA)){
					HX_STACK_LINE(56)
					this->getView()->setVisibilitySDA(false);
					HX_STACK_LINE(57)
					this->getView()->setVisibilityMultiplexer(false);
					HX_STACK_LINE(58)
					this->getView()->setVisibilityRam(false);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_LDA)){
					HX_STACK_LINE(60)
					this->getView()->setVisibilityLDA(false);
					HX_STACK_LINE(61)
					this->getView()->setVisibilityEnabler1(false);
					HX_STACK_LINE(62)
					this->getView()->setVisibilityRam(false);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_INP)){
					HX_STACK_LINE(64)
					this->getView()->setVisibilityINP(false);
					HX_STACK_LINE(65)
					this->getView()->setVisibilityDecoder(false);
					HX_STACK_LINE(66)
					this->getView()->setVisibilityMultiplexer(false);
					HX_STACK_LINE(67)
					this->checkForAddressCover(instruction->asmAddress);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_OUT)){
					HX_STACK_LINE(69)
					this->getView()->setVisibilityOUT(false);
					HX_STACK_LINE(70)
					this->getView()->setVisibilityDecoder(false);
					HX_STACK_LINE(71)
					this->getView()->setVisibilityMultiplexer(false);
					HX_STACK_LINE(72)
					this->getView()->setVisibilityDisplay(false);
					HX_STACK_LINE(73)
					this->checkForAddressCover(instruction->codeAddress);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_JE)){
					HX_STACK_LINE(75)
					this->getView()->setVisibilityJE(false);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_JNE)){
					HX_STACK_LINE(77)
					this->getView()->setVisibilityJNE(false);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_JMP)){
					HX_STACK_LINE(79)
					this->getView()->setVisibilityJMP(false);
				}
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::REGISTER_1_CHANGED)){
			HX_STACK_LINE(82)
			this->getView()->setVisibilityRegister1(false);
		}
		else if (  ( _switch_1==::AppConstants_obj::REGISTER_2_CHANGED)){
			HX_STACK_LINE(84)
			this->getView()->setVisibilityRegister2(false);
		}
		else if (  ( _switch_1==::AppConstants_obj::ACCUMULATOR_CHANGED)){
			HX_STACK_LINE(86)
			this->getView()->setVisibilityAccumulator(false);
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(88)
			this->getView()->resetVisibilityAll(true);
		}
		else if (  ( _switch_1==::AppConstants_obj::SHOW_HIGHLIGHT)){
			HX_STACK_LINE(90)
			this->getView()->set_visible(true);
		}
		else if (  ( _switch_1==::AppConstants_obj::HIDE_HIGHLIGHT)){
			HX_STACK_LINE(92)
			this->getView()->set_visible(false);
		}
	}
return null();
}


Void ICCoverMediator_obj::checkForAddressCover( ::String address){
{
		HX_STACK_FRAME("view.mediator.ICCoverMediator","checkForAddressCover",0x0cfb8ed4,"view.mediator.ICCoverMediator.checkForAddressCover","view/mediator/ICCoverMediator.hx",97,0x6463f020)
		HX_STACK_THIS(this)
		HX_STACK_ARG(address,"address")
		HX_STACK_LINE(97)
		::String _switch_3 = (address);
		if (  ( _switch_3==::AppConstants_obj::ADDRESS_ACCUMULATOR)){
			HX_STACK_LINE(99)
			this->getView()->setVisibilityAccumulator(false);
		}
		else if (  ( _switch_3==::AppConstants_obj::ADDRESS_REGISTER1)){
			HX_STACK_LINE(101)
			this->getView()->setVisibilityRegister1(false);
		}
		else if (  ( _switch_3==::AppConstants_obj::ADDRESS_REGISTER2)){
			HX_STACK_LINE(103)
			this->getView()->setVisibilityRegister2(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCoverMediator_obj,checkForAddressCover,(void))

Void ICCoverMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.ICCoverMediator","viewReadyHandler",0x837ab4dc,"view.mediator.ICCoverMediator.viewReadyHandler","view/mediator/ICCoverMediator.hx",107,0x6463f020)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(108)
		bool _g = this->appProxy->getShowHighlightOn();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		if (((_g == false))){
			HX_STACK_LINE(109)
			this->getView()->set_visible(false);
		}
		HX_STACK_LINE(111)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("ICCoverMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCoverMediator_obj,viewReadyHandler,(void))

::view::component::ICCover ICCoverMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.ICCoverMediator","getView",0x7d9f6eeb,"view.mediator.ICCoverMediator.getView","view/mediator/ICCoverMediator.hx",115,0x6463f020)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(ICCoverMediator_obj,getView,return )

::String ICCoverMediator_obj::NAME;


ICCoverMediator_obj::ICCoverMediator_obj()
{
}

void ICCoverMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ICCoverMediator);
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ICCoverMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ICCoverMediator_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 16:
		if (HX_FIELD_EQ(inName,"viewReadyHandler") ) { return viewReadyHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleNotification") ) { return handleNotification_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"checkForAddressCover") ) { return checkForAddressCover_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listNotificationInterests") ) { return listNotificationInterests_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ICCoverMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ICCoverMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(ICCoverMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("appProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("checkForAddressCover"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ICCoverMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ICCoverMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ICCoverMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ICCoverMediator_obj::NAME,"NAME");
};

#endif

Class ICCoverMediator_obj::__mClass;

void ICCoverMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.ICCoverMediator"), hx::TCanCast< ICCoverMediator_obj> ,sStaticFields,sMemberFields,
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

void ICCoverMediator_obj::__boot()
{
	NAME= HX_CSTRING("ICCoverMediator");
}

} // end namespace view
} // end namespace mediator
