#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
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
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLTextField
#include <openfl/_internal/renderer/opengl/GLTextField.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_AntiAliasType
#include <openfl/text/AntiAliasType.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_GridFitType
#include <openfl/text/GridFitType.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
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
namespace text{

Void TextField_obj::__construct()
{
HX_STACK_FRAME("openfl.text.TextField","new",0xbd7676bc,"openfl.text.TextField.new","openfl/text/TextField.hx",600,0xccf02094)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(602)
	super::__construct();
	HX_STACK_LINE(604)
	this->__width = (int)100;
	HX_STACK_LINE(605)
	this->__height = (int)100;
	HX_STACK_LINE(606)
	this->__text = HX_CSTRING("");
	HX_STACK_LINE(608)
	this->set_type(::openfl::text::TextFieldType_obj::DYNAMIC);
	HX_STACK_LINE(609)
	this->set_autoSize(::openfl::text::TextFieldAutoSize_obj::NONE);
	HX_STACK_LINE(610)
	this->displayAsPassword = false;
	HX_STACK_LINE(611)
	this->embedFonts = false;
	HX_STACK_LINE(612)
	this->set_selectable(true);
	HX_STACK_LINE(613)
	this->set_borderColor((int)0);
	HX_STACK_LINE(614)
	this->set_border(false);
	HX_STACK_LINE(615)
	this->set_backgroundColor((int)16777215);
	HX_STACK_LINE(616)
	this->set_background(false);
	HX_STACK_LINE(617)
	this->gridFitType = ::openfl::text::GridFitType_obj::PIXEL;
	HX_STACK_LINE(618)
	this->maxChars = (int)0;
	HX_STACK_LINE(619)
	this->multiline = false;
	HX_STACK_LINE(620)
	this->sharpness = (int)0;
	HX_STACK_LINE(621)
	this->scrollH = (int)0;
	HX_STACK_LINE(622)
	this->scrollV = (int)1;
	HX_STACK_LINE(623)
	this->set_wordWrap(false);
	HX_STACK_LINE(625)
	if (((::openfl::text::TextField_obj::__defaultTextFormat == null()))){
		HX_STACK_LINE(627)
		::openfl::text::TextFormat _g = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Times New Roman"),(int)12,(int)0,false,false,false,HX_CSTRING(""),HX_CSTRING(""),::openfl::text::TextFormatAlign_obj::LEFT,(int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(627)
		::openfl::text::TextField_obj::__defaultTextFormat = _g;
		HX_STACK_LINE(628)
		::openfl::text::TextField_obj::__defaultTextFormat->blockIndent = (int)0;
		HX_STACK_LINE(629)
		::openfl::text::TextField_obj::__defaultTextFormat->bullet = false;
		HX_STACK_LINE(630)
		::openfl::text::TextField_obj::__defaultTextFormat->letterSpacing = (int)0;
		HX_STACK_LINE(631)
		::openfl::text::TextField_obj::__defaultTextFormat->kerning = false;
	}
	HX_STACK_LINE(635)
	::openfl::text::TextFormat _g1 = ::openfl::text::TextField_obj::__defaultTextFormat->clone();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(635)
	this->__textFormat = _g1;
}
;
	return null();
}

//TextField_obj::~TextField_obj() { }

Dynamic TextField_obj::__CreateEmpty() { return  new TextField_obj; }
hx::ObjectPtr< TextField_obj > TextField_obj::__new()
{  hx::ObjectPtr< TextField_obj > result = new TextField_obj();
	result->__construct();
	return result;}

Dynamic TextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextField_obj > result = new TextField_obj();
	result->__construct();
	return result;}

