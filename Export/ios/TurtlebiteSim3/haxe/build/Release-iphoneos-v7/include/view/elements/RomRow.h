#ifndef INCLUDED_view_elements_RomRow
#define INCLUDED_view_elements_RomRow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
HX_DECLARE_CLASS2(model,vo,InstructionVO)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS2(view,elements,RomRow)
namespace view{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES  RomRow_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef RomRow_obj OBJ_;
		RomRow_obj();
		Void __construct(::model::vo::InstructionVO instruction);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RomRow_obj > __new(::model::vo::InstructionVO instruction);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RomRow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RomRow"); }

		::openfl::_legacy::text::TextField tfPointer;
		::openfl::_legacy::text::TextField tfOpcode;
		::openfl::_legacy::text::TextField tfAddress;
		::openfl::_legacy::text::TextField tfCode;
		::openfl::_legacy::text::TextField tfHex;
		::openfl::_legacy::text::TextField tfDescription;
		virtual Void createTfPointer( );
		Dynamic createTfPointer_dyn();

		virtual Void createTfOpcode( );
		Dynamic createTfOpcode_dyn();

		virtual Void createTfAddress( );
		Dynamic createTfAddress_dyn();

		virtual Void createTfCode( );
		Dynamic createTfCode_dyn();

		virtual Void createTfHex( );
		Dynamic createTfHex_dyn();

		virtual Void createTfDescription( );
		Dynamic createTfDescription_dyn();

		virtual ::openfl::_legacy::text::TextField getBasicTextField( );
		Dynamic getBasicTextField_dyn();

		virtual Void populate( ::model::vo::InstructionVO instruction);
		Dynamic populate_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace view
} // end namespace elements

#endif /* INCLUDED_view_elements_RomRow */ 
