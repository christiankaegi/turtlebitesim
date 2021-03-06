#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
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
#ifndef INCLUDED_model_vo_FrequencyVO
#include <model/vo/FrequencyVO.h>
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
#ifndef INCLUDED_view_component_MainMenu
#include <view/component/MainMenu.h>
#endif
#ifndef INCLUDED_view_mediator_MainMenuMediator
#include <view/mediator/MainMenuMediator.h>
#endif
namespace view{
namespace mediator{

Void MainMenuMediator_obj::__construct(::view::component::MainMenu viewComponent)
{
HX_STACK_FRAME("view.mediator.MainMenuMediator","new",0x9f128baf,"view.mediator.MainMenuMediator.new","view/mediator/MainMenuMediator.hx",20,0x5d24b2c1)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(20)
	super::__construct(HX_CSTRING("MainMenuMediator"),viewComponent);
}
;
	return null();
}

//MainMenuMediator_obj::~MainMenuMediator_obj() { }

Dynamic MainMenuMediator_obj::__CreateEmpty() { return  new MainMenuMediator_obj; }
hx::ObjectPtr< MainMenuMediator_obj > MainMenuMediator_obj::__new(::view::component::MainMenu viewComponent)
{  hx::ObjectPtr< MainMenuMediator_obj > result = new MainMenuMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic MainMenuMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainMenuMediator_obj > result = new MainMenuMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MainMenuMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.MainMenuMediator","onRegister",0x03465733,"view.mediator.MainMenuMediator.onRegister","view/mediator/MainMenuMediator.hx",23,0x5d24b2c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		this->getView()->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(25)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(26)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(26)
		this->appProxy = _g;
		HX_STACK_LINE(27)
		::model::proxy::ClockProxy _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		_g1 = hx::TCast< model::proxy::ClockProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ClockProxy_obj::NAME));
		HX_STACK_LINE(27)
		this->clockProxy = _g1;
		HX_STACK_LINE(28)
		::model::proxy::ProgramProxy _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(28)
		_g2 = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(28)
		this->programProxy = _g2;
		HX_STACK_LINE(29)
		::view::component::MainMenu _g3 = this->getView();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(29)
		this->sendNotification(::AppConstants_obj::ADD_TO_NAVIG_VIEW,_g3,null());
	}
return null();
}


Array< ::String > MainMenuMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.MainMenuMediator","listNotificationInterests",0x4fc4b76f,"view.mediator.MainMenuMediator.listNotificationInterests","view/mediator/MainMenuMediator.hx",33,0x5d24b2c1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::PLAY).Add(::AppConstants_obj::PAUSE).Add(::AppConstants_obj::MANUAL_MODE_ON).Add(::AppConstants_obj::MODEL_RESET_COMPLETE);
}


Void MainMenuMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.MainMenuMediator","handleNotification",0xf70df844,"view.mediator.MainMenuMediator.handleNotification","view/mediator/MainMenuMediator.hx",43,0x5d24b2c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(43)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(46)
			::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
			HX_STACK_LINE(46)
			instruction = hx::TCast< model::vo::InstructionVO >::cast(this->programProxy->getInstruction());
			HX_STACK_LINE(47)
			::String _g1 = ::Std_obj::string(instruction->pointer);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(47)
			this->getView()->setProgramPointer(_g1);
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(49)
			this->getView()->setProgramPointer(HX_CSTRING(""));
			HX_STACK_LINE(50)
			this->getView()->setPlay(false);
			HX_STACK_LINE(51)
			this->getView()->setHertzActive(false,null());
			HX_STACK_LINE(52)
			this->getView()->setHertz(this->clockProxy->getCurrentFrequency()->label);
			HX_STACK_LINE(53)
			this->getView()->setShowFlowActive(false);
			HX_STACK_LINE(54)
			this->getView()->setShowHighlightActive(false);
			HX_STACK_LINE(55)
			this->getView()->setShowUnitsActive(false);
		}
		else if (  ( _switch_1==::AppConstants_obj::PAUSE)){
			HX_STACK_LINE(57)
			this->getView()->setPlay(false);
		}
		else if (  ( _switch_1==::AppConstants_obj::PLAY)){
			HX_STACK_LINE(59)
			this->getView()->setPlay(true);
		}
		else if (  ( _switch_1==::AppConstants_obj::MANUAL_MODE_ON)){
			HX_STACK_LINE(61)
			this->getView()->setPlay(false);
		}
	}
return null();
}


