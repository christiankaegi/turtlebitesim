#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeMouse
#include <lime/_backend/native/NativeMouse.h>
#endif
#ifndef INCLUDED_lime_ui_Mouse
#include <lime/ui/Mouse.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace ui{

Void Mouse_obj::__construct()
{
	return null();
}

//Mouse_obj::~Mouse_obj() { }

Dynamic Mouse_obj::__CreateEmpty() { return  new Mouse_obj; }
hx::ObjectPtr< Mouse_obj > Mouse_obj::__new()
{  hx::ObjectPtr< Mouse_obj > result = new Mouse_obj();
	result->__construct();
	return result;}

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mouse_obj > result = new Mouse_obj();
	result->__construct();
	return result;}

Void Mouse_obj::hide( ){
{
		HX_STACK_FRAME("lime.ui.Mouse","hide",0x4d58708c,"lime.ui.Mouse.hide","lime/ui/Mouse.hx",13,0x9aa406fa)
		HX_STACK_LINE(13)
		::lime::_backend::native::NativeMouse_obj::hide();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

Void Mouse_obj::show( ){
{
		HX_STACK_FRAME("lime.ui.Mouse","show",0x549d10c7,"lime.ui.Mouse.show","lime/ui/Mouse.hx",20,0x9aa406fa)
		HX_STACK_LINE(20)
		::lime::_backend::native::NativeMouse_obj::show();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,show,(void))

Void Mouse_obj::warp( int x,int y,::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.ui.Mouse","warp",0x573c9e12,"lime.ui.Mouse.warp","lime/ui/Mouse.hx",27,0x9aa406fa)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(27)
		::lime::_backend::native::NativeMouse_obj::warp(x,y,window);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mouse_obj,warp,(void))

::lime::ui::MouseCursor Mouse_obj::get_cursor( ){
	HX_STACK_FRAME("lime.ui.Mouse","get_cursor",0xcd882de9,"lime.ui.Mouse.get_cursor","lime/ui/Mouse.hx",41,0x9aa406fa)
	HX_STACK_LINE(41)
	return ::lime::_backend::native::NativeMouse_obj::get_cursor();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,get_cursor,return )

::lime::ui::MouseCursor Mouse_obj::set_cursor( ::lime::ui::MouseCursor value){
	HX_STACK_FRAME("lime.ui.Mouse","set_cursor",0xd105cc5d,"lime.ui.Mouse.set_cursor","lime/ui/Mouse.hx",48,0x9aa406fa)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(48)
	return ::lime::_backend::native::NativeMouse_obj::set_cursor(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,set_cursor,return )

bool Mouse_obj::get_lock( ){
	HX_STACK_FRAME("lime.ui.Mouse","get_lock",0xafe7403e,"lime.ui.Mouse.get_lock","lime/ui/Mouse.hx",55,0x9aa406fa)
	HX_STACK_LINE(55)
	return ::lime::_backend::native::NativeMouse_obj::get_lock();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,get_lock,return )

bool Mouse_obj::set_lock( bool value){
	HX_STACK_FRAME("lime.ui.Mouse","set_lock",0x5e4499b2,"lime.ui.Mouse.set_lock","lime/ui/Mouse.hx",62,0x9aa406fa)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(62)
	return ::lime::_backend::native::NativeMouse_obj::set_lock(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,set_lock,return )


Mouse_obj::Mouse_obj()
{
}

Dynamic Mouse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return get_lock(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"warp") ) { return warp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { return get_cursor(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_lock") ) { return get_lock_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lock") ) { return set_lock_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_cursor") ) { return get_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { return set_cursor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return set_lock(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { return set_cursor(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mouse_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hide"),
	HX_CSTRING("show"),
	HX_CSTRING("warp"),
	HX_CSTRING("get_cursor"),
	HX_CSTRING("set_cursor"),
	HX_CSTRING("get_lock"),
	HX_CSTRING("set_lock"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#endif

Class Mouse_obj::__mClass;

void Mouse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui.Mouse"), hx::TCanCast< Mouse_obj> ,sStaticFields,sMemberFields,
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

void Mouse_obj::__boot()
{
}

} // end namespace lime
} // end namespace ui
