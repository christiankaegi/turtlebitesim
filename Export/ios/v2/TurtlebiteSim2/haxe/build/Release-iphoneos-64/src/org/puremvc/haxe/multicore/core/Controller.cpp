#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_core_Controller
#include <org/puremvc/haxe/multicore/core/Controller.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_core_View
#include <org/puremvc/haxe/multicore/core/View.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_ICommand
#include <org/puremvc/haxe/multicore/interfaces/ICommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IController
#include <org/puremvc/haxe/multicore/interfaces/IController.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotification
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IObserver
#include <org/puremvc/haxe/multicore/interfaces/IObserver.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IView
#include <org/puremvc/haxe/multicore/interfaces/IView.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Observer
#include <org/puremvc/haxe/multicore/patterns/observer/Observer.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace core{

Void Controller_obj::__construct(::String key)
{
HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Controller","new",0xa7ddb0d5,"org.puremvc.haxe.multicore.core.Controller.new","org/puremvc/haxe/multicore/core/Controller.hx",51,0xefb6e81a)
HX_STACK_THIS(this)
HX_STACK_ARG(key,"key")
{
	HX_STACK_LINE(52)
	this->multitonKey = key;
	HX_STACK_LINE(53)
	::org::puremvc::haxe::multicore::core::Controller_obj::instanceMap->set(this->multitonKey,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(54)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(54)
	this->commandMap = _g;
	HX_STACK_LINE(55)
	this->initializeController();
}
;
	return null();
}

//Controller_obj::~Controller_obj() { }

Dynamic Controller_obj::__CreateEmpty() { return  new Controller_obj; }
hx::ObjectPtr< Controller_obj > Controller_obj::__new(::String key)
{  hx::ObjectPtr< Controller_obj > result = new Controller_obj();
	result->__construct(key);
	return result;}

Dynamic Controller_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Controller_obj > result = new Controller_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *Controller_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::IController_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::IController_obj *();
	return super::__ToInterface(inType);
}

Void Controller_obj::initializeController( ){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Controller","initializeController",0x3ef9ddf7,"org.puremvc.haxe.multicore.core.Controller.initializeController","org/puremvc/haxe/multicore/core/Controller.hx",68,0xefb6e81a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		::org::puremvc::haxe::multicore::interfaces::IView _g = ::org::puremvc::haxe::multicore::core::View_obj::getInstance(this->multitonKey);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(69)
		this->view = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,initializeController,(void))

