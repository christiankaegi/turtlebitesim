#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasMaskManager
#include <openfl/_internal/renderer/canvas/CanvasMaskManager.h>
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
namespace canvas{

Void CanvasMaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","new",0x7f907a00,"openfl._internal.renderer.canvas.CanvasMaskManager.new","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",17,0x595783d2)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(17)
	super::__construct(renderSession);
}
;
	return null();
}

//CanvasMaskManager_obj::~CanvasMaskManager_obj() { }

Dynamic CanvasMaskManager_obj::__CreateEmpty() { return  new CanvasMaskManager_obj; }
hx::ObjectPtr< CanvasMaskManager_obj > CanvasMaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< CanvasMaskManager_obj > result = new CanvasMaskManager_obj();
	result->__construct(renderSession);
	return result;}

Dynamic CanvasMaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasMaskManager_obj > result = new CanvasMaskManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void CanvasMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","pushMask",0x279fe646,"openfl._internal.renderer.canvas.CanvasMaskManager.pushMask","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",22,0x595783d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(24)
		::lime::graphics::CanvasRenderContext context = this->renderSession->context;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(26)
		context->save();
		HX_STACK_LINE(29)
		::openfl::geom::Matrix transform = mask->__getTransform();		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(31)
		context->setTransform(transform->a,transform->c,transform->b,transform->d,transform->tx,transform->ty);
		HX_STACK_LINE(33)
		context->beginPath();
		HX_STACK_LINE(34)
		mask->__renderCanvasMask(this->renderSession);
		HX_STACK_LINE(36)
		context->clip();
	}
return null();
}


Void CanvasMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","pushRect",0x2af0f27e,"openfl._internal.renderer.canvas.CanvasMaskManager.pushRect","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",43,0x595783d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(45)
		::lime::graphics::CanvasRenderContext context = this->renderSession->context;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(46)
		context->save();
		HX_STACK_LINE(48)
		context->setTransform(transform->a,transform->c,transform->b,transform->d,transform->tx,transform->ty);
		HX_STACK_LINE(50)
		context->beginPath();
		HX_STACK_LINE(51)
		context->rect(rect->x,rect->y,rect->width,rect->height);
		HX_STACK_LINE(52)
		context->clip();
	}
return null();
}


Void CanvasMaskManager_obj::popMask( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","popMask",0xe87360bd,"openfl._internal.renderer.canvas.CanvasMaskManager.popMask","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",59,0x595783d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		this->renderSession->context->restore();
	}
return null();
}



CanvasMaskManager_obj::CanvasMaskManager_obj()
{
}

Dynamic CanvasMaskManager_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic CanvasMaskManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasMaskManager_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(CanvasMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasMaskManager_obj::__mClass,"__mClass");
};

#endif

Class CanvasMaskManager_obj::__mClass;

void CanvasMaskManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.canvas.CanvasMaskManager"), hx::TCanCast< CanvasMaskManager_obj> ,sStaticFields,sMemberFields,
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

void CanvasMaskManager_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
