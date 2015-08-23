#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Shape
#include <openfl/_legacy/display/Shape.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_view_elements_SimpleRectangle
#include <view/elements/SimpleRectangle.h>
#endif
namespace view{
namespace elements{

Void SimpleRectangle_obj::__construct(Float width,Float height,Dynamic __o_color,Dynamic __o_alpha,Dynamic __o_hasLine,Dynamic __o_lineColor)
{
HX_STACK_FRAME("view.elements.SimpleRectangle","new",0x869fb6e1,"view.elements.SimpleRectangle.new","view/elements/SimpleRectangle.hx",6,0x7dfa6f8f)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_color,"color")
HX_STACK_ARG(__o_alpha,"alpha")
HX_STACK_ARG(__o_hasLine,"hasLine")
HX_STACK_ARG(__o_lineColor,"lineColor")
Dynamic color = __o_color.Default(16711935);
Dynamic alpha = __o_alpha.Default(1.0);
Dynamic hasLine = __o_hasLine.Default(false);
Dynamic lineColor = __o_lineColor.Default(5592405);
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(8)
	::openfl::_legacy::display::Shape s = ::openfl::_legacy::display::Shape_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(9)
	::openfl::_legacy::display::Shape _g = ::openfl::_legacy::display::Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(9)
	s = _g;
	HX_STACK_LINE(10)
	if ((hasLine)){
		HX_STACK_LINE(11)
		s->get_graphics()->lineStyle(::AppConstants_obj::SCALE_FACTOR,lineColor,null(),null(),null(),null(),null(),null());
	}
	HX_STACK_LINE(13)
	s->get_graphics()->beginFill(color,alpha);
	HX_STACK_LINE(14)
	s->get_graphics()->drawRect((int)0,(int)0,width,height);
	HX_STACK_LINE(15)
	this->addChild(s);
}
;
	return null();
}

//SimpleRectangle_obj::~SimpleRectangle_obj() { }

Dynamic SimpleRectangle_obj::__CreateEmpty() { return  new SimpleRectangle_obj; }
hx::ObjectPtr< SimpleRectangle_obj > SimpleRectangle_obj::__new(Float width,Float height,Dynamic __o_color,Dynamic __o_alpha,Dynamic __o_hasLine,Dynamic __o_lineColor)
{  hx::ObjectPtr< SimpleRectangle_obj > result = new SimpleRectangle_obj();
	result->__construct(width,height,__o_color,__o_alpha,__o_hasLine,__o_lineColor);
	return result;}

Dynamic SimpleRectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleRectangle_obj > result = new SimpleRectangle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}


SimpleRectangle_obj::SimpleRectangle_obj()
{
}

Dynamic SimpleRectangle_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SimpleRectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SimpleRectangle_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleRectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleRectangle_obj::__mClass,"__mClass");
};

#endif

Class SimpleRectangle_obj::__mClass;

void SimpleRectangle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.elements.SimpleRectangle"), hx::TCanCast< SimpleRectangle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void SimpleRectangle_obj::__boot()
{
}

} // end namespace view
} // end namespace elements
