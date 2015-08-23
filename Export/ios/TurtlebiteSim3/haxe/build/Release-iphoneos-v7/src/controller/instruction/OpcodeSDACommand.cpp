#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_controller_instruction_OpcodeSDACommand
#include <controller/instruction/OpcodeSDACommand.h>
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
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
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

Void OpcodeSDACommand_obj::__construct()
{
HX_STACK_FRAME("controller.instruction.OpcodeSDACommand","new",0x0d8c8ced,"controller.instruction.OpcodeSDACommand.new","controller/instruction/OpcodeSDACommand.hx",14,0x793e6ae1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

//OpcodeSDACommand_obj::~OpcodeSDACommand_obj() { }

Dynamic OpcodeSDACommand_obj::__CreateEmpty() { return  new OpcodeSDACommand_obj; }
hx::ObjectPtr< OpcodeSDACommand_obj > OpcodeSDACommand_obj::__new()
{  hx::ObjectPtr< OpcodeSDACommand_obj > result = new OpcodeSDACommand_obj();
	result->__construct();
	return result;}

Dynamic OpcodeSDACommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpcodeSDACommand_obj > result = new OpcodeSDACommand_obj();
	result->__construct();
	return result;}

Void OpcodeSDACommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("controller.instruction.OpcodeSDACommand","execute",0x59d39142,"controller.instruction.OpcodeSDACommand.execute","controller/instruction/OpcodeSDACommand.hx",17,0x793e6ae1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
		HX_STACK_LINE(19)
		::model::proxy::ProgramProxy programProxy;		HX_STACK_VAR(programProxy,"programProxy");
		HX_STACK_LINE(19)
		programProxy = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(20)
		::model::proxy::SnapshotProxy snapshotProxy;		HX_STACK_VAR(snapshotProxy,"snapshotProxy");
		HX_STACK_LINE(20)
		snapshotProxy = hx::TCast< model::proxy::SnapshotProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::SnapshotProxy_obj::NAME));
		HX_STACK_LINE(22)
		::String _g = programProxy->getInstruction()->code.substr((int)4,(int)4);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		::model::vo::DecHexVO address = ::utilities::NumberFormat_obj::binaryToDecimal(_g);		HX_STACK_VAR(address,"address");
		HX_STACK_LINE(23)
		::model::vo::SnapshotVO _g1 = snapshotProxy->getAccumulator();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(23)
		snapshotProxy->setRam(_g1,address->dec);
		HX_STACK_LINE(25)
		Array< ::Dynamic > _g2 = snapshotProxy->getRam();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(25)
		::model::vo::SnapshotVO value = _g2->__get(address->dec).StaticCast< ::model::vo::SnapshotVO >();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(26)
		Array< ::Dynamic > _g3 = snapshotProxy->getRam();		HX_STACK_VAR(_g3,"_g3");
		struct _Function_1_1{
			inline static Dynamic Block( ::model::vo::DecHexVO &address,Array< ::Dynamic > &_g3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","controller/instruction/OpcodeSDACommand.hx",26,0x793e6ae1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("ram") , _g3,false);
					__result->Add(HX_CSTRING("pointer") , address->dec,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(26)
		Dynamic _g4 = _Function_1_1::Block(address,_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(26)
		this->sendNotification(::AppConstants_obj::BROADCAST_SDA,_g4,null());
	}
return null();
}



OpcodeSDACommand_obj::OpcodeSDACommand_obj()
{
}

Dynamic OpcodeSDACommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OpcodeSDACommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpcodeSDACommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OpcodeSDACommand_obj,pos),HX_CSTRING("pos")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pos"),
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpcodeSDACommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpcodeSDACommand_obj::__mClass,"__mClass");
};

#endif

Class OpcodeSDACommand_obj::__mClass;

void OpcodeSDACommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("controller.instruction.OpcodeSDACommand"), hx::TCanCast< OpcodeSDACommand_obj> ,sStaticFields,sMemberFields,
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

void OpcodeSDACommand_obj::__boot()
{
}

} // end namespace controller
} // end namespace instruction
