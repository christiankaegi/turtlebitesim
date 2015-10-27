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
#ifndef INCLUDED_view_component_Highlight
#include <view/component/Highlight.h>
#endif
#ifndef INCLUDED_view_mediator_HighlightMediator
#include <view/mediator/HighlightMediator.h>
#endif
namespace view{
namespace mediator{

Void HighlightMediator_obj::__construct(::view::component::Highlight viewComponent)
{
HX_STACK_FRAME("view.mediator.HighlightMediator","new",0x7e841047,"view.mediator.HighlightMediator.new","view/mediator/HighlightMediator.hx",21,0x60e47ce9)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(21)
	super::__construct(HX_CSTRING("HighlightMediator"),viewComponent);
}
;
	return null();
}

//HighlightMediator_obj::~HighlightMediator_obj() { }

Dynamic HighlightMediator_obj::__CreateEmpty() { return  new HighlightMediator_obj; }
hx::ObjectPtr< HighlightMediator_obj > HighlightMediator_obj::__new(::view::component::Highlight viewComponent)
{  hx::ObjectPtr< HighlightMediator_obj > result = new HighlightMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic HighlightMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HighlightMediator_obj > result = new HighlightMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void HighlightMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.HighlightMediator","onRegister",0x5cc1159b,"view.mediator.HighlightMediator.onRegister","view/mediator/HighlightMediator.hx",24,0x60e47ce9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(26)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(26)
		this->appProxy = _g;
		HX_STACK_LINE(27)
		::view::component::Highlight _g1 = this->getView();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g1,null());
	}
return null();
}


Array< ::String > HighlightMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.HighlightMediator","listNotificationInterests",0x59a06e07,"view.mediator.HighlightMediator.listNotificationInterests","view/mediator/HighlightMediator.hx",31,0x60e47ce9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::ENTER_INSTRUCTION_CHANGED).Add(::AppConstants_obj::REGISTER_1_CHANGED).Add(::AppConstants_obj::REGISTER_2_CHANGED).Add(::AppConstants_obj::ACCUMULATOR_CHANGED).Add(::AppConstants_obj::OPCODE_OUT).Add(::AppConstants_obj::SHOW_HIGHLIGHT).Add(::AppConstants_obj::HIDE_HIGHLIGHT).Add(::AppConstants_obj::MODEL_RESET_COMPLETE);
}


Void HighlightMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.HighlightMediator","handleNotification",0x38895eac,"view.mediator.HighlightMediator.handleNotification","view/mediator/HighlightMediator.hx",45,0x60e47ce9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(45)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(48)
			this->getView()->resetVisibilityAll(null());
			HX_STACK_LINE(49)
			::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
			HX_STACK_LINE(49)
			instruction = hx::TCast< model::vo::InstructionVO >::cast(note->getBody());
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				::String _g1 = instruction->codeOpcode;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(50)
				::String _switch_2 = (_g1);
				if (  ( _switch_2==::AppConstants_obj::OPCODE_MOV)){
					HX_STACK_LINE(53)
					this->getView()->setVisibilityMOV(false);
					HX_STACK_LINE(54)
					this->getView()->setVisibilityDecoder(false);
					HX_STACK_LINE(55)
					this->getView()->setVisibilityMultiplexer(false);
					HX_STACK_LINE(56)
					this->checkForAddressCover(instruction->asmAddress);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_LDI)){
					HX_STACK_LINE(58)
					this->getView()->setVisibilityLDI(false);
					HX_STACK_LINE(59)
					this->getView()->setVisibilityEnabler2(false);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_ALU)){
					HX_STACK_LINE(61)
					this->getView()->setVisibilityALU(false);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_SDA)){
					HX_STACK_LINE(63)
					this->getView()->setVisibilitySDA(false);
					HX_STACK_LINE(64)
					this->getView()->setVisibilityMultiplexer(false);
					HX_STACK_LINE(65)
					this->getView()->setVisibilityRam(false);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_LDA)){
					HX_STACK_LINE(67)
					this->getView()->setVisibilityLDA(false);
					HX_STACK_LINE(68)
					this->getView()->setVisibilityEnabler1(false);
					HX_STACK_LINE(69)
					this->getView()->setVisibilityRam(false);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_INP)){
					HX_STACK_LINE(71)
					this->getView()->setVisibilityINP(false);
					HX_STACK_LINE(72)
					this->getView()->setVisibilityDecoder(false);
					HX_STACK_LINE(73)
					this->getView()->setVisibilityMultiplexer(false);
					HX_STACK_LINE(74)
					this->checkForAddressCover(instruction->asmAddress);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_OUT)){
					HX_STACK_LINE(76)
					this->getView()->setVisibilityOUT(false);
					HX_STACK_LINE(77)
					this->getView()->setVisibilityDecoder(false);
					HX_STACK_LINE(78)
					this->getView()->setVisibilityMultiplexer(false);
					HX_STACK_LINE(79)
					this->getView()->setVisibilityDisplay(false);
					HX_STACK_LINE(80)
					this->checkForAddressCover(instruction->codeAddress);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_JE)){
					HX_STACK_LINE(82)
					this->getView()->setVisibilityJE(false);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_JNE)){
					HX_STACK_LINE(84)
					this->getView()->setVisibilityJNE(false);
				}
				else if (  ( _switch_2==::AppConstants_obj::OPCODE_JMP)){
					HX_STACK_LINE(86)
					this->getView()->setVisibilityJMP(false);
				}
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::ENTER_INSTRUCTION_CHANGED)){
			HX_STACK_LINE(89)
			this->getView()->resetVisibilityAll(null());
		}
		else if (  ( _switch_1==::AppConstants_obj::REGISTER_1_CHANGED)){
			HX_STACK_LINE(91)
			this->getView()->setVisibilityRegister1(false);
		}
		else if (  ( _switch_1==::AppConstants_obj::REGISTER_2_CHANGED)){
			HX_STACK_LINE(93)
			this->getView()->setVisibilityRegister2(false);
		}
		else if (  ( _switch_1==::AppConstants_obj::ACCUMULATOR_CHANGED)){
			HX_STACK_LINE(95)
			this->getView()->setVisibilityAccumulator(false);
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(97)
			this->getView()->resetVisibilityAll(true);
		}
		else if (  ( _switch_1==::AppConstants_obj::SHOW_HIGHLIGHT)){
			HX_STACK_LINE(99)
			this->getView()->set_visible(true);
		}
		else if (  ( _switch_1==::AppConstants_obj::HIDE_HIGHLIGHT)){
			HX_STACK_LINE(101)
			this->getView()->set_visible(false);
		}
	}
