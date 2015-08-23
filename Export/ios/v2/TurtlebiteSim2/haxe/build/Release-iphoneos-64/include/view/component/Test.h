#ifndef INCLUDED_view_component_Test
#define INCLUDED_view_component_Test

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
HX_DECLARE_CLASS2(model,vo,FrequencyVO)
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
HX_DECLARE_CLASS2(view,component,Test)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  Test_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef Test_obj OBJ_;
		Test_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Test_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Test_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Test"); }

		::openfl::_legacy::display::Sprite btnClockSpeed;
		::openfl::_legacy::display::Sprite btnZoom;
		::openfl::_legacy::text::TextField tfClockSpeed;
		::openfl::_legacy::text::TextField tfBusData;
		::openfl::_legacy::text::TextField tfDebug;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void addBtnClockSpeed( );
		Dynamic addBtnClockSpeed_dyn();

		virtual Void addBtnZoom( );
		Dynamic addBtnZoom_dyn();

		virtual Void addClockSpeedInfo( );
		Dynamic addClockSpeedInfo_dyn();

		virtual Void addBusData( );
		Dynamic addBusData_dyn();

		virtual Void addDebugInfo( );
		Dynamic addDebugInfo_dyn();

		virtual Void btnClockSpeedHandler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic btnClockSpeedHandler_dyn();

		virtual Void btnZoomHandler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic btnZoomHandler_dyn();

		virtual Void test( ::String str);
		Dynamic test_dyn();

		virtual Void clockSpeedChanged( ::model::vo::FrequencyVO speed);
		Dynamic clockSpeedChanged_dyn();

		virtual Void showInstruction( ::String text);
		Dynamic showInstruction_dyn();

};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_Test */ 
