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
#ifndef INCLUDED_model_proxy_SnapshotProxy
#include <model/proxy/SnapshotProxy.h>
#endif
#ifndef INCLUDED_model_vo_DecHexVO
#include <model/vo/DecHexVO.h>
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
#ifndef INCLUDED_view_component_EnterInstruction
#include <view/component/EnterInstruction.h>
#endif
#ifndef INCLUDED_view_mediator_EnterInstructionMediator
#include <view/mediator/EnterInstructionMediator.h>
#endif
namespace view{
namespace mediator{

Void EnterInstructionMediator_obj::__construct(::view::component::EnterInstruction viewComponent)
{
HX_STACK_FRAME("view.mediator.EnterInstructionMediator","new",0x69d2700d,"view.mediator.EnterInstructionMediator.new","view/mediator/EnterInstructionMediator.hx",29,0xbe0d2423)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(29)
	super::__construct(HX_CSTRING("EnterInstructionMediator"),viewComponent);
}
;
	return null();
}

//EnterInstructionMediator_obj::~EnterInstructionMediator_obj() { }

Dynamic EnterInstructionMediator_obj::__CreateEmpty() { return  new EnterInstructionMediator_obj; }
hx::ObjectPtr< EnterInstructionMediator_obj > EnterInstructionMediator_obj::__new(::view::component::EnterInstruction viewComponent)
{  hx::ObjectPtr< EnterInstructionMediator_obj > result = new EnterInstructionMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic EnterInstructionMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnterInstructionMediator_obj > result = new EnterInstructionMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void EnterInstructionMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.EnterInstructionMediator","onRegister",0x8c90da95,"view.mediator.EnterInstructionMediator.onRegister","view/mediator/EnterInstructionMediator.hx",32,0xbe0d2423)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(34)
		this->getView()->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(35)
		this->getView()->set_y(((int)5 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(36)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(36)
		this->appProxy = _g;
		HX_STACK_LINE(37)
		::model::proxy::ClockProxy _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(37)
		_g1 = hx::TCast< model::proxy::ClockProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ClockProxy_obj::NAME));
		HX_STACK_LINE(37)
		this->clockProxy = _g1;
		HX_STACK_LINE(38)
		::model::proxy::ProgramProxy _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(38)
		_g2 = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(38)
		this->programProxy = _g2;
		HX_STACK_LINE(39)
		::model::proxy::SnapshotProxy _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(39)
		_g3 = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(39)
		this->snapshotProxy = _g3;
		HX_STACK_LINE(40)
		::view::component::EnterInstruction _g4 = this->getView();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(40)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g4,null());
	}
return null();
}


Void EnterInstructionMediator_obj::onRemove( ){
{
		HX_STACK_FRAME("view.mediator.EnterInstructionMediator","onRemove",0x3c13fff6,"view.mediator.EnterInstructionMediator.onRemove","view/mediator/EnterInstructionMediator.hx",44,0xbe0d2423)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		this->getView()->destroy();
	}
return null();
}


Array< ::String > EnterInstructionMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.EnterInstructionMediator","listNotificationInterests",0xaf35524d,"view.mediator.EnterInstructionMediator.listNotificationInterests","view/mediator/EnterInstructionMediator.hx",48,0xbe0d2423)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::PLAY).Add(::AppConstants_obj::MODEL_RESET_COMPLETE).Add(::AppConstants_obj::POWER_OFF);
}


Void EnterInstructionMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.EnterInstructionMediator","handleNotification",0x237dada6,"view.mediator.EnterInstructionMediator.handleNotification","view/mediator/EnterInstructionMediator.hx",57,0xbe0d2423)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(57)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(60)
			this->getView()->hideBarriere();
		}
		else if (  ( _switch_1==::AppConstants_obj::POWER_OFF)){
			HX_STACK_LINE(62)
			this->destroy();
		}
		else if (  ( _switch_1==::AppConstants_obj::PLAY)){
			HX_STACK_LINE(64)
			this->destroy();
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(66)
			this->destroy();
		}
	}
return null();
}


