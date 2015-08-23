#ifndef INCLUDED_view_elements_DetailAccumulatorLines
#define INCLUDED_view_elements_DetailAccumulatorLines

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
HX_DECLARE_CLASS2(view,elements,DetailAccumulatorLines)
namespace view{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES  DetailAccumulatorLines_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef DetailAccumulatorLines_obj OBJ_;
		DetailAccumulatorLines_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DetailAccumulatorLines_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DetailAccumulatorLines_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DetailAccumulatorLines"); }

		::openfl::display::Bitmap enablerOut0;
		::openfl::display::BitmapData enablerOut0BmpData;
		::openfl::display::Bitmap enablerOut1;
		::openfl::display::BitmapData enablerOut1BmpData;
		::openfl::display::Bitmap enablerOut2;
		::openfl::display::BitmapData enablerOut2BmpData;
		::openfl::display::Bitmap enablerOut3;
		::openfl::display::BitmapData enablerOut3BmpData;
		::openfl::display::Bitmap memoryIn0;
		::openfl::display::BitmapData memoryIn0BmpData;
		::openfl::display::Bitmap memoryIn1;
		::openfl::display::BitmapData memoryIn1BmpData;
		::openfl::display::Bitmap memoryIn2;
		::openfl::display::BitmapData memoryIn2BmpData;
		::openfl::display::Bitmap memoryIn3;
		::openfl::display::BitmapData memoryIn3BmpData;
		::openfl::display::Bitmap memoryOut0;
		::openfl::display::BitmapData memoryOut0BmpData;
		::openfl::display::Bitmap memoryOut1;
		::openfl::display::BitmapData memoryOut1BmpData;
		::openfl::display::Bitmap memoryOut2;
		::openfl::display::BitmapData memoryOut2BmpData;
		::openfl::display::Bitmap memoryOut3;
		::openfl::display::BitmapData memoryOut3BmpData;
		::openfl::display::Bitmap enable;
		::openfl::display::BitmapData enableBmpData;
		::openfl::display::Bitmap memorySet;
		::openfl::display::BitmapData memorySetBmpData;
		virtual Void addedToStageHandler( ::openfl::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void enablerOut0LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic enablerOut0LoadCompleteHandler_dyn();

		virtual Void enablerOut1LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic enablerOut1LoadCompleteHandler_dyn();

		virtual Void enablerOut2LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic enablerOut2LoadCompleteHandler_dyn();

		virtual Void enablerOut3LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic enablerOut3LoadCompleteHandler_dyn();

		virtual Void memoryIn0LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic memoryIn0LoadCompleteHandler_dyn();

		virtual Void memoryIn1LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic memoryIn1LoadCompleteHandler_dyn();

		virtual Void memoryIn2LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic memoryIn2LoadCompleteHandler_dyn();

		virtual Void memoryIn3LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic memoryIn3LoadCompleteHandler_dyn();

		virtual Void memoryOut0LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic memoryOut0LoadCompleteHandler_dyn();

		virtual Void memoryOut1LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic memoryOut1LoadCompleteHandler_dyn();

		virtual Void memoryOut2LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic memoryOut2LoadCompleteHandler_dyn();

		virtual Void memoryOut3LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic memoryOut3LoadCompleteHandler_dyn();

		virtual Void enableLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic enableLoadCompleteHandler_dyn();

		virtual Void memorySetLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic memorySetLoadCompleteHandler_dyn();

		virtual Void hideMemoryOutLines( );
		Dynamic hideMemoryOutLines_dyn();

		virtual Void showInputLines( Array< bool > codeArr);
		Dynamic showInputLines_dyn();

		virtual Void hideAllInputLines( );
		Dynamic hideAllInputLines_dyn();

		virtual Void showEnablerOutLines( Array< bool > codeArr);
		Dynamic showEnablerOutLines_dyn();

		virtual Void hideEnablerOutLines( );
		Dynamic hideEnablerOutLines_dyn();

		virtual Void showEnableLine( );
		Dynamic showEnableLine_dyn();

		virtual Void hideEnableLine( );
		Dynamic hideEnableLine_dyn();

		virtual Void showSetLine( );
		Dynamic showSetLine_dyn();

		virtual Void hideSetLine( );
		Dynamic hideSetLine_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace view
} // end namespace elements

#endif /* INCLUDED_view_elements_DetailAccumulatorLines */ 