Void Controller_obj::executeCommand( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Controller","executeCommand",0x8db7a941,"org.puremvc.haxe.multicore.core.Controller.executeCommand","org/puremvc/haxe/multicore/core/Controller.hx",87,0xefb6e81a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(88)
		::String _g = note->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		::Class commandClassRef = this->commandMap->get(_g);		HX_STACK_VAR(commandClassRef,"commandClassRef");
		HX_STACK_LINE(89)
		if (((commandClassRef == null()))){
			HX_STACK_LINE(89)
			return null();
		}
		HX_STACK_LINE(91)
		::org::puremvc::haxe::multicore::interfaces::ICommand commandInstance = ::Type_obj::createInstance(commandClassRef,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(commandInstance,"commandInstance");
		HX_STACK_LINE(92)
		commandInstance->__Field(HX_CSTRING("initializeNotifier"),true)(this->multitonKey);
		HX_STACK_LINE(93)
		commandInstance->execute(note);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,executeCommand,(void))

Void Controller_obj::registerCommand( ::String notificationName,::Class commandClassRef){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Controller","registerCommand",0xd455111d,"org.puremvc.haxe.multicore.core.Controller.registerCommand","org/puremvc/haxe/multicore/core/Controller.hx",107,0xefb6e81a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notificationName,"notificationName")
		HX_STACK_ARG(commandClassRef,"commandClassRef")
		HX_STACK_LINE(108)
		if ((!(this->commandMap->exists(notificationName)))){
			HX_STACK_LINE(109)
			::org::puremvc::haxe::multicore::patterns::observer::Observer _g = ::org::puremvc::haxe::multicore::patterns::observer::Observer_obj::__new(this->executeCommand_dyn(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(109)
			this->view->registerObserver(notificationName,_g);
		}
		HX_STACK_LINE(110)
		this->commandMap->set(notificationName,commandClassRef);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,registerCommand,(void))

bool Controller_obj::hasCommand( ::String notificationName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Controller","hasCommand",0x9fa1a13c,"org.puremvc.haxe.multicore.core.Controller.hasCommand","org/puremvc/haxe/multicore/core/Controller.hx",118,0xefb6e81a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(notificationName,"notificationName")
	HX_STACK_LINE(118)
	return this->commandMap->exists(notificationName);
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,hasCommand,return )

Void Controller_obj::removeCommand( ::String notificationName){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Controller","removeCommand",0xaa70b21c,"org.puremvc.haxe.multicore.core.Controller.removeCommand","org/puremvc/haxe/multicore/core/Controller.hx",127,0xefb6e81a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notificationName,"notificationName")
		HX_STACK_LINE(127)
		if ((this->hasCommand(notificationName))){
			HX_STACK_LINE(130)
			this->view->removeObserver(notificationName,hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(132)
			this->commandMap->remove(notificationName);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,removeCommand,(void))

Void Controller_obj::removeController( ::String key){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Controller","removeController",0xf768f06b,"org.puremvc.haxe.multicore.core.Controller.removeController","org/puremvc/haxe/multicore/core/Controller.hx",141,0xefb6e81a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(141)
		::org::puremvc::haxe::multicore::core::Controller_obj::instanceMap->remove(key);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,removeController,(void))

::org::puremvc::haxe::multicore::interfaces::IController Controller_obj::getInstance( ::String key){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Controller","getInstance",0xfc93bfc0,"org.puremvc.haxe.multicore.core.Controller.getInstance","org/puremvc/haxe/multicore/core/Controller.hx",76,0xefb6e81a)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(77)
	if (((::org::puremvc::haxe::multicore::core::Controller_obj::instanceMap == null()))){
		HX_STACK_LINE(77)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		::org::puremvc::haxe::multicore::core::Controller_obj::instanceMap = _g;
	}
	HX_STACK_LINE(78)
	if ((!(::org::puremvc::haxe::multicore::core::Controller_obj::instanceMap->exists(key)))){
		HX_STACK_LINE(78)
		::org::puremvc::haxe::multicore::core::Controller _g1 = ::org::puremvc::haxe::multicore::core::Controller_obj::__new(key);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(78)
		::org::puremvc::haxe::multicore::core::Controller_obj::instanceMap->set(key,_g1);
	}
	HX_STACK_LINE(79)
	return ::org::puremvc::haxe::multicore::core::Controller_obj::instanceMap->get(key);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,getInstance,return )

::haxe::ds::StringMap Controller_obj::instanceMap;


Controller_obj::Controller_obj()
{
}

void Controller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controller);
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(commandMap,"commandMap");
	HX_MARK_MEMBER_NAME(multitonKey,"multitonKey");
	HX_MARK_END_CLASS();
}

void Controller_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(commandMap,"commandMap");
	HX_VISIT_MEMBER_NAME(multitonKey,"multitonKey");
}

Dynamic Controller_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasCommand") ) { return hasCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"commandMap") ) { return commandMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"instanceMap") ) { return instanceMap; }
		if (HX_FIELD_EQ(inName,"multitonKey") ) { return multitonKey; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeCommand") ) { return removeCommand_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"executeCommand") ) { return executeCommand_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerCommand") ) { return registerCommand_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeController") ) { return removeController_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"initializeController") ) { return initializeController_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Controller_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::org::puremvc::haxe::multicore::interfaces::IView >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandMap") ) { commandMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"instanceMap") ) { instanceMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multitonKey") ) { multitonKey=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Controller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("view"));
	outFields->push(HX_CSTRING("commandMap"));
	outFields->push(HX_CSTRING("multitonKey"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getInstance"),
	HX_CSTRING("instanceMap"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::puremvc::haxe::multicore::interfaces::IView*/ ,(int)offsetof(Controller_obj,view),HX_CSTRING("view")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Controller_obj,commandMap),HX_CSTRING("commandMap")},
	{hx::fsString,(int)offsetof(Controller_obj,multitonKey),HX_CSTRING("multitonKey")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("initializeController"),
	HX_CSTRING("executeCommand"),
	HX_CSTRING("registerCommand"),
	HX_CSTRING("hasCommand"),
	HX_CSTRING("removeCommand"),
	HX_CSTRING("removeController"),
	HX_CSTRING("view"),
	HX_CSTRING("commandMap"),
	HX_CSTRING("multitonKey"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Controller_obj::instanceMap,"instanceMap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Controller_obj::instanceMap,"instanceMap");
};

#endif

Class Controller_obj::__mClass;

void Controller_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.core.Controller"), hx::TCanCast< Controller_obj> ,sStaticFields,sMemberFields,
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

void Controller_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace core
