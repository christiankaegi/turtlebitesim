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
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
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
#ifndef INCLUDED_lime_utils_UInt16Array
#include <lime/utils/UInt16Array.h>
#endif
#ifndef INCLUDED_lime_utils_UInt32Array
#include <lime/utils/UInt32Array.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__SpriteBatch_State
#include <openfl/_internal/renderer/opengl/utils/_SpriteBatch/State.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
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
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void SpriteBatch_obj::__construct(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","new",0x9b485926,"openfl._internal.renderer.opengl.utils.SpriteBatch.new","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",27,0x8289eb2d)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(__o_maxSprites,"maxSprites")
int maxSprites = __o_maxSprites.Default(2000);
{
	HX_STACK_LINE(63)
	this->lastEnableColor = true;
	HX_STACK_LINE(61)
	this->enableColor = true;
	HX_STACK_LINE(59)
	this->attributes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(56)
	this->writtenVertexBytes = (int)0;
	HX_STACK_LINE(45)
	this->drawing = false;
	HX_STACK_LINE(44)
	this->dirty = true;
	HX_STACK_LINE(34)
	this->states = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(67)
	this->maxSprites = maxSprites;
	HX_STACK_LINE(69)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute _g = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_CSTRING("aPosition"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(69)
	this->attributes->push(_g);
	HX_STACK_LINE(70)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute _g1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_CSTRING("aTexCoord0"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(70)
	this->attributes->push(_g1);
	HX_STACK_LINE(71)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute _g2 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5121,true,HX_CSTRING("aColor"),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(71)
	this->attributes->push(_g2);
	HX_STACK_LINE(73)
	::lime::utils::Float32Array _g3 = ::lime::utils::Float32Array_obj::__new(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(73)
	this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >()->defaultValue = _g3;
	HX_STACK_LINE(75)
	this->maxElementsPerVertex = (int)0;
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(77)
		Array< ::Dynamic > _g11 = this->attributes;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(77)
		while((true)){
			HX_STACK_LINE(77)
			if ((!(((_g4 < _g11->length))))){
				HX_STACK_LINE(77)
				break;
			}
			HX_STACK_LINE(77)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = _g11->__get(_g4).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(77)
			++(_g4);
			struct _Function_3_1{
				inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &a){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",78,0x8289eb2d)
					{
						HX_STACK_LINE(78)
						int _g5 = a->type;		HX_STACK_VAR(_g5,"_g5");
						struct _Function_4_1{
							inline static int Block( int &_g5){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",78,0x8289eb2d)
								{
									HX_STACK_LINE(78)
									switch( (int)(_g5)){
										case (int)5120: case (int)5121: {
											HX_STACK_LINE(78)
											return (int)1;
										}
										;break;
										case (int)5122: case (int)5123: {
											HX_STACK_LINE(78)
											return (int)2;
										}
										;break;
										default: {
											HX_STACK_LINE(78)
											return (int)4;
										}
									}
								}
								return null();
							}
						};
						HX_STACK_LINE(78)
						return _Function_4_1::Block(_g5);
					}
					return null();
				}
			};
			HX_STACK_LINE(78)
			int _g41 = ::Math_obj::floor((Float((a->components * _Function_3_1::Block(a))) / Float((int)4)));		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(78)
			hx::AddEq(this->maxElementsPerVertex,_g41);
		}
	}
	HX_STACK_LINE(81)
	this->vertexArraySize = (((maxSprites * this->maxElementsPerVertex) * (int)4) * (int)4);
	HX_STACK_LINE(82)
	this->indexArraySize = (maxSprites * (int)6);
	HX_STACK_LINE(84)
	::openfl::_internal::renderer::opengl::utils::VertexArray _g5 = ::openfl::_internal::renderer::opengl::utils::VertexArray_obj::__new(this->attributes,this->vertexArraySize,false);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(84)
	this->vertexArray = _g5;
	HX_STACK_LINE(85)
	::lime::utils::Float32Array _g6 = ::lime::utils::Float32Array_obj::__new(this->vertexArray->buffer,null(),null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(85)
	this->positions = _g6;
	HX_STACK_LINE(86)
	::lime::utils::UInt32Array _g7 = ::lime::utils::UInt32Array_obj::__new(this->vertexArray->buffer,null(),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(86)
	this->colors = _g7;
	HX_STACK_LINE(88)
	::lime::utils::UInt16Array _g8 = ::lime::utils::UInt16Array_obj::__new(this->indexArraySize,null(),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(88)
	this->indices = _g8;
	HX_STACK_LINE(90)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(90)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(91)
	while((true)){
		HX_STACK_LINE(91)
		if ((!(((i < this->indexArraySize))))){
			HX_STACK_LINE(91)
			break;
		}
		HX_STACK_LINE(92)
		hx::__ArrayImplRef(this->indices,i) = j;
		HX_STACK_LINE(93)
		hx::__ArrayImplRef(this->indices,(i + (int)1)) = (j + (int)1);
		HX_STACK_LINE(94)
		hx::__ArrayImplRef(this->indices,(i + (int)2)) = (j + (int)2);
		HX_STACK_LINE(95)
		hx::__ArrayImplRef(this->indices,(i + (int)3)) = j;
		HX_STACK_LINE(96)
		hx::__ArrayImplRef(this->indices,(i + (int)4)) = (j + (int)2);
		HX_STACK_LINE(97)
		hx::__ArrayImplRef(this->indices,(i + (int)5)) = (j + (int)3);
		HX_STACK_LINE(98)
		hx::AddEq(i,(int)6);
		HX_STACK_LINE(99)
		hx::AddEq(j,(int)4);
	}
	HX_STACK_LINE(102)
	::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State _g9 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(102)
	this->currentState = _g9;
	HX_STACK_LINE(103)
	this->dirty = true;
	HX_STACK_LINE(104)
	this->drawing = false;
	HX_STACK_LINE(105)
	this->batchedSprites = (int)0;
	HX_STACK_LINE(107)
	this->setContext(gl);
}
;
	return null();
}

//SpriteBatch_obj::~SpriteBatch_obj() { }

Dynamic SpriteBatch_obj::__CreateEmpty() { return  new SpriteBatch_obj; }
hx::ObjectPtr< SpriteBatch_obj > SpriteBatch_obj::__new(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites)
{  hx::ObjectPtr< SpriteBatch_obj > result = new SpriteBatch_obj();
	result->__construct(gl,__o_maxSprites);
	return result;}

Dynamic SpriteBatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteBatch_obj > result = new SpriteBatch_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void SpriteBatch_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","destroy",0xc9b590c0,"openfl._internal.renderer.opengl.utils.SpriteBatch.destroy","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",111,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		this->vertexArray->destroy();
		HX_STACK_LINE(113)
		this->vertexArray = null();
		HX_STACK_LINE(115)
		this->indices = null();
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			::lime::graphics::opengl::GLBuffer buffer = this->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(buffer->id);
				HX_STACK_LINE(116)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(118)
		this->currentState->destroy();
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			Array< ::Dynamic > _g1 = this->states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(119)
			while((true)){
				HX_STACK_LINE(119)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(119)
					break;
				}
				HX_STACK_LINE(119)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(119)
				++(_g);
				HX_STACK_LINE(120)
				state->destroy();
			}
		}
		HX_STACK_LINE(123)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,destroy,(void))

Void SpriteBatch_obj::begin( ::openfl::_internal::renderer::RenderSession renderSession,::openfl::geom::Rectangle clipRect){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","begin",0x5812b06f,"openfl._internal.renderer.opengl.utils.SpriteBatch.begin","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",126,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_LINE(128)
		this->renderSession = renderSession;
		HX_STACK_LINE(129)
		this->shader = renderSession->shaderManager->defaultShader;
		HX_STACK_LINE(130)
		this->drawing = true;
		HX_STACK_LINE(131)
		this->start(clipRect);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteBatch_obj,begin,(void))

Void SpriteBatch_obj::finish( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","finish",0xa3eff74d,"openfl._internal.renderer.opengl.utils.SpriteBatch.finish","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",135,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		this->flush();
		HX_STACK_LINE(137)
		this->clipRect = null();
		HX_STACK_LINE(138)
		this->drawing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,finish,(void))

Void SpriteBatch_obj::start( ::openfl::geom::Rectangle clipRect){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","start",0x2bc83aa8,"openfl._internal.renderer.opengl.utils.SpriteBatch.start","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",141,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_LINE(142)
		if ((!(this->drawing))){
			HX_STACK_LINE(143)
			HX_STACK_DO_THROW(HX_CSTRING("Call Spritebatch.begin() before start()"));
		}
		HX_STACK_LINE(145)
		this->dirty = true;
		HX_STACK_LINE(146)
		this->clipRect = clipRect;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,start,(void))

Void SpriteBatch_obj::stop( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","stop",0x475f147c,"openfl._internal.renderer.opengl.utils.SpriteBatch.stop","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",150,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		this->flush();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,stop,(void))

Void SpriteBatch_obj::renderBitmapData( ::openfl::display::BitmapData bitmapData,bool smoothing,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform ct,Dynamic __o_alpha,::openfl::display::BlendMode blendMode,::openfl::display::PixelSnapping pixelSnapping){
Dynamic alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderBitmapData",0x214be029,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderBitmapData","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",153,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(ct,"ct")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(pixelSnapping,"pixelSnapping")
{
		HX_STACK_LINE(154)
		if (((bitmapData == null()))){
			HX_STACK_LINE(154)
			return null();
		}
		HX_STACK_LINE(155)
		::lime::graphics::opengl::GLTexture texture = bitmapData->getTexture(this->gl);		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(157)
		if (((this->batchedSprites >= this->maxSprites))){
			HX_STACK_LINE(158)
			this->flush();
		}
		HX_STACK_LINE(161)
		::openfl::display::TextureUvs uvs = bitmapData->__uvData;		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(162)
		if (((uvs == null()))){
			HX_STACK_LINE(162)
			return null();
		}
		HX_STACK_LINE(164)
		int _g = ::Std_obj::_int((alpha * (int)255));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(164)
		int _g1 = (int(_g) & int((int)255));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(164)
		int _g2 = (int(_g1) << int((int)24));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(164)
		int color = (int(_g2) | int((int)16777215));		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			this->enableColor = true;
			HX_STACK_LINE(167)
			if (((this->enableColor != this->lastEnableColor))){
				HX_STACK_LINE(167)
				this->flush();
				HX_STACK_LINE(167)
				this->lastEnableColor = this->enableColor;
			}
			HX_STACK_LINE(167)
			this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >()->enabled = this->lastEnableColor;
			HX_STACK_LINE(167)
			int _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(167)
			{
				HX_STACK_LINE(167)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(167)
				{
					HX_STACK_LINE(167)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(167)
					Array< ::Dynamic > _g11 = this->attributes;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(167)
					while((true)){
						HX_STACK_LINE(167)
						if ((!(((_g3 < _g11->length))))){
							HX_STACK_LINE(167)
							break;
						}
						HX_STACK_LINE(167)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a = _g11->__get(_g3).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(167)
						++(_g3);
						HX_STACK_LINE(167)
						if ((a->enabled)){
							struct _Function_6_1{
								inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &a){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",167,0x8289eb2d)
									{
										HX_STACK_LINE(167)
										int _g5 = a->type;		HX_STACK_VAR(_g5,"_g5");
										struct _Function_7_1{
											inline static int Block( int &_g5){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",167,0x8289eb2d)
												{
													HX_STACK_LINE(167)
													switch( (int)(_g5)){
														case (int)5120: case (int)5121: {
															HX_STACK_LINE(167)
															return (int)1;
														}
														;break;
														case (int)5122: case (int)5123: {
															HX_STACK_LINE(167)
															return (int)2;
														}
														;break;
														default: {
															HX_STACK_LINE(167)
															return (int)4;
														}
													}
												}
												return null();
											}
										};
										HX_STACK_LINE(167)
										return _Function_7_1::Block(_g5);
									}
									return null();
								}
							};
							HX_STACK_LINE(167)
							int _g31 = ::Math_obj::floor((Float((a->components * _Function_6_1::Block(a))) / Float((int)4)));		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(167)
							hx::AddEq(r,_g31);
						}
					}
				}
				HX_STACK_LINE(167)
				_g4 = r;
			}
			HX_STACK_LINE(167)
			this->elementsPerVertex = _g4;
		}
		HX_STACK_LINE(169)
		int index = ((this->batchedSprites * (int)4) * this->elementsPerVertex);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(170)
			Float width = bitmapData->width;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(170)
			Float height = bitmapData->height;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(170)
			::openfl::display::PixelSnapping pixelSnapping1 = pixelSnapping;		HX_STACK_VAR(pixelSnapping1,"pixelSnapping1");
			HX_STACK_LINE(170)
			Float w0;		HX_STACK_VAR(w0,"w0");
			HX_STACK_LINE(170)
			Float w1;		HX_STACK_VAR(w1,"w1");
			HX_STACK_LINE(170)
			Float h0;		HX_STACK_VAR(h0,"h0");
			HX_STACK_LINE(170)
			Float h1;		HX_STACK_VAR(h1,"h1");
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				w0 = width;
				HX_STACK_LINE(170)
				w1 = (int)0;
				HX_STACK_LINE(170)
				h0 = height;
				HX_STACK_LINE(170)
				h1 = (int)0;
			}
			HX_STACK_LINE(170)
			if (((pixelSnapping1 == null()))){
				HX_STACK_LINE(170)
				pixelSnapping1 = ::openfl::display::PixelSnapping_obj::NEVER;
			}
			HX_STACK_LINE(170)
			bool snap = (pixelSnapping1 != ::openfl::display::PixelSnapping_obj::NEVER);		HX_STACK_VAR(snap,"snap");
			HX_STACK_LINE(170)
			Float a = matrix->a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(170)
			Float b = matrix->b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(170)
			Float c = matrix->c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(170)
			Float d = matrix->d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(170)
			Float tx = matrix->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(170)
			Float ty = matrix->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(170)
			int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
			HX_STACK_LINE(170)
			if ((!(snap))){
				HX_STACK_LINE(170)
				int _g5 = (index1)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g5) = (((a * w1) + (c * h1)) + tx);
				HX_STACK_LINE(170)
				int _g6 = (index1)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g6) = (((d * h1) + (b * w1)) + ty);
			}
			else{
				HX_STACK_LINE(170)
				int _g7 = (index1)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g7) = ::Math_obj::fround((((a * w1) + (c * h1)) + tx));
				HX_STACK_LINE(170)
				int _g8 = (index1)++;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g8) = ::Math_obj::fround((((d * h1) + (b * w1)) + ty));
			}
			HX_STACK_LINE(170)
			int _g9 = (index1)++;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(this->positions,_g9) = uvs->x0;
			HX_STACK_LINE(170)
			int _g10 = (index1)++;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(this->positions,_g10) = uvs->y0;
			HX_STACK_LINE(170)
			if ((this->enableColor)){
				HX_STACK_LINE(170)
				int _g11 = (index1)++;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->colors,_g11) = color;
			}
			HX_STACK_LINE(170)
			if ((!(snap))){
				HX_STACK_LINE(170)
				int _g12 = (index1)++;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g12) = (((a * w0) + (c * h1)) + tx);
				HX_STACK_LINE(170)
				int _g13 = (index1)++;		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g13) = (((d * h1) + (b * w0)) + ty);
			}
			else{
				HX_STACK_LINE(170)
				int _g14 = (index1)++;		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g14) = ::Math_obj::fround((((a * w0) + (c * h1)) + tx));
				HX_STACK_LINE(170)
				int _g15 = (index1)++;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g15) = ::Math_obj::fround((((d * h1) + (b * w0)) + ty));
			}
			HX_STACK_LINE(170)
			int _g16 = (index1)++;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(this->positions,_g16) = uvs->x1;
			HX_STACK_LINE(170)
			int _g17 = (index1)++;		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(this->positions,_g17) = uvs->y1;
			HX_STACK_LINE(170)
			if ((this->enableColor)){
				HX_STACK_LINE(170)
				int _g18 = (index1)++;		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->colors,_g18) = color;
			}
			HX_STACK_LINE(170)
			if ((!(snap))){
				HX_STACK_LINE(170)
				int _g19 = (index1)++;		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g19) = (((a * w0) + (c * h0)) + tx);
				HX_STACK_LINE(170)
				int _g20 = (index1)++;		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g20) = (((d * h0) + (b * w0)) + ty);
			}
			else{
				HX_STACK_LINE(170)
				int _g21 = (index1)++;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g21) = ::Math_obj::fround((((a * w0) + (c * h0)) + tx));
				HX_STACK_LINE(170)
				int _g22 = (index1)++;		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g22) = ::Math_obj::fround((((d * h0) + (b * w0)) + ty));
			}
			HX_STACK_LINE(170)
			int _g23 = (index1)++;		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(this->positions,_g23) = uvs->x2;
			HX_STACK_LINE(170)
			int _g24 = (index1)++;		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(this->positions,_g24) = uvs->y2;
			HX_STACK_LINE(170)
			if ((this->enableColor)){
				HX_STACK_LINE(170)
				int _g25 = (index1)++;		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->colors,_g25) = color;
			}
			HX_STACK_LINE(170)
			if ((!(snap))){
				HX_STACK_LINE(170)
				int _g26 = (index1)++;		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g26) = (((a * w1) + (c * h0)) + tx);
				HX_STACK_LINE(170)
				int _g27 = (index1)++;		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g27) = (((d * h0) + (b * w1)) + ty);
			}
			else{
				HX_STACK_LINE(170)
				int _g28 = (index1)++;		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g28) = ::Math_obj::fround((((a * w1) + (c * h0)) + tx));
				HX_STACK_LINE(170)
				int _g29 = (index1)++;		HX_STACK_VAR(_g29,"_g29");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->positions,_g29) = ::Math_obj::fround((((d * h0) + (b * w1)) + ty));
			}
			HX_STACK_LINE(170)
			int _g30 = (index1)++;		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(this->positions,_g30) = uvs->x3;
			HX_STACK_LINE(170)
			int _g31 = (index1)++;		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(this->positions,_g31) = uvs->y3;
			HX_STACK_LINE(170)
			if ((this->enableColor)){
				HX_STACK_LINE(170)
				int _g32 = (index1)++;		HX_STACK_VAR(_g32,"_g32");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(this->colors,_g32) = color;
			}
			HX_STACK_LINE(170)
			this->writtenVertexBytes = index1;
		}
		HX_STACK_LINE(172)
		this->setState(this->batchedSprites,texture,smoothing,blendMode,ct,true);
		HX_STACK_LINE(174)
		(this->batchedSprites)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(SpriteBatch_obj,renderBitmapData,(void))

