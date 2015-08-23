#include <hxcpp.h>

#ifndef INCLUDED_model_vo_DecHexVO
#include <model/vo/DecHexVO.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
#endif
#ifndef INCLUDED_utilities_NumberFormat
#include <utilities/NumberFormat.h>
#endif
namespace model{
namespace vo{

Void InstructionVO_obj::__construct(int pointer,::String _asm_,::String code,::String description)
{
HX_STACK_FRAME("model.vo.InstructionVO","new",0xc2460789,"model.vo.InstructionVO.new","model/vo/InstructionVO.hx",17,0xd6b372a7)
HX_STACK_THIS(this)
HX_STACK_ARG(pointer,"pointer")
HX_STACK_ARG(_asm_,"asm")
HX_STACK_ARG(code,"code")
HX_STACK_ARG(description,"description")
{
	HX_STACK_LINE(18)
	this->pointer = pointer;
	HX_STACK_LINE(19)
	this->_asm_ = _asm_;
	HX_STACK_LINE(20)
	Array< ::String > t = _asm_.split(HX_CSTRING(" "));		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(21)
	this->asmOpcode = t->__get((int)0);
	HX_STACK_LINE(22)
	this->asmAddress = t->__get((int)1);
	HX_STACK_LINE(23)
	if (((this->asmAddress == null()))){
		HX_STACK_LINE(24)
		this->asmAddress = HX_CSTRING("<-----");
	}
	HX_STACK_LINE(26)
	this->code = code;
	HX_STACK_LINE(27)
	::String _g = code.substr((int)0,(int)4);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(27)
	this->codeOpcode = _g;
	HX_STACK_LINE(28)
	::String _g1 = code.substr((int)4,(int)4);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(28)
	this->codeAddress = _g1;
	HX_STACK_LINE(29)
	this->hexOpcode = ::utilities::NumberFormat_obj::binaryToDecimal(this->codeOpcode)->hex;
	HX_STACK_LINE(30)
	this->hexAddress = ::utilities::NumberFormat_obj::binaryToDecimal(this->codeAddress)->hex;
	HX_STACK_LINE(31)
	this->hex = (this->hexOpcode + this->hexAddress);
	HX_STACK_LINE(32)
	this->description = description;
	HX_STACK_LINE(33)
	Array< bool > _g2 = ::utilities::NumberFormat_obj::binaryToArray(code,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(33)
	this->codeArr = _g2;
}
;
	return null();
}

//InstructionVO_obj::~InstructionVO_obj() { }

Dynamic InstructionVO_obj::__CreateEmpty() { return  new InstructionVO_obj; }
hx::ObjectPtr< InstructionVO_obj > InstructionVO_obj::__new(int pointer,::String _asm_,::String code,::String description)
{  hx::ObjectPtr< InstructionVO_obj > result = new InstructionVO_obj();
	result->__construct(pointer,_asm_,code,description);
	return result;}

Dynamic InstructionVO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InstructionVO_obj > result = new InstructionVO_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


InstructionVO_obj::InstructionVO_obj()
{
}

void InstructionVO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InstructionVO);
	HX_MARK_MEMBER_NAME(pointer,"pointer");
	HX_MARK_MEMBER_NAME(_asm_,"asm");
	HX_MARK_MEMBER_NAME(asmOpcode,"asmOpcode");
	HX_MARK_MEMBER_NAME(asmAddress,"asmAddress");
	HX_MARK_MEMBER_NAME(code,"code");
	HX_MARK_MEMBER_NAME(codeOpcode,"codeOpcode");
	HX_MARK_MEMBER_NAME(codeAddress,"codeAddress");
	HX_MARK_MEMBER_NAME(codeArr,"codeArr");
	HX_MARK_MEMBER_NAME(hex,"hex");
	HX_MARK_MEMBER_NAME(hexOpcode,"hexOpcode");
	HX_MARK_MEMBER_NAME(hexAddress,"hexAddress");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_END_CLASS();
}

void InstructionVO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pointer,"pointer");
	HX_VISIT_MEMBER_NAME(_asm_,"asm");
	HX_VISIT_MEMBER_NAME(asmOpcode,"asmOpcode");
	HX_VISIT_MEMBER_NAME(asmAddress,"asmAddress");
	HX_VISIT_MEMBER_NAME(code,"code");
	HX_VISIT_MEMBER_NAME(codeOpcode,"codeOpcode");
	HX_VISIT_MEMBER_NAME(codeAddress,"codeAddress");
	HX_VISIT_MEMBER_NAME(codeArr,"codeArr");
	HX_VISIT_MEMBER_NAME(hex,"hex");
	HX_VISIT_MEMBER_NAME(hexOpcode,"hexOpcode");
	HX_VISIT_MEMBER_NAME(hexAddress,"hexAddress");
	HX_VISIT_MEMBER_NAME(description,"description");
}

