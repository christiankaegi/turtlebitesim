#ifndef INCLUDED_events_AppEvent
#define INCLUDED_events_AppEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/events/Event.h>
HX_DECLARE_CLASS1(events,AppEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
namespace events{


class HXCPP_CLASS_ATTRIBUTES  AppEvent_obj : public ::openfl::events::Event_obj{
	public:
		typedef ::openfl::events::Event_obj super;
		typedef AppEvent_obj OBJ_;
		AppEvent_obj();
		Void __construct(::String type,Dynamic data,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AppEvent_obj > __new(::String type,Dynamic data,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AppEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AppEvent"); }

		Dynamic data;
		static ::String DATA;
		static ::String DRAG_START;
		static ::String DRAG_STOP;
		static ::String VIEW_READY;
};

} // end namespace events

#endif /* INCLUDED_events_AppEvent */ 