Void TextField_obj::appendText( ::String text){
{
		HX_STACK_FRAME("openfl.text.TextField","appendText",0xaa44eccb,"openfl.text.TextField.appendText","openfl/text/TextField.hx",651,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(651)
		::openfl::text::TextField _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(651)
		::String _g1 = _g->get_text();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(651)
		::String _g11 = (_g1 + text);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(651)
		_g->set_text(_g11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,appendText,(void))

::openfl::geom::Rectangle TextField_obj::getCharBoundaries( int a){
	HX_STACK_FRAME("openfl.text.TextField","getCharBoundaries",0xf44814d0,"openfl.text.TextField.getCharBoundaries","openfl/text/TextField.hx",665,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(667)
	::openfl::Lib_obj::notImplemented(HX_CSTRING("TextField.getCharBoundaries"));
	HX_STACK_LINE(669)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getCharBoundaries,return )

int TextField_obj::getCharIndexAtPoint( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","getCharIndexAtPoint",0x758b0c73,"openfl.text.TextField.getCharIndexAtPoint","openfl/text/TextField.hx",684,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(686)
	::openfl::Lib_obj::notImplemented(HX_CSTRING("TextField.getCharIndexAtPoint"));
	HX_STACK_LINE(688)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getCharIndexAtPoint,return )

int TextField_obj::getLineIndexAtPoint( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","getLineIndexAtPoint",0x633efa91,"openfl.text.TextField.getLineIndexAtPoint","openfl/text/TextField.hx",703,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(705)
	::openfl::Lib_obj::notImplemented(HX_CSTRING("TextField.getLineIndexAtPoint"));
	HX_STACK_LINE(707)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getLineIndexAtPoint,return )

::openfl::text::TextLineMetrics TextField_obj::getLineMetrics( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineMetrics",0xa6c52add,"openfl.text.TextField.getLineMetrics","openfl/text/TextField.hx",719,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(721)
	Float height = this->get_textHeight();		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(723)
	Float lineWidth = this->__getLineWidth(lineIndex);		HX_STACK_VAR(lineWidth,"lineWidth");
	HX_STACK_LINE(724)
	Float lineHeight = this->__getLineMetric(lineIndex,(int)2);		HX_STACK_VAR(lineHeight,"lineHeight");
	HX_STACK_LINE(726)
	Float ascender = this->__getLineMetric(lineIndex,(int)0);		HX_STACK_VAR(ascender,"ascender");
	HX_STACK_LINE(727)
	Float descender = this->__getLineMetric(lineIndex,(int)1);		HX_STACK_VAR(descender,"descender");
	HX_STACK_LINE(729)
	Float leading = this->__getLineMetric(lineIndex,(int)3);		HX_STACK_VAR(leading,"leading");
	HX_STACK_LINE(731)
	Float margin;		HX_STACK_VAR(margin,"margin");
	HX_STACK_LINE(731)
	{
		HX_STACK_LINE(731)
		::openfl::text::TextFormatAlign _g = this->__textFormat->align;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(731)
		switch( (int)(_g->__Index())){
			case (int)0: case (int)2: {
				HX_STACK_LINE(732)
				margin = (int)2;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(733)
				Float _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(733)
				Float _g11 = (_g1 - lineWidth);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(733)
				margin = (_g11 - (int)2);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(734)
				Float _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(734)
				Float _g3 = (_g2 - lineWidth);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(734)
				margin = (Float(_g3) / Float((int)2));
			}
			;break;
		}
	}
	HX_STACK_LINE(737)
	return ::openfl::text::TextLineMetrics_obj::__new(margin,lineWidth,lineHeight,ascender,descender,leading);
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineMetrics,return )

int TextField_obj::getLineOffset( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineOffset",0x5676a039,"openfl.text.TextField.getLineOffset","openfl/text/TextField.hx",751,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(753)
	::openfl::Lib_obj::notImplemented(HX_CSTRING("TextField.getLineOffset"));
	HX_STACK_LINE(755)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineOffset,return )

::String TextField_obj::getLineText( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineText",0xb8113fd3,"openfl.text.TextField.getLineText","openfl/text/TextField.hx",769,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(771)
	::openfl::Lib_obj::notImplemented(HX_CSTRING("TextField.getLineText"));
	HX_STACK_LINE(773)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineText,return )

::openfl::text::TextFormat TextField_obj::getTextFormat( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
	HX_STACK_FRAME("openfl.text.TextField","getTextFormat",0x560e1d56,"openfl.text.TextField.getTextFormat","openfl/text/TextField.hx",798,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(798)
		return this->__textFormat->clone();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getTextFormat,return )

Void TextField_obj::setSelection( int beginIndex,int endIndex){
{
		HX_STACK_FRAME("openfl.text.TextField","setSelection",0xa586666e,"openfl.text.TextField.setSelection","openfl/text/TextField.hx",818,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
		HX_STACK_LINE(818)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("TextField.setSelection"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,setSelection,(void))

Void TextField_obj::setTextFormat( ::openfl::text::TextFormat format,hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
	HX_STACK_FRAME("openfl.text.TextField","setTextFormat",0x9b13ff62,"openfl.text.TextField.setTextFormat","openfl/text/TextField.hx",868,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(870)
		if (((format->font != null()))){
			HX_STACK_LINE(870)
			this->__textFormat->font = format->font;
		}
		HX_STACK_LINE(871)
		if (((format->size != null()))){
			HX_STACK_LINE(871)
			this->__textFormat->size = format->size;
		}
		HX_STACK_LINE(872)
		if (((format->color != null()))){
			HX_STACK_LINE(872)
			this->__textFormat->color = format->color;
		}
		HX_STACK_LINE(873)
		if (((format->bold != null()))){
			HX_STACK_LINE(873)
			this->__textFormat->bold = format->bold;
		}
		HX_STACK_LINE(874)
		if (((format->italic != null()))){
			HX_STACK_LINE(874)
			this->__textFormat->italic = format->italic;
		}
		HX_STACK_LINE(875)
		if (((format->underline != null()))){
			HX_STACK_LINE(875)
			this->__textFormat->underline = format->underline;
		}
		HX_STACK_LINE(876)
		if (((format->url != null()))){
			HX_STACK_LINE(876)
			this->__textFormat->url = format->url;
		}
		HX_STACK_LINE(877)
		if (((format->target != null()))){
			HX_STACK_LINE(877)
			this->__textFormat->target = format->target;
		}
		HX_STACK_LINE(878)
		if (((format->align != null()))){
			HX_STACK_LINE(878)
			this->__textFormat->align = format->align;
		}
		HX_STACK_LINE(879)
		if (((format->leftMargin != null()))){
			HX_STACK_LINE(879)
			this->__textFormat->leftMargin = format->leftMargin;
		}
		HX_STACK_LINE(880)
		if (((format->rightMargin != null()))){
			HX_STACK_LINE(880)
			this->__textFormat->rightMargin = format->rightMargin;
		}
		HX_STACK_LINE(881)
		if (((format->indent != null()))){
			HX_STACK_LINE(881)
			this->__textFormat->indent = format->indent;
		}
		HX_STACK_LINE(882)
		if (((format->leading != null()))){
			HX_STACK_LINE(882)
			this->__textFormat->leading = format->leading;
		}
		HX_STACK_LINE(883)
		if (((format->blockIndent != null()))){
			HX_STACK_LINE(883)
			this->__textFormat->blockIndent = format->blockIndent;
		}
		HX_STACK_LINE(884)
		if (((format->bullet != null()))){
			HX_STACK_LINE(884)
			this->__textFormat->bullet = format->bullet;
		}
		HX_STACK_LINE(885)
		if (((format->kerning != null()))){
			HX_STACK_LINE(885)
			this->__textFormat->kerning = format->kerning;
		}
		HX_STACK_LINE(886)
		if (((format->letterSpacing != null()))){
			HX_STACK_LINE(886)
			this->__textFormat->letterSpacing = format->letterSpacing;
		}
		HX_STACK_LINE(887)
		if (((format->tabStops != null()))){
			HX_STACK_LINE(887)
			this->__textFormat->tabStops = format->tabStops;
		}
		HX_STACK_LINE(889)
		this->__dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,setTextFormat,(void))

::String TextField_obj::__clipText( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","__clipText",0x4c349fe1,"openfl.text.TextField.__clipText","openfl/text/TextField.hx",894,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(896)
	Float textWidth = this->__getTextWidth(value);		HX_STACK_VAR(textWidth,"textWidth");
	HX_STACK_LINE(897)
	Float fillPer = (Float(textWidth) / Float(this->__width));		HX_STACK_VAR(fillPer,"fillPer");
	HX_STACK_LINE(898)
	::String _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(898)
	if (((fillPer > (int)1))){
		HX_STACK_LINE(898)
		int _g = ::Math_obj::floor((Float(this->get_text().length) / Float(fillPer)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(898)
		int _g1 = ((int)-1 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(898)
		_g2 = this->get_text().substr(_g1,null());
	}
	else{
		HX_STACK_LINE(898)
		_g2 = this->get_text();
	}
	HX_STACK_LINE(898)
	this->set_text(_g2);
	HX_STACK_LINE(899)
	::String _g3 = this->get_text();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(899)
	return (_g3 + HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__clipText,return )

Void TextField_obj::__disableInputMode( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__disableInputMode",0x7854fdc9,"openfl.text.TextField.__disableInputMode","openfl/text/TextField.hx",904,0xccf02094)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__disableInputMode,(void))

Void TextField_obj::__enableInputMode( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__enableInputMode",0xdf8d19c6,"openfl.text.TextField.__enableInputMode","openfl/text/TextField.hx",913,0xccf02094)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__enableInputMode,(void))

::openfl::text::Font TextField_obj::__findFont( ::String name){
	HX_STACK_FRAME("openfl.text.TextField","__findFont",0x88cbfaec,"openfl.text.TextField.__findFont","openfl/text/TextField.hx",975,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(979)
	{
		HX_STACK_LINE(979)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(979)
		Array< ::Dynamic > _g1 = ::openfl::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(979)
		while((true)){
			HX_STACK_LINE(979)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(979)
				break;
			}
			HX_STACK_LINE(979)
			::openfl::text::Font registeredFont = _g1->__get(_g).StaticCast< ::openfl::text::Font >();		HX_STACK_VAR(registeredFont,"registeredFont");
			HX_STACK_LINE(979)
			++(_g);
			HX_STACK_LINE(981)
			if (((registeredFont == null()))){
				HX_STACK_LINE(981)
				continue;
			}
			struct _Function_3_1{
				inline static bool Block( ::openfl::text::Font &registeredFont,::String &name){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/text/TextField.hx",983,0xccf02094)
					{
						struct _Function_4_1{
							inline static bool Block( ::openfl::text::Font &registeredFont,::String &name){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/text/TextField.hx",983,0xccf02094)
								{
									struct _Function_5_1{
										inline static bool Block( ::openfl::text::Font &registeredFont,::String &name){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/text/TextField.hx",983,0xccf02094)
											{
												HX_STACK_LINE(983)
												::String _g2 = ::haxe::io::Path_obj::withoutDirectory(registeredFont->__fontPath);		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(983)
												return (_g2 == name);
											}
											return null();
										}
									};
									HX_STACK_LINE(983)
									return (  ((!(((registeredFont->__fontPath == name))))) ? bool(_Function_5_1::Block(registeredFont,name)) : bool(true) );
								}
								return null();
							}
						};
						HX_STACK_LINE(983)
						return (  (((registeredFont->__fontPath != null()))) ? bool(_Function_4_1::Block(registeredFont,name)) : bool(false) );
					}
					return null();
				}
			};
			HX_STACK_LINE(983)
			if (((  ((!(((registeredFont->name == name))))) ? bool(_Function_3_1::Block(registeredFont,name)) : bool(true) ))){
				HX_STACK_LINE(985)
				return registeredFont;
			}
		}
	}
	HX_STACK_LINE(991)
	::openfl::text::Font font = ::openfl::text::Font_obj::fromFile(name);		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(993)
	if (((font != null()))){
		HX_STACK_LINE(995)
		::openfl::text::Font_obj::__registeredFonts->push(font);
		HX_STACK_LINE(996)
		return font;
	}
	HX_STACK_LINE(1002)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__findFont,return )

Void TextField_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.text.TextField","__getBounds",0x189abae7,"openfl.text.TextField.__getBounds","openfl/text/TextField.hx",1007,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(1009)
		::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,this->__width,this->__height);		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(1010)
		::openfl::geom::Rectangle _g = bounds->transform(matrix);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1010)
		bounds = _g;
		HX_STACK_LINE(1012)
		rect->__expand(bounds->x,bounds->y,bounds->width,bounds->height);
	}
return null();
}


::lime::ui::MouseCursor TextField_obj::__getCursor( ){
	HX_STACK_FRAME("openfl.text.TextField","__getCursor",0xf165c348,"openfl.text.TextField.__getCursor","openfl/text/TextField.hx",1019,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1019)
	if (((bool((this->type == ::openfl::text::TextFieldType_obj::INPUT)) && bool(this->selectable)))){
		HX_STACK_LINE(1019)
		return ::lime::ui::MouseCursor_obj::TEXT;
	}
	else{
		HX_STACK_LINE(1019)
		return null();
	}
	HX_STACK_LINE(1019)
	return null();
}


::String TextField_obj::__getFont( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl.text.TextField","__getFont",0xb6eb31c1,"openfl.text.TextField.__getFont","openfl/text/TextField.hx",1024,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(1026)
	::String font;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(1026)
	if ((format->italic)){
		HX_STACK_LINE(1026)
		font = HX_CSTRING("italic ");
	}
	else{
		HX_STACK_LINE(1026)
		font = HX_CSTRING("normal ");
	}
	HX_STACK_LINE(1027)
	hx::AddEq(font,HX_CSTRING("normal "));
	HX_STACK_LINE(1028)
	if ((format->bold)){
		HX_STACK_LINE(1028)
		hx::AddEq(font,HX_CSTRING("bold "));
	}
	else{
		HX_STACK_LINE(1028)
		hx::AddEq(font,HX_CSTRING("normal "));
	}
	HX_STACK_LINE(1029)
	hx::AddEq(font,(format->size + HX_CSTRING("px")));
	HX_STACK_LINE(1030)
	hx::AddEq(font,((HX_CSTRING("/") + ((format->size + format->leading))) + HX_CSTRING("px ")));
	struct _Function_1_1{
		inline static ::String Block( ::openfl::text::TextFormat &format){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/text/TextField.hx",1032,0xccf02094)
			{
				HX_STACK_LINE(1032)
				::String _g = format->font;		HX_STACK_VAR(_g,"_g");
				struct _Function_2_1{
					inline static ::String Block( ::openfl::text::TextFormat &format,::String &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/text/TextField.hx",1032,0xccf02094)
						{
							HX_STACK_LINE(1032)
							::String _switch_1 = (_g);
							if (  ( _switch_1==HX_CSTRING("_sans"))){
								HX_STACK_LINE(1034)
								return HX_CSTRING("sans-serif");
							}
							else if (  ( _switch_1==HX_CSTRING("_serif"))){
								HX_STACK_LINE(1035)
								return HX_CSTRING("serif");
							}
							else if (  ( _switch_1==HX_CSTRING("_typewriter"))){
								HX_STACK_LINE(1036)
								return HX_CSTRING("monospace");
							}
							else  {
								HX_STACK_LINE(1037)
								return format->font;
							}
;
;
						}
						return null();
					}
				};
				HX_STACK_LINE(1032)
				return _Function_2_1::Block(format,_g);
			}
			return null();
		}
	};
	HX_STACK_LINE(1032)
	hx::AddEq(font,(HX_CSTRING("'") + _Function_1_1::Block(format)));
	HX_STACK_LINE(1041)
	hx::AddEq(font,HX_CSTRING("'"));
	HX_STACK_LINE(1043)
	return font;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__getFont,return )

::openfl::text::Font TextField_obj::__getFontInstance( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl.text.TextField","__getFontInstance",0x8a973676,"openfl.text.TextField.__getFontInstance","openfl/text/TextField.hx",1048,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(1052)
	::openfl::text::Font instance = null();		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(1053)
	Array< ::String > fontList = null();		HX_STACK_VAR(fontList,"fontList");
	HX_STACK_LINE(1055)
	if (((bool((format != null())) && bool((format->font != null()))))){
		HX_STACK_LINE(1057)
		::openfl::text::Font _g = this->__findFont(format->font);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1057)
		instance = _g;
		HX_STACK_LINE(1059)
		if (((instance != null()))){
			HX_STACK_LINE(1059)
			return instance;
		}
		HX_STACK_LINE(1061)
		::String systemFontDirectory = ::lime::system::System_obj::get_fontsDirectory();		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
		HX_STACK_LINE(1063)
		{
			HX_STACK_LINE(1063)
			::String _g1 = format->font;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1063)
			::String _switch_2 = (_g1);
			if (  ( _switch_2==HX_CSTRING("_sans"))){
				HX_STACK_LINE(1074)
				fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/DroidSans.ttf")));
			}
			else if (  ( _switch_2==HX_CSTRING("_serif"))){
			}
			else if (  ( _switch_2==HX_CSTRING("_typewriter"))){
				HX_STACK_LINE(1092)
				fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/DroidSansMono.ttf")));
			}
			else  {
				HX_STACK_LINE(1099)
				fontList = Array_obj< ::String >::__new().Add(((systemFontDirectory + HX_CSTRING("/")) + format->font));
			}
;
;
		}
		HX_STACK_LINE(1103)
		if (((fontList != null()))){
			HX_STACK_LINE(1105)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1105)
			while((true)){
				HX_STACK_LINE(1105)
				if ((!(((_g1 < fontList->length))))){
					HX_STACK_LINE(1105)
					break;
				}
				HX_STACK_LINE(1105)
				::String font = fontList->__get(_g1);		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(1105)
				++(_g1);
				HX_STACK_LINE(1107)
				::openfl::text::Font _g11 = this->__findFont(font);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1107)
				instance = _g11;
				HX_STACK_LINE(1109)
				if (((instance != null()))){
					HX_STACK_LINE(1109)
					return instance;
				}
			}
		}
		HX_STACK_LINE(1115)
		::openfl::text::Font _g2 = this->__findFont(HX_CSTRING("_serif"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1115)
		instance = _g2;
		HX_STACK_LINE(1117)
		if (((instance != null()))){
			HX_STACK_LINE(1117)
			return instance;
		}
	}
	HX_STACK_LINE(1121)
	::String systemFontDirectory = ::lime::system::System_obj::get_fontsDirectory();		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
	HX_STACK_LINE(1130)
	fontList = Array_obj< ::String >::__new().Add((systemFontDirectory + HX_CSTRING("/DroidSerif-Regular.ttf"))).Add((systemFontDirectory + HX_CSTRING("NotoSerif-Regular.ttf")));
	HX_STACK_LINE(1137)
	{
		HX_STACK_LINE(1137)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1137)
		while((true)){
			HX_STACK_LINE(1137)
			if ((!(((_g < fontList->length))))){
				HX_STACK_LINE(1137)
				break;
			}
			HX_STACK_LINE(1137)
			::String font = fontList->__get(_g);		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(1137)
			++(_g);
			HX_STACK_LINE(1139)
			::openfl::text::Font _g3 = this->__findFont(font);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1139)
			instance = _g3;
			HX_STACK_LINE(1141)
			if (((instance != null()))){
				HX_STACK_LINE(1141)
				return instance;
			}
		}
	}
	HX_STACK_LINE(1147)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__getFontInstance,return )

int TextField_obj::__getLineBreaks( ){
	HX_STACK_FRAME("openfl.text.TextField","__getLineBreaks",0x9931535a,"openfl.text.TextField.__getLineBreaks","openfl/text/TextField.hx",1151,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1155)
	int lines = (int)0;		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(1156)
	{
		HX_STACK_LINE(1156)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1156)
		::String _g = this->get_text();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1156)
		int _g2 = ::haxe::Utf8_obj::length(_g);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1156)
		while((true)){
			HX_STACK_LINE(1156)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(1156)
				break;
			}
			HX_STACK_LINE(1156)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1157)
			::String _g11 = this->get_text();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1157)
			int _char = ::haxe::Utf8_obj::charCodeAt(_g11,i);		HX_STACK_VAR(_char,"char");
			HX_STACK_LINE(1158)
			if (((_char == ::openfl::text::TextField_obj::__utf8_endline_code))){
				HX_STACK_LINE(1159)
				(lines)++;
			}
		}
	}
	HX_STACK_LINE(1162)
	return lines;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__getLineBreaks,return )

