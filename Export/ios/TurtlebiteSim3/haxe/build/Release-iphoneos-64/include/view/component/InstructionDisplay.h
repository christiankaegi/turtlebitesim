#ifndef INCLUDED_view_component_InstructionDisplay
#define INCLUDED_view_component_InstructionDisplay

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
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS2(view,component,InstructionDisplay)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  InstructionDisplay_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef InstructionDisplay_obj OBJ_;
		InstructionDisplay_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InstructionDisplay_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InstructionDisplay_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InstructionDisplay"); }

		::openfl::_legacy::display::Bitmap bmp;
		::openfl::_legacy::text::TextField tfPointer;
		::openfl::_legacy::text::TextField tfAssemblerOpcode;
		::openfl::_legacy::text::TextField tfAssemblerAddress;
		::openfl::_legacy::text::TextField tfMachineOpcode;
		::openfl::_legacy::text::TextField tfMachineAddress;
		::openfl::_legacy::text::TextField tfHexOpcode;
		::openfl::_legacy::text::TextField tfHexAddress;
		::openfl::_legacy::text::TextField tfDescription;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void bmpLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic bmpLoadCompleteHandler_dyn();

		virtual Void createTfPointer( );
		Dynamic createTfPointer_dyn();

		virtual Void createTfAssembler( );
		Dynamic createTfAssembler_dyn();

		virtual Void createTfMachine( );
		Dynamic createTfMachine_dyn();

		virtual Void createTfHex( );
		Dynamic createTfHex_dyn();

		virtual Void createTfDescription( );
		Dynamic createTfDescription_dyn();

		virtual ::openfl::_legacy::text::TextField getBasicTextField( );
		Dynamic getBasicTextField_dyn();

		virtual Void setOutput( ::model::vo::InstructionVO instruction);
		Dynamic setOutput_dyn();

		virtual Void clearOutput( );
		Dynamic clearOutput_dyn();

};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_InstructionDisplay */ 
