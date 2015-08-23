#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace app{

Void Application_obj::__construct()
{
HX_STACK_FRAME("lime.app.Application","new",0x9354427c,"lime.app.Application.new","lime/app/Application.hx",20,0x8bc55476)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	this->onUpdate = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(44)
	super::__construct();
	HX_STACK_LINE(46)
	if (((::lime::app::Application_obj::current == null()))){
		HX_STACK_LINE(48)
		::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(52)
	Array< ::lime::app::IModule > _g = Array_obj< ::lime::app::IModule >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	this->modules = _g;
	HX_STACK_LINE(53)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(53)
	this->renderers = _g1;
	HX_STACK_LINE(54)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(54)
	this->windows = _g2;
	HX_STACK_LINE(55)
	::lime::_backend::native::NativeApplication _g3 = ::lime::_backend::native::NativeApplication_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(55)
	this->backend = _g3;
	HX_STACK_LINE(57)
	this->onUpdate->add(this->update_dyn(),null(),null());
}
;
	return null();
}

//Application_obj::~Application_obj() { }

Dynamic Application_obj::__CreateEmpty() { return  new Application_obj; }
hx::ObjectPtr< Application_obj > Application_obj::__new()
{  hx::ObjectPtr< Application_obj > result = new Application_obj();
	result->__construct();
	return result;}

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Application_obj > result = new Application_obj();
	result->__construct();
	return result;}

Void Application_obj::addModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","addModule",0x673258c9,"lime.app.Application.addModule","lime/app/Application.hx",66,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(68)
		this->modules->push(module);
		HX_STACK_LINE(70)
		if (((bool(this->initialized) && bool((this->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >() != null()))))){
			HX_STACK_LINE(72)
			module->init(this->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->context);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addModule,(void))

Void Application_obj::addRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","addRenderer",0x0a61eaa0,"lime.app.Application.addRenderer","lime/app/Application.hx",84,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(86)
		renderer->onRender->add(this->render_dyn(),null(),null());
		HX_STACK_LINE(87)
		renderer->onRenderContextLost->add(this->onRenderContextLost_dyn(),null(),null());
		HX_STACK_LINE(88)
		renderer->onRenderContextRestored->add(this->onRenderContextRestored_dyn(),null(),null());
		HX_STACK_LINE(90)
		this->renderers->push(renderer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addRenderer,(void))