Array< int > TextField_obj::__getLineBreakIndeces( ){
	HX_STACK_FRAME("openfl.text.TextField","__getLineBreakIndeces",0x27d98eb2,"openfl.text.TextField.__getLineBreakIndeces","openfl/text/TextField.hx",1165,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1169)
	Array< int > breaks = Array_obj< int >::__new();		HX_STACK_VAR(breaks,"breaks");
	HX_STACK_LINE(1171)
	{
		HX_STACK_LINE(1171)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1171)
		::String _g = this->get_text();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1171)
		int _g2 = ::haxe::Utf8_obj::length(_g);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1171)
		while((true)){
			HX_STACK_LINE(1171)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(1171)
				break;
			}
			HX_STACK_LINE(1171)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1172)
			{
				HX_STACK_LINE(1173)
				::String _g11 = this->get_text();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1173)
				int _char = ::haxe::Utf8_obj::charCodeAt(_g11,i);		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(1174)
				if (((_char == ::openfl::text::TextField_obj::__utf8_endline_code))){
					HX_STACK_LINE(1175)
					breaks->push(i);
				}
			}
		}
	}
	HX_STACK_LINE(1179)
	return breaks;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__getLineBreakIndeces,return )

int TextField_obj::__getLineBreaksInRange( int i){
	HX_STACK_FRAME("openfl.text.TextField","__getLineBreaksInRange",0x23d8cf5e,"openfl.text.TextField.__getLineBreaksInRange","openfl/text/TextField.hx",1182,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(1186)
	int lines = (int)0;		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(1187)
	if (((bool((this->__ranges->length > i)) && bool((i >= (int)0))))){
		HX_STACK_LINE(1188)
		::openfl::text::TextFormatRange range = this->__ranges->__get(i).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(1191)
		if (((bool((range->start > (int)0)) && bool((range->end < this->get_text().length))))){
			HX_STACK_LINE(1192)
			int _g1 = range->start;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1192)
			int _g = (range->end + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1192)
			while((true)){
				HX_STACK_LINE(1192)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(1192)
					break;
				}
				HX_STACK_LINE(1192)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1193)
				::String _g2 = this->get_text();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1193)
				int _char = ::haxe::Utf8_obj::charCodeAt(_g2,i);		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(1194)
				if (((_char == ::openfl::text::TextField_obj::__utf8_endline_code))){
					HX_STACK_LINE(1195)
					(lines)++;
				}
			}
		}
	}
	HX_STACK_LINE(1200)
	return lines;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__getLineBreaksInRange,return )

Array< int > TextField_obj::__getLineIndeces( int line){
	HX_STACK_FRAME("openfl.text.TextField","__getLineIndeces",0x6ad89165,"openfl.text.TextField.__getLineIndeces","openfl/text/TextField.hx",1205,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(line,"line")
	HX_STACK_LINE(1209)
	Array< int > breaks = this->__getLineBreakIndeces();		HX_STACK_VAR(breaks,"breaks");
	HX_STACK_LINE(1210)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1211)
	int first_char = (int)0;		HX_STACK_VAR(first_char,"first_char");
	HX_STACK_LINE(1212)
	int last_char = (this->get_text().length - (int)1);		HX_STACK_VAR(last_char,"last_char");
	HX_STACK_LINE(1214)
	{
		HX_STACK_LINE(1214)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1214)
		while((true)){
			HX_STACK_LINE(1214)
			if ((!(((_g < breaks->length))))){
				HX_STACK_LINE(1214)
				break;
			}
			HX_STACK_LINE(1214)
			int br = breaks->__get(_g);		HX_STACK_VAR(br,"br");
			HX_STACK_LINE(1214)
			++(_g);
			HX_STACK_LINE(1217)
			if (((i == line))){
				HX_STACK_LINE(1219)
				first_char = (br + (int)1);
				HX_STACK_LINE(1222)
				if (((i != (breaks->length - (int)1)))){
					HX_STACK_LINE(1225)
					last_char = (breaks->__get((i + (int)1)) - (int)1);
				}
			}
			HX_STACK_LINE(1228)
			(i)++;
		}
	}
	HX_STACK_LINE(1230)
	return Array_obj< int >::__new().Add(first_char).Add(last_char);
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__getLineIndeces,return )

Float TextField_obj::__getLineWidth( int line){
	HX_STACK_FRAME("openfl.text.TextField","__getLineWidth",0xf5735840,"openfl.text.TextField.__getLineWidth","openfl/text/TextField.hx",1233,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(line,"line")
	HX_STACK_LINE(1237)
	Array< Float > measurements = this->__measureTextSub(false);		HX_STACK_VAR(measurements,"measurements");
	HX_STACK_LINE(1239)
	Float currWidth = 0.0;		HX_STACK_VAR(currWidth,"currWidth");
	HX_STACK_LINE(1240)
	Float bestWidth = 0.0;		HX_STACK_VAR(bestWidth,"bestWidth");
	HX_STACK_LINE(1242)
	Array< int > linebreaks = this->__getLineBreakIndeces();		HX_STACK_VAR(linebreaks,"linebreaks");
	HX_STACK_LINE(1244)
	int currLine = (int)0;		HX_STACK_VAR(currLine,"currLine");
	HX_STACK_LINE(1245)
	{
		HX_STACK_LINE(1245)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1245)
		int _g = measurements->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1245)
		while((true)){
			HX_STACK_LINE(1245)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(1245)
				break;
			}
			HX_STACK_LINE(1245)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1246)
			Float measure = measurements->__get(i);		HX_STACK_VAR(measure,"measure");
			HX_STACK_LINE(1247)
			int _g2 = linebreaks->indexOf(i,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1247)
			if (((_g2 != (int)-1))){
				HX_STACK_LINE(1248)
				if (((currLine == line))){
					HX_STACK_LINE(1249)
					return currWidth;
				}
				else{
					HX_STACK_LINE(1251)
					if (((bool((line == (int)-1)) && bool((currWidth > bestWidth))))){
						HX_STACK_LINE(1252)
						bestWidth = currWidth;
					}
				}
				HX_STACK_LINE(1255)
				currWidth = (int)0;
				HX_STACK_LINE(1256)
				(currLine)++;
			}
			else{
				HX_STACK_LINE(1259)
				hx::AddEq(currWidth,measurements->__get(i));
			}
		}
	}
	HX_STACK_LINE(1263)
	if (((currLine == line))){
		HX_STACK_LINE(1264)
		bestWidth = currWidth;
	}
	else{
		HX_STACK_LINE(1266)
		if (((bool((line == (int)-1)) && bool((currWidth > bestWidth))))){
			HX_STACK_LINE(1267)
			bestWidth = currWidth;
		}
	}
	HX_STACK_LINE(1270)
	return bestWidth;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__getLineWidth,return )

Float TextField_obj::__getLineMetric( int line,int metric){
	HX_STACK_FRAME("openfl.text.TextField","__getLineMetric",0x8cdfd8b6,"openfl.text.TextField.__getLineMetric","openfl/text/TextField.hx",1282,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(line,"line")
	HX_STACK_ARG(metric,"metric")
	HX_STACK_LINE(1282)
	if (((this->__ranges == null()))){
		HX_STACK_LINE(1283)
		return this->__getLineMetricSubRangesNull(true,metric);
	}
	else{
		HX_STACK_LINE(1286)
		return this->__getLineMetricSubRangesNotNull(line,metric);
	}
	HX_STACK_LINE(1282)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__getLineMetric,return )

Float TextField_obj::__getLineMetricSubRangesNull( hx::Null< bool >  __o_singleLine,int metric){
bool singleLine = __o_singleLine.Default(false);
	HX_STACK_FRAME("openfl.text.TextField","__getLineMetricSubRangesNull",0xd98838c7,"openfl.text.TextField.__getLineMetricSubRangesNull","openfl/text/TextField.hx",1290,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(singleLine,"singleLine")
	HX_STACK_ARG(metric,"metric")
{
		HX_STACK_LINE(1294)
		::openfl::text::Font font = this->__getFontInstance(this->__textFormat);		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(1296)
		if (((font != null()))){
			HX_STACK_LINE(1298)
			switch( (int)(metric)){
				case (int)2: {
					HX_STACK_LINE(1299)
					Float _g = this->__getLineMetricSubRangesNull(singleLine,(int)0);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1300)
					Float _g1 = this->__getLineMetricSubRangesNull(singleLine,(int)1);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1299)
					Float _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1301)
					Float _g3 = this->__getLineMetricSubRangesNull(singleLine,(int)3);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1299)
					return (_g2 + _g3);
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(1302)
					int _g4 = font->get_ascender();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1302)
					int _g5 = font->get_unitsPerEM();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1302)
					Float _g6 = (Float(_g4) / Float(_g5));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(1302)
					return (_g6 * this->__textFormat->size);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1303)
					int _g7 = font->get_descender();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1303)
					int _g8 = font->get_unitsPerEM();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(1303)
					Float _g9 = (Float(_g7) / Float(_g8));		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(1303)
					Float _g10 = (_g9 * this->__textFormat->size);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(1303)
					return ::Math_obj::abs(_g10);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(1304)
					return this->__textFormat->leading;
				}
				;break;
				default: {
					HX_STACK_LINE(1305)
					return (int)0;
				}
			}
		}
		HX_STACK_LINE(1309)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__getLineMetricSubRangesNull,return )

