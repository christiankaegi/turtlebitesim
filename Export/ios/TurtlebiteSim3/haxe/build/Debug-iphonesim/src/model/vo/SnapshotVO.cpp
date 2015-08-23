#include <hxcpp.h>

#ifndef INCLUDED_model_vo_SnapshotVO
#include <model/vo/SnapshotVO.h>
#endif
namespace model{
namespace vo{

Void SnapshotVO_obj::__construct(::String __o_binary,::String __o_hex,Dynamic __o_decimal)
{
HX_STACK_FRAME("model.vo.SnapshotVO","new",0x0723379f,"model.vo.SnapshotVO.new","model/vo/SnapshotVO.hx",8,0x83a70611)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_binary,"binary")
HX_STACK_ARG(__o_hex,"hex")
HX_STACK_ARG(__o_decimal,"decimal")
::String binary = __o_binary.Default(HX_CSTRING("0000"));
::String hex = __o_hex.Default(HX_CSTRING("0"));
Dynamic decimal = __o_decimal.Default(0);
{
	HX_STACK_LINE(9)
	this->binary = binary;
	HX_STACK_LINE(10)
	this->hex = hex;
	HX_STACK_LINE(11)
	this->decimal = decimal;
	HX_STACK_LINE(12)
	this->createCodeArray();
}
;
	return null();
}

//SnapshotVO_obj::~SnapshotVO_obj() { }

Dynamic SnapshotVO_obj::__CreateEmpty() { return  new SnapshotVO_obj; }
hx::ObjectPtr< SnapshotVO_obj > SnapshotVO_obj::__new(::String __o_binary,::String __o_hex,Dynamic __o_decimal)
{  hx::ObjectPtr< SnapshotVO_obj > result = new SnapshotVO_obj();
	result->__construct(__o_binary,__o_hex,__o_decimal);
	return result;}

Dynamic SnapshotVO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SnapshotVO_obj > result = new SnapshotVO_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void SnapshotVO_obj::createCodeArray( ){
{
		HX_STACK_FRAME("model.vo.SnapshotVO","createCodeArray",0x78874c4f,"model.vo.SnapshotVO.createCodeArray","model/vo/SnapshotVO.hx",15,0x83a70611)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		Array< bool > _g = Array_obj< bool >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16)
		this->codeArr = _g;
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(17)
			while((true)){
				HX_STACK_LINE(17)
				if ((!(((_g1 < (int)4))))){
					HX_STACK_LINE(17)
					break;
				}
				HX_STACK_LINE(17)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(18)
				::String _g11 = this->binary.substr(i,(int)1);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(18)
				if (((_g11 == HX_CSTRING("1")))){
					HX_STACK_LINE(19)
					this->codeArr[i] = true;
				}
				else{
					HX_STACK_LINE(21)
					this->codeArr[i] = false;
				}
			}
		}
		HX_STACK_LINE(25)
		this->codeArr->unshift(false);
		HX_STACK_LINE(26)
		this->codeArr->unshift(false);
		HX_STACK_LINE(27)
		this->codeArr->unshift(false);
		HX_STACK_LINE(28)
		this->codeArr->unshift(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SnapshotVO_obj,createCodeArray,(void))

::String SnapshotVO_obj::getBinary( ){
	HX_STACK_FRAME("model.vo.SnapshotVO","getBinary",0x540125b6,"model.vo.SnapshotVO.getBinary","model/vo/SnapshotVO.hx",32,0x83a70611)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	return this->binary;
}


HX_DEFINE_DYNAMIC_FUNC0(SnapshotVO_obj,getBinary,return )

::String SnapshotVO_obj::getHex( ){
	HX_STACK_FRAME("model.vo.SnapshotVO","getHex",0xc64de606,"model.vo.SnapshotVO.getHex","model/vo/SnapshotVO.hx",36,0x83a70611)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return this->hex;
}


HX_DEFINE_DYNAMIC_FUNC0(SnapshotVO_obj,getHex,return )

int SnapshotVO_obj::getDecimal( ){
	HX_STACK_FRAME("model.vo.SnapshotVO","getDecimal",0x969ac93c,"model.vo.SnapshotVO.getDecimal","model/vo/SnapshotVO.hx",40,0x83a70611)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	return this->decimal;
}


HX_DEFINE_DYNAMIC_FUNC0(SnapshotVO_obj,getDecimal,return )

Array< bool > SnapshotVO_obj::getCodeArr( ){
	HX_STACK_FRAME("model.vo.SnapshotVO","getCodeArr",0xfd3753df,"model.vo.SnapshotVO.getCodeArr","model/vo/SnapshotVO.hx",44,0x83a70611)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return this->codeArr;
}


HX_DEFINE_DYNAMIC_FUNC0(SnapshotVO_obj,getCodeArr,return )


SnapshotVO_obj::SnapshotVO_obj()
{
}

void SnapshotVO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SnapshotVO);
	HX_MARK_MEMBER_NAME(binary,"binary");
	HX_MARK_MEMBER_NAME(hex,"hex");
	HX_MARK_MEMBER_NAME(decimal,"decimal");
	HX_MARK_MEMBER_NAME(codeArr,"codeArr");
	HX_MARK_END_CLASS();
}

void SnapshotVO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(binary,"binary");
	HX_VISIT_MEMBER_NAME(hex,"hex");
	HX_VISIT_MEMBER_NAME(decimal,"decimal");
	HX_VISIT_MEMBER_NAME(codeArr,"codeArr");
}

Dynamic SnapshotVO_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { return hex; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"binary") ) { return binary; }
		if (HX_FIELD_EQ(inName,"getHex") ) { return getHex_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"decimal") ) { return decimal; }
		if (HX_FIELD_EQ(inName,"codeArr") ) { return codeArr; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBinary") ) { return getBinary_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDecimal") ) { return getDecimal_dyn(); }
		if (HX_FIELD_EQ(inName,"getCodeArr") ) { return getCodeArr_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createCodeArray") ) { return createCodeArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SnapshotVO_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { hex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"binary") ) { binary=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"decimal") ) { decimal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"codeArr") ) { codeArr=inValue.Cast< Array< bool > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SnapshotVO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("binary"));
	outFields->push(HX_CSTRING("hex"));
	outFields->push(HX_CSTRING("decimal"));
	outFields->push(HX_CSTRING("codeArr"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(SnapshotVO_obj,binary),HX_CSTRING("binary")},
	{hx::fsString,(int)offsetof(SnapshotVO_obj,hex),HX_CSTRING("hex")},
	{hx::fsInt,(int)offsetof(SnapshotVO_obj,decimal),HX_CSTRING("decimal")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(SnapshotVO_obj,codeArr),HX_CSTRING("codeArr")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("binary"),
	HX_CSTRING("hex"),
	HX_CSTRING("decimal"),
	HX_CSTRING("codeArr"),
	HX_CSTRING("createCodeArray"),
	HX_CSTRING("getBinary"),
	HX_CSTRING("getHex"),
	HX_CSTRING("getDecimal"),
	HX_CSTRING("getCodeArr"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SnapshotVO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SnapshotVO_obj::__mClass,"__mClass");
};

#endif

Class SnapshotVO_obj::__mClass;

void SnapshotVO_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.vo.SnapshotVO"), hx::TCanCast< SnapshotVO_obj> ,sStaticFields,sMemberFields,
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

void SnapshotVO_obj::__boot()
{
}

} // end namespace model
} // end namespace vo
