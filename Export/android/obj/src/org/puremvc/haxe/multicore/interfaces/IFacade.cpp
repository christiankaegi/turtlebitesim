#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade
#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IMediator
#include <org/puremvc/haxe/multicore/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotification
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IProxy
#include <org/puremvc/haxe/multicore/interfaces/IProxy.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,registerProxy,)

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,retrieveProxy,return )

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,removeProxy,return )

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,hasProxy,return )

HX_DEFINE_DYNAMIC_FUNC2(IFacade_obj,registerCommand,)

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,removeCommand,)

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,hasCommand,return )

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,registerMediator,)

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,retrieveMediator,return )

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,removeMediator,return )

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,hasMediator,return )

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,notifyObservers,)

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,removeCore,)


static ::String sMemberFields[] = {
	HX_CSTRING("registerProxy"),
	HX_CSTRING("retrieveProxy"),
	HX_CSTRING("removeProxy"),
	HX_CSTRING("hasProxy"),
	HX_CSTRING("registerCommand"),
	HX_CSTRING("removeCommand"),
	HX_CSTRING("hasCommand"),
	HX_CSTRING("registerMediator"),
	HX_CSTRING("retrieveMediator"),
	HX_CSTRING("removeMediator"),
	HX_CSTRING("hasMediator"),
	HX_CSTRING("notifyObservers"),
	HX_CSTRING("removeCore"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFacade_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFacade_obj::__mClass,"__mClass");
};

#endif

Class IFacade_obj::__mClass;

void IFacade_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.interfaces.IFacade"), hx::TCanCast< IFacade_obj> ,0,sMemberFields,
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

void IFacade_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace interfaces
