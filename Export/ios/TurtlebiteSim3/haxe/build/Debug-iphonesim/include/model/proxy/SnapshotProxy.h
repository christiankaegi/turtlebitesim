#ifndef INCLUDED_model_proxy_SnapshotProxy
#define INCLUDED_model_proxy_SnapshotProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
HX_DECLARE_CLASS2(model,data,SnapshotData)
HX_DECLARE_CLASS2(model,proxy,SnapshotProxy)
HX_DECLARE_CLASS2(model,vo,SnapshotVO)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IProxy)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Notifier)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,proxy,Proxy)
namespace model{
namespace proxy{


class HXCPP_CLASS_ATTRIBUTES  SnapshotProxy_obj : public ::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj{
	public:
		typedef ::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj super;
		typedef SnapshotProxy_obj OBJ_;
		SnapshotProxy_obj();
		Void __construct(::model::data::SnapshotData data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SnapshotProxy_obj > __new(::model::data::SnapshotData data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SnapshotProxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SnapshotProxy"); }

		virtual Void onRegister( );

		virtual Void setRegister1( ::String value);
		Dynamic setRegister1_dyn();

		virtual ::model::vo::SnapshotVO getRegister1( );
		Dynamic getRegister1_dyn();

		virtual Void setRegister2( ::String value);
		Dynamic setRegister2_dyn();

		virtual ::model::vo::SnapshotVO getRegister2( );
		Dynamic getRegister2_dyn();

		virtual Void setAccumulator( ::String value);
		Dynamic setAccumulator_dyn();

		virtual ::model::vo::SnapshotVO getAccumulator( );
		Dynamic getAccumulator_dyn();

		virtual Void setRam( ::model::vo::SnapshotVO vo,int pointer);
		Dynamic setRam_dyn();

		virtual Array< ::Dynamic > getRam( );
		Dynamic getRam_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual ::model::vo::SnapshotVO getSnapshot( ::String value);
		Dynamic getSnapshot_dyn();

		virtual Dynamic getData( );

		static ::String NAME;
};

} // end namespace model
} // end namespace proxy

#endif /* INCLUDED_model_proxy_SnapshotProxy */ 
