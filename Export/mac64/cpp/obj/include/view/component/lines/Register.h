#ifndef INCLUDED_view_component_lines_Register
#define INCLUDED_view_component_lines_Register

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
HX_DECLARE_CLASS3(view,component,lines,Register)
namespace view{
namespace component{
namespace lines{


class HXCPP_CLASS_ATTRIBUTES  Register_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Register_obj OBJ_;
		Register_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Register_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Register_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Register"); }

		::openfl::display::Bitmap r1out0;
		::openfl::display::Bitmap r1out1;
		::openfl::display::Bitmap r1out2;
		::openfl::display::Bitmap r1out3;
		::openfl::display::Bitmap r2out0;
		::openfl::display::Bitmap r2out1;
		::openfl::display::Bitmap r2out2;
		::openfl::display::Bitmap r2out3;
		virtual Void addedToStageHandler( ::openfl::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void r1out0LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic r1out0LoadCompleteHandler_dyn();

		virtual Void r1out1LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic r1out1LoadCompleteHandler_dyn();

		virtual Void r1out2LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic r1out2LoadCompleteHandler_dyn();

		virtual Void r1out3LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic r1out3LoadCompleteHandler_dyn();

		virtual Void r2out0LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic r2out0LoadCompleteHandler_dyn();

		virtual Void r2out1LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic r2out1LoadCompleteHandler_dyn();

		virtual Void r2out2LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic r2out2LoadCompleteHandler_dyn();

		virtual Void r2out3LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic r2out3LoadCompleteHandler_dyn();

		virtual Void showLinesRegister1( Array< bool > codeArr);
		Dynamic showLinesRegister1_dyn();

		virtual Void showLinesRegister2( Array< bool > codeArr);
		Dynamic showLinesRegister2_dyn();

		virtual Void hideLines( ::String id);
		Dynamic hideLines_dyn();

		virtual Void hideAllLines( );
		Dynamic hideAllLines_dyn();

};

} // end namespace view
} // end namespace component
} // end namespace lines

#endif /* INCLUDED_view_component_lines_Register */ 
