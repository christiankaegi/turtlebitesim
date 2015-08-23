#ifndef INCLUDED_org_puremvc_haxe_multicore_core_Model
#define INCLUDED_org_puremvc_haxe_multicore_core_Model

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/interfaces/IModel.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,core,Model)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IModel)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IProxy)
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Model_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Model_obj OBJ_;
		Model_obj();
		Void __construct(::String key);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Model_obj > __new(::String key);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Model_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::multicore::interfaces::IModel_obj *()
			{ return new ::org::puremvc::haxe::multicore::interfaces::IModel_delegate_< Model_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Model"); }

		virtual Void initializeModel( );
		Dynamic initializeModel_dyn();

		virtual Void registerProxy( ::org::puremvc::haxe::multicore::interfaces::IProxy proxy);
		Dynamic registerProxy_dyn();

		virtual ::org::puremvc::haxe::multicore::interfaces::IProxy retrieveProxy( ::String proxyName);
		Dynamic retrieveProxy_dyn();

		virtual bool hasProxy( ::String proxyName);
		Dynamic hasProxy_dyn();

		virtual ::org::puremvc::haxe::multicore::interfaces::IProxy removeProxy( ::String proxyName);
		Dynamic removeProxy_dyn();

		virtual Void removeModel( ::String key);
		Dynamic removeModel_dyn();

		::haxe::ds::StringMap proxyMap;
		::String multitonKey;
		static ::org::puremvc::haxe::multicore::interfaces::IModel getInstance( ::String key);
		static Dynamic getInstance_dyn();

		static ::haxe::ds::StringMap instanceMap;
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace core

#endif /* INCLUDED_org_puremvc_haxe_multicore_core_Model */ 
