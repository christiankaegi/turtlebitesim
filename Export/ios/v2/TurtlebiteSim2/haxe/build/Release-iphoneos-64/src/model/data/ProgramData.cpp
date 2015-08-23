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
HX_STACK_FRAME("model.data.ProgramData","new",0xb4473541,"model.data.ProgramData.new","model/data/ProgramData.hx",11,0x726d31af)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(13)
	this->programPointer = (int)0;
	HX_STACK_LINE(14)
	this->instructionPointer = (int)0;
	HX_STACK_LINE(15)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(15)
	this->programs = _g;
	HX_STACK_LINE(67)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(67)
	this->instructions = _g1;
	HX_STACK_LINE(68)
	i = (int)0;
	HX_STACK_LINE(69)
	int _g2 = (i)++;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(69)
	::model::vo::InstructionVO _g3 = ::model::vo::InstructionVO_obj::__new(_g2,HX_CSTRING("LDI 5"),HX_CSTRING("00100101"),HX_CSTRING("Initialisiere Akku mit x"));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(69)
	this->instructions->push(_g3);
	HX_STACK_LINE(70)
	int _g4 = (i)++;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(70)
	::model::vo::InstructionVO _g5 = ::model::vo::InstructionVO_obj::__new(_g4,HX_CSTRING("MOV R1"),HX_CSTRING("00010100"),HX_CSTRING("Bewege den Wert im Akku ins Register x"));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(70)
	this->instructions->push(_g5);
	HX_STACK_LINE(71)
	int _g6 = (i)++;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(71)
	::model::vo::InstructionVO _g7 = ::model::vo::InstructionVO_obj::__new(_g6,HX_CSTRING("LDI 0"),HX_CSTRING("00100000"),HX_CSTRING("Initialisiere Akku mit x"));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(71)
	this->instructions->push(_g7);
	HX_STACK_LINE(72)
	int _g8 = (i)++;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(72)
	::model::vo::InstructionVO _g9 = ::model::vo::InstructionVO_obj::__new(_g8,HX_CSTRING("OUT A"),HX_CSTRING("01110000"),HX_CSTRING("Schicke den Inhalt von Akku ans Display"));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(72)
	this->instructions->push(_g9);
	HX_STACK_LINE(73)
	int _g10 = (i)++;		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(73)
	::model::vo::InstructionVO _g11 = ::model::vo::InstructionVO_obj::__new(_g10,HX_CSTRING("INC"),HX_CSTRING("00110010"),HX_CSTRING("Erh\xc3""\xb6""he den Wert im Akku um 1"));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(73)
	this->instructions->push(_g11);
	HX_STACK_LINE(74)
	int _g12 = (i)++;		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(74)
	::model::vo::InstructionVO _g13 = ::model::vo::InstructionVO_obj::__new(_g12,HX_CSTRING("OUT A"),HX_CSTRING("01110000"),HX_CSTRING("Schicke den Inhalt von Akku ans Display"));		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(74)
	this->instructions->push(_g13);
	HX_STACK_LINE(75)
	int _g14 = (i)++;		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(75)
	::model::vo::InstructionVO _g15 = ::model::vo::InstructionVO_obj::__new(_g14,HX_CSTRING("JNE 4"),HX_CSTRING("10010100"),HX_CSTRING("Jump if not equal, zu Codezeile x"));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(75)
	this->instructions->push(_g15);
	HX_STACK_LINE(76)
	int _g16 = (i)++;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(76)
	::model::vo::InstructionVO _g17 = ::model::vo::InstructionVO_obj::__new(_g16,HX_CSTRING("MOV R2"),HX_CSTRING("00011000"),HX_CSTRING("Bewege den Wert von Akku ins Register x"));		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(76)
	this->instructions->push(_g17);
	HX_STACK_LINE(77)
	int _g18 = (i)++;		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(77)
	::model::vo::InstructionVO _g19 = ::model::vo::InstructionVO_obj::__new(_g18,HX_CSTRING("SDA 2"),HX_CSTRING("01000010"),HX_CSTRING("Speichere den Wert vom Akku im RAM in Zelle x"));		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(77)
	this->instructions->push(_g19);
	HX_STACK_LINE(78)
	int _g20 = (i)++;		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(78)
	::model::vo::InstructionVO _g21 = ::model::vo::InstructionVO_obj::__new(_g20,HX_CSTRING("LDA 2"),HX_CSTRING("01010010"),HX_CSTRING("Lade den Wert vom Ram in den Akku"));		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(78)
	this->instructions->push(_g21);
	HX_STACK_LINE(79)
	int _g22 = (i)++;		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(79)
	::model::vo::InstructionVO _g23 = ::model::vo::InstructionVO_obj::__new(_g22,HX_CSTRING("OUT A"),HX_CSTRING("01110000"),HX_CSTRING("Schicke den Inhalt von Akku ans Display"));		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(79)
	this->instructions->push(_g23);
	HX_STACK_LINE(80)
	int _g24 = (i)++;		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(80)
	::model::vo::InstructionVO _g25 = ::model::vo::InstructionVO_obj::__new(_g24,HX_CSTRING("LDI 0"),HX_CSTRING("00100000"),HX_CSTRING("Initialisiere Akku mit x"));		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(80)
	this->instructions->push(_g25);
	HX_STACK_LINE(81)
	int _g26 = (i)++;		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(81)
	::model::vo::InstructionVO _g27 = ::model::vo::InstructionVO_obj::__new(_g26,HX_CSTRING("MOV R1"),HX_CSTRING("00010100"),HX_CSTRING("Bewege den Wert im Akku ins Register x"));		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(81)
	this->instructions->push(_g27);
	HX_STACK_LINE(82)
	int _g28 = (i)++;		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(82)
	::model::vo::InstructionVO _g29 = ::model::vo::InstructionVO_obj::__new(_g28,HX_CSTRING("MOV R2"),HX_CSTRING("00011000"),HX_CSTRING("Bewege den Wert im Akku ins Register x"));		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(82)
	this->instructions->push(_g29);
	HX_STACK_LINE(83)
	int _g30 = (i)++;		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(83)
	::model::vo::InstructionVO _g31 = ::model::vo::InstructionVO_obj::__new(_g30,HX_CSTRING("SDA 0"),HX_CSTRING("01000000"),HX_CSTRING("Speichere den Wert vom Akku im RAM in Zelle x"));		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(83)
	this->instructions->push(_g31);
	HX_STACK_LINE(84)
	int _g32 = (i)++;		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(84)
	::model::vo::InstructionVO _g33 = ::model::vo::InstructionVO_obj::__new(_g32,HX_CSTRING("OUT A"),HX_CSTRING("01110000"),HX_CSTRING("Schicke den Inhalt von Akku ans Display"));		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(84)
	this->instructions->push(_g33);
	HX_STACK_LINE(85)
	this->programs[(int)0] = this->instructions;
	HX_STACK_LINE(87)
	Array< ::Dynamic > _g34 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(87)
	this->instructions = _g34;
	HX_STACK_LINE(88)
	i = (int)0;
	HX_STACK_LINE(89)
	int _g35 = (i)++;		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(89)
	::model::vo::InstructionVO _g36 = ::model::vo::InstructionVO_obj::__new(_g35,HX_CSTRING("NOP"),HX_CSTRING("00000000"),HX_CSTRING(""));		HX_STACK_VAR(_g36,"_g36");
	HX_STACK_LINE(89)
	this->instructions->push(_g36);
	HX_STACK_LINE(90)
	int _g37 = (i)++;		HX_STACK_VAR(_g37,"_g37");
	HX_STACK_LINE(90)
	::model::vo::InstructionVO _g38 = ::model::vo::InstructionVO_obj::__new(_g37,HX_CSTRING("LDI 1"),HX_CSTRING("00100001"),HX_CSTRING(""));		HX_STACK_VAR(_g38,"_g38");
	HX_STACK_LINE(90)
	this->instructions->push(_g38);
	HX_STACK_LINE(91)
	int _g39 = (i)++;		HX_STACK_VAR(_g39,"_g39");
	HX_STACK_LINE(91)
	::model::vo::InstructionVO _g40 = ::model::vo::InstructionVO_obj::__new(_g39,HX_CSTRING("LDI 2"),HX_CSTRING("00100010"),HX_CSTRING(""));		HX_STACK_VAR(_g40,"_g40");
	HX_STACK_LINE(91)
	this->instructions->push(_g40);
	HX_STACK_LINE(92)
	int _g41 = (i)++;		HX_STACK_VAR(_g41,"_g41");
	HX_STACK_LINE(92)
	::model::vo::InstructionVO _g42 = ::model::vo::InstructionVO_obj::__new(_g41,HX_CSTRING("MOV R1"),HX_CSTRING("00010100"),HX_CSTRING(""));		HX_STACK_VAR(_g42,"_g42");
	HX_STACK_LINE(92)
	this->instructions->push(_g42);
	HX_STACK_LINE(93)
	int _g43 = (i)++;		HX_STACK_VAR(_g43,"_g43");
	HX_STACK_LINE(93)
	::model::vo::InstructionVO _g44 = ::model::vo::InstructionVO_obj::__new(_g43,HX_CSTRING("LDI 4"),HX_CSTRING("00100100"),HX_CSTRING(""));		HX_STACK_VAR(_g44,"_g44");
	HX_STACK_LINE(93)
	this->instructions->push(_g44);
	HX_STACK_LINE(94)
	int _g45 = (i)++;		HX_STACK_VAR(_g45,"_g45");
	HX_STACK_LINE(94)
	::model::vo::InstructionVO _g46 = ::model::vo::InstructionVO_obj::__new(_g45,HX_CSTRING("MOV R2"),HX_CSTRING("00011000"),HX_CSTRING(""));		HX_STACK_VAR(_g46,"_g46");
	HX_STACK_LINE(94)
	this->instructions->push(_g46);
	HX_STACK_LINE(95)
	int _g47 = (i)++;		HX_STACK_VAR(_g47,"_g47");
	HX_STACK_LINE(95)
	::model::vo::InstructionVO _g48 = ::model::vo::InstructionVO_obj::__new(_g47,HX_CSTRING("LDI 8"),HX_CSTRING("00101000"),HX_CSTRING(""));		HX_STACK_VAR(_g48,"_g48");
	HX_STACK_LINE(95)
	this->instructions->push(_g48);
	HX_STACK_LINE(96)
	int _g49 = (i)++;		HX_STACK_VAR(_g49,"_g49");
	HX_STACK_LINE(96)
	::model::vo::InstructionVO _g50 = ::model::vo::InstructionVO_obj::__new(_g49,HX_CSTRING("SUB"),HX_CSTRING("00110001"),HX_CSTRING(""));		HX_STACK_VAR(_g50,"_g50");
	HX_STACK_LINE(96)
	this->instructions->push(_g50);
	HX_STACK_LINE(97)
	int _g51 = (i)++;		HX_STACK_VAR(_g51,"_g51");
	HX_STACK_LINE(97)
	::model::vo::InstructionVO _g52 = ::model::vo::InstructionVO_obj::__new(_g51,HX_CSTRING("INC"),HX_CSTRING("00110010"),HX_CSTRING(""));		HX_STACK_VAR(_g52,"_g52");
	HX_STACK_LINE(97)
	this->instructions->push(_g52);
	HX_STACK_LINE(98)
	int _g53 = (i)++;		HX_STACK_VAR(_g53,"_g53");
	HX_STACK_LINE(98)
	::model::vo::InstructionVO _g54 = ::model::vo::InstructionVO_obj::__new(_g53,HX_CSTRING("DEC"),HX_CSTRING("00110011"),HX_CSTRING(""));		HX_STACK_VAR(_g54,"_g54");
	HX_STACK_LINE(98)
	this->instructions->push(_g54);
	HX_STACK_LINE(99)
	int _g55 = (i)++;		HX_STACK_VAR(_g55,"_g55");
	HX_STACK_LINE(99)
	::model::vo::InstructionVO _g56 = ::model::vo::InstructionVO_obj::__new(_g55,HX_CSTRING("SDA 1"),HX_CSTRING("01000001"),HX_CSTRING(""));		HX_STACK_VAR(_g56,"_g56");
	HX_STACK_LINE(99)
	this->instructions->push(_g56);
	HX_STACK_LINE(100)
	int _g57 = (i)++;		HX_STACK_VAR(_g57,"_g57");
	HX_STACK_LINE(100)
	::model::vo::InstructionVO _g58 = ::model::vo::InstructionVO_obj::__new(_g57,HX_CSTRING("SDA 2"),HX_CSTRING("01000010"),HX_CSTRING(""));		HX_STACK_VAR(_g58,"_g58");
	HX_STACK_LINE(100)
	this->instructions->push(_g58);
	HX_STACK_LINE(101)
	int _g59 = (i)++;		HX_STACK_VAR(_g59,"_g59");
	HX_STACK_LINE(101)
	::model::vo::InstructionVO _g60 = ::model::vo::InstructionVO_obj::__new(_g59,HX_CSTRING("SDA 4"),HX_CSTRING("01000100"),HX_CSTRING(""));		HX_STACK_VAR(_g60,"_g60");
	HX_STACK_LINE(101)
	this->instructions->push(_g60);
	HX_STACK_LINE(102)
	int _g61 = (i)++;		HX_STACK_VAR(_g61,"_g61");
	HX_STACK_LINE(102)
	::model::vo::InstructionVO _g62 = ::model::vo::InstructionVO_obj::__new(_g61,HX_CSTRING("SDA 8"),HX_CSTRING("01001000"),HX_CSTRING(""));		HX_STACK_VAR(_g62,"_g62");
	HX_STACK_LINE(102)
	this->instructions->push(_g62);
	HX_STACK_LINE(103)
	int _g63 = (i)++;		HX_STACK_VAR(_g63,"_g63");
	HX_STACK_LINE(103)
	::model::vo::InstructionVO _g64 = ::model::vo::InstructionVO_obj::__new(_g63,HX_CSTRING("LDA 1"),HX_CSTRING("01010001"),HX_CSTRING(""));		HX_STACK_VAR(_g64,"_g64");
	HX_STACK_LINE(103)
	this->instructions->push(_g64);
	HX_STACK_LINE(104)
	int _g65 = (i)++;		HX_STACK_VAR(_g65,"_g65");
	HX_STACK_LINE(104)
	::model::vo::InstructionVO _g66 = ::model::vo::InstructionVO_obj::__new(_g65,HX_CSTRING("LDA 2"),HX_CSTRING("01010010"),HX_CSTRING(""));		HX_STACK_VAR(_g66,"_g66");
	HX_STACK_LINE(104)
	this->instructions->push(_g66);
	HX_STACK_LINE(105)
	this->programs[(int)1] = this->instructions;
	HX_STACK_LINE(107)
	Array< ::Dynamic > _g67 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g67,"_g67");
	HX_STACK_LINE(107)
	this->instructions = _g67;
	HX_STACK_LINE(108)
	i = (int)0;
	HX_STACK_LINE(109)
	int _g68 = (i)++;		HX_STACK_VAR(_g68,"_g68");
	HX_STACK_LINE(109)
	::model::vo::InstructionVO _g69 = ::model::vo::InstructionVO_obj::__new(_g68,HX_CSTRING("LDI 3"),HX_CSTRING("00100011"),HX_CSTRING(""));		HX_STACK_VAR(_g69,"_g69");
	HX_STACK_LINE(109)
	this->instructions->push(_g69);
	HX_STACK_LINE(110)
	int _g70 = (i)++;		HX_STACK_VAR(_g70,"_g70");
	HX_STACK_LINE(110)
	::model::vo::InstructionVO _g71 = ::model::vo::InstructionVO_obj::__new(_g70,HX_CSTRING("SDA 4"),HX_CSTRING("01000100"),HX_CSTRING(""));		HX_STACK_VAR(_g71,"_g71");
	HX_STACK_LINE(110)
	this->instructions->push(_g71);
	HX_STACK_LINE(111)
	int _g72 = (i)++;		HX_STACK_VAR(_g72,"_g72");
	HX_STACK_LINE(111)
	::model::vo::InstructionVO _g73 = ::model::vo::InstructionVO_obj::__new(_g72,HX_CSTRING("INC"),HX_CSTRING("00110010"),HX_CSTRING(""));		HX_STACK_VAR(_g73,"_g73");
	HX_STACK_LINE(111)
	this->instructions->push(_g73);
	HX_STACK_LINE(112)
	int _g74 = (i)++;		HX_STACK_VAR(_g74,"_g74");
	HX_STACK_LINE(112)
	::model::vo::InstructionVO _g75 = ::model::vo::InstructionVO_obj::__new(_g74,HX_CSTRING("SDA 1"),HX_CSTRING("01000001"),HX_CSTRING(""));		HX_STACK_VAR(_g75,"_g75");
	HX_STACK_LINE(112)
	this->instructions->push(_g75);
	HX_STACK_LINE(113)
	int _g76 = (i)++;		HX_STACK_VAR(_g76,"_g76");
	HX_STACK_LINE(113)
	::model::vo::InstructionVO _g77 = ::model::vo::InstructionVO_obj::__new(_g76,HX_CSTRING("INC"),HX_CSTRING("00110010"),HX_CSTRING(""));		HX_STACK_VAR(_g77,"_g77");
	HX_STACK_LINE(113)
	this->instructions->push(_g77);
	HX_STACK_LINE(114)
	int _g78 = (i)++;		HX_STACK_VAR(_g78,"_g78");
	HX_STACK_LINE(114)
	::model::vo::InstructionVO _g79 = ::model::vo::InstructionVO_obj::__new(_g78,HX_CSTRING("LDA 0"),HX_CSTRING("01010000"),HX_CSTRING(""));		HX_STACK_VAR(_g79,"_g79");
	HX_STACK_LINE(114)
	this->instructions->push(_g79);
	HX_STACK_LINE(115)
	int _g80 = (i)++;		HX_STACK_VAR(_g80,"_g80");
	HX_STACK_LINE(115)
	::model::vo::InstructionVO _g81 = ::model::vo::InstructionVO_obj::__new(_g80,HX_CSTRING("INC"),HX_CSTRING("00110010"),HX_CSTRING(""));		HX_STACK_VAR(_g81,"_g81");
	HX_STACK_LINE(115)
	this->instructions->push(_g81);
	HX_STACK_LINE(116)
	int _g82 = (i)++;		HX_STACK_VAR(_g82,"_g82");
	HX_STACK_LINE(116)
	::model::vo::InstructionVO _g83 = ::model::vo::InstructionVO_obj::__new(_g82,HX_CSTRING("SDA 3"),HX_CSTRING("01000011"),HX_CSTRING(""));		HX_STACK_VAR(_g83,"_g83");
	HX_STACK_LINE(116)
	this->instructions->push(_g83);
	HX_STACK_LINE(117)
	int _g84 = (i)++;		HX_STACK_VAR(_g84,"_g84");
	HX_STACK_LINE(117)
	::model::vo::InstructionVO _g85 = ::model::vo::InstructionVO_obj::__new(_g84,HX_CSTRING("LDI 0"),HX_CSTRING("00100000"),HX_CSTRING(""));		HX_STACK_VAR(_g85,"_g85");
	HX_STACK_LINE(117)
	this->instructions->push(_g85);
	HX_STACK_LINE(118)
	int _g86 = (i)++;		HX_STACK_VAR(_g86,"_g86");
	HX_STACK_LINE(118)
	::model::vo::InstructionVO _g87 = ::model::vo::InstructionVO_obj::__new(_g86,HX_CSTRING("SDA 5"),HX_CSTRING("01000101"),HX_CSTRING(""));		HX_STACK_VAR(_g87,"_g87");
	HX_STACK_LINE(118)
	this->instructions->push(_g87);
	HX_STACK_LINE(119)
	int _g88 = (i)++;		HX_STACK_VAR(_g88,"_g88");
	HX_STACK_LINE(119)
	::model::vo::InstructionVO _g89 = ::model::vo::InstructionVO_obj::__new(_g88,HX_CSTRING("LDI 3"),HX_CSTRING("00100011"),HX_CSTRING(""));		HX_STACK_VAR(_g89,"_g89");
	HX_STACK_LINE(119)
	this->instructions->push(_g89);
	HX_STACK_LINE(120)
	int _g90 = (i)++;		HX_STACK_VAR(_g90,"_g90");
	HX_STACK_LINE(120)
	::model::vo::InstructionVO _g91 = ::model::vo::InstructionVO_obj::__new(_g90,HX_CSTRING("SDA 0"),HX_CSTRING("01000000"),HX_CSTRING(""));		HX_STACK_VAR(_g91,"_g91");
	HX_STACK_LINE(120)
	this->instructions->push(_g91);
	HX_STACK_LINE(121)
	int _g92 = (i)++;		HX_STACK_VAR(_g92,"_g92");
	HX_STACK_LINE(121)
	::model::vo::InstructionVO _g93 = ::model::vo::InstructionVO_obj::__new(_g92,HX_CSTRING("INC"),HX_CSTRING("00110010"),HX_CSTRING(""));		HX_STACK_VAR(_g93,"_g93");
	HX_STACK_LINE(121)
	this->instructions->push(_g93);
	HX_STACK_LINE(122)
	int _g94 = (i)++;		HX_STACK_VAR(_g94,"_g94");
	HX_STACK_LINE(122)
	::model::vo::InstructionVO _g95 = ::model::vo::InstructionVO_obj::__new(_g94,HX_CSTRING("SDA 1"),HX_CSTRING("01000001"),HX_CSTRING(""));		HX_STACK_VAR(_g95,"_g95");
	HX_STACK_LINE(122)
	this->instructions->push(_g95);
	HX_STACK_LINE(123)
	int _g96 = (i)++;		HX_STACK_VAR(_g96,"_g96");
	HX_STACK_LINE(123)
	::model::vo::InstructionVO _g97 = ::model::vo::InstructionVO_obj::__new(_g96,HX_CSTRING("INC"),HX_CSTRING("00110010"),HX_CSTRING(""));		HX_STACK_VAR(_g97,"_g97");
	HX_STACK_LINE(123)
	this->instructions->push(_g97);
	HX_STACK_LINE(124)
	int _g98 = (i)++;		HX_STACK_VAR(_g98,"_g98");
	HX_STACK_LINE(124)
	::model::vo::InstructionVO _g99 = ::model::vo::InstructionVO_obj::__new(_g98,HX_CSTRING("INC"),HX_CSTRING("00110010"),HX_CSTRING(""));		HX_STACK_VAR(_g99,"_g99");
	HX_STACK_LINE(124)
	this->instructions->push(_g99);
	HX_STACK_LINE(125)
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
	HX_STACK_FRAME("model.data.ProgramData","getInstruction",0x151c7dd7,"model.data.ProgramData.getInstruction","model/data/ProgramData.hx",131,0x726d31af)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pointer,"pointer")
	HX_STACK_LINE(131)
	return this->programs->__get(this->programPointer).StaticCast< Array< ::Dynamic > >()->__get(pointer).StaticCast< ::model::vo::InstructionVO >();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgramData_obj,getInstruction,return )

