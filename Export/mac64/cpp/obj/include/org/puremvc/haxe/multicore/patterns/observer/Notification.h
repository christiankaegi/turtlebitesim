#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notification
#define INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notification

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
HX_DECLARE_CLASS6(org,puremvc,haxe,multicore,patterns,observer,Notification)
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace patterns{
namespace observer{


class HXCPP_CLASS_ATTRIBUTES  Notification_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Notification_obj OBJ_;
		Notification_obj();
		Void __construct(::String name,Dynamic body,::String type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Notification_obj > __new(::String name,Dynamic body,::String type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Notification_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::multicore::interfaces::INotification_obj *()
			{ return new ::org::puremvc::haxe::multicore::interfaces::INotification_delegate_< Notification_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Notification"); }

		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual Void setBody( Dynamic body);
		Dynamic setBody_dyn();

		virtual Dynamic getBody( );
		Dynamic getBody_dyn();

		virtual Void setType( ::String type);
		Dynamic setType_dyn();

		virtual ::String getType( );
		Dynamic getType_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		::String name;
		::String type;
		Dynamic body;
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace patterns
} // end namespace observer

#endif /* INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notification */ 
