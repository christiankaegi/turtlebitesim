#include <hxcpp.h>

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
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace patterns{
namespace mediator{

Void Mediator_obj::__construct(::String mediatorName,Dynamic viewComponent)
{
HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.mediator.Mediator","new",0xf4b4e35d,"org.puremvc.haxe.multicore.patterns.mediator.Mediator.new","org/puremvc/haxe/multicore/patterns/mediator/Mediator.hx",36,0x62d70653)
HX_STACK_THIS(this)
HX_STACK_ARG(mediatorName,"mediatorName")
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(37)
	super::__construct();
	HX_STACK_LINE(38)
	if (((mediatorName != null()))){
		HX_STACK_LINE(38)
		this->mediatorName = mediatorName;
	}
	else{
		HX_STACK_LINE(38)
		this->mediatorName = ::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::NAME;
	}
	HX_STACK_LINE(39)
	this->viewComponent = viewComponent;
}
;
	return null();
}

//Mediator_obj::~Mediator_obj() { }

Dynamic Mediator_obj::__CreateEmpty() { return  new Mediator_obj; }
hx::ObjectPtr< Mediator_obj > Mediator_obj::__new(::String mediatorName,Dynamic viewComponent)
{  hx::ObjectPtr< Mediator_obj > result = new Mediator_obj();
	result->__construct(mediatorName,viewComponent);
	return result;}

Dynamic Mediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mediator_obj > result = new Mediator_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Mediator_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::IMediator_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::IMediator_obj *();
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::INotifier_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::INotifier_obj *();
	return super::__ToInterface(inType);
}

::String Mediator_obj::getMediatorName( ){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.mediator.Mediator","getMediatorName",0x52322c51,"org.puremvc.haxe.multicore.patterns.mediator.Mediator.getMediatorName","org/puremvc/haxe/multicore/patterns/mediator/Mediator.hx",48,0x62d70653)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return this->mediatorName;
}


HX_DEFINE_DYNAMIC_FUNC0(Mediator_obj,getMediatorName,return )

Void Mediator_obj::setViewComponent( Dynamic viewComponent){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.mediator.Mediator","setViewComponent",0x824c5379,"org.puremvc.haxe.multicore.patterns.mediator.Mediator.setViewComponent","org/puremvc/haxe/multicore/patterns/mediator/Mediator.hx",56,0x62d70653)
		HX_STACK_THIS(this)
		HX_STACK_ARG(viewComponent,"viewComponent")
		HX_STACK_LINE(56)
		this->viewComponent = viewComponent;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mediator_obj,setViewComponent,(void))

Dynamic Mediator_obj::getViewComponent( ){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.mediator.Mediator","getViewComponent",0x2c0a6605,"org.puremvc.haxe.multicore.patterns.mediator.Mediator.getViewComponent","org/puremvc/haxe/multicore/patterns/mediator/Mediator.hx",64,0x62d70653)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(Mediator_obj,getViewComponent,return )

Array< ::String > Mediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.mediator.Mediator","listNotificationInterests",0xd3a4c19d,"org.puremvc.haxe.multicore.patterns.mediator.Mediator.listNotificationInterests","org/puremvc/haxe/multicore/patterns/mediator/Mediator.hx",73,0x62d70653)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return Array_obj< ::String >::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(Mediator_obj,listNotificationInterests,return )

Void Mediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification notification){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.mediator.Mediator","handleNotification",0x08617456,"org.puremvc.haxe.multicore.patterns.mediator.Mediator.handleNotification","org/puremvc/haxe/multicore/patterns/mediator/Mediator.hx",84,0x62d70653)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notification,"notification")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mediator_obj,handleNotification,(void))

Void Mediator_obj::onRegister( ){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.mediator.Mediator","onRegister",0x8af67145,"org.puremvc.haxe.multicore.patterns.mediator.Mediator.onRegister","org/puremvc/haxe/multicore/patterns/mediator/Mediator.hx",92,0x62d70653)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mediator_obj,onRegister,(void))

Void Mediator_obj::onRemove( ){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.mediator.Mediator","onRemove",0x04fd8aa6,"org.puremvc.haxe.multicore.patterns.mediator.Mediator.onRemove","org/puremvc/haxe/multicore/patterns/mediator/Mediator.hx",99,0x62d70653)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mediator_obj,onRemove,(void))

::String Mediator_obj::NAME;


Mediator_obj::Mediator_obj()
{
}

void Mediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mediator);
	HX_MARK_MEMBER_NAME(mediatorName,"mediatorName");
	HX_MARK_MEMBER_NAME(viewComponent,"viewComponent");
	::org::puremvc::haxe::multicore::patterns::observer::Notifier_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mediatorName,"mediatorName");
	HX_VISIT_MEMBER_NAME(viewComponent,"viewComponent");
	::org::puremvc::haxe::multicore::patterns::observer::Notifier_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Mediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRemove") ) { return onRemove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mediatorName") ) { return mediatorName; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"viewComponent") ) { return viewComponent; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMediatorName") ) { return getMediatorName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setViewComponent") ) { return setViewComponent_dyn(); }
		if (HX_FIELD_EQ(inName,"getViewComponent") ) { return getViewComponent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleNotification") ) { return handleNotification_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listNotificationInterests") ) { return listNotificationInterests_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mediatorName") ) { mediatorName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"viewComponent") ) { viewComponent=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mediatorName"));
	outFields->push(HX_CSTRING("viewComponent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Mediator_obj,mediatorName),HX_CSTRING("mediatorName")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Mediator_obj,viewComponent),HX_CSTRING("viewComponent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getMediatorName"),
	HX_CSTRING("setViewComponent"),
	HX_CSTRING("getViewComponent"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("onRemove"),
	HX_CSTRING("mediatorName"),
	HX_CSTRING("viewComponent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Mediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mediator_obj::NAME,"NAME");
};

#endif

Class Mediator_obj::__mClass;

void Mediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.patterns.mediator.Mediator"), hx::TCanCast< Mediator_obj> ,sStaticFields,sMemberFields,
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

void Mediator_obj::__boot()
{
	NAME= HX_CSTRING("Mediator");
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace patterns
} // end namespace mediator
