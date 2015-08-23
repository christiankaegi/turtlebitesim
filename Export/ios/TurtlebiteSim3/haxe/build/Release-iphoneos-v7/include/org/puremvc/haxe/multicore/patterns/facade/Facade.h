#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_facade_Facade
#define INCLUDED_org_puremvc_haxe_multicore_patterns_facade_Facade

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IController)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IFacade)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IMediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IModel)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IProxy)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IView)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,facade,Facade)
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace patterns{
namespace facade{


class HXCPP_CLASS_ATTRIBUTES  Facade_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Facade_obj OBJ_;
		Facade_obj();
		Void __construct(::String key);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Facade_obj > __new(::String key);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Facade_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::multicore::interfaces::IFacade_obj *()
			{ return new ::org::puremvc::haxe::multicore::interfaces::IFacade_delegate_< Facade_obj >(this); }
		inline operator ::org::puremvc::haxe::multicore::interfaces::INotifier_obj *()
			{ return new ::org::puremvc::haxe::multicore::interfaces::INotifier_delegate_< Facade_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Facade"); }

		virtual Void initializeFacade( );
		Dynamic initializeFacade_dyn();

		virtual Void initializeController( );
		Dynamic initializeController_dyn();

		virtual Void initializeModel( );
		Dynamic initializeModel_dyn();

		virtual Void initializeView( );
		Dynamic initializeView_dyn();

		virtual Void registerCommand( ::String notificationName,::Class commandClassRef);
		Dynamic registerCommand_dyn();

		virtual Void removeCommand( ::String notificationName);
		Dynamic removeCommand_dyn();

		virtual bool hasCommand( ::String notificationName);
		Dynamic hasCommand_dyn();

		virtual Void registerProxy( ::org::puremvc::haxe::multicore::interfaces::IProxy proxy);
		Dynamic registerProxy_dyn();

		virtual ::org::puremvc::haxe::multicore::interfaces::IProxy retrieveProxy( ::String proxyName);
		Dynamic retrieveProxy_dyn();

		virtual ::org::puremvc::haxe::multicore::interfaces::IProxy removeProxy( ::String proxyName);
		Dynamic removeProxy_dyn();

		virtual bool hasProxy( ::String proxyName);
		Dynamic hasProxy_dyn();

		virtual Void registerMediator( ::org::puremvc::haxe::multicore::interfaces::IMediator mediator);
		Dynamic registerMediator_dyn();

		virtual ::org::puremvc::haxe::multicore::interfaces::IMediator retrieveMediator( ::String mediatorName);
		Dynamic retrieveMediator_dyn();

		virtual ::org::puremvc::haxe::multicore::interfaces::IMediator removeMediator( ::String mediatorName);
		Dynamic removeMediator_dyn();

		virtual bool hasMediator( ::String mediatorName);
		Dynamic hasMediator_dyn();

		virtual Void sendNotification( ::String notificationName,Dynamic body,::String type);
		Dynamic sendNotification_dyn();

		virtual Void notifyObservers( ::org::puremvc::haxe::multicore::interfaces::INotification notification);
		Dynamic notifyObservers_dyn();

		virtual Void initializeNotifier( ::String key);
		Dynamic initializeNotifier_dyn();

		virtual Void removeCore( ::String key);
		Dynamic removeCore_dyn();

		::org::puremvc::haxe::multicore::interfaces::IController controller;
		::org::puremvc::haxe::multicore::interfaces::IModel model;
		::org::puremvc::haxe::multicore::interfaces::IView view;
		::String multitonKey;
		static ::org::puremvc::haxe::multicore::interfaces::IFacade getInstance( ::String key);
		static Dynamic getInstance_dyn();

		static ::haxe::ds::StringMap instanceMap;
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace patterns
} // end namespace facade

#endif /* INCLUDED_org_puremvc_haxe_multicore_patterns_facade_Facade */ 
