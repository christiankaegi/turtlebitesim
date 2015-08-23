#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
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

Void NativeWindow_obj::__construct(::lime::ui::Window parent)
{
HX_STACK_FRAME("lime._backend.native.NativeWindow","new",0x5ec523d0,"lime._backend.native.NativeWindow.new","lime/_backend/native/NativeWindow.hx",24,0x34b7ce9f)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(24)
	this->parent = parent;
}
;
	return null();
}

//NativeWindow_obj::~NativeWindow_obj() { }

Dynamic NativeWindow_obj::__CreateEmpty() { return  new NativeWindow_obj; }
hx::ObjectPtr< NativeWindow_obj > NativeWindow_obj::__new(::lime::ui::Window parent)
{  hx::ObjectPtr< NativeWindow_obj > result = new NativeWindow_obj();
	result->__construct(parent);
	return result;}

Dynamic NativeWindow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeWindow_obj > result = new NativeWindow_obj();
	result->__construct(inArgs[0]);
	return result;}

Void NativeWindow_obj::close( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","close",0x24642728,"lime._backend.native.NativeWindow.close","lime/_backend/native/NativeWindow.hx",31,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		if (((this->handle != null()))){
			HX_STACK_LINE(33)
			::lime::_backend::native::NativeWindow_obj::lime_window_close(this->handle);
			HX_STACK_LINE(34)
			this->handle = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,close,(void))

Void NativeWindow_obj::create( ::lime::app::Application application){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","create",0x20fbd98c,"lime._backend.native.NativeWindow.create","lime/_backend/native/NativeWindow.hx",41,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(43)
		::String title = HX_CSTRING("Lime Application");		HX_STACK_VAR(title,"title");
		HX_STACK_LINE(44)
		int flags = (int)0;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(46)
		if (((this->parent->config != null()))){
			HX_STACK_LINE(48)
			if ((::Reflect_obj::hasField(this->parent->config,HX_CSTRING("antialiasing")))){
				HX_STACK_LINE(50)
				if (((this->parent->config->__Field(HX_CSTRING("antialiasing"),true) >= (int)4))){
					HX_STACK_LINE(52)
					hx::OrEq(flags,(int)96);
				}
				else{
					HX_STACK_LINE(54)
					if (((this->parent->config->__Field(HX_CSTRING("antialiasing"),true) >= (int)2))){
						HX_STACK_LINE(56)
						hx::OrEq(flags,(int)32);
					}
				}
			}
			HX_STACK_LINE(62)
			if (((  ((::Reflect_obj::hasField(this->parent->config,HX_CSTRING("borderless")))) ? bool(this->parent->config->__Field(HX_CSTRING("borderless"),true)) : bool(false) ))){
				HX_STACK_LINE(62)
				hx::OrEq(flags,(int)2);
			}
			HX_STACK_LINE(63)
			if (((  ((::Reflect_obj::hasField(this->parent->config,HX_CSTRING("depthBuffer")))) ? bool(this->parent->config->__Field(HX_CSTRING("depthBuffer"),true)) : bool(false) ))){
				HX_STACK_LINE(63)
				hx::OrEq(flags,(int)512);
			}
			HX_STACK_LINE(64)
			if (((  ((::Reflect_obj::hasField(this->parent->config,HX_CSTRING("fullscreen")))) ? bool(this->parent->config->__Field(HX_CSTRING("fullscreen"),true)) : bool(false) ))){
				HX_STACK_LINE(64)
				hx::OrEq(flags,(int)1);
			}
			HX_STACK_LINE(65)
			if (((  ((::Reflect_obj::hasField(this->parent->config,HX_CSTRING("hardware")))) ? bool(this->parent->config->__Field(HX_CSTRING("hardware"),true)) : bool(false) ))){
				HX_STACK_LINE(65)
				hx::OrEq(flags,(int)8);
			}
			HX_STACK_LINE(66)
			if (((  ((::Reflect_obj::hasField(this->parent->config,HX_CSTRING("resizable")))) ? bool(this->parent->config->__Field(HX_CSTRING("resizable"),true)) : bool(false) ))){
				HX_STACK_LINE(66)
				hx::OrEq(flags,(int)4);
			}
			HX_STACK_LINE(67)
			if (((  ((::Reflect_obj::hasField(this->parent->config,HX_CSTRING("stencilBuffer")))) ? bool(this->parent->config->__Field(HX_CSTRING("stencilBuffer"),true)) : bool(false) ))){
				HX_STACK_LINE(67)
				hx::OrEq(flags,(int)1024);
			}
			HX_STACK_LINE(68)
			if (((  ((::Reflect_obj::hasField(this->parent->config,HX_CSTRING("vsync")))) ? bool(this->parent->config->__Field(HX_CSTRING("vsync"),true)) : bool(false) ))){
				HX_STACK_LINE(68)
				hx::OrEq(flags,(int)16);
			}
			HX_STACK_LINE(70)
			if ((::Reflect_obj::hasField(this->parent->config,HX_CSTRING("title")))){
				HX_STACK_LINE(72)
				title = this->parent->config->__Field(HX_CSTRING("title"),true);
			}
		}
		HX_STACK_LINE(78)
		Dynamic _g = ::lime::_backend::native::NativeWindow_obj::lime_window_create(application->backend->handle,this->parent->__width,this->parent->__height,flags,title);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		this->handle = _g;
		HX_STACK_LINE(80)
		if (((this->handle != null()))){
			HX_STACK_LINE(82)
			int _g1 = ::lime::_backend::native::NativeWindow_obj::lime_window_get_width(this->handle);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(82)
			this->parent->__width = _g1;
			HX_STACK_LINE(83)
			int _g2 = ::lime::_backend::native::NativeWindow_obj::lime_window_get_height(this->handle);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(83)
			this->parent->__height = _g2;
			HX_STACK_LINE(84)
			int _g3 = ::lime::_backend::native::NativeWindow_obj::lime_window_get_x(this->handle);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(84)
			this->parent->__x = _g3;
			HX_STACK_LINE(85)
			int _g4 = ::lime::_backend::native::NativeWindow_obj::lime_window_get_y(this->handle);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(85)
			this->parent->__y = _g4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,create,(void))

bool NativeWindow_obj::getEnableTextEvents( ){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","getEnableTextEvents",0x8c63802f,"lime._backend.native.NativeWindow.getEnableTextEvents","lime/_backend/native/NativeWindow.hx",92,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	if (((this->handle != null()))){
		HX_STACK_LINE(96)
		return ::lime::_backend::native::NativeWindow_obj::lime_window_get_enable_text_events(this->handle);
	}
	HX_STACK_LINE(100)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getEnableTextEvents,return )

