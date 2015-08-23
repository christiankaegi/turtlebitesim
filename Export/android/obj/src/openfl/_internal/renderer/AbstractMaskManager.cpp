#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
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

Void AbstractMaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.AbstractMaskManager","new",0x58c36376,"openfl._internal.renderer.AbstractMaskManager.new","openfl/_internal/renderer/AbstractMaskManager.hx",19,0x8fcbf079)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(19)
	this->renderSession = renderSession;
}
;
	return null();
}

//AbstractMaskManager_obj::~AbstractMaskManager_obj() { }

Dynamic AbstractMaskManager_obj::__CreateEmpty() { return  new AbstractMaskManager_obj; }
hx::ObjectPtr< AbstractMaskManager_obj > AbstractMaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< AbstractMaskManager_obj > result = new AbstractMaskManager_obj();
	result->__construct(renderSession);
	return result;}

Dynamic AbstractMaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbstractMaskManager_obj > result = new AbstractMaskManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void AbstractMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractMaskManager","pushMask",0x0e5cf110,"openfl._internal.renderer.AbstractMaskManager.pushMask","openfl/_internal/renderer/AbstractMaskManager.hx",24,0x8fcbf079)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMaskManager_obj,pushMask,(void))

Void AbstractMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractMaskManager","pushRect",0x11adfd48,"openfl._internal.renderer.AbstractMaskManager.pushRect","openfl/_internal/renderer/AbstractMaskManager.hx",31,0x8fcbf079)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(transform,"transform")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AbstractMaskManager_obj,pushRect,(void))

Void AbstractMaskManager_obj::popMask( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractMaskManager","popMask",0x91173d33,"openfl._internal.renderer.AbstractMaskManager.popMask","openfl/_internal/renderer/AbstractMaskManager.hx",38,0x8fcbf079)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMaskManager_obj,popMask,(void))


AbstractMaskManager_obj::AbstractMaskManager_obj()
{
}

void AbstractMaskManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractMaskManager);
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_END_CLASS();
}

void AbstractMaskManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
}

Dynamic AbstractMaskManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return pushMask_dyn(); }
		if (HX_FIELD_EQ(inName,"pushRect") ) { return pushRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AbstractMaskManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractMaskManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("renderSession"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(AbstractMaskManager_obj,renderSession),HX_CSTRING("renderSession")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("renderSession"),
	HX_CSTRING("pushMask"),
	HX_CSTRING("pushRect"),
	HX_CSTRING("popMask"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractMaskManager_obj::__mClass,"__mClass");
};

#endif

Class AbstractMaskManager_obj::__mClass;

void AbstractMaskManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.AbstractMaskManager"), hx::TCanCast< AbstractMaskManager_obj> ,sStaticFields,sMemberFields,
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

void AbstractMaskManager_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
