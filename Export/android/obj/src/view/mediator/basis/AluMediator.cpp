#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IMediator
#include <org/puremvc/haxe/multicore/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotification
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_mediator_Mediator
#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_view_component_basis_Alu
#include <view/component/basis/Alu.h>
#endif
#ifndef INCLUDED_view_mediator_basis_AluMediator
#include <view/mediator/basis/AluMediator.h>
#endif
namespace view{
namespace mediator{
namespace basis{

Void AluMediator_obj::__construct(::view::component::basis::Alu viewComponent)
{
HX_STACK_FRAME("view.mediator.basis.AluMediator","new",0x85758e8d,"view.mediator.basis.AluMediator.new","view/mediator/basis/AluMediator.hx",13,0x22ad8924)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(13)
	super::__construct(HX_CSTRING("AluMediator"),viewComponent);
}
;
	return null();
}

//AluMediator_obj::~AluMediator_obj() { }

Dynamic AluMediator_obj::__CreateEmpty() { return  new AluMediator_obj; }
hx::ObjectPtr< AluMediator_obj > AluMediator_obj::__new(::view::component::basis::Alu viewComponent)
{  hx::ObjectPtr< AluMediator_obj > result = new AluMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic AluMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AluMediator_obj > result = new AluMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void AluMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.basis.AluMediator","onRegister",0xfde68c15,"view.mediator.basis.AluMediator.onRegister","view/mediator/basis/AluMediator.hx",16,0x22ad8924)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(18)
		::view::component::basis::Alu _g = this->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(18)
		this->sendNotification(::AppConstants_obj::ADD_TO_ZOOM_VIEW,_g,null());
	}
return null();
}


Array< ::String > AluMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.basis.AluMediator","listNotificationInterests",0xea0350cd,"view.mediator.basis.AluMediator.listNotificationInterests","view/mediator/basis/AluMediator.hx",22,0x22ad8924)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return Array_obj< ::String >::__new();
}


Void AluMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.basis.AluMediator","handleNotification",0xd420df26,"view.mediator.basis.AluMediator.handleNotification","view/mediator/basis/AluMediator.hx",25,0x22ad8924)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
	}
return null();
}


Void AluMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.basis.AluMediator","viewReadyHandler",0x626f855f,"view.mediator.basis.AluMediator.viewReadyHandler","view/mediator/basis/AluMediator.hx",36,0x22ad8924)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(36)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("AluMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AluMediator_obj,viewReadyHandler,(void))

::view::component::basis::Alu AluMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.basis.AluMediator","getView",0x55b2bac8,"view.mediator.basis.AluMediator.getView","view/mediator/basis/AluMediator.hx",40,0x22ad8924)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(AluMediator_obj,getView,return )

::String AluMediator_obj::NAME;


AluMediator_obj::AluMediator_obj()
{
}

Dynamic AluMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
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

Dynamic AluMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AluMediator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.basis.AluMediator"), hx::TCanCast< AluMediator_obj> ,sStaticFields,sMemberFields,
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
} // end namespace basis
