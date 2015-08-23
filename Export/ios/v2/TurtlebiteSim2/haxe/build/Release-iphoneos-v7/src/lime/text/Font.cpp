#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphMetrics
#include <lime/text/GlyphMetrics.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
namespace lime{
namespace text{

Void Font_obj::__construct(::String name)
{
HX_STACK_FRAME("lime.text.Font","new",0x97494f29,"lime.text.Font.new","lime/text/Font.hx",39,0x3be57807)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
{
	HX_STACK_LINE(41)
	this->name = name;
	HX_STACK_LINE(43)
	if (((this->__fontPath != null()))){
		HX_STACK_LINE(45)
		this->__fromFile(this->__fontPath);
	}
}
;
	return null();
}

//Font_obj::~Font_obj() { }

Dynamic Font_obj::__CreateEmpty() { return  new Font_obj; }
hx::ObjectPtr< Font_obj > Font_obj::__new(::String name)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(name);
	return result;}

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic Font_obj::decompose( ){
	HX_STACK_FRAME("lime.text.Font","decompose",0x6e29ff3a,"lime.text.Font.decompose","lime/text/Font.hx",52,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	if (((this->src == null()))){
		HX_STACK_LINE(56)
		HX_STACK_DO_THROW(HX_CSTRING("Uninitialized font handle."));
	}
	HX_STACK_LINE(57)
	return ::lime::text::Font_obj::lime_font_outline_decompose(this->src,(int)20480);
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,decompose,return )

int Font_obj::getGlyph( ::String character){
	HX_STACK_FRAME("lime.text.Font","getGlyph",0x5bf955cd,"lime.text.Font.getGlyph","lime/text/Font.hx",99,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(character,"character")
	HX_STACK_LINE(99)
	return ::lime::text::Font_obj::lime_font_get_glyph_index(this->src,character);
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyph,return )

Array< int > Font_obj::getGlyphs( ::String __o_characters){
::String characters = __o_characters.Default(HX_CSTRING("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^`'\"/\\&*()[]{}<>|:;_-+=?,. "));
	HX_STACK_FRAME("lime.text.Font","getGlyphs",0x1e31be06,"lime.text.Font.getGlyphs","lime/text/Font.hx",110,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(characters,"characters")
{
		HX_STACK_LINE(110)
		return ::lime::text::Font_obj::lime_font_get_glyph_indices(this->src,characters);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyphs,return )

::lime::text::GlyphMetrics Font_obj::getGlyphMetrics( int glyph){
	HX_STACK_FRAME("lime.text.Font","getGlyphMetrics",0x8c9677f6,"lime.text.Font.getGlyphMetrics","lime/text/Font.hx",118,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(glyph,"glyph")
	HX_STACK_LINE(121)
	Dynamic value = ::lime::text::Font_obj::lime_font_get_glyph_metrics(this->src,glyph);		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(122)
	::lime::text::GlyphMetrics metrics = ::lime::text::GlyphMetrics_obj::__new();		HX_STACK_VAR(metrics,"metrics");
	HX_STACK_LINE(124)
	::lime::math::Vector2 _g = ::lime::math::Vector2_obj::__new(value->__Field(HX_CSTRING("horizontalAdvance"),true),value->__Field(HX_CSTRING("verticalAdvance"),true));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(124)
	metrics->advance = _g;
	HX_STACK_LINE(125)
	metrics->height = value->__Field(HX_CSTRING("height"),true);
	HX_STACK_LINE(126)
	::lime::math::Vector2 _g1 = ::lime::math::Vector2_obj::__new(value->__Field(HX_CSTRING("horizontalBearingX"),true),value->__Field(HX_CSTRING("horizontalBearingY"),true));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(126)
	metrics->horizontalBearing = _g1;
	HX_STACK_LINE(127)
	::lime::math::Vector2 _g2 = ::lime::math::Vector2_obj::__new(value->__Field(HX_CSTRING("verticalBearingX"),true),value->__Field(HX_CSTRING("verticalBearingY"),true));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(127)
	metrics->verticalBearing = _g2;
	HX_STACK_LINE(129)
	return metrics;
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyphMetrics,return )

::lime::graphics::Image Font_obj::renderGlyph( int glyph,int fontSize){
	HX_STACK_FRAME("lime.text.Font","renderGlyph",0xe6e51a3f,"lime.text.Font.renderGlyph","lime/text/Font.hx",137,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(glyph,"glyph")
	HX_STACK_ARG(fontSize,"fontSize")
	HX_STACK_LINE(141)
	::lime::text::Font_obj::lime_font_set_size(this->src,fontSize);
	HX_STACK_LINE(143)
	::lime::utils::ByteArray bytes = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(144)
	{
		HX_STACK_LINE(144)
		bytes->littleEndian = true;
		HX_STACK_LINE(144)
		HX_CSTRING("littleEndian");
	}
	HX_STACK_LINE(146)
	if ((::lime::text::Font_obj::lime_font_render_glyph(this->src,glyph,bytes))){
		HX_STACK_LINE(148)
		bytes->position = (int)0;
		HX_STACK_LINE(150)
		int index = bytes->readUnsignedInt();		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(151)
		int width = bytes->readUnsignedInt();		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(152)
		int height = bytes->readUnsignedInt();		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(153)
		int x = bytes->readUnsignedInt();		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(154)
		int y = bytes->readUnsignedInt();		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(156)
		::lime::utils::ByteArray data = ::lime::utils::ByteArray_obj::__new((width * height));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(157)
		bytes->readBytes(data,(int)0,(width * height));
		HX_STACK_LINE(162)
		::lime::utils::UInt8Array _g = ::lime::utils::UInt8Array_obj::__new(data,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(162)
		::lime::graphics::ImageBuffer buffer = ::lime::graphics::ImageBuffer_obj::__new(_g,width,height,(int)1,null());		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(164)
		::lime::graphics::Image image = ::lime::graphics::Image_obj::__new(buffer,(int)0,(int)0,width,height,null(),null());		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(165)
		image->x = x;
		HX_STACK_LINE(166)
		image->y = y;
		HX_STACK_LINE(168)
		return image;
	}
	HX_STACK_LINE(174)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Font_obj,renderGlyph,return )

::haxe::ds::IntMap Font_obj::renderGlyphs( Array< int > glyphs,int fontSize){
	HX_STACK_FRAME("lime.text.Font","renderGlyphs",0x2191dd54,"lime.text.Font.renderGlyphs","lime/text/Font.hx",179,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(glyphs,"glyphs")
	HX_STACK_ARG(fontSize,"fontSize")
	HX_STACK_LINE(183)
	::haxe::ds::IntMap uniqueGlyphs = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(uniqueGlyphs,"uniqueGlyphs");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(185)
		while((true)){
			HX_STACK_LINE(185)
			if ((!(((_g < glyphs->length))))){
				HX_STACK_LINE(185)
				break;
			}
			HX_STACK_LINE(185)
			int glyph = glyphs->__get(_g);		HX_STACK_VAR(glyph,"glyph");
			HX_STACK_LINE(185)
			++(_g);
			HX_STACK_LINE(187)
			uniqueGlyphs->set(glyph,true);
		}
	}
	HX_STACK_LINE(191)
	Array< int > glyphList = Array_obj< int >::__new();		HX_STACK_VAR(glyphList,"glyphList");
	HX_STACK_LINE(193)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(uniqueGlyphs->keys());  __it->hasNext(); ){
		int key = __it->next();
		glyphList->push(key);
	}
	HX_STACK_LINE(199)
	::lime::text::Font_obj::lime_font_set_size(this->src,fontSize);
	HX_STACK_LINE(201)
	::lime::utils::ByteArray bytes = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		bytes->littleEndian = true;
		HX_STACK_LINE(202)
		HX_CSTRING("littleEndian");
	}
	HX_STACK_LINE(204)
	if ((::lime::text::Font_obj::lime_font_render_glyphs(this->src,glyphList,bytes))){
		HX_STACK_LINE(206)
		bytes->position = (int)0;
		HX_STACK_LINE(208)
		int count = bytes->readUnsignedInt();		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(210)
		int bufferWidth = (int)128;		HX_STACK_VAR(bufferWidth,"bufferWidth");
		HX_STACK_LINE(211)
		int bufferHeight = (int)128;		HX_STACK_VAR(bufferHeight,"bufferHeight");
		HX_STACK_LINE(212)
		int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(213)
		int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(214)
		int maxRows = (int)0;		HX_STACK_VAR(maxRows,"maxRows");
		HX_STACK_LINE(216)
		int width;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(216)
		int height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(217)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(219)
		while((true)){
			HX_STACK_LINE(219)
			if ((!(((i < count))))){
				HX_STACK_LINE(219)
				break;
			}
			HX_STACK_LINE(221)
			hx::AddEq(bytes->position,(int)4);
			HX_STACK_LINE(222)
			int _g = bytes->readUnsignedInt();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(222)
			width = _g;
			HX_STACK_LINE(223)
			int _g1 = bytes->readUnsignedInt();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(223)
			height = _g1;
			HX_STACK_LINE(224)
			hx::AddEq(bytes->position,((int)8 + (width * height)));
			HX_STACK_LINE(226)
			if ((((offsetX + width) > bufferWidth))){
				HX_STACK_LINE(228)
				hx::AddEq(offsetY,(maxRows + (int)1));
				HX_STACK_LINE(229)
				offsetX = (int)0;
				HX_STACK_LINE(230)
				maxRows = (int)0;
			}
			HX_STACK_LINE(234)
			if ((((offsetY + height) > bufferHeight))){
				HX_STACK_LINE(236)
				if (((bufferWidth < bufferHeight))){
					HX_STACK_LINE(238)
					hx::MultEq(bufferWidth,(int)2);
				}
				else{
					HX_STACK_LINE(242)
					hx::MultEq(bufferHeight,(int)2);
				}
				HX_STACK_LINE(246)
				offsetX = (int)0;
				HX_STACK_LINE(247)
				offsetY = (int)0;
				HX_STACK_LINE(248)
				maxRows = (int)0;
				HX_STACK_LINE(252)
				bytes->position = (int)4;
				HX_STACK_LINE(253)
				i = (int)0;
				HX_STACK_LINE(254)
				continue;
			}
			HX_STACK_LINE(258)
			hx::AddEq(offsetX,(width + (int)1));
			HX_STACK_LINE(260)
			if (((height > maxRows))){
				HX_STACK_LINE(262)
				maxRows = height;
			}
			HX_STACK_LINE(266)
			(i)++;
		}
		HX_STACK_LINE(270)
		::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
		HX_STACK_LINE(271)
		::lime::graphics::ImageBuffer buffer = ::lime::graphics::ImageBuffer_obj::__new(null(),bufferWidth,bufferHeight,(int)1,null());		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(272)
		::lime::utils::ByteArray data = ::lime::utils::ByteArray_obj::__new((bufferWidth * bufferHeight));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(274)
		bytes->position = (int)4;
		HX_STACK_LINE(275)
		offsetX = (int)0;
		HX_STACK_LINE(276)
		offsetY = (int)0;
		HX_STACK_LINE(277)
		maxRows = (int)0;
		HX_STACK_LINE(279)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(279)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(279)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(279)
		::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(281)
		{
			HX_STACK_LINE(281)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(281)
			while((true)){
				HX_STACK_LINE(281)
				if ((!(((_g < count))))){
					HX_STACK_LINE(281)
					break;
				}
				HX_STACK_LINE(281)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(283)
				int _g2 = bytes->readUnsignedInt();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(283)
				index = _g2;
				HX_STACK_LINE(284)
				int _g3 = bytes->readUnsignedInt();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(284)
				width = _g3;
				HX_STACK_LINE(285)
				int _g4 = bytes->readUnsignedInt();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(285)
				height = _g4;
				HX_STACK_LINE(286)
				int _g5 = bytes->readUnsignedInt();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(286)
				x = _g5;
				HX_STACK_LINE(287)
				int _g6 = bytes->readUnsignedInt();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(287)
				y = _g6;
				HX_STACK_LINE(289)
				if ((((offsetX + width) > bufferWidth))){
					HX_STACK_LINE(291)
					hx::AddEq(offsetY,(maxRows + (int)1));
					HX_STACK_LINE(292)
					offsetX = (int)0;
					HX_STACK_LINE(293)
					maxRows = (int)0;
				}
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(297)
					while((true)){
						HX_STACK_LINE(297)
						if ((!(((_g1 < height))))){
							HX_STACK_LINE(297)
							break;
						}
						HX_STACK_LINE(297)
						int i2 = (_g1)++;		HX_STACK_VAR(i2,"i2");
						HX_STACK_LINE(299)
						data->position = ((((i2 + offsetY)) * bufferWidth) + offsetX);
						HX_STACK_LINE(302)
						{
							HX_STACK_LINE(302)
							int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(302)
							while((true)){
								HX_STACK_LINE(302)
								if ((!(((_g21 < width))))){
									HX_STACK_LINE(302)
									break;
								}
								HX_STACK_LINE(302)
								int x1 = (_g21)++;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(304)
								int byte;		HX_STACK_VAR(byte,"byte");
								HX_STACK_LINE(304)
								if (((bytes->position < bytes->length))){
									HX_STACK_LINE(304)
									int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(304)
									byte = bytes->b->__get(pos);
								}
								else{
									HX_STACK_LINE(304)
									byte = bytes->ThrowEOFi();
								}
								HX_STACK_LINE(305)
								data->writeByte(byte);
							}
						}
					}
				}
				HX_STACK_LINE(311)
				::lime::graphics::Image _g7 = ::lime::graphics::Image_obj::__new(buffer,offsetX,offsetY,width,height,null(),null());		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(311)
				image = _g7;
				HX_STACK_LINE(312)
				image->x = x;
				HX_STACK_LINE(313)
				image->y = y;
				HX_STACK_LINE(315)
				map->set(index,image);
				HX_STACK_LINE(317)
				hx::AddEq(offsetX,(width + (int)1));
				HX_STACK_LINE(319)
				if (((height > maxRows))){
					HX_STACK_LINE(321)
					maxRows = height;
				}
			}
		}
		HX_STACK_LINE(330)
		::lime::utils::UInt8Array _g8 = ::lime::utils::UInt8Array_obj::__new(data,null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(330)
		buffer->data = _g8;
		HX_STACK_LINE(333)
		return map;
	}
	HX_STACK_LINE(339)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Font_obj,renderGlyphs,return )

Void Font_obj::__fromBytes( ::lime::utils::ByteArray bytes){
{
		HX_STACK_FRAME("lime.text.Font","__fromBytes",0x257c2b4a,"lime.text.Font.__fromBytes","lime/text/Font.hx",344,0x3be57807)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(346)
		this->__fontPath = null();
		HX_STACK_LINE(350)
		Dynamic _g = ::lime::text::Font_obj::lime_font_load(bytes);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(350)
		this->src = _g;
		HX_STACK_LINE(352)
		if (((bool((this->src != null())) && bool((this->name == null()))))){
			HX_STACK_LINE(354)
			::String _g1 = ::lime::text::Font_obj::lime_font_get_family_name(this->src);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(354)
			this->name = _g1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromBytes,(void))

Void Font_obj::__fromFile( ::String path){
{
		HX_STACK_FRAME("lime.text.Font","__fromFile",0x6331ec7d,"lime.text.Font.__fromFile","lime/text/Font.hx",363,0x3be57807)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(365)
		this->__fontPath = path;
		HX_STACK_LINE(369)
		Dynamic _g = ::lime::text::Font_obj::lime_font_load(this->__fontPath);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(369)
		this->src = _g;
		HX_STACK_LINE(371)
		if (((bool((this->src != null())) && bool((this->name == null()))))){
			HX_STACK_LINE(373)
			::String _g1 = ::lime::text::Font_obj::lime_font_get_family_name(this->src);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(373)
			this->name = _g1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromFile,(void))

int Font_obj::get_ascender( ){
	HX_STACK_FRAME("lime.text.Font","get_ascender",0x190d2c57,"lime.text.Font.get_ascender","lime/text/Font.hx",392,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(392)
	return ::lime::text::Font_obj::lime_font_get_ascender(this->src);
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_ascender,return )

int Font_obj::get_descender( ){
	HX_STACK_FRAME("lime.text.Font","get_descender",0xcf2c6cf7,"lime.text.Font.get_descender","lime/text/Font.hx",403,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(403)
	return ::lime::text::Font_obj::lime_font_get_descender(this->src);
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_descender,return )

int Font_obj::get_height( ){
	HX_STACK_FRAME("lime.text.Font","get_height",0x11455407,"lime.text.Font.get_height","lime/text/Font.hx",414,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(414)
	return ::lime::text::Font_obj::lime_font_get_height(this->src);
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_height,return )

int Font_obj::get_numGlyphs( ){
	HX_STACK_FRAME("lime.text.Font","get_numGlyphs",0x835f4c0d,"lime.text.Font.get_numGlyphs","lime/text/Font.hx",425,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(425)
	return ::lime::text::Font_obj::lime_font_get_num_glyphs(this->src);
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_numGlyphs,return )

int Font_obj::get_underlinePosition( ){
	HX_STACK_FRAME("lime.text.Font","get_underlinePosition",0xf48b45b5,"lime.text.Font.get_underlinePosition","lime/text/Font.hx",436,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(436)
	return ::lime::text::Font_obj::lime_font_get_underline_position(this->src);
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_underlinePosition,return )

int Font_obj::get_underlineThickness( ){
	HX_STACK_FRAME("lime.text.Font","get_underlineThickness",0x8f66b6e8,"lime.text.Font.get_underlineThickness","lime/text/Font.hx",447,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(447)
	return ::lime::text::Font_obj::lime_font_get_underline_thickness(this->src);
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_underlineThickness,return )

int Font_obj::get_unitsPerEM( ){
	HX_STACK_FRAME("lime.text.Font","get_unitsPerEM",0x81c292b6,"lime.text.Font.get_unitsPerEM","lime/text/Font.hx",458,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(458)
	return ::lime::text::Font_obj::lime_font_get_units_per_em(this->src);
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_unitsPerEM,return )

::lime::text::Font Font_obj::fromBytes( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.text.Font","fromBytes",0x65a32e2a,"lime.text.Font.fromBytes","lime/text/Font.hx",68,0x3be57807)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(70)
	::lime::text::Font font = ::lime::text::Font_obj::__new(null());		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(71)
	font->__fromBytes(bytes);
	HX_STACK_LINE(74)
	if (((font->src != null()))){
		HX_STACK_LINE(74)
		return font;
	}
	else{
		HX_STACK_LINE(74)
		return null();
	}
	HX_STACK_LINE(74)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromBytes,return )

::lime::text::Font Font_obj::fromFile( ::String path){
	HX_STACK_FRAME("lime.text.Font","fromFile",0x07a4e59d,"lime.text.Font.fromFile","lime/text/Font.hx",82,0x3be57807)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(84)
	::lime::text::Font font = ::lime::text::Font_obj::__new(null());		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(85)
	font->__fromFile(path);
	HX_STACK_LINE(88)
	if (((font->src != null()))){
		HX_STACK_LINE(88)
		return font;
	}
	else{
		HX_STACK_LINE(88)
		return null();
	}
	HX_STACK_LINE(88)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromFile,return )

Dynamic Font_obj::lime_font_get_ascender;

Dynamic Font_obj::lime_font_get_descender;

Dynamic Font_obj::lime_font_get_family_name;

Dynamic Font_obj::lime_font_get_glyph_index;

Dynamic Font_obj::lime_font_get_glyph_indices;

Dynamic Font_obj::lime_font_get_glyph_metrics;

Dynamic Font_obj::lime_font_get_height;

Dynamic Font_obj::lime_font_get_num_glyphs;

Dynamic Font_obj::lime_font_get_underline_position;

Dynamic Font_obj::lime_font_get_underline_thickness;

Dynamic Font_obj::lime_font_get_units_per_em;

Dynamic Font_obj::lime_font_load;

Dynamic Font_obj::lime_font_outline_decompose;

Dynamic Font_obj::lime_font_render_glyph;

Dynamic Font_obj::lime_font_render_glyphs;

Dynamic Font_obj::lime_font_set_size;


Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(ascender,"ascender");
	HX_MARK_MEMBER_NAME(descender,"descender");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_MARK_MEMBER_NAME(src,"src");
	HX_MARK_MEMBER_NAME(underlinePosition,"underlinePosition");
	HX_MARK_MEMBER_NAME(underlineThickness,"underlineThickness");
	HX_MARK_MEMBER_NAME(unitsPerEM,"unitsPerEM");
	HX_MARK_MEMBER_NAME(__fontPath,"__fontPath");
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ascender,"ascender");
	HX_VISIT_MEMBER_NAME(descender,"descender");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_VISIT_MEMBER_NAME(src,"src");
	HX_VISIT_MEMBER_NAME(underlinePosition,"underlinePosition");
	HX_VISIT_MEMBER_NAME(underlineThickness,"underlineThickness");
	HX_VISIT_MEMBER_NAME(unitsPerEM,"unitsPerEM");
	HX_VISIT_MEMBER_NAME(__fontPath,"__fontPath");
}

Dynamic Font_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return src; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { return fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"ascender") ) { return inCallProp ? get_ascender() : ascender; }
		if (HX_FIELD_EQ(inName,"getGlyph") ) { return getGlyph_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"descender") ) { return inCallProp ? get_descender() : descender; }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { return inCallProp ? get_numGlyphs() : numGlyphs; }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"getGlyphs") ) { return getGlyphs_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unitsPerEM") ) { return inCallProp ? get_unitsPerEM() : unitsPerEM; }
		if (HX_FIELD_EQ(inName,"__fontPath") ) { return __fontPath; }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderGlyph") ) { return renderGlyph_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderGlyphs") ) { return renderGlyphs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ascender") ) { return get_ascender_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_descender") ) { return get_descender_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numGlyphs") ) { return get_numGlyphs_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_font_load") ) { return lime_font_load; }
		if (HX_FIELD_EQ(inName,"get_unitsPerEM") ) { return get_unitsPerEM_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getGlyphMetrics") ) { return getGlyphMetrics_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"underlinePosition") ) { return inCallProp ? get_underlinePosition() : underlinePosition; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_font_set_size") ) { return lime_font_set_size; }
		if (HX_FIELD_EQ(inName,"underlineThickness") ) { return inCallProp ? get_underlineThickness() : underlineThickness; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_font_get_height") ) { return lime_font_get_height; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_underlinePosition") ) { return get_underlinePosition_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_font_get_ascender") ) { return lime_font_get_ascender; }
		if (HX_FIELD_EQ(inName,"lime_font_render_glyph") ) { return lime_font_render_glyph; }
		if (HX_FIELD_EQ(inName,"get_underlineThickness") ) { return get_underlineThickness_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_font_get_descender") ) { return lime_font_get_descender; }
		if (HX_FIELD_EQ(inName,"lime_font_render_glyphs") ) { return lime_font_render_glyphs; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_font_get_num_glyphs") ) { return lime_font_get_num_glyphs; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_font_get_family_name") ) { return lime_font_get_family_name; }
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_index") ) { return lime_font_get_glyph_index; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_font_get_units_per_em") ) { return lime_font_get_units_per_em; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_indices") ) { return lime_font_get_glyph_indices; }
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_metrics") ) { return lime_font_get_glyph_metrics; }
		if (HX_FIELD_EQ(inName,"lime_font_outline_decompose") ) { return lime_font_outline_decompose; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_font_get_underline_position") ) { return lime_font_get_underline_position; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_font_get_underline_thickness") ) { return lime_font_get_underline_thickness; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { src=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ascender") ) { ascender=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"descender") ) { descender=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { numGlyphs=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unitsPerEM") ) { unitsPerEM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fontPath") ) { __fontPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_font_load") ) { lime_font_load=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"underlinePosition") ) { underlinePosition=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_font_set_size") ) { lime_font_set_size=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"underlineThickness") ) { underlineThickness=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_font_get_height") ) { lime_font_get_height=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_font_get_ascender") ) { lime_font_get_ascender=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_font_render_glyph") ) { lime_font_render_glyph=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_font_get_descender") ) { lime_font_get_descender=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_font_render_glyphs") ) { lime_font_render_glyphs=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_font_get_num_glyphs") ) { lime_font_get_num_glyphs=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_font_get_family_name") ) { lime_font_get_family_name=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_index") ) { lime_font_get_glyph_index=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_font_get_units_per_em") ) { lime_font_get_units_per_em=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_indices") ) { lime_font_get_glyph_indices=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_metrics") ) { lime_font_get_glyph_metrics=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_font_outline_decompose") ) { lime_font_outline_decompose=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_font_get_underline_position") ) { lime_font_get_underline_position=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_font_get_underline_thickness") ) { lime_font_get_underline_thickness=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ascender"));
	outFields->push(HX_CSTRING("descender"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("numGlyphs"));
	outFields->push(HX_CSTRING("src"));
	outFields->push(HX_CSTRING("underlinePosition"));
	outFields->push(HX_CSTRING("underlineThickness"));
	outFields->push(HX_CSTRING("unitsPerEM"));
	outFields->push(HX_CSTRING("__fontPath"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromBytes"),
	HX_CSTRING("fromFile"),
	HX_CSTRING("lime_font_get_ascender"),
	HX_CSTRING("lime_font_get_descender"),
	HX_CSTRING("lime_font_get_family_name"),
	HX_CSTRING("lime_font_get_glyph_index"),
	HX_CSTRING("lime_font_get_glyph_indices"),
	HX_CSTRING("lime_font_get_glyph_metrics"),
	HX_CSTRING("lime_font_get_height"),
	HX_CSTRING("lime_font_get_num_glyphs"),
	HX_CSTRING("lime_font_get_underline_position"),
	HX_CSTRING("lime_font_get_underline_thickness"),
	HX_CSTRING("lime_font_get_units_per_em"),
	HX_CSTRING("lime_font_load"),
	HX_CSTRING("lime_font_outline_decompose"),
	HX_CSTRING("lime_font_render_glyph"),
	HX_CSTRING("lime_font_render_glyphs"),
	HX_CSTRING("lime_font_set_size"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Font_obj,ascender),HX_CSTRING("ascender")},
	{hx::fsInt,(int)offsetof(Font_obj,descender),HX_CSTRING("descender")},
	{hx::fsInt,(int)offsetof(Font_obj,height),HX_CSTRING("height")},
	{hx::fsString,(int)offsetof(Font_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(Font_obj,numGlyphs),HX_CSTRING("numGlyphs")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Font_obj,src),HX_CSTRING("src")},
	{hx::fsInt,(int)offsetof(Font_obj,underlinePosition),HX_CSTRING("underlinePosition")},
	{hx::fsInt,(int)offsetof(Font_obj,underlineThickness),HX_CSTRING("underlineThickness")},
	{hx::fsInt,(int)offsetof(Font_obj,unitsPerEM),HX_CSTRING("unitsPerEM")},
	{hx::fsString,(int)offsetof(Font_obj,__fontPath),HX_CSTRING("__fontPath")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ascender"),
	HX_CSTRING("descender"),
	HX_CSTRING("height"),
	HX_CSTRING("name"),
	HX_CSTRING("numGlyphs"),
	HX_CSTRING("src"),
	HX_CSTRING("underlinePosition"),
	HX_CSTRING("underlineThickness"),
	HX_CSTRING("unitsPerEM"),
	HX_CSTRING("__fontPath"),
	HX_CSTRING("decompose"),
	HX_CSTRING("getGlyph"),
	HX_CSTRING("getGlyphs"),
	HX_CSTRING("getGlyphMetrics"),
	HX_CSTRING("renderGlyph"),
	HX_CSTRING("renderGlyphs"),
	HX_CSTRING("__fromBytes"),
	HX_CSTRING("__fromFile"),
	HX_CSTRING("get_ascender"),
	HX_CSTRING("get_descender"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_numGlyphs"),
	HX_CSTRING("get_underlinePosition"),
	HX_CSTRING("get_underlineThickness"),
	HX_CSTRING("get_unitsPerEM"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_ascender,"lime_font_get_ascender");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_descender,"lime_font_get_descender");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_family_name,"lime_font_get_family_name");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_glyph_index,"lime_font_get_glyph_index");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_glyph_indices,"lime_font_get_glyph_indices");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_glyph_metrics,"lime_font_get_glyph_metrics");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_height,"lime_font_get_height");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_num_glyphs,"lime_font_get_num_glyphs");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_underline_position,"lime_font_get_underline_position");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_underline_thickness,"lime_font_get_underline_thickness");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_units_per_em,"lime_font_get_units_per_em");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_load,"lime_font_load");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_outline_decompose,"lime_font_outline_decompose");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_render_glyph,"lime_font_render_glyph");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_render_glyphs,"lime_font_render_glyphs");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_set_size,"lime_font_set_size");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_ascender,"lime_font_get_ascender");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_descender,"lime_font_get_descender");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_family_name,"lime_font_get_family_name");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_glyph_index,"lime_font_get_glyph_index");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_glyph_indices,"lime_font_get_glyph_indices");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_glyph_metrics,"lime_font_get_glyph_metrics");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_height,"lime_font_get_height");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_num_glyphs,"lime_font_get_num_glyphs");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_underline_position,"lime_font_get_underline_position");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_underline_thickness,"lime_font_get_underline_thickness");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_units_per_em,"lime_font_get_units_per_em");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_load,"lime_font_load");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_outline_decompose,"lime_font_outline_decompose");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_render_glyph,"lime_font_render_glyph");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_render_glyphs,"lime_font_render_glyphs");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_set_size,"lime_font_set_size");
};