Void Application_obj::addWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","addWindow",0xf8ebb80d,"lime.app.Application.addWindow","lime/app/Application.hx",100,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(102)
		this->windows->push(window);
		HX_STACK_LINE(104)
		window->onGamepadAxisMove->add(this->onGamepadAxisMove_dyn(),null(),null());
		HX_STACK_LINE(105)
		window->onGamepadButtonDown->add(this->onGamepadButtonDown_dyn(),null(),null());
		HX_STACK_LINE(106)
		window->onGamepadButtonUp->add(this->onGamepadButtonUp_dyn(),null(),null());
		HX_STACK_LINE(107)
		window->onGamepadConnect->add(this->onGamepadConnect_dyn(),null(),null());
		HX_STACK_LINE(108)
		window->onGamepadDisconnect->add(this->onGamepadDisconnect_dyn(),null(),null());
		HX_STACK_LINE(109)
		window->onKeyDown->add(this->onKeyDown_dyn(),null(),null());
		HX_STACK_LINE(110)
		window->onKeyUp->add(this->onKeyUp_dyn(),null(),null());
		HX_STACK_LINE(111)
		window->onMouseDown->add(this->onMouseDown_dyn(),null(),null());
		HX_STACK_LINE(112)
		window->onMouseMove->add(this->onMouseMove_dyn(),null(),null());
		HX_STACK_LINE(113)
		window->onMouseMoveRelative->add(this->onMouseMoveRelative_dyn(),null(),null());
		HX_STACK_LINE(114)
		window->onMouseUp->add(this->onMouseUp_dyn(),null(),null());
		HX_STACK_LINE(115)
		window->onMouseWheel->add(this->onMouseWheel_dyn(),null(),null());
		HX_STACK_LINE(116)
		window->onTextEdit->add(this->onTextEdit_dyn(),null(),null());
		HX_STACK_LINE(117)
		window->onTextInput->add(this->onTextInput_dyn(),null(),null());
		HX_STACK_LINE(118)
		window->onTouchStart->add(this->onTouchStart_dyn(),null(),null());
		HX_STACK_LINE(119)
		window->onTouchMove->add(this->onTouchMove_dyn(),null(),null());
		HX_STACK_LINE(120)
		window->onTouchEnd->add(this->onTouchEnd_dyn(),null(),null());
		HX_STACK_LINE(121)
		window->onWindowActivate->add(this->onWindowActivate_dyn(),null(),null());
		HX_STACK_LINE(122)
		window->onWindowClose->add(this->onWindowClose_dyn(),null(),null());
		HX_STACK_LINE(123)
		window->onWindowDeactivate->add(this->onWindowDeactivate_dyn(),null(),null());
		HX_STACK_LINE(124)
		window->onWindowEnter->add(this->onWindowEnter_dyn(),null(),null());
		HX_STACK_LINE(125)
		window->onWindowFocusIn->add(this->onWindowFocusIn_dyn(),null(),null());
		HX_STACK_LINE(126)
		window->onWindowFocusOut->add(this->onWindowFocusOut_dyn(),null(),null());
		HX_STACK_LINE(127)
		window->onWindowFullscreen->add(this->onWindowFullscreen_dyn(),null(),null());
		HX_STACK_LINE(128)
		window->onWindowLeave->add(this->onWindowLeave_dyn(),null(),null());
		HX_STACK_LINE(129)
		window->onWindowMinimize->add(this->onWindowMinimize_dyn(),null(),null());
		HX_STACK_LINE(130)
		window->onWindowMove->add(this->onWindowMove_dyn(),null(),null());
		HX_STACK_LINE(131)
		window->onWindowResize->add(this->onWindowResize_dyn(),null(),null());
		HX_STACK_LINE(132)
		window->onWindowRestore->add(this->onWindowRestore_dyn(),null(),null());
		HX_STACK_LINE(134)
		window->create(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addWindow,(void))

Void Application_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime.app.Application","create",0x35e42e60,"lime.app.Application.create","lime/app/Application.hx",147,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(147)
		this->backend->create(config);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,create,(void))

int Application_obj::exec( ){
	HX_STACK_FRAME("lime.app.Application","exec",0x508159f5,"lime.app.Application.exec","lime/app/Application.hx",158,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(160)
	::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(162)
	return this->backend->exec();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,exec,return )

Void Application_obj::init( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","init",0x531ea174,"lime.app.Application.init","lime/app/Application.hx",167,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(169)
			Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(169)
			while((true)){
				HX_STACK_LINE(169)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(169)
					break;
				}
				HX_STACK_LINE(169)
				::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
				HX_STACK_LINE(169)
				++(_g);
				HX_STACK_LINE(171)
				module->init(context);
			}
		}
		HX_STACK_LINE(175)
		this->initialized = true;
	}
return null();
}


Void Application_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadAxisMove",0x507e62d0,"lime.app.Application.onGamepadAxisMove","lime/app/Application.hx",182,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(182)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(182)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(182)
		while((true)){
			HX_STACK_LINE(182)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(182)
				break;
			}
			HX_STACK_LINE(182)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(182)
			++(_g);
			HX_STACK_LINE(184)
			module->onGamepadAxisMove(gamepad,axis,value);
		}
	}
return null();
}


Void Application_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadButtonDown",0x00e65572,"lime.app.Application.onGamepadButtonDown","lime/app/Application.hx",193,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(193)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(193)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(193)
		while((true)){
			HX_STACK_LINE(193)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(193)
				break;
			}
			HX_STACK_LINE(193)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(193)
			++(_g);
			HX_STACK_LINE(195)
			module->onGamepadButtonDown(gamepad,button);
		}
	}
