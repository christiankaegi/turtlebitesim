#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
namespace lime{
namespace graphics{
namespace utils{

Void ImageDataUtil_obj::__construct()
{
	return null();
}

//ImageDataUtil_obj::~ImageDataUtil_obj() { }

Dynamic ImageDataUtil_obj::__CreateEmpty() { return  new ImageDataUtil_obj; }
hx::ObjectPtr< ImageDataUtil_obj > ImageDataUtil_obj::__new()
{  hx::ObjectPtr< ImageDataUtil_obj > result = new ImageDataUtil_obj();
	result->__construct();
	return result;}

Dynamic ImageDataUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageDataUtil_obj > result = new ImageDataUtil_obj();
	result->__construct();
	return result;}

void ImageDataUtil_obj::__init__() {
HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","__init__",0xe8f6f8fe,"lime.graphics.utils.ImageDataUtil.__init__","lime/graphics/utils/ImageDataUtil.hx",23,0x494d921f)
{
	HX_STACK_LINE(25)
	Array< int > _g1;		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Array< int > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/utils/ImageDataUtil.hx",25,0x494d921f)
			{
				HX_STACK_LINE(25)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(25)
				Array< int > _g = Array_obj< int >::__new()->__SetSizeExact((int)256);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(25)
				this1 = _g;
				HX_STACK_LINE(25)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(25)
	_g1 = _Function_1_1::Block();
	HX_STACK_LINE(25)
	::lime::graphics::utils::ImageDataUtil_obj::__alpha16 = _g1;
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		while((true)){
			HX_STACK_LINE(27)
			if ((!(((_g < (int)256))))){
				HX_STACK_LINE(27)
				break;
			}
			HX_STACK_LINE(27)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				int val = ::Std_obj::_int((Float((i * (int)65536)) / Float((int)255)));		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(29)
				::lime::graphics::utils::ImageDataUtil_obj::__alpha16->__Field(HX_CSTRING("__unsafe_set"),true)(i,val);
			}
		}
	}
	HX_STACK_LINE(33)
	Array< int > _g3;		HX_STACK_VAR(_g3,"_g3");
	struct _Function_1_2{
		inline static Array< int > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/utils/ImageDataUtil.hx",33,0x494d921f)
			{
				HX_STACK_LINE(33)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(33)
				Array< int > _g2 = Array_obj< int >::__new()->__SetSizeExact((int)510);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(33)
				this1 = _g2;
				HX_STACK_LINE(33)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(33)
	_g3 = _Function_1_2::Block();
	HX_STACK_LINE(33)
	::lime::graphics::utils::ImageDataUtil_obj::__clamp = _g3;
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		while((true)){
			HX_STACK_LINE(35)
			if ((!(((_g < (int)255))))){
				HX_STACK_LINE(35)
				break;
			}
			HX_STACK_LINE(35)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(37)
			::lime::graphics::utils::ImageDataUtil_obj::__clamp->__Field(HX_CSTRING("__unsafe_set"),true)(i,i);
		}
	}
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		int _g11 = (int)255;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(41)
		int _g = (int)511;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		while((true)){
			HX_STACK_LINE(41)
			if ((!(((_g11 < _g))))){
				HX_STACK_LINE(41)
				break;
			}
			HX_STACK_LINE(41)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(43)
			::lime::graphics::utils::ImageDataUtil_obj::__clamp->__Field(HX_CSTRING("__unsafe_set"),true)(i,(int)255);
		}
	}
}
}

Array< int > ImageDataUtil_obj::__alpha16;

Array< int > ImageDataUtil_obj::__clamp;

Void ImageDataUtil_obj::colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::Float32Array colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","colorTransform",0x2c17e9b7,"lime.graphics.utils.ImageDataUtil.colorTransform","lime/graphics/utils/ImageDataUtil.hx",50,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(52)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(53)
		if (((data == null()))){
			HX_STACK_LINE(53)
			return null();
		}
		HX_STACK_LINE(56)
		if ((!(::lime::system::System_obj::disableCFFI))){
			HX_STACK_LINE(56)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_color_transform(image,rect,colorMatrix);
		}
		else{
			HX_STACK_LINE(60)
			int stride = (image->buffer->width * (int)4);		HX_STACK_VAR(stride,"stride");
			HX_STACK_LINE(61)
			int offset;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(63)
			Float _g = rect->get_top();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			Float _g1 = (_g + image->offsetY);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(63)
			int rowStart = ::Std_obj::_int(_g1);		HX_STACK_VAR(rowStart,"rowStart");
			HX_STACK_LINE(64)
			Float _g2 = rect->get_bottom();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(64)
			Float _g3 = (_g2 + image->offsetY);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(64)
			int rowEnd = ::Std_obj::_int(_g3);		HX_STACK_VAR(rowEnd,"rowEnd");
			HX_STACK_LINE(65)
			Float _g4 = rect->get_left();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(65)
			Float _g5 = (_g4 + image->offsetX);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(65)
			int columnStart = ::Std_obj::_int(_g5);		HX_STACK_VAR(columnStart,"columnStart");
			HX_STACK_LINE(66)
			Float _g6 = rect->get_right();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(66)
			Float _g7 = (_g6 + image->offsetX);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(66)
			int columnEnd = ::Std_obj::_int(_g7);		HX_STACK_VAR(columnEnd,"columnEnd");
			HX_STACK_LINE(68)
			int r;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(68)
			int g;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(68)
			int b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(68)
			int a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(68)
			int ex = (int)0;		HX_STACK_VAR(ex,"ex");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				int _g8 = rowStart;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(70)
				while((true)){
					HX_STACK_LINE(70)
					if ((!(((_g8 < rowEnd))))){
						HX_STACK_LINE(70)
						break;
					}
					HX_STACK_LINE(70)
					int row = (_g8)++;		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						int _g11 = columnStart;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(72)
						while((true)){
							HX_STACK_LINE(72)
							if ((!(((_g11 < columnEnd))))){
								HX_STACK_LINE(72)
								break;
							}
							HX_STACK_LINE(72)
							int column = (_g11)++;		HX_STACK_VAR(column,"column");
							HX_STACK_LINE(74)
							offset = ((row * stride) + (column * (int)4));
							HX_STACK_LINE(76)
							int _g81 = ::Std_obj::_int(((data->__get((offset + (int)3)) * colorMatrix->__get((int)18)) + (colorMatrix->__get((int)19) * (int)255)));		HX_STACK_VAR(_g81,"_g81");
							HX_STACK_LINE(76)
							a = _g81;
							HX_STACK_LINE(77)
							if (((a > (int)255))){
								HX_STACK_LINE(77)
								ex = (a - (int)255);
							}
							else{
								HX_STACK_LINE(77)
								ex = (int)0;
							}
							HX_STACK_LINE(78)
							int _g9 = ::Std_obj::_int((((data->__get((offset + (int)2)) * colorMatrix->__get((int)12)) + (colorMatrix->__get((int)14) * (int)255)) + ex));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(78)
							b = _g9;
							HX_STACK_LINE(79)
							if (((b > (int)255))){
								HX_STACK_LINE(79)
								ex = (b - (int)255);
							}
							else{
								HX_STACK_LINE(79)
								ex = (int)0;
							}
							HX_STACK_LINE(80)
							int _g10 = ::Std_obj::_int((((data->__get((offset + (int)1)) * colorMatrix->__get((int)6)) + (colorMatrix->__get((int)9) * (int)255)) + ex));		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(80)
							g = _g10;
							HX_STACK_LINE(81)
							if (((g > (int)255))){
								HX_STACK_LINE(81)
								ex = (g - (int)255);
							}
							else{
								HX_STACK_LINE(81)
								ex = (int)0;
							}
							HX_STACK_LINE(82)
							int _g111 = ::Std_obj::_int((((data->__get(offset) * colorMatrix->__get((int)0)) + (colorMatrix->__get((int)4) * (int)255)) + ex));		HX_STACK_VAR(_g111,"_g111");
							HX_STACK_LINE(82)
							r = _g111;
							HX_STACK_LINE(84)
							if (((r > (int)255))){
								HX_STACK_LINE(84)
								hx::__ArrayImplRef(data,offset) = (int)255;
							}
							else{
								HX_STACK_LINE(84)
								hx::__ArrayImplRef(data,offset) = r;
							}
							HX_STACK_LINE(85)
							if (((g > (int)255))){
								HX_STACK_LINE(85)
								hx::__ArrayImplRef(data,(offset + (int)1)) = (int)255;
							}
							else{
								HX_STACK_LINE(85)
								hx::__ArrayImplRef(data,(offset + (int)1)) = g;
							}
							HX_STACK_LINE(86)
							if (((b > (int)255))){
								HX_STACK_LINE(86)
								hx::__ArrayImplRef(data,(offset + (int)2)) = (int)255;
							}
							else{
								HX_STACK_LINE(86)
								hx::__ArrayImplRef(data,(offset + (int)2)) = b;
							}
							HX_STACK_LINE(87)
							if (((a > (int)255))){
								HX_STACK_LINE(87)
								hx::__ArrayImplRef(data,(offset + (int)3)) = (int)255;
							}
							else{
								HX_STACK_LINE(87)
								hx::__ArrayImplRef(data,(offset + (int)3)) = a;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(95)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,colorTransform,(void))

Void ImageDataUtil_obj::copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyChannel",0xa41162a0,"lime.graphics.utils.ImageDataUtil.copyChannel","lime/graphics/utils/ImageDataUtil.hx",100,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(102)
		int destIdx;		HX_STACK_VAR(destIdx,"destIdx");
		HX_STACK_LINE(102)
		switch( (int)(destChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(104)
				destIdx = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(105)
				destIdx = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(106)
				destIdx = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(107)
				destIdx = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(111)
		int srcIdx;		HX_STACK_VAR(srcIdx,"srcIdx");
		HX_STACK_LINE(111)
		switch( (int)(sourceChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(113)
				srcIdx = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(114)
				srcIdx = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(115)
				srcIdx = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(116)
				srcIdx = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(120)
		::lime::utils::UInt8Array srcData = sourceImage->buffer->data;		HX_STACK_VAR(srcData,"srcData");
		HX_STACK_LINE(121)
		::lime::utils::UInt8Array destData = image->buffer->data;		HX_STACK_VAR(destData,"destData");
		HX_STACK_LINE(123)
		if (((bool((srcData == null())) || bool((destData == null()))))){
			HX_STACK_LINE(123)
			return null();
		}
		HX_STACK_LINE(126)
		if ((!(::lime::system::System_obj::disableCFFI))){
			HX_STACK_LINE(126)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_copy_channel(image,sourceImage,sourceRect,destPoint,srcIdx,destIdx);
		}
		else{
			HX_STACK_LINE(130)
			int srcStride = ::Std_obj::_int((sourceImage->buffer->width * (int)4));		HX_STACK_VAR(srcStride,"srcStride");
			HX_STACK_LINE(131)
			int srcPosition = ::Std_obj::_int((((((sourceRect->x + sourceImage->offsetX)) * (int)4) + (srcStride * ((sourceRect->y + sourceImage->offsetY)))) + srcIdx));		HX_STACK_VAR(srcPosition,"srcPosition");
			HX_STACK_LINE(132)
			int _g = ::Std_obj::_int(((int)4 * ((sourceRect->width + sourceImage->offsetX))));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			int srcRowOffset = (srcStride - _g);		HX_STACK_VAR(srcRowOffset,"srcRowOffset");
			HX_STACK_LINE(133)
			int srcRowEnd = ::Std_obj::_int(((int)4 * (((sourceRect->x + sourceImage->offsetX) + sourceRect->width))));		HX_STACK_VAR(srcRowEnd,"srcRowEnd");
			HX_STACK_LINE(134)
			::lime::utils::UInt8Array srcData1 = sourceImage->buffer->data;		HX_STACK_VAR(srcData1,"srcData1");
			HX_STACK_LINE(136)
			int destStride = ::Std_obj::_int((image->buffer->width * (int)4));		HX_STACK_VAR(destStride,"destStride");
			HX_STACK_LINE(137)
			int destPosition = ::Std_obj::_int((((((destPoint->x + image->offsetX)) * (int)4) + (destStride * ((destPoint->y + image->offsetY)))) + destIdx));		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(138)
			int _g1 = ::Std_obj::_int(((int)4 * ((sourceRect->width + image->offsetX))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(138)
			int destRowOffset = (destStride - _g1);		HX_STACK_VAR(destRowOffset,"destRowOffset");
			HX_STACK_LINE(139)
			int destRowEnd = ::Std_obj::_int(((int)4 * (((destPoint->x + image->offsetX) + sourceRect->width))));		HX_STACK_VAR(destRowEnd,"destRowEnd");
			HX_STACK_LINE(140)
			::lime::utils::UInt8Array destData1 = image->buffer->data;		HX_STACK_VAR(destData1,"destData1");
			HX_STACK_LINE(142)
			int length = ::Std_obj::_int((sourceRect->width * sourceRect->height));		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(144)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(144)
				while((true)){
					HX_STACK_LINE(144)
					if ((!(((_g2 < length))))){
						HX_STACK_LINE(144)
						break;
					}
					HX_STACK_LINE(144)
					int i = (_g2)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(146)
					hx::__ArrayImplRef(destData1,destPosition) = srcData1->__get(srcPosition);
					HX_STACK_LINE(148)
					hx::AddEq(srcPosition,(int)4);
					HX_STACK_LINE(149)
					hx::AddEq(destPosition,(int)4);
					HX_STACK_LINE(151)
					if (((hx::Mod(srcPosition,srcStride) > srcRowEnd))){
						HX_STACK_LINE(153)
						hx::AddEq(srcPosition,srcRowOffset);
					}
					HX_STACK_LINE(157)
					if (((hx::Mod(destPosition,destStride) > destRowEnd))){
						HX_STACK_LINE(159)
						hx::AddEq(destPosition,destRowOffset);
					}
				}
			}
		}
		HX_STACK_LINE(167)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,copyChannel,(void))

Void ImageDataUtil_obj::copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyPixels",0x95aa37f0,"lime.graphics.utils.ImageDataUtil.copyPixels","lime/graphics/utils/ImageDataUtil.hx",172,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(174)
		if (((  (((alphaImage != null()))) ? bool(alphaImage->get_transparent()) : bool(false) ))){
			HX_STACK_LINE(176)
			if (((alphaPoint == null()))){
				HX_STACK_LINE(176)
				::lime::math::Vector2 _g = ::lime::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(176)
				alphaPoint = _g;
			}
			HX_STACK_LINE(180)
			::lime::graphics::Image tempData = image->clone();		HX_STACK_VAR(tempData,"tempData");
			HX_STACK_LINE(181)
			::lime::math::Rectangle _g1 = ::lime::math::Rectangle_obj::__new(alphaPoint->x,alphaPoint->y,sourceRect->width,sourceRect->height);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(181)
			::lime::math::Vector2 _g2 = ::lime::math::Vector2_obj::__new(sourceRect->x,sourceRect->y);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(181)
			tempData->copyChannel(alphaImage,_g1,_g2,::lime::graphics::ImageChannel_obj::ALPHA,::lime::graphics::ImageChannel_obj::ALPHA);
			HX_STACK_LINE(182)
			sourceImage = tempData;
		}
		HX_STACK_LINE(187)
		if ((!(::lime::system::System_obj::disableCFFI))){
			HX_STACK_LINE(187)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_copy_pixels(image,sourceImage,sourceRect,destPoint,mergeAlpha);
		}
		else{
			HX_STACK_LINE(191)
			int rowOffset = ::Std_obj::_int((((destPoint->y + image->offsetY) - sourceRect->y) - sourceImage->offsetY));		HX_STACK_VAR(rowOffset,"rowOffset");
			HX_STACK_LINE(192)
			int columnOffset = ::Std_obj::_int((((destPoint->x + image->offsetX) - sourceRect->x) - sourceImage->offsetY));		HX_STACK_VAR(columnOffset,"columnOffset");
			HX_STACK_LINE(194)
			::lime::utils::UInt8Array sourceData = sourceImage->buffer->data;		HX_STACK_VAR(sourceData,"sourceData");
			HX_STACK_LINE(195)
			int sourceStride = (sourceImage->buffer->width * (int)4);		HX_STACK_VAR(sourceStride,"sourceStride");
			HX_STACK_LINE(196)
			int sourceOffset = (int)0;		HX_STACK_VAR(sourceOffset,"sourceOffset");
			HX_STACK_LINE(198)
			::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(199)
			int stride = (image->buffer->width * (int)4);		HX_STACK_VAR(stride,"stride");
			HX_STACK_LINE(200)
			int offset = (int)0;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(202)
			if (((  ((!((!(mergeAlpha))))) ? bool(!(sourceImage->get_transparent())) : bool(true) ))){
				HX_STACK_LINE(213)
				Float _g3 = sourceRect->get_top();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(213)
				Float _g4 = (_g3 + sourceImage->offsetY);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(213)
				int _g1 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(213)
				Float _g5 = sourceRect->get_bottom();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(213)
				Float _g6 = (_g5 + sourceImage->offsetY);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(213)
				int _g = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(213)
				while((true)){
					HX_STACK_LINE(213)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(213)
						break;
					}
					HX_STACK_LINE(213)
					int row = (_g1)++;		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(215)
					{
						HX_STACK_LINE(215)
						Float _g7 = sourceRect->get_left();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(215)
						Float _g8 = (_g7 + sourceImage->offsetX);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(215)
						int _g31 = ::Std_obj::_int(_g8);		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(215)
						Float _g9 = sourceRect->get_right();		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(215)
						Float _g10 = (_g9 + sourceImage->offsetX);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(215)
						int _g2 = ::Std_obj::_int(_g10);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(215)
						while((true)){
							HX_STACK_LINE(215)
							if ((!(((_g31 < _g2))))){
								HX_STACK_LINE(215)
								break;
							}
							HX_STACK_LINE(215)
							int column = (_g31)++;		HX_STACK_VAR(column,"column");
							HX_STACK_LINE(217)
							sourceOffset = ((row * sourceStride) + (column * (int)4));
							HX_STACK_LINE(218)
							offset = ((((row + rowOffset)) * stride) + (((column + columnOffset)) * (int)4));
							HX_STACK_LINE(220)
							hx::__ArrayImplRef(data,offset) = sourceData->__get(sourceOffset);
							HX_STACK_LINE(221)
							hx::__ArrayImplRef(data,(offset + (int)1)) = sourceData->__get((sourceOffset + (int)1));
							HX_STACK_LINE(222)
							hx::__ArrayImplRef(data,(offset + (int)2)) = sourceData->__get((sourceOffset + (int)2));
							HX_STACK_LINE(223)
							hx::__ArrayImplRef(data,(offset + (int)3)) = sourceData->__get((sourceOffset + (int)3));
						}
					}
				}
			}
			else{
				HX_STACK_LINE(231)
				Float sourceAlpha;		HX_STACK_VAR(sourceAlpha,"sourceAlpha");
				HX_STACK_LINE(232)
				Float destAlpha;		HX_STACK_VAR(destAlpha,"destAlpha");
				HX_STACK_LINE(233)
				Float outA;		HX_STACK_VAR(outA,"outA");
				HX_STACK_LINE(234)
				Float oneMinusSourceAlpha;		HX_STACK_VAR(oneMinusSourceAlpha,"oneMinusSourceAlpha");
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(236)
					Float _g11 = sourceRect->get_top();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(236)
					Float _g12 = (_g11 + sourceImage->offsetY);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(236)
					int _g1 = ::Std_obj::_int(_g12);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(236)
					Float _g13 = sourceRect->get_bottom();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(236)
					Float _g14 = (_g13 + sourceImage->offsetY);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(236)
					int _g = ::Std_obj::_int(_g14);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(236)
					while((true)){
						HX_STACK_LINE(236)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(236)
							break;
						}
						HX_STACK_LINE(236)
						int row = (_g1)++;		HX_STACK_VAR(row,"row");
						HX_STACK_LINE(238)
						{
							HX_STACK_LINE(238)
							Float _g15 = sourceRect->get_left();		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(238)
							Float _g16 = (_g15 + sourceImage->offsetX);		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(238)
							int _g3 = ::Std_obj::_int(_g16);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(238)
							Float _g17 = sourceRect->get_right();		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(238)
							Float _g18 = (_g17 + sourceImage->offsetX);		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(238)
							int _g2 = ::Std_obj::_int(_g18);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(238)
							while((true)){
								HX_STACK_LINE(238)
								if ((!(((_g3 < _g2))))){
									HX_STACK_LINE(238)
									break;
								}
								HX_STACK_LINE(238)
								int column = (_g3)++;		HX_STACK_VAR(column,"column");
								HX_STACK_LINE(240)
								sourceOffset = ((row * sourceStride) + (column * (int)4));
								HX_STACK_LINE(241)
								offset = ((((row + rowOffset)) * stride) + (((column + columnOffset)) * (int)4));
								HX_STACK_LINE(243)
								sourceAlpha = (Float(sourceData->__get((sourceOffset + (int)3))) / Float(255.0));
								HX_STACK_LINE(244)
								destAlpha = (Float(data->__get((offset + (int)3))) / Float(255.0));
								HX_STACK_LINE(245)
								oneMinusSourceAlpha = ((int)1 - sourceAlpha);
								HX_STACK_LINE(247)
								outA = (sourceAlpha + (destAlpha * oneMinusSourceAlpha));
								HX_STACK_LINE(248)
								{
									HX_STACK_LINE(248)
									int index = ::Math_obj::round((Float((((sourceData->__get(sourceOffset) * sourceAlpha) + ((data->__get(offset) * destAlpha) * oneMinusSourceAlpha)))) / Float(outA)));		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(248)
									hx::__ArrayImplRef(data,offset) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
								}
								HX_STACK_LINE(249)
								{
									HX_STACK_LINE(249)
									int index = ::Math_obj::round((Float((((sourceData->__get((sourceOffset + (int)1)) * sourceAlpha) + ((data->__get((offset + (int)1)) * destAlpha) * oneMinusSourceAlpha)))) / Float(outA)));		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(249)
									hx::__ArrayImplRef(data,(offset + (int)1)) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
								}
								HX_STACK_LINE(250)
								{
									HX_STACK_LINE(250)
									int index = ::Math_obj::round((Float((((sourceData->__get((sourceOffset + (int)2)) * sourceAlpha) + ((data->__get((offset + (int)2)) * destAlpha) * oneMinusSourceAlpha)))) / Float(outA)));		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(250)
									hx::__ArrayImplRef(data,(offset + (int)2)) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
								}
								HX_STACK_LINE(251)
								{
									HX_STACK_LINE(251)
									int index = ::Math_obj::round((outA * 255.0));		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(251)
									hx::__ArrayImplRef(data,(offset + (int)3)) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(262)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,copyPixels,(void))

Void ImageDataUtil_obj::fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","fillRect",0x163460f5,"lime.graphics.utils.ImageDataUtil.fillRect","lime/graphics/utils/ImageDataUtil.hx",267,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(269)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(269)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(269)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(269)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(271)
		if (((format == (int)1))){
			HX_STACK_LINE(273)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(273)
			if ((image->get_transparent())){
				HX_STACK_LINE(273)
				_g = (int((int(color) >> int((int)24))) & int((int)255));
			}
			else{
				HX_STACK_LINE(273)
				_g = (int)255;
			}
			HX_STACK_LINE(273)
			a = _g;
			HX_STACK_LINE(274)
			r = (int((int(color) >> int((int)16))) & int((int)255));
			HX_STACK_LINE(275)
			g = (int((int(color) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(276)
			b = (int(color) & int((int)255));
		}
		else{
			HX_STACK_LINE(280)
			r = (int((int(color) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(281)
			g = (int((int(color) >> int((int)16))) & int((int)255));
			HX_STACK_LINE(282)
			b = (int((int(color) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(283)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(283)
			if ((image->get_transparent())){
				HX_STACK_LINE(283)
				_g1 = (int(color) & int((int)255));
			}
			else{
				HX_STACK_LINE(283)
				_g1 = (int)255;
			}
			HX_STACK_LINE(283)
			a = _g1;
		}
		HX_STACK_LINE(287)
		int rgba = (int((int((int(r) | int((int(g) << int((int)8))))) | int((int(b) << int((int)16))))) | int((int(a) << int((int)24))));		HX_STACK_VAR(rgba,"rgba");
		HX_STACK_LINE(289)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(290)
		if (((data == null()))){
			HX_STACK_LINE(290)
			return null();
		}
		HX_STACK_LINE(293)
		if ((!(::lime::system::System_obj::disableCFFI))){
			HX_STACK_LINE(293)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_fill_rect(image,rect,rgba);
		}
		else{
			HX_STACK_LINE(297)
			if (((bool((bool((bool((bool((bool((rect->width == image->buffer->width)) && bool((rect->height == image->buffer->height)))) && bool((rect->x == (int)0)))) && bool((rect->y == (int)0)))) && bool((image->offsetX == (int)0)))) && bool((image->offsetY == (int)0))))){
				HX_STACK_LINE(299)
				int length = (image->buffer->width * image->buffer->height);		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(301)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(302)
					while((true)){
						HX_STACK_LINE(302)
						if ((!(((_g < length))))){
							HX_STACK_LINE(302)
							break;
						}
						HX_STACK_LINE(302)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(304)
						j = (i * (int)4);
						HX_STACK_LINE(312)
						::__hxcpp_memory_set_ui32(data->bytes,(j + data->byteOffset),rgba);
					}
				}
			}
			else{
				HX_STACK_LINE(319)
				int stride = (image->buffer->width * (int)4);		HX_STACK_VAR(stride,"stride");
				HX_STACK_LINE(320)
				int offset;		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(322)
				int rowStart = ::Std_obj::_int((rect->y + image->offsetY));		HX_STACK_VAR(rowStart,"rowStart");
				HX_STACK_LINE(323)
				Float _g2 = rect->get_bottom();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(323)
				Float _g3 = (_g2 + image->offsetY);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(323)
				int rowEnd = ::Std_obj::_int(_g3);		HX_STACK_VAR(rowEnd,"rowEnd");
				HX_STACK_LINE(324)
				int columnStart = ::Std_obj::_int((rect->x + image->offsetX));		HX_STACK_VAR(columnStart,"columnStart");
				HX_STACK_LINE(325)
				Float _g4 = rect->get_right();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(325)
				Float _g5 = (_g4 + image->offsetX);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(325)
				int columnEnd = ::Std_obj::_int(_g5);		HX_STACK_VAR(columnEnd,"columnEnd");
				HX_STACK_LINE(327)
				{
					HX_STACK_LINE(327)
					int _g = rowStart;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(327)
					while((true)){
						HX_STACK_LINE(327)
						if ((!(((_g < rowEnd))))){
							HX_STACK_LINE(327)
							break;
						}
						HX_STACK_LINE(327)
						int row = (_g)++;		HX_STACK_VAR(row,"row");
						HX_STACK_LINE(329)
						{
							HX_STACK_LINE(329)
							int _g1 = columnStart;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(329)
							while((true)){
								HX_STACK_LINE(329)
								if ((!(((_g1 < columnEnd))))){
									HX_STACK_LINE(329)
									break;
								}
								HX_STACK_LINE(329)
								int column = (_g1)++;		HX_STACK_VAR(column,"column");
								HX_STACK_LINE(331)
								offset = ((row * stride) + (column * (int)4));
								HX_STACK_LINE(339)
								::__hxcpp_memory_set_ui32(data->bytes,(offset + data->byteOffset),rgba);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(350)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,fillRect,(void))

Void ImageDataUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","floodFill",0xfbc79ff3,"lime.graphics.utils.ImageDataUtil.floodFill","lime/graphics/utils/ImageDataUtil.hx",355,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(357)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(358)
		if (((data == null()))){
			HX_STACK_LINE(358)
			return null();
		}
		HX_STACK_LINE(360)
		if (((format == (int)1))){
			HX_STACK_LINE(360)
			color = (int((int(((int(color) & int((int)16777215)))) << int((int)8))) | int((int((int(color) >> int((int)24))) & int((int)255))));
		}
		HX_STACK_LINE(363)
		if ((!(::lime::system::System_obj::disableCFFI))){
			HX_STACK_LINE(363)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_flood_fill(image,x,y,color);
		}
		else{
			HX_STACK_LINE(367)
			int offset = ((((y + image->offsetY)) * ((image->buffer->width * (int)4))) + (((x + image->offsetX)) * (int)4));		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(368)
			int hitColorR = data->__get(offset);		HX_STACK_VAR(hitColorR,"hitColorR");
			HX_STACK_LINE(369)
			int hitColorG = data->__get((offset + (int)1));		HX_STACK_VAR(hitColorG,"hitColorG");
			HX_STACK_LINE(370)
			int hitColorB = data->__get((offset + (int)2));		HX_STACK_VAR(hitColorB,"hitColorB");
			HX_STACK_LINE(371)
			int hitColorA;		HX_STACK_VAR(hitColorA,"hitColorA");
			HX_STACK_LINE(371)
			if ((image->get_transparent())){
				HX_STACK_LINE(371)
				hitColorA = data->__get((offset + (int)3));
			}
			else{
				HX_STACK_LINE(371)
				hitColorA = (int)255;
			}
			HX_STACK_LINE(373)
			int r = (int((int(color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(374)
			int g = (int((int(color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(375)
			int b = (int((int(color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(376)
			int a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(376)
			if ((image->get_transparent())){
				HX_STACK_LINE(376)
				a = (int(color) & int((int)255));
			}
			else{
				HX_STACK_LINE(376)
				a = (int)255;
			}
			HX_STACK_LINE(378)
			if (((bool((bool((bool((hitColorR == r)) && bool((hitColorG == g)))) && bool((hitColorB == b)))) && bool((hitColorA == a))))){
				HX_STACK_LINE(378)
				return null();
			}
			HX_STACK_LINE(380)
			Array< int > dx = Array_obj< int >::__new().Add((int)0).Add((int)-1).Add((int)1).Add((int)0);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(381)
			Array< int > dy = Array_obj< int >::__new().Add((int)-1).Add((int)0).Add((int)0).Add((int)1);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(383)
			int minX = -(image->offsetX);		HX_STACK_VAR(minX,"minX");
			HX_STACK_LINE(384)
			int minY = -(image->offsetY);		HX_STACK_VAR(minY,"minY");
			HX_STACK_LINE(385)
			int maxX = (minX + image->width);		HX_STACK_VAR(maxX,"maxX");
			HX_STACK_LINE(386)
			int maxY = (minY + image->height);		HX_STACK_VAR(maxY,"maxY");
			HX_STACK_LINE(388)
			Array< int > queue = Array_obj< int >::__new();		HX_STACK_VAR(queue,"queue");
			HX_STACK_LINE(389)
			queue->push(x);
			HX_STACK_LINE(390)
			queue->push(y);
			HX_STACK_LINE(392)
			while((true)){
				HX_STACK_LINE(392)
				if ((!(((queue->length > (int)0))))){
					HX_STACK_LINE(392)
					break;
				}
				HX_STACK_LINE(394)
				Dynamic curPointY = queue->pop();		HX_STACK_VAR(curPointY,"curPointY");
				HX_STACK_LINE(395)
				Dynamic curPointX = queue->pop();		HX_STACK_VAR(curPointX,"curPointX");
				HX_STACK_LINE(397)
				{
					HX_STACK_LINE(397)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(397)
					while((true)){
						HX_STACK_LINE(397)
						if ((!(((_g < (int)4))))){
							HX_STACK_LINE(397)
							break;
						}
						HX_STACK_LINE(397)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(399)
						int nextPointX = (curPointX + dx->__get(i));		HX_STACK_VAR(nextPointX,"nextPointX");
						HX_STACK_LINE(400)
						int nextPointY = (curPointY + dy->__get(i));		HX_STACK_VAR(nextPointY,"nextPointY");
						HX_STACK_LINE(402)
						if (((bool((bool((bool((nextPointX < minX)) || bool((nextPointY < minY)))) || bool((nextPointX >= maxX)))) || bool((nextPointY >= maxY))))){
							HX_STACK_LINE(404)
							continue;
						}
						HX_STACK_LINE(408)
						int nextPointOffset = ((((nextPointY * image->width) + nextPointX)) * (int)4);		HX_STACK_VAR(nextPointOffset,"nextPointOffset");
						HX_STACK_LINE(410)
						if (((bool((bool((bool((data->__get(nextPointOffset) == hitColorR)) && bool((data->__get((nextPointOffset + (int)1)) == hitColorG)))) && bool((data->__get((nextPointOffset + (int)2)) == hitColorB)))) && bool((data->__get((nextPointOffset + (int)3)) == hitColorA))))){
							HX_STACK_LINE(412)
							hx::__ArrayImplRef(data,nextPointOffset) = r;
							HX_STACK_LINE(413)
							hx::__ArrayImplRef(data,(nextPointOffset + (int)1)) = g;
							HX_STACK_LINE(414)
							hx::__ArrayImplRef(data,(nextPointOffset + (int)2)) = b;
							HX_STACK_LINE(415)
							hx::__ArrayImplRef(data,(nextPointOffset + (int)3)) = a;
							HX_STACK_LINE(417)
							queue->push(nextPointX);
							HX_STACK_LINE(418)
							queue->push(nextPointY);
						}
					}
				}
			}
		}
		HX_STACK_LINE(428)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,floodFill,(void))

::lime::math::Rectangle ImageDataUtil_obj::getColorBoundsRect( ::lime::graphics::Image image,int mask,int color,hx::Null< bool >  __o_findColor,int format){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getColorBoundsRect",0xfea06eb4,"lime.graphics.utils.ImageDataUtil.getColorBoundsRect","lime/graphics/utils/ImageDataUtil.hx",433,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(435)
		int left = (image->width + (int)1);		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(436)
		int right = (int)0;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(437)
		int top = (image->height + (int)1);		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(438)
		int bottom = (int)0;		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(440)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(440)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(440)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(440)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(441)
		int mr;		HX_STACK_VAR(mr,"mr");
		HX_STACK_LINE(441)
		int mg;		HX_STACK_VAR(mg,"mg");
		HX_STACK_LINE(441)
		int mb;		HX_STACK_VAR(mb,"mb");
		HX_STACK_LINE(441)
		int ma;		HX_STACK_VAR(ma,"ma");
		HX_STACK_LINE(443)
		if (((format == (int)1))){
			HX_STACK_LINE(445)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(445)
			if ((image->get_transparent())){
				HX_STACK_LINE(445)
				_g = (int((int(color) >> int((int)24))) & int((int)255));
			}
			else{
				HX_STACK_LINE(445)
				_g = (int)255;
			}
			HX_STACK_LINE(445)
			a = _g;
			HX_STACK_LINE(446)
			r = (int((int(color) >> int((int)16))) & int((int)255));
			HX_STACK_LINE(447)
			g = (int((int(color) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(448)
			b = (int(color) & int((int)255));
			HX_STACK_LINE(450)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(450)
			if ((image->get_transparent())){
				HX_STACK_LINE(450)
				_g1 = (int((int(mask) >> int((int)24))) & int((int)255));
			}
			else{
				HX_STACK_LINE(450)
				_g1 = (int)255;
			}
			HX_STACK_LINE(450)
			ma = _g1;
			HX_STACK_LINE(451)
			mr = (int((int(mask) >> int((int)16))) & int((int)255));
			HX_STACK_LINE(452)
			mg = (int((int(mask) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(453)
			mb = (int(mask) & int((int)255));
		}
		else{
			HX_STACK_LINE(457)
			r = (int((int(color) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(458)
			g = (int((int(color) >> int((int)16))) & int((int)255));
			HX_STACK_LINE(459)
			b = (int((int(color) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(460)
			int _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(460)
			if ((image->get_transparent())){
				HX_STACK_LINE(460)
				_g2 = (int(color) & int((int)255));
			}
			else{
				HX_STACK_LINE(460)
				_g2 = (int)255;
			}
			HX_STACK_LINE(460)
			a = _g2;
			HX_STACK_LINE(462)
			mr = (int((int(mask) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(463)
			mg = (int((int(mask) >> int((int)16))) & int((int)255));
			HX_STACK_LINE(464)
			mb = (int((int(mask) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(465)
			int _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(465)
			if ((image->get_transparent())){
				HX_STACK_LINE(465)
				_g3 = (int(mask) & int((int)255));
			}
			else{
				HX_STACK_LINE(465)
				_g3 = (int)255;
			}
			HX_STACK_LINE(465)
			ma = _g3;
		}
		HX_STACK_LINE(469)
		color = (int((int((int(r) | int((int(g) << int((int)8))))) | int((int(b) << int((int)16))))) | int((int(a) << int((int)24))));
		HX_STACK_LINE(470)
		mask = (int((int((int(mr) | int((int(mg) << int((int)8))))) | int((int(mb) << int((int)16))))) | int((int(mask) << int((int)24))));
		HX_STACK_LINE(472)
		int pix;		HX_STACK_VAR(pix,"pix");
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(474)
			int _g = image->width;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(474)
			while((true)){
				HX_STACK_LINE(474)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(474)
					break;
				}
				HX_STACK_LINE(474)
				int ix = (_g1)++;		HX_STACK_VAR(ix,"ix");
				HX_STACK_LINE(476)
				bool hit = false;		HX_STACK_VAR(hit,"hit");
				HX_STACK_LINE(478)
				{
					HX_STACK_LINE(478)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(478)
					int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(478)
					while((true)){
						HX_STACK_LINE(478)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(478)
							break;
						}
						HX_STACK_LINE(478)
						int iy = (_g3)++;		HX_STACK_VAR(iy,"iy");
						HX_STACK_LINE(480)
						int _g4 = image->getPixel32(ix,iy,null());		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(480)
						pix = _g4;
						HX_STACK_LINE(481)
						if ((findColor)){
							HX_STACK_LINE(481)
							hit = (((int(pix) & int(mask))) == color);
						}
						else{
							HX_STACK_LINE(481)
							hit = (((int(pix) & int(mask))) != color);
						}
						HX_STACK_LINE(483)
						if ((hit)){
							HX_STACK_LINE(485)
							if (((ix < left))){
								HX_STACK_LINE(485)
								left = ix;
							}
							HX_STACK_LINE(486)
							break;
						}
					}
				}
				HX_STACK_LINE(492)
				if ((hit)){
					HX_STACK_LINE(494)
					break;
				}
			}
		}
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(500)
			int _g = image->width;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(500)
			while((true)){
				HX_STACK_LINE(500)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(500)
					break;
				}
				HX_STACK_LINE(500)
				int _ix = (_g1)++;		HX_STACK_VAR(_ix,"_ix");
				HX_STACK_LINE(502)
				int ix = ((image->width - (int)1) - _ix);		HX_STACK_VAR(ix,"ix");
				HX_STACK_LINE(503)
				bool hit = false;		HX_STACK_VAR(hit,"hit");
				HX_STACK_LINE(505)
				{
					HX_STACK_LINE(505)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(505)
					int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(505)
					while((true)){
						HX_STACK_LINE(505)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(505)
							break;
						}
						HX_STACK_LINE(505)
						int iy = (_g3)++;		HX_STACK_VAR(iy,"iy");
						HX_STACK_LINE(507)
						int _g5 = image->getPixel32(ix,iy,null());		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(507)
						pix = _g5;
						HX_STACK_LINE(508)
						if ((findColor)){
							HX_STACK_LINE(508)
							hit = (((int(pix) & int(mask))) == color);
						}
						else{
							HX_STACK_LINE(508)
							hit = (((int(pix) & int(mask))) != color);
						}
						HX_STACK_LINE(510)
						if ((hit)){
							HX_STACK_LINE(512)
							if (((ix > right))){
								HX_STACK_LINE(512)
								right = ix;
							}
							HX_STACK_LINE(513)
							break;
						}
					}
				}
				HX_STACK_LINE(519)
				if ((hit)){
					HX_STACK_LINE(521)
					break;
				}
			}
		}
		HX_STACK_LINE(527)
		{
			HX_STACK_LINE(527)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(527)
			int _g = image->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(527)
			while((true)){
				HX_STACK_LINE(527)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(527)
					break;
				}
				HX_STACK_LINE(527)
				int iy = (_g1)++;		HX_STACK_VAR(iy,"iy");
				HX_STACK_LINE(529)
				bool hit = false;		HX_STACK_VAR(hit,"hit");
				HX_STACK_LINE(531)
				{
					HX_STACK_LINE(531)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(531)
					int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(531)
					while((true)){
						HX_STACK_LINE(531)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(531)
							break;
						}
						HX_STACK_LINE(531)
						int ix = (_g3)++;		HX_STACK_VAR(ix,"ix");
						HX_STACK_LINE(533)
						int _g6 = image->getPixel32(ix,iy,null());		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(533)
						pix = _g6;
						HX_STACK_LINE(534)
						if ((findColor)){
							HX_STACK_LINE(534)
							hit = (((int(pix) & int(mask))) == color);
						}
						else{
							HX_STACK_LINE(534)
							hit = (((int(pix) & int(mask))) != color);
						}
						HX_STACK_LINE(536)
						if ((hit)){
							HX_STACK_LINE(538)
							if (((iy < top))){
								HX_STACK_LINE(538)
								top = iy;
							}
							HX_STACK_LINE(539)
							break;
						}
					}
				}
				HX_STACK_LINE(545)
				if ((hit)){
					HX_STACK_LINE(547)
					break;
				}
			}
		}
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(553)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(553)
			int _g = image->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(553)
			while((true)){
				HX_STACK_LINE(553)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(553)
					break;
				}
				HX_STACK_LINE(553)
				int _iy = (_g1)++;		HX_STACK_VAR(_iy,"_iy");
				HX_STACK_LINE(555)
				int iy = ((image->height - (int)1) - _iy);		HX_STACK_VAR(iy,"iy");
				HX_STACK_LINE(556)
				bool hit = false;		HX_STACK_VAR(hit,"hit");
				HX_STACK_LINE(558)
				{
					HX_STACK_LINE(558)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(558)
					int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(558)
					while((true)){
						HX_STACK_LINE(558)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(558)
							break;
						}
						HX_STACK_LINE(558)
						int ix = (_g3)++;		HX_STACK_VAR(ix,"ix");
						HX_STACK_LINE(560)
						int _g7 = image->getPixel32(ix,iy,null());		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(560)
						pix = _g7;
						HX_STACK_LINE(561)
						if ((findColor)){
							HX_STACK_LINE(561)
							hit = (((int(pix) & int(mask))) == color);
						}
						else{
							HX_STACK_LINE(561)
							hit = (((int(pix) & int(mask))) != color);
						}
						HX_STACK_LINE(563)
						if ((hit)){
							HX_STACK_LINE(565)
							if (((iy > bottom))){
								HX_STACK_LINE(565)
								bottom = iy;
							}
							HX_STACK_LINE(566)
							break;
						}
					}
				}
				HX_STACK_LINE(572)
				if ((hit)){
					HX_STACK_LINE(574)
					break;
				}
			}
		}
		HX_STACK_LINE(580)
		int w = (right - left);		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(581)
		int h = (bottom - top);		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(583)
		if (((w > (int)0))){
			HX_STACK_LINE(583)
			(w)++;
		}
		HX_STACK_LINE(584)
		if (((h > (int)0))){
			HX_STACK_LINE(584)
			(h)++;
		}
		HX_STACK_LINE(586)
		if (((w < (int)0))){
			HX_STACK_LINE(586)
			w = (int)0;
		}
		HX_STACK_LINE(587)
		if (((h < (int)0))){
			HX_STACK_LINE(587)
			h = (int)0;
		}
		HX_STACK_LINE(589)
		if (((left == right))){
			HX_STACK_LINE(589)
			w = (int)1;
		}
		HX_STACK_LINE(590)
		if (((top == bottom))){
			HX_STACK_LINE(590)
			h = (int)1;
		}
		HX_STACK_LINE(592)
		if (((left > image->width))){
			HX_STACK_LINE(592)
			left = (int)0;
		}
		HX_STACK_LINE(593)
		if (((top > image->height))){
			HX_STACK_LINE(593)
			top = (int)0;
		}
		HX_STACK_LINE(595)
		return ::lime::math::Rectangle_obj::__new(left,top,w,h);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,getColorBoundsRect,return )

int ImageDataUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel",0xcbf5f1be,"lime.graphics.utils.ImageDataUtil.getPixel","lime/graphics/utils/ImageDataUtil.hx",600,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(602)
	::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(603)
	int offset = ((((int)4 * ((y + image->offsetY))) * image->buffer->width) + (((x + image->offsetX)) * (int)4));		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(604)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(606)
	if ((image->get_premultiplied())){
		HX_STACK_LINE(608)
		Float unmultiply = (Float(255.0) / Float(data->__get((offset + (int)3))));		HX_STACK_VAR(unmultiply,"unmultiply");
		HX_STACK_LINE(609)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(609)
			int index = ::Std_obj::_int((data->__get(offset) * unmultiply));		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(609)
			_g = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
		}
		HX_STACK_LINE(609)
		int _g1 = (int(_g) << int((int)24));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(609)
		Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(609)
			int index = ::Std_obj::_int((data->__get((offset + (int)1)) * unmultiply));		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(609)
			_g2 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
		}
		HX_STACK_LINE(609)
		int _g3 = (int(_g2) << int((int)16));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(609)
		int _g4 = (int(_g1) | int(_g3));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(609)
		Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(609)
			int index = ::Std_obj::_int((data->__get((offset + (int)2)) * unmultiply));		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(609)
			_g5 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
		}
		HX_STACK_LINE(609)
		int _g6 = (int(_g5) << int((int)8));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(609)
		int _g7 = (int(_g4) | int(_g6));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(609)
		pixel = _g7;
	}
	else{
		HX_STACK_LINE(613)
		pixel = (int((int((int(data->__get(offset)) << int((int)24))) | int((int(data->__get((offset + (int)1))) << int((int)16))))) | int((int(data->__get((offset + (int)2))) << int((int)8))));
	}
	HX_STACK_LINE(617)
	if (((format == (int)1))){
		HX_STACK_LINE(619)
		return (int((int(pixel) >> int((int)8))) & int((int)16777215));
	}
	else{
		HX_STACK_LINE(623)
		return pixel;
	}
	HX_STACK_LINE(617)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel,return )

int ImageDataUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel32",0x2aa489dd,"lime.graphics.utils.ImageDataUtil.getPixel32","lime/graphics/utils/ImageDataUtil.hx",630,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(632)
	::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(633)
	int offset = ((((int)4 * ((y + image->offsetY))) * image->buffer->width) + (((x + image->offsetX)) * (int)4));		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(634)
	int a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(634)
	if ((image->get_transparent())){
		HX_STACK_LINE(634)
		a = data->__get((offset + (int)3));
	}
	else{
		HX_STACK_LINE(634)
		a = (int)255;
	}
	HX_STACK_LINE(635)
	Dynamic r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(635)
	Dynamic g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(635)
	Dynamic b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(637)
	if (((  ((image->get_premultiplied())) ? bool((a != (int)0)) : bool(false) ))){
		HX_STACK_LINE(639)
		Float unmultiply = (Float(255.0) / Float(a));		HX_STACK_VAR(unmultiply,"unmultiply");
		HX_STACK_LINE(640)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(640)
		{
			HX_STACK_LINE(640)
			int index = ::Math_obj::round((data->__get(offset) * unmultiply));		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(640)
			_g = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
		}
		HX_STACK_LINE(640)
		r = _g;
		HX_STACK_LINE(641)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(641)
		{
			HX_STACK_LINE(641)
			int index = ::Math_obj::round((data->__get((offset + (int)1)) * unmultiply));		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(641)
			_g1 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
		}
		HX_STACK_LINE(641)
		g = _g1;
		HX_STACK_LINE(642)
		Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(642)
		{
			HX_STACK_LINE(642)
			int index = ::Math_obj::round((data->__get((offset + (int)2)) * unmultiply));		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(642)
			_g2 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index);
		}
		HX_STACK_LINE(642)
		b = _g2;
	}
	else{
		HX_STACK_LINE(646)
		r = data->__get(offset);
		HX_STACK_LINE(647)
		g = data->__get((offset + (int)1));
		HX_STACK_LINE(648)
		b = data->__get((offset + (int)2));
	}
	HX_STACK_LINE(652)
	if (((format == (int)1))){
		HX_STACK_LINE(654)
		return (int((int((int((int(a) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
	}
	else{
		HX_STACK_LINE(658)
		return (int((int((int((int(r) << int((int)24))) | int((int(g) << int((int)16))))) | int((int(b) << int((int)8))))) | int(a));
	}
	HX_STACK_LINE(652)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel32,return )

::lime::utils::ByteArray ImageDataUtil_obj::getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixels",0xab3d94f5,"lime.graphics.utils.ImageDataUtil.getPixels","lime/graphics/utils/ImageDataUtil.hx",665,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(667)
	if (((image->buffer->data == null()))){
		HX_STACK_LINE(667)
		return null();
	}
	HX_STACK_LINE(669)
	int length = ::Std_obj::_int((rect->width * rect->height));		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(674)
	::lime::utils::ByteArray byteArray = ::lime::utils::ByteArray_obj::__new((length * (int)4));		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(675)
	byteArray->position = (int)0;
	HX_STACK_LINE(679)
	if ((!(::lime::system::System_obj::disableCFFI))){
		HX_STACK_LINE(679)
		::lime::utils::ByteArray _g = ::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_get_pixels(image,rect,format);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(679)
		byteArray = _g;
	}
	else{
		HX_STACK_LINE(694)
		::lime::utils::UInt8Array srcData = image->buffer->data;		HX_STACK_VAR(srcData,"srcData");
		HX_STACK_LINE(695)
		int srcStride = ::Std_obj::_int((image->buffer->width * (int)4));		HX_STACK_VAR(srcStride,"srcStride");
		HX_STACK_LINE(696)
		int srcPosition = ::Std_obj::_int(((rect->x * (int)4) + (srcStride * rect->y)));		HX_STACK_VAR(srcPosition,"srcPosition");
		HX_STACK_LINE(697)
		int _g1 = ::Std_obj::_int(((int)4 * rect->width));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(697)
		int srcRowOffset = (srcStride - _g1);		HX_STACK_VAR(srcRowOffset,"srcRowOffset");
		HX_STACK_LINE(698)
		int srcRowEnd = ::Std_obj::_int(((int)4 * ((rect->x + rect->width))));		HX_STACK_VAR(srcRowEnd,"srcRowEnd");
		HX_STACK_LINE(704)
		if (((format == (int)1))){
			HX_STACK_LINE(706)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(706)
			while((true)){
				HX_STACK_LINE(706)
				if ((!(((_g < length))))){
					HX_STACK_LINE(706)
					break;
				}
				HX_STACK_LINE(706)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(714)
				{
					HX_STACK_LINE(714)
					int _g2 = (srcPosition)++;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(714)
					int v = srcData->__get(_g2);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(714)
					byteArray->b[((i * (int)4) + (int)1)] = v;
				}
				HX_STACK_LINE(715)
				{
					HX_STACK_LINE(715)
					int _g3 = (srcPosition)++;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(715)
					int v = srcData->__get(_g3);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(715)
					byteArray->b[((i * (int)4) + (int)2)] = v;
				}
				HX_STACK_LINE(716)
				{
					HX_STACK_LINE(716)
					int _g4 = (srcPosition)++;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(716)
					int v = srcData->__get(_g4);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(716)
					byteArray->b[((i * (int)4) + (int)3)] = v;
				}
				HX_STACK_LINE(717)
				{
					HX_STACK_LINE(717)
					int _g5 = (srcPosition)++;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(717)
					int v = srcData->__get(_g5);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(717)
					byteArray->b[(i * (int)4)] = v;
				}
				HX_STACK_LINE(720)
				if (((hx::Mod(srcPosition,srcStride) > srcRowEnd))){
					HX_STACK_LINE(722)
					hx::AddEq(srcPosition,srcRowOffset);
				}
			}
		}
		else{
			HX_STACK_LINE(730)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(730)
			while((true)){
				HX_STACK_LINE(730)
				if ((!(((_g < length))))){
					HX_STACK_LINE(730)
					break;
				}
				HX_STACK_LINE(730)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(739)
				{
					HX_STACK_LINE(739)
					int _g6 = (srcPosition)++;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(739)
					int v = srcData->__get(_g6);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(739)
					byteArray->b[(i * (int)4)] = v;
				}
				HX_STACK_LINE(740)
				{
					HX_STACK_LINE(740)
					int _g7 = (srcPosition)++;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(740)
					int v = srcData->__get(_g7);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(740)
					byteArray->b[((i * (int)4) + (int)1)] = v;
				}
				HX_STACK_LINE(741)
				{
					HX_STACK_LINE(741)
					int _g8 = (srcPosition)++;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(741)
					int v = srcData->__get(_g8);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(741)
					byteArray->b[((i * (int)4) + (int)2)] = v;
				}
				HX_STACK_LINE(742)
				{
					HX_STACK_LINE(742)
					int _g9 = (srcPosition)++;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(742)
					int v = srcData->__get(_g9);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(742)
					byteArray->b[((i * (int)4) + (int)3)] = v;
				}
				HX_STACK_LINE(745)
				if (((hx::Mod(srcPosition,srcStride) > srcRowEnd))){
					HX_STACK_LINE(747)
					hx::AddEq(srcPosition,srcRowOffset);
				}
			}
		}
	}
	HX_STACK_LINE(757)
	byteArray->position = (int)0;
	HX_STACK_LINE(758)
	return byteArray;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,getPixels,return )

Void ImageDataUtil_obj::merge( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","merge",0xf0318e4a,"lime.graphics.utils.ImageDataUtil.merge","lime/graphics/utils/ImageDataUtil.hx",763,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(765)
		if (((bool((image->buffer->data == null())) || bool((sourceImage->buffer->data == null()))))){
			HX_STACK_LINE(765)
			return null();
		}
		HX_STACK_LINE(768)
		if ((!(::lime::system::System_obj::disableCFFI))){
			HX_STACK_LINE(768)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_merge(image,sourceImage,sourceRect,destPoint,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
		}
		else{
			HX_STACK_LINE(772)
			int rowOffset = ::Std_obj::_int((((destPoint->y + image->offsetY) - sourceRect->y) - sourceImage->offsetY));		HX_STACK_VAR(rowOffset,"rowOffset");
			HX_STACK_LINE(773)
			int columnOffset = ::Std_obj::_int((((destPoint->x + image->offsetX) - sourceRect->x) - sourceImage->offsetY));		HX_STACK_VAR(columnOffset,"columnOffset");
			HX_STACK_LINE(775)
			::lime::utils::UInt8Array sourceData = sourceImage->buffer->data;		HX_STACK_VAR(sourceData,"sourceData");
			HX_STACK_LINE(776)
			int sourceStride = (sourceImage->buffer->width * (int)4);		HX_STACK_VAR(sourceStride,"sourceStride");
			HX_STACK_LINE(777)
			int sourceOffset = (int)0;		HX_STACK_VAR(sourceOffset,"sourceOffset");
			HX_STACK_LINE(779)
			::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(780)
			int stride = (image->buffer->width * (int)4);		HX_STACK_VAR(stride,"stride");
			HX_STACK_LINE(781)
			int offset = (int)0;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(783)
			{
				HX_STACK_LINE(783)
				Float _g = sourceRect->get_top();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(783)
				Float _g1 = (_g + sourceImage->offsetY);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(783)
				int _g11 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(783)
				Float _g2 = sourceRect->get_bottom();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(783)
				Float _g3 = (_g2 + sourceImage->offsetY);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(783)
				int _g4 = ::Std_obj::_int(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(783)
				while((true)){
					HX_STACK_LINE(783)
					if ((!(((_g11 < _g4))))){
						HX_STACK_LINE(783)
						break;
					}
					HX_STACK_LINE(783)
					int row = (_g11)++;		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(785)
					{
						HX_STACK_LINE(785)
						Float _g41 = sourceRect->get_left();		HX_STACK_VAR(_g41,"_g41");
						HX_STACK_LINE(785)
						Float _g5 = (_g41 + sourceImage->offsetX);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(785)
						int _g31 = ::Std_obj::_int(_g5);		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(785)
						Float _g6 = sourceRect->get_right();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(785)
						Float _g7 = (_g6 + sourceImage->offsetX);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(785)
						int _g21 = ::Std_obj::_int(_g7);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(785)
						while((true)){
							HX_STACK_LINE(785)
							if ((!(((_g31 < _g21))))){
								HX_STACK_LINE(785)
								break;
							}
							HX_STACK_LINE(785)
							int column = (_g31)++;		HX_STACK_VAR(column,"column");
							HX_STACK_LINE(787)
							sourceOffset = ((row * sourceStride) + (column * (int)4));
							HX_STACK_LINE(788)
							offset = ((((row + rowOffset)) * stride) + (((column + columnOffset)) * (int)4));
							HX_STACK_LINE(790)
							hx::__ArrayImplRef(data,offset) = ::Std_obj::_int((Float((((sourceData->__get(offset) * redMultiplier) + (data->__get(offset) * (((int)256 - redMultiplier)))))) / Float((int)256)));
							HX_STACK_LINE(791)
							hx::__ArrayImplRef(data,(offset + (int)1)) = ::Std_obj::_int((Float((((sourceData->__get((offset + (int)1)) * greenMultiplier) + (data->__get((offset + (int)1)) * (((int)256 - greenMultiplier)))))) / Float((int)256)));
							HX_STACK_LINE(792)
							hx::__ArrayImplRef(data,(offset + (int)2)) = ::Std_obj::_int((Float((((sourceData->__get((offset + (int)2)) * blueMultiplier) + (data->__get((offset + (int)2)) * (((int)256 - blueMultiplier)))))) / Float((int)256)));
							HX_STACK_LINE(793)
							hx::__ArrayImplRef(data,(offset + (int)3)) = ::Std_obj::_int((Float((((sourceData->__get((offset + (int)3)) * alphaMultiplier) + (data->__get((offset + (int)3)) * (((int)256 - alphaMultiplier)))))) / Float((int)256)));
						}
					}
				}
			}
		}
		HX_STACK_LINE(801)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageDataUtil_obj,merge,(void))

Void ImageDataUtil_obj::multiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","multiplyAlpha",0xb898c02c,"lime.graphics.utils.ImageDataUtil.multiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",806,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(808)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(809)
		if (((data == null()))){
			HX_STACK_LINE(809)
			return null();
		}
		HX_STACK_LINE(812)
		if ((!(::lime::system::System_obj::disableCFFI))){
			HX_STACK_LINE(812)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_multiply_alpha(image);
		}
		else{
			HX_STACK_LINE(816)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(816)
			int a16;		HX_STACK_VAR(a16,"a16");
			HX_STACK_LINE(817)
			int length = ::Std_obj::_int((Float(data->length) / Float((int)4)));		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(819)
			{
				HX_STACK_LINE(819)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(819)
				while((true)){
					HX_STACK_LINE(819)
					if ((!(((_g < length))))){
						HX_STACK_LINE(819)
						break;
					}
					HX_STACK_LINE(819)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(821)
					index = (i * (int)4);
					HX_STACK_LINE(823)
					int _g1 = ::lime::graphics::utils::ImageDataUtil_obj::__alpha16->__unsafe_get(data->__get((index + (int)3)));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(823)
					a16 = _g1;
					HX_STACK_LINE(824)
					hx::__ArrayImplRef(data,index) = (int((data->__get(index) * a16)) >> int((int)16));
					HX_STACK_LINE(825)
					hx::__ArrayImplRef(data,(index + (int)1)) = (int((data->__get((index + (int)1)) * a16)) >> int((int)16));
					HX_STACK_LINE(826)
					hx::__ArrayImplRef(data,(index + (int)2)) = (int((data->__get((index + (int)2)) * a16)) >> int((int)16));
				}
			}
		}
		HX_STACK_LINE(832)
		image->buffer->premultiplied = true;
		HX_STACK_LINE(833)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,multiplyAlpha,(void))

Void ImageDataUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resize",0x3b9e8e22,"lime.graphics.utils.ImageDataUtil.resize","lime/graphics/utils/ImageDataUtil.hx",838,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(840)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(841)
		if (((bool((buffer->width == newWidth)) && bool((buffer->height == newHeight))))){
			HX_STACK_LINE(841)
			return null();
		}
		HX_STACK_LINE(842)
		::lime::utils::UInt8Array _g = ::lime::utils::UInt8Array_obj::__new(((newWidth * newHeight) * (int)4),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(842)
		::lime::graphics::ImageBuffer newBuffer = ::lime::graphics::ImageBuffer_obj::__new(_g,newWidth,newHeight,null(),null());		HX_STACK_VAR(newBuffer,"newBuffer");
		HX_STACK_LINE(845)
		if ((!(::lime::system::System_obj::disableCFFI))){
			HX_STACK_LINE(845)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_resize(image,newBuffer,newWidth,newHeight);
		}
		else{
			HX_STACK_LINE(849)
			int imageWidth = image->width;		HX_STACK_VAR(imageWidth,"imageWidth");
			HX_STACK_LINE(850)
			int imageHeight = image->height;		HX_STACK_VAR(imageHeight,"imageHeight");
			HX_STACK_LINE(852)
			::lime::utils::UInt8Array data = image->get_data();		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(853)
			::lime::utils::UInt8Array newData = newBuffer->data;		HX_STACK_VAR(newData,"newData");
			HX_STACK_LINE(854)
			int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
			HX_STACK_LINE(854)
			int sourceIndexX;		HX_STACK_VAR(sourceIndexX,"sourceIndexX");
			HX_STACK_LINE(854)
			int sourceIndexY;		HX_STACK_VAR(sourceIndexY,"sourceIndexY");
			HX_STACK_LINE(854)
			int sourceIndexXY;		HX_STACK_VAR(sourceIndexXY,"sourceIndexXY");
			HX_STACK_LINE(854)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(855)
			int sourceX;		HX_STACK_VAR(sourceX,"sourceX");
			HX_STACK_LINE(855)
			int sourceY;		HX_STACK_VAR(sourceY,"sourceY");
			HX_STACK_LINE(856)
			Float u;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(856)
			Float v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(856)
			Float uRatio;		HX_STACK_VAR(uRatio,"uRatio");
			HX_STACK_LINE(856)
			Float vRatio;		HX_STACK_VAR(vRatio,"vRatio");
			HX_STACK_LINE(856)
			Float uOpposite;		HX_STACK_VAR(uOpposite,"uOpposite");
			HX_STACK_LINE(856)
			Float vOpposite;		HX_STACK_VAR(vOpposite,"vOpposite");
			HX_STACK_LINE(858)
			{
				HX_STACK_LINE(858)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(858)
				while((true)){
					HX_STACK_LINE(858)
					if ((!(((_g1 < newHeight))))){
						HX_STACK_LINE(858)
						break;
					}
					HX_STACK_LINE(858)
					int y = (_g1)++;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(860)
					{
						HX_STACK_LINE(860)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(860)
						while((true)){
							HX_STACK_LINE(860)
							if ((!(((_g11 < newWidth))))){
								HX_STACK_LINE(860)
								break;
							}
							HX_STACK_LINE(860)
							int x = (_g11)++;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(862)
							u = (((Float(((x + 0.5))) / Float(newWidth)) * imageWidth) - 0.5);
							HX_STACK_LINE(863)
							v = (((Float(((y + 0.5))) / Float(newHeight)) * imageHeight) - 0.5);
							HX_STACK_LINE(865)
							int _g12 = ::Std_obj::_int(u);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(865)
							sourceX = _g12;
							HX_STACK_LINE(866)
							int _g2 = ::Std_obj::_int(v);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(866)
							sourceY = _g2;
							HX_STACK_LINE(868)
							sourceIndex = ((((sourceY * imageWidth) + sourceX)) * (int)4);
							HX_STACK_LINE(869)
							if (((sourceX < (imageWidth - (int)1)))){
								HX_STACK_LINE(869)
								sourceIndexX = (sourceIndex + (int)4);
							}
							else{
								HX_STACK_LINE(869)
								sourceIndexX = sourceIndex;
							}
							HX_STACK_LINE(870)
							if (((sourceY < (imageHeight - (int)1)))){
								HX_STACK_LINE(870)
								sourceIndexY = (sourceIndex + (imageWidth * (int)4));
							}
							else{
								HX_STACK_LINE(870)
								sourceIndexY = sourceIndex;
							}
							HX_STACK_LINE(871)
							if (((sourceIndexX != sourceIndex))){
								HX_STACK_LINE(871)
								sourceIndexXY = (sourceIndexY + (int)4);
							}
							else{
								HX_STACK_LINE(871)
								sourceIndexXY = sourceIndexY;
							}
							HX_STACK_LINE(873)
							index = ((((y * newWidth) + x)) * (int)4);
							HX_STACK_LINE(875)
							uRatio = (u - sourceX);
							HX_STACK_LINE(876)
							vRatio = (v - sourceY);
							HX_STACK_LINE(877)
							uOpposite = ((int)1 - uRatio);
							HX_STACK_LINE(878)
							vOpposite = ((int)1 - vRatio);
							HX_STACK_LINE(880)
							hx::__ArrayImplRef(newData,index) = ::Std_obj::_int((((((data->__get(sourceIndex) * uOpposite) + (data->__get(sourceIndexX) * uRatio))) * vOpposite) + ((((data->__get(sourceIndexY) * uOpposite) + (data->__get(sourceIndexXY) * uRatio))) * vRatio)));
							HX_STACK_LINE(881)
							hx::__ArrayImplRef(newData,(index + (int)1)) = ::Std_obj::_int((((((data->__get((sourceIndex + (int)1)) * uOpposite) + (data->__get((sourceIndexX + (int)1)) * uRatio))) * vOpposite) + ((((data->__get((sourceIndexY + (int)1)) * uOpposite) + (data->__get((sourceIndexXY + (int)1)) * uRatio))) * vRatio)));
							HX_STACK_LINE(882)
							hx::__ArrayImplRef(newData,(index + (int)2)) = ::Std_obj::_int((((((data->__get((sourceIndex + (int)2)) * uOpposite) + (data->__get((sourceIndexX + (int)2)) * uRatio))) * vOpposite) + ((((data->__get((sourceIndexY + (int)2)) * uOpposite) + (data->__get((sourceIndexXY + (int)2)) * uRatio))) * vRatio)));
							HX_STACK_LINE(886)
							if (((bool((bool((data->__get((sourceIndexX + (int)3)) == (int)0)) || bool((data->__get((sourceIndexY + (int)3)) == (int)0)))) || bool((data->__get((sourceIndexXY + (int)3)) == (int)0))))){
								HX_STACK_LINE(888)
								hx::__ArrayImplRef(newData,(index + (int)3)) = (int)0;
							}
							else{
								HX_STACK_LINE(892)
								hx::__ArrayImplRef(newData,(index + (int)3)) = data->__get((sourceIndex + (int)3));
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(902)
		buffer->data = newBuffer->data;
		HX_STACK_LINE(903)
		buffer->width = newWidth;
		HX_STACK_LINE(904)
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resize,(void))

Void ImageDataUtil_obj::resizeBuffer( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resizeBuffer",0x390004c2,"lime.graphics.utils.ImageDataUtil.resizeBuffer","lime/graphics/utils/ImageDataUtil.hx",909,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(911)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(912)
		::lime::utils::UInt8Array data = image->get_data();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(913)
		::lime::utils::UInt8Array newData = ::lime::utils::UInt8Array_obj::__new(((newWidth * newHeight) * (int)4),null(),null());		HX_STACK_VAR(newData,"newData");
		HX_STACK_LINE(914)
		int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
		HX_STACK_LINE(914)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(916)
		{
			HX_STACK_LINE(916)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(916)
			int _g = buffer->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(916)
			while((true)){
				HX_STACK_LINE(916)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(916)
					break;
				}
				HX_STACK_LINE(916)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(918)
				{
					HX_STACK_LINE(918)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(918)
					int _g2 = buffer->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(918)
					while((true)){
						HX_STACK_LINE(918)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(918)
							break;
						}
						HX_STACK_LINE(918)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(920)
						sourceIndex = ((((y * buffer->width) + x)) * (int)4);
						HX_STACK_LINE(921)
						index = ((((y * newWidth) + x)) * (int)4);
						HX_STACK_LINE(923)
						hx::__ArrayImplRef(newData,index) = data->__get(sourceIndex);
						HX_STACK_LINE(924)
						hx::__ArrayImplRef(newData,(index + (int)1)) = data->__get((sourceIndex + (int)1));
						HX_STACK_LINE(925)
						hx::__ArrayImplRef(newData,(index + (int)2)) = data->__get((sourceIndex + (int)2));
						HX_STACK_LINE(926)
						hx::__ArrayImplRef(newData,(index + (int)3)) = data->__get((sourceIndex + (int)3));
					}
				}
			}
		}
		HX_STACK_LINE(932)
		buffer->data = newData;
		HX_STACK_LINE(933)
		buffer->width = newWidth;
		HX_STACK_LINE(934)
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resizeBuffer,(void))

Void ImageDataUtil_obj::setFormat( ::lime::graphics::Image image,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setFormat",0xff73210b,"lime.graphics.utils.ImageDataUtil.setFormat","lime/graphics/utils/ImageDataUtil.hx",939,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(941)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(942)
		if (((data == null()))){
			HX_STACK_LINE(942)
			return null();
		}
		HX_STACK_LINE(945)
		if ((!(::lime::system::System_obj::disableCFFI))){
			HX_STACK_LINE(945)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_set_format(image,format);
		}
		else{
			HX_STACK_LINE(949)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(949)
			Dynamic a16;		HX_STACK_VAR(a16,"a16");
			HX_STACK_LINE(950)
			int length = ::Std_obj::_int((Float(data->length) / Float((int)4)));		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(951)
			int r1;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(951)
			int g1;		HX_STACK_VAR(g1,"g1");
			HX_STACK_LINE(951)
			int b1;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(951)
			int a1;		HX_STACK_VAR(a1,"a1");
			HX_STACK_LINE(951)
			int r2;		HX_STACK_VAR(r2,"r2");
			HX_STACK_LINE(951)
			int g2;		HX_STACK_VAR(g2,"g2");
			HX_STACK_LINE(951)
			int b2;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(951)
			int a2;		HX_STACK_VAR(a2,"a2");
			HX_STACK_LINE(952)
			int r;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(952)
			int g;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(952)
			int b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(952)
			int a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(954)
			{
				HX_STACK_LINE(954)
				int _g = image->get_format();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(954)
				switch( (int)(_g)){
					case (int)0: {
						HX_STACK_LINE(958)
						r1 = (int)0;
						HX_STACK_LINE(959)
						g1 = (int)1;
						HX_STACK_LINE(960)
						b1 = (int)2;
						HX_STACK_LINE(961)
						a1 = (int)3;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(965)
						r1 = (int)1;
						HX_STACK_LINE(966)
						g1 = (int)2;
						HX_STACK_LINE(967)
						b1 = (int)3;
						HX_STACK_LINE(968)
						a1 = (int)0;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(972)
						r1 = (int)2;
						HX_STACK_LINE(973)
						g1 = (int)1;
						HX_STACK_LINE(974)
						b1 = (int)0;
						HX_STACK_LINE(975)
						a1 = (int)3;
					}
					;break;
				}
			}
			HX_STACK_LINE(979)
			switch( (int)(format)){
				case (int)0: {
					HX_STACK_LINE(983)
					r2 = (int)0;
					HX_STACK_LINE(984)
					g2 = (int)1;
					HX_STACK_LINE(985)
					b2 = (int)2;
					HX_STACK_LINE(986)
					a2 = (int)3;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(990)
					r2 = (int)1;
					HX_STACK_LINE(991)
					g2 = (int)2;
					HX_STACK_LINE(992)
					b2 = (int)3;
					HX_STACK_LINE(993)
					a2 = (int)0;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(997)
					r2 = (int)2;
					HX_STACK_LINE(998)
					g2 = (int)1;
					HX_STACK_LINE(999)
					b2 = (int)0;
					HX_STACK_LINE(1000)
					a2 = (int)3;
				}
				;break;
			}
			HX_STACK_LINE(1004)
			{
				HX_STACK_LINE(1004)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1004)
				while((true)){
					HX_STACK_LINE(1004)
					if ((!(((_g < length))))){
						HX_STACK_LINE(1004)
						break;
					}
					HX_STACK_LINE(1004)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1006)
					index = (i * (int)4);
					HX_STACK_LINE(1008)
					r = data->__get((index + r1));
					HX_STACK_LINE(1009)
					g = data->__get((index + g1));
					HX_STACK_LINE(1010)
					b = data->__get((index + b1));
					HX_STACK_LINE(1011)
					a = data->__get((index + a1));
					HX_STACK_LINE(1013)
					hx::__ArrayImplRef(data,(index + r2)) = r;
					HX_STACK_LINE(1014)
					hx::__ArrayImplRef(data,(index + g2)) = g;
					HX_STACK_LINE(1015)
					hx::__ArrayImplRef(data,(index + b2)) = b;
					HX_STACK_LINE(1016)
					hx::__ArrayImplRef(data,(index + a2)) = a;
				}
			}
		}
		HX_STACK_LINE(1022)
		image->buffer->format = format;
		HX_STACK_LINE(1023)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,setFormat,(void))

Void ImageDataUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel",0x7a534b32,"lime.graphics.utils.ImageDataUtil.setPixel","lime/graphics/utils/ImageDataUtil.hx",1028,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1030)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1031)
		int offset = ((((int)4 * ((y + image->offsetY))) * image->buffer->width) + (((x + image->offsetX)) * (int)4));		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(1032)
		if (((format == (int)0))){
			HX_STACK_LINE(1032)
			color = (int(color) >> int((int)8));
		}
		HX_STACK_LINE(1034)
		hx::__ArrayImplRef(data,offset) = hx::UShr(((int(color) & int((int)16711680))),(int)16);
		HX_STACK_LINE(1035)
		hx::__ArrayImplRef(data,(offset + (int)1)) = hx::UShr(((int(color) & int((int)65280))),(int)8);
		HX_STACK_LINE(1036)
		hx::__ArrayImplRef(data,(offset + (int)2)) = (int(color) & int((int)255));
		HX_STACK_LINE(1037)
		if ((image->get_transparent())){
			HX_STACK_LINE(1037)
			hx::__ArrayImplRef(data,(offset + (int)3)) = (int)255;
		}
		HX_STACK_LINE(1039)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel,(void))

Void ImageDataUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel32",0x2e222851,"lime.graphics.utils.ImageDataUtil.setPixel32","lime/graphics/utils/ImageDataUtil.hx",1044,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1046)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1047)
		int offset = ((((int)4 * ((y + image->offsetY))) * image->buffer->width) + (((x + image->offsetX)) * (int)4));		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(1048)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1048)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(1048)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(1048)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1050)
		if (((format == (int)1))){
			HX_STACK_LINE(1052)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1052)
			if ((image->get_transparent())){
				HX_STACK_LINE(1052)
				_g = (int((int(color) >> int((int)24))) & int((int)255));
			}
			else{
				HX_STACK_LINE(1052)
				_g = (int)255;
			}
			HX_STACK_LINE(1052)
			a = _g;
			HX_STACK_LINE(1053)
			r = (int((int(color) >> int((int)16))) & int((int)255));
			HX_STACK_LINE(1054)
			g = (int((int(color) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(1055)
			b = (int(color) & int((int)255));
		}
		else{
			HX_STACK_LINE(1059)
			r = (int((int(color) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1060)
			g = (int((int(color) >> int((int)16))) & int((int)255));
			HX_STACK_LINE(1061)
			b = (int((int(color) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(1062)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1062)
			if ((image->get_transparent())){
				HX_STACK_LINE(1062)
				_g1 = (int(color) & int((int)255));
			}
			else{
				HX_STACK_LINE(1062)
				_g1 = (int)255;
			}
			HX_STACK_LINE(1062)
			a = _g1;
		}
		HX_STACK_LINE(1066)
		if (((  ((image->get_transparent())) ? bool(image->get_premultiplied()) : bool(false) ))){
			HX_STACK_LINE(1068)
			int a16 = ::lime::graphics::utils::ImageDataUtil_obj::__alpha16->__unsafe_get(a);		HX_STACK_VAR(a16,"a16");
			HX_STACK_LINE(1069)
			hx::__ArrayImplRef(data,offset) = (int((r * a16)) >> int((int)16));
			HX_STACK_LINE(1070)
			hx::__ArrayImplRef(data,(offset + (int)1)) = (int((g * a16)) >> int((int)16));
			HX_STACK_LINE(1071)
			hx::__ArrayImplRef(data,(offset + (int)2)) = (int((b * a16)) >> int((int)16));
			HX_STACK_LINE(1072)
			hx::__ArrayImplRef(data,(offset + (int)3)) = a;
		}
		else{
			HX_STACK_LINE(1076)
			hx::__ArrayImplRef(data,offset) = r;
			HX_STACK_LINE(1077)
			hx::__ArrayImplRef(data,(offset + (int)1)) = g;
			HX_STACK_LINE(1078)
			hx::__ArrayImplRef(data,(offset + (int)2)) = b;
			HX_STACK_LINE(1079)
			hx::__ArrayImplRef(data,(offset + (int)3)) = a;
		}
		HX_STACK_LINE(1083)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel32,(void))

Void ImageDataUtil_obj::setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixels",0x8e8e8101,"lime.graphics.utils.ImageDataUtil.setPixels","lime/graphics/utils/ImageDataUtil.hx",1088,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1090)
		if (((image->buffer->data == null()))){
			HX_STACK_LINE(1090)
			return null();
		}
		HX_STACK_LINE(1093)
		if ((!(::lime::system::System_obj::disableCFFI))){
			HX_STACK_LINE(1093)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_set_pixels(image,rect,byteArray,format);
		}
		else{
			HX_STACK_LINE(1097)
			int len = ::Math_obj::round((rect->width * rect->height));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(1110)
			::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1111)
			int offset = ::Math_obj::round(((image->buffer->width * ((rect->y + image->offsetX))) + ((rect->x + image->offsetY))));		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(1112)
			int pos = (offset * (int)4);		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1113)
			int boundR = ::Math_obj::round(((rect->x + rect->width) + image->offsetX));		HX_STACK_VAR(boundR,"boundR");
			HX_STACK_LINE(1114)
			int width = image->buffer->width;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(1115)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(1117)
			if (((format == (int)1))){
				HX_STACK_LINE(1119)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1119)
				while((true)){
					HX_STACK_LINE(1119)
					if ((!(((_g < len))))){
						HX_STACK_LINE(1119)
						break;
					}
					HX_STACK_LINE(1119)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1121)
					if (((hx::Mod(pos,((width * (int)4))) >= (boundR * (int)4)))){
						HX_STACK_LINE(1123)
						hx::AddEq(pos,(((width - boundR)) * (int)4));
					}
					HX_STACK_LINE(1127)
					int _g1 = byteArray->readUnsignedInt();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1127)
					color = _g1;
					HX_STACK_LINE(1129)
					int _g11 = (pos)++;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(1129)
					hx::__ArrayImplRef(data,_g11) = hx::UShr(((int(color) & int((int)16711680))),(int)16);
					HX_STACK_LINE(1130)
					int _g2 = (pos)++;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1130)
					hx::__ArrayImplRef(data,_g2) = hx::UShr(((int(color) & int((int)65280))),(int)8);
					HX_STACK_LINE(1131)
					int _g3 = (pos)++;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1131)
					hx::__ArrayImplRef(data,_g3) = (int(color) & int((int)255));
					HX_STACK_LINE(1132)
					int _g4 = (pos)++;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1132)
					hx::__ArrayImplRef(data,_g4) = hx::UShr(((int(color) & int((int)-16777216))),(int)24);
				}
			}
			else{
				HX_STACK_LINE(1138)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1138)
				while((true)){
					HX_STACK_LINE(1138)
					if ((!(((_g < len))))){
						HX_STACK_LINE(1138)
						break;
					}
					HX_STACK_LINE(1138)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1140)
					if (((hx::Mod(pos,((width * (int)4))) >= (boundR * (int)4)))){
						HX_STACK_LINE(1142)
						hx::AddEq(pos,(((width - boundR)) * (int)4));
					}
					HX_STACK_LINE(1146)
					int _g5 = byteArray->readUnsignedInt();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1146)
					color = _g5;
					HX_STACK_LINE(1148)
					int _g6 = (pos)++;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(1148)
					hx::__ArrayImplRef(data,_g6) = hx::UShr(((int(color) & int((int)-16777216))),(int)24);
					HX_STACK_LINE(1149)
					int _g7 = (pos)++;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1149)
					hx::__ArrayImplRef(data,_g7) = hx::UShr(((int(color) & int((int)16711680))),(int)16);
					HX_STACK_LINE(1150)
					int _g8 = (pos)++;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(1150)
					hx::__ArrayImplRef(data,_g8) = hx::UShr(((int(color) & int((int)65280))),(int)8);
					HX_STACK_LINE(1151)
					int _g9 = (pos)++;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(1151)
					hx::__ArrayImplRef(data,_g9) = (int(color) & int((int)255));
				}
			}
		}
		HX_STACK_LINE(1159)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,setPixels,(void))

Void ImageDataUtil_obj::unmultiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","unmultiplyAlpha",0xa6ce9eb3,"lime.graphics.utils.ImageDataUtil.unmultiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",1164,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1166)
		::lime::utils::UInt8Array data = image->buffer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1167)
		if (((data == null()))){
			HX_STACK_LINE(1167)
			return null();
		}
		HX_STACK_LINE(1170)
		if ((!(::lime::system::System_obj::disableCFFI))){
			HX_STACK_LINE(1170)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha(image);
		}
		else{
			HX_STACK_LINE(1174)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(1174)
			int a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(1174)
			Float unmultiply;		HX_STACK_VAR(unmultiply,"unmultiply");
			HX_STACK_LINE(1175)
			int length = ::Std_obj::_int((Float(data->length) / Float((int)4)));		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(1177)
			{
				HX_STACK_LINE(1177)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1177)
				while((true)){
					HX_STACK_LINE(1177)
					if ((!(((_g < length))))){
						HX_STACK_LINE(1177)
						break;
					}
					HX_STACK_LINE(1177)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1179)
					index = (i * (int)4);
					HX_STACK_LINE(1181)
					a = data->__get((index + (int)3));
					HX_STACK_LINE(1183)
					if (((a != (int)0))){
						HX_STACK_LINE(1185)
						unmultiply = (Float(255.0) / Float(a));
						HX_STACK_LINE(1187)
						{
							HX_STACK_LINE(1187)
							int index1 = ::Std_obj::_int((data->__get(index) * unmultiply));		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(1187)
							hx::__ArrayImplRef(data,index) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index1);
						}
						HX_STACK_LINE(1188)
						{
							HX_STACK_LINE(1188)
							int index1 = ::Std_obj::_int((data->__get((index + (int)1)) * unmultiply));		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(1188)
							hx::__ArrayImplRef(data,(index + (int)1)) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index1);
						}
						HX_STACK_LINE(1189)
						{
							HX_STACK_LINE(1189)
							int index1 = ::Std_obj::_int((data->__get((index + (int)2)) * unmultiply));		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(1189)
							hx::__ArrayImplRef(data,(index + (int)2)) = ::lime::graphics::utils::ImageDataUtil_obj::__clamp->__unsafe_get(index1);
						}
					}
				}
			}
		}
		HX_STACK_LINE(1197)
		image->buffer->premultiplied = false;
		HX_STACK_LINE(1198)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,unmultiplyAlpha,(void))

Dynamic ImageDataUtil_obj::lime_image_data_util_color_transform;

Dynamic ImageDataUtil_obj::lime_image_data_util_copy_channel;

Dynamic ImageDataUtil_obj::lime_image_data_util_copy_pixels;

Dynamic ImageDataUtil_obj::lime_image_data_util_fill_rect;

Dynamic ImageDataUtil_obj::lime_image_data_util_flood_fill;

Dynamic ImageDataUtil_obj::lime_image_data_util_get_pixels;

Dynamic ImageDataUtil_obj::lime_image_data_util_merge;

Dynamic ImageDataUtil_obj::lime_image_data_util_multiply_alpha;

Dynamic ImageDataUtil_obj::lime_image_data_util_resize;

Dynamic ImageDataUtil_obj::lime_image_data_util_set_format;

Dynamic ImageDataUtil_obj::lime_image_data_util_set_pixels;

Dynamic ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha;


ImageDataUtil_obj::ImageDataUtil_obj()
{
}

Dynamic ImageDataUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clamp") ) { return __clamp; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__alpha16") ) { return __alpha16; }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resizeBuffer") ) { return resizeBuffer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { return multiplyAlpha_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { return unmultiplyAlpha_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_merge") ) { return lime_image_data_util_merge; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_resize") ) { return lime_image_data_util_resize; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_fill_rect") ) { return lime_image_data_util_fill_rect; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_flood_fill") ) { return lime_image_data_util_flood_fill; }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_get_pixels") ) { return lime_image_data_util_get_pixels; }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_format") ) { return lime_image_data_util_set_format; }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_pixels") ) { return lime_image_data_util_set_pixels; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_pixels") ) { return lime_image_data_util_copy_pixels; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_channel") ) { return lime_image_data_util_copy_channel; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_multiply_alpha") ) { return lime_image_data_util_multiply_alpha; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_color_transform") ) { return lime_image_data_util_color_transform; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_unmultiply_alpha") ) { return lime_image_data_util_unmultiply_alpha; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ImageDataUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__clamp") ) { __clamp=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__alpha16") ) { __alpha16=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_merge") ) { lime_image_data_util_merge=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_resize") ) { lime_image_data_util_resize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_fill_rect") ) { lime_image_data_util_fill_rect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_flood_fill") ) { lime_image_data_util_flood_fill=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_get_pixels") ) { lime_image_data_util_get_pixels=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_format") ) { lime_image_data_util_set_format=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_pixels") ) { lime_image_data_util_set_pixels=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_pixels") ) { lime_image_data_util_copy_pixels=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_channel") ) { lime_image_data_util_copy_channel=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_multiply_alpha") ) { lime_image_data_util_multiply_alpha=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_color_transform") ) { lime_image_data_util_color_transform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_unmultiply_alpha") ) { lime_image_data_util_unmultiply_alpha=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageDataUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__alpha16"),
	HX_CSTRING("__clamp"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("copyChannel"),
	HX_CSTRING("copyPixels"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("floodFill"),
	HX_CSTRING("getColorBoundsRect"),
	HX_CSTRING("getPixel"),
	HX_CSTRING("getPixel32"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("merge"),
	HX_CSTRING("multiplyAlpha"),
	HX_CSTRING("resize"),
	HX_CSTRING("resizeBuffer"),
	HX_CSTRING("setFormat"),
	HX_CSTRING("setPixel"),
	HX_CSTRING("setPixel32"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("unmultiplyAlpha"),
	HX_CSTRING("lime_image_data_util_color_transform"),
	HX_CSTRING("lime_image_data_util_copy_channel"),
	HX_CSTRING("lime_image_data_util_copy_pixels"),
	HX_CSTRING("lime_image_data_util_fill_rect"),
	HX_CSTRING("lime_image_data_util_flood_fill"),
	HX_CSTRING("lime_image_data_util_get_pixels"),
	HX_CSTRING("lime_image_data_util_merge"),
	HX_CSTRING("lime_image_data_util_multiply_alpha"),
	HX_CSTRING("lime_image_data_util_resize"),
	HX_CSTRING("lime_image_data_util_set_format"),
	HX_CSTRING("lime_image_data_util_set_pixels"),
	HX_CSTRING("lime_image_data_util_unmultiply_alpha"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__alpha16,"__alpha16");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__clamp,"__clamp");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_color_transform,"lime_image_data_util_color_transform");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_copy_channel,"lime_image_data_util_copy_channel");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_copy_pixels,"lime_image_data_util_copy_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_fill_rect,"lime_image_data_util_fill_rect");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_flood_fill,"lime_image_data_util_flood_fill");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_get_pixels,"lime_image_data_util_get_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_merge,"lime_image_data_util_merge");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_multiply_alpha,"lime_image_data_util_multiply_alpha");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_resize,"lime_image_data_util_resize");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_set_format,"lime_image_data_util_set_format");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_set_pixels,"lime_image_data_util_set_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha,"lime_image_data_util_unmultiply_alpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__alpha16,"__alpha16");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__clamp,"__clamp");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_color_transform,"lime_image_data_util_color_transform");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_copy_channel,"lime_image_data_util_copy_channel");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_copy_pixels,"lime_image_data_util_copy_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_fill_rect,"lime_image_data_util_fill_rect");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_flood_fill,"lime_image_data_util_flood_fill");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_get_pixels,"lime_image_data_util_get_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_merge,"lime_image_data_util_merge");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_multiply_alpha,"lime_image_data_util_multiply_alpha");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_resize,"lime_image_data_util_resize");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_set_format,"lime_image_data_util_set_format");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_set_pixels,"lime_image_data_util_set_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha,"lime_image_data_util_unmultiply_alpha");
};

