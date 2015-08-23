#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_TextEventInfo
#include <lime/_backend/native/_NativeApplication/TextEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void TextEventInfo_obj::__construct(Dynamic type,::String __o_text,hx::Null< int >  __o_start,hx::Null< int >  __o_length)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.TextEventInfo","new",0xb1ead390,"lime._backend.native._NativeApplication.TextEventInfo.new","lime/_backend/native/NativeApplication.hx",592,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_text,"text")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(__o_length,"length")
::String text = __o_text.Default(HX_CSTRING(""));
int start = __o_start.Default(0);
int length = __o_length.Default(0);
{
	HX_STACK_LINE(594)
	this->type = type;
	HX_STACK_LINE(595)
	this->text = text;
	HX_STACK_LINE(596)
	this->start = start;
	HX_STACK_LINE(597)
	this->length = length;
}
;
	return null();
}

//TextEventInfo_obj::~TextEventInfo_obj() { }

Dynamic TextEventInfo_obj::__CreateEmpty() { return  new TextEventInfo_obj; }
hx::ObjectPtr< TextEventInfo_obj > TextEventInfo_obj::__new(Dynamic type,::String __o_text,hx::Null< int >  __o_start,hx::Null< int >  __o_length)
{  hx::ObjectPtr< TextEventInfo_obj > result = new TextEventInfo_obj();
	result->__construct(type,__o_text,__o_start,__o_length);
	return result;}

Dynamic TextEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEventInfo_obj > result = new TextEventInfo_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::lime::_backend::native::_NativeApplication::TextEventInfo TextEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.TextEventInfo","clone",0xd025428d,"lime._backend.native._NativeApplication.TextEventInfo.clone","lime/_backend/native/NativeApplication.hx",604,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(604)
	return ::lime::_backend::native::_NativeApplication::TextEventInfo_obj::__new(this->type,this->text,this->start,this->length);
}


HX_DEFINE_DYNAMIC_FUNC0(TextEventInfo_obj,clone,return )


TextEventInfo_obj::TextEventInfo_obj()
{
}

void TextEventInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEventInfo);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void TextEventInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic TextEventInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("start"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TextEventInfo_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(TextEventInfo_obj,length),HX_CSTRING("length")},
	{hx::fsInt,(int)offsetof(TextEventInfo_obj,start),HX_CSTRING("start")},
	{hx::fsString,(int)offsetof(TextEventInfo_obj,text),HX_CSTRING("text")},
	{hx::fsInt,(int)offsetof(TextEventInfo_obj,type),HX_CSTRING("type")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("length"),
	HX_CSTRING("start"),
	HX_CSTRING("text"),
	HX_CSTRING("type"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEventInfo_obj::__mClass,"__mClass");
};

#endif

Class TextEventInfo_obj::__mClass;

void TextEventInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native._NativeApplication.TextEventInfo"), hx::TCanCast< TextEventInfo_obj> ,sStaticFields,sMemberFields,
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

void TextEventInfo_obj::__boot()
{
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
