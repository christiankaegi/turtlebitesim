#include <hxcpp.h>

#ifndef INCLUDED_model_data_ProgramData
#include <model/data/ProgramData.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
#endif
namespace model{
namespace data{

Void ProgramData_obj::__construct()
{
HX_STACK_FRAME("model.data.ProgramData","new",0xb4473541,"model.data.ProgramData.new","model/data/ProgramData.hx",13,0x726d31af)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(15)
	this->programPointer = (int)0;
	HX_STACK_LINE(16)
	this->instructionPointer = (int)0;
	HX_STACK_LINE(17)
	::model::vo::InstructionVO _g = ::model::vo::InstructionVO_obj::__new((int)0,HX_CSTRING("NOP"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(17)
	this->manualInstruction = _g;
	HX_STACK_LINE(18)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(18)
	this->programs = _g1;
	HX_STACK_LINE(20)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(20)
	this->instructions = _g2;
	HX_STACK_LINE(21)
	i = (int)0;
	HX_STACK_LINE(22)
	int _g3 = (i)++;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(22)
	::model::vo::InstructionVO _g4 = ::model::vo::InstructionVO_obj::__new(_g3,HX_CSTRING("LDI 2"));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(22)
	this->instructions->push(_g4);
	HX_STACK_LINE(23)
	int _g5 = (i)++;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(23)
	::model::vo::InstructionVO _g6 = ::model::vo::InstructionVO_obj::__new(_g5,HX_CSTRING("MOV R1"));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(23)
	this->instructions->push(_g6);
	HX_STACK_LINE(24)
	int _g7 = (i)++;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(24)
	::model::vo::InstructionVO _g8 = ::model::vo::InstructionVO_obj::__new(_g7,HX_CSTRING("LDI 1"));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(24)
	this->instructions->push(_g8);
	HX_STACK_LINE(25)
	int _g9 = (i)++;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(25)
	::model::vo::InstructionVO _g10 = ::model::vo::InstructionVO_obj::__new(_g9,HX_CSTRING("ADD"));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(25)
	this->instructions->push(_g10);
	HX_STACK_LINE(26)
	int _g11 = (i)++;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(26)
	::model::vo::InstructionVO _g12 = ::model::vo::InstructionVO_obj::__new(_g11,HX_CSTRING("SDA 0"));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(26)
	this->instructions->push(_g12);
	HX_STACK_LINE(27)
	int _g13 = (i)++;		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(27)
	::model::vo::InstructionVO _g14 = ::model::vo::InstructionVO_obj::__new(_g13,HX_CSTRING("OUT A"));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(27)
	this->instructions->push(_g14);
	HX_STACK_LINE(28)
	int _g15 = (i)++;		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(28)
	::model::vo::InstructionVO _g16 = ::model::vo::InstructionVO_obj::__new(_g15,HX_CSTRING("LDI 2"));		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(28)
	this->instructions->push(_g16);
	HX_STACK_LINE(29)
	int _g17 = (i)++;		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(29)
	::model::vo::InstructionVO _g18 = ::model::vo::InstructionVO_obj::__new(_g17,HX_CSTRING("ADD"));		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(29)
	this->instructions->push(_g18);
	HX_STACK_LINE(30)
	int _g19 = (i)++;		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(30)
	::model::vo::InstructionVO _g20 = ::model::vo::InstructionVO_obj::__new(_g19,HX_CSTRING("SDA 1"));		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(30)
	this->instructions->push(_g20);
	HX_STACK_LINE(31)
	int _g21 = (i)++;		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(31)
	::model::vo::InstructionVO _g22 = ::model::vo::InstructionVO_obj::__new(_g21,HX_CSTRING("OUT A"));		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(31)
	this->instructions->push(_g22);
	HX_STACK_LINE(32)
	int _g23 = (i)++;		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(32)
	::model::vo::InstructionVO _g24 = ::model::vo::InstructionVO_obj::__new(_g23,HX_CSTRING("LDA 0"));		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(32)
	this->instructions->push(_g24);
	HX_STACK_LINE(33)
	int _g25 = (i)++;		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(33)
	::model::vo::InstructionVO _g26 = ::model::vo::InstructionVO_obj::__new(_g25,HX_CSTRING("SUB"));		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(33)
	this->instructions->push(_g26);
	HX_STACK_LINE(34)
	int _g27 = (i)++;		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(34)
	::model::vo::InstructionVO _g28 = ::model::vo::InstructionVO_obj::__new(_g27,HX_CSTRING("LDA 1"));		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(34)
	this->instructions->push(_g28);
	HX_STACK_LINE(35)
	int _g29 = (i)++;		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(35)
	::model::vo::InstructionVO _g30 = ::model::vo::InstructionVO_obj::__new(_g29,HX_CSTRING("SUB"));		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(35)
	this->instructions->push(_g30);
	HX_STACK_LINE(36)
	int _g31 = (i)++;		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(36)
	::model::vo::InstructionVO _g32 = ::model::vo::InstructionVO_obj::__new(_g31,HX_CSTRING("OUT A"));		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(36)
	this->instructions->push(_g32);
	HX_STACK_LINE(37)
	int _g33 = (i)++;		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(37)
	::model::vo::InstructionVO _g34 = ::model::vo::InstructionVO_obj::__new(_g33,HX_CSTRING("MOV R2"));		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(37)
	this->instructions->push(_g34);
	HX_STACK_LINE(38)
	this->programs[(int)0] = this->instructions;
	HX_STACK_LINE(40)
	Array< ::Dynamic > _g35 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(40)
	this->instructions = _g35;
	HX_STACK_LINE(41)
	i = (int)0;
	HX_STACK_LINE(43)
	int _g36 = (i)++;		HX_STACK_VAR(_g36,"_g36");
	HX_STACK_LINE(43)
	::model::vo::InstructionVO _g37 = ::model::vo::InstructionVO_obj::__new(_g36,HX_CSTRING("LDI 13"));		HX_STACK_VAR(_g37,"_g37");
	HX_STACK_LINE(43)
	this->instructions->push(_g37);
	HX_STACK_LINE(44)
	int _g38 = (i)++;		HX_STACK_VAR(_g38,"_g38");
	HX_STACK_LINE(44)
	::model::vo::InstructionVO _g39 = ::model::vo::InstructionVO_obj::__new(_g38,HX_CSTRING("OUT A"));		HX_STACK_VAR(_g39,"_g39");
	HX_STACK_LINE(44)
	this->instructions->push(_g39);
	HX_STACK_LINE(46)
	int _g40 = (i)++;		HX_STACK_VAR(_g40,"_g40");
	HX_STACK_LINE(46)
	::model::vo::InstructionVO _g41 = ::model::vo::InstructionVO_obj::__new(_g40,HX_CSTRING("LDI 4"));		HX_STACK_VAR(_g41,"_g41");
	HX_STACK_LINE(46)
	this->instructions->push(_g41);
	HX_STACK_LINE(48)
	int _g42 = (i)++;		HX_STACK_VAR(_g42,"_g42");
	HX_STACK_LINE(48)
	::model::vo::InstructionVO _g43 = ::model::vo::InstructionVO_obj::__new(_g42,HX_CSTRING("MOV R1"));		HX_STACK_VAR(_g43,"_g43");
	HX_STACK_LINE(48)
	this->instructions->push(_g43);
	HX_STACK_LINE(49)
	int _g44 = (i)++;		HX_STACK_VAR(_g44,"_g44");
	HX_STACK_LINE(49)
	::model::vo::InstructionVO _g45 = ::model::vo::InstructionVO_obj::__new(_g44,HX_CSTRING("OUT A"));		HX_STACK_VAR(_g45,"_g45");
	HX_STACK_LINE(49)
	this->instructions->push(_g45);
	HX_STACK_LINE(51)
	int _g46 = (i)++;		HX_STACK_VAR(_g46,"_g46");
	HX_STACK_LINE(51)
	::model::vo::InstructionVO _g47 = ::model::vo::InstructionVO_obj::__new(_g46,HX_CSTRING("LDI 9"));		HX_STACK_VAR(_g47,"_g47");
	HX_STACK_LINE(51)
	this->instructions->push(_g47);
	HX_STACK_LINE(52)
	int _g48 = (i)++;		HX_STACK_VAR(_g48,"_g48");
	HX_STACK_LINE(52)
	::model::vo::InstructionVO _g49 = ::model::vo::InstructionVO_obj::__new(_g48,HX_CSTRING("OUT A"));		HX_STACK_VAR(_g49,"_g49");
	HX_STACK_LINE(52)
	this->instructions->push(_g49);
	HX_STACK_LINE(54)
	int _g50 = (i)++;		HX_STACK_VAR(_g50,"_g50");
	HX_STACK_LINE(54)
	::model::vo::InstructionVO _g51 = ::model::vo::InstructionVO_obj::__new(_g50,HX_CSTRING("LDI 2"));		HX_STACK_VAR(_g51,"_g51");
	HX_STACK_LINE(54)
	this->instructions->push(_g51);
	HX_STACK_LINE(55)
	int _g52 = (i)++;		HX_STACK_VAR(_g52,"_g52");
	HX_STACK_LINE(55)
	::model::vo::InstructionVO _g53 = ::model::vo::InstructionVO_obj::__new(_g52,HX_CSTRING("OUT A"));		HX_STACK_VAR(_g53,"_g53");
	HX_STACK_LINE(55)
	this->instructions->push(_g53);
	HX_STACK_LINE(57)
	int _g54 = (i)++;		HX_STACK_VAR(_g54,"_g54");
	HX_STACK_LINE(57)
	::model::vo::InstructionVO _g55 = ::model::vo::InstructionVO_obj::__new(_g54,HX_CSTRING("LDI 10"));		HX_STACK_VAR(_g55,"_g55");
	HX_STACK_LINE(57)
	this->instructions->push(_g55);
	HX_STACK_LINE(58)
	int _g56 = (i)++;		HX_STACK_VAR(_g56,"_g56");
	HX_STACK_LINE(58)
	::model::vo::InstructionVO _g57 = ::model::vo::InstructionVO_obj::__new(_g56,HX_CSTRING("OUT A"));		HX_STACK_VAR(_g57,"_g57");
	HX_STACK_LINE(58)
	this->instructions->push(_g57);
	HX_STACK_LINE(60)
	int _g58 = (i)++;		HX_STACK_VAR(_g58,"_g58");
	HX_STACK_LINE(60)
	::model::vo::InstructionVO _g59 = ::model::vo::InstructionVO_obj::__new(_g58,HX_CSTRING("LDI 11"));		HX_STACK_VAR(_g59,"_g59");
	HX_STACK_LINE(60)
	this->instructions->push(_g59);
	HX_STACK_LINE(61)
	int _g60 = (i)++;		HX_STACK_VAR(_g60,"_g60");
	HX_STACK_LINE(61)
	::model::vo::InstructionVO _g61 = ::model::vo::InstructionVO_obj::__new(_g60,HX_CSTRING("OUT A"));		HX_STACK_VAR(_g61,"_g61");
	HX_STACK_LINE(61)
	this->instructions->push(_g61);
	HX_STACK_LINE(63)
	int _g62 = (i)++;		HX_STACK_VAR(_g62,"_g62");
	HX_STACK_LINE(63)
	::model::vo::InstructionVO _g63 = ::model::vo::InstructionVO_obj::__new(_g62,HX_CSTRING("OUT R1"));		HX_STACK_VAR(_g63,"_g63");
	HX_STACK_LINE(63)
	this->instructions->push(_g63);
	HX_STACK_LINE(65)
	int _g64 = (i)++;		HX_STACK_VAR(_g64,"_g64");
	HX_STACK_LINE(65)
	::model::vo::InstructionVO _g65 = ::model::vo::InstructionVO_obj::__new(_g64,HX_CSTRING("LDI 14"));		HX_STACK_VAR(_g65,"_g65");
	HX_STACK_LINE(65)
	this->instructions->push(_g65);
	HX_STACK_LINE(66)
	int _g66 = (i)++;		HX_STACK_VAR(_g66,"_g66");
	HX_STACK_LINE(66)
	::model::vo::InstructionVO _g67 = ::model::vo::InstructionVO_obj::__new(_g66,HX_CSTRING("OUT A"));		HX_STACK_VAR(_g67,"_g67");
	HX_STACK_LINE(66)
	this->instructions->push(_g67);
	HX_STACK_LINE(67)
	this->programs[(int)1] = this->instructions;
	HX_STACK_LINE(69)
	Array< ::Dynamic > _g68 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g68,"_g68");
	HX_STACK_LINE(69)
	this->instructions = _g68;
	HX_STACK_LINE(70)
	i = (int)0;
	HX_STACK_LINE(71)
	int _g69 = (i)++;		HX_STACK_VAR(_g69,"_g69");
	HX_STACK_LINE(71)
	::model::vo::InstructionVO _g70 = ::model::vo::InstructionVO_obj::__new(_g69,HX_CSTRING("LDI 10"));		HX_STACK_VAR(_g70,"_g70");
	HX_STACK_LINE(71)
	this->instructions->push(_g70);
	HX_STACK_LINE(72)
	int _g71 = (i)++;		HX_STACK_VAR(_g71,"_g71");
	HX_STACK_LINE(72)
	::model::vo::InstructionVO _g72 = ::model::vo::InstructionVO_obj::__new(_g71,HX_CSTRING("MOV R1"));		HX_STACK_VAR(_g72,"_g72");
	HX_STACK_LINE(72)
	this->instructions->push(_g72);
	HX_STACK_LINE(73)
	int _g73 = (i)++;		HX_STACK_VAR(_g73,"_g73");
	HX_STACK_LINE(73)
	::model::vo::InstructionVO _g74 = ::model::vo::InstructionVO_obj::__new(_g73,HX_CSTRING("LDI 0"));		HX_STACK_VAR(_g74,"_g74");
	HX_STACK_LINE(73)
	this->instructions->push(_g74);
	HX_STACK_LINE(74)
	int _g75 = (i)++;		HX_STACK_VAR(_g75,"_g75");
	HX_STACK_LINE(74)
	::model::vo::InstructionVO _g76 = ::model::vo::InstructionVO_obj::__new(_g75,HX_CSTRING("INC"));		HX_STACK_VAR(_g76,"_g76");
	HX_STACK_LINE(74)
	this->instructions->push(_g76);
	HX_STACK_LINE(75)
	int _g77 = (i)++;		HX_STACK_VAR(_g77,"_g77");
	HX_STACK_LINE(75)
	::model::vo::InstructionVO _g78 = ::model::vo::InstructionVO_obj::__new(_g77,HX_CSTRING("JNE 3"));		HX_STACK_VAR(_g78,"_g78");
	HX_STACK_LINE(75)
	this->instructions->push(_g78);
	HX_STACK_LINE(76)
	int _g79 = (i)++;		HX_STACK_VAR(_g79,"_g79");
	HX_STACK_LINE(76)
	::model::vo::InstructionVO _g80 = ::model::vo::InstructionVO_obj::__new(_g79,HX_CSTRING("OUT A"));		HX_STACK_VAR(_g80,"_g80");
	HX_STACK_LINE(76)
	this->instructions->push(_g80);
	HX_STACK_LINE(77)
	int _g81 = (i)++;		HX_STACK_VAR(_g81,"_g81");
	HX_STACK_LINE(77)
	::model::vo::InstructionVO _g82 = ::model::vo::InstructionVO_obj::__new(_g81,HX_CSTRING("SDA 0"));		HX_STACK_VAR(_g82,"_g82");
	HX_STACK_LINE(77)
	this->instructions->push(_g82);
	HX_STACK_LINE(78)
	int _g83 = (i)++;		HX_STACK_VAR(_g83,"_g83");
	HX_STACK_LINE(78)
	::model::vo::InstructionVO _g84 = ::model::vo::InstructionVO_obj::__new(_g83,HX_CSTRING("LDI 0"));		HX_STACK_VAR(_g84,"_g84");
	HX_STACK_LINE(78)
	this->instructions->push(_g84);
	HX_STACK_LINE(79)
	int _g85 = (i)++;		HX_STACK_VAR(_g85,"_g85");
	HX_STACK_LINE(79)
	::model::vo::InstructionVO _g86 = ::model::vo::InstructionVO_obj::__new(_g85,HX_CSTRING("MOV R1"));		HX_STACK_VAR(_g86,"_g86");
	HX_STACK_LINE(79)
	this->instructions->push(_g86);
	HX_STACK_LINE(80)
	int _g87 = (i)++;		HX_STACK_VAR(_g87,"_g87");
	HX_STACK_LINE(80)
	::model::vo::InstructionVO _g88 = ::model::vo::InstructionVO_obj::__new(_g87,HX_CSTRING("LDA 0"));		HX_STACK_VAR(_g88,"_g88");
	HX_STACK_LINE(80)
	this->instructions->push(_g88);
	HX_STACK_LINE(81)
	int _g89 = (i)++;		HX_STACK_VAR(_g89,"_g89");
	HX_STACK_LINE(81)
	::model::vo::InstructionVO _g90 = ::model::vo::InstructionVO_obj::__new(_g89,HX_CSTRING("DEC"));		HX_STACK_VAR(_g90,"_g90");
	HX_STACK_LINE(81)
	this->instructions->push(_g90);
	HX_STACK_LINE(82)
	int _g91 = (i)++;		HX_STACK_VAR(_g91,"_g91");
	HX_STACK_LINE(82)
	::model::vo::InstructionVO _g92 = ::model::vo::InstructionVO_obj::__new(_g91,HX_CSTRING("JNE 10"));		HX_STACK_VAR(_g92,"_g92");
	HX_STACK_LINE(82)
	this->instructions->push(_g92);
	HX_STACK_LINE(83)
	int _g93 = (i)++;		HX_STACK_VAR(_g93,"_g93");
	HX_STACK_LINE(83)
	::model::vo::InstructionVO _g94 = ::model::vo::InstructionVO_obj::__new(_g93,HX_CSTRING("OUT A"));		HX_STACK_VAR(_g94,"_g94");
	HX_STACK_LINE(83)
	this->instructions->push(_g94);
	HX_STACK_LINE(84)
	int _g95 = (i)++;		HX_STACK_VAR(_g95,"_g95");
	HX_STACK_LINE(84)
	::model::vo::InstructionVO _g96 = ::model::vo::InstructionVO_obj::__new(_g95,HX_CSTRING("SDA 0"));		HX_STACK_VAR(_g96,"_g96");
	HX_STACK_LINE(84)
	this->instructions->push(_g96);
	HX_STACK_LINE(85)
	int _g97 = (i)++;		HX_STACK_VAR(_g97,"_g97");
	HX_STACK_LINE(85)
	::model::vo::InstructionVO _g98 = ::model::vo::InstructionVO_obj::__new(_g97,HX_CSTRING("JMP 0"));		HX_STACK_VAR(_g98,"_g98");
	HX_STACK_LINE(85)
	this->instructions->push(_g98);
	HX_STACK_LINE(86)
	int _g99 = (i)++;		HX_STACK_VAR(_g99,"_g99");
	HX_STACK_LINE(86)
	::model::vo::InstructionVO _g100 = ::model::vo::InstructionVO_obj::__new(_g99,HX_CSTRING("NOP"));		HX_STACK_VAR(_g100,"_g100");
	HX_STACK_LINE(86)
	this->instructions->push(_g100);
	HX_STACK_LINE(87)
	this->programs[(int)2] = this->instructions;
}
;
	return null();
}

//ProgramData_obj::~ProgramData_obj() { }

Dynamic ProgramData_obj::__CreateEmpty() { return  new ProgramData_obj; }
hx::ObjectPtr< ProgramData_obj > ProgramData_obj::__new()
{  hx::ObjectPtr< ProgramData_obj > result = new ProgramData_obj();
	result->__construct();
	return result;}

Dynamic ProgramData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProgramData_obj > result = new ProgramData_obj();
	result->__construct();
	return result;}

::model::vo::InstructionVO ProgramData_obj::getInstruction( int pointer){
	HX_STACK_FRAME("model.data.ProgramData","getInstruction",0x151c7dd7,"model.data.ProgramData.getInstruction","model/data/ProgramData.hx",91,0x726d31af)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pointer,"pointer")
	HX_STACK_LINE(91)
	return this->programs->__get(this->programPointer).StaticCast< Array< ::Dynamic > >()->__get(pointer).StaticCast< ::model::vo::InstructionVO >();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgramData_obj,getInstruction,return )

