#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoRenderer
#include <openfl/_internal/renderer/cairo/CairoRenderer.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoRenderer_obj::__construct(int width,int height,::lime::graphics::cairo::Cairo cairo)
{
HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoRenderer","new",0x7d599cdc,"openfl._internal.renderer.cairo.CairoRenderer.new","openfl/_internal/renderer/cairo/CairoRenderer.hx",20,0x849037d4)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(cairo,"cairo")
{
	HX_STACK_LINE(22)
	super::__construct(width,height);
	HX_STACK_LINE(24)
	this->cairo = cairo;
	HX_STACK_LINE(26)
	::openfl::_internal::renderer::RenderSession _g = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	this->renderSession = _g;
	HX_STACK_LINE(27)
	this->renderSession->cairo = cairo;
	HX_STACK_LINE(28)
	this->renderSession->roundPixels = true;
	HX_STACK_LINE(29)
	this->renderSession->renderer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(30)
	::openfl::_internal::renderer::cairo::CairoMaskManager _g1 = ::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__new(this->renderSession);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(30)
	this->renderSession->maskManager = _g1;
}
;
	return null();
}

//CairoRenderer_obj::~CairoRenderer_obj() { }

Dynamic CairoRenderer_obj::__CreateEmpty() { return  new CairoRenderer_obj; }
hx::ObjectPtr< CairoRenderer_obj > CairoRenderer_obj::__new(int width,int height,::lime::graphics::cairo::Cairo cairo)
{  hx::ObjectPtr< CairoRenderer_obj > result = new CairoRenderer_obj();
	result->__construct(width,height,cairo);
	return result;}

Dynamic CairoRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoRenderer_obj > result = new CairoRenderer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void CairoRenderer_obj::render( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoRenderer","render",0xe2c1945a,"openfl._internal.renderer.cairo.CairoRenderer.render","openfl/_internal/renderer/cairo/CairoRenderer.hx",35,0x849037d4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(37)
		this->cairo->identityMatrix();
		HX_STACK_LINE(39)
		if ((stage->__clearBeforeRender)){
			HX_STACK_LINE(41)
			this->cairo->setSourceRGB(stage->__colorSplit->__get((int)0),stage->__colorSplit->__get((int)1),stage->__colorSplit->__get((int)2));
			HX_STACK_LINE(42)
			this->cairo->paint();
		}
		HX_STACK_LINE(46)
		stage->__renderCairo(this->renderSession);
	}
return null();
}



CairoRenderer_obj::CairoRenderer_obj()
{
}

void CairoRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CairoRenderer);
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CairoRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CairoRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return cairo; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cairo"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(CairoRenderer_obj,cairo),HX_CSTRING("cairo")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("cairo"),
	HX_CSTRING("render"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoRenderer_obj::__mClass,"__mClass");
};

#endif

Class CairoRenderer_obj::__mClass;

void CairoRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.cairo.CairoRenderer"), hx::TCanCast< CairoRenderer_obj> ,sStaticFields,sMemberFields,
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

void CairoRenderer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
