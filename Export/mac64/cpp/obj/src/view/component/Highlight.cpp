#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_view_component_Highlight
#include <view/component/Highlight.h>
#endif
#ifndef INCLUDED_view_elements_SimpleRectangle
#include <view/elements/SimpleRectangle.h>
#endif
namespace view{
namespace component{

Void Highlight_obj::__construct()
{
HX_STACK_FRAME("view.component.Highlight","new",0xa3470c8c,"view.component.Highlight.new","view/component/Highlight.hx",53,0x91e00ea6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(54)
	super::__construct();
	HX_STACK_LINE(55)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//Highlight_obj::~Highlight_obj() { }

Dynamic Highlight_obj::__CreateEmpty() { return  new Highlight_obj; }
hx::ObjectPtr< Highlight_obj > Highlight_obj::__new()
{  hx::ObjectPtr< Highlight_obj > result = new Highlight_obj();
	result->__construct();
	return result;}

Dynamic Highlight_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Highlight_obj > result = new Highlight_obj();
	result->__construct();
	return result;}

Void Highlight_obj::addedToStageHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("view.component.Highlight","addedToStageHandler",0xdd2f6bd3,"view.component.Highlight.addedToStageHandler","view/component/Highlight.hx",58,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(59)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(60)
		this->createRegisterCover();
		HX_STACK_LINE(61)
		this->createAccumulatorCover();
		HX_STACK_LINE(62)
		this->createComparatorCover();
		HX_STACK_LINE(63)
		this->createEnabler1Cover();
		HX_STACK_LINE(64)
		this->createEnabler2Cover();
		HX_STACK_LINE(65)
		this->createRamCover();
		HX_STACK_LINE(66)
		this->createDisplayCover();
		HX_STACK_LINE(67)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/coverAlu2048.png")),this->coverAluLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(68)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/coverMultiplexer2048.png")),this->coverMultiplexerLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(69)
		::openfl::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/coverDecoder2048.png")),this->coverDecoderLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(70)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,addedToStageHandler,(void))

Void Highlight_obj::createRegisterCover( ){
{
		HX_STACK_FRAME("view.component.Highlight","createRegisterCover",0xc0375164,"view.component.Highlight.createRegisterCover","view/component/Highlight.hx",73,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		this->posX = ((int)529 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(75)
		this->w = ((int)25 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(76)
		this->h = ((int)65 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(77)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		this->coverRegister2 = _g;
		HX_STACK_LINE(78)
		this->coverRegister2->set_x(this->posX);
		HX_STACK_LINE(79)
		this->coverRegister2->set_y(((int)204 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(80)
		this->addChild(this->coverRegister2);
		HX_STACK_LINE(82)
		::view::elements::SimpleRectangle _g1 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(82)
		this->coverRegister1 = _g1;
		HX_STACK_LINE(83)
		this->coverRegister1->set_x(this->posX);
		HX_STACK_LINE(84)
		this->coverRegister1->set_y(((int)279 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(85)
		this->addChild(this->coverRegister1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Highlight_obj,createRegisterCover,(void))

Void Highlight_obj::createAccumulatorCover( ){
{
		HX_STACK_FRAME("view.component.Highlight","createAccumulatorCover",0x990d5281,"view.component.Highlight.createAccumulatorCover","view/component/Highlight.hx",88,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		this->w = ((int)25 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(90)
		this->h = ((int)65 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(91)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		this->coverAccumulator = _g;
		HX_STACK_LINE(92)
		this->coverAccumulator->set_x(((int)771 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(93)
		this->coverAccumulator->set_y(((int)217 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(94)
		this->addChild(this->coverAccumulator);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Highlight_obj,createAccumulatorCover,(void))

Void Highlight_obj::createRamCover( ){
{
		HX_STACK_FRAME("view.component.Highlight","createRamCover",0xd5502ee9,"view.component.Highlight.createRamCover","view/component/Highlight.hx",97,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		this->w = ((int)147 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(99)
		this->h = ((int)52 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(100)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		this->coverRam = _g;
		HX_STACK_LINE(101)
		this->coverRam->set_x(((int)796 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(102)
		this->coverRam->set_y(((int)354 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(103)
		this->addChild(this->coverRam);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Highlight_obj,createRamCover,(void))

Void Highlight_obj::createDisplayCover( ){
{
		HX_STACK_FRAME("view.component.Highlight","createDisplayCover",0x7d326805,"view.component.Highlight.createDisplayCover","view/component/Highlight.hx",106,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		this->w = ((int)156 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(108)
		this->h = ((int)108 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(109)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,(int)7303023,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		this->coverDisplay = _g;
		HX_STACK_LINE(110)
		this->coverDisplay->set_x(((int)812 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(111)
		this->coverDisplay->set_y(((int)507 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(112)
		this->addChild(this->coverDisplay);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Highlight_obj,createDisplayCover,(void))

Void Highlight_obj::createComparatorCover( ){
{
		HX_STACK_FRAME("view.component.Highlight","createComparatorCover",0xa0d87a51,"view.component.Highlight.createComparatorCover","view/component/Highlight.hx",115,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		this->posX = ((int)178 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(117)
		Float _g = this->h = ((int)30 * ::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		this->w = _g;
		HX_STACK_LINE(118)
		::view::elements::SimpleRectangle _g1 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(118)
		this->coverMOV = _g1;
		HX_STACK_LINE(119)
		this->coverMOV->set_x(this->posX);
		HX_STACK_LINE(120)
		this->coverMOV->set_y(((int)246 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(121)
		this->addChild(this->coverMOV);
		HX_STACK_LINE(123)
		::view::elements::SimpleRectangle _g2 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(123)
		this->coverLDI = _g2;
		HX_STACK_LINE(124)
		this->coverLDI->set_x(this->posX);
		HX_STACK_LINE(125)
		this->coverLDI->set_y(((int)278 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(126)
		this->addChild(this->coverLDI);
		HX_STACK_LINE(128)
		::view::elements::SimpleRectangle _g3 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(128)
		this->coverALU = _g3;
		HX_STACK_LINE(129)
		this->coverALU->set_x(this->posX);
		HX_STACK_LINE(130)
		this->coverALU->set_y(((int)311 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(131)
		this->addChild(this->coverALU);
		HX_STACK_LINE(133)
		::view::elements::SimpleRectangle _g4 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(133)
		this->coverSDA = _g4;
		HX_STACK_LINE(134)
		this->coverSDA->set_x(this->posX);
		HX_STACK_LINE(135)
		this->coverSDA->set_y(((int)343 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(136)
		this->addChild(this->coverSDA);
		HX_STACK_LINE(138)
		::view::elements::SimpleRectangle _g5 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(138)
		this->coverLDA = _g5;
		HX_STACK_LINE(139)
		this->coverLDA->set_x(this->posX);
		HX_STACK_LINE(140)
		this->coverLDA->set_y(((int)376 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(141)
		this->addChild(this->coverLDA);
		HX_STACK_LINE(143)
		::view::elements::SimpleRectangle _g6 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(143)
		this->coverINP = _g6;
		HX_STACK_LINE(144)
		this->coverINP->set_x(this->posX);
		HX_STACK_LINE(145)
		this->coverINP->set_y(((int)408 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(146)
		this->addChild(this->coverINP);
		HX_STACK_LINE(148)
		::view::elements::SimpleRectangle _g7 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(148)
		this->coverOUT = _g7;
		HX_STACK_LINE(149)
		this->coverOUT->set_x(this->posX);
		HX_STACK_LINE(150)
		this->coverOUT->set_y(((int)441 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(151)
		this->addChild(this->coverOUT);
		HX_STACK_LINE(153)
		::view::elements::SimpleRectangle _g8 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(153)
		this->coverJE = _g8;
		HX_STACK_LINE(154)
		this->coverJE->set_x(this->posX);
		HX_STACK_LINE(155)
		this->coverJE->set_y(((int)473 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(156)
		this->addChild(this->coverJE);
		HX_STACK_LINE(158)
		::view::elements::SimpleRectangle _g9 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(158)
		this->coverJNE = _g9;
		HX_STACK_LINE(159)
		this->coverJNE->set_x(this->posX);
		HX_STACK_LINE(160)
		this->coverJNE->set_y(((int)506 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(161)
		this->addChild(this->coverJNE);
		HX_STACK_LINE(163)
		::view::elements::SimpleRectangle _g10 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(163)
		this->coverJMP = _g10;
		HX_STACK_LINE(164)
		this->coverJMP->set_x(this->posX);
		HX_STACK_LINE(165)
		this->coverJMP->set_y(((int)538 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(166)
		this->addChild(this->coverJMP);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Highlight_obj,createComparatorCover,(void))

Void Highlight_obj::createEnabler1Cover( ){
{
		HX_STACK_FRAME("view.component.Highlight","createEnabler1Cover",0x3ec206a5,"view.component.Highlight.createEnabler1Cover","view/component/Highlight.hx",169,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		this->w = ((int)20 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(171)
		this->h = ((int)50 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(172)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		this->coverEnabler1 = _g;
		HX_STACK_LINE(173)
		this->coverEnabler1->set_x(((int)297 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(174)
		this->coverEnabler1->set_y(((int)97 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(175)
		this->addChild(this->coverEnabler1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Highlight_obj,createEnabler1Cover,(void))

Void Highlight_obj::createEnabler2Cover( ){
{
		HX_STACK_FRAME("view.component.Highlight","createEnabler2Cover",0xa51d6304,"view.component.Highlight.createEnabler2Cover","view/component/Highlight.hx",178,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		this->w = ((int)20 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(180)
		this->h = ((int)50 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(181)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::Highlight_obj::ALPHA,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(181)
		this->coverEnabler2 = _g;
		HX_STACK_LINE(182)
		this->coverEnabler2->set_x(((int)215 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(183)
		this->coverEnabler2->set_y(((int)138 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(184)
		this->addChild(this->coverEnabler2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Highlight_obj,createEnabler2Cover,(void))

Void Highlight_obj::coverAluLoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.Highlight","coverAluLoadCompleteHandler",0xc181ae44,"view.component.Highlight.coverAluLoadCompleteHandler","view/component/Highlight.hx",187,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(188)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		this->coverAluIC = _g;
		HX_STACK_LINE(189)
		this->coverAluIC->set_name(HX_CSTRING("coverAlu"));
		HX_STACK_LINE(192)
		Float _g1 = this->coverAluIC->set_scaleY(0.5);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(192)
		this->coverAluIC->set_scaleX(_g1);
		HX_STACK_LINE(194)
		this->coverAluIC->set_x(((int)740 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(195)
		this->coverAluIC->set_y(((int)155 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(196)
		this->addChild(this->coverAluIC);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,coverAluLoadCompleteHandler,(void))

Void Highlight_obj::coverMultiplexerLoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.Highlight","coverMultiplexerLoadCompleteHandler",0xe3168a79,"view.component.Highlight.coverMultiplexerLoadCompleteHandler","view/component/Highlight.hx",199,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(200)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(200)
		this->coverMultiplexer = _g;
		HX_STACK_LINE(201)
		this->coverMultiplexer->set_name(HX_CSTRING("coverMultiplexer"));
		HX_STACK_LINE(204)
		Float _g1 = this->coverMultiplexer->set_scaleY(0.5);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(204)
		this->coverMultiplexer->set_scaleX(_g1);
		HX_STACK_LINE(206)
		this->coverMultiplexer->set_x(((int)578 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(207)
		this->coverMultiplexer->set_y(((int)158 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(208)
		this->addChild(this->coverMultiplexer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,coverMultiplexerLoadCompleteHandler,(void))

Void Highlight_obj::coverDecoderLoadCompleteHandler( ::openfl::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.Highlight","coverDecoderLoadCompleteHandler",0x553db9aa,"view.component.Highlight.coverDecoderLoadCompleteHandler","view/component/Highlight.hx",211,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(212)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(212)
		this->coverDecoder = _g;
		HX_STACK_LINE(213)
		this->coverDecoder->set_name(HX_CSTRING("coverDecoder"));
		HX_STACK_LINE(216)
		Float _g1 = this->coverDecoder->set_scaleY(0.5);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(216)
		this->coverDecoder->set_scaleX(_g1);
		HX_STACK_LINE(218)
		this->coverDecoder->set_x(((int)255 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(219)
		this->coverDecoder->set_y(((int)173 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(220)
		this->addChild(this->coverDecoder);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,coverDecoderLoadCompleteHandler,(void))

Void Highlight_obj::setVisibilityRegister1( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityRegister1",0x6ce1510e,"view.component.Highlight.setVisibilityRegister1","view/component/Highlight.hx",228,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(228)
		this->coverRegister1->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityRegister1,(void))

Void Highlight_obj::setVisibilityRegister2( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityRegister2",0x6ce1510f,"view.component.Highlight.setVisibilityRegister2","view/component/Highlight.hx",232,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(232)
		this->coverRegister2->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityRegister2,(void))

Void Highlight_obj::setVisibilityAccumulator( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityAccumulator",0x217f11e6,"view.component.Highlight.setVisibilityAccumulator","view/component/Highlight.hx",236,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(236)
		this->coverAccumulator->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityAccumulator,(void))

Void Highlight_obj::setVisibilityRam( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityRam",0xceedfe7e,"view.component.Highlight.setVisibilityRam","view/component/Highlight.hx",240,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(240)
		this->coverRam->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityRam,(void))

Void Highlight_obj::setVisibilityDisplay( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityDisplay",0x48b222e2,"view.component.Highlight.setVisibilityDisplay","view/component/Highlight.hx",244,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(244)
		this->coverDisplay->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityDisplay,(void))

Void Highlight_obj::setVisibilityMOV( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityMOV",0xceea2374,"view.component.Highlight.setVisibilityMOV","view/component/Highlight.hx",248,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(248)
		this->coverMOV->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityMOV,(void))

Void Highlight_obj::setVisibilityLDI( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityLDI",0xcee95791,"view.component.Highlight.setVisibilityLDI","view/component/Highlight.hx",252,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(252)
		this->coverLDI->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityLDI,(void))

Void Highlight_obj::setVisibilityALU( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityALU",0xcee105ca,"view.component.Highlight.setVisibilityALU","view/component/Highlight.hx",255,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(256)
		this->coverALU->set_visible(visible);
		HX_STACK_LINE(257)
		this->coverAluIC->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityALU,(void))

Void Highlight_obj::setVisibilitySDA( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilitySDA",0xceeea750,"view.component.Highlight.setVisibilitySDA","view/component/Highlight.hx",261,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(261)
		this->coverSDA->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilitySDA,(void))

Void Highlight_obj::setVisibilityLDA( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityLDA",0xcee95789,"view.component.Highlight.setVisibilityLDA","view/component/Highlight.hx",265,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(265)
		this->coverLDA->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityLDA,(void))

Void Highlight_obj::setVisibilityINP( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityINP",0xcee7198b,"view.component.Highlight.setVisibilityINP","view/component/Highlight.hx",269,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(269)
		this->coverINP->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityINP,(void))

Void Highlight_obj::setVisibilityOUT( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityOUT",0xceebad2e,"view.component.Highlight.setVisibilityOUT","view/component/Highlight.hx",273,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(273)
		this->coverOUT->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityOUT,(void))

Void Highlight_obj::setVisibilityJE( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityJE",0xf0db27fb,"view.component.Highlight.setVisibilityJE","view/component/Highlight.hx",277,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(277)
		this->coverJE->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityJE,(void))

Void Highlight_obj::setVisibilityJNE( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityJNE",0xcee7dbc1,"view.component.Highlight.setVisibilityJNE","view/component/Highlight.hx",281,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(281)
		this->coverJNE->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityJNE,(void))

Void Highlight_obj::setVisibilityJMP( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityJMP",0xcee7daed,"view.component.Highlight.setVisibilityJMP","view/component/Highlight.hx",285,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(285)
		this->coverJMP->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityJMP,(void))

Void Highlight_obj::setVisibilityEnabler1( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityEnabler1",0x1a448c22,"view.component.Highlight.setVisibilityEnabler1","view/component/Highlight.hx",289,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(289)
		this->coverEnabler1->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityEnabler1,(void))

Void Highlight_obj::setVisibilityEnabler2( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityEnabler2",0x1a448c23,"view.component.Highlight.setVisibilityEnabler2","view/component/Highlight.hx",293,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(293)
		this->coverEnabler2->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityEnabler2,(void))

Void Highlight_obj::setVisibilityMultiplexer( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityMultiplexer",0x3efbf775,"view.component.Highlight.setVisibilityMultiplexer","view/component/Highlight.hx",297,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(297)
		this->coverMultiplexer->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityMultiplexer,(void))

Void Highlight_obj::setVisibilityDecoder( bool visible){
{
		HX_STACK_FRAME("view.component.Highlight","setVisibilityDecoder",0x782c2424,"view.component.Highlight.setVisibilityDecoder","view/component/Highlight.hx",301,0x91e00ea6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(301)
		this->coverDecoder->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,setVisibilityDecoder,(void))

Void Highlight_obj::resetVisibilityAll( Dynamic __o_visible){
Dynamic visible = __o_visible.Default(true);
	HX_STACK_FRAME("view.component.Highlight","resetVisibilityAll",0x7f691874,"view.component.Highlight.resetVisibilityAll","view/component/Highlight.hx",304,0x91e00ea6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(visible,"visible")
{
		HX_STACK_LINE(305)
		this->coverRegister1->set_visible(visible);
		HX_STACK_LINE(306)
		this->coverRegister2->set_visible(visible);
		HX_STACK_LINE(307)
		this->coverAccumulator->set_visible(visible);
		HX_STACK_LINE(308)
		this->coverRam->set_visible(visible);
		HX_STACK_LINE(309)
		this->coverDisplay->set_visible(visible);
		HX_STACK_LINE(310)
		this->coverMOV->set_visible(visible);
		HX_STACK_LINE(311)
		this->coverLDI->set_visible(visible);
		HX_STACK_LINE(312)
		this->coverALU->set_visible(visible);
		HX_STACK_LINE(313)
		this->coverSDA->set_visible(visible);
		HX_STACK_LINE(314)
		this->coverLDA->set_visible(visible);
		HX_STACK_LINE(315)
		this->coverINP->set_visible(visible);
		HX_STACK_LINE(316)
		this->coverOUT->set_visible(visible);
		HX_STACK_LINE(317)
		this->coverJE->set_visible(visible);
		HX_STACK_LINE(318)
		this->coverJNE->set_visible(visible);
		HX_STACK_LINE(319)
		this->coverJMP->set_visible(visible);
		HX_STACK_LINE(320)
		this->coverEnabler1->set_visible(visible);
		HX_STACK_LINE(321)
		this->coverEnabler2->set_visible(visible);
		HX_STACK_LINE(322)
		this->coverAluIC->set_visible(visible);
		HX_STACK_LINE(323)
		this->coverMultiplexer->set_visible(visible);
		HX_STACK_LINE(324)
		this->coverDecoder->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Highlight_obj,resetVisibilityAll,(void))

Float Highlight_obj::ALPHA;


Highlight_obj::Highlight_obj()
{
}

void Highlight_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Highlight);
	HX_MARK_MEMBER_NAME(posX,"posX");
	HX_MARK_MEMBER_NAME(posY,"posY");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(coverRegister1,"coverRegister1");
	HX_MARK_MEMBER_NAME(coverRegister2,"coverRegister2");
	HX_MARK_MEMBER_NAME(coverAccumulator,"coverAccumulator");
	HX_MARK_MEMBER_NAME(coverEnabler1,"coverEnabler1");
	HX_MARK_MEMBER_NAME(coverEnabler2,"coverEnabler2");
	HX_MARK_MEMBER_NAME(coverAluIC,"coverAluIC");
	HX_MARK_MEMBER_NAME(coverMultiplexer,"coverMultiplexer");
	HX_MARK_MEMBER_NAME(coverDecoder,"coverDecoder");
	HX_MARK_MEMBER_NAME(coverRam,"coverRam");
	HX_MARK_MEMBER_NAME(coverDisplay,"coverDisplay");
	HX_MARK_MEMBER_NAME(coverMOV,"coverMOV");
	HX_MARK_MEMBER_NAME(coverLDI,"coverLDI");
	HX_MARK_MEMBER_NAME(coverALU,"coverALU");
	HX_MARK_MEMBER_NAME(coverSDA,"coverSDA");
	HX_MARK_MEMBER_NAME(coverLDA,"coverLDA");
	HX_MARK_MEMBER_NAME(coverINP,"coverINP");
	HX_MARK_MEMBER_NAME(coverOUT,"coverOUT");
	HX_MARK_MEMBER_NAME(coverJE,"coverJE");
	HX_MARK_MEMBER_NAME(coverJNE,"coverJNE");
	HX_MARK_MEMBER_NAME(coverJMP,"coverJMP");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Highlight_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(posX,"posX");
	HX_VISIT_MEMBER_NAME(posY,"posY");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(coverRegister1,"coverRegister1");
	HX_VISIT_MEMBER_NAME(coverRegister2,"coverRegister2");
	HX_VISIT_MEMBER_NAME(coverAccumulator,"coverAccumulator");
	HX_VISIT_MEMBER_NAME(coverEnabler1,"coverEnabler1");
	HX_VISIT_MEMBER_NAME(coverEnabler2,"coverEnabler2");
	HX_VISIT_MEMBER_NAME(coverAluIC,"coverAluIC");
	HX_VISIT_MEMBER_NAME(coverMultiplexer,"coverMultiplexer");
	HX_VISIT_MEMBER_NAME(coverDecoder,"coverDecoder");
	HX_VISIT_MEMBER_NAME(coverRam,"coverRam");
	HX_VISIT_MEMBER_NAME(coverDisplay,"coverDisplay");
	HX_VISIT_MEMBER_NAME(coverMOV,"coverMOV");
	HX_VISIT_MEMBER_NAME(coverLDI,"coverLDI");
	HX_VISIT_MEMBER_NAME(coverALU,"coverALU");
	HX_VISIT_MEMBER_NAME(coverSDA,"coverSDA");
	HX_VISIT_MEMBER_NAME(coverLDA,"coverLDA");
	HX_VISIT_MEMBER_NAME(coverINP,"coverINP");
	HX_VISIT_MEMBER_NAME(coverOUT,"coverOUT");
	HX_VISIT_MEMBER_NAME(coverJE,"coverJE");
	HX_VISIT_MEMBER_NAME(coverJNE,"coverJNE");
	HX_VISIT_MEMBER_NAME(coverJMP,"coverJMP");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Highlight_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { return posX; }
		if (HX_FIELD_EQ(inName,"posY") ) { return posY; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ALPHA") ) { return ALPHA; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"coverJE") ) { return coverJE; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"coverRam") ) { return coverRam; }
		if (HX_FIELD_EQ(inName,"coverMOV") ) { return coverMOV; }
		if (HX_FIELD_EQ(inName,"coverLDI") ) { return coverLDI; }
		if (HX_FIELD_EQ(inName,"coverALU") ) { return coverALU; }
		if (HX_FIELD_EQ(inName,"coverSDA") ) { return coverSDA; }
		if (HX_FIELD_EQ(inName,"coverLDA") ) { return coverLDA; }
		if (HX_FIELD_EQ(inName,"coverINP") ) { return coverINP; }
		if (HX_FIELD_EQ(inName,"coverOUT") ) { return coverOUT; }
		if (HX_FIELD_EQ(inName,"coverJNE") ) { return coverJNE; }
		if (HX_FIELD_EQ(inName,"coverJMP") ) { return coverJMP; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"coverAluIC") ) { return coverAluIC; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"coverDecoder") ) { return coverDecoder; }
		if (HX_FIELD_EQ(inName,"coverDisplay") ) { return coverDisplay; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"coverEnabler1") ) { return coverEnabler1; }
		if (HX_FIELD_EQ(inName,"coverEnabler2") ) { return coverEnabler2; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"coverRegister1") ) { return coverRegister1; }
		if (HX_FIELD_EQ(inName,"coverRegister2") ) { return coverRegister2; }
		if (HX_FIELD_EQ(inName,"createRamCover") ) { return createRamCover_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setVisibilityJE") ) { return setVisibilityJE_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"coverAccumulator") ) { return coverAccumulator; }
		if (HX_FIELD_EQ(inName,"coverMultiplexer") ) { return coverMultiplexer; }
		if (HX_FIELD_EQ(inName,"setVisibilityRam") ) { return setVisibilityRam_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityMOV") ) { return setVisibilityMOV_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityLDI") ) { return setVisibilityLDI_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityALU") ) { return setVisibilityALU_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilitySDA") ) { return setVisibilitySDA_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityLDA") ) { return setVisibilityLDA_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityINP") ) { return setVisibilityINP_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityOUT") ) { return setVisibilityOUT_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityJNE") ) { return setVisibilityJNE_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityJMP") ) { return setVisibilityJMP_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createDisplayCover") ) { return createDisplayCover_dyn(); }
		if (HX_FIELD_EQ(inName,"resetVisibilityAll") ) { return resetVisibilityAll_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"createRegisterCover") ) { return createRegisterCover_dyn(); }
		if (HX_FIELD_EQ(inName,"createEnabler1Cover") ) { return createEnabler1Cover_dyn(); }
		if (HX_FIELD_EQ(inName,"createEnabler2Cover") ) { return createEnabler2Cover_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setVisibilityDisplay") ) { return setVisibilityDisplay_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityDecoder") ) { return setVisibilityDecoder_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createComparatorCover") ) { return createComparatorCover_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityEnabler1") ) { return setVisibilityEnabler1_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityEnabler2") ) { return setVisibilityEnabler2_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createAccumulatorCover") ) { return createAccumulatorCover_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityRegister1") ) { return setVisibilityRegister1_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityRegister2") ) { return setVisibilityRegister2_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setVisibilityAccumulator") ) { return setVisibilityAccumulator_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisibilityMultiplexer") ) { return setVisibilityMultiplexer_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"coverAluLoadCompleteHandler") ) { return coverAluLoadCompleteHandler_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"coverDecoderLoadCompleteHandler") ) { return coverDecoderLoadCompleteHandler_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"coverMultiplexerLoadCompleteHandler") ) { return coverMultiplexerLoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Highlight_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { posX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posY") ) { posY=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ALPHA") ) { ALPHA=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"coverJE") ) { coverJE=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"coverRam") ) { coverRam=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coverMOV") ) { coverMOV=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coverLDI") ) { coverLDI=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coverALU") ) { coverALU=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coverSDA") ) { coverSDA=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coverLDA") ) { coverLDA=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coverINP") ) { coverINP=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coverOUT") ) { coverOUT=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coverJNE") ) { coverJNE=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coverJMP") ) { coverJMP=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"coverAluIC") ) { coverAluIC=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"coverDecoder") ) { coverDecoder=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coverDisplay") ) { coverDisplay=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"coverEnabler1") ) { coverEnabler1=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coverEnabler2") ) { coverEnabler2=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"coverRegister1") ) { coverRegister1=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coverRegister2") ) { coverRegister2=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"coverAccumulator") ) { coverAccumulator=inValue.Cast< ::view::elements::SimpleRectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coverMultiplexer") ) { coverMultiplexer=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Highlight_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("posX"));
	outFields->push(HX_CSTRING("posY"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("h"));
	outFields->push(HX_CSTRING("coverRegister1"));
	outFields->push(HX_CSTRING("coverRegister2"));
	outFields->push(HX_CSTRING("coverAccumulator"));
	outFields->push(HX_CSTRING("coverEnabler1"));
	outFields->push(HX_CSTRING("coverEnabler2"));
	outFields->push(HX_CSTRING("coverAluIC"));
	outFields->push(HX_CSTRING("coverMultiplexer"));
	outFields->push(HX_CSTRING("coverDecoder"));
	outFields->push(HX_CSTRING("coverRam"));
	outFields->push(HX_CSTRING("coverDisplay"));
	outFields->push(HX_CSTRING("coverMOV"));
	outFields->push(HX_CSTRING("coverLDI"));
	outFields->push(HX_CSTRING("coverALU"));
	outFields->push(HX_CSTRING("coverSDA"));
	outFields->push(HX_CSTRING("coverLDA"));
	outFields->push(HX_CSTRING("coverINP"));
	outFields->push(HX_CSTRING("coverOUT"));
	outFields->push(HX_CSTRING("coverJE"));
	outFields->push(HX_CSTRING("coverJNE"));
	outFields->push(HX_CSTRING("coverJMP"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ALPHA"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Highlight_obj,posX),HX_CSTRING("posX")},
	{hx::fsFloat,(int)offsetof(Highlight_obj,posY),HX_CSTRING("posY")},
	{hx::fsFloat,(int)offsetof(Highlight_obj,w),HX_CSTRING("w")},
	{hx::fsFloat,(int)offsetof(Highlight_obj,h),HX_CSTRING("h")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverRegister1),HX_CSTRING("coverRegister1")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverRegister2),HX_CSTRING("coverRegister2")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverAccumulator),HX_CSTRING("coverAccumulator")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverEnabler1),HX_CSTRING("coverEnabler1")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverEnabler2),HX_CSTRING("coverEnabler2")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Highlight_obj,coverAluIC),HX_CSTRING("coverAluIC")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Highlight_obj,coverMultiplexer),HX_CSTRING("coverMultiplexer")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Highlight_obj,coverDecoder),HX_CSTRING("coverDecoder")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverRam),HX_CSTRING("coverRam")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverDisplay),HX_CSTRING("coverDisplay")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverMOV),HX_CSTRING("coverMOV")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverLDI),HX_CSTRING("coverLDI")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverALU),HX_CSTRING("coverALU")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverSDA),HX_CSTRING("coverSDA")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverLDA),HX_CSTRING("coverLDA")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverINP),HX_CSTRING("coverINP")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverOUT),HX_CSTRING("coverOUT")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverJE),HX_CSTRING("coverJE")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverJNE),HX_CSTRING("coverJNE")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(Highlight_obj,coverJMP),HX_CSTRING("coverJMP")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("posX"),
	HX_CSTRING("posY"),
	HX_CSTRING("w"),
	HX_CSTRING("h"),
	HX_CSTRING("coverRegister1"),
	HX_CSTRING("coverRegister2"),
	HX_CSTRING("coverAccumulator"),
	HX_CSTRING("coverEnabler1"),
	HX_CSTRING("coverEnabler2"),
	HX_CSTRING("coverAluIC"),
	HX_CSTRING("coverMultiplexer"),
	HX_CSTRING("coverDecoder"),
	HX_CSTRING("coverRam"),
	HX_CSTRING("coverDisplay"),
	HX_CSTRING("coverMOV"),
	HX_CSTRING("coverLDI"),
	HX_CSTRING("coverALU"),
	HX_CSTRING("coverSDA"),
	HX_CSTRING("coverLDA"),
	HX_CSTRING("coverINP"),
	HX_CSTRING("coverOUT"),
	HX_CSTRING("coverJE"),
	HX_CSTRING("coverJNE"),
	HX_CSTRING("coverJMP"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("createRegisterCover"),
	HX_CSTRING("createAccumulatorCover"),
	HX_CSTRING("createRamCover"),
	HX_CSTRING("createDisplayCover"),
	HX_CSTRING("createComparatorCover"),
	HX_CSTRING("createEnabler1Cover"),
	HX_CSTRING("createEnabler2Cover"),
	HX_CSTRING("coverAluLoadCompleteHandler"),
	HX_CSTRING("coverMultiplexerLoadCompleteHandler"),
	HX_CSTRING("coverDecoderLoadCompleteHandler"),
	HX_CSTRING("setVisibilityRegister1"),
	HX_CSTRING("setVisibilityRegister2"),
	HX_CSTRING("setVisibilityAccumulator"),
	HX_CSTRING("setVisibilityRam"),
	HX_CSTRING("setVisibilityDisplay"),
	HX_CSTRING("setVisibilityMOV"),
	HX_CSTRING("setVisibilityLDI"),
	HX_CSTRING("setVisibilityALU"),
	HX_CSTRING("setVisibilitySDA"),
	HX_CSTRING("setVisibilityLDA"),
	HX_CSTRING("setVisibilityINP"),
	HX_CSTRING("setVisibilityOUT"),
	HX_CSTRING("setVisibilityJE"),
	HX_CSTRING("setVisibilityJNE"),
	HX_CSTRING("setVisibilityJMP"),
	HX_CSTRING("setVisibilityEnabler1"),
	HX_CSTRING("setVisibilityEnabler2"),
	HX_CSTRING("setVisibilityMultiplexer"),
	HX_CSTRING("setVisibilityDecoder"),
	HX_CSTRING("resetVisibilityAll"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Highlight_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Highlight_obj::ALPHA,"ALPHA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Highlight_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Highlight_obj::ALPHA,"ALPHA");
};

#endif

Class Highlight_obj::__mClass;

void Highlight_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.Highlight"), hx::TCanCast< Highlight_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Highlight_obj::__boot()
{
	ALPHA= 0.8;
}

} // end namespace view
} // end namespace component
