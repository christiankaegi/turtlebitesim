#include <hxcpp.h>

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
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
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

Void CairoMaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","new",0x3e0aed8c,"openfl._internal.renderer.cairo.CairoMaskManager.new","openfl/_internal/renderer/cairo/CairoMaskManager.hx",19,0xc9e099a4)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(19)
	super::__construct(renderSession);
}
;
	return null();
}

//CairoMaskManager_obj::~CairoMaskManager_obj() { }

Dynamic CairoMaskManager_obj::__CreateEmpty() { return  new CairoMaskManager_obj; }
hx::ObjectPtr< CairoMaskManager_obj > CairoMaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< CairoMaskManager_obj > result = new CairoMaskManager_obj();
	result->__construct(renderSession);
	return result;}

Dynamic CairoMaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoMaskManager_obj > result = new CairoMaskManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void CairoMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","pushMask",0xb35b173a,"openfl._internal.renderer.cairo.CairoMaskManager.pushMask","openfl/_internal/renderer/cairo/CairoMaskManager.hx",24,0xc9e099a4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(26)
		::lime::graphics::cairo::Cairo cairo = this->renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(28)
		cairo->save();
		HX_STACK_LINE(31)
		::openfl::geom::Matrix transform = mask->__getTransform();		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(33)
		::lime::math::Matrix3 _g = transform->__toMatrix3();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		cairo->set_matrix(_g);
		HX_STACK_LINE(35)
		cairo->newPath();
		HX_STACK_LINE(36)
		mask->__renderCairoMask(this->renderSession);
		HX_STACK_LINE(38)
		cairo->clipPreserve();
	}
return null();
}


Void CairoMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","pushRect",0xb6ac2372,"openfl._internal.renderer.cairo.CairoMaskManager.pushRect","openfl/_internal/renderer/cairo/CairoMaskManager.hx",45,0xc9e099a4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(47)
		::lime::graphics::cairo::Cairo cairo = this->renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(48)
		cairo->save();
		HX_STACK_LINE(50)
		::lime::math::Matrix3 _g = ::lime::math::Matrix3_obj::__new(transform->a,transform->c,transform->b,transform->d,transform->tx,transform->ty);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		cairo->set_matrix(_g);
		HX_STACK_LINE(52)
		cairo->newPath();
		HX_STACK_LINE(53)
		cairo->rectangle(rect->x,rect->y,rect->width,rect->height);
		HX_STACK_LINE(54)
		cairo->clipPreserve();
	}
return null();
}


Void CairoMaskManager_obj::popMask( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","popMask",0x1cbc8a49,"openfl._internal.renderer.cairo.CairoMaskManager.popMask","openfl/_internal/renderer/cairo/CairoMaskManager.hx",61,0xc9e099a4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		this->renderSession->cairo->restore();
	}
return null();
}



CairoMaskManager_obj::CairoMaskManager_obj()
{
}

Dynamic CairoMaskManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return pushMask_dyn(); }
		if (HX_FIELD_EQ(inName,"pushRect") ) { return pushRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoMaskManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoMaskManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pushMask"),
	HX_CSTRING("pushRect"),
	HX_CSTRING("popMask"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoMaskManager_obj::__mClass,"__mClass");
};

#endif

Class CairoMaskManager_obj::__mClass;

void CairoMaskManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.cairo.CairoMaskManager"), hx::TCanCast< CairoMaskManager_obj> ,sStaticFields,sMemberFields,
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

void CairoMaskManager_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
