#ifndef INCLUDED_view_component_basis_Comparators
#define INCLUDED_view_component_basis_Comparators

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
HX_DECLARE_CLASS3(view,component,basis,Comparators)
namespace view{
namespace component{
namespace basis{


class HXCPP_CLASS_ATTRIBUTES  Comparators_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef Comparators_obj OBJ_;
		Comparators_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Comparators_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Comparators_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Comparators"); }

		::openfl::_legacy::display::Bitmap MOVLine;
		::openfl::_legacy::display::Bitmap SEALine;
		::openfl::_legacy::display::Bitmap ALULine;
		::openfl::_legacy::display::Bitmap STOLine;
		::openfl::_legacy::display::Bitmap LOALine;
		::openfl::_legacy::display::Bitmap TAKLine;
		::openfl::_legacy::display::Bitmap PRNLine;
		::openfl::_legacy::display::Bitmap JELine;
		::openfl::_legacy::display::Bitmap JMELine;
		::openfl::_legacy::display::Bitmap JMPLine;
		::openfl::_legacy::display::Bitmap compPoweredLines;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void movLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic movLoadCompleteHandler_dyn();

		virtual Void seaLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic seaLoadCompleteHandler_dyn();

		virtual Void aluLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic aluLoadCompleteHandler_dyn();

		virtual Void stoLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic stoLoadCompleteHandler_dyn();

		virtual Void loaLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic loaLoadCompleteHandler_dyn();

		virtual Void takLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic takLoadCompleteHandler_dyn();

		virtual Void prnLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic prnLoadCompleteHandler_dyn();

		virtual Void jeLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic jeLoadCompleteHandler_dyn();

		virtual Void jmeLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic jmeLoadCompleteHandler_dyn();

		virtual Void jmpLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic jmpLoadCompleteHandler_dyn();

		virtual Void compPoweredLinesLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic compPoweredLinesLoadCompleteHandler_dyn();

};

} // end namespace view
} // end namespace component
} // end namespace basis

#endif /* INCLUDED_view_component_basis_Comparators */ 
