#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_controller_instruction_OpcodeLDACommand
#include <controller/instruction/OpcodeLDACommand.h>
#endif
#ifndef INCLUDED_model_proxy_ProgramProxy
#include <model/proxy/ProgramProxy.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_ICommand
#include <org/puremvc/haxe/multicore/interfaces/ICommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade
#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_command_SimpleCommand
#include <org/puremvc/haxe/multicore/patterns/command/SimpleCommand.h>
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
namespace controller{
namespace instruction{

Void OpcodeLDACommand_obj::__construct()
{
HX_STACK_FRAME("controller.instruction.OpcodeLDACommand","new",0xbacf4554,"controller.instruction.OpcodeLDACommand.new","controller/instruction/OpcodeLDACommand.hx",12,0x90fafc5a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	super::__construct();
}
;
	return null();
}

//OpcodeLDACommand_obj::~OpcodeLDACommand_obj() { }

Dynamic OpcodeLDACommand_obj::__CreateEmpty() { return  new OpcodeLDACommand_obj; }
hx::ObjectPtr< OpcodeLDACommand_obj > OpcodeLDACommand_obj::__new()
{  hx::ObjectPtr< OpcodeLDACommand_obj > result = new OpcodeLDACommand_obj();
	result->__construct();
	return result;}

Dynamic OpcodeLDACommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpcodeLDACommand_obj > result = new OpcodeLDACommand_obj();
	result->__construct();
	return result;}

Void OpcodeLDACommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.instruction.OpcodeLDACommand","execute",0xd9180929,"controller.instruction.OpcodeLDACommand.execute","controller/instruction/OpcodeLDACommand.hx",15,0x90fafc5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(17)
		::model::proxy::ProgramProxy programProxy;		HX_STACK_VAR(programProxy,"programProxy");
		HX_STACK_LINE(17)
		programProxy = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(18)
		::model::proxy::SnapshotProxy snapshotProxy;		HX_STACK_VAR(snapshotProxy,"snapshotProxy");
		HX_STACK_LINE(18)
		snapshotProxy = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(20)
		::String _g = programProxy->getAddressOrData();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		::model::vo::DecHexVO pointer = ::utilities::NumberFormat_obj::binaryToDecimal(_g);		HX_STACK_VAR(pointer,"pointer");
		HX_STACK_LINE(21)
		Array< ::Dynamic > _g1 = snapshotProxy->getRam();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(21)
		::model::vo::SnapshotVO vo = _g1->__get(pointer->dec).StaticCast< ::model::vo::SnapshotVO >();		HX_STACK_VAR(vo,"vo");
		HX_STACK_LINE(22)
		::String _g2 = vo->getBinary();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(22)
		snapshotProxy->setAccumulator(_g2);
		HX_STACK_LINE(23)
		Array< bool > _g3 = vo->getCodeArr();		HX_STACK_VAR(_g3,"_g3");
		struct _Function_1_1{
			inline static Dynamic Block( Array< bool > &_g3,::model::vo::DecHexVO &pointer){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","controller/instruction/OpcodeLDACommand.hx",23,0x90fafc5a)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("ram") , _g3,false);
					__result->Add(HX_CSTRING("pointer") , pointer->dec,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(23)
		Dynamic _g4 = _Function_1_1::Block(_g3,pointer);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(23)
		this->sendNotification(::AppConstants_obj::BROADCAST_LDA,_g4,null());
		HX_STACK_LINE(24)
		Array< bool > _g5 = vo->getCodeArr();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(24)
		this->sendNotification(::AppConstants_obj::ACCUMULATOR_CHANGED,_g5,null());
	}
return null();
}



OpcodeLDACommand_obj::OpcodeLDACommand_obj()
{
}

Dynamic OpcodeLDACommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OpcodeLDACommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void OpcodeLDACommand_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpcodeLDACommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpcodeLDACommand_obj::__mClass,"__mClass");
};

#endif

Class OpcodeLDACommand_obj::__mClass;

void OpcodeLDACommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.instruction.OpcodeLDACommand"), hx::TCanCast< OpcodeLDACommand_obj> ,sStaticFields,sMemberFields,
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

void OpcodeLDACommand_obj::__boot()
{
}

} // end namespace controller
} // end namespace instruction
