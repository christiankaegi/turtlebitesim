#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
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
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void Graphics_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Graphics","new",0x7fd846a7,"openfl.display.Graphics.new","openfl/display/Graphics.hx",36,0x8d299ce7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(59)
	this->__visible = true;
	HX_STACK_LINE(53)
	this->__glStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(52)
	this->__dirty = true;
	HX_STACK_LINE(51)
	this->__commands = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(71)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(71)
	this->__commands = _g;
	HX_STACK_LINE(72)
	this->__halfStrokeWidth = (int)0;
	HX_STACK_LINE(73)
	this->__positionX = (int)0;
	HX_STACK_LINE(74)
	this->__positionY = (int)0;
}
;
	return null();
}

//Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new()
{  hx::ObjectPtr< Graphics_obj > result = new Graphics_obj();
	result->__construct();
	return result;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > result = new Graphics_obj();
	result->__construct();
	return result;}

Void Graphics_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl.display.Graphics","beginBitmapFill",0x31c80e62,"openfl.display.Graphics.beginBitmapFill","openfl/display/Graphics.hx",119,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(121)
		::openfl::geom::Matrix _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		if (((matrix != null()))){
			HX_STACK_LINE(121)
			_g = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);
		}
		else{
			HX_STACK_LINE(121)
			_g = null();
		}
		HX_STACK_LINE(121)
		::openfl::display::DrawCommand _g1 = ::openfl::display::DrawCommand_obj::BeginBitmapFill(bitmap,_g,repeat,smooth);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(121)
		this->__commands->push(_g1);
		HX_STACK_LINE(123)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

