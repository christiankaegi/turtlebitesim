#ifndef INCLUDED_view_component_DetailAccumulator
#define INCLUDED_view_component_DetailAccumulator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
HX_DECLARE_CLASS1(events,AppEvent)
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
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS2(view,component,DetailAccumulator)
HX_DECLARE_CLASS2(view,elements,DetailAccumulatorLines)
HX_DECLARE_CLASS2(view,elements,LabelButton)
HX_DECLARE_CLASS2(view,elements,OneBitMemory)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  DetailAccumulator_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef DetailAccumulator_obj OBJ_;
		DetailAccumulator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DetailAccumulator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DetailAccumulator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DetailAccumulator"); }

		::openfl::_legacy::display::Bitmap accuBottomLayer;
		::openfl::_legacy::display::BitmapData accuBottomLayerBmpData;
		::view::elements::OneBitMemory oneBitMemory;
		::openfl::_legacy::display::Sprite oneBitMemoryContainer;
		bool oneBitMemoryInputActive;
		bool oneBitMemorySetActive;
		::openfl::_legacy::display::Sprite accuLinesContainer;
		::view::elements::DetailAccumulatorLines accuLines;
		::view::elements::LabelButton closeButton;
		::openfl::_legacy::display::Sprite oneBitButton;
		::openfl::_legacy::text::TextField tfOutput;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void accuBottomLayerLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic accuBottomLayerLoadCompleteHandler_dyn();

		virtual Void createCloseButton( );
		Dynamic createCloseButton_dyn();

		virtual Void createOneBitButton( );
		Dynamic createOneBitButton_dyn();

		virtual Void createOutputText( );
		Dynamic createOutputText_dyn();

		virtual Void oneBitButtonEventHandler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic oneBitButtonEventHandler_dyn();

		virtual Void dataEventHandler( ::events::AppEvent event);
		Dynamic dataEventHandler_dyn();

		virtual Void setOutputText( ::String value);
		Dynamic setOutputText_dyn();

		virtual Void showInputLines( Array< bool > codeArr);
		Dynamic showInputLines_dyn();

		virtual Void showEnableLine( );
		Dynamic showEnableLine_dyn();

		virtual Void showEnablerOutLines( Array< bool > codeArr);
		Dynamic showEnablerOutLines_dyn();

		virtual Void hideEnablerOutLines( );
		Dynamic hideEnablerOutLines_dyn();

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
} // end namespace component

#endif /* INCLUDED_view_component_DetailAccumulator */ 
