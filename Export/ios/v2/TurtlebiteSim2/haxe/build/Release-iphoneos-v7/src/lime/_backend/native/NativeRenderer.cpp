#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeRenderer_obj::__construct(::lime::graphics::Renderer parent)
{
HX_STACK_FRAME("lime._backend.native.NativeRenderer","new",0x43f11223,"lime._backend.native.NativeRenderer.new","lime/_backend/native/NativeRenderer.hx",33,0x398cc96c)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(33)
	this->parent = parent;
}
;
	return null();
}

//NativeRenderer_obj::~NativeRenderer_obj() { }

Dynamic NativeRenderer_obj::__CreateEmpty() { return  new NativeRenderer_obj; }
hx::ObjectPtr< NativeRenderer_obj > NativeRenderer_obj::__new(::lime::graphics::Renderer parent)
{  hx::ObjectPtr< NativeRenderer_obj > result = new NativeRenderer_obj();
	result->__construct(parent);
	return result;}

Dynamic NativeRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeRenderer_obj > result = new NativeRenderer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void NativeRenderer_obj::create( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","create",0x10556119,"lime._backend.native.NativeRenderer.create","lime/_backend/native/NativeRenderer.hx",38,0x398cc96c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		Dynamic _g = ::lime::_backend::native::NativeRenderer_obj::lime_renderer_create(this->parent->window->backend->handle);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		this->handle = _g;
		HX_STACK_LINE(42)
		this->useHardware = this->parent->window->config->__Field(HX_CSTRING("hardware"),true);
		HX_STACK_LINE(47)
		if ((this->useHardware)){
			HX_STACK_LINE(49)
			::lime::graphics::GLRenderContext _g1 = ::lime::graphics::GLRenderContext_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(49)
			::lime::graphics::RenderContext _g2 = ::lime::graphics::RenderContext_obj::OPENGL(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(49)
			this->parent->context = _g2;
		}
		else{
			HX_STACK_LINE(53)
			this->render();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,create,(void))

Void NativeRenderer_obj::dispatch( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","dispatch",0xcbb24a17,"lime._backend.native.NativeRenderer.dispatch","lime/_backend/native/NativeRenderer.hx",61,0x398cc96c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,dispatch,(void))

Void NativeRenderer_obj::flip( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","flip",0x29ba5b8a,"lime._backend.native.NativeRenderer.flip","lime/_backend/native/NativeRenderer.hx",68,0x398cc96c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		if ((!(this->useHardware))){
			HX_STACK_LINE(73)
			if (((this->cairo != null()))){
				HX_STACK_LINE(75)
				::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(this->primarySurface);
			}
			HX_STACK_LINE(79)
			::lime::_backend::native::NativeRenderer_obj::lime_renderer_unlock(this->handle);
		}
		HX_STACK_LINE(83)
		::lime::_backend::native::NativeRenderer_obj::lime_renderer_flip(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,flip,(void))

Void NativeRenderer_obj::render( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","render",0x996f6573,"lime._backend.native.NativeRenderer.render","lime/_backend/native/NativeRenderer.hx",90,0x398cc96c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		if ((!(this->useHardware))){
			HX_STACK_LINE(93)
			Dynamic lock = ::lime::_backend::native::NativeRenderer_obj::lime_renderer_lock(this->handle);		HX_STACK_VAR(lock,"lock");
			HX_STACK_LINE(95)
			if (((bool((bool((bool((this->cacheLock == null())) || bool((this->cacheLock->__Field(HX_CSTRING("pixels"),true) != lock->__Field(HX_CSTRING("pixels"),true))))) || bool((this->cacheLock->__Field(HX_CSTRING("width"),true) != lock->__Field(HX_CSTRING("width"),true))))) || bool((this->cacheLock->__Field(HX_CSTRING("height"),true) != lock->__Field(HX_CSTRING("height"),true)))))){
				HX_STACK_LINE(97)
				if (((this->cairo != null()))){
					HX_STACK_LINE(99)
					this->cairo->destroy();
					HX_STACK_LINE(100)
					::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::destroy(this->primarySurface);
				}
				HX_STACK_LINE(104)
				Dynamic _g = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::createForData(lock->__Field(HX_CSTRING("pixels"),true),(int)0,lock->__Field(HX_CSTRING("width"),true),lock->__Field(HX_CSTRING("height"),true),lock->__Field(HX_CSTRING("pitch"),true));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(104)
				this->primarySurface = _g;
				HX_STACK_LINE(105)
				::lime::graphics::cairo::Cairo _g1 = ::lime::graphics::cairo::Cairo_obj::__new(this->primarySurface);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(105)
				this->cairo = _g1;
				HX_STACK_LINE(106)
				::lime::graphics::RenderContext _g2 = ::lime::graphics::RenderContext_obj::CAIRO(this->cairo);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(106)
				this->parent->context = _g2;
			}
			HX_STACK_LINE(110)
			this->cacheLock = lock;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,render,(void))

Dynamic NativeRenderer_obj::lime_renderer_create;

Dynamic NativeRenderer_obj::lime_renderer_flip;

Dynamic NativeRenderer_obj::lime_renderer_lock;

Dynamic NativeRenderer_obj::lime_renderer_unlock;


NativeRenderer_obj::NativeRenderer_obj()
{
}

void NativeRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeRenderer);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(useHardware,"useHardware");
	HX_MARK_MEMBER_NAME(cacheLock,"cacheLock");
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	HX_MARK_MEMBER_NAME(primarySurface,"primarySurface");
	HX_MARK_END_CLASS();
}

void NativeRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(useHardware,"useHardware");
	HX_VISIT_MEMBER_NAME(cacheLock,"cacheLock");
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	HX_VISIT_MEMBER_NAME(primarySurface,"primarySurface");
}

