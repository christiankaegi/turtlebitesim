#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_CompressionAlgorithm
#include <lime/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace utils{

Void ByteArray_obj::__construct(hx::Null< int >  __o_size)
{
HX_STACK_FRAME("lime.utils.ByteArray","new",0x0dbc8bed,"lime.utils.ByteArray.new","lime/utils/ByteArray.hx",34,0x2063a1e5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_size,"size")
int size = __o_size.Default(0);
{
	HX_STACK_LINE(46)
	this->littleEndian = false;
	HX_STACK_LINE(45)
	this->allocated = (int)0;
	HX_STACK_LINE(43)
	this->position = (int)0;
	HX_STACK_LINE(130)
	this->length = (int)0;
	HX_STACK_LINE(131)
	if (((size > (int)0))){
		HX_STACK_LINE(138)
		Array< unsigned char > data = Array_obj< unsigned char >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(140)
		data->__SetSizeExact(size);
		HX_STACK_LINE(144)
		super::__construct(size,data);
	}
}
;
	return null();
}

//ByteArray_obj::~ByteArray_obj() { }

Dynamic ByteArray_obj::__CreateEmpty() { return  new ByteArray_obj; }
hx::ObjectPtr< ByteArray_obj > ByteArray_obj::__new(hx::Null< int >  __o_size)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(__o_size);
	return result;}

Dynamic ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *ByteArray_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::utils::IMemoryRange_obj)) return operator ::lime::utils::IMemoryRange_obj *();
	if (inType==typeid( ::lime::utils::IDataInput_obj)) return operator ::lime::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

