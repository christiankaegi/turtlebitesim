#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_TextFieldGraphics
#include <openfl/_internal/renderer/TextFieldGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatRange
#include <openfl/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

Void TextFieldGraphics_obj::__construct()
{
	return null();
}

//TextFieldGraphics_obj::~TextFieldGraphics_obj() { }

Dynamic TextFieldGraphics_obj::__CreateEmpty() { return  new TextFieldGraphics_obj; }
hx::ObjectPtr< TextFieldGraphics_obj > TextFieldGraphics_obj::__new()
{  hx::ObjectPtr< TextFieldGraphics_obj > result = new TextFieldGraphics_obj();
	result->__construct();
	return result;}

Dynamic TextFieldGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFieldGraphics_obj > result = new TextFieldGraphics_obj();
	result->__construct();
	return result;}

::haxe::ds::ObjectMap TextFieldGraphics_obj::bitmapData;

::haxe::ds::ObjectMap TextFieldGraphics_obj::glyphs;

::haxe::ds::ObjectMap TextFieldGraphics_obj::tilesheets;

::haxe::ds::ObjectMap TextFieldGraphics_obj::tileIDs;

Void TextFieldGraphics_obj::render( ::openfl::text::TextField textField){
{
		HX_STACK_FRAME("openfl._internal.renderer.TextFieldGraphics","render",0xa6aa48c7,"openfl._internal.renderer.TextFieldGraphics.render","openfl/_internal/renderer/TextFieldGraphics.hx",31,0xf0946200)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_LINE(33)
		::openfl::_internal::renderer::TextFieldGraphics_obj::update(textField);
		HX_STACK_LINE(35)
		if (((textField->__graphics == null()))){
			HX_STACK_LINE(37)
			::openfl::display::Graphics _g = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			textField->__graphics = _g;
		}
		HX_STACK_LINE(41)
		::openfl::display::Graphics graphics = textField->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(42)
		graphics->clear();
		HX_STACK_LINE(44)
		if (((bool(textField->border) || bool(textField->background)))){
			HX_STACK_LINE(46)
			if ((textField->border)){
				HX_STACK_LINE(48)
				graphics->lineStyle((int)1,textField->borderColor,null(),null(),null(),null(),null(),null());
			}
			HX_STACK_LINE(52)
			if ((textField->background)){
				HX_STACK_LINE(54)
				graphics->beginFill(textField->backgroundColor,null());
			}
			HX_STACK_LINE(58)
			graphics->drawRect(0.5,0.5,(textField->__width - (int)1),(textField->__height - (int)1));
		}
		HX_STACK_LINE(62)
		if (((textField->__tileData != null()))){
			HX_STACK_LINE(64)
			for(::cpp::FastIterator_obj< ::openfl::display::Tilesheet > *__it = ::cpp::CreateFastIterator< ::openfl::display::Tilesheet >(textField->__tilesheets->keys());  __it->hasNext(); ){
				::openfl::display::Tilesheet tilesheet = __it->next();
				{
					HX_STACK_LINE(66)
					Array< Float > _g1 = textField->__tileData->get(tilesheet);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(66)
					Dynamic _g2 = textField->__tileDataLength->get(tilesheet);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(66)
					graphics->drawTiles(tilesheet,_g1,true,(int)4,_g2);
				}
;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFieldGraphics_obj,render,(void))

Void TextFieldGraphics_obj::renderText( ::openfl::text::TextField textField,::String text,::openfl::text::TextFormat format,Float offsetX,Float textWidth){
{
		HX_STACK_FRAME("openfl._internal.renderer.TextFieldGraphics","renderText",0xe9feb114,"openfl._internal.renderer.TextFieldGraphics.renderText","openfl/_internal/renderer/TextFieldGraphics.hx",75,0xf0946200)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(textWidth,"textWidth")
		HX_STACK_LINE(77)
		::openfl::text::Font font = textField->__getFontInstance(format);		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(79)
		if (((bool((font != null())) && bool((format->size != null()))))){
			struct _Function_2_1{
				inline static bool Block( ::openfl::text::Font &font){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",81,0xf0946200)
					{
						HX_STACK_LINE(81)
						int _g = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(81)
						return ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->__Internal->exists(_g);
					}
					return null();
				}
			};
			HX_STACK_LINE(81)
			if ((!(_Function_2_1::Block(font)))){
				HX_STACK_LINE(83)
				::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(83)
				::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->set(font,value);
			}
			HX_STACK_LINE(87)
			int size = ::Std_obj::_int(format->size);		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(88)
			::haxe::ds::IntMap fontGlyphs = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->get(font);		HX_STACK_VAR(fontGlyphs,"fontGlyphs");
			HX_STACK_LINE(90)
			if ((!(fontGlyphs->exists(size)))){
				HX_STACK_LINE(92)
				Array< int > _g = font->getGlyphs(null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(92)
				::haxe::ds::IntMap value = font->renderGlyphs(_g,size);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(92)
				fontGlyphs->set(size,value);
			}
			HX_STACK_LINE(96)
			::haxe::ds::IntMap images = fontGlyphs->get(size);		HX_STACK_VAR(images,"images");
			struct _Function_2_2{
				inline static bool Block( ::openfl::text::Font &font){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",98,0xf0946200)
					{
						HX_STACK_LINE(98)
						int _g = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(98)
						return ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->__Internal->exists(_g);
					}
					return null();
				}
			};
			HX_STACK_LINE(98)
			if ((!(_Function_2_2::Block(font)))){
				HX_STACK_LINE(100)
				::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(100)
				::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->set(font,value);
			}
			HX_STACK_LINE(104)
			::haxe::ds::IntMap fontBitmapData = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->get(font);		HX_STACK_VAR(fontBitmapData,"fontBitmapData");
			HX_STACK_LINE(106)
			if ((!(fontBitmapData->exists(size)))){
				HX_STACK_LINE(108)
				int width;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(108)
				int height;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(108)
				::lime::utils::UInt8Array data;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(110)
				for(::cpp::FastIterator_obj< ::lime::graphics::Image > *__it = ::cpp::CreateFastIterator< ::lime::graphics::Image >(images->iterator());  __it->hasNext(); ){
					::lime::graphics::Image image = __it->next();
					{
						HX_STACK_LINE(112)
						width = image->buffer->width;
						HX_STACK_LINE(113)
						height = image->buffer->height;
						HX_STACK_LINE(114)
						::lime::utils::UInt8Array _g1 = image->get_data();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(114)
						data = _g1;
						HX_STACK_LINE(115)
						break;
					}
;
				}
				HX_STACK_LINE(119)
				::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new(width,height,null(),null());		HX_STACK_VAR(bitmapData,"bitmapData");
				HX_STACK_LINE(121)
				{
					HX_STACK_LINE(121)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(121)
					while((true)){
						HX_STACK_LINE(121)
						if ((!(((_g < width))))){
							HX_STACK_LINE(121)
							break;
						}
						HX_STACK_LINE(121)
						int x = (_g)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(123)
						{
							HX_STACK_LINE(123)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(123)
							while((true)){
								HX_STACK_LINE(123)
								if ((!(((_g1 < height))))){
									HX_STACK_LINE(123)
									break;
								}
								HX_STACK_LINE(123)
								int y = (_g1)++;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(125)
								int alpha = data->__get(((y * width) + x));		HX_STACK_VAR(alpha,"alpha");
								HX_STACK_LINE(126)
								int color = (int((int((int((int(alpha) << int((int)24))) | int((int)16711680))) | int((int)65280))) | int((int)255));		HX_STACK_VAR(color,"color");
								HX_STACK_LINE(127)
								bitmapData->setPixel32(x,y,color);
							}
						}
					}
				}
				HX_STACK_LINE(133)
				fontBitmapData->set(size,bitmapData);
			}
			HX_STACK_LINE(137)
			::openfl::display::BitmapData bitmapData = fontBitmapData->get(size);		HX_STACK_VAR(bitmapData,"bitmapData");
			struct _Function_2_3{
				inline static bool Block( ::openfl::display::BitmapData &bitmapData){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",139,0xf0946200)
					{
						HX_STACK_LINE(139)
						int _g = ::__hxcpp_obj_id(bitmapData);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(139)
						return ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->__Internal->exists(_g);
					}
					return null();
				}
			};
			HX_STACK_LINE(139)
			if ((!(_Function_2_3::Block(bitmapData)))){
				HX_STACK_LINE(141)
				::openfl::display::Tilesheet tilesheet = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
				HX_STACK_LINE(142)
				::haxe::ds::IntMap tileID = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tileID,"tileID");
				HX_STACK_LINE(144)
				::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(144)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(146)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(images->keys());  __it->hasNext(); ){
					int key = __it->next();
					{
						HX_STACK_LINE(148)
						::lime::graphics::Image _g2 = images->get(key);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(148)
						image = _g2;
						HX_STACK_LINE(149)
						::openfl::geom::Rectangle _g3 = ::openfl::geom::Rectangle_obj::__new(image->offsetX,image->offsetY,image->width,image->height);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(149)
						int _g4 = tilesheet->addTileRect(_g3,null());		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(149)
						index = _g4;
						HX_STACK_LINE(151)
						tileID->set(key,index);
					}
;
				}
				HX_STACK_LINE(154)
				::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs->set(bitmapData,tileID);
				HX_STACK_LINE(155)
				::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->set(bitmapData,tilesheet);
			}
			HX_STACK_LINE(159)
			::openfl::display::Tilesheet tilesheet = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->get(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
			HX_STACK_LINE(160)
			::IMap tileID = ::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs->get(bitmapData);		HX_STACK_VAR(tileID,"tileID");
			HX_STACK_LINE(162)
			Float r = (Float(((int((int(format->color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(163)
			Float g = (Float(((int((int(format->color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(164)
			Float b = (Float(((int(format->color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(166)
			::openfl::text::TextLineMetrics tlm = textField->getLineMetrics((int)0);		HX_STACK_VAR(tlm,"tlm");
			HX_STACK_LINE(168)
			::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(169)
			Float x = offsetX;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(170)
			Float y = ((int)2 + tlm->ascent);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(175)
			Array< Float > tileData;		HX_STACK_VAR(tileData,"tileData");
			HX_STACK_LINE(177)
			textField->__tilesheets->set(tilesheet,true);
			struct _Function_2_4{
				inline static bool Block( ::openfl::text::TextField &textField,::openfl::display::Tilesheet &tilesheet){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",179,0xf0946200)
					{
						HX_STACK_LINE(179)
						int _g = ::__hxcpp_obj_id(tilesheet);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(179)
						return textField->__tileData->__Internal->exists(_g);
					}
					return null();
				}
			};
			HX_STACK_LINE(179)
			if ((!(_Function_2_4::Block(textField,tilesheet)))){
				HX_STACK_LINE(181)
				Array< Float > _g5 = Array_obj< Float >::__new();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(181)
				tileData = _g5;
				HX_STACK_LINE(182)
				textField->__tileData->set(tilesheet,tileData);
				HX_STACK_LINE(183)
				textField->__tileDataLength->set(tilesheet,(int)0);
			}
			HX_STACK_LINE(187)
			Array< Float > _g6 = textField->__tileData->get(tilesheet);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(187)
			tileData = _g6;
			HX_STACK_LINE(189)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(190)
			Array< ::String > lines = text.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
			HX_STACK_LINE(192)
			if (((textField->__textLayout == null()))){
				HX_STACK_LINE(194)
				::lime::text::TextLayout _g7 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(194)
				textField->__textLayout = _g7;
			}
			HX_STACK_LINE(198)
			::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
			HX_STACK_LINE(199)
			int length = (int)0;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(201)
			int line_i = (int)0;		HX_STACK_VAR(line_i,"line_i");
			HX_STACK_LINE(202)
			Float oldX = x;		HX_STACK_VAR(oldX,"oldX");
			HX_STACK_LINE(204)
			{
				HX_STACK_LINE(204)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(204)
				while((true)){
					HX_STACK_LINE(204)
					if ((!(((_g < lines->length))))){
						HX_STACK_LINE(204)
						break;
					}
					HX_STACK_LINE(204)
					::String line = lines->__get(_g);		HX_STACK_VAR(line,"line");
					HX_STACK_LINE(204)
					++(_g);
					HX_STACK_LINE(206)
					::openfl::text::TextLineMetrics _g8 = textField->getLineMetrics(line_i);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(206)
					tlm = _g8;
					HX_STACK_LINE(209)
					x = oldX;
					HX_STACK_LINE(211)
					Float _g9;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(211)
					{
						HX_STACK_LINE(211)
						::openfl::text::TextFormatAlign _g1 = format->align;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(211)
						switch( (int)(_g1->__Index())){
							case (int)0: case (int)2: {
								HX_STACK_LINE(213)
								_g9 = (int)0;
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(214)
								_g9 = (Float((((textField->__width - (int)4) - tlm->width))) / Float((int)2));
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(215)
								_g9 = ((textField->__width - (int)4) - tlm->width);
							}
							;break;
						}
					}
					HX_STACK_LINE(211)
					hx::AddEq(x,_g9);
					HX_STACK_LINE(219)
					textLayout->set_text(null());
					HX_STACK_LINE(220)
					textLayout->set_font(font);
					HX_STACK_LINE(221)
					textLayout->set_size(size);
					HX_STACK_LINE(222)
					textLayout->set_text(line);
					HX_STACK_LINE(224)
					{
						HX_STACK_LINE(224)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(224)
						Array< ::Dynamic > _g2 = textLayout->positions;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(224)
						while((true)){
							HX_STACK_LINE(224)
							if ((!(((_g1 < _g2->length))))){
								HX_STACK_LINE(224)
								break;
							}
							HX_STACK_LINE(224)
							::lime::text::GlyphPosition position = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
							HX_STACK_LINE(224)
							++(_g1);
							HX_STACK_LINE(226)
							::lime::graphics::Image _g10 = images->get(position->glyph);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(226)
							image = _g10;
							HX_STACK_LINE(228)
							if (((image != null()))){
								HX_STACK_LINE(230)
								if (((length >= tileData->length))){
									HX_STACK_LINE(232)
									tileData->push(((x + position->offset->x) + image->x));
									HX_STACK_LINE(233)
									tileData->push(((y + position->offset->y) - image->y));
									HX_STACK_LINE(234)
									Dynamic _g11 = tileID->get(position->glyph);		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(234)
									tileData->push(_g11);
									HX_STACK_LINE(235)
									tileData->push(r);
									HX_STACK_LINE(236)
									tileData->push(g);
									HX_STACK_LINE(237)
									tileData->push(b);
								}
								else{
									HX_STACK_LINE(241)
									tileData[length] = ((x + position->offset->x) + image->x);
									HX_STACK_LINE(242)
									tileData[(length + (int)1)] = ((y + position->offset->y) - image->y);
									HX_STACK_LINE(243)
									tileData[(length + (int)2)] = tileID->get(position->glyph);
									HX_STACK_LINE(244)
									tileData[(length + (int)3)] = r;
									HX_STACK_LINE(245)
									tileData[(length + (int)4)] = g;
									HX_STACK_LINE(246)
									tileData[(length + (int)5)] = b;
								}
								HX_STACK_LINE(250)
								hx::AddEq(length,(int)6);
							}
							HX_STACK_LINE(254)
							hx::AddEq(x,position->advance->x);
							HX_STACK_LINE(255)
							hx::SubEq(y,position->advance->y);
						}
					}
					HX_STACK_LINE(259)
					hx::AddEq(y,tlm->height);
					HX_STACK_LINE(260)
					(line_i)++;
				}
			}
			HX_STACK_LINE(264)
			textField->__tileDataLength->set(tilesheet,length);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(TextFieldGraphics_obj,renderText,(void))

bool TextFieldGraphics_obj::update( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.TextFieldGraphics","update",0x2886637a,"openfl._internal.renderer.TextFieldGraphics.update","openfl/_internal/renderer/TextFieldGraphics.hx",271,0xf0946200)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(273)
	if ((textField->__dirty)){
		struct _Function_2_1{
			inline static bool Block( ::openfl::text::TextField &textField){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",275,0xf0946200)
				{
					HX_STACK_LINE(275)
					Float _g = textField->get_width();		HX_STACK_VAR(_g,"_g");
					struct _Function_3_1{
						inline static bool Block( ::openfl::text::TextField &textField){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",275,0xf0946200)
							{
								HX_STACK_LINE(275)
								Float _g1 = textField->get_height();		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(275)
								return (_g1 <= (int)0);
							}
							return null();
						}
					};
					HX_STACK_LINE(275)
					return (  (((  ((!(((_g <= (int)0))))) ? bool(_Function_3_1::Block(textField)) : bool(true) ))) ? bool((textField->autoSize != ::openfl::text::TextFieldAutoSize_obj::LEFT)) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(275)
		if (((  ((!(((bool((bool(((bool((textField->__text == null())) || bool((textField->__text == HX_CSTRING("")))))) && bool(!(textField->background)))) && bool(!(textField->border))))))) ? bool(_Function_2_1::Block(textField)) : bool(true) ))){
			HX_STACK_LINE(277)
			textField->__tilesheets = null();
			HX_STACK_LINE(278)
			textField->__tileData = null();
			HX_STACK_LINE(279)
			textField->__tileDataLength = null();
			HX_STACK_LINE(280)
			textField->__dirty = false;
		}
		else{
			HX_STACK_LINE(284)
			::haxe::ds::ObjectMap _g2 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(284)
			textField->__tilesheets = _g2;
			HX_STACK_LINE(286)
			if (((textField->__tileData == null()))){
				HX_STACK_LINE(288)
				::haxe::ds::ObjectMap _g3 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(288)
				textField->__tileData = _g3;
				HX_STACK_LINE(289)
				::haxe::ds::ObjectMap _g4 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(289)
				textField->__tileDataLength = _g4;
			}
			HX_STACK_LINE(293)
			if (((bool((textField->__text != null())) && bool((textField->__text != HX_CSTRING("")))))){
				HX_STACK_LINE(295)
				::String text = textField->get_text();		HX_STACK_VAR(text,"text");
				HX_STACK_LINE(297)
				if ((textField->displayAsPassword)){
					HX_STACK_LINE(299)
					int length = text.length;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(300)
					::String mask = HX_CSTRING("");		HX_STACK_VAR(mask,"mask");
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
							hx::AddEq(mask,HX_CSTRING("*"));
						}
					}
					HX_STACK_LINE(308)
					text = mask;
				}
				HX_STACK_LINE(312)
				Array< Float > measurements = textField->__measureText(null());		HX_STACK_VAR(measurements,"measurements");
				HX_STACK_LINE(313)
				Float textWidth = 0.0;		HX_STACK_VAR(textWidth,"textWidth");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(315)
					while((true)){
						HX_STACK_LINE(315)
						if ((!(((_g < measurements->length))))){
							HX_STACK_LINE(315)
							break;
						}
						HX_STACK_LINE(315)
						Float measurement = measurements->__get(_g);		HX_STACK_VAR(measurement,"measurement");
						HX_STACK_LINE(315)
						++(_g);
						HX_STACK_LINE(317)
						hx::AddEq(textWidth,measurement);
					}
				}
				HX_STACK_LINE(321)
				if (((textField->autoSize == ::openfl::text::TextFieldAutoSize_obj::LEFT))){
					HX_STACK_LINE(323)
					textField->__width = (textWidth + (int)4);
					HX_STACK_LINE(324)
					Float _g5 = textField->get_textHeight();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(324)
					Float _g6 = (_g5 + (int)4);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(324)
					textField->__height = _g6;
				}
				HX_STACK_LINE(328)
				if (((textField->__ranges == null()))){
					HX_STACK_LINE(330)
					::openfl::text::TextFormat format = textField->__textFormat;		HX_STACK_VAR(format,"format");
					HX_STACK_LINE(330)
					::openfl::text::Font font = textField->__getFontInstance(format);		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(330)
					if (((bool((font != null())) && bool((format->size != null()))))){
						struct _Function_6_1{
							inline static bool Block( ::openfl::text::Font &font){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",330,0xf0946200)
								{
									HX_STACK_LINE(330)
									int _g = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(330)
									return ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->__Internal->exists(_g);
								}
								return null();
							}
						};
						HX_STACK_LINE(330)
						if ((!(_Function_6_1::Block(font)))){
							HX_STACK_LINE(330)
							::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(330)
							::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->set(font,value);
						}
						HX_STACK_LINE(330)
						int size = ::Std_obj::_int(format->size);		HX_STACK_VAR(size,"size");
						HX_STACK_LINE(330)
						::haxe::ds::IntMap fontGlyphs = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->get(font);		HX_STACK_VAR(fontGlyphs,"fontGlyphs");
						HX_STACK_LINE(330)
						if ((!(fontGlyphs->exists(size)))){
							HX_STACK_LINE(330)
							Array< int > _g7 = font->getGlyphs(null());		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(330)
							::haxe::ds::IntMap value = font->renderGlyphs(_g7,size);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(330)
							fontGlyphs->set(size,value);
						}
						HX_STACK_LINE(330)
						::haxe::ds::IntMap images = fontGlyphs->get(size);		HX_STACK_VAR(images,"images");
						struct _Function_6_2{
							inline static bool Block( ::openfl::text::Font &font){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",330,0xf0946200)
								{
									HX_STACK_LINE(330)
									int _g = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(330)
									return ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->__Internal->exists(_g);
								}
								return null();
							}
						};
						HX_STACK_LINE(330)
						if ((!(_Function_6_2::Block(font)))){
							HX_STACK_LINE(330)
							::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(330)
							::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->set(font,value);
						}
						HX_STACK_LINE(330)
						::haxe::ds::IntMap fontBitmapData = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->get(font);		HX_STACK_VAR(fontBitmapData,"fontBitmapData");
						HX_STACK_LINE(330)
						if ((!(fontBitmapData->exists(size)))){
							HX_STACK_LINE(330)
							int width;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(330)
							int height;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(330)
							::lime::utils::UInt8Array data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(330)
							for(::cpp::FastIterator_obj< ::lime::graphics::Image > *__it = ::cpp::CreateFastIterator< ::lime::graphics::Image >(images->iterator());  __it->hasNext(); ){
								::lime::graphics::Image image = __it->next();
								{
									HX_STACK_LINE(330)
									width = image->buffer->width;
									HX_STACK_LINE(330)
									height = image->buffer->height;
									HX_STACK_LINE(330)
									::lime::utils::UInt8Array _g8 = image->get_data();		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(330)
									data = _g8;
									HX_STACK_LINE(330)
									break;
								}
;
							}
							HX_STACK_LINE(330)
							::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new(width,height,null(),null());		HX_STACK_VAR(bitmapData,"bitmapData");
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(330)
								while((true)){
									HX_STACK_LINE(330)
									if ((!(((_g < width))))){
										HX_STACK_LINE(330)
										break;
									}
									HX_STACK_LINE(330)
									int x = (_g)++;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(330)
									{
										HX_STACK_LINE(330)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(330)
										while((true)){
											HX_STACK_LINE(330)
											if ((!(((_g1 < height))))){
												HX_STACK_LINE(330)
												break;
											}
											HX_STACK_LINE(330)
											int y = (_g1)++;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(330)
											int alpha = data->__get(((y * width) + x));		HX_STACK_VAR(alpha,"alpha");
											HX_STACK_LINE(330)
											int color = (int((int((int((int(alpha) << int((int)24))) | int((int)16711680))) | int((int)65280))) | int((int)255));		HX_STACK_VAR(color,"color");
											HX_STACK_LINE(330)
											bitmapData->setPixel32(x,y,color);
										}
									}
								}
							}
							HX_STACK_LINE(330)
							fontBitmapData->set(size,bitmapData);
						}
						HX_STACK_LINE(330)
						::openfl::display::BitmapData bitmapData = fontBitmapData->get(size);		HX_STACK_VAR(bitmapData,"bitmapData");
						struct _Function_6_3{
							inline static bool Block( ::openfl::display::BitmapData &bitmapData){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",330,0xf0946200)
								{
									HX_STACK_LINE(330)
									int _g = ::__hxcpp_obj_id(bitmapData);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(330)
									return ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->__Internal->exists(_g);
								}
								return null();
							}
						};
						HX_STACK_LINE(330)
						if ((!(_Function_6_3::Block(bitmapData)))){
							HX_STACK_LINE(330)
							::openfl::display::Tilesheet tilesheet = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
							HX_STACK_LINE(330)
							::haxe::ds::IntMap tileID = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tileID,"tileID");
							HX_STACK_LINE(330)
							::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
							HX_STACK_LINE(330)
							int index;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(330)
							for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(images->keys());  __it->hasNext(); ){
								int key = __it->next();
								{
									HX_STACK_LINE(330)
									::lime::graphics::Image _g9 = images->get(key);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(330)
									image = _g9;
									HX_STACK_LINE(330)
									::openfl::geom::Rectangle _g10 = ::openfl::geom::Rectangle_obj::__new(image->offsetX,image->offsetY,image->width,image->height);		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(330)
									int _g11 = tilesheet->addTileRect(_g10,null());		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(330)
									index = _g11;
									HX_STACK_LINE(330)
									tileID->set(key,index);
								}
;
							}
							HX_STACK_LINE(330)
							::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs->set(bitmapData,tileID);
							HX_STACK_LINE(330)
							::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->set(bitmapData,tilesheet);
						}
						HX_STACK_LINE(330)
						::openfl::display::Tilesheet tilesheet = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->get(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
						HX_STACK_LINE(330)
						::IMap tileID = ::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs->get(bitmapData);		HX_STACK_VAR(tileID,"tileID");
						HX_STACK_LINE(330)
						Float r = (Float(((int((int(format->color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(330)
						Float g = (Float(((int((int(format->color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(330)
						Float b = (Float(((int(format->color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(330)
						::openfl::text::TextLineMetrics tlm = textField->getLineMetrics((int)0);		HX_STACK_VAR(tlm,"tlm");
						HX_STACK_LINE(330)
						::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
						HX_STACK_LINE(330)
						Float x = (int)2;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(330)
						Float y = ((int)2 + tlm->ascent);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(330)
						Array< Float > tileData;		HX_STACK_VAR(tileData,"tileData");
						HX_STACK_LINE(330)
						textField->__tilesheets->set(tilesheet,true);
						struct _Function_6_4{
							inline static bool Block( ::openfl::text::TextField &textField,::openfl::display::Tilesheet &tilesheet){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",330,0xf0946200)
								{
									HX_STACK_LINE(330)
									int _g = ::__hxcpp_obj_id(tilesheet);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(330)
									return textField->__tileData->__Internal->exists(_g);
								}
								return null();
							}
						};
						HX_STACK_LINE(330)
						if ((!(_Function_6_4::Block(textField,tilesheet)))){
							HX_STACK_LINE(330)
							Array< Float > _g12 = Array_obj< Float >::__new();		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(330)
							tileData = _g12;
							HX_STACK_LINE(330)
							textField->__tileData->set(tilesheet,tileData);
							HX_STACK_LINE(330)
							textField->__tileDataLength->set(tilesheet,(int)0);
						}
						HX_STACK_LINE(330)
						Array< Float > _g13 = textField->__tileData->get(tilesheet);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(330)
						tileData = _g13;
						HX_STACK_LINE(330)
						int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
						HX_STACK_LINE(330)
						Array< ::String > lines = text.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
						HX_STACK_LINE(330)
						if (((textField->__textLayout == null()))){
							HX_STACK_LINE(330)
							::lime::text::TextLayout _g14 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(330)
							textField->__textLayout = _g14;
						}
						HX_STACK_LINE(330)
						::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
						HX_STACK_LINE(330)
						int length = (int)0;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(330)
						int line_i = (int)0;		HX_STACK_VAR(line_i,"line_i");
						HX_STACK_LINE(330)
						Float oldX = x;		HX_STACK_VAR(oldX,"oldX");
						HX_STACK_LINE(330)
						{
							HX_STACK_LINE(330)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(330)
							while((true)){
								HX_STACK_LINE(330)
								if ((!(((_g < lines->length))))){
									HX_STACK_LINE(330)
									break;
								}
								HX_STACK_LINE(330)
								::String line = lines->__get(_g);		HX_STACK_VAR(line,"line");
								HX_STACK_LINE(330)
								++(_g);
								HX_STACK_LINE(330)
								::openfl::text::TextLineMetrics _g15 = textField->getLineMetrics(line_i);		HX_STACK_VAR(_g15,"_g15");
								HX_STACK_LINE(330)
								tlm = _g15;
								HX_STACK_LINE(330)
								x = oldX;
								HX_STACK_LINE(330)
								Float _g16;		HX_STACK_VAR(_g16,"_g16");
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									::openfl::text::TextFormatAlign _g1 = format->align;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(330)
									switch( (int)(_g1->__Index())){
										case (int)0: case (int)2: {
											HX_STACK_LINE(330)
											_g16 = (int)0;
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(330)
											_g16 = (Float((((textField->__width - (int)4) - tlm->width))) / Float((int)2));
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(330)
											_g16 = ((textField->__width - (int)4) - tlm->width);
										}
										;break;
									}
								}
								HX_STACK_LINE(330)
								hx::AddEq(x,_g16);
								HX_STACK_LINE(330)
								textLayout->set_text(null());
								HX_STACK_LINE(330)
								textLayout->set_font(font);
								HX_STACK_LINE(330)
								textLayout->set_size(size);
								HX_STACK_LINE(330)
								textLayout->set_text(line);
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(330)
									Array< ::Dynamic > _g21 = textLayout->positions;		HX_STACK_VAR(_g21,"_g21");
									HX_STACK_LINE(330)
									while((true)){
										HX_STACK_LINE(330)
										if ((!(((_g1 < _g21->length))))){
											HX_STACK_LINE(330)
											break;
										}
										HX_STACK_LINE(330)
										::lime::text::GlyphPosition position = _g21->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
										HX_STACK_LINE(330)
										++(_g1);
										HX_STACK_LINE(330)
										::lime::graphics::Image _g17 = images->get(position->glyph);		HX_STACK_VAR(_g17,"_g17");
										HX_STACK_LINE(330)
										image = _g17;
										HX_STACK_LINE(330)
										if (((image != null()))){
											HX_STACK_LINE(330)
											if (((length >= tileData->length))){
												HX_STACK_LINE(330)
												tileData->push(((x + position->offset->x) + image->x));
												HX_STACK_LINE(330)
												tileData->push(((y + position->offset->y) - image->y));
												HX_STACK_LINE(330)
												Dynamic _g18 = tileID->get(position->glyph);		HX_STACK_VAR(_g18,"_g18");
												HX_STACK_LINE(330)
												tileData->push(_g18);
												HX_STACK_LINE(330)
												tileData->push(r);
												HX_STACK_LINE(330)
												tileData->push(g);
												HX_STACK_LINE(330)
												tileData->push(b);
											}
											else{
												HX_STACK_LINE(330)
												tileData[length] = ((x + position->offset->x) + image->x);
												HX_STACK_LINE(330)
												tileData[(length + (int)1)] = ((y + position->offset->y) - image->y);
												HX_STACK_LINE(330)
												tileData[(length + (int)2)] = tileID->get(position->glyph);
												HX_STACK_LINE(330)
												tileData[(length + (int)3)] = r;
												HX_STACK_LINE(330)
												tileData[(length + (int)4)] = g;
												HX_STACK_LINE(330)
												tileData[(length + (int)5)] = b;
											}
											HX_STACK_LINE(330)
											hx::AddEq(length,(int)6);
										}
										HX_STACK_LINE(330)
										hx::AddEq(x,position->advance->x);
										HX_STACK_LINE(330)
										hx::SubEq(y,position->advance->y);
									}
								}
								HX_STACK_LINE(330)
								hx::AddEq(y,tlm->height);
								HX_STACK_LINE(330)
								(line_i)++;
							}
						}
						HX_STACK_LINE(330)
						textField->__tileDataLength->set(tilesheet,length);
					}
				}
				else{
					HX_STACK_LINE(334)
					int currentIndex = (int)0;		HX_STACK_VAR(currentIndex,"currentIndex");
					HX_STACK_LINE(335)
					::openfl::text::TextFormatRange range;		HX_STACK_VAR(range,"range");
					HX_STACK_LINE(336)
					Float offsetX = 2.0;		HX_STACK_VAR(offsetX,"offsetX");
					HX_STACK_LINE(338)
					{
						HX_STACK_LINE(338)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(338)
						int _g = textField->__ranges->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(338)
						while((true)){
							HX_STACK_LINE(338)
							if ((!(((_g1 < _g))))){
								HX_STACK_LINE(338)
								break;
							}
							HX_STACK_LINE(338)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(340)
							range = textField->__ranges->__get(i).StaticCast< ::openfl::text::TextFormatRange >();
							HX_STACK_LINE(342)
							{
								HX_STACK_LINE(342)
								::String text1 = text.substring(range->start,range->end);		HX_STACK_VAR(text1,"text1");
								HX_STACK_LINE(342)
								::openfl::text::TextFormat format = range->format;		HX_STACK_VAR(format,"format");
								HX_STACK_LINE(342)
								::openfl::text::Font font = textField->__getFontInstance(format);		HX_STACK_VAR(font,"font");
								HX_STACK_LINE(342)
								if (((bool((font != null())) && bool((format->size != null()))))){
									struct _Function_9_1{
										inline static bool Block( ::openfl::text::Font &font){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",342,0xf0946200)
											{
												HX_STACK_LINE(342)
												int _g3 = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(342)
												return ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->__Internal->exists(_g3);
											}
											return null();
										}
									};
									HX_STACK_LINE(342)
									if ((!(_Function_9_1::Block(font)))){
										HX_STACK_LINE(342)
										::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(342)
										::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->set(font,value);
									}
									HX_STACK_LINE(342)
									int size = ::Std_obj::_int(format->size);		HX_STACK_VAR(size,"size");
									HX_STACK_LINE(342)
									::haxe::ds::IntMap fontGlyphs = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs->get(font);		HX_STACK_VAR(fontGlyphs,"fontGlyphs");
									HX_STACK_LINE(342)
									if ((!(fontGlyphs->exists(size)))){
										HX_STACK_LINE(342)
										Array< int > _g19 = font->getGlyphs(null());		HX_STACK_VAR(_g19,"_g19");
										HX_STACK_LINE(342)
										::haxe::ds::IntMap value = font->renderGlyphs(_g19,size);		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(342)
										fontGlyphs->set(size,value);
									}
									HX_STACK_LINE(342)
									::haxe::ds::IntMap images = fontGlyphs->get(size);		HX_STACK_VAR(images,"images");
									struct _Function_9_2{
										inline static bool Block( ::openfl::text::Font &font){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",342,0xf0946200)
											{
												HX_STACK_LINE(342)
												int _g3 = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(342)
												return ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->__Internal->exists(_g3);
											}
											return null();
										}
									};
									HX_STACK_LINE(342)
									if ((!(_Function_9_2::Block(font)))){
										HX_STACK_LINE(342)
										::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(342)
										::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->set(font,value);
									}
									HX_STACK_LINE(342)
									::haxe::ds::IntMap fontBitmapData = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData->get(font);		HX_STACK_VAR(fontBitmapData,"fontBitmapData");
									HX_STACK_LINE(342)
									if ((!(fontBitmapData->exists(size)))){
										HX_STACK_LINE(342)
										int width;		HX_STACK_VAR(width,"width");
										HX_STACK_LINE(342)
										int height;		HX_STACK_VAR(height,"height");
										HX_STACK_LINE(342)
										::lime::utils::UInt8Array data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(342)
										for(::cpp::FastIterator_obj< ::lime::graphics::Image > *__it = ::cpp::CreateFastIterator< ::lime::graphics::Image >(images->iterator());  __it->hasNext(); ){
											::lime::graphics::Image image = __it->next();
											{
												HX_STACK_LINE(342)
												width = image->buffer->width;
												HX_STACK_LINE(342)
												height = image->buffer->height;
												HX_STACK_LINE(342)
												::lime::utils::UInt8Array _g20 = image->get_data();		HX_STACK_VAR(_g20,"_g20");
												HX_STACK_LINE(342)
												data = _g20;
												HX_STACK_LINE(342)
												break;
											}
;
										}
										HX_STACK_LINE(342)
										::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new(width,height,null(),null());		HX_STACK_VAR(bitmapData,"bitmapData");
										HX_STACK_LINE(342)
										{
											HX_STACK_LINE(342)
											int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
											HX_STACK_LINE(342)
											while((true)){
												HX_STACK_LINE(342)
												if ((!(((_g3 < width))))){
													HX_STACK_LINE(342)
													break;
												}
												HX_STACK_LINE(342)
												int x = (_g3)++;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(342)
												{
													HX_STACK_LINE(342)
													int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
													HX_STACK_LINE(342)
													while((true)){
														HX_STACK_LINE(342)
														if ((!(((_g11 < height))))){
															HX_STACK_LINE(342)
															break;
														}
														HX_STACK_LINE(342)
														int y = (_g11)++;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(342)
														int alpha = data->__get(((y * width) + x));		HX_STACK_VAR(alpha,"alpha");
														HX_STACK_LINE(342)
														int color = (int((int((int((int(alpha) << int((int)24))) | int((int)16711680))) | int((int)65280))) | int((int)255));		HX_STACK_VAR(color,"color");
														HX_STACK_LINE(342)
														bitmapData->setPixel32(x,y,color);
													}
												}
											}
										}
										HX_STACK_LINE(342)
										fontBitmapData->set(size,bitmapData);
									}
									HX_STACK_LINE(342)
									::openfl::display::BitmapData bitmapData = fontBitmapData->get(size);		HX_STACK_VAR(bitmapData,"bitmapData");
									struct _Function_9_3{
										inline static bool Block( ::openfl::display::BitmapData &bitmapData){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",342,0xf0946200)
											{
												HX_STACK_LINE(342)
												int _g3 = ::__hxcpp_obj_id(bitmapData);		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(342)
												return ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->__Internal->exists(_g3);
											}
											return null();
										}
									};
									HX_STACK_LINE(342)
									if ((!(_Function_9_3::Block(bitmapData)))){
										HX_STACK_LINE(342)
										::openfl::display::Tilesheet tilesheet = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
										HX_STACK_LINE(342)
										::haxe::ds::IntMap tileID = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tileID,"tileID");
										HX_STACK_LINE(342)
										::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
										HX_STACK_LINE(342)
										int index;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(342)
										for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(images->keys());  __it->hasNext(); ){
											int key = __it->next();
											{
												HX_STACK_LINE(342)
												::lime::graphics::Image _g21 = images->get(key);		HX_STACK_VAR(_g21,"_g21");
												HX_STACK_LINE(342)
												image = _g21;
												HX_STACK_LINE(342)
												::openfl::geom::Rectangle _g22 = ::openfl::geom::Rectangle_obj::__new(image->offsetX,image->offsetY,image->width,image->height);		HX_STACK_VAR(_g22,"_g22");
												HX_STACK_LINE(342)
												int _g23 = tilesheet->addTileRect(_g22,null());		HX_STACK_VAR(_g23,"_g23");
												HX_STACK_LINE(342)
												index = _g23;
												HX_STACK_LINE(342)
												tileID->set(key,index);
											}
;
										}
										HX_STACK_LINE(342)
										::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs->set(bitmapData,tileID);
										HX_STACK_LINE(342)
										::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->set(bitmapData,tilesheet);
									}
									HX_STACK_LINE(342)
									::openfl::display::Tilesheet tilesheet = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets->get(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
									HX_STACK_LINE(342)
									::IMap tileID = ::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs->get(bitmapData);		HX_STACK_VAR(tileID,"tileID");
									HX_STACK_LINE(342)
									Float r = (Float(((int((int(format->color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(342)
									Float g = (Float(((int((int(format->color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(342)
									Float b = (Float(((int(format->color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(342)
									::openfl::text::TextLineMetrics tlm = textField->getLineMetrics((int)0);		HX_STACK_VAR(tlm,"tlm");
									HX_STACK_LINE(342)
									::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
									HX_STACK_LINE(342)
									Float x = offsetX;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(342)
									Float y = ((int)2 + tlm->ascent);		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(342)
									Array< Float > tileData;		HX_STACK_VAR(tileData,"tileData");
									HX_STACK_LINE(342)
									textField->__tilesheets->set(tilesheet,true);
									struct _Function_9_4{
										inline static bool Block( ::openfl::text::TextField &textField,::openfl::display::Tilesheet &tilesheet){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",342,0xf0946200)
											{
												HX_STACK_LINE(342)
												int _g3 = ::__hxcpp_obj_id(tilesheet);		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(342)
												return textField->__tileData->__Internal->exists(_g3);
											}
											return null();
										}
									};
									HX_STACK_LINE(342)
									if ((!(_Function_9_4::Block(textField,tilesheet)))){
										HX_STACK_LINE(342)
										Array< Float > _g24 = Array_obj< Float >::__new();		HX_STACK_VAR(_g24,"_g24");
										HX_STACK_LINE(342)
										tileData = _g24;
										HX_STACK_LINE(342)
										textField->__tileData->set(tilesheet,tileData);
										HX_STACK_LINE(342)
										textField->__tileDataLength->set(tilesheet,(int)0);
									}
									HX_STACK_LINE(342)
									Array< Float > _g25 = textField->__tileData->get(tilesheet);		HX_STACK_VAR(_g25,"_g25");
									HX_STACK_LINE(342)
									tileData = _g25;
									HX_STACK_LINE(342)
									int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
									HX_STACK_LINE(342)
									Array< ::String > lines = text1.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
									HX_STACK_LINE(342)
									if (((textField->__textLayout == null()))){
										HX_STACK_LINE(342)
										::lime::text::TextLayout _g26 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g26,"_g26");
										HX_STACK_LINE(342)
										textField->__textLayout = _g26;
									}
									HX_STACK_LINE(342)
									::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
									HX_STACK_LINE(342)
									int length = (int)0;		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(342)
									int line_i = (int)0;		HX_STACK_VAR(line_i,"line_i");
									HX_STACK_LINE(342)
									Float oldX = x;		HX_STACK_VAR(oldX,"oldX");
									HX_STACK_LINE(342)
									{
										HX_STACK_LINE(342)
										int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(342)
										while((true)){
											HX_STACK_LINE(342)
											if ((!(((_g3 < lines->length))))){
												HX_STACK_LINE(342)
												break;
											}
											HX_STACK_LINE(342)
											::String line = lines->__get(_g3);		HX_STACK_VAR(line,"line");
											HX_STACK_LINE(342)
											++(_g3);
											HX_STACK_LINE(342)
											::openfl::text::TextLineMetrics _g27 = textField->getLineMetrics(line_i);		HX_STACK_VAR(_g27,"_g27");
											HX_STACK_LINE(342)
											tlm = _g27;
											HX_STACK_LINE(342)
											x = oldX;
											HX_STACK_LINE(342)
											Float _g28;		HX_STACK_VAR(_g28,"_g28");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::openfl::text::TextFormatAlign _g11 = format->align;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(342)
												switch( (int)(_g11->__Index())){
													case (int)0: case (int)2: {
														HX_STACK_LINE(342)
														_g28 = (int)0;
													}
													;break;
													case (int)3: {
														HX_STACK_LINE(342)
														_g28 = (Float((((textField->__width - (int)4) - tlm->width))) / Float((int)2));
													}
													;break;
													case (int)1: {
														HX_STACK_LINE(342)
														_g28 = ((textField->__width - (int)4) - tlm->width);
													}
													;break;
												}
											}
											HX_STACK_LINE(342)
											hx::AddEq(x,_g28);
											HX_STACK_LINE(342)
											textLayout->set_text(null());
											HX_STACK_LINE(342)
											textLayout->set_font(font);
											HX_STACK_LINE(342)
											textLayout->set_size(size);
											HX_STACK_LINE(342)
											textLayout->set_text(line);
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(342)
												Array< ::Dynamic > _g21 = textLayout->positions;		HX_STACK_VAR(_g21,"_g21");
												HX_STACK_LINE(342)
												while((true)){
													HX_STACK_LINE(342)
													if ((!(((_g11 < _g21->length))))){
														HX_STACK_LINE(342)
														break;
													}
													HX_STACK_LINE(342)
													::lime::text::GlyphPosition position = _g21->__get(_g11).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
													HX_STACK_LINE(342)
													++(_g11);
													HX_STACK_LINE(342)
													::lime::graphics::Image _g29 = images->get(position->glyph);		HX_STACK_VAR(_g29,"_g29");
													HX_STACK_LINE(342)
													image = _g29;
													HX_STACK_LINE(342)
													if (((image != null()))){
														HX_STACK_LINE(342)
														if (((length >= tileData->length))){
															HX_STACK_LINE(342)
															tileData->push(((x + position->offset->x) + image->x));
															HX_STACK_LINE(342)
															tileData->push(((y + position->offset->y) - image->y));
															HX_STACK_LINE(342)
															Dynamic _g30 = tileID->get(position->glyph);		HX_STACK_VAR(_g30,"_g30");
															HX_STACK_LINE(342)
															tileData->push(_g30);
															HX_STACK_LINE(342)
															tileData->push(r);
															HX_STACK_LINE(342)
															tileData->push(g);
															HX_STACK_LINE(342)
															tileData->push(b);
														}
														else{
															HX_STACK_LINE(342)
															tileData[length] = ((x + position->offset->x) + image->x);
															HX_STACK_LINE(342)
															tileData[(length + (int)1)] = ((y + position->offset->y) - image->y);
															HX_STACK_LINE(342)
															tileData[(length + (int)2)] = tileID->get(position->glyph);
															HX_STACK_LINE(342)
															tileData[(length + (int)3)] = r;
															HX_STACK_LINE(342)
															tileData[(length + (int)4)] = g;
															HX_STACK_LINE(342)
															tileData[(length + (int)5)] = b;
														}
														HX_STACK_LINE(342)
														hx::AddEq(length,(int)6);
													}
													HX_STACK_LINE(342)
													hx::AddEq(x,position->advance->x);
													HX_STACK_LINE(342)
													hx::SubEq(y,position->advance->y);
												}
											}
											HX_STACK_LINE(342)
											hx::AddEq(y,tlm->height);
											HX_STACK_LINE(342)
											(line_i)++;
										}
									}
									HX_STACK_LINE(342)
									textField->__tileDataLength->set(tilesheet,length);
								}
							}
							HX_STACK_LINE(343)
							hx::AddEq(offsetX,measurements->__get(i));
						}
					}
				}
			}
			else{
				HX_STACK_LINE(351)
				if (((textField->autoSize == ::openfl::text::TextFieldAutoSize_obj::LEFT))){
					HX_STACK_LINE(353)
					textField->__width = (int)4;
					HX_STACK_LINE(354)
					textField->__height = (int)4;
				}
			}
			struct _Function_3_1{
				inline static bool Block( ::openfl::text::TextField &textField,::openfl::display::Tilesheet &key){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",362,0xf0946200)
					{
						HX_STACK_LINE(362)
						int _g = ::__hxcpp_obj_id(key);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(362)
						return textField->__tilesheets->__Internal->exists(_g);
					}
					return null();
				}
			};
			HX_STACK_LINE(360)
			for(::cpp::FastIterator_obj< ::openfl::display::Tilesheet > *__it = ::cpp::CreateFastIterator< ::openfl::display::Tilesheet >(textField->__tileData->keys());  __it->hasNext(); ){
				::openfl::display::Tilesheet key = __it->next();
				if ((!(_Function_3_1::Block(textField,key)))){
					HX_STACK_LINE(364)
					textField->__tileData->remove(key);
					HX_STACK_LINE(365)
					textField->__tileDataLength->remove(key);
				}
;
			}
			HX_STACK_LINE(371)
			textField->__dirty = false;
			HX_STACK_LINE(372)
			return true;
		}
	}
	HX_STACK_LINE(378)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFieldGraphics_obj,update,return )


TextFieldGraphics_obj::TextFieldGraphics_obj()
{
}

Dynamic TextFieldGraphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { return glyphs; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileIDs") ) { return tileIDs; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"tilesheets") ) { return tilesheets; }
		if (HX_FIELD_EQ(inName,"renderText") ) { return renderText_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextFieldGraphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileIDs") ) { tileIDs=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilesheets") ) { tilesheets=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFieldGraphics_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("bitmapData"),
	HX_CSTRING("glyphs"),
	HX_CSTRING("tilesheets"),
	HX_CSTRING("tileIDs"),
	HX_CSTRING("render"),
	HX_CSTRING("renderText"),
	HX_CSTRING("update"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::tilesheets,"tilesheets");
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::tileIDs,"tileIDs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::tilesheets,"tilesheets");
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::tileIDs,"tileIDs");
};

#endif

Class TextFieldGraphics_obj::__mClass;

void TextFieldGraphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.TextFieldGraphics"), hx::TCanCast< TextFieldGraphics_obj> ,sStaticFields,sMemberFields,
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

void TextFieldGraphics_obj::__boot()
{
	bitmapData= ::haxe::ds::ObjectMap_obj::__new();
	glyphs= ::haxe::ds::ObjectMap_obj::__new();
	tilesheets= ::haxe::ds::ObjectMap_obj::__new();
	tileIDs= ::haxe::ds::ObjectMap_obj::__new();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
