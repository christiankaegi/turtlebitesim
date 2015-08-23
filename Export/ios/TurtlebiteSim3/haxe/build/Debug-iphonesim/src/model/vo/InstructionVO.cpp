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

Void InstructionVO_obj::__construct(int pointer,::String _asm_,::String code)
{
HX_STACK_FRAME("model.vo.InstructionVO","new",0xc2460789,"model.vo.InstructionVO.new","model/vo/InstructionVO.hx",17,0xd6b372a7)
HX_STACK_THIS(this)
HX_STACK_ARG(pointer,"pointer")
HX_STACK_ARG(_asm_,"asm")
HX_STACK_ARG(code,"code")
{
	HX_STACK_LINE(19)
	this->pointer = pointer;
	HX_STACK_LINE(20)
	this->_asm_ = _asm_;
	HX_STACK_LINE(21)
	Array< ::String > t = _asm_.split(HX_CSTRING(" "));		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(22)
	this->asmOpcode = t->__get((int)0);
	HX_STACK_LINE(23)
	this->asmAddress = t->__get((int)1);
	HX_STACK_LINE(24)
	if (((this->asmAddress == null()))){
		HX_STACK_LINE(25)
		this->asmAddress = HX_CSTRING("<-----");
	}
	HX_STACK_LINE(27)
	this->code = code;
	HX_STACK_LINE(28)
	::String _g = code.substr((int)0,(int)4);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	this->codeOpcode = _g;
	HX_STACK_LINE(29)
	::String _g1 = code.substr((int)4,(int)4);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	this->codeAddress = _g1;
	HX_STACK_LINE(30)
	this->hexOpcode = ::utilities::NumberFormat_obj::binaryToDecimal(this->codeOpcode)->hex;
	HX_STACK_LINE(31)
	this->hexAddress = ::utilities::NumberFormat_obj::binaryToDecimal(this->codeAddress)->hex;
	HX_STACK_LINE(32)
	this->hex = (this->hexOpcode + this->hexAddress);
	HX_STACK_LINE(33)
	Array< bool > _g2 = ::utilities::NumberFormat_obj::binaryToArray(code,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(33)
	this->codeArr = _g2;
	HX_STACK_LINE(34)
	::String _g3 = this->getDescription(this->asmOpcode,this->asmAddress);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(34)
	this->description = _g3;
}
;
	return null();
}

//InstructionVO_obj::~InstructionVO_obj() { }

Dynamic InstructionVO_obj::__CreateEmpty() { return  new InstructionVO_obj; }
hx::ObjectPtr< InstructionVO_obj > InstructionVO_obj::__new(int pointer,::String _asm_,::String code)
{  hx::ObjectPtr< InstructionVO_obj > result = new InstructionVO_obj();
	result->__construct(pointer,_asm_,code);
	return result;}

Dynamic InstructionVO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InstructionVO_obj > result = new InstructionVO_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String InstructionVO_obj::getDescription( ::String opcode,::String address){
	HX_STACK_FRAME("model.vo.InstructionVO","getDescription",0x0e3f137d,"model.vo.InstructionVO.getDescription","model/vo/InstructionVO.hx",37,0xd6b372a7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(opcode,"opcode")
	HX_STACK_ARG(address,"address")
	HX_STACK_LINE(38)
	::String t = HX_CSTRING("");		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(39)
	::String _switch_1 = (opcode);
	if (  ( _switch_1==HX_CSTRING("NOP"))){
		HX_STACK_LINE(41)
		t = HX_CSTRING("\xc2""\xab""No Operation\xc2""\xbb"" Mache nichts (Leerlauf)");
	}
	else if (  ( _switch_1==HX_CSTRING("MOV"))){
		HX_STACK_LINE(43)
		t = (HX_CSTRING("\xc2""\xab""Move\xc2""\xbb"" Bewege den Wert des Akkumulators in das Register ") + address);
	}
	else if (  ( _switch_1==HX_CSTRING("LDI"))){
		HX_STACK_LINE(45)
		t = (HX_CSTRING("\xc2""\xab""Load Immediate\xc2""\xbb"" Initialisiere den Akkumulator mit ") + address);
	}
	else if (  ( _switch_1==HX_CSTRING("ADD"))){
		HX_STACK_LINE(47)
		t = HX_CSTRING("\xc2""\xab""Add\xc2""\xbb"" Addiere den Wert des Registers R1 zum Wert des Akkumulators");
	}
	else if (  ( _switch_1==HX_CSTRING("SUB"))){
		HX_STACK_LINE(49)
		t = HX_CSTRING("\xc2""\xab""Subtract\xc2""\xbb"" Subtrahiere den Wert des Registers R1 vom Wert des Akkumulators");
	}
	else if (  ( _switch_1==HX_CSTRING("INC"))){
		HX_STACK_LINE(51)
		t = HX_CSTRING("\xc2""\xab""Increment\xc2""\xbb"" Erh\xc3""\xb6""he den Wert im Akkumulator um 1");
	}
	else if (  ( _switch_1==HX_CSTRING("DEC"))){
		HX_STACK_LINE(53)
		t = HX_CSTRING("\xc2""\xab""Decrement\xc2""\xbb"" Erniedrige den Wert im Akkumulator um 1");
	}
	else if (  ( _switch_1==HX_CSTRING("SDA"))){
		HX_STACK_LINE(55)
		t = (HX_CSTRING("\xc2""\xab""Store Data\xc2""\xbb"" Speichere den Wert des Akkumulators im RAM in Zelle ") + address);
	}
	else if (  ( _switch_1==HX_CSTRING("LDA"))){
		HX_STACK_LINE(57)
		t = ((HX_CSTRING("\xc2""\xab""Load Data\xc2""\xbb"" Lade den Wert von Zelle ") + address) + HX_CSTRING(" im Ram in den Akkumulator"));
	}
	else if (  ( _switch_1==HX_CSTRING("INP"))){
		HX_STACK_LINE(59)
		if (((address == HX_CSTRING("A")))){
			HX_STACK_LINE(60)
			t = HX_CSTRING("\xc2""\xab""Input\xc2""\xbb"" Lade den ersten Wert vom Keyboardbuffer in den Akkumulator");
		}
		else{
			HX_STACK_LINE(62)
			t = (HX_CSTRING("\xc2""\xab""Input\xc2""\xbb"" Lade den ersten Wert vom Keyboardbuffer in das Register ") + address);
		}
	}
	else if (  ( _switch_1==HX_CSTRING("OUT"))){
		HX_STACK_LINE(65)
		if (((address == HX_CSTRING("A")))){
			HX_STACK_LINE(66)
			t = HX_CSTRING("\xc2""\xab""Output\xc2""\xbb"" Schicke den Wert des Akkumulators zum Display");
		}
		else{
			HX_STACK_LINE(68)
			t = ((HX_CSTRING("\xc2""\xab""Output\xc2""\xbb"" Schicke den Wert des Registers ") + address) + HX_CSTRING(" zum Display"));
		}
	}
	else if (  ( _switch_1==HX_CSTRING("JE"))){
		HX_STACK_LINE(71)
		t = (HX_CSTRING("\xc2""\xab""Jump not equal\xc2""\xbb"" Falls Akku gleich Register R1, springe zu Codezeile ") + address);
	}
	else if (  ( _switch_1==HX_CSTRING("JNE"))){
		HX_STACK_LINE(73)
		t = (HX_CSTRING("\xc2""\xab""Jump not equal\xc2""\xbb"" Falls Akku ungleich Register R1, springe zu Codezeile ") + address);
	}
	else if (  ( _switch_1==HX_CSTRING("JMP"))){
		HX_STACK_LINE(75)
		t = (HX_CSTRING("\xc2""\xab""Jump\xc2""\xbb"" Springe zu Codezeile ") + address);
	}
	HX_STACK_LINE(77)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC2(InstructionVO_obj,getDescription,return )


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
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDescription") ) { return getDescription_dyn(); }
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
	HX_CSTRING("getDescription"),
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
