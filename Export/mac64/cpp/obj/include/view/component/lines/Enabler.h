#ifndef INCLUDED_view_component_lines_Enabler
#define INCLUDED_view_component_lines_Enabler

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
HX_DECLARE_CLASS3(view,component,lines,Enabler)
namespace view{
namespace component{
namespace lines{


class HXCPP_CLASS_ATTRIBUTES  Enabler_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Enabler_obj OBJ_;
		Enabler_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Enabler_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Enabler_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Enabler"); }

		::openfl::display::Bitmap e1Out0;
		::openfl::display::Bitmap e1Out1;
		::openfl::display::Bitmap e1Out2;
		::openfl::display::Bitmap e1Out3;
		::openfl::display::Bitmap e2Out0;
		::openfl::display::Bitmap e2Out1;
		::openfl::display::Bitmap e2Out2;
		::openfl::display::Bitmap e2Out3;
		virtual Void addedToStageHandler( ::openfl::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void e1Out0LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic e1Out0LoadCompleteHandler_dyn();

		virtual Void e1Out1LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic e1Out1LoadCompleteHandler_dyn();

		virtual Void e1Out2LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic e1Out2LoadCompleteHandler_dyn();

		virtual Void e1Out3LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic e1Out3LoadCompleteHandler_dyn();

		virtual Void e2Out0LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic e2Out0LoadCompleteHandler_dyn();

		virtual Void e2Out1LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic e2Out1LoadCompleteHandler_dyn();

		virtual Void e2Out2LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic e2Out2LoadCompleteHandler_dyn();

		virtual Void e2Out3LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic e2Out3LoadCompleteHandler_dyn();

		virtual Void showLinesEnabler1( Array< bool > codeArr);
		Dynamic showLinesEnabler1_dyn();

		virtual Void showLinesEnabler2( Array< bool > codeArr);
		Dynamic showLinesEnabler2_dyn();

		virtual Void hideAllLines( );
		Dynamic hideAllLines_dyn();

};

} // end namespace view
} // end namespace component
} // end namespace lines

#endif /* INCLUDED_view_component_lines_Enabler */ 
