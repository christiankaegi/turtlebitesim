#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IMediator
#include <org/puremvc/haxe/multicore/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotification
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IObserver
#include <org/puremvc/haxe/multicore/interfaces/IObserver.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IView
#include <org/puremvc/haxe/multicore/interfaces/IView.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC2(IView_obj,registerObserver,)

HX_DEFINE_DYNAMIC_FUNC2(IView_obj,removeObserver,)

HX_DEFINE_DYNAMIC_FUNC1(IView_obj,notifyObservers,)

HX_DEFINE_DYNAMIC_FUNC1(IView_obj,registerMediator,)

HX_DEFINE_DYNAMIC_FUNC1(IView_obj,retrieveMediator,return )

HX_DEFINE_DYNAMIC_FUNC1(IView_obj,removeMediator,return )

HX_DEFINE_DYNAMIC_FUNC1(IView_obj,hasMediator,return )

HX_DEFINE_DYNAMIC_FUNC1(IView_obj,removeView,)


static ::String sMemberFields[] = {
	HX_CSTRING("registerObserver"),
	HX_CSTRING("removeObserver"),
	HX_CSTRING("notifyObservers"),
	HX_CSTRING("registerMediator"),
	HX_CSTRING("retrieveMediator"),
	HX_CSTRING("removeMediator"),
	HX_CSTRING("hasMediator"),
	HX_CSTRING("removeView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IView_obj::__mClass,"__mClass");
};

#endif

Class IView_obj::__mClass;

void IView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.interfaces.IView"), hx::TCanCast< IView_obj> ,0,sMemberFields,
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

void IView_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace interfaces
