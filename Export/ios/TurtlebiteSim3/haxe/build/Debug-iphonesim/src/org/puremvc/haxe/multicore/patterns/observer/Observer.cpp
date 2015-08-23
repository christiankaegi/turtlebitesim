#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotification
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IObserver
#include <org/puremvc/haxe/multicore/interfaces/IObserver.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Observer
#include <org/puremvc/haxe/multicore/patterns/observer/Observer.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace patterns{
namespace observer{

Void Observer_obj::__construct(Dynamic notifyMethod,Dynamic notifyContext)
{
HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Observer","new",0xaf3d1efd,"org.puremvc.haxe.multicore.patterns.observer.Observer.new","org/puremvc/haxe/multicore/patterns/observer/Observer.hx",39,0xf7c41eb3)
HX_STACK_THIS(this)
HX_STACK_ARG(notifyMethod,"notifyMethod")
HX_STACK_ARG(notifyContext,"notifyContext")
{
	HX_STACK_LINE(40)
	this->setNotifyMethod(notifyMethod);
	HX_STACK_LINE(41)
	this->setNotifyContext(notifyContext);
}
;
	return null();
}

//Observer_obj::~Observer_obj() { }

Dynamic Observer_obj::__CreateEmpty() { return  new Observer_obj; }
hx::ObjectPtr< Observer_obj > Observer_obj::__new(Dynamic notifyMethod,Dynamic notifyContext)
{  hx::ObjectPtr< Observer_obj > result = new Observer_obj();
	result->__construct(notifyMethod,notifyContext);
	return result;}

Dynamic Observer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Observer_obj > result = new Observer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Observer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::IObserver_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::IObserver_obj *();
	return super::__ToInterface(inType);
}

Void Observer_obj::setNotifyMethod( Dynamic notifyMethod){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Observer","setNotifyMethod",0xeb8b1b69,"org.puremvc.haxe.multicore.patterns.observer.Observer.setNotifyMethod","org/puremvc/haxe/multicore/patterns/observer/Observer.hx",51,0xf7c41eb3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notifyMethod,"notifyMethod")
		HX_STACK_LINE(51)
		this->notify = notifyMethod;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Observer_obj,setNotifyMethod,(void))

Void Observer_obj::setNotifyContext( Dynamic notifyContext){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Observer","setNotifyContext",0x21676867,"org.puremvc.haxe.multicore.patterns.observer.Observer.setNotifyContext","org/puremvc/haxe/multicore/patterns/observer/Observer.hx",59,0xf7c41eb3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notifyContext,"notifyContext")
		HX_STACK_LINE(59)
		this->context = notifyContext;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Observer_obj,setNotifyContext,(void))

Dynamic Observer_obj::getNotifyMethod( ){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Observer","getNotifyMethod",0xefbf9e5d,"org.puremvc.haxe.multicore.patterns.observer.Observer.getNotifyMethod","org/puremvc/haxe/multicore/patterns/observer/Observer.hx",67,0xf7c41eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	return this->notify_dyn();
}


HX_DEFINE_DYNAMIC_FUNC0(Observer_obj,getNotifyMethod,return )

Dynamic Observer_obj::getNotifyContext( ){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Observer","getNotifyContext",0xcb257af3,"org.puremvc.haxe.multicore.patterns.observer.Observer.getNotifyContext","org/puremvc/haxe/multicore/patterns/observer/Observer.hx",75,0xf7c41eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	return this->context;
}


HX_DEFINE_DYNAMIC_FUNC0(Observer_obj,getNotifyContext,return )

Void Observer_obj::notifyObserver( ::org::puremvc::haxe::multicore::interfaces::INotification notification){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Observer","notifyObserver",0x5a31f082,"org.puremvc.haxe.multicore.patterns.observer.Observer.notifyObserver","org/puremvc/haxe/multicore/patterns/observer/Observer.hx",83,0xf7c41eb3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notification,"notification")
		HX_STACK_LINE(83)
		this->getNotifyMethod()(notification).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Observer_obj,notifyObserver,(void))

bool Observer_obj::compareNotifyContext( Dynamic object){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Observer","compareNotifyContext",0x3f522304,"org.puremvc.haxe.multicore.patterns.observer.Observer.compareNotifyContext","org/puremvc/haxe/multicore/patterns/observer/Observer.hx",91,0xf7c41eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(91)
	return (object == this->context);
}


HX_DEFINE_DYNAMIC_FUNC1(Observer_obj,compareNotifyContext,return )


Observer_obj::Observer_obj()
{
}

void Observer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Observer);
	HX_MARK_MEMBER_NAME(notify,"notify");
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_END_CLASS();
}

void Observer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(notify,"notify");
	HX_VISIT_MEMBER_NAME(context,"context");
}

Dynamic Observer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { return notify; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"notifyObserver") ) { return notifyObserver_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setNotifyMethod") ) { return setNotifyMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"getNotifyMethod") ) { return getNotifyMethod_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setNotifyContext") ) { return setNotifyContext_dyn(); }
		if (HX_FIELD_EQ(inName,"getNotifyContext") ) { return getNotifyContext_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"compareNotifyContext") ) { return compareNotifyContext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Observer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { notify=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Observer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("context"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Observer_obj,notify),HX_CSTRING("notify")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Observer_obj,context),HX_CSTRING("context")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("notify"),
	HX_CSTRING("context"),
	HX_CSTRING("setNotifyMethod"),
	HX_CSTRING("setNotifyContext"),
	HX_CSTRING("getNotifyMethod"),
	HX_CSTRING("getNotifyContext"),
	HX_CSTRING("notifyObserver"),
	HX_CSTRING("compareNotifyContext"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Observer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Observer_obj::__mClass,"__mClass");
};

#endif

Class Observer_obj::__mClass;

void Observer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.patterns.observer.Observer"), hx::TCanCast< Observer_obj> ,sStaticFields,sMemberFields,
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

void Observer_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace patterns
} // end namespace observer
