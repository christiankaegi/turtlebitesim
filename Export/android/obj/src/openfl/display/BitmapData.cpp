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
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
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
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
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
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_Memory
#include <openfl/Memory.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
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
namespace openfl{
namespace display{

Void BitmapData_obj::__construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{
HX_STACK_FRAME("openfl.display.BitmapData","new",0x7e3e4115,"openfl.display.BitmapData.new","openfl/display/BitmapData.hx",106,0xdd12d5b9)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillColor,"fillColor")
bool transparent = __o_transparent.Default(true);
int fillColor = __o_fillColor.Default(-1);
{
	HX_STACK_LINE(150)
	this->__usingFramebuffer = false;
	HX_STACK_LINE(169)
	this->transparent = transparent;
	HX_STACK_LINE(176)
	if (((width < (int)0))){
		HX_STACK_LINE(176)
		width = (int)0;
	}
	else{
		HX_STACK_LINE(176)
		width = width;
	}
	HX_STACK_LINE(177)
	if (((height < (int)0))){
		HX_STACK_LINE(177)
		height = (int)0;
	}
	else{
		HX_STACK_LINE(177)
		height = height;
	}
	HX_STACK_LINE(179)
	this->width = width;
	HX_STACK_LINE(180)
	this->height = height;
	HX_STACK_LINE(181)
	::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(181)
	this->rect = _g;
	HX_STACK_LINE(183)
	if (((bool((width > (int)0)) && bool((height > (int)0))))){
		HX_STACK_LINE(185)
		if ((transparent)){
			struct _Function_3_1{
				inline static Float Block( int &fillColor){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/BitmapData.hx",187,0xdd12d5b9)
					{
						HX_STACK_LINE(187)
						int _int = (int(fillColor) & int((int)-16777216));		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(187)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(187)
			if (((_Function_3_1::Block(fillColor) == (int)0))){
				HX_STACK_LINE(189)
				fillColor = (int)0;
			}
		}
		else{
			HX_STACK_LINE(195)
			fillColor = (int((int)-16777216) | int((int(fillColor) & int((int)16777215))));
		}
		HX_STACK_LINE(199)
		fillColor = (int((int(fillColor) << int((int)8))) | int((int((int(fillColor) >> int((int)24))) & int((int)255))));
		HX_STACK_LINE(201)
		::lime::graphics::Image _g1 = ::lime::graphics::Image_obj::__new(null(),(int)0,(int)0,width,height,fillColor,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(201)
		this->__image = _g1;
		HX_STACK_LINE(202)
		this->__image->set_transparent(transparent);
		HX_STACK_LINE(203)
		this->__isValid = true;
	}
	HX_STACK_LINE(207)
	this->__createUVs();
	HX_STACK_LINE(209)
	::openfl::geom::Matrix _g2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(209)
	this->__worldTransform = _g2;
	HX_STACK_LINE(210)
	::openfl::geom::ColorTransform _g3 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(210)
	this->__worldColorTransform = _g3;
}
;
	return null();
}

//BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{  hx::ObjectPtr< BitmapData_obj > result = new BitmapData_obj();
	result->__construct(width,height,__o_transparent,__o_fillColor);
	return result;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > result = new BitmapData_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

Void BitmapData_obj::applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("openfl.display.BitmapData","applyFilter",0xfbb98d7b,"openfl.display.BitmapData.applyFilter","openfl/display/BitmapData.hx",240,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(242)
		if (((bool((bool(!(this->__isValid)) || bool((sourceBitmapData == null())))) || bool(!(sourceBitmapData->__isValid))))){
			HX_STACK_LINE(242)
			return null();
		}
		HX_STACK_LINE(255)
		this->__image->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

::openfl::display::BitmapData BitmapData_obj::clone( ){
	HX_STACK_FRAME("openfl.display.BitmapData","clone",0xea52db52,"openfl.display.BitmapData.clone","openfl/display/BitmapData.hx",266,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(266)
	if ((!(this->__isValid))){
		HX_STACK_LINE(268)
		return ::openfl::display::BitmapData_obj::__new(this->width,this->height,this->transparent,null());
	}
	else{
		HX_STACK_LINE(272)
		::lime::graphics::Image _g = this->__image->clone();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(272)
		return ::openfl::display::BitmapData_obj::fromImage(_g,this->transparent);
	}
	HX_STACK_LINE(266)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::colorTransform( ::openfl::geom::Rectangle rect,::openfl::geom::ColorTransform colorTransform){
{
		HX_STACK_FRAME("openfl.display.BitmapData","colorTransform",0xbfe3e8f4,"openfl.display.BitmapData.colorTransform","openfl/display/BitmapData.hx",286,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_LINE(288)
		if ((!(this->__isValid))){
			HX_STACK_LINE(288)
			return null();
		}
		HX_STACK_LINE(290)
		::lime::math::Rectangle _g = rect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(290)
		::lime::utils::Float32Array _g1 = colorTransform->__toLimeColorMatrix();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(290)
		this->__image->colorTransform(_g,_g1);
		HX_STACK_LINE(291)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

Void BitmapData_obj::copyChannel( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int sourceChannel,int destChannel){
{
		HX_STACK_FRAME("openfl.display.BitmapData","copyChannel",0x5d702b43,"openfl.display.BitmapData.copyChannel","openfl/display/BitmapData.hx",339,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(341)
		if ((!(this->__isValid))){
			HX_STACK_LINE(341)
			return null();
		}
		HX_STACK_LINE(343)
		::lime::graphics::ImageChannel sourceChannel1;		HX_STACK_VAR(sourceChannel1,"sourceChannel1");
		HX_STACK_LINE(343)
		switch( (int)(sourceChannel)){
			case (int)1: {
				HX_STACK_LINE(345)
				sourceChannel1 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(346)
				sourceChannel1 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(347)
				sourceChannel1 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(348)
				sourceChannel1 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(349)
				return null();
			}
		}
		HX_STACK_LINE(353)
		::lime::graphics::ImageChannel destChannel1;		HX_STACK_VAR(destChannel1,"destChannel1");
		HX_STACK_LINE(353)
		switch( (int)(destChannel)){
			case (int)1: {
				HX_STACK_LINE(355)
				destChannel1 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(356)
				destChannel1 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(357)
				destChannel1 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(358)
				destChannel1 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(359)
				return null();
			}
		}
		HX_STACK_LINE(363)
		::lime::math::Rectangle _g = sourceRect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(363)
		::lime::math::Vector2 _g1 = destPoint->__toLimeVector2();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(363)
		this->__image->copyChannel(sourceBitmapData->__image,_g,_g1,sourceChannel1,destChannel1);
		HX_STACK_LINE(364)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::copyPixels( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::display::BitmapData alphaBitmapData,::openfl::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","copyPixels",0x385c94ad,"openfl.display.BitmapData.copyPixels","openfl/display/BitmapData.hx",408,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaBitmapData,"alphaBitmapData")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(410)
		if (((bool(!(this->__isValid)) || bool((sourceBitmapData == null()))))){
			HX_STACK_LINE(410)
			return null();
		}
		HX_STACK_LINE(412)
		::lime::math::Rectangle _g = sourceRect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(412)
		::lime::math::Vector2 _g1 = destPoint->__toLimeVector2();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(412)
		::lime::math::Vector2 _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(412)
		if (((alphaPoint != null()))){
			HX_STACK_LINE(412)
			_g2 = alphaPoint->__toLimeVector2();
		}
		else{
			HX_STACK_LINE(412)
			_g2 = null();
		}
		HX_STACK_LINE(412)
		this->__image->copyPixels(sourceBitmapData->__image,_g,_g1,(  (((alphaBitmapData != null()))) ? ::lime::graphics::Image(alphaBitmapData->__image) : ::lime::graphics::Image(null()) ),_g2,mergeAlpha);
		HX_STACK_LINE(413)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","dispose",0x8eb5efd4,"openfl.display.BitmapData.dispose","openfl/display/BitmapData.hx",436,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(438)
		this->__image = null();
		HX_STACK_LINE(440)
		this->width = (int)0;
		HX_STACK_LINE(441)
		this->height = (int)0;
		HX_STACK_LINE(442)
		this->rect = null();
		HX_STACK_LINE(443)
		this->__isValid = false;
		HX_STACK_LINE(445)
		if (((this->__texture != null()))){
			HX_STACK_LINE(446)
			::openfl::_internal::renderer::AbstractRenderer renderer = ::openfl::Lib_obj::current->stage->__renderer;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(447)
			if (((renderer != null()))){
				HX_STACK_LINE(448)
				::openfl::_internal::renderer::RenderSession renderSession = renderer->renderSession;		HX_STACK_VAR(renderSession,"renderSession");
				HX_STACK_LINE(449)
				::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
				HX_STACK_LINE(450)
				if (((gl != null()))){
					HX_STACK_LINE(451)
					::lime::graphics::opengl::GLTexture texture = this->__texture;		HX_STACK_VAR(texture,"texture");
					HX_STACK_LINE(451)
					{
						HX_STACK_LINE(451)
						::lime::graphics::opengl::GL_obj::lime_gl_delete_texture(texture->id);
						HX_STACK_LINE(451)
						texture->invalidate();
					}
				}
			}
		}
		HX_STACK_LINE(457)
		if (((this->__framebuffer != null()))){
			HX_STACK_LINE(459)
			this->__framebuffer->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::draw( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","draw",0xf1a859af,"openfl.display.BitmapData.draw","openfl/display/BitmapData.hx",538,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(540)
		if ((!(this->__isValid))){
			HX_STACK_LINE(540)
			return null();
		}
		HX_STACK_LINE(542)
		{
			HX_STACK_LINE(542)
			::lime::graphics::ImageType _g = this->__image->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(542)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(546)
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(this->__image);
					HX_STACK_LINE(547)
					::lime::graphics::utils::ImageCanvasUtil_obj::sync(this->__image);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(585)
					::openfl::_internal::renderer::RenderSession renderSession = ::openfl::Lib_obj::current->stage->__renderer->renderSession;		HX_STACK_VAR(renderSession,"renderSession");
					HX_STACK_LINE(586)
					this->__drawGL(renderSession,this->width,this->height,source,matrix,colorTransform,blendMode,clipRect,smoothing,!(this->__usingFramebuffer),false,true);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

::lime::utils::ByteArray BitmapData_obj::encode( ::openfl::geom::Rectangle rect,Dynamic compressor,::lime::utils::ByteArray byteArray){
	HX_STACK_FRAME("openfl.display.BitmapData","encode",0x09c32081,"openfl.display.BitmapData.encode","openfl/display/BitmapData.hx",598,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(compressor,"compressor")
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(602)
	if (((bool(!(this->__isValid)) || bool((rect == null()))))){
		HX_STACK_LINE(602)
		return byteArray = null();
	}
	HX_STACK_LINE(604)
	if ((::Std_obj::is(compressor,hx::ClassOf< ::openfl::display::PNGEncoderOptions >()))){
		HX_STACK_LINE(606)
		::lime::utils::ByteArray _g = this->__image->encode(HX_CSTRING("png"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(606)
		return byteArray = _g;
	}
	else{
		HX_STACK_LINE(608)
		if ((::Std_obj::is(compressor,hx::ClassOf< ::openfl::display::JPEGEncoderOptions >()))){
			HX_STACK_LINE(610)
			::lime::utils::ByteArray _g1 = this->__image->encode(HX_CSTRING("jpg"),(hx::TCast< openfl::display::JPEGEncoderOptions >::cast(compressor))->quality);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(610)
			return byteArray = _g1;
		}
	}
	HX_STACK_LINE(614)
	return byteArray = null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,encode,return )

Void BitmapData_obj::fillRect( ::openfl::geom::Rectangle rect,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","fillRect",0x95912472,"openfl.display.BitmapData.fillRect","openfl/display/BitmapData.hx",628,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(630)
		if (((bool(!(this->__isValid)) || bool((rect == null()))))){
			HX_STACK_LINE(630)
			return null();
		}
		HX_STACK_LINE(631)
		::lime::math::Rectangle _g = rect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(631)
		this->__image->fillRect(_g,color,(int)1);
		HX_STACK_LINE(632)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

Void BitmapData_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","floodFill",0xed95e9d6,"openfl.display.BitmapData.floodFill","openfl/display/BitmapData.hx",648,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(650)
		if ((!(this->__isValid))){
			HX_STACK_LINE(650)
			return null();
		}
		HX_STACK_LINE(651)
		this->__image->floodFill(x,y,color,(int)1);
		HX_STACK_LINE(652)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,floodFill,(void))

::openfl::geom::Rectangle BitmapData_obj::generateFilterRect( ::openfl::geom::Rectangle sourceRect,::openfl::filters::BitmapFilter filter){
	HX_STACK_FRAME("openfl.display.BitmapData","generateFilterRect",0x1ef8cf7c,"openfl.display.BitmapData.generateFilterRect","openfl/display/BitmapData.hx",735,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(735)
	return sourceRect->clone();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

::lime::graphics::opengl::GLBuffer BitmapData_obj::getBuffer( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getBuffer",0xe0f6acab,"openfl.display.BitmapData.getBuffer","openfl/display/BitmapData.hx",740,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(742)
	if (((this->__buffer == null()))){
		HX_STACK_LINE(744)
		Array< int > data = Array_obj< int >::__new().Add(this->width).Add(this->height).Add((int)0).Add((int)1).Add((int)1).Add((int)0).Add(this->height).Add((int)0).Add((int)0).Add((int)1).Add(this->width).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(753)
		int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(753)
		Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(753)
		::lime::graphics::opengl::GLBuffer _g2 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(753)
		this->__buffer = _g2;
		HX_STACK_LINE(754)
		{
			HX_STACK_LINE(754)
			::lime::graphics::opengl::GLBuffer buffer = this->__buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(754)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(755)
		{
			HX_STACK_LINE(755)
			::lime::utils::ArrayBufferView data1 = ::lime::utils::Float32Array_obj::__new(data,null(),null());		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(755)
			{
				HX_STACK_LINE(755)
				::lime::utils::ByteArray _g3 = data1->getByteBuffer();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(755)
				int _g4 = data1->getStart();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(755)
				int _g5 = data1->getLength();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(755)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(gl->ARRAY_BUFFER,_g3,_g4,_g5,gl->STATIC_DRAW);
			}
		}
		HX_STACK_LINE(756)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ARRAY_BUFFER,(int)0);
	}
	HX_STACK_LINE(760)
	return this->__buffer;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getBuffer,return )

::openfl::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","getColorBoundsRect",0x21495071,"openfl.display.BitmapData.getColorBoundsRect","openfl/display/BitmapData.hx",799,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
{
		HX_STACK_LINE(801)
		if ((!(this->__isValid))){
			HX_STACK_LINE(801)
			return ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);
		}
		HX_STACK_LINE(802)
		::lime::math::Rectangle rect = this->__image->getColorBoundsRect(mask,color,findColor,null());		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(803)
		return ::openfl::geom::Rectangle_obj::__new(rect->x,rect->y,rect->width,rect->height);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

int BitmapData_obj::getPixel( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel",0x4b52b53b,"openfl.display.BitmapData.getPixel","openfl/display/BitmapData.hx",831,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(833)
	if ((!(this->__isValid))){
		HX_STACK_LINE(833)
		return (int)0;
	}
	HX_STACK_LINE(834)
	return this->__image->getPixel(x,y,(int)1);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

int BitmapData_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel32",0xcd56e69a,"openfl.display.BitmapData.getPixel32","openfl/display/BitmapData.hx",861,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(863)
	if ((!(this->__isValid))){
		HX_STACK_LINE(863)
		return (int)0;
	}
	HX_STACK_LINE(864)
	return this->__image->getPixel32(x,y,(int)1);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

::lime::utils::ByteArray BitmapData_obj::getPixels( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixels",0x9d0bded8,"openfl.display.BitmapData.getPixels","openfl/display/BitmapData.hx",878,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(880)
	if ((!(this->__isValid))){
		HX_STACK_LINE(880)
		return null();
	}
	HX_STACK_LINE(881)
	if (((rect == null()))){
		HX_STACK_LINE(881)
		rect = this->rect;
	}
	HX_STACK_LINE(882)
	::lime::math::Rectangle _g = rect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(882)
	return this->__image->getPixels(_g,(int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

Dynamic BitmapData_obj::getSurface( ){
	HX_STACK_FRAME("openfl.display.BitmapData","getSurface",0xa2992c22,"openfl.display.BitmapData.getSurface","openfl/display/BitmapData.hx",887,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(889)
	if ((!(this->__isValid))){
		HX_STACK_LINE(889)
		return null();
	}
	HX_STACK_LINE(891)
	if (((this->__surface == null()))){
		HX_STACK_LINE(893)
		this->__image->dirty = true;
	}
	HX_STACK_LINE(897)
	if (((bool((this->__image != null())) && bool(this->__image->dirty)))){
		HX_STACK_LINE(899)
		if (((this->__surface != null()))){
			HX_STACK_LINE(901)
			::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::destroy(this->__surface);
		}
		HX_STACK_LINE(905)
		::lime::graphics::Image _g = this->__image->clone();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(905)
		this->__surfaceImage = _g;
		HX_STACK_LINE(906)
		this->__surfaceImage->set_format((int)2);
		HX_STACK_LINE(907)
		this->__surfaceImage->set_premultiplied(true);
		HX_STACK_LINE(908)
		Dynamic _g1 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::fromImage(this->__surfaceImage);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(908)
		this->__surface = _g1;
		HX_STACK_LINE(909)
		this->__image->dirty = false;
	}
	HX_STACK_LINE(913)
	return this->__surface;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,getSurface,return )

::lime::graphics::opengl::GLTexture BitmapData_obj::getTexture( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getTexture",0xe4308ed0,"openfl.display.BitmapData.getTexture","openfl/display/BitmapData.hx",918,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(920)
	if ((!(this->__isValid))){
		HX_STACK_LINE(920)
		return null();
	}
	HX_STACK_LINE(922)
	if (((bool(this->__usingFramebuffer) && bool((this->__framebuffer != null()))))){
		HX_STACK_LINE(923)
		return this->__framebuffer->texture;
	}
	HX_STACK_LINE(926)
	if (((this->__texture == null()))){
		HX_STACK_LINE(928)
		int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(928)
		Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(928)
		::lime::graphics::opengl::GLTexture _g2 = ::lime::graphics::opengl::GLTexture_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(928)
		this->__texture = _g2;
		HX_STACK_LINE(929)
		{
			HX_STACK_LINE(929)
			::lime::graphics::opengl::GLTexture texture = this->__texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(929)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(930)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(931)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(932)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->NEAREST);
		HX_STACK_LINE(933)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->NEAREST);
		HX_STACK_LINE(934)
		this->__image->dirty = true;
	}
	HX_STACK_LINE(938)
	if (((bool((this->__image != null())) && bool(this->__image->dirty)))){
		HX_STACK_LINE(940)
		int format;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(940)
		if (((this->__image->buffer->bitsPerPixel == (int)1))){
			HX_STACK_LINE(940)
			format = gl->ALPHA;
		}
		else{
			HX_STACK_LINE(940)
			format = gl->RGBA;
		}
		HX_STACK_LINE(941)
		{
			HX_STACK_LINE(941)
			::lime::graphics::opengl::GLTexture texture = this->__texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(941)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(942)
		::lime::graphics::Image textureImage = this->__image->clone();		HX_STACK_VAR(textureImage,"textureImage");
		HX_STACK_LINE(943)
		textureImage->set_premultiplied(true);
		HX_STACK_LINE(944)
		{
			HX_STACK_LINE(944)
			::lime::utils::ArrayBufferView pixels = textureImage->get_data();		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(944)
			{
				HX_STACK_LINE(944)
				::lime::utils::ByteArray _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(944)
				if (((pixels == null()))){
					HX_STACK_LINE(944)
					_g3 = null();
				}
				else{
					HX_STACK_LINE(944)
					_g3 = pixels->getByteBuffer();
				}
				HX_STACK_LINE(944)
				Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(944)
				if (((pixels == null()))){
					HX_STACK_LINE(944)
					_g4 = null();
				}
				else{
					HX_STACK_LINE(944)
					_g4 = pixels->getStart();
				}
				HX_STACK_LINE(944)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d(gl->TEXTURE_2D,(int)0,format,this->width,this->height,(int)0,format,gl->UNSIGNED_BYTE,_g3,_g4);
			}
		}
		HX_STACK_LINE(945)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(gl->TEXTURE_2D,(int)0);
		HX_STACK_LINE(946)
		this->__image->dirty = false;
	}
	HX_STACK_LINE(950)
	return this->__texture;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getTexture,return )

Array< int > BitmapData_obj::getVector( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getVector",0xa7bfa06e,"openfl.display.BitmapData.getVector","openfl/display/BitmapData.hx",964,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(966)
	::lime::utils::ByteArray pixels = this->getPixels(rect);		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(967)
	int length = ::Std_obj::_int((Float(pixels->length) / Float((int)4)));		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(968)
	Array< int > result;		HX_STACK_VAR(result,"result");
	struct _Function_1_1{
		inline static Array< int > Block( int &length){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/BitmapData.hx",968,0xdd12d5b9)
			{
				HX_STACK_LINE(968)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(968)
				Array< int > _g = Array_obj< int >::__new()->__SetSizeExact(length);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(968)
				this1 = _g;
				HX_STACK_LINE(968)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(968)
	result = _Function_1_1::Block(length);
	HX_STACK_LINE(970)
	{
		HX_STACK_LINE(970)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(970)
		while((true)){
			HX_STACK_LINE(970)
			if ((!(((_g < length))))){
				HX_STACK_LINE(970)
				break;
			}
			HX_STACK_LINE(970)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(972)
			{
				HX_STACK_LINE(972)
				int value = pixels->readUnsignedInt();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(972)
				result[i] = value;
			}
		}
	}
	HX_STACK_LINE(976)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

Array< ::Dynamic > BitmapData_obj::histogram( ::openfl::geom::Rectangle hRect){
	HX_STACK_FRAME("openfl.display.BitmapData","histogram",0xf93f4519,"openfl.display.BitmapData.histogram","openfl/display/BitmapData.hx",981,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hRect,"hRect")
	HX_STACK_LINE(983)
	::openfl::geom::Rectangle rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(983)
	if (((hRect != null()))){
		HX_STACK_LINE(983)
		rect = hRect;
	}
	else{
		HX_STACK_LINE(983)
		rect = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);
	}
	HX_STACK_LINE(984)
	::lime::utils::ByteArray pixels = this->getPixels(rect);		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(985)
	Array< ::Dynamic > result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(985)
	{
		HX_STACK_LINE(985)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(985)
		{
			HX_STACK_LINE(985)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(985)
			while((true)){
				HX_STACK_LINE(985)
				if ((!(((_g1 < (int)4))))){
					HX_STACK_LINE(985)
					break;
				}
				HX_STACK_LINE(985)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(985)
				Array< int > _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(985)
				{
					HX_STACK_LINE(985)
					Array< int > _g21 = Array_obj< int >::__new();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(985)
						while((true)){
							HX_STACK_LINE(985)
							if ((!(((_g3 < (int)256))))){
								HX_STACK_LINE(985)
								break;
							}
							HX_STACK_LINE(985)
							int j = (_g3)++;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(985)
							_g21->push((int)0);
						}
					}
					HX_STACK_LINE(985)
					_g2 = _g21;
				}
				HX_STACK_LINE(985)
				_g->push(_g2);
			}
		}
		HX_STACK_LINE(985)
		result = _g;
	}
	HX_STACK_LINE(987)
	{
		HX_STACK_LINE(987)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(987)
		int _g1 = pixels->length;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(987)
		while((true)){
			HX_STACK_LINE(987)
			if ((!(((_g2 < _g1))))){
				HX_STACK_LINE(987)
				break;
			}
			HX_STACK_LINE(987)
			int i = (_g2)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(989)
			int _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(989)
			if (((pixels->position < pixels->length))){
				HX_STACK_LINE(989)
				int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(989)
				_g11 = pixels->b->__get(pos);
			}
			else{
				HX_STACK_LINE(989)
				_g11 = pixels->ThrowEOFi();
			}
			HX_STACK_LINE(989)
			++(result->__get(hx::Mod(i,(int)4)).StaticCast< Array< int > >()[_g11]);
		}
	}
	HX_STACK_LINE(993)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,histogram,return )

bool BitmapData_obj::hitTest( ::openfl::geom::Point firstPoint,int firstAlphaThreshold,Dynamic secondObject,::openfl::geom::Point secondBitmapDataPoint,hx::Null< int >  __o_secondAlphaThreshold){
int secondAlphaThreshold = __o_secondAlphaThreshold.Default(1);
	HX_STACK_FRAME("openfl.display.BitmapData","hitTest",0xb5e8cf7a,"openfl.display.BitmapData.hitTest","openfl/display/BitmapData.hx",998,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(firstPoint,"firstPoint")
	HX_STACK_ARG(firstAlphaThreshold,"firstAlphaThreshold")
	HX_STACK_ARG(secondObject,"secondObject")
	HX_STACK_ARG(secondBitmapDataPoint,"secondBitmapDataPoint")
	HX_STACK_ARG(secondAlphaThreshold,"secondAlphaThreshold")
{
		HX_STACK_LINE(1000)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1000)
			return false;
		}
		HX_STACK_LINE(1002)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("BitmapData.hitTest"));
		HX_STACK_LINE(1004)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,hitTest,return )

Void BitmapData_obj::lock( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","lock",0xf6efc996,"openfl.display.BitmapData.lock","openfl/display/BitmapData.hx",1017,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("openfl.display.BitmapData","merge",0xa7b66aad,"openfl.display.BitmapData.merge","openfl/display/BitmapData.hx",1024,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(1026)
		if (((bool((bool((bool((bool(!(this->__isValid)) || bool((sourceBitmapData == null())))) || bool(!(sourceBitmapData->__isValid)))) || bool((sourceRect == null())))) || bool((destPoint == null()))))){
			HX_STACK_LINE(1026)
			return null();
		}
		HX_STACK_LINE(1027)
		::lime::math::Rectangle _g = sourceRect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1027)
		::lime::math::Vector2 _g1 = destPoint->__toLimeVector2();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1027)
		this->__image->merge(sourceBitmapData->__image,_g,_g1,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
		HX_STACK_LINE(1028)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,merge,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","noise",0x41b2578f,"openfl.display.BitmapData.noise","openfl/display/BitmapData.hx",1061,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
{
		HX_STACK_LINE(1063)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1063)
			return null();
		}
		HX_STACK_LINE(1065)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("BitmapData.noise"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

Void BitmapData_obj::paletteMap( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","paletteMap",0xfc19eecc,"openfl.display.BitmapData.paletteMap","openfl/display/BitmapData.hx",1070,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redArray,"redArray")
		HX_STACK_ARG(greenArray,"greenArray")
		HX_STACK_ARG(blueArray,"blueArray")
		HX_STACK_ARG(alphaArray,"alphaArray")
		HX_STACK_LINE(1072)
		int sw = ::Std_obj::_int(sourceRect->width);		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(1073)
		int sh = ::Std_obj::_int(sourceRect->height);		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(1075)
		::lime::utils::ByteArray pixels = this->getPixels(sourceRect);		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(1076)
		pixels->position = (int)0;
		HX_STACK_LINE(1078)
		int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
		HX_STACK_LINE(1078)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(1078)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(1078)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1078)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1078)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(1078)
		int c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(1078)
		int c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(1078)
		int c3;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(1078)
		int c4;		HX_STACK_VAR(c4,"c4");
		HX_STACK_LINE(1080)
		{
			HX_STACK_LINE(1080)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1080)
			int _g = (sh * sw);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1080)
			while((true)){
				HX_STACK_LINE(1080)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(1080)
					break;
				}
				HX_STACK_LINE(1080)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1082)
				int _g2 = pixels->readUnsignedInt();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1082)
				pixelValue = _g2;
				HX_STACK_LINE(1084)
				if (((alphaArray == null()))){
					HX_STACK_LINE(1084)
					c1 = (int(pixelValue) & int((int)-16777216));
				}
				else{
					HX_STACK_LINE(1084)
					c1 = alphaArray->__get((int((int(pixelValue) >> int((int)24))) & int((int)255)));
				}
				HX_STACK_LINE(1085)
				if (((redArray == null()))){
					HX_STACK_LINE(1085)
					c2 = (int(pixelValue) & int((int)16711680));
				}
				else{
					HX_STACK_LINE(1085)
					c2 = redArray->__get((int((int(pixelValue) >> int((int)16))) & int((int)255)));
				}
				HX_STACK_LINE(1086)
				if (((greenArray == null()))){
					HX_STACK_LINE(1086)
					c3 = (int(pixelValue) & int((int)65280));
				}
				else{
					HX_STACK_LINE(1086)
					c3 = greenArray->__get((int((int(pixelValue) >> int((int)8))) & int((int)255)));
				}
				HX_STACK_LINE(1087)
				if (((blueArray == null()))){
					HX_STACK_LINE(1087)
					c4 = (int(pixelValue) & int((int)255));
				}
				else{
					HX_STACK_LINE(1087)
					c4 = blueArray->__get((int(pixelValue) & int((int)255)));
				}
				HX_STACK_LINE(1089)
				a = (((((int((int(c1) >> int((int)24))) & int((int)255))) + ((int((int(c2) >> int((int)24))) & int((int)255)))) + ((int((int(c3) >> int((int)24))) & int((int)255)))) + ((int((int(c4) >> int((int)24))) & int((int)255))));
				HX_STACK_LINE(1090)
				if (((a > (int)255))){
					HX_STACK_LINE(1090)
					(a == (int)255);
				}
				HX_STACK_LINE(1092)
				r = (((((int((int(c1) >> int((int)16))) & int((int)255))) + ((int((int(c2) >> int((int)16))) & int((int)255)))) + ((int((int(c3) >> int((int)16))) & int((int)255)))) + ((int((int(c4) >> int((int)16))) & int((int)255))));
				HX_STACK_LINE(1093)
				if (((r > (int)255))){
					HX_STACK_LINE(1093)
					(r == (int)255);
				}
				HX_STACK_LINE(1095)
				g = (((((int((int(c1) >> int((int)8))) & int((int)255))) + ((int((int(c2) >> int((int)8))) & int((int)255)))) + ((int((int(c3) >> int((int)8))) & int((int)255)))) + ((int((int(c4) >> int((int)8))) & int((int)255))));
				HX_STACK_LINE(1096)
				if (((g > (int)255))){
					HX_STACK_LINE(1096)
					(g == (int)255);
				}
				HX_STACK_LINE(1098)
				b = (((((int(c1) & int((int)255))) + ((int(c2) & int((int)255)))) + ((int(c3) & int((int)255)))) + ((int(c4) & int((int)255))));
				HX_STACK_LINE(1099)
				if (((b > (int)255))){
					HX_STACK_LINE(1099)
					(b == (int)255);
				}
				HX_STACK_LINE(1101)
				color = (int((int((int((int(a) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
				HX_STACK_LINE(1103)
				pixels->position = (i * (int)4);
				HX_STACK_LINE(1104)
				pixels->writeUnsignedInt(color);
			}
		}
		HX_STACK_LINE(1108)
		pixels->position = (int)0;
		HX_STACK_LINE(1109)
		::openfl::geom::Rectangle destRect = ::openfl::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);		HX_STACK_VAR(destRect,"destRect");
		HX_STACK_LINE(1110)
		this->setPixels(destRect,pixels);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,paletteMap,(void))

Void BitmapData_obj::perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::Dynamic > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","perlinNoise",0xc682321b,"openfl.display.BitmapData.perlinNoise","openfl/display/BitmapData.hx",1183,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseX,"baseX")
	HX_STACK_ARG(baseY,"baseY")
	HX_STACK_ARG(numOctaves,"numOctaves")
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(stitch,"stitch")
	HX_STACK_ARG(fractalNoise,"fractalNoise")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
	HX_STACK_ARG(offsets,"offsets")
{
		HX_STACK_LINE(1183)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("BitmapData.perlinNoise"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("openfl.display.BitmapData","scroll",0x57440678,"openfl.display.BitmapData.scroll","openfl/display/BitmapData.hx",1197,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1197)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("BitmapData.scroll"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel",0xf9b00eaf,"openfl.display.BitmapData.setPixel","openfl/display/BitmapData.hx",1219,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1221)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1221)
			return null();
		}
		HX_STACK_LINE(1222)
		this->__image->setPixel(x,y,color,(int)1);
		HX_STACK_LINE(1223)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel32",0xd0d4850e,"openfl.display.BitmapData.setPixel32","openfl/display/BitmapData.hx",1259,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1261)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1261)
			return null();
		}
		HX_STACK_LINE(1262)
		this->__image->setPixel32(x,y,color,(int)1);
		HX_STACK_LINE(1263)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixels( ::openfl::geom::Rectangle rect,::lime::utils::ByteArray byteArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixels",0x805ccae4,"openfl.display.BitmapData.setPixels","openfl/display/BitmapData.hx",1287,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_LINE(1289)
		if (((bool(!(this->__isValid)) || bool((rect == null()))))){
			HX_STACK_LINE(1289)
			return null();
		}
		HX_STACK_LINE(1290)
		::lime::math::Rectangle _g = rect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1290)
		this->__image->setPixels(_g,byteArray,(int)1);
		HX_STACK_LINE(1291)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setVector( ::openfl::geom::Rectangle rect,Array< int > inputVector){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setVector",0x8b108c7a,"openfl.display.BitmapData.setVector","openfl/display/BitmapData.hx",1305,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(inputVector,"inputVector")
		HX_STACK_LINE(1307)
		::lime::utils::ByteArray byteArray = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(byteArray,"byteArray");
		HX_STACK_LINE(1312)
		{
			HX_STACK_LINE(1312)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1312)
			while((true)){
				HX_STACK_LINE(1312)
				if ((!(((_g < inputVector->length))))){
					HX_STACK_LINE(1312)
					break;
				}
				HX_STACK_LINE(1312)
				Dynamic color = inputVector->__get(_g);		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(1312)
				++(_g);
				HX_STACK_LINE(1314)
				byteArray->writeUnsignedInt(color);
			}
		}
		HX_STACK_LINE(1318)
		byteArray->position = (int)0;
		HX_STACK_LINE(1319)
		this->setPixels(rect,byteArray);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

int BitmapData_obj::threshold( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","threshold",0xc8af2a20,"openfl.display.BitmapData.threshold","openfl/display/BitmapData.hx",1376,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		HX_STACK_LINE(1376)
		if (((  (((  (((  (((sourceBitmapData == hx::ObjectPtr<OBJ_>(this)))) ? bool(sourceRect->equals(this->rect)) : bool(false) ))) ? bool((destPoint->x == (int)0)) : bool(false) ))) ? bool((destPoint->y == (int)0)) : bool(false) ))){
			HX_STACK_LINE(1378)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1380)
			threshold = (int((int((int((int(((int(threshold) & int((int)255)))) << int((int)24))) | int((int(((int((int(threshold) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(threshold) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(threshold) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(1381)
			color = (int((int((int((int(((int(color) & int((int)255)))) << int((int)24))) | int((int(((int((int(color) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(color) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(color) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(1383)
			::lime::utils::ByteArray memory = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1387)
			::lime::utils::ByteArray _g = this->getPixels(this->rect);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1387)
			memory = _g;
			HX_STACK_LINE(1388)
			memory->position = (int)0;
			HX_STACK_LINE(1389)
			::openfl::Memory_obj::select(memory);
			HX_STACK_LINE(1391)
			int thresholdMask = (int(threshold) & int(mask));		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1393)
			int width_yy;		HX_STACK_VAR(width_yy,"width_yy");
			HX_STACK_LINE(1393)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1393)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1393)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1393)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1393)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1395)
			{
				HX_STACK_LINE(1395)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1395)
				int _g2 = this->height;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1395)
				while((true)){
					HX_STACK_LINE(1395)
					if ((!(((_g1 < _g2))))){
						HX_STACK_LINE(1395)
						break;
					}
					HX_STACK_LINE(1395)
					int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1397)
					width_yy = (this->width * yy);
					HX_STACK_LINE(1399)
					{
						HX_STACK_LINE(1399)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1399)
						int _g21 = this->width;		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(1399)
						while((true)){
							HX_STACK_LINE(1399)
							if ((!(((_g3 < _g21))))){
								HX_STACK_LINE(1399)
								break;
							}
							HX_STACK_LINE(1399)
							int xx = (_g3)++;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1401)
							position = (((width_yy + xx)) * (int)4);

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1402,0xdd12d5b9)
								{
									HX_STACK_LINE(1402)
									return ::openfl::Memory_obj::gcRef->readInt();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1402)
							int _g11 = ::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_6_1()));		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(1402)
							pixelValue = _g11;
							HX_STACK_LINE(1403)
							pixelMask = (int(pixelValue) & int(mask));
							HX_STACK_LINE(1405)
							int _g22 = ::openfl::display::BitmapData_obj::__ucompare(pixelMask,thresholdMask);		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(1405)
							i = _g22;
							HX_STACK_LINE(1406)
							test = false;
							HX_STACK_LINE(1408)
							if (((operation == HX_CSTRING("==")))){
								HX_STACK_LINE(1408)
								test = (i == (int)0);
							}
							else{
								HX_STACK_LINE(1409)
								if (((operation == HX_CSTRING("<")))){
									HX_STACK_LINE(1409)
									test = (i == (int)-1);
								}
								else{
									HX_STACK_LINE(1410)
									if (((operation == HX_CSTRING(">")))){
										HX_STACK_LINE(1410)
										test = (i == (int)1);
									}
									else{
										HX_STACK_LINE(1411)
										if (((operation == HX_CSTRING("!=")))){
											HX_STACK_LINE(1411)
											test = (i != (int)0);
										}
										else{
											HX_STACK_LINE(1412)
											if (((operation == HX_CSTRING("<=")))){
												HX_STACK_LINE(1412)
												test = (bool((i == (int)0)) || bool((i == (int)-1)));
											}
											else{
												HX_STACK_LINE(1413)
												if (((operation == HX_CSTRING(">=")))){
													HX_STACK_LINE(1413)
													test = (bool((i == (int)0)) || bool((i == (int)1)));
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1415)
							if ((test)){
								HX_STACK_LINE(1417)
								{
									HX_STACK_LINE(1417)
									Array< int > v = Array_obj< int >::__new().Add(color);		HX_STACK_VAR(v,"v");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,Array< int >,v)
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1417,0xdd12d5b9)
										{
											HX_STACK_LINE(1417)
											::openfl::Memory_obj::gcRef->writeInt(v->__get((int)0));
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1417)
									::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1418)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1426)
			memory->position = (int)0;
			HX_STACK_LINE(1427)
			this->setPixels(this->rect,memory);
			HX_STACK_LINE(1428)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1429)
			return hits;
		}
		else{
			HX_STACK_LINE(1433)
			int sx = ::Std_obj::_int(sourceRect->x);		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(1434)
			int sy = ::Std_obj::_int(sourceRect->y);		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(1435)
			int sw = ::Std_obj::_int(sourceBitmapData->width);		HX_STACK_VAR(sw,"sw");
			HX_STACK_LINE(1436)
			int sh = ::Std_obj::_int(sourceBitmapData->height);		HX_STACK_VAR(sh,"sh");
			HX_STACK_LINE(1438)
			int dx = ::Std_obj::_int(destPoint->x);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(1439)
			int dy = ::Std_obj::_int(destPoint->y);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(1441)
			int bw = ((this->width - sw) - dx);		HX_STACK_VAR(bw,"bw");
			HX_STACK_LINE(1442)
			int bh = ((this->height - sh) - dy);		HX_STACK_VAR(bh,"bh");
			HX_STACK_LINE(1444)
			int dw;		HX_STACK_VAR(dw,"dw");
			HX_STACK_LINE(1444)
			if (((bw < (int)0))){
				HX_STACK_LINE(1444)
				dw = (sw + (((this->width - sw) - dx)));
			}
			else{
				HX_STACK_LINE(1444)
				dw = sw;
			}
			HX_STACK_LINE(1445)
			int dh;		HX_STACK_VAR(dh,"dh");
			HX_STACK_LINE(1445)
			if (((bw < (int)0))){
				HX_STACK_LINE(1445)
				dh = (sh + (((this->height - sh) - dy)));
			}
			else{
				HX_STACK_LINE(1445)
				dh = sh;
			}
			HX_STACK_LINE(1447)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1449)
			threshold = (int((int((int((int(((int(threshold) & int((int)255)))) << int((int)24))) | int((int(((int((int(threshold) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(threshold) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(threshold) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(1450)
			color = (int((int((int((int(((int(color) & int((int)255)))) << int((int)24))) | int((int(((int((int(color) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(color) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(color) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(1452)
			int canvasMemory = ((sw * sh) * (int)4);		HX_STACK_VAR(canvasMemory,"canvasMemory");
			HX_STACK_LINE(1453)
			int sourceMemory = (int)0;		HX_STACK_VAR(sourceMemory,"sourceMemory");
			HX_STACK_LINE(1455)
			if ((copySource)){
				HX_STACK_LINE(1457)
				sourceMemory = ((sw * sh) * (int)4);
			}
			HX_STACK_LINE(1461)
			int totalMemory = (canvasMemory + sourceMemory);		HX_STACK_VAR(totalMemory,"totalMemory");
			HX_STACK_LINE(1462)
			::lime::utils::ByteArray memory = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1466)
			memory->position = (int)0;
			HX_STACK_LINE(1467)
			::openfl::display::BitmapData bitmapData = sourceBitmapData->clone();		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(1468)
			::lime::utils::ByteArray pixels = bitmapData->getPixels(sourceRect);		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(1469)
			memory->writeBytes(pixels,null(),null());
			HX_STACK_LINE(1470)
			memory->position = canvasMemory;
			HX_STACK_LINE(1472)
			if ((copySource)){
				HX_STACK_LINE(1474)
				memory->writeBytes(pixels,null(),null());
			}
			HX_STACK_LINE(1478)
			memory->position = (int)0;
			HX_STACK_LINE(1479)
			::openfl::Memory_obj::select(memory);
			HX_STACK_LINE(1481)
			int thresholdMask = (int(threshold) & int(mask));		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1483)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1483)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1483)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1483)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1483)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1485)
			{
				HX_STACK_LINE(1485)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1485)
				while((true)){
					HX_STACK_LINE(1485)
					if ((!(((_g < dh))))){
						HX_STACK_LINE(1485)
						break;
					}
					HX_STACK_LINE(1485)
					int yy = (_g)++;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1487)
					{
						HX_STACK_LINE(1487)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1487)
						while((true)){
							HX_STACK_LINE(1487)
							if ((!(((_g1 < dw))))){
								HX_STACK_LINE(1487)
								break;
							}
							HX_STACK_LINE(1487)
							int xx = (_g1)++;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1489)
							position = ((((xx + sx) + (((yy + sy)) * sw))) * (int)4);

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1490,0xdd12d5b9)
								{
									HX_STACK_LINE(1490)
									return ::openfl::Memory_obj::gcRef->readInt();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1490)
							int _g3 = ::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_6_1()));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(1490)
							pixelValue = _g3;
							HX_STACK_LINE(1491)
							pixelMask = (int(pixelValue) & int(mask));
							HX_STACK_LINE(1493)
							int _g4 = ::openfl::display::BitmapData_obj::__ucompare(pixelMask,thresholdMask);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(1493)
							i = _g4;
							HX_STACK_LINE(1494)
							test = false;
							HX_STACK_LINE(1496)
							if (((operation == HX_CSTRING("==")))){
								HX_STACK_LINE(1496)
								test = (i == (int)0);
							}
							else{
								HX_STACK_LINE(1497)
								if (((operation == HX_CSTRING("<")))){
									HX_STACK_LINE(1497)
									test = (i == (int)-1);
								}
								else{
									HX_STACK_LINE(1498)
									if (((operation == HX_CSTRING(">")))){
										HX_STACK_LINE(1498)
										test = (i == (int)1);
									}
									else{
										HX_STACK_LINE(1499)
										if (((operation == HX_CSTRING("!=")))){
											HX_STACK_LINE(1499)
											test = (i != (int)0);
										}
										else{
											HX_STACK_LINE(1500)
											if (((operation == HX_CSTRING("<=")))){
												HX_STACK_LINE(1500)
												test = (bool((i == (int)0)) || bool((i == (int)-1)));
											}
											else{
												HX_STACK_LINE(1501)
												if (((operation == HX_CSTRING(">=")))){
													HX_STACK_LINE(1501)
													test = (bool((i == (int)0)) || bool((i == (int)1)));
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1503)
							if ((test)){
								HX_STACK_LINE(1505)
								{
									HX_STACK_LINE(1505)
									Array< int > v = Array_obj< int >::__new().Add(color);		HX_STACK_VAR(v,"v");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,Array< int >,v)
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1505,0xdd12d5b9)
										{
											HX_STACK_LINE(1505)
											::openfl::Memory_obj::gcRef->writeInt(v->__get((int)0));
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1505)
									::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1506)
								(hits)++;
							}
							else{
								HX_STACK_LINE(1508)
								if ((copySource)){

									HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_8_1)
									int run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1510,0xdd12d5b9)
										{
											HX_STACK_LINE(1510)
											return ::openfl::Memory_obj::gcRef->readInt();
										}
										return null();
									}
									HX_END_LOCAL_FUNC0(return)

									HX_STACK_LINE(1510)
									Array< int > v = Array_obj< int >::__new().Add(::openfl::Memory_obj::_setPositionTemporarily((canvasMemory + position), Dynamic(new _Function_8_1())));		HX_STACK_VAR(v,"v");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,Array< int >,v)
									Void run(){
										HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","openfl/display/BitmapData.hx",1510,0xdd12d5b9)
										{
											HX_STACK_LINE(1510)
											::openfl::Memory_obj::gcRef->writeInt(v->__get((int)0));
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1510)
									::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_8_2(v)));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(1518)
			memory->position = (int)0;
			HX_STACK_LINE(1519)
			bitmapData->setPixels(sourceRect,memory);
			HX_STACK_LINE(1520)
			this->copyPixels(bitmapData,bitmapData->rect,destPoint,null(),null(),null());
			HX_STACK_LINE(1521)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1522)
			return hits;
		}
		HX_STACK_LINE(1376)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

Void BitmapData_obj::unlock( ::openfl::geom::Rectangle changeRect){
{
		HX_STACK_FRAME("openfl.display.BitmapData","unlock",0x756bd12f,"openfl.display.BitmapData.unlock","openfl/display/BitmapData.hx",1541,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changeRect,"changeRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

Void BitmapData_obj::__createUVs( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__createUVs",0xb29ce00b,"openfl.display.BitmapData.__createUVs","openfl/display/BitmapData.hx",1548,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1550)
		if (((this->__uvData == null()))){
			HX_STACK_LINE(1550)
			::openfl::display::TextureUvs _g = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1550)
			this->__uvData = _g;
		}
		HX_STACK_LINE(1552)
		this->__uvData->x0 = (int)0;
		HX_STACK_LINE(1553)
		this->__uvData->y0 = (int)0;
		HX_STACK_LINE(1554)
		this->__uvData->x1 = (int)1;
		HX_STACK_LINE(1555)
		this->__uvData->y1 = (int)0;
		HX_STACK_LINE(1556)
		this->__uvData->x2 = (int)1;
		HX_STACK_LINE(1557)
		this->__uvData->y2 = (int)1;
		HX_STACK_LINE(1558)
		this->__uvData->x3 = (int)0;
		HX_STACK_LINE(1559)
		this->__uvData->y3 = (int)1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__createUVs,(void))

Void BitmapData_obj::__drawGL( ::openfl::_internal::renderer::RenderSession renderSession,int width,int height,::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_drawSelf,hx::Null< bool >  __o_clearBuffer,hx::Null< bool >  __o_readPixels){
bool smoothing = __o_smoothing.Default(false);
bool drawSelf = __o_drawSelf.Default(false);
bool clearBuffer = __o_clearBuffer.Default(false);
bool readPixels = __o_readPixels.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","__drawGL",0xb0ddbd74,"openfl.display.BitmapData.__drawGL","openfl/display/BitmapData.hx",1564,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(drawSelf,"drawSelf")
	HX_STACK_ARG(clearBuffer,"clearBuffer")
	HX_STACK_ARG(readPixels,"readPixels")
{
		HX_STACK_LINE(1566)
		::openfl::_internal::renderer::AbstractRenderer renderer = ::openfl::Lib_obj::current->stage->__renderer;		HX_STACK_VAR(renderer,"renderer");
		HX_STACK_LINE(1567)
		if (((renderer == null()))){
			HX_STACK_LINE(1567)
			return null();
		}
		HX_STACK_LINE(1569)
		::openfl::_internal::renderer::RenderSession renderSession1 = renderer->renderSession;		HX_STACK_VAR(renderSession1,"renderSession1");
		HX_STACK_LINE(1570)
		::lime::graphics::GLRenderContext gl = renderSession1->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(1571)
		if (((gl == null()))){
			HX_STACK_LINE(1571)
			return null();
		}
		HX_STACK_LINE(1573)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spritebatch = renderSession1->spriteBatch;		HX_STACK_VAR(spritebatch,"spritebatch");
		HX_STACK_LINE(1574)
		bool renderTransparent = renderSession1->renderer->transparent;		HX_STACK_VAR(renderTransparent,"renderTransparent");
		HX_STACK_LINE(1576)
		::openfl::geom::Rectangle tmpRect;		HX_STACK_VAR(tmpRect,"tmpRect");
		HX_STACK_LINE(1576)
		if (((clipRect == null()))){
			HX_STACK_LINE(1576)
			tmpRect = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);
		}
		else{
			HX_STACK_LINE(1576)
			tmpRect = clipRect->clone();
		}
		HX_STACK_LINE(1578)
		renderSession1->renderer->transparent = this->transparent;
		HX_STACK_LINE(1580)
		if (((this->__framebuffer == null()))){
			HX_STACK_LINE(1582)
			::openfl::_internal::renderer::opengl::utils::FilterTexture _g = ::openfl::_internal::renderer::opengl::utils::FilterTexture_obj::__new(gl,width,height,smoothing);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1582)
			this->__framebuffer = _g;
		}
		HX_STACK_LINE(1586)
		this->__framebuffer->resize(width,height);
		HX_STACK_LINE(1587)
		{
			HX_STACK_LINE(1587)
			::lime::graphics::opengl::GLFramebuffer framebuffer = this->__framebuffer->frameBuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(1587)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(gl->FRAMEBUFFER,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
		}
		HX_STACK_LINE(1589)
		renderer->setViewport((int)0,(int)0,width,height);
		HX_STACK_LINE(1591)
		spritebatch->begin(renderSession1,(  ((drawSelf)) ? ::openfl::geom::Rectangle(null()) : ::openfl::geom::Rectangle(tmpRect) ));
		HX_STACK_LINE(1594)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,true);
		HX_STACK_LINE(1595)
		renderSession1->blendModeManager->setBlendMode(::openfl::display::BlendMode_obj::NORMAL,null());
		HX_STACK_LINE(1597)
		renderSession1->shaderManager->setShader(renderSession1->shaderManager->defaultShader,true);
		HX_STACK_LINE(1599)
		if (((bool(clearBuffer) || bool(drawSelf)))){
			HX_STACK_LINE(1601)
			this->__framebuffer->clear();
		}
		HX_STACK_LINE(1605)
		if ((drawSelf)){
			HX_STACK_LINE(1607)
			this->__worldTransform->identity();
			HX_STACK_LINE(1608)
			{
				HX_STACK_LINE(1608)
				::openfl::geom::Matrix m = this->__worldTransform;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1608)
				Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(1608)
				Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(1608)
				m->tx = (int)0;
				HX_STACK_LINE(1608)
				m->ty = (int)0;
				HX_STACK_LINE(1608)
				m->scale((int)1,(int)-1);
				HX_STACK_LINE(1608)
				m->translate((int)0,this->height);
				HX_STACK_LINE(1608)
				hx::AddEq(m->tx,tx);
				HX_STACK_LINE(1608)
				hx::SubEq(m->ty,ty);
			}
			HX_STACK_LINE(1609)
			this->__renderGL(renderSession1);
			HX_STACK_LINE(1610)
			spritebatch->stop();
			HX_STACK_LINE(1611)
			{
				HX_STACK_LINE(1611)
				::lime::graphics::opengl::GLTexture texture = this->__texture;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(1611)
				{
					HX_STACK_LINE(1611)
					::lime::graphics::opengl::GL_obj::lime_gl_delete_texture(texture->id);
					HX_STACK_LINE(1611)
					texture->invalidate();
				}
			}
			HX_STACK_LINE(1612)
			spritebatch->start(tmpRect);
		}
		HX_STACK_LINE(1616)
		::openfl::geom::ColorTransform ctCache = source->__Field(HX_CSTRING("__worldColorTransform"),true);		HX_STACK_VAR(ctCache,"ctCache");
		HX_STACK_LINE(1617)
		::openfl::geom::Matrix matrixCache = source->__Field(HX_CSTRING("__worldTransform"),true);		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(1618)
		::openfl::display::BlendMode blendModeCache = source->__Field(HX_CSTRING("blendMode"),true);		HX_STACK_VAR(blendModeCache,"blendModeCache");
		HX_STACK_LINE(1619)
		bool cached = source->__Field(HX_CSTRING("__cacheAsBitmap"),true);		HX_STACK_VAR(cached,"cached");
		HX_STACK_LINE(1621)
		::openfl::geom::Matrix m;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(1621)
		if (((matrix != null()))){
			HX_STACK_LINE(1621)
			m = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);
		}
		else{
			HX_STACK_LINE(1621)
			m = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(1623)
		{
			HX_STACK_LINE(1623)
			Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(1623)
			Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(1623)
			m->tx = (int)0;
			HX_STACK_LINE(1623)
			m->ty = (int)0;
			HX_STACK_LINE(1623)
			m->scale((int)1,(int)-1);
			HX_STACK_LINE(1623)
			m->translate((int)0,this->height);
			HX_STACK_LINE(1623)
			hx::AddEq(m->tx,tx);
			HX_STACK_LINE(1623)
			hx::SubEq(m->ty,ty);
		}
		HX_STACK_LINE(1625)
		source->__FieldRef(HX_CSTRING("__worldTransform")) = m;
		HX_STACK_LINE(1626)
		::openfl::geom::ColorTransform _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1626)
		if (((colorTransform != null()))){
			HX_STACK_LINE(1626)
			_g1 = colorTransform;
		}
		else{
			HX_STACK_LINE(1626)
			_g1 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(1626)
		source->__FieldRef(HX_CSTRING("__worldColorTransform")) = _g1;
		HX_STACK_LINE(1627)
		source->__FieldRef(HX_CSTRING("blendMode")) = blendMode;
		HX_STACK_LINE(1628)
		source->__FieldRef(HX_CSTRING("__cacheAsBitmap")) = false;
		HX_STACK_LINE(1630)
		source->__updateChildren(false);
		HX_STACK_LINE(1632)
		source->__renderGL(renderSession1);
		HX_STACK_LINE(1634)
		source->__FieldRef(HX_CSTRING("__worldColorTransform")) = ctCache;
		HX_STACK_LINE(1635)
		source->__FieldRef(HX_CSTRING("__worldTransform")) = matrixCache;
		HX_STACK_LINE(1636)
		source->__FieldRef(HX_CSTRING("blendMode")) = blendModeCache;
		HX_STACK_LINE(1637)
		source->__FieldRef(HX_CSTRING("__cacheAsBitmap")) = cached;
		HX_STACK_LINE(1639)
		source->__updateChildren(true);
		HX_STACK_LINE(1641)
		spritebatch->finish();
		HX_STACK_LINE(1643)
		if ((readPixels)){
			HX_STACK_LINE(1646)
			if (((bool((this->__image->width != width)) || bool((this->__image->height != height))))){
				HX_STACK_LINE(1648)
				this->__image->resize(width,height);
			}
			HX_STACK_LINE(1652)
			{
				HX_STACK_LINE(1652)
				::lime::utils::ArrayBufferView pixels = this->__image->buffer->data;		HX_STACK_VAR(pixels,"pixels");
				HX_STACK_LINE(1652)
				{
					HX_STACK_LINE(1652)
					::lime::utils::ByteArray _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1652)
					if (((pixels == null()))){
						HX_STACK_LINE(1652)
						_g2 = null();
					}
					else{
						HX_STACK_LINE(1652)
						_g2 = pixels->getByteBuffer();
					}
					HX_STACK_LINE(1652)
					Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1652)
					if (((pixels == null()))){
						HX_STACK_LINE(1652)
						_g3 = null();
					}
					else{
						HX_STACK_LINE(1652)
						_g3 = pixels->getStart();
					}
					HX_STACK_LINE(1652)
					::lime::graphics::opengl::GL_obj::lime_gl_read_pixels((int)0,(int)0,width,height,gl->RGBA,gl->UNSIGNED_BYTE,_g2,_g3);
				}
			}
		}
		HX_STACK_LINE(1656)
		{
			HX_STACK_LINE(1656)
			::lime::graphics::opengl::GLFramebuffer framebuffer = renderSession1->defaultFramebuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(1656)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(gl->FRAMEBUFFER,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
		}
		HX_STACK_LINE(1658)
		renderer->setViewport((int)0,(int)0,renderSession1->renderer->width,renderSession1->renderer->height);
		HX_STACK_LINE(1660)
		renderSession1->renderer->transparent = renderTransparent;
		HX_STACK_LINE(1662)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,renderSession1->renderer->transparent);
		HX_STACK_LINE(1664)
		this->__usingFramebuffer = true;
		HX_STACK_LINE(1666)
		if (((this->__image != null()))){
			HX_STACK_LINE(1668)
			this->__image->dirty = false;
			HX_STACK_LINE(1669)
			this->__image->set_premultiplied(true);
		}
		HX_STACK_LINE(1673)
		this->__createUVs();
		HX_STACK_LINE(1674)
		this->__isValid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(BitmapData_obj,__drawGL,(void))

Void BitmapData_obj::__flipMatrix( ::openfl::geom::Matrix m){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__flipMatrix",0x69774899,"openfl.display.BitmapData.__flipMatrix","openfl/display/BitmapData.hx",1679,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(1681)
		Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(1682)
		Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(1683)
		m->tx = (int)0;
		HX_STACK_LINE(1684)
		m->ty = (int)0;
		HX_STACK_LINE(1685)
		m->scale((int)1,(int)-1);
		HX_STACK_LINE(1686)
		m->translate((int)0,this->height);
		HX_STACK_LINE(1687)
		hx::AddEq(m->tx,tx);
		HX_STACK_LINE(1688)
		hx::SubEq(m->ty,ty);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__flipMatrix,(void))

Void BitmapData_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBase64",0xceedce64,"openfl.display.BitmapData.__fromBase64","openfl/display/BitmapData.hx",1700,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1700)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(1700)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1702,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1704)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(1706)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(1708)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1702)
		::lime::graphics::Image_obj::fromBase64(base64,type, Dynamic(new _Function_1_1(_g,onload1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBase64,(void))

Void BitmapData_obj::__fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBytes",0xdad6e936,"openfl.display.BitmapData.__fromBytes","openfl/display/BitmapData.hx",1717,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(rawAlpha,"rawAlpha")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1717)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(1717)
		Array< ::Dynamic > rawAlpha1 = Array_obj< ::Dynamic >::__new().Add(rawAlpha);		HX_STACK_VAR(rawAlpha1,"rawAlpha1");
		HX_STACK_LINE(1717)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,rawAlpha1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1719,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1721)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(1723)
				if (((rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >() != null()))){
					HX_STACK_LINE(1730)
					::lime::utils::UInt8Array data = _g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__image->buffer->data;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(1732)
					{
						HX_STACK_LINE(1732)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1732)
						int _g1 = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1732)
						while(((_g2 < _g1))){
							HX_STACK_LINE(1732)
							int i = (_g2)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1734)
							if (((rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->position < rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->length))){
								HX_STACK_LINE(1734)
								int pos = (rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(1734)
								hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->b->__get(pos);
							}
							else{
								HX_STACK_LINE(1734)
								hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->ThrowEOFi();
							}
						}
					}
					HX_STACK_LINE(1738)
					_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__image->dirty = true;
				}
				HX_STACK_LINE(1742)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(1744)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1719)
		::lime::graphics::Image_obj::fromBytes(bytes, Dynamic(new _Function_1_1(rawAlpha1,_g,onload1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBytes,(void))

Void BitmapData_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromFile",0x3aae5011,"openfl.display.BitmapData.__fromFile","openfl/display/BitmapData.hx",1753,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(1753)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(1753)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1755,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1757)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(1759)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(1761)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1755)
		::lime::graphics::Image_obj::fromFile(path, Dynamic(new _Function_1_1(_g,onload1)),onerror);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromFile,(void))

Void BitmapData_obj::__fromImage( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromImage",0xdaa80026,"openfl.display.BitmapData.__fromImage","openfl/display/BitmapData.hx",1770,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1772)
		this->__image = image;
		HX_STACK_LINE(1774)
		this->width = image->width;
		HX_STACK_LINE(1775)
		this->height = image->height;
		HX_STACK_LINE(1776)
		::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1776)
		this->rect = _g;
		HX_STACK_LINE(1777)
		this->__isValid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__fromImage,(void))

Void BitmapData_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairo",0x87dae327,"openfl.display.BitmapData.__renderCairo","openfl/display/BitmapData.hx",1782,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1784)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1784)
			return null();
		}
		HX_STACK_LINE(1786)
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(1788)
		if (((this->__worldTransform == null()))){
			HX_STACK_LINE(1788)
			::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1788)
			this->__worldTransform = _g;
		}
		HX_STACK_LINE(1791)
		::openfl::geom::Matrix transform = this->__worldTransform;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(1793)
		if ((renderSession->roundPixels)){
			HX_STACK_LINE(1795)
			::lime::math::Matrix3 matrix = transform->__toMatrix3();		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(1796)
			int _g1 = ::Math_obj::round(matrix->tx);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1796)
			matrix->tx = _g1;
			HX_STACK_LINE(1797)
			int _g2 = ::Math_obj::round(matrix->ty);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1797)
			matrix->ty = _g2;
			HX_STACK_LINE(1798)
			cairo->set_matrix(matrix);
		}
		else{
			HX_STACK_LINE(1803)
			::lime::math::Matrix3 _g3 = transform->__toMatrix3();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1803)
			cairo->set_matrix(_g3);
		}
		HX_STACK_LINE(1808)
		Dynamic surface = this->getSurface();		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(1810)
		if (((surface != null()))){
			HX_STACK_LINE(1812)
			cairo->setSourceSurface(surface,(int)0,(int)0);
			HX_STACK_LINE(1813)
			cairo->paint();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairo,(void))

Void BitmapData_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairoMask",0x1a586fb3,"openfl.display.BitmapData.__renderCairoMask","openfl/display/BitmapData.hx",1820,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairoMask,(void))

Void BitmapData_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvas",0x5afced59,"openfl.display.BitmapData.__renderCanvas","openfl/display/BitmapData.hx",1827,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvas,(void))

Void BitmapData_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvasMask",0xf2507ae5,"openfl.display.BitmapData.__renderCanvasMask","openfl/display/BitmapData.hx",1857,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvasMask,(void))

Void BitmapData_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderGL",0x4c025e06,"openfl.display.BitmapData.__renderGL","openfl/display/BitmapData.hx",1866,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1866)
		renderSession->spriteBatch->renderBitmapData(hx::ObjectPtr<OBJ_>(this),false,this->__worldTransform,this->__worldColorTransform,this->__worldColorTransform->alphaMultiplier,this->blendMode,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderGL,(void))

Void BitmapData_obj::__sync( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__sync",0x0b374be6,"openfl.display.BitmapData.__sync","openfl/display/BitmapData.hx",1871,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__sync,(void))

Void BitmapData_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateChildren",0xeaaf19b3,"openfl.display.BitmapData.__updateChildren","openfl/display/BitmapData.hx",1934,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateChildren,(void))

Void BitmapData_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateMask",0x378cf760,"openfl.display.BitmapData.__updateMask","openfl/display/BitmapData.hx",1941,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateMask,(void))

::openfl::display::BitmapData BitmapData_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBase64",0x8e5a4284,"openfl.display.BitmapData.fromBase64","openfl/display/BitmapData.hx",657,0xdd12d5b9)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(659)
	::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(660)
	{
		HX_STACK_LINE(660)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(660)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(bitmapData);		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",660,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(660)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(660)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(660)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(660)
		::lime::graphics::Image_obj::fromBase64(base64,type, Dynamic(new _Function_2_1(_g,onload1)));
	}
	HX_STACK_LINE(661)
	return bitmapData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBase64,return )

::openfl::display::BitmapData BitmapData_obj::fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBytes",0x062c5916,"openfl.display.BitmapData.fromBytes","openfl/display/BitmapData.hx",666,0xdd12d5b9)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rawAlpha,"rawAlpha")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(668)
	::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(669)
	{
		HX_STACK_LINE(669)
		Array< ::Dynamic > rawAlpha1 = Array_obj< ::Dynamic >::__new().Add(rawAlpha);		HX_STACK_VAR(rawAlpha1,"rawAlpha1");
		HX_STACK_LINE(669)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(669)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(bitmapData);		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,rawAlpha1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",669,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(669)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(669)
				if (((rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >() != null()))){
					HX_STACK_LINE(669)
					::lime::utils::UInt8Array data = _g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__image->buffer->data;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(669)
					{
						HX_STACK_LINE(669)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(669)
						int _g1 = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(669)
						while(((_g2 < _g1))){
							HX_STACK_LINE(669)
							int i = (_g2)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(669)
							if (((rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->position < rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->length))){
								HX_STACK_LINE(669)
								int pos = (rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(669)
								hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->b->__get(pos);
							}
							else{
								HX_STACK_LINE(669)
								hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->ThrowEOFi();
							}
						}
					}
					HX_STACK_LINE(669)
					_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__image->dirty = true;
				}
				HX_STACK_LINE(669)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(669)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(669)
		::lime::graphics::Image_obj::fromBytes(bytes, Dynamic(new _Function_2_1(rawAlpha1,_g,onload1)));
	}
	HX_STACK_LINE(670)
	return bitmapData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBytes,return )

::openfl::display::BitmapData BitmapData_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("openfl.display.BitmapData","fromFile",0xca5f7c31,"openfl.display.BitmapData.fromFile","openfl/display/BitmapData.hx",687,0xdd12d5b9)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(689)
	::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(690)
	bitmapData->__fromFile(path,onload,onerror);
	HX_STACK_LINE(691)
	return bitmapData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromFile,return )

::openfl::display::BitmapData BitmapData_obj::fromImage( ::lime::graphics::Image image,hx::Null< bool >  __o_transparent){
bool transparent = __o_transparent.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","fromImage",0x05fd7006,"openfl.display.BitmapData.fromImage","openfl/display/BitmapData.hx",696,0xdd12d5b9)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(transparent,"transparent")
{
		HX_STACK_LINE(698)
		::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,transparent,null());		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(699)
		bitmapData->__fromImage(image);
		HX_STACK_LINE(700)
		bitmapData->__image->set_transparent(transparent);
		HX_STACK_LINE(701)
		return bitmapData;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fromImage,return )

int BitmapData_obj::__flipPixel( int pixel){
	HX_STACK_FRAME("openfl.display.BitmapData","__flipPixel",0xc245472e,"openfl.display.BitmapData.__flipPixel","openfl/display/BitmapData.hx",1695,0xdd12d5b9)
	HX_STACK_ARG(pixel,"pixel")
	HX_STACK_LINE(1695)
	return (int((int((int((int(((int(pixel) & int((int)255)))) << int((int)24))) | int((int(((int((int(pixel) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(pixel) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(pixel) >> int((int)24))) & int((int)255))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__flipPixel,return )

int BitmapData_obj::__ucompare( int n1,int n2){
	HX_STACK_FRAME("openfl.display.BitmapData","__ucompare",0x409df3db,"openfl.display.BitmapData.__ucompare","openfl/display/BitmapData.hx",1880,0xdd12d5b9)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(1882)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1883)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1885)
	tmp1 = (int((int(n1) >> int((int)24))) & int((int)255));
	HX_STACK_LINE(1886)
	tmp2 = (int((int(n2) >> int((int)24))) & int((int)255));
	HX_STACK_LINE(1888)
	if (((tmp1 != tmp2))){
		HX_STACK_LINE(1890)
		if (((tmp1 > tmp2))){
			HX_STACK_LINE(1890)
			return (int)1;
		}
		else{
			HX_STACK_LINE(1890)
			return (int)-1;
		}
	}
	else{
		HX_STACK_LINE(1894)
		tmp1 = (int((int(n1) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(1895)
		tmp2 = (int((int(n2) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(1897)
		if (((tmp1 != tmp2))){
			HX_STACK_LINE(1899)
			if (((tmp1 > tmp2))){
				HX_STACK_LINE(1899)
				return (int)1;
			}
			else{
				HX_STACK_LINE(1899)
				return (int)-1;
			}
		}
		else{
			HX_STACK_LINE(1903)
			tmp1 = (int((int(n1) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(1904)
			tmp2 = (int((int(n2) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(1906)
			if (((tmp1 != tmp2))){
				HX_STACK_LINE(1908)
				if (((tmp1 > tmp2))){
					HX_STACK_LINE(1908)
					return (int)1;
				}
				else{
					HX_STACK_LINE(1908)
					return (int)-1;
				}
			}
			else{
				HX_STACK_LINE(1912)
				tmp1 = (int(n1) & int((int)255));
				HX_STACK_LINE(1913)
				tmp2 = (int(n2) & int((int)255));
				HX_STACK_LINE(1915)
				if (((tmp1 != tmp2))){
					HX_STACK_LINE(1917)
					if (((tmp1 > tmp2))){
						HX_STACK_LINE(1917)
						return (int)1;
					}
					else{
						HX_STACK_LINE(1917)
						return (int)-1;
					}
				}
				else{
					HX_STACK_LINE(1921)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(1888)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__ucompare,return )


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__image,"__image");
	HX_MARK_MEMBER_NAME(__isValid,"__isValid");
	HX_MARK_MEMBER_NAME(__surface,"__surface");
	HX_MARK_MEMBER_NAME(__surfaceImage,"__surfaceImage");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__textureImage,"__textureImage");
	HX_MARK_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_MARK_MEMBER_NAME(__uvData,"__uvData");
	HX_MARK_MEMBER_NAME(__usingFramebuffer,"__usingFramebuffer");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__image,"__image");
	HX_VISIT_MEMBER_NAME(__isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(__surface,"__surface");
	HX_VISIT_MEMBER_NAME(__surfaceImage,"__surfaceImage");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__textureImage,"__textureImage");
	HX_VISIT_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_VISIT_MEMBER_NAME(__uvData,"__uvData");
	HX_VISIT_MEMBER_NAME(__usingFramebuffer,"__usingFramebuffer");
}

Dynamic BitmapData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__image") ) { return __image; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return hitTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { return fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { return __uvData; }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawGL") ) { return __drawGL_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"fromImage") ) { return fromImage_dyn(); }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		if (HX_FIELD_EQ(inName,"__isValid") ) { return __isValid; }
		if (HX_FIELD_EQ(inName,"__surface") ) { return __surface; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer") ) { return getBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"histogram") ) { return histogram_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { return fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__ucompare") ) { return __ucompare_dyn(); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"getSurface") ) { return getSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"paletteMap") ) { return paletteMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__flipPixel") ) { return __flipPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"__createUVs") ) { return __createUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromImage") ) { return __fromImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__flipMatrix") ) { return __flipMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { return __framebuffer; }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__surfaceImage") ) { return __surfaceImage; }
		if (HX_FIELD_EQ(inName,"__textureImage") ) { return __textureImage; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return __cacheAsBitmap; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__usingFramebuffer") ) { return __usingFramebuffer; }
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__image") ) { __image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { __uvData=inValue.Cast< ::openfl::display::TextureUvs >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isValid") ) { __isValid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__surface") ) { __surface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { __framebuffer=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterTexture >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__surfaceImage") ) { __surfaceImage=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureImage") ) { __textureImage=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { __cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__usingFramebuffer") ) { __usingFramebuffer=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("transparent"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("blendMode"));
	outFields->push(HX_CSTRING("__worldTransform"));
	outFields->push(HX_CSTRING("__worldColorTransform"));
	outFields->push(HX_CSTRING("__cacheAsBitmap"));
	outFields->push(HX_CSTRING("__buffer"));
	outFields->push(HX_CSTRING("__image"));
	outFields->push(HX_CSTRING("__isValid"));
	outFields->push(HX_CSTRING("__surface"));
	outFields->push(HX_CSTRING("__surfaceImage"));
	outFields->push(HX_CSTRING("__texture"));
	outFields->push(HX_CSTRING("__textureImage"));
	outFields->push(HX_CSTRING("__framebuffer"));
	outFields->push(HX_CSTRING("__uvData"));
	outFields->push(HX_CSTRING("__usingFramebuffer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromBase64"),
	HX_CSTRING("fromBytes"),
	HX_CSTRING("fromFile"),
	HX_CSTRING("fromImage"),
	HX_CSTRING("__flipPixel"),
	HX_CSTRING("__ucompare"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapData_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(BitmapData_obj,rect),HX_CSTRING("rect")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,transparent),HX_CSTRING("transparent")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,width),HX_CSTRING("width")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(BitmapData_obj,blendMode),HX_CSTRING("blendMode")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(BitmapData_obj,__worldTransform),HX_CSTRING("__worldTransform")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(BitmapData_obj,__worldColorTransform),HX_CSTRING("__worldColorTransform")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__cacheAsBitmap),HX_CSTRING("__cacheAsBitmap")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(BitmapData_obj,__buffer),HX_CSTRING("__buffer")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__image),HX_CSTRING("__image")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__isValid),HX_CSTRING("__isValid")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapData_obj,__surface),HX_CSTRING("__surface")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__surfaceImage),HX_CSTRING("__surfaceImage")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(BitmapData_obj,__texture),HX_CSTRING("__texture")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__textureImage),HX_CSTRING("__textureImage")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterTexture*/ ,(int)offsetof(BitmapData_obj,__framebuffer),HX_CSTRING("__framebuffer")},
	{hx::fsObject /*::openfl::display::TextureUvs*/ ,(int)offsetof(BitmapData_obj,__uvData),HX_CSTRING("__uvData")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__usingFramebuffer),HX_CSTRING("__usingFramebuffer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("height"),
	HX_CSTRING("rect"),
	HX_CSTRING("transparent"),
	HX_CSTRING("width"),
	HX_CSTRING("blendMode"),
	HX_CSTRING("__worldTransform"),
	HX_CSTRING("__worldColorTransform"),
	HX_CSTRING("__cacheAsBitmap"),
	HX_CSTRING("__buffer"),
	HX_CSTRING("__image"),
	HX_CSTRING("__isValid"),
	HX_CSTRING("__surface"),
	HX_CSTRING("__surfaceImage"),
	HX_CSTRING("__texture"),
	HX_CSTRING("__textureImage"),
	HX_CSTRING("__framebuffer"),
	HX_CSTRING("__uvData"),
	HX_CSTRING("__usingFramebuffer"),
	HX_CSTRING("applyFilter"),
	HX_CSTRING("clone"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("copyChannel"),
	HX_CSTRING("copyPixels"),
	HX_CSTRING("dispose"),
	HX_CSTRING("draw"),
	HX_CSTRING("encode"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("floodFill"),
	HX_CSTRING("generateFilterRect"),
	HX_CSTRING("getBuffer"),
	HX_CSTRING("getColorBoundsRect"),
	HX_CSTRING("getPixel"),
	HX_CSTRING("getPixel32"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("getSurface"),
	HX_CSTRING("getTexture"),
	HX_CSTRING("getVector"),
	HX_CSTRING("histogram"),
	HX_CSTRING("hitTest"),
	HX_CSTRING("lock"),
	HX_CSTRING("merge"),
	HX_CSTRING("noise"),
	HX_CSTRING("paletteMap"),
	HX_CSTRING("perlinNoise"),
	HX_CSTRING("scroll"),
	HX_CSTRING("setPixel"),
	HX_CSTRING("setPixel32"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("setVector"),
	HX_CSTRING("threshold"),
	HX_CSTRING("unlock"),
	HX_CSTRING("__createUVs"),
	HX_CSTRING("__drawGL"),
	HX_CSTRING("__flipMatrix"),
	HX_CSTRING("__fromBase64"),
	HX_CSTRING("__fromBytes"),
	HX_CSTRING("__fromFile"),
	HX_CSTRING("__fromImage"),
	HX_CSTRING("__renderCairo"),
	HX_CSTRING("__renderCairoMask"),
	HX_CSTRING("__renderCanvas"),
	HX_CSTRING("__renderCanvasMask"),
	HX_CSTRING("__renderGL"),
	HX_CSTRING("__sync"),
	HX_CSTRING("__updateChildren"),
	HX_CSTRING("__updateMask"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
};

#endif

Class BitmapData_obj::__mClass;

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.BitmapData"), hx::TCanCast< BitmapData_obj> ,sStaticFields,sMemberFields,
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

void BitmapData_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
