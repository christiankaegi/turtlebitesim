#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif
#ifndef INCLUDED_events_AppEvent
#include <events/AppEvent.h>
#endif
#ifndef INCLUDED_model_proxy_ProgramProxy
#include <model/proxy/ProgramProxy.h>
#endif
#ifndef INCLUDED_model_vo_InstructionVO
#include <model/vo/InstructionVO.h>
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
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IFacade
#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IMediator
#include <org/puremvc/haxe/multicore/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotification
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotifier
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_IProxy
#include <org/puremvc/haxe/multicore/interfaces/IProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_mediator_Mediator
#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notifier
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_proxy_Proxy
#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
#endif
#ifndef INCLUDED_view_component_EditRom
#include <view/component/EditRom.h>
#endif
#ifndef INCLUDED_view_mediator_EditRomMediator
#include <view/mediator/EditRomMediator.h>
#endif
namespace view{
namespace mediator{

Void EditRomMediator_obj::__construct(::view::component::EditRom viewComponent)
{
HX_STACK_FRAME("view.mediator.EditRomMediator","new",0x25f67fb9,"view.mediator.EditRomMediator.new","view/mediator/EditRomMediator.hx",16,0x86ba89b7)
HX_STACK_THIS(this)
HX_STACK_ARG(viewComponent,"viewComponent")
{
	HX_STACK_LINE(16)
	super::__construct(HX_CSTRING("EditRomMediator"),viewComponent);
}
;
	return null();
}

//EditRomMediator_obj::~EditRomMediator_obj() { }

Dynamic EditRomMediator_obj::__CreateEmpty() { return  new EditRomMediator_obj; }
hx::ObjectPtr< EditRomMediator_obj > EditRomMediator_obj::__new(::view::component::EditRom viewComponent)
{  hx::ObjectPtr< EditRomMediator_obj > result = new EditRomMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic EditRomMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EditRomMediator_obj > result = new EditRomMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void EditRomMediator_obj::onRegister( ){
{
		HX_STACK_FRAME("view.mediator.EditRomMediator","onRegister",0xbf815869,"view.mediator.EditRomMediator.onRegister","view/mediator/EditRomMediator.hx",19,0x86ba89b7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		this->getView()->addEventListener(::events::AppEvent_obj::DATA,this->dataEventHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(21)
		::model::proxy::ProgramProxy _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		_g = hx::TCast< model::proxy::ProgramProxy >::cast(this->get_facade()->retrieveProxy(::model::proxy::ProgramProxy_obj::NAME));
		HX_STACK_LINE(21)
		this->programProxy = _g;
		HX_STACK_LINE(22)
		this->getView()->addEventListener(::events::AppEvent_obj::VIEW_READY,this->viewReadyHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(23)
		::view::component::EditRom _g1 = this->getView();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(23)
		this->sendNotification(::AppConstants_obj::ADD_TO_NAVIG_VIEW,_g1,null());
	}
return null();
}


Void EditRomMediator_obj::onRemove( ){
{
		HX_STACK_FRAME("view.mediator.EditRomMediator","onRemove",0x1d3ba0ca,"view.mediator.EditRomMediator.onRemove","view/mediator/EditRomMediator.hx",27,0x86ba89b7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->getView()->destroy();
	}
return null();
}


Array< ::String > EditRomMediator_obj::listNotificationInterests( ){
	HX_STACK_FRAME("view.mediator.EditRomMediator","listNotificationInterests",0xc23b82f9,"view.mediator.EditRomMediator.listNotificationInterests","view/mediator/EditRomMediator.hx",31,0x86ba89b7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return Array_obj< ::String >::__new();
}


Void EditRomMediator_obj::handleNotification( ::org::puremvc::haxe::multicore::interfaces::INotification note){
{
		HX_STACK_FRAME("view.mediator.EditRomMediator","handleNotification",0x569e1f7a,"view.mediator.EditRomMediator.handleNotification","view/mediator/EditRomMediator.hx",34,0x86ba89b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(note,"note")
	}
return null();
}


Void EditRomMediator_obj::dataEventHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.EditRomMediator","dataEventHandler",0x2c3bcd21,"view.mediator.EditRomMediator.dataEventHandler","view/mediator/EditRomMediator.hx",38,0x86ba89b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(38)
		Dynamic _g = event->data->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		Dynamic _switch_1 = (_g);
		if (  ( _switch_1==HX_CSTRING("okButton"))){
			HX_STACK_LINE(40)
			this->sendNotification(::AppConstants_obj::PROGRAM_CHANGED,this->newProgramPointer,null());
			HX_STACK_LINE(41)
			this->get_facade()->removeMediator(HX_CSTRING("EditRomMediator"));
		}
		else if (  ( _switch_1==HX_CSTRING("cancelButton"))){
			HX_STACK_LINE(43)
			this->get_facade()->removeMediator(HX_CSTRING("EditRomMediator"));
		}
		else if (  ( _switch_1==HX_CSTRING("sample1Button"))){
			HX_STACK_LINE(45)
			this->populateRomRows((int)0);
		}
		else if (  ( _switch_1==HX_CSTRING("sample2Button"))){
			HX_STACK_LINE(47)
			this->populateRomRows((int)1);
		}
		else if (  ( _switch_1==HX_CSTRING("sample3Button"))){
			HX_STACK_LINE(49)
			this->populateRomRows((int)2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditRomMediator_obj,dataEventHandler,(void))

Void EditRomMediator_obj::populateRomRows( int id){
{
		HX_STACK_FRAME("view.mediator.EditRomMediator","populateRomRows",0x1b539658,"view.mediator.EditRomMediator.populateRomRows","view/mediator/EditRomMediator.hx",53,0x86ba89b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(54)
		this->newProgramPointer = id;
		HX_STACK_LINE(55)
		this->getView()->setActiveSample((id + (int)1));
		HX_STACK_LINE(56)
		Array< ::Dynamic > _g = this->programProxy->getInstructionsByProgramPointer(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		this->getView()->populateRomRows(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditRomMediator_obj,populateRomRows,(void))

Void EditRomMediator_obj::viewReadyHandler( ::events::AppEvent event){
{
		HX_STACK_FRAME("view.mediator.EditRomMediator","viewReadyHandler",0x133648b3,"view.mediator.EditRomMediator.viewReadyHandler","view/mediator/EditRomMediator.hx",59,0x86ba89b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(60)
		int _g = this->programProxy->getProgramPointer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		int _g1 = (_g + (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		this->getView()->setActiveSample(_g1);
		HX_STACK_LINE(61)
		Array< ::Dynamic > _g2 = this->programProxy->getCurrentInstructions();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(61)
		this->getView()->populateRomRows(_g2);
		HX_STACK_LINE(62)
		this->sendNotification(::AppConstants_obj::MEDIATOR_INITIALIZED,null(),HX_CSTRING("EditRomMediator"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditRomMediator_obj,viewReadyHandler,(void))

::view::component::EditRom EditRomMediator_obj::getView( ){
	HX_STACK_FRAME("view.mediator.EditRomMediator","getView",0x1da1b1f4,"view.mediator.EditRomMediator.getView","view/mediator/EditRomMediator.hx",66,0x86ba89b7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(EditRomMediator_obj,getView,return )

::String EditRomMediator_obj::NAME;


EditRomMediator_obj::EditRomMediator_obj()
{
}

void EditRomMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EditRomMediator);
	HX_MARK_MEMBER_NAME(programProxy,"programProxy");
	HX_MARK_MEMBER_NAME(newProgramPointer,"newProgramPointer");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EditRomMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(programProxy,"programProxy");
	HX_VISIT_MEMBER_NAME(newProgramPointer,"newProgramPointer");
	::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EditRomMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRemove") ) { return onRemove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"programProxy") ) { return programProxy; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"populateRomRows") ) { return populateRomRows_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dataEventHandler") ) { return dataEventHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"viewReadyHandler") ) { return viewReadyHandler_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"newProgramPointer") ) { return newProgramPointer; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleNotification") ) { return handleNotification_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listNotificationInterests") ) { return listNotificationInterests_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EditRomMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"programProxy") ) { programProxy=inValue.Cast< ::model::proxy::ProgramProxy >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"newProgramPointer") ) { newProgramPointer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EditRomMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("programProxy"));
	outFields->push(HX_CSTRING("newProgramPointer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::model::proxy::ProgramProxy*/ ,(int)offsetof(EditRomMediator_obj,programProxy),HX_CSTRING("programProxy")},
	{hx::fsInt,(int)offsetof(EditRomMediator_obj,newProgramPointer),HX_CSTRING("newProgramPointer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("programProxy"),
	HX_CSTRING("newProgramPointer"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("onRemove"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("dataEventHandler"),
	HX_CSTRING("populateRomRows"),
	HX_CSTRING("viewReadyHandler"),
	HX_CSTRING("getView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EditRomMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EditRomMediator_obj::NAME,"NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EditRomMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EditRomMediator_obj::NAME,"NAME");
};

#endif

Class EditRomMediator_obj::__mClass;

void EditRomMediator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("view.mediator.EditRomMediator"), hx::TCanCast< EditRomMediator_obj> ,sStaticFields,sMemberFields,
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

void EditRomMediator_obj::__boot()
{
	NAME= HX_CSTRING("EditRomMediator");
}

} // end namespace view
} // end namespace mediator
