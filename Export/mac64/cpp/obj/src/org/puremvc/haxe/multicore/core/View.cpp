#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_core_View
#include <org/puremvc/haxe/multicore/core/View.h>
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

Void View_obj::__construct(::String key)
{
HX_STACK_FRAME("org.puremvc.haxe.multicore.core.View","new",0x907ba3de,"org.puremvc.haxe.multicore.core.View.new","org/puremvc/haxe/multicore/core/View.hx",47,0xbb64a7f1)
HX_STACK_THIS(this)
HX_STACK_ARG(key,"key")
{
	HX_STACK_LINE(48)
	this->multitonKey = key;
	HX_STACK_LINE(49)
	::org::puremvc::haxe::multicore::core::View_obj::instanceMap->set(this->multitonKey,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(50)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	this->mediatorMap = _g;
	HX_STACK_LINE(51)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(51)
	this->observerMap = _g1;
	HX_STACK_LINE(52)
	this->initializeView();
}
;
	return null();
}

//View_obj::~View_obj() { }

Dynamic View_obj::__CreateEmpty() { return  new View_obj; }
hx::ObjectPtr< View_obj > View_obj::__new(::String key)
{  hx::ObjectPtr< View_obj > result = new View_obj();
	result->__construct(key);
	return result;}

Dynamic View_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< View_obj > result = new View_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *View_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::IView_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::IView_obj *();
	return super::__ToInterface(inType);
}

