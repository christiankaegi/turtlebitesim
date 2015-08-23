#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoShape
#include <openfl/_internal/renderer/cairo/CairoShape.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoShape_obj::__construct()
{
	return null();
}

//CairoShape_obj::~CairoShape_obj() { }

Dynamic CairoShape_obj::__CreateEmpty() { return  new CairoShape_obj; }
hx::ObjectPtr< CairoShape_obj > CairoShape_obj::__new()
{  hx::ObjectPtr< CairoShape_obj > result = new CairoShape_obj();
	result->__construct();
	return result;}

Dynamic CairoShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoShape_obj > result = new CairoShape_obj();
	result->__construct();
	return result;}

Void CairoShape_obj::render( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoShape","render",0x363dce2a,"openfl._internal.renderer.cairo.CairoShape.render","openfl/_internal/renderer/cairo/CairoShape.hx",14,0xfc9b2624)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(16)
		if (((bool(!(shape->__renderable)) || bool((shape->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(16)
			return null();
		}
		HX_STACK_LINE(18)
		::openfl::display::Graphics graphics = shape->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(20)
		if (((graphics != null()))){
			HX_STACK_LINE(22)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(graphics,renderSession);
			HX_STACK_LINE(24)
			if (((graphics->__cairo != null()))){
				HX_STACK_LINE(26)
				if (((shape->__mask != null()))){
					HX_STACK_LINE(28)
					renderSession->maskManager->pushMask(shape->__mask);
				}
				HX_STACK_LINE(32)
				::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
				HX_STACK_LINE(33)
				::openfl::geom::Rectangle scrollRect = shape->get_scrollRect();		HX_STACK_VAR(scrollRect,"scrollRect");
				HX_STACK_LINE(36)
				::openfl::geom::Matrix transform = shape->__worldTransform;		HX_STACK_VAR(transform,"transform");
				HX_STACK_LINE(38)
				if ((renderSession->roundPixels)){
					HX_STACK_LINE(40)
					::lime::math::Matrix3 matrix = transform->__toMatrix3();		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(41)
					int _g = ::Math_obj::round(matrix->tx);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(41)
					matrix->tx = _g;
					HX_STACK_LINE(42)
					int _g1 = ::Math_obj::round(matrix->ty);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(42)
					matrix->ty = _g1;
					HX_STACK_LINE(43)
					cairo->set_matrix(matrix);
				}
				else{
					HX_STACK_LINE(47)
					::lime::math::Matrix3 _g2 = transform->__toMatrix3();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(47)
					cairo->set_matrix(_g2);
				}
				HX_STACK_LINE(51)
				Dynamic _g3 = graphics->__cairo->get_target();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(51)
				cairo->setSourceSurface(_g3,graphics->__bounds->x,graphics->__bounds->y);
				HX_STACK_LINE(52)
				cairo->paintWithAlpha(shape->__worldAlpha);
				HX_STACK_LINE(65)
				if (((shape->__mask != null()))){
					HX_STACK_LINE(67)
					renderSession->maskManager->popMask();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoShape_obj,render,(void))


CairoShape_obj::CairoShape_obj()
{
}

Dynamic CairoShape_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoShape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoShape_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("render"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoShape_obj::__mClass,"__mClass");
};

#endif

Class CairoShape_obj::__mClass;

void CairoShape_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.cairo.CairoShape"), hx::TCanCast< CairoShape_obj> ,sStaticFields,sMemberFields,
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

void CairoShape_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
