#ifndef INCLUDED_view_component_TopLayer
#define INCLUDED_view_component_TopLayer

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
HX_DECLARE_CLASS2(view,component,TopLayer)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  TopLayer_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef TopLayer_obj OBJ_;
		TopLayer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TopLayer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TopLayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TopLayer"); }

		::openfl::display::Bitmap bmp;
		::openfl::display::Bitmap bmp2048;
		::openfl::display::Bitmap clock;
		virtual Void addedToStageHandler( ::openfl::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void bmpLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic bmpLoadCompleteHandler_dyn();

		virtual Void bmp2048LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic bmp2048LoadCompleteHandler_dyn();

		virtual Void clockLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic clockLoadCompleteHandler_dyn();

		virtual Void showClock( );
		Dynamic showClock_dyn();

		virtual Void hideClock( );
		Dynamic hideClock_dyn();

};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_TopLayer */ 
