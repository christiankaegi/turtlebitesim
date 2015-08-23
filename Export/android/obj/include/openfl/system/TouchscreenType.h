#ifndef INCLUDED_openfl_system_TouchscreenType
#define INCLUDED_openfl_system_TouchscreenType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,system,TouchscreenType)
namespace openfl{
namespace system{


class TouchscreenType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TouchscreenType_obj OBJ_;

	public:
		TouchscreenType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("openfl.system.TouchscreenType"); }
		::String __ToString() const { return HX_CSTRING("TouchscreenType.") + tag; }

		static ::openfl::system::TouchscreenType FINGER;
		static inline ::openfl::system::TouchscreenType FINGER_dyn() { return FINGER; }
		static ::openfl::system::TouchscreenType NONE;
		static inline ::openfl::system::TouchscreenType NONE_dyn() { return NONE; }
		static ::openfl::system::TouchscreenType STYLUS;
		static inline ::openfl::system::TouchscreenType STYLUS_dyn() { return STYLUS; }
};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_TouchscreenType */ 
