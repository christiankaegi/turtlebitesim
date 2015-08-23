#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_HybridStage
#include <openfl/_legacy/display/HybridStage.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_ManagedStage
#include <openfl/_legacy/display/ManagedStage.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_Keyboard
#include <openfl/ui/Keyboard.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void HybridStage_obj::__construct(int width,int height,Dynamic color)
{
HX_STACK_FRAME("openfl._legacy.display.HybridStage","new",0x07c3ec24,"openfl._legacy.display.HybridStage.new","openfl/_legacy/display/HybridStage.hx",23,0x74913e0f)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(color,"color")
{
	HX_STACK_LINE(25)
	::openfl::_legacy::Lib_obj::__stage = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(26)
	::openfl::_legacy::Lib_obj::initWidth = width;
	HX_STACK_LINE(27)
	::openfl::_legacy::Lib_obj::initHeight = height;
	HX_STACK_LINE(29)
	int flags = (int)128;		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(31)
	super::__construct(width,height,flags);
	HX_STACK_LINE(33)
	this->set_frameRate((int)60);
	HX_STACK_LINE(35)
	if (((color != null()))){
		HX_STACK_LINE(37)
		this->set_color(color);
	}
	HX_STACK_LINE(41)
	this->onWindowResize(width,height);
}
;
	return null();
}

//HybridStage_obj::~HybridStage_obj() { }

Dynamic HybridStage_obj::__CreateEmpty() { return  new HybridStage_obj; }
hx::ObjectPtr< HybridStage_obj > HybridStage_obj::__new(int width,int height,Dynamic color)
{  hx::ObjectPtr< HybridStage_obj > result = new HybridStage_obj();
	result->__construct(width,height,color);
	return result;}

Dynamic HybridStage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HybridStage_obj > result = new HybridStage_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *HybridStage_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::app::IModule_obj)) return operator ::lime::app::IModule_obj *();
	return super::__ToInterface(inType);
}

