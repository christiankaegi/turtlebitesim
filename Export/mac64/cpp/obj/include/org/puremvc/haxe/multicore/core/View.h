#ifndef INCLUDED_org_puremvc_haxe_multicore_core_View
#define INCLUDED_org_puremvc_haxe_multicore_core_View

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/interfaces/IView.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,core,View)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IMediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IObserver)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IView)
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  View_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef View_obj OBJ_;
		View_obj();
		Void __construct(::String key);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< View_obj > __new(::String key);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~View_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::multicore::interfaces::IView_obj *()
			{ return new ::org::puremvc::haxe::multicore::interfaces::IView_delegate_< View_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("View"); }

		virtual Void initializeView( );
		Dynamic initializeView_dyn();

		virtual Void registerObserver( ::String notificationName,::org::puremvc::haxe::multicore::interfaces::IObserver observer);
		Dynamic registerObserver_dyn();

		virtual Void notifyObservers( ::org::puremvc::haxe::multicore::interfaces::INotification notification);
		Dynamic notifyObservers_dyn();

		virtual Void removeObserver( ::String notificationName,Dynamic notifyContext);
		Dynamic removeObserver_dyn();

		virtual Void registerMediator( ::org::puremvc::haxe::multicore::interfaces::IMediator mediator);
		Dynamic registerMediator_dyn();

		virtual ::org::puremvc::haxe::multicore::interfaces::IMediator retrieveMediator( ::String mediatorName);
		Dynamic retrieveMediator_dyn();

		virtual ::org::puremvc::haxe::multicore::interfaces::IMediator removeMediator( ::String mediatorName);
		Dynamic removeMediator_dyn();

		virtual bool hasMediator( ::String mediatorName);
		Dynamic hasMediator_dyn();

		virtual Void removeView( ::String key);
		Dynamic removeView_dyn();

		::haxe::ds::StringMap mediatorMap;
		::haxe::ds::StringMap observerMap;
		::String multitonKey;
		static ::org::puremvc::haxe::multicore::interfaces::IView getInstance( ::String key);
		static Dynamic getInstance_dyn();

		static ::haxe::ds::StringMap instanceMap;
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace core

#endif /* INCLUDED_org_puremvc_haxe_multicore_core_View */ 
