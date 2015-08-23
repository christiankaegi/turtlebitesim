#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{

Void Cairo_obj::__construct(Dynamic surface)
{
HX_STACK_FRAME("lime.graphics.cairo.Cairo","new",0x5bfa2aca,"lime.graphics.cairo.Cairo.new","lime/graphics/cairo/Cairo.hx",39,0x0918a4c7)
HX_STACK_THIS(this)
HX_STACK_ARG(surface,"surface")
{
	HX_STACK_LINE(39)
	if (((surface != null()))){
		HX_STACK_LINE(42)
		Dynamic _g = ::lime::graphics::cairo::Cairo_obj::lime_cairo_create(surface);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		this->handle = _g;
	}
}
;
	return null();
}

//Cairo_obj::~Cairo_obj() { }

Dynamic Cairo_obj::__CreateEmpty() { return  new Cairo_obj; }
hx::ObjectPtr< Cairo_obj > Cairo_obj::__new(Dynamic surface)
{  hx::ObjectPtr< Cairo_obj > result = new Cairo_obj();
	result->__construct(surface);
	return result;}

Dynamic Cairo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cairo_obj > result = new Cairo_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Cairo_obj::arc( Float xc,Float yc,Float radius,Float angle1,Float angle2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","arc",0x5bf058bc,"lime.graphics.cairo.Cairo.arc","lime/graphics/cairo/Cairo.hx",53,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xc,"xc")
		HX_STACK_ARG(yc,"yc")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(angle1,"angle1")
		HX_STACK_ARG(angle2,"angle2")
		HX_STACK_LINE(53)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_arc(this->handle,xc,yc,radius,angle1,angle2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Cairo_obj,arc,(void))

Void Cairo_obj::arcNegative( Float xc,Float yc,Float radius,Float angle1,Float angle2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","arcNegative",0xdc455751,"lime.graphics.cairo.Cairo.arcNegative","lime/graphics/cairo/Cairo.hx",62,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xc,"xc")
		HX_STACK_ARG(yc,"yc")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(angle1,"angle1")
		HX_STACK_ARG(angle2,"angle2")
		HX_STACK_LINE(62)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_arc_negative(this->handle,xc,yc,radius,angle1,angle2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Cairo_obj,arcNegative,(void))

Void Cairo_obj::clip( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","clip",0x17ab3126,"lime.graphics.cairo.Cairo.clip","lime/graphics/cairo/Cairo.hx",71,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_clip(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,clip,(void))

Void Cairo_obj::clipExtents( Float x1,Float y1,Float x2,Float y2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","clipExtents",0x66b7e2c3,"lime.graphics.cairo.Cairo.clipExtents","lime/graphics/cairo/Cairo.hx",80,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_LINE(80)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_clip_extents(this->handle,x1,y1,x2,y2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,clipExtents,(void))

Void Cairo_obj::clipPreserve( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","clipPreserve",0x0025ef12,"lime.graphics.cairo.Cairo.clipPreserve","lime/graphics/cairo/Cairo.hx",89,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_clip_preserve(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,clipPreserve,(void))

Void Cairo_obj::closePath( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","closePath",0x73e96b67,"lime.graphics.cairo.Cairo.closePath","lime/graphics/cairo/Cairo.hx",98,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_close_path(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,closePath,(void))

Void Cairo_obj::copyPage( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","copyPage",0xf9d7e5fa,"lime.graphics.cairo.Cairo.copyPage","lime/graphics/cairo/Cairo.hx",107,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_copy_page(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,copyPage,(void))

Void Cairo_obj::curveTo( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","curveTo",0x0ddd3774,"lime.graphics.cairo.Cairo.curveTo","lime/graphics/cairo/Cairo.hx",116,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_ARG(x3,"x3")
		HX_STACK_ARG(y3,"y3")
		HX_STACK_LINE(116)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_curve_to(this->handle,x1,y1,x2,y2,x3,y3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Cairo_obj,curveTo,(void))

Void Cairo_obj::destroy( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","destroy",0x63db0464,"lime.graphics.cairo.Cairo.destroy","lime/graphics/cairo/Cairo.hx",125,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_destroy(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,destroy,(void))

Void Cairo_obj::fill( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","fill",0x19a490d9,"lime.graphics.cairo.Cairo.fill","lime/graphics/cairo/Cairo.hx",134,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_fill(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,fill,(void))

Void Cairo_obj::fillExtents( Float x1,Float y1,Float x2,Float y2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","fillExtents",0x3c7e2f70,"lime.graphics.cairo.Cairo.fillExtents","lime/graphics/cairo/Cairo.hx",143,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_LINE(143)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_fill_extents(x1,y1,x2,y2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,fillExtents,(void))

Void Cairo_obj::fillPreserve( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","fillPreserve",0x37e2b9c5,"lime.graphics.cairo.Cairo.fillPreserve","lime/graphics/cairo/Cairo.hx",152,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_fill_preserve(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,fillPreserve,(void))

Void Cairo_obj::identityMatrix( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","identityMatrix",0xb1e7bbf5,"lime.graphics.cairo.Cairo.identityMatrix","lime/graphics/cairo/Cairo.hx",161,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(161)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_identity_matrix(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,identityMatrix,(void))

bool Cairo_obj::inClip( Float x,Float y){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","inClip",0x3186d12b,"lime.graphics.cairo.Cairo.inClip","lime/graphics/cairo/Cairo.hx",170,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(170)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_in_clip(x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,inClip,return )

bool Cairo_obj::inFill( Float x,Float y){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","inFill",0x338030de,"lime.graphics.cairo.Cairo.inFill","lime/graphics/cairo/Cairo.hx",181,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(181)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_in_fill(x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,inFill,return )

bool Cairo_obj::inStroke( Float x,Float y){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","inStroke",0xc49aa2d3,"lime.graphics.cairo.Cairo.inStroke","lime/graphics/cairo/Cairo.hx",192,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(192)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_in_stroke(x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,inStroke,return )

Void Cairo_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lineTo",0x9ffeca65,"lime.graphics.cairo.Cairo.lineTo","lime/graphics/cairo/Cairo.hx",203,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(203)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_line_to(this->handle,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lineTo,(void))

Void Cairo_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","moveTo",0x800b56c2,"lime.graphics.cairo.Cairo.moveTo","lime/graphics/cairo/Cairo.hx",212,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(212)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_move_to(this->handle,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,moveTo,(void))

Void Cairo_obj::mask( Dynamic pattern){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","mask",0x1e3f0342,"lime.graphics.cairo.Cairo.mask","lime/graphics/cairo/Cairo.hx",221,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pattern,"pattern")
		HX_STACK_LINE(221)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_mask(this->handle,pattern);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,mask,(void))

Void Cairo_obj::maskSurface( Dynamic surface,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","maskSurface",0x3893570b,"lime.graphics.cairo.Cairo.maskSurface","lime/graphics/cairo/Cairo.hx",230,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(surface,"surface")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(230)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_mask_surface(surface,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,maskSurface,(void))

Void Cairo_obj::newPath( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","newPath",0x3973698f,"lime.graphics.cairo.Cairo.newPath","lime/graphics/cairo/Cairo.hx",239,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_new_path(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,newPath,(void))

Void Cairo_obj::paint( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","paint",0x13100088,"lime.graphics.cairo.Cairo.paint","lime/graphics/cairo/Cairo.hx",248,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(248)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_paint(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,paint,(void))

Void Cairo_obj::paintWithAlpha( Float alpha){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","paintWithAlpha",0x79d699d0,"lime.graphics.cairo.Cairo.paintWithAlpha","lime/graphics/cairo/Cairo.hx",257,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(257)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_paint_with_alpha(this->handle,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,paintWithAlpha,(void))

Dynamic Cairo_obj::popGroup( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","popGroup",0x2de29d44,"lime.graphics.cairo.Cairo.popGroup","lime/graphics/cairo/Cairo.hx",266,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(266)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_pop_group(this->handle);
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,popGroup,return )

Void Cairo_obj::popGroupToSource( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","popGroupToSource",0x2889961a,"lime.graphics.cairo.Cairo.popGroupToSource","lime/graphics/cairo/Cairo.hx",277,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(277)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_pop_group_to_source(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,popGroupToSource,(void))

Void Cairo_obj::pushGroup( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","pushGroup",0x3dd920ef,"lime.graphics.cairo.Cairo.pushGroup","lime/graphics/cairo/Cairo.hx",286,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(286)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_push_group(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,pushGroup,(void))

Void Cairo_obj::pushGroupWithContent( int content){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","pushGroupWithContent",0x80fe7b24,"lime.graphics.cairo.Cairo.pushGroupWithContent","lime/graphics/cairo/Cairo.hx",295,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(content,"content")
		HX_STACK_LINE(295)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_push_group_with_content(this->handle,content);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,pushGroupWithContent,(void))

Void Cairo_obj::rectangle( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","rectangle",0x7945da19,"lime.graphics.cairo.Cairo.rectangle","lime/graphics/cairo/Cairo.hx",304,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(304)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_rectangle(this->handle,x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,rectangle,(void))

Void Cairo_obj::reference( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","reference",0xba8e0db5,"lime.graphics.cairo.Cairo.reference","lime/graphics/cairo/Cairo.hx",313,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(313)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_reference(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,reference,(void))

Void Cairo_obj::relCurveTo( Float dx1,Float dy1,Float dx2,Float dy2,Float dx3,Float dy3){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","relCurveTo",0x07a5a287,"lime.graphics.cairo.Cairo.relCurveTo","lime/graphics/cairo/Cairo.hx",322,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx1,"dx1")
		HX_STACK_ARG(dy1,"dy1")
		HX_STACK_ARG(dx2,"dx2")
		HX_STACK_ARG(dy2,"dy2")
		HX_STACK_ARG(dx3,"dx3")
		HX_STACK_ARG(dy3,"dy3")
		HX_STACK_LINE(322)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_rel_curve_to(this->handle,dx1,dy1,dx2,dy2,dx3,dy3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Cairo_obj,relCurveTo,(void))

Void Cairo_obj::relLineTo( Float dx,Float dy){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","relLineTo",0x8c73a2b2,"lime.graphics.cairo.Cairo.relLineTo","lime/graphics/cairo/Cairo.hx",331,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(331)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_rel_line_to(this->handle,dx,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,relLineTo,(void))

Void Cairo_obj::relMoveTo( Float dx,Float dy){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","relMoveTo",0x6c802f0f,"lime.graphics.cairo.Cairo.relMoveTo","lime/graphics/cairo/Cairo.hx",340,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(340)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_rel_move_to(this->handle,dx,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,relMoveTo,(void))

Void Cairo_obj::resetClip( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","resetClip",0xe7777e29,"lime.graphics.cairo.Cairo.resetClip","lime/graphics/cairo/Cairo.hx",349,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(349)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_reset_clip(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,resetClip,(void))

Void Cairo_obj::restore( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","restore",0xaa053eb8,"lime.graphics.cairo.Cairo.restore","lime/graphics/cairo/Cairo.hx",358,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(358)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_restore(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,restore,(void))

Void Cairo_obj::save( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","save",0x22364d93,"lime.graphics.cairo.Cairo.save","lime/graphics/cairo/Cairo.hx",367,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(367)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_save(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,save,(void))

Void Cairo_obj::setSourceRGB( Float r,Float g,Float b){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","setSourceRGB",0x59e04946,"lime.graphics.cairo.Cairo.setSourceRGB","lime/graphics/cairo/Cairo.hx",376,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(376)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_set_source_rgb(this->handle,r,g,b);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,setSourceRGB,(void))

Void Cairo_obj::setSourceRGBA( Float r,Float g,Float b,Float a){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","setSourceRGBA",0x4a5fd43b,"lime.graphics.cairo.Cairo.setSourceRGBA","lime/graphics/cairo/Cairo.hx",385,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(385)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_set_source_rgba(this->handle,r,g,b,a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,setSourceRGBA,(void))

Void Cairo_obj::setSourceSurface( Dynamic surface,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","setSourceSurface",0xcd3700e6,"lime.graphics.cairo.Cairo.setSourceSurface","lime/graphics/cairo/Cairo.hx",394,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(surface,"surface")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(394)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_set_source_surface(this->handle,surface,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,setSourceSurface,(void))

Void Cairo_obj::showPage( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","showPage",0xdcc04342,"lime.graphics.cairo.Cairo.showPage","lime/graphics/cairo/Cairo.hx",403,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(403)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_show_page(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,showPage,(void))

int Cairo_obj::status( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","status",0xb95a6b08,"lime.graphics.cairo.Cairo.status","lime/graphics/cairo/Cairo.hx",412,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(412)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_status(this->handle);
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,status,return )

Void Cairo_obj::stroke( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","stroke",0xc493378e,"lime.graphics.cairo.Cairo.stroke","lime/graphics/cairo/Cairo.hx",423,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(423)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_stroke(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,stroke,(void))

Void Cairo_obj::strokeExtents( Float x1,Float y1,Float x2,Float y2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","strokeExtents",0x11faf95b,"lime.graphics.cairo.Cairo.strokeExtents","lime/graphics/cairo/Cairo.hx",432,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_LINE(432)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_stroke_extents(this->handle,x1,y1,x2,y2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,strokeExtents,(void))

Void Cairo_obj::strokePreserve( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","strokePreserve",0x2f969d7a,"lime.graphics.cairo.Cairo.strokePreserve","lime/graphics/cairo/Cairo.hx",441,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(441)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_stroke_preserve(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,strokePreserve,(void))

Void Cairo_obj::transform( ::lime::math::Matrix3 matrix){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","transform",0xa55c3356,"lime.graphics.cairo.Cairo.transform","lime/graphics/cairo/Cairo.hx",450,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(450)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_transform(this->handle,matrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,transform,(void))

Void Cairo_obj::translate( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","translate",0xa948dd38,"lime.graphics.cairo.Cairo.translate","lime/graphics/cairo/Cairo.hx",459,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(459)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_translate(this->handle,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,translate,(void))

int Cairo_obj::get_antialias( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_antialias",0x6c40ed6f,"lime.graphics.cairo.Cairo.get_antialias","lime/graphics/cairo/Cairo.hx",472,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(475)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_antialias(this->handle);
	HX_STACK_LINE(478)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_antialias,return )

int Cairo_obj::set_antialias( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_antialias",0xb146cf7b,"lime.graphics.cairo.Cairo.set_antialias","lime/graphics/cairo/Cairo.hx",483,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(486)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_antialias(this->handle,value);
	HX_STACK_LINE(489)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_antialias,return )

::lime::math::Vector2 Cairo_obj::get_currentPoint( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_currentPoint",0x71e87136,"lime.graphics.cairo.Cairo.get_currentPoint","lime/graphics/cairo/Cairo.hx",494,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(497)
	Dynamic vec = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_current_point(this->handle);		HX_STACK_VAR(vec,"vec");
	HX_STACK_LINE(498)
	return ::lime::math::Vector2_obj::__new(vec->__Field(HX_CSTRING("x"),true),vec->__Field(HX_CSTRING("y"),true));
	HX_STACK_LINE(501)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_currentPoint,return )

Array< Float > Cairo_obj::get_dash( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_dash",0xed05b631,"lime.graphics.cairo.Cairo.get_dash","lime/graphics/cairo/Cairo.hx",506,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(509)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_dash(this->handle);
	HX_STACK_LINE(512)
	return Array_obj< Float >::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_dash,return )

Array< Float > Cairo_obj::set_dash( Array< Float > value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_dash",0x9b630fa5,"lime.graphics.cairo.Cairo.set_dash","lime/graphics/cairo/Cairo.hx",517,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(520)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_dash(this->handle,value);
	HX_STACK_LINE(523)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_dash,return )

int Cairo_obj::get_dashCount( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_dashCount",0x2993ecde,"lime.graphics.cairo.Cairo.get_dashCount","lime/graphics/cairo/Cairo.hx",528,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(531)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_dash_count(this->handle);
	HX_STACK_LINE(534)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_dashCount,return )

int Cairo_obj::get_fillRule( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_fillRule",0xee732d7e,"lime.graphics.cairo.Cairo.get_fillRule","lime/graphics/cairo/Cairo.hx",539,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(542)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_fill_rule(this->handle);
	HX_STACK_LINE(545)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_fillRule,return )

int Cairo_obj::set_fillRule( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_fillRule",0x036c50f2,"lime.graphics.cairo.Cairo.set_fillRule","lime/graphics/cairo/Cairo.hx",550,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(553)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_fill_rule(this->handle,value);
	HX_STACK_LINE(556)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_fillRule,return )

Dynamic Cairo_obj::get_groupTarget( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_groupTarget",0x8da19cf1,"lime.graphics.cairo.Cairo.get_groupTarget","lime/graphics/cairo/Cairo.hx",564,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(564)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_group_target(this->handle);
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_groupTarget,return )

bool Cairo_obj::get_hasCurrentPoint( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_hasCurrentPoint",0x7885e152,"lime.graphics.cairo.Cairo.get_hasCurrentPoint","lime/graphics/cairo/Cairo.hx",572,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(575)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_has_current_point(this->handle);
	HX_STACK_LINE(578)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_hasCurrentPoint,return )

int Cairo_obj::get_lineCap( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_lineCap",0x4e10b8ff,"lime.graphics.cairo.Cairo.get_lineCap","lime/graphics/cairo/Cairo.hx",583,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(586)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_line_cap(this->handle);
	HX_STACK_LINE(589)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_lineCap,return )

int Cairo_obj::set_lineCap( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_lineCap",0x587dc00b,"lime.graphics.cairo.Cairo.set_lineCap","lime/graphics/cairo/Cairo.hx",594,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(597)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_line_cap(this->handle,value);
	HX_STACK_LINE(600)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_lineCap,return )

int Cairo_obj::get_lineJoin( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_lineJoin",0x053c3e5d,"lime.graphics.cairo.Cairo.get_lineJoin","lime/graphics/cairo/Cairo.hx",605,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(608)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_line_join(this->handle);
	HX_STACK_LINE(611)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_lineJoin,return )

int Cairo_obj::set_lineJoin( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_lineJoin",0x1a3561d1,"lime.graphics.cairo.Cairo.set_lineJoin","lime/graphics/cairo/Cairo.hx",616,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(619)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_line_join(this->handle,value);
	HX_STACK_LINE(622)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_lineJoin,return )

Float Cairo_obj::get_lineWidth( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_lineWidth",0x07b4d033,"lime.graphics.cairo.Cairo.get_lineWidth","lime/graphics/cairo/Cairo.hx",627,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(630)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_line_width(this->handle);
	HX_STACK_LINE(633)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_lineWidth,return )

Float Cairo_obj::set_lineWidth( Float value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_lineWidth",0x4cbab23f,"lime.graphics.cairo.Cairo.set_lineWidth","lime/graphics/cairo/Cairo.hx",638,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(641)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_line_width(this->handle,value);
	HX_STACK_LINE(644)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_lineWidth,return )

::lime::math::Matrix3 Cairo_obj::get_matrix( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_matrix",0x1c6bcce0,"lime.graphics.cairo.Cairo.get_matrix","lime/graphics/cairo/Cairo.hx",649,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(652)
	Dynamic m = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_matrix(this->handle);		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(653)
	return ::lime::math::Matrix3_obj::__new(m->__Field(HX_CSTRING("a"),true),m->__Field(HX_CSTRING("b"),true),m->__Field(HX_CSTRING("c"),true),m->__Field(HX_CSTRING("d"),true),m->__Field(HX_CSTRING("tx"),true),m->__Field(HX_CSTRING("ty"),true));
	HX_STACK_LINE(656)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_matrix,return )

::lime::math::Matrix3 Cairo_obj::set_matrix( ::lime::math::Matrix3 value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_matrix",0x1fe96b54,"lime.graphics.cairo.Cairo.set_matrix","lime/graphics/cairo/Cairo.hx",661,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(664)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_matrix(this->handle,value);
	HX_STACK_LINE(667)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_matrix,return )

Float Cairo_obj::get_miterLimit( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_miterLimit",0xea472f15,"lime.graphics.cairo.Cairo.get_miterLimit","lime/graphics/cairo/Cairo.hx",672,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(675)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_miter_limit(this->handle);
	HX_STACK_LINE(678)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_miterLimit,return )

Float Cairo_obj::set_miterLimit( Float value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_miterLimit",0x0a671789,"lime.graphics.cairo.Cairo.set_miterLimit","lime/graphics/cairo/Cairo.hx",683,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(686)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_miter_limit(this->handle,value);
	HX_STACK_LINE(689)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_miterLimit,return )

int Cairo_obj::get_operator( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_operator",0xc620d803,"lime.graphics.cairo.Cairo.get_operator","lime/graphics/cairo/Cairo.hx",694,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(697)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_operator(this->handle);
	HX_STACK_LINE(700)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_operator,return )

int Cairo_obj::set_operator( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_operator",0xdb19fb77,"lime.graphics.cairo.Cairo.set_operator","lime/graphics/cairo/Cairo.hx",705,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(708)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_operator(this->handle,value);
	HX_STACK_LINE(711)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_operator,return )

int Cairo_obj::get_referenceCount( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_referenceCount",0xb5be5aa3,"lime.graphics.cairo.Cairo.get_referenceCount","lime/graphics/cairo/Cairo.hx",719,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(719)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_reference_count();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_referenceCount,return )

Dynamic Cairo_obj::get_source( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_source",0x92d5477a,"lime.graphics.cairo.Cairo.get_source","lime/graphics/cairo/Cairo.hx",727,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(730)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_source(this->handle);
	HX_STACK_LINE(733)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_source,return )

Dynamic Cairo_obj::set_source( Dynamic value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_source",0x9652e5ee,"lime.graphics.cairo.Cairo.set_source","lime/graphics/cairo/Cairo.hx",738,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(741)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_source(this->handle,value);
	HX_STACK_LINE(744)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_source,return )

Dynamic Cairo_obj::get_target( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_target",0xe79089f0,"lime.graphics.cairo.Cairo.get_target","lime/graphics/cairo/Cairo.hx",752,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(752)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_target(this->handle);
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_target,return )

Float Cairo_obj::get_tolerance( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_tolerance",0x29d353ce,"lime.graphics.cairo.Cairo.get_tolerance","lime/graphics/cairo/Cairo.hx",763,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(763)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_tolerance();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_tolerance,return )

Float Cairo_obj::set_tolerance( Float value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_tolerance",0x6ed935da,"lime.graphics.cairo.Cairo.set_tolerance","lime/graphics/cairo/Cairo.hx",771,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(774)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_tolerance(value);
	HX_STACK_LINE(777)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_tolerance,return )

int Cairo_obj::version;

::String Cairo_obj::versionString;

int Cairo_obj::get_version( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_version",0xab721b99,"lime.graphics.cairo.Cairo.get_version","lime/graphics/cairo/Cairo.hx",785,0x0918a4c7)
	HX_STACK_LINE(785)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_version();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_version,return )

::String Cairo_obj::get_versionString( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_versionString",0xb090f14a,"lime.graphics.cairo.Cairo.get_versionString","lime/graphics/cairo/Cairo.hx",796,0x0918a4c7)
	HX_STACK_LINE(796)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_version_string();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_versionString,return )

Dynamic Cairo_obj::lime_cairo_arc;

Dynamic Cairo_obj::lime_cairo_arc_negative;

Dynamic Cairo_obj::lime_cairo_clip;

Dynamic Cairo_obj::lime_cairo_clip_preserve;

Dynamic Cairo_obj::lime_cairo_clip_extents;

Dynamic Cairo_obj::lime_cairo_close_path;

Dynamic Cairo_obj::lime_cairo_copy_page;

Dynamic Cairo_obj::lime_cairo_create;

Dynamic Cairo_obj::lime_cairo_curve_to;

Dynamic Cairo_obj::lime_cairo_destroy;

Dynamic Cairo_obj::lime_cairo_fill;

Dynamic Cairo_obj::lime_cairo_fill_extents;

Dynamic Cairo_obj::lime_cairo_fill_preserve;

Dynamic Cairo_obj::lime_cairo_get_antialias;

Dynamic Cairo_obj::lime_cairo_get_current_point;

Dynamic Cairo_obj::lime_cairo_get_dash;

Dynamic Cairo_obj::lime_cairo_get_dash_count;

Dynamic Cairo_obj::lime_cairo_get_fill_rule;

Dynamic Cairo_obj::lime_cairo_get_group_target;

Dynamic Cairo_obj::lime_cairo_get_line_cap;

Dynamic Cairo_obj::lime_cairo_get_line_join;

Dynamic Cairo_obj::lime_cairo_get_line_width;

Dynamic Cairo_obj::lime_cairo_get_matrix;

Dynamic Cairo_obj::lime_cairo_get_miter_limit;

Dynamic Cairo_obj::lime_cairo_get_operator;

Dynamic Cairo_obj::lime_cairo_get_reference_count;

Dynamic Cairo_obj::lime_cairo_get_source;

Dynamic Cairo_obj::lime_cairo_get_target;

Dynamic Cairo_obj::lime_cairo_get_tolerance;

Dynamic Cairo_obj::lime_cairo_has_current_point;

Dynamic Cairo_obj::lime_cairo_identity_matrix;

Dynamic Cairo_obj::lime_cairo_in_clip;

Dynamic Cairo_obj::lime_cairo_in_fill;

Dynamic Cairo_obj::lime_cairo_in_stroke;

Dynamic Cairo_obj::lime_cairo_line_to;

Dynamic Cairo_obj::lime_cairo_mask;

Dynamic Cairo_obj::lime_cairo_mask_surface;

Dynamic Cairo_obj::lime_cairo_move_to;

Dynamic Cairo_obj::lime_cairo_new_path;

Dynamic Cairo_obj::lime_cairo_paint;

Dynamic Cairo_obj::lime_cairo_paint_with_alpha;

Dynamic Cairo_obj::lime_cairo_pop_group;

Dynamic Cairo_obj::lime_cairo_pop_group_to_source;

Dynamic Cairo_obj::lime_cairo_push_group;

Dynamic Cairo_obj::lime_cairo_push_group_with_content;

Dynamic Cairo_obj::lime_cairo_rectangle;

Dynamic Cairo_obj::lime_cairo_reference;

Dynamic Cairo_obj::lime_cairo_rel_curve_to;

Dynamic Cairo_obj::lime_cairo_rel_line_to;

Dynamic Cairo_obj::lime_cairo_rel_move_to;

Dynamic Cairo_obj::lime_cairo_reset_clip;

Dynamic Cairo_obj::lime_cairo_restore;

Dynamic Cairo_obj::lime_cairo_save;

Dynamic Cairo_obj::lime_cairo_set_antialias;

Dynamic Cairo_obj::lime_cairo_set_dash;

Dynamic Cairo_obj::lime_cairo_set_fill_rule;

Dynamic Cairo_obj::lime_cairo_set_line_cap;

Dynamic Cairo_obj::lime_cairo_set_line_join;

Dynamic Cairo_obj::lime_cairo_set_line_width;

Dynamic Cairo_obj::lime_cairo_set_matrix;

Dynamic Cairo_obj::lime_cairo_set_miter_limit;

Dynamic Cairo_obj::lime_cairo_set_operator;

Dynamic Cairo_obj::lime_cairo_set_source;

Dynamic Cairo_obj::lime_cairo_set_source_rgb;

Dynamic Cairo_obj::lime_cairo_set_source_rgba;

Dynamic Cairo_obj::lime_cairo_set_source_surface;

Dynamic Cairo_obj::lime_cairo_set_tolerance;

Dynamic Cairo_obj::lime_cairo_show_page;

Dynamic Cairo_obj::lime_cairo_status;

Dynamic Cairo_obj::lime_cairo_stroke;

Dynamic Cairo_obj::lime_cairo_stroke_extents;

Dynamic Cairo_obj::lime_cairo_stroke_preserve;

Dynamic Cairo_obj::lime_cairo_transform;

Dynamic Cairo_obj::lime_cairo_translate;

Dynamic Cairo_obj::lime_cairo_version;

Dynamic Cairo_obj::lime_cairo_version_string;


Cairo_obj::Cairo_obj()
{
}

void Cairo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cairo);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void Cairo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic Cairo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"arc") ) { return arc_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dash") ) { return get_dash(); }
		if (HX_FIELD_EQ(inName,"clip") ) { return clip_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"mask") ) { return mask_dyn(); }
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paint") ) { return paint_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return get_matrix(); }
		if (HX_FIELD_EQ(inName,"source") ) { return get_source(); }
		if (HX_FIELD_EQ(inName,"target") ) { return inCallProp ? get_target() : target; }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"inClip") ) { return inClip_dyn(); }
		if (HX_FIELD_EQ(inName,"inFill") ) { return inFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"status") ) { return status_dyn(); }
		if (HX_FIELD_EQ(inName,"stroke") ) { return stroke_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return inCallProp ? get_version() : version; }
		if (HX_FIELD_EQ(inName,"lineCap") ) { return get_lineCap(); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"newPath") ) { return newPath_dyn(); }
		if (HX_FIELD_EQ(inName,"restore") ) { return restore_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRule") ) { return get_fillRule(); }
		if (HX_FIELD_EQ(inName,"lineJoin") ) { return get_lineJoin(); }
		if (HX_FIELD_EQ(inName,"operator") ) { return get_operator(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"copyPage") ) { return copyPage_dyn(); }
		if (HX_FIELD_EQ(inName,"inStroke") ) { return inStroke_dyn(); }
		if (HX_FIELD_EQ(inName,"popGroup") ) { return popGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"showPage") ) { return showPage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dash") ) { return get_dash_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dash") ) { return set_dash_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antialias") ) { return get_antialias(); }
		if (HX_FIELD_EQ(inName,"dashCount") ) { return get_dashCount(); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return get_lineWidth(); }
		if (HX_FIELD_EQ(inName,"tolerance") ) { return get_tolerance(); }
		if (HX_FIELD_EQ(inName,"closePath") ) { return closePath_dyn(); }
		if (HX_FIELD_EQ(inName,"pushGroup") ) { return pushGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"rectangle") ) { return rectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"reference") ) { return reference_dyn(); }
		if (HX_FIELD_EQ(inName,"relLineTo") ) { return relLineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"relMoveTo") ) { return relMoveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"resetClip") ) { return resetClip_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { return get_miterLimit(); }
		if (HX_FIELD_EQ(inName,"relCurveTo") ) { return relCurveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_source") ) { return get_source_dyn(); }
		if (HX_FIELD_EQ(inName,"set_source") ) { return set_source_dyn(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_version") ) { return get_version_dyn(); }
		if (HX_FIELD_EQ(inName,"groupTarget") ) { return get_groupTarget(); }
		if (HX_FIELD_EQ(inName,"arcNegative") ) { return arcNegative_dyn(); }
		if (HX_FIELD_EQ(inName,"clipExtents") ) { return clipExtents_dyn(); }
		if (HX_FIELD_EQ(inName,"fillExtents") ) { return fillExtents_dyn(); }
		if (HX_FIELD_EQ(inName,"maskSurface") ) { return maskSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineCap") ) { return get_lineCap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineCap") ) { return set_lineCap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentPoint") ) { return get_currentPoint(); }
		if (HX_FIELD_EQ(inName,"clipPreserve") ) { return clipPreserve_dyn(); }
		if (HX_FIELD_EQ(inName,"fillPreserve") ) { return fillPreserve_dyn(); }
		if (HX_FIELD_EQ(inName,"setSourceRGB") ) { return setSourceRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fillRule") ) { return get_fillRule_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fillRule") ) { return set_fillRule_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineJoin") ) { return get_lineJoin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineJoin") ) { return set_lineJoin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_operator") ) { return get_operator_dyn(); }
		if (HX_FIELD_EQ(inName,"set_operator") ) { return set_operator_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"versionString") ) { return inCallProp ? get_versionString() : versionString; }
		if (HX_FIELD_EQ(inName,"setSourceRGBA") ) { return setSourceRGBA_dyn(); }
		if (HX_FIELD_EQ(inName,"strokeExtents") ) { return strokeExtents_dyn(); }
		if (HX_FIELD_EQ(inName,"get_antialias") ) { return get_antialias_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialias") ) { return set_antialias_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dashCount") ) { return get_dashCount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineWidth") ) { return get_lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineWidth") ) { return set_lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tolerance") ) { return get_tolerance_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tolerance") ) { return set_tolerance_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_cairo_arc") ) { return lime_cairo_arc; }
		if (HX_FIELD_EQ(inName,"referenceCount") ) { return get_referenceCount(); }
		if (HX_FIELD_EQ(inName,"identityMatrix") ) { return identityMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"paintWithAlpha") ) { return paintWithAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"strokePreserve") ) { return strokePreserve_dyn(); }
		if (HX_FIELD_EQ(inName,"get_miterLimit") ) { return get_miterLimit_dyn(); }
		if (HX_FIELD_EQ(inName,"set_miterLimit") ) { return set_miterLimit_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_cairo_clip") ) { return lime_cairo_clip; }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill") ) { return lime_cairo_fill; }
		if (HX_FIELD_EQ(inName,"lime_cairo_mask") ) { return lime_cairo_mask; }
		if (HX_FIELD_EQ(inName,"lime_cairo_save") ) { return lime_cairo_save; }
		if (HX_FIELD_EQ(inName,"hasCurrentPoint") ) { return get_hasCurrentPoint(); }
		if (HX_FIELD_EQ(inName,"get_groupTarget") ) { return get_groupTarget_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_cairo_paint") ) { return lime_cairo_paint; }
		if (HX_FIELD_EQ(inName,"popGroupToSource") ) { return popGroupToSource_dyn(); }
		if (HX_FIELD_EQ(inName,"setSourceSurface") ) { return setSourceSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentPoint") ) { return get_currentPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_versionString") ) { return get_versionString_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_cairo_create") ) { return lime_cairo_create; }
		if (HX_FIELD_EQ(inName,"lime_cairo_status") ) { return lime_cairo_status; }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke") ) { return lime_cairo_stroke; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_cairo_destroy") ) { return lime_cairo_destroy; }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_clip") ) { return lime_cairo_in_clip; }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_fill") ) { return lime_cairo_in_fill; }
		if (HX_FIELD_EQ(inName,"lime_cairo_line_to") ) { return lime_cairo_line_to; }
		if (HX_FIELD_EQ(inName,"lime_cairo_move_to") ) { return lime_cairo_move_to; }
		if (HX_FIELD_EQ(inName,"lime_cairo_restore") ) { return lime_cairo_restore; }
		if (HX_FIELD_EQ(inName,"lime_cairo_version") ) { return lime_cairo_version; }
		if (HX_FIELD_EQ(inName,"get_referenceCount") ) { return get_referenceCount_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_cairo_curve_to") ) { return lime_cairo_curve_to; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_dash") ) { return lime_cairo_get_dash; }
		if (HX_FIELD_EQ(inName,"lime_cairo_new_path") ) { return lime_cairo_new_path; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_dash") ) { return lime_cairo_set_dash; }
		if (HX_FIELD_EQ(inName,"get_hasCurrentPoint") ) { return get_hasCurrentPoint_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_cairo_copy_page") ) { return lime_cairo_copy_page; }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_stroke") ) { return lime_cairo_in_stroke; }
		if (HX_FIELD_EQ(inName,"lime_cairo_pop_group") ) { return lime_cairo_pop_group; }
		if (HX_FIELD_EQ(inName,"lime_cairo_rectangle") ) { return lime_cairo_rectangle; }
		if (HX_FIELD_EQ(inName,"lime_cairo_reference") ) { return lime_cairo_reference; }
		if (HX_FIELD_EQ(inName,"lime_cairo_show_page") ) { return lime_cairo_show_page; }
		if (HX_FIELD_EQ(inName,"lime_cairo_transform") ) { return lime_cairo_transform; }
		if (HX_FIELD_EQ(inName,"lime_cairo_translate") ) { return lime_cairo_translate; }
		if (HX_FIELD_EQ(inName,"pushGroupWithContent") ) { return pushGroupWithContent_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_cairo_close_path") ) { return lime_cairo_close_path; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_matrix") ) { return lime_cairo_get_matrix; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_source") ) { return lime_cairo_get_source; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_target") ) { return lime_cairo_get_target; }
		if (HX_FIELD_EQ(inName,"lime_cairo_push_group") ) { return lime_cairo_push_group; }
		if (HX_FIELD_EQ(inName,"lime_cairo_reset_clip") ) { return lime_cairo_reset_clip; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_matrix") ) { return lime_cairo_set_matrix; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source") ) { return lime_cairo_set_source; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_line_to") ) { return lime_cairo_rel_line_to; }
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_move_to") ) { return lime_cairo_rel_move_to; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_cairo_arc_negative") ) { return lime_cairo_arc_negative; }
		if (HX_FIELD_EQ(inName,"lime_cairo_clip_extents") ) { return lime_cairo_clip_extents; }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill_extents") ) { return lime_cairo_fill_extents; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_cap") ) { return lime_cairo_get_line_cap; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_operator") ) { return lime_cairo_get_operator; }
		if (HX_FIELD_EQ(inName,"lime_cairo_mask_surface") ) { return lime_cairo_mask_surface; }
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_curve_to") ) { return lime_cairo_rel_curve_to; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_cap") ) { return lime_cairo_set_line_cap; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_operator") ) { return lime_cairo_set_operator; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_cairo_clip_preserve") ) { return lime_cairo_clip_preserve; }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill_preserve") ) { return lime_cairo_fill_preserve; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_antialias") ) { return lime_cairo_get_antialias; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_fill_rule") ) { return lime_cairo_get_fill_rule; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_join") ) { return lime_cairo_get_line_join; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_tolerance") ) { return lime_cairo_get_tolerance; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_antialias") ) { return lime_cairo_set_antialias; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_fill_rule") ) { return lime_cairo_set_fill_rule; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_join") ) { return lime_cairo_set_line_join; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_tolerance") ) { return lime_cairo_set_tolerance; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_dash_count") ) { return lime_cairo_get_dash_count; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_width") ) { return lime_cairo_get_line_width; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_width") ) { return lime_cairo_set_line_width; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_rgb") ) { return lime_cairo_set_source_rgb; }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke_extents") ) { return lime_cairo_stroke_extents; }
		if (HX_FIELD_EQ(inName,"lime_cairo_version_string") ) { return lime_cairo_version_string; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_miter_limit") ) { return lime_cairo_get_miter_limit; }
		if (HX_FIELD_EQ(inName,"lime_cairo_identity_matrix") ) { return lime_cairo_identity_matrix; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_miter_limit") ) { return lime_cairo_set_miter_limit; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_rgba") ) { return lime_cairo_set_source_rgba; }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke_preserve") ) { return lime_cairo_stroke_preserve; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_group_target") ) { return lime_cairo_get_group_target; }
		if (HX_FIELD_EQ(inName,"lime_cairo_paint_with_alpha") ) { return lime_cairo_paint_with_alpha; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_current_point") ) { return lime_cairo_get_current_point; }
		if (HX_FIELD_EQ(inName,"lime_cairo_has_current_point") ) { return lime_cairo_has_current_point; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_surface") ) { return lime_cairo_set_source_surface; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_reference_count") ) { return lime_cairo_get_reference_count; }
		if (HX_FIELD_EQ(inName,"lime_cairo_pop_group_to_source") ) { return lime_cairo_pop_group_to_source; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_cairo_push_group_with_content") ) { return lime_cairo_push_group_with_content; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Cairo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dash") ) { return set_dash(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return set_matrix(inValue); }
		if (HX_FIELD_EQ(inName,"source") ) { return set_source(inValue); }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineCap") ) { return set_lineCap(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRule") ) { return set_fillRule(inValue); }
		if (HX_FIELD_EQ(inName,"lineJoin") ) { return set_lineJoin(inValue); }
		if (HX_FIELD_EQ(inName,"operator") ) { return set_operator(inValue); }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antialias") ) { return set_antialias(inValue); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return set_lineWidth(inValue); }
		if (HX_FIELD_EQ(inName,"tolerance") ) { return set_tolerance(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { return set_miterLimit(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"versionString") ) { versionString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_cairo_arc") ) { lime_cairo_arc=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_cairo_clip") ) { lime_cairo_clip=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill") ) { lime_cairo_fill=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_mask") ) { lime_cairo_mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_save") ) { lime_cairo_save=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_cairo_paint") ) { lime_cairo_paint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_cairo_create") ) { lime_cairo_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_status") ) { lime_cairo_status=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke") ) { lime_cairo_stroke=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_cairo_destroy") ) { lime_cairo_destroy=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_clip") ) { lime_cairo_in_clip=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_fill") ) { lime_cairo_in_fill=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_line_to") ) { lime_cairo_line_to=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_move_to") ) { lime_cairo_move_to=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_restore") ) { lime_cairo_restore=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_version") ) { lime_cairo_version=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_cairo_curve_to") ) { lime_cairo_curve_to=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_dash") ) { lime_cairo_get_dash=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_new_path") ) { lime_cairo_new_path=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_dash") ) { lime_cairo_set_dash=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_cairo_copy_page") ) { lime_cairo_copy_page=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_stroke") ) { lime_cairo_in_stroke=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_pop_group") ) { lime_cairo_pop_group=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_rectangle") ) { lime_cairo_rectangle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_reference") ) { lime_cairo_reference=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_show_page") ) { lime_cairo_show_page=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_transform") ) { lime_cairo_transform=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_translate") ) { lime_cairo_translate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_cairo_close_path") ) { lime_cairo_close_path=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_matrix") ) { lime_cairo_get_matrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_source") ) { lime_cairo_get_source=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_target") ) { lime_cairo_get_target=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_push_group") ) { lime_cairo_push_group=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_reset_clip") ) { lime_cairo_reset_clip=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_matrix") ) { lime_cairo_set_matrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source") ) { lime_cairo_set_source=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_line_to") ) { lime_cairo_rel_line_to=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_move_to") ) { lime_cairo_rel_move_to=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_cairo_arc_negative") ) { lime_cairo_arc_negative=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_clip_extents") ) { lime_cairo_clip_extents=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill_extents") ) { lime_cairo_fill_extents=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_cap") ) { lime_cairo_get_line_cap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_operator") ) { lime_cairo_get_operator=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_mask_surface") ) { lime_cairo_mask_surface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_curve_to") ) { lime_cairo_rel_curve_to=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_cap") ) { lime_cairo_set_line_cap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_operator") ) { lime_cairo_set_operator=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_cairo_clip_preserve") ) { lime_cairo_clip_preserve=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill_preserve") ) { lime_cairo_fill_preserve=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_antialias") ) { lime_cairo_get_antialias=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_fill_rule") ) { lime_cairo_get_fill_rule=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_join") ) { lime_cairo_get_line_join=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_tolerance") ) { lime_cairo_get_tolerance=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_antialias") ) { lime_cairo_set_antialias=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_fill_rule") ) { lime_cairo_set_fill_rule=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_join") ) { lime_cairo_set_line_join=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_tolerance") ) { lime_cairo_set_tolerance=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_dash_count") ) { lime_cairo_get_dash_count=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_width") ) { lime_cairo_get_line_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_width") ) { lime_cairo_set_line_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_rgb") ) { lime_cairo_set_source_rgb=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke_extents") ) { lime_cairo_stroke_extents=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_version_string") ) { lime_cairo_version_string=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_miter_limit") ) { lime_cairo_get_miter_limit=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_identity_matrix") ) { lime_cairo_identity_matrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_miter_limit") ) { lime_cairo_set_miter_limit=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_rgba") ) { lime_cairo_set_source_rgba=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke_preserve") ) { lime_cairo_stroke_preserve=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_group_target") ) { lime_cairo_get_group_target=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_paint_with_alpha") ) { lime_cairo_paint_with_alpha=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_current_point") ) { lime_cairo_get_current_point=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_has_current_point") ) { lime_cairo_has_current_point=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_surface") ) { lime_cairo_set_source_surface=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_reference_count") ) { lime_cairo_get_reference_count=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_cairo_pop_group_to_source") ) { lime_cairo_pop_group_to_source=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_cairo_push_group_with_content") ) { lime_cairo_push_group_with_content=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Cairo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("antialias"));
	outFields->push(HX_CSTRING("currentPoint"));
	outFields->push(HX_CSTRING("dash"));
	outFields->push(HX_CSTRING("dashCount"));
	outFields->push(HX_CSTRING("fillRule"));
	outFields->push(HX_CSTRING("groupTarget"));
	outFields->push(HX_CSTRING("hasCurrentPoint"));
	outFields->push(HX_CSTRING("lineCap"));
	outFields->push(HX_CSTRING("lineJoin"));
	outFields->push(HX_CSTRING("lineWidth"));
	outFields->push(HX_CSTRING("matrix"));
	outFields->push(HX_CSTRING("miterLimit"));
	outFields->push(HX_CSTRING("operator"));
	outFields->push(HX_CSTRING("referenceCount"));
	outFields->push(HX_CSTRING("source"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("tolerance"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("version"),
	HX_CSTRING("versionString"),
	HX_CSTRING("get_version"),
	HX_CSTRING("get_versionString"),
	HX_CSTRING("lime_cairo_arc"),
	HX_CSTRING("lime_cairo_arc_negative"),
	HX_CSTRING("lime_cairo_clip"),
	HX_CSTRING("lime_cairo_clip_preserve"),
	HX_CSTRING("lime_cairo_clip_extents"),
	HX_CSTRING("lime_cairo_close_path"),
	HX_CSTRING("lime_cairo_copy_page"),
	HX_CSTRING("lime_cairo_create"),
	HX_CSTRING("lime_cairo_curve_to"),
	HX_CSTRING("lime_cairo_destroy"),
	HX_CSTRING("lime_cairo_fill"),
	HX_CSTRING("lime_cairo_fill_extents"),
	HX_CSTRING("lime_cairo_fill_preserve"),
	HX_CSTRING("lime_cairo_get_antialias"),
	HX_CSTRING("lime_cairo_get_current_point"),
	HX_CSTRING("lime_cairo_get_dash"),
	HX_CSTRING("lime_cairo_get_dash_count"),
	HX_CSTRING("lime_cairo_get_fill_rule"),
	HX_CSTRING("lime_cairo_get_group_target"),
	HX_CSTRING("lime_cairo_get_line_cap"),
	HX_CSTRING("lime_cairo_get_line_join"),
	HX_CSTRING("lime_cairo_get_line_width"),
	HX_CSTRING("lime_cairo_get_matrix"),
	HX_CSTRING("lime_cairo_get_miter_limit"),
	HX_CSTRING("lime_cairo_get_operator"),
	HX_CSTRING("lime_cairo_get_reference_count"),
	HX_CSTRING("lime_cairo_get_source"),
	HX_CSTRING("lime_cairo_get_target"),
	HX_CSTRING("lime_cairo_get_tolerance"),
	HX_CSTRING("lime_cairo_has_current_point"),
	HX_CSTRING("lime_cairo_identity_matrix"),
	HX_CSTRING("lime_cairo_in_clip"),
	HX_CSTRING("lime_cairo_in_fill"),
	HX_CSTRING("lime_cairo_in_stroke"),
	HX_CSTRING("lime_cairo_line_to"),
	HX_CSTRING("lime_cairo_mask"),
	HX_CSTRING("lime_cairo_mask_surface"),
	HX_CSTRING("lime_cairo_move_to"),
	HX_CSTRING("lime_cairo_new_path"),
	HX_CSTRING("lime_cairo_paint"),
	HX_CSTRING("lime_cairo_paint_with_alpha"),
	HX_CSTRING("lime_cairo_pop_group"),
	HX_CSTRING("lime_cairo_pop_group_to_source"),
	HX_CSTRING("lime_cairo_push_group"),
	HX_CSTRING("lime_cairo_push_group_with_content"),
	HX_CSTRING("lime_cairo_rectangle"),
	HX_CSTRING("lime_cairo_reference"),
	HX_CSTRING("lime_cairo_rel_curve_to"),
	HX_CSTRING("lime_cairo_rel_line_to"),
	HX_CSTRING("lime_cairo_rel_move_to"),
	HX_CSTRING("lime_cairo_reset_clip"),
	HX_CSTRING("lime_cairo_restore"),
	HX_CSTRING("lime_cairo_save"),
	HX_CSTRING("lime_cairo_set_antialias"),
	HX_CSTRING("lime_cairo_set_dash"),
	HX_CSTRING("lime_cairo_set_fill_rule"),
	HX_CSTRING("lime_cairo_set_line_cap"),
	HX_CSTRING("lime_cairo_set_line_join"),
	HX_CSTRING("lime_cairo_set_line_width"),
	HX_CSTRING("lime_cairo_set_matrix"),
	HX_CSTRING("lime_cairo_set_miter_limit"),
	HX_CSTRING("lime_cairo_set_operator"),
	HX_CSTRING("lime_cairo_set_source"),
	HX_CSTRING("lime_cairo_set_source_rgb"),
	HX_CSTRING("lime_cairo_set_source_rgba"),
	HX_CSTRING("lime_cairo_set_source_surface"),
	HX_CSTRING("lime_cairo_set_tolerance"),
	HX_CSTRING("lime_cairo_show_page"),
	HX_CSTRING("lime_cairo_status"),
	HX_CSTRING("lime_cairo_stroke"),
	HX_CSTRING("lime_cairo_stroke_extents"),
	HX_CSTRING("lime_cairo_stroke_preserve"),
	HX_CSTRING("lime_cairo_transform"),
	HX_CSTRING("lime_cairo_translate"),
	HX_CSTRING("lime_cairo_version"),
	HX_CSTRING("lime_cairo_version_string"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Cairo_obj,target),HX_CSTRING("target")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Cairo_obj,userData),HX_CSTRING("userData")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Cairo_obj,handle),HX_CSTRING("handle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("target"),
	HX_CSTRING("userData"),
	HX_CSTRING("handle"),
	HX_CSTRING("arc"),
	HX_CSTRING("arcNegative"),
	HX_CSTRING("clip"),
	HX_CSTRING("clipExtents"),
	HX_CSTRING("clipPreserve"),
	HX_CSTRING("closePath"),
	HX_CSTRING("copyPage"),
	HX_CSTRING("curveTo"),
	HX_CSTRING("destroy"),
	HX_CSTRING("fill"),
	HX_CSTRING("fillExtents"),
	HX_CSTRING("fillPreserve"),
	HX_CSTRING("identityMatrix"),
	HX_CSTRING("inClip"),
	HX_CSTRING("inFill"),
	HX_CSTRING("inStroke"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("mask"),
	HX_CSTRING("maskSurface"),
	HX_CSTRING("newPath"),
	HX_CSTRING("paint"),
	HX_CSTRING("paintWithAlpha"),
	HX_CSTRING("popGroup"),
	HX_CSTRING("popGroupToSource"),
	HX_CSTRING("pushGroup"),
	HX_CSTRING("pushGroupWithContent"),
	HX_CSTRING("rectangle"),
	HX_CSTRING("reference"),
	HX_CSTRING("relCurveTo"),
	HX_CSTRING("relLineTo"),
	HX_CSTRING("relMoveTo"),
	HX_CSTRING("resetClip"),
	HX_CSTRING("restore"),
	HX_CSTRING("save"),
	HX_CSTRING("setSourceRGB"),
	HX_CSTRING("setSourceRGBA"),
	HX_CSTRING("setSourceSurface"),
	HX_CSTRING("showPage"),
	HX_CSTRING("status"),
	HX_CSTRING("stroke"),
	HX_CSTRING("strokeExtents"),
	HX_CSTRING("strokePreserve"),
	HX_CSTRING("transform"),
	HX_CSTRING("translate"),
	HX_CSTRING("get_antialias"),
	HX_CSTRING("set_antialias"),
	HX_CSTRING("get_currentPoint"),
	HX_CSTRING("get_dash"),
	HX_CSTRING("set_dash"),
	HX_CSTRING("get_dashCount"),
	HX_CSTRING("get_fillRule"),
	HX_CSTRING("set_fillRule"),
	HX_CSTRING("get_groupTarget"),
	HX_CSTRING("get_hasCurrentPoint"),
	HX_CSTRING("get_lineCap"),
	HX_CSTRING("set_lineCap"),
	HX_CSTRING("get_lineJoin"),
	HX_CSTRING("set_lineJoin"),
	HX_CSTRING("get_lineWidth"),
	HX_CSTRING("set_lineWidth"),
	HX_CSTRING("get_matrix"),
	HX_CSTRING("set_matrix"),
	HX_CSTRING("get_miterLimit"),
	HX_CSTRING("set_miterLimit"),
	HX_CSTRING("get_operator"),
	HX_CSTRING("set_operator"),
	HX_CSTRING("get_referenceCount"),
	HX_CSTRING("get_source"),
	HX_CSTRING("set_source"),
	HX_CSTRING("get_target"),
	HX_CSTRING("get_tolerance"),
	HX_CSTRING("set_tolerance"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cairo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Cairo_obj::version,"version");
	HX_MARK_MEMBER_NAME(Cairo_obj::versionString,"versionString");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_arc,"lime_cairo_arc");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_arc_negative,"lime_cairo_arc_negative");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_clip,"lime_cairo_clip");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_clip_preserve,"lime_cairo_clip_preserve");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_clip_extents,"lime_cairo_clip_extents");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_close_path,"lime_cairo_close_path");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_copy_page,"lime_cairo_copy_page");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_create,"lime_cairo_create");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_curve_to,"lime_cairo_curve_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_destroy,"lime_cairo_destroy");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_fill,"lime_cairo_fill");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_fill_extents,"lime_cairo_fill_extents");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_fill_preserve,"lime_cairo_fill_preserve");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_antialias,"lime_cairo_get_antialias");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_current_point,"lime_cairo_get_current_point");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_dash,"lime_cairo_get_dash");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_dash_count,"lime_cairo_get_dash_count");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_fill_rule,"lime_cairo_get_fill_rule");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_group_target,"lime_cairo_get_group_target");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_line_cap,"lime_cairo_get_line_cap");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_line_join,"lime_cairo_get_line_join");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_line_width,"lime_cairo_get_line_width");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_matrix,"lime_cairo_get_matrix");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_miter_limit,"lime_cairo_get_miter_limit");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_operator,"lime_cairo_get_operator");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_reference_count,"lime_cairo_get_reference_count");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_source,"lime_cairo_get_source");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_target,"lime_cairo_get_target");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_tolerance,"lime_cairo_get_tolerance");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_has_current_point,"lime_cairo_has_current_point");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_identity_matrix,"lime_cairo_identity_matrix");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_in_clip,"lime_cairo_in_clip");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_in_fill,"lime_cairo_in_fill");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_in_stroke,"lime_cairo_in_stroke");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_line_to,"lime_cairo_line_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_mask,"lime_cairo_mask");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_mask_surface,"lime_cairo_mask_surface");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_move_to,"lime_cairo_move_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_new_path,"lime_cairo_new_path");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_paint,"lime_cairo_paint");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_paint_with_alpha,"lime_cairo_paint_with_alpha");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_pop_group,"lime_cairo_pop_group");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_pop_group_to_source,"lime_cairo_pop_group_to_source");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_push_group,"lime_cairo_push_group");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_push_group_with_content,"lime_cairo_push_group_with_content");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_rectangle,"lime_cairo_rectangle");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_reference,"lime_cairo_reference");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_rel_curve_to,"lime_cairo_rel_curve_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_rel_line_to,"lime_cairo_rel_line_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_rel_move_to,"lime_cairo_rel_move_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_reset_clip,"lime_cairo_reset_clip");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_restore,"lime_cairo_restore");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_save,"lime_cairo_save");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_antialias,"lime_cairo_set_antialias");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_dash,"lime_cairo_set_dash");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_fill_rule,"lime_cairo_set_fill_rule");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_line_cap,"lime_cairo_set_line_cap");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_line_join,"lime_cairo_set_line_join");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_line_width,"lime_cairo_set_line_width");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_matrix,"lime_cairo_set_matrix");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_miter_limit,"lime_cairo_set_miter_limit");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_operator,"lime_cairo_set_operator");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_source,"lime_cairo_set_source");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_source_rgb,"lime_cairo_set_source_rgb");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_source_rgba,"lime_cairo_set_source_rgba");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_source_surface,"lime_cairo_set_source_surface");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_tolerance,"lime_cairo_set_tolerance");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_show_page,"lime_cairo_show_page");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_status,"lime_cairo_status");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_stroke,"lime_cairo_stroke");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_stroke_extents,"lime_cairo_stroke_extents");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_stroke_preserve,"lime_cairo_stroke_preserve");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_transform,"lime_cairo_transform");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_translate,"lime_cairo_translate");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_version,"lime_cairo_version");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_version_string,"lime_cairo_version_string");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cairo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Cairo_obj::version,"version");
	HX_VISIT_MEMBER_NAME(Cairo_obj::versionString,"versionString");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_arc,"lime_cairo_arc");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_arc_negative,"lime_cairo_arc_negative");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_clip,"lime_cairo_clip");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_clip_preserve,"lime_cairo_clip_preserve");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_clip_extents,"lime_cairo_clip_extents");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_close_path,"lime_cairo_close_path");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_copy_page,"lime_cairo_copy_page");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_create,"lime_cairo_create");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_curve_to,"lime_cairo_curve_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_destroy,"lime_cairo_destroy");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_fill,"lime_cairo_fill");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_fill_extents,"lime_cairo_fill_extents");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_fill_preserve,"lime_cairo_fill_preserve");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_antialias,"lime_cairo_get_antialias");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_current_point,"lime_cairo_get_current_point");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_dash,"lime_cairo_get_dash");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_dash_count,"lime_cairo_get_dash_count");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_fill_rule,"lime_cairo_get_fill_rule");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_group_target,"lime_cairo_get_group_target");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_line_cap,"lime_cairo_get_line_cap");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_line_join,"lime_cairo_get_line_join");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_line_width,"lime_cairo_get_line_width");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_matrix,"lime_cairo_get_matrix");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_miter_limit,"lime_cairo_get_miter_limit");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_operator,"lime_cairo_get_operator");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_reference_count,"lime_cairo_get_reference_count");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_source,"lime_cairo_get_source");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_target,"lime_cairo_get_target");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_tolerance,"lime_cairo_get_tolerance");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_has_current_point,"lime_cairo_has_current_point");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_identity_matrix,"lime_cairo_identity_matrix");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_in_clip,"lime_cairo_in_clip");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_in_fill,"lime_cairo_in_fill");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_in_stroke,"lime_cairo_in_stroke");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_line_to,"lime_cairo_line_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_mask,"lime_cairo_mask");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_mask_surface,"lime_cairo_mask_surface");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_move_to,"lime_cairo_move_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_new_path,"lime_cairo_new_path");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_paint,"lime_cairo_paint");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_paint_with_alpha,"lime_cairo_paint_with_alpha");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_pop_group,"lime_cairo_pop_group");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_pop_group_to_source,"lime_cairo_pop_group_to_source");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_push_group,"lime_cairo_push_group");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_push_group_with_content,"lime_cairo_push_group_with_content");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_rectangle,"lime_cairo_rectangle");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_reference,"lime_cairo_reference");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_rel_curve_to,"lime_cairo_rel_curve_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_rel_line_to,"lime_cairo_rel_line_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_rel_move_to,"lime_cairo_rel_move_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_reset_clip,"lime_cairo_reset_clip");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_restore,"lime_cairo_restore");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_save,"lime_cairo_save");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_antialias,"lime_cairo_set_antialias");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_dash,"lime_cairo_set_dash");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_fill_rule,"lime_cairo_set_fill_rule");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_line_cap,"lime_cairo_set_line_cap");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_line_join,"lime_cairo_set_line_join");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_line_width,"lime_cairo_set_line_width");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_matrix,"lime_cairo_set_matrix");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_miter_limit,"lime_cairo_set_miter_limit");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_operator,"lime_cairo_set_operator");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_source,"lime_cairo_set_source");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_source_rgb,"lime_cairo_set_source_rgb");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_source_rgba,"lime_cairo_set_source_rgba");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_source_surface,"lime_cairo_set_source_surface");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_tolerance,"lime_cairo_set_tolerance");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_show_page,"lime_cairo_show_page");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_status,"lime_cairo_status");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_stroke,"lime_cairo_stroke");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_stroke_extents,"lime_cairo_stroke_extents");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_stroke_preserve,"lime_cairo_stroke_preserve");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_transform,"lime_cairo_transform");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_translate,"lime_cairo_translate");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_version,"lime_cairo_version");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_version_string,"lime_cairo_version_string");
};

