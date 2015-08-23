#ifndef INCLUDED_view_mediator_basis_RamMediator
#define INCLUDED_view_mediator_basis_RamMediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
HX_DECLARE_CLASS1(events,AppEvent)
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
HX_DECLARE_CLASS3(view,component,basis,Ram)
HX_DECLARE_CLASS3(view,mediator,basis,RamMediator)
namespace view{
namespace mediator{
namespace basis{


class HXCPP_CLASS_ATTRIBUTES  RamMediator_obj : public ::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj super;
		typedef RamMediator_obj OBJ_;
		RamMediator_obj();
		Void __construct(::view::component::basis::Ram viewComponent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RamMediator_obj > __new(::view::component::basis::Ram viewComponent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RamMediator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RamMediator"); }

		::model::proxy::SnapshotProxy snapshotProxy;
		virtual Void onRegister( );

		virtual Array< ::String > listNotificationInterests( );

		virtual Void handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note);

		virtual Void viewReadyHandler( ::events::AppEvent event);
		Dynamic viewReadyHandler_dyn();

		virtual ::view::component::basis::Ram getView( );
		Dynamic getView_dyn();

		static ::String NAME;
};

} // end namespace view
} // end namespace mediator
} // end namespace basis

#endif /* INCLUDED_view_mediator_basis_RamMediator */ 
