#ifndef INCLUDED_AppFacade
#define INCLUDED_AppFacade

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/facade/Facade.h>
#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
HX_DECLARE_CLASS0(App)
HX_DECLARE_CLASS0(AppFacade)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IFacade)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,facade,Facade)


class HXCPP_CLASS_ATTRIBUTES  AppFacade_obj : public ::org::puremvc::haxe::multicore::patterns::facade::Facade_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::facade::Facade_obj super;
		typedef AppFacade_obj OBJ_;
		AppFacade_obj();
		Void __construct(::String key);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AppFacade_obj > __new(::String key);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AppFacade_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::org::puremvc::haxe::multicore::interfaces::IFacade_obj *()
			{ return new ::org::puremvc::haxe::multicore::interfaces::IFacade_delegate_< AppFacade_obj >(this); }
		inline operator ::org::puremvc::haxe::multicore::interfaces::INotifier_obj *()
			{ return new ::org::puremvc::haxe::multicore::interfaces::INotifier_delegate_< AppFacade_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AppFacade"); }

		virtual Void startup( ::App app);
		Dynamic startup_dyn();

		virtual Void initializeController( );

		static ::AppFacade getInstance( ::String key);
		static Dynamic getInstance_dyn();

};


#endif /* INCLUDED_AppFacade */ 
