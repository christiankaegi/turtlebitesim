#ifndef INCLUDED_view_component_basis_Alu
#define INCLUDED_view_component_basis_Alu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
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
HX_DECLARE_CLASS3(view,component,basis,Alu)
namespace view{
namespace component{
namespace basis{


class HXCPP_CLASS_ATTRIBUTES  Alu_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef Alu_obj OBJ_;
		Alu_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Alu_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Alu_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Alu"); }

		::openfl::_legacy::display::Bitmap out0;
		::openfl::_legacy::display::Bitmap out1;
		::openfl::_legacy::display::Bitmap out2;
		::openfl::_legacy::display::Bitmap out3;
		::openfl::_legacy::display::Bitmap equal;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic out0LoadCompleteHandler_dyn();

		virtual Void out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic out1LoadCompleteHandler_dyn();

		virtual Void out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic out2LoadCompleteHandler_dyn();

		virtual Void out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic out3LoadCompleteHandler_dyn();

		virtual Void equalLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic equalLoadCompleteHandler_dyn();

		virtual Void showLines( Array< bool > codeArr);
		Dynamic showLines_dyn();

		virtual Void showLineEqual( );
		Dynamic showLineEqual_dyn();

		virtual Void hideLinesOut( );
		Dynamic hideLinesOut_dyn();

		virtual Void hideLineEqual( );
		Dynamic hideLineEqual_dyn();

};

} // end namespace view
} // end namespace component
} // end namespace basis

#endif /* INCLUDED_view_component_basis_Alu */ 