Void SpriteBatch_obj::renderTiles( ::openfl::display::DisplayObject object,::openfl::display::Tilesheet sheet,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderTiles",0xf159e915,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderTiles","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",177,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(179)
		::lime::graphics::opengl::GLTexture texture = sheet->__bitmap->getTexture(this->gl);		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(180)
		if (((texture == null()))){
			HX_STACK_LINE(180)
			return null();
		}
		HX_STACK_LINE(182)
		bool useScale = (((int(flags) & int((int)1))) > (int)0);		HX_STACK_VAR(useScale,"useScale");
		HX_STACK_LINE(183)
		bool useRotation = (((int(flags) & int((int)2))) > (int)0);		HX_STACK_VAR(useRotation,"useRotation");
		HX_STACK_LINE(184)
		bool useTransform = (((int(flags) & int((int)16))) > (int)0);		HX_STACK_VAR(useTransform,"useTransform");
		HX_STACK_LINE(185)
		bool useRGB = (((int(flags) & int((int)4))) > (int)0);		HX_STACK_VAR(useRGB,"useRGB");
		HX_STACK_LINE(186)
		bool useAlpha = (((int(flags) & int((int)8))) > (int)0);		HX_STACK_VAR(useAlpha,"useAlpha");
		HX_STACK_LINE(187)
		bool useRect = (((int(flags) & int((int)32))) > (int)0);		HX_STACK_VAR(useRect,"useRect");
		HX_STACK_LINE(188)
		bool useOrigin = (((int(flags) & int((int)64))) > (int)0);		HX_STACK_VAR(useOrigin,"useOrigin");
		HX_STACK_LINE(190)
		::openfl::display::BlendMode blendMode;		HX_STACK_VAR(blendMode,"blendMode");
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			int _g = (int(flags) & int((int)983040));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			switch( (int)(_g)){
				case (int)65536: {
					HX_STACK_LINE(191)
					blendMode = ::openfl::display::BlendMode_obj::ADD;
				}
				;break;
				case (int)131072: {
					HX_STACK_LINE(192)
					blendMode = ::openfl::display::BlendMode_obj::MULTIPLY;
				}
				;break;
				case (int)262144: {
					HX_STACK_LINE(193)
					blendMode = ::openfl::display::BlendMode_obj::SCREEN;
				}
				;break;
				default: {
					HX_STACK_LINE(194)
					blendMode = ::openfl::display::BlendMode_obj::NORMAL;
				}
			}
		}
		HX_STACK_LINE(197)
		if ((useTransform)){
			HX_STACK_LINE(197)
			useScale = false;
			HX_STACK_LINE(197)
			useRotation = false;
		}
		HX_STACK_LINE(199)
		int scaleIndex = (int)0;		HX_STACK_VAR(scaleIndex,"scaleIndex");
		HX_STACK_LINE(200)
		int rotationIndex = (int)0;		HX_STACK_VAR(rotationIndex,"rotationIndex");
		HX_STACK_LINE(201)
		int rgbIndex = (int)0;		HX_STACK_VAR(rgbIndex,"rgbIndex");
		HX_STACK_LINE(202)
		int alphaIndex = (int)0;		HX_STACK_VAR(alphaIndex,"alphaIndex");
		HX_STACK_LINE(203)
		int transformIndex = (int)0;		HX_STACK_VAR(transformIndex,"transformIndex");
		HX_STACK_LINE(205)
		int numValues = (int)3;		HX_STACK_VAR(numValues,"numValues");
		HX_STACK_LINE(207)
		if ((useRect)){
			HX_STACK_LINE(207)
			if ((useOrigin)){
				HX_STACK_LINE(207)
				numValues = (int)8;
			}
			else{
				HX_STACK_LINE(207)
				numValues = (int)6;
			}
		}
		HX_STACK_LINE(208)
		if ((useScale)){
			HX_STACK_LINE(208)
			scaleIndex = numValues;
			HX_STACK_LINE(208)
			(numValues)++;
		}
		HX_STACK_LINE(209)
		if ((useRotation)){
			HX_STACK_LINE(209)
			rotationIndex = numValues;
			HX_STACK_LINE(209)
			(numValues)++;
		}
		HX_STACK_LINE(210)
		if ((useTransform)){
			HX_STACK_LINE(210)
			transformIndex = numValues;
			HX_STACK_LINE(210)
			hx::AddEq(numValues,(int)4);
		}
		HX_STACK_LINE(211)
		if ((useRGB)){
			HX_STACK_LINE(211)
			rgbIndex = numValues;
			HX_STACK_LINE(211)
			hx::AddEq(numValues,(int)3);
		}
		HX_STACK_LINE(212)
		if ((useAlpha)){
			HX_STACK_LINE(212)
			alphaIndex = numValues;
			HX_STACK_LINE(212)
			(numValues)++;
		}
		HX_STACK_LINE(214)
		int totalCount = tileData->length;		HX_STACK_VAR(totalCount,"totalCount");
		HX_STACK_LINE(215)
		if (((bool((count >= (int)0)) && bool((totalCount > count))))){
			HX_STACK_LINE(215)
			totalCount = count;
		}
		HX_STACK_LINE(216)
		int itemCount = ::Std_obj::_int((Float(totalCount) / Float(numValues)));		HX_STACK_VAR(itemCount,"itemCount");
		HX_STACK_LINE(217)
		int iIndex = (int)0;		HX_STACK_VAR(iIndex,"iIndex");
		HX_STACK_LINE(219)
		int tileID = (int)-1;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(220)
		::openfl::geom::Rectangle rect = sheet->__rectTile;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(221)
		::openfl::geom::Rectangle tileUV = sheet->__rectUV;		HX_STACK_VAR(tileUV,"tileUV");
		HX_STACK_LINE(222)
		::openfl::geom::Point center = sheet->__point;		HX_STACK_VAR(center,"center");
		HX_STACK_LINE(223)
		Float x = 0.0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(223)
		Float y = 0.0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(224)
		Float alpha = 1.0;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(224)
		int tint = (int)16777215;		HX_STACK_VAR(tint,"tint");
		HX_STACK_LINE(224)
		int color = (int)-1;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(225)
		Float scale = 1.0;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(225)
		Float rotation = 0.0;		HX_STACK_VAR(rotation,"rotation");
		HX_STACK_LINE(226)
		Float cosTheta = 1.0;		HX_STACK_VAR(cosTheta,"cosTheta");
		HX_STACK_LINE(226)
		Float sinTheta = 0.0;		HX_STACK_VAR(sinTheta,"sinTheta");
		HX_STACK_LINE(227)
		Float a = 0.0;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(227)
		Float b = 0.0;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(227)
		Float c = 0.0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(227)
		Float d = 0.0;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(227)
		Float tx = 0.0;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(227)
		Float ty = 0.0;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(228)
		Float ox = 0.0;		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(228)
		Float oy = 0.0;		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(229)
		::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(230)
		::openfl::geom::Matrix oMatrix = object->__worldTransform;		HX_STACK_VAR(oMatrix,"oMatrix");
		HX_STACK_LINE(231)
		::openfl::display::TextureUvs uvs = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(233)
		int bIndex = (int)0;		HX_STACK_VAR(bIndex,"bIndex");
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			this->enableColor = true;
			HX_STACK_LINE(236)
			if (((this->enableColor != this->lastEnableColor))){
				HX_STACK_LINE(236)
				this->flush();
				HX_STACK_LINE(236)
				this->lastEnableColor = this->enableColor;
			}
			HX_STACK_LINE(236)
			this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >()->enabled = this->lastEnableColor;
			HX_STACK_LINE(236)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(236)
			{
				HX_STACK_LINE(236)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(236)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(236)
					Array< ::Dynamic > _g11 = this->attributes;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(236)
					while((true)){
						HX_STACK_LINE(236)
						if ((!(((_g < _g11->length))))){
							HX_STACK_LINE(236)
							break;
						}
						HX_STACK_LINE(236)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a1 = _g11->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(236)
						++(_g);
						HX_STACK_LINE(236)
						if ((a1->enabled)){
							struct _Function_6_1{
								inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &a1){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",236,0x8289eb2d)
									{
										HX_STACK_LINE(236)
										int _g2 = a1->type;		HX_STACK_VAR(_g2,"_g2");
										struct _Function_7_1{
											inline static int Block( int &_g2){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",236,0x8289eb2d)
												{
													HX_STACK_LINE(236)
													switch( (int)(_g2)){
														case (int)5120: case (int)5121: {
															HX_STACK_LINE(236)
															return (int)1;
														}
														;break;
														case (int)5122: case (int)5123: {
															HX_STACK_LINE(236)
															return (int)2;
														}
														;break;
														default: {
															HX_STACK_LINE(236)
															return (int)4;
														}
													}
												}
												return null();
											}
										};
										HX_STACK_LINE(236)
										return _Function_7_1::Block(_g2);
									}
									return null();
								}
							};
							HX_STACK_LINE(236)
							int _g2 = ::Math_obj::floor((Float((a1->components * _Function_6_1::Block(a1))) / Float((int)4)));		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(236)
							hx::AddEq(r,_g2);
						}
					}
				}
				HX_STACK_LINE(236)
				_g1 = r;
			}
			HX_STACK_LINE(236)
			this->elementsPerVertex = _g1;
		}
		HX_STACK_LINE(238)
		while((true)){
			HX_STACK_LINE(238)
			if ((!(((iIndex < totalCount))))){
				HX_STACK_LINE(238)
				break;
			}
			HX_STACK_LINE(240)
			if (((this->batchedSprites >= this->maxSprites))){
				HX_STACK_LINE(241)
				this->flush();
			}
			HX_STACK_LINE(244)
			x = tileData->__get(iIndex);
			HX_STACK_LINE(245)
			y = tileData->__get((iIndex + (int)1));
			HX_STACK_LINE(247)
			if ((useRect)){
				HX_STACK_LINE(248)
				tileID = (int)-1;
				HX_STACK_LINE(250)
				rect->x = tileData->__get((iIndex + (int)2));
				HX_STACK_LINE(251)
				rect->y = tileData->__get((iIndex + (int)3));
				HX_STACK_LINE(252)
				rect->width = tileData->__get((iIndex + (int)4));
				HX_STACK_LINE(253)
				rect->height = tileData->__get((iIndex + (int)5));
				HX_STACK_LINE(255)
				if ((useOrigin)){
					HX_STACK_LINE(256)
					center->x = tileData->__get((iIndex + (int)6));
					HX_STACK_LINE(257)
					center->y = tileData->__get((iIndex + (int)7));
				}
				else{
					HX_STACK_LINE(259)
					center->x = (int)0;
					HX_STACK_LINE(259)
					center->y = (int)0;
				}
				HX_STACK_LINE(262)
				Float _g2 = rect->get_left();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(262)
				Float _g3 = (Float(_g2) / Float(sheet->__bitmap->width));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(262)
				Float _g4 = rect->get_top();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(262)
				Float _g5 = (Float(_g4) / Float(sheet->__bitmap->height));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(262)
				Float _g6 = rect->get_right();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(262)
				Float _g7 = (Float(_g6) / Float(sheet->__bitmap->width));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(262)
				Float _g8 = rect->get_bottom();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(262)
				Float _g9 = (Float(_g8) / Float(sheet->__bitmap->height));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(262)
				tileUV->setTo(_g3,_g5,_g7,_g9);
			}
			else{
				HX_STACK_LINE(264)
				int _g10 = ::Std_obj::_int(tileData->__get((iIndex + (int)2)));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(264)
				tileID = _g10;
				HX_STACK_LINE(265)
				rect = sheet->__tileRects->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();
				HX_STACK_LINE(266)
				center = sheet->__centerPoints->__get(tileID).StaticCast< ::openfl::geom::Point >();
				HX_STACK_LINE(267)
				tileUV = sheet->__tileUVs->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();
			}
			HX_STACK_LINE(270)
			if (((bool((bool((bool((rect != null())) && bool((rect->width > (int)0)))) && bool((rect->height > (int)0)))) && bool((center != null()))))){
				HX_STACK_LINE(272)
				alpha = (int)1;
				HX_STACK_LINE(273)
				tint = (int)16777215;
				HX_STACK_LINE(274)
				a = (int)1;
				HX_STACK_LINE(274)
				b = (int)0;
				HX_STACK_LINE(274)
				c = (int)0;
				HX_STACK_LINE(274)
				d = (int)1;
				HX_STACK_LINE(274)
				tx = (int)0;
				HX_STACK_LINE(274)
				ty = (int)0;
				HX_STACK_LINE(275)
				scale = 1.0;
				HX_STACK_LINE(276)
				rotation = 0.0;
				HX_STACK_LINE(277)
				cosTheta = 1.0;
				HX_STACK_LINE(278)
				sinTheta = 0.0;
				HX_STACK_LINE(279)
				matrix->identity();
				HX_STACK_LINE(281)
				if ((useAlpha)){
					HX_STACK_LINE(282)
					alpha = (tileData->__get((iIndex + alphaIndex)) * object->__worldAlpha);
				}
				else{
					HX_STACK_LINE(284)
					alpha = object->__worldAlpha;
				}
				HX_STACK_LINE(287)
				if ((useRGB)){
					HX_STACK_LINE(288)
					int _g11 = ::Std_obj::_int((tileData->__get((iIndex + rgbIndex)) * (int)255));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(288)
					int _g12 = (int(_g11) << int((int)16));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(288)
					int _g13 = ::Std_obj::_int((tileData->__get(((iIndex + rgbIndex) + (int)1)) * (int)255));		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(288)
					int _g14 = (int(_g13) << int((int)8));		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(288)
					int _g15 = (int(_g12) | int(_g14));		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(288)
					int _g16 = ::Std_obj::_int((tileData->__get(((iIndex + rgbIndex) + (int)2)) * (int)255));		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(288)
					int _g17 = (int(_g15) | int(_g16));		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(288)
					tint = _g17;
				}
				HX_STACK_LINE(291)
				if ((useScale)){
					HX_STACK_LINE(292)
					scale = tileData->__get((iIndex + scaleIndex));
				}
				HX_STACK_LINE(295)
				if ((useRotation)){
					HX_STACK_LINE(296)
					rotation = tileData->__get((iIndex + rotationIndex));
					HX_STACK_LINE(297)
					Float _g18 = ::Math_obj::cos(rotation);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(297)
					cosTheta = _g18;
					HX_STACK_LINE(298)
					Float _g19 = ::Math_obj::sin(rotation);		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(298)
					sinTheta = _g19;
				}
				HX_STACK_LINE(301)
				if ((useTransform)){
					HX_STACK_LINE(302)
					a = tileData->__get((iIndex + transformIndex));
					HX_STACK_LINE(303)
					b = tileData->__get(((iIndex + transformIndex) + (int)1));
					HX_STACK_LINE(304)
					c = tileData->__get(((iIndex + transformIndex) + (int)2));
					HX_STACK_LINE(305)
					d = tileData->__get(((iIndex + transformIndex) + (int)3));
				}
				else{
					HX_STACK_LINE(307)
					a = (scale * cosTheta);
					HX_STACK_LINE(308)
					b = (scale * sinTheta);
					HX_STACK_LINE(309)
					c = -(b);
					HX_STACK_LINE(310)
					d = a;
				}
				HX_STACK_LINE(313)
				ox = ((center->x * a) + (center->y * c));
				HX_STACK_LINE(314)
				oy = ((center->x * b) + (center->y * d));
				HX_STACK_LINE(316)
				tx = (x - ox);
				HX_STACK_LINE(317)
				ty = (y - oy);
				HX_STACK_LINE(319)
				matrix->a = ((a * oMatrix->a) + (b * oMatrix->c));
				HX_STACK_LINE(320)
				matrix->b = ((a * oMatrix->b) + (b * oMatrix->d));
				HX_STACK_LINE(321)
				matrix->c = ((c * oMatrix->a) + (d * oMatrix->c));
				HX_STACK_LINE(322)
				matrix->d = ((c * oMatrix->b) + (d * oMatrix->d));
				HX_STACK_LINE(323)
				matrix->tx = (((tx * oMatrix->a) + (ty * oMatrix->c)) + oMatrix->tx);
				HX_STACK_LINE(324)
				matrix->ty = (((tx * oMatrix->b) + (ty * oMatrix->d)) + oMatrix->ty);
				HX_STACK_LINE(326)
				uvs->x0 = tileUV->x;
				HX_STACK_LINE(326)
				uvs->y0 = tileUV->y;
				HX_STACK_LINE(327)
				uvs->x1 = tileUV->width;
				HX_STACK_LINE(327)
				uvs->y1 = tileUV->y;
				HX_STACK_LINE(328)
				uvs->x2 = tileUV->width;
				HX_STACK_LINE(328)
				uvs->y2 = tileUV->height;
				HX_STACK_LINE(329)
				uvs->x3 = tileUV->x;
				HX_STACK_LINE(329)
				uvs->y3 = tileUV->height;
				HX_STACK_LINE(331)
				bIndex = ((this->batchedSprites * (int)4) * this->elementsPerVertex);
				HX_STACK_LINE(333)
				int _g20 = ::Std_obj::_int((alpha * (int)255));		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(333)
				int _g21 = (int(_g20) & int((int)255));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(333)
				int _g22 = (int(_g21) << int((int)24));		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(333)
				int _g23 = (int(_g22) | int((int(((int(tint) & int((int)255)))) << int((int)16))));		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(333)
				int _g24 = (int(_g23) | int((int(((int((int(tint) >> int((int)8))) & int((int)255)))) << int((int)8))));		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(333)
				int _g25 = (int(_g24) | int((int((int(tint) >> int((int)16))) & int((int)255))));		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(333)
				color = _g25;
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					int index = bIndex;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(335)
					Float width = rect->width;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(335)
					Float height = rect->height;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(335)
					::openfl::display::PixelSnapping pixelSnapping = ::openfl::display::PixelSnapping_obj::NEVER;		HX_STACK_VAR(pixelSnapping,"pixelSnapping");
					HX_STACK_LINE(335)
					Float w0;		HX_STACK_VAR(w0,"w0");
					HX_STACK_LINE(335)
					Float w1;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(335)
					Float h0;		HX_STACK_VAR(h0,"h0");
					HX_STACK_LINE(335)
					Float h1;		HX_STACK_VAR(h1,"h1");
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						w0 = width;
						HX_STACK_LINE(335)
						w1 = (int)0;
						HX_STACK_LINE(335)
						h0 = height;
						HX_STACK_LINE(335)
						h1 = (int)0;
					}
					HX_STACK_LINE(335)
					if (((pixelSnapping == null()))){
						HX_STACK_LINE(335)
						pixelSnapping = ::openfl::display::PixelSnapping_obj::NEVER;
					}
					HX_STACK_LINE(335)
					bool snap = (pixelSnapping != ::openfl::display::PixelSnapping_obj::NEVER);		HX_STACK_VAR(snap,"snap");
					HX_STACK_LINE(335)
					Float a1 = matrix->a;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(335)
					Float b1 = matrix->b;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(335)
					Float c1 = matrix->c;		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(335)
					Float d1 = matrix->d;		HX_STACK_VAR(d1,"d1");
					HX_STACK_LINE(335)
					Float tx1 = matrix->tx;		HX_STACK_VAR(tx1,"tx1");
					HX_STACK_LINE(335)
					Float ty1 = matrix->ty;		HX_STACK_VAR(ty1,"ty1");
					HX_STACK_LINE(335)
					int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
					HX_STACK_LINE(335)
					if ((!(snap))){
						HX_STACK_LINE(335)
						int _g26 = (index)++;		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g26) = (((a1 * w1) + (c1 * h1)) + tx1);
						HX_STACK_LINE(335)
						int _g27 = (index)++;		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g27) = (((d1 * h1) + (b1 * w1)) + ty1);
					}
					else{
						HX_STACK_LINE(335)
						int _g28 = (index)++;		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g28) = ::Math_obj::fround((((a1 * w1) + (c1 * h1)) + tx1));
						HX_STACK_LINE(335)
						int _g29 = (index)++;		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g29) = ::Math_obj::fround((((d1 * h1) + (b1 * w1)) + ty1));
					}
					HX_STACK_LINE(335)
					int _g30 = (index)++;		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(335)
					hx::__ArrayImplRef(this->positions,_g30) = uvs->x0;
					HX_STACK_LINE(335)
					int _g31 = (index)++;		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(335)
					hx::__ArrayImplRef(this->positions,_g31) = uvs->y0;
					HX_STACK_LINE(335)
					if ((this->enableColor)){
						HX_STACK_LINE(335)
						int _g32 = (index)++;		HX_STACK_VAR(_g32,"_g32");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->colors,_g32) = color;
					}
					HX_STACK_LINE(335)
					if ((!(snap))){
						HX_STACK_LINE(335)
						int _g33 = (index)++;		HX_STACK_VAR(_g33,"_g33");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g33) = (((a1 * w0) + (c1 * h1)) + tx1);
						HX_STACK_LINE(335)
						int _g34 = (index)++;		HX_STACK_VAR(_g34,"_g34");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g34) = (((d1 * h1) + (b1 * w0)) + ty1);
					}
					else{
						HX_STACK_LINE(335)
						int _g35 = (index)++;		HX_STACK_VAR(_g35,"_g35");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g35) = ::Math_obj::fround((((a1 * w0) + (c1 * h1)) + tx1));
						HX_STACK_LINE(335)
						int _g36 = (index)++;		HX_STACK_VAR(_g36,"_g36");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g36) = ::Math_obj::fround((((d1 * h1) + (b1 * w0)) + ty1));
					}
					HX_STACK_LINE(335)
					int _g37 = (index)++;		HX_STACK_VAR(_g37,"_g37");
					HX_STACK_LINE(335)
					hx::__ArrayImplRef(this->positions,_g37) = uvs->x1;
					HX_STACK_LINE(335)
					int _g38 = (index)++;		HX_STACK_VAR(_g38,"_g38");
					HX_STACK_LINE(335)
					hx::__ArrayImplRef(this->positions,_g38) = uvs->y1;
					HX_STACK_LINE(335)
					if ((this->enableColor)){
						HX_STACK_LINE(335)
						int _g39 = (index)++;		HX_STACK_VAR(_g39,"_g39");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->colors,_g39) = color;
					}
					HX_STACK_LINE(335)
					if ((!(snap))){
						HX_STACK_LINE(335)
						int _g40 = (index)++;		HX_STACK_VAR(_g40,"_g40");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g40) = (((a1 * w0) + (c1 * h0)) + tx1);
						HX_STACK_LINE(335)
						int _g41 = (index)++;		HX_STACK_VAR(_g41,"_g41");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g41) = (((d1 * h0) + (b1 * w0)) + ty1);
					}
					else{
						HX_STACK_LINE(335)
						int _g42 = (index)++;		HX_STACK_VAR(_g42,"_g42");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g42) = ::Math_obj::fround((((a1 * w0) + (c1 * h0)) + tx1));
						HX_STACK_LINE(335)
						int _g43 = (index)++;		HX_STACK_VAR(_g43,"_g43");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g43) = ::Math_obj::fround((((d1 * h0) + (b1 * w0)) + ty1));
					}
					HX_STACK_LINE(335)
					int _g44 = (index)++;		HX_STACK_VAR(_g44,"_g44");
					HX_STACK_LINE(335)
					hx::__ArrayImplRef(this->positions,_g44) = uvs->x2;
					HX_STACK_LINE(335)
					int _g45 = (index)++;		HX_STACK_VAR(_g45,"_g45");
					HX_STACK_LINE(335)
					hx::__ArrayImplRef(this->positions,_g45) = uvs->y2;
					HX_STACK_LINE(335)
					if ((this->enableColor)){
						HX_STACK_LINE(335)
						int _g46 = (index)++;		HX_STACK_VAR(_g46,"_g46");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->colors,_g46) = color;
					}
					HX_STACK_LINE(335)
					if ((!(snap))){
						HX_STACK_LINE(335)
						int _g47 = (index)++;		HX_STACK_VAR(_g47,"_g47");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g47) = (((a1 * w1) + (c1 * h0)) + tx1);
						HX_STACK_LINE(335)
						int _g48 = (index)++;		HX_STACK_VAR(_g48,"_g48");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g48) = (((d1 * h0) + (b1 * w1)) + ty1);
					}
					else{
						HX_STACK_LINE(335)
						int _g49 = (index)++;		HX_STACK_VAR(_g49,"_g49");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g49) = ::Math_obj::fround((((a1 * w1) + (c1 * h0)) + tx1));
						HX_STACK_LINE(335)
						int _g50 = (index)++;		HX_STACK_VAR(_g50,"_g50");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->positions,_g50) = ::Math_obj::fround((((d1 * h0) + (b1 * w1)) + ty1));
					}
					HX_STACK_LINE(335)
					int _g51 = (index)++;		HX_STACK_VAR(_g51,"_g51");
					HX_STACK_LINE(335)
					hx::__ArrayImplRef(this->positions,_g51) = uvs->x3;
					HX_STACK_LINE(335)
					int _g52 = (index)++;		HX_STACK_VAR(_g52,"_g52");
					HX_STACK_LINE(335)
					hx::__ArrayImplRef(this->positions,_g52) = uvs->y3;
					HX_STACK_LINE(335)
					if ((this->enableColor)){
						HX_STACK_LINE(335)
						int _g53 = (index)++;		HX_STACK_VAR(_g53,"_g53");
						HX_STACK_LINE(335)
						hx::__ArrayImplRef(this->colors,_g53) = color;
					}
					HX_STACK_LINE(335)
					this->writtenVertexBytes = index;
				}
				HX_STACK_LINE(337)
				this->setState(this->batchedSprites,texture,smooth,blendMode,object->__worldColorTransform,false);
				HX_STACK_LINE(339)
				(this->batchedSprites)++;
			}
			HX_STACK_LINE(342)
			hx::AddEq(iIndex,numValues);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(SpriteBatch_obj,renderTiles,(void))