Void View_obj::initializeView( ){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.View","initializeView",0x98a97917,"org.puremvc.haxe.multicore.core.View.initializeView","org/puremvc/haxe/multicore/core/View.hx",62,0xbb64a7f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(View_obj,initializeView,(void))

Void View_obj::registerObserver( ::String notificationName,::org::puremvc::haxe::multicore::interfaces::IObserver observer){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.View","registerObserver",0xf5908f5b,"org.puremvc.haxe.multicore.core.View.registerObserver","org/puremvc/haxe/multicore/core/View.hx",79,0xbb64a7f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notificationName,"notificationName")
		HX_STACK_ARG(observer,"observer")
		HX_STACK_LINE(80)
		if ((!(this->observerMap->exists(notificationName)))){
			HX_STACK_LINE(81)
			::List _g = ::List_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			this->observerMap->set(notificationName,_g);
		}
		HX_STACK_LINE(82)
		this->observerMap->get(notificationName)->__Field(HX_CSTRING("add"),true)(observer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(View_obj,registerObserver,(void))

Void View_obj::notifyObservers( ::org::puremvc::haxe::multicore::interfaces::INotification notification){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.View","notifyObservers",0xe6a35412,"org.puremvc.haxe.multicore.core.View.notifyObservers","org/puremvc/haxe/multicore/core/View.hx",93,0xbb64a7f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notification,"notification")
		HX_STACK_LINE(94)
		::String _g = notification->getName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		if ((this->observerMap->exists(_g))){
			HX_STACK_LINE(96)
			::String _g1 = notification->getName();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(96)
			Dynamic iterator = this->observerMap->get(_g1)->__Field(HX_CSTRING("iterator"),true)();		HX_STACK_VAR(iterator,"iterator");
			HX_STACK_LINE(97)
			for(::cpp::FastIterator_obj< ::org::puremvc::haxe::multicore::interfaces::IObserver > *__it = ::cpp::CreateFastIterator< ::org::puremvc::haxe::multicore::interfaces::IObserver >(iterator);  __it->hasNext(); ){
				::org::puremvc::haxe::multicore::interfaces::IObserver observer = __it->next();
				observer->notifyObserver(notification);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,notifyObservers,(void))

Void View_obj::removeObserver( ::String notificationName,Dynamic notifyContext){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.View","removeObserver",0x376f79bc,"org.puremvc.haxe.multicore.core.View.removeObserver","org/puremvc/haxe/multicore/core/View.hx",106,0xbb64a7f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notificationName,"notificationName")
		HX_STACK_ARG(notifyContext,"notifyContext")
		HX_STACK_LINE(108)
		::List observers = this->observerMap->get(notificationName);		HX_STACK_VAR(observers,"observers");
		HX_STACK_LINE(111)
		for(::cpp::FastIterator_obj< ::org::puremvc::haxe::multicore::interfaces::IObserver > *__it = ::cpp::CreateFastIterator< ::org::puremvc::haxe::multicore::interfaces::IObserver >(observers->iterator());  __it->hasNext(); ){
			::org::puremvc::haxe::multicore::interfaces::IObserver observer = __it->next();
			{
				HX_STACK_LINE(113)
				bool _g = observer->compareNotifyContext(notifyContext);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(113)
				if (((_g == true))){
					HX_STACK_LINE(117)
					observers->remove(observer);
					HX_STACK_LINE(118)
					break;
				}
			}
;
		}
		HX_STACK_LINE(124)
		if ((observers->isEmpty())){
			HX_STACK_LINE(126)
			this->observerMap->remove(notificationName);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(View_obj,removeObserver,(void))

Void View_obj::registerMediator( ::org::puremvc::haxe::multicore::interfaces::IMediator mediator){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.View","registerMediator",0x42eddb78,"org.puremvc.haxe.multicore.core.View.registerMediator","org/puremvc/haxe/multicore/core/View.hx",143,0xbb64a7f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mediator,"mediator")
		HX_STACK_LINE(144)
		mediator->__Field(HX_CSTRING("initializeNotifier"),true)(this->multitonKey);
		HX_STACK_LINE(147)
		::String _g = mediator->getMediatorName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(147)
		this->mediatorMap->set(_g,mediator);
		HX_STACK_LINE(150)
		Array< ::String > interests = mediator->listNotificationInterests();		HX_STACK_VAR(interests,"interests");
		HX_STACK_LINE(151)
		if (((interests->length > (int)0))){
			HX_STACK_LINE(154)
			::org::puremvc::haxe::multicore::patterns::observer::Observer observer = ::org::puremvc::haxe::multicore::patterns::observer::Observer_obj::__new(mediator->handleNotification_dyn(),mediator);		HX_STACK_VAR(observer,"observer");
			HX_STACK_LINE(157)
			{
				HX_STACK_LINE(157)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(157)
				int _g2 = interests->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(157)
				while((true)){
					HX_STACK_LINE(157)
					if ((!(((_g1 < _g2))))){
						HX_STACK_LINE(157)
						break;
					}
					HX_STACK_LINE(157)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(158)
					this->registerObserver(interests->__get(i),observer);
				}
			}
		}
		HX_STACK_LINE(161)
		mediator->onRegister();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,registerMediator,(void))

::org::puremvc::haxe::multicore::interfaces::IMediator View_obj::retrieveMediator( ::String mediatorName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.core.View","retrieveMediator",0x89ac9091,"org.puremvc.haxe.multicore.core.View.retrieveMediator","org/puremvc/haxe/multicore/core/View.hx",169,0xbb64a7f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mediatorName,"mediatorName")
	HX_STACK_LINE(169)
	return this->mediatorMap->get(mediatorName);
}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,retrieveMediator,return )

::org::puremvc::haxe::multicore::interfaces::IMediator View_obj::removeMediator( ::String mediatorName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.core.View","removeMediator",0x84ccc5d9,"org.puremvc.haxe.multicore.core.View.removeMediator","org/puremvc/haxe/multicore/core/View.hx",176,0xbb64a7f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mediatorName,"mediatorName")
	HX_STACK_LINE(178)
	::org::puremvc::haxe::multicore::interfaces::IMediator mediator = this->mediatorMap->get(mediatorName);		HX_STACK_VAR(mediator,"mediator");
	HX_STACK_LINE(180)
	if (((mediator != null()))){
		HX_STACK_LINE(183)
		Array< ::String > interests = mediator->listNotificationInterests();		HX_STACK_VAR(interests,"interests");
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(184)
			int _g = interests->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(184)
			while((true)){
				HX_STACK_LINE(184)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(184)
					break;
				}
				HX_STACK_LINE(184)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(188)
				this->removeObserver(interests->__get(i),mediator);
			}
		}
		HX_STACK_LINE(192)
		this->mediatorMap->remove(mediatorName);
		HX_STACK_LINE(195)
		mediator->onRemove();
	}
	HX_STACK_LINE(198)
	return mediator;
}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,removeMediator,return )

bool View_obj::hasMediator( ::String mediatorName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.core.View","hasMediator",0xa1e6ef2b,"org.puremvc.haxe.multicore.core.View.hasMediator","org/puremvc/haxe/multicore/core/View.hx",206,0xbb64a7f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mediatorName,"mediatorName")
	HX_STACK_LINE(206)
	return this->mediatorMap->exists(mediatorName);
}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,hasMediator,return )

Void View_obj::removeView( ::String key){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.View","removeView",0x590b250b,"org.puremvc.haxe.multicore.core.View.removeView","org/puremvc/haxe/multicore/core/View.hx",214,0xbb64a7f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(214)
		::org::puremvc::haxe::multicore::core::View_obj::instanceMap->remove(key);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,removeView,(void))

::org::puremvc::haxe::multicore::interfaces::IView View_obj::getInstance( ::String key){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.core.View","getInstance",0xdb5963c9,"org.puremvc.haxe.multicore.core.View.getInstance","org/puremvc/haxe/multicore/core/View.hx",69,0xbb64a7f1)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(70)
	if (((::org::puremvc::haxe::multicore::core::View_obj::instanceMap == null()))){
		HX_STACK_LINE(70)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		::org::puremvc::haxe::multicore::core::View_obj::instanceMap = _g;
	}
	HX_STACK_LINE(71)
	if ((!(::org::puremvc::haxe::multicore::core::View_obj::instanceMap->exists(key)))){
		HX_STACK_LINE(71)
		::org::puremvc::haxe::multicore::core::View _g1 = ::org::puremvc::haxe::multicore::core::View_obj::__new(key);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		::org::puremvc::haxe::multicore::core::View_obj::instanceMap->set(key,_g1);
	}
	HX_STACK_LINE(72)
	return ::org::puremvc::haxe::multicore::core::View_obj::instanceMap->get(key);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(View_obj,getInstance,return )

::haxe::ds::StringMap View_obj::instanceMap;


View_obj::View_obj()
{
}

void View_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(View);
	HX_MARK_MEMBER_NAME(mediatorMap,"mediatorMap");
	HX_MARK_MEMBER_NAME(observerMap,"observerMap");
	HX_MARK_MEMBER_NAME(multitonKey,"multitonKey");
	HX_MARK_END_CLASS();
}

void View_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mediatorMap,"mediatorMap");
	HX_VISIT_MEMBER_NAME(observerMap,"observerMap");
	HX_VISIT_MEMBER_NAME(multitonKey,"multitonKey");
}