Dynamic NativeRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flip") ) { return flip_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return cairo; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheLock") ) { return cacheLock; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useHardware") ) { return useHardware; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { return primarySurface; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_renderer_flip") ) { return lime_renderer_flip; }
		if (HX_FIELD_EQ(inName,"lime_renderer_lock") ) { return lime_renderer_lock; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_renderer_create") ) { return lime_renderer_create; }
		if (HX_FIELD_EQ(inName,"lime_renderer_unlock") ) { return lime_renderer_unlock; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NativeRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheLock") ) { cacheLock=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useHardware") ) { useHardware=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { primarySurface=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_renderer_flip") ) { lime_renderer_flip=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_renderer_lock") ) { lime_renderer_lock=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_renderer_create") ) { lime_renderer_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_renderer_unlock") ) { lime_renderer_unlock=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("handle"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("useHardware"));
	outFields->push(HX_CSTRING("cacheLock"));
	outFields->push(HX_CSTRING("cairo"));
	outFields->push(HX_CSTRING("primarySurface"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lime_renderer_create"),
	HX_CSTRING("lime_renderer_flip"),
	HX_CSTRING("lime_renderer_lock"),
	HX_CSTRING("lime_renderer_unlock"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,handle),HX_CSTRING("handle")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(NativeRenderer_obj,parent),HX_CSTRING("parent")},
	{hx::fsBool,(int)offsetof(NativeRenderer_obj,useHardware),HX_CSTRING("useHardware")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,cacheLock),HX_CSTRING("cacheLock")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(NativeRenderer_obj,cairo),HX_CSTRING("cairo")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,primarySurface),HX_CSTRING("primarySurface")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("handle"),
	HX_CSTRING("parent"),
	HX_CSTRING("useHardware"),
	HX_CSTRING("cacheLock"),
	HX_CSTRING("cairo"),
	HX_CSTRING("primarySurface"),
	HX_CSTRING("create"),
	HX_CSTRING("dispatch"),
	HX_CSTRING("flip"),
	HX_CSTRING("render"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::lime_renderer_create,"lime_renderer_create");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::lime_renderer_flip,"lime_renderer_flip");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::lime_renderer_lock,"lime_renderer_lock");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::lime_renderer_unlock,"lime_renderer_unlock");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::lime_renderer_create,"lime_renderer_create");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::lime_renderer_flip,"lime_renderer_flip");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::lime_renderer_lock,"lime_renderer_lock");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::lime_renderer_unlock,"lime_renderer_unlock");
};

#endif

Class NativeRenderer_obj::__mClass;

void NativeRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native.NativeRenderer"), hx::TCanCast< NativeRenderer_obj> ,sStaticFields,sMemberFields,
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

void NativeRenderer_obj::__boot()
{
	lime_renderer_create= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_renderer_create"),(int)1,null());
	lime_renderer_flip= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_renderer_flip"),(int)1,null());
	lime_renderer_lock= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_renderer_lock"),(int)1,null());
	lime_renderer_unlock= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_renderer_unlock"),(int)1,null());
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
