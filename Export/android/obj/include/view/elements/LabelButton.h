#ifndef INCLUDED_view_elements_LabelButton
#define INCLUDED_view_elements_LabelButton

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
HX_DECLARE_CLASS2(view,elements,LabelButton)
HX_DECLARE_CLASS2(view,elements,SimpleRectangle)
namespace view{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES  LabelButton_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef LabelButton_obj OBJ_;
		LabelButton_obj();
		Void __construct(Float width,::String __o_label,Dynamic __o_hasCheckbox,Dynamic __o_inactive);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LabelButton_obj > __new(Float width,::String __o_label,Dynamic __o_hasCheckbox,Dynamic __o_inactive);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LabelButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LabelButton"); }

		bool inactive;
		::view::elements::SimpleRectangle bg;
		::view::elements::SimpleRectangle bgHighlight;
		::view::elements::SimpleRectangle bgActive;
		bool hasCheckbox;
		::view::elements::SimpleRectangle checkboxBgUnselected;
		::view::elements::SimpleRectangle checkboxBgSelected;
		::openfl::_legacy::display::Sprite clickArea;
		::openfl::_legacy::text::TextField tfLabel;
		::String labelText;
		Float btnWidth;
		virtual Void createBG( );
		Dynamic createBG_dyn();

		virtual Void createCheckbox( );
		Dynamic createCheckbox_dyn();

		virtual Void createLabel( );
		Dynamic createLabel_dyn();

		virtual Void createClickArea( );
		Dynamic createClickArea_dyn();

		virtual Void buttonDownHandler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic buttonDownHandler_dyn();

		virtual Void buttonUpHandler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic buttonUpHandler_dyn();

		virtual Void setLabel( ::String label);
		Dynamic setLabel_dyn();

		virtual Void setActive( bool on);
		Dynamic setActive_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		static int BTN_HEIGHT;
		static int BG_COLOR;
		static int BG_INACTIVE_COLOR;
		static int BG_COLOR_HIGHLIGHT;
		static int BG_COLOR_ACTIVE;
};

} // end namespace view
} // end namespace elements

#endif /* INCLUDED_view_elements_LabelButton */ 
