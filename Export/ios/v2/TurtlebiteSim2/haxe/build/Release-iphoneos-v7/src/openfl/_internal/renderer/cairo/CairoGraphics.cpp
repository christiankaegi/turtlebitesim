#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
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
namespace cairo{

Void CairoGraphics_obj::__construct()
{
	return null();
}

//CairoGraphics_obj::~CairoGraphics_obj() { }

Dynamic CairoGraphics_obj::__CreateEmpty() { return  new CairoGraphics_obj; }
hx::ObjectPtr< CairoGraphics_obj > CairoGraphics_obj::__new()
{  hx::ObjectPtr< CairoGraphics_obj > result = new CairoGraphics_obj();
	result->__construct();
	return result;}

Dynamic CairoGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoGraphics_obj > result = new CairoGraphics_obj();
	result->__construct();
	return result;}

Float CairoGraphics_obj::SIN45;

Float CairoGraphics_obj::TAN22;

::openfl::display::BitmapData CairoGraphics_obj::bitmapFill;

bool CairoGraphics_obj::bitmapRepeat;

::openfl::geom::Rectangle CairoGraphics_obj::bounds;

::lime::graphics::cairo::Cairo CairoGraphics_obj::cairo;

Array< ::Dynamic > CairoGraphics_obj::fillCommands;

Dynamic CairoGraphics_obj::fillPattern;

::openfl::display::Graphics CairoGraphics_obj::graphics;

bool CairoGraphics_obj::hasFill;

bool CairoGraphics_obj::hasStroke;

::openfl::geom::Matrix CairoGraphics_obj::inversePendingMatrix;

::openfl::geom::Matrix CairoGraphics_obj::pendingMatrix;

Array< ::Dynamic > CairoGraphics_obj::strokeCommands;

Dynamic CairoGraphics_obj::strokePattern;

Void CairoGraphics_obj::beginPatternFill( ::openfl::display::BitmapData bitmapFill,bool bitmapRepeat){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","beginPatternFill",0xd9cf4ec6,"openfl._internal.renderer.cairo.CairoGraphics.beginPatternFill","openfl/_internal/renderer/cairo/CairoGraphics.hx",49,0x744ae94c)
		HX_STACK_ARG(bitmapFill,"bitmapFill")
		HX_STACK_ARG(bitmapRepeat,"bitmapRepeat")
		HX_STACK_LINE(51)
		if (((bool(::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill) || bool((bitmapFill == null()))))){
			HX_STACK_LINE(51)
			return null();
		}
		HX_STACK_LINE(53)
		if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern == null()))){
			HX_STACK_LINE(55)
			Dynamic _g = bitmapFill->getSurface();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			Dynamic _g1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(55)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = _g1;
			HX_STACK_LINE(57)
			if ((bitmapRepeat)){
				HX_STACK_LINE(59)
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern,(int)1);
			}
		}
		HX_STACK_LINE(65)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_source(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern);
		HX_STACK_LINE(66)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,beginPatternFill,(void))

Dynamic CairoGraphics_obj::createTempPatternCanvas( ::openfl::display::BitmapData bitmap,bool repeat,int width,int height){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","createTempPatternCanvas",0x52ef56fc,"openfl._internal.renderer.cairo.CairoGraphics.createTempPatternCanvas","openfl/_internal/renderer/cairo/CairoGraphics.hx",71,0x744ae94c)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(73)
	Dynamic surface = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::_new((int)0,width,height);		HX_STACK_VAR(surface,"surface");
	HX_STACK_LINE(74)
	Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(76)
	if ((repeat)){
		HX_STACK_LINE(78)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(pattern,(int)1);
	}
	HX_STACK_LINE(82)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_source(pattern);
	HX_STACK_LINE(83)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->newPath();
	HX_STACK_LINE(84)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo((int)0,(int)0);
	HX_STACK_LINE(85)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo((int)0,height);
	HX_STACK_LINE(86)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(width,height);
	HX_STACK_LINE(87)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(width,(int)0);
	HX_STACK_LINE(88)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo((int)0,(int)0);
	HX_STACK_LINE(89)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->closePath();
	HX_STACK_LINE(90)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->fill();
	HX_STACK_LINE(91)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(pattern);
	HX_STACK_LINE(92)
	return surface;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,createTempPatternCanvas,return )

Void CairoGraphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endFill",0x21233e02,"openfl._internal.renderer.cairo.CairoGraphics.endFill","openfl/_internal/renderer/cairo/CairoGraphics.hx",118,0x744ae94c)
		HX_STACK_LINE(120)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->newPath();
		HX_STACK_LINE(121)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands,false);
		HX_STACK_LINE(122)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands = Array_obj< ::Dynamic >::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endFill,(void))

Void CairoGraphics_obj::endStroke( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endStroke",0xaaf640f7,"openfl._internal.renderer.cairo.CairoGraphics.endStroke","openfl/_internal/renderer/cairo/CairoGraphics.hx",127,0x744ae94c)
		HX_STACK_LINE(129)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->newPath();
		HX_STACK_LINE(130)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands,true);
		HX_STACK_LINE(131)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->closePath();
		HX_STACK_LINE(132)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands = Array_obj< ::Dynamic >::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endStroke,(void))

Void CairoGraphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float rx,Float ry){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","drawRoundRect",0xa42fd4f2,"openfl._internal.renderer.cairo.CairoGraphics.drawRoundRect","openfl/_internal/renderer/cairo/CairoGraphics.hx",137,0x744ae94c)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(rx,"rx")
		HX_STACK_ARG(ry,"ry")
		HX_STACK_LINE(139)
		if (((ry == (int)-1))){
			HX_STACK_LINE(139)
			ry = rx;
		}
		HX_STACK_LINE(141)
		hx::MultEq(rx,0.5);
		HX_STACK_LINE(142)
		hx::MultEq(ry,0.5);
		HX_STACK_LINE(144)
		if (((rx > (Float(width) / Float((int)2))))){
			HX_STACK_LINE(144)
			rx = (Float(width) / Float((int)2));
		}
		HX_STACK_LINE(145)
		if (((ry > (Float(height) / Float((int)2))))){
			HX_STACK_LINE(145)
			ry = (Float(height) / Float((int)2));
		}
		HX_STACK_LINE(147)
		Float xe = (x + width);		HX_STACK_VAR(xe,"xe");
		HX_STACK_LINE(148)
		Float ye = (y + height);		HX_STACK_VAR(ye,"ye");
		HX_STACK_LINE(149)
		Float cx1 = (-(rx) + (rx * ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45));		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(150)
		Float cx2 = (-(rx) + (rx * ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22));		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(151)
		Float cy1 = (-(ry) + (ry * ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45));		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(152)
		Float cy2 = (-(ry) + (ry * ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22));		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(154)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo(xe,(ye - ry));
		HX_STACK_LINE(155)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(xe,(ye + cy2),(xe + cx1),(ye + cy1));
		HX_STACK_LINE(156)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo((xe + cx2),ye,(xe - rx),ye);
		HX_STACK_LINE(157)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo((x + rx),ye);
		HX_STACK_LINE(158)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo((x - cx2),ye,(x - cx1),(ye + cy1));
		HX_STACK_LINE(159)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(x,(ye + cy2),x,(ye - ry));
		HX_STACK_LINE(160)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(x,(y + ry));
		HX_STACK_LINE(161)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(x,(y - cy2),(x - cx1),(y - cy1));
		HX_STACK_LINE(162)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo((x - cx2),y,(x + rx),y);
		HX_STACK_LINE(163)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo((xe - rx),y);
		HX_STACK_LINE(164)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo((xe + cx2),y,(xe + cx1),(y - cy1));
		HX_STACK_LINE(165)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(xe,(y - cy2),xe,(y + ry));
		HX_STACK_LINE(166)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(xe,(ye - ry));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,drawRoundRect,(void))