Void SpriteBatch_obj::renderCachedGraphics( ::openfl::display::DisplayObject object){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderCachedGraphics",0x0e6ae93d,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderCachedGraphics","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",347,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(348)
		::openfl::_internal::renderer::opengl::utils::FilterTexture cachedTexture = object->__graphics->__cachedTexture;		HX_STACK_VAR(cachedTexture,"cachedTexture");
		HX_STACK_LINE(350)
		if (((cachedTexture == null()))){
			HX_STACK_LINE(350)
			return null();
		}
		HX_STACK_LINE(352)
		if (((this->batchedSprites >= this->maxSprites))){
			HX_STACK_LINE(353)
			this->flush();
		}
		HX_STACK_LINE(356)
		Float alpha = object->__worldAlpha;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(357)
		int _g = ::Std_obj::_int((alpha * (int)255));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(357)
		int _g1 = (int(_g) & int((int)255));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(357)
		int _g2 = (int(_g1) << int((int)24));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(357)
		int color = (int(_g2) | int((int)16777215));		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(360)
		::openfl::display::TextureUvs uvs = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(361)
		uvs->x0 = (int)0;
		HX_STACK_LINE(361)
		uvs->y0 = (int)1;
		HX_STACK_LINE(362)
		uvs->x1 = (int)1;
		HX_STACK_LINE(362)
		uvs->y1 = (int)1;
		HX_STACK_LINE(363)
		uvs->x2 = (int)1;
		HX_STACK_LINE(363)
		uvs->y2 = (int)0;
		HX_STACK_LINE(364)
		uvs->x3 = (int)0;
		HX_STACK_LINE(364)
		uvs->y3 = (int)0;
		HX_STACK_LINE(366)
		::openfl::geom::Matrix worldTransform;		HX_STACK_VAR(worldTransform,"worldTransform");
		HX_STACK_LINE(366)
		{
			HX_STACK_LINE(366)
			::openfl::geom::Matrix _this = object->__worldTransform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(366)
			worldTransform = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
		}
		HX_STACK_LINE(367)
		{
			HX_STACK_LINE(367)
			::openfl::geom::Point pos = ::openfl::geom::Point_obj::__new(object->__graphics->__bounds->x,object->__graphics->__bounds->y);		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(367)
			worldTransform->tx = (((pos->x * worldTransform->a) + (pos->y * worldTransform->c)) + worldTransform->tx);
			HX_STACK_LINE(367)
			worldTransform->ty = (((pos->x * worldTransform->b) + (pos->y * worldTransform->d)) + worldTransform->ty);
		}
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			this->enableColor = (color != (int)-1);
			HX_STACK_LINE(369)
			if (((this->enableColor != this->lastEnableColor))){
				HX_STACK_LINE(369)
				this->flush();
				HX_STACK_LINE(369)
				this->lastEnableColor = this->enableColor;
			}
			HX_STACK_LINE(369)
			this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >()->enabled = this->lastEnableColor;
			HX_STACK_LINE(369)
			int _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(369)
			{
				HX_STACK_LINE(369)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(369)
				{
					HX_STACK_LINE(369)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(369)
					Array< ::Dynamic > _g11 = this->attributes;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(369)
					while((true)){
						HX_STACK_LINE(369)
						if ((!(((_g3 < _g11->length))))){
							HX_STACK_LINE(369)
							break;
						}
						HX_STACK_LINE(369)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a = _g11->__get(_g3).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(369)
						++(_g3);
						HX_STACK_LINE(369)
						if ((a->enabled)){
							struct _Function_6_1{
								inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &a){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",369,0x8289eb2d)
									{
										HX_STACK_LINE(369)
										int _g5 = a->type;		HX_STACK_VAR(_g5,"_g5");
										struct _Function_7_1{
											inline static int Block( int &_g5){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",369,0x8289eb2d)
												{
													HX_STACK_LINE(369)
													switch( (int)(_g5)){
														case (int)5120: case (int)5121: {
															HX_STACK_LINE(369)
															return (int)1;
														}
														;break;
														case (int)5122: case (int)5123: {
															HX_STACK_LINE(369)
															return (int)2;
														}
														;break;
														default: {
															HX_STACK_LINE(369)
															return (int)4;
														}
													}
												}
												return null();
											}
										};
										HX_STACK_LINE(369)
										return _Function_7_1::Block(_g5);
									}
									return null();
								}
							};
							HX_STACK_LINE(369)
							int _g31 = ::Math_obj::floor((Float((a->components * _Function_6_1::Block(a))) / Float((int)4)));		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(369)
							hx::AddEq(r,_g31);
						}
					}
				}
				HX_STACK_LINE(369)
				_g4 = r;
			}
			HX_STACK_LINE(369)
			this->elementsPerVertex = _g4;
		}
		HX_STACK_LINE(371)
		int index = ((this->batchedSprites * (int)4) * this->elementsPerVertex);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(372)
		{
			HX_STACK_LINE(372)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(372)
			Float width = cachedTexture->width;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(372)
			Float height = cachedTexture->height;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(372)
			::openfl::display::PixelSnapping pixelSnapping = null();		HX_STACK_VAR(pixelSnapping,"pixelSnapping");
			HX_STACK_LINE(372)
			Float w0;		HX_STACK_VAR(w0,"w0");
			HX_STACK_LINE(372)
			Float w1;		HX_STACK_VAR(w1,"w1");
			HX_STACK_LINE(372)
			Float h0;		HX_STACK_VAR(h0,"h0");
			HX_STACK_LINE(372)
			Float h1;		HX_STACK_VAR(h1,"h1");
			HX_STACK_LINE(372)
			{
				HX_STACK_LINE(372)
				w0 = width;
				HX_STACK_LINE(372)
				w1 = (int)0;
				HX_STACK_LINE(372)
				h0 = height;
				HX_STACK_LINE(372)
				h1 = (int)0;
			}
			HX_STACK_LINE(372)
			if (((pixelSnapping == null()))){
				HX_STACK_LINE(372)
				pixelSnapping = ::openfl::display::PixelSnapping_obj::NEVER;
			}
			HX_STACK_LINE(372)
			bool snap = (pixelSnapping != ::openfl::display::PixelSnapping_obj::NEVER);		HX_STACK_VAR(snap,"snap");
			HX_STACK_LINE(372)
			Float a = worldTransform->a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(372)
			Float b = worldTransform->b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(372)
			Float c = worldTransform->c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(372)
			Float d = worldTransform->d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(372)
			Float tx = worldTransform->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(372)
			Float ty = worldTransform->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(372)
			int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
			HX_STACK_LINE(372)
			if ((!(snap))){
				HX_STACK_LINE(372)
				int _g5 = (index1)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g5) = (((a * w1) + (c * h1)) + tx);
				HX_STACK_LINE(372)
				int _g6 = (index1)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g6) = (((d * h1) + (b * w1)) + ty);
			}
			else{
				HX_STACK_LINE(372)
				int _g7 = (index1)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g7) = ::Math_obj::fround((((a * w1) + (c * h1)) + tx));
				HX_STACK_LINE(372)
				int _g8 = (index1)++;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g8) = ::Math_obj::fround((((d * h1) + (b * w1)) + ty));
			}
			HX_STACK_LINE(372)
			int _g9 = (index1)++;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(372)
			hx::__ArrayImplRef(this->positions,_g9) = uvs->x0;
			HX_STACK_LINE(372)
			int _g10 = (index1)++;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(372)
			hx::__ArrayImplRef(this->positions,_g10) = uvs->y0;
			HX_STACK_LINE(372)
			if ((this->enableColor)){
				HX_STACK_LINE(372)
				int _g11 = (index1)++;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->colors,_g11) = color;
			}
			HX_STACK_LINE(372)
			if ((!(snap))){
				HX_STACK_LINE(372)
				int _g12 = (index1)++;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g12) = (((a * w0) + (c * h1)) + tx);
				HX_STACK_LINE(372)
				int _g13 = (index1)++;		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g13) = (((d * h1) + (b * w0)) + ty);
			}
			else{
				HX_STACK_LINE(372)
				int _g14 = (index1)++;		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g14) = ::Math_obj::fround((((a * w0) + (c * h1)) + tx));
				HX_STACK_LINE(372)
				int _g15 = (index1)++;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g15) = ::Math_obj::fround((((d * h1) + (b * w0)) + ty));
			}
			HX_STACK_LINE(372)
			int _g16 = (index1)++;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(372)
			hx::__ArrayImplRef(this->positions,_g16) = uvs->x1;
			HX_STACK_LINE(372)
			int _g17 = (index1)++;		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(372)
			hx::__ArrayImplRef(this->positions,_g17) = uvs->y1;
			HX_STACK_LINE(372)
			if ((this->enableColor)){
				HX_STACK_LINE(372)
				int _g18 = (index1)++;		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->colors,_g18) = color;
			}
			HX_STACK_LINE(372)
			if ((!(snap))){
				HX_STACK_LINE(372)
				int _g19 = (index1)++;		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g19) = (((a * w0) + (c * h0)) + tx);
				HX_STACK_LINE(372)
				int _g20 = (index1)++;		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g20) = (((d * h0) + (b * w0)) + ty);
			}
			else{
				HX_STACK_LINE(372)
				int _g21 = (index1)++;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g21) = ::Math_obj::fround((((a * w0) + (c * h0)) + tx));
				HX_STACK_LINE(372)
				int _g22 = (index1)++;		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g22) = ::Math_obj::fround((((d * h0) + (b * w0)) + ty));
			}
			HX_STACK_LINE(372)
			int _g23 = (index1)++;		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(372)
			hx::__ArrayImplRef(this->positions,_g23) = uvs->x2;
			HX_STACK_LINE(372)
			int _g24 = (index1)++;		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(372)
			hx::__ArrayImplRef(this->positions,_g24) = uvs->y2;
			HX_STACK_LINE(372)
			if ((this->enableColor)){
				HX_STACK_LINE(372)
				int _g25 = (index1)++;		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->colors,_g25) = color;
			}
			HX_STACK_LINE(372)
			if ((!(snap))){
				HX_STACK_LINE(372)
				int _g26 = (index1)++;		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g26) = (((a * w1) + (c * h0)) + tx);
				HX_STACK_LINE(372)
				int _g27 = (index1)++;		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g27) = (((d * h0) + (b * w1)) + ty);
			}
			else{
				HX_STACK_LINE(372)
				int _g28 = (index1)++;		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g28) = ::Math_obj::fround((((a * w1) + (c * h0)) + tx));
				HX_STACK_LINE(372)
				int _g29 = (index1)++;		HX_STACK_VAR(_g29,"_g29");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->positions,_g29) = ::Math_obj::fround((((d * h0) + (b * w1)) + ty));
			}
			HX_STACK_LINE(372)
			int _g30 = (index1)++;		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(372)
			hx::__ArrayImplRef(this->positions,_g30) = uvs->x3;
			HX_STACK_LINE(372)
			int _g31 = (index1)++;		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(372)
			hx::__ArrayImplRef(this->positions,_g31) = uvs->y3;
			HX_STACK_LINE(372)
			if ((this->enableColor)){
				HX_STACK_LINE(372)
				int _g32 = (index1)++;		HX_STACK_VAR(_g32,"_g32");
				HX_STACK_LINE(372)
				hx::__ArrayImplRef(this->colors,_g32) = color;
			}
			HX_STACK_LINE(372)
			this->writtenVertexBytes = index1;
		}
		HX_STACK_LINE(374)
		this->setState(this->batchedSprites,cachedTexture->texture,null(),object->blendMode,object->__worldColorTransform,null());
		HX_STACK_LINE(376)
		(this->batchedSprites)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,renderCachedGraphics,(void))

