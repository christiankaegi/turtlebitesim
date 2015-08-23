#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade
#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_facade_Facade
#include <org/puremvc/haxe/multicore/patterns/facade/Facade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace patterns{
namespace observer{

Void Notifier_obj::__construct()
{
HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Notifier","new",0x39e4de4d,"org.puremvc.haxe.multicore.patterns.observer.Notifier.new","org/puremvc/haxe/multicore/patterns/observer/Notifier.hx",33,0xccc3b963)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Notifier_obj::~Notifier_obj() { }

Dynamic Notifier_obj::__CreateEmpty() { return  new Notifier_obj; }
hx::ObjectPtr< Notifier_obj > Notifier_obj::__new()
{  hx::ObjectPtr< Notifier_obj > result = new Notifier_obj();
	result->__construct();
	return result;}

Dynamic Notifier_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Notifier_obj > result = new Notifier_obj();
	result->__construct();
	return result;}

hx::Object *Notifier_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::INotifier_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::INotifier_obj *();
	return super::__ToInterface(inType);
}

Void Notifier_obj::sendNotification( ::String notificationName,Dynamic body,::String type){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Notifier","sendNotification",0xb3319e46,"org.puremvc.haxe.multicore.patterns.observer.Notifier.sendNotification","org/puremvc/haxe/multicore/patterns/observer/Notifier.hx",44,0xccc3b963)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notificationName,"notificationName")
		HX_STACK_ARG(body,"body")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(44)
		this->get_facade()->__Field(HX_CSTRING("sendNotification"),true)(notificationName,body,type);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Notifier_obj,sendNotification,(void))

Void Notifier_obj::initializeNotifier( ::String key){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Notifier","initializeNotifier",0x5ae27589,"org.puremvc.haxe.multicore.patterns.observer.Notifier.initializeNotifier","org/puremvc/haxe/multicore/patterns/observer/Notifier.hx",64,0xccc3b963)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(64)
		this->multitonKey = key;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Notifier_obj,initializeNotifier,(void))

::org::puremvc::haxe::multicore::interfaces::IFacade Notifier_obj::get_facade( ){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Notifier","get_facade",0xe294cdd6,"org.puremvc.haxe.multicore.patterns.observer.Notifier.get_facade","org/puremvc/haxe/multicore/patterns/observer/Notifier.hx",75,0xccc3b963)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	if (((this->multitonKey == null()))){
		HX_STACK_LINE(76)
		HX_STACK_DO_THROW(HX_CSTRING("multitonKey for this Notifier not yet initialized!"));
	}
	HX_STACK_LINE(77)
	return ::org::puremvc::haxe::multicore::patterns::facade::Facade_obj::getInstance(this->multitonKey);
}


HX_DEFINE_DYNAMIC_FUNC0(Notifier_obj,get_facade,return )

::org::puremvc::haxe::multicore::interfaces::IFacade Notifier_obj::getFacade( ){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Notifier","getFacade",0xb30d6b3d,"org.puremvc.haxe.multicore.patterns.observer.Notifier.getFacade","org/puremvc/haxe/multicore/patterns/observer/Notifier.hx",82,0xccc3b963)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	return this->get_facade();
}


HX_DEFINE_DYNAMIC_FUNC0(Notifier_obj,getFacade,return )

::String Notifier_obj::MULTITON_MSG;


Notifier_obj::Notifier_obj()
{
}

void Notifier_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Notifier);
	HX_MARK_MEMBER_NAME(facade,"facade");
	HX_MARK_MEMBER_NAME(multitonKey,"multitonKey");
	HX_MARK_END_CLASS();
}

void Notifier_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(facade,"facade");
	HX_VISIT_MEMBER_NAME(multitonKey,"multitonKey");
}

Dynamic Notifier_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"facade") ) { return inCallProp ? get_facade() : facade; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFacade") ) { return getFacade_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_facade") ) { return get_facade_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"multitonKey") ) { return multitonKey; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sendNotification") ) { return sendNotification_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"initializeNotifier") ) { return initializeNotifier_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Notifier_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"facade") ) { facade=inValue.Cast< ::org::puremvc::haxe::multicore::interfaces::IFacade >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"multitonKey") ) { multitonKey=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Notifier_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("facade"));
	outFields->push(HX_CSTRING("multitonKey"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MULTITON_MSG"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::puremvc::haxe::multicore::interfaces::IFacade*/ ,(int)offsetof(Notifier_obj,facade),HX_CSTRING("facade")},
	{hx::fsString,(int)offsetof(Notifier_obj,multitonKey),HX_CSTRING("multitonKey")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sendNotification"),
	HX_CSTRING("initializeNotifier"),
	HX_CSTRING("facade"),
	HX_CSTRING("get_facade"),
	HX_CSTRING("getFacade"),
	HX_CSTRING("multitonKey"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Notifier_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Notifier_obj::MULTITON_MSG,"MULTITON_MSG");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Notifier_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Notifier_obj::MULTITON_MSG,"MULTITON_MSG");
};

#endif

Class Notifier_obj::__mClass;

void Notifier_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.patterns.observer.Notifier"), hx::TCanCast< Notifier_obj> ,sStaticFields,sMemberFields,
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

void Notifier_obj::__boot()
{
	MULTITON_MSG= HX_CSTRING("multitonKey for this Notifier not yet initialized!");
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace patterns
} // end namespace observer