return null();
}


Void Application_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadButtonUp",0x1cbc5f6b,"lime.app.Application.onGamepadButtonUp","lime/app/Application.hx",204,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(204)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(204)
		while((true)){
			HX_STACK_LINE(204)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(204)
				break;
			}
			HX_STACK_LINE(204)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(204)
			++(_g);
			HX_STACK_LINE(206)
			module->onGamepadButtonUp(gamepad,button);
		}
	}
return null();
}


Void Application_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadConnect",0xf3ecc32c,"lime.app.Application.onGamepadConnect","lime/app/Application.hx",215,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(215)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(215)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(215)
		while((true)){
			HX_STACK_LINE(215)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(215)
				break;
			}
			HX_STACK_LINE(215)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(215)
			++(_g);
			HX_STACK_LINE(217)
			module->onGamepadConnect(gamepad);
		}
	}
return null();
}


Void Application_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadDisconnect",0xbdc6525a,"lime.app.Application.onGamepadDisconnect","lime/app/Application.hx",226,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(226)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(226)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(226)
		while((true)){
			HX_STACK_LINE(226)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(226)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(226)
			++(_g);
			HX_STACK_LINE(228)
			module->onGamepadDisconnect(gamepad);
		}
	}
return null();
}


Void Application_obj::onKeyDown( int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyDown",0x622d115e,"lime.app.Application.onKeyDown","lime/app/Application.hx",237,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(237)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(237)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(237)
		while((true)){
			HX_STACK_LINE(237)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(237)
				break;
			}
			HX_STACK_LINE(237)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(237)
			++(_g);
			HX_STACK_LINE(239)
			module->onKeyDown(keyCode,modifier);
		}
	}
return null();
}


Void Application_obj::onKeyUp( int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyUp",0x55960857,"lime.app.Application.onKeyUp","lime/app/Application.hx",248,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(248)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(248)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(248)
		while((true)){
			HX_STACK_LINE(248)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(248)
				break;
			}
			HX_STACK_LINE(248)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(248)
			++(_g);
			HX_STACK_LINE(250)
			module->onKeyUp(keyCode,modifier);
		}
	}
return null();
}


Void Application_obj::onMouseDown( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseDown",0x372f8224,"lime.app.Application.onMouseDown","lime/app/Application.hx",259,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(259)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(259)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(259)
		while((true)){
			HX_STACK_LINE(259)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(259)
				break;
			}
			HX_STACK_LINE(259)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(259)
			++(_g);
			HX_STACK_LINE(261)
			module->onMouseDown(x,y,button);
		}
	}
return null();
}


Void Application_obj::onMouseMove( Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onMouseMove",0x3d226cd3,"lime.app.Application.onMouseMove","lime/app/Application.hx",270,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(270)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(270)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(270)
		while((true)){
			HX_STACK_LINE(270)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(270)
				break;
			}
			HX_STACK_LINE(270)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(270)
			++(_g);
			HX_STACK_LINE(272)
			module->onMouseMove(x,y);
		}
	}
return null();
}


Void Application_obj::onMouseMoveRelative( Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onMouseMoveRelative",0xf3ee70bf,"lime.app.Application.onMouseMoveRelative","lime/app/Application.hx",281,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(281)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(281)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(281)
		while((true)){
			HX_STACK_LINE(281)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(281)
				break;
			}
			HX_STACK_LINE(281)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(281)
			++(_g);
			HX_STACK_LINE(283)
			module->onMouseMoveRelative(x,y);
		}
	}
return null();
}


Void Application_obj::onMouseUp( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseUp",0x86589b9d,"lime.app.Application.onMouseUp","lime/app/Application.hx",292,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(292)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(292)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(292)
		while((true)){
			HX_STACK_LINE(292)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(292)
				break;
			}
			HX_STACK_LINE(292)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(292)
			++(_g);
			HX_STACK_LINE(294)
			module->onMouseUp(x,y,button);
		}
	}