Void SpriteBatch_obj::fillVertices( int index,Float width,Float height,::openfl::geom::Matrix matrix,::openfl::display::TextureUvs uvs,::openfl::geom::Point pivot,Dynamic __o_color,::openfl::display::PixelSnapping pixelSnapping){
Dynamic color = __o_color.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","fillVertices",0x1e5d3416,"openfl._internal.renderer.opengl.utils.SpriteBatch.fillVertices","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",380,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(uvs,"uvs")
	HX_STACK_ARG(pivot,"pivot")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(pixelSnapping,"pixelSnapping")
{
		HX_STACK_LINE(382)
		Float w0;		HX_STACK_VAR(w0,"w0");
		HX_STACK_LINE(382)
		Float w1;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(382)
		Float h0;		HX_STACK_VAR(h0,"h0");
		HX_STACK_LINE(382)
		Float h1;		HX_STACK_VAR(h1,"h1");
		HX_STACK_LINE(385)
		if (((pivot == null()))){
			HX_STACK_LINE(386)
			w0 = width;
			HX_STACK_LINE(386)
			w1 = (int)0;
			HX_STACK_LINE(387)
			h0 = height;
			HX_STACK_LINE(387)
			h1 = (int)0;
		}
		else{
			HX_STACK_LINE(389)
			w0 = (width * (((int)1 - pivot->x)));
			HX_STACK_LINE(390)
			w1 = (width * -(pivot->x));
			HX_STACK_LINE(391)
			h0 = (height * (((int)1 - pivot->y)));
			HX_STACK_LINE(392)
			h1 = (height * -(pivot->y));
		}
		HX_STACK_LINE(395)
		if (((pixelSnapping == null()))){
			HX_STACK_LINE(396)
			pixelSnapping = ::openfl::display::PixelSnapping_obj::NEVER;
		}
		HX_STACK_LINE(399)
		bool snap = (pixelSnapping != ::openfl::display::PixelSnapping_obj::NEVER);		HX_STACK_VAR(snap,"snap");
		HX_STACK_LINE(400)
		Float a = matrix->a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(401)
		Float b = matrix->b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(402)
		Float c = matrix->c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(403)
		Float d = matrix->d;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(404)
		Float tx = matrix->tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(405)
		Float ty = matrix->ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(406)
		int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
		HX_STACK_LINE(408)
		if ((!(snap))){
			HX_STACK_LINE(409)
			int _g = (index)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(409)
			hx::__ArrayImplRef(this->positions,_g) = (((a * w1) + (c * h1)) + tx);
			HX_STACK_LINE(410)
			int _g1 = (index)++;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(410)
			hx::__ArrayImplRef(this->positions,_g1) = (((d * h1) + (b * w1)) + ty);
		}
		else{
			HX_STACK_LINE(412)
			int _g2 = (index)++;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(412)
			hx::__ArrayImplRef(this->positions,_g2) = ::Math_obj::fround((((a * w1) + (c * h1)) + tx));
			HX_STACK_LINE(413)
			int _g3 = (index)++;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(413)
			hx::__ArrayImplRef(this->positions,_g3) = ::Math_obj::fround((((d * h1) + (b * w1)) + ty));
		}
		HX_STACK_LINE(415)
		int _g4 = (index)++;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(415)
		hx::__ArrayImplRef(this->positions,_g4) = uvs->x0;
		HX_STACK_LINE(416)
		int _g5 = (index)++;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(416)
		hx::__ArrayImplRef(this->positions,_g5) = uvs->y0;
		HX_STACK_LINE(417)
		if ((this->enableColor)){
			HX_STACK_LINE(418)
			int _g6 = (index)++;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(418)
			hx::__ArrayImplRef(this->colors,_g6) = color;
		}
		HX_STACK_LINE(421)
		if ((!(snap))){
			HX_STACK_LINE(422)
			int _g7 = (index)++;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(422)
			hx::__ArrayImplRef(this->positions,_g7) = (((a * w0) + (c * h1)) + tx);
			HX_STACK_LINE(423)
			int _g8 = (index)++;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(423)
			hx::__ArrayImplRef(this->positions,_g8) = (((d * h1) + (b * w0)) + ty);
		}
		else{
			HX_STACK_LINE(425)
			int _g9 = (index)++;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(425)
			hx::__ArrayImplRef(this->positions,_g9) = ::Math_obj::fround((((a * w0) + (c * h1)) + tx));
			HX_STACK_LINE(426)
			int _g10 = (index)++;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(426)
			hx::__ArrayImplRef(this->positions,_g10) = ::Math_obj::fround((((d * h1) + (b * w0)) + ty));
		}
		HX_STACK_LINE(428)
		int _g11 = (index)++;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(428)
		hx::__ArrayImplRef(this->positions,_g11) = uvs->x1;
		HX_STACK_LINE(429)
		int _g12 = (index)++;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(429)
		hx::__ArrayImplRef(this->positions,_g12) = uvs->y1;
		HX_STACK_LINE(430)
		if ((this->enableColor)){
			HX_STACK_LINE(431)
			int _g13 = (index)++;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(431)
			hx::__ArrayImplRef(this->colors,_g13) = color;
		}
		HX_STACK_LINE(434)
		if ((!(snap))){
			HX_STACK_LINE(435)
			int _g14 = (index)++;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(435)
			hx::__ArrayImplRef(this->positions,_g14) = (((a * w0) + (c * h0)) + tx);
			HX_STACK_LINE(436)
			int _g15 = (index)++;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(436)
			hx::__ArrayImplRef(this->positions,_g15) = (((d * h0) + (b * w0)) + ty);
		}
		else{
			HX_STACK_LINE(438)
			int _g16 = (index)++;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(438)
			hx::__ArrayImplRef(this->positions,_g16) = ::Math_obj::fround((((a * w0) + (c * h0)) + tx));
			HX_STACK_LINE(439)
			int _g17 = (index)++;		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(439)
			hx::__ArrayImplRef(this->positions,_g17) = ::Math_obj::fround((((d * h0) + (b * w0)) + ty));
		}
		HX_STACK_LINE(441)
		int _g18 = (index)++;		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(441)
		hx::__ArrayImplRef(this->positions,_g18) = uvs->x2;
		HX_STACK_LINE(442)
		int _g19 = (index)++;		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(442)
		hx::__ArrayImplRef(this->positions,_g19) = uvs->y2;
		HX_STACK_LINE(443)
		if ((this->enableColor)){
			HX_STACK_LINE(444)
			int _g20 = (index)++;		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(444)
			hx::__ArrayImplRef(this->colors,_g20) = color;
		}
		HX_STACK_LINE(447)
		if ((!(snap))){
			HX_STACK_LINE(448)
			int _g21 = (index)++;		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(448)
			hx::__ArrayImplRef(this->positions,_g21) = (((a * w1) + (c * h0)) + tx);
			HX_STACK_LINE(449)
			int _g22 = (index)++;		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(449)
			hx::__ArrayImplRef(this->positions,_g22) = (((d * h0) + (b * w1)) + ty);
		}
		else{
			HX_STACK_LINE(451)
			int _g23 = (index)++;		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(451)
			hx::__ArrayImplRef(this->positions,_g23) = ::Math_obj::fround((((a * w1) + (c * h0)) + tx));
			HX_STACK_LINE(452)
			int _g24 = (index)++;		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(452)
			hx::__ArrayImplRef(this->positions,_g24) = ::Math_obj::fround((((d * h0) + (b * w1)) + ty));
		}
		HX_STACK_LINE(454)
		int _g25 = (index)++;		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(454)
		hx::__ArrayImplRef(this->positions,_g25) = uvs->x3;
		HX_STACK_LINE(455)
		int _g26 = (index)++;		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(455)
		hx::__ArrayImplRef(this->positions,_g26) = uvs->y3;
		HX_STACK_LINE(456)
		if ((this->enableColor)){
			HX_STACK_LINE(457)
			int _g27 = (index)++;		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(457)
			hx::__ArrayImplRef(this->colors,_g27) = color;
		}
		HX_STACK_LINE(460)
		this->writtenVertexBytes = index;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(SpriteBatch_obj,fillVertices,(void))

Void SpriteBatch_obj::enableAttributes( Dynamic __o_color){
Dynamic color = __o_color.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","enableAttributes",0x7705b0b4,"openfl._internal.renderer.opengl.utils.SpriteBatch.enableAttributes","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",463,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(464)
		this->enableColor = (color != (int)-1);
		HX_STACK_LINE(466)
		if (((this->enableColor != this->lastEnableColor))){
			HX_STACK_LINE(467)
			this->flush();
			HX_STACK_LINE(468)
			this->lastEnableColor = this->enableColor;
		}
		HX_STACK_LINE(471)
		this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >()->enabled = this->lastEnableColor;
		HX_STACK_LINE(473)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(473)
		{
			HX_STACK_LINE(473)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(473)
			{
				HX_STACK_LINE(473)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(473)
				Array< ::Dynamic > _g11 = this->attributes;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(473)
				while((true)){
					HX_STACK_LINE(473)
					if ((!(((_g < _g11->length))))){
						HX_STACK_LINE(473)
						break;
					}
					HX_STACK_LINE(473)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute a = _g11->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(473)
					++(_g);
					HX_STACK_LINE(473)
					if ((a->enabled)){
						struct _Function_5_1{
							inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &a){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",473,0x8289eb2d)
								{
									HX_STACK_LINE(473)
									int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
									struct _Function_6_1{
										inline static int Block( int &_g2){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",473,0x8289eb2d)
											{
												HX_STACK_LINE(473)
												switch( (int)(_g2)){
													case (int)5120: case (int)5121: {
														HX_STACK_LINE(473)
														return (int)1;
													}
													;break;
													case (int)5122: case (int)5123: {
														HX_STACK_LINE(473)
														return (int)2;
													}
													;break;
													default: {
														HX_STACK_LINE(473)
														return (int)4;
													}
												}
											}
											return null();
										}
									};
									HX_STACK_LINE(473)
									return _Function_6_1::Block(_g2);
								}
								return null();
							}
						};
						HX_STACK_LINE(473)
						int _g2 = ::Math_obj::floor((Float((a->components * _Function_5_1::Block(a))) / Float((int)4)));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(473)
						hx::AddEq(r,_g2);
					}
				}
			}
			HX_STACK_LINE(473)
			_g1 = r;
		}
		HX_STACK_LINE(473)
		this->elementsPerVertex = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,enableAttributes,(void))

Void SpriteBatch_obj::flush( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","flush",0xaa58290a,"openfl._internal.renderer.opengl.utils.SpriteBatch.flush","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",476,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(477)
		if (((this->batchedSprites == (int)0))){
			HX_STACK_LINE(477)
			return null();
		}
		HX_STACK_LINE(479)
		if (((this->clipRect == null()))){
			HX_STACK_LINE(480)
			::lime::graphics::opengl::GL_obj::lime_gl_disable(this->gl->SCISSOR_TEST);
		}
		else{
			HX_STACK_LINE(482)
			::lime::graphics::opengl::GL_obj::lime_gl_enable(this->gl->SCISSOR_TEST);
			HX_STACK_LINE(483)
			{
				HX_STACK_LINE(483)
				int x = ::Math_obj::floor(this->clipRect->x);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(484)
				int y = ::Math_obj::floor(this->clipRect->y);		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(485)
				int width = ::Math_obj::floor(this->clipRect->width);		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(486)
				int height = ::Math_obj::floor(this->clipRect->height);		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(483)
				::lime::graphics::opengl::GL_obj::lime_gl_scissor(x,y,width,height);
			}
		}
		HX_STACK_LINE(490)
		if ((this->dirty)){
			HX_STACK_LINE(491)
			this->dirty = false;
			HX_STACK_LINE(493)
			::lime::graphics::opengl::GL_obj::lime_gl_active_texture(this->gl->TEXTURE0);
			HX_STACK_LINE(495)
			{
				HX_STACK_LINE(495)
				::openfl::_internal::renderer::opengl::utils::VertexArray _this = this->vertexArray;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(495)
				{
					HX_STACK_LINE(495)
					::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(495)
					::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(_this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
				}
			}
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				::lime::graphics::opengl::GLBuffer buffer = this->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(496)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(this->gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
			}
		}
		HX_STACK_LINE(499)
		if (((this->writtenVertexBytes > (this->vertexArraySize * 0.5)))){
			HX_STACK_LINE(500)
			this->vertexArray->upload(this->positions);
		}
		else{
			HX_STACK_LINE(502)
			::lime::utils::Float32Array view = this->positions->subarray((int)0,this->writtenVertexBytes);		HX_STACK_VAR(view,"view");
			HX_STACK_LINE(503)
			this->vertexArray->upload(view);
		}
		HX_STACK_LINE(506)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State nextState;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(507)
		int batchSize = (int)0;		HX_STACK_VAR(batchSize,"batchSize");
		HX_STACK_LINE(508)
		int start = (int)0;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(510)
		this->currentState->shader = this->renderSession->shaderManager->defaultShader;
		HX_STACK_LINE(511)
		this->currentState->texture = null();
		HX_STACK_LINE(512)
		this->currentState->textureSmooth = false;
		HX_STACK_LINE(513)
		this->currentState->blendMode = this->renderSession->blendModeManager->currentBlendMode;
		HX_STACK_LINE(514)
		this->currentState->colorTransform = null();
		HX_STACK_LINE(515)
		this->currentState->skipColorTransformAlpha = false;
		HX_STACK_LINE(517)
		{
			HX_STACK_LINE(517)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(517)
			int _g = this->batchedSprites;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(517)
			while((true)){
				HX_STACK_LINE(517)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(517)
					break;
				}
				HX_STACK_LINE(517)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(518)
				nextState = this->states->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();
				HX_STACK_LINE(519)
				this->currentState->skipColorTransformAlpha = nextState->skipColorTransformAlpha;
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::openfl::_internal::renderer::opengl::utils::SpriteBatch_obj > __this,::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State &nextState){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",520,0x8289eb2d)
						{
							HX_STACK_LINE(520)
							::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State other = __this->currentState;		HX_STACK_VAR(other,"other");
							struct _Function_4_1{
								inline static bool Block( ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State &other,::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State &nextState){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",520,0x8289eb2d)
									{
										HX_STACK_LINE(520)
										return (  (((nextState->colorTransform != null()))) ? bool(nextState->colorTransform->__equals(other->colorTransform,nextState->skipColorTransformAlpha)) : bool(false) );
									}
									return null();
								}
							};
							HX_STACK_LINE(520)
							return (  (((bool((bool((bool(((bool((bool((nextState->shader == null())) || bool((other->shader == null())))) || bool((nextState->shader->ID == other->shader->ID))))) && bool((nextState->texture == other->texture)))) && bool((nextState->textureSmooth == other->textureSmooth)))) && bool((nextState->blendMode == other->blendMode))))) ? bool(_Function_4_1::Block(other,nextState)) : bool(false) );
						}
						return null();
					}
				};
				HX_STACK_LINE(520)
				if ((!(_Function_3_1::Block(this,nextState)))){
					HX_STACK_LINE(521)
					this->renderBatch(this->currentState,batchSize,start);
					HX_STACK_LINE(523)
					start = i;
					HX_STACK_LINE(524)
					batchSize = (int)0;
					HX_STACK_LINE(526)
					this->currentState->shader = nextState->shader;
					HX_STACK_LINE(527)
					this->currentState->texture = nextState->texture;
					HX_STACK_LINE(528)
					this->currentState->textureSmooth = nextState->textureSmooth;
					HX_STACK_LINE(529)
					this->currentState->blendMode = nextState->blendMode;
					HX_STACK_LINE(530)
					this->currentState->colorTransform = nextState->colorTransform;
				}
				HX_STACK_LINE(533)
				(batchSize)++;
			}
		}
		HX_STACK_LINE(536)
		this->renderBatch(this->currentState,batchSize,start);
		HX_STACK_LINE(537)
		this->batchedSprites = (int)0;
		HX_STACK_LINE(538)
		this->writtenVertexBytes = (int)0;
		HX_STACK_LINE(540)
		if (((this->clipRect != null()))){
			HX_STACK_LINE(541)
			::lime::graphics::opengl::GL_obj::lime_gl_disable(this->gl->SCISSOR_TEST);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,flush,(void))

