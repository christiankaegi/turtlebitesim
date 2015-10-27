#include <hxcpp.h>

#ifndef INCLUDED_model_vo_DecHexVO
#include <model/vo/DecHexVO.h>
#endif
namespace model{
namespace vo{

Void DecHexVO_obj::__construct(int dec,::String hex)
{
HX_STACK_FRAME("model.vo.DecHexVO","new",0x79baff54,"model.vo.DecHexVO.new","model/vo/DecHexVO.hx",13,0xef6253fc)
HX_STACK_THIS(this)
HX_STACK_ARG(dec,"dec")
HX_STACK_ARG(hex,"hex")
{
	HX_STACK_LINE(14)
	this->dec = dec;
	HX_STACK_LINE(15)
	this->hex = hex;
}
;
	return null();
}

//DecHexVO_obj::~DecHexVO_obj() { }

Dynamic DecHexVO_obj::__CreateEmpty() { return  new DecHexVO_obj; }
hx::ObjectPtr< DecHexVO_obj > DecHexVO_obj::__new(int dec,::String hex)
{  hx::ObjectPtr< DecHexVO_obj > result = new DecHexVO_obj();
	result->__construct(dec,hex);
	return result;}

Dynamic DecHexVO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DecHexVO_obj > result = new DecHexVO_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


DecHexVO_obj::DecHexVO_obj()
{
}

void DecHexVO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DecHexVO);
	HX_MARK_MEMBER_NAME(dec,"dec");
	HX_MARK_MEMBER_NAME(hex,"hex");
	HX_MARK_END_CLASS();
}

void DecHexVO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dec,"dec");
	HX_VISIT_MEMBER_NAME(hex,"hex");
}

Dynamic DecHexVO_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dec") ) { return dec; }
		if (HX_FIELD_EQ(inName,"hex") ) { return hex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DecHexVO_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dec") ) { dec=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hex") ) { hex=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DecHexVO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dec"));
	outFields->push(HX_CSTRING("hex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DecHexVO_obj,dec),HX_CSTRING("dec")},
	{hx::fsString,(int)offsetof(DecHexVO_obj,hex),HX_CSTRING("hex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("dec"),
	HX_CSTRING("hex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DecHexVO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DecHexVO_obj::__mClass,"__mClass");
};

#endif

Class DecHexVO_obj::__mClass;

void DecHexVO_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.vo.DecHexVO"), hx::TCanCast< DecHexVO_obj> ,sStaticFields,sMemberFields,
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

void DecHexVO_obj::__boot()
{
}

} // end namespace model
} // end namespace vo
