#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_model_data_ProgramData
#include <model/data/ProgramData.h>
#endif
#ifndef INCLUDED_model_proxy_ProgramProxy
#include <model/proxy/ProgramProxy.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
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

Void ProgramProxy_obj::__construct(::model::data::ProgramData data)
{
HX_STACK_FRAME("model.proxy.ProgramProxy","new",0xc8b05581,"model.proxy.ProgramProxy.new","model/proxy/ProgramProxy.hx",10,0xf695088d)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(10)
	super::__construct(::model::proxy::ProgramProxy_obj::NAME,data);
}
;
	return null();
}

//ProgramProxy_obj::~ProgramProxy_obj() { }

Dynamic ProgramProxy_obj::__CreateEmpty() { return  new ProgramProxy_obj; }
hx::ObjectPtr< ProgramProxy_obj > ProgramProxy_obj::__new(::model::data::ProgramData data)
{  hx::ObjectPtr< ProgramProxy_obj > result = new ProgramProxy_obj();
	result->__construct(data);
	return result;}

Dynamic ProgramProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProgramProxy_obj > result = new ProgramProxy_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ProgramProxy_obj::onRegister( ){
{
		HX_STACK_FRAME("model.proxy.ProgramProxy","onRegister",0x7e454ba1,"model.proxy.ProgramProxy.onRegister","model/proxy/ProgramProxy.hx",14,0xf695088d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14)
		this->sendNotification(::AppConstants_obj::PROXY_INITIALIZED,null(),::model::proxy::ProgramProxy_obj::NAME);
	}
return null();
}


