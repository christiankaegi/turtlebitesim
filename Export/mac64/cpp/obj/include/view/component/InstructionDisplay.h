#ifndef INCLUDED_view_component_InstructionDisplay
#define INCLUDED_view_component_InstructionDisplay

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
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(view,component,InstructionDisplay)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  InstructionDisplay_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
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

		::openfl::display::Bitmap bmp;
		::openfl::text::TextField tfPointer;
		::openfl::text::TextField tfAssemblerOpcode;
		::openfl::text::TextField tfAssemblerAddress;
		::openfl::text::TextField tfMachineOpcode;
		::openfl::text::TextField tfMachineAddress;
		::openfl::text::TextField tfHexOpcode;
		::openfl::text::TextField tfHexAddress;
		::openfl::text::TextField tfDescription;
		virtual Void addedToStageHandler( ::openfl::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void bmpLoadCompleteHandler( ::openfl::display::BitmapData bmd);
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

		virtual ::openfl::text::TextField getBasicTextField( );
		Dynamic getBasicTextField_dyn();

		virtual Void setOutput( ::model::vo::InstructionVO instruction);
		Dynamic setOutput_dyn();

		virtual Void clearOutput( );
		Dynamic clearOutput_dyn();

};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_InstructionDisplay */ 
