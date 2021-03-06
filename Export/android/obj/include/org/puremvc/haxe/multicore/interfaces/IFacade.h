#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade
#define INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IFacade)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IMediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IProxy)
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFacade_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFacade_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void registerProxy( ::org::puremvc::haxe::multicore::interfaces::IProxy proxy)=0;
		Dynamic registerProxy_dyn();
virtual ::org::puremvc::haxe::multicore::interfaces::IProxy retrieveProxy( ::String proxyName)=0;
		Dynamic retrieveProxy_dyn();
virtual ::org::puremvc::haxe::multicore::interfaces::IProxy removeProxy( ::String proxyName)=0;
		Dynamic removeProxy_dyn();
virtual bool hasProxy( ::String proxyName)=0;
		Dynamic hasProxy_dyn();
virtual Void registerCommand( ::String noteName,::Class commandClassRef)=0;
		Dynamic registerCommand_dyn();
virtual Void removeCommand( ::String notificationName)=0;
		Dynamic removeCommand_dyn();
virtual bool hasCommand( ::String notificationName)=0;
		Dynamic hasCommand_dyn();
virtual Void registerMediator( ::org::puremvc::haxe::multicore::interfaces::IMediator mediator)=0;
		Dynamic registerMediator_dyn();
virtual ::org::puremvc::haxe::multicore::interfaces::IMediator retrieveMediator( ::String mediatorName)=0;
		Dynamic retrieveMediator_dyn();
virtual ::org::puremvc::haxe::multicore::interfaces::IMediator removeMediator( ::String mediatorName)=0;
		Dynamic removeMediator_dyn();
virtual bool hasMediator( ::String mediatorName)=0;
		Dynamic hasMediator_dyn();
virtual Void notifyObservers( ::org::puremvc::haxe::multicore::interfaces::INotification note)=0;
		Dynamic notifyObservers_dyn();
virtual Void removeCore( ::String key)=0;
		Dynamic removeCore_dyn();
};

#define DELEGATE_org_puremvc_haxe_multicore_interfaces_IFacade \
virtual Void registerProxy( ::org::puremvc::haxe::multicore::interfaces::IProxy proxy) { return mDelegate->registerProxy(proxy);}  \
virtual Dynamic registerProxy_dyn() { return mDelegate->registerProxy_dyn();}  \
virtual ::org::puremvc::haxe::multicore::interfaces::IProxy retrieveProxy( ::String proxyName) { return mDelegate->retrieveProxy(proxyName);}  \
virtual Dynamic retrieveProxy_dyn() { return mDelegate->retrieveProxy_dyn();}  \
virtual ::org::puremvc::haxe::multicore::interfaces::IProxy removeProxy( ::String proxyName) { return mDelegate->removeProxy(proxyName);}  \
virtual Dynamic removeProxy_dyn() { return mDelegate->removeProxy_dyn();}  \
virtual bool hasProxy( ::String proxyName) { return mDelegate->hasProxy(proxyName);}  \
virtual Dynamic hasProxy_dyn() { return mDelegate->hasProxy_dyn();}  \
virtual Void registerCommand( ::String noteName,::Class commandClassRef) { return mDelegate->registerCommand(noteName,commandClassRef);}  \
virtual Dynamic registerCommand_dyn() { return mDelegate->registerCommand_dyn();}  \
virtual Void removeCommand( ::String notificationName) { return mDelegate->removeCommand(notificationName);}  \
virtual Dynamic removeCommand_dyn() { return mDelegate->removeCommand_dyn();}  \
virtual bool hasCommand( ::String notificationName) { return mDelegate->hasCommand(notificationName);}  \
virtual Dynamic hasCommand_dyn() { return mDelegate->hasCommand_dyn();}  \
virtual Void registerMediator( ::org::puremvc::haxe::multicore::interfaces::IMediator mediator) { return mDelegate->registerMediator(mediator);}  \
virtual Dynamic registerMediator_dyn() { return mDelegate->registerMediator_dyn();}  \
virtual ::org::puremvc::haxe::multicore::interfaces::IMediator retrieveMediator( ::String mediatorName) { return mDelegate->retrieveMediator(mediatorName);}  \
virtual Dynamic retrieveMediator_dyn() { return mDelegate->retrieveMediator_dyn();}  \
virtual ::org::puremvc::haxe::multicore::interfaces::IMediator removeMediator( ::String mediatorName) { return mDelegate->removeMediator(mediatorName);}  \
virtual Dynamic removeMediator_dyn() { return mDelegate->removeMediator_dyn();}  \
virtual bool hasMediator( ::String mediatorName) { return mDelegate->hasMediator(mediatorName);}  \
virtual Dynamic hasMediator_dyn() { return mDelegate->hasMediator_dyn();}  \
virtual Void notifyObservers( ::org::puremvc::haxe::multicore::interfaces::INotification note) { return mDelegate->notifyObservers(note);}  \
virtual Dynamic notifyObservers_dyn() { return mDelegate->notifyObservers_dyn();}  \
virtual Void removeCore( ::String key) { return mDelegate->removeCore(key);}  \
virtual Dynamic removeCore_dyn() { return mDelegate->removeCore_dyn();}  \


template<typename IMPL>
class IFacade_delegate_ : public IFacade_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFacade_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_puremvc_haxe_multicore_interfaces_IFacade
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace interfaces

#endif /* INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade */ 