Dynamic View_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"removeView") ) { return removeView_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"instanceMap") ) { return instanceMap; }
		if (HX_FIELD_EQ(inName,"hasMediator") ) { return hasMediator_dyn(); }
		if (HX_FIELD_EQ(inName,"mediatorMap") ) { return mediatorMap; }
		if (HX_FIELD_EQ(inName,"observerMap") ) { return observerMap; }
		if (HX_FIELD_EQ(inName,"multitonKey") ) { return multitonKey; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initializeView") ) { return initializeView_dyn(); }
		if (HX_FIELD_EQ(inName,"removeObserver") ) { return removeObserver_dyn(); }
		if (HX_FIELD_EQ(inName,"removeMediator") ) { return removeMediator_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"notifyObservers") ) { return notifyObservers_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerObserver") ) { return registerObserver_dyn(); }
		if (HX_FIELD_EQ(inName,"registerMediator") ) { return registerMediator_dyn(); }
		if (HX_FIELD_EQ(inName,"retrieveMediator") ) { return retrieveMediator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic View_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"instanceMap") ) { instanceMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mediatorMap") ) { mediatorMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"observerMap") ) { observerMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multitonKey") ) { multitonKey=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void View_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mediatorMap"));
	outFields->push(HX_CSTRING("observerMap"));
	outFields->push(HX_CSTRING("multitonKey"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getInstance"),
	HX_CSTRING("instanceMap"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(View_obj,mediatorMap),HX_CSTRING("mediatorMap")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(View_obj,observerMap),HX_CSTRING("observerMap")},
	{hx::fsString,(int)offsetof(View_obj,multitonKey),HX_CSTRING("multitonKey")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("initializeView"),
	HX_CSTRING("registerObserver"),
	HX_CSTRING("notifyObservers"),
	HX_CSTRING("removeObserver"),
	HX_CSTRING("registerMediator"),
	HX_CSTRING("retrieveMediator"),
	HX_CSTRING("removeMediator"),
	HX_CSTRING("hasMediator"),
	HX_CSTRING("removeView"),
	HX_CSTRING("mediatorMap"),
	HX_CSTRING("observerMap"),
	HX_CSTRING("multitonKey"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(View_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(View_obj::instanceMap,"instanceMap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(View_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(View_obj::instanceMap,"instanceMap");
};

#endif

Class View_obj::__mClass;

void View_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.core.View"), hx::TCanCast< View_obj> ,sStaticFields,sMemberFields,
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

void View_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace core
