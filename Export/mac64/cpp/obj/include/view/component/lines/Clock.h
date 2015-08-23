#ifndef INCLUDED_view_component_lines_Clock
#define INCLUDED_view_component_lines_Clock

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
HX_DECLARE_CLASS3(view,component,lines,Clock)
namespace view{
namespace component{
namespace lines{


class HXCPP_CLASS_ATTRIBUTES  Clock_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Clock_obj OBJ_;
		Clock_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Clock_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Clock_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Clock"); }

		::openfl::display::Bitmap out;
		virtual Void addedToStageHandler( ::openfl::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void outLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic outLoadCompleteHandler_dyn();

		virtual Void showLines( );
		Dynamic showLines_dyn();

		virtual Void hideAllLines( );
		Dynamic hideAllLines_dyn();

};

} // end namespace view
} // end namespace component
} // end namespace lines

#endif /* INCLUDED_view_component_lines_Clock */ 