#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeMouse
#include <lime/_backend/native/NativeMouse.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeMouse_obj::__construct()
{
	return null();
}

//NativeMouse_obj::~NativeMouse_obj() { }

Dynamic NativeMouse_obj::__CreateEmpty() { return  new NativeMouse_obj; }
hx::ObjectPtr< NativeMouse_obj > NativeMouse_obj::__new()
{  hx::ObjectPtr< NativeMouse_obj > result = new NativeMouse_obj();
	result->__construct();
	return result;}

Dynamic NativeMouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeMouse_obj > result = new NativeMouse_obj();
	result->__construct();
	return result;}

::lime::ui::MouseCursor NativeMouse_obj::__cursor;

bool NativeMouse_obj::__hidden;

bool NativeMouse_obj::__lock;

Void NativeMouse_obj::hide( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeMouse","hide",0xec289e99,"lime._backend.native.NativeMouse.hide","lime/_backend/native/NativeMouse.hx",21,0x1d44ad08)
		HX_STACK_LINE(21)
		if ((!(::lime::_backend::native::NativeMouse_obj::__hidden))){
			HX_STACK_LINE(23)
			::lime::_backend::native::NativeMouse_obj::__hidden = true;
			HX_STACK_LINE(25)
			::lime::_backend::native::NativeMouse_obj::lime_mouse_hide();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,hide,(void))

Void NativeMouse_obj::show( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeMouse","show",0xf36d3ed4,"lime._backend.native.NativeMouse.show","lime/_backend/native/NativeMouse.hx",34,0x1d44ad08)
		HX_STACK_LINE(34)
		if ((::lime::_backend::native::NativeMouse_obj::__hidden)){
			HX_STACK_LINE(36)
			::lime::_backend::native::NativeMouse_obj::__hidden = false;
			HX_STACK_LINE(38)
			::lime::_backend::native::NativeMouse_obj::lime_mouse_show();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,show,(void))

Void NativeMouse_obj::warp( int x,int y,::lime::ui::Window window){
{
		HX_STACK_FRAME("lime._backend.native.NativeMouse","warp",0xf60ccc1f,"lime._backend.native.NativeMouse.warp","lime/_backend/native/NativeMouse.hx",47,0x1d44ad08)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(47)
		::lime::_backend::native::NativeMouse_obj::lime_mouse_warp(x,y,(  (((window == null()))) ? Dynamic(null()) : Dynamic(window->backend->handle) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeMouse_obj,warp,(void))

::lime::ui::MouseCursor NativeMouse_obj::get_cursor( ){
	HX_STACK_FRAME("lime._backend.native.NativeMouse","get_cursor",0x6045e3b6,"lime._backend.native.NativeMouse.get_cursor","lime/_backend/native/NativeMouse.hx",59,0x1d44ad08)
	HX_STACK_LINE(61)
	if (((::lime::_backend::native::NativeMouse_obj::__cursor == null()))){
		HX_STACK_LINE(61)
		return ::lime::ui::MouseCursor_obj::DEFAULT;
	}
	HX_STACK_LINE(62)
	return ::lime::_backend::native::NativeMouse_obj::__cursor;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,get_cursor,return )

::lime::ui::MouseCursor NativeMouse_obj::set_cursor( ::lime::ui::MouseCursor value){
	HX_STACK_FRAME("lime._backend.native.NativeMouse","set_cursor",0x63c3822a,"lime._backend.native.NativeMouse.set_cursor","lime/_backend/native/NativeMouse.hx",67,0x1d44ad08)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(69)
	if (((::lime::_backend::native::NativeMouse_obj::__cursor != value))){
		HX_STACK_LINE(71)
		if ((!(::lime::_backend::native::NativeMouse_obj::__hidden))){
			HX_STACK_LINE(73)
			int type;		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(73)
			switch( (int)(value->__Index())){
				case (int)0: {
					HX_STACK_LINE(75)
					type = (int)0;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(76)
					type = (int)1;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(77)
					type = (int)3;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(78)
					type = (int)4;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(79)
					type = (int)5;
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(80)
					type = (int)6;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(81)
					type = (int)7;
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(82)
					type = (int)8;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(83)
					type = (int)9;
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(84)
					type = (int)10;
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(85)
					type = (int)11;
				}
				;break;
				default: {
					HX_STACK_LINE(86)
					type = (int)2;
				}
			}
			HX_STACK_LINE(90)
			::lime::_backend::native::NativeMouse_obj::lime_mouse_set_cursor(type);
		}
		HX_STACK_LINE(94)
		::lime::_backend::native::NativeMouse_obj::__cursor = value;
	}
	HX_STACK_LINE(98)
	return ::lime::_backend::native::NativeMouse_obj::__cursor;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeMouse_obj,set_cursor,return )

bool NativeMouse_obj::get_lock( ){
	HX_STACK_FRAME("lime._backend.native.NativeMouse","get_lock",0xe19bf8cb,"lime._backend.native.NativeMouse.get_lock","lime/_backend/native/NativeMouse.hx",105,0x1d44ad08)
	HX_STACK_LINE(105)
	return ::lime::_backend::native::NativeMouse_obj::__lock;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,get_lock,return )

bool NativeMouse_obj::set_lock( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeMouse","set_lock",0x8ff9523f,"lime._backend.native.NativeMouse.set_lock","lime/_backend/native/NativeMouse.hx",110,0x1d44ad08)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(112)
	if (((::lime::_backend::native::NativeMouse_obj::__lock != value))){
		HX_STACK_LINE(114)
		::lime::_backend::native::NativeMouse_obj::lime_mouse_set_lock(value);
		HX_STACK_LINE(116)
		::lime::_backend::native::NativeMouse_obj::__hidden = value;
		HX_STACK_LINE(117)
		::lime::_backend::native::NativeMouse_obj::__lock = value;
	}
	HX_STACK_LINE(121)
	return ::lime::_backend::native::NativeMouse_obj::__lock;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeMouse_obj,set_lock,return )

Dynamic NativeMouse_obj::lime_mouse_hide;

Dynamic NativeMouse_obj::lime_mouse_set_cursor;

Dynamic NativeMouse_obj::lime_mouse_set_lock;

Dynamic NativeMouse_obj::lime_mouse_show;

Dynamic NativeMouse_obj::lime_mouse_warp;


NativeMouse_obj::NativeMouse_obj()
{
}

Dynamic NativeMouse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"warp") ) { return warp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__lock") ) { return __lock; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { return __cursor; }
		if (HX_FIELD_EQ(inName,"__hidden") ) { return __hidden; }
		if (HX_FIELD_EQ(inName,"get_lock") ) { return get_lock_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lock") ) { return set_lock_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_cursor") ) { return get_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { return set_cursor_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_mouse_hide") ) { return lime_mouse_hide; }
		if (HX_FIELD_EQ(inName,"lime_mouse_show") ) { return lime_mouse_show; }
		if (HX_FIELD_EQ(inName,"lime_mouse_warp") ) { return lime_mouse_warp; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_mouse_set_lock") ) { return lime_mouse_set_lock; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_mouse_set_cursor") ) { return lime_mouse_set_cursor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NativeMouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__lock") ) { __lock=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { __cursor=inValue.Cast< ::lime::ui::MouseCursor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hidden") ) { __hidden=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_mouse_hide") ) { lime_mouse_hide=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_mouse_show") ) { lime_mouse_show=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_mouse_warp") ) { lime_mouse_warp=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_mouse_set_lock") ) { lime_mouse_set_lock=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_mouse_set_cursor") ) { lime_mouse_set_cursor=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeMouse_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__cursor"),
	HX_CSTRING("__hidden"),
	HX_CSTRING("__lock"),
	HX_CSTRING("hide"),
	HX_CSTRING("show"),
	HX_CSTRING("warp"),
	HX_CSTRING("get_cursor"),
	HX_CSTRING("set_cursor"),
	HX_CSTRING("get_lock"),
	HX_CSTRING("set_lock"),
	HX_CSTRING("lime_mouse_hide"),
	HX_CSTRING("lime_mouse_set_cursor"),
	HX_CSTRING("lime_mouse_set_lock"),
	HX_CSTRING("lime_mouse_show"),
	HX_CSTRING("lime_mouse_warp"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__cursor,"__cursor");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__hidden,"__hidden");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__lock,"__lock");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::lime_mouse_hide,"lime_mouse_hide");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::lime_mouse_set_cursor,"lime_mouse_set_cursor");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::lime_mouse_set_lock,"lime_mouse_set_lock");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::lime_mouse_show,"lime_mouse_show");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::lime_mouse_warp,"lime_mouse_warp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__cursor,"__cursor");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__hidden,"__hidden");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__lock,"__lock");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::lime_mouse_hide,"lime_mouse_hide");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::lime_mouse_set_cursor,"lime_mouse_set_cursor");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::lime_mouse_set_lock,"lime_mouse_set_lock");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::lime_mouse_show,"lime_mouse_show");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::lime_mouse_warp,"lime_mouse_warp");
};

#endif

Class NativeMouse_obj::__mClass;

void NativeMouse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native.NativeMouse"), hx::TCanCast< NativeMouse_obj> ,sStaticFields,sMemberFields,
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

void NativeMouse_obj::__boot()
{
	lime_mouse_hide= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_mouse_hide"),(int)0,null());
	lime_mouse_set_cursor= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_mouse_set_cursor"),(int)1,null());
	lime_mouse_set_lock= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_mouse_set_lock"),(int)1,null());
	lime_mouse_show= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_mouse_show"),(int)0,null());
	lime_mouse_warp= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_mouse_warp"),(int)3,null());
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