Void NativeWindow_obj::move( int x,int y){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","move",0x8d1891a1,"lime._backend.native.NativeWindow.move","lime/_backend/native/NativeWindow.hx",107,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(107)
		if (((this->handle != null()))){
			HX_STACK_LINE(109)
			::lime::_backend::native::NativeWindow_obj::lime_window_move(this->handle,x,y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,move,(void))

Void NativeWindow_obj::resize( int width,int height){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","resize",0xad67cc84,"lime._backend.native.NativeWindow.resize","lime/_backend/native/NativeWindow.hx",118,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(118)
		if (((this->handle != null()))){
			HX_STACK_LINE(120)
			::lime::_backend::native::NativeWindow_obj::lime_window_resize(this->handle,width,height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,resize,(void))

bool NativeWindow_obj::setEnableTextEvents( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setEnableTextEvents",0xc900733b,"lime._backend.native.NativeWindow.setEnableTextEvents","lime/_backend/native/NativeWindow.hx",127,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(129)
	if (((this->handle != null()))){
		HX_STACK_LINE(131)
		return ::lime::_backend::native::NativeWindow_obj::lime_window_set_enable_text_events(this->handle,value);
	}
	HX_STACK_LINE(135)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setEnableTextEvents,return )

bool NativeWindow_obj::setFullscreen( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setFullscreen",0x4ef277ed,"lime._backend.native.NativeWindow.setFullscreen","lime/_backend/native/NativeWindow.hx",140,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(142)
	if (((this->handle != null()))){
		HX_STACK_LINE(144)
		bool _g = ::lime::_backend::native::NativeWindow_obj::lime_window_set_fullscreen(this->handle,value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(144)
		value = _g;
		HX_STACK_LINE(146)
		if ((value)){
			HX_STACK_LINE(52)
			Dynamic listeners = this->parent->onWindowFullscreen->listeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(53)
			Array< bool > repeat = this->parent->onWindowFullscreen->repeat;		HX_STACK_VAR(repeat,"repeat");
			HX_STACK_LINE(54)
			int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(55)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				if ((!(((i < length))))){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(59)
				listeners->__GetItem(i)().Cast< Void >();
				HX_STACK_LINE(61)
				if ((!(repeat->__get(i)))){
					HX_STACK_LINE(63)
					this->parent->onWindowFullscreen->remove(listeners->__GetItem(i));
					HX_STACK_LINE(64)
					(length)--;
				}
				else{
					HX_STACK_LINE(68)
					(i)++;
				}
			}
		}
	}
	HX_STACK_LINE(154)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setFullscreen,return )

Void NativeWindow_obj::setIcon( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","setIcon",0xb52ef3ab,"lime._backend.native.NativeWindow.setIcon","lime/_backend/native/NativeWindow.hx",161,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(161)
		if (((this->handle != null()))){
			HX_STACK_LINE(163)
			::lime::_backend::native::NativeWindow_obj::lime_window_set_icon(this->handle,image->buffer);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setIcon,(void))

bool NativeWindow_obj::setMinimized( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setMinimized",0x5dce7a14,"lime._backend.native.NativeWindow.setMinimized","lime/_backend/native/NativeWindow.hx",170,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(172)
	if (((this->handle != null()))){
		HX_STACK_LINE(174)
		return ::lime::_backend::native::NativeWindow_obj::lime_window_set_minimized(this->handle,value);
	}
	HX_STACK_LINE(178)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMinimized,return )

Dynamic NativeWindow_obj::lime_window_close;

Dynamic NativeWindow_obj::lime_window_create;

Dynamic NativeWindow_obj::lime_window_get_enable_text_events;

Dynamic NativeWindow_obj::lime_window_get_height;

Dynamic NativeWindow_obj::lime_window_get_width;

Dynamic NativeWindow_obj::lime_window_get_x;

Dynamic NativeWindow_obj::lime_window_get_y;

Dynamic NativeWindow_obj::lime_window_move;

Dynamic NativeWindow_obj::lime_window_resize;

Dynamic NativeWindow_obj::lime_window_set_enable_text_events;

Dynamic NativeWindow_obj::lime_window_set_fullscreen;

Dynamic NativeWindow_obj::lime_window_set_icon;

Dynamic NativeWindow_obj::lime_window_set_minimized;


NativeWindow_obj::NativeWindow_obj()
{
}

void NativeWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeWindow);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void NativeWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic NativeWindow_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setIcon") ) { return setIcon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setMinimized") ) { return setMinimized_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setFullscreen") ) { return setFullscreen_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_window_move") ) { return lime_window_move; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_window_close") ) { return lime_window_close; }
		if (HX_FIELD_EQ(inName,"lime_window_get_x") ) { return lime_window_get_x; }
		if (HX_FIELD_EQ(inName,"lime_window_get_y") ) { return lime_window_get_y; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_window_create") ) { return lime_window_create; }
		if (HX_FIELD_EQ(inName,"lime_window_resize") ) { return lime_window_resize; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getEnableTextEvents") ) { return getEnableTextEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"setEnableTextEvents") ) { return setEnableTextEvents_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_window_set_icon") ) { return lime_window_set_icon; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_window_get_width") ) { return lime_window_get_width; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_window_get_height") ) { return lime_window_get_height; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_window_set_minimized") ) { return lime_window_set_minimized; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_window_set_fullscreen") ) { return lime_window_set_fullscreen; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_window_get_enable_text_events") ) { return lime_window_get_enable_text_events; }
		if (HX_FIELD_EQ(inName,"lime_window_set_enable_text_events") ) { return lime_window_set_enable_text_events; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NativeWindow_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_window_move") ) { lime_window_move=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_window_close") ) { lime_window_close=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_window_get_x") ) { lime_window_get_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_window_get_y") ) { lime_window_get_y=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_window_create") ) { lime_window_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_window_resize") ) { lime_window_resize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_window_set_icon") ) { lime_window_set_icon=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_window_get_width") ) { lime_window_get_width=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_window_get_height") ) { lime_window_get_height=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_window_set_minimized") ) { lime_window_set_minimized=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_window_set_fullscreen") ) { lime_window_set_fullscreen=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_window_get_enable_text_events") ) { lime_window_get_enable_text_events=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_window_set_enable_text_events") ) { lime_window_set_enable_text_events=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("handle"));
	outFields->push(HX_CSTRING("parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lime_window_close"),
	HX_CSTRING("lime_window_create"),
	HX_CSTRING("lime_window_get_enable_text_events"),
	HX_CSTRING("lime_window_get_height"),
	HX_CSTRING("lime_window_get_width"),
	HX_CSTRING("lime_window_get_x"),
	HX_CSTRING("lime_window_get_y"),
	HX_CSTRING("lime_window_move"),
	HX_CSTRING("lime_window_resize"),
	HX_CSTRING("lime_window_set_enable_text_events"),
	HX_CSTRING("lime_window_set_fullscreen"),
	HX_CSTRING("lime_window_set_icon"),
	HX_CSTRING("lime_window_set_minimized"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeWindow_obj,handle),HX_CSTRING("handle")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(NativeWindow_obj,parent),HX_CSTRING("parent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("handle"),
	HX_CSTRING("parent"),
	HX_CSTRING("close"),
	HX_CSTRING("create"),
	HX_CSTRING("getEnableTextEvents"),
	HX_CSTRING("move"),
	HX_CSTRING("resize"),
	HX_CSTRING("setEnableTextEvents"),
	HX_CSTRING("setFullscreen"),
	HX_CSTRING("setIcon"),
	HX_CSTRING("setMinimized"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeWindow_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_close,"lime_window_close");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_create,"lime_window_create");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_get_enable_text_events,"lime_window_get_enable_text_events");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_get_height,"lime_window_get_height");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_get_width,"lime_window_get_width");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_get_x,"lime_window_get_x");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_get_y,"lime_window_get_y");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_move,"lime_window_move");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_resize,"lime_window_resize");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_set_enable_text_events,"lime_window_set_enable_text_events");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_set_fullscreen,"lime_window_set_fullscreen");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_set_icon,"lime_window_set_icon");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_set_minimized,"lime_window_set_minimized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_close,"lime_window_close");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_create,"lime_window_create");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_get_enable_text_events,"lime_window_get_enable_text_events");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_get_height,"lime_window_get_height");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_get_width,"lime_window_get_width");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_get_x,"lime_window_get_x");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_get_y,"lime_window_get_y");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_move,"lime_window_move");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_resize,"lime_window_resize");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_set_enable_text_events,"lime_window_set_enable_text_events");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_set_fullscreen,"lime_window_set_fullscreen");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_set_icon,"lime_window_set_icon");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_set_minimized,"lime_window_set_minimized");
};

#endif

Class NativeWindow_obj::__mClass;

void NativeWindow_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native.NativeWindow"), hx::TCanCast< NativeWindow_obj> ,sStaticFields,sMemberFields,
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

void NativeWindow_obj::__boot()
{
	lime_window_close= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_close"),(int)1,null());
	lime_window_create= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_create"),(int)5,null());
	lime_window_get_enable_text_events= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_get_enable_text_events"),(int)1,null());
	lime_window_get_height= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_get_height"),(int)1,null());
	lime_window_get_width= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_get_width"),(int)1,null());
	lime_window_get_x= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_get_x"),(int)1,null());
	lime_window_get_y= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_get_y"),(int)1,null());
	lime_window_move= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_move"),(int)3,null());
	lime_window_resize= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_resize"),(int)3,null());
	lime_window_set_enable_text_events= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_set_enable_text_events"),(int)2,null());
	lime_window_set_fullscreen= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_set_fullscreen"),(int)2,null());
	lime_window_set_icon= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_set_icon"),(int)2,null());
	lime_window_set_minimized= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_set_minimized"),(int)2,null());
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
