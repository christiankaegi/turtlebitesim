#ifndef INCLUDED_view_elements_OpcodeMenu
#define INCLUDED_view_elements_OpcodeMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS1(events,AppEvent)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(view,elements,LabelButton)
HX_DECLARE_CLASS2(view,elements,OpcodeMenu)
namespace view{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES  OpcodeMenu_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef OpcodeMenu_obj OBJ_;
		OpcodeMenu_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< OpcodeMenu_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OpcodeMenu_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("OpcodeMenu"); }

		::openfl::display::Sprite menuContainer;
		Array< ::Dynamic > menuButtons;
		virtual Void createMenu( );
		Dynamic createMenu_dyn();

		virtual Void dataEventHandler( ::events::AppEvent event);
		Dynamic dataEventHandler_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace view
} // end namespace elements

#endif /* INCLUDED_view_elements_OpcodeMenu */ 