#endif

Class ImageDataUtil_obj::__mClass;

void ImageDataUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.utils.ImageDataUtil"), hx::TCanCast< ImageDataUtil_obj> ,sStaticFields,sMemberFields,
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

void ImageDataUtil_obj::__boot()
{
	lime_image_data_util_color_transform= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_data_util_color_transform"),(int)3,null());
	lime_image_data_util_copy_channel= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_data_util_copy_channel"),(int)-1,null());
	lime_image_data_util_copy_pixels= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_data_util_copy_pixels"),(int)5,null());
	lime_image_data_util_fill_rect= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_data_util_fill_rect"),(int)3,null());
	lime_image_data_util_flood_fill= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_data_util_flood_fill"),(int)4,null());
	lime_image_data_util_get_pixels= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_data_util_get_pixels"),(int)3,null());
	lime_image_data_util_merge= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_data_util_merge"),(int)-1,null());
	lime_image_data_util_multiply_alpha= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_data_util_multiply_alpha"),(int)1,null());
	lime_image_data_util_resize= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_data_util_resize"),(int)4,null());
	lime_image_data_util_set_format= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_data_util_set_format"),(int)2,null());
	lime_image_data_util_set_pixels= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_data_util_set_pixels"),(int)4,null());
	lime_image_data_util_unmultiply_alpha= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_data_util_unmultiply_alpha"),(int)1,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace utils
