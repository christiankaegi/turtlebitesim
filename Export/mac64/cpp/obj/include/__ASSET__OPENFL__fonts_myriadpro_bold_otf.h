#ifndef INCLUDED___ASSET__OPENFL__fonts_myriadpro_bold_otf
#define INCLUDED___ASSET__OPENFL__fonts_myriadpro_bold_otf

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/text/Font.h>
HX_DECLARE_CLASS0(__ASSET__OPENFL__fonts_myriadpro_bold_otf)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(openfl,text,Font)


class HXCPP_CLASS_ATTRIBUTES  __ASSET__OPENFL__fonts_myriadpro_bold_otf_obj : public ::openfl::text::Font_obj{
	public:
		typedef ::openfl::text::Font_obj super;
		typedef __ASSET__OPENFL__fonts_myriadpro_bold_otf_obj OBJ_;
		__ASSET__OPENFL__fonts_myriadpro_bold_otf_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< __ASSET__OPENFL__fonts_myriadpro_bold_otf_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~__ASSET__OPENFL__fonts_myriadpro_bold_otf_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("__ASSET__OPENFL__fonts_myriadpro_bold_otf"); }

};


#endif /* INCLUDED___ASSET__OPENFL__fonts_myriadpro_bold_otf */ 
