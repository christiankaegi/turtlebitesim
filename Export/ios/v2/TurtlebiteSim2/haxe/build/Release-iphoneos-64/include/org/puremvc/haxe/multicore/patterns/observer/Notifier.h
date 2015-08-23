#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#define INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IFacade)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Notifier)
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace patterns{
namespace observer{


class HXCPP_CLASS_ATTRIBUTES  Notifier_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Notifier_obj OBJ_;
		Notifier_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Notifier_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Notifier_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::multicore::interfaces::INotifier_obj *()
			{ return new ::org::puremvc::haxe::multicore::interfaces::INotifier_delegate_< Notifier_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Notifier"); }

		virtual Void sendNotification( ::String notificationName,Dynamic body,::String type);
		Dynamic sendNotification_dyn();

		virtual Void initializeNotifier( ::String key);
		Dynamic initializeNotifier_dyn();

		::org::puremvc::haxe::multicore::interfaces::IFacade facade;
		virtual ::org::puremvc::haxe::multicore::interfaces::IFacade get_facade( );
		Dynamic get_facade_dyn();

		virtual ::org::puremvc::haxe::multicore::interfaces::IFacade getFacade( );
		Dynamic getFacade_dyn();

		::String multitonKey;
		static ::String MULTITON_MSG;
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace patterns
} // end namespace observer

#endif /* INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier */ 