Void SpriteBatch_obj::renderBatch( ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state,int size,int start){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderBatch",0x8edfd34a,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderBatch","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",547,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(start,"start")
		HX_STACK_LINE(548)
		if (((bool((size == (int)0)) || bool((state->texture == null()))))){
			HX_STACK_LINE(548)
			return null();
		}
		HX_STACK_LINE(550)
		::openfl::_internal::renderer::opengl::shaders2::Shader shader;		HX_STACK_VAR(shader,"shader");
		HX_STACK_LINE(550)
		if (((state->shader == null()))){
			HX_STACK_LINE(550)
			shader = this->renderSession->shaderManager->defaultShader;
		}
		else{
			HX_STACK_LINE(550)
			shader = state->shader;
		}
		HX_STACK_LINE(551)
		this->renderSession->shaderManager->setShader(shader,null());
		HX_STACK_LINE(554)
		shader->bindVertexArray(this->vertexArray);
		HX_STACK_LINE(556)
		{
			HX_STACK_LINE(556)
			int location = shader->getUniformLocation(HX_CSTRING("uProjectionMatrix"));		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(556)
			::lime::utils::Float32Array v = this->renderSession->projectionMatrix->toArray(true);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(556)
			{
				HX_STACK_LINE(556)
				::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(556)
				::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g,(int)3);
			}
		}
		HX_STACK_LINE(558)
		if (((state->colorTransform != null()))){
			HX_STACK_LINE(559)
			::openfl::geom::ColorTransform ct = state->colorTransform;		HX_STACK_VAR(ct,"ct");
			HX_STACK_LINE(560)
			{
				HX_STACK_LINE(560)
				int location = shader->getUniformLocation(HX_CSTRING("uColorMultiplier"));		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(560)
				::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,ct->redMultiplier,ct->greenMultiplier,ct->blueMultiplier,(  ((state->skipColorTransformAlpha)) ? Float((int)1) : Float(ct->alphaMultiplier) ));
			}
			HX_STACK_LINE(562)
			{
				HX_STACK_LINE(562)
				int location = shader->getUniformLocation(HX_CSTRING("uColorOffset"));		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(562)
				::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,(Float(ct->redOffset) / Float(255.)),(Float(ct->greenOffset) / Float(255.)),(Float(ct->blueOffset) / Float(255.)),(Float(ct->alphaOffset) / Float(255.)));
			}
		}
		else{
			HX_STACK_LINE(565)
			{
				HX_STACK_LINE(565)
				int location = shader->getUniformLocation(HX_CSTRING("uColorMultiplier"));		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(565)
				::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,(int)1,(int)1,(int)1,(int)1);
			}
			HX_STACK_LINE(566)
			{
				HX_STACK_LINE(566)
				int location = shader->getUniformLocation(HX_CSTRING("uColorOffset"));		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(566)
				::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,(int)0,(int)0,(int)0,(int)0);
			}
		}
		HX_STACK_LINE(569)
		this->renderSession->blendModeManager->setBlendMode(state->blendMode,null());
		HX_STACK_LINE(570)
		{
			HX_STACK_LINE(570)
			::lime::graphics::opengl::GLTexture texture = state->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(570)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(this->gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(572)
		if ((state->textureSmooth)){
			HX_STACK_LINE(574)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_MAG_FILTER,this->gl->LINEAR);
			HX_STACK_LINE(575)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_MIN_FILTER,this->gl->LINEAR);
		}
		else{
			HX_STACK_LINE(577)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_MAG_FILTER,this->gl->NEAREST);
			HX_STACK_LINE(578)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_MIN_FILTER,this->gl->NEAREST);
		}
		HX_STACK_LINE(581)
		::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(this->gl->TRIANGLES,(size * (int)6),this->gl->UNSIGNED_SHORT,((start * (int)6) * (int)2));
		HX_STACK_LINE(583)
		(this->renderSession->drawCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteBatch_obj,renderBatch,(void))

