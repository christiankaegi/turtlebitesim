#ifndef INCLUDED_App
#define INCLUDED_App

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS0(App)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)


class HXCPP_CLASS_ATTRIBUTES  App_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
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

		::openfl::display::Sprite zoomContainer;
		::openfl::display::Sprite detailPopupContainer;
		::openfl::display::Sprite navigContainer;
		bool isZoomed;
		virtual Void addZoomView( ::openfl::display::DisplayObject view);
		Dynamic addZoomView_dyn();

		virtual Void addDetailPopupView( ::openfl::display::DisplayObject view);
		Dynamic addDetailPopupView_dyn();

		virtual Void addNavigView( ::openfl::display::DisplayObject view);
		Dynamic addNavigView_dyn();

		virtual Void mouseDownHandler( ::openfl::events::MouseEvent event);
		Dynamic mouseDownHandler_dyn();

		virtual Void mouseUpHandler( ::openfl::events::MouseEvent event);
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
