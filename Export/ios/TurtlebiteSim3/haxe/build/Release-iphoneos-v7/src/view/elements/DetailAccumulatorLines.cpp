#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
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
#ifndef INCLUDED_view_elements_DetailAccumulatorLines
#include <view/elements/DetailAccumulatorLines.h>
#endif
namespace view{
namespace elements{

Void DetailAccumulatorLines_obj::__construct()
{
HX_STACK_FRAME("view.elements.DetailAccumulatorLines","new",0x369cd9ea,"view.elements.DetailAccumulatorLines.new","view/elements/DetailAccumulatorLines.hx",45,0x52981ce6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(46)
	super::__construct();
	HX_STACK_LINE(47)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null(),null(),null());
}
;
	return null();
}

//DetailAccumulatorLines_obj::~DetailAccumulatorLines_obj() { }

Dynamic DetailAccumulatorLines_obj::__CreateEmpty() { return  new DetailAccumulatorLines_obj; }
hx::ObjectPtr< DetailAccumulatorLines_obj > DetailAccumulatorLines_obj::__new()
{  hx::ObjectPtr< DetailAccumulatorLines_obj > result = new DetailAccumulatorLines_obj();
	result->__construct();
	return result;}

Dynamic DetailAccumulatorLines_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DetailAccumulatorLines_obj > result = new DetailAccumulatorLines_obj();
	result->__construct();
	return result;}

Void DetailAccumulatorLines_obj::addedToStageHandler( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","addedToStageHandler",0x7f365531,"view.elements.DetailAccumulatorLines.addedToStageHandler","view/elements/DetailAccumulatorLines.hx",50,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(51)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->addedToStageHandler_dyn(),null());
		HX_STACK_LINE(52)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_enabler_out_0.png")),this->enablerOut0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(53)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_enabler_out_1.png")),this->enablerOut1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(54)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_enabler_out_2.png")),this->enablerOut2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(55)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_enabler_out_3.png")),this->enablerOut3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(56)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_memory_in_0.png")),this->memoryIn0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(57)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_memory_in_1.png")),this->memoryIn1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(58)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_memory_in_2.png")),this->memoryIn2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(59)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_memory_in_3.png")),this->memoryIn3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(60)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_memory_out_0.png")),this->memoryOut0LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(61)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_memory_out_1.png")),this->memoryOut1LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(62)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_memory_out_2.png")),this->memoryOut2LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(63)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_memory_out_3.png")),this->memoryOut3LoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(64)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_memory_set.png")),this->memorySetLoadCompleteHandler_dyn(),null());
		HX_STACK_LINE(65)
		::openfl::_legacy::Assets_obj::loadBitmapData(((HX_CSTRING("assets/") + ::AppConstants_obj::ASSET_FOLDER) + HX_CSTRING("/accuPopup_enabler_enable.png")),this->enableLoadCompleteHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,addedToStageHandler,(void))

