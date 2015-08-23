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
#ifndef INCLUDED_view_component_basis_Comparator
#include <view/component/basis/Comparator.h>
#endif
#ifndef INCLUDED_view_mediator_basis_ComparatorMediator
#include <view/mediator/basis/ComparatorMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void ComparatorMediator_obj::__construct(::view::component::basis::Comparator viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.ComparatorMediator","new",0x1cba987d,"view.mediator.basis.ComparatorMediator.new","view/mediator/basis/ComparatorMediator.hx",14,0xa7522412)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(14)
	super::__construct(HX_CSTRING("ComparatorMediator"),viewComponent);
}
;
	return null();
}

//ComparatorMediator_obj::~ComparatorMediator_obj() { }

Dynamic ComparatorMediator_obj::__CreateEmpty() { return  new ComparatorMediator_obj; }
hx::ObjectPtr< ComparatorMediator_obj > ComparatorMediator_obj::__new(::view::component::basis::Comparator viewComponent)
{  hx::ObjectPtr< ComparatorMediator_obj > result = new ComparatorMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic ComparatorMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComparatorMediator_obj > result = new ComparatorMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ComparatorMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.ComparatorMediator","onRegister",0x6e8fa025,"view.mediator.basis.ComparatorMediator.onRegister","view/mediator/basis/ComparatorMediator.hx",17,0xa7522412)
		HX_STACK_THIS(this)
		HX_STACK_LINE(18)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(19)
		::model::proxy::AppProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		_g = hx::TCast< model::proxy::AppProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::AppProxy_obj::NAME));
		HX_STACK_LINE(19)
		this->appProxy = _g;
		HX_STACK_LINE(20)
		::view::component::basis::Comparator _g1 = this->getView();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(20)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g1,null());
	}
return null();
}


Array< ::String > ComparatorMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.ComparatorMediator","listNotificationInterests",0xd5b34ebd,"view.mediator.basis.ComparatorMediator.listNotificationInterests","view/mediator/basis/ComparatorMediator.hx",24,0xa7522412)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	return Array_obj< ::String >::__new().Add(::AppConstants_obj::CLOCK_ON).Add(::AppConstants_obj::CHANGE_CLOCK_SPEED).Add(::AppConstants_obj::POWER_ON).Add(::AppConstants_obj::POWER_OFF).Add(::AppConstants_obj::MODEL_RESET_COMPLETE);
}


Void ComparatorMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.ComparatorMediator","handleNotification",0xa1148336,"view.mediator.basis.ComparatorMediator.handleNotification","view/mediator/basis/ComparatorMediator.hx",33,0xa7522412)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(34)
		if ((this->appProxy->getDetailPopupActive())){
			HX_STACK_LINE(35)
			return null();
		}
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			::String _switch_1 = (_g);
			if (  ( _switch_1==::AppConstants_obj::CLOCK_ON)){
				HX_STACK_LINE(40)
				Dynamic _g1 = note->getBody();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(40)
				this->getView()->showLines(_g1);
			}
			else if (  ( _switch_1==::AppConstants_obj::CHANGE_CLOCK_SPEED)){
				HX_STACK_LINE(42)
				this->getView()->hideAllLines();
			}
			else if (  ( _switch_1==::AppConstants_obj::MODEL_RESET_COMPLETE)){
				HX_STACK_LINE(44)
				this->getView()->hideAllLines();
			}
			else if (  ( _switch_1==::AppConstants_obj::POWER_ON)){
				HX_STACK_LINE(46)
				this->getView()->showCompStaticLines();
			}
			else if (  ( _switch_1==::AppConstants_obj::POWER_OFF)){
				HX_STACK_LINE(48)
				this->getView()->hideCompStaticLines();
			}
		}
	}
return null();
}


Void ComparatorMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.ComparatorMediator","viewReadyHandler",0x7e77056f,"view.mediator.basis.ComparatorMediator.viewReadyHandler","view/mediator/basis/ComparatorMediator.hx",53,0xa7522412)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(53)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("ComparatorMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ComparatorMediator_obj,viewReadyHandler,(void))

::view::component::basis::Comparator ComparatorMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.ComparatorMediator","getView",0x3edb7cb8,"view.mediator.basis.ComparatorMediator.getView","view/mediator/basis/ComparatorMediator.hx",57,0xa7522412)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(ComparatorMediator_obj,getView,return )

::String ComparatorMediator_obj::NAME;


ComparatorMediator_obj::ComparatorMediator_obj()
{
}

void ComparatorMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComparatorMediator);
	HX_MARK_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComparatorMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appProxy,"appProxy");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ComparatorMediator_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 25:
		if (HX_FIELD_EQ(inName,"listNotificationInterests") ) { return listNotificationInterests_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ComparatorMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"appProxy") ) { appProxy=inValue.Cast< ::model::proxy::AppProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComparatorMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::AppProxy*/ ,(int)offsetof(ComparatorMediator_obj,appProxy),HX_CSTRING("appProxy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("appProxy"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComparatorMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ComparatorMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComparatorMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ComparatorMediator_obj::NAME,"NAME");
};

#endif

Class ComparatorMediator_obj::__mClass;

void ComparatorMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.ComparatorMediator"), hx::TCanCast< ComparatorMediator_obj> ,sStaticFields,sMemberFields,
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

void ComparatorMediator_obj::__boot()
{
	NAME= HX_CSTRING("ComparatorMediator");
}

} // end namespace view
} // end namespace mediator
} // end namespace basis
