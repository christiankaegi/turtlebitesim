#include <hxcpp.h>

#ifndef INCLUDED_model_data_SnapshotData
#include <model/data/SnapshotData.h>
#endif
#ifndef INCLUDED_model_vo_SnapshotVO
#include <model/vo/SnapshotVO.h>
#endif
namespace model{
namespace data{

Void SnapshotData_obj::__construct()
{
HX_STACK_FRAME("model.data.SnapshotData","new",0xeac206df,"model.data.SnapshotData.new","model/data/SnapshotData.hx",20,0xc6404911)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->reset();
}
;
	return null();
}

//SnapshotData_obj::~SnapshotData_obj() { }

Dynamic SnapshotData_obj::__CreateEmpty() { return  new SnapshotData_obj; }
hx::ObjectPtr< SnapshotData_obj > SnapshotData_obj::__new()
{  hx::ObjectPtr< SnapshotData_obj > result = new SnapshotData_obj();
	result->__construct();
	return result;}

Dynamic SnapshotData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SnapshotData_obj > result = new SnapshotData_obj();
	result->__construct();
	return result;}

Void SnapshotData_obj::reset( ){
{
		HX_STACK_FRAME("model.data.SnapshotData","reset",0xf2105e0e,"model.data.SnapshotData.reset","model/data/SnapshotData.hx",23,0xc6404911)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		::model::vo::SnapshotVO _g = ::model::vo::SnapshotVO_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		this->register1 = _g;
		HX_STACK_LINE(25)
		::model::vo::SnapshotVO _g1 = ::model::vo::SnapshotVO_obj::__new(null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		this->register2 = _g1;
		HX_STACK_LINE(26)
		::model::vo::SnapshotVO _g2 = ::model::vo::SnapshotVO_obj::__new(null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(26)
		this->accumulator = _g2;
		HX_STACK_LINE(27)
		::model::vo::SnapshotVO _g3 = ::model::vo::SnapshotVO_obj::__new(null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(27)
		this->keyboard = _g3;
		HX_STACK_LINE(28)
		Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(28)
		this->rom = _g4;
		HX_STACK_LINE(29)
		Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(29)
		this->ram = _g5;
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(30)
			while((true)){
				HX_STACK_LINE(30)
				if ((!(((_g6 < (int)16))))){
					HX_STACK_LINE(30)
					break;
				}
				HX_STACK_LINE(30)
				int i = (_g6)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(31)
				this->rom[i] = ::model::vo::SnapshotVO_obj::__new(null(),null(),null());
				HX_STACK_LINE(32)
				this->ram[i] = ::model::vo::SnapshotVO_obj::__new(null(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SnapshotData_obj,reset,(void))


SnapshotData_obj::SnapshotData_obj()
{
}

void SnapshotData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SnapshotData);
	HX_MARK_MEMBER_NAME(register1,"register1");
	HX_MARK_MEMBER_NAME(register2,"register2");
	HX_MARK_MEMBER_NAME(accumulator,"accumulator");
	HX_MARK_MEMBER_NAME(keyboard,"keyboard");
	HX_MARK_MEMBER_NAME(rom,"rom");
	HX_MARK_MEMBER_NAME(ram,"ram");
	HX_MARK_END_CLASS();
}

void SnapshotData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(register1,"register1");
	HX_VISIT_MEMBER_NAME(register2,"register2");
	HX_VISIT_MEMBER_NAME(accumulator,"accumulator");
	HX_VISIT_MEMBER_NAME(keyboard,"keyboard");
	HX_VISIT_MEMBER_NAME(rom,"rom");
	HX_VISIT_MEMBER_NAME(ram,"ram");
}

Dynamic SnapshotData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rom") ) { return rom; }
		if (HX_FIELD_EQ(inName,"ram") ) { return ram; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyboard") ) { return keyboard; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"register1") ) { return register1; }
		if (HX_FIELD_EQ(inName,"register2") ) { return register2; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accumulator") ) { return accumulator; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SnapshotData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rom") ) { rom=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ram") ) { ram=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyboard") ) { keyboard=inValue.Cast< ::model::vo::SnapshotVO >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"register1") ) { register1=inValue.Cast< ::model::vo::SnapshotVO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"register2") ) { register2=inValue.Cast< ::model::vo::SnapshotVO >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accumulator") ) { accumulator=inValue.Cast< ::model::vo::SnapshotVO >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SnapshotData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("register1"));
	outFields->push(HX_CSTRING("register2"));
	outFields->push(HX_CSTRING("accumulator"));
	outFields->push(HX_CSTRING("keyboard"));
	outFields->push(HX_CSTRING("rom"));
	outFields->push(HX_CSTRING("ram"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::vo::SnapshotVO*/ ,(int)offsetof(SnapshotData_obj,register1),HX_CSTRING("register1")},
	{hx::fsObject /*::model::vo::SnapshotVO*/ ,(int)offsetof(SnapshotData_obj,register2),HX_CSTRING("register2")},
	{hx::fsObject /*::model::vo::SnapshotVO*/ ,(int)offsetof(SnapshotData_obj,accumulator),HX_CSTRING("accumulator")},
	{hx::fsObject /*::model::vo::SnapshotVO*/ ,(int)offsetof(SnapshotData_obj,keyboard),HX_CSTRING("keyboard")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SnapshotData_obj,rom),HX_CSTRING("rom")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SnapshotData_obj,ram),HX_CSTRING("ram")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("register1"),
	HX_CSTRING("register2"),
	HX_CSTRING("accumulator"),
	HX_CSTRING("keyboard"),
	HX_CSTRING("rom"),
	HX_CSTRING("ram"),
	HX_CSTRING("reset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SnapshotData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SnapshotData_obj::__mClass,"__mClass");
};

#endif

Class SnapshotData_obj::__mClass;

void SnapshotData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.data.SnapshotData"), hx::TCanCast< SnapshotData_obj> ,sStaticFields,sMemberFields,
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

void SnapshotData_obj::__boot()
{
}

} // end namespace model
} // end namespace data