return null();
}


Void Application_obj::onMouseWheel( Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("lime.app.Application","onMouseWheel",0xfe513499,"lime.app.Application.onMouseWheel","lime/app/Application.hx",303,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(303)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(303)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(303)
		while((true)){
			HX_STACK_LINE(303)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(303)
				break;
			}
			HX_STACK_LINE(303)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(303)
			++(_g);
			HX_STACK_LINE(305)
			module->onMouseWheel(deltaX,deltaY);
		}
	}
return null();
}


Void Application_obj::onRenderContextLost( ){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextLost",0xfdd705ba,"lime.app.Application.onRenderContextLost","lime/app/Application.hx",314,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(314)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(314)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(314)
		while((true)){
			HX_STACK_LINE(314)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(314)
				break;
			}
			HX_STACK_LINE(314)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(314)
			++(_g);
			HX_STACK_LINE(316)
			module->onRenderContextLost();
		}
	}
return null();
}


Void Application_obj::onRenderContextRestored( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextRestored",0x4fd2fc2c,"lime.app.Application.onRenderContextRestored","lime/app/Application.hx",325,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(325)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(325)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(325)
		while((true)){
			HX_STACK_LINE(325)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(325)
				break;
			}
			HX_STACK_LINE(325)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(325)
			++(_g);
			HX_STACK_LINE(327)
			module->onRenderContextRestored(context);
		}
	}
return null();
}


Void Application_obj::onTextEdit( ::String text,int start,int length){
{
		HX_STACK_FRAME("lime.app.Application","onTextEdit",0xa9173afa,"lime.app.Application.onTextEdit","lime/app/Application.hx",336,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(336)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(336)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(336)
		while((true)){
			HX_STACK_LINE(336)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(336)
				break;
			}
			HX_STACK_LINE(336)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(336)
			++(_g);
			HX_STACK_LINE(338)
			module->onTextEdit(text,start,length);
		}
	}
return null();
}


Void Application_obj::onTextInput( ::String text){
{
		HX_STACK_FRAME("lime.app.Application","onTextInput",0x9f78251a,"lime.app.Application.onTextInput","lime/app/Application.hx",347,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(347)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(347)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(347)
		while((true)){
			HX_STACK_LINE(347)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(347)
				break;
			}
			HX_STACK_LINE(347)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(347)
			++(_g);
			HX_STACK_LINE(349)
			module->onTextInput(text);
		}
	}
return null();
}


Void Application_obj::onTouchEnd( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchEnd",0x6316e2ff,"lime.app.Application.onTouchEnd","lime/app/Application.hx",358,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(358)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(358)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(358)
		while((true)){
			HX_STACK_LINE(358)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(358)
				break;
			}
			HX_STACK_LINE(358)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(358)
			++(_g);
			HX_STACK_LINE(360)
			module->onTouchEnd(x,y,id);
		}
	}
return null();
}


Void Application_obj::onTouchMove( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchMove",0x563a436d,"lime.app.Application.onTouchMove","lime/app/Application.hx",369,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(369)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(369)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(369)
		while((true)){
			HX_STACK_LINE(369)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(369)
				break;
			}
			HX_STACK_LINE(369)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(369)
			++(_g);
			HX_STACK_LINE(371)
			module->onTouchMove(x,y,id);
		}
	}
return null();
}


Void Application_obj::onTouchStart( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchStart",0x94666486,"lime.app.Application.onTouchStart","lime/app/Application.hx",380,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(380)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(380)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(380)
		while((true)){
			HX_STACK_LINE(380)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(380)
				break;
			}
			HX_STACK_LINE(380)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(380)
			++(_g);
			HX_STACK_LINE(382)
			module->onTouchStart(x,y,id);
		}
	}
return null();
}


