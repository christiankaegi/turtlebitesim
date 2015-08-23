#ifndef INCLUDED_view_elements_SimpleRectangle
#define INCLUDED_view_elements_SimpleRectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(view,elements,SimpleRectangle)
namespace view{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES  SimpleRectangle_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef SimpleRectangle_obj OBJ_;
		SimpleRectangle_obj();
		Void __construct(Float width,Float height,Dynamic __o_color,Dynamic __o_alpha,Dynamic __o_hasLine,Dynamic __o_lineColor);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SimpleRectangle_obj > __new(Float width,Float height,Dynamic __o_color,Dynamic __o_alpha,Dynamic __o_hasLine,Dynamic __o_lineColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimpleRectangle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SimpleRectangle"); }

};

} // end namespace view
} // end namespace elements

#endif /* INCLUDED_view_elements_SimpleRectangle */ 
