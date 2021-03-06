#ifndef INCLUDED_view_mediator_basis_KeyboardMediator
#define INCLUDED_view_mediator_basis_KeyboardMediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
HX_DECLARE_CLASS1(events,AppEvent)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IMediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,mediator,Mediator)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Notifier)
HX_DECLARE_CLASS3(view,component,basis,Keyboard)
HX_DECLARE_CLASS3(view,mediator,basis,KeyboardMediator)
namespace view{
namespace mediator{
namespace basis{


class HXCPP_CLASS_ATTRIBUTES  KeyboardMediator_obj : public ::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj super;
		typedef KeyboardMediator_obj OBJ_;
		KeyboardMediator_obj();
		Void __construct(::view::component::basis::Keyboard viewComponent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< KeyboardMediator_obj > __new(::view::component::basis::Keyboard viewComponent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyboardMediator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("KeyboardMediator"); }

		virtual Void onRegister( );

		virtual Void viewReadyHandler( ::events::AppEvent event);
		Dynamic viewReadyHandler_dyn();

		virtual ::view::component::basis::Keyboard getView( );
		Dynamic getView_dyn();

		static ::String NAME;
};

} // end namespace view
} // end namespace mediator
} // end namespace basis

#endif /* INCLUDED_view_mediator_basis_KeyboardMediator */ 
