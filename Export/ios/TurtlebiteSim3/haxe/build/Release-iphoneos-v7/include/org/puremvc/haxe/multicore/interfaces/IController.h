#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IController
#define INCLUDED_org_puremvc_haxe_multicore_interfaces_IController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IController)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IController_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IController_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void registerCommand( ::String notificationName,::Class commandClassRef)=0;
		Dynamic registerCommand_dyn();
virtual Void executeCommand( ::org::puremvc::haxe::multicore::interfaces::INotification notification)=0;
		Dynamic executeCommand_dyn();
virtual Void removeCommand( ::String notificationName)=0;
		Dynamic removeCommand_dyn();
virtual bool hasCommand( ::String notificationName)=0;
		Dynamic hasCommand_dyn();
virtual Void removeController( ::String key)=0;
		Dynamic removeController_dyn();
};

#define DELEGATE_org_puremvc_haxe_multicore_interfaces_IController \
virtual Void registerCommand( ::String notificationName,::Class commandClassRef) { return mDelegate->registerCommand(notificationName,commandClassRef);}  \
virtual Dynamic registerCommand_dyn() { return mDelegate->registerCommand_dyn();}  \
virtual Void executeCommand( ::org::puremvc::haxe::multicore::interfaces::INotification notification) { return mDelegate->executeCommand(notification);}  \
virtual Dynamic executeCommand_dyn() { return mDelegate->executeCommand_dyn();}  \
virtual Void removeCommand( ::String notificationName) { return mDelegate->removeCommand(notificationName);}  \
virtual Dynamic removeCommand_dyn() { return mDelegate->removeCommand_dyn();}  \
virtual bool hasCommand( ::String notificationName) { return mDelegate->hasCommand(notificationName);}  \
virtual Dynamic hasCommand_dyn() { return mDelegate->hasCommand_dyn();}  \
virtual Void removeController( ::String key) { return mDelegate->removeController(key);}  \
virtual Dynamic removeController_dyn() { return mDelegate->removeController_dyn();}  \


template<typename IMPL>
class IController_delegate_ : public IController_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IController_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_puremvc_haxe_multicore_interfaces_IController
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace interfaces

#endif /* INCLUDED_org_puremvc_haxe_multicore_interfaces_IController */ 
