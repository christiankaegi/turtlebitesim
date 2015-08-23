#ifndef INCLUDED_view_component_basis_Comparator
#define INCLUDED_view_component_basis_Comparator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
HX_DECLARE_CLASS2(model,vo,InstructionVO)
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
HX_DECLARE_CLASS3(view,component,basis,Comparator)
namespace view{
namespace component{
namespace basis{


class HXCPP_CLASS_ATTRIBUTES  Comparator_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
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

		::openfl::_legacy::display::Bitmap MOVLine;
		::openfl::_legacy::display::Bitmap LDILine;
		::openfl::_legacy::display::Bitmap ALULine;
		::openfl::_legacy::display::Bitmap SDALine;
		::openfl::_legacy::display::Bitmap LDALine;
		::openfl::_legacy::display::Bitmap INPLine;
		::openfl::_legacy::display::Bitmap OUTLine;
		::openfl::_legacy::display::Bitmap JELine;
		::openfl::_legacy::display::Bitmap JNELine;
		::openfl::_legacy::display::Bitmap JMPLine;
		::openfl::_legacy::display::Bitmap compStaticLines;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void movLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic movLoadCompleteHandler_dyn();

		virtual Void ldiLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic ldiLoadCompleteHandler_dyn();

		virtual Void aluLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic aluLoadCompleteHandler_dyn();

		virtual Void sdaLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic sdaLoadCompleteHandler_dyn();

		virtual Void ldaLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic ldaLoadCompleteHandler_dyn();

		virtual Void inpLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic inpLoadCompleteHandler_dyn();

		virtual Void outLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic outLoadCompleteHandler_dyn();

		virtual Void jeLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic jeLoadCompleteHandler_dyn();

		virtual Void jneLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic jneLoadCompleteHandler_dyn();

		virtual Void jmpLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic jmpLoadCompleteHandler_dyn();

		virtual Void compStaticLinesLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic compStaticLinesLoadCompleteHandler_dyn();

		virtual Void showLines( ::model::vo::InstructionVO instruction);
		Dynamic showLines_dyn();

		virtual Void hideAllLines( );
		Dynamic hideAllLines_dyn();

};

} // end namespace view
} // end namespace component
} // end namespace basis

#endif /* INCLUDED_view_component_basis_Comparator */ 
