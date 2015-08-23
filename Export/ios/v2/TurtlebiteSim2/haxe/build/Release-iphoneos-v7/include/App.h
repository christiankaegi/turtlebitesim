#ifndef INCLUDED_App
#define INCLUDED_App

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
HX_DECLARE_CLASS0(App)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)


class HXCPP_CLASS_ATTRIBUTES  App_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef App_obj OBJ_;
		App_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< App_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~App_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("App"); }

		::openfl::_legacy::display::Sprite zoomContainer;
		::openfl::_legacy::display::Sprite navigContainer;
		bool isZoomed;
		virtual Void addZoomView( ::openfl::_legacy::display::DisplayObject view);
		Dynamic addZoomView_dyn();

		virtual Void addNavigView( ::openfl::_legacy::display::DisplayObject view);
		Dynamic addNavigView_dyn();

		virtual Void mouseDownHandler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic mouseDownHandler_dyn();

		virtual Void mouseUpHandler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic mouseUpHandler_dyn();

		virtual Void dragStart( );
		Dynamic dragStart_dyn();

		virtual Void dragStop( );
		Dynamic dragStop_dyn();

		virtual Void zoomIn( );
		Dynamic zoomIn_dyn();

		virtual Void resetZoom( );
		Dynamic resetZoom_dyn();

};


#endif /* INCLUDED_App */ 
