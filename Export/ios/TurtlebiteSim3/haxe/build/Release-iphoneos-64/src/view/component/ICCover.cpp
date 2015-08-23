#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_view_component_ICCover
#include <view/component/ICCover.h>
#endif
#ifndef INCLUDED_view_elements_SimpleRectangle
#include <view/elements/SimpleRectangle.h>
#endif
namespace view{
namespace component{

Void ICCover_obj::__construct()
{
HX_STACK_FRAME("view.component.ICCover","new",0xf02f6a75,"view.component.ICCover.new","view/component/ICCover.hx",47,0x722e2c5d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(48)
	super::__construct();
	HX_STACK_LINE(49)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//ICCover_obj::~ICCover_obj() { }

Dynamic ICCover_obj::__CreateEmpty() { return  new ICCover_obj; }
hx::ObjectPtr< ICCover_obj > ICCover_obj::__new()
{  hx::ObjectPtr< ICCover_obj > result = new ICCover_obj();
	result->__construct();
	return result;}

Dynamic ICCover_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ICCover_obj > result = new ICCover_obj();
	result->__construct();
	return result;}

Void ICCover_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.component.ICCover","addedToStageHandler",0x3d4bebbc,"view.component.ICCover.addedToStageHandler","view/component/ICCover.hx",52,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(53)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(54)
		this->createRegisterCover();
		HX_STACK_LINE(55)
		this->createAccumulatorCover();
		HX_STACK_LINE(56)
		this->createComparatorCover();
		HX_STACK_LINE(57)
		this->createEnabler1Cover();
		HX_STACK_LINE(58)
		this->createEnabler2Cover();
		HX_STACK_LINE(59)
		this->createRamCover();
		HX_STACK_LINE(60)
		this->createDisplayCover();
		HX_STACK_LINE(61)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/coverAlu2048.png")),this->coverAluLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(62)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/coverMultiplexer2048.png")),this->coverMultiplexerLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(63)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/coverDecoder2048.png")),this->coverDecoderLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(64)
		::events::AppEvent _g = ::events::AppEvent_obj::__new(::events::AppEvent_obj::VIEW_READY,null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,addedToStageHandler,(void))

Void ICCover_obj::createRegisterCover( ){
{
		HX_STACK_FRAME("view.component.ICCover","createRegisterCover",0x2053d14d,"view.component.ICCover.createRegisterCover","view/component/ICCover.hx",67,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		this->posX = ((int)529 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(69)
		this->w = ((int)25 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(70)
		this->h = ((int)65 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(71)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		this->coverRegister2 = _g;
		HX_STACK_LINE(72)
		this->coverRegister2->set_x(this->posX);
		HX_STACK_LINE(73)
		this->coverRegister2->set_y(((int)204 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(74)
		this->addChild(this->coverRegister2);
		HX_STACK_LINE(76)
		::view::elements::SimpleRectangle _g1 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		this->coverRegister1 = _g1;
		HX_STACK_LINE(77)
		this->coverRegister1->set_x(this->posX);
		HX_STACK_LINE(78)
		this->coverRegister1->set_y(((int)279 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(79)
		this->addChild(this->coverRegister1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ICCover_obj,createRegisterCover,(void))

Void ICCover_obj::createAccumulatorCover( ){
{
		HX_STACK_FRAME("view.component.ICCover","createAccumulatorCover",0xbe8cea38,"view.component.ICCover.createAccumulatorCover","view/component/ICCover.hx",82,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		this->w = ((int)25 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(84)
		this->h = ((int)65 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(85)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		this->coverAccumulator = _g;
		HX_STACK_LINE(86)
		this->coverAccumulator->set_x(((int)771 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(87)
		this->coverAccumulator->set_y(((int)217 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(88)
		this->addChild(this->coverAccumulator);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ICCover_obj,createAccumulatorCover,(void))

Void ICCover_obj::createRamCover( ){
{
		HX_STACK_FRAME("view.component.ICCover","createRamCover",0xc375b7a0,"view.component.ICCover.createRamCover","view/component/ICCover.hx",91,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		this->w = ((int)147 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(93)
		this->h = ((int)52 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(94)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		this->coverRam = _g;
		HX_STACK_LINE(95)
		this->coverRam->set_x(((int)796 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(96)
		this->coverRam->set_y(((int)354 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(97)
		this->addChild(this->coverRam);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ICCover_obj,createRamCover,(void))

Void ICCover_obj::createDisplayCover( ){
{
		HX_STACK_FRAME("view.component.ICCover","createDisplayCover",0xbf10183c,"view.component.ICCover.createDisplayCover","view/component/ICCover.hx",100,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		this->w = ((int)156 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(102)
		this->h = ((int)108 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(103)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,(int)7303023,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		this->coverDisplay = _g;
		HX_STACK_LINE(104)
		this->coverDisplay->set_x(((int)812 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(105)
		this->coverDisplay->set_y(((int)514 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(106)
		this->addChild(this->coverDisplay);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ICCover_obj,createDisplayCover,(void))

Void ICCover_obj::createComparatorCover( ){
{
		HX_STACK_FRAME("view.component.ICCover","createComparatorCover",0xa103867a,"view.component.ICCover.createComparatorCover","view/component/ICCover.hx",109,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		this->posX = ((int)178 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(111)
		Float _g = this->h = ((int)30 * ::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		this->w = _g;
		HX_STACK_LINE(112)
		::view::elements::SimpleRectangle _g1 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(112)
		this->coverMOV = _g1;
		HX_STACK_LINE(113)
		this->coverMOV->set_x(this->posX);
		HX_STACK_LINE(114)
		this->coverMOV->set_y(((int)246 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(115)
		this->addChild(this->coverMOV);
		HX_STACK_LINE(117)
		::view::elements::SimpleRectangle _g2 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(117)
		this->coverLDI = _g2;
		HX_STACK_LINE(118)
		this->coverLDI->set_x(this->posX);
		HX_STACK_LINE(119)
		this->coverLDI->set_y(((int)278 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(120)
		this->addChild(this->coverLDI);
		HX_STACK_LINE(122)
		::view::elements::SimpleRectangle _g3 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(122)
		this->coverALU = _g3;
		HX_STACK_LINE(123)
		this->coverALU->set_x(this->posX);
		HX_STACK_LINE(124)
		this->coverALU->set_y(((int)311 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(125)
		this->addChild(this->coverALU);
		HX_STACK_LINE(127)
		::view::elements::SimpleRectangle _g4 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(127)
		this->coverSDA = _g4;
		HX_STACK_LINE(128)
		this->coverSDA->set_x(this->posX);
		HX_STACK_LINE(129)
		this->coverSDA->set_y(((int)343 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(130)
		this->addChild(this->coverSDA);
		HX_STACK_LINE(132)
		::view::elements::SimpleRectangle _g5 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(132)
		this->coverLDA = _g5;
		HX_STACK_LINE(133)
		this->coverLDA->set_x(this->posX);
		HX_STACK_LINE(134)
		this->coverLDA->set_y(((int)376 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(135)
		this->addChild(this->coverLDA);
		HX_STACK_LINE(137)
		::view::elements::SimpleRectangle _g6 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(137)
		this->coverINP = _g6;
		HX_STACK_LINE(138)
		this->coverINP->set_x(this->posX);
		HX_STACK_LINE(139)
		this->coverINP->set_y(((int)408 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(140)
		this->addChild(this->coverINP);
		HX_STACK_LINE(142)
		::view::elements::SimpleRectangle _g7 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(142)
		this->coverOUT = _g7;
		HX_STACK_LINE(143)
		this->coverOUT->set_x(this->posX);
		HX_STACK_LINE(144)
		this->coverOUT->set_y(((int)441 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(145)
		this->addChild(this->coverOUT);
		HX_STACK_LINE(147)
		::view::elements::SimpleRectangle _g8 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(147)
		this->coverJE = _g8;
		HX_STACK_LINE(148)
		this->coverJE->set_x(this->posX);
		HX_STACK_LINE(149)
		this->coverJE->set_y(((int)473 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(150)
		this->addChild(this->coverJE);
		HX_STACK_LINE(152)
		::view::elements::SimpleRectangle _g9 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(152)
		this->coverJNE = _g9;
		HX_STACK_LINE(153)
		this->coverJNE->set_x(this->posX);
		HX_STACK_LINE(154)
		this->coverJNE->set_y(((int)506 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(155)
		this->addChild(this->coverJNE);
		HX_STACK_LINE(157)
		::view::elements::SimpleRectangle _g10 = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(157)
		this->coverJMP = _g10;
		HX_STACK_LINE(158)
		this->coverJMP->set_x(this->posX);
		HX_STACK_LINE(159)
		this->coverJMP->set_y(((int)538 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(160)
		this->addChild(this->coverJMP);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ICCover_obj,createComparatorCover,(void))

Void ICCover_obj::createEnabler1Cover( ){
{
		HX_STACK_FRAME("view.component.ICCover","createEnabler1Cover",0x9ede868e,"view.component.ICCover.createEnabler1Cover","view/component/ICCover.hx",163,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		this->w = ((int)20 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(165)
		this->h = ((int)50 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(166)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(166)
		this->coverEnabler1 = _g;
		HX_STACK_LINE(167)
		this->coverEnabler1->set_x(((int)297 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(168)
		this->coverEnabler1->set_y(((int)97 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(169)
		this->addChild(this->coverEnabler1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ICCover_obj,createEnabler1Cover,(void))

Void ICCover_obj::createEnabler2Cover( ){
{
		HX_STACK_FRAME("view.component.ICCover","createEnabler2Cover",0x0539e2ed,"view.component.ICCover.createEnabler2Cover","view/component/ICCover.hx",172,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		this->w = ((int)20 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(174)
		this->h = ((int)50 * ::AppConstants_obj::SCALE_FACTOR);
		HX_STACK_LINE(175)
		::view::elements::SimpleRectangle _g = ::view::elements::SimpleRectangle_obj::__new(this->w,this->h,::AppConstants_obj::BG_COLOR,::view::component::ICCover_obj::ALPHA);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		this->coverEnabler2 = _g;
		HX_STACK_LINE(176)
		this->coverEnabler2->set_x(((int)215 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(177)
		this->coverEnabler2->set_y(((int)138 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(178)
		this->addChild(this->coverEnabler2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ICCover_obj,createEnabler2Cover,(void))

Void ICCover_obj::coverAluLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.ICCover","coverAluLoadCompleteHandler",0x5e6dbf2d,"view.component.ICCover.coverAluLoadCompleteHandler","view/component/ICCover.hx",181,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(182)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(182)
		this->coverAluIC = _g;
		HX_STACK_LINE(183)
		this->coverAluIC->set_name(HX_CSTRING("coverAlu"));
		HX_STACK_LINE(188)
		this->coverAluIC->set_x(((int)740 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(189)
		this->coverAluIC->set_y(((int)155 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(190)
		this->addChild(this->coverAluIC);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,coverAluLoadCompleteHandler,(void))

Void ICCover_obj::coverMultiplexerLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.ICCover","coverMultiplexerLoadCompleteHandler",0x604b2c62,"view.component.ICCover.coverMultiplexerLoadCompleteHandler","view/component/ICCover.hx",193,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(194)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(194)
		this->coverMultiplexer = _g;
		HX_STACK_LINE(195)
		this->coverMultiplexer->set_name(HX_CSTRING("coverMultiplexer"));
		HX_STACK_LINE(200)
		this->coverMultiplexer->set_x(((int)578 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(201)
		this->coverMultiplexer->set_y(((int)158 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(202)
		this->addChild(this->coverMultiplexer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,coverMultiplexerLoadCompleteHandler,(void))

Void ICCover_obj::coverDecoderLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.component.ICCover","coverDecoderLoadCompleteHandler",0x69cef313,"view.component.ICCover.coverDecoderLoadCompleteHandler","view/component/ICCover.hx",205,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(206)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(bmd,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		this->coverDecoder = _g;
		HX_STACK_LINE(207)
		this->coverDecoder->set_name(HX_CSTRING("coverDecoder"));
		HX_STACK_LINE(212)
		this->coverDecoder->set_x(((int)255 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(213)
		this->coverDecoder->set_y(((int)173 * ::AppConstants_obj::SCALE_FACTOR));
		HX_STACK_LINE(214)
		this->addChild(this->coverDecoder);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,coverDecoderLoadCompleteHandler,(void))

Void ICCover_obj::setVisibilityRegister1( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityRegister1",0x9260e8c5,"view.component.ICCover.setVisibilityRegister1","view/component/ICCover.hx",221,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(221)
		this->coverRegister1->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityRegister1,(void))

Void ICCover_obj::setVisibilityRegister2( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityRegister2",0x9260e8c6,"view.component.ICCover.setVisibilityRegister2","view/component/ICCover.hx",225,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(225)
		this->coverRegister2->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityRegister2,(void))

Void ICCover_obj::setVisibilityAccumulator( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityAccumulator",0x57dd455d,"view.component.ICCover.setVisibilityAccumulator","view/component/ICCover.hx",229,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(229)
		this->coverAccumulator->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityAccumulator,(void))

Void ICCover_obj::setVisibilityRam( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityRam",0xb81062f5,"view.component.ICCover.setVisibilityRam","view/component/ICCover.hx",233,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(233)
		this->coverRam->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityRam,(void))

Void ICCover_obj::setVisibilityDisplay( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityDisplay",0x01858ed9,"view.component.ICCover.setVisibilityDisplay","view/component/ICCover.hx",237,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(237)
		this->coverDisplay->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityDisplay,(void))

Void ICCover_obj::setVisibilityMOV( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityMOV",0xb80c87eb,"view.component.ICCover.setVisibilityMOV","view/component/ICCover.hx",241,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(241)
		this->coverMOV->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityMOV,(void))

Void ICCover_obj::setVisibilityLDI( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityLDI",0xb80bbc08,"view.component.ICCover.setVisibilityLDI","view/component/ICCover.hx",245,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(245)
		this->coverLDI->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityLDI,(void))

Void ICCover_obj::setVisibilityALU( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityALU",0xb8036a41,"view.component.ICCover.setVisibilityALU","view/component/ICCover.hx",248,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(249)
		this->coverALU->set_visible(visible);
		HX_STACK_LINE(250)
		this->coverAluIC->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityALU,(void))

Void ICCover_obj::setVisibilitySDA( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilitySDA",0xb8110bc7,"view.component.ICCover.setVisibilitySDA","view/component/ICCover.hx",254,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(254)
		this->coverSDA->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilitySDA,(void))

Void ICCover_obj::setVisibilityLDA( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityLDA",0xb80bbc00,"view.component.ICCover.setVisibilityLDA","view/component/ICCover.hx",258,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(258)
		this->coverLDA->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityLDA,(void))

Void ICCover_obj::setVisibilityINP( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityINP",0xb8097e02,"view.component.ICCover.setVisibilityINP","view/component/ICCover.hx",262,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(262)
		this->coverINP->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityINP,(void))

Void ICCover_obj::setVisibilityOUT( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityOUT",0xb80e11a5,"view.component.ICCover.setVisibilityOUT","view/component/ICCover.hx",266,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(266)
		this->coverOUT->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityOUT,(void))

Void ICCover_obj::setVisibilityJE( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityJE",0x638d3f64,"view.component.ICCover.setVisibilityJE","view/component/ICCover.hx",270,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(270)
		this->coverJE->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityJE,(void))

Void ICCover_obj::setVisibilityJNE( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityJNE",0xb80a4038,"view.component.ICCover.setVisibilityJNE","view/component/ICCover.hx",274,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(274)
		this->coverJNE->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityJNE,(void))

Void ICCover_obj::setVisibilityJMP( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityJMP",0xb80a3f64,"view.component.ICCover.setVisibilityJMP","view/component/ICCover.hx",278,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(278)
		this->coverJMP->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityJMP,(void))

Void ICCover_obj::setVisibilityEnabler1( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityEnabler1",0x1a6f984b,"view.component.ICCover.setVisibilityEnabler1","view/component/ICCover.hx",282,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(282)
		this->coverEnabler1->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityEnabler1,(void))

Void ICCover_obj::setVisibilityEnabler2( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityEnabler2",0x1a6f984c,"view.component.ICCover.setVisibilityEnabler2","view/component/ICCover.hx",286,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(286)
		this->coverEnabler2->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityEnabler2,(void))

Void ICCover_obj::setVisibilityMultiplexer( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityMultiplexer",0x755a2aec,"view.component.ICCover.setVisibilityMultiplexer","view/component/ICCover.hx",290,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(290)
		this->coverMultiplexer->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityMultiplexer,(void))

Void ICCover_obj::setVisibilityDecoder( bool visible){
{
		HX_STACK_FRAME("view.component.ICCover","setVisibilityDecoder",0x30ff901b,"view.component.ICCover.setVisibilityDecoder","view/component/ICCover.hx",294,0x722e2c5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(visible,"visible")
		HX_STACK_LINE(294)
		this->coverDecoder->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,setVisibilityDecoder,(void))

Void ICCover_obj::resetVisibilityAll( Dynamic __o_visible){
Dynamic visible = __o_visible.Default(true);
	HX_STACK_FRAME("view.component.ICCover","resetVisibilityAll",0xc146c8ab,"view.component.ICCover.resetVisibilityAll","view/component/ICCover.hx",297,0x722e2c5d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(visible,"visible")
{
		HX_STACK_LINE(298)
		this->coverRegister1->set_visible(visible);
		HX_STACK_LINE(299)
		this->coverRegister2->set_visible(visible);
		HX_STACK_LINE(300)
		this->coverAccumulator->set_visible(visible);
		HX_STACK_LINE(301)
		this->coverRam->set_visible(visible);
		HX_STACK_LINE(302)
		this->coverDisplay->set_visible(visible);
		HX_STACK_LINE(303)
		this->coverMOV->set_visible(visible);
		HX_STACK_LINE(304)
		this->coverLDI->set_visible(visible);
		HX_STACK_LINE(305)
		this->coverALU->set_visible(visible);
		HX_STACK_LINE(306)
		this->coverSDA->set_visible(visible);
		HX_STACK_LINE(307)
		this->coverLDA->set_visible(visible);
		HX_STACK_LINE(308)
		this->coverINP->set_visible(visible);
		HX_STACK_LINE(309)
		this->coverOUT->set_visible(visible);
		HX_STACK_LINE(310)
		this->coverJE->set_visible(visible);
		HX_STACK_LINE(311)
		this->coverJNE->set_visible(visible);
		HX_STACK_LINE(312)
		this->coverJMP->set_visible(visible);
		HX_STACK_LINE(313)
		this->coverEnabler1->set_visible(visible);
		HX_STACK_LINE(314)
		this->coverEnabler2->set_visible(visible);
		HX_STACK_LINE(315)
		this->coverAluIC->set_visible(visible);
		HX_STACK_LINE(316)
		this->coverMultiplexer->set_visible(visible);
		HX_STACK_LINE(317)
		this->coverDecoder->set_visible(visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ICCover_obj,resetVisibilityAll,(void))

Float ICCover_obj::ALPHA;


ICCover_obj::ICCover_obj()
{
}

void ICCover_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ICCover);
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
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ICCover_obj::__Visit(HX_VISIT_PARAMS)
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
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ICCover_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ICCover_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"coverAluIC") ) { coverAluIC=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"coverDecoder") ) { coverDecoder=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"coverMultiplexer") ) { coverMultiplexer=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ICCover_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsFloat,(int)offsetof(ICCover_obj,posX),HX_CSTRING("posX")},
	{hx::fsFloat,(int)offsetof(ICCover_obj,posY),HX_CSTRING("posY")},
	{hx::fsFloat,(int)offsetof(ICCover_obj,w),HX_CSTRING("w")},
	{hx::fsFloat,(int)offsetof(ICCover_obj,h),HX_CSTRING("h")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverRegister1),HX_CSTRING("coverRegister1")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverRegister2),HX_CSTRING("coverRegister2")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverAccumulator),HX_CSTRING("coverAccumulator")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverEnabler1),HX_CSTRING("coverEnabler1")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverEnabler2),HX_CSTRING("coverEnabler2")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(ICCover_obj,coverAluIC),HX_CSTRING("coverAluIC")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(ICCover_obj,coverMultiplexer),HX_CSTRING("coverMultiplexer")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(ICCover_obj,coverDecoder),HX_CSTRING("coverDecoder")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverRam),HX_CSTRING("coverRam")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverDisplay),HX_CSTRING("coverDisplay")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverMOV),HX_CSTRING("coverMOV")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverLDI),HX_CSTRING("coverLDI")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverALU),HX_CSTRING("coverALU")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverSDA),HX_CSTRING("coverSDA")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverLDA),HX_CSTRING("coverLDA")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverINP),HX_CSTRING("coverINP")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverOUT),HX_CSTRING("coverOUT")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverJE),HX_CSTRING("coverJE")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverJNE),HX_CSTRING("coverJNE")},
	{hx::fsObject /*::view::elements::SimpleRectangle*/ ,(int)offsetof(ICCover_obj,coverJMP),HX_CSTRING("coverJMP")},
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
	HX_MARK_MEMBER_NAME(ICCover_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ICCover_obj::ALPHA,"ALPHA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ICCover_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ICCover_obj::ALPHA,"ALPHA");
};

#endif

Class ICCover_obj::__mClass;

void ICCover_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.component.ICCover"), hx::TCanCast< ICCover_obj> ,sStaticFields,sMemberFields,
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

void ICCover_obj::__boot()
{
	ALPHA= 0.8;
}

} // end namespace view
} // end namespace component
