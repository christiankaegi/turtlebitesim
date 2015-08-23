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
#ifndef INCLUDED_view_component_basis_Display
#include <view/component/basis/Display.h>
#endif
#ifndef INCLUDED_view_mediator_basis_DisplayMediator
#include <view/mediator/basis/DisplayMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void DisplayMediator_obj::__construct(::view::component::basis::Display viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.DisplayMediator","new",0x6c8c2aa5,"view.mediator.basis.DisplayMediator.new","view/mediator/basis/DisplayMediator.hx",16,0x01eadc8c)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(16)
	super::__construct(HX_CSTRING("DisplayMediator"),viewComponent);
}
;
	return null();
}

//DisplayMediator_obj::~DisplayMediator_obj() { }

Dynamic DisplayMediator_obj::__CreateEmpty() { return  new DisplayMediator_obj; }
hx::ObjectPtr< DisplayMediator_obj > DisplayMediator_obj::__new(::view::component::basis::Display viewComponent)
{  hx::ObjectPtr< DisplayMediator_obj > result = new DisplayMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic DisplayMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayMediator_obj > result = new DisplayMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void DisplayMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.DisplayMediator","onRegister",0xdfd622fd,"view.mediator.basis.DisplayMediator.onRegister","view/mediator/basis/DisplayMediator.hx",19,0x01eadc8c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(21)
		::model::proxy::SnapshotProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		_g = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(21)
		this->snapshotProxy = _g;
		HX_STACK_LINE(22)
		::view::component::basis::Display _g1 = this->getView();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(22)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g1,null());
	}
return null();
}


Array< ::String > DisplayMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.DisplayMediator","listNotificationInterests",0x48b1bee5,"view.mediator.basis.DisplayMediator.listNotificationInterests","view/mediator/basis/DisplayMediator.hx",26,0x01eadc8c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::LOOP).Add(::AppConstants_obj::MODEL_RESET_COMPLETE);
}


Void DisplayMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.DisplayMediator","handleNotification",0x5b5d9e0e,"view.mediator.basis.DisplayMediator.handleNotification","view/mediator/basis/DisplayMediator.hx",34,0x01eadc8c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(34)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
			HX_STACK_LINE(37)
			::model::vo::InstructionVO instruction;		HX_STACK_VAR(instruction,"instruction");
			HX_STACK_LINE(37)
			instruction = hx::TCast< model::vo::InstructionVO >::cast(note->getBody());
			HX_STACK_LINE(38)
			::String _g1 = instruction->code.substr((int)0,(int)4);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(38)
			if (((_g1 == ::AppConstants_obj::OPCODE_OUT))){
				HX_STACK_LINE(39)
				::String _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(39)
				{
					HX_STACK_LINE(39)
					int this1 = this->snapshotProxy->getAccumulator()->getDecimal();		HX_STACK_VAR(this1,"this1");
					struct _Function_4_1{
						inline static Float Block( int &this1){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","view/mediator/basis/DisplayMediator.hx",39,0x01eadc8c)
							{
								HX_STACK_LINE(39)
								int _int = this1;		HX_STACK_VAR(_int,"int");
								HX_STACK_LINE(39)
								return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(39)
					_g11 = ::Std_obj::string(_Function_4_1::Block(this1));
				}
				HX_STACK_LINE(39)
				this->getView()->setOutput(_g11);
			}
		}
		else if (  ( _switch_1==::AppConstants_obj::LOOP)){
			HX_STACK_LINE(42)
			this->getView()->clear();
		}
		else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
			HX_STACK_LINE(44)
			this->getView()->clear();
		}
	}
return null();
}


Void DisplayMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.DisplayMediator","viewReadyHandler",0x24a73a47,"view.mediator.basis.DisplayMediator.viewReadyHandler","view/mediator/basis/DisplayMediator.hx",50,0x01eadc8c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(50)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("DisplayMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayMediator_obj,viewReadyHandler,(void))

::view::component::basis::Display DisplayMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.DisplayMediator","getView",0xd3e542e0,"view.mediator.basis.DisplayMediator.getView","view/mediator/basis/DisplayMediator.hx",54,0x01eadc8c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayMediator_obj,getView,return )

::String DisplayMediator_obj::NAME;


DisplayMediator_obj::DisplayMediator_obj()
{
}

void DisplayMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayMediator);
	HX_MARK_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(snapshotProxy,"snapshotProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayMediator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic DisplayMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"snapshotProxy") ) { snapshotProxy=inValue.Cast< ::model::proxy::SnapshotProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("snapshotProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::SnapshotProxy*/ ,(int)offsetof(DisplayMediator_obj,snapshotProxy),HX_CSTRING("snapshotProxy")},
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
	HX_MARK_MEMBER_NAME(DisplayMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayMediator_obj::NAME,"NAME");
};

#endif

Class DisplayMediator_obj::__mClass;

void DisplayMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.DisplayMediator"), hx::TCanCast< DisplayMediator_obj> ,sStaticFields,sMemberFields,
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

void DisplayMediator_obj::__boot()
{
	NAME= HX_CSTRING("DisplayMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis