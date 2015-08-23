#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo
#include <lime/_backend/native/_NativeApplication/WindowEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void WindowEventInfo_obj::__construct(Dynamic type,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.WindowEventInfo","new",0xd11afd2d,"lime._backend.native._NativeApplication.WindowEventInfo.new","lime/_backend/native/NativeApplication.hx",700,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(702)
	this->type = type;
	HX_STACK_LINE(703)
	this->width = width;
	HX_STACK_LINE(704)
	this->height = height;
	HX_STACK_LINE(705)
	this->x = x;
	HX_STACK_LINE(706)
	this->y = y;
}
;
	return null();
}

//WindowEventInfo_obj::~WindowEventInfo_obj() { }

Dynamic WindowEventInfo_obj::__CreateEmpty() { return  new WindowEventInfo_obj; }
hx::ObjectPtr< WindowEventInfo_obj > WindowEventInfo_obj::__new(Dynamic type,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< WindowEventInfo_obj > result = new WindowEventInfo_obj();
	result->__construct(type,__o_width,__o_height,__o_x,__o_y);
	return result;}

Dynamic WindowEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindowEventInfo_obj > result = new WindowEventInfo_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::lime::_backend::native::_NativeApplication::WindowEventInfo WindowEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.WindowEventInfo","clone",0x3ae8cd6a,"lime._backend.native._NativeApplication.WindowEventInfo.clone","lime/_backend/native/NativeApplication.hx",713,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(713)
	return ::lime::_backend::native::_NativeApplication::WindowEventInfo_obj::__new(this->type,this->width,this->height,this->x,this->y);
}


HX_DEFINE_DYNAMIC_FUNC0(WindowEventInfo_obj,clone,return )


WindowEventInfo_obj::WindowEventInfo_obj()
{
}

Dynamic WindowEventInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WindowEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,type),HX_CSTRING("type")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("height"),
	HX_CSTRING("type"),
	HX_CSTRING("width"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowEventInfo_obj::__mClass,"__mClass");
};

#endif

Class WindowEventInfo_obj::__mClass;

void WindowEventInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native._NativeApplication.WindowEventInfo"), hx::TCanCast< WindowEventInfo_obj> ,sStaticFields,sMemberFields,
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

void WindowEventInfo_obj::__boot()
{
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