Dynamic InstructionVO_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"asm") ) { return _asm_; }
		if (HX_FIELD_EQ(inName,"hex") ) { return hex; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { return code; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pointer") ) { return pointer; }
		if (HX_FIELD_EQ(inName,"codeArr") ) { return codeArr; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"asmOpcode") ) { return asmOpcode; }
		if (HX_FIELD_EQ(inName,"hexOpcode") ) { return hexOpcode; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"asmAddress") ) { return asmAddress; }
		if (HX_FIELD_EQ(inName,"codeOpcode") ) { return codeOpcode; }
		if (HX_FIELD_EQ(inName,"hexAddress") ) { return hexAddress; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"codeAddress") ) { return codeAddress; }
		if (HX_FIELD_EQ(inName,"description") ) { return description; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InstructionVO_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"asm") ) { _asm_=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hex") ) { hex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pointer") ) { pointer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"codeArr") ) { codeArr=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"asmOpcode") ) { asmOpcode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hexOpcode") ) { hexOpcode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"asmAddress") ) { asmAddress=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"codeOpcode") ) { codeOpcode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hexAddress") ) { hexAddress=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"codeAddress") ) { codeAddress=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InstructionVO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pointer"));
	outFields->push(HX_CSTRING("asm"));
	outFields->push(HX_CSTRING("asmOpcode"));
	outFields->push(HX_CSTRING("asmAddress"));
	outFields->push(HX_CSTRING("code"));
	outFields->push(HX_CSTRING("codeOpcode"));
	outFields->push(HX_CSTRING("codeAddress"));
	outFields->push(HX_CSTRING("codeArr"));
	outFields->push(HX_CSTRING("hex"));
	outFields->push(HX_CSTRING("hexOpcode"));
	outFields->push(HX_CSTRING("hexAddress"));
	outFields->push(HX_CSTRING("description"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(InstructionVO_obj,pointer),HX_CSTRING("pointer")},
	{hx::fsString,(int)offsetof(InstructionVO_obj,_asm_),HX_CSTRING("asm")},
	{hx::fsString,(int)offsetof(InstructionVO_obj,asmOpcode),HX_CSTRING("asmOpcode")},
	{hx::fsString,(int)offsetof(InstructionVO_obj,asmAddress),HX_CSTRING("asmAddress")},
	{hx::fsString,(int)offsetof(InstructionVO_obj,code),HX_CSTRING("code")},
	{hx::fsString,(int)offsetof(InstructionVO_obj,codeOpcode),HX_CSTRING("codeOpcode")},
	{hx::fsString,(int)offsetof(InstructionVO_obj,codeAddress),HX_CSTRING("codeAddress")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(InstructionVO_obj,codeArr),HX_CSTRING("codeArr")},
	{hx::fsString,(int)offsetof(InstructionVO_obj,hex),HX_CSTRING("hex")},
	{hx::fsString,(int)offsetof(InstructionVO_obj,hexOpcode),HX_CSTRING("hexOpcode")},
	{hx::fsString,(int)offsetof(InstructionVO_obj,hexAddress),HX_CSTRING("hexAddress")},
	{hx::fsString,(int)offsetof(InstructionVO_obj,description),HX_CSTRING("description")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pointer"),
	HX_CSTRING("asm"),
	HX_CSTRING("asmOpcode"),
	HX_CSTRING("asmAddress"),
	HX_CSTRING("code"),
	HX_CSTRING("codeOpcode"),
	HX_CSTRING("codeAddress"),
	HX_CSTRING("codeArr"),
	HX_CSTRING("hex"),
	HX_CSTRING("hexOpcode"),
	HX_CSTRING("hexAddress"),
	HX_CSTRING("description"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InstructionVO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InstructionVO_obj::__mClass,"__mClass");
};

#endif

Class InstructionVO_obj::__mClass;

void InstructionVO_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.vo.InstructionVO"), hx::TCanCast< InstructionVO_obj> ,sStaticFields,sMemberFields,
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

void InstructionVO_obj::__boot()
{
}

} // end namespace model
} // end namespace vo
