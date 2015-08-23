#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IController
#include <org/puremvc/haxe/multicore/interfaces/IController.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotification
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC2(IController_obj,registerCommand,)

HX_DEFINE_DYNAMIC_FUNC1(IController_obj,executeCommand,)

HX_DEFINE_DYNAMIC_FUNC1(IController_obj,removeCommand,)

HX_DEFINE_DYNAMIC_FUNC1(IController_obj,hasCommand,return )

HX_DEFINE_DYNAMIC_FUNC1(IController_obj,removeController,)


static ::String sMemberFields[] = {
	HX_CSTRING("registerCommand"),
	HX_CSTRING("executeCommand"),
	HX_CSTRING("removeCommand"),
	HX_CSTRING("hasCommand"),
	HX_CSTRING("removeController"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IController_obj::__mClass,"__mClass");
};

#endif

Class IController_obj::__mClass;

void IController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.interfaces.IController"), hx::TCanCast< IController_obj> ,0,sMemberFields,
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

void IController_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace interfaces