#endif

Class Font_obj::__mClass;

void Font_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.text.Font"), hx::TCanCast< Font_obj> ,sStaticFields,sMemberFields,
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

void Font_obj::__boot()
{
	lime_font_get_ascender= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_get_ascender"),(int)1,null());
	lime_font_get_descender= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_get_descender"),(int)1,null());
	lime_font_get_family_name= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_get_family_name"),(int)1,null());
	lime_font_get_glyph_index= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_get_glyph_index"),(int)2,null());
	lime_font_get_glyph_indices= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_get_glyph_indices"),(int)2,null());
	lime_font_get_glyph_metrics= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_get_glyph_metrics"),(int)2,null());
	lime_font_get_height= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_get_height"),(int)1,null());
	lime_font_get_num_glyphs= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_get_num_glyphs"),(int)1,null());
	lime_font_get_underline_position= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_get_underline_position"),(int)1,null());
	lime_font_get_underline_thickness= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_get_underline_thickness"),(int)1,null());
	lime_font_get_units_per_em= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_get_units_per_em"),(int)1,null());
	lime_font_load= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_load"),(int)1,null());
	lime_font_outline_decompose= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_outline_decompose"),(int)2,null());
	lime_font_render_glyph= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_render_glyph"),(int)3,null());
	lime_font_render_glyphs= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_render_glyphs"),(int)3,null());
	lime_font_set_size= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_set_size"),(int)2,null());
}

} // end namespace lime
} // end namespace text
