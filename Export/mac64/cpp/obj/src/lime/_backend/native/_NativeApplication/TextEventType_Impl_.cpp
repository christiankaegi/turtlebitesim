#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_TextEventType_Impl_
#include <lime/_backend/native/_NativeApplication/TextEventType_Impl_.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void TextEventType_Impl__obj::__construct()
{
	return null();
}

//TextEventType_Impl__obj::~TextEventType_Impl__obj() { }

Dynamic TextEventType_Impl__obj::__CreateEmpty() { return  new TextEventType_Impl__obj; }
hx::ObjectPtr< TextEventType_Impl__obj > TextEventType_Impl__obj::__new()
{  hx::ObjectPtr< TextEventType_Impl__obj > result = new TextEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic TextEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEventType_Impl__obj > result = new TextEventType_Impl__obj();
	result->__construct();
	return result;}

int TextEventType_Impl__obj::TEXT_INPUT;

int TextEventType_Impl__obj::TEXT_EDIT;


TextEventType_Impl__obj::TextEventType_Impl__obj()
{
}

Dynamic TextEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic TextEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TextEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TEXT_INPUT"),
	HX_CSTRING("TEXT_EDIT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::TEXT_INPUT,"TEXT_INPUT");
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::TEXT_EDIT,"TEXT_EDIT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::TEXT_INPUT,"TEXT_INPUT");
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::TEXT_EDIT,"TEXT_EDIT");
};

#endif

Class TextEventType_Impl__obj::__mClass;

void TextEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native._NativeApplication.TextEventType_Impl_"), hx::TCanCast< TextEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void TextEventType_Impl__obj::__boot()
{
	TEXT_INPUT= (int)0;
	TEXT_EDIT= (int)1;
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