Void Application_obj::onWindowActivate( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowActivate",0xf2f355a6,"lime.app.Application.onWindowActivate","lime/app/Application.hx",391,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(391)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(391)
		while((true)){
			HX_STACK_LINE(391)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(391)
				break;
			}
			HX_STACK_LINE(391)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(391)
			++(_g);
			HX_STACK_LINE(393)
			module->onWindowActivate();
		}
	}
return null();
}


Void Application_obj::onWindowClose( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowClose",0x133677e5,"lime.app.Application.onWindowClose","lime/app/Application.hx",402,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(402)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(402)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(402)
		while((true)){
			HX_STACK_LINE(402)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(402)
				break;
			}
			HX_STACK_LINE(402)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(402)
			++(_g);
			HX_STACK_LINE(404)
			module->onWindowClose();
		}
	}
return null();
}


Void Application_obj::onWindowDeactivate( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowDeactivate",0x950138e7,"lime.app.Application.onWindowDeactivate","lime/app/Application.hx",413,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(413)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(413)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(413)
		while((true)){
			HX_STACK_LINE(413)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(413)
				break;
			}
			HX_STACK_LINE(413)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(413)
			++(_g);
			HX_STACK_LINE(415)
			module->onWindowDeactivate();
		}
	}
return null();
}


Void Application_obj::onWindowEnter( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowEnter",0x3b59cd45,"lime.app.Application.onWindowEnter","lime/app/Application.hx",424,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(424)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(424)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(424)
		while((true)){
			HX_STACK_LINE(424)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(424)
				break;
			}
			HX_STACK_LINE(424)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(424)
			++(_g);
			HX_STACK_LINE(426)
			module->onWindowEnter();
		}
	}
return null();
}


Void Application_obj::onWindowFocusIn( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusIn",0xf010cb4a,"lime.app.Application.onWindowFocusIn","lime/app/Application.hx",435,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(435)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(435)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(435)
		while((true)){
			HX_STACK_LINE(435)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(435)
				break;
			}
			HX_STACK_LINE(435)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(435)
			++(_g);
			HX_STACK_LINE(437)
			module->onWindowFocusIn();
		}
	}
return null();
}


Void Application_obj::onWindowFocusOut( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusOut",0x1ea5a989,"lime.app.Application.onWindowFocusOut","lime/app/Application.hx",446,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(446)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(446)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(446)
		while((true)){
			HX_STACK_LINE(446)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(446)
				break;
			}
			HX_STACK_LINE(446)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(446)
			++(_g);
			HX_STACK_LINE(448)
			module->onWindowFocusOut();
		}
	}
return null();
}


Void Application_obj::onWindowFullscreen( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFullscreen",0x52b416ee,"lime.app.Application.onWindowFullscreen","lime/app/Application.hx",457,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(457)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(457)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(457)
		while((true)){
			HX_STACK_LINE(457)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(457)
				break;
			}
			HX_STACK_LINE(457)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(457)
			++(_g);
			HX_STACK_LINE(459)
			module->onWindowFullscreen();
		}
	}
return null();
}


Void Application_obj::onWindowLeave( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowLeave",0x3d269524,"lime.app.Application.onWindowLeave","lime/app/Application.hx",468,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(468)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(468)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(468)
		while((true)){
			HX_STACK_LINE(468)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(468)
				break;
			}
			HX_STACK_LINE(468)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(468)
			++(_g);
			HX_STACK_LINE(470)
			module->onWindowLeave();
		}
	}
return null();
}


Void Application_obj::onWindowMinimize( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowMinimize",0x2ec07911,"lime.app.Application.onWindowMinimize","lime/app/Application.hx",479,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(479)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(479)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(479)
		while((true)){
			HX_STACK_LINE(479)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(479)
				break;
			}
			HX_STACK_LINE(479)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(479)
			++(_g);
			HX_STACK_LINE(481)
			module->onWindowMinimize();
		}
	}
