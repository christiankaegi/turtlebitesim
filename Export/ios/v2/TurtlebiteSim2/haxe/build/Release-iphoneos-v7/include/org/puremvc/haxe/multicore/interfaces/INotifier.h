#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#define INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(org,puremvc,haxe,multicore,interfaces,INotifier)
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  INotifier_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef INotifier_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void sendNotification( ::String notificationName,Dynamic body,::String type)=0;
		Dynamic sendNotification_dyn();
virtual Void initializeNotifier( ::String key)=0;
		Dynamic initializeNotifier_dyn();
};

#define DELEGATE_org_puremvc_haxe_multicore_interfaces_INotifier \
virtual Void sendNotification( ::String notificationName,Dynamic body,::String type) { return mDelegate->sendNotification(notificationName,body,type);}  \
virtual Dynamic sendNotification_dyn() { return mDelegate->sendNotification_dyn();}  \
virtual Void initializeNotifier( ::String key) { return mDelegate->initializeNotifier(key);}  \
virtual Dynamic initializeNotifier_dyn() { return mDelegate->initializeNotifier_dyn();}  \


template<typename IMPL>
class INotifier_delegate_ : public INotifier_obj
{
	protected:
		IMPL *mDelegate;
	public:
		INotifier_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_puremvc_haxe_multicore_interfaces_INotifier
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace interfaces

#endif /* INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier */ 
