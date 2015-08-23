#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_command_SimpleCommand
#define INCLUDED_org_puremvc_haxe_multicore_patterns_command_SimpleCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#include <org/puremvc/haxe/multicore/interfaces/ICommand.h>
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,ICommand)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,command,SimpleCommand)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Notifier)
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace patterns{
namespace command{


class HXCPP_CLASS_ATTRIBUTES  SimpleCommand_obj : public ::org::puremvc::haxe::multicore::patterns::observer::Notifier_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::observer::Notifier_obj super;
		typedef SimpleCommand_obj OBJ_;
		SimpleCommand_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SimpleCommand_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimpleCommand_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::puremvc::haxe::multicore::interfaces::INotifier_obj *()
			{ return new ::org::puremvc::haxe::multicore::interfaces::INotifier_delegate_< SimpleCommand_obj >(this); }
		inline operator ::org::puremvc::haxe::multicore::interfaces::ICommand_obj *()
			{ return new ::org::puremvc::haxe::multicore::interfaces::ICommand_delegate_< SimpleCommand_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("SimpleCommand"); }

		virtual Void execute( ::org::puremvc::haxe::multicore::interfaces::INotification notification);
		Dynamic execute_dyn();

};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace patterns
} // end namespace command

#endif /* INCLUDED_org_puremvc_haxe_multicore_patterns_command_SimpleCommand */ 
