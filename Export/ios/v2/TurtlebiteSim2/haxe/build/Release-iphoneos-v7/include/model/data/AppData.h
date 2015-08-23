#ifndef INCLUDED_model_data_AppData
#define INCLUDED_model_data_AppData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(App)
HX_DECLARE_CLASS2(model,data,AppData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace model{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  AppData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AppData_obj OBJ_;
		AppData_obj();
		Void __construct(::App app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AppData_obj > __new(::App app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AppData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AppData"); }

		::App app;
		bool isZoomed;
		bool powerOn;
		bool autoClockOn;
		bool hertzSubmenuActive;
		bool componentsSubmenuActive;
		bool showUnitsOn;
		bool showFlowOn;
		bool showHighlightOn;
};

} // end namespace model
} // end namespace data

#endif /* INCLUDED_model_data_AppData */ 