Float TextField_obj::__getLineMetricSubRangesNotNull( int specificLine,int metric){
	HX_STACK_FRAME("openfl.text.TextField","__getLineMetricSubRangesNotNull",0x748976fa,"openfl.text.TextField.__getLineMetricSubRangesNotNull","openfl/text/TextField.hx",1312,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(specificLine,"specificLine")
	HX_STACK_ARG(metric,"metric")
	HX_STACK_LINE(1317)
	Array< int > lineChars = this->__getLineIndeces(specificLine);		HX_STACK_VAR(lineChars,"lineChars");
	HX_STACK_LINE(1319)
	Float m = 0.0;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(1320)
	Float best_m = 0.0;		HX_STACK_VAR(best_m,"best_m");
	HX_STACK_LINE(1322)
	{
		HX_STACK_LINE(1322)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1322)
		Array< ::Dynamic > _g1 = this->__ranges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1322)
		while((true)){
			HX_STACK_LINE(1322)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(1322)
				break;
			}
			HX_STACK_LINE(1322)
			::openfl::text::TextFormatRange range = _g1->__get(_g).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(1322)
			++(_g);
			HX_STACK_LINE(1324)
			if (((range->start >= lineChars->__get((int)0)))){
				HX_STACK_LINE(1325)
				::openfl::text::Font font = this->__getFontInstance(range->format);		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(1327)
				if (((font != null()))){
					HX_STACK_LINE(1329)
					Float _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(1329)
					switch( (int)(metric)){
						case (int)2: {
							HX_STACK_LINE(1330)
							Float _g2 = this->__getLineMetricSubRangesNotNull(specificLine,(int)0);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1331)
							Float _g12 = this->__getLineMetricSubRangesNotNull(specificLine,(int)1);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(1330)
							Float _g21 = (_g2 + _g12);		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(1332)
							Float _g3 = this->__getLineMetricSubRangesNotNull(specificLine,(int)3);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(1330)
							_g11 = (_g21 + _g3);
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(1333)
							int _g4 = font->get_ascender();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(1333)
							int _g5 = font->get_unitsPerEM();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(1333)
							Float _g6 = (Float(_g4) / Float(_g5));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1333)
							_g11 = (_g6 * this->__textFormat->size);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(1334)
							int _g7 = font->get_descender();		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1334)
							int _g8 = font->get_unitsPerEM();		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(1334)
							Float _g9 = (Float(_g7) / Float(_g8));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(1334)
							Float _g10 = (_g9 * this->__textFormat->size);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(1334)
							_g11 = ::Math_obj::abs(_g10);
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(1335)
							_g11 = this->__textFormat->leading;
						}
						;break;
						default: {
							HX_STACK_LINE(1336)
							_g11 = (int)0;
						}
					}
					HX_STACK_LINE(1329)
					m = _g11;
				}
			}
			HX_STACK_LINE(1341)
			if (((m > best_m))){
				HX_STACK_LINE(1342)
				best_m = m;
			}
			HX_STACK_LINE(1344)
			m = (int)0;
		}
	}
	HX_STACK_LINE(1347)
	return best_m;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__getLineMetricSubRangesNotNull,return )

int TextField_obj::__getPosition( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","__getPosition",0xfe83559b,"openfl.text.TextField.__getPosition","openfl/text/TextField.hx",1350,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1352)
	if (((x <= (int)2))){
		HX_STACK_LINE(1352)
		return (int)0;
	}
	HX_STACK_LINE(1354)
	::String value = this->get_text();		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(1355)
	::String text = value;		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(1356)
	Float totalW = (int)2;		HX_STACK_VAR(totalW,"totalW");
	HX_STACK_LINE(1357)
	int pos = text.length;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(1359)
	Float _g = this->__getTextWidth(text);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1359)
	Float _g1 = (_g + (int)2);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1359)
	if (((x < _g1))){
		HX_STACK_LINE(1361)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(1361)
		int _g2 = text.length;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1361)
		while((true)){
			HX_STACK_LINE(1361)
			if ((!(((_g11 < _g2))))){
				HX_STACK_LINE(1361)
				break;
			}
			HX_STACK_LINE(1361)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1363)
			::String _g21 = text.charAt(i);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(1363)
			Float _g3 = this->__getTextWidth(_g21);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1363)
			hx::AddEq(totalW,_g3);
			HX_STACK_LINE(1365)
			if (((totalW >= x))){
				HX_STACK_LINE(1367)
				pos = i;
				HX_STACK_LINE(1368)
				break;
			}
		}
	}
	HX_STACK_LINE(1376)
	return pos;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__getPosition,return )

Float TextField_obj::__getTextWidth( ::String text){
	HX_STACK_FRAME("openfl.text.TextField","__getTextWidth",0x4765e4e7,"openfl.text.TextField.__getTextWidth","openfl/text/TextField.hx",1398,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(1398)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__getTextWidth,return )

bool TextField_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.text.TextField","__hitTest",0x83278481,"openfl.text.TextField.__hitTest","openfl/text/TextField.hx",1405,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(1407)
	if (((  ((!((!(this->get_visible()))))) ? bool((bool(interactiveOnly) && bool(!(this->mouseEnabled)))) : bool(true) ))){
		HX_STACK_LINE(1407)
		return false;
	}
	HX_STACK_LINE(1409)
	::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1409)
	::openfl::geom::Point point = this->globalToLocal(_g);		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(1411)
	if (((bool((bool((bool((point->x > (int)0)) && bool((point->y > (int)0)))) && bool((point->x <= this->__width)))) && bool((point->y <= this->__height))))){
		HX_STACK_LINE(1413)
		if (((stack != null()))){
			HX_STACK_LINE(1415)
			stack->push(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(1419)
		return true;
	}
	HX_STACK_LINE(1423)
	return false;
}


Array< Float > TextField_obj::__measureText( hx::Null< bool >  __o_condense){
bool condense = __o_condense.Default(true);
	HX_STACK_FRAME("openfl.text.TextField","__measureText",0x5e15ed67,"openfl.text.TextField.__measureText","openfl/text/TextField.hx",1463,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(condense,"condense")
{
		HX_STACK_LINE(1463)
		return this->__measureTextSub(condense);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__measureText,return )

Array< Float > TextField_obj::__measureTextSub( bool condense){
	HX_STACK_FRAME("openfl.text.TextField","__measureTextSub",0xc8f08e59,"openfl.text.TextField.__measureTextSub","openfl/text/TextField.hx",1473,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(condense,"condense")
	HX_STACK_LINE(1477)
	if (((this->__textLayout == null()))){
		HX_STACK_LINE(1479)
		::lime::text::TextLayout _g = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1479)
		this->__textLayout = _g;
	}
	HX_STACK_LINE(1483)
	if (((this->__ranges == null()))){
		HX_STACK_LINE(1485)
		return this->__measureTextSubRangesNull(condense);
	}
	else{
		HX_STACK_LINE(1489)
		return this->__measureTextSubRangesNotNull(condense);
	}
	HX_STACK_LINE(1492)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__measureTextSub,return )

Array< Float > TextField_obj::__measureTextSubRangesNull( bool condense){
	HX_STACK_FRAME("openfl.text.TextField","__measureTextSubRangesNull",0x22ec4976,"openfl.text.TextField.__measureTextSubRangesNull","openfl/text/TextField.hx",1495,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(condense,"condense")
	HX_STACK_LINE(1499)
	::openfl::text::Font font = this->__getFontInstance(this->__textFormat);		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(1500)
	Float width = 0.0;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(1501)
	Array< Float > widths = Array_obj< Float >::__new();		HX_STACK_VAR(widths,"widths");
	HX_STACK_LINE(1503)
	if (((bool((font != null())) && bool((this->__textFormat->size != null()))))){
		HX_STACK_LINE(1505)
		this->__textLayout->set_text(null());
		HX_STACK_LINE(1506)
		this->__textLayout->set_font(font);
		HX_STACK_LINE(1507)
		int _g = ::Std_obj::_int(this->__textFormat->size);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1507)
		this->__textLayout->set_size(_g);
		HX_STACK_LINE(1508)
		this->__textLayout->set_text(this->__text);
		HX_STACK_LINE(1510)
		{
			HX_STACK_LINE(1510)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1510)
			Array< ::Dynamic > _g11 = this->__textLayout->positions;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1510)
			while((true)){
				HX_STACK_LINE(1510)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(1510)
					break;
				}
				HX_STACK_LINE(1510)
				::lime::text::GlyphPosition position = _g11->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
				HX_STACK_LINE(1510)
				++(_g1);
				HX_STACK_LINE(1512)
				if ((condense)){
					HX_STACK_LINE(1513)
					hx::AddEq(width,position->advance->x);
				}
				else{
					HX_STACK_LINE(1516)
					widths->push(position->advance->x);
				}
			}
		}
	}
	HX_STACK_LINE(1523)
	if ((condense)){
		HX_STACK_LINE(1524)
		widths->push(width);
	}
	HX_STACK_LINE(1527)
	return widths;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__measureTextSubRangesNull,return )

Array< Float > TextField_obj::__measureTextSubRangesNotNull( bool condense){
	HX_STACK_FRAME("openfl.text.TextField","__measureTextSubRangesNotNull",0x28bbbdab,"openfl.text.TextField.__measureTextSubRangesNotNull","openfl/text/TextField.hx",1530,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(condense,"condense")
	HX_STACK_LINE(1534)
	Array< Float > measurements = Array_obj< Float >::__new();		HX_STACK_VAR(measurements,"measurements");
	HX_STACK_LINE(1536)
	{
		HX_STACK_LINE(1536)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1536)
		Array< ::Dynamic > _g1 = this->__ranges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1536)
		while((true)){
			HX_STACK_LINE(1536)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(1536)
				break;
			}
			HX_STACK_LINE(1536)
			::openfl::text::TextFormatRange range = _g1->__get(_g).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(1536)
			++(_g);
			HX_STACK_LINE(1538)
			::openfl::text::Font font = this->__getFontInstance(range->format);		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(1539)
			Float width = 0.0;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(1541)
			if (((bool((font != null())) && bool((range->format->size != null()))))){
				HX_STACK_LINE(1543)
				this->__textLayout->set_text(null());
				HX_STACK_LINE(1544)
				this->__textLayout->set_font(font);
				HX_STACK_LINE(1545)
				int _g2 = ::Std_obj::_int(range->format->size);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1545)
				this->__textLayout->set_size(_g2);
				HX_STACK_LINE(1546)
				::String _g11 = this->get_text().substring(range->start,range->end);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1546)
				this->__textLayout->set_text(_g11);
				HX_STACK_LINE(1548)
				{
					HX_STACK_LINE(1548)
					int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(1548)
					Array< ::Dynamic > _g3 = this->__textLayout->positions;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1548)
					while((true)){
						HX_STACK_LINE(1548)
						if ((!(((_g21 < _g3->length))))){
							HX_STACK_LINE(1548)
							break;
						}
						HX_STACK_LINE(1548)
						::lime::text::GlyphPosition position = _g3->__get(_g21).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
						HX_STACK_LINE(1548)
						++(_g21);
						HX_STACK_LINE(1550)
						if ((condense)){
							HX_STACK_LINE(1551)
							hx::AddEq(width,position->advance->x);
						}
						else{
							HX_STACK_LINE(1554)
							measurements->push(position->advance->x);
						}
					}
				}
			}
			HX_STACK_LINE(1561)
			if ((condense)){
				HX_STACK_LINE(1562)
				measurements->push(width);
			}
		}
	}
	HX_STACK_LINE(1567)
	return measurements;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__measureTextSubRangesNotNull,return )