Array< ::Dynamic > ProgramData_obj::getCurrentInstructions( ){
	HX_STACK_FRAME("model.data.ProgramData","getCurrentInstructions",0x34d2a947,"model.data.ProgramData.getCurrentInstructions","model/data/ProgramData.hx",95,0x726d31af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	return this->programs->__get(this->programPointer).StaticCast< Array< ::Dynamic > >();
}


HX_DEFINE_DYNAMIC_FUNC0(ProgramData_obj,getCurrentInstructions,return )

Array< ::Dynamic > ProgramData_obj::getInstructionsByProgramPointer( int pointer){
	HX_STACK_FRAME("model.data.ProgramData","getInstructionsByProgramPointer",0x8ac43dac,"model.data.ProgramData.getInstructionsByProgramPointer","model/data/ProgramData.hx",99,0x726d31af)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pointer,"pointer")
	HX_STACK_LINE(99)
	return this->programs->__get(pointer).StaticCast< Array< ::Dynamic > >();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgramData_obj,getInstructionsByProgramPointer,return )


ProgramData_obj::ProgramData_obj()
{
}

void ProgramData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProgramData);
	HX_MARK_MEMBER_NAME(instructionPointer,"instructionPointer");
	HX_MARK_MEMBER_NAME(programs,"programs");
	HX_MARK_MEMBER_NAME(programPointer,"programPointer");
	HX_MARK_MEMBER_NAME(manualInstruction,"manualInstruction");
	HX_MARK_MEMBER_NAME(instructions,"instructions");
	HX_MARK_END_CLASS();
}