Void SpriteBatch_obj::setState( int index,::lime::graphics::opengl::GLTexture texture,Dynamic __o_smooth,::openfl::display::BlendMode blendMode,::openfl::geom::ColorTransform colorTransform,Dynamic __o_skipAlpha){
Dynamic smooth = __o_smooth.Default(false);
Dynamic skipAlpha = __o_skipAlpha.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","setState",0x7687c889,"openfl._internal.renderer.opengl.utils.SpriteBatch.setState","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",587,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(texture,"texture")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(skipAlpha,"skipAlpha")
{
		HX_STACK_LINE(588)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = this->states->__get(index).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(589)
		if (((state == null()))){
			HX_STACK_LINE(590)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State _g = this->states[index] = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(590)
			state = _g;
		}
		HX_STACK_LINE(592)
		state->texture = texture;
		HX_STACK_LINE(593)
		state->textureSmooth = smooth;
		HX_STACK_LINE(594)
		state->blendMode = blendMode;
		HX_STACK_LINE(595)
		state->colorTransform = colorTransform;
		HX_STACK_LINE(596)
		state->skipColorTransformAlpha = skipAlpha;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(SpriteBatch_obj,setState,(void))

Void SpriteBatch_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","setContext",0xe1877667,"openfl._internal.renderer.opengl.utils.SpriteBatch.setContext","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",599,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(600)
		this->gl = gl;
		HX_STACK_LINE(602)
		this->vertexArray->setContext(gl,this->positions);
		HX_STACK_LINE(604)
		int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(604)
		Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(604)
		::lime::graphics::opengl::GLBuffer _g2 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(604)
		this->indexBuffer = _g2;
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::lime::graphics::opengl::GLBuffer buffer = this->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(605)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(606)
		{
			HX_STACK_LINE(606)
			::lime::utils::ArrayBufferView data = this->indices;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(606)
			{
				HX_STACK_LINE(606)
				::lime::utils::ByteArray _g3 = data->getByteBuffer();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(606)
				int _g4 = data->getStart();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(606)
				int _g5 = data->getLength();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(606)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(gl->ELEMENT_ARRAY_BUFFER,_g3,_g4,_g5,gl->STATIC_DRAW);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,setContext,(void))

int SpriteBatch_obj::getElementsPerVertex( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","getElementsPerVertex",0x09fa41ee,"openfl._internal.renderer.opengl.utils.SpriteBatch.getElementsPerVertex","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",611,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(612)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(614)
	{
		HX_STACK_LINE(614)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(614)
		Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(614)
		while((true)){
			HX_STACK_LINE(614)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(614)
				break;
			}
			HX_STACK_LINE(614)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(614)
			++(_g);
			HX_STACK_LINE(615)
			if ((a->enabled)){
				struct _Function_4_1{
					inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &a){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",615,0x8289eb2d)
						{
							HX_STACK_LINE(615)
							int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
							struct _Function_5_1{
								inline static int Block( int &_g2){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",615,0x8289eb2d)
									{
										HX_STACK_LINE(615)
										switch( (int)(_g2)){
											case (int)5120: case (int)5121: {
												HX_STACK_LINE(615)
												return (int)1;
											}
											;break;
											case (int)5122: case (int)5123: {
												HX_STACK_LINE(615)
												return (int)2;
											}
											;break;
											default: {
												HX_STACK_LINE(615)
												return (int)4;
											}
										}
									}
									return null();
								}
							};
							HX_STACK_LINE(615)
							return _Function_5_1::Block(_g2);
						}
						return null();
					}
				};
				HX_STACK_LINE(615)
				int _g2 = ::Math_obj::floor((Float((a->components * _Function_4_1::Block(a))) / Float((int)4)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(615)
				hx::AddEq(r,_g2);
			}
		}
	}
	HX_STACK_LINE(618)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,getElementsPerVertex,return )

int SpriteBatch_obj::VERTS_PER_SPRITE;


SpriteBatch_obj::SpriteBatch_obj()
{
}

void SpriteBatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteBatch);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_MEMBER_NAME(states,"states");
	HX_MARK_MEMBER_NAME(currentState,"currentState");
	HX_MARK_MEMBER_NAME(vertexArray,"vertexArray");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(maxSprites,"maxSprites");
	HX_MARK_MEMBER_NAME(batchedSprites,"batchedSprites");
	HX_MARK_MEMBER_NAME(vertexArraySize,"vertexArraySize");
	HX_MARK_MEMBER_NAME(indexArraySize,"indexArraySize");
	HX_MARK_MEMBER_NAME(maxElementsPerVertex,"maxElementsPerVertex");
	HX_MARK_MEMBER_NAME(elementsPerVertex,"elementsPerVertex");
	HX_MARK_MEMBER_NAME(writtenVertexBytes,"writtenVertexBytes");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(enableColor,"enableColor");
	HX_MARK_MEMBER_NAME(lastEnableColor,"lastEnableColor");
	HX_MARK_END_CLASS();
}

void SpriteBatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
	HX_VISIT_MEMBER_NAME(states,"states");
	HX_VISIT_MEMBER_NAME(currentState,"currentState");
	HX_VISIT_MEMBER_NAME(vertexArray,"vertexArray");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(maxSprites,"maxSprites");
	HX_VISIT_MEMBER_NAME(batchedSprites,"batchedSprites");
	HX_VISIT_MEMBER_NAME(vertexArraySize,"vertexArraySize");
	HX_VISIT_MEMBER_NAME(indexArraySize,"indexArraySize");
	HX_VISIT_MEMBER_NAME(maxElementsPerVertex,"maxElementsPerVertex");
	HX_VISIT_MEMBER_NAME(elementsPerVertex,"elementsPerVertex");
	HX_VISIT_MEMBER_NAME(writtenVertexBytes,"writtenVertexBytes");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(enableColor,"enableColor");
	HX_VISIT_MEMBER_NAME(lastEnableColor,"lastEnableColor");
}

