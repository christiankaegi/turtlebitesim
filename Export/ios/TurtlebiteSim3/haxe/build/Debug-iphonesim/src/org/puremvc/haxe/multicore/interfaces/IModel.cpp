#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IModel
#include <org/puremvc/haxe/multicore/interfaces/IModel.h>
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

HX_DEFINE_DYNAMIC_FUNC1(IModel_obj,registerProxy,)

HX_DEFINE_DYNAMIC_FUNC1(IModel_obj,retrieveProxy,return )

HX_DEFINE_DYNAMIC_FUNC1(IModel_obj,removeProxy,return )

HX_DEFINE_DYNAMIC_FUNC1(IModel_obj,hasProxy,return )

HX_DEFINE_DYNAMIC_FUNC1(IModel_obj,removeModel,)


static ::String sMemberFields[] = {
	HX_CSTRING("registerProxy"),
	HX_CSTRING("retrieveProxy"),
	HX_CSTRING("removeProxy"),
	HX_CSTRING("hasProxy"),
	HX_CSTRING("removeModel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IModel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IModel_obj::__mClass,"__mClass");
};

#endif

Class IModel_obj::__mClass;

void IModel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.interfaces.IModel"), hx::TCanCast< IModel_obj> ,0,sMemberFields,
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

void IModel_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace interfaces
