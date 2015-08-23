#ifndef INCLUDED_org_puremvc_haxe_multicore_core_Controller
#define INCLUDED_org_puremvc_haxe_multicore_core_Controller

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/interfaces/IController.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,core,Controller)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IController)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IView)
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Controller_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Controller_obj OBJ_;
		Controller_obj();
		Void __construct(::String key);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Controller_obj > __new(::String key);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Controller_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::multicore::interfaces::IController_obj *()
			{ return new ::org::puremvc::haxe::multicore::interfaces::IController_delegate_< Controller_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Controller"); }

		virtual Void initializeController( );
		Dynamic initializeController_dyn();

		virtual Void executeCommand( ::org::puremvc::haxe::multicore::interfaces::INotification note);
		Dynamic executeCommand_dyn();

		virtual Void registerCommand( ::String notificationName,::Class commandClassRef);
		Dynamic registerCommand_dyn();

		virtual bool hasCommand( ::String notificationName);
		Dynamic hasCommand_dyn();

		virtual Void removeCommand( ::String notificationName);
		Dynamic removeCommand_dyn();

		virtual Void removeController( ::String key);
		Dynamic removeController_dyn();

		::org::puremvc::haxe::multicore::interfaces::IView view;
		::haxe::ds::StringMap commandMap;
		::String multitonKey;
		static ::org::puremvc::haxe::multicore::interfaces::IController getInstance( ::String key);
		static Dynamic getInstance_dyn();

		static ::haxe::ds::StringMap instanceMap;
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace core

#endif /* INCLUDED_org_puremvc_haxe_multicore_core_Controller */ 