return null();
}


Void Application_obj::onWindowMove( Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onWindowMove",0xea016784,"lime.app.Application.onWindowMove","lime/app/Application.hx",490,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(490)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(490)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(490)
		while((true)){
			HX_STACK_LINE(490)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(490)
				break;
			}
			HX_STACK_LINE(490)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(490)
			++(_g);
			HX_STACK_LINE(492)
			module->onWindowMove(x,y);
		}
	}
return null();
}


Void Application_obj::onWindowResize( int width,int height){
{
		HX_STACK_FRAME("lime.app.Application","onWindowResize",0xb69c2127,"lime.app.Application.onWindowResize","lime/app/Application.hx",501,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(501)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(501)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(501)
		while((true)){
			HX_STACK_LINE(501)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(501)
				break;
			}
			HX_STACK_LINE(501)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(501)
			++(_g);
			HX_STACK_LINE(503)
			module->onWindowResize(width,height);
		}
	}
return null();
}


Void Application_obj::onWindowRestore( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowRestore",0x193decbb,"lime.app.Application.onWindowRestore","lime/app/Application.hx",512,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(512)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(512)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(512)
		while((true)){
			HX_STACK_LINE(512)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(512)
				break;
			}
			HX_STACK_LINE(512)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(512)
			++(_g);
			HX_STACK_LINE(514)
			module->onWindowRestore();
		}
	}
return null();
}


Void Application_obj::removeModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","removeModule",0x6e873a74,"lime.app.Application.removeModule","lime/app/Application.hx",527,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(527)
		this->modules->remove(module);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeModule,(void))

Void Application_obj::removeRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","removeRenderer",0x39f2cd0b,"lime.app.Application.removeRenderer","lime/app/Application.hx",538,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::lime::app::Application_obj > __this,::lime::graphics::Renderer &renderer){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/app/Application.hx",538,0x8bc55476)
				{
					HX_STACK_LINE(538)
					int _g = __this->renderers->indexOf(renderer,null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(538)
					return (_g > (int)-1);
				}
				return null();
			}
		};
		HX_STACK_LINE(538)
		if (((  (((renderer != null()))) ? bool(_Function_1_1::Block(this,renderer)) : bool(false) ))){
			HX_STACK_LINE(540)
			this->renderers->remove(renderer);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeRenderer,(void))

Void Application_obj::removeWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","removeWindow",0x004099b8,"lime.app.Application.removeWindow","lime/app/Application.hx",553,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::lime::app::Application_obj > __this,::lime::ui::Window &window){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/app/Application.hx",553,0x8bc55476)
				{
					HX_STACK_LINE(553)
					int _g = __this->windows->indexOf(window,null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(553)
					return (_g > (int)-1);
				}
				return null();
			}
		};
		HX_STACK_LINE(553)
		if (((  (((window != null()))) ? bool(_Function_1_1::Block(this,window)) : bool(false) ))){
			HX_STACK_LINE(555)
			window->close();
			HX_STACK_LINE(556)
			this->windows->remove(window);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeWindow,(void))

Void Application_obj::render( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","render",0xbefe32ba,"lime.app.Application.render","lime/app/Application.hx",565,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(565)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(565)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(565)
		while((true)){
			HX_STACK_LINE(565)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(565)
				break;
			}
			HX_STACK_LINE(565)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(565)
			++(_g);
			HX_STACK_LINE(567)
			module->render(context);
		}
	}
return null();
}


Void Application_obj::update( int deltaTime){
{
		HX_STACK_FRAME("lime.app.Application","update",0x40da4d6d,"lime.app.Application.update","lime/app/Application.hx",576,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(576)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(576)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(576)
		while((true)){
			HX_STACK_LINE(576)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(576)
				break;
			}
			HX_STACK_LINE(576)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(576)
			++(_g);
			HX_STACK_LINE(578)
			module->update(deltaTime);
		}
	}
return null();
}


