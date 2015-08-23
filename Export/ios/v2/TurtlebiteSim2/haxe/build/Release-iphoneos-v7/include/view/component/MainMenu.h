#ifndef INCLUDED_view_component_MainMenu
#define INCLUDED_view_component_MainMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
HX_DECLARE_CLASS1(events,AppEvent)
HX_DECLARE_CLASS2(model,data,AppData)
HX_DECLARE_CLASS2(model,vo,FrequencyVO)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Shape)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS2(view,component,MainMenu)
HX_DECLARE_CLASS2(view,elements,LabelButton)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  MainMenu_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef MainMenu_obj OBJ_;
		MainMenu_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MainMenu_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MainMenu_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MainMenu"); }

		::model::data::AppData appData;
		::openfl::_legacy::display::Sprite menuContainer;
		::openfl::_legacy::display::Shape bg;
		::openfl::_legacy::display::Sprite stepController;
		Float buttonWidth;
		int buttonGap;
		::view::elements::LabelButton resetButton;
		::view::elements::LabelButton powerButton;
		::view::elements::LabelButton playButton;
		::view::elements::LabelButton manualClockButton;
		::view::elements::LabelButton hertzButton;
		Array< ::Dynamic > hertzSubmenuButtons;
		::openfl::_legacy::display::Sprite middleMenuContainer;
		::view::elements::LabelButton showUnitsButton;
		::view::elements::LabelButton showFlowButton;
		::view::elements::LabelButton showHighlightButton;
		::view::elements::LabelButton componentsButton;
		Array< ::Dynamic > componentsSubmenuButtons;
		::view::elements::LabelButton zoomButton;
		::view::elements::LabelButton editRomButton;
		::view::elements::LabelButton architectureButton;
		::openfl::_legacy::display::Sprite stepCountContainer;
		::openfl::_legacy::display::Sprite hertzSubmenuContainer;
		::openfl::_legacy::display::Sprite componentsSubmenuContainer;
		::openfl::_legacy::text::TextField tfStepCount;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void createBG( );
		Dynamic createBG_dyn();

		virtual Void createStepController( );
		Dynamic createStepController_dyn();

		virtual Void createZoomButton( );
		Dynamic createZoomButton_dyn();

		virtual Void createEditRomButton( );
		Dynamic createEditRomButton_dyn();

		virtual Void createHertzSubmenu( Array< ::Dynamic > vo);
		Dynamic createHertzSubmenu_dyn();

		virtual Void createComponentsSubmenu( );
		Dynamic createComponentsSubmenu_dyn();

		virtual Void createMiddleMenuContainer( );
		Dynamic createMiddleMenuContainer_dyn();

		virtual Void createMiddleMenuButtons( );
		Dynamic createMiddleMenuButtons_dyn();

		virtual Void createArchitectureButton( );
		Dynamic createArchitectureButton_dyn();

		virtual Void dataEventHandler( ::events::AppEvent event);
		Dynamic dataEventHandler_dyn();

		virtual Void setProgramPointer( ::String pointer);
		Dynamic setProgramPointer_dyn();

		virtual Void setHertz( ::String label);
		Dynamic setHertz_dyn();

		virtual Void setHertzActive( bool on,Dynamic pointer);
		Dynamic setHertzActive_dyn();

		virtual Void setComponentsActive( bool on);
		Dynamic setComponentsActive_dyn();

		virtual Void setZoomActive( bool on);
		Dynamic setZoomActive_dyn();

		virtual Void setShowUnitsActive( bool on);
		Dynamic setShowUnitsActive_dyn();

		virtual Void setShowFlowActive( bool on);
		Dynamic setShowFlowActive_dyn();

		virtual Void setShowHighlightActive( bool on);
		Dynamic setShowHighlightActive_dyn();

		virtual Void resetHertzSubmenu( int pointer);
		Dynamic resetHertzSubmenu_dyn();

		virtual Void setPowerOn( bool on);
		Dynamic setPowerOn_dyn();

		virtual Void showButtons( bool show);
		Dynamic showButtons_dyn();

		virtual Void setPlay( bool on);
		Dynamic setPlay_dyn();

		static int NAVIG_BG_HEIGHT;
};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_MainMenu */ 
