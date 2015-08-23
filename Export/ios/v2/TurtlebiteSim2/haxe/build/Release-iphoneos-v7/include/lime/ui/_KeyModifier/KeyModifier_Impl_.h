#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#define INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,ui,_KeyModifier,KeyModifier_Impl_)
namespace lime{
namespace ui{
namespace _KeyModifier{


class HXCPP_CLASS_ATTRIBUTES  KeyModifier_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyModifier_Impl__obj OBJ_;
		KeyModifier_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< KeyModifier_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyModifier_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("KeyModifier_Impl_"); }

		static int NONE;
		static int LEFT_SHIFT;
		static int RIGHT_SHIFT;
		static int LEFT_CTRL;
		static int RIGHT_CTRL;
		static int LEFT_ALT;
		static int RIGHT_ALT;
		static int LEFT_META;
		static int RIGHT_META;
		static int NUM_LOCK;
		static int CAPS_LOCK;
		static int MODE;
		static int CTRL;
		static int SHIFT;
		static int ALT;
		static int META;
		static bool get_altKey( int this1);
		static Dynamic get_altKey_dyn();

		static bool set_altKey( int this1,bool value);
		static Dynamic set_altKey_dyn();

		static bool get_capsLock( int this1);
		static Dynamic get_capsLock_dyn();

		static bool set_capsLock( int this1,bool value);
		static Dynamic set_capsLock_dyn();

		static bool get_ctrlKey( int this1);
		static Dynamic get_ctrlKey_dyn();

		static bool set_ctrlKey( int this1,bool value);
		static Dynamic set_ctrlKey_dyn();

		static bool get_metaKey( int this1);
		static Dynamic get_metaKey_dyn();

		static bool set_metaKey( int this1,bool value);
		static Dynamic set_metaKey_dyn();

		static bool get_numLock( int this1);
		static Dynamic get_numLock_dyn();

		static bool set_numLock( int this1,bool value);
		static Dynamic set_numLock_dyn();

		static bool get_shiftKey( int this1);
		static Dynamic get_shiftKey_dyn();

		static bool set_shiftKey( int this1,bool value);
		static Dynamic set_shiftKey_dyn();

};

} // end namespace lime
} // end namespace ui
} // end namespace _KeyModifier

#endif /* INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_ */ 