Array< ::Dynamic > ProgramData_obj::getCurrentInstructions( ){
	HX_STACK_FRAME("model.data.ProgramData","getCurrentInstructions",0x34d2a947,"model.data.ProgramData.getCurrentInstructions","model/data/ProgramData.hx",135,0x726d31af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	return this->programs->__get(this->programPointer).StaticCast< Array< ::Dynamic > >();
}


HX_DEFINE_DYNAMIC_FUNC0(ProgramData_obj,getCurrentInstructions,return )

Array< ::Dynamic > ProgramData_obj::getInstructionsByProgramPointer( int pointer){
	HX_STACK_FRAME("model.data.ProgramData","getInstructionsByProgramPointer",0x8ac43dac,"model.data.ProgramData.getInstructionsByProgramPointer","model/data/ProgramData.hx",139,0x726d31af)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pointer,"pointer")
	HX_STACK_LINE(139)
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
	HX_MARK_MEMBER_NAME(instructions,"instructions");
	HX_MARK_END_CLASS();
}

void ProgramData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(instructionPointer,"instructionPointer");
	HX_VISIT_MEMBER_NAME(programs,"programs");
	HX_VISIT_MEMBER_NAME(programPointer,"programPointer");
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
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ProgramData_obj,instructions),HX_CSTRING("instructions")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("instructionPointer"),
	HX_CSTRING("programs"),
	HX_CSTRING("programPointer"),
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
