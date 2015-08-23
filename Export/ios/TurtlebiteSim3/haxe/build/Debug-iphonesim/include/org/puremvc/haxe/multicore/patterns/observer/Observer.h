#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Observer
#define INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Observer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/interfaces/IObserver.h>
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IObserver)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Observer)
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace patterns{
namespace observer{


class HXCPP_CLASS_ATTRIBUTES  Observer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Observer_obj OBJ_;
		Observer_obj();
		Void __construct(Dynamic notifyMethod,Dynamic notifyContext);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Observer_obj > __new(Dynamic notifyMethod,Dynamic notifyContext);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Observer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::multicore::interfaces::IObserver_obj *()
			{ return new ::org::puremvc::haxe::multicore::interfaces::IObserver_delegate_< Observer_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Observer"); }

		Dynamic notify;
		Dynamic &notify_dyn() { return notify;}
		Dynamic context;
		virtual Void setNotifyMethod( Dynamic notifyMethod);
		Dynamic setNotifyMethod_dyn();

		virtual Void setNotifyContext( Dynamic notifyContext);
		Dynamic setNotifyContext_dyn();

		virtual Dynamic getNotifyMethod( );
		Dynamic getNotifyMethod_dyn();

		virtual Dynamic getNotifyContext( );
		Dynamic getNotifyContext_dyn();

		virtual Void notifyObserver( ::org::puremvc::haxe::multicore::interfaces::INotification notification);
		Dynamic notifyObserver_dyn();

		virtual bool compareNotifyContext( Dynamic object);
		Dynamic compareNotifyContext_dyn();

};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace patterns
} // end namespace observer

#endif /* INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Observer */ 
