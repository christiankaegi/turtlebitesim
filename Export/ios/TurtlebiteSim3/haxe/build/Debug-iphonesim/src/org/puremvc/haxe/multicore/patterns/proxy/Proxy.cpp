#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IProxy
#include <org/puremvc/haxe/multicore/interfaces/IProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_proxy_Proxy
#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace patterns{
namespace proxy{

Void Proxy_obj::__construct(::String proxyName,Dynamic data)
{
HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.proxy.Proxy","new",0x8be197fd,"org.puremvc.haxe.multicore.patterns.proxy.Proxy.new","org/puremvc/haxe/multicore/patterns/proxy/Proxy.hx",41,0x55125a55)
HX_STACK_THIS(this)
HX_STACK_ARG(proxyName,"proxyName")
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(42)
	super::__construct();
	HX_STACK_LINE(43)
	if (((proxyName != null()))){
		HX_STACK_LINE(43)
		this->proxyName = proxyName;
	}
	else{
		HX_STACK_LINE(43)
		this->proxyName = ::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj::NAME;
	}
	HX_STACK_LINE(44)
	if (((data != null()))){
		HX_STACK_LINE(44)
		this->setData(data);
	}
}
;
	return null();
}

//Proxy_obj::~Proxy_obj() { }

Dynamic Proxy_obj::__CreateEmpty() { return  new Proxy_obj; }
hx::ObjectPtr< Proxy_obj > Proxy_obj::__new(::String proxyName,Dynamic data)
{  hx::ObjectPtr< Proxy_obj > result = new Proxy_obj();
	result->__construct(proxyName,data);
	return result;}

Dynamic Proxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Proxy_obj > result = new Proxy_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Proxy_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::IProxy_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::IProxy_obj *();
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::INotifier_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::INotifier_obj *();
	return super::__ToInterface(inType);
}

::String Proxy_obj::getProxyName( ){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.proxy.Proxy","getProxyName",0x9f0ed526,"org.puremvc.haxe.multicore.patterns.proxy.Proxy.getProxyName","org/puremvc/haxe/multicore/patterns/proxy/Proxy.hx",52,0x55125a55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	return this->proxyName;
}


HX_DEFINE_DYNAMIC_FUNC0(Proxy_obj,getProxyName,return )

Void Proxy_obj::setData( Dynamic data){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.proxy.Proxy","setData",0x014df109,"org.puremvc.haxe.multicore.patterns.proxy.Proxy.setData","org/puremvc/haxe/multicore/patterns/proxy/Proxy.hx",60,0x55125a55)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(60)
		this->data = data;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Proxy_obj,setData,(void))

Dynamic Proxy_obj::getData( ){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.proxy.Proxy","getData",0x0e4c5ffd,"org.puremvc.haxe.multicore.patterns.proxy.Proxy.getData","org/puremvc/haxe/multicore/patterns/proxy/Proxy.hx",68,0x55125a55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return this->data;
}


HX_DEFINE_DYNAMIC_FUNC0(Proxy_obj,getData,return )

Void Proxy_obj::onRegister( ){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.proxy.Proxy","onRegister",0xa90f90a5,"org.puremvc.haxe.multicore.patterns.proxy.Proxy.onRegister","org/puremvc/haxe/multicore/patterns/proxy/Proxy.hx",75,0x55125a55)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Proxy_obj,onRegister,(void))

Void Proxy_obj::onRemove( ){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.proxy.Proxy","onRemove",0x245e1206,"org.puremvc.haxe.multicore.patterns.proxy.Proxy.onRemove","org/puremvc/haxe/multicore/patterns/proxy/Proxy.hx",83,0x55125a55)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Proxy_obj,onRemove,(void))

::String Proxy_obj::NAME;


Proxy_obj::Proxy_obj()
{
}

void Proxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Proxy);
	HX_MARK_MEMBER_NAME(proxyName,"proxyName");
	HX_MARK_MEMBER_NAME(data,"data");
	::org::puremvc::haxe::multicore::patterns::observer::Notifier_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Proxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(proxyName,"proxyName");
	HX_VISIT_MEMBER_NAME(data,"data");
	::org::puremvc::haxe::multicore::patterns::observer::Notifier_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Proxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setData") ) { return setData_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRemove") ) { return onRemove_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"proxyName") ) { return proxyName; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getProxyName") ) { return getProxyName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Proxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"proxyName") ) { proxyName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Proxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("proxyName"));
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Proxy_obj,proxyName),HX_CSTRING("proxyName")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Proxy_obj,data),HX_CSTRING("data")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getProxyName"),
	HX_CSTRING("setData"),
	HX_CSTRING("getData"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("onRemove"),
	HX_CSTRING("proxyName"),
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Proxy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Proxy_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Proxy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Proxy_obj::NAME,"NAME");
};

#endif

Class Proxy_obj::__mClass;

void Proxy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.patterns.proxy.Proxy"), hx::TCanCast< Proxy_obj> ,sStaticFields,sMemberFields,
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

void Proxy_obj::__boot()
{
	NAME= HX_CSTRING("Proxy");
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace patterns
} // end namespace proxy
