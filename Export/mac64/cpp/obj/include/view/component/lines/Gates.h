#ifndef INCLUDED_view_component_lines_Gates
#define INCLUDED_view_component_lines_Gates

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS2(model,vo,InstructionVO)
HX_DECLARE_CLASS2(model,vo,SnapshotVO)
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
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS3(view,component,lines,Gates)
namespace view{
namespace component{
namespace lines{


class HXCPP_CLASS_ATTRIBUTES  Gates_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Gates_obj OBJ_;
		Gates_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Gates_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Gates_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Gates"); }

		::openfl::display::Bitmap g1Out0;
		::openfl::display::Bitmap g1Out1;
		::openfl::display::Bitmap g1Out2;
		::openfl::display::Bitmap g1Out3;
		::openfl::display::Bitmap g2Out;
		::openfl::display::Bitmap g3Out;
		::openfl::display::Bitmap g4Out;
		::openfl::display::Bitmap g5Out;
		::openfl::display::Bitmap g6Out;
		::openfl::display::Bitmap g7Out;
		::openfl::display::Bitmap g8Out;
		::openfl::display::Bitmap g9Out;
		::openfl::text::TextField tf;
		virtual Void addedToStageHandler( ::openfl::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void g1Out0LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic g1Out0LoadCompleteHandler_dyn();

		virtual Void g1Out1LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic g1Out1LoadCompleteHandler_dyn();

		virtual Void g1Out2LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic g1Out2LoadCompleteHandler_dyn();

		virtual Void g1Out3LoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic g1Out3LoadCompleteHandler_dyn();

		virtual Void g2OutLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic g2OutLoadCompleteHandler_dyn();

		virtual Void g3OutLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic g3OutLoadCompleteHandler_dyn();

		virtual Void g4OutLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic g4OutLoadCompleteHandler_dyn();

		virtual Void g5OutLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic g5OutLoadCompleteHandler_dyn();

		virtual Void g6OutLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic g6OutLoadCompleteHandler_dyn();

		virtual Void g7OutLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic g7OutLoadCompleteHandler_dyn();

		virtual Void g8OutLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic g8OutLoadCompleteHandler_dyn();

		virtual Void g9OutLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic g9OutLoadCompleteHandler_dyn();

		virtual Void showLines( ::model::vo::InstructionVO instruction,::model::vo::SnapshotVO accumulator,::model::vo::SnapshotVO register1,::model::vo::SnapshotVO ram);
		Dynamic showLines_dyn();

		virtual Void showLinesG1( Array< bool > codeArr);
		Dynamic showLinesG1_dyn();

		virtual Void hideLinesG1( );
		Dynamic hideLinesG1_dyn();

		virtual Void showLineG6( );
		Dynamic showLineG6_dyn();

		virtual Void hideLineG6( );
		Dynamic hideLineG6_dyn();

		virtual Void hideAllLines( );
		Dynamic hideAllLines_dyn();

};

} // end namespace view
} // end namespace component
} // end namespace lines

#endif /* INCLUDED_view_component_lines_Gates */ 