Void MainMenuMediator_obj::dataEventHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.MainMenuMediator","dataEventHandler",0xb6c2ff6b,"view.mediator.MainMenuMediator.dataEventHandler","view/mediator/MainMenuMediator.hx",65,0x5d24b2c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(66)
		::String id = event->data->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(67)
		this->resetSubmenus(id);
		HX_STACK_LINE(68)
		::String _switch_2 = (id);
		if (  ( _switch_2==HX_CSTRING("resetButton"))){
			HX_STACK_LINE(70)
			this->sendNotification(::AppConstants_obj::RESET,null(),null());
		}
		else if (  ( _switch_2==HX_CSTRING("powerButton"))){
			HX_STACK_LINE(72)
			bool _g = !(this->appProxy->getPowerOn());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(72)
			this->appProxy->setPowerOn(_g);
			HX_STACK_LINE(73)
			if ((this->appProxy->getPowerOn())){
				HX_STACK_LINE(74)
				this->getView()->setPowerOn(true);
				HX_STACK_LINE(75)
				this->sendNotification(::AppConstants_obj::POWER_ON,null(),null());
			}
			else{
				HX_STACK_LINE(77)
				this->getView()->setPowerOn(false);
				HX_STACK_LINE(78)
				this->sendNotification(::AppConstants_obj::POWER_OFF,null(),null());
				HX_STACK_LINE(79)
				this->appProxy->setIsZoomed(false);
				HX_STACK_LINE(80)
				this->getView()->setZoomActive(false);
				HX_STACK_LINE(81)
				this->sendNotification(::AppConstants_obj::ZOOM_OUT,null(),null());
				HX_STACK_LINE(82)
				this->appProxy->setShowHightlightOn(false);
				HX_STACK_LINE(83)
				this->getView()->setShowHighlightActive(false);
				HX_STACK_LINE(84)
				this->sendNotification(::AppConstants_obj::HIDE_HIGHLIGHT,null(),null());
				HX_STACK_LINE(85)
				this->appProxy->setShowUnitsOn(false);
				HX_STACK_LINE(86)
				this->getView()->setShowUnitsActive(false);
				HX_STACK_LINE(87)
				this->sendNotification(::AppConstants_obj::HIDE_OVERLAY_UNITS,null(),null());
				HX_STACK_LINE(88)
				this->appProxy->setShowFlowOn(false);
				HX_STACK_LINE(89)
				this->getView()->setShowFlowActive(false);
				HX_STACK_LINE(90)
				this->sendNotification(::AppConstants_obj::HIDE_OVERLAY_FLOW,null(),null());
			}
		}
		else if (  ( _switch_2==HX_CSTRING("manualClockButton"))){
			HX_STACK_LINE(93)
			this->sendNotification(::AppConstants_obj::MANUAL_MODE_ON,null(),null());
			HX_STACK_LINE(94)
			if ((this->appProxy->getEnterInstructionOutputValid())){
				HX_STACK_LINE(95)
				bool _g1 = this->clockProxy->getClockOn();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(95)
				this->sendNotification(::AppConstants_obj::CLOCK_SIGNAL,_g1,null());
			}
		}
		else if (  ( _switch_2==HX_CSTRING("playButton"))){
			HX_STACK_LINE(98)
			this->getView()->setHertz(this->clockProxy->getCurrentFrequency()->label);
			HX_STACK_LINE(99)
			if ((this->appProxy->getAutoClockOn())){
				HX_STACK_LINE(100)
				this->sendNotification(::AppConstants_obj::PAUSE,null(),null());
			}
			else{
				HX_STACK_LINE(102)
				this->sendNotification(::AppConstants_obj::PLAY,null(),null());
			}
		}
		else if (  ( _switch_2==HX_CSTRING("hertzButton"))){
			HX_STACK_LINE(105)
			if ((this->appProxy->getHertzSubmenuOn())){
				HX_STACK_LINE(106)
				this->appProxy->setHertzSubmenuOn(false);
				HX_STACK_LINE(107)
				this->getView()->setHertzActive(false,null());
			}
			else{
				HX_STACK_LINE(109)
				this->appProxy->setHertzSubmenuOn(true);
				HX_STACK_LINE(110)
				int _g2 = this->clockProxy->getCurrentFrequencyPointer();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(110)
				this->getView()->setHertzActive(true,_g2);
			}
		}
		else if (  ( _switch_2==HX_CSTRING("componentsButton"))){
			HX_STACK_LINE(113)
			if ((this->appProxy->getComponentsSubmenuOn())){
				HX_STACK_LINE(114)
				this->appProxy->setComponentsSubmenuOn(false);
				HX_STACK_LINE(115)
				this->getView()->setComponentsActive(false);
			}
			else{
				HX_STACK_LINE(117)
				this->appProxy->setComponentsSubmenuOn(true);
				HX_STACK_LINE(118)
				this->getView()->setComponentsActive(true);
			}
		}
		else if (  ( _switch_2==HX_CSTRING("zoomButton"))){
			HX_STACK_LINE(121)
			if ((this->appProxy->getIsZoomed())){
				HX_STACK_LINE(122)
				this->appProxy->setIsZoomed(false);
				HX_STACK_LINE(123)
				this->getView()->setZoomActive(false);
				HX_STACK_LINE(124)
				this->sendNotification(::AppConstants_obj::ZOOM_OUT,null(),null());
			}
			else{
				HX_STACK_LINE(126)
				this->appProxy->setIsZoomed(true);
				HX_STACK_LINE(127)
				this->getView()->setZoomActive(true);
				HX_STACK_LINE(128)
				this->sendNotification(::AppConstants_obj::ZOOM_IN,null(),null());
			}
		}
		else if (  ( _switch_2==HX_CSTRING("showUnitsButton"))){
			HX_STACK_LINE(131)
			if ((this->appProxy->getShowUnitsOn())){
				HX_STACK_LINE(132)
				this->appProxy->setShowUnitsOn(false);
				HX_STACK_LINE(133)
				this->getView()->setShowUnitsActive(false);
				HX_STACK_LINE(134)
				this->sendNotification(::AppConstants_obj::HIDE_OVERLAY_UNITS,null(),null());
			}
			else{
				HX_STACK_LINE(136)
				this->appProxy->setShowUnitsOn(true);
				HX_STACK_LINE(137)
				this->getView()->setShowUnitsActive(true);
				HX_STACK_LINE(138)
				this->sendNotification(::AppConstants_obj::SHOW_OVERLAY_UNITS,null(),null());
			}
		}
		else if (  ( _switch_2==HX_CSTRING("showFlowButton"))){
			HX_STACK_LINE(141)
			if ((this->appProxy->getShowFlowOn())){
				HX_STACK_LINE(142)
				this->appProxy->setShowFlowOn(false);
				HX_STACK_LINE(143)
				this->getView()->setShowFlowActive(false);
				HX_STACK_LINE(144)
				this->sendNotification(::AppConstants_obj::HIDE_OVERLAY_FLOW,null(),null());
			}
			else{
				HX_STACK_LINE(146)
				this->appProxy->setShowFlowOn(true);
				HX_STACK_LINE(147)
				this->getView()->setShowFlowActive(true);
				HX_STACK_LINE(148)
				this->sendNotification(::AppConstants_obj::SHOW_OVERLAY_FLOW,null(),null());
			}
		}
		else if (  ( _switch_2==HX_CSTRING("showHighlightButton"))){
			HX_STACK_LINE(151)
			if ((this->appProxy->getShowHighlightOn())){
				HX_STACK_LINE(152)
				this->appProxy->setShowHightlightOn(false);
				HX_STACK_LINE(153)
				this->getView()->setShowHighlightActive(false);
				HX_STACK_LINE(154)
				this->sendNotification(::AppConstants_obj::HIDE_HIGHLIGHT,null(),null());
			}
			else{
				HX_STACK_LINE(156)
				this->appProxy->setShowHightlightOn(true);
				HX_STACK_LINE(157)
				this->getView()->setShowHighlightActive(true);
				HX_STACK_LINE(158)
				this->sendNotification(::AppConstants_obj::SHOW_HIGHLIGHT,null(),null());
			}
		}
		else if (  ( _switch_2==HX_CSTRING("editRomButton"))){
			HX_STACK_LINE(161)
			this->sendNotification(::AppConstants_obj::EDIT_ROM,null(),null());
		}
		else if (  ( _switch_2==HX_CSTRING("architectureButton"))){
			HX_STACK_LINE(163)
			this->sendNotification(::AppConstants_obj::SHOW_ARCHITECTURE,null(),null());
		}
		HX_STACK_LINE(166)
		::String _g3 = id.substr((int)0,(int)18);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(166)
		if (((_g3 == HX_CSTRING("hertzSubmenuButton")))){
			HX_STACK_LINE(167)
			::String _g4 = id.substr((int)18,null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(167)
			int pos = ::Std_obj::parseInt(_g4);		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(168)
			this->clockProxy->changeClockSpeed(pos);
			HX_STACK_LINE(169)
			this->appProxy->setHertzSubmenuOn(false);
			HX_STACK_LINE(170)
			this->getView()->setHertzActive(false,null());
			HX_STACK_LINE(171)
			this->getView()->setHertz(this->clockProxy->getCurrentFrequency()->label);
		}
		else{
			HX_STACK_LINE(172)
			::String _g5 = id.substr((int)0,(int)23);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(172)
			if (((_g5 == HX_CSTRING("componentsSubmenuButton")))){
				HX_STACK_LINE(173)
				::String _g6 = id.substr((int)23,null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(173)
				int pos = ::Std_obj::parseInt(_g6);		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(175)
				if (((pos == (int)8))){
					HX_STACK_LINE(176)
					this->sendNotification(::AppConstants_obj::DETAIL_ACCUMULATOR,null(),null());
				}
				HX_STACK_LINE(178)
				this->appProxy->setComponentsSubmenuOn(false);
				HX_STACK_LINE(179)
				this->getView()->setComponentsActive(false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuMediator_obj,dataEventHandler,(void))

Void MainMenuMediator_obj::resetSubmenus( ::String id){
{
		HX_STACK_FRAME("view.mediator.MainMenuMediator","resetSubmenus",0x0d8e0d72,"view.mediator.MainMenuMediator.resetSubmenus","view/mediator/MainMenuMediator.hx",184,0x5d24b2c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(185)
		this->getView()->setHertzActive(false,null());
		HX_STACK_LINE(186)
		this->getView()->setComponentsActive(false);
		HX_STACK_LINE(187)
		if (((id != HX_CSTRING("componentsButton")))){
			HX_STACK_LINE(188)
			this->appProxy->setComponentsSubmenuOn(false);
		}
		HX_STACK_LINE(190)
		if (((id != HX_CSTRING("hertzButton")))){
			HX_STACK_LINE(191)
			this->appProxy->setHertzSubmenuOn(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuMediator_obj,resetSubmenus,(void))

Void MainMenuMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.MainMenuMediator","viewReadyHandler",0x9dbd7afd,"view.mediator.MainMenuMediator.viewReadyHandler","view/mediator/MainMenuMediator.hx",195,0x5d24b2c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(196)
		this->getView()->setHertz(this->clockProxy->getCurrentFrequency()->label);
		HX_STACK_LINE(197)
		Array< ::Dynamic > _g = this->clockProxy->getFrequencies();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(197)
		this->getView()->createHertzSubmenu(_g);
		HX_STACK_LINE(198)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("MainMenuMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuMediator_obj,viewReadyHandler,(void))

::view::component::MainMenu MainMenuMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.MainMenuMediator","getView",0x61b1f0ea,"view.mediator.MainMenuMediator.getView","view/mediator/MainMenuMediator.hx",202,0x5d24b2c1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(202)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(MainMenuMediator_obj,getView,return )

::String MainMenuMediator_obj::NAME;


MainMenuMediator_obj::MainMenuMediator_obj()
{
}

void MainMenuMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuMediator);
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	HX_MARK_MEMBER_NAME(clockProxy,"clockProxy");
	HX_MARK_MEMBER_NAME(programProxy,"programProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	HX_VISIT_MEMBER_NAME(clockProxy,"clockProxy");
	HX_VISIT_MEMBER_NAME(programProxy,"programProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MainMenuMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { return appProxy; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clockProxy") ) { return clockProxy; }
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"programProxy") ) { return programProxy; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resetSubmenus") ) { return resetSubmenus_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dataEventHandler") ) { return dataEventHandler_dyn(); }
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

Dynamic MainMenuMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clockProxy") ) { clockProxy=inValue.Cast< ::model::proxy::ClockProxy >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"programProxy") ) { programProxy=inValue.Cast< ::model::proxy::ProgramProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainMenuMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appProxy"));
	outFields->push(HX_CSTRING("clockProxy"));
	outFields->push(HX_CSTRING("programProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(MainMenuMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{hx::fsObject /*::model::proxy::ClockProxy*/ ,(int)offsetof(MainMenuMediator_obj,clockProxy),HX_CSTRING("clockProxy")},
	{hx::fsObject /*::model::proxy::ProgramProxy*/ ,(int)offsetof(MainMenuMediator_obj,programProxy),HX_CSTRING("programProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("appProxy"),
	HX_CSTRING("clockProxy"),
	HX_CSTRING("programProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("dataEventHandler"),
	HX_CSTRING("resetSubmenus"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainMenuMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MainMenuMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainMenuMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MainMenuMediator_obj::NAME,"NAME");
};

#endif

Class MainMenuMediator_obj::__mClass;

void MainMenuMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.MainMenuMediator"), hx::TCanCast< MainMenuMediator_obj> ,sStaticFields,sMemberFields,
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

void MainMenuMediator_obj::__boot()
{
	NAME= HX_CSTRING("MainMenuMediator");
}

} // end namespace view
} // end namespace mediator
