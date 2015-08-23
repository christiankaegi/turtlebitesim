#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
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
#ifndef INCLUDED_utilities_NumberFormat
#include <utilities/NumberFormat.h>
#endif
#ifndef INCLUDED_view_component_basis_Gates
#include <view/component/basis/Gates.h>
#endif
#ifndef INCLUDED_view_mediator_basis_GatesMediator
#include <view/mediator/basis/GatesMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void GatesMediator_obj::__construct(::view::component::basis::Gates viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.GatesMediator","new",0x94f7ddeb,"view.mediator.basis.GatesMediator.new","view/mediator/basis/GatesMediator.hx",17,0x5ca2b9c6)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(17)
	super::__construct(HX_CSTRING("GatesMediator"),viewComponent);
}
;
	return null();
}

//GatesMediator_obj::~GatesMediator_obj() { }

Dynamic GatesMediator_obj::__CreateEmpty() { return  new GatesMediator_obj; }
hx::ObjectPtr< GatesMediator_obj > GatesMediator_obj::__new(::view::component::basis::Gates viewComponent)
{  hx::ObjectPtr< GatesMediator_obj > result = new GatesMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic GatesMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GatesMediator_obj > result = new GatesMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void GatesMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.GatesMediator","onRegister",0x54620477,"view.mediator.basis.GatesMediator.onRegister","view/mediator/basis/GatesMediator.hx",20,0x5ca2b9c6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(22)
		::model::proxy::SnapshotProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		_g = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(22)
		this->snapshotProxy = _g;
		HX_STACK_LINE(23)
		::view::component::basis::Gates _g1 = this->getView();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(23)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g1,null());
	}
return null();
}


Array< ::String > GatesMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.GatesMediator","listNotificationInterests",0xe99e96ab,"view.mediator.basis.GatesMediator.listNotificationInterests","view/mediator/basis/GatesMediator.hx",27,0x5ca2b9c6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CLOCK_OFF).Add(::AppConstants_obj::CHANGE_CLOCK_SPEED).Add(::AppConstants_obj::MULTIPLEXER_OUT_CHANGED).Add(::AppConstants_obj::ALU_EQUAL_ON).Add(::AppConstants_obj::ALU_EQUAL_OFF).Add(::AppConstants_obj::POWER_ON).Add(::AppConstants_obj::POWER_OFF).Add(::AppConstants_obj::MODEL_RESET_COMPLETE);
}


Void GatesMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.GatesMediator","handleNotification",0x873e8988,"view.mediator.basis.GatesMediator.handleNotification","view/mediator/basis/GatesMediator.hx",42,0x5ca2b9c6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
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
			::String _g1 = instruction->code.substr((int)0,(int)4);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(46)
			if (((_g1 == ::AppConstants_obj::OPCODE_LDA))){
				HX_STACK_LINE(47)
				::String _g11 = instruction->code.substr((int)4,(int)4);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(47)
				::model::vo::DecHexVO pointer = ::utilities::NumberFormat_obj::binaryToDecimal(_g11);		HX_STACK_VAR(pointer,"pointer");
				HX_STACK_LINE(48)
				Array< ::Dynamic > _g2 = this->snapshotProxy->getRam();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(48)
				::model::vo::SnapshotVO _g3 = _g2->__get(pointer->dec).StaticCast< ::model::vo::SnapshotVO >();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(48)
				this->getView()->showLines(instruction,null(),null(),_g3);
			}
			else{
				HX_STACK_LINE(50)
				::model::vo::SnapshotVO _g4 = this->snapshotProxy->getAccumulator();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(50)
				::model::vo::SnapshotVO _g5 = this->snapshotProxy->getRegister1();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(50)
				this->getView()->showLines(instruction,_g4,_g5,null());
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::MULTIPLEXER_OUT_CHANGED)){
			HX_STACK_LINE(53)
			Dynamic _g6 = note->getBody();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(53)
			this->getView()->showLinesG1(_g6);
		}
		else if (  ( _switch_1==::AppConstants_obj::CLOCK_OFF)){
		}
		else if (  ( _switch_1==::AppConstants_obj::CHANGE_CLOCK_SPEED)){
			HX_STACK_LINE(57)
			this->getView()->hideAllLines();
		}
		else if (  ( _switch_1==::AppConstants_obj::ALU_EQUAL_ON)){
			HX_STACK_LINE(59)
			this->getView()->hideLineG6();
		}
		else if (  ( _switch_1==::AppConstants_obj::ALU_EQUAL_OFF)){
			HX_STACK_LINE(61)
			this->getView()->showLineG6();
		}
		else if (  ( _switch_1==::AppConstants_obj::POWER_ON)){
			HX_STACK_LINE(63)
			this->getView()->showLineG6();
		}
		else if (  ( _switch_1==::AppConstants_obj::POWER_OFF)){
			HX_STACK_LINE(65)
			this->getView()->hideLineG6();
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(67)
			this->getView()->hideAllLines();
		}
	}
return null();
}


Void GatesMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.GatesMediator","viewReadyHandler",0x420c7341,"view.mediator.basis.GatesMediator.viewReadyHandler","view/mediator/basis/GatesMediator.hx",72,0x5ca2b9c6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(72)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("GatesMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GatesMediator_obj,viewReadyHandler,(void))

::view::component::basis::Gates GatesMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.GatesMediator","getView",0x15b31126,"view.mediator.basis.GatesMediator.getView","view/mediator/basis/GatesMediator.hx",76,0x5ca2b9c6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(GatesMediator_obj,getView,return )

::String GatesMediator_obj::NAME;


GatesMediator_obj::GatesMediator_obj()
{
}

void GatesMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GatesMediator);
	HX_MARK_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GatesMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GatesMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
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

Dynamic GatesMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { snapshotProxy=inValue.Cast< ::model::proxy::SnapshotProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GatesMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("snapshotProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::SnapshotProxy*/ ,(int)offsetof(GatesMediator_obj,snapshotProxy),HX_CSTRING("snapshotProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("snapshotProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GatesMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GatesMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GatesMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GatesMediator_obj::NAME,"NAME");
};

#endif

Class GatesMediator_obj::__mClass;

void GatesMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.GatesMediator"), hx::TCanCast< GatesMediator_obj> ,sStaticFields,sMemberFields,
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

void GatesMediator_obj::__boot()
{
	NAME= HX_CSTRING("GatesMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