bool CairoGraphics_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","isCCW",0x5353f111,"openfl._internal.renderer.cairo.CairoGraphics.isCCW","openfl/_internal/renderer/cairo/CairoGraphics.hx",173,0x744ae94c)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(173)
	return (((((x2 - x1)) * ((y3 - y1))) - (((y2 - y1)) * ((x3 - x1)))) < (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,isCCW,return )

Dynamic CairoGraphics_obj::normalizeUVT( Array< Float > uvt,hx::Null< bool >  __o_skipT){
bool skipT = __o_skipT.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","normalizeUVT",0xc9c604e2,"openfl._internal.renderer.cairo.CairoGraphics.normalizeUVT","openfl/_internal/renderer/cairo/CairoGraphics.hx",178,0x744ae94c)
	HX_STACK_ARG(uvt,"uvt")
	HX_STACK_ARG(skipT,"skipT")
{
		HX_STACK_LINE(180)
		Float max = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(181)
		Float tmp = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		int len = uvt->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(184)
			int _g = (len + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(184)
			while((true)){
				HX_STACK_LINE(184)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(184)
					break;
				}
				HX_STACK_LINE(184)
				int t = (_g1)++;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(186)
				if (((bool(skipT) && bool((hx::Mod(t,(int)3) == (int)0))))){
					HX_STACK_LINE(188)
					continue;
				}
				HX_STACK_LINE(192)
				tmp = uvt->__get((t - (int)1));
				HX_STACK_LINE(194)
				if (((max < tmp))){
					HX_STACK_LINE(196)
					max = tmp;
				}
			}
		}
		HX_STACK_LINE(202)
		Array< Float > result;		HX_STACK_VAR(result,"result");
		struct _Function_1_1{
			inline static Array< Float > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoGraphics.hx",202,0x744ae94c)
				{
					HX_STACK_LINE(202)
					Array< Float > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(202)
					Array< Float > _g = Array_obj< Float >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(202)
					this1 = _g;
					HX_STACK_LINE(202)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(202)
		result = _Function_1_1::Block();
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(204)
			int _g = (len + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(204)
			while((true)){
				HX_STACK_LINE(204)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(204)
					break;
				}
				HX_STACK_LINE(204)
				int t = (_g1)++;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(206)
				if (((bool(skipT) && bool((hx::Mod(t,(int)3) == (int)0))))){
					HX_STACK_LINE(208)
					continue;
				}
				HX_STACK_LINE(212)
				result->push((Float(uvt->__get((t - (int)1))) / Float(max)));
			}
		}
		struct _Function_1_2{
			inline static Dynamic Block( Array< Float > &result,Float &max){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoGraphics.hx",216,0x744ae94c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("max") , max,false);
					__result->Add(HX_CSTRING("uvt") , result,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(216)
		return _Function_1_2::Block(result,max);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,normalizeUVT,return )

Void CairoGraphics_obj::playCommands( Array< ::Dynamic > commands,hx::Null< bool >  __o_stroke){
bool stroke = __o_stroke.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","playCommands",0xcc85aa58,"openfl._internal.renderer.cairo.CairoGraphics.playCommands","openfl/_internal/renderer/cairo/CairoGraphics.hx",221,0x744ae94c)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(stroke,"stroke")
{
		HX_STACK_LINE(223)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics->__bounds;
		HX_STACK_LINE(225)
		Float offsetX = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->x;		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(226)
		Float offsetY = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->y;		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(228)
		Float positionX = 0.0;		HX_STACK_VAR(positionX,"positionX");
		HX_STACK_LINE(229)
		Float positionY = 0.0;		HX_STACK_VAR(positionY,"positionY");
		HX_STACK_LINE(231)
		bool closeGap = false;		HX_STACK_VAR(closeGap,"closeGap");
		HX_STACK_LINE(232)
		Float startX = 0.0;		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(233)
		Float startY = 0.0;		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			while((true)){
				HX_STACK_LINE(235)
				if ((!(((_g < commands->length))))){
					HX_STACK_LINE(235)
					break;
				}
				HX_STACK_LINE(235)
				::openfl::display::DrawCommand command = commands->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(command,"command");
				HX_STACK_LINE(235)
				++(_g);
				HX_STACK_LINE(237)
				switch( (int)(command->__Index())){
					case (int)3: {
						HX_STACK_LINE(237)
						Float y = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(237)
						Float x = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(237)
						Float cy2 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(cy2,"cy2");
						HX_STACK_LINE(237)
						Float cx2 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(cx2,"cx2");
						HX_STACK_LINE(237)
						Float cy1 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cy1,"cy1");
						HX_STACK_LINE(237)
						Float cx1 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx1,"cx1");
						HX_STACK_LINE(241)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->curveTo((cx1 - offsetX),(cy1 - offsetY),(cx2 - offsetX),(cy2 - offsetY),(x - offsetX),(y - offsetY));
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(237)
						Float y = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(237)
						Float x = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(237)
						Float cy = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(237)
						Float cx = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(245)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo((cx - offsetX),(cy - offsetY),(x - offsetX),(y - offsetY));
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(237)
						Float radius = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(radius,"radius");
						HX_STACK_LINE(237)
						Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(237)
						Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(247)
						{
							HX_STACK_LINE(249)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo(((x - offsetX) + radius),(y - offsetY));
							HX_STACK_LINE(250)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->arc((x - offsetX),(y - offsetY),radius,(int)0,(::Math_obj::PI * (int)2));
						}
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(237)
						Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(237)
						Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(237)
						Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(237)
						Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(254)
							hx::SubEq(x,offsetX);
							HX_STACK_LINE(255)
							hx::SubEq(y,offsetY);
							HX_STACK_LINE(257)
							Float kappa = .5522848;		HX_STACK_VAR(kappa,"kappa");
							HX_STACK_LINE(258)
							Float ox = ((Float(width) / Float((int)2)) * kappa);		HX_STACK_VAR(ox,"ox");
							HX_STACK_LINE(259)
							Float oy = ((Float(height) / Float((int)2)) * kappa);		HX_STACK_VAR(oy,"oy");
							HX_STACK_LINE(260)
							Float xe = (x + width);		HX_STACK_VAR(xe,"xe");
							HX_STACK_LINE(261)
							Float ye = (y + height);		HX_STACK_VAR(ye,"ye");
							HX_STACK_LINE(262)
							Float xm = (x + (Float(width) / Float((int)2)));		HX_STACK_VAR(xm,"xm");
							HX_STACK_LINE(263)
							Float ym = (y + (Float(height) / Float((int)2)));		HX_STACK_VAR(ym,"ym");
							HX_STACK_LINE(265)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo(x,ym);
							HX_STACK_LINE(266)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->curveTo(x,(ym - oy),(xm - ox),y,xm,y);
							HX_STACK_LINE(267)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->curveTo((xm + ox),y,xe,(ym - oy),xe,ym);
							HX_STACK_LINE(268)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->curveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
							HX_STACK_LINE(269)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->curveTo((xm - ox),ye,x,(ym + oy),x,ym);
						}
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(237)
						Float ry = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(237)
						Float rx = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(237)
						Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(237)
						Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(237)
						Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(237)
						Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(273)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect((x - offsetX),(y - offsetY),width,height,rx,ry);
					}
					;break;
					case (int)13: {
						HX_STACK_LINE(237)
						Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(237)
						Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(277)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo((x - offsetX),(y - offsetY));
							HX_STACK_LINE(279)
							positionX = x;
							HX_STACK_LINE(280)
							positionY = y;
						}
					}
					;break;
					case (int)14: {
						HX_STACK_LINE(237)
						Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(237)
						Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(282)
						{
							HX_STACK_LINE(284)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo((x - offsetX),(y - offsetY));
							HX_STACK_LINE(286)
							positionX = x;
							HX_STACK_LINE(287)
							positionY = y;
							HX_STACK_LINE(289)
							closeGap = true;
							HX_STACK_LINE(290)
							startX = x;
							HX_STACK_LINE(291)
							startY = y;
						}
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(237)
						Dynamic miterLimit = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(miterLimit,"miterLimit");
						HX_STACK_LINE(237)
						::openfl::display::JointStyle joints = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(joints,"joints");
						HX_STACK_LINE(237)
						::openfl::display::CapsStyle caps = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(caps,"caps");
						HX_STACK_LINE(237)
						::openfl::display::LineScaleMode scaleMode = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(scaleMode,"scaleMode");
						HX_STACK_LINE(237)
						Dynamic pixelHinting = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(pixelHinting,"pixelHinting");
						HX_STACK_LINE(237)
						Dynamic alpha = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(alpha,"alpha");
						HX_STACK_LINE(237)
						Dynamic color = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(color,"color");
						HX_STACK_LINE(237)
						Dynamic thickness = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(thickness,"thickness");
						HX_STACK_LINE(293)
						{
							HX_STACK_LINE(295)
							if (((bool(stroke) && bool(::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke)))){
								HX_STACK_LINE(297)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->closePath();
								HX_STACK_LINE(298)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_source(::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern);
								HX_STACK_LINE(299)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->strokePreserve();
								HX_STACK_LINE(300)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->newPath();
							}
							HX_STACK_LINE(304)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
							HX_STACK_LINE(306)
							if (((thickness == null()))){
								HX_STACK_LINE(308)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
							}
							else{
								HX_STACK_LINE(312)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_lineWidth(thickness);
								HX_STACK_LINE(314)
								if (((joints == null()))){
									HX_STACK_LINE(316)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_lineJoin((int)1);
								}
								else{
									HX_STACK_LINE(320)
									int _g1;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(320)
									switch( (int)(joints->__Index())){
										case (int)0: {
											HX_STACK_LINE(322)
											_g1 = (int)0;
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(323)
											_g1 = (int)2;
										}
										;break;
										default: {
											HX_STACK_LINE(324)
											_g1 = (int)1;
										}
									}
									HX_STACK_LINE(320)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_lineJoin(_g1);
								}
								HX_STACK_LINE(330)
								if (((caps == null()))){
									HX_STACK_LINE(332)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_lineCap((int)1);
								}
								else{
									HX_STACK_LINE(336)
									int _g1;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(336)
									switch( (int)(caps->__Index())){
										case (int)0: {
											HX_STACK_LINE(338)
											_g1 = (int)0;
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(339)
											_g1 = (int)2;
										}
										;break;
										default: {
											HX_STACK_LINE(340)
											_g1 = (int)1;
										}
									}
									HX_STACK_LINE(336)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_lineCap(_g1);
								}
								HX_STACK_LINE(346)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_miterLimit((  (((miterLimit == null()))) ? Float((int)3) : Float(miterLimit) ));
								HX_STACK_LINE(348)
								if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern != null()))){
									HX_STACK_LINE(350)
									::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern);
								}
								HX_STACK_LINE(354)
								Float r = (Float((hx::UShr(((int(color) & int((int)16711680))),(int)16))) / Float((int)255));		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(355)
								Float g = (Float((hx::UShr(((int(color) & int((int)65280))),(int)8))) / Float((int)255));		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(356)
								Float b = (Float(((int(color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(358)
								if (((bool((alpha == (int)1)) || bool((alpha == null()))))){
									HX_STACK_LINE(360)
									Dynamic _g2 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(r,g,b);		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(360)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = _g2;
								}
								else{
									HX_STACK_LINE(364)
									Dynamic _g3 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(r,g,b,alpha);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(364)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = _g3;
								}
								HX_STACK_LINE(368)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
							}
						}
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(237)
						bool smooth = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(smooth,"smooth");
						HX_STACK_LINE(237)
						bool repeat = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(237)
						::openfl::geom::Matrix matrix = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(matrix,"matrix");
						HX_STACK_LINE(237)
						::openfl::display::BitmapData bitmap = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(372)
						{
							HX_STACK_LINE(374)
							if (((bool((bitmap != ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill)) || bool((repeat != ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapRepeat))))){
								HX_STACK_LINE(376)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = bitmap;
								HX_STACK_LINE(377)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapRepeat = repeat;
								HX_STACK_LINE(379)
								if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern != null()))){
									HX_STACK_LINE(381)
									::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern);
								}
								HX_STACK_LINE(385)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = null();
								HX_STACK_LINE(386)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
							}
							HX_STACK_LINE(392)
							if (((matrix != null()))){
								HX_STACK_LINE(394)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix = matrix;
								HX_STACK_LINE(395)
								::openfl::geom::Matrix _g4 = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(395)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::inversePendingMatrix = _g4;
								HX_STACK_LINE(396)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::inversePendingMatrix->invert();
							}
							else{
								HX_STACK_LINE(400)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix = null();
								HX_STACK_LINE(401)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::inversePendingMatrix = null();
							}
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(237)
						Float alpha = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(alpha,"alpha");
						HX_STACK_LINE(237)
						int rgb = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(rgb,"rgb");
						HX_STACK_LINE(407)
						if (((alpha < 0.005))){
							HX_STACK_LINE(409)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
						}
						else{
							HX_STACK_LINE(413)
							if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern != null()))){
								HX_STACK_LINE(415)
								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern);
							}
							HX_STACK_LINE(419)
							Dynamic _g5 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA((Float((hx::UShr(((int(rgb) & int((int)16711680))),(int)16))) / Float((int)255)),(Float((hx::UShr(((int(rgb) & int((int)65280))),(int)8))) / Float((int)255)),(Float(((int(rgb) & int((int)255)))) / Float((int)255)),alpha);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(419)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = _g5;
							HX_STACK_LINE(421)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
							HX_STACK_LINE(422)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(237)
						Dynamic focalPointRatio = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(focalPointRatio,"focalPointRatio");
						HX_STACK_LINE(237)
						::openfl::display::InterpolationMethod interpolationMethod = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(interpolationMethod,"interpolationMethod");
						HX_STACK_LINE(237)
						::openfl::display::SpreadMethod spreadMethod = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(spreadMethod,"spreadMethod");
						HX_STACK_LINE(237)
						::openfl::geom::Matrix matrix = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(matrix,"matrix");
						HX_STACK_LINE(237)
						Dynamic ratios = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(ratios,"ratios");
						HX_STACK_LINE(237)
						Dynamic alphas = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(alphas,"alphas");
						HX_STACK_LINE(237)
						Dynamic colors = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(colors,"colors");
						HX_STACK_LINE(237)
						::openfl::display::GradientType type = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(426)
						{
							HX_STACK_LINE(428)
							Dynamic gradientFill = null();		HX_STACK_VAR(gradientFill,"gradientFill");
							HX_STACK_LINE(430)
							switch( (int)(type->__Index())){
								case (int)0: {
									HX_STACK_LINE(434)
									if (((matrix == null()))){
										HX_STACK_LINE(434)
										::openfl::geom::Matrix _g6 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g6,"_g6");
										HX_STACK_LINE(434)
										matrix = _g6;
									}
									HX_STACK_LINE(435)
									::openfl::geom::Point _g7 = ::openfl::geom::Point_obj::__new(1638.4,(int)0);		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(435)
									::openfl::geom::Point point = matrix->transformPoint(_g7);		HX_STACK_VAR(point,"point");
									HX_STACK_LINE(437)
									if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern != null()))){
										HX_STACK_LINE(439)
										::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern);
									}
									HX_STACK_LINE(443)
									Dynamic _g8 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRadial(matrix->tx,matrix->ty,(int)0,matrix->tx,matrix->ty,(Float(((point->x - matrix->tx))) / Float((int)2)));		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(443)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = _g8;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(447)
									::openfl::geom::Matrix matrix1;		HX_STACK_VAR(matrix1,"matrix1");
									HX_STACK_LINE(447)
									if (((matrix != null()))){
										HX_STACK_LINE(447)
										matrix1 = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);
									}
									else{
										HX_STACK_LINE(447)
										matrix1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
									}
									HX_STACK_LINE(448)
									::openfl::geom::Point _g9 = ::openfl::geom::Point_obj::__new(-819.2,(int)0);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(448)
									::openfl::geom::Point point1 = matrix1->transformPoint(_g9);		HX_STACK_VAR(point1,"point1");
									HX_STACK_LINE(449)
									::openfl::geom::Point _g10 = ::openfl::geom::Point_obj::__new(819.2,(int)0);		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(449)
									::openfl::geom::Point point2 = matrix1->transformPoint(_g10);		HX_STACK_VAR(point2,"point2");
									HX_STACK_LINE(451)
									if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern != null()))){
										HX_STACK_LINE(453)
										::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern);
									}
									HX_STACK_LINE(457)
									Dynamic _g11 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createLinear(point1->x,point1->y,point2->x,point2->y);		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(457)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = _g11;
								}
								;break;
							}
							HX_STACK_LINE(461)
							{
								HX_STACK_LINE(461)
								int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(461)
								int _g1 = colors->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(461)
								while((true)){
									HX_STACK_LINE(461)
									if ((!(((_g2 < _g1))))){
										HX_STACK_LINE(461)
										break;
									}
									HX_STACK_LINE(461)
									int i = (_g2)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(463)
									int rgb = colors->__GetItem(i);		HX_STACK_VAR(rgb,"rgb");
									HX_STACK_LINE(464)
									Float alpha = alphas->__GetItem(i);		HX_STACK_VAR(alpha,"alpha");
									HX_STACK_LINE(465)
									Float r = (Float((hx::UShr(((int(rgb) & int((int)16711680))),(int)16))) / Float((int)255));		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(466)
									Float g = (Float((hx::UShr(((int(rgb) & int((int)65280))),(int)8))) / Float((int)255));		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(467)
									Float b = (Float(((int(rgb) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(469)
									Float ratio = (Float(ratios->__GetItem(i)) / Float((int)255));		HX_STACK_VAR(ratio,"ratio");
									HX_STACK_LINE(470)
									if (((ratio < (int)0))){
										HX_STACK_LINE(470)
										ratio = (int)0;
									}
									HX_STACK_LINE(471)
									if (((ratio > (int)1))){
										HX_STACK_LINE(471)
										ratio = (int)1;
									}
									HX_STACK_LINE(473)
									::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::addColorStopRGBA(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern,ratio,r,g,b,alpha);
								}
							}
							HX_STACK_LINE(479)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
							HX_STACK_LINE(480)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
						}
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(237)
						Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(237)
						Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(237)
						Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(237)
						Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(482)
						{
							HX_STACK_LINE(531)
							if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern != null()))){
								HX_STACK_LINE(533)
								::lime::math::Matrix3 matrix = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_matrix(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern);		HX_STACK_VAR(matrix,"matrix");
								HX_STACK_LINE(534)
								{
									HX_STACK_LINE(534)
									hx::AddEq(matrix->tx,x);
									HX_STACK_LINE(534)
									hx::AddEq(matrix->ty,y);
								}
								HX_STACK_LINE(535)
								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern,matrix);
							}
							HX_STACK_LINE(539)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->rectangle((x - offsetX),(y - offsetY),width,height);
						}
					}
					;break;
					default: {
					}
				}
			}
		}
		HX_STACK_LINE(550)
		if (((bool(stroke) && bool(::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke)))){
			HX_STACK_LINE(552)
			if (((bool(::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill) && bool(closeGap)))){
				HX_STACK_LINE(554)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo((startX - offsetX),(startY - offsetY));
			}
			HX_STACK_LINE(558)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_source(::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern);
			HX_STACK_LINE(559)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->strokePreserve();
		}
		HX_STACK_LINE(563)
		if ((!(stroke))){
			HX_STACK_LINE(565)
			if (((bool(::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill) || bool((::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill != null()))))){
				HX_STACK_LINE(567)
				if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill != null()))){
					HX_STACK_LINE(569)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::beginPatternFill(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill,::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapRepeat);
				}
				else{
					HX_STACK_LINE(573)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_source(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern);
				}
				HX_STACK_LINE(577)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->translate(-(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->x),-(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->y));
				HX_STACK_LINE(579)
				if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix != null()))){
					HX_STACK_LINE(581)
					::lime::math::Matrix3 _g12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix->__toMatrix3();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(581)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->transform(_g12);
					HX_STACK_LINE(582)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->fillPreserve();
					HX_STACK_LINE(583)
					::lime::math::Matrix3 _g13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::inversePendingMatrix->__toMatrix3();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(583)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->transform(_g13);
				}
				else{
					HX_STACK_LINE(587)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->fillPreserve();
				}
				HX_STACK_LINE(591)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->translate(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->x,::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->y);
				HX_STACK_LINE(592)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->closePath();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,playCommands,(void))

