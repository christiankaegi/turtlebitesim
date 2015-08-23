#ifndef INCLUDED_controller_StartupCompleteCommand
#define INCLUDED_controller_StartupCompleteCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/command/SimpleCommand.h>
HX_DECLARE_CLASS1(controller,StartupCompleteCommand)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,ICommand)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,command,SimpleCommand)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Notifier)
namespace controller{


class HXCPP_CLASS_ATTRIBUTES  StartupCompleteCommand_obj : public ::org::puremvc::haxe::multicore::patterns::command::SimpleCommand_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::command::SimpleCommand_obj super;
		typedef StartupCompleteCommand_obj OBJ_;
		StartupCompleteCommand_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StartupCompleteCommand_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StartupCompleteCommand_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("StartupCompleteCommand"); }

		virtual Void execute( ::org::puremvc::haxe::multicore::interfaces::INotification note);

};

} // end namespace controller

#endif /* INCLUDED_controller_StartupCompleteCommand */ 
