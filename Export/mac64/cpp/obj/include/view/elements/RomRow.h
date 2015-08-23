#ifndef INCLUDED_view_elements_RomRow
#define INCLUDED_view_elements_RomRow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS2(model,vo,InstructionVO)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(view,elements,RomRow)
namespace view{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES  RomRow_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
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

		::openfl::text::TextField tfPointer;
		::openfl::text::TextField tfOpcode;
		::openfl::text::TextField tfAddress;
		::openfl::text::TextField tfCode;
		::openfl::text::TextField tfHex;
		::openfl::text::TextField tfDescription;
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

		virtual ::openfl::text::TextField getBasicTextField( );
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
