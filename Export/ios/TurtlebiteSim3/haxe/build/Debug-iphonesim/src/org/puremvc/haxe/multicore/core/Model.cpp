#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_core_Model
#include <org/puremvc/haxe/multicore/core/Model.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IModel
#include <org/puremvc/haxe/multicore/interfaces/IModel.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IProxy
#include <org/puremvc/haxe/multicore/interfaces/IProxy.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace core{

Void Model_obj::__construct(::String key)
{
HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Model","new",0xf4f4d934,"org.puremvc.haxe.multicore.core.Model.new","org/puremvc/haxe/multicore/core/Model.hx",43,0x98a66d3d)
HX_STACK_THIS(this)
HX_STACK_ARG(key,"key")
{
	HX_STACK_LINE(44)
	this->multitonKey = key;
	HX_STACK_LINE(45)
	::org::puremvc::haxe::multicore::core::Model_obj::instanceMap->set(this->multitonKey,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(46)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	this->proxyMap = _g;
	HX_STACK_LINE(47)
	this->initializeModel();
}
;
	return null();
}

//Model_obj::~Model_obj() { }

Dynamic Model_obj::__CreateEmpty() { return  new Model_obj; }
hx::ObjectPtr< Model_obj > Model_obj::__new(::String key)
{  hx::ObjectPtr< Model_obj > result = new Model_obj();
	result->__construct(key);
	return result;}

Dynamic Model_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Model_obj > result = new Model_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *Model_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::IModel_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::IModel_obj *();
	return super::__ToInterface(inType);
}

Void Model_obj::initializeModel( ){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Model","initializeModel",0xcf9a970d,"org.puremvc.haxe.multicore.core.Model.initializeModel","org/puremvc/haxe/multicore/core/Model.hx",57,0x98a66d3d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,initializeModel,(void))

Void Model_obj::registerProxy( ::org::puremvc::haxe::multicore::interfaces::IProxy proxy){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Model","registerProxy",0xd1648adf,"org.puremvc.haxe.multicore.core.Model.registerProxy","org/puremvc/haxe/multicore/core/Model.hx",74,0x98a66d3d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(proxy,"proxy")
		HX_STACK_LINE(75)
		proxy->__Field(HX_CSTRING("initializeNotifier"),true)(this->multitonKey);
		HX_STACK_LINE(76)
		::String _g = proxy->getProxyName();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		this->proxyMap->set(_g,proxy);
		HX_STACK_LINE(77)
		proxy->onRegister();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,registerProxy,(void))

::org::puremvc::haxe::multicore::interfaces::IProxy Model_obj::retrieveProxy( ::String proxyName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Model","retrieveProxy",0x18349c26,"org.puremvc.haxe.multicore.core.Model.retrieveProxy","org/puremvc/haxe/multicore/core/Model.hx",85,0x98a66d3d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(proxyName,"proxyName")
	HX_STACK_LINE(85)
	return this->proxyMap->get(proxyName);
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,retrieveProxy,return )

bool Model_obj::hasProxy( ::String proxyName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Model","hasProxy",0x9732af60,"org.puremvc.haxe.multicore.core.Model.hasProxy","org/puremvc/haxe/multicore/core/Model.hx",93,0x98a66d3d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(proxyName,"proxyName")
	HX_STACK_LINE(93)
	return this->proxyMap->exists(proxyName);
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,hasProxy,return )

::org::puremvc::haxe::multicore::interfaces::IProxy Model_obj::removeProxy( ::String proxyName){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Model","removeProxy",0xff97c85e,"org.puremvc.haxe.multicore.core.Model.removeProxy","org/puremvc/haxe/multicore/core/Model.hx",100,0x98a66d3d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(proxyName,"proxyName")
	HX_STACK_LINE(101)
	::org::puremvc::haxe::multicore::interfaces::IProxy proxy = this->proxyMap->get(proxyName);		HX_STACK_VAR(proxy,"proxy");
	HX_STACK_LINE(102)
	if (((proxy != null()))){
		HX_STACK_LINE(104)
		this->proxyMap->remove(proxyName);
		HX_STACK_LINE(105)
		proxy->onRemove();
	}
	HX_STACK_LINE(107)
	return proxy;
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,removeProxy,return )

Void Model_obj::removeModel( ::String key){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Model","removeModel",0x435ffd99,"org.puremvc.haxe.multicore.core.Model.removeModel","org/puremvc/haxe/multicore/core/Model.hx",115,0x98a66d3d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(115)
		::org::puremvc::haxe::multicore::core::Model_obj::instanceMap->remove(key);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,removeModel,(void))

::org::puremvc::haxe::multicore::interfaces::IModel Model_obj::getInstance( ::String key){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.core.Model","getInstance",0xb8a8df1f,"org.puremvc.haxe.multicore.core.Model.getInstance","org/puremvc/haxe/multicore/core/Model.hx",64,0x98a66d3d)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(65)
	if (((::org::puremvc::haxe::multicore::core::Model_obj::instanceMap == null()))){
		HX_STACK_LINE(65)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		::org::puremvc::haxe::multicore::core::Model_obj::instanceMap = _g;
	}
	HX_STACK_LINE(66)
	if ((!(::org::puremvc::haxe::multicore::core::Model_obj::instanceMap->exists(key)))){
		HX_STACK_LINE(66)
		::org::puremvc::haxe::multicore::core::Model _g1 = ::org::puremvc::haxe::multicore::core::Model_obj::__new(key);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(66)
		::org::puremvc::haxe::multicore::core::Model_obj::instanceMap->set(key,_g1);
	}
	HX_STACK_LINE(67)
	return ::org::puremvc::haxe::multicore::core::Model_obj::instanceMap->get(key);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Model_obj,getInstance,return )

::haxe::ds::StringMap Model_obj::instanceMap;


Model_obj::Model_obj()
{
}

void Model_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Model);
	HX_MARK_MEMBER_NAME(proxyMap,"proxyMap");
	HX_MARK_MEMBER_NAME(multitonKey,"multitonKey");
	HX_MARK_END_CLASS();
}

