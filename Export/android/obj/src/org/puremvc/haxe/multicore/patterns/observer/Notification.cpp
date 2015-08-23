#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_multicore_interfaces_INotification
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_multicore_patterns_observer_Notification
#include <org/puremvc/haxe/multicore/patterns/observer/Notification.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace multicore{
namespace patterns{
namespace observer{

Void Notification_obj::__construct(::String name,Dynamic body,::String type)
{
HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Notification","new",0x877b86d2,"org.puremvc.haxe.multicore.patterns.observer.Notification.new","org/puremvc/haxe/multicore/patterns/observer/Notification.hx",41,0x797a987e)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(body,"body")
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(42)
	this->name = name;
	HX_STACK_LINE(43)
	this->body = body;
	HX_STACK_LINE(44)
	this->type = type;
}
;
	return null();
}

//Notification_obj::~Notification_obj() { }

Dynamic Notification_obj::__CreateEmpty() { return  new Notification_obj; }
hx::ObjectPtr< Notification_obj > Notification_obj::__new(::String name,Dynamic body,::String type)
{  hx::ObjectPtr< Notification_obj > result = new Notification_obj();
	result->__construct(name,body,type);
	return result;}

Dynamic Notification_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Notification_obj > result = new Notification_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *Notification_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::multicore::interfaces::INotification_obj)) return operator ::org::puremvc::haxe::multicore::interfaces::INotification_obj *();
	return super::__ToInterface(inType);
}

::String Notification_obj::getName( ){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Notification","getName",0x536af973,"org.puremvc.haxe.multicore.patterns.observer.Notification.getName","org/puremvc/haxe/multicore/patterns/observer/Notification.hx",52,0x797a987e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Notification_obj,getName,return )

Void Notification_obj::setBody( Dynamic body){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Notification","setBody",0x3e8892d6,"org.puremvc.haxe.multicore.patterns.observer.Notification.setBody","org/puremvc/haxe/multicore/patterns/observer/Notification.hx",60,0x797a987e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(body,"body")
		HX_STACK_LINE(60)
		this->body = body;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Notification_obj,setBody,(void))

Dynamic Notification_obj::getBody( ){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Notification","getBody",0x4b8701ca,"org.puremvc.haxe.multicore.patterns.observer.Notification.getBody","org/puremvc/haxe/multicore/patterns/observer/Notification.hx",68,0x797a987e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return this->body;
}


HX_DEFINE_DYNAMIC_FUNC0(Notification_obj,getBody,return )

Void Notification_obj::setType( ::String type){
{
		HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Notification","setType",0x4a760aee,"org.puremvc.haxe.multicore.patterns.observer.Notification.setType","org/puremvc/haxe/multicore/patterns/observer/Notification.hx",76,0x797a987e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(76)
		this->type = type;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Notification_obj,setType,(void))

::String Notification_obj::getType( ){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Notification","getType",0x577479e2,"org.puremvc.haxe.multicore.patterns.observer.Notification.getType","org/puremvc/haxe/multicore/patterns/observer/Notification.hx",84,0x797a987e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	return this->type;
}


HX_DEFINE_DYNAMIC_FUNC0(Notification_obj,getType,return )

::String Notification_obj::toString( ){
	HX_STACK_FRAME("org.puremvc.haxe.multicore.patterns.observer.Notification","toString",0xec427cfa,"org.puremvc.haxe.multicore.patterns.observer.Notification.toString","org/puremvc/haxe/multicore/patterns/observer/Notification.hx",91,0x797a987e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	::String _g = this->getName();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(92)
	::String msg = (HX_CSTRING("Notification Name: ") + _g);		HX_STACK_VAR(msg,"msg");
	HX_STACK_LINE(93)
	::String _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(93)
	if (((this->body == null()))){
		HX_STACK_LINE(93)
		_g1 = HX_CSTRING("null");
	}
	else{
		HX_STACK_LINE(93)
		_g1 = this->body->toString();
	}
	HX_STACK_LINE(93)
	::String _g2 = (HX_CSTRING("\nBody:") + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(93)
	hx::AddEq(msg,_g2);
	HX_STACK_LINE(94)
	hx::AddEq(msg,(HX_CSTRING("\nType:") + ((  (((this->type == null()))) ? ::String(HX_CSTRING("null")) : ::String(this->type) ))));
	HX_STACK_LINE(95)
	return msg;
}


HX_DEFINE_DYNAMIC_FUNC0(Notification_obj,toString,return )


Notification_obj::Notification_obj()
{
}

void Notification_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Notification);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_END_CLASS();
}

void Notification_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(body,"body");
}

Dynamic Notification_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		if (HX_FIELD_EQ(inName,"setBody") ) { return setBody_dyn(); }
		if (HX_FIELD_EQ(inName,"getBody") ) { return getBody_dyn(); }
		if (HX_FIELD_EQ(inName,"setType") ) { return setType_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Notification_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Notification_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("body"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Notification_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(Notification_obj,type),HX_CSTRING("type")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Notification_obj,body),HX_CSTRING("body")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getName"),
	HX_CSTRING("setBody"),
	HX_CSTRING("getBody"),
	HX_CSTRING("setType"),
	HX_CSTRING("getType"),
	HX_CSTRING("toString"),
	HX_CSTRING("name"),
	HX_CSTRING("type"),
	HX_CSTRING("body"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Notification_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Notification_obj::__mClass,"__mClass");
};

#endif

Class Notification_obj::__mClass;

void Notification_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.multicore.patterns.observer.Notification"), hx::TCanCast< Notification_obj> ,sStaticFields,sMemberFields,
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

void Notification_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace multicore
} // end namespace patterns
} // end namespace observer
