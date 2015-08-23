#ifndef INCLUDED_view_component_EnterInstruction
#define INCLUDED_view_component_EnterInstruction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
HX_DECLARE_CLASS1(events,AppEvent)
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
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS2(view,component,EnterInstruction)
HX_DECLARE_CLASS2(view,elements,LabelButton)
HX_DECLARE_CLASS2(view,elements,OpcodeMenu)
HX_DECLARE_CLASS2(view,elements,SimpleRectangle)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  EnterInstruction_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef EnterInstruction_obj OBJ_;
		EnterInstruction_obj();
		Void __construct(::model::vo::InstructionVO initialInstruction);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< EnterInstruction_obj > __new(::model::vo::InstructionVO initialInstruction);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnterInstruction_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EnterInstruction"); }

		::model::vo::InstructionVO initialInstruction;
		int selectedButtonID;
		Array< ::Dynamic > lineButtons;
		::openfl::_legacy::display::Sprite lineButtonsContainer;
		::view::elements::LabelButton closeButton;
		::openfl::_legacy::display::Bitmap bg;
		Array< ::Dynamic > lines;
		::openfl::_legacy::display::Sprite linesContainer;
		::openfl::_legacy::text::TextField tfAssemblerOpcode;
		::openfl::_legacy::display::Sprite opcodeMenuButton;
		::openfl::_legacy::text::TextField tfAssemblerAddress;
		::openfl::_legacy::display::Sprite tfAssemblerContainer;
		Array< bool > codeArr;
		Float posX;
		Float posY;
		::view::elements::OpcodeMenu opcodeMenu;
		::view::elements::SimpleRectangle barriere;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void bgLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic bgLoadCompleteHandler_dyn();

		virtual Void line0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic line0LoadCompleteHandler_dyn();

		virtual Void line1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic line1LoadCompleteHandler_dyn();

		virtual Void line2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic line2LoadCompleteHandler_dyn();

		virtual Void line3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic line3LoadCompleteHandler_dyn();

		virtual Void line4LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic line4LoadCompleteHandler_dyn();

		virtual Void line5LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic line5LoadCompleteHandler_dyn();

		virtual Void line6LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic line6LoadCompleteHandler_dyn();

		virtual Void line7LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic line7LoadCompleteHandler_dyn();

		virtual Void createTfAssembler( );
		Dynamic createTfAssembler_dyn();

		virtual Void createLineButtons( );
		Dynamic createLineButtons_dyn();

		virtual Void createCloseButton( );
		Dynamic createCloseButton_dyn();

		virtual Void createBarriere( );
		Dynamic createBarriere_dyn();

		virtual Void createOpcodeMenu( );
		Dynamic createOpcodeMenu_dyn();

		virtual Void opcodeMenuButtonHandler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic opcodeMenuButtonHandler_dyn();

		virtual Void opcodeMenuHandler( ::events::AppEvent event);
		Dynamic opcodeMenuHandler_dyn();

		virtual Void lineButton0Handler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic lineButton0Handler_dyn();

		virtual Void lineButton1Handler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic lineButton1Handler_dyn();

		virtual Void lineButton2Handler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic lineButton2Handler_dyn();

		virtual Void lineButton3Handler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic lineButton3Handler_dyn();

		virtual Void lineButton4Handler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic lineButton4Handler_dyn();

		virtual Void lineButton5Handler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic lineButton5Handler_dyn();

		virtual Void lineButton6Handler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic lineButton6Handler_dyn();

		virtual Void lineButton7Handler( ::openfl::_legacy::events::MouseEvent event);
		Dynamic lineButton7Handler_dyn();

		virtual Void lineButtonsHandler( int id);
		Dynamic lineButtonsHandler_dyn();

		virtual Void closeButtonHandler( ::events::AppEvent event);
		Dynamic closeButtonHandler_dyn();

		virtual ::openfl::_legacy::text::TextField getBasicTextField( );
		Dynamic getBasicTextField_dyn();

		virtual Void setInitialOutput( );
		Dynamic setInitialOutput_dyn();

		virtual ::String getOpcode( );
		Dynamic getOpcode_dyn();

		virtual ::String getAddress( );
		Dynamic getAddress_dyn();

		virtual Void setTfOpcode( ::String value);
		Dynamic setTfOpcode_dyn();

		virtual Void setTfAddress( ::String value);
		Dynamic setTfAddress_dyn();

		virtual Void hideBarriere( );
		Dynamic hideBarriere_dyn();

		virtual Void showLines( ::String opcode,::String address);
		Dynamic showLines_dyn();

		virtual Void showLine( int id);
		Dynamic showLine_dyn();

		virtual Void hideLine( int id);
		Dynamic hideLine_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_EnterInstruction */ 