#endif

Class Cairo_obj::__mClass;

void Cairo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo.Cairo"), hx::TCanCast< Cairo_obj> ,sStaticFields,sMemberFields,
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

void Cairo_obj::__boot()
{
	lime_cairo_arc= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_arc"),(int)-1,null());
	lime_cairo_arc_negative= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_arc_negative"),(int)-1,null());
	lime_cairo_clip= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_clip"),(int)1,null());
	lime_cairo_clip_preserve= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_clip_preserve"),(int)1,null());
	lime_cairo_clip_extents= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_clip_extents"),(int)5,null());
	lime_cairo_close_path= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_close_path"),(int)1,null());
	lime_cairo_copy_page= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_copy_page"),(int)1,null());
	lime_cairo_create= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_create"),(int)1,null());
	lime_cairo_curve_to= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_curve_to"),(int)-1,null());
	lime_cairo_destroy= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_destroy"),(int)1,null());
	lime_cairo_fill= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_fill"),(int)1,null());
	lime_cairo_fill_extents= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_fill_extents"),(int)5,null());
	lime_cairo_fill_preserve= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_fill_preserve"),(int)1,null());
	lime_cairo_get_antialias= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_antialias"),(int)1,null());
	lime_cairo_get_current_point= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_current_point"),(int)1,null());
	lime_cairo_get_dash= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_dash"),(int)1,null());
	lime_cairo_get_dash_count= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_dash_count"),(int)1,null());
	lime_cairo_get_fill_rule= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_fill_rule"),(int)1,null());
	lime_cairo_get_group_target= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_group_target"),(int)1,null());
	lime_cairo_get_line_cap= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_line_cap"),(int)1,null());
	lime_cairo_get_line_join= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_line_join"),(int)1,null());
	lime_cairo_get_line_width= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_line_width"),(int)1,null());
	lime_cairo_get_matrix= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_matrix"),(int)1,null());
	lime_cairo_get_miter_limit= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_miter_limit"),(int)1,null());
	lime_cairo_get_operator= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_operator"),(int)1,null());
	lime_cairo_get_reference_count= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_reference_count"),(int)1,null());
	lime_cairo_get_source= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_source"),(int)1,null());
	lime_cairo_get_target= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_target"),(int)1,null());
	lime_cairo_get_tolerance= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_get_tolerance"),(int)1,null());
	lime_cairo_has_current_point= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_has_current_point"),(int)1,null());
	lime_cairo_identity_matrix= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_identity_matrix"),(int)1,null());
	lime_cairo_in_clip= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_in_clip"),(int)3,null());
	lime_cairo_in_fill= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_in_fill"),(int)3,null());
	lime_cairo_in_stroke= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_in_stroke"),(int)3,null());
	lime_cairo_line_to= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_line_to"),(int)3,null());
	lime_cairo_mask= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_mask"),(int)2,null());
	lime_cairo_mask_surface= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_mask_surface"),(int)4,null());
	lime_cairo_move_to= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_move_to"),(int)3,null());
	lime_cairo_new_path= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_new_path"),(int)1,null());
	lime_cairo_paint= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_paint"),(int)1,null());
	lime_cairo_paint_with_alpha= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_paint_with_alpha"),(int)2,null());
	lime_cairo_pop_group= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pop_group"),(int)1,null());
	lime_cairo_pop_group_to_source= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_pop_group_to_source"),(int)1,null());
	lime_cairo_push_group= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_push_group"),(int)1,null());
	lime_cairo_push_group_with_content= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_push_group_with_content"),(int)2,null());
	lime_cairo_rectangle= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_rectangle"),(int)5,null());
	lime_cairo_reference= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_reference"),(int)1,null());
	lime_cairo_rel_curve_to= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_rel_curve_to"),(int)-1,null());
	lime_cairo_rel_line_to= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_rel_line_to"),(int)3,null());
	lime_cairo_rel_move_to= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_rel_move_to"),(int)3,null());
	lime_cairo_reset_clip= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_reset_clip"),(int)1,null());
	lime_cairo_restore= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_restore"),(int)1,null());
	lime_cairo_save= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_save"),(int)1,null());
	lime_cairo_set_antialias= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_antialias"),(int)2,null());
	lime_cairo_set_dash= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_dash"),(int)2,null());
	lime_cairo_set_fill_rule= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_fill_rule"),(int)2,null());
	lime_cairo_set_line_cap= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_line_cap"),(int)2,null());
	lime_cairo_set_line_join= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_line_join"),(int)2,null());
	lime_cairo_set_line_width= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_line_width"),(int)2,null());
	lime_cairo_set_matrix= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_matrix"),(int)2,null());
	lime_cairo_set_miter_limit= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_miter_limit"),(int)2,null());
	lime_cairo_set_operator= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_operator"),(int)2,null());
	lime_cairo_set_source= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_source"),(int)2,null());
	lime_cairo_set_source_rgb= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_source_rgb"),(int)4,null());
	lime_cairo_set_source_rgba= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_source_rgba"),(int)5,null());
	lime_cairo_set_source_surface= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_source_surface"),(int)4,null());
	lime_cairo_set_tolerance= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_set_tolerance"),(int)2,null());
	lime_cairo_show_page= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_show_page"),(int)1,null());
	lime_cairo_status= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_status"),(int)1,null());
	lime_cairo_stroke= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_stroke"),(int)1,null());
	lime_cairo_stroke_extents= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_stroke_extents"),(int)5,null());
	lime_cairo_stroke_preserve= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_stroke_preserve"),(int)1,null());
	lime_cairo_transform= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_transform"),(int)2,null());
	lime_cairo_translate= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_translate"),(int)3,null());
	lime_cairo_version= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_version"),(int)0,null());
	lime_cairo_version_string= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_cairo_version_string"),(int)0,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
