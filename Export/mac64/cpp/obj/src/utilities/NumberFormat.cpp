#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_model_vo_DecHexVO
#include <model/vo/DecHexVO.h>
#endif
#ifndef INCLUDED_utilities_NumberFormat
#include <utilities/NumberFormat.h>
#endif
namespace utilities{

Void NumberFormat_obj::__construct()
{
HX_STACK_FRAME("utilities.NumberFormat","new",0xe0351e16,"utilities.NumberFormat.new","utilities/NumberFormat.hx",4,0x7fdedf39)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//NumberFormat_obj::~NumberFormat_obj() { }

Dynamic NumberFormat_obj::__CreateEmpty() { return  new NumberFormat_obj; }
hx::ObjectPtr< NumberFormat_obj > NumberFormat_obj::__new()
{  hx::ObjectPtr< NumberFormat_obj > result = new NumberFormat_obj();
	result->__construct();
	return result;}

Dynamic NumberFormat_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NumberFormat_obj > result = new NumberFormat_obj();
	result->__construct();
	return result;}

::String NumberFormat_obj::intToString( int num){
	HX_STACK_FRAME("utilities.NumberFormat","intToString",0xdfd49471,"utilities.NumberFormat.intToString","utilities/NumberFormat.hx",7,0x7fdedf39)
	HX_STACK_ARG(num,"num")
	HX_STACK_LINE(8)
	::String reference = HX_CSTRING("0123456789ABCDEFGHIJKLMNOPQRSTUVW");		HX_STACK_VAR(reference,"reference");
	HX_STACK_LINE(9)
	::StringBuf result = ::StringBuf_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(10)
	int maxPow = (int)0;		HX_STACK_VAR(maxPow,"maxPow");
	HX_STACK_LINE(11)
	int test = (int)0;		HX_STACK_VAR(test,"test");
	HX_STACK_LINE(13)
	while((true)){
		HX_STACK_LINE(13)
		Float _g = ::Math_obj::pow((int)2,maxPow);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(13)
		int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(13)
		if ((!(((_g1 <= num))))){
			HX_STACK_LINE(13)
			break;
		}
		HX_STACK_LINE(14)
		(maxPow)++;
	}
	HX_STACK_LINE(17)
	int i = (maxPow - (int)1);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(18)
	while((true)){
		HX_STACK_LINE(18)
		if ((!(((i >= (int)0))))){
			HX_STACK_LINE(18)
			break;
		}
		HX_STACK_LINE(19)
		Float basePow = ::Math_obj::pow((int)2,i);		HX_STACK_VAR(basePow,"basePow");
		HX_STACK_LINE(20)
		int pow = ::Math_obj::floor((Float(num) / Float(basePow)));		HX_STACK_VAR(pow,"pow");
		HX_STACK_LINE(21)
		int _g2 = ::Std_obj::_int(pow);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(21)
		::String _g3 = reference.charAt(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(21)
		result->add(_g3);
		HX_STACK_LINE(22)
		int _g4 = ::Std_obj::_int((pow * basePow));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(22)
		hx::SubEq(num,_g4);
		HX_STACK_LINE(23)
		(i)--;
	}
	HX_STACK_LINE(25)
	::String r = result->b->join(HX_CSTRING(""));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(26)
	if (((r.length == (int)0))){
		HX_STACK_LINE(26)
		return HX_CSTRING("0");
	}
	else{
		HX_STACK_LINE(26)
		return r;
	}
	HX_STACK_LINE(26)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NumberFormat_obj,intToString,return )

Array< bool > NumberFormat_obj::binaryToArray( ::String bin,Dynamic __o_length){
Dynamic length = __o_length.Default(8);
	HX_STACK_FRAME("utilities.NumberFormat","binaryToArray",0x063ee553,"utilities.NumberFormat.binaryToArray","utilities/NumberFormat.hx",29,0x7fdedf39)
	HX_STACK_ARG(bin,"bin")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(30)
		Array< bool > arr = Array_obj< bool >::__new();		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(31)
			while((true)){
				HX_STACK_LINE(31)
				if ((!(((_g < (int)8))))){
					HX_STACK_LINE(31)
					break;
				}
				HX_STACK_LINE(31)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(32)
				::String _g1 = bin.substr(i,(int)1);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(32)
				if (((_g1 == HX_CSTRING("1")))){
					HX_STACK_LINE(33)
					arr[i] = true;
				}
				else{
					HX_STACK_LINE(35)
					arr[i] = false;
				}
			}
		}
		HX_STACK_LINE(38)
		return arr;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NumberFormat_obj,binaryToArray,return )

::model::vo::DecHexVO NumberFormat_obj::binaryToDecimal( ::String value){
	HX_STACK_FRAME("utilities.NumberFormat","binaryToDecimal",0xec1c0ecb,"utilities.NumberFormat.binaryToDecimal","utilities/NumberFormat.hx",42,0x7fdedf39)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(43)
	::model::vo::DecHexVO t = ::model::vo::DecHexVO_obj::__new((int)0,HX_CSTRING("0"));		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(44)
	::String _switch_1 = (value);
	if (  ( _switch_1==HX_CSTRING("0001"))){
		HX_STACK_LINE(46)
		::model::vo::DecHexVO _g = ::model::vo::DecHexVO_obj::__new((int)1,HX_CSTRING("1"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		t = _g;
	}
	else if (  ( _switch_1==HX_CSTRING("0010"))){
		HX_STACK_LINE(48)
		::model::vo::DecHexVO _g1 = ::model::vo::DecHexVO_obj::__new((int)2,HX_CSTRING("2"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(48)
		t = _g1;
	}
	else if (  ( _switch_1==HX_CSTRING("0011"))){
		HX_STACK_LINE(50)
		::model::vo::DecHexVO _g2 = ::model::vo::DecHexVO_obj::__new((int)3,HX_CSTRING("3"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(50)
		t = _g2;
	}
	else if (  ( _switch_1==HX_CSTRING("0100"))){
		HX_STACK_LINE(52)
		::model::vo::DecHexVO _g3 = ::model::vo::DecHexVO_obj::__new((int)4,HX_CSTRING("4"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(52)
		t = _g3;
	}
	else if (  ( _switch_1==HX_CSTRING("0101"))){
		HX_STACK_LINE(54)
		::model::vo::DecHexVO _g4 = ::model::vo::DecHexVO_obj::__new((int)5,HX_CSTRING("5"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(54)
		t = _g4;
	}
	else if (  ( _switch_1==HX_CSTRING("0110"))){
		HX_STACK_LINE(56)
		::model::vo::DecHexVO _g5 = ::model::vo::DecHexVO_obj::__new((int)6,HX_CSTRING("6"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(56)
		t = _g5;
	}
	else if (  ( _switch_1==HX_CSTRING("0111"))){
		HX_STACK_LINE(58)
		::model::vo::DecHexVO _g6 = ::model::vo::DecHexVO_obj::__new((int)7,HX_CSTRING("7"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(58)
		t = _g6;
	}
	else if (  ( _switch_1==HX_CSTRING("1000"))){
		HX_STACK_LINE(60)
		::model::vo::DecHexVO _g7 = ::model::vo::DecHexVO_obj::__new((int)8,HX_CSTRING("8"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(60)
		t = _g7;
	}
	else if (  ( _switch_1==HX_CSTRING("1001"))){
		HX_STACK_LINE(62)
		::model::vo::DecHexVO _g8 = ::model::vo::DecHexVO_obj::__new((int)9,HX_CSTRING("9"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(62)
		t = _g8;
	}
	else if (  ( _switch_1==HX_CSTRING("1010"))){
		HX_STACK_LINE(64)
		::model::vo::DecHexVO _g9 = ::model::vo::DecHexVO_obj::__new((int)10,HX_CSTRING("A"));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(64)
		t = _g9;
	}
	else if (  ( _switch_1==HX_CSTRING("1011"))){
		HX_STACK_LINE(66)
		::model::vo::DecHexVO _g10 = ::model::vo::DecHexVO_obj::__new((int)11,HX_CSTRING("B"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(66)
		t = _g10;
	}
	else if (  ( _switch_1==HX_CSTRING("1100"))){
		HX_STACK_LINE(68)
		::model::vo::DecHexVO _g11 = ::model::vo::DecHexVO_obj::__new((int)12,HX_CSTRING("C"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(68)
		t = _g11;
	}
	else if (  ( _switch_1==HX_CSTRING("1101"))){
		HX_STACK_LINE(70)
		::model::vo::DecHexVO _g12 = ::model::vo::DecHexVO_obj::__new((int)13,HX_CSTRING("D"));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(70)
		t = _g12;
	}
	else if (  ( _switch_1==HX_CSTRING("1110"))){
		HX_STACK_LINE(72)
		::model::vo::DecHexVO _g13 = ::model::vo::DecHexVO_obj::__new((int)14,HX_CSTRING("E"));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(72)
		t = _g13;
	}
	else if (  ( _switch_1==HX_CSTRING("1111"))){
		HX_STACK_LINE(74)
		::model::vo::DecHexVO _g14 = ::model::vo::DecHexVO_obj::__new((int)15,HX_CSTRING("F"));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(74)
		t = _g14;
	}
	HX_STACK_LINE(76)
	return t;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NumberFormat_obj,binaryToDecimal,return )

::String NumberFormat_obj::decimalToBinary( int value){
	HX_STACK_FRAME("utilities.NumberFormat","decimalToBinary",0xc25a5443,"utilities.NumberFormat.decimalToBinary","utilities/NumberFormat.hx",79,0x7fdedf39)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(80)
	::String t = HX_CSTRING("0000");		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(81)
	switch( (int)(value)){
		case (int)1: {
			HX_STACK_LINE(83)
			t = HX_CSTRING("0001");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(85)
			t = HX_CSTRING("0010");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(87)
			t = HX_CSTRING("0011");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(89)
			t = HX_CSTRING("0100");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(91)
			t = HX_CSTRING("0101");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(93)
			t = HX_CSTRING("0110");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(95)
			t = HX_CSTRING("0111");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(97)
			t = HX_CSTRING("1000");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(99)
			t = HX_CSTRING("1001");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(101)
			t = HX_CSTRING("1010");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(103)
			t = HX_CSTRING("1011");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(105)
			t = HX_CSTRING("1100");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(107)
			t = HX_CSTRING("1101");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(109)
			t = HX_CSTRING("1110");
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(111)
			t = HX_CSTRING("1111");
		}
		;break;
	}
	HX_STACK_LINE(114)
	return t;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NumberFormat_obj,decimalToBinary,return )

::String NumberFormat_obj::decimalToChar( int value){
	HX_STACK_FRAME("utilities.NumberFormat","decimalToChar",0xffcc0298,"utilities.NumberFormat.decimalToChar","utilities/NumberFormat.hx",117,0x7fdedf39)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(128)
	::String t = HX_CSTRING("A");		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(129)
	switch( (int)(value)){
		case (int)1: {
			HX_STACK_LINE(131)
			t = HX_CSTRING("B");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(133)
			t = HX_CSTRING("C");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(135)
			t = HX_CSTRING("D");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(137)
			t = HX_CSTRING("E");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(139)
			t = HX_CSTRING("F");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(141)
			t = HX_CSTRING("G");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(143)
			t = HX_CSTRING("H");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(145)
			t = HX_CSTRING("I");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(147)
			t = HX_CSTRING("L");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(149)
			t = HX_CSTRING("O");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(151)
			t = HX_CSTRING("M");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(153)
			t = HX_CSTRING("S");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(155)
			t = HX_CSTRING("W");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(157)
			t = HX_CSTRING("!");
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(159)
			t = HX_CSTRING(" ");
		}
		;break;
	}
	HX_STACK_LINE(161)
	return t;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NumberFormat_obj,decimalToChar,return )


NumberFormat_obj::NumberFormat_obj()
{
}

Dynamic NumberFormat_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"intToString") ) { return intToString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"binaryToArray") ) { return binaryToArray_dyn(); }
		if (HX_FIELD_EQ(inName,"decimalToChar") ) { return decimalToChar_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"binaryToDecimal") ) { return binaryToDecimal_dyn(); }
		if (HX_FIELD_EQ(inName,"decimalToBinary") ) { return decimalToBinary_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NumberFormat_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void NumberFormat_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("intToString"),
	HX_CSTRING("binaryToArray"),
	HX_CSTRING("binaryToDecimal"),
	HX_CSTRING("decimalToBinary"),
	HX_CSTRING("decimalToChar"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NumberFormat_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NumberFormat_obj::__mClass,"__mClass");
};

#endif

Class NumberFormat_obj::__mClass;

void NumberFormat_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("utilities.NumberFormat"), hx::TCanCast< NumberFormat_obj> ,sStaticFields,sMemberFields,
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

void NumberFormat_obj::__boot()
{
}

} // end namespace utilities
