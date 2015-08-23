#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_model_data_BusData
#include <model/data/BusData.h>
#endif
#ifndef INCLUDED_model_proxy_BusProxy
#include <model/proxy/BusProxy.h>
#endif
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
namespace model{
namespace proxy{

Void BusProxy_obj::__construct(::model::data::BusData data)
{
HX_STACK_FRAME("model.proxy.BusProxy","new",0xd5ce1ec5,"model.proxy.BusProxy.new","model/proxy/BusProxy.hx",9,0x70a5fcc9)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(9)
	super::__construct(::model::proxy::BusProxy_obj::NAME,data);
}
;
	return null();
}

//BusProxy_obj::~BusProxy_obj() { }

Dynamic BusProxy_obj::__CreateEmpty() { return  new BusProxy_obj; }
hx::ObjectPtr< BusProxy_obj > BusProxy_obj::__new(::model::data::BusData data)
{  hx::ObjectPtr< BusProxy_obj > result = new BusProxy_obj();
	result->__construct(data);
	return result;}

Dynamic BusProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BusProxy_obj > result = new BusProxy_obj();
	result->__construct(inArgs[0]);
	return result;}

Void BusProxy_obj::onRegister( ){
{
		HX_STACK_FRAME("model.proxy.BusProxy","onRegister",0xcbc8f2dd,"model.proxy.BusProxy.onRegister","model/proxy/BusProxy.hx",13,0x70a5fcc9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13)
		this->sendNotification(::AppConstants_obj::PROXY_INITIALIZED,null(),::model::proxy::BusProxy_obj::NAME);
	}
return null();
}


Dynamic BusProxy_obj::getData( ){
	HX_STACK_FRAME("model.proxy.BusProxy","getData",0x9817eac5,"model.proxy.BusProxy.getData","model/proxy/BusProxy.hx",18,0x70a5fcc9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return this->data;
}


::String BusProxy_obj::NAME;


BusProxy_obj::BusProxy_obj()
{
}

Dynamic BusProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BusProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BusProxy_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("getData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BusProxy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BusProxy_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BusProxy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BusProxy_obj::NAME,"NAME");
};

#endif

Class BusProxy_obj::__mClass;

void BusProxy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.proxy.BusProxy"), hx::TCanCast< BusProxy_obj> ,sStaticFields,sMemberFields,
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

void BusProxy_obj::__boot()
{
	NAME= HX_CSTRING("BusProxy");
}

} // end namespace model
} // end namespace proxy