Void DetailAccumulatorLines_obj::enablerOut0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","enablerOut0LoadCompleteHandler",0x34ac79b0,"view.elements.DetailAccumulatorLines.enablerOut0LoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",72,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(73)
		this->enablerOut0BmpData = bmd;
		HX_STACK_LINE(74)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->enablerOut0BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		this->enablerOut0 = _g;
		HX_STACK_LINE(75)
		this->enablerOut0->set_name(HX_CSTRING("enablerOut0"));
		HX_STACK_LINE(76)
		Float _g1 = this->enablerOut0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		this->enablerOut0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,enablerOut0LoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::enablerOut1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","enablerOut1LoadCompleteHandler",0x9b111e4f,"view.elements.DetailAccumulatorLines.enablerOut1LoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",79,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(80)
		this->enablerOut1BmpData = bmd;
		HX_STACK_LINE(81)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->enablerOut1BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		this->enablerOut1 = _g;
		HX_STACK_LINE(82)
		this->enablerOut1->set_name(HX_CSTRING("enablerOut1"));
		HX_STACK_LINE(83)
		Float _g1 = this->enablerOut1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(83)
		this->enablerOut1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,enablerOut1LoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::enablerOut2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","enablerOut2LoadCompleteHandler",0x0175c2ee,"view.elements.DetailAccumulatorLines.enablerOut2LoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",86,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(87)
		this->enablerOut2BmpData = bmd;
		HX_STACK_LINE(88)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->enablerOut2BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		this->enablerOut2 = _g;
		HX_STACK_LINE(89)
		this->enablerOut2->set_name(HX_CSTRING("enablerOut2"));
		HX_STACK_LINE(90)
		Float _g1 = this->enablerOut2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(90)
		this->enablerOut2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,enablerOut2LoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::enablerOut3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","enablerOut3LoadCompleteHandler",0x67da678d,"view.elements.DetailAccumulatorLines.enablerOut3LoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",93,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(94)
		this->enablerOut3BmpData = bmd;
		HX_STACK_LINE(95)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->enablerOut3BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(95)
		this->enablerOut3 = _g;
		HX_STACK_LINE(96)
		this->enablerOut3->set_name(HX_CSTRING("enablerOut3"));
		HX_STACK_LINE(97)
		Float _g1 = this->enablerOut3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(97)
		this->enablerOut3->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,enablerOut3LoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::memoryIn0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","memoryIn0LoadCompleteHandler",0xe05e43b7,"view.elements.DetailAccumulatorLines.memoryIn0LoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",104,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(105)
		this->memoryIn0BmpData = bmd;
		HX_STACK_LINE(106)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->memoryIn0BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		this->memoryIn0 = _g;
		HX_STACK_LINE(107)
		this->memoryIn0->set_name(HX_CSTRING("memoryIn0"));
		HX_STACK_LINE(108)
		Float _g1 = this->memoryIn0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(108)
		this->memoryIn0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,memoryIn0LoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::memoryIn1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","memoryIn1LoadCompleteHandler",0x46c2e856,"view.elements.DetailAccumulatorLines.memoryIn1LoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",111,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(112)
		this->memoryIn1BmpData = bmd;
		HX_STACK_LINE(113)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->memoryIn1BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		this->memoryIn1 = _g;
		HX_STACK_LINE(114)
		this->memoryIn1->set_name(HX_CSTRING("memoryIn1"));
		HX_STACK_LINE(115)
		Float _g1 = this->memoryIn1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(115)
		this->memoryIn1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,memoryIn1LoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::memoryIn2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","memoryIn2LoadCompleteHandler",0xad278cf5,"view.elements.DetailAccumulatorLines.memoryIn2LoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",118,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(119)
		this->memoryIn2BmpData = bmd;
		HX_STACK_LINE(120)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->memoryIn2BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		this->memoryIn2 = _g;
		HX_STACK_LINE(121)
		this->memoryIn2->set_name(HX_CSTRING("memoryIn2"));
		HX_STACK_LINE(122)
		Float _g1 = this->memoryIn2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(122)
		this->memoryIn2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,memoryIn2LoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::memoryIn3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","memoryIn3LoadCompleteHandler",0x138c3194,"view.elements.DetailAccumulatorLines.memoryIn3LoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",125,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(126)
		this->memoryIn3BmpData = bmd;
		HX_STACK_LINE(127)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->memoryIn3BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(127)
		this->memoryIn3 = _g;
		HX_STACK_LINE(128)
		this->memoryIn3->set_name(HX_CSTRING("memoryIn3"));
		HX_STACK_LINE(129)
		Float _g1 = this->memoryIn3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(129)
		this->memoryIn3->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,memoryIn3LoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::memoryOut0LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","memoryOut0LoadCompleteHandler",0x77ea94d2,"view.elements.DetailAccumulatorLines.memoryOut0LoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",136,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(137)
		this->memoryOut0BmpData = bmd;
		HX_STACK_LINE(138)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->memoryOut0BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		this->memoryOut0 = _g;
		HX_STACK_LINE(139)
		this->memoryOut0->set_name(HX_CSTRING("memoryOut0"));
		HX_STACK_LINE(140)
		Float _g1 = this->memoryOut0->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(140)
		this->memoryOut0->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,memoryOut0LoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::memoryOut1LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","memoryOut1LoadCompleteHandler",0xde4f3971,"view.elements.DetailAccumulatorLines.memoryOut1LoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",143,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(144)
		this->memoryOut1BmpData = bmd;
		HX_STACK_LINE(145)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->memoryOut1BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(145)
		this->memoryOut1 = _g;
		HX_STACK_LINE(146)
		this->memoryOut1->set_name(HX_CSTRING("memoryOut1"));
		HX_STACK_LINE(147)
		Float _g1 = this->memoryOut1->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(147)
		this->memoryOut1->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,memoryOut1LoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::memoryOut2LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","memoryOut2LoadCompleteHandler",0x44b3de10,"view.elements.DetailAccumulatorLines.memoryOut2LoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",150,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(151)
		this->memoryOut2BmpData = bmd;
		HX_STACK_LINE(152)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->memoryOut2BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(152)
		this->memoryOut2 = _g;
		HX_STACK_LINE(153)
		this->memoryOut2->set_name(HX_CSTRING("memoryOut2"));
		HX_STACK_LINE(154)
		Float _g1 = this->memoryOut2->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(154)
		this->memoryOut2->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,memoryOut2LoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::memoryOut3LoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","memoryOut3LoadCompleteHandler",0xab1882af,"view.elements.DetailAccumulatorLines.memoryOut3LoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",157,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(158)
		this->memoryOut3BmpData = bmd;
		HX_STACK_LINE(159)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->memoryOut3BmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(159)
		this->memoryOut3 = _g;
		HX_STACK_LINE(160)
		this->memoryOut3->set_name(HX_CSTRING("memoryOut3"));
		HX_STACK_LINE(161)
		Float _g1 = this->memoryOut3->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(161)
		this->memoryOut3->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,memoryOut3LoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::enableLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","enableLoadCompleteHandler",0xb77de0d2,"view.elements.DetailAccumulatorLines.enableLoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",168,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(169)
		this->enableBmpData = bmd;
		HX_STACK_LINE(170)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->enableBmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(170)
		this->enable = _g;
		HX_STACK_LINE(171)
		this->enable->set_name(HX_CSTRING("enable"));
		HX_STACK_LINE(172)
		Float _g1 = this->enable->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(172)
		this->enable->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,enableLoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::memorySetLoadCompleteHandler( ::openfl::_legacy::display::BitmapData bmd){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","memorySetLoadCompleteHandler",0xff224b20,"view.elements.DetailAccumulatorLines.memorySetLoadCompleteHandler","view/elements/DetailAccumulatorLines.hx",175,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmd,"bmd")
		HX_STACK_LINE(176)
		this->memorySetBmpData = bmd;
		HX_STACK_LINE(177)
		::openfl::_legacy::display::Bitmap _g = ::openfl::_legacy::display::Bitmap_obj::__new(this->memorySetBmpData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(177)
		this->memorySet = _g;
		HX_STACK_LINE(178)
		this->memorySet->set_name(HX_CSTRING("memorySet"));
		HX_STACK_LINE(179)
		Float _g1 = this->memorySet->set_scaleY(::AppConstants_obj::SCALE_FACTOR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(179)
		this->memorySet->set_scaleX(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,memorySetLoadCompleteHandler,(void))

Void DetailAccumulatorLines_obj::hideMemoryOutLines( ){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","hideMemoryOutLines",0x72aef4ca,"view.elements.DetailAccumulatorLines.hideMemoryOutLines","view/elements/DetailAccumulatorLines.hx",182,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(183)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("memoryOut0"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(183)
		if (((_g != null()))){
			HX_STACK_LINE(184)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("memoryOut0"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(184)
			this->removeChild(_g1);
		}
		HX_STACK_LINE(186)
		::openfl::_legacy::display::DisplayObject _g2 = this->getChildByName(HX_CSTRING("memoryOut1"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(186)
		if (((_g2 != null()))){
			HX_STACK_LINE(187)
			::openfl::_legacy::display::DisplayObject _g3 = this->getChildByName(HX_CSTRING("memoryOut1"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(187)
			this->removeChild(_g3);
		}
		HX_STACK_LINE(189)
		::openfl::_legacy::display::DisplayObject _g4 = this->getChildByName(HX_CSTRING("memoryOut2"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(189)
		if (((_g4 != null()))){
			HX_STACK_LINE(190)
			::openfl::_legacy::display::DisplayObject _g5 = this->getChildByName(HX_CSTRING("memoryOut2"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(190)
			this->removeChild(_g5);
		}
		HX_STACK_LINE(192)
		::openfl::_legacy::display::DisplayObject _g6 = this->getChildByName(HX_CSTRING("memoryOut3"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(192)
		if (((_g6 != null()))){
			HX_STACK_LINE(193)
			::openfl::_legacy::display::DisplayObject _g7 = this->getChildByName(HX_CSTRING("memoryOut3"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(193)
			this->removeChild(_g7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulatorLines_obj,hideMemoryOutLines,(void))

Void DetailAccumulatorLines_obj::showInputLines( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","showInputLines",0x15c42ba8,"view.elements.DetailAccumulatorLines.showInputLines","view/elements/DetailAccumulatorLines.hx",201,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(202)
		this->hideAllInputLines();
		HX_STACK_LINE(203)
		if (((codeArr->__get((int)4) == true))){
			HX_STACK_LINE(204)
			this->addChild(this->memoryIn3);
		}
		HX_STACK_LINE(206)
		if (((codeArr->__get((int)5) == true))){
			HX_STACK_LINE(207)
			this->addChild(this->memoryIn2);
		}
		HX_STACK_LINE(209)
		if (((codeArr->__get((int)6) == true))){
			HX_STACK_LINE(210)
			this->addChild(this->memoryIn1);
		}
		HX_STACK_LINE(212)
		if (((codeArr->__get((int)7) == true))){
			HX_STACK_LINE(213)
			this->addChild(this->memoryIn0);
		}
		HX_STACK_LINE(215)
		this->hideMemoryOutLines();
		HX_STACK_LINE(216)
		if (((codeArr->__get((int)4) == true))){
			HX_STACK_LINE(217)
			this->addChild(this->memoryOut3);
		}
		HX_STACK_LINE(219)
		if (((codeArr->__get((int)5) == true))){
			HX_STACK_LINE(220)
			this->addChild(this->memoryOut2);
		}
		HX_STACK_LINE(222)
		if (((codeArr->__get((int)6) == true))){
			HX_STACK_LINE(223)
			this->addChild(this->memoryOut1);
		}
		HX_STACK_LINE(225)
		if (((codeArr->__get((int)7) == true))){
			HX_STACK_LINE(226)
			this->addChild(this->memoryOut0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,showInputLines,(void))

Void DetailAccumulatorLines_obj::hideAllInputLines( ){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","hideAllInputLines",0x0d2a66fe,"view.elements.DetailAccumulatorLines.hideAllInputLines","view/elements/DetailAccumulatorLines.hx",231,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(231)
		while((true)){
			HX_STACK_LINE(231)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(231)
				break;
			}
			HX_STACK_LINE(231)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(232)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName((HX_CSTRING("memoryIn") + i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(232)
			if (((_g1 != null()))){
				HX_STACK_LINE(233)
				::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName((HX_CSTRING("memoryIn") + i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(233)
				this->removeChild(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulatorLines_obj,hideAllInputLines,(void))

Void DetailAccumulatorLines_obj::showEnablerOutLines( Array< bool > codeArr){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","showEnablerOutLines",0x025ee74d,"view.elements.DetailAccumulatorLines.showEnablerOutLines","view/elements/DetailAccumulatorLines.hx",238,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(codeArr,"codeArr")
		HX_STACK_LINE(239)
		this->hideEnablerOutLines();
		HX_STACK_LINE(240)
		if (((codeArr->__get((int)4) == true))){
			HX_STACK_LINE(241)
			this->addChild(this->enablerOut3);
		}
		HX_STACK_LINE(243)
		if (((codeArr->__get((int)5) == true))){
			HX_STACK_LINE(244)
			this->addChild(this->enablerOut2);
		}
		HX_STACK_LINE(246)
		if (((codeArr->__get((int)6) == true))){
			HX_STACK_LINE(247)
			this->addChild(this->enablerOut1);
		}
		HX_STACK_LINE(249)
		if (((codeArr->__get((int)7) == true))){
			HX_STACK_LINE(250)
			this->addChild(this->enablerOut0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DetailAccumulatorLines_obj,showEnablerOutLines,(void))

Void DetailAccumulatorLines_obj::hideEnablerOutLines( ){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","hideEnablerOutLines",0x3b560d28,"view.elements.DetailAccumulatorLines.hideEnablerOutLines","view/elements/DetailAccumulatorLines.hx",254,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(255)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("enablerOut0"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(255)
		if (((_g != null()))){
			HX_STACK_LINE(256)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("enablerOut0"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(256)
			this->removeChild(_g1);
		}
		HX_STACK_LINE(258)
		::openfl::_legacy::display::DisplayObject _g2 = this->getChildByName(HX_CSTRING("enablerOut1"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(258)
		if (((_g2 != null()))){
			HX_STACK_LINE(259)
			::openfl::_legacy::display::DisplayObject _g3 = this->getChildByName(HX_CSTRING("enablerOut1"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(259)
			this->removeChild(_g3);
		}
		HX_STACK_LINE(261)
		::openfl::_legacy::display::DisplayObject _g4 = this->getChildByName(HX_CSTRING("enablerOut2"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(261)
		if (((_g4 != null()))){
			HX_STACK_LINE(262)
			::openfl::_legacy::display::DisplayObject _g5 = this->getChildByName(HX_CSTRING("enablerOut2"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(262)
			this->removeChild(_g5);
		}
		HX_STACK_LINE(264)
		::openfl::_legacy::display::DisplayObject _g6 = this->getChildByName(HX_CSTRING("enablerOut3"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(264)
		if (((_g6 != null()))){
			HX_STACK_LINE(265)
			::openfl::_legacy::display::DisplayObject _g7 = this->getChildByName(HX_CSTRING("enablerOut3"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(265)
			this->removeChild(_g7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulatorLines_obj,hideEnablerOutLines,(void))

Void DetailAccumulatorLines_obj::showEnableLine( ){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","showEnableLine",0xc388762a,"view.elements.DetailAccumulatorLines.showEnableLine","view/elements/DetailAccumulatorLines.hx",269,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(270)
		this->hideEnableLine();
		HX_STACK_LINE(272)
		this->addChild(this->enable);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulatorLines_obj,showEnableLine,(void))

Void DetailAccumulatorLines_obj::hideEnableLine( ){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","hideEnableLine",0xc8f91e2f,"view.elements.DetailAccumulatorLines.hideEnableLine","view/elements/DetailAccumulatorLines.hx",275,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(276)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("enable"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		if (((_g != null()))){
			HX_STACK_LINE(277)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("enable"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(277)
			this->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulatorLines_obj,hideEnableLine,(void))

Void DetailAccumulatorLines_obj::showSetLine( ){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","showSetLine",0x43ef98c3,"view.elements.DetailAccumulatorLines.showSetLine","view/elements/DetailAccumulatorLines.hx",281,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(282)
		this->addChild(this->memorySet);
		HX_STACK_LINE(283)
		this->hideMemoryOutLines();
		HX_STACK_LINE(284)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("memoryIn0"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(284)
		if (((_g != null()))){
			HX_STACK_LINE(285)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("memoryOut0"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(285)
			if (((_g1 == null()))){
				HX_STACK_LINE(286)
				this->addChild(this->memoryOut0);
			}
		}
		HX_STACK_LINE(289)
		::openfl::_legacy::display::DisplayObject _g2 = this->getChildByName(HX_CSTRING("memoryIn1"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(289)
		if (((_g2 != null()))){
			HX_STACK_LINE(290)
			::openfl::_legacy::display::DisplayObject _g3 = this->getChildByName(HX_CSTRING("memoryOut1"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(290)
			if (((_g3 == null()))){
				HX_STACK_LINE(291)
				this->addChild(this->memoryOut1);
			}
		}
		HX_STACK_LINE(294)
		::openfl::_legacy::display::DisplayObject _g4 = this->getChildByName(HX_CSTRING("memoryIn2"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(294)
		if (((_g4 != null()))){
			HX_STACK_LINE(295)
			::openfl::_legacy::display::DisplayObject _g5 = this->getChildByName(HX_CSTRING("memoryOut2"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(295)
			if (((_g5 == null()))){
				HX_STACK_LINE(296)
				this->addChild(this->memoryOut2);
			}
		}
		HX_STACK_LINE(299)
		::openfl::_legacy::display::DisplayObject _g6 = this->getChildByName(HX_CSTRING("memoryIn3"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(299)
		if (((_g6 != null()))){
			HX_STACK_LINE(300)
			::openfl::_legacy::display::DisplayObject _g7 = this->getChildByName(HX_CSTRING("memoryOut3"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(300)
			if (((_g7 == null()))){
				HX_STACK_LINE(301)
				this->addChild(this->memoryOut3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulatorLines_obj,showSetLine,(void))

Void DetailAccumulatorLines_obj::hideSetLine( ){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","hideSetLine",0x64bfeb9e,"view.elements.DetailAccumulatorLines.hideSetLine","view/elements/DetailAccumulatorLines.hx",306,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(307)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("memorySet"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(307)
		if (((_g != null()))){
			HX_STACK_LINE(308)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("memorySet"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(308)
			this->removeChild(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulatorLines_obj,hideSetLine,(void))

Void DetailAccumulatorLines_obj::destroy( ){
{
		HX_STACK_FRAME("view.elements.DetailAccumulatorLines","destroy",0xc3d3c384,"view.elements.DetailAccumulatorLines.destroy","view/elements/DetailAccumulatorLines.hx",312,0x52981ce6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(313)
		this->enablerOut0BmpData->dispose();
		HX_STACK_LINE(314)
		this->enablerOut1BmpData->dispose();
		HX_STACK_LINE(315)
		this->enablerOut2BmpData->dispose();
		HX_STACK_LINE(316)
		this->enablerOut3BmpData->dispose();
		HX_STACK_LINE(318)
		this->memoryIn0BmpData->dispose();
		HX_STACK_LINE(319)
		this->memoryIn1BmpData->dispose();
		HX_STACK_LINE(320)
		this->memoryIn2BmpData->dispose();
		HX_STACK_LINE(321)
		this->memoryIn3BmpData->dispose();
		HX_STACK_LINE(323)
		this->memoryOut0BmpData->dispose();
		HX_STACK_LINE(324)
		this->memoryOut1BmpData->dispose();
		HX_STACK_LINE(325)
		this->memoryOut2BmpData->dispose();
		HX_STACK_LINE(326)
		this->memoryOut3BmpData->dispose();
		HX_STACK_LINE(328)
		this->enableBmpData->dispose();
		HX_STACK_LINE(329)
		this->memorySetBmpData->dispose();
		HX_STACK_LINE(332)
		::openfl::_legacy::display::DisplayObject _g = this->getChildByName(HX_CSTRING("memoryIn0"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(332)
		if (((_g != null()))){
			HX_STACK_LINE(333)
			::openfl::_legacy::display::DisplayObject _g1 = this->getChildByName(HX_CSTRING("memoryIn0"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(333)
			this->removeChild(_g1);
		}
		HX_STACK_LINE(335)
		::openfl::_legacy::display::DisplayObject _g2 = this->getChildByName(HX_CSTRING("memoryIn1"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(335)
		if (((_g2 != null()))){
			HX_STACK_LINE(336)
			::openfl::_legacy::display::DisplayObject _g3 = this->getChildByName(HX_CSTRING("memoryIn1"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(336)
			this->removeChild(_g3);
		}
		HX_STACK_LINE(338)
		::openfl::_legacy::display::DisplayObject _g4 = this->getChildByName(HX_CSTRING("memoryIn2"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(338)
		if (((_g4 != null()))){
			HX_STACK_LINE(339)
			::openfl::_legacy::display::DisplayObject _g5 = this->getChildByName(HX_CSTRING("memoryIn2"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(339)
			this->removeChild(_g5);
		}
		HX_STACK_LINE(341)
		::openfl::_legacy::display::DisplayObject _g6 = this->getChildByName(HX_CSTRING("memoryIn3"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(341)
		if (((_g6 != null()))){
			HX_STACK_LINE(342)
			::openfl::_legacy::display::DisplayObject _g7 = this->getChildByName(HX_CSTRING("memoryIn3"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(342)
			this->removeChild(_g7);
		}
		HX_STACK_LINE(344)
		this->hideMemoryOutLines();
		HX_STACK_LINE(345)
		this->hideEnablerOutLines();
		HX_STACK_LINE(346)
		::openfl::_legacy::display::DisplayObject _g8 = this->getChildByName(HX_CSTRING("enable"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(346)
		if (((_g8 != null()))){
			HX_STACK_LINE(347)
			::openfl::_legacy::display::DisplayObject _g9 = this->getChildByName(HX_CSTRING("enable"));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(347)
			this->removeChild(_g9);
		}
		HX_STACK_LINE(349)
		::openfl::_legacy::display::DisplayObject _g10 = this->getChildByName(HX_CSTRING("memorySet"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(349)
		if (((_g10 != null()))){
			HX_STACK_LINE(350)
			::openfl::_legacy::display::DisplayObject _g11 = this->getChildByName(HX_CSTRING("memorySet"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(350)
			this->removeChild(_g11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DetailAccumulatorLines_obj,destroy,(void))


DetailAccumulatorLines_obj::DetailAccumulatorLines_obj()
{
}

void DetailAccumulatorLines_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DetailAccumulatorLines);
	HX_MARK_MEMBER_NAME(enablerOut0,"enablerOut0");
	HX_MARK_MEMBER_NAME(enablerOut0BmpData,"enablerOut0BmpData");
	HX_MARK_MEMBER_NAME(enablerOut1,"enablerOut1");
	HX_MARK_MEMBER_NAME(enablerOut1BmpData,"enablerOut1BmpData");
	HX_MARK_MEMBER_NAME(enablerOut2,"enablerOut2");
	HX_MARK_MEMBER_NAME(enablerOut2BmpData,"enablerOut2BmpData");
	HX_MARK_MEMBER_NAME(enablerOut3,"enablerOut3");
	HX_MARK_MEMBER_NAME(enablerOut3BmpData,"enablerOut3BmpData");
	HX_MARK_MEMBER_NAME(memoryIn0,"memoryIn0");
	HX_MARK_MEMBER_NAME(memoryIn0BmpData,"memoryIn0BmpData");
	HX_MARK_MEMBER_NAME(memoryIn1,"memoryIn1");
	HX_MARK_MEMBER_NAME(memoryIn1BmpData,"memoryIn1BmpData");
	HX_MARK_MEMBER_NAME(memoryIn2,"memoryIn2");
	HX_MARK_MEMBER_NAME(memoryIn2BmpData,"memoryIn2BmpData");
	HX_MARK_MEMBER_NAME(memoryIn3,"memoryIn3");
	HX_MARK_MEMBER_NAME(memoryIn3BmpData,"memoryIn3BmpData");
	HX_MARK_MEMBER_NAME(memoryOut0,"memoryOut0");
	HX_MARK_MEMBER_NAME(memoryOut0BmpData,"memoryOut0BmpData");
	HX_MARK_MEMBER_NAME(memoryOut1,"memoryOut1");
	HX_MARK_MEMBER_NAME(memoryOut1BmpData,"memoryOut1BmpData");
	HX_MARK_MEMBER_NAME(memoryOut2,"memoryOut2");
	HX_MARK_MEMBER_NAME(memoryOut2BmpData,"memoryOut2BmpData");
	HX_MARK_MEMBER_NAME(memoryOut3,"memoryOut3");
	HX_MARK_MEMBER_NAME(memoryOut3BmpData,"memoryOut3BmpData");
	HX_MARK_MEMBER_NAME(enable,"enable");
	HX_MARK_MEMBER_NAME(enableBmpData,"enableBmpData");
	HX_MARK_MEMBER_NAME(memorySet,"memorySet");
	HX_MARK_MEMBER_NAME(memorySetBmpData,"memorySetBmpData");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DetailAccumulatorLines_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enablerOut0,"enablerOut0");
	HX_VISIT_MEMBER_NAME(enablerOut0BmpData,"enablerOut0BmpData");
	HX_VISIT_MEMBER_NAME(enablerOut1,"enablerOut1");
	HX_VISIT_MEMBER_NAME(enablerOut1BmpData,"enablerOut1BmpData");
	HX_VISIT_MEMBER_NAME(enablerOut2,"enablerOut2");
	HX_VISIT_MEMBER_NAME(enablerOut2BmpData,"enablerOut2BmpData");
	HX_VISIT_MEMBER_NAME(enablerOut3,"enablerOut3");
	HX_VISIT_MEMBER_NAME(enablerOut3BmpData,"enablerOut3BmpData");
	HX_VISIT_MEMBER_NAME(memoryIn0,"memoryIn0");
	HX_VISIT_MEMBER_NAME(memoryIn0BmpData,"memoryIn0BmpData");
	HX_VISIT_MEMBER_NAME(memoryIn1,"memoryIn1");
	HX_VISIT_MEMBER_NAME(memoryIn1BmpData,"memoryIn1BmpData");
	HX_VISIT_MEMBER_NAME(memoryIn2,"memoryIn2");
	HX_VISIT_MEMBER_NAME(memoryIn2BmpData,"memoryIn2BmpData");
	HX_VISIT_MEMBER_NAME(memoryIn3,"memoryIn3");
	HX_VISIT_MEMBER_NAME(memoryIn3BmpData,"memoryIn3BmpData");
	HX_VISIT_MEMBER_NAME(memoryOut0,"memoryOut0");
	HX_VISIT_MEMBER_NAME(memoryOut0BmpData,"memoryOut0BmpData");
	HX_VISIT_MEMBER_NAME(memoryOut1,"memoryOut1");
	HX_VISIT_MEMBER_NAME(memoryOut1BmpData,"memoryOut1BmpData");
	HX_VISIT_MEMBER_NAME(memoryOut2,"memoryOut2");
	HX_VISIT_MEMBER_NAME(memoryOut2BmpData,"memoryOut2BmpData");
	HX_VISIT_MEMBER_NAME(memoryOut3,"memoryOut3");
	HX_VISIT_MEMBER_NAME(memoryOut3BmpData,"memoryOut3BmpData");
	HX_VISIT_MEMBER_NAME(enable,"enable");
	HX_VISIT_MEMBER_NAME(enableBmpData,"enableBmpData");
	HX_VISIT_MEMBER_NAME(memorySet,"memorySet");
	HX_VISIT_MEMBER_NAME(memorySetBmpData,"memorySetBmpData");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DetailAccumulatorLines_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"memoryIn0") ) { return memoryIn0; }
		if (HX_FIELD_EQ(inName,"memoryIn1") ) { return memoryIn1; }
		if (HX_FIELD_EQ(inName,"memoryIn2") ) { return memoryIn2; }
		if (HX_FIELD_EQ(inName,"memoryIn3") ) { return memoryIn3; }
		if (HX_FIELD_EQ(inName,"memorySet") ) { return memorySet; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"memoryOut0") ) { return memoryOut0; }
		if (HX_FIELD_EQ(inName,"memoryOut1") ) { return memoryOut1; }
		if (HX_FIELD_EQ(inName,"memoryOut2") ) { return memoryOut2; }
		if (HX_FIELD_EQ(inName,"memoryOut3") ) { return memoryOut3; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enablerOut0") ) { return enablerOut0; }
		if (HX_FIELD_EQ(inName,"enablerOut1") ) { return enablerOut1; }
		if (HX_FIELD_EQ(inName,"enablerOut2") ) { return enablerOut2; }
		if (HX_FIELD_EQ(inName,"enablerOut3") ) { return enablerOut3; }
		if (HX_FIELD_EQ(inName,"showSetLine") ) { return showSetLine_dyn(); }
		if (HX_FIELD_EQ(inName,"hideSetLine") ) { return hideSetLine_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"enableBmpData") ) { return enableBmpData; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"showInputLines") ) { return showInputLines_dyn(); }
		if (HX_FIELD_EQ(inName,"showEnableLine") ) { return showEnableLine_dyn(); }
		if (HX_FIELD_EQ(inName,"hideEnableLine") ) { return hideEnableLine_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"memoryIn0BmpData") ) { return memoryIn0BmpData; }
		if (HX_FIELD_EQ(inName,"memoryIn1BmpData") ) { return memoryIn1BmpData; }
		if (HX_FIELD_EQ(inName,"memoryIn2BmpData") ) { return memoryIn2BmpData; }
		if (HX_FIELD_EQ(inName,"memoryIn3BmpData") ) { return memoryIn3BmpData; }
		if (HX_FIELD_EQ(inName,"memorySetBmpData") ) { return memorySetBmpData; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"memoryOut0BmpData") ) { return memoryOut0BmpData; }
		if (HX_FIELD_EQ(inName,"memoryOut1BmpData") ) { return memoryOut1BmpData; }
		if (HX_FIELD_EQ(inName,"memoryOut2BmpData") ) { return memoryOut2BmpData; }
		if (HX_FIELD_EQ(inName,"memoryOut3BmpData") ) { return memoryOut3BmpData; }
		if (HX_FIELD_EQ(inName,"hideAllInputLines") ) { return hideAllInputLines_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enablerOut0BmpData") ) { return enablerOut0BmpData; }
		if (HX_FIELD_EQ(inName,"enablerOut1BmpData") ) { return enablerOut1BmpData; }
		if (HX_FIELD_EQ(inName,"enablerOut2BmpData") ) { return enablerOut2BmpData; }
		if (HX_FIELD_EQ(inName,"enablerOut3BmpData") ) { return enablerOut3BmpData; }
		if (HX_FIELD_EQ(inName,"hideMemoryOutLines") ) { return hideMemoryOutLines_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addedToStageHandler") ) { return addedToStageHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"showEnablerOutLines") ) { return showEnablerOutLines_dyn(); }
		if (HX_FIELD_EQ(inName,"hideEnablerOutLines") ) { return hideEnablerOutLines_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"enableLoadCompleteHandler") ) { return enableLoadCompleteHandler_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"memoryIn0LoadCompleteHandler") ) { return memoryIn0LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"memoryIn1LoadCompleteHandler") ) { return memoryIn1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"memoryIn2LoadCompleteHandler") ) { return memoryIn2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"memoryIn3LoadCompleteHandler") ) { return memoryIn3LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"memorySetLoadCompleteHandler") ) { return memorySetLoadCompleteHandler_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"memoryOut0LoadCompleteHandler") ) { return memoryOut0LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"memoryOut1LoadCompleteHandler") ) { return memoryOut1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"memoryOut2LoadCompleteHandler") ) { return memoryOut2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"memoryOut3LoadCompleteHandler") ) { return memoryOut3LoadCompleteHandler_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"enablerOut0LoadCompleteHandler") ) { return enablerOut0LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"enablerOut1LoadCompleteHandler") ) { return enablerOut1LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"enablerOut2LoadCompleteHandler") ) { return enablerOut2LoadCompleteHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"enablerOut3LoadCompleteHandler") ) { return enablerOut3LoadCompleteHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DetailAccumulatorLines_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { enable=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"memoryIn0") ) { memoryIn0=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryIn1") ) { memoryIn1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryIn2") ) { memoryIn2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryIn3") ) { memoryIn3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memorySet") ) { memorySet=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"memoryOut0") ) { memoryOut0=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryOut1") ) { memoryOut1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryOut2") ) { memoryOut2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryOut3") ) { memoryOut3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enablerOut0") ) { enablerOut0=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enablerOut1") ) { enablerOut1=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enablerOut2") ) { enablerOut2=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enablerOut3") ) { enablerOut3=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"enableBmpData") ) { enableBmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"memoryIn0BmpData") ) { memoryIn0BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryIn1BmpData") ) { memoryIn1BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryIn2BmpData") ) { memoryIn2BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryIn3BmpData") ) { memoryIn3BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memorySetBmpData") ) { memorySetBmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"memoryOut0BmpData") ) { memoryOut0BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryOut1BmpData") ) { memoryOut1BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryOut2BmpData") ) { memoryOut2BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryOut3BmpData") ) { memoryOut3BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enablerOut0BmpData") ) { enablerOut0BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enablerOut1BmpData") ) { enablerOut1BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enablerOut2BmpData") ) { enablerOut2BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enablerOut3BmpData") ) { enablerOut3BmpData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DetailAccumulatorLines_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("enablerOut0"));
	outFields->push(HX_CSTRING("enablerOut0BmpData"));
	outFields->push(HX_CSTRING("enablerOut1"));
	outFields->push(HX_CSTRING("enablerOut1BmpData"));
	outFields->push(HX_CSTRING("enablerOut2"));
	outFields->push(HX_CSTRING("enablerOut2BmpData"));
	outFields->push(HX_CSTRING("enablerOut3"));
	outFields->push(HX_CSTRING("enablerOut3BmpData"));
	outFields->push(HX_CSTRING("memoryIn0"));
	outFields->push(HX_CSTRING("memoryIn0BmpData"));
	outFields->push(HX_CSTRING("memoryIn1"));
	outFields->push(HX_CSTRING("memoryIn1BmpData"));
	outFields->push(HX_CSTRING("memoryIn2"));
	outFields->push(HX_CSTRING("memoryIn2BmpData"));
	outFields->push(HX_CSTRING("memoryIn3"));
	outFields->push(HX_CSTRING("memoryIn3BmpData"));
	outFields->push(HX_CSTRING("memoryOut0"));
	outFields->push(HX_CSTRING("memoryOut0BmpData"));
	outFields->push(HX_CSTRING("memoryOut1"));
	outFields->push(HX_CSTRING("memoryOut1BmpData"));
	outFields->push(HX_CSTRING("memoryOut2"));
	outFields->push(HX_CSTRING("memoryOut2BmpData"));
	outFields->push(HX_CSTRING("memoryOut3"));
	outFields->push(HX_CSTRING("memoryOut3BmpData"));
	outFields->push(HX_CSTRING("enable"));
	outFields->push(HX_CSTRING("enableBmpData"));
	outFields->push(HX_CSTRING("memorySet"));
	outFields->push(HX_CSTRING("memorySetBmpData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,enablerOut0),HX_CSTRING("enablerOut0")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,enablerOut0BmpData),HX_CSTRING("enablerOut0BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,enablerOut1),HX_CSTRING("enablerOut1")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,enablerOut1BmpData),HX_CSTRING("enablerOut1BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,enablerOut2),HX_CSTRING("enablerOut2")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,enablerOut2BmpData),HX_CSTRING("enablerOut2BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,enablerOut3),HX_CSTRING("enablerOut3")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,enablerOut3BmpData),HX_CSTRING("enablerOut3BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryIn0),HX_CSTRING("memoryIn0")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryIn0BmpData),HX_CSTRING("memoryIn0BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryIn1),HX_CSTRING("memoryIn1")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryIn1BmpData),HX_CSTRING("memoryIn1BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryIn2),HX_CSTRING("memoryIn2")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryIn2BmpData),HX_CSTRING("memoryIn2BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryIn3),HX_CSTRING("memoryIn3")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryIn3BmpData),HX_CSTRING("memoryIn3BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryOut0),HX_CSTRING("memoryOut0")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryOut0BmpData),HX_CSTRING("memoryOut0BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryOut1),HX_CSTRING("memoryOut1")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryOut1BmpData),HX_CSTRING("memoryOut1BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryOut2),HX_CSTRING("memoryOut2")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryOut2BmpData),HX_CSTRING("memoryOut2BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryOut3),HX_CSTRING("memoryOut3")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,memoryOut3BmpData),HX_CSTRING("memoryOut3BmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,enable),HX_CSTRING("enable")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,enableBmpData),HX_CSTRING("enableBmpData")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(DetailAccumulatorLines_obj,memorySet),HX_CSTRING("memorySet")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(DetailAccumulatorLines_obj,memorySetBmpData),HX_CSTRING("memorySetBmpData")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("enablerOut0"),
	HX_CSTRING("enablerOut0BmpData"),
	HX_CSTRING("enablerOut1"),
	HX_CSTRING("enablerOut1BmpData"),
	HX_CSTRING("enablerOut2"),
	HX_CSTRING("enablerOut2BmpData"),
	HX_CSTRING("enablerOut3"),
	HX_CSTRING("enablerOut3BmpData"),
	HX_CSTRING("memoryIn0"),
	HX_CSTRING("memoryIn0BmpData"),
	HX_CSTRING("memoryIn1"),
	HX_CSTRING("memoryIn1BmpData"),
	HX_CSTRING("memoryIn2"),
	HX_CSTRING("memoryIn2BmpData"),
	HX_CSTRING("memoryIn3"),
	HX_CSTRING("memoryIn3BmpData"),
	HX_CSTRING("memoryOut0"),
	HX_CSTRING("memoryOut0BmpData"),
	HX_CSTRING("memoryOut1"),
	HX_CSTRING("memoryOut1BmpData"),
	HX_CSTRING("memoryOut2"),
	HX_CSTRING("memoryOut2BmpData"),
	HX_CSTRING("memoryOut3"),
	HX_CSTRING("memoryOut3BmpData"),
	HX_CSTRING("enable"),
	HX_CSTRING("enableBmpData"),
	HX_CSTRING("memorySet"),
	HX_CSTRING("memorySetBmpData"),
	HX_CSTRING("addedToStageHandler"),
	HX_CSTRING("enablerOut0LoadCompleteHandler"),
	HX_CSTRING("enablerOut1LoadCompleteHandler"),
	HX_CSTRING("enablerOut2LoadCompleteHandler"),
	HX_CSTRING("enablerOut3LoadCompleteHandler"),
	HX_CSTRING("memoryIn0LoadCompleteHandler"),
	HX_CSTRING("memoryIn1LoadCompleteHandler"),
	HX_CSTRING("memoryIn2LoadCompleteHandler"),
	HX_CSTRING("memoryIn3LoadCompleteHandler"),
	HX_CSTRING("memoryOut0LoadCompleteHandler"),
	HX_CSTRING("memoryOut1LoadCompleteHandler"),
	HX_CSTRING("memoryOut2LoadCompleteHandler"),
	HX_CSTRING("memoryOut3LoadCompleteHandler"),
	HX_CSTRING("enableLoadCompleteHandler"),
	HX_CSTRING("memorySetLoadCompleteHandler"),
	HX_CSTRING("hideMemoryOutLines"),
	HX_CSTRING("showInputLines"),
	HX_CSTRING("hideAllInputLines"),
	HX_CSTRING("showEnablerOutLines"),
	HX_CSTRING("hideEnablerOutLines"),
	HX_CSTRING("showEnableLine"),
	HX_CSTRING("hideEnableLine"),
	HX_CSTRING("showSetLine"),
	HX_CSTRING("hideSetLine"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DetailAccumulatorLines_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DetailAccumulatorLines_obj::__mClass,"__mClass");
};

#endif

Class DetailAccumulatorLines_obj::__mClass;

void DetailAccumulatorLines_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.elements.DetailAccumulatorLines"), hx::TCanCast< DetailAccumulatorLines_obj> ,sStaticFields,sMemberFields,
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

void DetailAccumulatorLines_obj::__boot()
{
}

} // end namespace view
} // end namespace elements
