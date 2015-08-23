#ifndef INCLUDED_view_component_Hotspot
#define INCLUDED_view_component_Hotspot

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(view,component,Hotspot)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  Hotspot_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Hotspot_obj OBJ_;
		Hotspot_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Hotspot_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Hotspot_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Hotspot"); }

		::openfl::display::Sprite clockButton;
		::openfl::display::Sprite accumulatorButton;
		::openfl::display::Sprite romButton;
		virtual Void addedToStageHandler( ::openfl::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void createClockButton( );
		Dynamic createClockButton_dyn();

		virtual Void createAccumulatorButton( );
		Dynamic createAccumulatorButton_dyn();

		virtual Void createRomButton( );
		Dynamic createRomButton_dyn();

		virtual Void clockButtonEventHandler( ::openfl::events::MouseEvent event);
		Dynamic clockButtonEventHandler_dyn();

		virtual Void accumulatorButtonEventHandler( ::openfl::events::MouseEvent event);
		Dynamic accumulatorButtonEventHandler_dyn();

		virtual Void romButtonEventHandler( ::openfl::events::MouseEvent event);
		Dynamic romButtonEventHandler_dyn();

		static int COLOR;
		static Float ALPHA;
};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_Hotspot */ 
