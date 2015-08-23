#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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
namespace openfl{
namespace display{

Void DisplayObjectContainer_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",101,0x5f4d3d72)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(103)
	super::__construct();
	HX_STACK_LINE(105)
	this->mouseChildren = true;
	HX_STACK_LINE(107)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(107)
	this->__children = _g;
	HX_STACK_LINE(108)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(108)
	this->__removedChildren = _g1;
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new()
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct();
	return result;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct();
	return result;}

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",143,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(145)
	if (((child != null()))){
		HX_STACK_LINE(147)
		if (((child->parent != null()))){
			HX_STACK_LINE(149)
			child->parent->removeChild(child);
		}
		HX_STACK_LINE(153)
		this->__children->push(child);
		HX_STACK_LINE(154)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(156)
		if (((this->stage != null()))){
			HX_STACK_LINE(158)
			child->__setStageReference(this->stage);
		}
		HX_STACK_LINE(162)
		if ((!(child->__transformDirty))){
			HX_STACK_LINE(162)
			child->__transformDirty = true;
			HX_STACK_LINE(162)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(163)
		if ((!(child->__renderDirty))){
			HX_STACK_LINE(163)
			child->__renderDirty = true;
			HX_STACK_LINE(163)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
		HX_STACK_LINE(165)
		::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::ADDED,true,null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(166)
		event->target = child;
		HX_STACK_LINE(167)
		child->dispatchEvent(event);
	}
	HX_STACK_LINE(171)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",205,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(207)
	if (((bool((index > this->__children->length)) || bool((index < (int)0))))){
		HX_STACK_LINE(209)
		HX_STACK_DO_THROW((HX_CSTRING("Invalid index position ") + index));
	}
	HX_STACK_LINE(213)
	if (((child->parent == hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(215)
		this->__children->remove(child);
	}
	else{
		HX_STACK_LINE(219)
		if (((child->parent != null()))){
			HX_STACK_LINE(221)
			child->parent->removeChild(child);
		}
		HX_STACK_LINE(225)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(227)
		if (((this->stage != null()))){
			HX_STACK_LINE(229)
			child->__setStageReference(this->stage);
		}
		HX_STACK_LINE(233)
		if ((!(child->__transformDirty))){
			HX_STACK_LINE(233)
			child->__transformDirty = true;
			HX_STACK_LINE(233)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(234)
		if ((!(child->__renderDirty))){
			HX_STACK_LINE(234)
			child->__renderDirty = true;
			HX_STACK_LINE(234)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
		HX_STACK_LINE(236)
		::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::ADDED,true,null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(237)
		event->target = child;
		HX_STACK_LINE(238)
		child->dispatchEvent(event);
	}
	HX_STACK_LINE(242)
	this->__children->insert(index,child);
	HX_STACK_LINE(244)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",272,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(272)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",289,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(291)
	while((true)){
		HX_STACK_LINE(291)
		if ((!(((bool((child != hx::ObjectPtr<OBJ_>(this))) && bool((child != null()))))))){
			HX_STACK_LINE(291)
			break;
		}
		HX_STACK_LINE(293)
		child = child->parent;
	}
	HX_STACK_LINE(297)
	return (child == hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",315,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(317)
	if (((bool((index >= (int)0)) && bool((index < this->__children->length))))){
		HX_STACK_LINE(319)
		return this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();
	}
	HX_STACK_LINE(323)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",346,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(348)
	{
		HX_STACK_LINE(348)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(348)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(348)
		while((true)){
			HX_STACK_LINE(348)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(348)
				break;
			}
			HX_STACK_LINE(348)
			::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(348)
			++(_g);
			HX_STACK_LINE(350)
			::String _g2 = child->get_name();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(350)
			if (((_g2 == name))){
				HX_STACK_LINE(350)
				return child;
			}
		}
	}
	HX_STACK_LINE(354)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",367,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(369)
	{
		HX_STACK_LINE(369)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(369)
		int _g = this->__children->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(369)
		while((true)){
			HX_STACK_LINE(369)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(369)
				break;
			}
			HX_STACK_LINE(369)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(371)
			if (((this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >() == child))){
				HX_STACK_LINE(371)
				return i;
			}
		}
	}
	HX_STACK_LINE(375)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",399,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(401)
	::openfl::geom::Point _g = this->localToGlobal(point);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(401)
	point = _g;
	HX_STACK_LINE(402)
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(403)
	this->__hitTest(point->x,point->y,false,stack,false);
	HX_STACK_LINE(404)
	stack->reverse();
	HX_STACK_LINE(405)
	return stack;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",429,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(431)
	if (((bool((child != null())) && bool((child->parent == hx::ObjectPtr<OBJ_>(this)))))){
		HX_STACK_LINE(433)
		if (((this->stage != null()))){
			HX_STACK_LINE(435)
			child->__setStageReference(null());
		}
		HX_STACK_LINE(439)
		child->parent = null();
		HX_STACK_LINE(440)
		this->__children->remove(child);
		HX_STACK_LINE(441)
		this->__removedChildren->push(child);
		HX_STACK_LINE(442)
		if ((!(child->__transformDirty))){
			HX_STACK_LINE(442)
			child->__transformDirty = true;
			HX_STACK_LINE(442)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(443)
		if ((!(child->__renderDirty))){
			HX_STACK_LINE(443)
			child->__renderDirty = true;
			HX_STACK_LINE(443)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
		HX_STACK_LINE(444)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::REMOVED,true,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(444)
		child->dispatchEvent(_g);
	}
	HX_STACK_LINE(448)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",475,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(477)
	if (((bool((index >= (int)0)) && bool((index < this->__children->length))))){
		HX_STACK_LINE(479)
		return this->removeChild(this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >());
	}
	HX_STACK_LINE(483)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",488,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(490)
		if (((endIndex == (int)2147483647))){
			HX_STACK_LINE(492)
			endIndex = (this->__children->length - (int)1);
			HX_STACK_LINE(494)
			if (((endIndex < (int)0))){
				HX_STACK_LINE(496)
				return null();
			}
		}
		HX_STACK_LINE(502)
		if (((beginIndex > (this->__children->length - (int)1)))){
			HX_STACK_LINE(504)
			return null();
		}
		else{
			HX_STACK_LINE(506)
			if (((bool((bool((endIndex < beginIndex)) || bool((beginIndex < (int)0)))) || bool((endIndex > this->__children->length))))){
				HX_STACK_LINE(508)
				HX_STACK_DO_THROW(::openfl::errors::RangeError_obj::__new(HX_CSTRING("The supplied index is out of bounds.")));
			}
		}
		HX_STACK_LINE(512)
		int numRemovals = (endIndex - beginIndex);		HX_STACK_VAR(numRemovals,"numRemovals");
		HX_STACK_LINE(513)
		while((true)){
			HX_STACK_LINE(513)
			if ((!(((numRemovals >= (int)0))))){
				HX_STACK_LINE(513)
				break;
			}
			HX_STACK_LINE(515)
			this->removeChildAt(beginIndex);
			HX_STACK_LINE(516)
			(numRemovals)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

Void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",553,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(553)
		if (((bool((bool((index >= (int)0)) && bool((index <= this->__children->length)))) && bool((child->parent == hx::ObjectPtr<OBJ_>(this)))))){
			HX_STACK_LINE(555)
			this->__children->remove(child);
			HX_STACK_LINE(556)
			this->__children->insert(index,child);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1,::openfl::display::DisplayObject child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",575,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(575)
		if (((bool((child1->parent == hx::ObjectPtr<OBJ_>(this))) && bool((child2->parent == hx::ObjectPtr<OBJ_>(this)))))){
			HX_STACK_LINE(579)
			int index1 = this->__children->indexOf(child1,null());		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(580)
			int index2 = this->__children->indexOf(child2,null());		HX_STACK_VAR(index2,"index2");
			HX_STACK_LINE(603)
			this->__children[index1] = child2;
			HX_STACK_LINE(604)
			this->__children[index2] = child1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int child1,int child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",620,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(622)
		::openfl::display::DisplayObject swap = this->__children->__get(child1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(swap,"swap");
		HX_STACK_LINE(623)
		this->__children[child1] = this->__children->__get(child2).StaticCast< ::openfl::display::DisplayObject >();
		HX_STACK_LINE(624)
		this->__children[child2] = swap;
		HX_STACK_LINE(625)
		swap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

bool DisplayObjectContainer_obj::__broadcast( ::openfl::events::Event event,bool notifyChilden){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__broadcast",0xe3f237bd,"openfl.display.DisplayObjectContainer.__broadcast","openfl/display/DisplayObjectContainer.hx",630,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(notifyChilden,"notifyChilden")
	HX_STACK_LINE(632)
	if (((event->target == null()))){
		HX_STACK_LINE(634)
		event->target = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(638)
	bool result = this->super::__broadcast(event,notifyChilden);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(640)
	if (((bool(!(event->__isCancelled)) && bool(notifyChilden)))){
		HX_STACK_LINE(642)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(642)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(642)
		while((true)){
			HX_STACK_LINE(642)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(642)
				break;
			}
			HX_STACK_LINE(642)
			::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(642)
			++(_g);
			HX_STACK_LINE(644)
			child->__broadcast(event,true);
			HX_STACK_LINE(646)
			if ((event->__isCancelled)){
				HX_STACK_LINE(648)
				return true;
			}
		}
	}
	HX_STACK_LINE(656)
	return result;
}


Void DisplayObjectContainer_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",661,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(663)
		this->super::__getBounds(rect,matrix);
		HX_STACK_LINE(665)
		if (((this->__children->length == (int)0))){
			HX_STACK_LINE(665)
			return null();
		}
		HX_STACK_LINE(667)
		::openfl::geom::Matrix matrixCache = null();		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(669)
		if (((matrix != null()))){
			HX_STACK_LINE(671)
			matrixCache = this->__worldTransform;
			HX_STACK_LINE(672)
			this->__worldTransform = matrix;
			HX_STACK_LINE(673)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(677)
		{
			HX_STACK_LINE(677)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(677)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(677)
			while((true)){
				HX_STACK_LINE(677)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(677)
					break;
				}
				HX_STACK_LINE(677)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(677)
				++(_g);
				HX_STACK_LINE(679)
				if ((!(child->__renderable))){
					HX_STACK_LINE(679)
					continue;
				}
				HX_STACK_LINE(680)
				child->__getBounds(rect,child->__worldTransform);
			}
		}
		HX_STACK_LINE(684)
		if (((matrix != null()))){
			HX_STACK_LINE(686)
			this->__worldTransform = matrixCache;
			HX_STACK_LINE(687)
			this->__updateChildren(true);
		}
	}
return null();
}


bool DisplayObjectContainer_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",694,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(696)
	if (((  ((!((!(this->get_visible()))))) ? bool((bool(interactiveOnly) && bool(!(this->mouseEnabled)))) : bool(true) ))){
		HX_STACK_LINE(696)
		return false;
	}
	HX_STACK_LINE(698)
	int i = this->__children->length;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(700)
	if ((interactiveOnly)){
		HX_STACK_LINE(702)
		if (((bool((stack == null())) || bool(!(this->mouseChildren))))){
			HX_STACK_LINE(704)
			while((true)){
				HX_STACK_LINE(704)
				int _g = --(i);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(704)
				if ((!(((_g >= (int)0))))){
					HX_STACK_LINE(704)
					break;
				}
				HX_STACK_LINE(706)
				if ((this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__hitTest(x,y,shapeFlag,null(),true))){
					HX_STACK_LINE(708)
					if (((stack != null()))){
						HX_STACK_LINE(710)
						stack->push(hx::ObjectPtr<OBJ_>(this));
					}
					HX_STACK_LINE(714)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(720)
			if (((stack != null()))){
				HX_STACK_LINE(722)
				int length = stack->length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(724)
				bool interactive = false;		HX_STACK_VAR(interactive,"interactive");
				HX_STACK_LINE(725)
				bool hitTest = false;		HX_STACK_VAR(hitTest,"hitTest");
				HX_STACK_LINE(727)
				while((true)){
					HX_STACK_LINE(727)
					int _g1 = --(i);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(727)
					if ((!(((_g1 >= (int)0))))){
						HX_STACK_LINE(727)
						break;
					}
					HX_STACK_LINE(729)
					bool _g2 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__getInteractive(null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(729)
					interactive = _g2;
					HX_STACK_LINE(731)
					if (((bool(interactive) || bool(!(hitTest))))){
						HX_STACK_LINE(733)
						if ((this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__hitTest(x,y,shapeFlag,stack,true))){
							HX_STACK_LINE(735)
							hitTest = true;
							HX_STACK_LINE(737)
							if ((interactive)){
								HX_STACK_LINE(739)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(749)
				if ((hitTest)){
					HX_STACK_LINE(751)
					stack->insert(length,hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(752)
					return true;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(760)
		while((true)){
			HX_STACK_LINE(760)
			int _g3 = --(i);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(760)
			if ((!(((_g3 >= (int)0))))){
				HX_STACK_LINE(760)
				break;
			}
			HX_STACK_LINE(762)
			this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__hitTest(x,y,shapeFlag,stack,false);
		}
	}
	HX_STACK_LINE(769)
	return false;
}


Void DisplayObjectContainer_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairo",0x687e990e,"openfl.display.DisplayObjectContainer.__renderCairo","openfl/display/DisplayObjectContainer.hx",774,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(776)
		if (((bool(!(this->__renderable)) || bool((this->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(776)
			return null();
		}
		HX_STACK_LINE(778)
		this->super::__renderCairo(renderSession);
		HX_STACK_LINE(786)
		if (((this->__mask != null()))){
			HX_STACK_LINE(788)
			renderSession->maskManager->pushMask(this->__mask);
		}
		HX_STACK_LINE(792)
		{
			HX_STACK_LINE(792)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(792)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(792)
			while((true)){
				HX_STACK_LINE(792)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(792)
					break;
				}
				HX_STACK_LINE(792)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(792)
				++(_g);
				HX_STACK_LINE(794)
				child->__renderCairo(renderSession);
			}
		}
		HX_STACK_LINE(798)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(800)
		if (((this->__mask != null()))){
			HX_STACK_LINE(802)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairoMask",0x110aa51a,"openfl.display.DisplayObjectContainer.__renderCairoMask","openfl/display/DisplayObjectContainer.hx",815,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(817)
		if (((this->__graphics != null()))){
			HX_STACK_LINE(819)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(this->__graphics,renderSession);
		}
		HX_STACK_LINE(823)
		::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(824)
		{
			HX_STACK_LINE(824)
			this->__getTransform();
			HX_STACK_LINE(824)
			::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(824)
			this->__getBounds(bounds,_g);
		}
		HX_STACK_LINE(826)
		renderSession->cairo->rectangle((int)0,(int)0,bounds->width,bounds->height);
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvas",0x09986192,"openfl.display.DisplayObjectContainer.__renderCanvas","openfl/display/DisplayObjectContainer.hx",837,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(839)
		if (((bool(!(this->__renderable)) || bool((this->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(839)
			return null();
		}
		HX_STACK_LINE(843)
		this->super::__renderCanvas(renderSession);
		HX_STACK_LINE(845)
		::openfl::geom::Rectangle _g = this->get_scrollRect();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(845)
		if (((_g != null()))){
			HX_STACK_LINE(847)
			::openfl::geom::Rectangle _g1 = this->get_scrollRect();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(847)
			renderSession->maskManager->pushRect(_g1,this->__worldTransform);
		}
		HX_STACK_LINE(851)
		if (((this->__mask != null()))){
			HX_STACK_LINE(853)
			renderSession->maskManager->pushMask(this->__mask);
		}
		HX_STACK_LINE(857)
		{
			HX_STACK_LINE(857)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(857)
			Array< ::Dynamic > _g11 = this->__children;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(857)
			while((true)){
				HX_STACK_LINE(857)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(857)
					break;
				}
				HX_STACK_LINE(857)
				::openfl::display::DisplayObject child = _g11->__get(_g1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(857)
				++(_g1);
				HX_STACK_LINE(859)
				child->__renderCanvas(renderSession);
			}
		}
		HX_STACK_LINE(863)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(865)
		if (((this->__mask != null()))){
			HX_STACK_LINE(867)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(871)
		::openfl::geom::Rectangle _g2 = this->get_scrollRect();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(871)
		if (((_g2 != null()))){
			HX_STACK_LINE(873)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvasMask",0xd78cff9e,"openfl.display.DisplayObjectContainer.__renderCanvasMask","openfl/display/DisplayObjectContainer.hx",882,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(884)
		if (((this->__graphics != null()))){
			HX_STACK_LINE(886)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(this->__graphics,renderSession);
		}
		HX_STACK_LINE(890)
		::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(891)
		{
			HX_STACK_LINE(891)
			this->__getTransform();
			HX_STACK_LINE(891)
			::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(891)
			this->__getBounds(bounds,_g);
		}
		HX_STACK_LINE(893)
		renderSession->context->rect((int)0,(int)0,bounds->width,bounds->height);
	}
return null();
}


Void DisplayObjectContainer_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderDOM",0xd2304188,"openfl.display.DisplayObjectContainer.__renderDOM","openfl/display/DisplayObjectContainer.hx",904,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(910)
		this->super::__renderDOM(renderSession);
		HX_STACK_LINE(912)
		if (((this->__mask != null()))){
			HX_STACK_LINE(914)
			renderSession->maskManager->pushMask(this->__mask);
		}
		HX_STACK_LINE(920)
		{
			HX_STACK_LINE(920)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(920)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(920)
			while((true)){
				HX_STACK_LINE(920)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(920)
					break;
				}
				HX_STACK_LINE(920)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(920)
				++(_g);
				HX_STACK_LINE(922)
				child->__renderDOM(renderSession);
			}
		}
		HX_STACK_LINE(926)
		{
			HX_STACK_LINE(926)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(926)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(926)
			while((true)){
				HX_STACK_LINE(926)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(926)
					break;
				}
				HX_STACK_LINE(926)
				::openfl::display::DisplayObject orphan = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(926)
				++(_g);
				HX_STACK_LINE(928)
				if (((orphan->stage == null()))){
					HX_STACK_LINE(930)
					orphan->__renderDOM(renderSession);
				}
			}
		}
		HX_STACK_LINE(936)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(938)
		if (((this->__mask != null()))){
			HX_STACK_LINE(940)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderGL",0x3eef01bf,"openfl.display.DisplayObjectContainer.__renderGL","openfl/display/DisplayObjectContainer.hx",949,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(951)
		if (((bool(!(this->__renderable)) || bool((this->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(951)
			return null();
		}
		HX_STACK_LINE(953)
		bool masked = (bool((bool((this->__mask != null())) && bool((this->__maskGraphics != null())))) && bool((this->__maskGraphics->__commands->length > (int)0)));		HX_STACK_VAR(masked,"masked");
		HX_STACK_LINE(955)
		if ((masked)){
			HX_STACK_LINE(957)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(958)
			renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(959)
			renderSession->spriteBatch->start(null());
		}
		HX_STACK_LINE(963)
		this->super::__renderGL(renderSession);
		HX_STACK_LINE(965)
		{
			HX_STACK_LINE(965)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(965)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(965)
			while((true)){
				HX_STACK_LINE(965)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(965)
					break;
				}
				HX_STACK_LINE(965)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(965)
				++(_g);
				HX_STACK_LINE(967)
				child->__renderGL(renderSession);
			}
		}
		HX_STACK_LINE(971)
		if ((masked)){
			HX_STACK_LINE(973)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(975)
			renderSession->maskManager->popMask();
			HX_STACK_LINE(976)
			renderSession->spriteBatch->start(null());
		}
		HX_STACK_LINE(980)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
	}
return null();
}


Void DisplayObjectContainer_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",987,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(987)
		if (((this->stage != stage))){
			HX_STACK_LINE(989)
			if (((this->stage != null()))){
				HX_STACK_LINE(991)
				::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::REMOVED_FROM_STAGE,false,false);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(991)
				this->dispatchEvent(_g);
			}
			HX_STACK_LINE(995)
			this->stage = stage;
			HX_STACK_LINE(997)
			if (((stage != null()))){
				HX_STACK_LINE(999)
				::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::ADDED_TO_STAGE,false,false);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(999)
				this->dispatchEvent(_g1);
			}
			HX_STACK_LINE(1003)
			if (((this->__children != null()))){
				HX_STACK_LINE(1005)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1005)
				Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1005)
				while((true)){
					HX_STACK_LINE(1005)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(1005)
						break;
					}
					HX_STACK_LINE(1005)
					::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(1005)
					++(_g);
					HX_STACK_LINE(1007)
					child->__setStageReference(stage);
				}
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",1018,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1020)
		this->super::__update(transformOnly,updateChildren,maskGraphics);
		HX_STACK_LINE(1023)
		if (((bool(!(this->__renderable)) && bool(!(this->__isMask))))){
			HX_STACK_LINE(1025)
			return null();
		}
		HX_STACK_LINE(1031)
		if ((updateChildren)){
			HX_STACK_LINE(1033)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1033)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1033)
			while((true)){
				HX_STACK_LINE(1033)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1033)
					break;
				}
				HX_STACK_LINE(1033)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1033)
				++(_g);
				HX_STACK_LINE(1035)
				child->__update(transformOnly,true,maskGraphics);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__updateChildren",0x0e3ace2c,"openfl.display.DisplayObjectContainer.__updateChildren","openfl/display/DisplayObjectContainer.hx",1044,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(1046)
		this->super::__updateChildren(transformOnly);
		HX_STACK_LINE(1048)
		{
			HX_STACK_LINE(1048)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1048)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1048)
			while((true)){
				HX_STACK_LINE(1048)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1048)
					break;
				}
				HX_STACK_LINE(1048)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1048)
				++(_g);
				HX_STACK_LINE(1050)
				child->__update(transformOnly,true,null());
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",1066,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1066)
	return this->__children->length;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(__children,"__children");
	HX_MARK_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(__children,"__children");
	HX_VISIT_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp ? get_numChildren() : numChildren; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return tabChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return mouseChildren; }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return __removedChildren; }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { __removedChildren=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mouseChildren"));
	outFields->push(HX_CSTRING("numChildren"));
	outFields->push(HX_CSTRING("tabChildren"));
	outFields->push(HX_CSTRING("__children"));
	outFields->push(HX_CSTRING("__removedChildren"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_CSTRING("mouseChildren")},
	{hx::fsInt,(int)offsetof(DisplayObjectContainer_obj,numChildren),HX_CSTRING("numChildren")},
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,tabChildren),HX_CSTRING("tabChildren")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__children),HX_CSTRING("__children")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__removedChildren),HX_CSTRING("__removedChildren")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mouseChildren"),
	HX_CSTRING("numChildren"),
	HX_CSTRING("tabChildren"),
	HX_CSTRING("__children"),
	HX_CSTRING("__removedChildren"),
	HX_CSTRING("addChild"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("areInaccessibleObjectsUnderPoint"),
	HX_CSTRING("contains"),
	HX_CSTRING("getChildAt"),
	HX_CSTRING("getChildByName"),
	HX_CSTRING("getChildIndex"),
	HX_CSTRING("getObjectsUnderPoint"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("removeChildAt"),
	HX_CSTRING("removeChildren"),
	HX_CSTRING("setChildIndex"),
	HX_CSTRING("swapChildren"),
	HX_CSTRING("swapChildrenAt"),
	HX_CSTRING("__broadcast"),
	HX_CSTRING("__getBounds"),
	HX_CSTRING("__hitTest"),
	HX_CSTRING("__renderCairo"),
	HX_CSTRING("__renderCairoMask"),
	HX_CSTRING("__renderCanvas"),
	HX_CSTRING("__renderCanvasMask"),
	HX_CSTRING("__renderDOM"),
	HX_CSTRING("__renderGL"),
	HX_CSTRING("__setStageReference"),
	HX_CSTRING("__update"),
	HX_CSTRING("__updateChildren"),
	HX_CSTRING("get_numChildren"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.DisplayObjectContainer"), hx::TCanCast< DisplayObjectContainer_obj> ,sStaticFields,sMemberFields,
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

void DisplayObjectContainer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