Void Graphics_obj::beginFill( hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("openfl.display.Graphics","beginFill",0xf44a92d3,"openfl.display.Graphics.beginFill","openfl/display/Graphics.hx",142,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(144)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::BeginFill((int(color) & int((int)16777215)),alpha);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(144)
		this->__commands->push(_g);
		HX_STACK_LINE(146)
		if (((alpha > (int)0))){
			HX_STACK_LINE(146)
			this->__visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

Void Graphics_obj::beginGradientFill( ::openfl::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
{
		HX_STACK_FRAME("openfl.display.Graphics","beginGradientFill",0x99f380e3,"openfl.display.Graphics.beginGradientFill","openfl/display/Graphics.hx",216,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
		HX_STACK_LINE(218)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::BeginGradientFill(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(218)
		this->__commands->push(_g);
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(220)
			while((true)){
				HX_STACK_LINE(220)
				if ((!(((_g1 < alphas->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(220)
					break;
				}
				HX_STACK_LINE(220)
				Dynamic alpha = alphas->__GetItem(_g1);		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(220)
				++(_g1);
				HX_STACK_LINE(222)
				if (((alpha > (int)0))){
					HX_STACK_LINE(224)
					this->__visible = true;
					HX_STACK_LINE(225)
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

Void Graphics_obj::clear( ){
{
		HX_STACK_FRAME("openfl.display.Graphics","clear",0x0a9f4794,"openfl.display.Graphics.clear","openfl/display/Graphics.hx",239,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(241)
		this->__commands = _g;
		HX_STACK_LINE(242)
		this->__halfStrokeWidth = (int)0;
		HX_STACK_LINE(244)
		if (((this->__bounds != null()))){
			HX_STACK_LINE(246)
			this->set___dirty(true);
			HX_STACK_LINE(247)
			this->__transformDirty = true;
			HX_STACK_LINE(248)
			this->__bounds = null();
		}
		HX_STACK_LINE(252)
		this->__visible = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

Void Graphics_obj::copyFrom( ::openfl::display::Graphics sourceGraphics){
{
		HX_STACK_FRAME("openfl.display.Graphics","copyFrom",0x0a477418,"openfl.display.Graphics.copyFrom","openfl/display/Graphics.hx",260,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceGraphics,"sourceGraphics")
		HX_STACK_LINE(262)
		::openfl::geom::Rectangle _g = sourceGraphics->__bounds->clone();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(262)
		this->__bounds = _g;
		HX_STACK_LINE(263)
		Array< ::Dynamic > _g1 = sourceGraphics->__commands->copy();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(263)
		this->__commands = _g1;
		HX_STACK_LINE(264)
		this->set___dirty(true);
		HX_STACK_LINE(265)
		this->__halfStrokeWidth = sourceGraphics->__halfStrokeWidth;
		HX_STACK_LINE(266)
		this->__positionX = sourceGraphics->__positionX;
		HX_STACK_LINE(267)
		this->__positionY = sourceGraphics->__positionY;
		HX_STACK_LINE(268)
		this->__transformDirty = true;
		HX_STACK_LINE(269)
		this->__visible = sourceGraphics->__visible;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,copyFrom,(void))

Void Graphics_obj::cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl.display.Graphics","cubicCurveTo",0x467410b9,"openfl.display.Graphics.cubicCurveTo","openfl/display/Graphics.hx",274,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX1,"controlX1")
		HX_STACK_ARG(controlY1,"controlY1")
		HX_STACK_ARG(controlX2,"controlX2")
		HX_STACK_ARG(controlY2,"controlY2")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(276)
		this->__inflateBounds((this->__positionX - this->__halfStrokeWidth),(this->__positionY - this->__halfStrokeWidth));
		HX_STACK_LINE(277)
		this->__inflateBounds((this->__positionX + this->__halfStrokeWidth),(this->__positionY + this->__halfStrokeWidth));
		HX_STACK_LINE(281)
		this->__inflateBounds(controlX1,controlY1);
		HX_STACK_LINE(282)
		this->__inflateBounds(controlX2,controlY2);
		HX_STACK_LINE(284)
		this->__positionX = anchorX;
		HX_STACK_LINE(285)
		this->__positionY = anchorY;
		HX_STACK_LINE(287)
		this->__inflateBounds((this->__positionX - this->__halfStrokeWidth),(this->__positionY - this->__halfStrokeWidth));
		HX_STACK_LINE(288)
		this->__inflateBounds((this->__positionX + this->__halfStrokeWidth),(this->__positionY + this->__halfStrokeWidth));
		HX_STACK_LINE(290)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::CubicCurveTo(controlX1,controlY1,controlX2,controlY2,anchorX,anchorY);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(290)
		this->__commands->push(_g);
		HX_STACK_LINE(292)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,cubicCurveTo,(void))

Void Graphics_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl.display.Graphics","curveTo",0x89f305d1,"openfl.display.Graphics.curveTo","openfl/display/Graphics.hx",327,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(329)
		this->__inflateBounds((this->__positionX - this->__halfStrokeWidth),(this->__positionY - this->__halfStrokeWidth));
		HX_STACK_LINE(330)
		this->__inflateBounds((this->__positionX + this->__halfStrokeWidth),(this->__positionY + this->__halfStrokeWidth));
		HX_STACK_LINE(334)
		this->__inflateBounds(controlX,controlY);
		HX_STACK_LINE(336)
		this->__positionX = anchorX;
		HX_STACK_LINE(337)
		this->__positionY = anchorY;
		HX_STACK_LINE(339)
		this->__inflateBounds((this->__positionX - this->__halfStrokeWidth),(this->__positionY - this->__halfStrokeWidth));
		HX_STACK_LINE(340)
		this->__inflateBounds((this->__positionX + this->__halfStrokeWidth),(this->__positionY + this->__halfStrokeWidth));
		HX_STACK_LINE(342)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::CurveTo(controlX,controlY,anchorX,anchorY);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(342)
		this->__commands->push(_g);
		HX_STACK_LINE(344)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

Void Graphics_obj::drawCircle( Float x,Float y,Float radius){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawCircle",0xee64ddcd,"openfl.display.Graphics.drawCircle","openfl/display/Graphics.hx",364,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(366)
		if (((radius <= (int)0))){
			HX_STACK_LINE(366)
			return null();
		}
		HX_STACK_LINE(368)
		this->__inflateBounds(((x - radius) - this->__halfStrokeWidth),((y - radius) - this->__halfStrokeWidth));
		HX_STACK_LINE(369)
		this->__inflateBounds(((x + radius) + this->__halfStrokeWidth),((y + radius) + this->__halfStrokeWidth));
		HX_STACK_LINE(371)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::DrawCircle(x,y,radius);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(371)
		this->__commands->push(_g);
		HX_STACK_LINE(373)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

Void Graphics_obj::drawEllipse( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawEllipse",0xbfad1a81,"openfl.display.Graphics.drawEllipse","openfl/display/Graphics.hx",394,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(396)
		if (((bool((width <= (int)0)) || bool((height <= (int)0))))){
			HX_STACK_LINE(396)
			return null();
		}
		HX_STACK_LINE(398)
		this->__inflateBounds((x - this->__halfStrokeWidth),(y - this->__halfStrokeWidth));
		HX_STACK_LINE(399)
		this->__inflateBounds(((x + width) + this->__halfStrokeWidth),((y + height) + this->__halfStrokeWidth));
		HX_STACK_LINE(401)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::DrawEllipse(x,y,width,height);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(401)
		this->__commands->push(_g);
		HX_STACK_LINE(403)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

Void Graphics_obj::drawGraphicsData( Array< ::openfl::display::IGraphicsData > graphicsData){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawGraphicsData",0x60ea9412,"openfl.display.Graphics.drawGraphicsData","openfl/display/Graphics.hx",422,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsData,"graphicsData")
		HX_STACK_LINE(422)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("Graphics.drawGraphicsData"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

Void Graphics_obj::drawPath( Array< int > commands,Array< Float > data,::openfl::display::GraphicsPathWinding winding){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawPath",0xa0a1f822,"openfl.display.Graphics.drawPath","openfl/display/Graphics.hx",472,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(commands,"commands")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(winding,"winding")
		HX_STACK_LINE(474)
		int dataIndex = (int)0;		HX_STACK_VAR(dataIndex,"dataIndex");
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(476)
			while((true)){
				HX_STACK_LINE(476)
				if ((!(((_g < commands->length))))){
					HX_STACK_LINE(476)
					break;
				}
				HX_STACK_LINE(476)
				Dynamic command = commands->__get(_g);		HX_STACK_VAR(command,"command");
				HX_STACK_LINE(476)
				++(_g);
				HX_STACK_LINE(478)
				switch( (int)(command)){
					case (int)1: {
						HX_STACK_LINE(482)
						this->moveTo(data->__get(dataIndex),data->__get((dataIndex + (int)1)));
						HX_STACK_LINE(483)
						hx::AddEq(dataIndex,(int)2);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(487)
						this->lineTo(data->__get(dataIndex),data->__get((dataIndex + (int)1)));
						HX_STACK_LINE(488)
						hx::AddEq(dataIndex,(int)2);
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(492)
						this->curveTo(data->__get(dataIndex),data->__get((dataIndex + (int)1)),data->__get((dataIndex + (int)2)),data->__get((dataIndex + (int)3)));
						HX_STACK_LINE(493)
						hx::AddEq(dataIndex,(int)4);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(497)
						this->cubicCurveTo(data->__get(dataIndex),data->__get((dataIndex + (int)1)),data->__get((dataIndex + (int)2)),data->__get((dataIndex + (int)3)),data->__get((dataIndex + (int)4)),data->__get((dataIndex + (int)5)));
						HX_STACK_LINE(498)
						hx::AddEq(dataIndex,(int)6);
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

Void Graphics_obj::drawRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawRect",0xa1f75fa1,"openfl.display.Graphics.drawRect","openfl/display/Graphics.hx",526,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(528)
		if (((bool((width <= (int)0)) || bool((height <= (int)0))))){
			HX_STACK_LINE(528)
			return null();
		}
		HX_STACK_LINE(530)
		this->__inflateBounds((x - this->__halfStrokeWidth),(y - this->__halfStrokeWidth));
		HX_STACK_LINE(531)
		this->__inflateBounds(((x + width) + this->__halfStrokeWidth),((y + height) + this->__halfStrokeWidth));
		HX_STACK_LINE(533)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::DrawRect(x,y,width,height);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(533)
		this->__commands->push(_g);
		HX_STACK_LINE(535)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

Void Graphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float rx,hx::Null< Float >  __o_ry){
Float ry = __o_ry.Default(-1);
	HX_STACK_FRAME("openfl.display.Graphics","drawRoundRect",0xb24e78f5,"openfl.display.Graphics.drawRoundRect","openfl/display/Graphics.hx",566,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(rx,"rx")
	HX_STACK_ARG(ry,"ry")
{
		HX_STACK_LINE(568)
		if (((bool((width <= (int)0)) || bool((height <= (int)0))))){
			HX_STACK_LINE(568)
			return null();
		}
		HX_STACK_LINE(570)
		this->__inflateBounds((x - this->__halfStrokeWidth),(y - this->__halfStrokeWidth));
		HX_STACK_LINE(571)
		this->__inflateBounds(((x + width) + this->__halfStrokeWidth),((y + height) + this->__halfStrokeWidth));
		HX_STACK_LINE(573)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::DrawRoundRect(x,y,width,height,rx,ry);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(573)
		this->__commands->push(_g);
		HX_STACK_LINE(575)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

Void Graphics_obj::drawRoundRectComplex( Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawRoundRectComplex",0x06fa4dbb,"openfl.display.Graphics.drawRoundRectComplex","openfl/display/Graphics.hx",582,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(topLeftRadius,"topLeftRadius")
		HX_STACK_ARG(topRightRadius,"topRightRadius")
		HX_STACK_ARG(bottomLeftRadius,"bottomLeftRadius")
		HX_STACK_ARG(bottomRightRadius,"bottomRightRadius")
		HX_STACK_LINE(582)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("Graphics.drawRoundRectComplex"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,drawRoundRectComplex,(void))

Void Graphics_obj::drawTiles( ::openfl::display::Tilesheet sheet,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl.display.Graphics","drawTiles",0x3ff51868,"openfl.display.Graphics.drawTiles","openfl/display/Graphics.hx",587,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(592)
		this->__inflateBounds((int)0,(int)0);
		HX_STACK_LINE(593)
		this->__inflateBounds(::openfl::Lib_obj::current->stage->stageWidth,::openfl::Lib_obj::current->stage->stageHeight);
		HX_STACK_LINE(595)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::DrawTiles(sheet,tileData,smooth,flags,count);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(595)
		this->__commands->push(_g);
		HX_STACK_LINE(597)
		this->set___dirty(true);
		HX_STACK_LINE(598)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,drawTiles,(void))

Void Graphics_obj::drawTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::display::TriangleCulling culling,Array< int > colors,hx::Null< int >  __o_blendMode){
int blendMode = __o_blendMode.Default(0);
	HX_STACK_FRAME("openfl.display.Graphics","drawTriangles",0xae0bf90e,"openfl.display.Graphics.drawTriangles","openfl/display/Graphics.hx",621,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(uvtData,"uvtData")
	HX_STACK_ARG(culling,"culling")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(blendMode,"blendMode")
{
		HX_STACK_LINE(623)
		int vlen = ::Std_obj::_int((Float(vertices->length) / Float((int)2)));		HX_STACK_VAR(vlen,"vlen");
		HX_STACK_LINE(625)
		if (((culling == null()))){
			HX_STACK_LINE(626)
			culling = ::openfl::display::TriangleCulling_obj::NONE;
		}
		HX_STACK_LINE(629)
		if (((indices == null()))){
			HX_STACK_LINE(630)
			if (((hx::Mod(vlen,(int)3) != (int)0))){
				HX_STACK_LINE(631)
				HX_STACK_DO_THROW(::openfl::errors::ArgumentError_obj::__new(HX_CSTRING("Not enough vertices to close a triangle.")));
			}
			HX_STACK_LINE(633)
			Array< int > _g1;		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Array< int > Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/Graphics.hx",633,0x8d299ce7)
					{
						HX_STACK_LINE(633)
						Array< int > this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(633)
						Array< int > _g = Array_obj< int >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(633)
						this1 = _g;
						HX_STACK_LINE(633)
						return this1;
					}
					return null();
				}
			};
			HX_STACK_LINE(633)
			_g1 = _Function_2_1::Block();
			HX_STACK_LINE(633)
			indices = _g1;
			HX_STACK_LINE(635)
			{
				HX_STACK_LINE(635)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(635)
				while((true)){
					HX_STACK_LINE(635)
					if ((!(((_g < vlen))))){
						HX_STACK_LINE(635)
						break;
					}
					HX_STACK_LINE(635)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(636)
					indices->push(i);
				}
			}
		}
		HX_STACK_LINE(640)
		this->__inflateBounds((int)0,(int)0);
		HX_STACK_LINE(642)
		Float tmpx = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmpx,"tmpx");
		HX_STACK_LINE(643)
		Float tmpy = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmpy,"tmpy");
		HX_STACK_LINE(644)
		Float maxX = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(645)
		Float maxY = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(647)
		{
			HX_STACK_LINE(647)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(647)
			while((true)){
				HX_STACK_LINE(647)
				if ((!(((_g < vlen))))){
					HX_STACK_LINE(647)
					break;
				}
				HX_STACK_LINE(647)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(648)
				tmpx = vertices->__get((i * (int)2));
				HX_STACK_LINE(649)
				tmpy = vertices->__get(((i * (int)2) + (int)1));
				HX_STACK_LINE(650)
				if (((maxX < tmpx))){
					HX_STACK_LINE(650)
					maxX = tmpx;
				}
				HX_STACK_LINE(651)
				if (((maxY < tmpy))){
					HX_STACK_LINE(651)
					maxY = tmpy;
				}
			}
		}
		HX_STACK_LINE(654)
		this->__inflateBounds(maxX,maxY);
		HX_STACK_LINE(655)
		::openfl::display::DrawCommand _g2 = ::openfl::display::DrawCommand_obj::DrawTriangles(vertices,indices,uvtData,culling,colors,blendMode);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(655)
		this->__commands->push(_g2);
		HX_STACK_LINE(656)
		this->set___dirty(true);
		HX_STACK_LINE(657)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawTriangles,(void))

Void Graphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl.display.Graphics","endFill",0xe14b2dc5,"openfl.display.Graphics.endFill","openfl/display/Graphics.hx",675,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(675)
		this->__commands->push(::openfl::display::DrawCommand_obj::EndFill);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

Void Graphics_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl.display.Graphics","lineBitmapStyle",0x0ce183f5,"openfl.display.Graphics.lineBitmapStyle","openfl/display/Graphics.hx",711,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(711)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("Graphics.lineBitmapStyle"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

Void Graphics_obj::lineGradientStyle( ::openfl::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
{
		HX_STACK_FRAME("openfl.display.Graphics","lineGradientStyle",0x2de26914,"openfl.display.Graphics.lineGradientStyle","openfl/display/Graphics.hx",770,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
		HX_STACK_LINE(770)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("Graphics.lineGradientStyle"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

Void Graphics_obj::lineStyle( Dynamic thickness,Dynamic color,Dynamic alpha,Dynamic pixelHinting,::openfl::display::LineScaleMode scaleMode,::openfl::display::CapsStyle caps,::openfl::display::JointStyle joints,Dynamic miterLimit){
{
		HX_STACK_FRAME("openfl.display.Graphics","lineStyle",0x32cd8e24,"openfl.display.Graphics.lineStyle","openfl/display/Graphics.hx",914,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(thickness,"thickness")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_ARG(pixelHinting,"pixelHinting")
		HX_STACK_ARG(scaleMode,"scaleMode")
		HX_STACK_ARG(caps,"caps")
		HX_STACK_ARG(joints,"joints")
		HX_STACK_ARG(miterLimit,"miterLimit")
		HX_STACK_LINE(916)
		if (((thickness > this->__halfStrokeWidth))){
			HX_STACK_LINE(916)
			this->__halfStrokeWidth = thickness;
		}
		else{
			HX_STACK_LINE(916)
			this->__halfStrokeWidth = this->__halfStrokeWidth;
		}
		HX_STACK_LINE(917)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::LineStyle(thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(917)
		this->__commands->push(_g);
		HX_STACK_LINE(919)
		if (((thickness != null()))){
			HX_STACK_LINE(919)
			this->__visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

Void Graphics_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","lineTo",0x25b7b6a8,"openfl.display.Graphics.lineTo","openfl/display/Graphics.hx",940,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(944)
		this->__inflateBounds((this->__positionX - this->__halfStrokeWidth),(this->__positionY - this->__halfStrokeWidth));
		HX_STACK_LINE(945)
		this->__inflateBounds((this->__positionX + this->__halfStrokeWidth),(this->__positionY + this->__halfStrokeWidth));
		HX_STACK_LINE(947)
		this->__positionX = x;
		HX_STACK_LINE(948)
		this->__positionY = y;
		HX_STACK_LINE(950)
		this->__inflateBounds((this->__positionX - this->__halfStrokeWidth),(this->__positionY - this->__halfStrokeWidth));
		HX_STACK_LINE(951)
		this->__inflateBounds((this->__positionX + this->__halfStrokeWidth),(this->__positionY + this->__halfStrokeWidth));
		HX_STACK_LINE(953)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::LineTo(x,y);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(953)
		this->__commands->push(_g);
		HX_STACK_LINE(955)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

Void Graphics_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","moveTo",0x05c44305,"openfl.display.Graphics.moveTo","openfl/display/Graphics.hx",970,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(972)
		this->__positionX = x;
		HX_STACK_LINE(973)
		this->__positionY = y;
		HX_STACK_LINE(975)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::MoveTo(x,y);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(975)
		this->__commands->push(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

Void Graphics_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.Graphics","__getBounds",0x7b7eedd2,"openfl.display.Graphics.__getBounds","openfl/display/Graphics.hx",980,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(982)
		if (((this->__bounds == null()))){
			HX_STACK_LINE(982)
			return null();
		}
		HX_STACK_LINE(984)
		::openfl::geom::Rectangle bounds = this->__bounds->transform(matrix);		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(985)
		rect->__expand(bounds->x,bounds->y,bounds->width,bounds->height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,__getBounds,(void))

bool Graphics_obj::__hitTest( Float x,Float y,bool shapeFlag,::openfl::geom::Matrix matrix){
	HX_STACK_FRAME("openfl.display.Graphics","__hitTest",0xcb8296ac,"openfl.display.Graphics.__hitTest","openfl/display/Graphics.hx",990,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(994)
	if (((this->__bounds == null()))){
		HX_STACK_LINE(994)
		return false;
	}
	HX_STACK_LINE(996)
	::openfl::geom::Rectangle bounds = this->__bounds->transform(matrix);		HX_STACK_VAR(bounds,"bounds");
	struct _Function_1_1{
		inline static bool Block( Float &x,::openfl::geom::Rectangle &bounds){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/Graphics.hx",997,0x8d299ce7)
			{
				HX_STACK_LINE(997)
				Float _g = bounds->get_right();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(997)
				return (x <= _g);
			}
			return null();
		}
	};
	HX_STACK_LINE(997)
	if (((  (((bool((x > bounds->x)) && bool((y > bounds->y))))) ? bool(_Function_1_1::Block(x,bounds)) : bool(false) ))){
		HX_STACK_LINE(997)
		Float _g1 = bounds->get_bottom();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(997)
		return (y <= _g1);
	}
	else{
		HX_STACK_LINE(997)
		return false;
	}
	HX_STACK_LINE(997)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,__hitTest,return )

Void Graphics_obj::__inflateBounds( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","__inflateBounds",0x7eaeb403,"openfl.display.Graphics.__inflateBounds","openfl/display/Graphics.hx",1002,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1004)
		if (((this->__bounds == null()))){
			HX_STACK_LINE(1006)
			::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new(x,y,(int)0,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1006)
			this->__bounds = _g;
			HX_STACK_LINE(1007)
			this->__transformDirty = true;
			HX_STACK_LINE(1008)
			return null();
		}
		HX_STACK_LINE(1012)
		if (((x < this->__bounds->x))){
			HX_STACK_LINE(1014)
			hx::AddEq(this->__bounds->width,(this->__bounds->x - x));
			HX_STACK_LINE(1015)
			this->__bounds->x = x;
			HX_STACK_LINE(1016)
			this->__transformDirty = true;
		}
		HX_STACK_LINE(1020)
		if (((y < this->__bounds->y))){
			HX_STACK_LINE(1022)
			hx::AddEq(this->__bounds->height,(this->__bounds->y - y));
			HX_STACK_LINE(1023)
			this->__bounds->y = y;
			HX_STACK_LINE(1024)
			this->__transformDirty = true;
		}
		HX_STACK_LINE(1028)
		if (((x > (this->__bounds->x + this->__bounds->width)))){
			HX_STACK_LINE(1030)
			this->__bounds->width = (x - this->__bounds->x);
		}
		HX_STACK_LINE(1034)
		if (((y > (this->__bounds->y + this->__bounds->height)))){
			HX_STACK_LINE(1036)
			this->__bounds->height = (y - this->__bounds->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,__inflateBounds,(void))

bool Graphics_obj::set___dirty( bool value){
	HX_STACK_FRAME("openfl.display.Graphics","set___dirty",0x3f74a55c,"openfl.display.Graphics.set___dirty","openfl/display/Graphics.hx",1043,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1044)
	if (((bool(value) && bool((this->__owner != null()))))){
		HX_STACK_LINE(1045)
		::openfl::display::DisplayObject _this = this->__owner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1045)
		if ((!(_this->__renderDirty))){
			HX_STACK_LINE(1045)
			_this->__renderDirty = true;
			HX_STACK_LINE(1045)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1047)
	return this->__dirty = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set___dirty,return )

int Graphics_obj::TILE_SCALE;

int Graphics_obj::TILE_ROTATION;

int Graphics_obj::TILE_RGB;

int Graphics_obj::TILE_ALPHA;

int Graphics_obj::TILE_TRANS_2x2;

int Graphics_obj::TILE_RECT;

int Graphics_obj::TILE_ORIGIN;

int Graphics_obj::TILE_BLEND_NORMAL;

int Graphics_obj::TILE_BLEND_ADD;


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(__bounds,"__bounds");
	HX_MARK_MEMBER_NAME(__cairo,"__cairo");
	HX_MARK_MEMBER_NAME(__commands,"__commands");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__glStack,"__glStack");
	HX_MARK_MEMBER_NAME(__drawPaths,"__drawPaths");
	HX_MARK_MEMBER_NAME(__halfStrokeWidth,"__halfStrokeWidth");
	HX_MARK_MEMBER_NAME(__positionX,"__positionX");
	HX_MARK_MEMBER_NAME(__positionY,"__positionY");
	HX_MARK_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(__visible,"__visible");
	HX_MARK_MEMBER_NAME(__cachedTexture,"__cachedTexture");
	HX_MARK_MEMBER_NAME(__owner,"__owner");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(__cairo,"__cairo");
	HX_VISIT_MEMBER_NAME(__commands,"__commands");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__glStack,"__glStack");
	HX_VISIT_MEMBER_NAME(__drawPaths,"__drawPaths");
	HX_VISIT_MEMBER_NAME(__halfStrokeWidth,"__halfStrokeWidth");
	HX_VISIT_MEMBER_NAME(__positionX,"__positionX");
	HX_VISIT_MEMBER_NAME(__positionY,"__positionY");
	HX_VISIT_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(__visible,"__visible");
	HX_VISIT_MEMBER_NAME(__cachedTexture,"__cachedTexture");
	HX_VISIT_MEMBER_NAME(__owner,"__owner");
}

Dynamic Graphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__cairo") ) { return __cairo; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__owner") ) { return __owner; }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { return __bounds; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPath") ) { return drawPath_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__glStack") ) { return __glStack; }
		if (HX_FIELD_EQ(inName,"__visible") ) { return __visible; }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__commands") ) { return __commands; }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { return __drawPaths; }
		if (HX_FIELD_EQ(inName,"__positionX") ) { return __positionX; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { return __positionY; }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set___dirty") ) { return set___dirty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cachedTexture") ) { return __cachedTexture; }
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"__inflateBounds") ) { return __inflateBounds_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return __transformDirty; }
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return drawGraphicsData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__halfStrokeWidth") ) { return __halfStrokeWidth; }
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundRectComplex") ) { return drawRoundRectComplex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__cairo") ) { __cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { if (inCallProp) return set___dirty(inValue);__dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__owner") ) { __owner=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { __bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__glStack") ) { __glStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { __visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__commands") ) { __commands=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { __drawPaths=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionX") ) { __positionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { __positionY=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cachedTexture") ) { __cachedTexture=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterTexture >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { __transformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__halfStrokeWidth") ) { __halfStrokeWidth=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__bounds"));
	outFields->push(HX_CSTRING("__cairo"));
	outFields->push(HX_CSTRING("__commands"));
	outFields->push(HX_CSTRING("__dirty"));
	outFields->push(HX_CSTRING("__glStack"));
	outFields->push(HX_CSTRING("__drawPaths"));
	outFields->push(HX_CSTRING("__halfStrokeWidth"));
	outFields->push(HX_CSTRING("__positionX"));
	outFields->push(HX_CSTRING("__positionY"));
	outFields->push(HX_CSTRING("__transformDirty"));
	outFields->push(HX_CSTRING("__visible"));
	outFields->push(HX_CSTRING("__cachedTexture"));
	outFields->push(HX_CSTRING("__owner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TILE_SCALE"),
	HX_CSTRING("TILE_ROTATION"),
	HX_CSTRING("TILE_RGB"),
	HX_CSTRING("TILE_ALPHA"),
	HX_CSTRING("TILE_TRANS_2x2"),
	HX_CSTRING("TILE_RECT"),
	HX_CSTRING("TILE_ORIGIN"),
	HX_CSTRING("TILE_BLEND_NORMAL"),
	HX_CSTRING("TILE_BLEND_ADD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Graphics_obj,__bounds),HX_CSTRING("__bounds")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(Graphics_obj,__cairo),HX_CSTRING("__cairo")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphics_obj,__commands),HX_CSTRING("__commands")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__dirty),HX_CSTRING("__dirty")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphics_obj,__glStack),HX_CSTRING("__glStack")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphics_obj,__drawPaths),HX_CSTRING("__drawPaths")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__halfStrokeWidth),HX_CSTRING("__halfStrokeWidth")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__positionX),HX_CSTRING("__positionX")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__positionY),HX_CSTRING("__positionY")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__transformDirty),HX_CSTRING("__transformDirty")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__visible),HX_CSTRING("__visible")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterTexture*/ ,(int)offsetof(Graphics_obj,__cachedTexture),HX_CSTRING("__cachedTexture")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Graphics_obj,__owner),HX_CSTRING("__owner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__bounds"),
	HX_CSTRING("__cairo"),
	HX_CSTRING("__commands"),
	HX_CSTRING("__dirty"),
	HX_CSTRING("__glStack"),
	HX_CSTRING("__drawPaths"),
	HX_CSTRING("__halfStrokeWidth"),
	HX_CSTRING("__positionX"),
	HX_CSTRING("__positionY"),
	HX_CSTRING("__transformDirty"),
	HX_CSTRING("__visible"),
	HX_CSTRING("__cachedTexture"),
	HX_CSTRING("__owner"),
	HX_CSTRING("beginBitmapFill"),
	HX_CSTRING("beginFill"),
	HX_CSTRING("beginGradientFill"),
	HX_CSTRING("clear"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("cubicCurveTo"),
	HX_CSTRING("curveTo"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawEllipse"),
	HX_CSTRING("drawGraphicsData"),
	HX_CSTRING("drawPath"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("drawRoundRectComplex"),
	HX_CSTRING("drawTiles"),
	HX_CSTRING("drawTriangles"),
	HX_CSTRING("endFill"),
	HX_CSTRING("lineBitmapStyle"),
	HX_CSTRING("lineGradientStyle"),
	HX_CSTRING("lineStyle"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("__getBounds"),
	HX_CSTRING("__hitTest"),
	HX_CSTRING("__inflateBounds"),
	HX_CSTRING("set___dirty"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
};

#endif

Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.Graphics"), hx::TCanCast< Graphics_obj> ,sStaticFields,sMemberFields,
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

void Graphics_obj::__boot()
{
	TILE_SCALE= (int)1;
	TILE_ROTATION= (int)2;
	TILE_RGB= (int)4;
	TILE_ALPHA= (int)8;
	TILE_TRANS_2x2= (int)16;
	TILE_RECT= (int)32;
	TILE_ORIGIN= (int)64;
	TILE_BLEND_NORMAL= (int)0;
	TILE_BLEND_ADD= (int)65536;
}

} // end namespace openfl
} // end namespace display
