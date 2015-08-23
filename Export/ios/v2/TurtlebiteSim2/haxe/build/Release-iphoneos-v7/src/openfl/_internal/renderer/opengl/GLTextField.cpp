#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_TextFieldGraphics
#include <openfl/_internal/renderer/TextFieldGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLTextField
#include <openfl/_internal/renderer/opengl/GLTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLTextField_obj::__construct()
{
	return null();
}

//GLTextField_obj::~GLTextField_obj() { }

Dynamic GLTextField_obj::__CreateEmpty() { return  new GLTextField_obj; }
hx::ObjectPtr< GLTextField_obj > GLTextField_obj::__new()
{  hx::ObjectPtr< GLTextField_obj > result = new GLTextField_obj();
	result->__construct();
	return result;}

Dynamic GLTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLTextField_obj > result = new GLTextField_obj();
	result->__construct();
	return result;}

Void GLTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLTextField","render",0x31a77300,"openfl._internal.renderer.opengl.GLTextField.render","openfl/_internal/renderer/opengl/GLTextField.hx",14,0x30c8ae9c)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(16)
		if (((bool(!(textField->__renderable)) || bool((textField->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(16)
			return null();
		}
		HX_STACK_LINE(18)
		::openfl::_internal::renderer::TextFieldGraphics_obj::render(textField);
		HX_STACK_LINE(20)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(textField,renderSession);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLTextField_obj,render,(void))


GLTextField_obj::GLTextField_obj()
{
}

Dynamic GLTextField_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLTextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLTextField_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(GLTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLTextField_obj::__mClass,"__mClass");
};

#endif

Class GLTextField_obj::__mClass;

void GLTextField_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.GLTextField"), hx::TCanCast< GLTextField_obj> ,sStaticFields,sMemberFields,
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

void GLTextField_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
