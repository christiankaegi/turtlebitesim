#ifndef INCLUDED_openfl__legacy_display_HybridStage
#define INCLUDED_openfl__legacy_display_HybridStage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/ManagedStage.h>
#include <lime/app/IModule.h>
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,HybridStage)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,ManagedStage)
HX_DECLARE_CLASS3(openfl,_legacy,display,Stage)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  HybridStage_obj : public ::openfl::_legacy::display::ManagedStage_obj{
	public:
		typedef ::openfl::_legacy::display::ManagedStage_obj super;
		typedef HybridStage_obj OBJ_;
		HybridStage_obj();
		Void __construct(int width,int height,Dynamic color);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HybridStage_obj > __new(int width,int height,Dynamic color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HybridStage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::lime::app::IModule_obj *()
			{ return new ::lime::app::IModule_delegate_< HybridStage_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("HybridStage"); }

		virtual Void init( ::lime::graphics::RenderContext context);
		Dynamic init_dyn();

		virtual Void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value);
		Dynamic onGamepadAxisMove_dyn();

		virtual Void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button);
		Dynamic onGamepadButtonDown_dyn();

		virtual Void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button);
		Dynamic onGamepadButtonUp_dyn();

		virtual Void onGamepadConnect( ::lime::ui::Gamepad gamepad);
		Dynamic onGamepadConnect_dyn();

		virtual Void onGamepadDisconnect( ::lime::ui::Gamepad gamepad);
		Dynamic onGamepadDisconnect_dyn();

		virtual Void onKeyDown( int keyCode,int modifier);
		Dynamic onKeyDown_dyn();

		virtual Void onKeyUp( int keyCode,int modifier);
		Dynamic onKeyUp_dyn();

		virtual Void onMouseDown( Float x,Float y,int button);
		Dynamic onMouseDown_dyn();

		virtual Void onMouseMove( Float x,Float y);
		Dynamic onMouseMove_dyn();

		virtual Void onMouseMoveRelative( Float x,Float y);
		Dynamic onMouseMoveRelative_dyn();

		virtual Void onMouseUp( Float x,Float y,int button);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseWheel( Float deltaX,Float deltaY);
		Dynamic onMouseWheel_dyn();

		virtual Void onRenderContextLost( );
		Dynamic onRenderContextLost_dyn();

		virtual Void onRenderContextRestored( ::lime::graphics::RenderContext context);
		Dynamic onRenderContextRestored_dyn();

		virtual Void onTextEdit( ::String text,int start,int length);
		Dynamic onTextEdit_dyn();

		virtual Void onTextInput( ::String text);
		Dynamic onTextInput_dyn();

		virtual Void onTouchMove( Float x,Float y,int id);
		Dynamic onTouchMove_dyn();

		virtual Void onTouchEnd( Float x,Float y,int id);
		Dynamic onTouchEnd_dyn();

		virtual Void onTouchStart( Float x,Float y,int id);
		Dynamic onTouchStart_dyn();

		virtual Void onWindowActivate( );
		Dynamic onWindowActivate_dyn();

		virtual Void onWindowClose( );
		Dynamic onWindowClose_dyn();

		virtual Void onWindowDeactivate( );
		Dynamic onWindowDeactivate_dyn();

		virtual Void onWindowEnter( );
		Dynamic onWindowEnter_dyn();

		virtual Void onWindowFocusIn( );
		Dynamic onWindowFocusIn_dyn();

		virtual Void onWindowFocusOut( );
		Dynamic onWindowFocusOut_dyn();

		virtual Void onWindowFullscreen( );
		Dynamic onWindowFullscreen_dyn();

		virtual Void onWindowLeave( );
		Dynamic onWindowLeave_dyn();

		virtual Void onWindowMinimize( );
		Dynamic onWindowMinimize_dyn();

		virtual Void onWindowMove( Float x,Float y);
		Dynamic onWindowMove_dyn();

		virtual Void onWindowResize( int width,int height);
		Dynamic onWindowResize_dyn();

		virtual Void onWindowRestore( );
		Dynamic onWindowRestore_dyn();

		virtual Void render( ::lime::graphics::RenderContext context);
		Dynamic render_dyn();

		virtual Void update( int deltaTime);
		Dynamic update_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_HybridStage */ 
