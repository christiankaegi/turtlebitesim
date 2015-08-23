#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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

Void InstructionVO_obj::__construct(int pointer,::String _asm_)
{
HX_STACK_FRAME("model.vo.InstructionVO","new",0xc2460789,"model.vo.InstructionVO.new","model/vo/InstructionVO.hx",17,0xd6b372a7)
HX_STACK_THIS(this)
HX_STACK_ARG(pointer,"pointer")
HX_STACK_ARG(_asm_,"asm")
{
	HX_STACK_LINE(18)
	this->code = HX_CSTRING("00000000");
	HX_STACK_LINE(19)
	this->pointer = pointer;
	HX_STACK_LINE(20)
	this->_asm_ = _asm_;
	HX_STACK_LINE(22)
	Array< ::String > t = _asm_.split(HX_CSTRING(" "));		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(23)
	this->asmOpcode = t->__get((int)0);
	HX_STACK_LINE(24)
	this->asmAddress = t->__get((int)1);
	HX_STACK_LINE(25)
	if (((this->asmAddress == null()))){
		HX_STACK_LINE(26)
		this->asmAddress = HX_CSTRING("<-----");
	}
	HX_STACK_LINE(28)
	this->assemble();
}
;
	return null();
}

//InstructionVO_obj::~InstructionVO_obj() { }

Dynamic InstructionVO_obj::__CreateEmpty() { return  new InstructionVO_obj; }
hx::ObjectPtr< InstructionVO_obj > InstructionVO_obj::__new(int pointer,::String _asm_)
{  hx::ObjectPtr< InstructionVO_obj > result = new InstructionVO_obj();
	result->__construct(pointer,_asm_);
	return result;}

