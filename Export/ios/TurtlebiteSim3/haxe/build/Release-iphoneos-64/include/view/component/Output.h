#ifndef INCLUDED_view_component_Output
#define INCLUDED_view_component_Output

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
HX_DECLARE_CLASS2(model,vo,InstructionVO)
HX_DECLARE_CLASS2(model,vo,SnapshotVO)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS2(view,component,Output)
HX_DECLARE_CLASS2(view,elements,RomRamDisplay)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  Output_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef Output_obj OBJ_;
		Output_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Output_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Output_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Output"); }

		::openfl::_legacy::text::TextField r1;
		::openfl::_legacy::text::TextField r2;
		::openfl::_legacy::text::TextField accu;
		::view::elements::RomRamDisplay rom;
		::view::elements::RomRamDisplay ram;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void createRomDisplay( );
		Dynamic createRomDisplay_dyn();

		virtual Void createRamDisplay( );
		Dynamic createRamDisplay_dyn();

		virtual Void createRegister1Display( );
		Dynamic createRegister1Display_dyn();

		virtual Void createRegister2Display( );
		Dynamic createRegister2Display_dyn();

		virtual Void createAccumulatorDisplay( );
		Dynamic createAccumulatorDisplay_dyn();

		virtual Void setRegister1( ::String value);
		Dynamic setRegister1_dyn();

		virtual Void setRegister2( ::String value);
		Dynamic setRegister2_dyn();

		virtual Void setAccumulator( ::String value);
		Dynamic setAccumulator_dyn();

		virtual Void loadRomDisplay( Array< ::Dynamic > instructions);
		Dynamic loadRomDisplay_dyn();

		virtual Void powerOn( );
		Dynamic powerOn_dyn();

		virtual Void powerOff( );
		Dynamic powerOff_dyn();

		virtual Void setProgramCountPointer( int pointer);
		Dynamic setProgramCountPointer_dyn();

		virtual Void updateRam( Array< ::Dynamic > values,int pointer);
		Dynamic updateRam_dyn();

		virtual Void resetRamPointer( );
		Dynamic resetRamPointer_dyn();

		virtual Void setRamPointer( int pointer);
		Dynamic setRamPointer_dyn();

		virtual Void resetRam( );
		Dynamic resetRam_dyn();

		virtual Void resetAll( );
		Dynamic resetAll_dyn();

};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_Output */ 
