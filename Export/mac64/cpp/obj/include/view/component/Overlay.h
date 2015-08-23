#ifndef INCLUDED_view_component_Overlay
#define INCLUDED_view_component_Overlay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(view,component,Overlay)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  Overlay_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Overlay_obj OBJ_;
		Overlay_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Overlay_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Overlay_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Overlay"); }

		::openfl::display::Bitmap bmpMarkUnits;
		::openfl::display::Bitmap bmpFlowArrows;
		virtual Void addedToStageHandler( ::openfl::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void markUnitsLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic markUnitsLoadCompleteHandler_dyn();

		virtual Void flowArrowsLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic flowArrowsLoadCompleteHandler_dyn();

		virtual Void showUnits( );
		Dynamic showUnits_dyn();

		virtual Void hideUnits( );
		Dynamic hideUnits_dyn();

		virtual Void showFlow( );
		Dynamic showFlow_dyn();

		virtual Void hideFlow( );
		Dynamic hideFlow_dyn();

};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_Overlay */ 
