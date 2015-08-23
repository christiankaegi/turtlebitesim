#ifndef INCLUDED_view_component_Highlight
#define INCLUDED_view_component_Highlight

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(view,component,Highlight)
HX_DECLARE_CLASS2(view,elements,SimpleRectangle)
namespace view{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  Highlight_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Highlight_obj OBJ_;
		Highlight_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Highlight_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Highlight_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Highlight"); }

		Float posX;
		Float posY;
		Float w;
		Float h;
		::view::elements::SimpleRectangle coverRegister1;
		::view::elements::SimpleRectangle coverRegister2;
		::view::elements::SimpleRectangle coverAccumulator;
		::view::elements::SimpleRectangle coverEnabler1;
		::view::elements::SimpleRectangle coverEnabler2;
		::openfl::display::Bitmap coverAluIC;
		::openfl::display::Bitmap coverMultiplexer;
		::openfl::display::Bitmap coverDecoder;
		::view::elements::SimpleRectangle coverRam;
		::view::elements::SimpleRectangle coverDisplay;
		::view::elements::SimpleRectangle coverMOV;
		::view::elements::SimpleRectangle coverLDI;
		::view::elements::SimpleRectangle coverALU;
		::view::elements::SimpleRectangle coverSDA;
		::view::elements::SimpleRectangle coverLDA;
		::view::elements::SimpleRectangle coverINP;
		::view::elements::SimpleRectangle coverOUT;
		::view::elements::SimpleRectangle coverJE;
		::view::elements::SimpleRectangle coverJNE;
		::view::elements::SimpleRectangle coverJMP;
		virtual Void addedToStageHandler( ::openfl::events::Event event);
		Dynamic addedToStageHandler_dyn();

		virtual Void createRegisterCover( );
		Dynamic createRegisterCover_dyn();

		virtual Void createAccumulatorCover( );
		Dynamic createAccumulatorCover_dyn();

		virtual Void createRamCover( );
		Dynamic createRamCover_dyn();

		virtual Void createDisplayCover( );
		Dynamic createDisplayCover_dyn();

		virtual Void createComparatorCover( );
		Dynamic createComparatorCover_dyn();

		virtual Void createEnabler1Cover( );
		Dynamic createEnabler1Cover_dyn();

		virtual Void createEnabler2Cover( );
		Dynamic createEnabler2Cover_dyn();

		virtual Void coverAluLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic coverAluLoadCompleteHandler_dyn();

		virtual Void coverMultiplexerLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic coverMultiplexerLoadCompleteHandler_dyn();

		virtual Void coverDecoderLoadCompleteHandler( ::openfl::display::BitmapData bmd);
		Dynamic coverDecoderLoadCompleteHandler_dyn();

		virtual Void setVisibilityRegister1( bool visible);
		Dynamic setVisibilityRegister1_dyn();

		virtual Void setVisibilityRegister2( bool visible);
		Dynamic setVisibilityRegister2_dyn();

		virtual Void setVisibilityAccumulator( bool visible);
		Dynamic setVisibilityAccumulator_dyn();

		virtual Void setVisibilityRam( bool visible);
		Dynamic setVisibilityRam_dyn();

		virtual Void setVisibilityDisplay( bool visible);
		Dynamic setVisibilityDisplay_dyn();

		virtual Void setVisibilityMOV( bool visible);
		Dynamic setVisibilityMOV_dyn();

		virtual Void setVisibilityLDI( bool visible);
		Dynamic setVisibilityLDI_dyn();

		virtual Void setVisibilityALU( bool visible);
		Dynamic setVisibilityALU_dyn();

		virtual Void setVisibilitySDA( bool visible);
		Dynamic setVisibilitySDA_dyn();

		virtual Void setVisibilityLDA( bool visible);
		Dynamic setVisibilityLDA_dyn();

		virtual Void setVisibilityINP( bool visible);
		Dynamic setVisibilityINP_dyn();

		virtual Void setVisibilityOUT( bool visible);
		Dynamic setVisibilityOUT_dyn();

		virtual Void setVisibilityJE( bool visible);
		Dynamic setVisibilityJE_dyn();

		virtual Void setVisibilityJNE( bool visible);
		Dynamic setVisibilityJNE_dyn();

		virtual Void setVisibilityJMP( bool visible);
		Dynamic setVisibilityJMP_dyn();

		virtual Void setVisibilityEnabler1( bool visible);
		Dynamic setVisibilityEnabler1_dyn();

		virtual Void setVisibilityEnabler2( bool visible);
		Dynamic setVisibilityEnabler2_dyn();

		virtual Void setVisibilityMultiplexer( bool visible);
		Dynamic setVisibilityMultiplexer_dyn();

		virtual Void setVisibilityDecoder( bool visible);
		Dynamic setVisibilityDecoder_dyn();

		virtual Void resetVisibilityAll( Dynamic visible);
		Dynamic resetVisibilityAll_dyn();

		static Float ALPHA;
};

} // end namespace view
} // end namespace component

#endif /* INCLUDED_view_component_Highlight */ 
