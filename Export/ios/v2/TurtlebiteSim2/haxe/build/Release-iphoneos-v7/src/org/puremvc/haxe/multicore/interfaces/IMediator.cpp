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
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC0(IMediator_obj,getMediatorName,return )

HX_DEFINE_DYNAMIC_FUNC0(IMediator_obj,getViewComponent,return )

HX_DEFINE_DYNAMIC_FUNC1(IMediator_obj,setViewComponent,)

HX_DEFINE_DYNAMIC_FUNC0(IMediator_obj,listNotificationInterests,return )

HX_DEFINE_DYNAMIC_FUNC1(IMediator_obj,handleNotification,)

HX_DEFINE_DYNAMIC_FUNC0(IMediator_obj,onRegister,)

HX_DEFINE_DYNAMIC_FUNC0(IMediator_obj,onRemove,)


static ::String sMemberFields[] = {
	HX_CSTRING("getMediatorName"),
	HX_CSTRING("getViewComponent"),
	HX_CSTRING("setViewComponent"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("onRemove"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IMediator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IMediator_obj::__mClass,"__mClass");
};

#endif

Class IMediator_obj::__mClass;

void IMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.interfaces.IMediator"), hx::TCanCast< IMediator_obj> ,0,sMemberFields,
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

void IMediator_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace interfaces
