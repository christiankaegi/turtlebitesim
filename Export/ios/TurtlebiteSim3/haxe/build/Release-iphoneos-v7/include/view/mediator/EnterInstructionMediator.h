#ifndef INCLUDED_view_mediator_EnterInstructionMediator
#define INCLUDED_view_mediator_EnterInstructionMediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
HX_DECLARE_CLASS1(events,AppEvent)
HX_DECLARE_CLASS2(model,proxy,AppProxy)
HX_DECLARE_CLASS2(model,proxy,ClockProxy)
HX_DECLARE_CLASS2(model,proxy,ProgramProxy)
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
HX_DECLARE_CLASS2(view,component,EnterInstruction)
HX_DECLARE_CLASS2(view,mediator,EnterInstructionMediator)
namespace view{
namespace mediator{


class HXCPP_CLASS_ATTRIBUTES  EnterInstructionMediator_obj : public ::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj super;
		typedef EnterInstructionMediator_obj OBJ_;
		EnterInstructionMediator_obj();
		Void __construct(::view::component::EnterInstruction viewComponent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< EnterInstructionMediator_obj > __new(::view::component::EnterInstruction viewComponent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnterInstructionMediator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EnterInstructionMediator"); }

		::model::proxy::AppProxy appProxy;
		::model::proxy::ClockProxy clockProxy;
		::model::proxy::ProgramProxy programProxy;
		::model::proxy::SnapshotProxy snapshotProxy;
		virtual Void onRegister( );

		virtual Void onRemove( );

		virtual Array< ::String > listNotificationInterests( );

		virtual Void handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note);

		virtual Void dataEventHandler( ::events::AppEvent event);
		Dynamic dataEventHandler_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void viewReadyHandler( ::events::AppEvent event);
		Dynamic viewReadyHandler_dyn();

		virtual ::view::component::EnterInstruction getView( );
		Dynamic getView_dyn();

		static ::String NAME;
};

} // end namespace view
} // end namespace mediator

#endif /* INCLUDED_view_mediator_EnterInstructionMediator */ 
