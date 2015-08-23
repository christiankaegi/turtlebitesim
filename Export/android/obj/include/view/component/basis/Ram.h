#ifndef INCLUDED_view_component_basis_Ram
#define INCLUDED_view_component_basis_Ram

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
HX_DECLARE_CLASS3(view,component,basis,Ram)
namespace view{
namespace component{
namespace basis{


class HXCPP_CLASS_ATTRIBUTES  Ram_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef Ram_obj OBJ_;
		Ram_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Ram_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ram_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ram"); }

		::openfl::_legacy::display::Bitmap out0;
		::openfl::_legacy::display::Bitmap out1;
		::openfl::_legacy::display::Bitmap out2;
		::openfl::_legacy::display::Bitmap out3;
		virtual Void addedToStageHandler( ::openfl::_legacy::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void out0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic out0LoadCompleteHandler_dyn();

		virtual Void out1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic out1LoadCompleteHandler_dyn();

		virtual Void out2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic out2LoadCompleteHandler_dyn();

		virtual Void out3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic out3LoadCompleteHandler_dyn();

};

} // end namespace view
} // end namespace component
} // end namespace basis

#endif /* INCLUDED_view_component_basis_Ram */ 
