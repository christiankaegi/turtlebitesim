#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_model_data_SnapshotData
#include <model/data/SnapshotData.h>
#endif
#ifndef INCLUDED_model_proxy_SnapshotProxy
#include <model/proxy/SnapshotProxy.h>
#endif
#ifndef INCLUDED_model_vo_DecHexVO
#include <model/vo/DecHexVO.h>
#endif
#ifndef INCLUDED_model_vo_SnapshotVO
#include <model/vo/SnapshotVO.h>
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
#ifndef INCLUDED_utilities_NumberFormat
#include <utilities/NumberFormat.h>
#endif
namespace model{
namespace proxy{

Void SnapshotProxy_obj::__construct(::model::data::SnapshotData data)
{
HX_STACK_FRAME("model.proxy.SnapshotProxy","new",0xddee2797,"model.proxy.SnapshotProxy.new","model/proxy/SnapshotProxy.hx",18,0x76f1b27b)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(18)
	super::__construct(::model::proxy::SnapshotProxy_obj::NAME,data);
}
;
	return null();
}

//SnapshotProxy_obj::~SnapshotProxy_obj() { }

Dynamic SnapshotProxy_obj::__CreateEmpty() { return  new SnapshotProxy_obj; }
hx::ObjectPtr< SnapshotProxy_obj > SnapshotProxy_obj::__new(::model::data::SnapshotData data)
{  hx::ObjectPtr< SnapshotProxy_obj > result = new SnapshotProxy_obj();
	result->__construct(data);
	return result;}

Dynamic SnapshotProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SnapshotProxy_obj > result = new SnapshotProxy_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SnapshotProxy_obj::onRegister( ){
{
		HX_STACK_FRAME("model.proxy.SnapshotProxy","onRegister",0x869b884b,"model.proxy.SnapshotProxy.onRegister","model/proxy/SnapshotProxy.hx",22,0x76f1b27b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->sendNotification(::AppConstants_obj::PROXY_INITIALIZED,null(),::model::proxy::SnapshotProxy_obj::NAME);
	}
return null();
}


Void SnapshotProxy_obj::setRegister1( ::String value){
{
		HX_STACK_FRAME("model.proxy.SnapshotProxy","setRegister1",0x1d443a55,"model.proxy.SnapshotProxy.setRegister1","model/proxy/SnapshotProxy.hx",25,0x76f1b27b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(26)
		::model::vo::SnapshotVO _g = this->getSnapshot(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		this->getData()->__FieldRef(HX_CSTRING("register1")) = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SnapshotProxy_obj,setRegister1,(void))

::model::vo::SnapshotVO SnapshotProxy_obj::getRegister1( ){
	HX_STACK_FRAME("model.proxy.SnapshotProxy","getRegister1",0x084b16e1,"model.proxy.SnapshotProxy.getRegister1","model/proxy/SnapshotProxy.hx",30,0x76f1b27b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return this->getData()->__Field(HX_CSTRING("register1"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(SnapshotProxy_obj,getRegister1,return )

Void SnapshotProxy_obj::setRegister2( ::String value){
{
		HX_STACK_FRAME("model.proxy.SnapshotProxy","setRegister2",0x1d443a56,"model.proxy.SnapshotProxy.setRegister2","model/proxy/SnapshotProxy.hx",33,0x76f1b27b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(34)
		::model::vo::SnapshotVO _g = this->getSnapshot(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		this->getData()->__FieldRef(HX_CSTRING("register2")) = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SnapshotProxy_obj,setRegister2,(void))

::model::vo::SnapshotVO SnapshotProxy_obj::getRegister2( ){
	HX_STACK_FRAME("model.proxy.SnapshotProxy","getRegister2",0x084b16e2,"model.proxy.SnapshotProxy.getRegister2","model/proxy/SnapshotProxy.hx",38,0x76f1b27b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return this->getData()->__Field(HX_CSTRING("register2"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(SnapshotProxy_obj,getRegister2,return )

Void SnapshotProxy_obj::setAccumulator( ::String value){
{
		HX_STACK_FRAME("model.proxy.SnapshotProxy","setAccumulator",0xdf641aed,"model.proxy.SnapshotProxy.setAccumulator","model/proxy/SnapshotProxy.hx",41,0x76f1b27b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(42)
		::model::vo::SnapshotVO _g = this->getSnapshot(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		this->getData()->__FieldRef(HX_CSTRING("accumulator")) = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SnapshotProxy_obj,setAccumulator,(void))

::model::vo::SnapshotVO SnapshotProxy_obj::getAccumulator( ){
	HX_STACK_FRAME("model.proxy.SnapshotProxy","getAccumulator",0xbf443279,"model.proxy.SnapshotProxy.getAccumulator","model/proxy/SnapshotProxy.hx",46,0x76f1b27b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return this->getData()->__Field(HX_CSTRING("accumulator"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(SnapshotProxy_obj,getAccumulator,return )

Void SnapshotProxy_obj::setRam( ::model::vo::SnapshotVO vo,int pointer){
{
		HX_STACK_FRAME("model.proxy.SnapshotProxy","setRam",0x33ff2885,"model.proxy.SnapshotProxy.setRam","model/proxy/SnapshotProxy.hx",50,0x76f1b27b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vo,"vo")
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(50)
		hx::IndexRef((this->getData()->__Field(HX_CSTRING("ram"),true)).mPtr,pointer) = vo;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SnapshotProxy_obj,setRam,(void))

Array< ::Dynamic > SnapshotProxy_obj::getRam( ){
	HX_STACK_FRAME("model.proxy.SnapshotProxy","getRam",0x67b6d411,"model.proxy.SnapshotProxy.getRam","model/proxy/SnapshotProxy.hx",54,0x76f1b27b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return this->getData()->__Field(HX_CSTRING("ram"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(SnapshotProxy_obj,getRam,return )

Void SnapshotProxy_obj::reset( ){
{
		HX_STACK_FRAME("model.proxy.SnapshotProxy","reset",0x21101cc6,"model.proxy.SnapshotProxy.reset","model/proxy/SnapshotProxy.hx",58,0x76f1b27b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		this->getData()->__Field(HX_CSTRING("reset"),true)();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SnapshotProxy_obj,reset,(void))

::model::vo::SnapshotVO SnapshotProxy_obj::getSnapshot( ::String value){
	HX_STACK_FRAME("model.proxy.SnapshotProxy","getSnapshot",0xabcec131,"model.proxy.SnapshotProxy.getSnapshot","model/proxy/SnapshotProxy.hx",61,0x76f1b27b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(62)
	::model::vo::DecHexVO decHex = ::utilities::NumberFormat_obj::binaryToDecimal(value);		HX_STACK_VAR(decHex,"decHex");
	HX_STACK_LINE(63)
	return ::model::vo::SnapshotVO_obj::__new(value,decHex->hex,decHex->dec);
}


HX_DEFINE_DYNAMIC_FUNC1(SnapshotProxy_obj,getSnapshot,return )

Dynamic SnapshotProxy_obj::getData( ){
	HX_STACK_FRAME("model.proxy.SnapshotProxy","getData",0x4f01c497,"model.proxy.SnapshotProxy.getData","model/proxy/SnapshotProxy.hx",67,0x76f1b27b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	return this->data;
}


::String SnapshotProxy_obj::NAME;


SnapshotProxy_obj::SnapshotProxy_obj()
{
}

Dynamic SnapshotProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setRam") ) { return setRam_dyn(); }
		if (HX_FIELD_EQ(inName,"getRam") ) { return getRam_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getSnapshot") ) { return getSnapshot_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setRegister1") ) { return setRegister1_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegister1") ) { return getRegister1_dyn(); }
		if (HX_FIELD_EQ(inName,"setRegister2") ) { return setRegister2_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegister2") ) { return getRegister2_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setAccumulator") ) { return setAccumulator_dyn(); }
		if (HX_FIELD_EQ(inName,"getAccumulator") ) { return getAccumulator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SnapshotProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SnapshotProxy_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("setRegister1"),
	HX_CSTRING("getRegister1"),
	HX_CSTRING("setRegister2"),
	HX_CSTRING("getRegister2"),
	HX_CSTRING("setAccumulator"),
	HX_CSTRING("getAccumulator"),
	HX_CSTRING("setRam"),
	HX_CSTRING("getRam"),
	HX_CSTRING("reset"),
	HX_CSTRING("getSnapshot"),
	HX_CSTRING("getData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SnapshotProxy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SnapshotProxy_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SnapshotProxy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SnapshotProxy_obj::NAME,"NAME");
};

#endif

Class SnapshotProxy_obj::__mClass;

void SnapshotProxy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.proxy.SnapshotProxy"), hx::TCanCast< SnapshotProxy_obj> ,sStaticFields,sMemberFields,
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

void SnapshotProxy_obj::__boot()
{
	NAME= HX_CSTRING("SnapshotProxy");
}

} // end namespace model
} // end namespace proxy
