#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

Void CanvasGraphics_obj::__construct()
{
	return null();
}

//CanvasGraphics_obj::~CanvasGraphics_obj() { }

Dynamic CanvasGraphics_obj::__CreateEmpty() { return  new CanvasGraphics_obj; }
hx::ObjectPtr< CanvasGraphics_obj > CanvasGraphics_obj::__new()
{  hx::ObjectPtr< CanvasGraphics_obj > result = new CanvasGraphics_obj();
	result->__construct();
	return result;}

Dynamic CanvasGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasGraphics_obj > result = new CanvasGraphics_obj();
	result->__construct();
	return result;}

Float CanvasGraphics_obj::SIN45;

Float CanvasGraphics_obj::TAN22;

::openfl::display::BitmapData CanvasGraphics_obj::bitmapFill;

bool CanvasGraphics_obj::bitmapRepeat;

::openfl::geom::Rectangle CanvasGraphics_obj::bounds;

Array< ::Dynamic > CanvasGraphics_obj::fillCommands;

::openfl::display::Graphics CanvasGraphics_obj::graphics;

bool CanvasGraphics_obj::hasFill;

bool CanvasGraphics_obj::hasStroke;

::openfl::geom::Matrix CanvasGraphics_obj::inversePendingMatrix;

::openfl::geom::Matrix CanvasGraphics_obj::pendingMatrix;

Array< ::Dynamic > CanvasGraphics_obj::strokeCommands;

Void CanvasGraphics_obj::beginPatternFill( ::openfl::display::BitmapData bitmapFill,bool bitmapRepeat){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","beginPatternFill",0x1b04743a,"openfl._internal.renderer.canvas.CanvasGraphics.beginPatternFill","openfl/_internal/renderer/canvas/CanvasGraphics.hx",51,0x0b9ff65e)
		HX_STACK_ARG(bitmapFill,"bitmapFill")
		HX_STACK_ARG(bitmapRepeat,"bitmapRepeat")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,beginPatternFill,(void))

