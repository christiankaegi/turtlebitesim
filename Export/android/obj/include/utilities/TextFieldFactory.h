#ifndef INCLUDED_utilities_TextFieldFactory
#define INCLUDED_utilities_TextFieldFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
HX_DECLARE_CLASS1(utilities,TextFieldFactory)
namespace utilities{


class HXCPP_CLASS_ATTRIBUTES  TextFieldFactory_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextFieldFactory_obj OBJ_;
		TextFieldFactory_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextFieldFactory_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFieldFactory_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TextFieldFactory"); }

		static int TF_WIDTH;
		static int TF_HEIGHT;
		static Float SCALE_FACTOR;
		static ::openfl::_legacy::text::TextFormat TEXT_FORMAT;
		static ::openfl::_legacy::text::TextFormat TEXT_FORMAT_CENTERED;
		static ::openfl::_legacy::text::TextFormat TEXT_FORMAT_BOLD;
		static ::openfl::_legacy::text::TextFormat TEXT_FORMAT_CENTERED_BOLD;
		static ::openfl::_legacy::text::TextFormat TEXT_FORMAT_BUTTON_LABEL;
		static ::openfl::_legacy::text::TextFormat OUTPUT_TEXT_FORMAT_BOLD;
		static ::openfl::_legacy::text::TextFormat STEP_TEXT_FORMAT;
		static int TEXT_ACTIVE_COLOR;
		static int TEXT_INACTIVE_COLOR;
		static ::openfl::_legacy::text::TextField getOutputTFBold( );
		static Dynamic getOutputTFBold_dyn();

		static ::openfl::_legacy::text::TextField getInstructionOutput( );
		static Dynamic getInstructionOutput_dyn();

};

} // end namespace utilities

#endif /* INCLUDED_utilities_TextFieldFactory */ 