Void CairoGraphics_obj::quadraticCurveTo( Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","quadraticCurveTo",0x01a3b18e,"openfl._internal.renderer.cairo.CairoGraphics.quadraticCurveTo","openfl/_internal/renderer/cairo/CairoGraphics.hx",602,0x744ae94c)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(604)
		::lime::math::Vector2 current = null();		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(606)
		if ((!(::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->get_hasCurrentPoint()))){
			HX_STACK_LINE(608)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo(cx,cy);
			HX_STACK_LINE(609)
			::lime::math::Vector2 _g = ::lime::math::Vector2_obj::__new(cx,cy);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(609)
			current = _g;
		}
		else{
			HX_STACK_LINE(613)
			::lime::math::Vector2 _g1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->get_currentPoint();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(613)
			current = _g1;
		}
		HX_STACK_LINE(617)
		Float cx1 = (current->x + (0.66666666666666663 * ((cx - current->x))));		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(618)
		Float cy1 = (current->y + (0.66666666666666663 * ((cy - current->y))));		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(619)
		Float cx2 = (x + (0.66666666666666663 * ((cx - x))));		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(620)
		Float cy2 = (y + (0.66666666666666663 * ((cy - y))));		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(622)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->curveTo(cx1,cy1,cx2,cy2,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,quadraticCurveTo,(void))

Void CairoGraphics_obj::render( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","render",0x3c3e61d2,"openfl._internal.renderer.cairo.CairoGraphics.render","openfl/_internal/renderer/cairo/CairoGraphics.hx",629,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(629)
		if ((graphics->__dirty)){
			HX_STACK_LINE(631)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics = graphics;
			HX_STACK_LINE(632)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = graphics->__bounds;
			HX_STACK_LINE(634)
			if (((bool((bool((bool((bool(!(graphics->__visible)) || bool((graphics->__commands->length == (int)0)))) || bool((::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds == null())))) || bool((::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->width == (int)0)))) || bool((::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->height == (int)0))))){
				HX_STACK_LINE(636)
				if (((graphics->__cairo != null()))){
					HX_STACK_LINE(638)
					graphics->__cairo->destroy();
					HX_STACK_LINE(639)
					graphics->__cairo = null();
				}
			}
			else{
				HX_STACK_LINE(645)
				if (((graphics->__cairo != null()))){
					HX_STACK_LINE(647)
					Dynamic surface = graphics->__cairo->get_target();		HX_STACK_VAR(surface,"surface");
					HX_STACK_LINE(649)
					int _g = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_width(surface);		HX_STACK_VAR(_g,"_g");
					struct _Function_4_1{
						inline static bool Block( Dynamic &surface){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoGraphics.hx",649,0x744ae94c)
							{
								HX_STACK_LINE(649)
								int _g1 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_height(surface);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(649)
								return (::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->height != _g1);
							}
							return null();
						}
					};
					HX_STACK_LINE(649)
					if (((  ((!(((::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->width != _g))))) ? bool(_Function_4_1::Block(surface)) : bool(true) ))){
						HX_STACK_LINE(651)
						graphics->__cairo->destroy();
						HX_STACK_LINE(652)
						graphics->__cairo = null();
					}
				}
				HX_STACK_LINE(658)
				if (((graphics->__cairo == null()))){
					HX_STACK_LINE(660)
					int _g2 = ::Math_obj::ceil(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->width);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(660)
					int _g3 = ::Math_obj::ceil(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->height);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(660)
					Dynamic surface = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::_new((int)0,_g2,_g3);		HX_STACK_VAR(surface,"surface");
					HX_STACK_LINE(661)
					::lime::graphics::cairo::Cairo _g4 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(661)
					graphics->__cairo = _g4;
					HX_STACK_LINE(662)
					::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::destroy(surface);
				}
				HX_STACK_LINE(666)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo = graphics->__cairo;
				HX_STACK_LINE(668)
				Float offsetX = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->x;		HX_STACK_VAR(offsetX,"offsetX");
				HX_STACK_LINE(669)
				Float offsetY = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->y;		HX_STACK_VAR(offsetY,"offsetY");
				HX_STACK_LINE(671)
				Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(671)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands = _g5;
				HX_STACK_LINE(672)
				Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(672)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands = _g6;
				HX_STACK_LINE(674)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
				HX_STACK_LINE(675)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
				HX_STACK_LINE(676)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
				HX_STACK_LINE(677)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapRepeat = false;
				HX_STACK_LINE(679)
				{
					HX_STACK_LINE(679)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(679)
					Array< ::Dynamic > _g1 = graphics->__commands;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(679)
					while((true)){
						HX_STACK_LINE(679)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(679)
							break;
						}
						HX_STACK_LINE(679)
						::openfl::display::DrawCommand command = _g1->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(command,"command");
						HX_STACK_LINE(679)
						++(_g);
						HX_STACK_LINE(681)
						int _switch_1 = (command->__Index());
						if (  ( _switch_1==(int)3) ||  ( _switch_1==(int)4) ||  ( _switch_1==(int)13) ||  ( _switch_1==(int)14)){
							HX_STACK_LINE(685)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(command);
							HX_STACK_LINE(686)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(command);
						}
						else if (  ( _switch_1==(int)11)){
							HX_STACK_LINE(690)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(691)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(692)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
						}
						else if (  ( _switch_1==(int)12)){
							HX_STACK_LINE(696)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(command);
						}
						else if (  ( _switch_1==(int)0) ||  ( _switch_1==(int)1) ||  ( _switch_1==(int)2)){
							HX_STACK_LINE(700)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(701)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(703)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(command);
							HX_STACK_LINE(704)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(command);
						}
						else if (  ( _switch_1==(int)5) ||  ( _switch_1==(int)6) ||  ( _switch_1==(int)7) ||  ( _switch_1==(int)8)){
							HX_STACK_LINE(708)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(709)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(711)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(command);
							HX_STACK_LINE(712)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(command);
						}
						else if (  ( _switch_1==(int)10)){
							HX_STACK_LINE(681)
							::openfl::display::TriangleCulling culling = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(culling,"culling");
							HX_STACK_LINE(681)
							Array< Float > uvtData = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(uvtData,"uvtData");
							HX_STACK_LINE(681)
							Array< int > indices = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(indices,"indices");
							HX_STACK_LINE(681)
							Array< Float > vertices = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(vertices,"vertices");
							HX_STACK_LINE(714)
							{
								HX_STACK_LINE(716)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
								HX_STACK_LINE(717)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
								HX_STACK_LINE(719)
								Array< Float > v = vertices;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(720)
								Array< int > ind = indices;		HX_STACK_VAR(ind,"ind");
								HX_STACK_LINE(721)
								Array< Float > uvt = uvtData;		HX_STACK_VAR(uvt,"uvt");
								HX_STACK_LINE(722)
								Dynamic pattern = null();		HX_STACK_VAR(pattern,"pattern");
								HX_STACK_LINE(723)
								bool colorFill = (::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill == null());		HX_STACK_VAR(colorFill,"colorFill");
								HX_STACK_LINE(725)
								if (((bool(colorFill) && bool((uvt != null()))))){
									HX_STACK_LINE(728)
									break;
								}
								HX_STACK_LINE(732)
								if ((!(colorFill))){
									HX_STACK_LINE(736)
									if (((uvtData == null()))){
										HX_STACK_LINE(738)
										Array< Float > _g8;		HX_STACK_VAR(_g8,"_g8");
										struct _Function_9_1{
											inline static Array< Float > Block( ){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoGraphics.hx",738,0x744ae94c)
												{
													HX_STACK_LINE(738)
													Array< Float > this1;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(738)
													Array< Float > _g7 = Array_obj< Float >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g7,"_g7");
													HX_STACK_LINE(738)
													this1 = _g7;
													HX_STACK_LINE(738)
													return this1;
												}
												return null();
											}
										};
										HX_STACK_LINE(738)
										_g8 = _Function_9_1::Block();
										HX_STACK_LINE(738)
										uvtData = _g8;
										HX_STACK_LINE(740)
										{
											HX_STACK_LINE(740)
											int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
											HX_STACK_LINE(740)
											int _g2 = ::Std_obj::_int((Float(v->length) / Float((int)2)));		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(740)
											while((true)){
												HX_STACK_LINE(740)
												if ((!(((_g3 < _g2))))){
													HX_STACK_LINE(740)
													break;
												}
												HX_STACK_LINE(740)
												int i = (_g3)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(742)
												uvtData->push((Float(v->__get((i * (int)2))) / Float(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill->width)));
												HX_STACK_LINE(743)
												uvtData->push((Float(v->__get(((i * (int)2) + (int)1))) / Float(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill->height)));
											}
										}
									}
									HX_STACK_LINE(749)
									bool skipT = (uvtData->length != v->length);		HX_STACK_VAR(skipT,"skipT");
									HX_STACK_LINE(750)
									Dynamic normalizedUVT = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::normalizeUVT(uvtData,skipT);		HX_STACK_VAR(normalizedUVT,"normalizedUVT");
									HX_STACK_LINE(751)
									Float maxUVT = normalizedUVT->__Field(HX_CSTRING("max"),true);		HX_STACK_VAR(maxUVT,"maxUVT");
									HX_STACK_LINE(752)
									uvt = normalizedUVT->__Field(HX_CSTRING("uvt"),true);
									HX_STACK_LINE(754)
									if (((maxUVT > (int)1))){
										HX_STACK_LINE(756)
										int _g9 = ::Std_obj::_int(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->width);		HX_STACK_VAR(_g9,"_g9");
										HX_STACK_LINE(756)
										int _g10 = ::Std_obj::_int(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds->height);		HX_STACK_VAR(_g10,"_g10");
										HX_STACK_LINE(756)
										Dynamic _g11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createTempPatternCanvas(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill,::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapRepeat,_g9,_g10);		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(756)
										pattern = _g11;
									}
									else{
										HX_STACK_LINE(760)
										Dynamic _g12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createTempPatternCanvas(::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill,::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapRepeat,::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill->width,::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill->height);		HX_STACK_VAR(_g12,"_g12");
										HX_STACK_LINE(760)
										pattern = _g12;
									}
								}
								HX_STACK_LINE(766)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(767)
								int l = ind->length;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(769)
								int a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(769)
								int b;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(769)
								int c;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(770)
								int iax;		HX_STACK_VAR(iax,"iax");
								HX_STACK_LINE(770)
								int iay;		HX_STACK_VAR(iay,"iay");
								HX_STACK_LINE(770)
								int ibx;		HX_STACK_VAR(ibx,"ibx");
								HX_STACK_LINE(770)
								int iby;		HX_STACK_VAR(iby,"iby");
								HX_STACK_LINE(770)
								int icx;		HX_STACK_VAR(icx,"icx");
								HX_STACK_LINE(770)
								int icy;		HX_STACK_VAR(icy,"icy");
								HX_STACK_LINE(771)
								Float x1;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(771)
								Float y1;		HX_STACK_VAR(y1,"y1");
								HX_STACK_LINE(771)
								Float x2;		HX_STACK_VAR(x2,"x2");
								HX_STACK_LINE(771)
								Float y2;		HX_STACK_VAR(y2,"y2");
								HX_STACK_LINE(771)
								Float x3;		HX_STACK_VAR(x3,"x3");
								HX_STACK_LINE(771)
								Float y3;		HX_STACK_VAR(y3,"y3");
								HX_STACK_LINE(772)
								Float uvx1;		HX_STACK_VAR(uvx1,"uvx1");
								HX_STACK_LINE(772)
								Float uvy1;		HX_STACK_VAR(uvy1,"uvy1");
								HX_STACK_LINE(772)
								Float uvx2;		HX_STACK_VAR(uvx2,"uvx2");
								HX_STACK_LINE(772)
								Float uvy2;		HX_STACK_VAR(uvy2,"uvy2");
								HX_STACK_LINE(772)
								Float uvx3;		HX_STACK_VAR(uvx3,"uvx3");
								HX_STACK_LINE(772)
								Float uvy3;		HX_STACK_VAR(uvy3,"uvy3");
								HX_STACK_LINE(773)
								Float denom;		HX_STACK_VAR(denom,"denom");
								HX_STACK_LINE(774)
								Float t1;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(774)
								Float t2;		HX_STACK_VAR(t2,"t2");
								HX_STACK_LINE(774)
								Float t3;		HX_STACK_VAR(t3,"t3");
								HX_STACK_LINE(774)
								Float t4;		HX_STACK_VAR(t4,"t4");
								HX_STACK_LINE(775)
								Float dx;		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(775)
								Float dy;		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(777)
								while((true)){
									HX_STACK_LINE(777)
									if ((!(((i < l))))){
										HX_STACK_LINE(777)
										break;
									}
									HX_STACK_LINE(779)
									a = i;
									HX_STACK_LINE(780)
									b = (i + (int)1);
									HX_STACK_LINE(781)
									c = (i + (int)2);
									HX_STACK_LINE(783)
									iax = (ind->__get(a) * (int)2);
									HX_STACK_LINE(784)
									iay = ((ind->__get(a) * (int)2) + (int)1);
									HX_STACK_LINE(785)
									ibx = (ind->__get(b) * (int)2);
									HX_STACK_LINE(786)
									iby = ((ind->__get(b) * (int)2) + (int)1);
									HX_STACK_LINE(787)
									icx = (ind->__get(c) * (int)2);
									HX_STACK_LINE(788)
									icy = ((ind->__get(c) * (int)2) + (int)1);
									HX_STACK_LINE(790)
									x1 = v->__get(iax);
									HX_STACK_LINE(791)
									y1 = v->__get(iay);
									HX_STACK_LINE(792)
									x2 = v->__get(ibx);
									HX_STACK_LINE(793)
									y2 = v->__get(iby);
									HX_STACK_LINE(794)
									x3 = v->__get(icx);
									HX_STACK_LINE(795)
									y3 = v->__get(icy);
									HX_STACK_LINE(797)
									switch( (int)(culling->__Index())){
										case (int)2: {
											HX_STACK_LINE(801)
											if ((!(((((((x2 - x1)) * ((y3 - y1))) - (((y2 - y1)) * ((x3 - x1)))) < (int)0))))){
												HX_STACK_LINE(803)
												hx::AddEq(i,(int)3);
												HX_STACK_LINE(804)
												continue;
											}
										}
										;break;
										case (int)0: {
											HX_STACK_LINE(810)
											if (((((((x2 - x1)) * ((y3 - y1))) - (((y2 - y1)) * ((x3 - x1)))) < (int)0))){
												HX_STACK_LINE(812)
												hx::AddEq(i,(int)3);
												HX_STACK_LINE(813)
												continue;
											}
										}
										;break;
										default: {
										}
									}
									HX_STACK_LINE(821)
									if ((colorFill)){
										HX_STACK_LINE(823)
										::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->newPath();
										HX_STACK_LINE(824)
										::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo(x1,y1);
										HX_STACK_LINE(825)
										::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(x2,y2);
										HX_STACK_LINE(826)
										::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(x3,y3);
										HX_STACK_LINE(827)
										::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->closePath();
										HX_STACK_LINE(828)
										::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->fillPreserve();
										HX_STACK_LINE(829)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(830)
										continue;
									}
									HX_STACK_LINE(834)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->save();
									HX_STACK_LINE(835)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->newPath();
									HX_STACK_LINE(836)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->moveTo(x1,y1);
									HX_STACK_LINE(837)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(x2,y2);
									HX_STACK_LINE(838)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->lineTo(x3,y3);
									HX_STACK_LINE(839)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->closePath();
									HX_STACK_LINE(841)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->clip();
									HX_STACK_LINE(843)
									int _g13 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_width(pattern);		HX_STACK_VAR(_g13,"_g13");
									HX_STACK_LINE(843)
									Float _g14 = (uvt->__get(iax) * _g13);		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(843)
									uvx1 = _g14;
									HX_STACK_LINE(844)
									int _g15 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_width(pattern);		HX_STACK_VAR(_g15,"_g15");
									HX_STACK_LINE(844)
									Float _g16 = (uvt->__get(ibx) * _g15);		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(844)
									uvx2 = _g16;
									HX_STACK_LINE(845)
									int _g17 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_width(pattern);		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(845)
									Float _g18 = (uvt->__get(icx) * _g17);		HX_STACK_VAR(_g18,"_g18");
									HX_STACK_LINE(845)
									uvx3 = _g18;
									HX_STACK_LINE(846)
									int _g19 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_height(pattern);		HX_STACK_VAR(_g19,"_g19");
									HX_STACK_LINE(846)
									Float _g20 = (uvt->__get(iay) * _g19);		HX_STACK_VAR(_g20,"_g20");
									HX_STACK_LINE(846)
									uvy1 = _g20;
									HX_STACK_LINE(847)
									int _g21 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_height(pattern);		HX_STACK_VAR(_g21,"_g21");
									HX_STACK_LINE(847)
									Float _g22 = (uvt->__get(iby) * _g21);		HX_STACK_VAR(_g22,"_g22");
									HX_STACK_LINE(847)
									uvy2 = _g22;
									HX_STACK_LINE(848)
									int _g23 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_height(pattern);		HX_STACK_VAR(_g23,"_g23");
									HX_STACK_LINE(848)
									Float _g24 = (uvt->__get(icy) * _g23);		HX_STACK_VAR(_g24,"_g24");
									HX_STACK_LINE(848)
									uvy3 = _g24;
									HX_STACK_LINE(850)
									denom = ((((uvx1 * ((uvy3 - uvy2))) - (uvx2 * uvy3)) + (uvx3 * uvy2)) + (((uvx2 - uvx3)) * uvy1));
									HX_STACK_LINE(852)
									if (((denom == (int)0))){
										HX_STACK_LINE(854)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(855)
										continue;
									}
									HX_STACK_LINE(859)
									t1 = (Float(-((((((uvy1 * ((x3 - x2))) - (uvy2 * x3)) + (uvy3 * x2)) + (((uvy2 - uvy3)) * x1))))) / Float(denom));
									HX_STACK_LINE(860)
									t2 = (Float((((((uvy2 * y3) + (uvy1 * ((y2 - y3)))) - (uvy3 * y2)) + (((uvy3 - uvy2)) * y1)))) / Float(denom));
									HX_STACK_LINE(861)
									t3 = (Float((((((uvx1 * ((x3 - x2))) - (uvx2 * x3)) + (uvx3 * x2)) + (((uvx2 - uvx3)) * x1)))) / Float(denom));
									HX_STACK_LINE(862)
									t4 = (Float(-((((((uvx2 * y3) + (uvx1 * ((y2 - y3)))) - (uvx3 * y2)) + (((uvx3 - uvx2)) * y1))))) / Float(denom));
									HX_STACK_LINE(863)
									dx = (Float(((((uvx1 * (((uvy3 * x2) - (uvy2 * x3)))) + (uvy1 * (((uvx2 * x3) - (uvx3 * x2))))) + ((((uvx3 * uvy2) - (uvx2 * uvy3))) * x1)))) / Float(denom));
									HX_STACK_LINE(864)
									dy = (Float(((((uvx1 * (((uvy3 * y2) - (uvy2 * y3)))) + (uvy1 * (((uvx2 * y3) - (uvx3 * y2))))) + ((((uvx3 * uvy2) - (uvx2 * uvy3))) * y1)))) / Float(denom));
									HX_STACK_LINE(866)
									::lime::math::Matrix3 matrix = ::lime::math::Matrix3_obj::__new(t1,t2,t3,t4,dx,dy);		HX_STACK_VAR(matrix,"matrix");
									HX_STACK_LINE(868)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->transform(matrix);
									HX_STACK_LINE(869)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->setSourceSurface(pattern,(int)0,(int)0);
									HX_STACK_LINE(870)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->paint();
									HX_STACK_LINE(872)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->restore();
									HX_STACK_LINE(874)
									hx::AddEq(i,(int)3);
								}
							}
						}
						else if (  ( _switch_1==(int)9)){
							HX_STACK_LINE(681)
							int count = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(count,"count");
							HX_STACK_LINE(681)
							int flags = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(flags,"flags");
							HX_STACK_LINE(681)
							bool smooth = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(smooth,"smooth");
							HX_STACK_LINE(681)
							Array< Float > tileData = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tileData,"tileData");
							HX_STACK_LINE(681)
							::openfl::display::Tilesheet sheet = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(sheet,"sheet");
							HX_STACK_LINE(878)
							{
								HX_STACK_LINE(880)
								return null();
								HX_STACK_LINE(882)
								bool useScale = (((int(flags) & int((int)1))) > (int)0);		HX_STACK_VAR(useScale,"useScale");
								HX_STACK_LINE(883)
								bool useRotation = (((int(flags) & int((int)2))) > (int)0);		HX_STACK_VAR(useRotation,"useRotation");
								HX_STACK_LINE(884)
								bool useTransform = (((int(flags) & int((int)16))) > (int)0);		HX_STACK_VAR(useTransform,"useTransform");
								HX_STACK_LINE(885)
								bool useRGB = (((int(flags) & int((int)4))) > (int)0);		HX_STACK_VAR(useRGB,"useRGB");
								HX_STACK_LINE(886)
								bool useAlpha = (((int(flags) & int((int)8))) > (int)0);		HX_STACK_VAR(useAlpha,"useAlpha");
								HX_STACK_LINE(887)
								bool useRect = (((int(flags) & int((int)32))) > (int)0);		HX_STACK_VAR(useRect,"useRect");
								HX_STACK_LINE(888)
								bool useOrigin = (((int(flags) & int((int)64))) > (int)0);		HX_STACK_VAR(useOrigin,"useOrigin");
								HX_STACK_LINE(889)
								bool useBlendAdd = (((int(flags) & int((int)65536))) > (int)0);		HX_STACK_VAR(useBlendAdd,"useBlendAdd");
								HX_STACK_LINE(891)
								if ((useTransform)){
									HX_STACK_LINE(891)
									useScale = false;
									HX_STACK_LINE(891)
									useRotation = false;
								}
								HX_STACK_LINE(893)
								int scaleIndex = (int)0;		HX_STACK_VAR(scaleIndex,"scaleIndex");
								HX_STACK_LINE(894)
								int rotationIndex = (int)0;		HX_STACK_VAR(rotationIndex,"rotationIndex");
								HX_STACK_LINE(895)
								int rgbIndex = (int)0;		HX_STACK_VAR(rgbIndex,"rgbIndex");
								HX_STACK_LINE(896)
								int alphaIndex = (int)0;		HX_STACK_VAR(alphaIndex,"alphaIndex");
								HX_STACK_LINE(897)
								int transformIndex = (int)0;		HX_STACK_VAR(transformIndex,"transformIndex");
								HX_STACK_LINE(899)
								int numValues = (int)3;		HX_STACK_VAR(numValues,"numValues");
								HX_STACK_LINE(901)
								if ((useRect)){
									HX_STACK_LINE(901)
									if ((useOrigin)){
										HX_STACK_LINE(901)
										numValues = (int)8;
									}
									else{
										HX_STACK_LINE(901)
										numValues = (int)6;
									}
								}
								HX_STACK_LINE(902)
								if ((useScale)){
									HX_STACK_LINE(902)
									scaleIndex = numValues;
									HX_STACK_LINE(902)
									(numValues)++;
								}
								HX_STACK_LINE(903)
								if ((useRotation)){
									HX_STACK_LINE(903)
									rotationIndex = numValues;
									HX_STACK_LINE(903)
									(numValues)++;
								}
								HX_STACK_LINE(904)
								if ((useTransform)){
									HX_STACK_LINE(904)
									transformIndex = numValues;
									HX_STACK_LINE(904)
									hx::AddEq(numValues,(int)4);
								}
								HX_STACK_LINE(905)
								if ((useRGB)){
									HX_STACK_LINE(905)
									rgbIndex = numValues;
									HX_STACK_LINE(905)
									hx::AddEq(numValues,(int)3);
								}
								HX_STACK_LINE(906)
								if ((useAlpha)){
									HX_STACK_LINE(906)
									alphaIndex = numValues;
									HX_STACK_LINE(906)
									(numValues)++;
								}
								HX_STACK_LINE(908)
								int totalCount = tileData->length;		HX_STACK_VAR(totalCount,"totalCount");
								HX_STACK_LINE(909)
								if (((bool((count >= (int)0)) && bool((totalCount > count))))){
									HX_STACK_LINE(909)
									totalCount = count;
								}
								HX_STACK_LINE(910)
								int itemCount = ::Std_obj::_int((Float(totalCount) / Float(numValues)));		HX_STACK_VAR(itemCount,"itemCount");
								HX_STACK_LINE(911)
								int index = (int)0;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(913)
								::openfl::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
								HX_STACK_LINE(914)
								::openfl::geom::Point center = null();		HX_STACK_VAR(center,"center");
								HX_STACK_LINE(915)
								int previousTileID = (int)-1;		HX_STACK_VAR(previousTileID,"previousTileID");
								HX_STACK_LINE(917)
								Dynamic surface;		HX_STACK_VAR(surface,"surface");
								HX_STACK_LINE(918)
								sheet->__bitmap->__sync();
								HX_STACK_LINE(919)
								Dynamic _g25 = sheet->__bitmap->getSurface();		HX_STACK_VAR(_g25,"_g25");
								HX_STACK_LINE(919)
								surface = _g25;
								HX_STACK_LINE(921)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->setSourceSurface(surface,(int)0,(int)0);
								HX_STACK_LINE(923)
								if ((useBlendAdd)){
									HX_STACK_LINE(925)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_operator((int)12);
								}
								HX_STACK_LINE(930)
								while((true)){
									HX_STACK_LINE(930)
									if ((!(((index < totalCount))))){
										HX_STACK_LINE(930)
										break;
									}
									HX_STACK_LINE(932)
									int tileID;		HX_STACK_VAR(tileID,"tileID");
									HX_STACK_LINE(932)
									if ((!(useRect))){
										HX_STACK_LINE(932)
										tileID = ::Std_obj::_int(tileData->__get((index + (int)2)));
									}
									else{
										HX_STACK_LINE(932)
										tileID = (int)-1;
									}
									HX_STACK_LINE(934)
									if (((bool(!(useRect)) && bool((tileID != previousTileID))))){
										HX_STACK_LINE(936)
										rect = sheet->__tileRects->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();
										HX_STACK_LINE(937)
										center = sheet->__centerPoints->__get(tileID).StaticCast< ::openfl::geom::Point >();
										HX_STACK_LINE(939)
										previousTileID = tileID;
									}
									else{
										HX_STACK_LINE(941)
										if ((useRect)){
											HX_STACK_LINE(943)
											rect = sheet->__rectTile;
											HX_STACK_LINE(944)
											rect->setTo(tileData->__get((index + (int)2)),tileData->__get((index + (int)3)),tileData->__get((index + (int)4)),tileData->__get((index + (int)5)));
											HX_STACK_LINE(945)
											center = sheet->__point;
											HX_STACK_LINE(947)
											if ((useOrigin)){
												HX_STACK_LINE(949)
												center->x = tileData->__get((index + (int)6));
												HX_STACK_LINE(949)
												center->y = tileData->__get((index + (int)7));
											}
											else{
												HX_STACK_LINE(953)
												center->x = (int)0;
												HX_STACK_LINE(953)
												center->y = (int)0;
											}
										}
									}
									HX_STACK_LINE(959)
									if (((bool((bool((bool((rect != null())) && bool((rect->width > (int)0)))) && bool((rect->height > (int)0)))) && bool((center != null()))))){
										HX_STACK_LINE(961)
										::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->save();
										HX_STACK_LINE(962)
										::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->translate(tileData->__get(index),tileData->__get((index + (int)1)));
										HX_STACK_LINE(964)
										if ((useRotation)){
										}
										HX_STACK_LINE(970)
										Float scale = 1.0;		HX_STACK_VAR(scale,"scale");
										HX_STACK_LINE(972)
										if ((useScale)){
											HX_STACK_LINE(974)
											scale = tileData->__get((index + scaleIndex));
										}
										HX_STACK_LINE(978)
										if ((useTransform)){
											HX_STACK_LINE(980)
											::lime::math::Matrix3 matrix = ::lime::math::Matrix3_obj::__new(tileData->__get((index + transformIndex)),tileData->__get(((index + transformIndex) + (int)1)),tileData->__get(((index + transformIndex) + (int)2)),tileData->__get(((index + transformIndex) + (int)3)),(int)0,(int)0);		HX_STACK_VAR(matrix,"matrix");
											HX_STACK_LINE(981)
											::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->transform(matrix);
										}
										HX_STACK_LINE(987)
										if ((useAlpha)){
											HX_STACK_LINE(989)
											::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->paintWithAlpha(tileData->__get((index + alphaIndex)));
										}
										else{
											HX_STACK_LINE(994)
											::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->paint();
										}
										HX_STACK_LINE(999)
										::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->restore();
									}
									HX_STACK_LINE(1003)
									hx::AddEq(index,numValues);
								}
								HX_STACK_LINE(1007)
								if ((useBlendAdd)){
									HX_STACK_LINE(1009)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo->set_operator((int)2);
								}
							}
						}
						else  {
							HX_STACK_LINE(1016)
							::openfl::Lib_obj::notImplemented(HX_CSTRING("CairoGraphics"));
						}
;
;
					}
				}
			}
			HX_STACK_LINE(1024)
			graphics->set___dirty(false);
			HX_STACK_LINE(1026)
			if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->length > (int)0))){
				HX_STACK_LINE(1028)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
			}
			HX_STACK_LINE(1032)
			if (((::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->length > (int)0))){
				HX_STACK_LINE(1034)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,render,(void))

