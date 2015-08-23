#ifndef INCLUDED_view_component_RomRamDisplay
#define INCLUDED_view_component_RomRamDisplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS2(model,vo,InstructionVO)
HX_DECLARE_CLASS2(model,vo,SnapshotVO)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(view,component,RomRamDisplay)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  RomRamDisplay_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef RomRamDisplay_obj OBJ_;
		RomRamDisplay_obj();
		Void __construct(int color);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RomRamDisplay_obj > __new(int color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RomRamDisplay_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RomRamDisplay"); }

		Array< ::Dynamic > tfOut;
		int textColor;
		virtual Void resetValues( Dynamic powerOff);
		Dynamic resetValues_dyn();

		virtual ::openfl::text::TextField getBasicTextField( );
		Dynamic getBasicTextField_dyn();

		virtual Void loadMemory( Array< ::Dynamic > instructions);
		Dynamic loadMemory_dyn();

		virtual Void updateCell( Array< ::Dynamic > values,int pointer);
		Dynamic updateCell_dyn();

		virtual Void setPointer( int pointer);
		Dynamic setPointer_dyn();

		virtual Void resetPointer( );
		Dynamic resetPointer_dyn();

		virtual Void clear( Dynamic powerOff);
		Dynamic clear_dyn();

};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_RomRamDisplay */ 
