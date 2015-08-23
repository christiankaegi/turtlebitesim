#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotification
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IObserver
#include <org/puremvc/haxe/multicore/interfaces/IObserver.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC1(IObserver_obj,setNotifyMethod,)

HX_DEFINE_DYNAMIC_FUNC1(IObserver_obj,setNotifyContext,)

HX_DEFINE_DYNAMIC_FUNC1(IObserver_obj,notifyObserver,)

HX_DEFINE_DYNAMIC_FUNC1(IObserver_obj,compareNotifyContext,return )


static ::String sMemberFields[] = {
	HX_CSTRING("setNotifyMethod"),
	HX_CSTRING("setNotifyContext"),
	HX_CSTRING("notifyObserver"),
	HX_CSTRING("compareNotifyContext"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IObserver_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IObserver_obj::__mClass,"__mClass");
};

#endif

Class IObserver_obj::__mClass;

void IObserver_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.interfaces.IObserver"), hx::TCanCast< IObserver_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IObserver_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace interfaces
