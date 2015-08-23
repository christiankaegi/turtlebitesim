#ifndef INCLUDED_view_elements_OneBitMemory
#define INCLUDED_view_elements_OneBitMemory

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
HX_DECLARE_CLASS2(view,elements,OneBitMemory)
namespace view{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES  OneBitMemory_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef OneBitMemory_obj OBJ_;
		OneBitMemory_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< OneBitMemory_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OneBitMemory_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("OneBitMemory"); }

		::openfl::_legacy::display::Bitmap bottomLayer;
		::openfl::_legacy::display::BitmapData bottomLayerBmpData;
		::openfl::_legacy::display::Bitmap gate1;
		::openfl::_legacy::display::BitmapData gate1BmpData;
		::openfl::_legacy::display::Bitmap gate2;
		::openfl::_legacy::display::BitmapData gate2BmpData;
		::openfl::_legacy::display::Bitmap gate3;
		::openfl::_legacy::display::BitmapData gate3BmpData;
		::openfl::_legacy::display::Bitmap gate4;
		::openfl::_legacy::display::BitmapData gate4BmpData;
		::openfl::_legacy::display::Bitmap input;
		::openfl::_legacy::display::BitmapData inputBmpData;
		::openfl::_legacy::display::Bitmap set;
		::openfl::_legacy::display::BitmapData setBmpData;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void bottomLayerLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic bottomLayerLoadCompleteHandler_dyn();

		virtual Void gate1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic gate1LoadCompleteHandler_dyn();

		virtual Void gate2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic gate2LoadCompleteHandler_dyn();

		virtual Void gate3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic gate3LoadCompleteHandler_dyn();

		virtual Void gate4LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic gate4LoadCompleteHandler_dyn();

		virtual Void inputLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic inputLoadCompleteHandler_dyn();

		virtual Void setLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic setLoadCompleteHandler_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace view
} // end namespace elements

#endif /* INCLUDED_view_elements_OneBitMemory */ 