Void TextField_obj::__measureTextWithDOM( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__measureTextWithDOM",0xa22f3575,"openfl.text.TextField.__measureTextWithDOM","openfl/text/TextField.hx",1570,0xccf02094)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__measureTextWithDOM,(void))

Void TextField_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderCanvas",0xfc575b12,"openfl.text.TextField.__renderCanvas","openfl/text/TextField.hx",1613,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1613)
		Dynamic();
	}
return null();
}


Void TextField_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderDOM",0x037e5808,"openfl.text.TextField.__renderDOM","openfl/text/TextField.hx",1620,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1620)
		Dynamic();
	}
return null();
}


Void TextField_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderGL",0xa5533b3f,"openfl.text.TextField.__renderGL","openfl/text/TextField.hx",1627,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1627)
		::openfl::_internal::renderer::opengl::GLTextField_obj::render(hx::ObjectPtr<OBJ_>(this),renderSession);
	}
return null();
}


Void TextField_obj::__startCursorTimer( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__startCursorTimer",0xacba2811,"openfl.text.TextField.__startCursorTimer","openfl/text/TextField.hx",1632,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1634)
		::haxe::Timer _g = ::haxe::Timer_obj::delay(this->__startCursorTimer_dyn(),(int)500);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1634)
		this->__cursorTimer = _g;
		HX_STACK_LINE(1635)
		this->__showCursor = !(this->__showCursor);
		HX_STACK_LINE(1636)
		this->__dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__startCursorTimer,(void))

Void TextField_obj::__stopCursorTimer( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__stopCursorTimer",0x8f135c69,"openfl.text.TextField.__stopCursorTimer","openfl/text/TextField.hx",1643,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1643)
		if (((this->__cursorTimer != null()))){
			HX_STACK_LINE(1645)
			this->__cursorTimer->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__stopCursorTimer,(void))

::openfl::text::TextFieldAutoSize TextField_obj::set_autoSize( ::openfl::text::TextFieldAutoSize value){
	HX_STACK_FRAME("openfl.text.TextField","set_autoSize",0xeca81571,"openfl.text.TextField.set_autoSize","openfl/text/TextField.hx",1866,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1868)
	if (((value != this->autoSize))){
		HX_STACK_LINE(1868)
		this->__dirty = true;
	}
	HX_STACK_LINE(1869)
	return this->autoSize = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_autoSize,return )

bool TextField_obj::set_background( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_background",0x703183cf,"openfl.text.TextField.set_background","openfl/text/TextField.hx",1874,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1876)
	if (((value != this->background))){
		HX_STACK_LINE(1876)
		this->__dirty = true;
	}
	HX_STACK_LINE(1877)
	return this->background = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_background,return )

int TextField_obj::set_backgroundColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_backgroundColor",0x9fdd2f14,"openfl.text.TextField.set_backgroundColor","openfl/text/TextField.hx",1882,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1884)
	if (((value != this->backgroundColor))){
		HX_STACK_LINE(1884)
		this->__dirty = true;
	}
	HX_STACK_LINE(1885)
	return this->backgroundColor = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_backgroundColor,return )

bool TextField_obj::set_border( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_border",0xa75e784d,"openfl.text.TextField.set_border","openfl/text/TextField.hx",1890,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1892)
	if (((value != this->border))){
		HX_STACK_LINE(1892)
		this->__dirty = true;
	}
	HX_STACK_LINE(1893)
	return this->border = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_border,return )

int TextField_obj::set_borderColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_borderColor",0x5e3331d6,"openfl.text.TextField.set_borderColor","openfl/text/TextField.hx",1898,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1900)
	if (((value != this->borderColor))){
		HX_STACK_LINE(1900)
		this->__dirty = true;
	}
	HX_STACK_LINE(1901)
	return this->borderColor = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_borderColor,return )

int TextField_obj::get_bottomScrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_bottomScrollV",0xfa9e92b1,"openfl.text.TextField.get_bottomScrollV","openfl/text/TextField.hx",1910,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1910)
	return this->get_numLines();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bottomScrollV,return )

int TextField_obj::get_caretPos( ){
	HX_STACK_FRAME("openfl.text.TextField","get_caretPos",0x916b11fe,"openfl.text.TextField.get_caretPos","openfl/text/TextField.hx",1917,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1917)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_caretPos,return )

::openfl::text::TextFormat TextField_obj::get_defaultTextFormat( ){
	HX_STACK_FRAME("openfl.text.TextField","get_defaultTextFormat",0x83063818,"openfl.text.TextField.get_defaultTextFormat","openfl/text/TextField.hx",1924,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1924)
	return this->__textFormat->clone();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_defaultTextFormat,return )

::openfl::text::TextFormat TextField_obj::set_defaultTextFormat( ::openfl::text::TextFormat value){
	HX_STACK_FRAME("openfl.text.TextField","set_defaultTextFormat",0xd70f0624,"openfl.text.TextField.set_defaultTextFormat","openfl/text/TextField.hx",1929,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1932)
	this->__textFormat->__merge(value);
	HX_STACK_LINE(1933)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_defaultTextFormat,return )

Float TextField_obj::get_height( ){
	HX_STACK_FRAME("openfl.text.TextField","get_height",0x421294d4,"openfl.text.TextField.get_height","openfl/text/TextField.hx",1938,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1940)
	Float _g = this->get_scaleY();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1940)
	return (this->__height * _g);
}


Float TextField_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_height",0x45903348,"openfl.text.TextField.set_height","openfl/text/TextField.hx",1945,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1947)
	Float _g = this->get_scaleY();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1947)
	if (((  ((!(((_g != (int)1))))) ? bool((value != this->__height)) : bool(true) ))){
		HX_STACK_LINE(1949)
		if ((!(this->__transformDirty))){
			HX_STACK_LINE(1949)
			this->__transformDirty = true;
			HX_STACK_LINE(1949)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(1950)
		this->__dirty = true;
	}
	HX_STACK_LINE(1954)
	this->set_scaleY((int)1);
	HX_STACK_LINE(1955)
	return this->__height = value;
}


::String TextField_obj::get_htmlText( ){
	HX_STACK_FRAME("openfl.text.TextField","get_htmlText",0xb86d81e5,"openfl.text.TextField.get_htmlText","openfl/text/TextField.hx",1962,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1962)
	return this->__text;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_htmlText,return )