Void EnterInstructionMediator_obj::dataEventHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.EnterInstructionMediator","dataEventHandler",0xba89384d,"view.mediator.EnterInstructionMediator.dataEventHandler","view/mediator/EnterInstructionMediator.hx",71,0xbe0d2423)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(71)
		if (((event->data->__Field(HX_CSTRING("id"),true) == HX_CSTRING("closeButton")))){
			HX_STACK_LINE(72)
			this->destroy();
		}
		else{
			HX_STACK_LINE(74)
			this->appProxy->setEnterInstructionOutputValid(false);
			HX_STACK_LINE(75)
			this->sendNotification(::AppConstants_obj::ENTER_INSTRUCTION_CHANGED,null(),null());
			HX_STACK_LINE(76)
			::String opc = HX_CSTRING("");		HX_STACK_VAR(opc,"opc");
			HX_STACK_LINE(77)
			::String addr = HX_CSTRING("");		HX_STACK_VAR(addr,"addr");
			HX_STACK_LINE(78)
			if (((event->data->__Field(HX_CSTRING("id"),true) == HX_CSTRING("opcodeMenu")))){
				HX_STACK_LINE(79)
				opc = event->data->__Field(HX_CSTRING("opcode"),true);
				HX_STACK_LINE(80)
				addr = event->data->__Field(HX_CSTRING("address"),true);
				HX_STACK_LINE(81)
				this->getView()->showLines(opc,addr);
			}
			else{
				HX_STACK_LINE(83)
				if ((event->data->__Field(HX_CSTRING("on"),true))){
					HX_STACK_LINE(84)
					this->getView()->hideLine(event->data->__Field(HX_CSTRING("id"),true));
				}
				else{
					HX_STACK_LINE(86)
					this->getView()->showLine(event->data->__Field(HX_CSTRING("id"),true));
				}
				HX_STACK_LINE(88)
				::String _g = this->getView()->getOpcode();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(88)
				opc = _g;
				HX_STACK_LINE(89)
				::String _g1 = this->getView()->getAddress();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(89)
				addr = _g1;
			}
			HX_STACK_LINE(91)
			::String opcode = HX_CSTRING("?");		HX_STACK_VAR(opcode,"opcode");
			HX_STACK_LINE(92)
			::String address = HX_CSTRING("?");		HX_STACK_VAR(address,"address");
			HX_STACK_LINE(93)
			::String _switch_2 = (opc);
			if (  ( _switch_2==::AppConstants_obj::OPCODE_NOP)){
				HX_STACK_LINE(95)
				opcode = HX_CSTRING("NOP");
				HX_STACK_LINE(96)
				address = HX_CSTRING("");
				HX_STACK_LINE(97)
				if (((addr != HX_CSTRING("0000")))){
					HX_STACK_LINE(98)
					opcode = HX_CSTRING("?");
					HX_STACK_LINE(99)
					address = HX_CSTRING("?");
				}
			}
			else if (  ( _switch_2==::AppConstants_obj::OPCODE_MOV)){
				HX_STACK_LINE(102)
				opcode = HX_CSTRING("MOV");
				HX_STACK_LINE(103)
				::String _switch_3 = (addr);
				if (  ( _switch_3==::AppConstants_obj::ADDRESS_REGISTER1)){
					HX_STACK_LINE(105)
					address = HX_CSTRING("R1");
				}
				else if (  ( _switch_3==::AppConstants_obj::ADDRESS_REGISTER2)){
					HX_STACK_LINE(107)
					address = HX_CSTRING("R2");
				}
			}
			else if (  ( _switch_2==::AppConstants_obj::OPCODE_LDI)){
				HX_STACK_LINE(110)
				opcode = HX_CSTRING("LDI");
				struct _Function_3_1{
					inline static Float Block( ::String &addr){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/mediator/EnterInstructionMediator.hx",111,0xbe0d2423)
						{
							HX_STACK_LINE(111)
							int _int = ::utilities::NumberFormat_obj::binaryToDecimal(addr)->dec;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(111)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(111)
				::String _g2 = ::Std_obj::string(_Function_3_1::Block(addr));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(111)
				address = _g2;
			}
			else if (  ( _switch_2==::AppConstants_obj::OPCODE_ALU)){
				HX_STACK_LINE(113)
				opcode = HX_CSTRING("(ALU)");
				HX_STACK_LINE(114)
				::String _switch_4 = (addr);
				if (  ( _switch_4==::AppConstants_obj::ADDRESS_ADD)){
					HX_STACK_LINE(116)
					opcode = HX_CSTRING("ADD");
					HX_STACK_LINE(117)
					address = HX_CSTRING("<---");
				}
				else if (  ( _switch_4==::AppConstants_obj::ADDRESS_SUB)){
					HX_STACK_LINE(119)
					opcode = HX_CSTRING("SUB");
					HX_STACK_LINE(120)
					address = HX_CSTRING("<---");
				}
				else if (  ( _switch_4==::AppConstants_obj::ADDRESS_INC)){
					HX_STACK_LINE(122)
					opcode = HX_CSTRING("INC");
					HX_STACK_LINE(123)
					address = HX_CSTRING("<---");
				}
				else if (  ( _switch_4==::AppConstants_obj::ADDRESS_DEC)){
					HX_STACK_LINE(125)
					opcode = HX_CSTRING("DEC");
					HX_STACK_LINE(126)
					address = HX_CSTRING("<---");
				}
			}
			else if (  ( _switch_2==::AppConstants_obj::OPCODE_SDA)){
				HX_STACK_LINE(130)
				opcode = HX_CSTRING("SDA");
				struct _Function_3_1{
					inline static Float Block( ::String &addr){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/mediator/EnterInstructionMediator.hx",131,0xbe0d2423)
						{
							HX_STACK_LINE(131)
							int _int = ::utilities::NumberFormat_obj::binaryToDecimal(addr)->dec;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(131)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(131)
				::String _g3 = ::Std_obj::string(_Function_3_1::Block(addr));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(131)
				address = _g3;
			}
			else if (  ( _switch_2==::AppConstants_obj::OPCODE_LDA)){
				HX_STACK_LINE(133)
				opcode = HX_CSTRING("LDA");
				struct _Function_3_1{
					inline static Float Block( ::String &addr){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/mediator/EnterInstructionMediator.hx",134,0xbe0d2423)
						{
							HX_STACK_LINE(134)
							int _int = ::utilities::NumberFormat_obj::binaryToDecimal(addr)->dec;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(134)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(134)
				::String _g4 = ::Std_obj::string(_Function_3_1::Block(addr));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(134)
				address = _g4;
			}
			else if (  ( _switch_2==::AppConstants_obj::OPCODE_INP)){
				HX_STACK_LINE(136)
				opcode = HX_CSTRING("INP");
				HX_STACK_LINE(137)
				::String _switch_5 = (addr);
				if (  ( _switch_5==::AppConstants_obj::ADDRESS_ACCUMULATOR)){
					HX_STACK_LINE(139)
					address = HX_CSTRING("A");
				}
				else if (  ( _switch_5==::AppConstants_obj::ADDRESS_REGISTER1)){
					HX_STACK_LINE(141)
					address = HX_CSTRING("R1");
				}
				else if (  ( _switch_5==::AppConstants_obj::ADDRESS_REGISTER2)){
					HX_STACK_LINE(143)
					address = HX_CSTRING("R2");
				}
			}
			else if (  ( _switch_2==::AppConstants_obj::OPCODE_OUT)){
				HX_STACK_LINE(146)
				opcode = HX_CSTRING("OUT");
				HX_STACK_LINE(147)
				::String _switch_6 = (addr);
				if (  ( _switch_6==HX_CSTRING(""))){
					HX_STACK_LINE(149)
					addr = HX_CSTRING("0000");
					HX_STACK_LINE(150)
					address = HX_CSTRING("A");
				}
				else if (  ( _switch_6==::AppConstants_obj::ADDRESS_ACCUMULATOR)){
					HX_STACK_LINE(152)
					address = HX_CSTRING("A");
				}
				else if (  ( _switch_6==::AppConstants_obj::ADDRESS_REGISTER1)){
					HX_STACK_LINE(154)
					address = HX_CSTRING("R1");
				}
				else if (  ( _switch_6==::AppConstants_obj::ADDRESS_REGISTER2)){
					HX_STACK_LINE(156)
					address = HX_CSTRING("R2");
				}
			}
			else if (  ( _switch_2==::AppConstants_obj::OPCODE_JE)){
				HX_STACK_LINE(159)
				opcode = HX_CSTRING("JE");
				struct _Function_3_1{
					inline static Float Block( ::String &addr){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/mediator/EnterInstructionMediator.hx",160,0xbe0d2423)
						{
							HX_STACK_LINE(160)
							int _int = ::utilities::NumberFormat_obj::binaryToDecimal(addr)->dec;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(160)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(160)
				::String _g5 = ::Std_obj::string(_Function_3_1::Block(addr));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(160)
				address = _g5;
			}
			else if (  ( _switch_2==::AppConstants_obj::OPCODE_JNE)){
				HX_STACK_LINE(162)
				opcode = HX_CSTRING("JNE");
				struct _Function_3_1{
					inline static Float Block( ::String &addr){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/mediator/EnterInstructionMediator.hx",163,0xbe0d2423)
						{
							HX_STACK_LINE(163)
							int _int = ::utilities::NumberFormat_obj::binaryToDecimal(addr)->dec;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(163)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(163)
				::String _g6 = ::Std_obj::string(_Function_3_1::Block(addr));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(163)
				address = _g6;
			}
			else if (  ( _switch_2==::AppConstants_obj::OPCODE_JMP)){
				HX_STACK_LINE(165)
				opcode = HX_CSTRING("JMP");
				struct _Function_3_1{
					inline static Float Block( ::String &addr){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/mediator/EnterInstructionMediator.hx",166,0xbe0d2423)
						{
							HX_STACK_LINE(166)
							int _int = ::utilities::NumberFormat_obj::binaryToDecimal(addr)->dec;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(166)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(166)
				::String _g7 = ::Std_obj::string(_Function_3_1::Block(addr));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(166)
				address = _g7;
			}
			HX_STACK_LINE(168)
			this->getView()->setTfOpcode(opcode);
			HX_STACK_LINE(169)
			this->getView()->setTfAddress(address);
			HX_STACK_LINE(170)
			if (((bool((opcode != HX_CSTRING("?"))) && bool((address != HX_CSTRING("?")))))){
				HX_STACK_LINE(171)
				::model::vo::InstructionVO vo = ::model::vo::InstructionVO_obj::__new((int)0,((opcode + HX_CSTRING(" ")) + address));		HX_STACK_VAR(vo,"vo");
				HX_STACK_LINE(172)
				this->programProxy->setManualInstruction(vo);
				HX_STACK_LINE(173)
				this->appProxy->setEnterInstructionOutputValid(true);
			}
			HX_STACK_LINE(175)
			this->clockProxy->setClockOff();
			HX_STACK_LINE(176)
			bool _g8 = this->clockProxy->getClockOn();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(176)
			this->sendNotification(::AppConstants_obj::CLOCK_SIGNAL,_g8,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstructionMediator_obj,dataEventHandler,(void))

Void EnterInstructionMediator_obj::destroy( ){
{
		HX_STACK_FRAME("view.mediator.EnterInstructionMediator","destroy",0x7792a727,"view.mediator.EnterInstructionMediator.destroy","view/mediator/EnterInstructionMediator.hx",180,0xbe0d2423)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		this->appProxy->setEnterInstructionActive(false);
		HX_STACK_LINE(182)
		this->get_facade()->removeMediator(HX_CSTRING("EnterInstructionMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnterInstructionMediator_obj,destroy,(void))

Void EnterInstructionMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.EnterInstructionMediator","viewReadyHandler",0xa183b3df,"view.mediator.EnterInstructionMediator.viewReadyHandler","view/mediator/EnterInstructionMediator.hx",186,0xbe0d2423)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(186)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("EnterInstructionMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnterInstructionMediator_obj,viewReadyHandler,(void))

::view::component::EnterInstruction EnterInstructionMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.EnterInstructionMediator","getView",0x73de5c48,"view.mediator.EnterInstructionMediator.getView","view/mediator/EnterInstructionMediator.hx",190,0xbe0d2423)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(EnterInstructionMediator_obj,getView,return )

::String EnterInstructionMediator_obj::NAME;


EnterInstructionMediator_obj::EnterInstructionMediator_obj()
{
}

void EnterInstructionMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnterInstructionMediator);
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	HX_MARK_MEMBER_NAME(clockProxy,"clockProxy");
	HX_MARK_MEMBER_NAME(programProxy,"programProxy");
	HX_MARK_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EnterInstructionMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	HX_VISIT_MEMBER_NAME(clockProxy,"clockProxy");
	HX_VISIT_MEMBER_NAME(programProxy,"programProxy");
	HX_VISIT_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EnterInstructionMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { return appProxy; }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return onRemove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clockProxy") ) { return clockProxy; }
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"programProxy") ) { return programProxy; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { return snapshotProxy; }
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

Dynamic EnterInstructionMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { snapshotProxy=inValue.Cast< ::model::proxy::SnapshotProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnterInstructionMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appProxy"));
	outFields->push(HX_CSTRING("clockProxy"));
	outFields->push(HX_CSTRING("programProxy"));
	outFields->push(HX_CSTRING("snapshotProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(EnterInstructionMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{hx::fsObject /*::model::proxy::ClockProxy*/ ,(int)offsetof(EnterInstructionMediator_obj,clockProxy),HX_CSTRING("clockProxy")},
	{hx::fsObject /*::model::proxy::ProgramProxy*/ ,(int)offsetof(EnterInstructionMediator_obj,programProxy),HX_CSTRING("programProxy")},
	{hx::fsObject /*::model::proxy::SnapshotProxy*/ ,(int)offsetof(EnterInstructionMediator_obj,snapshotProxy),HX_CSTRING("snapshotProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("appProxy"),
	HX_CSTRING("clockProxy"),
	HX_CSTRING("programProxy"),
	HX_CSTRING("snapshotProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("onRemove"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("dataEventHandler"),
	HX_CSTRING("destroy"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnterInstructionMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EnterInstructionMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnterInstructionMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnterInstructionMediator_obj::NAME,"NAME");
};

#endif

Class EnterInstructionMediator_obj::__mClass;

void EnterInstructionMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.EnterInstructionMediator"), hx::TCanCast< EnterInstructionMediator_obj> ,sStaticFields,sMemberFields,
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

void EnterInstructionMediator_obj::__boot()
{
	NAME= HX_CSTRING("EnterInstructionMediator");
}

} // end namespace view
} // end namespace mediator