return null();
}


Void HighlightMediator_obj::checkForAddressCover( ::String address){
{
		HX_STACK_FRAME("view.mediator.HighlightMediator","checkForAddressCover",0xeb4249dd,"view.mediator.HighlightMediator.checkForAddressCover","view/mediator/HighlightMediator.hx",106,0x60e47ce9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(address,"address")
		HX_STACK_LINE(106)
		::String _switch_3 = (address);
		if (  ( _switch_3==::AppConstants_obj::ADDRESS_ACCUMULATOR)){
			HX_STACK_LINE(108)
			this->getView()->setVisibilityAccumulator(false);
		}
		else if (  ( _switch_3==::AppConstants_obj::ADDRESS_REGISTER1)){
			HX_STACK_LINE(110)
			this->getView()->setVisibilityRegister1(false);
		}
		else if (  ( _switch_3==::AppConstants_obj::ADDRESS_REGISTER2)){
			HX_STACK_LINE(112)
			this->getView()->setVisibilityRegister2(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HighlightMediator_obj,checkForAddressCover,(void))

Void HighlightMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.HighlightMediator","viewReadyHandler",0x2192f765,"view.mediator.HighlightMediator.viewReadyHandler","view/mediator/HighlightMediator.hx",116,0x60e47ce9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(117)
		bool _g = this->appProxy->getShowHighlightOn();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		if (((_g == false))){
			HX_STACK_LINE(118)
			this->getView()->set_visible(false);
		}
		HX_STACK_LINE(120)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("HighlightMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HighlightMediator_obj,viewReadyHandler,(void))

::view::component::Highlight HighlightMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.HighlightMediator","getView",0xb71da182,"view.mediator.HighlightMediator.getView","view/mediator/HighlightMediator.hx",124,0x60e47ce9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(124)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(HighlightMediator_obj,getView,return )

::String HighlightMediator_obj::NAME;


HighlightMediator_obj::HighlightMediator_obj()
{
}

void HighlightMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HighlightMediator);
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HighlightMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HighlightMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic HighlightMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HighlightMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(HighlightMediator_obj,appProxy),HX_CSTRING("appProxy")},
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
	HX_MARK_MEMBER_NAME(HighlightMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HighlightMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HighlightMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HighlightMediator_obj::NAME,"NAME");
};

#endif

Class HighlightMediator_obj::__mClass;

void HighlightMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.HighlightMediator"), hx::TCanCast< HighlightMediator_obj> ,sStaticFields,sMemberFields,
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

void HighlightMediator_obj::__boot()
{
	NAME= HX_CSTRING("HighlightMediator");
}

} // end namespace view
} // end namespace mediator
