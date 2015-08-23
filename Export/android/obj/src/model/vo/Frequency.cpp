#include <hxcpp.h>

#ifndef INCLUDED_model_vo_Frequency
#include <model/vo/Frequency.h>
#endif
namespace model{
namespace vo{

Void Frequency_obj::__construct(Float ms,::String label)
{
HX_STACK_FRAME("model.vo.Frequency","new",0x940d0fde,"model.vo.Frequency.new","model/vo/Frequency.hx",5,0xa9babbf2)
HX_STACK_THIS(this)
HX_STACK_ARG(ms,"ms")
HX_STACK_ARG(label,"label")
{
	HX_STACK_LINE(6)
	this->ms = ms;
	HX_STACK_LINE(7)
	this->label = label;
}
;
	return null();
}

//Frequency_obj::~Frequency_obj() { }

Dynamic Frequency_obj::__CreateEmpty() { return  new Frequency_obj; }
hx::ObjectPtr< Frequency_obj > Frequency_obj::__new(Float ms,::String label)
{  hx::ObjectPtr< Frequency_obj > result = new Frequency_obj();
	result->__construct(ms,label);
	return result;}

Dynamic Frequency_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Frequency_obj > result = new Frequency_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Frequency_obj::Frequency_obj()
{
}

void Frequency_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Frequency);
	HX_MARK_MEMBER_NAME(ms,"ms");
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_END_CLASS();
}

void Frequency_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ms,"ms");
	HX_VISIT_MEMBER_NAME(label,"label");
}

Dynamic Frequency_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ms") ) { return ms; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Frequency_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ms") ) { ms=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Frequency_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ms"));
	outFields->push(HX_CSTRING("label"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Frequency_obj,ms),HX_CSTRING("ms")},
	{hx::fsString,(int)offsetof(Frequency_obj,label),HX_CSTRING("label")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ms"),
	HX_CSTRING("label"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Frequency_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Frequency_obj::__mClass,"__mClass");
};

#endif

Class Frequency_obj::__mClass;

void Frequency_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.vo.Frequency"), hx::TCanCast< Frequency_obj> ,sStaticFields,sMemberFields,
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

void Frequency_obj::__boot()
{
}

} // end namespace model
} // end namespace vo
