#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_core_Controller
#include <org/puremvc/haxe/multicore/core/Controller.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_core_Model
#include <org/puremvc/haxe/multicore/core/Model.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_core_View
#include <org/puremvc/haxe/multicore/core/View.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IController
#include <org/puremvc/haxe/multicore/interfaces/IController.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade
#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IMediator
#include <org/puremvc/haxe/multicore/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IModel
#include <org/puremvc/haxe/multicore/interfaces/IModel.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IView
#include <org/puremvc/haxe/multicore/interfaces/IView.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_facade_Facade
#include <org/puremvc/haxe/multicore/patterns/facade/Facade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notification
#include <org/puremvc/haxe/multicore/patterns/observer/Notification.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace patterns{
namespace facade{

Void Facade_obj::__construct(::String key)
{
HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","new",0x094c9efd,"org.puremvc.haxe.multicore.patterns.facade.Facade.new","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",43,0x23145473)
HX_STACK_THIS(this)
HX_STACK_ARG(key,"key")
{
	HX_STACK_LINE(44)
	this->initializeNotifier(key);
	HX_STACK_LINE(45)
	::org::puremvc::haxe::multicore::patterns::facade::Facade_obj::instanceMap->set(this->multitonKey,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(46)
	this->initializeFacade();
}
;
	return null();
}

//Facade_obj::~Facade_obj() { }

Dynamic Facade_obj::__CreateEmpty() { return  new Facade_obj; }
hx::ObjectPtr< Facade_obj > Facade_obj::__new(::String key)
{  hx::ObjectPtr< Facade_obj > result = new Facade_obj();
	result->__construct(key);
	return result;}

Dynamic Facade_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Facade_obj > result = new Facade_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *Facade_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::IFacade_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::IFacade_obj *();
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::INotifier_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::INotifier_obj *();
	return super::__ToInterface(inType);
}

Void Facade_obj::initializeFacade( ){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","initializeFacade",0xf769390d,"org.puremvc.haxe.multicore.patterns.facade.Facade.initializeFacade","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",57,0x23145473)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		this->initializeModel();
		HX_STACK_LINE(59)
		this->initializeController();
		HX_STACK_LINE(60)
		this->initializeView();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,initializeFacade,(void))

Void Facade_obj::initializeController( ){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","initializeController",0x297c82cf,"org.puremvc.haxe.multicore.patterns.facade.Facade.initializeController","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",86,0x23145473)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		if (((this->controller != null()))){
			HX_STACK_LINE(87)
			return null();
		}
		HX_STACK_LINE(88)
		::org::puremvc::haxe::multicore::interfaces::IController _g = ::org::puremvc::haxe::multicore::core::Controller_obj::getInstance(this->multitonKey);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		this->controller = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,initializeController,(void))

Void Facade_obj::initializeModel( ){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","initializeModel",0x6f286656,"org.puremvc.haxe.multicore.patterns.facade.Facade.initializeModel","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",113,0x23145473)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		if (((this->model != null()))){
			HX_STACK_LINE(114)
			return null();
		}
		HX_STACK_LINE(115)
		::org::puremvc::haxe::multicore::interfaces::IModel _g = ::org::puremvc::haxe::multicore::core::Model_obj::getInstance(this->multitonKey);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		this->model = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,initializeModel,(void))

Void Facade_obj::initializeView( ){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","initializeView",0xd882a458,"org.puremvc.haxe.multicore.patterns.facade.Facade.initializeView","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",137,0x23145473)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		if (((this->view != null()))){
			HX_STACK_LINE(138)
			return null();
		}
		HX_STACK_LINE(139)
		::org::puremvc::haxe::multicore::interfaces::IView _g = ::org::puremvc::haxe::multicore::core::View_obj::getInstance(this->multitonKey);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(139)
		this->view = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Facade_obj,initializeView,(void))

Void Facade_obj::registerCommand( ::String notificationName,::Class commandClassRef){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","registerCommand",0x7d849b45,"org.puremvc.haxe.multicore.patterns.facade.Facade.registerCommand","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",147,0x23145473)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notificationName,"notificationName")
		HX_STACK_ARG(commandClassRef,"commandClassRef")
		HX_STACK_LINE(147)
		this->controller->registerCommand(notificationName,commandClassRef);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Facade_obj,registerCommand,(void))

