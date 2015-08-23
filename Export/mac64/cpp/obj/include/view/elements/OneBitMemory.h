#ifndef INCLUDED_view_elements_OneBitMemory
#define INCLUDED_view_elements_OneBitMemory

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
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(view,elements,OneBitMemory)
namespace view{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES  OneBitMemory_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef OneBitMemory_obj OBJ_;
		OneBitMemory_obj();
		Void __construct(bool inputActive,bool setActive);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< OneBitMemory_obj > __new(bool inputActive,bool setActive);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OneBitMemory_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("OneBitMemory"); }

		bool inputActive;
		bool setActive;
		bool outActive;
		::openfl::display::Bitmap bottomLayer;
		::openfl::display::BitmapData bottomLayerBmpData;
		::openfl::display::Sprite inputButton;
		::openfl::display::Sprite setButton;
		::openfl::display::Bitmap gate1;
		::openfl::display::BitmapData gate1BmpData;
		::openfl::display::Bitmap gate2;
		::openfl::display::BitmapData gate2BmpData;
		::openfl::display::Bitmap gate3;
		::openfl::display::BitmapData gate3BmpData;
		::openfl::display::Bitmap gate4;
		::openfl::display::BitmapData gate4BmpData;
		::openfl::display::Bitmap input;
		::openfl::display::BitmapData inputBmpData;
		::openfl::display::Bitmap set;
		::openfl::display::BitmapData setBmpData;
		::openfl::display::Sprite bmpContainer;
		virtual Void addedToStageHandler( ::openfl::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void bottomLayerLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic bottomLayerLoadCompleteHandler_dyn();

		virtual Void gate1LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic gate1LoadCompleteHandler_dyn();

		virtual Void gate2LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic gate2LoadCompleteHandler_dyn();

		virtual Void gate3LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic gate3LoadCompleteHandler_dyn();

		virtual Void gate4LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic gate4LoadCompleteHandler_dyn();

		virtual Void inputLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic inputLoadCompleteHandler_dyn();

		virtual Void setLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic setLoadCompleteHandler_dyn();

		virtual Void createInputButton( );
		Dynamic createInputButton_dyn();

		virtual Void createSetButton( );
		Dynamic createSetButton_dyn();

		virtual Void inputButtonEventHandler( ::openfl::events::MouseEvent event);
		Dynamic inputButtonEventHandler_dyn();

		virtual Void setButtonEventHandler( ::openfl::events::MouseEvent event);
		Dynamic setButtonEventHandler_dyn();

		virtual Void showGate1Line( );
		Dynamic showGate1Line_dyn();

		virtual Void hideGate1Line( );
		Dynamic hideGate1Line_dyn();

		virtual Void showGate2Line( );
		Dynamic showGate2Line_dyn();

		virtual Void hideGate2Line( );
		Dynamic hideGate2Line_dyn();

		virtual Void showGate3Line( );
		Dynamic showGate3Line_dyn();

		virtual Void hideGate3Line( );
		Dynamic hideGate3Line_dyn();

		virtual Void showGate4Line( );
		Dynamic showGate4Line_dyn();

		virtual Void hideGate4Line( );
		Dynamic hideGate4Line_dyn();

		virtual Void showInputLine( );
		Dynamic showInputLine_dyn();

		virtual Void hideInputLine( );
		Dynamic hideInputLine_dyn();

		virtual Void showSetLine( );
		Dynamic showSetLine_dyn();

		virtual Void hideSetLine( );
		Dynamic hideSetLine_dyn();

		virtual Void setStatus( bool input,bool set);
		Dynamic setStatus_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace view
} // end namespace elements

#endif /* INCLUDED_view_elements_OneBitMemory */ 