int ProgramProxy_obj::getNumberOfInstructions( ){
	HX_STACK_FRAME("model.proxy.ProgramProxy","getNumberOfInstructions",0x93c74a5c,"model.proxy.ProgramProxy.getNumberOfInstructions","model/proxy/ProgramProxy.hx",18,0xf695088d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return this->getData()->__Field(HX_CSTRING("getCurrentInstructions"),true)()->__Field(HX_CSTRING("length"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ProgramProxy_obj,getNumberOfInstructions,return )

Array< ::Dynamic > ProgramProxy_obj::getCurrentInstructions( ){
	HX_STACK_FRAME("model.proxy.ProgramProxy","getCurrentInstructions",0x53c6b107,"model.proxy.ProgramProxy.getCurrentInstructions","model/proxy/ProgramProxy.hx",22,0xf695088d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return this->getData()->__Field(HX_CSTRING("getCurrentInstructions"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(ProgramProxy_obj,getCurrentInstructions,return )

Array< ::Dynamic > ProgramProxy_obj::getInstructionsByProgramPointer( int pointer){
	HX_STACK_FRAME("model.proxy.ProgramProxy","getInstructionsByProgramPointer",0x2e713dec,"model.proxy.ProgramProxy.getInstructionsByProgramPointer","model/proxy/ProgramProxy.hx",26,0xf695088d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pointer,"pointer")
	HX_STACK_LINE(26)
	return this->getData()->__Field(HX_CSTRING("getInstructionsByProgramPointer"),true)(pointer);
}


HX_DEFINE_DYNAMIC_FUNC1(ProgramProxy_obj,getInstructionsByProgramPointer,return )

::model::vo::InstructionVO ProgramProxy_obj::getInstruction( ){
	HX_STACK_FRAME("model.proxy.ProgramProxy","getInstruction",0xd4e2c597,"model.proxy.ProgramProxy.getInstruction","model/proxy/ProgramProxy.hx",30,0xf695088d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return this->getData()->__Field(HX_CSTRING("getInstruction"),true)(this->getData()->__Field(HX_CSTRING("instructionPointer"),true));
}


HX_DEFINE_DYNAMIC_FUNC0(ProgramProxy_obj,getInstruction,return )

Array< ::Dynamic > ProgramProxy_obj::getProgram( int pointer){
	HX_STACK_FRAME("model.proxy.ProgramProxy","getProgram",0x1349a18d,"model.proxy.ProgramProxy.getProgram","model/proxy/ProgramProxy.hx",34,0xf695088d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pointer,"pointer")
	HX_STACK_LINE(34)
	return this->getData()->__Field(HX_CSTRING("programs"),true)->__GetItem(pointer);
}


HX_DEFINE_DYNAMIC_FUNC1(ProgramProxy_obj,getProgram,return )

::String ProgramProxy_obj::getOpcode( ){
	HX_STACK_FRAME("model.proxy.ProgramProxy","getOpcode",0x14ebd3e5,"model.proxy.ProgramProxy.getOpcode","model/proxy/ProgramProxy.hx",37,0xf695088d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	Array< ::Dynamic > _g = this->getData()->__Field(HX_CSTRING("getCurrentInstructions"),true)();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	return _g->__get(this->getData()->__Field(HX_CSTRING("instructionPointer"),true)).StaticCast< ::model::vo::InstructionVO >()->code.substr((int)0,(int)4);
}


HX_DEFINE_DYNAMIC_FUNC0(ProgramProxy_obj,getOpcode,return )

::String ProgramProxy_obj::getAddressOrData( ){
	HX_STACK_FRAME("model.proxy.ProgramProxy","getAddressOrData",0xd1d6998a,"model.proxy.ProgramProxy.getAddressOrData","model/proxy/ProgramProxy.hx",41,0xf695088d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	Array< ::Dynamic > _g = this->getData()->__Field(HX_CSTRING("getCurrentInstructions"),true)();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	return _g->__get(this->getData()->__Field(HX_CSTRING("instructionPointer"),true)).StaticCast< ::model::vo::InstructionVO >()->code.substr((int)4,(int)4);
}


HX_DEFINE_DYNAMIC_FUNC0(ProgramProxy_obj,getAddressOrData,return )

Void ProgramProxy_obj::setInstructionPointer( int pointer){
{
		HX_STACK_FRAME("model.proxy.ProgramProxy","setInstructionPointer",0x6c6ce1f2,"model.proxy.ProgramProxy.setInstructionPointer","model/proxy/ProgramProxy.hx",46,0xf695088d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(46)
		this->getData()->__FieldRef(HX_CSTRING("instructionPointer")) = pointer;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgramProxy_obj,setInstructionPointer,(void))

int ProgramProxy_obj::getInstructionPointer( ){
	HX_STACK_FRAME("model.proxy.ProgramProxy","getInstructionPointer",0x186413e6,"model.proxy.ProgramProxy.getInstructionPointer","model/proxy/ProgramProxy.hx",50,0xf695088d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	return this->getData()->__Field(HX_CSTRING("instructionPointer"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ProgramProxy_obj,getInstructionPointer,return )

Void ProgramProxy_obj::setProgramPointer( int pointer){
{
		HX_STACK_FRAME("model.proxy.ProgramProxy","setProgramPointer",0x54461abc,"model.proxy.ProgramProxy.setProgramPointer","model/proxy/ProgramProxy.hx",54,0xf695088d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pointer,"pointer")
		HX_STACK_LINE(54)
		this->getData()->__FieldRef(HX_CSTRING("programPointer")) = pointer;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgramProxy_obj,setProgramPointer,(void))

int ProgramProxy_obj::getProgramPointer( ){
	HX_STACK_FRAME("model.proxy.ProgramProxy","getProgramPointer",0x30d842b0,"model.proxy.ProgramProxy.getProgramPointer","model/proxy/ProgramProxy.hx",58,0xf695088d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	return this->getData()->__Field(HX_CSTRING("programPointer"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ProgramProxy_obj,getProgramPointer,return )

Void ProgramProxy_obj::reset( ){
{
		HX_STACK_FRAME("model.proxy.ProgramProxy","reset",0xe3291930,"model.proxy.ProgramProxy.reset","model/proxy/ProgramProxy.hx",61,0xf695088d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		this->getData()->__FieldRef(HX_CSTRING("instructionPointer")) = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProgramProxy_obj,reset,(void))

Dynamic ProgramProxy_obj::getData( ){
	HX_STACK_FRAME("model.proxy.ProgramProxy","getData",0x86a22f81,"model.proxy.ProgramProxy.getData","model/proxy/ProgramProxy.hx",65,0xf695088d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	return this->data;
}


::String ProgramProxy_obj::NAME;


ProgramProxy_obj::ProgramProxy_obj()
{
}

Dynamic ProgramProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getOpcode") ) { return getOpcode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		if (HX_FIELD_EQ(inName,"getProgram") ) { return getProgram_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getInstruction") ) { return getInstruction_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getAddressOrData") ) { return getAddressOrData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setProgramPointer") ) { return setProgramPointer_dyn(); }
		if (HX_FIELD_EQ(inName,"getProgramPointer") ) { return getProgramPointer_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setInstructionPointer") ) { return setInstructionPointer_dyn(); }
		if (HX_FIELD_EQ(inName,"getInstructionPointer") ) { return getInstructionPointer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getCurrentInstructions") ) { return getCurrentInstructions_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getNumberOfInstructions") ) { return getNumberOfInstructions_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"getInstructionsByProgramPointer") ) { return getInstructionsByProgramPointer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProgramProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgramProxy_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("getNumberOfInstructions"),
	HX_CSTRING("getCurrentInstructions"),
	HX_CSTRING("getInstructionsByProgramPointer"),
	HX_CSTRING("getInstruction"),
	HX_CSTRING("getProgram"),
	HX_CSTRING("getOpcode"),
	HX_CSTRING("getAddressOrData"),
	HX_CSTRING("setInstructionPointer"),
	HX_CSTRING("getInstructionPointer"),
	HX_CSTRING("setProgramPointer"),
	HX_CSTRING("getProgramPointer"),
	HX_CSTRING("reset"),
	HX_CSTRING("getData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgramProxy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ProgramProxy_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgramProxy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProgramProxy_obj::NAME,"NAME");
};

#endif

Class ProgramProxy_obj::__mClass;

void ProgramProxy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.proxy.ProgramProxy"), hx::TCanCast< ProgramProxy_obj> ,sStaticFields,sMemberFields,
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

void ProgramProxy_obj::__boot()
{
	NAME= HX_CSTRING("ProgramProxy");
}

} // end namespace model
} // end namespace proxy
