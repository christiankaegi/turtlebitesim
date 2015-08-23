#ifndef INCLUDED_model_proxy_AppProxy
#define INCLUDED_model_proxy_AppProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
HX_DECLARE_CLASS0(App)
HX_DECLARE_CLASS2(model,data,AppData)
HX_DECLARE_CLASS2(model,proxy,AppProxy)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IProxy)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Notifier)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,proxy,Proxy)
namespace model{
namespace proxy{


class HXCPP_CLASS_ATTRIBUTES  AppProxy_obj : public ::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj super;
		typedef AppProxy_obj OBJ_;
		AppProxy_obj();
		Void __construct(::model::data::AppData data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AppProxy_obj > __new(::model::data::AppData data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AppProxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AppProxy"); }

		virtual Void onRegister( );

		virtual ::App getApp( );
		Dynamic getApp_dyn();

		virtual Void setStarted( bool value);
		Dynamic setStarted_dyn();

		virtual bool getStarted( );
		Dynamic getStarted_dyn();

		virtual bool getIsZoomed( );
		Dynamic getIsZoomed_dyn();

		virtual Void setIsZoomed( bool value);
		Dynamic setIsZoomed_dyn();

		virtual bool getHertzSubmenuOn( );
		Dynamic getHertzSubmenuOn_dyn();

		virtual Void setHertzSubmenuOn( bool on);
		Dynamic setHertzSubmenuOn_dyn();

		virtual bool getComponentsSubmenuOn( );
		Dynamic getComponentsSubmenuOn_dyn();

		virtual Void setComponentsSubmenuOn( bool on);
		Dynamic setComponentsSubmenuOn_dyn();

		virtual bool getShowUnitsOn( );
		Dynamic getShowUnitsOn_dyn();

		virtual Void setShowUnitsOn( bool on);
		Dynamic setShowUnitsOn_dyn();

		virtual bool getShowFlowOn( );
		Dynamic getShowFlowOn_dyn();

		virtual Void setShowFlowOn( bool on);
		Dynamic setShowFlowOn_dyn();

		virtual bool getPowerOn( );
		Dynamic getPowerOn_dyn();

		virtual Void setPowerOn( bool on);
		Dynamic setPowerOn_dyn();

		virtual bool getAutoClockOn( );
		Dynamic getAutoClockOn_dyn();

		virtual Void setAutoClockOn( bool on);
		Dynamic setAutoClockOn_dyn();

		virtual bool getShowHighlightOn( );
		Dynamic getShowHighlightOn_dyn();

		virtual Void setShowHightlightOn( bool on);
		Dynamic setShowHightlightOn_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual bool getDetailPopupActive( );
		Dynamic getDetailPopupActive_dyn();

		virtual Void setDetailPopupActive( bool on);
		Dynamic setDetailPopupActive_dyn();

		virtual Void setCharCodeActive( bool on);
		Dynamic setCharCodeActive_dyn();

		virtual bool getCharCodeActive( );
		Dynamic getCharCodeActive_dyn();

		virtual Void setEnterInstructionActive( bool on);
		Dynamic setEnterInstructionActive_dyn();

		virtual bool getEnterInstructionActive( );
		Dynamic getEnterInstructionActive_dyn();

		virtual Void setEnterInstructionOutputValid( bool on);
		Dynamic setEnterInstructionOutputValid_dyn();

		virtual bool getEnterInstructionOutputValid( );
		Dynamic getEnterInstructionOutputValid_dyn();

		virtual Dynamic getData( );

		static ::String NAME;
};

} // end namespace model
} // end namespace proxy

#endif /* INCLUDED_model_proxy_AppProxy */ 
