#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo
#include <lime/_backend/native/_NativeApplication/MouseEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void MouseEventInfo_obj::__construct(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_button,hx::Null< Float >  __o_movementX,hx::Null< Float >  __o_movementY)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.MouseEventInfo","new",0x1e4161f2,"lime._backend.native._NativeApplication.MouseEventInfo.new","lime/_backend/native/NativeApplication.hx",516,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_button,"button")
HX_STACK_ARG(__o_movementX,"movementX")
HX_STACK_ARG(__o_movementY,"movementY")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int button = __o_button.Default(0);
Float movementX = __o_movementX.Default(0);
Float movementY = __o_movementY.Default(0);
{
	HX_STACK_LINE(518)
	this->type = type;
	HX_STACK_LINE(519)
	this->x = x;
	HX_STACK_LINE(520)
	this->y = y;
	HX_STACK_LINE(521)
	this->button = button;
	HX_STACK_LINE(522)
	this->movementX = movementX;
	HX_STACK_LINE(523)
	this->movementY = movementY;
}
;
	return null();
}

//MouseEventInfo_obj::~MouseEventInfo_obj() { }

Dynamic MouseEventInfo_obj::__CreateEmpty() { return  new MouseEventInfo_obj; }
hx::ObjectPtr< MouseEventInfo_obj > MouseEventInfo_obj::__new(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_button,hx::Null< Float >  __o_movementX,hx::Null< Float >  __o_movementY)
{  hx::ObjectPtr< MouseEventInfo_obj > result = new MouseEventInfo_obj();
	result->__construct(type,__o_x,__o_y,__o_button,__o_movementX,__o_movementY);
	return result;}

Dynamic MouseEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEventInfo_obj > result = new MouseEventInfo_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::lime::_backend::native::_NativeApplication::MouseEventInfo MouseEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.MouseEventInfo","clone",0xea05ad6f,"lime._backend.native._NativeApplication.MouseEventInfo.clone","lime/_backend/native/NativeApplication.hx",530,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(530)
	return ::lime::_backend::native::_NativeApplication::MouseEventInfo_obj::__new(this->type,this->x,this->y,this->button,this->movementX,this->movementY);
}


HX_DEFINE_DYNAMIC_FUNC0(MouseEventInfo_obj,clone,return )


MouseEventInfo_obj::MouseEventInfo_obj()
{
}

Dynamic MouseEventInfo_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"movementX") ) { return movementX; }
		if (HX_FIELD_EQ(inName,"movementY") ) { return movementY; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"movementX") ) { movementX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movementY") ) { movementY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("button"));
	outFields->push(HX_CSTRING("movementX"));
	outFields->push(HX_CSTRING("movementY"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MouseEventInfo_obj,button),HX_CSTRING("button")},
	{hx::fsFloat,(int)offsetof(MouseEventInfo_obj,movementX),HX_CSTRING("movementX")},
	{hx::fsFloat,(int)offsetof(MouseEventInfo_obj,movementY),HX_CSTRING("movementY")},
	{hx::fsInt,(int)offsetof(MouseEventInfo_obj,type),HX_CSTRING("type")},
	{hx::fsFloat,(int)offsetof(MouseEventInfo_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(MouseEventInfo_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("button"),
	HX_CSTRING("movementX"),
	HX_CSTRING("movementY"),
	HX_CSTRING("type"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEventInfo_obj::__mClass,"__mClass");
};

#endif

Class MouseEventInfo_obj::__mClass;

void MouseEventInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native._NativeApplication.MouseEventInfo"), hx::TCanCast< MouseEventInfo_obj> ,sStaticFields,sMemberFields,
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

void MouseEventInfo_obj::__boot()
{
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
