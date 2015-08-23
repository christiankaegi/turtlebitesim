#ifndef INCLUDED_model_proxy_ClockProxy
#define INCLUDED_model_proxy_ClockProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
HX_DECLARE_CLASS2(model,data,ClockData)
HX_DECLARE_CLASS2(model,proxy,AppProxy)
HX_DECLARE_CLASS2(model,proxy,ClockProxy)
HX_DECLARE_CLASS2(model,vo,FrequencyVO)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,utils,Timer)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IProxy)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Notifier)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,proxy,Proxy)
namespace model{
namespace proxy{


class HXCPP_CLASS_ATTRIBUTES  ClockProxy_obj : public ::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj super;
		typedef ClockProxy_obj OBJ_;
		ClockProxy_obj();
		Void __construct(::model::data::ClockData data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ClockProxy_obj > __new(::model::data::ClockData data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClockProxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ClockProxy"); }

		::openfl::_legacy::utils::Timer timer;
		::model::proxy::AppProxy appProxy;
		virtual Void onRegister( );

		virtual Void startClock( );
		Dynamic startClock_dyn();

		virtual Void stopClock( );
		Dynamic stopClock_dyn();

		virtual Void sendClockSignal( ::openfl::events::TimerEvent event);
		Dynamic sendClockSignal_dyn();

		virtual int getCurrentFrequencyPointer( );
		Dynamic getCurrentFrequencyPointer_dyn();

		virtual Void setCurrentFrequencyPointer( int pos);
		Dynamic setCurrentFrequencyPointer_dyn();

		virtual Void changeClockSpeed( int pointer);
		Dynamic changeClockSpeed_dyn();

		virtual ::model::vo::FrequencyVO getCurrentFrequency( );
		Dynamic getCurrentFrequency_dyn();

		virtual Array< ::Dynamic > getFrequencies( );
		Dynamic getFrequencies_dyn();

		virtual Void toggleClockOn( );
		Dynamic toggleClockOn_dyn();

		virtual bool getClockOn( );
		Dynamic getClockOn_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Dynamic getData( );

		static ::String NAME;
};

} // end namespace model
} // end namespace proxy

#endif /* INCLUDED_model_proxy_ClockProxy */ 
