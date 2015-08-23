#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IView
#define INCLUDED_org_puremvc_haxe_multicore_interfaces_IView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IMediator)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotification)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IObserver)
HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,IView)
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IView_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IView_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void registerObserver( ::String noteName,::org::puremvc::haxe::multicore::interfaces::IObserver observer)=0;
		Dynamic registerObserver_dyn();
virtual Void removeObserver( ::String notificationName,Dynamic notifyContext)=0;
		Dynamic removeObserver_dyn();
virtual Void notifyObservers( ::org::puremvc::haxe::multicore::interfaces::INotification note)=0;
		Dynamic notifyObservers_dyn();
virtual Void registerMediator( ::org::puremvc::haxe::multicore::interfaces::IMediator mediator)=0;
		Dynamic registerMediator_dyn();
virtual ::org::puremvc::haxe::multicore::interfaces::IMediator retrieveMediator( ::String mediatorName)=0;
		Dynamic retrieveMediator_dyn();
virtual ::org::puremvc::haxe::multicore::interfaces::IMediator removeMediator( ::String mediatorName)=0;
		Dynamic removeMediator_dyn();
virtual bool hasMediator( ::String mediatorName)=0;
		Dynamic hasMediator_dyn();
virtual Void removeView( ::String key)=0;
		Dynamic removeView_dyn();
};

#define DELEGATE_org_puremvc_haxe_multicore_interfaces_IView \
virtual Void registerObserver( ::String noteName,::org::puremvc::haxe::multicore::interfaces::IObserver observer) { return mDelegate->registerObserver(noteName,observer);}  \
virtual Dynamic registerObserver_dyn() { return mDelegate->registerObserver_dyn();}  \
virtual Void removeObserver( ::String notificationName,Dynamic notifyContext) { return mDelegate->removeObserver(notificationName,notifyContext);}  \
virtual Dynamic removeObserver_dyn() { return mDelegate->removeObserver_dyn();}  \
virtual Void notifyObservers( ::org::puremvc::haxe::multicore::interfaces::INotification note) { return mDelegate->notifyObservers(note);}  \
virtual Dynamic notifyObservers_dyn() { return mDelegate->notifyObservers_dyn();}  \
virtual Void registerMediator( ::org::puremvc::haxe::multicore::interfaces::IMediator mediator) { return mDelegate->registerMediator(mediator);}  \
virtual Dynamic registerMediator_dyn() { return mDelegate->registerMediator_dyn();}  \
virtual ::org::puremvc::haxe::multicore::interfaces::IMediator retrieveMediator( ::String mediatorName) { return mDelegate->retrieveMediator(mediatorName);}  \
virtual Dynamic retrieveMediator_dyn() { return mDelegate->retrieveMediator_dyn();}  \
virtual ::org::puremvc::haxe::multicore::interfaces::IMediator removeMediator( ::String mediatorName) { return mDelegate->removeMediator(mediatorName);}  \
virtual Dynamic removeMediator_dyn() { return mDelegate->removeMediator_dyn();}  \
virtual bool hasMediator( ::String mediatorName) { return mDelegate->hasMediator(mediatorName);}  \
virtual Dynamic hasMediator_dyn() { return mDelegate->hasMediator_dyn();}  \
virtual Void removeView( ::String key) { return mDelegate->removeView(key);}  \
virtual Dynamic removeView_dyn() { return mDelegate->removeView_dyn();}  \


template<typename IMPL>
class IView_delegate_ : public IView_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IView_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_puremvc_haxe_multicore_interfaces_IView
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace interfaces

#endif /* INCLUDED_org_puremvc_haxe_multicore_interfaces_IView */ 