Void CairoGraphics_obj::renderMask( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","renderMask",0x2ed81fde,"openfl._internal.renderer.cairo.CairoGraphics.renderMask","openfl/_internal/renderer/cairo/CairoGraphics.hx",1045,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1045)
		if (((graphics->__commands->length != (int)0))){
			HX_STACK_LINE(1047)
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(1049)
			Float positionX = 0.0;		HX_STACK_VAR(positionX,"positionX");
			HX_STACK_LINE(1050)
			Float positionY = 0.0;		HX_STACK_VAR(positionY,"positionY");
			HX_STACK_LINE(1052)
			int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
			HX_STACK_LINE(1053)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(1055)
			{
				HX_STACK_LINE(1055)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1055)
				Array< ::Dynamic > _g1 = graphics->__commands;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1055)
				while((true)){
					HX_STACK_LINE(1055)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(1055)
						break;
					}
					HX_STACK_LINE(1055)
					::openfl::display::DrawCommand command = _g1->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(command,"command");
					HX_STACK_LINE(1055)
					++(_g);
					HX_STACK_LINE(1057)
					switch( (int)(command->__Index())){
						case (int)3: {
							HX_STACK_LINE(1057)
							Float y = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float x = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1057)
							Float cy2 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(cy2,"cy2");
							HX_STACK_LINE(1057)
							Float cy1 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(cy1,"cy1");
							HX_STACK_LINE(1057)
							Float cx2 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cx2,"cx2");
							HX_STACK_LINE(1057)
							Float cx1 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx1,"cx1");
							HX_STACK_LINE(1059)
							{
								HX_STACK_LINE(1061)
								cairo->curveTo((cx1 - offsetX),(cy1 - offsetY),(cx2 - offsetX),(cy2 - offsetY),(x - offsetX),(y - offsetY));
								HX_STACK_LINE(1062)
								positionX = x;
								HX_STACK_LINE(1063)
								positionY = y;
							}
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1057)
							Float y = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float x = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1057)
							Float cy = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(1057)
							Float cx = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(1065)
							{
								HX_STACK_LINE(1067)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo((cx - offsetX),(cy - offsetY),(x - offsetX),(y - offsetY));
								HX_STACK_LINE(1068)
								positionX = x;
								HX_STACK_LINE(1069)
								positionY = y;
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1057)
							Float radius = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(radius,"radius");
							HX_STACK_LINE(1057)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1073)
							cairo->arc((x - offsetX),(y - offsetY),radius,(int)0,(::Math_obj::PI * (int)2));
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(1057)
							Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1057)
							Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1057)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1075)
							{
								HX_STACK_LINE(1077)
								hx::SubEq(x,offsetX);
								HX_STACK_LINE(1078)
								hx::SubEq(y,offsetY);
								HX_STACK_LINE(1080)
								Float kappa = .5522848;		HX_STACK_VAR(kappa,"kappa");
								HX_STACK_LINE(1081)
								Float ox = ((Float(width) / Float((int)2)) * kappa);		HX_STACK_VAR(ox,"ox");
								HX_STACK_LINE(1082)
								Float oy = ((Float(height) / Float((int)2)) * kappa);		HX_STACK_VAR(oy,"oy");
								HX_STACK_LINE(1083)
								Float xe = (x + width);		HX_STACK_VAR(xe,"xe");
								HX_STACK_LINE(1084)
								Float ye = (y + height);		HX_STACK_VAR(ye,"ye");
								HX_STACK_LINE(1085)
								Float xm = (x + (Float(width) / Float((int)2)));		HX_STACK_VAR(xm,"xm");
								HX_STACK_LINE(1086)
								Float ym = (y + (Float(height) / Float((int)2)));		HX_STACK_VAR(ym,"ym");
								HX_STACK_LINE(1090)
								cairo->moveTo(x,ym);
								HX_STACK_LINE(1091)
								cairo->curveTo(x,(ym - oy),(xm - ox),y,xm,y);
								HX_STACK_LINE(1092)
								cairo->curveTo((xm + ox),y,xe,(ym - oy),xe,ym);
								HX_STACK_LINE(1093)
								cairo->curveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
								HX_STACK_LINE(1094)
								cairo->curveTo((xm - ox),ye,x,(ym + oy),x,ym);
							}
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(1057)
							Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1057)
							Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1057)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1099)
							cairo->rectangle((x - offsetX),(y - offsetY),width,height);
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(1057)
							Float ry = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(1057)
							Float rx = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(1057)
							Float height = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1057)
							Float width = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1057)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1103)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect((x - offsetX),(y - offsetY),width,height,rx,ry);
						}
						;break;
						case (int)13: {
							HX_STACK_LINE(1057)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1105)
							{
								HX_STACK_LINE(1107)
								cairo->lineTo((x - offsetX),(y - offsetY));
								HX_STACK_LINE(1108)
								positionX = x;
								HX_STACK_LINE(1109)
								positionY = y;
							}
						}
						;break;
						case (int)14: {
							HX_STACK_LINE(1057)
							Float y = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float x = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1111)
							{
								HX_STACK_LINE(1113)
								cairo->moveTo((x - offsetX),(y - offsetY));
								HX_STACK_LINE(1114)
								positionX = x;
								HX_STACK_LINE(1115)
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


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,renderMask,(void))


