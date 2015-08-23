#ifndef INCLUDED_view_elements_DetailAccumulatorLines
#define INCLUDED_view_elements_DetailAccumulatorLines

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
HX_DECLARE_CLASS2(view,elements,DetailAccumulatorLines)
namespace view{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES  DetailAccumulatorLines_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
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

		::openfl::_legacy::display::Bitmap enablerOut0;
		::openfl::_legacy::display::BitmapData enablerOut0BmpData;
		::openfl::_legacy::display::Bitmap enablerOut1;
		::openfl::_legacy::display::BitmapData enablerOut1BmpData;
		::openfl::_legacy::display::Bitmap enablerOut2;
		::openfl::_legacy::display::BitmapData enablerOut2BmpData;
		::openfl::_legacy::display::Bitmap enablerOut3;
		::openfl::_legacy::display::BitmapData enablerOut3BmpData;
		::openfl::_legacy::display::Bitmap memoryIn0;
		::openfl::_legacy::display::BitmapData memoryIn0BmpData;
		::openfl::_legacy::display::Bitmap memoryIn1;
		::openfl::_legacy::display::BitmapData memoryIn1BmpData;
		::openfl::_legacy::display::Bitmap memoryIn2;
		::openfl::_legacy::display::BitmapData memoryIn2BmpData;
		::openfl::_legacy::display::Bitmap memoryIn3;
		::openfl::_legacy::display::BitmapData memoryIn3BmpData;
		::openfl::_legacy::display::Bitmap memoryOut0;
		::openfl::_legacy::display::BitmapData memoryOut0BmpData;
		::openfl::_legacy::display::Bitmap memoryOut1;
		::openfl::_legacy::display::BitmapData memoryOut1BmpData;
		::openfl::_legacy::display::Bitmap memoryOut2;
		::openfl::_legacy::display::BitmapData memoryOut2BmpData;
		::openfl::_legacy::display::Bitmap memoryOut3;
		::openfl::_legacy::display::BitmapData memoryOut3BmpData;
		::openfl::_legacy::display::Bitmap enable;
		::openfl::_legacy::display::BitmapData enableBmpData;
		::openfl::_legacy::display::Bitmap memorySet;
		::openfl::_legacy::display::BitmapData memorySetBmpData;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void enablerOut0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic enablerOut0LoadCompleteHandler_dyn();

		virtual Void enablerOut1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic enablerOut1LoadCompleteHandler_dyn();

		virtual Void enablerOut2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic enablerOut2LoadCompleteHandler_dyn();

		virtual Void enablerOut3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic enablerOut3LoadCompleteHandler_dyn();

		virtual Void memoryIn0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic memoryIn0LoadCompleteHandler_dyn();

		virtual Void memoryIn1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic memoryIn1LoadCompleteHandler_dyn();

		virtual Void memoryIn2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic memoryIn2LoadCompleteHandler_dyn();

		virtual Void memoryIn3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic memoryIn3LoadCompleteHandler_dyn();

		virtual Void memoryOut0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic memoryOut0LoadCompleteHandler_dyn();

		virtual Void memoryOut1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic memoryOut1LoadCompleteHandler_dyn();

		virtual Void memoryOut2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic memoryOut2LoadCompleteHandler_dyn();

		virtual Void memoryOut3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic memoryOut3LoadCompleteHandler_dyn();

		virtual Void enableLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic enableLoadCompleteHandler_dyn();

		virtual Void memorySetLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic memorySetLoadCompleteHandler_dyn();

		virtual Void showLines( Array< bool > codeArr);
		Dynamic showLines_dyn();

		virtual Void hideAllLines( );
		Dynamic hideAllLines_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace view
} // end namespace elements

#endif /* INCLUDED_view_elements_DetailAccumulatorLines */ 
