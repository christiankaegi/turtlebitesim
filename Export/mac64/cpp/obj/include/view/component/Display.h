#ifndef INCLUDED_view_component_Display
#define INCLUDED_view_component_Display

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
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(view,component,Display)
HX_DECLARE_CLASS2(view,elements,SimpleRectangle)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  Display_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
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

		::openfl::text::TextField tf;
		::openfl::display::Sprite checkBoxContainer;
		::view::elements::SimpleRectangle charCodeCheckbox;
		::view::elements::SimpleRectangle charCodeCheckboxActive;
		::openfl::display::Sprite clickArea;
		::String displayBufferNumbers;
		::String displayBufferChars;
		virtual Void addedToStageHandler( ::openfl::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void createOutputTextField( );
		Dynamic createOutputTextField_dyn();

		virtual Void createCharCodeButton( );
		Dynamic createCharCodeButton_dyn();

		virtual Void createClickArea( );
		Dynamic createClickArea_dyn();

		virtual Void dataEventHandler( ::openfl::events::MouseEvent event);
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
