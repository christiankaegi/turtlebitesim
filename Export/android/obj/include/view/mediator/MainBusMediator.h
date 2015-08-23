#ifndef INCLUDED_view_mediator_MainBusMediator
#define INCLUDED_view_mediator_MainBusMediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IMediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,mediator,Mediator)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Notifier)
HX_DECLARE_CLASS2(view,component,MainBus)
HX_DECLARE_CLASS2(view,mediator,MainBusMediator)
namespace view{
namespace mediator{


class HXCPP_CLASS_ATTRIBUTES  MainBusMediator_obj : public ::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj super;
		typedef MainBusMediator_obj OBJ_;
		MainBusMediator_obj();
		Void __construct(::view::component::MainBus viewComponent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MainBusMediator_obj > __new(::view::component::MainBus viewComponent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MainBusMediator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MainBusMediator"); }

		virtual Void onRegister( );

		virtual Array< ::String > listNotificationInterests( );

		virtual Void handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note);

		virtual ::view::component::MainBus getView( );
		Dynamic getView_dyn();

		static ::String NAME;
};

} // end namespace view
} // end namespace mediator

#endif /* INCLUDED_view_mediator_MainBusMediator */ 