::lime::graphics::Renderer Application_obj::get_renderer( ){
	HX_STACK_FRAME("lime.app.Application","get_renderer",0xa67be3b0,"lime.app.Application.get_renderer","lime/app/Application.hx",594,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(594)
	return this->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_renderer,return )

::lime::ui::Window Application_obj::get_window( ){
	HX_STACK_FRAME("lime.app.Application","get_window",0xc86a4d1d,"lime.app.Application.get_window","lime/app/Application.hx",601,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(601)
	return this->windows->__get((int)0).StaticCast< ::lime::ui::Window >();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_window,return )

::lime::app::Application Application_obj::current;


Application_obj::Application_obj()
{
}

void Application_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Application);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(modules,"modules");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(renderers,"renderers");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(windows,"windows");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_END_CLASS();
}

void Application_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(modules,"modules");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(renderers,"renderers");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(windows,"windows");
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
}

Dynamic Application_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"window") ) { return inCallProp ? get_window() : window; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"modules") ) { return modules; }
		if (HX_FIELD_EQ(inName,"windows") ) { return windows; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return inCallProp ? get_renderer() : renderer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"renderers") ) { return renderers; }
		if (HX_FIELD_EQ(inName,"addModule") ) { return addModule_dyn(); }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"get_window") ) { return get_window_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"addRenderer") ) { return addRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		if (HX_FIELD_EQ(inName,"removeModule") ) { return removeModule_dyn(); }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderer") ) { return get_renderer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderer") ) { return removeRenderer_dyn(); }
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

Dynamic Application_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::lime::app::Application >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modules") ) { modules=inValue.Cast< Array< ::lime::app::IModule > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windows") ) { windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeApplication >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"renderers") ) { renderers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Application_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("config"));
	outFields->push(HX_CSTRING("modules"));
	outFields->push(HX_CSTRING("onUpdate"));
	outFields->push(HX_CSTRING("renderer"));
	outFields->push(HX_CSTRING("renderers"));
	outFields->push(HX_CSTRING("window"));
	outFields->push(HX_CSTRING("windows"));
	outFields->push(HX_CSTRING("backend"));
	outFields->push(HX_CSTRING("initialized"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("current"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Application_obj,config),HX_CSTRING("config")},
	{hx::fsObject /*Array< ::lime::app::IModule >*/ ,(int)offsetof(Application_obj,modules),HX_CSTRING("modules")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Application_obj,onUpdate),HX_CSTRING("onUpdate")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(Application_obj,renderer),HX_CSTRING("renderer")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,renderers),HX_CSTRING("renderers")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Application_obj,window),HX_CSTRING("window")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,windows),HX_CSTRING("windows")},
	{hx::fsObject /*::lime::_backend::native::NativeApplication*/ ,(int)offsetof(Application_obj,backend),HX_CSTRING("backend")},
	{hx::fsBool,(int)offsetof(Application_obj,initialized),HX_CSTRING("initialized")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("config"),
	HX_CSTRING("modules"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("renderer"),
	HX_CSTRING("renderers"),
	HX_CSTRING("window"),
	HX_CSTRING("windows"),
	HX_CSTRING("backend"),
	HX_CSTRING("initialized"),
	HX_CSTRING("addModule"),
	HX_CSTRING("addRenderer"),
	HX_CSTRING("addWindow"),
	HX_CSTRING("create"),
	HX_CSTRING("exec"),
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
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onTouchMove"),
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
	HX_CSTRING("removeModule"),
	HX_CSTRING("removeRenderer"),
	HX_CSTRING("removeWindow"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	HX_CSTRING("get_renderer"),
	HX_CSTRING("get_window"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Application_obj::current,"current");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Application_obj::current,"current");
};

#endif

Class Application_obj::__mClass;

void Application_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.app.Application"), hx::TCanCast< Application_obj> ,sStaticFields,sMemberFields,
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

void Application_obj::__boot()
{
}

} // end namespace lime
} // end namespace app
