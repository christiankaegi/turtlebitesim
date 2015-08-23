#include <hxcpp.h>

#ifndef INCLUDED_model_data_BusData
#include <model/data/BusData.h>
#endif
namespace model{
namespace data{

Void BusData_obj::__construct()
{
HX_STACK_FRAME("model.data.BusData","new",0xc7fa357d,"model.data.BusData.new","model/data/BusData.hx",6,0x46a85cf3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	Array< bool > _g = Array_obj< bool >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(7)
	this->data = _g;
	HX_STACK_LINE(8)
	this->data->push(false);
	HX_STACK_LINE(9)
	this->data->push(false);
	HX_STACK_LINE(10)
	this->data->push(false);
	HX_STACK_LINE(11)
	this->data->push(false);
	HX_STACK_LINE(12)
	this->data->push(false);
	HX_STACK_LINE(13)
	this->data->push(false);
	HX_STACK_LINE(14)
	this->data->push(false);
	HX_STACK_LINE(15)
	this->data->push(false);
}
;
	return null();
}

//BusData_obj::~BusData_obj() { }

Dynamic BusData_obj::__CreateEmpty() { return  new BusData_obj; }
hx::ObjectPtr< BusData_obj > BusData_obj::__new()
{  hx::ObjectPtr< BusData_obj > result = new BusData_obj();
	result->__construct();
	return result;}

Dynamic BusData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BusData_obj > result = new BusData_obj();
	result->__construct();
	return result;}

Void BusData_obj::setLine0( bool v){
{
		HX_STACK_FRAME("model.data.BusData","setLine0",0xe59b387d,"model.data.BusData.setLine0","model/data/BusData.hx",22,0x46a85cf3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(22)
		this->data[(int)0] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BusData_obj,setLine0,(void))

bool BusData_obj::getLine0( ){
	HX_STACK_FRAME("model.data.BusData","getLine0",0x373ddf09,"model.data.BusData.getLine0","model/data/BusData.hx",26,0x46a85cf3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	return this->data->__get((int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(BusData_obj,getLine0,return )

Void BusData_obj::setLine1( bool v){
{
		HX_STACK_FRAME("model.data.BusData","setLine1",0xe59b387e,"model.data.BusData.setLine1","model/data/BusData.hx",32,0x46a85cf3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(32)
		this->data[(int)1] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BusData_obj,setLine1,(void))

bool BusData_obj::getLine1( ){
	HX_STACK_FRAME("model.data.BusData","getLine1",0x373ddf0a,"model.data.BusData.getLine1","model/data/BusData.hx",36,0x46a85cf3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return this->data->__get((int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(BusData_obj,getLine1,return )

Void BusData_obj::setLine2( bool v){
{
		HX_STACK_FRAME("model.data.BusData","setLine2",0xe59b387f,"model.data.BusData.setLine2","model/data/BusData.hx",42,0x46a85cf3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(42)
		this->data[(int)2] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BusData_obj,setLine2,(void))

bool BusData_obj::getLine2( ){
	HX_STACK_FRAME("model.data.BusData","getLine2",0x373ddf0b,"model.data.BusData.getLine2","model/data/BusData.hx",46,0x46a85cf3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return this->data->__get((int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(BusData_obj,getLine2,return )

Void BusData_obj::setLine3( bool v){
{
		HX_STACK_FRAME("model.data.BusData","setLine3",0xe59b3880,"model.data.BusData.setLine3","model/data/BusData.hx",52,0x46a85cf3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(52)
		this->data[(int)3] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BusData_obj,setLine3,(void))

bool BusData_obj::getLine3( ){
	HX_STACK_FRAME("model.data.BusData","getLine3",0x373ddf0c,"model.data.BusData.getLine3","model/data/BusData.hx",56,0x46a85cf3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	return this->data->__get((int)3);
}


HX_DEFINE_DYNAMIC_FUNC0(BusData_obj,getLine3,return )

Void BusData_obj::setLine4( bool v){
{
		HX_STACK_FRAME("model.data.BusData","setLine4",0xe59b3881,"model.data.BusData.setLine4","model/data/BusData.hx",62,0x46a85cf3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(62)
		this->data[(int)4] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BusData_obj,setLine4,(void))

bool BusData_obj::getLine4( ){
	HX_STACK_FRAME("model.data.BusData","getLine4",0x373ddf0d,"model.data.BusData.getLine4","model/data/BusData.hx",66,0x46a85cf3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	return this->data->__get((int)4);
}


HX_DEFINE_DYNAMIC_FUNC0(BusData_obj,getLine4,return )

Void BusData_obj::setLine5( bool v){
{
		HX_STACK_FRAME("model.data.BusData","setLine5",0xe59b3882,"model.data.BusData.setLine5","model/data/BusData.hx",72,0x46a85cf3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(72)
		this->data[(int)5] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BusData_obj,setLine5,(void))

bool BusData_obj::getLine5( ){
	HX_STACK_FRAME("model.data.BusData","getLine5",0x373ddf0e,"model.data.BusData.getLine5","model/data/BusData.hx",76,0x46a85cf3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	return this->data->__get((int)5);
}


HX_DEFINE_DYNAMIC_FUNC0(BusData_obj,getLine5,return )

Void BusData_obj::setLine6( bool v){
{
		HX_STACK_FRAME("model.data.BusData","setLine6",0xe59b3883,"model.data.BusData.setLine6","model/data/BusData.hx",82,0x46a85cf3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(82)
		this->data[(int)6] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BusData_obj,setLine6,(void))

bool BusData_obj::getLine6( ){
	HX_STACK_FRAME("model.data.BusData","getLine6",0x373ddf0f,"model.data.BusData.getLine6","model/data/BusData.hx",86,0x46a85cf3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	return this->data->__get((int)6);
}


HX_DEFINE_DYNAMIC_FUNC0(BusData_obj,getLine6,return )

Void BusData_obj::setLine7( bool v){
{
		HX_STACK_FRAME("model.data.BusData","setLine7",0xe59b3884,"model.data.BusData.setLine7","model/data/BusData.hx",92,0x46a85cf3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(92)
		this->data[(int)7] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BusData_obj,setLine7,(void))

bool BusData_obj::getLine7( ){
	HX_STACK_FRAME("model.data.BusData","getLine7",0x373ddf10,"model.data.BusData.getLine7","model/data/BusData.hx",96,0x46a85cf3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	return this->data->__get((int)7);
}


HX_DEFINE_DYNAMIC_FUNC0(BusData_obj,getLine7,return )

Array< bool > BusData_obj::getBusData( ){
	HX_STACK_FRAME("model.data.BusData","getBusData",0xe1829417,"model.data.BusData.getBusData","model/data/BusData.hx",102,0x46a85cf3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	return this->data;
}


HX_DEFINE_DYNAMIC_FUNC0(BusData_obj,getBusData,return )

::String BusData_obj::getBusDataAsBinary( ){
	HX_STACK_FRAME("model.data.BusData","getBusDataAsBinary",0x0d7a85ca,"model.data.BusData.getBusDataAsBinary","model/data/BusData.hx",105,0x46a85cf3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		while((true)){
			HX_STACK_LINE(107)
			if ((!(((_g < (int)7))))){
				HX_STACK_LINE(107)
				break;
			}
			HX_STACK_LINE(107)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(108)
			if (((this->data->__get(i) == true))){
				HX_STACK_LINE(109)
				s = (HX_CSTRING("1") + s);
			}
			else{
				HX_STACK_LINE(111)
				s = (HX_CSTRING("0") + s);
			}
		}
	}
	HX_STACK_LINE(114)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(BusData_obj,getBusDataAsBinary,return )

Void BusData_obj::setBusData( Array< bool > v){
{
		HX_STACK_FRAME("model.data.BusData","setBusData",0xe500328b,"model.data.BusData.setBusData","model/data/BusData.hx",118,0x46a85cf3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(118)
		this->data = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BusData_obj,setBusData,(void))

Void BusData_obj::setBusDataAsBinary( ::String v){
{
		HX_STACK_FRAME("model.data.BusData","setBusDataAsBinary",0xea29b83e,"model.data.BusData.setBusDataAsBinary","model/data/BusData.hx",122,0x46a85cf3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(122)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		while((true)){
			HX_STACK_LINE(122)
			if ((!(((_g < (int)7))))){
				HX_STACK_LINE(122)
				break;
			}
			HX_STACK_LINE(122)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(123)
			::String _g1 = v.substr(i,(int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(123)
			if (((_g1 == HX_CSTRING("1")))){
				HX_STACK_LINE(124)
				this->data[i] = true;
			}
			else{
				HX_STACK_LINE(126)
				this->data[i] = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BusData_obj,setBusDataAsBinary,(void))


BusData_obj::BusData_obj()
{
}

void BusData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BusData);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void BusData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic BusData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setLine0") ) { return setLine0_dyn(); }
		if (HX_FIELD_EQ(inName,"getLine0") ) { return getLine0_dyn(); }
		if (HX_FIELD_EQ(inName,"setLine1") ) { return setLine1_dyn(); }
		if (HX_FIELD_EQ(inName,"getLine1") ) { return getLine1_dyn(); }
		if (HX_FIELD_EQ(inName,"setLine2") ) { return setLine2_dyn(); }
		if (HX_FIELD_EQ(inName,"getLine2") ) { return getLine2_dyn(); }
		if (HX_FIELD_EQ(inName,"setLine3") ) { return setLine3_dyn(); }
		if (HX_FIELD_EQ(inName,"getLine3") ) { return getLine3_dyn(); }
		if (HX_FIELD_EQ(inName,"setLine4") ) { return setLine4_dyn(); }
		if (HX_FIELD_EQ(inName,"getLine4") ) { return getLine4_dyn(); }
		if (HX_FIELD_EQ(inName,"setLine5") ) { return setLine5_dyn(); }
		if (HX_FIELD_EQ(inName,"getLine5") ) { return getLine5_dyn(); }
		if (HX_FIELD_EQ(inName,"setLine6") ) { return setLine6_dyn(); }
		if (HX_FIELD_EQ(inName,"getLine6") ) { return getLine6_dyn(); }
		if (HX_FIELD_EQ(inName,"setLine7") ) { return setLine7_dyn(); }
		if (HX_FIELD_EQ(inName,"getLine7") ) { return getLine7_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getBusData") ) { return getBusData_dyn(); }
		if (HX_FIELD_EQ(inName,"setBusData") ) { return setBusData_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBusDataAsBinary") ) { return getBusDataAsBinary_dyn(); }
		if (HX_FIELD_EQ(inName,"setBusDataAsBinary") ) { return setBusDataAsBinary_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BusData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< bool > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BusData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(BusData_obj,data),HX_CSTRING("data")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	HX_CSTRING("setLine0"),
	HX_CSTRING("getLine0"),
	HX_CSTRING("setLine1"),
	HX_CSTRING("getLine1"),
	HX_CSTRING("setLine2"),
	HX_CSTRING("getLine2"),
	HX_CSTRING("setLine3"),
	HX_CSTRING("getLine3"),
	HX_CSTRING("setLine4"),
	HX_CSTRING("getLine4"),
	HX_CSTRING("setLine5"),
	HX_CSTRING("getLine5"),
	HX_CSTRING("setLine6"),
	HX_CSTRING("getLine6"),
	HX_CSTRING("setLine7"),
	HX_CSTRING("getLine7"),
	HX_CSTRING("getBusData"),
	HX_CSTRING("getBusDataAsBinary"),
	HX_CSTRING("setBusData"),
	HX_CSTRING("setBusDataAsBinary"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BusData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BusData_obj::__mClass,"__mClass");
};

#endif

Class BusData_obj::__mClass;

void BusData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.data.BusData"), hx::TCanCast< BusData_obj> ,sStaticFields,sMemberFields,
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

void BusData_obj::__boot()
{
}

} // end namespace model
} // end namespace data
