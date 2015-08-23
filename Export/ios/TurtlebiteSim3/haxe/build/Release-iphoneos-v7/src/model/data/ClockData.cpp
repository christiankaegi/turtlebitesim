#include <hxcpp.h>

#ifndef INCLUDED_model_data_ClockData
#include <model/data/ClockData.h>
#endif
#ifndef INCLUDED_model_vo_FrequencyVO
#include <model/vo/FrequencyVO.h>
#endif
namespace model{
namespace data{

Void ClockData_obj::__construct()
{
HX_STACK_FRAME("model.data.ClockData","new",0x7efdfc4b,"model.data.ClockData.new","model/data/ClockData.hx",3,0x8455c1e5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	this->clockOn = false;
	HX_STACK_LINE(6)
	this->currentFrequencyPointer = (int)4;
	HX_STACK_LINE(10)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(10)
	this->frequencies = _g;
	HX_STACK_LINE(13)
	::model::vo::FrequencyVO _g1 = ::model::vo::FrequencyVO_obj::__new(1000.0,HX_CSTRING("1Hz"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(14)
	::model::vo::FrequencyVO _g2 = ::model::vo::FrequencyVO_obj::__new(500.0,HX_CSTRING("2Hz"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(15)
	::model::vo::FrequencyVO _g3 = ::model::vo::FrequencyVO_obj::__new(250.0,HX_CSTRING("4Hz"));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(16)
	::model::vo::FrequencyVO _g4 = ::model::vo::FrequencyVO_obj::__new(125.0,HX_CSTRING("8Hz"));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(17)
	::model::vo::FrequencyVO _g5 = ::model::vo::FrequencyVO_obj::__new(62.5,HX_CSTRING("16Hz"));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(18)
	::model::vo::FrequencyVO _g6 = ::model::vo::FrequencyVO_obj::__new(31.25,HX_CSTRING("32Hz"));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(19)
	::model::vo::FrequencyVO _g7 = ::model::vo::FrequencyVO_obj::__new(15.625,HX_CSTRING("64Hz"));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(20)
	::model::vo::FrequencyVO _g8 = ::model::vo::FrequencyVO_obj::__new(7.8125,HX_CSTRING("128Hz"));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(21)
	::model::vo::FrequencyVO _g9 = ::model::vo::FrequencyVO_obj::__new(3.9,HX_CSTRING("256Hz"));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(22)
	::model::vo::FrequencyVO _g10 = ::model::vo::FrequencyVO_obj::__new(1.953,HX_CSTRING("512Hz"));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(23)
	::model::vo::FrequencyVO _g11 = ::model::vo::FrequencyVO_obj::__new(0.976,HX_CSTRING("1KHz"));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(11)
	Array< ::Dynamic > _g12 = Array_obj< ::Dynamic >::__new().Add(_g1).Add(_g2).Add(_g3).Add(_g4).Add(_g5).Add(_g6).Add(_g7).Add(_g8).Add(_g9).Add(_g10).Add(_g11);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(11)
	this->frequencies = _g12;
}
;
	return null();
}

//ClockData_obj::~ClockData_obj() { }

Dynamic ClockData_obj::__CreateEmpty() { return  new ClockData_obj; }
hx::ObjectPtr< ClockData_obj > ClockData_obj::__new()
{  hx::ObjectPtr< ClockData_obj > result = new ClockData_obj();
	result->__construct();
	return result;}

Dynamic ClockData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClockData_obj > result = new ClockData_obj();
	result->__construct();
	return result;}


ClockData_obj::ClockData_obj()
{
}

void ClockData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClockData);
	HX_MARK_MEMBER_NAME(frequencies,"frequencies");
	HX_MARK_MEMBER_NAME(currentFrequencyPointer,"currentFrequencyPointer");
	HX_MARK_MEMBER_NAME(clockOn,"clockOn");
	HX_MARK_END_CLASS();
}

void ClockData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frequencies,"frequencies");
	HX_VISIT_MEMBER_NAME(currentFrequencyPointer,"currentFrequencyPointer");
	HX_VISIT_MEMBER_NAME(clockOn,"clockOn");
}

Dynamic ClockData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"clockOn") ) { return clockOn; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frequencies") ) { return frequencies; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"currentFrequencyPointer") ) { return currentFrequencyPointer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClockData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"clockOn") ) { clockOn=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frequencies") ) { frequencies=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"currentFrequencyPointer") ) { currentFrequencyPointer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClockData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frequencies"));
	outFields->push(HX_CSTRING("currentFrequencyPointer"));
	outFields->push(HX_CSTRING("clockOn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ClockData_obj,frequencies),HX_CSTRING("frequencies")},
	{hx::fsInt,(int)offsetof(ClockData_obj,currentFrequencyPointer),HX_CSTRING("currentFrequencyPointer")},
	{hx::fsBool,(int)offsetof(ClockData_obj,clockOn),HX_CSTRING("clockOn")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("frequencies"),
	HX_CSTRING("currentFrequencyPointer"),
	HX_CSTRING("clockOn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClockData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClockData_obj::__mClass,"__mClass");
};

#endif

Class ClockData_obj::__mClass;

void ClockData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.data.ClockData"), hx::TCanCast< ClockData_obj> ,sStaticFields,sMemberFields,
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

void ClockData_obj::__boot()
{
}

} // end namespace model
} // end namespace data