void ProgramData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(instructionPointer,"instructionPointer");
	HX_VISIT_MEMBER_NAME(programs,"programs");
	HX_VISIT_MEMBER_NAME(programPointer,"programPointer");
	HX_VISIT_MEMBER_NAME(manualInstruction,"manualInstruction");
	HX_VISIT_MEMBER_NAME(instructions,"instructions");
}

Dynamic ProgramData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"programs") ) { return programs; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"instructions") ) { return instructions; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"programPointer") ) { return programPointer; }
		if (HX_FIELD_EQ(inName,"getInstruction") ) { return getInstruction_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"manualInstruction") ) { return manualInstruction; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"instructionPointer") ) { return instructionPointer; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getCurrentInstructions") ) { return getCurrentInstructions_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"getInstructionsByProgramPointer") ) { return getInstructionsByProgramPointer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProgramData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"programs") ) { programs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"instructions") ) { instructions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"programPointer") ) { programPointer=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"manualInstruction") ) { manualInstruction=inValue.Cast< ::model::vo::InstructionVO >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"instructionPointer") ) { instructionPointer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgramData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("instructionPointer"));
	outFields->push(HX_CSTRING("programs"));
	outFields->push(HX_CSTRING("programPointer"));
	outFields->push(HX_CSTRING("manualInstruction"));
	outFields->push(HX_CSTRING("instructions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ProgramData_obj,instructionPointer),HX_CSTRING("instructionPointer")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ProgramData_obj,programs),HX_CSTRING("programs")},
	{hx::fsInt,(int)offsetof(ProgramData_obj,programPointer),HX_CSTRING("programPointer")},
	{hx::fsObject /*::model::vo::InstructionVO*/ ,(int)offsetof(ProgramData_obj,manualInstruction),HX_CSTRING("manualInstruction")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ProgramData_obj,instructions),HX_CSTRING("instructions")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("instructionPointer"),
	HX_CSTRING("programs"),
	HX_CSTRING("programPointer"),
	HX_CSTRING("manualInstruction"),
	HX_CSTRING("instructions"),
	HX_CSTRING("getInstruction"),
	HX_CSTRING("getCurrentInstructions"),
	HX_CSTRING("getInstructionsByProgramPointer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgramData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgramData_obj::__mClass,"__mClass");
};

#endif

Class ProgramData_obj::__mClass;

void ProgramData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("model.data.ProgramData"), hx::TCanCast< ProgramData_obj> ,sStaticFields,sMemberFields,
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

void ProgramData_obj::__boot()
{
}

} // end namespace model
} // end namespace data
