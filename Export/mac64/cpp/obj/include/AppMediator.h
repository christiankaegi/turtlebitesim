#ifndef INCLUDED_AppMediator
#define INCLUDED_AppMediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
HX_DECLARE_CLASS0(App)
HX_DECLARE_CLASS0(AppMediator)
HX_DECLARE_CLASS1(events,AppEvent)
HX_DECLARE_CLASS2(model,proxy,AppProxy)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IMediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IProxy)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,mediator,Mediator)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Notifier)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,proxy,Proxy)


class HXCPP_CLASS_ATTRIBUTES  AppMediator_obj : public ::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj super;
		typedef AppMediator_obj OBJ_;
		AppMediator_obj();
		Void __construct(::App viewComponent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AppMediator_obj > __new(::App viewComponent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AppMediator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AppMediator"); }

		::model::proxy::AppProxy appProxy;
		virtual Void onRegister( );

		virtual Array< ::String > listNotificationInterests( );

		virtual Void handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note);

		virtual Void dragStartHandler( ::events::AppEvent event);
		Dynamic dragStartHandler_dyn();

		virtual Void dragStopHandler( ::events::AppEvent event);
		Dynamic dragStopHandler_dyn();

		virtual ::App getView( );
		Dynamic getView_dyn();

		static ::String NAME;
};


#endif /* INCLUDED_AppMediator */ 