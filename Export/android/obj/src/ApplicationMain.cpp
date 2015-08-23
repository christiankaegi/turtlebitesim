#include <hxcpp.h>

#ifndef INCLUDED_App
#include <App.h>
#endif
#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_ScaledStage
#include <ScaledStage.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Loader
#include <openfl/_legacy/display/Loader.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LoaderInfo
#include <openfl/_legacy/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif

Void ApplicationMain_obj::__construct()
{
	return null();
}

//ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

::openfl::_legacy::display::Sprite ApplicationMain_obj::barA;

::openfl::_legacy::display::Sprite ApplicationMain_obj::barB;

::openfl::_legacy::display::Sprite ApplicationMain_obj::container;

int ApplicationMain_obj::forceHeight;

int ApplicationMain_obj::forceWidth;

Void ApplicationMain_obj::main( ){
{
		HX_STACK_FRAME("ApplicationMain","main",0x93d2f73e,"ApplicationMain.main","ApplicationMain.hx",23,0x0780ded5)
		HX_STACK_LINE(25)
		::openfl::_legacy::Lib_obj::setPackage(HX_CSTRING("Christian Kaegi"),HX_CSTRING("TurtlebiteSim3"),HX_CSTRING("net.kaegi.TurtlebiteSim3"),HX_CSTRING("1.0.0"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ApplicationMain.hx",38,0x0780ded5)
			{
				HX_STACK_LINE(40)
				::openfl::_legacy::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
				HX_STACK_LINE(41)
				::openfl::_legacy::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
				HX_STACK_LINE(42)
				::openfl::_legacy::Lib_obj::get_current()->loaderInfo = ::openfl::_legacy::display::LoaderInfo_obj::create(null());
				HX_STACK_LINE(46)
				::ApplicationMain_obj::forceWidth = (int)1024;
				HX_STACK_LINE(47)
				::ApplicationMain_obj::forceHeight = (int)768;
				HX_STACK_LINE(49)
				::ApplicationMain_obj::container = ::openfl::_legacy::display::Sprite_obj::__new();
				HX_STACK_LINE(50)
				::ApplicationMain_obj::barA = ::openfl::_legacy::display::Sprite_obj::__new();
				HX_STACK_LINE(51)
				::ApplicationMain_obj::barB = ::openfl::_legacy::display::Sprite_obj::__new();
				HX_STACK_LINE(53)
				::openfl::_legacy::Lib_obj::get_current()->get_stage()->addChild(::ApplicationMain_obj::container);
				HX_STACK_LINE(54)
				::ApplicationMain_obj::container->addChild(::openfl::_legacy::Lib_obj::get_current());
				HX_STACK_LINE(55)
				::ApplicationMain_obj::container->addChild(::ApplicationMain_obj::barA);
				HX_STACK_LINE(56)
				::ApplicationMain_obj::container->addChild(::ApplicationMain_obj::barB);
				HX_STACK_LINE(58)
				::ApplicationMain_obj::applyScale(null());
				HX_STACK_LINE(59)
				::openfl::_legacy::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_legacy::events::Event_obj::RESIZE,::ApplicationMain_obj::applyScale_dyn(),null(),null(),null());
				HX_STACK_LINE(84)
				::openfl::_legacy::Assets_obj::initialize();
				HX_STACK_LINE(86)
				bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
				HX_STACK_LINE(88)
				{
					HX_STACK_LINE(88)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(88)
					Array< ::String > _g1 = ::Type_obj::getClassFields(hx::ClassOf< ::App >());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(88)
					while(((_g < _g1->length))){
						HX_STACK_LINE(88)
						::String methodName = _g1->__get(_g);		HX_STACK_VAR(methodName,"methodName");
						HX_STACK_LINE(88)
						++(_g);
						HX_STACK_LINE(90)
						if (((methodName == HX_CSTRING("main")))){
							HX_STACK_LINE(92)
							hasMain = true;
							HX_STACK_LINE(93)
							break;
						}
					}
				}
				HX_STACK_LINE(99)
				if ((hasMain)){
					HX_STACK_LINE(101)
					::Reflect_obj::callMethod(hx::ClassOf< ::App >(),::Reflect_obj::field(hx::ClassOf< ::App >(),HX_CSTRING("main")),Dynamic( Array_obj<Dynamic>::__new()));
				}
				else{
					HX_STACK_LINE(105)
					::DocumentClass instance = ::Type_obj::createInstance(hx::ClassOf< ::DocumentClass >(),Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(instance,"instance");
					HX_STACK_LINE(107)
					if ((::Std_obj::is(instance,hx::ClassOf< ::openfl::_legacy::display::DisplayObject >()))){
						HX_STACK_LINE(109)
						::openfl::_legacy::Lib_obj::get_current()->addChild(instance);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(38)
		::openfl::_legacy::Lib_obj::create( Dynamic(new _Function_1_1()),(int)1024,(int)768,(int)30,(int)7303023,(int((int((int((int((int((int((int((int((int((int(::openfl::_legacy::Lib_obj::HARDWARE) | int(::openfl::_legacy::Lib_obj::ALLOW_SHADERS))) | int(::openfl::_legacy::Lib_obj::REQUIRE_SHADERS))) | int((int)0))) | int((int)0))) | int(::openfl::_legacy::Lib_obj::RESIZABLE))) | int((int)0))) | int((int)0))) | int(::openfl::_legacy::Lib_obj::FULLSCREEN))) | int((int)0))) | int((int)0)),HX_CSTRING("TurtlebiteSim3"),null(),hx::ClassOf< ::ScaledStage >());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Void ApplicationMain_obj::applyScale( Dynamic _){
{
		HX_STACK_FRAME("ApplicationMain","applyScale",0x88219b01,"ApplicationMain.applyScale","ApplicationMain.hx",138,0x0780ded5)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(139)
		::ScaledStage scaledStage = ::openfl::_legacy::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(scaledStage,"scaledStage");
		HX_STACK_LINE(141)
		int _g = scaledStage->get___stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		Float xScale = (Float(_g) / Float(::ApplicationMain_obj::forceWidth));		HX_STACK_VAR(xScale,"xScale");
		HX_STACK_LINE(142)
		int _g1 = scaledStage->get___stageHeight();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(142)
		Float yScale = (Float(_g1) / Float(::ApplicationMain_obj::forceHeight));		HX_STACK_VAR(yScale,"yScale");
		HX_STACK_LINE(144)
		if (((xScale < yScale))){
			HX_STACK_LINE(146)
			::openfl::_legacy::Lib_obj::get_current()->set_scaleX(xScale);
			HX_STACK_LINE(147)
			::openfl::_legacy::Lib_obj::get_current()->set_scaleY(xScale);
			HX_STACK_LINE(148)
			int _g2 = scaledStage->get___stageWidth();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(148)
			Float _g3 = (_g2 - (::ApplicationMain_obj::forceWidth * xScale));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(148)
			Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(148)
			::openfl::_legacy::Lib_obj::get_current()->set_x(_g4);
			HX_STACK_LINE(149)
			int _g5 = scaledStage->get___stageHeight();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(149)
			Float _g6 = (_g5 - (::ApplicationMain_obj::forceHeight * xScale));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(149)
			Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(149)
			::openfl::_legacy::Lib_obj::get_current()->set_y(_g7);
		}
		else{
			HX_STACK_LINE(153)
			::openfl::_legacy::Lib_obj::get_current()->set_scaleX(yScale);
			HX_STACK_LINE(154)
			::openfl::_legacy::Lib_obj::get_current()->set_scaleY(yScale);
			HX_STACK_LINE(155)
			int _g8 = scaledStage->get___stageWidth();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(155)
			Float _g9 = (_g8 - (::ApplicationMain_obj::forceWidth * yScale));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(155)
			Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(155)
			::openfl::_legacy::Lib_obj::get_current()->set_x(_g10);
			HX_STACK_LINE(156)
			int _g11 = scaledStage->get___stageHeight();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(156)
			Float _g12 = (_g11 - (::ApplicationMain_obj::forceHeight * yScale));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(156)
			Float _g13 = (Float(_g12) / Float((int)2));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(156)
			::openfl::_legacy::Lib_obj::get_current()->set_y(_g13);
		}
		HX_STACK_LINE(160)
		Float _g14 = ::openfl::_legacy::Lib_obj::get_current()->get_x();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(160)
		if (((_g14 > (int)0))){
			HX_STACK_LINE(162)
			::ApplicationMain_obj::barA->get_graphics()->clear();
			HX_STACK_LINE(163)
			::ApplicationMain_obj::barA->get_graphics()->beginFill((int)0,null());
			HX_STACK_LINE(164)
			Float _g15 = ::openfl::_legacy::Lib_obj::get_current()->get_x();		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(164)
			int _g16 = scaledStage->get___stageHeight();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(164)
			::ApplicationMain_obj::barA->get_graphics()->drawRect((int)0,(int)0,_g15,_g16);
			HX_STACK_LINE(166)
			::ApplicationMain_obj::barB->get_graphics()->clear();
			HX_STACK_LINE(167)
			::ApplicationMain_obj::barB->get_graphics()->beginFill((int)0,null());
			HX_STACK_LINE(168)
			Float _g17 = ::openfl::_legacy::Lib_obj::get_current()->get_x();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(168)
			Float _g18 = ::openfl::_legacy::Lib_obj::get_current()->get_scaleX();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(168)
			Float _g19 = (::ApplicationMain_obj::forceWidth * _g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(168)
			Float x = (_g17 + _g19);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(169)
			int _g20 = scaledStage->get___stageWidth();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(169)
			Float _g21 = (_g20 - x);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(169)
			int _g22 = scaledStage->get___stageHeight();		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(169)
			::ApplicationMain_obj::barB->get_graphics()->drawRect(x,(int)0,_g21,_g22);
		}
		else{
			HX_STACK_LINE(173)
			::ApplicationMain_obj::barA->get_graphics()->clear();
			HX_STACK_LINE(174)
			::ApplicationMain_obj::barA->get_graphics()->beginFill((int)0,null());
			HX_STACK_LINE(175)
			int _g23 = scaledStage->get___stageWidth();		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(175)
			Float _g24 = ::openfl::_legacy::Lib_obj::get_current()->get_y();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(175)
			::ApplicationMain_obj::barA->get_graphics()->drawRect((int)0,(int)0,_g23,_g24);
			HX_STACK_LINE(177)
			::ApplicationMain_obj::barB->get_graphics()->clear();
			HX_STACK_LINE(178)
			::ApplicationMain_obj::barB->get_graphics()->beginFill((int)0,null());
			HX_STACK_LINE(179)
			Float _g25 = ::openfl::_legacy::Lib_obj::get_current()->get_y();		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(179)
			Float _g26 = ::openfl::_legacy::Lib_obj::get_current()->get_scaleY();		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(179)
			Float _g27 = (::ApplicationMain_obj::forceHeight * _g26);		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(179)
			Float y = (_g25 + _g27);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(180)
			int _g28 = scaledStage->get___stageWidth();		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(180)
			int _g29 = scaledStage->get___stageHeight();		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(180)
			Float _g30 = (_g29 - y);		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(180)
			::ApplicationMain_obj::barB->get_graphics()->drawRect((int)0,y,_g28,_g30);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,applyScale,(void))


ApplicationMain_obj::ApplicationMain_obj()
{
}

Dynamic ApplicationMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"barA") ) { return barA; }
		if (HX_FIELD_EQ(inName,"barB") ) { return barB; }
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { return container; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceWidth") ) { return forceWidth; }
		if (HX_FIELD_EQ(inName,"applyScale") ) { return applyScale_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"forceHeight") ) { return forceHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"barA") ) { barA=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"barB") ) { barB=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { container=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceWidth") ) { forceWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"forceHeight") ) { forceHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationMain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("barA"),
	HX_CSTRING("barB"),
	HX_CSTRING("container"),
	HX_CSTRING("forceHeight"),
	HX_CSTRING("forceWidth"),
	HX_CSTRING("main"),
	HX_CSTRING("applyScale"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::barA,"barA");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::barB,"barB");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::container,"container");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::forceHeight,"forceHeight");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::forceWidth,"forceWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::barA,"barA");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::barB,"barB");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::container,"container");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::forceHeight,"forceHeight");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::forceWidth,"forceWidth");
};

#endif

Class ApplicationMain_obj::__mClass;

void ApplicationMain_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ApplicationMain"), hx::TCanCast< ApplicationMain_obj> ,sStaticFields,sMemberFields,
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

void ApplicationMain_obj::__boot()
{
}