void Model_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(proxyMap,"proxyMap");
	HX_VISIT_MEMBER_NAME(multitonKey,"multitonKey");
}

Dynamic Model_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"hasProxy") ) { return hasProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"proxyMap") ) { return proxyMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"instanceMap") ) { return instanceMap; }
		if (HX_FIELD_EQ(inName,"removeProxy") ) { return removeProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"removeModel") ) { return removeModel_dyn(); }
		if (HX_FIELD_EQ(inName,"multitonKey") ) { return multitonKey; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"registerProxy") ) { return registerProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"retrieveProxy") ) { return retrieveProxy_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initializeModel") ) { return initializeModel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Model_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"proxyMap") ) { proxyMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"instanceMap") ) { instanceMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multitonKey") ) { multitonKey=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Model_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("proxyMap"));
	outFields->push(HX_CSTRING("multitonKey"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getInstance"),
	HX_CSTRING("instanceMap"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Model_obj,proxyMap),HX_CSTRING("proxyMap")},
	{hx::fsString,(int)offsetof(Model_obj,multitonKey),HX_CSTRING("multitonKey")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("initializeModel"),
	HX_CSTRING("registerProxy"),
	HX_CSTRING("retrieveProxy"),
	HX_CSTRING("hasProxy"),
	HX_CSTRING("removeProxy"),
	HX_CSTRING("removeModel"),
	HX_CSTRING("proxyMap"),
	HX_CSTRING("multitonKey"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Model_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Model_obj::instanceMap,"instanceMap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Model_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Model_obj::instanceMap,"instanceMap");
};

#endif

Class Model_obj::__mClass;

void Model_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.core.Model"), hx::TCanCast< Model_obj> ,sStaticFields,sMemberFields,
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

void Model_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace core