::String TextField_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_htmlText",0xcd66a559,"openfl.text.TextField.set_htmlText","openfl/text/TextField.hx",1969,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1971)
	if (((bool(!(this->__isHTML)) || bool((this->__text != value))))){
		HX_STACK_LINE(1971)
		this->__dirty = true;
	}
	HX_STACK_LINE(1972)
	this->__ranges = null();
	HX_STACK_LINE(1973)
	this->__isHTML = true;
	HX_STACK_LINE(1975)
	{
		HX_STACK_LINE(1977)
		::String _g = ::EReg_obj::__new(HX_CSTRING("<br>"),HX_CSTRING("g"))->replace(value,HX_CSTRING("\n"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1977)
		value = _g;
		HX_STACK_LINE(1978)
		::String _g1 = ::EReg_obj::__new(HX_CSTRING("<br/>"),HX_CSTRING("g"))->replace(value,HX_CSTRING("\n"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1978)
		value = _g1;
		HX_STACK_LINE(1982)
		Array< ::String > segments = value.split(HX_CSTRING("<font"));		HX_STACK_VAR(segments,"segments");
		HX_STACK_LINE(1984)
		if (((segments->length == (int)1))){
			HX_STACK_LINE(1986)
			::String _g2 = ::EReg_obj::__new(HX_CSTRING("<.*?>"),HX_CSTRING("g"))->replace(value,HX_CSTRING(""));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1986)
			value = _g2;
			HX_STACK_LINE(1998)
			return this->__text = value;
		}
		else{
			HX_STACK_LINE(2002)
			value = HX_CSTRING("");
			HX_STACK_LINE(2003)
			this->__ranges = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(2007)
			{
				HX_STACK_LINE(2007)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(2007)
				while((true)){
					HX_STACK_LINE(2007)
					if ((!(((_g2 < segments->length))))){
						HX_STACK_LINE(2007)
						break;
					}
					HX_STACK_LINE(2007)
					::String segment = segments->__get(_g2);		HX_STACK_VAR(segment,"segment");
					HX_STACK_LINE(2007)
					++(_g2);
					HX_STACK_LINE(2009)
					if (((segment == HX_CSTRING("")))){
						HX_STACK_LINE(2009)
						continue;
					}
					HX_STACK_LINE(2011)
					int closeFontIndex = segment.indexOf(HX_CSTRING("</font>"),null());		HX_STACK_VAR(closeFontIndex,"closeFontIndex");
					HX_STACK_LINE(2013)
					if (((closeFontIndex > (int)-1))){
						HX_STACK_LINE(2015)
						int _g3 = segment.indexOf(HX_CSTRING(">"),null());		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(2015)
						int start = (_g3 + (int)1);		HX_STACK_VAR(start,"start");
						HX_STACK_LINE(2016)
						int end = closeFontIndex;		HX_STACK_VAR(end,"end");
						HX_STACK_LINE(2017)
						::openfl::text::TextFormat format = this->__textFormat->clone();		HX_STACK_VAR(format,"format");
						HX_STACK_LINE(2019)
						int faceIndex = segment.indexOf(HX_CSTRING("face="),null());		HX_STACK_VAR(faceIndex,"faceIndex");
						HX_STACK_LINE(2020)
						int colorIndex = segment.indexOf(HX_CSTRING("color="),null());		HX_STACK_VAR(colorIndex,"colorIndex");
						HX_STACK_LINE(2021)
						int sizeIndex = segment.indexOf(HX_CSTRING("size="),null());		HX_STACK_VAR(sizeIndex,"sizeIndex");
						HX_STACK_LINE(2023)
						if (((bool((faceIndex > (int)-1)) && bool((faceIndex < start))))){
							HX_STACK_LINE(2025)
							int _g4 = segment.indexOf(HX_CSTRING("\""),faceIndex);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(2025)
							::String _g5 = segment.substr((faceIndex + (int)6),_g4);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(2025)
							format->font = _g5;
						}
						HX_STACK_LINE(2029)
						if (((bool((colorIndex > (int)-1)) && bool((colorIndex < start))))){
							HX_STACK_LINE(2031)
							::String _g6 = segment.substr((colorIndex + (int)8),(int)6);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(2031)
							::String _g7 = (HX_CSTRING("0x") + _g6);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(2031)
							Dynamic _g8 = ::Std_obj::parseInt(_g7);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(2031)
							format->color = _g8;
						}
						HX_STACK_LINE(2035)
						if (((bool((sizeIndex > (int)-1)) && bool((sizeIndex < start))))){
							HX_STACK_LINE(2037)
							int _g9 = segment.indexOf(HX_CSTRING("\""),sizeIndex);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(2037)
							::String _g10 = segment.substr((sizeIndex + (int)6),_g9);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(2037)
							Dynamic _g11 = ::Std_obj::parseInt(_g10);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(2037)
							format->size = _g11;
						}
						HX_STACK_LINE(2041)
						::String sub = segment.substring(start,end);		HX_STACK_VAR(sub,"sub");
						HX_STACK_LINE(2042)
						::String _g12 = ::EReg_obj::__new(HX_CSTRING("<.*?>"),HX_CSTRING("g"))->replace(sub,HX_CSTRING(""));		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(2042)
						sub = _g12;
						HX_STACK_LINE(2044)
						::openfl::text::TextFormatRange _g13 = ::openfl::text::TextFormatRange_obj::__new(format,value.length,(value.length + sub.length));		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(2044)
						this->__ranges->push(_g13);
						HX_STACK_LINE(2045)
						hx::AddEq(value,sub);
						HX_STACK_LINE(2047)
						if ((((closeFontIndex + (int)7) < segment.length))){
							HX_STACK_LINE(2049)
							::String _g14 = segment.substr((closeFontIndex + (int)7),null());		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(2049)
							sub = _g14;
							HX_STACK_LINE(2050)
							::openfl::text::TextFormatRange _g15 = ::openfl::text::TextFormatRange_obj::__new(this->__textFormat,value.length,(value.length + sub.length));		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(2050)
							this->__ranges->push(_g15);
							HX_STACK_LINE(2051)
							hx::AddEq(value,sub);
						}
					}
					else{
						HX_STACK_LINE(2057)
						::openfl::text::TextFormatRange _g16 = ::openfl::text::TextFormatRange_obj::__new(this->__textFormat,value.length,(value.length + segment.length));		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(2057)
						this->__ranges->push(_g16);
						HX_STACK_LINE(2058)
						hx::AddEq(value,segment);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2079)
	return this->__text = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_htmlText,return )

int TextField_obj::get_maxScrollH( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxScrollH",0xc4f0b4c4,"openfl.text.TextField.get_maxScrollH","openfl/text/TextField.hx",2084,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2084)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollH,return )

int TextField_obj::get_maxScrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxScrollV",0xc4f0b4d2,"openfl.text.TextField.get_maxScrollV","openfl/text/TextField.hx",2085,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2085)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollV,return )

int TextField_obj::get_numLines( ){
	HX_STACK_FRAME("openfl.text.TextField","get_numLines",0xda475406,"openfl.text.TextField.get_numLines","openfl/text/TextField.hx",2088,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2090)
	::String _g = this->get_text();		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::openfl::text::TextField_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/text/TextField.hx",2090,0xccf02094)
			{
				HX_STACK_LINE(2090)
				::String _g1 = __this->get_text();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(2090)
				return (_g1 != null());
			}
			return null();
		}
	};
	HX_STACK_LINE(2090)
	if (((  (((_g != HX_CSTRING("")))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(2092)
		int count = this->get_text().split(HX_CSTRING("\n"))->length;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(2094)
		if ((this->__isHTML)){
			HX_STACK_LINE(2096)
			hx::AddEq(count,(this->get_text().split(HX_CSTRING("<br>"))->length - (int)1));
		}
		HX_STACK_LINE(2100)
		return count;
	}
	HX_STACK_LINE(2104)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_numLines,return )

bool TextField_obj::set_selectable( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_selectable",0x0e3ea677,"openfl.text.TextField.set_selectable","openfl/text/TextField.hx",2119,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2119)
	return this->selectable = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectable,return )

::String TextField_obj::get_text( ){
	HX_STACK_FRAME("openfl.text.TextField","get_text",0x3b0d545a,"openfl.text.TextField.get_text","openfl/text/TextField.hx",2124,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2126)
	if ((this->__isHTML)){
	}
	HX_STACK_LINE(2132)
	return this->__text;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_text,return )

::String TextField_obj::set_text( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_text",0xe96aadce,"openfl.text.TextField.set_text","openfl/text/TextField.hx",2137,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2151)
	if (((bool(this->__isHTML) || bool((this->__text != value))))){
		HX_STACK_LINE(2151)
		this->__dirty = true;
	}
	HX_STACK_LINE(2152)
	this->__ranges = null();
	HX_STACK_LINE(2153)
	this->__isHTML = false;
	HX_STACK_LINE(2154)
	return this->__text = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_text,return )

int TextField_obj::get_textColor( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textColor",0x69ca86a9,"openfl.text.TextField.get_textColor","openfl/text/TextField.hx",2161,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2161)
	return this->__textFormat->color;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textColor,return )

int TextField_obj::set_textColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_textColor",0xaed068b5,"openfl.text.TextField.set_textColor","openfl/text/TextField.hx",2166,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2168)
	if (((value != this->__textFormat->color))){
		HX_STACK_LINE(2168)
		this->__dirty = true;
	}
	HX_STACK_LINE(2170)
	if (((this->__ranges != null()))){
		HX_STACK_LINE(2172)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2172)
		Array< ::Dynamic > _g1 = this->__ranges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2172)
		while((true)){
			HX_STACK_LINE(2172)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(2172)
				break;
			}
			HX_STACK_LINE(2172)
			::openfl::text::TextFormatRange range = _g1->__get(_g).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(2172)
			++(_g);
			HX_STACK_LINE(2174)
			range->format->color = value;
		}
	}
	HX_STACK_LINE(2180)
	return this->__textFormat->color = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_textColor,return )

Float TextField_obj::get_textWidth( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textWidth",0xe9d0cb4c,"openfl.text.TextField.get_textWidth","openfl/text/TextField.hx",2216,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2216)
	return this->__getLineWidth((int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textWidth,return )

Float TextField_obj::get_textHeight( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textHeight",0x63308fe1,"openfl.text.TextField.get_textHeight","openfl/text/TextField.hx",2227,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2253)
	Float th = 0.0;		HX_STACK_VAR(th,"th");
	HX_STACK_LINE(2254)
	{
		HX_STACK_LINE(2254)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2254)
		int _g = this->get_numLines();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2254)
		while((true)){
			HX_STACK_LINE(2254)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(2254)
				break;
			}
			HX_STACK_LINE(2254)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2255)
			Float _g2 = this->__getLineMetric(i,(int)2);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2255)
			hx::AddEq(th,_g2);
			HX_STACK_LINE(2256)
			int _g11 = this->get_numLines();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(2256)
			int _g21 = (_g11 - (int)1);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(2256)
			if (((i == _g21))){
				HX_STACK_LINE(2257)
				Float _g3 = this->__getLineMetric(i,(int)3);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(2257)
				hx::SubEq(th,_g3);
			}
		}
	}
	HX_STACK_LINE(2260)
	return th;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textHeight,return )

::openfl::text::TextFieldType TextField_obj::set_type( ::openfl::text::TextFieldType value){
	HX_STACK_FRAME("openfl.text.TextField","set_type",0xe979d3db,"openfl.text.TextField.set_type","openfl/text/TextField.hx",2267,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2269)
	if (((value != this->type))){
		HX_STACK_LINE(2272)
		if (((value == ::openfl::text::TextFieldType_obj::INPUT))){
			HX_STACK_LINE(2274)
			this->__enableInputMode();
		}
		else{
			HX_STACK_LINE(2278)
			this->__disableInputMode();
		}
		HX_STACK_LINE(2283)
		this->__dirty = true;
	}
	HX_STACK_LINE(2287)
	return this->type = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_type,return )

Float TextField_obj::get_width( ){
	HX_STACK_FRAME("openfl.text.TextField","get_width",0x2d65e5b9,"openfl.text.TextField.get_width","openfl/text/TextField.hx",2294,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2294)
	if (((this->autoSize == ::openfl::text::TextFieldAutoSize_obj::LEFT))){
		HX_STACK_LINE(2297)
		Float _g = this->get_textWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2297)
		Float _g1 = (_g + (int)4);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2297)
		Float _g2 = this->get_scaleX();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(2297)
		return (_g1 * _g2);
	}
	else{
		HX_STACK_LINE(2301)
		Float _g3 = this->get_scaleX();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2301)
		return (this->__width * _g3);
	}
	HX_STACK_LINE(2294)
	return 0.;
}


Float TextField_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_width",0x10b6d1c5,"openfl.text.TextField.set_width","openfl/text/TextField.hx",2308,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2310)
	Float _g = this->get_scaleX();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2310)
	if (((  ((!(((_g != (int)1))))) ? bool((this->__width != value)) : bool(true) ))){
		HX_STACK_LINE(2312)
		if ((!(this->__transformDirty))){
			HX_STACK_LINE(2312)
			this->__transformDirty = true;
			HX_STACK_LINE(2312)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(2313)
		this->__dirty = true;
	}
	HX_STACK_LINE(2317)
	this->set_scaleX((int)1);
	HX_STACK_LINE(2318)
	return this->__width = value;
}


bool TextField_obj::get_wordWrap( ){
	HX_STACK_FRAME("openfl.text.TextField","get_wordWrap",0xa91076e1,"openfl.text.TextField.get_wordWrap","openfl/text/TextField.hx",2325,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2325)
	return this->wordWrap;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_wordWrap,return )

bool TextField_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_wordWrap",0xbe099a55,"openfl.text.TextField.set_wordWrap","openfl/text/TextField.hx",2333,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2333)
	return this->wordWrap = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_wordWrap,return )

::openfl::text::TextFormat TextField_obj::__defaultTextFormat;

int TextField_obj::__utf8_endline_code;

int TextField_obj::ASCENDER;

int TextField_obj::DESCENDER;

int TextField_obj::LINE_HEIGHT;

int TextField_obj::LEADING;


TextField_obj::TextField_obj()
{
}

void TextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextField);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(caretPos,"caretPos");
	HX_MARK_MEMBER_NAME(displayAsPassword,"displayAsPassword");
	HX_MARK_MEMBER_NAME(embedFonts,"embedFonts");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(maxChars,"maxChars");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(restrict,"restrict");
	HX_MARK_MEMBER_NAME(scrollH,"scrollH");
	HX_MARK_MEMBER_NAME(scrollV,"scrollV");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(selectionBeginIndex,"selectionBeginIndex");
	HX_MARK_MEMBER_NAME(selectionEndIndex,"selectionEndIndex");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_MARK_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_MEMBER_NAME(__isHTML,"__isHTML");
	HX_MARK_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_MARK_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_MARK_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_MARK_MEMBER_NAME(__ranges,"__ranges");
	HX_MARK_MEMBER_NAME(__selectable,"__selectable");
	HX_MARK_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_MARK_MEMBER_NAME(__showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(__text,"__text");
	HX_MARK_MEMBER_NAME(__textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(__textLayout,"__textLayout");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__tileData,"__tileData");
	HX_MARK_MEMBER_NAME(__tileDataLength,"__tileDataLength");
	HX_MARK_MEMBER_NAME(__tilesheets,"__tilesheets");
	HX_MARK_MEMBER_NAME(__width,"__width");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(caretPos,"caretPos");
	HX_VISIT_MEMBER_NAME(displayAsPassword,"displayAsPassword");
	HX_VISIT_MEMBER_NAME(embedFonts,"embedFonts");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(maxChars,"maxChars");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(restrict,"restrict");
	HX_VISIT_MEMBER_NAME(scrollH,"scrollH");
	HX_VISIT_MEMBER_NAME(scrollV,"scrollV");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(selectionBeginIndex,"selectionBeginIndex");
	HX_VISIT_MEMBER_NAME(selectionEndIndex,"selectionEndIndex");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_VISIT_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_VISIT_MEMBER_NAME(__height,"__height");
	HX_VISIT_MEMBER_NAME(__isHTML,"__isHTML");
	HX_VISIT_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_VISIT_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_VISIT_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_VISIT_MEMBER_NAME(__ranges,"__ranges");
	HX_VISIT_MEMBER_NAME(__selectable,"__selectable");
	HX_VISIT_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_VISIT_MEMBER_NAME(__showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(__text,"__text");
	HX_VISIT_MEMBER_NAME(__textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(__textLayout,"__textLayout");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__tileData,"__tileData");
	HX_VISIT_MEMBER_NAME(__tileDataLength,"__tileDataLength");
	HX_VISIT_MEMBER_NAME(__tilesheets,"__tilesheets");
	HX_VISIT_MEMBER_NAME(__width,"__width");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextField_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"__text") ) { return __text; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return scrollH; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return scrollV; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return autoSize; }
		if (HX_FIELD_EQ(inName,"caretPos") ) { return inCallProp ? get_caretPos() : caretPos; }
		if (HX_FIELD_EQ(inName,"htmlText") ) { return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return maxChars; }
		if (HX_FIELD_EQ(inName,"numLines") ) { return inCallProp ? get_numLines() : numLines; }
		if (HX_FIELD_EQ(inName,"restrict") ) { return restrict; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return inCallProp ? get_wordWrap() : wordWrap; }
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { return __isHTML; }
		if (HX_FIELD_EQ(inName,"__ranges") ) { return __ranges; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return multiline; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return sharpness; }
		if (HX_FIELD_EQ(inName,"textColor") ) { return get_textColor(); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return inCallProp ? get_textWidth() : textWidth; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"__getFont") ) { return __getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return caretIndex; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return embedFonts; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return inCallProp ? get_maxScrollH() : maxScrollH; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return inCallProp ? get_maxScrollV() : maxScrollV; }
		if (HX_FIELD_EQ(inName,"selectable") ) { return selectable; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return inCallProp ? get_textHeight() : textHeight; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { return __hasFocus; }
		if (HX_FIELD_EQ(inName,"__tileData") ) { return __tileData; }
		if (HX_FIELD_EQ(inName,"appendText") ) { return appendText_dyn(); }
		if (HX_FIELD_EQ(inName,"__clipText") ) { return __clipText_dyn(); }
		if (HX_FIELD_EQ(inName,"__findFont") ) { return __findFont_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return set_border_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return gridFitType; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { return __isKeyDown; }
		if (HX_FIELD_EQ(inName,"getLineText") ) { return getLineText_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__selectable") ) { return __selectable; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return __showCursor; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return __textFormat; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { return __textLayout; }
		if (HX_FIELD_EQ(inName,"__tilesheets") ) { return __tilesheets; }
		if (HX_FIELD_EQ(inName,"setSelection") ) { return setSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_caretPos") ) { return get_caretPos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return get_numLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return antiAliasType; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return inCallProp ? get_bottomScrollV() : bottomScrollV; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return __cursorTimer; }
		if (HX_FIELD_EQ(inName,"getLineOffset") ) { return getLineOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return getTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return setTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"__getPosition") ) { return __getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"__measureText") ) { return __measureText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return get_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return set_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return get_textWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLineMetrics") ) { return getLineMetrics_dyn(); }
		if (HX_FIELD_EQ(inName,"__getLineWidth") ) { return __getLineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"__getTextWidth") ) { return __getTextWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollH") ) { return get_maxScrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return get_maxScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return get_textHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { return __measuredWidth; }
		if (HX_FIELD_EQ(inName,"__getLineBreaks") ) { return __getLineBreaks_dyn(); }
		if (HX_FIELD_EQ(inName,"__getLineMetric") ) { return __getLineMetric_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { return __cursorPosition; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { return __measuredHeight; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { return __selectionStart; }
		if (HX_FIELD_EQ(inName,"__tileDataLength") ) { return __tileDataLength; }
		if (HX_FIELD_EQ(inName,"__getLineIndeces") ) { return __getLineIndeces_dyn(); }
		if (HX_FIELD_EQ(inName,"__measureTextSub") ) { return __measureTextSub_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { return get_defaultTextFormat(); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { return displayAsPassword; }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { return selectionEndIndex; }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return getCharBoundaries_dyn(); }
		if (HX_FIELD_EQ(inName,"__enableInputMode") ) { return __enableInputMode_dyn(); }
		if (HX_FIELD_EQ(inName,"__getFontInstance") ) { return __getFontInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopCursorTimer") ) { return __stopCursorTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return get_bottomScrollV_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__disableInputMode") ) { return __disableInputMode_dyn(); }
		if (HX_FIELD_EQ(inName,"__startCursorTimer") ) { return __startCursorTimer_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { return __defaultTextFormat; }
		if (HX_FIELD_EQ(inName,"__utf8_endline_code") ) { return __utf8_endline_code; }
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { return selectionBeginIndex; }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return getCharIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineIndexAtPoint") ) { return getLineIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__measureTextWithDOM") ) { return __measureTextWithDOM_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__getLineBreakIndeces") ) { return __getLineBreakIndeces_dyn(); }
		if (HX_FIELD_EQ(inName,"get_defaultTextFormat") ) { return get_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultTextFormat") ) { return set_defaultTextFormat_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__getLineBreaksInRange") ) { return __getLineBreaksInRange_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__measureTextSubRangesNull") ) { return __measureTextSubRangesNull_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__getLineMetricSubRangesNull") ) { return __getLineMetricSubRangesNull_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__measureTextSubRangesNotNull") ) { return __measureTextSubRangesNotNull_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__getLineMetricSubRangesNotNull") ) { return __getLineMetricSubRangesNotNull_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp) return set_type(inValue);type=inValue.Cast< ::openfl::text::TextFieldType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp) return set_border(inValue);border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__text") ) { __text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { scrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp) return set_autoSize(inValue);autoSize=inValue.Cast< ::openfl::text::TextFieldAutoSize >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretPos") ) { caretPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"htmlText") ) { return set_htmlText(inValue); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { maxChars=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { restrict=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp) return set_wordWrap(inValue);wordWrap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { __isHTML=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ranges") ) { __ranges=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textColor") ) { return set_textColor(inValue); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp) return set_background(inValue);background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp) return set_selectable(inValue);selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { __hasFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tileData") ) { __tileData=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast< ::openfl::text::GridFitType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { __isKeyDown=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__selectable") ) { __selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { __showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { __textFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { __textLayout=inValue.Cast< ::lime::text::TextLayout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tilesheets") ) { __tilesheets=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast< ::openfl::text::AntiAliasType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { __cursorTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp) return set_backgroundColor(inValue);backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { __measuredWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { __cursorPosition=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { __measuredHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { __selectionStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tileDataLength") ) { __tileDataLength=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { return set_defaultTextFormat(inValue); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { displayAsPassword=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { selectionEndIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { __defaultTextFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__utf8_endline_code") ) { __utf8_endline_code=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { selectionBeginIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("antiAliasType"));
	outFields->push(HX_CSTRING("autoSize"));
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("backgroundColor"));
	outFields->push(HX_CSTRING("border"));
	outFields->push(HX_CSTRING("borderColor"));
	outFields->push(HX_CSTRING("bottomScrollV"));
	outFields->push(HX_CSTRING("caretIndex"));
	outFields->push(HX_CSTRING("caretPos"));
	outFields->push(HX_CSTRING("defaultTextFormat"));
	outFields->push(HX_CSTRING("displayAsPassword"));
	outFields->push(HX_CSTRING("embedFonts"));
	outFields->push(HX_CSTRING("gridFitType"));
	outFields->push(HX_CSTRING("htmlText"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("maxChars"));
	outFields->push(HX_CSTRING("maxScrollH"));
	outFields->push(HX_CSTRING("maxScrollV"));
	outFields->push(HX_CSTRING("multiline"));
	outFields->push(HX_CSTRING("numLines"));
	outFields->push(HX_CSTRING("restrict"));
	outFields->push(HX_CSTRING("scrollH"));
	outFields->push(HX_CSTRING("scrollV"));
	outFields->push(HX_CSTRING("selectable"));
	outFields->push(HX_CSTRING("selectionBeginIndex"));
	outFields->push(HX_CSTRING("selectionEndIndex"));
	outFields->push(HX_CSTRING("sharpness"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("textColor"));
	outFields->push(HX_CSTRING("textHeight"));
	outFields->push(HX_CSTRING("textWidth"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("wordWrap"));
	outFields->push(HX_CSTRING("__cursorPosition"));
	outFields->push(HX_CSTRING("__cursorTimer"));
	outFields->push(HX_CSTRING("__dirty"));
	outFields->push(HX_CSTRING("__hasFocus"));
	outFields->push(HX_CSTRING("__height"));
	outFields->push(HX_CSTRING("__isHTML"));
	outFields->push(HX_CSTRING("__isKeyDown"));
	outFields->push(HX_CSTRING("__measuredHeight"));
	outFields->push(HX_CSTRING("__measuredWidth"));
	outFields->push(HX_CSTRING("__ranges"));
	outFields->push(HX_CSTRING("__selectable"));
	outFields->push(HX_CSTRING("__selectionStart"));
	outFields->push(HX_CSTRING("__showCursor"));
	outFields->push(HX_CSTRING("__text"));
	outFields->push(HX_CSTRING("__textFormat"));
	outFields->push(HX_CSTRING("__textLayout"));
	outFields->push(HX_CSTRING("__texture"));
	outFields->push(HX_CSTRING("__tileData"));
	outFields->push(HX_CSTRING("__tileDataLength"));
	outFields->push(HX_CSTRING("__tilesheets"));
	outFields->push(HX_CSTRING("__width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__defaultTextFormat"),
	HX_CSTRING("__utf8_endline_code"),
	HX_CSTRING("ASCENDER"),
	HX_CSTRING("DESCENDER"),
	HX_CSTRING("LINE_HEIGHT"),
	HX_CSTRING("LEADING"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::AntiAliasType*/ ,(int)offsetof(TextField_obj,antiAliasType),HX_CSTRING("antiAliasType")},
	{hx::fsObject /*::openfl::text::TextFieldAutoSize*/ ,(int)offsetof(TextField_obj,autoSize),HX_CSTRING("autoSize")},
	{hx::fsBool,(int)offsetof(TextField_obj,background),HX_CSTRING("background")},
	{hx::fsInt,(int)offsetof(TextField_obj,backgroundColor),HX_CSTRING("backgroundColor")},
	{hx::fsBool,(int)offsetof(TextField_obj,border),HX_CSTRING("border")},
	{hx::fsInt,(int)offsetof(TextField_obj,borderColor),HX_CSTRING("borderColor")},
	{hx::fsInt,(int)offsetof(TextField_obj,bottomScrollV),HX_CSTRING("bottomScrollV")},
	{hx::fsInt,(int)offsetof(TextField_obj,caretIndex),HX_CSTRING("caretIndex")},
	{hx::fsInt,(int)offsetof(TextField_obj,caretPos),HX_CSTRING("caretPos")},
	{hx::fsBool,(int)offsetof(TextField_obj,displayAsPassword),HX_CSTRING("displayAsPassword")},
	{hx::fsBool,(int)offsetof(TextField_obj,embedFonts),HX_CSTRING("embedFonts")},
	{hx::fsObject /*::openfl::text::GridFitType*/ ,(int)offsetof(TextField_obj,gridFitType),HX_CSTRING("gridFitType")},
	{hx::fsInt,(int)offsetof(TextField_obj,length),HX_CSTRING("length")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxChars),HX_CSTRING("maxChars")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollH),HX_CSTRING("maxScrollH")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollV),HX_CSTRING("maxScrollV")},
	{hx::fsBool,(int)offsetof(TextField_obj,multiline),HX_CSTRING("multiline")},
	{hx::fsInt,(int)offsetof(TextField_obj,numLines),HX_CSTRING("numLines")},
	{hx::fsString,(int)offsetof(TextField_obj,restrict),HX_CSTRING("restrict")},
	{hx::fsInt,(int)offsetof(TextField_obj,scrollH),HX_CSTRING("scrollH")},
	{hx::fsInt,(int)offsetof(TextField_obj,scrollV),HX_CSTRING("scrollV")},
	{hx::fsBool,(int)offsetof(TextField_obj,selectable),HX_CSTRING("selectable")},
	{hx::fsInt,(int)offsetof(TextField_obj,selectionBeginIndex),HX_CSTRING("selectionBeginIndex")},
	{hx::fsInt,(int)offsetof(TextField_obj,selectionEndIndex),HX_CSTRING("selectionEndIndex")},
	{hx::fsFloat,(int)offsetof(TextField_obj,sharpness),HX_CSTRING("sharpness")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textHeight),HX_CSTRING("textHeight")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textWidth),HX_CSTRING("textWidth")},
	{hx::fsObject /*::openfl::text::TextFieldType*/ ,(int)offsetof(TextField_obj,type),HX_CSTRING("type")},
	{hx::fsBool,(int)offsetof(TextField_obj,wordWrap),HX_CSTRING("wordWrap")},
	{hx::fsInt,(int)offsetof(TextField_obj,__cursorPosition),HX_CSTRING("__cursorPosition")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(TextField_obj,__cursorTimer),HX_CSTRING("__cursorTimer")},
	{hx::fsBool,(int)offsetof(TextField_obj,__dirty),HX_CSTRING("__dirty")},
	{hx::fsBool,(int)offsetof(TextField_obj,__hasFocus),HX_CSTRING("__hasFocus")},
	{hx::fsFloat,(int)offsetof(TextField_obj,__height),HX_CSTRING("__height")},
	{hx::fsBool,(int)offsetof(TextField_obj,__isHTML),HX_CSTRING("__isHTML")},
	{hx::fsBool,(int)offsetof(TextField_obj,__isKeyDown),HX_CSTRING("__isKeyDown")},
	{hx::fsInt,(int)offsetof(TextField_obj,__measuredHeight),HX_CSTRING("__measuredHeight")},
	{hx::fsInt,(int)offsetof(TextField_obj,__measuredWidth),HX_CSTRING("__measuredWidth")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextField_obj,__ranges),HX_CSTRING("__ranges")},
	{hx::fsBool,(int)offsetof(TextField_obj,__selectable),HX_CSTRING("__selectable")},
	{hx::fsInt,(int)offsetof(TextField_obj,__selectionStart),HX_CSTRING("__selectionStart")},
	{hx::fsBool,(int)offsetof(TextField_obj,__showCursor),HX_CSTRING("__showCursor")},
	{hx::fsString,(int)offsetof(TextField_obj,__text),HX_CSTRING("__text")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextField_obj,__textFormat),HX_CSTRING("__textFormat")},
	{hx::fsObject /*::lime::text::TextLayout*/ ,(int)offsetof(TextField_obj,__textLayout),HX_CSTRING("__textLayout")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(TextField_obj,__texture),HX_CSTRING("__texture")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextField_obj,__tileData),HX_CSTRING("__tileData")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextField_obj,__tileDataLength),HX_CSTRING("__tileDataLength")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextField_obj,__tilesheets),HX_CSTRING("__tilesheets")},
	{hx::fsFloat,(int)offsetof(TextField_obj,__width),HX_CSTRING("__width")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("antiAliasType"),
	HX_CSTRING("autoSize"),
	HX_CSTRING("background"),
	HX_CSTRING("backgroundColor"),
	HX_CSTRING("border"),
	HX_CSTRING("borderColor"),
	HX_CSTRING("bottomScrollV"),
	HX_CSTRING("caretIndex"),
	HX_CSTRING("caretPos"),
	HX_CSTRING("displayAsPassword"),
	HX_CSTRING("embedFonts"),
	HX_CSTRING("gridFitType"),
	HX_CSTRING("length"),
	HX_CSTRING("maxChars"),
	HX_CSTRING("maxScrollH"),
	HX_CSTRING("maxScrollV"),
	HX_CSTRING("multiline"),
	HX_CSTRING("numLines"),
	HX_CSTRING("restrict"),
	HX_CSTRING("scrollH"),
	HX_CSTRING("scrollV"),
	HX_CSTRING("selectable"),
	HX_CSTRING("selectionBeginIndex"),
	HX_CSTRING("selectionEndIndex"),
	HX_CSTRING("sharpness"),
	HX_CSTRING("textHeight"),
	HX_CSTRING("textWidth"),
	HX_CSTRING("type"),
	HX_CSTRING("wordWrap"),
	HX_CSTRING("__cursorPosition"),
	HX_CSTRING("__cursorTimer"),
	HX_CSTRING("__dirty"),
	HX_CSTRING("__hasFocus"),
	HX_CSTRING("__height"),
	HX_CSTRING("__isHTML"),
	HX_CSTRING("__isKeyDown"),
	HX_CSTRING("__measuredHeight"),
	HX_CSTRING("__measuredWidth"),
	HX_CSTRING("__ranges"),
	HX_CSTRING("__selectable"),
	HX_CSTRING("__selectionStart"),
	HX_CSTRING("__showCursor"),
	HX_CSTRING("__text"),
	HX_CSTRING("__textFormat"),
	HX_CSTRING("__textLayout"),
	HX_CSTRING("__texture"),
	HX_CSTRING("__tileData"),
	HX_CSTRING("__tileDataLength"),
	HX_CSTRING("__tilesheets"),
	HX_CSTRING("__width"),
	HX_CSTRING("appendText"),
	HX_CSTRING("getCharBoundaries"),
	HX_CSTRING("getCharIndexAtPoint"),
	HX_CSTRING("getLineIndexAtPoint"),
	HX_CSTRING("getLineMetrics"),
	HX_CSTRING("getLineOffset"),
	HX_CSTRING("getLineText"),
	HX_CSTRING("getTextFormat"),
	HX_CSTRING("setSelection"),
	HX_CSTRING("setTextFormat"),
	HX_CSTRING("__clipText"),
	HX_CSTRING("__disableInputMode"),
	HX_CSTRING("__enableInputMode"),
	HX_CSTRING("__findFont"),
	HX_CSTRING("__getBounds"),
	HX_CSTRING("__getCursor"),
	HX_CSTRING("__getFont"),
	HX_CSTRING("__getFontInstance"),
	HX_CSTRING("__getLineBreaks"),
	HX_CSTRING("__getLineBreakIndeces"),
	HX_CSTRING("__getLineBreaksInRange"),
	HX_CSTRING("__getLineIndeces"),
	HX_CSTRING("__getLineWidth"),
	HX_CSTRING("__getLineMetric"),
	HX_CSTRING("__getLineMetricSubRangesNull"),
	HX_CSTRING("__getLineMetricSubRangesNotNull"),
	HX_CSTRING("__getPosition"),
	HX_CSTRING("__getTextWidth"),
	HX_CSTRING("__hitTest"),
	HX_CSTRING("__measureText"),
	HX_CSTRING("__measureTextSub"),
	HX_CSTRING("__measureTextSubRangesNull"),
	HX_CSTRING("__measureTextSubRangesNotNull"),
	HX_CSTRING("__measureTextWithDOM"),
	HX_CSTRING("__renderCanvas"),
	HX_CSTRING("__renderDOM"),
	HX_CSTRING("__renderGL"),
	HX_CSTRING("__startCursorTimer"),
	HX_CSTRING("__stopCursorTimer"),
	HX_CSTRING("set_autoSize"),
	HX_CSTRING("set_background"),
	HX_CSTRING("set_backgroundColor"),
	HX_CSTRING("set_border"),
	HX_CSTRING("set_borderColor"),
	HX_CSTRING("get_bottomScrollV"),
	HX_CSTRING("get_caretPos"),
	HX_CSTRING("get_defaultTextFormat"),
	HX_CSTRING("set_defaultTextFormat"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_htmlText"),
	HX_CSTRING("set_htmlText"),
	HX_CSTRING("get_maxScrollH"),
	HX_CSTRING("get_maxScrollV"),
	HX_CSTRING("get_numLines"),
	HX_CSTRING("set_selectable"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_textColor"),
	HX_CSTRING("set_textColor"),
	HX_CSTRING("get_textWidth"),
	HX_CSTRING("get_textHeight"),
	HX_CSTRING("set_type"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_wordWrap"),
	HX_CSTRING("set_wordWrap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
	HX_MARK_MEMBER_NAME(TextField_obj::__utf8_endline_code,"__utf8_endline_code");
	HX_MARK_MEMBER_NAME(TextField_obj::ASCENDER,"ASCENDER");
	HX_MARK_MEMBER_NAME(TextField_obj::DESCENDER,"DESCENDER");
	HX_MARK_MEMBER_NAME(TextField_obj::LINE_HEIGHT,"LINE_HEIGHT");
	HX_MARK_MEMBER_NAME(TextField_obj::LEADING,"LEADING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
	HX_VISIT_MEMBER_NAME(TextField_obj::__utf8_endline_code,"__utf8_endline_code");
	HX_VISIT_MEMBER_NAME(TextField_obj::ASCENDER,"ASCENDER");
	HX_VISIT_MEMBER_NAME(TextField_obj::DESCENDER,"DESCENDER");
	HX_VISIT_MEMBER_NAME(TextField_obj::LINE_HEIGHT,"LINE_HEIGHT");
	HX_VISIT_MEMBER_NAME(TextField_obj::LEADING,"LEADING");
};

#endif

Class TextField_obj::__mClass;

void TextField_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.text.TextField"), hx::TCanCast< TextField_obj> ,sStaticFields,sMemberFields,
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

void TextField_obj::__boot()
{
	__utf8_endline_code= (int)10;
	ASCENDER= (int)0;
	DESCENDER= (int)1;
	LINE_HEIGHT= (int)2;
	LEADING= (int)3;
}

} // end namespace openfl
} // end namespace text