Dynamic SpriteBatch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { return states; }
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { return clipRect; }
		if (HX_FIELD_EQ(inName,"setState") ) { return setState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { return positions; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxSprites") ) { return maxSprites; }
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes; }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { return vertexArray; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { return enableColor; }
		if (HX_FIELD_EQ(inName,"renderTiles") ) { return renderTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"renderBatch") ) { return renderBatch_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { return currentState; }
		if (HX_FIELD_EQ(inName,"fillVertices") ) { return fillVertices_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"batchedSprites") ) { return batchedSprites; }
		if (HX_FIELD_EQ(inName,"indexArraySize") ) { return indexArraySize; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexArraySize") ) { return vertexArraySize; }
		if (HX_FIELD_EQ(inName,"lastEnableColor") ) { return lastEnableColor; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"renderBitmapData") ) { return renderBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"enableAttributes") ) { return enableAttributes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"elementsPerVertex") ) { return elementsPerVertex; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writtenVertexBytes") ) { return writtenVertexBytes; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"maxElementsPerVertex") ) { return maxElementsPerVertex; }
		if (HX_FIELD_EQ(inName,"renderCachedGraphics") ) { return renderCachedGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"getElementsPerVertex") ) { return getElementsPerVertex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpriteBatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { states=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::lime::utils::UInt32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< ::lime::utils::UInt16Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { clipRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxSprites") ) { maxSprites=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { vertexArray=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::VertexArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { enableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { currentState=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"batchedSprites") ) { batchedSprites=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexArraySize") ) { indexArraySize=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexArraySize") ) { vertexArraySize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastEnableColor") ) { lastEnableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"elementsPerVertex") ) { elementsPerVertex=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writtenVertexBytes") ) { writtenVertexBytes=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"maxElementsPerVertex") ) { maxElementsPerVertex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpriteBatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("renderSession"));
	outFields->push(HX_CSTRING("states"));
	outFields->push(HX_CSTRING("currentState"));
	outFields->push(HX_CSTRING("vertexArray"));
	outFields->push(HX_CSTRING("positions"));
	outFields->push(HX_CSTRING("colors"));
	outFields->push(HX_CSTRING("indexBuffer"));
	outFields->push(HX_CSTRING("indices"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("drawing"));
	outFields->push(HX_CSTRING("clipRect"));
	outFields->push(HX_CSTRING("maxSprites"));
	outFields->push(HX_CSTRING("batchedSprites"));
	outFields->push(HX_CSTRING("vertexArraySize"));
	outFields->push(HX_CSTRING("indexArraySize"));
	outFields->push(HX_CSTRING("maxElementsPerVertex"));
	outFields->push(HX_CSTRING("elementsPerVertex"));
	outFields->push(HX_CSTRING("writtenVertexBytes"));
	outFields->push(HX_CSTRING("shader"));
	outFields->push(HX_CSTRING("attributes"));
	outFields->push(HX_CSTRING("enableColor"));
	outFields->push(HX_CSTRING("lastEnableColor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("VERTS_PER_SPRITE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(SpriteBatch_obj,gl),HX_CSTRING("gl")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(SpriteBatch_obj,renderSession),HX_CSTRING("renderSession")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteBatch_obj,states),HX_CSTRING("states")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State*/ ,(int)offsetof(SpriteBatch_obj,currentState),HX_CSTRING("currentState")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::VertexArray*/ ,(int)offsetof(SpriteBatch_obj,vertexArray),HX_CSTRING("vertexArray")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(SpriteBatch_obj,positions),HX_CSTRING("positions")},
	{hx::fsObject /*::lime::utils::UInt32Array*/ ,(int)offsetof(SpriteBatch_obj,colors),HX_CSTRING("colors")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(SpriteBatch_obj,indexBuffer),HX_CSTRING("indexBuffer")},
	{hx::fsObject /*::lime::utils::UInt16Array*/ ,(int)offsetof(SpriteBatch_obj,indices),HX_CSTRING("indices")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,dirty),HX_CSTRING("dirty")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,drawing),HX_CSTRING("drawing")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(SpriteBatch_obj,clipRect),HX_CSTRING("clipRect")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,maxSprites),HX_CSTRING("maxSprites")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,batchedSprites),HX_CSTRING("batchedSprites")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,vertexArraySize),HX_CSTRING("vertexArraySize")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,indexArraySize),HX_CSTRING("indexArraySize")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,maxElementsPerVertex),HX_CSTRING("maxElementsPerVertex")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,elementsPerVertex),HX_CSTRING("elementsPerVertex")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,writtenVertexBytes),HX_CSTRING("writtenVertexBytes")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::Shader*/ ,(int)offsetof(SpriteBatch_obj,shader),HX_CSTRING("shader")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteBatch_obj,attributes),HX_CSTRING("attributes")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,enableColor),HX_CSTRING("enableColor")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,lastEnableColor),HX_CSTRING("lastEnableColor")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gl"),
	HX_CSTRING("renderSession"),
	HX_CSTRING("states"),
	HX_CSTRING("currentState"),
	HX_CSTRING("vertexArray"),
	HX_CSTRING("positions"),
	HX_CSTRING("colors"),
	HX_CSTRING("indexBuffer"),
	HX_CSTRING("indices"),
	HX_CSTRING("dirty"),
	HX_CSTRING("drawing"),
	HX_CSTRING("clipRect"),
	HX_CSTRING("maxSprites"),
	HX_CSTRING("batchedSprites"),
	HX_CSTRING("vertexArraySize"),
	HX_CSTRING("indexArraySize"),
	HX_CSTRING("maxElementsPerVertex"),
	HX_CSTRING("elementsPerVertex"),
	HX_CSTRING("writtenVertexBytes"),
	HX_CSTRING("shader"),
	HX_CSTRING("attributes"),
	HX_CSTRING("enableColor"),
	HX_CSTRING("lastEnableColor"),
	HX_CSTRING("destroy"),
	HX_CSTRING("begin"),
	HX_CSTRING("finish"),
	HX_CSTRING("start"),
	HX_CSTRING("stop"),
	HX_CSTRING("renderBitmapData"),
	HX_CSTRING("renderTiles"),
	HX_CSTRING("renderCachedGraphics"),
	HX_CSTRING("fillVertices"),
	HX_CSTRING("enableAttributes"),
	HX_CSTRING("flush"),
	HX_CSTRING("renderBatch"),
	HX_CSTRING("setState"),
	HX_CSTRING("setContext"),
	HX_CSTRING("getElementsPerVertex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::VERTS_PER_SPRITE,"VERTS_PER_SPRITE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::VERTS_PER_SPRITE,"VERTS_PER_SPRITE");
};

#endif

Class SpriteBatch_obj::__mClass;

void SpriteBatch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.SpriteBatch"), hx::TCanCast< SpriteBatch_obj> ,sStaticFields,sMemberFields,
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

void SpriteBatch_obj::__boot()
{
	VERTS_PER_SPRITE= (int)4;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
