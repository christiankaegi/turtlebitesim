#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IMediator
#define INCLUDED_org_puremvc_haxe_multicore_interfaces_IMediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IMediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IMediator_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IMediator_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::String getMediatorName( )=0;
		Dynamic getMediatorName_dyn();
virtual Dynamic getViewComponent( )=0;
		Dynamic getViewComponent_dyn();
virtual Void setViewComponent( Dynamic viewComponent)=0;
		Dynamic setViewComponent_dyn();
virtual Array< ::String > listNotificationInterests( )=0;
		Dynamic listNotificationInterests_dyn();
virtual Void handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification notification)=0;
		Dynamic handleNotification_dyn();
virtual Void onRegister( )=0;
		Dynamic onRegister_dyn();
virtual Void onRemove( )=0;
		Dynamic onRemove_dyn();
};

#define DELEGATE_org_puremvc_haxe_multicore_interfaces_IMediator \
virtual ::String getMediatorName( ) { return mDelegate->getMediatorName();}  \
virtual Dynamic getMediatorName_dyn() { return mDelegate->getMediatorName_dyn();}  \
virtual Dynamic getViewComponent( ) { return mDelegate->getViewComponent();}  \
virtual Dynamic getViewComponent_dyn() { return mDelegate->getViewComponent_dyn();}  \
virtual Void setViewComponent( Dynamic viewComponent) { return mDelegate->setViewComponent(viewComponent);}  \
virtual Dynamic setViewComponent_dyn() { return mDelegate->setViewComponent_dyn();}  \
virtual Array< ::String > listNotificationInterests( ) { return mDelegate->listNotificationInterests();}  \
virtual Dynamic listNotificationInterests_dyn() { return mDelegate->listNotificationInterests_dyn();}  \
virtual Void handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification notification) { return mDelegate->handleNotification(notification);}  \
virtual Dynamic handleNotification_dyn() { return mDelegate->handleNotification_dyn();}  \
virtual Void onRegister( ) { return mDelegate->onRegister();}  \
virtual Dynamic onRegister_dyn() { return mDelegate->onRegister_dyn();}  \
virtual Void onRemove( ) { return mDelegate->onRemove();}  \
virtual Dynamic onRemove_dyn() { return mDelegate->onRemove_dyn();}  \


template<typename IMPL>
class IMediator_delegate_ : public IMediator_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IMediator_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_puremvc_haxe_multicore_interfaces_IMediator
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace interfaces

#endif /* INCLUDED_org_puremvc_haxe_multicore_interfaces_IMediator */ 
