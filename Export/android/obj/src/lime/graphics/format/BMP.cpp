#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace graphics{
namespace format{

Void BMP_obj::__construct()
{
	return null();
}

//BMP_obj::~BMP_obj() { }

Dynamic BMP_obj::__CreateEmpty() { return  new BMP_obj; }
hx::ObjectPtr< BMP_obj > BMP_obj::__new()
{  hx::ObjectPtr< BMP_obj > result = new BMP_obj();
	result->__construct();
	return result;}

Dynamic BMP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BMP_obj > result = new BMP_obj();
	result->__construct();
	return result;}

::lime::utils::ByteArray BMP_obj::encode( ::lime::graphics::Image image,::lime::graphics::format::BMPType type){
	HX_STACK_FRAME("lime.graphics.format.BMP","encode",0xdcae556c,"lime.graphics.format.BMP.encode","lime/graphics/format/BMP.hx",12,0xe68a6e47)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(14)
	if (((type == null()))){
		HX_STACK_LINE(16)
		type = ::lime::graphics::format::BMPType_obj::RGB;
	}
	HX_STACK_LINE(20)
	int fileHeaderLength = (int)14;		HX_STACK_VAR(fileHeaderLength,"fileHeaderLength");
	HX_STACK_LINE(21)
	int infoHeaderLength = (int)40;		HX_STACK_VAR(infoHeaderLength,"infoHeaderLength");
	HX_STACK_LINE(22)
	int pixelValuesLength = ((image->width * image->height) * (int)4);		HX_STACK_VAR(pixelValuesLength,"pixelValuesLength");
	HX_STACK_LINE(24)
	switch( (int)(type->__Index())){
		case (int)1: {
			HX_STACK_LINE(28)
			infoHeaderLength = (int)108;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(32)
			fileHeaderLength = (int)0;
			HX_STACK_LINE(33)
			hx::AddEq(pixelValuesLength,(image->width * image->height));
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(37)
			pixelValuesLength = ((((image->width * (int)3) + hx::Mod((image->width * (int)3),(int)4)) + (image->height * (int)3)) + (image->height * (int)3));
		}
		;break;
	}
	HX_STACK_LINE(44)
	::lime::utils::ByteArray data = ::lime::utils::ByteArray_obj::__new(((fileHeaderLength + infoHeaderLength) + pixelValuesLength));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		data->littleEndian = true;
		HX_STACK_LINE(51)
		false;
	}
	HX_STACK_LINE(54)
	if (((fileHeaderLength > (int)0))){
		HX_STACK_LINE(56)
		data->writeByte((int)66);
		HX_STACK_LINE(57)
		data->writeByte((int)77);
		HX_STACK_LINE(58)
		data->writeInt(data->length);
		HX_STACK_LINE(59)
		data->writeShort((int)0);
		HX_STACK_LINE(60)
		data->writeShort((int)0);
		HX_STACK_LINE(61)
		data->writeInt((fileHeaderLength + infoHeaderLength));
	}
	HX_STACK_LINE(65)
	data->writeInt(infoHeaderLength);
	HX_STACK_LINE(66)
	data->writeInt(image->width);
	HX_STACK_LINE(67)
	data->writeInt((  (((type == ::lime::graphics::format::BMPType_obj::ICO))) ? int((image->height * (int)2)) : int(image->height) ));
	HX_STACK_LINE(68)
	data->writeShort((int)1);
	HX_STACK_LINE(69)
	data->writeShort((  (((type == ::lime::graphics::format::BMPType_obj::RGB))) ? int((int)24) : int((int)32) ));
	HX_STACK_LINE(70)
	data->writeInt((  (((type == ::lime::graphics::format::BMPType_obj::BITFIELD))) ? int((int)3) : int((int)0) ));
	HX_STACK_LINE(71)
	data->writeInt(pixelValuesLength);
	HX_STACK_LINE(72)
	data->writeInt((int)11824);
	HX_STACK_LINE(73)
	data->writeInt((int)11824);
	HX_STACK_LINE(74)
	data->writeInt((int)0);
	HX_STACK_LINE(75)
	data->writeInt((int)0);
	HX_STACK_LINE(77)
	if (((type == ::lime::graphics::format::BMPType_obj::BITFIELD))){
		HX_STACK_LINE(79)
		data->writeInt((int)16711680);
		HX_STACK_LINE(80)
		data->writeInt((int)65280);
		HX_STACK_LINE(81)
		data->writeInt((int)255);
		HX_STACK_LINE(82)
		data->writeInt((int)-16777216);
		HX_STACK_LINE(84)
		data->writeByte((int)32);
		HX_STACK_LINE(85)
		data->writeByte((int)110);
		HX_STACK_LINE(86)
		data->writeByte((int)105);
		HX_STACK_LINE(87)
		data->writeByte((int)87);
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				if ((!(((_g < (int)48))))){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(89)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(91)
				data->writeByte((int)0);
			}
		}
	}
	HX_STACK_LINE(97)
	::lime::math::Rectangle _g = ::lime::math::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(97)
	::lime::utils::ByteArray pixels = image->getPixels(_g,(int)1);		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(98)
	int a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(98)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(98)
	int g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(98)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(100)
	switch( (int)(type->__Index())){
		case (int)1: {
			HX_STACK_LINE(104)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(104)
			int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(106)
				pixels->position = (((((image->height - (int)1) - y)) * (int)4) * image->width);
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(108)
					int _g21 = image->width;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(108)
					while((true)){
						HX_STACK_LINE(108)
						if ((!(((_g3 < _g21))))){
							HX_STACK_LINE(108)
							break;
						}
						HX_STACK_LINE(108)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(110)
						int _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(110)
						{
							HX_STACK_LINE(110)
							int val;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(110)
							if (((pixels->position < pixels->length))){
								HX_STACK_LINE(110)
								int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(110)
								val = pixels->b->__get(pos);
							}
							else{
								HX_STACK_LINE(110)
								val = pixels->ThrowEOFi();
							}
							HX_STACK_LINE(110)
							if (((((int(val) & int((int)128))) != (int)0))){
								HX_STACK_LINE(110)
								_g11 = (val - (int)256);
							}
							else{
								HX_STACK_LINE(110)
								_g11 = val;
							}
						}
						HX_STACK_LINE(110)
						a = _g11;
						HX_STACK_LINE(111)
						int _g22;		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(111)
						{
							HX_STACK_LINE(111)
							int val;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(111)
							if (((pixels->position < pixels->length))){
								HX_STACK_LINE(111)
								int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(111)
								val = pixels->b->__get(pos);
							}
							else{
								HX_STACK_LINE(111)
								val = pixels->ThrowEOFi();
							}
							HX_STACK_LINE(111)
							if (((((int(val) & int((int)128))) != (int)0))){
								HX_STACK_LINE(111)
								_g22 = (val - (int)256);
							}
							else{
								HX_STACK_LINE(111)
								_g22 = val;
							}
						}
						HX_STACK_LINE(111)
						r = _g22;
						HX_STACK_LINE(112)
						int _g31;		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(112)
						{
							HX_STACK_LINE(112)
							int val;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(112)
							if (((pixels->position < pixels->length))){
								HX_STACK_LINE(112)
								int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(112)
								val = pixels->b->__get(pos);
							}
							else{
								HX_STACK_LINE(112)
								val = pixels->ThrowEOFi();
							}
							HX_STACK_LINE(112)
							if (((((int(val) & int((int)128))) != (int)0))){
								HX_STACK_LINE(112)
								_g31 = (val - (int)256);
							}
							else{
								HX_STACK_LINE(112)
								_g31 = val;
							}
						}
						HX_STACK_LINE(112)
						g = _g31;
						HX_STACK_LINE(113)
						int _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(113)
						{
							HX_STACK_LINE(113)
							int val;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(113)
							if (((pixels->position < pixels->length))){
								HX_STACK_LINE(113)
								int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(113)
								val = pixels->b->__get(pos);
							}
							else{
								HX_STACK_LINE(113)
								val = pixels->ThrowEOFi();
							}
							HX_STACK_LINE(113)
							if (((((int(val) & int((int)128))) != (int)0))){
								HX_STACK_LINE(113)
								_g4 = (val - (int)256);
							}
							else{
								HX_STACK_LINE(113)
								_g4 = val;
							}
						}
						HX_STACK_LINE(113)
						b = _g4;
						HX_STACK_LINE(115)
						data->writeByte(b);
						HX_STACK_LINE(116)
						data->writeByte(g);
						HX_STACK_LINE(117)
						data->writeByte(r);
						HX_STACK_LINE(118)
						data->writeByte(a);
					}
				}
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(127)
			::lime::utils::ByteArray andMask = ::lime::utils::ByteArray_obj::__new((image->width * image->height));		HX_STACK_VAR(andMask,"andMask");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(133)
				int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(133)
				while((true)){
					HX_STACK_LINE(133)
					if ((!(((_g1 < _g2))))){
						HX_STACK_LINE(133)
						break;
					}
					HX_STACK_LINE(133)
					int y = (_g1)++;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(135)
					pixels->position = (((((image->height - (int)1) - y)) * (int)4) * image->width);
					HX_STACK_LINE(137)
					{
						HX_STACK_LINE(137)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(137)
						int _g21 = image->width;		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(137)
						while((true)){
							HX_STACK_LINE(137)
							if ((!(((_g3 < _g21))))){
								HX_STACK_LINE(137)
								break;
							}
							HX_STACK_LINE(137)
							int x = (_g3)++;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(139)
							int _g5;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(139)
							{
								HX_STACK_LINE(139)
								int val;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(139)
								if (((pixels->position < pixels->length))){
									HX_STACK_LINE(139)
									int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(139)
									val = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(139)
									val = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(139)
								if (((((int(val) & int((int)128))) != (int)0))){
									HX_STACK_LINE(139)
									_g5 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(139)
									_g5 = val;
								}
							}
							HX_STACK_LINE(139)
							a = _g5;
							HX_STACK_LINE(140)
							int _g6;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(140)
							{
								HX_STACK_LINE(140)
								int val;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(140)
								if (((pixels->position < pixels->length))){
									HX_STACK_LINE(140)
									int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(140)
									val = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(140)
									val = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(140)
								if (((((int(val) & int((int)128))) != (int)0))){
									HX_STACK_LINE(140)
									_g6 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(140)
									_g6 = val;
								}
							}
							HX_STACK_LINE(140)
							r = _g6;
							HX_STACK_LINE(141)
							int _g7;		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(141)
							{
								HX_STACK_LINE(141)
								int val;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(141)
								if (((pixels->position < pixels->length))){
									HX_STACK_LINE(141)
									int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(141)
									val = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(141)
									val = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(141)
								if (((((int(val) & int((int)128))) != (int)0))){
									HX_STACK_LINE(141)
									_g7 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(141)
									_g7 = val;
								}
							}
							HX_STACK_LINE(141)
							g = _g7;
							HX_STACK_LINE(142)
							int _g8;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(142)
							{
								HX_STACK_LINE(142)
								int val;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(142)
								if (((pixels->position < pixels->length))){
									HX_STACK_LINE(142)
									int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(142)
									val = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(142)
									val = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(142)
								if (((((int(val) & int((int)128))) != (int)0))){
									HX_STACK_LINE(142)
									_g8 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(142)
									_g8 = val;
								}
							}
							HX_STACK_LINE(142)
							b = _g8;
							HX_STACK_LINE(144)
							data->writeByte(b);
							HX_STACK_LINE(145)
							data->writeByte(g);
							HX_STACK_LINE(146)
							data->writeByte(r);
							HX_STACK_LINE(147)
							data->writeByte(a);
							HX_STACK_LINE(155)
							andMask->writeByte((int)0);
						}
					}
				}
			}
			HX_STACK_LINE(163)
			data->writeBytes(andMask,null(),null());
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(167)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(167)
			int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(167)
			while((true)){
				HX_STACK_LINE(167)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(167)
					break;
				}
				HX_STACK_LINE(167)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(169)
				pixels->position = (((((image->height - (int)1) - y)) * (int)4) * image->width);
				HX_STACK_LINE(171)
				{
					HX_STACK_LINE(171)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(171)
					int _g21 = image->width;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(171)
					while((true)){
						HX_STACK_LINE(171)
						if ((!(((_g3 < _g21))))){
							HX_STACK_LINE(171)
							break;
						}
						HX_STACK_LINE(171)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(173)
						int _g9;		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							int val;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(173)
							if (((pixels->position < pixels->length))){
								HX_STACK_LINE(173)
								int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(173)
								val = pixels->b->__get(pos);
							}
							else{
								HX_STACK_LINE(173)
								val = pixels->ThrowEOFi();
							}
							HX_STACK_LINE(173)
							if (((((int(val) & int((int)128))) != (int)0))){
								HX_STACK_LINE(173)
								_g9 = (val - (int)256);
							}
							else{
								HX_STACK_LINE(173)
								_g9 = val;
							}
						}
						HX_STACK_LINE(173)
						a = _g9;
						HX_STACK_LINE(174)
						int _g10;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(174)
						{
							HX_STACK_LINE(174)
							int val;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(174)
							if (((pixels->position < pixels->length))){
								HX_STACK_LINE(174)
								int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(174)
								val = pixels->b->__get(pos);
							}
							else{
								HX_STACK_LINE(174)
								val = pixels->ThrowEOFi();
							}
							HX_STACK_LINE(174)
							if (((((int(val) & int((int)128))) != (int)0))){
								HX_STACK_LINE(174)
								_g10 = (val - (int)256);
							}
							else{
								HX_STACK_LINE(174)
								_g10 = val;
							}
						}
						HX_STACK_LINE(174)
						r = _g10;
						HX_STACK_LINE(175)
						int _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							int val;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(175)
							if (((pixels->position < pixels->length))){
								HX_STACK_LINE(175)
								int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(175)
								val = pixels->b->__get(pos);
							}
							else{
								HX_STACK_LINE(175)
								val = pixels->ThrowEOFi();
							}
							HX_STACK_LINE(175)
							if (((((int(val) & int((int)128))) != (int)0))){
								HX_STACK_LINE(175)
								_g11 = (val - (int)256);
							}
							else{
								HX_STACK_LINE(175)
								_g11 = val;
							}
						}
						HX_STACK_LINE(175)
						g = _g11;
						HX_STACK_LINE(176)
						int _g12;		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							int val;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(176)
							if (((pixels->position < pixels->length))){
								HX_STACK_LINE(176)
								int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(176)
								val = pixels->b->__get(pos);
							}
							else{
								HX_STACK_LINE(176)
								val = pixels->ThrowEOFi();
							}
							HX_STACK_LINE(176)
							if (((((int(val) & int((int)128))) != (int)0))){
								HX_STACK_LINE(176)
								_g12 = (val - (int)256);
							}
							else{
								HX_STACK_LINE(176)
								_g12 = val;
							}
						}
						HX_STACK_LINE(176)
						b = _g12;
						HX_STACK_LINE(178)
						data->writeByte(b);
						HX_STACK_LINE(179)
						data->writeByte(g);
						HX_STACK_LINE(180)
						data->writeByte(r);
					}
				}
				HX_STACK_LINE(184)
				{
					HX_STACK_LINE(184)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(184)
					int _g21 = hx::Mod((image->width * (int)3),(int)4);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(184)
					while((true)){
						HX_STACK_LINE(184)
						if ((!(((_g3 < _g21))))){
							HX_STACK_LINE(184)
							break;
						}
						HX_STACK_LINE(184)
						int i = (_g3)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(186)
						data->writeByte((int)0);
					}
				}
			}
		}
		;break;
	}
	HX_STACK_LINE(196)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMP_obj,encode,return )


BMP_obj::BMP_obj()
{
}

Dynamic BMP_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BMP_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BMP_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("encode"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#endif

Class BMP_obj::__mClass;

void BMP_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.format.BMP"), hx::TCanCast< BMP_obj> ,sStaticFields,sMemberFields,
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

void BMP_obj::__boot()
{
}

} // end namespace lime
} // end namespace graphics
} // end namespace format