Dynamic InstructionVO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InstructionVO_obj > result = new InstructionVO_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void InstructionVO_obj::assemble( ){
{
		HX_STACK_FRAME("model.vo.InstructionVO","assemble",0xbb63dd49,"model.vo.InstructionVO.assemble","model/vo/InstructionVO.hx",31,0xd6b372a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			::String _g = this->asmOpcode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(32)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("NOP"))){
				HX_STACK_LINE(34)
				this->description = HX_CSTRING("\xc2""\xab""No Operation\xc2""\xbb"" Mache nichts (Leerlauf)");
				HX_STACK_LINE(35)
				this->codeOpcode = HX_CSTRING("0000");
				HX_STACK_LINE(36)
				this->codeAddress = HX_CSTRING("0000");
			}
			else if (  ( _switch_1==HX_CSTRING("MOV"))){
				HX_STACK_LINE(38)
				this->description = (HX_CSTRING("\xc2""\xab""Move\xc2""\xbb"" Bewege den Wert des Akkumulators in das Register ") + this->asmAddress);
				HX_STACK_LINE(39)
				this->codeOpcode = HX_CSTRING("0001");
				HX_STACK_LINE(40)
				if (((this->asmAddress == HX_CSTRING("R1")))){
					HX_STACK_LINE(41)
					this->codeAddress = HX_CSTRING("0100");
				}
				else{
					HX_STACK_LINE(42)
					if (((this->asmAddress == HX_CSTRING("R2")))){
						HX_STACK_LINE(43)
						this->codeAddress = HX_CSTRING("1000");
					}
				}
			}
			else if (  ( _switch_1==HX_CSTRING("LDI"))){
				HX_STACK_LINE(46)
				this->description = (HX_CSTRING("\xc2""\xab""Load Immediate\xc2""\xbb"" Initialisiere den Akkumulator mit ") + this->asmAddress);
				HX_STACK_LINE(47)
				this->codeOpcode = HX_CSTRING("0010");
				HX_STACK_LINE(48)
				Dynamic _g1 = ::Std_obj::parseInt(this->asmAddress);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(48)
				::String _g11 = ::utilities::NumberFormat_obj::decimalToBinary(_g1);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(48)
				this->codeAddress = _g11;
			}
			else if (  ( _switch_1==HX_CSTRING("ADD"))){
				HX_STACK_LINE(50)
				this->description = HX_CSTRING("\xc2""\xab""Add\xc2""\xbb"" Addiere den Wert des Registers R1 zum Wert des Akkumulators");
				HX_STACK_LINE(51)
				this->codeOpcode = HX_CSTRING("0011");
				HX_STACK_LINE(52)
				this->codeAddress = HX_CSTRING("0000");
			}
			else if (  ( _switch_1==HX_CSTRING("SUB"))){
				HX_STACK_LINE(54)
				this->description = HX_CSTRING("\xc2""\xab""Subtract\xc2""\xbb"" Subtrahiere den Wert des Registers R1 vom Wert des Akkumulators");
				HX_STACK_LINE(55)
				this->codeOpcode = HX_CSTRING("0011");
				HX_STACK_LINE(56)
				this->codeAddress = HX_CSTRING("0001");
			}
			else if (  ( _switch_1==HX_CSTRING("INC"))){
				HX_STACK_LINE(58)
				this->description = HX_CSTRING("\xc2""\xab""Increment\xc2""\xbb"" Erh\xc3""\xb6""he den Wert im Akkumulator um 1");
				HX_STACK_LINE(59)
				this->codeOpcode = HX_CSTRING("0011");
				HX_STACK_LINE(60)
				this->codeAddress = HX_CSTRING("0010");
			}
			else if (  ( _switch_1==HX_CSTRING("DEC"))){
				HX_STACK_LINE(62)
				this->description = HX_CSTRING("\xc2""\xab""Decrement\xc2""\xbb"" Erniedrige den Wert im Akkumulator um 1");
				HX_STACK_LINE(63)
				this->codeOpcode = HX_CSTRING("0011");
				HX_STACK_LINE(64)
				this->codeAddress = HX_CSTRING("0011");
			}
			else if (  ( _switch_1==HX_CSTRING("SDA"))){
				HX_STACK_LINE(66)
				this->description = (HX_CSTRING("\xc2""\xab""Store Data\xc2""\xbb"" Speichere den Wert des Akkumulators im RAM in Zelle ") + this->asmAddress);
				HX_STACK_LINE(67)
				this->codeOpcode = HX_CSTRING("0100");
				HX_STACK_LINE(68)
				Dynamic _g2 = ::Std_obj::parseInt(this->asmAddress);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(68)
				::String _g3 = ::utilities::NumberFormat_obj::decimalToBinary(_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(68)
				this->codeAddress = _g3;
			}
			else if (  ( _switch_1==HX_CSTRING("LDA"))){
				HX_STACK_LINE(70)
				this->description = ((HX_CSTRING("\xc2""\xab""Load Data\xc2""\xbb"" Lade den Wert von Zelle ") + this->asmAddress) + HX_CSTRING(" im Ram in den Akkumulator"));
				HX_STACK_LINE(71)
				this->codeOpcode = HX_CSTRING("0101");
				HX_STACK_LINE(72)
				Dynamic _g4 = ::Std_obj::parseInt(this->asmAddress);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(72)
				::String _g5 = ::utilities::NumberFormat_obj::decimalToBinary(_g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(72)
				this->codeAddress = _g5;
			}
			else if (  ( _switch_1==HX_CSTRING("INP"))){
				HX_STACK_LINE(74)
				if (((this->asmAddress == HX_CSTRING("A")))){
					HX_STACK_LINE(75)
					this->description = HX_CSTRING("\xc2""\xab""Input\xc2""\xbb"" Lade den ersten Wert vom Keyboardbuffer in den Akkumulator");
					HX_STACK_LINE(76)
					this->codeAddress = HX_CSTRING("0011");
				}
				else{
					HX_STACK_LINE(78)
					this->description = (HX_CSTRING("\xc2""\xab""Input\xc2""\xbb"" Lade den ersten Wert vom Keyboardbuffer in das Register ") + this->asmAddress);
					HX_STACK_LINE(79)
					if (((this->asmAddress == HX_CSTRING("R1")))){
						HX_STACK_LINE(80)
						this->codeAddress = HX_CSTRING("0111");
					}
					else{
						HX_STACK_LINE(81)
						if (((this->asmAddress == HX_CSTRING("R2")))){
							HX_STACK_LINE(82)
							this->codeAddress = HX_CSTRING("1011");
						}
					}
				}
				HX_STACK_LINE(85)
				this->codeOpcode = HX_CSTRING("0110");
			}
			else if (  ( _switch_1==HX_CSTRING("OUT"))){
				HX_STACK_LINE(87)
				if (((this->asmAddress == HX_CSTRING("A")))){
					HX_STACK_LINE(88)
					this->description = HX_CSTRING("\xc2""\xab""Output\xc2""\xbb"" Schicke den Wert des Akkumulators zum Display");
					HX_STACK_LINE(89)
					this->codeAddress = HX_CSTRING("0000");
				}
				else{
					HX_STACK_LINE(91)
					this->description = ((HX_CSTRING("\xc2""\xab""Output\xc2""\xbb"" Schicke den Wert des Registers ") + this->asmAddress) + HX_CSTRING(" zum Display"));
					HX_STACK_LINE(92)
					if (((this->asmAddress == HX_CSTRING("R1")))){
						HX_STACK_LINE(93)
						this->codeAddress = HX_CSTRING("0110");
					}
					else{
						HX_STACK_LINE(94)
						if (((this->asmAddress == HX_CSTRING("R2")))){
							HX_STACK_LINE(95)
							this->codeAddress = HX_CSTRING("1001");
						}
					}
				}
				HX_STACK_LINE(98)
				this->codeOpcode = HX_CSTRING("0111");
			}
			else if (  ( _switch_1==HX_CSTRING("JE"))){
				HX_STACK_LINE(100)
				this->description = (HX_CSTRING("\xc2""\xab""Jump not equal\xc2""\xbb"" Falls Akku gleich Register R1, springe zu Codezeile ") + this->asmAddress);
				HX_STACK_LINE(101)
				this->codeOpcode = HX_CSTRING("1000");
				HX_STACK_LINE(102)
				Dynamic _g6 = ::Std_obj::parseInt(this->asmAddress);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(102)
				::String _g7 = ::utilities::NumberFormat_obj::decimalToBinary(_g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(102)
				this->codeAddress = _g7;
			}
			else if (  ( _switch_1==HX_CSTRING("JNE"))){
				HX_STACK_LINE(104)
				this->description = (HX_CSTRING("\xc2""\xab""Jump not equal\xc2""\xbb"" Falls Akku ungleich Register R1, springe zu Codezeile ") + this->asmAddress);
				HX_STACK_LINE(105)
				this->codeOpcode = HX_CSTRING("1001");
				HX_STACK_LINE(106)
				Dynamic _g8 = ::Std_obj::parseInt(this->asmAddress);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(106)
				::String _g9 = ::utilities::NumberFormat_obj::decimalToBinary(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(106)
				this->codeAddress = _g9;
			}
			else if (  ( _switch_1==HX_CSTRING("JMP"))){
				HX_STACK_LINE(108)
				this->description = (HX_CSTRING("\xc2""\xab""Jump\xc2""\xbb"" Springe zu Codezeile ") + this->asmAddress);
				HX_STACK_LINE(109)
				this->codeOpcode = HX_CSTRING("1010");
				HX_STACK_LINE(110)
				Dynamic _g10 = ::Std_obj::parseInt(this->asmAddress);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(110)
				::String _g11 = ::utilities::NumberFormat_obj::decimalToBinary(_g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(110)
				this->codeAddress = _g11;
			}
		}
		HX_STACK_LINE(112)
		this->hexOpcode = ::utilities::NumberFormat_obj::binaryToDecimal(this->codeOpcode)->hex;
		HX_STACK_LINE(113)
		this->hexAddress = ::utilities::NumberFormat_obj::binaryToDecimal(this->codeAddress)->hex;
		HX_STACK_LINE(114)
		this->hex = (this->hexOpcode + this->hexAddress);
		HX_STACK_LINE(115)
		this->code = (this->codeOpcode + this->codeAddress);
		HX_STACK_LINE(116)
		Array< bool > _g12 = ::utilities::NumberFormat_obj::binaryToArray(this->code,null());		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(116)
		this->codeArr = _g12;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InstructionVO_obj,assemble,(void))


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
	case 8:
		if (HX_FIELD_EQ(inName,"assemble") ) { return assemble_dyn(); }
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
	HX_CSTRING("assemble"),
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
