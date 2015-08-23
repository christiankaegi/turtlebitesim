#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Random
#include <Random.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Random_obj::__construct()
{
	return null();
}

//Random_obj::~Random_obj() { }

Dynamic Random_obj::__CreateEmpty() { return  new Random_obj; }
hx::ObjectPtr< Random_obj > Random_obj::__new()
{  hx::ObjectPtr< Random_obj > result = new Random_obj();
	result->__construct();
	return result;}

Dynamic Random_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Random_obj > result = new Random_obj();
	result->__construct();
	return result;}

bool Random_obj::_bool( ){
	HX_STACK_FRAME("Random","bool",0x79247e55,"Random.bool","Random.hx",16,0x4903e47b)
	HX_STACK_LINE(17)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(17)
	return (_g < 0.5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,_bool,return )

int Random_obj::_int( int from,int to){
	HX_STACK_FRAME("Random","int",0x9a64c124,"Random.int","Random.hx",22,0x4903e47b)
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_LINE(23)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(23)
	Float _g1 = ((((to - from) + (int)1)) * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(23)
	int _g2 = ::Math_obj::floor(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(23)
	return (from + _g2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Random_obj,_int,return )

Float Random_obj::_float( Float from,Float to){
	HX_STACK_FRAME("Random","float",0xd268b111,"Random.float","Random.hx",28,0x4903e47b)
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_LINE(29)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(29)
	Float _g1 = (((to - from)) * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	return (from + _g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Random_obj,_float,return )

::String Random_obj::string( int length,::String __o_charactersToUse){
::String charactersToUse = __o_charactersToUse.Default(HX_CSTRING("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"));
	HX_STACK_FRAME("Random","string",0x190c43bc,"Random.string","Random.hx",35,0x4903e47b)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(charactersToUse,"charactersToUse")
{
		HX_STACK_LINE(36)
		::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			while((true)){
				HX_STACK_LINE(37)
				if ((!(((_g < length))))){
					HX_STACK_LINE(37)
					break;
				}
				HX_STACK_LINE(37)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(39)
				Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(39)
				Float _g11 = ((((charactersToUse.length - (int)1) + (int)1)) * _g1);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(39)
				int _g2 = ::Math_obj::floor(_g11);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(39)
				int _g3 = _g2;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(39)
				::String _g4 = charactersToUse.charAt(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(39)
				hx::AddEq(str,_g4);
			}
		}
		HX_STACK_LINE(41)
		return str;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Random_obj,string,return )

::Date Random_obj::date( ::Date earliest,::Date latest){
	HX_STACK_FRAME("Random","date",0x7a6c5059,"Random.date","Random.hx",46,0x4903e47b)
	HX_STACK_ARG(earliest,"earliest")
	HX_STACK_ARG(latest,"latest")
	HX_STACK_LINE(47)
	Float _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		Float from = earliest->getTime();		HX_STACK_VAR(from,"from");
		HX_STACK_LINE(47)
		Float to = latest->getTime();		HX_STACK_VAR(to,"to");
		HX_STACK_LINE(47)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		Float _g1 = (((to - from)) * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(47)
		_g2 = (from + _g1);
	}
	HX_STACK_LINE(47)
	return ::Date_obj::fromTime(_g2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Random_obj,date,return )

Dynamic Random_obj::fromArray( Dynamic arr){
	HX_STACK_FRAME("Random","fromArray",0xee9da1c4,"Random.fromArray","Random.hx",53,0x4903e47b)
	HX_STACK_ARG(arr,"arr")
	HX_STACK_LINE(53)
	if (((bool((arr != null())) && bool((arr->__Field(HX_CSTRING("length"),true) > (int)0))))){
		HX_STACK_LINE(53)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		Float _g1 = ((((arr->__Field(HX_CSTRING("length"),true) - (int)1) + (int)1)) * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		int _g2 = ::Math_obj::floor(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(53)
		int _g3 = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(53)
		return arr->__GetItem(_g3);
	}
	else{
		HX_STACK_LINE(53)
		return null();
	}
	HX_STACK_LINE(53)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,fromArray,return )

Dynamic Random_obj::shuffle( Dynamic arr){
	HX_STACK_FRAME("Random","shuffle",0xbd98b8ae,"Random.shuffle","Random.hx",59,0x4903e47b)
	HX_STACK_ARG(arr,"arr")
	HX_STACK_LINE(60)
	if (((arr != null()))){
		HX_STACK_LINE(61)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(61)
		int _g = arr->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		while((true)){
			HX_STACK_LINE(61)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(61)
				break;
			}
			HX_STACK_LINE(61)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(62)
			Float _g2 = ::Math_obj::random();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(62)
			Float _g11 = ((((arr->__Field(HX_CSTRING("length"),true) - (int)1) + (int)1)) * _g2);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(62)
			int _g21 = ::Math_obj::floor(_g11);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(62)
			int j = _g21;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(63)
			Dynamic a = arr->__GetItem(i);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(64)
			Dynamic b = arr->__GetItem(j);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(65)
			hx::IndexRef((arr).mPtr,i) = b;
			HX_STACK_LINE(66)
			hx::IndexRef((arr).mPtr,j) = a;
		}
	}
	HX_STACK_LINE(69)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,shuffle,return )

Dynamic Random_obj::fromIterable( Dynamic it){
	HX_STACK_FRAME("Random","fromIterable",0xe2c31767,"Random.fromIterable","Random.hx",75,0x4903e47b)
	HX_STACK_ARG(it,"it")
	HX_STACK_LINE(75)
	if (((it != null()))){
		HX_STACK_LINE(75)
		Dynamic arr = ::Lambda_obj::array(it);		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(75)
		if (((bool((arr != null())) && bool((arr->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(75)
			Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(75)
			Float _g1 = ((((arr->__Field(HX_CSTRING("length"),true) - (int)1) + (int)1)) * _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(75)
			int _g2 = ::Math_obj::floor(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(75)
			int _g3 = _g2;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(75)
			return arr->__GetItem(_g3);
		}
		else{
			HX_STACK_LINE(75)
			return null();
		}
	}
	else{
		HX_STACK_LINE(75)
		return null();
	}
	HX_STACK_LINE(75)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,fromIterable,return )

Dynamic Random_obj::enumConstructor( ::Enum e){
	HX_STACK_FRAME("Random","enumConstructor",0xfa5f572e,"Random.enumConstructor","Random.hx",81,0x4903e47b)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(81)
	if (((e != null()))){
		HX_STACK_LINE(81)
		Dynamic arr = ::Type_obj::allEnums(e);		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(81)
		if (((bool((arr != null())) && bool((arr->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(81)
			Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			Float _g1 = ((((arr->__Field(HX_CSTRING("length"),true) - (int)1) + (int)1)) * _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(81)
			int _g2 = ::Math_obj::floor(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(81)
			int _g3 = _g2;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(81)
			return arr->__GetItem(_g3);
		}
		else{
			HX_STACK_LINE(81)
			return null();
		}
	}
	else{
		HX_STACK_LINE(81)
		return null();
	}
	HX_STACK_LINE(81)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,enumConstructor,return )


Random_obj::Random_obj()
{
}

Dynamic Random_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return _int_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { return _bool_dyn(); }
		if (HX_FIELD_EQ(inName,"date") ) { return date_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { return _float_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { return string_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shuffle") ) { return shuffle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { return fromArray_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromIterable") ) { return fromIterable_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enumConstructor") ) { return enumConstructor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Random_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Random_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("bool"),
	HX_CSTRING("int"),
	HX_CSTRING("float"),
	HX_CSTRING("string"),
	HX_CSTRING("date"),
	HX_CSTRING("fromArray"),
	HX_CSTRING("shuffle"),
	HX_CSTRING("fromIterable"),
	HX_CSTRING("enumConstructor"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Random_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Random_obj::__mClass,"__mClass");
};

#endif

Class Random_obj::__mClass;

void Random_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Random"), hx::TCanCast< Random_obj> ,sStaticFields,sMemberFields,
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

void Random_obj::__boot()
{
}

