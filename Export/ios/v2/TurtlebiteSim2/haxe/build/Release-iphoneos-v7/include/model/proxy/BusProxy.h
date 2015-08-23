#ifndef INCLUDED_model_proxy_BusProxy
#define INCLUDED_model_proxy_BusProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
HX_DECLARE_CLASS2(model,data,BusData)
HX_DECLARE_CLASS2(model,proxy,BusProxy)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IProxy)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Notifier)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,proxy,Proxy)
namespace model{
namespace proxy{


class HXCPP_CLASS_ATTRIBUTES  BusProxy_obj : public ::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj super;
		typedef BusProxy_obj OBJ_;
		BusProxy_obj();
		Void __construct(::model::data::BusData data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BusProxy_obj > __new(::model::data::BusData data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BusProxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BusProxy"); }

		virtual Void onRegister( );

		virtual Dynamic getData( );

		static ::String NAME;
};

} // end namespace model
} // end namespace proxy

#endif /* INCLUDED_model_proxy_BusProxy */ 