Void Facade_obj::removeCommand( ::String notificationName){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","removeCommand",0x4bd5e244,"org.puremvc.haxe.multicore.patterns.facade.Facade.removeCommand","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",155,0x23145473)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notificationName,"notificationName")
		HX_STACK_LINE(155)
		this->controller->removeCommand(notificationName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,removeCommand,(void))

bool Facade_obj::hasCommand( ::String notificationName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","hasCommand",0x3dee4814,"org.puremvc.haxe.multicore.patterns.facade.Facade.hasCommand","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",163,0x23145473)
	HX_STACK_THIS(this)
	HX_STACK_ARG(notificationName,"notificationName")
	HX_STACK_LINE(163)
	return this->controller->hasCommand(notificationName);
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,hasCommand,return )

Void Facade_obj::registerProxy( ::org::puremvc::haxe::multicore::interfaces::IProxy proxy){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","registerProxy",0xafa6c5e8,"org.puremvc.haxe.multicore.patterns.facade.Facade.registerProxy","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",171,0x23145473)
		HX_STACK_THIS(this)
		HX_STACK_ARG(proxy,"proxy")
		HX_STACK_LINE(171)
		this->model->registerProxy(proxy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,registerProxy,(void))

::org::puremvc::haxe::multicore::interfaces::IProxy Facade_obj::retrieveProxy( ::String proxyName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","retrieveProxy",0xf676d72f,"org.puremvc.haxe.multicore.patterns.facade.Facade.retrieveProxy","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",179,0x23145473)
	HX_STACK_THIS(this)
	HX_STACK_ARG(proxyName,"proxyName")
	HX_STACK_LINE(179)
	return this->model->retrieveProxy(proxyName);
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,retrieveProxy,return )

::org::puremvc::haxe::multicore::interfaces::IProxy Facade_obj::removeProxy( ::String proxyName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","removeProxy",0x2847ff27,"org.puremvc.haxe.multicore.patterns.facade.Facade.removeProxy","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",186,0x23145473)
	HX_STACK_THIS(this)
	HX_STACK_ARG(proxyName,"proxyName")
	HX_STACK_LINE(187)
	::org::puremvc::haxe::multicore::interfaces::IProxy proxy = null();		HX_STACK_VAR(proxy,"proxy");
	HX_STACK_LINE(188)
	if (((this->model != null()))){
		HX_STACK_LINE(188)
		::org::puremvc::haxe::multicore::interfaces::IProxy _g = this->model->removeProxy(proxyName);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		proxy = _g;
	}
	HX_STACK_LINE(189)
	return proxy;
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,removeProxy,return )

bool Facade_obj::hasProxy( ::String proxyName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","hasProxy",0x134c50f7,"org.puremvc.haxe.multicore.patterns.facade.Facade.hasProxy","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",197,0x23145473)
	HX_STACK_THIS(this)
	HX_STACK_ARG(proxyName,"proxyName")
	HX_STACK_LINE(197)
	return this->model->hasProxy(proxyName);
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,hasProxy,return )

Void Facade_obj::registerMediator( ::org::puremvc::haxe::multicore::interfaces::IMediator mediator){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","registerMediator",0x0bd918f9,"org.puremvc.haxe.multicore.patterns.facade.Facade.registerMediator","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",205,0x23145473)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mediator,"mediator")
		HX_STACK_LINE(205)
		if (((this->view != null()))){
			HX_STACK_LINE(205)
			this->view->registerMediator(mediator);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,registerMediator,(void))

::org::puremvc::haxe::multicore::interfaces::IMediator Facade_obj::retrieveMediator( ::String mediatorName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","retrieveMediator",0x5297ce12,"org.puremvc.haxe.multicore.patterns.facade.Facade.retrieveMediator","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",213,0x23145473)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mediatorName,"mediatorName")
	HX_STACK_LINE(213)
	return this->view->retrieveMediator(mediatorName);
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,retrieveMediator,return )

::org::puremvc::haxe::multicore::interfaces::IMediator Facade_obj::removeMediator( ::String mediatorName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","removeMediator",0xc4a5f11a,"org.puremvc.haxe.multicore.patterns.facade.Facade.removeMediator","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",220,0x23145473)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mediatorName,"mediatorName")
	HX_STACK_LINE(221)
	::org::puremvc::haxe::multicore::interfaces::IMediator mediator = null();		HX_STACK_VAR(mediator,"mediator");
	HX_STACK_LINE(222)
	if (((this->view != null()))){
		HX_STACK_LINE(222)
		::org::puremvc::haxe::multicore::interfaces::IMediator _g = this->view->removeMediator(mediatorName);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		mediator = _g;
	}
	HX_STACK_LINE(223)
	return mediator;
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,removeMediator,return )

bool Facade_obj::hasMediator( ::String mediatorName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","hasMediator",0xa7e6a14a,"org.puremvc.haxe.multicore.patterns.facade.Facade.hasMediator","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",231,0x23145473)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mediatorName,"mediatorName")
	HX_STACK_LINE(231)
	return this->view->hasMediator(mediatorName);
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,hasMediator,return )

Void Facade_obj::sendNotification( ::String notificationName,Dynamic body,::String type){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","sendNotification",0xe51b2f96,"org.puremvc.haxe.multicore.patterns.facade.Facade.sendNotification","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",241,0x23145473)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notificationName,"notificationName")
		HX_STACK_ARG(body,"body")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(242)
		::org::puremvc::haxe::multicore::patterns::observer::Notification _g = ::org::puremvc::haxe::multicore::patterns::observer::Notification_obj::__new(notificationName,body,type);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(242)
		this->notifyObservers(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Facade_obj,sendNotification,(void))

Void Facade_obj::notifyObservers( ::org::puremvc::haxe::multicore::interfaces::INotification notification){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","notifyObservers",0x84d001b1,"org.puremvc.haxe.multicore.patterns.facade.Facade.notifyObservers","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",250,0x23145473)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notification,"notification")
		HX_STACK_LINE(250)
		if (((this->view != null()))){
			HX_STACK_LINE(250)
			this->view->notifyObservers(notification);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,notifyObservers,(void))

Void Facade_obj::initializeNotifier( ::String key){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","initializeNotifier",0x074efad9,"org.puremvc.haxe.multicore.patterns.facade.Facade.initializeNotifier","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",263,0x23145473)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(263)
		this->multitonKey = key;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,initializeNotifier,(void))

Void Facade_obj::removeCore( ::String key){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","removeCore",0xf0b0e6c6,"org.puremvc.haxe.multicore.patterns.facade.Facade.removeCore","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",270,0x23145473)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(273)
		this->model->removeModel(key);
		HX_STACK_LINE(274)
		this->view->removeView(key);
		HX_STACK_LINE(275)
		this->controller->removeController(key);
		HX_STACK_LINE(276)
		::org::puremvc::haxe::multicore::patterns::facade::Facade_obj::instanceMap->remove(key);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,removeCore,(void))

::org::puremvc::haxe::multicore::interfaces::IFacade Facade_obj::getInstance( ::String key){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.facade.Facade","getInstance",0xe15915e8,"org.puremvc.haxe.multicore.patterns.facade.Facade.getInstance","org/puremvc/haxe/multicore/patterns/facade/Facade.hx",67,0x23145473)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(68)
	if ((!(::org::puremvc::haxe::multicore::patterns::facade::Facade_obj::instanceMap->exists(key)))){
		HX_STACK_LINE(68)
		::org::puremvc::haxe::multicore::patterns::facade::Facade _g = ::org::puremvc::haxe::multicore::patterns::facade::Facade_obj::__new(key);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		::org::puremvc::haxe::multicore::patterns::facade::Facade_obj::instanceMap->set(key,_g);
	}
	HX_STACK_LINE(69)
	return ::org::puremvc::haxe::multicore::patterns::facade::Facade_obj::instanceMap->get(key);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Facade_obj,getInstance,return )

::haxe::ds::StringMap Facade_obj::instanceMap;


Facade_obj::Facade_obj()
{
}

void Facade_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Facade);
	HX_MARK_MEMBER_NAME(controller,"controller");
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(multitonKey,"multitonKey");
	HX_MARK_END_CLASS();
}

void Facade_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(controller,"controller");
	HX_VISIT_MEMBER_NAME(model,"model");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(multitonKey,"multitonKey");
}

Dynamic Facade_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return model; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasProxy") ) { return hasProxy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasCommand") ) { return hasCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"removeCore") ) { return removeCore_dyn(); }
		if (HX_FIELD_EQ(inName,"controller") ) { return controller; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"instanceMap") ) { return instanceMap; }
		if (HX_FIELD_EQ(inName,"removeProxy") ) { return removeProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"hasMediator") ) { return hasMediator_dyn(); }
		if (HX_FIELD_EQ(inName,"multitonKey") ) { return multitonKey; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeCommand") ) { return removeCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"registerProxy") ) { return registerProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"retrieveProxy") ) { return retrieveProxy_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initializeView") ) { return initializeView_dyn(); }
		if (HX_FIELD_EQ(inName,"removeMediator") ) { return removeMediator_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initializeModel") ) { return initializeModel_dyn(); }
		if (HX_FIELD_EQ(inName,"registerCommand") ) { return registerCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"notifyObservers") ) { return notifyObservers_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initializeFacade") ) { return initializeFacade_dyn(); }
		if (HX_FIELD_EQ(inName,"registerMediator") ) { return registerMediator_dyn(); }
		if (HX_FIELD_EQ(inName,"retrieveMediator") ) { return retrieveMediator_dyn(); }
		if (HX_FIELD_EQ(inName,"sendNotification") ) { return sendNotification_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"initializeNotifier") ) { return initializeNotifier_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"initializeController") ) { return initializeController_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Facade_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::org::puremvc::haxe::multicore::interfaces::IView >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast< ::org::puremvc::haxe::multicore::interfaces::IModel >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { controller=inValue.Cast< ::org::puremvc::haxe::multicore::interfaces::IController >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"instanceMap") ) { instanceMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multitonKey") ) { multitonKey=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Facade_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("controller"));
	outFields->push(HX_CSTRING("model"));
	outFields->push(HX_CSTRING("view"));
	outFields->push(HX_CSTRING("multitonKey"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getInstance"),
	HX_CSTRING("instanceMap"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::puremvc::haxe::multicore::interfaces::IController*/ ,(int)offsetof(Facade_obj,controller),HX_CSTRING("controller")},
	{hx::fsObject /*::org::puremvc::haxe::multicore::interfaces::IModel*/ ,(int)offsetof(Facade_obj,model),HX_CSTRING("model")},
	{hx::fsObject /*::org::puremvc::haxe::multicore::interfaces::IView*/ ,(int)offsetof(Facade_obj,view),HX_CSTRING("view")},
	{hx::fsString,(int)offsetof(Facade_obj,multitonKey),HX_CSTRING("multitonKey")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("initializeFacade"),
	HX_CSTRING("initializeController"),
	HX_CSTRING("initializeModel"),
	HX_CSTRING("initializeView"),
	HX_CSTRING("registerCommand"),
	HX_CSTRING("removeCommand"),
	HX_CSTRING("hasCommand"),
	HX_CSTRING("registerProxy"),
	HX_CSTRING("retrieveProxy"),
	HX_CSTRING("removeProxy"),
	HX_CSTRING("hasProxy"),
	HX_CSTRING("registerMediator"),
	HX_CSTRING("retrieveMediator"),
	HX_CSTRING("removeMediator"),
	HX_CSTRING("hasMediator"),
	HX_CSTRING("sendNotification"),
	HX_CSTRING("notifyObservers"),
	HX_CSTRING("initializeNotifier"),
	HX_CSTRING("removeCore"),
	HX_CSTRING("controller"),
	HX_CSTRING("model"),
	HX_CSTRING("view"),
	HX_CSTRING("multitonKey"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Facade_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Facade_obj::instanceMap,"instanceMap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Facade_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Facade_obj::instanceMap,"instanceMap");
};

#endif

Class Facade_obj::__mClass;

void Facade_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.patterns.facade.Facade"), hx::TCanCast< Facade_obj> ,sStaticFields,sMemberFields,
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

void Facade_obj::__boot()
{
	instanceMap= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace patterns
} // end namespace facade
