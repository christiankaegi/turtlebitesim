#ifndef INCLUDED_view_component_lines_Comparator
#define INCLUDED_view_component_lines_Comparator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS2(model,vo,InstructionVO)
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
HX_DECLARE_CLASS3(view,component,lines,Comparator)
namespace view{
namespace component{
namespace lines{


class HXCPP_CLASS_ATTRIBUTES  Comparator_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Comparator_obj OBJ_;
		Comparator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Comparator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Comparator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Comparator"); }

		::openfl::display::Bitmap MOVLine;
		::openfl::display::Bitmap LDILine;
		::openfl::display::Bitmap ALULine;
		::openfl::display::Bitmap SDALine;
		::openfl::display::Bitmap LDALine;
		::openfl::display::Bitmap INPLine;
		::openfl::display::Bitmap OUTLine;
		::openfl::display::Bitmap JELine;
		::openfl::display::Bitmap JNELine;
		::openfl::display::Bitmap JMPLine;
		::openfl::display::Bitmap compStaticLines;
		virtual Void addedToStageHandler( ::openfl::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void movLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic movLoadCompleteHandler_dyn();

		virtual Void ldiLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic ldiLoadCompleteHandler_dyn();

		virtual Void aluLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic aluLoadCompleteHandler_dyn();

		virtual Void sdaLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic sdaLoadCompleteHandler_dyn();

		virtual Void ldaLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic ldaLoadCompleteHandler_dyn();

		virtual Void inpLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic inpLoadCompleteHandler_dyn();

		virtual Void outLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic outLoadCompleteHandler_dyn();

		virtual Void jeLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic jeLoadCompleteHandler_dyn();

		virtual Void jneLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic jneLoadCompleteHandler_dyn();

		virtual Void jmpLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic jmpLoadCompleteHandler_dyn();

		virtual Void compStaticLinesLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic compStaticLinesLoadCompleteHandler_dyn();

		virtual Void showLines( ::model::vo::InstructionVO instruction);
		Dynamic showLines_dyn();

		virtual Void showCompStaticLines( );
		Dynamic showCompStaticLines_dyn();

		virtual Void hideCompStaticLines( );
		Dynamic hideCompStaticLines_dyn();

		virtual Void hideAllLines( );
		Dynamic hideAllLines_dyn();

};

} // end namespace view
} // end namespace component
} // end namespace lines

#endif /* INCLUDED_view_component_lines_Comparator */ 
