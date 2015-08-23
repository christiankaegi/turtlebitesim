#ifndef INCLUDED_view_component_Display
#define INCLUDED_view_component_Display

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
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
HX_DECLARE_CLASS2(view,component,Display)
HX_DECLARE_CLASS2(view,elements,SimpleRectangle)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  Display_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef Display_obj OBJ_;
		Display_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Display_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Display_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Display"); }

		::openfl::_legacy::text::TextField tf;
		::openfl::_legacy::display::Sprite checkBoxContainer;
		::view::elements::SimpleRectangle charCodeCheckbox;
		::view::elements::SimpleRectangle charCodeCheckboxActive;
		::openfl::_legacy::display::Sprite clickArea;
		::String displayBufferNumbers;
		::String displayBufferChars;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void createOutputTextField( );
		Dynamic createOutputTextField_dyn();

		virtual Void createCharCodeButton( );
		Dynamic createCharCodeButton_dyn();

		virtual Void createClickArea( );
		Dynamic createClickArea_dyn();

		virtual Void dataEventHandler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic dataEventHandler_dyn();

		virtual Void setCharCodeCheckBox( bool on);
		Dynamic setCharCodeCheckBox_dyn();

		virtual Void setOutput( int value);
		Dynamic setOutput_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_Display */ 
