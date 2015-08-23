#ifndef INCLUDED_view_component_lines_Gates
#define INCLUDED_view_component_lines_Gates

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
HX_DECLARE_CLASS2(model,vo,InstructionVO)
HX_DECLARE_CLASS2(model,vo,SnapshotVO)
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
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS3(view,component,lines,Gates)
namespace view{
namespace component{
namespace lines{


class HXCPP_CLASS_ATTRIBUTES  Gates_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
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

		::openfl::_legacy::display::Bitmap g1Out0;
		::openfl::_legacy::display::Bitmap g1Out1;
		::openfl::_legacy::display::Bitmap g1Out2;
		::openfl::_legacy::display::Bitmap g1Out3;
		::openfl::_legacy::display::Bitmap g2Out;
		::openfl::_legacy::display::Bitmap g3Out;
		::openfl::_legacy::display::Bitmap g4Out;
		::openfl::_legacy::display::Bitmap g5Out;
		::openfl::_legacy::display::Bitmap g6Out;
		::openfl::_legacy::display::Bitmap g7Out;
		::openfl::_legacy::display::Bitmap g8Out;
		::openfl::_legacy::display::Bitmap g9Out;
		::openfl::_legacy::text::TextField tf;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void g1Out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic g1Out0LoadCompleteHandler_dyn();

		virtual Void g1Out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic g1Out1LoadCompleteHandler_dyn();

		virtual Void g1Out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic g1Out2LoadCompleteHandler_dyn();

		virtual Void g1Out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic g1Out3LoadCompleteHandler_dyn();

		virtual Void g2OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic g2OutLoadCompleteHandler_dyn();

		virtual Void g3OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic g3OutLoadCompleteHandler_dyn();

		virtual Void g4OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic g4OutLoadCompleteHandler_dyn();

		virtual Void g5OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic g5OutLoadCompleteHandler_dyn();

		virtual Void g6OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic g6OutLoadCompleteHandler_dyn();

		virtual Void g7OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic g7OutLoadCompleteHandler_dyn();

		virtual Void g8OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic g8OutLoadCompleteHandler_dyn();

		virtual Void g9OutLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
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
