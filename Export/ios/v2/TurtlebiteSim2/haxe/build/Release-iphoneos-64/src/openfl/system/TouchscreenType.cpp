#include <hxcpp.h>

#ifndef INCLUDED_openfl_system_TouchscreenType
#include <openfl/system/TouchscreenType.h>
#endif
namespace openfl{
namespace system{

::openfl::system::TouchscreenType TouchscreenType_obj::FINGER;

::openfl::system::TouchscreenType TouchscreenType_obj::NONE;

::openfl::system::TouchscreenType TouchscreenType_obj::STYLUS;

HX_DEFINE_CREATE_ENUM(TouchscreenType_obj)

int TouchscreenType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("FINGER")) return 0;
	if (inName==HX_CSTRING("NONE")) return 1;
	if (inName==HX_CSTRING("STYLUS")) return 2;
	return super::__FindIndex(inName);
}

int TouchscreenType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("FINGER")) return 0;
	if (inName==HX_CSTRING("NONE")) return 0;
	if (inName==HX_CSTRING("STYLUS")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TouchscreenType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("FINGER")) return FINGER;
	if (inName==HX_CSTRING("NONE")) return NONE;
	if (inName==HX_CSTRING("STYLUS")) return STYLUS;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("FINGER"),
	HX_CSTRING("NONE"),
	HX_CSTRING("STYLUS"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchscreenType_obj::FINGER,"FINGER");
	HX_MARK_MEMBER_NAME(TouchscreenType_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(TouchscreenType_obj::STYLUS,"STYLUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchscreenType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TouchscreenType_obj::FINGER,"FINGER");
	HX_VISIT_MEMBER_NAME(TouchscreenType_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(TouchscreenType_obj::STYLUS,"STYLUS");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class TouchscreenType_obj::__mClass;

Dynamic __Create_TouchscreenType_obj() { return new TouchscreenType_obj; }

void TouchscreenType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.system.TouchscreenType"), hx::TCanCast< TouchscreenType_obj >,sStaticFields,sMemberFields,
	&__Create_TouchscreenType_obj, &__Create,
	&super::__SGetClass(), &CreateTouchscreenType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TouchscreenType_obj::__boot()
{
hx::Static(FINGER) = hx::CreateEnum< TouchscreenType_obj >(HX_CSTRING("FINGER"),0);
hx::Static(NONE) = hx::CreateEnum< TouchscreenType_obj >(HX_CSTRING("NONE"),1);
hx::Static(STYLUS) = hx::CreateEnum< TouchscreenType_obj >(HX_CSTRING("STYLUS"),2);
}


} // end namespace openfl
} // end namespace system
