#include <hxcpp.h>

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

HX_DEFINE_DYNAMIC_FUNC0(IProxy_obj,getProxyName,return )

HX_DEFINE_DYNAMIC_FUNC1(IProxy_obj,setData,)

HX_DEFINE_DYNAMIC_FUNC0(IProxy_obj,getData,return )

HX_DEFINE_DYNAMIC_FUNC0(IProxy_obj,onRegister,)

HX_DEFINE_DYNAMIC_FUNC0(IProxy_obj,onRemove,)


static ::String sMemberFields[] = {
	HX_CSTRING("getProxyName"),
	HX_CSTRING("setData"),
	HX_CSTRING("getData"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("onRemove"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IProxy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IProxy_obj::__mClass,"__mClass");
};

#endif

Class IProxy_obj::__mClass;

void IProxy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.interfaces.IProxy"), hx::TCanCast< IProxy_obj> ,0,sMemberFields,
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

void IProxy_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace interfaces
