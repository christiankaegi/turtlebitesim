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
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBitmap
#include <openfl/_internal/renderer/cairo/CairoBitmap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoBitmap_obj::__construct()
{
	return null();
}

//CairoBitmap_obj::~CairoBitmap_obj() { }

Dynamic CairoBitmap_obj::__CreateEmpty() { return  new CairoBitmap_obj; }
hx::ObjectPtr< CairoBitmap_obj > CairoBitmap_obj::__new()
{  hx::ObjectPtr< CairoBitmap_obj > result = new CairoBitmap_obj();
	result->__construct();
	return result;}

Dynamic CairoBitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoBitmap_obj > result = new CairoBitmap_obj();
	result->__construct();
	return result;}

Void CairoBitmap_obj::render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoBitmap","render",0xa19c46ee,"openfl._internal.renderer.cairo.CairoBitmap.render","openfl/_internal/renderer/cairo/CairoBitmap.hx",21,0x03302068)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(23)
		if (((bool(!(bitmap->__renderable)) || bool((bitmap->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(23)
			return null();
		}
		HX_STACK_LINE(26)
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(28)
		if (((bool((bitmap->bitmapData != null())) && bool(bitmap->bitmapData->__isValid)))){
			HX_STACK_LINE(30)
			if (((bitmap->__mask != null()))){
				HX_STACK_LINE(32)
				renderSession->maskManager->pushMask(bitmap->__mask);
			}
			HX_STACK_LINE(39)
			::openfl::geom::Matrix transform = bitmap->__worldTransform;		HX_STACK_VAR(transform,"transform");
			HX_STACK_LINE(42)
			if ((renderSession->roundPixels)){
				HX_STACK_LINE(44)
				::lime::math::Matrix3 matrix = transform->__toMatrix3();		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(45)
				int _g = ::Math_obj::round(matrix->tx);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(45)
				matrix->tx = _g;
				HX_STACK_LINE(46)
				int _g1 = ::Math_obj::round(matrix->ty);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(46)
				matrix->ty = _g1;
				HX_STACK_LINE(47)
				cairo->set_matrix(matrix);
			}
			else{
				HX_STACK_LINE(52)
				::lime::math::Matrix3 _g2 = transform->__toMatrix3();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(52)
				cairo->set_matrix(_g2);
			}
			HX_STACK_LINE(65)
			Dynamic surface = bitmap->bitmapData->getSurface();		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(67)
			if (((surface != null()))){
				HX_STACK_LINE(75)
				cairo->setSourceSurface(surface,(int)0,(int)0);
				HX_STACK_LINE(77)
				if (((bitmap->__worldAlpha == (int)1))){
					HX_STACK_LINE(79)
					cairo->paint();
				}
				else{
					HX_STACK_LINE(83)
					cairo->paintWithAlpha(bitmap->__worldAlpha);
				}
			}
			HX_STACK_LINE(105)
			if (((bitmap->__mask != null()))){
				HX_STACK_LINE(107)
				renderSession->maskManager->popMask();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoBitmap_obj,render,(void))


CairoBitmap_obj::CairoBitmap_obj()
{
}

Dynamic CairoBitmap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoBitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoBitmap_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#endif

Class CairoBitmap_obj::__mClass;

void CairoBitmap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.cairo.CairoBitmap"), hx::TCanCast< CairoBitmap_obj> ,sStaticFields,sMemberFields,
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

void CairoBitmap_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