void ByteArray_obj::__init__() {
HX_STACK_FRAME("lime.utils.ByteArray","__init__",0xb5df22a3,"lime.utils.ByteArray.__init__","lime/utils/ByteArray.hx",58,0x2063a1e5)
{

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	::lime::utils::ByteArray run(int length){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","lime/utils/ByteArray.hx",60,0x2063a1e5)
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(60)
			return ::lime::utils::ByteArray_obj::__new(length);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(60)
	Dynamic factory =  Dynamic(new _Function_1_1());		HX_STACK_VAR(factory,"factory");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	Void run(::lime::utils::ByteArray bytes,int length){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","lime/utils/ByteArray.hx",67,0x2063a1e5)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(69)
			if (((length > (int)0))){
				HX_STACK_LINE(70)
				bytes->__Field(HX_CSTRING("ensureElem"),true)((length - (int)1),true);
			}
			HX_STACK_LINE(71)
			bytes->__FieldRef(HX_CSTRING("length")) = length;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(67)
	Dynamic resize =  Dynamic(new _Function_1_2());		HX_STACK_VAR(resize,"resize");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	Array< unsigned char > run(::lime::utils::ByteArray bytes){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","lime/utils/ByteArray.hx",105,0x2063a1e5)
		HX_STACK_ARG(bytes,"bytes")
		{
			HX_STACK_LINE(105)
			if (((bytes == null()))){
				HX_STACK_LINE(105)
				return null();
			}
			else{
				HX_STACK_LINE(105)
				return bytes->__Field(HX_CSTRING("b"),true);
			}
			HX_STACK_LINE(105)
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(105)
	Dynamic bytes =  Dynamic(new _Function_1_3());		HX_STACK_VAR(bytes,"bytes");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	int run(::lime::utils::ByteArray bytes1){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","lime/utils/ByteArray.hx",106,0x2063a1e5)
		HX_STACK_ARG(bytes1,"bytes1")
		{
			HX_STACK_LINE(106)
			if (((bytes1 == null()))){
				HX_STACK_LINE(106)
				return (int)0;
			}
			else{
				HX_STACK_LINE(106)
				return bytes1->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(106)
			return (int)0;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(106)
	Dynamic slen =  Dynamic(new _Function_1_4());		HX_STACK_VAR(slen,"slen");
	HX_STACK_LINE(110)
	Dynamic init = ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_byte_array_init"),(int)4,null());		HX_STACK_VAR(init,"init");
	HX_STACK_LINE(111)
	if (((init != null()))){
		HX_STACK_LINE(111)
		init(factory,slen,resize,bytes);
	}
}
}

::String ByteArray_obj::asString( ){
	HX_STACK_FRAME("lime.utils.ByteArray","asString",0x166978b6,"lime.utils.ByteArray.asString","lime/utils/ByteArray.hx",156,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	return this->readUTFBytes(this->length);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,asString,return )

Void ByteArray_obj::checkData( int length){
{
		HX_STACK_FRAME("lime.utils.ByteArray","checkData",0xb6bc825f,"lime.utils.ByteArray.checkData","lime/utils/ByteArray.hx",165,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(165)
		if ((((length + this->position) > this->length))){
			HX_STACK_LINE(167)
			this->ThrowEOFi();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,checkData,(void))

Void ByteArray_obj::clear( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","clear",0x0e13ea5a,"lime.utils.ByteArray.clear","lime/utils/ByteArray.hx",175,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(177)
		this->length = (int)0;
		HX_STACK_LINE(178)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,clear,(void))

Void ByteArray_obj::compress( ::lime::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("lime.utils.ByteArray","compress",0xfa228cf5,"lime.utils.ByteArray.compress","lime/utils/ByteArray.hx",183,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(189)
		::lime::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(192)
		if (((algorithm == null()))){
			HX_STACK_LINE(194)
			algorithm = ::lime::utils::CompressionAlgorithm_obj::ZLIB;
		}
		HX_STACK_LINE(198)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(200)
		if (((algorithm == ::lime::utils::CompressionAlgorithm_obj::LZMA))){
			HX_STACK_LINE(202)
			Array< unsigned char > _g = ::lime::utils::ByteArray_obj::lime_lzma_encode(src->b);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(202)
			::haxe::io::Bytes _g1 = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(202)
			result = _g1;
		}
		else{
			HX_STACK_LINE(206)
			int windowBits;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(206)
			switch( (int)(algorithm->__Index())){
				case (int)0: {
					HX_STACK_LINE(208)
					windowBits = (int)-15;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(209)
					windowBits = (int)31;
				}
				;break;
				default: {
					HX_STACK_LINE(210)
					windowBits = (int)15;
				}
			}
			HX_STACK_LINE(217)
			::haxe::io::Bytes _g2 = ::haxe::zip::Compress_obj::run(src,(int)8);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(217)
			result = _g2;
		}
		HX_STACK_LINE(222)
		this->b = result->b;
		HX_STACK_LINE(223)
		this->length = result->length;
		HX_STACK_LINE(224)
		this->position = this->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,compress,(void))

Void ByteArray_obj::deflate( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","deflate",0xa25c1178,"lime.utils.ByteArray.deflate","lime/utils/ByteArray.hx",235,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		this->compress(::lime::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,deflate,(void))

Void ByteArray_obj::ensureElem( int size,bool updateLength){
{
		HX_STACK_FRAME("lime.utils.ByteArray","ensureElem",0x67e83180,"lime.utils.ByteArray.ensureElem","lime/utils/ByteArray.hx",241,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(updateLength,"updateLength")
		HX_STACK_LINE(243)
		int len = (size + (int)1);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(256)
		if (((this->b == null()))){
			HX_STACK_LINE(257)
			Array< unsigned char > _g = Array_obj< unsigned char >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(257)
			this->b = _g;
		}
		HX_STACK_LINE(259)
		if (((this->b->length < len))){
			HX_STACK_LINE(261)
			this->b->__SetSize(len);
		}
		HX_STACK_LINE(266)
		if (((bool(updateLength) && bool((this->length < len))))){
			HX_STACK_LINE(268)
			this->length = len;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,ensureElem,(void))

int ByteArray_obj::getLength( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getLength",0x3bd78169,"lime.utils.ByteArray.getLength","lime/utils/ByteArray.hx",295,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(295)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getLength,return )

::lime::utils::ByteArray ByteArray_obj::getByteBuffer( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getByteBuffer",0x574d302b,"lime.utils.ByteArray.getByteBuffer","lime/utils/ByteArray.hx",296,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getByteBuffer,return )

int ByteArray_obj::getStart( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getStart",0x5a45c93f,"lime.utils.ByteArray.getStart","lime/utils/ByteArray.hx",297,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getStart,return )

Void ByteArray_obj::inflate( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","inflate",0x0b7da294,"lime.utils.ByteArray.inflate","lime/utils/ByteArray.hx",303,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(303)
		this->uncompress(::lime::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,inflate,(void))

bool ByteArray_obj::readBoolean( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readBoolean",0x0cfd0e7f,"lime.utils.ByteArray.readBoolean","lime/utils/ByteArray.hx",313,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(313)
	if (((this->position < this->length))){
		HX_STACK_LINE(313)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(313)
		{
			HX_STACK_LINE(313)
			int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(313)
			_g = this->b->__get(pos);
		}
		HX_STACK_LINE(313)
		return (_g != (int)0);
	}
	else{
		HX_STACK_LINE(313)
		int _g1 = this->ThrowEOFi();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(313)
		return (_g1 != (int)0);
	}
	HX_STACK_LINE(313)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readBoolean,return )

int ByteArray_obj::readByte( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readByte",0xdf7e3ed1,"lime.utils.ByteArray.readByte","lime/utils/ByteArray.hx",319,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(325)
	int val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(325)
	if (((this->position < this->length))){
		HX_STACK_LINE(325)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(325)
		val = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(325)
		val = this->ThrowEOFi();
	}
	HX_STACK_LINE(326)
	if (((((int(val) & int((int)128))) != (int)0))){
		HX_STACK_LINE(326)
		return (val - (int)256);
	}
	else{
		HX_STACK_LINE(326)
		return val;
	}
	HX_STACK_LINE(326)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readByte,return )

Void ByteArray_obj::readBytes( ::lime::utils::ByteArray bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("lime.utils.ByteArray","readBytes",0xaef8b882,"lime.utils.ByteArray.readBytes","lime/utils/ByteArray.hx",332,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(354)
		if (((length == (int)0))){
			HX_STACK_LINE(354)
			length = (this->length - this->position);
		}
		HX_STACK_LINE(355)
		if ((((this->position + length) > this->length))){
			HX_STACK_LINE(355)
			this->ThrowEOFi();
		}
		HX_STACK_LINE(357)
		if (((bytes->length < (offset + length)))){
			HX_STACK_LINE(359)
			bytes->ensureElem(((offset + length) - (int)1),true);
		}
		HX_STACK_LINE(366)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(367)
		Array< unsigned char > b2 = bytes->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(368)
		int p = this->position;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(369)
			while((true)){
				HX_STACK_LINE(369)
				if ((!(((_g < length))))){
					HX_STACK_LINE(369)
					break;
				}
				HX_STACK_LINE(369)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(369)
				b2[(offset + i)] = b1->__get((p + i));
			}
		}
		HX_STACK_LINE(372)
		hx::AddEq(this->position,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,readBytes,(void))

Float ByteArray_obj::readDouble( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readDouble",0x76048f1a,"lime.utils.ByteArray.readDouble","lime/utils/ByteArray.hx",379,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(386)
	if ((((this->position + (int)8) > this->length))){
		HX_STACK_LINE(386)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(387)
	hx::AddEq(this->position,(int)8);
	HX_STACK_LINE(388)
	return this->getDouble((this->position - (int)8));
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readDouble,return )

Float ByteArray_obj::readFloat( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readFloat",0xf3f775b3,"lime.utils.ByteArray.readFloat","lime/utils/ByteArray.hx",407,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(414)
	if ((((this->position + (int)4) > this->length))){
		HX_STACK_LINE(414)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(415)
	hx::AddEq(this->position,(int)4);
	HX_STACK_LINE(416)
	return this->getFloat((this->position - (int)4));
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readFloat,return )

int ByteArray_obj::readInt( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readInt",0x022bb946,"lime.utils.ByteArray.readInt","lime/utils/ByteArray.hx",422,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(429)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(429)
	if (((this->position < this->length))){
		HX_STACK_LINE(429)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(429)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(429)
		ch1 = this->ThrowEOFi();
	}
	HX_STACK_LINE(430)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(430)
	if (((this->position < this->length))){
		HX_STACK_LINE(430)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(430)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(430)
		ch2 = this->ThrowEOFi();
	}
	HX_STACK_LINE(431)
	int ch3;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(431)
	if (((this->position < this->length))){
		HX_STACK_LINE(431)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(431)
		ch3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(431)
		ch3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(432)
	int ch4;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(432)
	if (((this->position < this->length))){
		HX_STACK_LINE(432)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(432)
		ch4 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(432)
		ch4 = this->ThrowEOFi();
	}
	HX_STACK_LINE(433)
	if ((this->littleEndian)){
		HX_STACK_LINE(433)
		return (int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1));
	}
	else{
		HX_STACK_LINE(433)
		return (int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4));
	}
	HX_STACK_LINE(433)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readInt,return )

::String ByteArray_obj::readMultiByte( int length,::String charSet){
	HX_STACK_FRAME("lime.utils.ByteArray","readMultiByte",0x680b0db8,"lime.utils.ByteArray.readMultiByte","lime/utils/ByteArray.hx",441,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(charSet,"charSet")
	HX_STACK_LINE(441)
	return this->readUTFBytes(length);
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,readMultiByte,return )

int ByteArray_obj::readShort( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readShort",0x6d883493,"lime.utils.ByteArray.readShort","lime/utils/ByteArray.hx",446,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(453)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(453)
	if (((this->position < this->length))){
		HX_STACK_LINE(453)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(453)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(453)
		ch1 = this->ThrowEOFi();
	}
	HX_STACK_LINE(454)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(454)
	if (((this->position < this->length))){
		HX_STACK_LINE(454)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(454)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(454)
		ch2 = this->ThrowEOFi();
	}
	HX_STACK_LINE(455)
	int val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(455)
	if ((this->littleEndian)){
		HX_STACK_LINE(455)
		val = (int((int(ch2) << int((int)8))) | int(ch1));
	}
	else{
		HX_STACK_LINE(455)
		val = (int((int(ch1) << int((int)8))) | int(ch2));
	}
	HX_STACK_LINE(456)
	if (((((int(val) & int((int)32768))) != (int)0))){
		HX_STACK_LINE(456)
		return (val - (int)65536);
	}
	else{
		HX_STACK_LINE(456)
		return val;
	}
	HX_STACK_LINE(456)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readShort,return )

int ByteArray_obj::readUnsignedByte( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedByte",0x22c35b66,"lime.utils.ByteArray.readUnsignedByte","lime/utils/ByteArray.hx",468,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(468)
	if (((this->position < this->length))){
		HX_STACK_LINE(468)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(468)
		return this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(468)
		return this->ThrowEOFi();
	}
	HX_STACK_LINE(468)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedByte,return )

int ByteArray_obj::readUnsignedInt( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedInt",0x956a0651,"lime.utils.ByteArray.readUnsignedInt","lime/utils/ByteArray.hx",474,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(481)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(481)
	if (((this->position < this->length))){
		HX_STACK_LINE(481)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(481)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(481)
		ch1 = this->ThrowEOFi();
	}
	HX_STACK_LINE(482)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(482)
	if (((this->position < this->length))){
		HX_STACK_LINE(482)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(482)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(482)
		ch2 = this->ThrowEOFi();
	}
	HX_STACK_LINE(483)
	int ch3;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(483)
	if (((this->position < this->length))){
		HX_STACK_LINE(483)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(483)
		ch3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(483)
		ch3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(484)
	int ch4;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(484)
	if (((this->position < this->length))){
		HX_STACK_LINE(484)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(484)
		ch4 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(484)
		ch4 = this->ThrowEOFi();
	}
	HX_STACK_LINE(485)
	if ((this->littleEndian)){
		HX_STACK_LINE(485)
		return (int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1));
	}
	else{
		HX_STACK_LINE(485)
		return (int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4));
	}
	HX_STACK_LINE(485)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedInt,return )

int ByteArray_obj::readUnsignedShort( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedShort",0x06bc1a5e,"lime.utils.ByteArray.readUnsignedShort","lime/utils/ByteArray.hx",491,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(498)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(498)
	if (((this->position < this->length))){
		HX_STACK_LINE(498)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(498)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(498)
		ch1 = this->ThrowEOFi();
	}
	HX_STACK_LINE(499)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(499)
	if (((this->position < this->length))){
		HX_STACK_LINE(499)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(499)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(499)
		ch2 = this->ThrowEOFi();
	}
	HX_STACK_LINE(500)
	if ((this->littleEndian)){
		HX_STACK_LINE(500)
		return (((int(ch2) << int((int)8))) + ch1);
	}
	else{
		HX_STACK_LINE(500)
		return (int((int(ch1) << int((int)8))) | int(ch2));
	}
	HX_STACK_LINE(500)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedShort,return )

::String ByteArray_obj::readUTF( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUTF",0x0234bd7e,"lime.utils.ByteArray.readUTF","lime/utils/ByteArray.hx",506,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(508)
	int bytesCount = this->readUnsignedShort();		HX_STACK_VAR(bytesCount,"bytesCount");
	HX_STACK_LINE(509)
	return this->readUTFBytes(bytesCount);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUTF,return )

::String ByteArray_obj::readUTFBytes( int len){
	HX_STACK_FRAME("lime.utils.ByteArray","readUTFBytes",0xa63b120d,"lime.utils.ByteArray.readUTFBytes","lime/utils/ByteArray.hx",514,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(555)
	if ((((this->position + len) > this->length))){
		HX_STACK_LINE(557)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(561)
	int p = this->position;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(562)
	hx::AddEq(this->position,len);
	HX_STACK_LINE(572)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(573)
	if (((bool((this->b != null())) && bool((len > (int)0))))){
		HX_STACK_LINE(574)
		::__hxcpp_string_of_bytes(this->b,result,p,len);
	}
	HX_STACK_LINE(576)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readUTFBytes,return )

Void ByteArray_obj::setLength( int length){
{
		HX_STACK_FRAME("lime.utils.ByteArray","setLength",0x1f286d75,"lime.utils.ByteArray.setLength","lime/utils/ByteArray.hx",589,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(591)
		if (((length > (int)0))){
			HX_STACK_LINE(592)
			this->ensureElem((length - (int)1),false);
		}
		HX_STACK_LINE(593)
		this->length = length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,setLength,(void))

::lime::utils::ByteArray ByteArray_obj::slice( int begin,Dynamic inEnd){
	HX_STACK_FRAME("lime.utils.ByteArray","slice",0x44803d1f,"lime.utils.ByteArray.slice","lime/utils/ByteArray.hx",600,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(inEnd,"inEnd")
	HX_STACK_LINE(602)
	if (((begin < (int)0))){
		HX_STACK_LINE(604)
		hx::AddEq(begin,this->length);
		HX_STACK_LINE(605)
		if (((begin < (int)0))){
			HX_STACK_LINE(606)
			begin = (int)0;
		}
	}
	HX_STACK_LINE(610)
	int end;		HX_STACK_VAR(end,"end");
	HX_STACK_LINE(610)
	if (((inEnd == null()))){
		HX_STACK_LINE(610)
		end = this->length;
	}
	else{
		HX_STACK_LINE(610)
		end = inEnd;
	}
	HX_STACK_LINE(612)
	if (((end < (int)0))){
		HX_STACK_LINE(614)
		hx::AddEq(end,this->length);
		HX_STACK_LINE(616)
		if (((end < (int)0))){
			HX_STACK_LINE(617)
			end = (int)0;
		}
	}
	HX_STACK_LINE(621)
	if (((begin >= end))){
		HX_STACK_LINE(622)
		return ::lime::utils::ByteArray_obj::__new(null());
	}
	HX_STACK_LINE(624)
	::lime::utils::ByteArray result = ::lime::utils::ByteArray_obj::__new((end - begin));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(626)
	int opos = this->position;		HX_STACK_VAR(opos,"opos");
	HX_STACK_LINE(627)
	result->blit((int)0,hx::ObjectPtr<OBJ_>(this),begin,(end - begin));
	HX_STACK_LINE(629)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,slice,return )

int ByteArray_obj::ThrowEOFi( ){
	HX_STACK_FRAME("lime.utils.ByteArray","ThrowEOFi",0x2ce113a0,"lime.utils.ByteArray.ThrowEOFi","lime/utils/ByteArray.hx",636,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(638)
	HX_STACK_DO_THROW(HX_CSTRING("new EOFError();"));
	HX_STACK_LINE(639)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,ThrowEOFi,return )

::String ByteArray_obj::toString( ){
	HX_STACK_FRAME("lime.utils.ByteArray","toString",0xaed215ff,"lime.utils.ByteArray.toString","lime/utils/ByteArray.hx",645,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(647)
	int cachePosition = this->position;		HX_STACK_VAR(cachePosition,"cachePosition");
	HX_STACK_LINE(648)
	this->position = (int)0;
	HX_STACK_LINE(649)
	::String value = this->readUTFBytes(this->length);		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(650)
	this->position = cachePosition;
	HX_STACK_LINE(651)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,toString,return )

Void ByteArray_obj::uncompress( ::lime::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("lime.utils.ByteArray","uncompress",0x5340af0e,"lime.utils.ByteArray.uncompress","lime/utils/ByteArray.hx",656,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(672)
		if (((algorithm == null()))){
			HX_STACK_LINE(672)
			algorithm = ::lime::utils::CompressionAlgorithm_obj::GZIP;
		}
		HX_STACK_LINE(677)
		::lime::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(680)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(682)
		if (((algorithm == ::lime::utils::CompressionAlgorithm_obj::LZMA))){
			HX_STACK_LINE(684)
			Array< unsigned char > _g = ::lime::utils::ByteArray_obj::lime_lzma_decode(src->b);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(684)
			::haxe::io::Bytes _g1 = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(684)
			result = _g1;
		}
		else{
			HX_STACK_LINE(688)
			int windowBits;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(688)
			switch( (int)(algorithm->__Index())){
				case (int)0: {
					HX_STACK_LINE(689)
					windowBits = (int)-15;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(690)
					windowBits = (int)31;
				}
				;break;
				default: {
					HX_STACK_LINE(691)
					windowBits = (int)15;
				}
			}
			HX_STACK_LINE(697)
			::haxe::io::Bytes _g2 = ::haxe::zip::Uncompress_obj::run(src,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(697)
			result = _g2;
		}
		HX_STACK_LINE(702)
		this->b = result->b;
		HX_STACK_LINE(703)
		this->length = result->length;
		HX_STACK_LINE(704)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,uncompress,(void))

Void ByteArray_obj::write_uncheck( int byte){
{
		HX_STACK_FRAME("lime.utils.ByteArray","write_uncheck",0xb8315afc,"lime.utils.ByteArray.write_uncheck","lime/utils/ByteArray.hx",714,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byte,"byte")
		HX_STACK_LINE(718)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(718)
		this->b->__unsafe_set(_g,byte);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,write_uncheck,(void))

Void ByteArray_obj::writeBoolean( bool value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeBoolean",0x97597a5c,"lime.utils.ByteArray.writeBoolean","lime/utils/ByteArray.hx",731,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(731)
		this->writeByte((  ((value)) ? int((int)1) : int((int)0) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeBoolean,(void))

Void ByteArray_obj::writeByte( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeByte",0x6a5076d4,"lime.utils.ByteArray.writeByte","lime/utils/ByteArray.hx",736,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(744)
		this->ensureElem(this->position,true);
		HX_STACK_LINE(748)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(748)
		this->b[_g] = (int(value) & int((int)255));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeByte,(void))

Void ByteArray_obj::writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("lime.utils.ByteArray","writeBytes",0x9c17831f,"lime.utils.ByteArray.writeBytes","lime/utils/ByteArray.hx",755,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(757)
		if (((bytes->length == (int)0))){
			HX_STACK_LINE(757)
			return null();
		}
		struct _Function_1_1{
			inline static Float Block( int &length){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/utils/ByteArray.hx",765,0x2063a1e5)
				{
					HX_STACK_LINE(765)
					int _int = length;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(765)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(765)
		if (((_Function_1_1::Block(length) == (int)0))){
			HX_STACK_LINE(765)
			length = (bytes->length - offset);
		}
		HX_STACK_LINE(766)
		this->ensureElem(((this->position + length) - (int)1),true);
		HX_STACK_LINE(767)
		int opos = this->position;		HX_STACK_VAR(opos,"opos");
		HX_STACK_LINE(768)
		this->position = (this->position + length);
		HX_STACK_LINE(769)
		this->blit(opos,bytes,offset,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeBytes,(void))

Void ByteArray_obj::writeDouble( Float x){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeDouble",0x03d70ddd,"lime.utils.ByteArray.writeDouble","lime/utils/ByteArray.hx",775,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(782)
		this->ensureElem((this->position + (int)7),true);
		HX_STACK_LINE(783)
		this->setDouble(this->position,x);
		HX_STACK_LINE(784)
		hx::AddEq(this->position,(int)8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeDouble,(void))

Void ByteArray_obj::writeFile( ::String path){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeFile",0x6ce92648,"lime.utils.ByteArray.writeFile","lime/utils/ByteArray.hx",796,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(796)
		::lime::utils::ByteArray_obj::lime_byte_array_overwrite_file(path,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFile,(void))

Void ByteArray_obj::writeFloat( Float x){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeFloat",0xe1164050,"lime.utils.ByteArray.writeFloat","lime/utils/ByteArray.hx",803,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(810)
		this->ensureElem((this->position + (int)3),true);
		HX_STACK_LINE(811)
		this->setFloat(this->position,x);
		HX_STACK_LINE(812)
		hx::AddEq(this->position,(int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFloat,(void))

Void ByteArray_obj::writeInt( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeInt",0x9a53b2a3,"lime.utils.ByteArray.writeInt","lime/utils/ByteArray.hx",818,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(825)
		this->ensureElem((this->position + (int)3),true);
		HX_STACK_LINE(827)
		if ((this->littleEndian)){
			HX_STACK_LINE(829)
			{
				HX_STACK_LINE(829)
				int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(829)
				this->b->__unsafe_set(_g,value);
			}
			HX_STACK_LINE(830)
			{
				HX_STACK_LINE(830)
				int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(830)
				this->b->__unsafe_set(_g1,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(831)
			{
				HX_STACK_LINE(831)
				int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(831)
				this->b->__unsafe_set(_g2,(int(value) >> int((int)16)));
			}
			HX_STACK_LINE(832)
			{
				HX_STACK_LINE(832)
				int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(832)
				this->b->__unsafe_set(_g3,(int(value) >> int((int)24)));
			}
		}
		else{
			HX_STACK_LINE(836)
			{
				HX_STACK_LINE(836)
				int _g4 = (this->position)++;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(836)
				this->b->__unsafe_set(_g4,(int(value) >> int((int)24)));
			}
			HX_STACK_LINE(837)
			{
				HX_STACK_LINE(837)
				int _g5 = (this->position)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(837)
				this->b->__unsafe_set(_g5,(int(value) >> int((int)16)));
			}
			HX_STACK_LINE(838)
			{
				HX_STACK_LINE(838)
				int _g6 = (this->position)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(838)
				this->b->__unsafe_set(_g6,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(839)
			{
				HX_STACK_LINE(839)
				int _g7 = (this->position)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(839)
				this->b->__unsafe_set(_g7,value);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeInt,(void))

Void ByteArray_obj::writeShort( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeShort",0x5aa6ff30,"lime.utils.ByteArray.writeShort","lime/utils/ByteArray.hx",847,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(854)
		this->ensureElem((this->position + (int)1),true);
		HX_STACK_LINE(856)
		if ((this->littleEndian)){
			HX_STACK_LINE(858)
			{
				HX_STACK_LINE(858)
				int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(858)
				this->b->__unsafe_set(_g,value);
			}
			HX_STACK_LINE(859)
			{
				HX_STACK_LINE(859)
				int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(859)
				this->b->__unsafe_set(_g1,(int(value) >> int((int)8)));
			}
		}
		else{
			HX_STACK_LINE(863)
			{
				HX_STACK_LINE(863)
				int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(863)
				this->b->__unsafe_set(_g2,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(864)
			{
				HX_STACK_LINE(864)
				int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(864)
				this->b->__unsafe_set(_g3,value);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeShort,(void))

Void ByteArray_obj::writeUnsignedInt( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUnsignedInt",0x9d6624ae,"lime.utils.ByteArray.writeUnsignedInt","lime/utils/ByteArray.hx",880,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(880)
		this->writeInt(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedInt,(void))

Void ByteArray_obj::writeUnsignedShort( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUnsignedShort",0x1cc249fb,"lime.utils.ByteArray.writeUnsignedShort","lime/utils/ByteArray.hx",893,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(893)
		this->writeShort(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedShort,(void))

Void ByteArray_obj::writeUTF( ::String value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUTF",0x9a5cb6db,"lime.utils.ByteArray.writeUTF","lime/utils/ByteArray.hx",899,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(908)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(value);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(910)
		this->writeShort(bytes->length);
		HX_STACK_LINE(911)
		this->writeBytes(bytes,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTF,(void))

Void ByteArray_obj::writeUTFBytes( ::String value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUTFBytes",0x2cbd0790,"lime.utils.ByteArray.writeUTFBytes","lime/utils/ByteArray.hx",917,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(954)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(value);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(956)
		this->writeBytes(bytes,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTFBytes,(void))

Void ByteArray_obj::__fromBytes( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("lime.utils.ByteArray","__fromBytes",0xdc5fcc0e,"lime.utils.ByteArray.__fromBytes","lime/utils/ByteArray.hx",962,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(969)
		this->b = bytes->b;
		HX_STACK_LINE(970)
		this->length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__fromBytes,(void))

int ByteArray_obj::__get( int pos){
	HX_STACK_FRAME("lime.utils.ByteArray","__get",0xb7e35a43,"lime.utils.ByteArray.__get","lime/utils/ByteArray.hx",987,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(987)
	return this->b->__get(pos);
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__get,return )

Dynamic ByteArray_obj::__getNativePointer( ){
	HX_STACK_FRAME("lime.utils.ByteArray","__getNativePointer",0x110c17a3,"lime.utils.ByteArray.__getNativePointer","lime/utils/ByteArray.hx",1008,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1008)
	return ::lime::utils::ByteArray_obj::lime_byte_array_get_native_pointer(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,__getNativePointer,return )

Void ByteArray_obj::__set( int pos,int v){
{
		HX_STACK_FRAME("lime.utils.ByteArray","__set",0xb7ec754f,"lime.utils.ByteArray.__set","lime/utils/ByteArray.hx",1092,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1092)
		this->b[pos] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__set,(void))

bool ByteArray_obj::get_bigEndian( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_bigEndian",0x3400371f,"lime.utils.ByteArray.get_bigEndian","lime/utils/ByteArray.hx",1109,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1109)
	return !(this->littleEndian);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bigEndian,return )

bool ByteArray_obj::set_bigEndian( bool value){
	HX_STACK_FRAME("lime.utils.ByteArray","set_bigEndian",0x7906192b,"lime.utils.ByteArray.set_bigEndian","lime/utils/ByteArray.hx",1110,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1110)
	this->littleEndian = !(value);
	HX_STACK_LINE(1110)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_bigEndian,return )

int ByteArray_obj::get_bytesAvailable( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_bytesAvailable",0x625f77ba,"lime.utils.ByteArray.get_bytesAvailable","lime/utils/ByteArray.hx",1116,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1116)
	return (this->length - this->position);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bytesAvailable,return )

int ByteArray_obj::get_byteLength( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_byteLength",0x941c2bea,"lime.utils.ByteArray.get_byteLength","lime/utils/ByteArray.hx",1124,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1124)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_byteLength,return )

::String ByteArray_obj::get_endian( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_endian",0x34cd8877,"lime.utils.ByteArray.get_endian","lime/utils/ByteArray.hx",1132,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1132)
	if ((this->littleEndian)){
		HX_STACK_LINE(1132)
		return HX_CSTRING("littleEndian");
	}
	else{
		HX_STACK_LINE(1132)
		return HX_CSTRING("bigEndian");
	}
	HX_STACK_LINE(1132)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_endian,return )

::String ByteArray_obj::set_endian( ::String endian){
	HX_STACK_FRAME("lime.utils.ByteArray","set_endian",0x384b26eb,"lime.utils.ByteArray.set_endian","lime/utils/ByteArray.hx",1137,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(endian,"endian")
	HX_STACK_LINE(1139)
	this->littleEndian = (endian == HX_CSTRING("littleEndian"));
	HX_STACK_LINE(1140)
	return endian;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_endian,return )

int ByteArray_obj::set_length( int value){
	HX_STACK_FRAME("lime.utils.ByteArray","set_length",0xdcca2336,"lime.utils.ByteArray.set_length","lime/utils/ByteArray.hx",1154,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1154)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_length,return )

::lime::utils::ByteArray ByteArray_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils.ByteArray","fromBytes",0x929a55ee,"lime.utils.ByteArray.fromBytes","lime/utils/ByteArray.hx",285,0x2063a1e5)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(287)
	::lime::utils::ByteArray result = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(288)
	{
		HX_STACK_LINE(288)
		result->b = bytes->b;
		HX_STACK_LINE(288)
		result->length = bytes->length;
	}
	HX_STACK_LINE(289)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,fromBytes,return )

::lime::utils::ByteArray ByteArray_obj::readFile( ::String path){
	HX_STACK_FRAME("lime.utils.ByteArray","readFile",0xe216ee45,"lime.utils.ByteArray.readFile","lime/utils/ByteArray.hx",401,0x2063a1e5)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(401)
	return ::lime::utils::ByteArray_obj::lime_byte_array_read_file(path);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readFile,return )

Dynamic ByteArray_obj::lime_byte_array_get_native_pointer;

Dynamic ByteArray_obj::lime_byte_array_overwrite_file;

Dynamic ByteArray_obj::lime_byte_array_read_file;

Dynamic ByteArray_obj::lime_lzma_decode;

Dynamic ByteArray_obj::lime_lzma_encode;


ByteArray_obj::ByteArray_obj()
{
}

Dynamic ByteArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { return get_endian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { return readFile_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"asString") ) { return asString_dyn(); }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"allocated") ) { return allocated; }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return get_bigEndian(); }
		if (HX_FIELD_EQ(inName,"checkData") ) { return checkData_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"ThrowEOFi") ) { return ThrowEOFi_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFile") ) { return writeFile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { return inCallProp ? get_byteLength() : byteLength; }
		if (HX_FIELD_EQ(inName,"ensureElem") ) { return ensureElem_dyn(); }
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"littleEndian") ) { return littleEndian; }
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"write_uncheck") ) { return write_uncheck_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bigEndian") ) { return get_bigEndian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bigEndian") ) { return set_bigEndian_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { return inCallProp ? get_bytesAvailable() : bytesAvailable; }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return objectEncoding; }
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { return get_byteLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { return lime_lzma_decode; }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { return lime_lzma_encode; }
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writeUnsignedShort") ) { return writeUnsignedShort_dyn(); }
		if (HX_FIELD_EQ(inName,"__getNativePointer") ) { return __getNativePointer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { return lime_byte_array_read_file; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_byte_array_overwrite_file") ) { return lime_byte_array_overwrite_file; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_byte_array_get_native_pointer") ) { return lime_byte_array_get_native_pointer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ByteArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { return set_endian(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocated") ) { allocated=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return set_bigEndian(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"littleEndian") ) { littleEndian=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { bytesAvailable=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { lime_lzma_decode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { lime_lzma_encode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { lime_byte_array_read_file=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_byte_array_overwrite_file") ) { lime_byte_array_overwrite_file=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_byte_array_get_native_pointer") ) { lime_byte_array_get_native_pointer=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bytesAvailable"));
	outFields->push(HX_CSTRING("endian"));
	outFields->push(HX_CSTRING("objectEncoding"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("allocated"));
	outFields->push(HX_CSTRING("littleEndian"));
	outFields->push(HX_CSTRING("bigEndian"));
	outFields->push(HX_CSTRING("byteLength"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromBytes"),
	HX_CSTRING("readFile"),
	HX_CSTRING("lime_byte_array_get_native_pointer"),
	HX_CSTRING("lime_byte_array_overwrite_file"),
	HX_CSTRING("lime_byte_array_read_file"),
	HX_CSTRING("lime_lzma_decode"),
	HX_CSTRING("lime_lzma_encode"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ByteArray_obj,bytesAvailable),HX_CSTRING("bytesAvailable")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,objectEncoding),HX_CSTRING("objectEncoding")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,position),HX_CSTRING("position")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,allocated),HX_CSTRING("allocated")},
	{hx::fsBool,(int)offsetof(ByteArray_obj,littleEndian),HX_CSTRING("littleEndian")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,byteLength),HX_CSTRING("byteLength")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bytesAvailable"),
	HX_CSTRING("objectEncoding"),
	HX_CSTRING("position"),
	HX_CSTRING("allocated"),
	HX_CSTRING("littleEndian"),
	HX_CSTRING("byteLength"),
	HX_CSTRING("asString"),
	HX_CSTRING("checkData"),
	HX_CSTRING("clear"),
	HX_CSTRING("compress"),
	HX_CSTRING("deflate"),
	HX_CSTRING("ensureElem"),
	HX_CSTRING("getLength"),
	HX_CSTRING("getByteBuffer"),
	HX_CSTRING("getStart"),
	HX_CSTRING("inflate"),
	HX_CSTRING("readBoolean"),
	HX_CSTRING("readByte"),
	HX_CSTRING("readBytes"),
	HX_CSTRING("readDouble"),
	HX_CSTRING("readFloat"),
	HX_CSTRING("readInt"),
	HX_CSTRING("readMultiByte"),
	HX_CSTRING("readShort"),
	HX_CSTRING("readUnsignedByte"),
	HX_CSTRING("readUnsignedInt"),
	HX_CSTRING("readUnsignedShort"),
	HX_CSTRING("readUTF"),
	HX_CSTRING("readUTFBytes"),
	HX_CSTRING("setLength"),
	HX_CSTRING("slice"),
	HX_CSTRING("ThrowEOFi"),
	HX_CSTRING("toString"),
	HX_CSTRING("uncompress"),
	HX_CSTRING("write_uncheck"),
	HX_CSTRING("writeBoolean"),
	HX_CSTRING("writeByte"),
	HX_CSTRING("writeBytes"),
	HX_CSTRING("writeDouble"),
	HX_CSTRING("writeFile"),
	HX_CSTRING("writeFloat"),
	HX_CSTRING("writeInt"),
	HX_CSTRING("writeShort"),
	HX_CSTRING("writeUnsignedInt"),
	HX_CSTRING("writeUnsignedShort"),
	HX_CSTRING("writeUTF"),
	HX_CSTRING("writeUTFBytes"),
	HX_CSTRING("__fromBytes"),
	HX_CSTRING("__get"),
	HX_CSTRING("__getNativePointer"),
	HX_CSTRING("__set"),
	HX_CSTRING("get_bigEndian"),
	HX_CSTRING("set_bigEndian"),
	HX_CSTRING("get_bytesAvailable"),
	HX_CSTRING("get_byteLength"),
	HX_CSTRING("get_endian"),
	HX_CSTRING("set_endian"),
	HX_CSTRING("set_length"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_get_native_pointer,"lime_byte_array_get_native_pointer");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_overwrite_file,"lime_byte_array_overwrite_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_lzma_decode,"lime_lzma_decode");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_lzma_encode,"lime_lzma_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_get_native_pointer,"lime_byte_array_get_native_pointer");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_overwrite_file,"lime_byte_array_overwrite_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_lzma_decode,"lime_lzma_decode");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_lzma_encode,"lime_lzma_encode");
};

#endif

Class ByteArray_obj::__mClass;

void ByteArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.utils.ByteArray"), hx::TCanCast< ByteArray_obj> ,sStaticFields,sMemberFields,
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

void ByteArray_obj::__boot()
{
	lime_byte_array_get_native_pointer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_byte_array_get_native_pointer"),(int)1,null());
	lime_byte_array_overwrite_file= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_byte_array_overwrite_file"),(int)2,null());
	lime_byte_array_read_file= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_byte_array_read_file"),(int)1,null());
	lime_lzma_decode= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_lzma_decode"),(int)1,null());
	lime_lzma_encode= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_lzma_encode"),(int)1,null());
}

} // end namespace lime
} // end namespace utils
