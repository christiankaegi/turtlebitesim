#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_ICommand
#include <org/puremvc/haxe/multicore/interfaces/ICommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotification
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_command_SimpleCommand
#include <org/puremvc/haxe/multicore/patterns/command/SimpleCommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace patterns{
namespace command{

Void SimpleCommand_obj::__construct()
{
HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.command.SimpleCommand","new",0x9ee616a5,"org.puremvc.haxe.multicore.patterns.command.SimpleCommand.new","org/puremvc/haxe/multicore/patterns/command/SimpleCommand.hx",21,0x076dcced)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	super::__construct();
}
;
	return null();
}

//SimpleCommand_obj::~SimpleCommand_obj() { }

Dynamic SimpleCommand_obj::__CreateEmpty() { return  new SimpleCommand_obj; }
hx::ObjectPtr< SimpleCommand_obj > SimpleCommand_obj::__new()
{  hx::ObjectPtr< SimpleCommand_obj > result = new SimpleCommand_obj();
	result->__construct();
	return result;}

Dynamic SimpleCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleCommand_obj > result = new SimpleCommand_obj();
	result->__construct();
	return result;}

hx::Object *SimpleCommand_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::INotifier_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::INotifier_obj *();
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::ICommand_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::ICommand_obj *();
	return super::__ToInterface(inType);
}

Void SimpleCommand_obj::execute( ::org::puremvc::haxe::multicore::interfaces::INotification notification){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.command.SimpleCommand","execute",0xe2e056fa,"org.puremvc.haxe.multicore.patterns.command.SimpleCommand.execute","org/puremvc/haxe/multicore/patterns/command/SimpleCommand.hx",34,0x076dcced)
		HX_STACK_THIS(this)
		HX_STACK_ARG(notification,"notification")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleCommand_obj,execute,(void))


SimpleCommand_obj::SimpleCommand_obj()
{
}

Dynamic SimpleCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SimpleCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SimpleCommand_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(SimpleCommand_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleCommand_obj::__mClass,"__mClass");
};

#endif

Class SimpleCommand_obj::__mClass;

void SimpleCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.patterns.command.SimpleCommand"), hx::TCanCast< SimpleCommand_obj> ,sStaticFields,sMemberFields,
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

void SimpleCommand_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace patterns
} // end namespace command
