#ifndef INCLUDED_view_mediator_DetailAccumulatorMediator
#define INCLUDED_view_mediator_DetailAccumulatorMediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
HX_DECLARE_CLASS1(events,AppEvent)
HX_DECLARE_CLASS2(model,proxy,AppProxy)
HX_DECLARE_CLASS2(model,proxy,ClockProxy)
HX_DECLARE_CLASS2(model,proxy,SnapshotProxy)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IMediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IProxy)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,mediator,Mediator)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Notifier)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,proxy,Proxy)
HX_DECLARE_CLASS2(view,component,DetailAccumulator)
HX_DECLARE_CLASS2(view,mediator,DetailAccumulatorMediator)
namespace view{
namespace mediator{


class HXCPP_CLASS_ATTRIBUTES  DetailAccumulatorMediator_obj : public ::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj super;
		typedef DetailAccumulatorMediator_obj OBJ_;
		DetailAccumulatorMediator_obj();
		Void __construct(::view::component::DetailAccumulator viewComponent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DetailAccumulatorMediator_obj > __new(::view::component::DetailAccumulator viewComponent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DetailAccumulatorMediator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DetailAccumulatorMediator"); }

		::model::proxy::AppProxy appProxy;
		::model::proxy::ClockProxy clockProxy;
		::model::proxy::SnapshotProxy snapshotProxy;
		virtual Void onRegister( );

		virtual Void onRemove( );

		virtual Array< ::String > listNotificationInterests( );

		virtual Void handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note);

		virtual Void viewReadyHandler( ::events::AppEvent event);
		Dynamic viewReadyHandler_dyn();

		virtual ::view::component::DetailAccumulator getView( );
		Dynamic getView_dyn();

		virtual Void dataEventHandler( ::events::AppEvent event);
		Dynamic dataEventHandler_dyn();

		static ::String NAME;
};

} // end namespace view
} // end namespace mediator

#endif /* INCLUDED_view_mediator_DetailAccumulatorMediator */ 
