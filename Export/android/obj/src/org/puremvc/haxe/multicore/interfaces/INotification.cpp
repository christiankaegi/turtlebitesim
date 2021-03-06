#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotification
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC0(INotification_obj,getName,return )

HX_DEFINE_DYNAMIC_FUNC1(INotification_obj,setBody,)

HX_DEFINE_DYNAMIC_FUNC0(INotification_obj,getBody,return )

HX_DEFINE_DYNAMIC_FUNC1(INotification_obj,setType,)

HX_DEFINE_DYNAMIC_FUNC0(INotification_obj,getType,return )

HX_DEFINE_DYNAMIC_FUNC0(INotification_obj,toString,return )


static ::String sMemberFields[] = {
	HX_CSTRING("getName"),
	HX_CSTRING("setBody"),
	HX_CSTRING("getBody"),
	HX_CSTRING("setType"),
	HX_CSTRING("getType"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(INotification_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(INotification_obj::__mClass,"__mClass");
};

#endif

Class INotification_obj::__mClass;

void INotification_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.interfaces.INotification"), hx::TCanCast< INotification_obj> ,0,sMemberFields,
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

void INotification_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace interfaces
