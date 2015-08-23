#ifndef INCLUDED_view_component_EditRom
#define INCLUDED_view_component_EditRom

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
HX_DECLARE_CLASS1(events,AppEvent)
HX_DECLARE_CLASS2(model,data,ProgramData)
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
HX_DECLARE_CLASS2(view,component,EditRom)
HX_DECLARE_CLASS2(view,elements,LabelButton)
HX_DECLARE_CLASS2(view,elements,RomRow)
HX_DECLARE_CLASS2(view,elements,SimpleRectangle)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  EditRom_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef EditRom_obj OBJ_;
		EditRom_obj();
		Void __construct(::model::data::ProgramData programData);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< EditRom_obj > __new(::model::data::ProgramData programData);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EditRom_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EditRom"); }

		::model::data::ProgramData programData;
		::openfl::_legacy::display::BitmapData bmpData;
		::openfl::_legacy::display::Bitmap bmp;
		::view::elements::SimpleRectangle bg;
		Float btnWidth;
		int buttonGap;
		Array< ::Dynamic > romRows;
		::openfl::_legacy::display::Sprite romRowsContainer;
		::openfl::_legacy::text::TextField tfSampleTitle;
		::openfl::_legacy::display::Sprite buttonContainer;
		::view::elements::LabelButton loadButton;
		::view::elements::LabelButton saveButton;
		::view::elements::LabelButton sample1Button;
		::view::elements::LabelButton sample2Button;
		::view::elements::LabelButton sample3Button;
		::view::elements::LabelButton clearRomButton;
		::view::elements::LabelButton cancelButton;
		::view::elements::LabelButton okButton;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void bmpLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic bmpLoadCompleteHandler_dyn();

		virtual Void createOkButton( );
		Dynamic createOkButton_dyn();

		virtual Void createCancelButton( );
		Dynamic createCancelButton_dyn();

		virtual Void createLoadButton( );
		Dynamic createLoadButton_dyn();

		virtual Void createSaveButton( );
		Dynamic createSaveButton_dyn();

		virtual Void createSampleButtons( );
		Dynamic createSampleButtons_dyn();

		virtual Void createRomRows( );
		Dynamic createRomRows_dyn();

		virtual Void populateRomRows( Array< ::Dynamic > instructions);
		Dynamic populateRomRows_dyn();

		virtual Void dataEventHandler( ::events::AppEvent event);
		Dynamic dataEventHandler_dyn();

		virtual Void setActiveSample( int sample);
		Dynamic setActiveSample_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_EditRom */ 