Void CanvasGraphics_obj::createTempPatternCanvas( ::openfl::display::BitmapData bitmap,bool repeat,int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","createTempPatternCanvas",0x07b48808,"openfl._internal.renderer.canvas.CanvasGraphics.createTempPatternCanvas","openfl/_internal/renderer/canvas/CanvasGraphics.hx",69,0x0b9ff65e)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CanvasGraphics_obj,createTempPatternCanvas,(void))

Void CanvasGraphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","endFill",0x3478970e,"openfl._internal.renderer.canvas.CanvasGraphics.endFill","openfl/_internal/renderer/canvas/CanvasGraphics.hx",95,0x0b9ff65e)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CanvasGraphics_obj,endFill,(void))

Void CanvasGraphics_obj::endStroke( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","endStroke",0x411cf503,"openfl._internal.renderer.canvas.CanvasGraphics.endStroke","openfl/_internal/renderer/canvas/CanvasGraphics.hx",106,0x0b9ff65e)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CanvasGraphics_obj,endStroke,(void))

Void CanvasGraphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float rx,Float ry){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","drawRoundRect",0x4e8f7efe,"openfl._internal.renderer.canvas.CanvasGraphics.drawRoundRect","openfl/_internal/renderer/canvas/CanvasGraphics.hx",118,0x0b9ff65e)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(rx,"rx")
		HX_STACK_ARG(ry,"ry")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CanvasGraphics_obj,drawRoundRect,(void))

bool CanvasGraphics_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","isCCW",0xce74af1d,"openfl._internal.renderer.canvas.CanvasGraphics.isCCW","openfl/_internal/renderer/canvas/CanvasGraphics.hx",156,0x0b9ff65e)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(156)
	return (((((x2 - x1)) * ((y3 - y1))) - (((y2 - y1)) * ((x3 - x1)))) < (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CanvasGraphics_obj,isCCW,return )

Dynamic CanvasGraphics_obj::normalizeUVT( Array< Float > uvt,hx::Null< bool >  __o_skipT){
bool skipT = __o_skipT.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","normalizeUVT",0x11b66056,"openfl._internal.renderer.canvas.CanvasGraphics.normalizeUVT","openfl/_internal/renderer/canvas/CanvasGraphics.hx",161,0x0b9ff65e)
	HX_STACK_ARG(uvt,"uvt")
	HX_STACK_ARG(skipT,"skipT")
{
		HX_STACK_LINE(163)
		Float max = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(164)
		Float tmp = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		int len = uvt->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(167)
			int _g = (len + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(167)
			while((true)){
				HX_STACK_LINE(167)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(167)
					break;
				}
				HX_STACK_LINE(167)
				int t = (_g1)++;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(169)
				if (((bool(skipT) && bool((hx::Mod(t,(int)3) == (int)0))))){
					HX_STACK_LINE(171)
					continue;
				}
				HX_STACK_LINE(175)
				tmp = uvt->__get((t - (int)1));
				HX_STACK_LINE(177)
				if (((max < tmp))){
					HX_STACK_LINE(179)
					max = tmp;
				}
			}
		}
		HX_STACK_LINE(185)
		Array< Float > result;		HX_STACK_VAR(result,"result");
		struct _Function_1_1{
			inline static Array< Float > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/canvas/CanvasGraphics.hx",185,0x0b9ff65e)
				{
					HX_STACK_LINE(185)
					Array< Float > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(185)
					Array< Float > _g = Array_obj< Float >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(185)
					this1 = _g;
					HX_STACK_LINE(185)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(185)
		result = _Function_1_1::Block();
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(187)
			int _g = (len + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(187)
			while((true)){
				HX_STACK_LINE(187)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(187)
					break;
				}
				HX_STACK_LINE(187)
				int t = (_g1)++;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(189)
				if (((bool(skipT) && bool((hx::Mod(t,(int)3) == (int)0))))){
					HX_STACK_LINE(191)
					continue;
				}
				HX_STACK_LINE(195)
				result->push((Float(uvt->__get((t - (int)1))) / Float(max)));
			}
		}
		struct _Function_1_2{
			inline static Dynamic Block( Array< Float > &result,Float &max){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/canvas/CanvasGraphics.hx",199,0x0b9ff65e)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("max") , max,false);
					__result->Add(HX_CSTRING("uvt") , result,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(199)
		return _Function_1_2::Block(result,max);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,normalizeUVT,return )

Void CanvasGraphics_obj::playCommands( Array< ::Dynamic > commands,hx::Null< bool >  __o_stroke){
bool stroke = __o_stroke.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","playCommands",0x147605cc,"openfl._internal.renderer.canvas.CanvasGraphics.playCommands","openfl/_internal/renderer/canvas/CanvasGraphics.hx",204,0x0b9ff65e)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(stroke,"stroke")
{
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,playCommands,(void))

Void CanvasGraphics_obj::render( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","render",0x7dc3ee46,"openfl._internal.renderer.canvas.CanvasGraphics.render","openfl/_internal/renderer/canvas/CanvasGraphics.hx",525,0x0b9ff65e)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,render,(void))

Void CanvasGraphics_obj::renderMask( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","renderMask",0xfa8ef652,"openfl._internal.renderer.canvas.CanvasGraphics.renderMask","openfl/_internal/renderer/canvas/CanvasGraphics.hx",916,0x0b9ff65e)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(916)
		if (((graphics->__commands->length != (int)0))){
			HX_STACK_LINE(918)
			::lime::graphics::CanvasRenderContext context = renderSession->context;		HX_STACK_VAR(context,"context");
			HX_STACK_LINE(920)
			Float positionX = 0.0;		HX_STACK_VAR(positionX,"positionX");
			HX_STACK_LINE(921)
			Float positionY = 0.0;		HX_STACK_VAR(positionY,"positionY");
			HX_STACK_LINE(923)
			int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
			HX_STACK_LINE(924)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(926)
			{
				HX_STACK_LINE(926)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(926)
				Array< ::Dynamic > _g1 = graphics->__commands;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(926)
				while((true)){
					HX_STACK_LINE(926)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(926)
						break;
					}
					HX_STACK_LINE(926)
					::openfl::display::DrawCommand command = _g1->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(command,"command");
					HX_STACK_LINE(926)
					++(_g);
					HX_STACK_LINE(928)
					switch( (int)(command->__Index())){
						case (int)3: {
							HX_STACK_LINE(928)
							Float y = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(928)
							Float x = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(928)
							Float cy2 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(cy2,"cy2");
							HX_STACK_LINE(928)
							Float cy1 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(cy1,"cy1");
							HX_STACK_LINE(928)
							Float cx2 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cx2,"cx2");
							HX_STACK_LINE(928)
							Float cx1 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx1,"cx1");
							HX_STACK_LINE(930)
							{
								HX_STACK_LINE(932)
								context->bezierCurveTo((cx1 - offsetX),(cy1 - offsetY),(cx2 - offsetX),(cy2 - offsetY),(x - offsetX),(y - offsetY));
								HX_STACK_LINE(933)
								positionX = x;
								HX_STACK_LINE(934)
								positionY = y;
							}
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(928)
							Float y = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(928)
							Float x = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(928)
							Float cy = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(928)
							Float cx = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(936)
							{
								HX_STACK_LINE(938)
								context->quadraticCurveTo((cx - offsetX),(cy - offsetY),(x - offsetX),(y - offsetY));
								HX_STACK_LINE(939)
								positionX = x;
								HX_STACK_LINE(940)
								positionY = y;
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(928)
							Float radius = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(radius,"radius");
							HX_STACK_LINE(928)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(928)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(944)
							context->arc((x - offsetX),(y - offsetY),radius,(int)0,(::Math_obj::PI * (int)2),true);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(928)
							Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(928)
							Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(928)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(928)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(946)
							{
								HX_STACK_LINE(948)
								hx::SubEq(x,offsetX);
								HX_STACK_LINE(949)
								hx::SubEq(y,offsetY);
								HX_STACK_LINE(951)
								Float kappa = .5522848;		HX_STACK_VAR(kappa,"kappa");
								HX_STACK_LINE(952)
								Float ox = ((Float(width) / Float((int)2)) * kappa);		HX_STACK_VAR(ox,"ox");
								HX_STACK_LINE(953)
								Float oy = ((Float(height) / Float((int)2)) * kappa);		HX_STACK_VAR(oy,"oy");
								HX_STACK_LINE(954)
								Float xe = (x + width);		HX_STACK_VAR(xe,"xe");
								HX_STACK_LINE(955)
								Float ye = (y + height);		HX_STACK_VAR(ye,"ye");
								HX_STACK_LINE(956)
								Float xm = (x + (Float(width) / Float((int)2)));		HX_STACK_VAR(xm,"xm");
								HX_STACK_LINE(957)
								Float ym = (y + (Float(height) / Float((int)2)));		HX_STACK_VAR(ym,"ym");
								HX_STACK_LINE(961)
								context->moveTo(x,ym);
								HX_STACK_LINE(962)
								context->bezierCurveTo(x,(ym - oy),(xm - ox),y,xm,y);
								HX_STACK_LINE(963)
								context->bezierCurveTo((xm + ox),y,xe,(ym - oy),xe,ym);
								HX_STACK_LINE(964)
								context->bezierCurveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
								HX_STACK_LINE(965)
								context->bezierCurveTo((xm - ox),ye,x,(ym + oy),x,ym);
							}
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(928)
							Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(928)
							Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(928)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(928)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(970)
							context->rect((x - offsetX),(y - offsetY),width,height);
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(928)
							Float ry = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(928)
							Float rx = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(928)
							Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(928)
							Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(928)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(928)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(974)
							::openfl::_internal::renderer::canvas::CanvasGraphics_obj::drawRoundRect((x - offsetX),(y - offsetY),width,height,rx,ry);
						}
						;break;
						case (int)13: {
							HX_STACK_LINE(928)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(928)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(976)
							{
								HX_STACK_LINE(978)
								context->lineTo((x - offsetX),(y - offsetY));
								HX_STACK_LINE(979)
								positionX = x;
								HX_STACK_LINE(980)
								positionY = y;
							}
						}
						;break;
						case (int)14: {
							HX_STACK_LINE(928)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(928)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(982)
							{
								HX_STACK_LINE(984)
								context->moveTo((x - offsetX),(y - offsetY));
								HX_STACK_LINE(985)
								positionX = x;
								HX_STACK_LINE(986)
								positionY = y;
							}
						}
						;break;
						default: {
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,renderMask,(void))


CanvasGraphics_obj::CanvasGraphics_obj()
{
}

Dynamic CanvasGraphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { return SIN45; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { return TAN22; }
		if (HX_FIELD_EQ(inName,"isCCW") ) { return isCCW_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { return hasFill; }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { return hasStroke; }
		if (HX_FIELD_EQ(inName,"endStroke") ) { return endStroke_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { return bitmapFill; }
		if (HX_FIELD_EQ(inName,"renderMask") ) { return renderMask_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { return bitmapRepeat; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { return fillCommands; }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { return normalizeUVT_dyn(); }
		if (HX_FIELD_EQ(inName,"playCommands") ) { return playCommands_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { return pendingMatrix; }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { return strokeCommands; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"beginPatternFill") ) { return beginPatternFill_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { return inversePendingMatrix; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createTempPatternCanvas") ) { return createTempPatternCanvas_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasGraphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { hasFill=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { hasStroke=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { bitmapFill=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { bitmapRepeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { fillCommands=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { pendingMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { strokeCommands=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { inversePendingMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasGraphics_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SIN45"),
	HX_CSTRING("TAN22"),
	HX_CSTRING("bitmapFill"),
	HX_CSTRING("bitmapRepeat"),
	HX_CSTRING("bounds"),
	HX_CSTRING("fillCommands"),
	HX_CSTRING("graphics"),
	HX_CSTRING("hasFill"),
	HX_CSTRING("hasStroke"),
	HX_CSTRING("inversePendingMatrix"),
	HX_CSTRING("pendingMatrix"),
	HX_CSTRING("strokeCommands"),
	HX_CSTRING("beginPatternFill"),
	HX_CSTRING("createTempPatternCanvas"),
	HX_CSTRING("endFill"),
	HX_CSTRING("endStroke"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("isCCW"),
	HX_CSTRING("normalizeUVT"),
	HX_CSTRING("playCommands"),
	HX_CSTRING("render"),
	HX_CSTRING("renderMask"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::strokeCommands,"strokeCommands");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::strokeCommands,"strokeCommands");
};

#endif

Class CanvasGraphics_obj::__mClass;

void CanvasGraphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.canvas.CanvasGraphics"), hx::TCanCast< CanvasGraphics_obj> ,sStaticFields,sMemberFields,
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

void CanvasGraphics_obj::__boot()
{
	SIN45= 0.70710678118654752440084436210485;
	TAN22= 0.4142135623730950488016887242097;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
