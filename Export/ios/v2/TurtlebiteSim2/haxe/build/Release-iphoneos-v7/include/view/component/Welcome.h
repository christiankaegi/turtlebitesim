#ifndef INCLUDED_view_component_Welcome
#define INCLUDED_view_component_Welcome

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS2(view,component,Welcome)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  Welcome_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef Welcome_obj OBJ_;
		Welcome_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Welcome_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Welcome_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Welcome"); }

		::openfl::_legacy::display::Bitmap bmpPower;
		::openfl::_legacy::display::Bitmap bmpArchitecture;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void powerLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic powerLoadCompleteHandler_dyn();

		virtual Void architectureLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic architectureLoadCompleteHandler_dyn();

		virtual Void show( );
		Dynamic show_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void toggleArchitecture( );
		Dynamic toggleArchitecture_dyn();

};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_Welcome */ 