CairoGraphics_obj::CairoGraphics_obj()
{
}

Dynamic CairoGraphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { return SIN45; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { return TAN22; }
		if (HX_FIELD_EQ(inName,"cairo") ) { return cairo; }
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
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { return fillPattern; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { return bitmapRepeat; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { return fillCommands; }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { return normalizeUVT_dyn(); }
		if (HX_FIELD_EQ(inName,"playCommands") ) { return playCommands_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { return pendingMatrix; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { return strokePattern; }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { return strokeCommands; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"beginPatternFill") ) { return beginPatternFill_dyn(); }
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { return quadraticCurveTo_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { return inversePendingMatrix; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createTempPatternCanvas") ) { return createTempPatternCanvas_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoGraphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
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
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { fillPattern=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { bitmapRepeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { fillCommands=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { pendingMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { strokePattern=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { strokeCommands=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { inversePendingMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoGraphics_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SIN45"),
	HX_CSTRING("TAN22"),
	HX_CSTRING("bitmapFill"),
	HX_CSTRING("bitmapRepeat"),
	HX_CSTRING("bounds"),
	HX_CSTRING("cairo"),
	HX_CSTRING("fillCommands"),
	HX_CSTRING("fillPattern"),
	HX_CSTRING("graphics"),
	HX_CSTRING("hasFill"),
	HX_CSTRING("hasStroke"),
	HX_CSTRING("inversePendingMatrix"),
	HX_CSTRING("pendingMatrix"),
	HX_CSTRING("strokeCommands"),
	HX_CSTRING("strokePattern"),
	HX_CSTRING("beginPatternFill"),
	HX_CSTRING("createTempPatternCanvas"),
	HX_CSTRING("endFill"),
	HX_CSTRING("endStroke"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("isCCW"),
	HX_CSTRING("normalizeUVT"),
	HX_CSTRING("playCommands"),
	HX_CSTRING("quadraticCurveTo"),
	HX_CSTRING("render"),
	HX_CSTRING("renderMask"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
};

#endif

Class CairoGraphics_obj::__mClass;

void CairoGraphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.cairo.CairoGraphics"), hx::TCanCast< CairoGraphics_obj> ,sStaticFields,sMemberFields,
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

void CairoGraphics_obj::__boot()
{
	SIN45= 0.70710678118654752440084436210485;
	TAN22= 0.4142135623730950488016887242097;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