Void HybridStage_obj::init( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","init",0xc0636acc,"openfl._legacy.display.HybridStage.init","openfl/_legacy/display/HybridStage.hx",46,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HybridStage_obj,init,(void))

Void HybridStage_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onGamepadAxisMove",0xeac4a278,"openfl._legacy.display.HybridStage.onGamepadAxisMove","openfl/_legacy/display/HybridStage.hx",55,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		struct _Function_1_1{
			inline static Dynamic Block( int &axis,Float &value,::lime::ui::Gamepad &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",55,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)24,false);
					__result->Add(HX_CSTRING("id") , gamepad->id,false);
					__result->Add(HX_CSTRING("code") , axis,false);
					__result->Add(HX_CSTRING("value") , value,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(55)
		this->pumpEvent(_Function_1_1::Block(axis,value,gamepad));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(HybridStage_obj,onGamepadAxisMove,(void))

Void HybridStage_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onGamepadButtonDown",0x68f9cf1a,"openfl._legacy.display.HybridStage.onGamepadButtonDown","openfl/_legacy/display/HybridStage.hx",62,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		struct _Function_1_1{
			inline static Dynamic Block( int &button,::lime::ui::Gamepad &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",62,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)27,false);
					__result->Add(HX_CSTRING("id") , gamepad->id,false);
					__result->Add(HX_CSTRING("code") , button,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(62)
		this->pumpEvent(_Function_1_1::Block(button,gamepad));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HybridStage_obj,onGamepadButtonDown,(void))

Void HybridStage_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onGamepadButtonUp",0xb7029f13,"openfl._legacy.display.HybridStage.onGamepadButtonUp","openfl/_legacy/display/HybridStage.hx",69,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		struct _Function_1_1{
			inline static Dynamic Block( int &button,::lime::ui::Gamepad &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",69,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)28,false);
					__result->Add(HX_CSTRING("id") , gamepad->id,false);
					__result->Add(HX_CSTRING("code") , button,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(69)
		this->pumpEvent(_Function_1_1::Block(button,gamepad));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HybridStage_obj,onGamepadButtonUp,(void))

Void HybridStage_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onGamepadConnect",0x53e63084,"openfl._legacy.display.HybridStage.onGamepadConnect","openfl/_legacy/display/HybridStage.hx",74,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HybridStage_obj,onGamepadConnect,(void))

Void HybridStage_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onGamepadDisconnect",0x25d9cc02,"openfl._legacy.display.HybridStage.onGamepadDisconnect","openfl/_legacy/display/HybridStage.hx",81,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HybridStage_obj,onGamepadDisconnect,(void))

Void HybridStage_obj::onKeyDown( int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onKeyDown",0x49576906,"openfl._legacy.display.HybridStage.onKeyDown","openfl/_legacy/display/HybridStage.hx",88,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(90)
		int flags = (int)0;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(91)
		if ((::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))){
			HX_STACK_LINE(91)
			hx::OrEq(flags,(int)2);
		}
		HX_STACK_LINE(92)
		if ((::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier))){
			HX_STACK_LINE(92)
			hx::OrEq(flags,(int)4);
		}
		HX_STACK_LINE(93)
		if ((::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier))){
			HX_STACK_LINE(93)
			hx::OrEq(flags,(int)8);
		}
		HX_STACK_LINE(94)
		if ((::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier))){
			HX_STACK_LINE(94)
			hx::OrEq(flags,(int)16);
		}
		HX_STACK_LINE(96)
		int value = ::openfl::ui::Keyboard_obj::convertKeyCode(keyCode);		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(97)
		bool _g = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		int code = ::openfl::ui::Keyboard_obj::__getCharCode(value,_g);		HX_STACK_VAR(code,"code");
		struct _Function_1_1{
			inline static Dynamic Block( int &value,int &code,int &flags){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",99,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)1,false);
					__result->Add(HX_CSTRING("value") , value,false);
					__result->Add(HX_CSTRING("code") , code,false);
					__result->Add(HX_CSTRING("flags") , flags,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(99)
		this->pumpEvent(_Function_1_1::Block(value,code,flags));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HybridStage_obj,onKeyDown,(void))

Void HybridStage_obj::onKeyUp( int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onKeyUp",0xa0dfa5ff,"openfl._legacy.display.HybridStage.onKeyUp","openfl/_legacy/display/HybridStage.hx",104,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(106)
		int flags = (int)0;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(107)
		if ((::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))){
			HX_STACK_LINE(107)
			hx::OrEq(flags,(int)2);
		}
		HX_STACK_LINE(108)
		if ((::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier))){
			HX_STACK_LINE(108)
			hx::OrEq(flags,(int)4);
		}
		HX_STACK_LINE(109)
		if ((::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier))){
			HX_STACK_LINE(109)
			hx::OrEq(flags,(int)8);
		}
		HX_STACK_LINE(110)
		if ((::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier))){
			HX_STACK_LINE(110)
			hx::OrEq(flags,(int)16);
		}
		HX_STACK_LINE(112)
		int value = ::openfl::ui::Keyboard_obj::convertKeyCode(keyCode);		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(113)
		bool _g = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		int code = ::openfl::ui::Keyboard_obj::__getCharCode(value,_g);		HX_STACK_VAR(code,"code");
		struct _Function_1_1{
			inline static Dynamic Block( int &value,int &code,int &flags){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",115,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)3,false);
					__result->Add(HX_CSTRING("value") , value,false);
					__result->Add(HX_CSTRING("code") , code,false);
					__result->Add(HX_CSTRING("flags") , flags,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(115)
		this->pumpEvent(_Function_1_1::Block(value,code,flags));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HybridStage_obj,onKeyUp,(void))

Void HybridStage_obj::onMouseDown( Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onMouseDown",0xff5d13cc,"openfl._legacy.display.HybridStage.onMouseDown","openfl/_legacy/display/HybridStage.hx",120,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(122)
		int flags;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(122)
		switch( (int)(button)){
			case (int)1: {
				HX_STACK_LINE(124)
				flags = (int)32;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(125)
				flags = (int)64;
			}
			;break;
			default: {
				HX_STACK_LINE(126)
				flags = (int)1;
			}
		}
		HX_STACK_LINE(130)
		hx::OrEq(flags,(int)32768);
		struct _Function_1_1{
			inline static Dynamic Block( int &button,Float &x,Float &y,int &flags){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",132,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)5,false);
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					__result->Add(HX_CSTRING("value") , button,false);
					__result->Add(HX_CSTRING("flags") , flags,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(132)
		this->pumpEvent(_Function_1_1::Block(button,x,y,flags));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(HybridStage_obj,onMouseDown,(void))

Void HybridStage_obj::onMouseMove( Float x,Float y){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onMouseMove",0x054ffe7b,"openfl._legacy.display.HybridStage.onMouseMove","openfl/_legacy/display/HybridStage.hx",137,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(139)
		int flags = (int)32768;		HX_STACK_VAR(flags,"flags");
		struct _Function_1_1{
			inline static Dynamic Block( Float &x,Float &y,int &flags){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",141,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)4,false);
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					__result->Add(HX_CSTRING("value") , (int)0,false);
					__result->Add(HX_CSTRING("flags") , flags,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(141)
		this->pumpEvent(_Function_1_1::Block(x,y,flags));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HybridStage_obj,onMouseMove,(void))

Void HybridStage_obj::onMouseMoveRelative( Float x,Float y){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onMouseMoveRelative",0x5c01ea67,"openfl._legacy.display.HybridStage.onMouseMoveRelative","openfl/_legacy/display/HybridStage.hx",146,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HybridStage_obj,onMouseMoveRelative,(void))

Void HybridStage_obj::onMouseUp( Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onMouseUp",0x6d82f345,"openfl._legacy.display.HybridStage.onMouseUp","openfl/_legacy/display/HybridStage.hx",153,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(155)
		int flags;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(155)
		switch( (int)(button)){
			case (int)1: {
				HX_STACK_LINE(157)
				flags = (int)32;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(158)
				flags = (int)64;
			}
			;break;
			default: {
				HX_STACK_LINE(159)
				flags = (int)1;
			}
		}
		HX_STACK_LINE(163)
		hx::OrEq(flags,(int)32768);
		struct _Function_1_1{
			inline static Dynamic Block( int &button,Float &x,Float &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",165,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)7,false);
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					__result->Add(HX_CSTRING("value") , button,false);
					__result->Add(HX_CSTRING("flags") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(165)
		this->pumpEvent(_Function_1_1::Block(button,x,y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(HybridStage_obj,onMouseUp,(void))

Void HybridStage_obj::onMouseWheel( Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onMouseWheel",0x5e0315f1,"openfl._legacy.display.HybridStage.onMouseWheel","openfl/_legacy/display/HybridStage.hx",170,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(172)
		int value;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(172)
		if (((deltaY > (int)0))){
			HX_STACK_LINE(172)
			value = (int)4;
		}
		else{
			HX_STACK_LINE(172)
			value = (int)3;
		}
		struct _Function_1_1{
			inline static Dynamic Block( int &value){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",174,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)5,false);
					__result->Add(HX_CSTRING("x") , (int)0,false);
					__result->Add(HX_CSTRING("y") , (int)0,false);
					__result->Add(HX_CSTRING("value") , value,false);
					__result->Add(HX_CSTRING("flags") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(174)
		this->pumpEvent(_Function_1_1::Block(value));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HybridStage_obj,onMouseWheel,(void))

Void HybridStage_obj::onRenderContextLost( ){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onRenderContextLost",0x65ea7f62,"openfl._legacy.display.HybridStage.onRenderContextLost","openfl/_legacy/display/HybridStage.hx",181,0x74913e0f)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",181,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)32,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(181)
		this->pumpEvent(_Function_1_1::Block());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HybridStage_obj,onRenderContextLost,(void))

Void HybridStage_obj::onRenderContextRestored( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onRenderContextRestored",0xf4e869d4,"openfl._legacy.display.HybridStage.onRenderContextRestored","openfl/_legacy/display/HybridStage.hx",188,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",188,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)33,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(188)
		this->pumpEvent(_Function_1_1::Block());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HybridStage_obj,onRenderContextRestored,(void))

Void HybridStage_obj::onTextEdit( ::String text,int start,int length){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onTextEdit",0x06f99652,"openfl._legacy.display.HybridStage.onTextEdit","openfl/_legacy/display/HybridStage.hx",193,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(HybridStage_obj,onTextEdit,(void))

Void HybridStage_obj::onTextInput( ::String text){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onTextInput",0x67a5b6c2,"openfl._legacy.display.HybridStage.onTextInput","openfl/_legacy/display/HybridStage.hx",200,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HybridStage_obj,onTextInput,(void))

Void HybridStage_obj::onTouchMove( Float x,Float y,int id){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onTouchMove",0x1e67d515,"openfl._legacy.display.HybridStage.onTouchMove","openfl/_legacy/display/HybridStage.hx",207,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(209)
		int flags = (int)32768;		HX_STACK_VAR(flags,"flags");
		struct _Function_1_1{
			inline static Dynamic Block( Float &x,Float &y,int &id,int &flags){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",211,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)16,false);
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					__result->Add(HX_CSTRING("value") , id,false);
					__result->Add(HX_CSTRING("flags") , flags,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(211)
		this->pumpEvent(_Function_1_1::Block(x,y,id,flags));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(HybridStage_obj,onTouchMove,(void))

Void HybridStage_obj::onTouchEnd( Float x,Float y,int id){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onTouchEnd",0xc0f93e57,"openfl._legacy.display.HybridStage.onTouchEnd","openfl/_legacy/display/HybridStage.hx",216,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(218)
		int flags = (int)32768;		HX_STACK_VAR(flags,"flags");
		struct _Function_1_1{
			inline static Dynamic Block( Float &x,Float &y,int &id,int &flags){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",220,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)17,false);
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					__result->Add(HX_CSTRING("value") , id,false);
					__result->Add(HX_CSTRING("flags") , flags,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(220)
		this->pumpEvent(_Function_1_1::Block(x,y,id,flags));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(HybridStage_obj,onTouchEnd,(void))

Void HybridStage_obj::onTouchStart( Float x,Float y,int id){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onTouchStart",0xf41845de,"openfl._legacy.display.HybridStage.onTouchStart","openfl/_legacy/display/HybridStage.hx",225,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(227)
		int flags = (int)32768;		HX_STACK_VAR(flags,"flags");
		struct _Function_1_1{
			inline static Dynamic Block( Float &x,Float &y,int &id,int &flags){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",229,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)15,false);
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					__result->Add(HX_CSTRING("value") , id,false);
					__result->Add(HX_CSTRING("flags") , flags,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(229)
		this->pumpEvent(_Function_1_1::Block(x,y,id,flags));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(HybridStage_obj,onTouchStart,(void))

Void HybridStage_obj::onWindowActivate( ){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onWindowActivate",0x52ecc2fe,"openfl._legacy.display.HybridStage.onWindowActivate","openfl/_legacy/display/HybridStage.hx",236,0x74913e0f)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",236,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)20,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(236)
		this->pumpEvent(_Function_1_1::Block());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HybridStage_obj,onWindowActivate,(void))

Void HybridStage_obj::onWindowClose( ){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onWindowClose",0x6f29c38d,"openfl._legacy.display.HybridStage.onWindowClose","openfl/_legacy/display/HybridStage.hx",243,0x74913e0f)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",243,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)10,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(243)
		this->pumpEvent(_Function_1_1::Block());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HybridStage_obj,onWindowClose,(void))

Void HybridStage_obj::onWindowDeactivate( ){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onWindowDeactivate",0xf832ac3f,"openfl._legacy.display.HybridStage.onWindowDeactivate","openfl/_legacy/display/HybridStage.hx",250,0x74913e0f)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",250,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)21,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(250)
		this->pumpEvent(_Function_1_1::Block());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HybridStage_obj,onWindowDeactivate,(void))

Void HybridStage_obj::onWindowEnter( ){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onWindowEnter",0x974d18ed,"openfl._legacy.display.HybridStage.onWindowEnter","openfl/_legacy/display/HybridStage.hx",255,0x74913e0f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HybridStage_obj,onWindowEnter,(void))

Void HybridStage_obj::onWindowFocusIn( ){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onWindowFocusIn",0xa82c50f2,"openfl._legacy.display.HybridStage.onWindowFocusIn","openfl/_legacy/display/HybridStage.hx",264,0x74913e0f)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",264,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)22,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(264)
		this->pumpEvent(_Function_1_1::Block());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HybridStage_obj,onWindowFocusIn,(void))

Void HybridStage_obj::onWindowFocusOut( ){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onWindowFocusOut",0x7e9f16e1,"openfl._legacy.display.HybridStage.onWindowFocusOut","openfl/_legacy/display/HybridStage.hx",271,0x74913e0f)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",271,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)23,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(271)
		this->pumpEvent(_Function_1_1::Block());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HybridStage_obj,onWindowFocusOut,(void))

Void HybridStage_obj::onWindowFullscreen( ){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onWindowFullscreen",0xb5e58a46,"openfl._legacy.display.HybridStage.onWindowFullscreen","openfl/_legacy/display/HybridStage.hx",276,0x74913e0f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HybridStage_obj,onWindowFullscreen,(void))

Void HybridStage_obj::onWindowLeave( ){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onWindowLeave",0x9919e0cc,"openfl._legacy.display.HybridStage.onWindowLeave","openfl/_legacy/display/HybridStage.hx",283,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(285)
		::openfl::_legacy::events::Event _g = ::openfl::_legacy::events::Event_obj::__new(::openfl::_legacy::events::Event_obj::MOUSE_LEAVE,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(285)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HybridStage_obj,onWindowLeave,(void))

Void HybridStage_obj::onWindowMinimize( ){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onWindowMinimize",0x8eb9e669,"openfl._legacy.display.HybridStage.onWindowMinimize","openfl/_legacy/display/HybridStage.hx",290,0x74913e0f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HybridStage_obj,onWindowMinimize,(void))

Void HybridStage_obj::onWindowMove( Float x,Float y){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onWindowMove",0x49b348dc,"openfl._legacy.display.HybridStage.onWindowMove","openfl/_legacy/display/HybridStage.hx",297,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HybridStage_obj,onWindowMove,(void))

Void HybridStage_obj::onWindowResize( int width,int height){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onWindowResize",0xcf8b087f,"openfl._legacy.display.HybridStage.onWindowResize","openfl/_legacy/display/HybridStage.hx",306,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		struct _Function_1_1{
			inline static Dynamic Block( int &width,int &height){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",306,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					__result->Add(HX_CSTRING("x") , width,false);
					__result->Add(HX_CSTRING("y") , height,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(306)
		this->pumpEvent(_Function_1_1::Block(width,height));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HybridStage_obj,onWindowResize,(void))

Void HybridStage_obj::onWindowRestore( ){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","onWindowRestore",0xd1597263,"openfl._legacy.display.HybridStage.onWindowRestore","openfl/_legacy/display/HybridStage.hx",311,0x74913e0f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HybridStage_obj,onWindowRestore,(void))

Void HybridStage_obj::render( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","render",0x9e0a0212,"openfl._legacy.display.HybridStage.render","openfl/_legacy/display/HybridStage.hx",320,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",320,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)9,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(320)
		this->pumpEvent(_Function_1_1::Block());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HybridStage_obj,render,(void))

Void HybridStage_obj::update( int deltaTime){
{
		HX_STACK_FRAME("openfl._legacy.display.HybridStage","update",0x1fe61cc5,"openfl._legacy.display.HybridStage.update","openfl/_legacy/display/HybridStage.hx",327,0x74913e0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/HybridStage.hx",327,0x74913e0f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)9,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(327)
		this->pumpEvent(_Function_1_1::Block());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HybridStage_obj,update,(void))


HybridStage_obj::HybridStage_obj()
{
}

Dynamic HybridStage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return onGamepadAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return onGamepadButtonUp_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return onWindowFullscreen_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HybridStage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HybridStage_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("onGamepadAxisMove"),
	HX_CSTRING("onGamepadButtonDown"),
	HX_CSTRING("onGamepadButtonUp"),
	HX_CSTRING("onGamepadConnect"),
	HX_CSTRING("onGamepadDisconnect"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("onMouseMoveRelative"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onRenderContextLost"),
	HX_CSTRING("onRenderContextRestored"),
	HX_CSTRING("onTextEdit"),
	HX_CSTRING("onTextInput"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onTouchStart"),
	HX_CSTRING("onWindowActivate"),
	HX_CSTRING("onWindowClose"),
	HX_CSTRING("onWindowDeactivate"),
	HX_CSTRING("onWindowEnter"),
	HX_CSTRING("onWindowFocusIn"),
	HX_CSTRING("onWindowFocusOut"),
	HX_CSTRING("onWindowFullscreen"),
	HX_CSTRING("onWindowLeave"),
	HX_CSTRING("onWindowMinimize"),
	HX_CSTRING("onWindowMove"),
	HX_CSTRING("onWindowResize"),
	HX_CSTRING("onWindowRestore"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HybridStage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HybridStage_obj::__mClass,"__mClass");
};

#endif

Class HybridStage_obj::__mClass;

void HybridStage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.display.HybridStage"), hx::TCanCast< HybridStage_obj> ,sStaticFields,sMemberFields,
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

void HybridStage_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
