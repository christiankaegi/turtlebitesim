#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoStatus_CairoStatus_Impl_
#include <lime/graphics/cairo/_CairoStatus/CairoStatus_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoStatus{

Void CairoStatus_Impl__obj::__construct()
{
	return null();
}

//CairoStatus_Impl__obj::~CairoStatus_Impl__obj() { }

Dynamic CairoStatus_Impl__obj::__CreateEmpty() { return  new CairoStatus_Impl__obj; }
hx::ObjectPtr< CairoStatus_Impl__obj > CairoStatus_Impl__obj::__new()
{  hx::ObjectPtr< CairoStatus_Impl__obj > result = new CairoStatus_Impl__obj();
	result->__construct();
	return result;}

Dynamic CairoStatus_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoStatus_Impl__obj > result = new CairoStatus_Impl__obj();
	result->__construct();
	return result;}

int CairoStatus_Impl__obj::SUCCESS;

int CairoStatus_Impl__obj::NO_MEMORY;

int CairoStatus_Impl__obj::INVALID_RESTORE;

int CairoStatus_Impl__obj::INVALID_POP_GROUP;

int CairoStatus_Impl__obj::NO_CURRENT_POINT;

int CairoStatus_Impl__obj::INVALID_MATRIX;

int CairoStatus_Impl__obj::INVALID_STATUS;

int CairoStatus_Impl__obj::NULL_POINTER;

int CairoStatus_Impl__obj::INVALID_STRING;

int CairoStatus_Impl__obj::INVALID_PATH_DATA;

int CairoStatus_Impl__obj::READ_ERROR;

int CairoStatus_Impl__obj::WRITE_ERROR;

int CairoStatus_Impl__obj::SURFACE_FINISHED;

int CairoStatus_Impl__obj::SURFACE_TYPE_MISMATCH;

int CairoStatus_Impl__obj::PATTERN_TYPE_MISMATCH;

int CairoStatus_Impl__obj::INVALID_CONTENT;

int CairoStatus_Impl__obj::INVALID_FORMAT;

int CairoStatus_Impl__obj::INVALID_VISUAL;

int CairoStatus_Impl__obj::FILE_NOT_FOUND;

int CairoStatus_Impl__obj::INVALID_DASH;

int CairoStatus_Impl__obj::INVALID_DSC_COMMENT;

int CairoStatus_Impl__obj::INVALID_INDEX;

int CairoStatus_Impl__obj::CLIP_NOT_REPRESENTABLE;

int CairoStatus_Impl__obj::TEMP_FILE_ERROR;

int CairoStatus_Impl__obj::INVALID_STRIDE;

int CairoStatus_Impl__obj::FONT_TYPE_MISMATCH;

int CairoStatus_Impl__obj::USER_FONT_IMMUTABLE;

int CairoStatus_Impl__obj::USER_FONT_ERROR;

int CairoStatus_Impl__obj::NEGATIVE_COUNT;

int CairoStatus_Impl__obj::INVALID_CLUSTERS;

int CairoStatus_Impl__obj::INVALID_SLANT;

int CairoStatus_Impl__obj::INVALID_WEIGHT;

int CairoStatus_Impl__obj::INVALID_SIZE;

int CairoStatus_Impl__obj::USER_FONT_NOT_IMPLEMENTED;

int CairoStatus_Impl__obj::DEVICE_TYPE_MISMATCH;

int CairoStatus_Impl__obj::DEVICE_ERROR;

int CairoStatus_Impl__obj::INVALID_MESH_CONSTRUCTION;

int CairoStatus_Impl__obj::DEVICE_FINISHED;

int CairoStatus_Impl__obj::JBIG2_GLOBAL_MISSING;


CairoStatus_Impl__obj::CairoStatus_Impl__obj()
{
}

Dynamic CairoStatus_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CairoStatus_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoStatus_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SUCCESS"),
	HX_CSTRING("NO_MEMORY"),
	HX_CSTRING("INVALID_RESTORE"),
	HX_CSTRING("INVALID_POP_GROUP"),
	HX_CSTRING("NO_CURRENT_POINT"),
	HX_CSTRING("INVALID_MATRIX"),
	HX_CSTRING("INVALID_STATUS"),
	HX_CSTRING("NULL_POINTER"),
	HX_CSTRING("INVALID_STRING"),
	HX_CSTRING("INVALID_PATH_DATA"),
	HX_CSTRING("READ_ERROR"),
	HX_CSTRING("WRITE_ERROR"),
	HX_CSTRING("SURFACE_FINISHED"),
	HX_CSTRING("SURFACE_TYPE_MISMATCH"),
	HX_CSTRING("PATTERN_TYPE_MISMATCH"),
	HX_CSTRING("INVALID_CONTENT"),
	HX_CSTRING("INVALID_FORMAT"),
	HX_CSTRING("INVALID_VISUAL"),
	HX_CSTRING("FILE_NOT_FOUND"),
	HX_CSTRING("INVALID_DASH"),
	HX_CSTRING("INVALID_DSC_COMMENT"),
	HX_CSTRING("INVALID_INDEX"),
	HX_CSTRING("CLIP_NOT_REPRESENTABLE"),
	HX_CSTRING("TEMP_FILE_ERROR"),
	HX_CSTRING("INVALID_STRIDE"),
	HX_CSTRING("FONT_TYPE_MISMATCH"),
	HX_CSTRING("USER_FONT_IMMUTABLE"),
	HX_CSTRING("USER_FONT_ERROR"),
	HX_CSTRING("NEGATIVE_COUNT"),
	HX_CSTRING("INVALID_CLUSTERS"),
	HX_CSTRING("INVALID_SLANT"),
	HX_CSTRING("INVALID_WEIGHT"),
	HX_CSTRING("INVALID_SIZE"),
	HX_CSTRING("USER_FONT_NOT_IMPLEMENTED"),
	HX_CSTRING("DEVICE_TYPE_MISMATCH"),
	HX_CSTRING("DEVICE_ERROR"),
	HX_CSTRING("INVALID_MESH_CONSTRUCTION"),
	HX_CSTRING("DEVICE_FINISHED"),
	HX_CSTRING("JBIG2_GLOBAL_MISSING"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::SUCCESS,"SUCCESS");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::NO_MEMORY,"NO_MEMORY");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_RESTORE,"INVALID_RESTORE");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_POP_GROUP,"INVALID_POP_GROUP");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::NO_CURRENT_POINT,"NO_CURRENT_POINT");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_MATRIX,"INVALID_MATRIX");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_STATUS,"INVALID_STATUS");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::NULL_POINTER,"NULL_POINTER");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_STRING,"INVALID_STRING");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_PATH_DATA,"INVALID_PATH_DATA");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::READ_ERROR,"READ_ERROR");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::WRITE_ERROR,"WRITE_ERROR");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::SURFACE_FINISHED,"SURFACE_FINISHED");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::SURFACE_TYPE_MISMATCH,"SURFACE_TYPE_MISMATCH");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::PATTERN_TYPE_MISMATCH,"PATTERN_TYPE_MISMATCH");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_CONTENT,"INVALID_CONTENT");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_FORMAT,"INVALID_FORMAT");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_VISUAL,"INVALID_VISUAL");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::FILE_NOT_FOUND,"FILE_NOT_FOUND");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_DASH,"INVALID_DASH");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_DSC_COMMENT,"INVALID_DSC_COMMENT");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_INDEX,"INVALID_INDEX");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::CLIP_NOT_REPRESENTABLE,"CLIP_NOT_REPRESENTABLE");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::TEMP_FILE_ERROR,"TEMP_FILE_ERROR");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_STRIDE,"INVALID_STRIDE");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::FONT_TYPE_MISMATCH,"FONT_TYPE_MISMATCH");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::USER_FONT_IMMUTABLE,"USER_FONT_IMMUTABLE");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::USER_FONT_ERROR,"USER_FONT_ERROR");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::NEGATIVE_COUNT,"NEGATIVE_COUNT");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_CLUSTERS,"INVALID_CLUSTERS");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_SLANT,"INVALID_SLANT");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_WEIGHT,"INVALID_WEIGHT");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_SIZE,"INVALID_SIZE");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::USER_FONT_NOT_IMPLEMENTED,"USER_FONT_NOT_IMPLEMENTED");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::DEVICE_TYPE_MISMATCH,"DEVICE_TYPE_MISMATCH");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::DEVICE_ERROR,"DEVICE_ERROR");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_MESH_CONSTRUCTION,"INVALID_MESH_CONSTRUCTION");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::DEVICE_FINISHED,"DEVICE_FINISHED");
	HX_MARK_MEMBER_NAME(CairoStatus_Impl__obj::JBIG2_GLOBAL_MISSING,"JBIG2_GLOBAL_MISSING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::SUCCESS,"SUCCESS");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::NO_MEMORY,"NO_MEMORY");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_RESTORE,"INVALID_RESTORE");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_POP_GROUP,"INVALID_POP_GROUP");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::NO_CURRENT_POINT,"NO_CURRENT_POINT");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_MATRIX,"INVALID_MATRIX");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_STATUS,"INVALID_STATUS");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::NULL_POINTER,"NULL_POINTER");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_STRING,"INVALID_STRING");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_PATH_DATA,"INVALID_PATH_DATA");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::READ_ERROR,"READ_ERROR");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::WRITE_ERROR,"WRITE_ERROR");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::SURFACE_FINISHED,"SURFACE_FINISHED");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::SURFACE_TYPE_MISMATCH,"SURFACE_TYPE_MISMATCH");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::PATTERN_TYPE_MISMATCH,"PATTERN_TYPE_MISMATCH");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_CONTENT,"INVALID_CONTENT");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_FORMAT,"INVALID_FORMAT");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_VISUAL,"INVALID_VISUAL");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::FILE_NOT_FOUND,"FILE_NOT_FOUND");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_DASH,"INVALID_DASH");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_DSC_COMMENT,"INVALID_DSC_COMMENT");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_INDEX,"INVALID_INDEX");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::CLIP_NOT_REPRESENTABLE,"CLIP_NOT_REPRESENTABLE");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::TEMP_FILE_ERROR,"TEMP_FILE_ERROR");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_STRIDE,"INVALID_STRIDE");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::FONT_TYPE_MISMATCH,"FONT_TYPE_MISMATCH");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::USER_FONT_IMMUTABLE,"USER_FONT_IMMUTABLE");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::USER_FONT_ERROR,"USER_FONT_ERROR");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::NEGATIVE_COUNT,"NEGATIVE_COUNT");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_CLUSTERS,"INVALID_CLUSTERS");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_SLANT,"INVALID_SLANT");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_WEIGHT,"INVALID_WEIGHT");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_SIZE,"INVALID_SIZE");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::USER_FONT_NOT_IMPLEMENTED,"USER_FONT_NOT_IMPLEMENTED");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::DEVICE_TYPE_MISMATCH,"DEVICE_TYPE_MISMATCH");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::DEVICE_ERROR,"DEVICE_ERROR");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::INVALID_MESH_CONSTRUCTION,"INVALID_MESH_CONSTRUCTION");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::DEVICE_FINISHED,"DEVICE_FINISHED");
	HX_VISIT_MEMBER_NAME(CairoStatus_Impl__obj::JBIG2_GLOBAL_MISSING,"JBIG2_GLOBAL_MISSING");
};

#endif

Class CairoStatus_Impl__obj::__mClass;

void CairoStatus_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.cairo._CairoStatus.CairoStatus_Impl_"), hx::TCanCast< CairoStatus_Impl__obj> ,sStaticFields,sMemberFields,
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

void CairoStatus_Impl__obj::__boot()
{
	SUCCESS= (int)0;
	NO_MEMORY= (int)1;
	INVALID_RESTORE= (int)2;
	INVALID_POP_GROUP= (int)3;
	NO_CURRENT_POINT= (int)4;
	INVALID_MATRIX= (int)5;
	INVALID_STATUS= (int)6;
	NULL_POINTER= (int)7;
	INVALID_STRING= (int)8;
	INVALID_PATH_DATA= (int)9;
	READ_ERROR= (int)10;
	WRITE_ERROR= (int)11;
	SURFACE_FINISHED= (int)12;
	SURFACE_TYPE_MISMATCH= (int)13;
	PATTERN_TYPE_MISMATCH= (int)14;
	INVALID_CONTENT= (int)15;
	INVALID_FORMAT= (int)16;
	INVALID_VISUAL= (int)17;
	FILE_NOT_FOUND= (int)18;
	INVALID_DASH= (int)19;
	INVALID_DSC_COMMENT= (int)20;
	INVALID_INDEX= (int)21;
	CLIP_NOT_REPRESENTABLE= (int)22;
	TEMP_FILE_ERROR= (int)23;
	INVALID_STRIDE= (int)24;
	FONT_TYPE_MISMATCH= (int)25;
	USER_FONT_IMMUTABLE= (int)26;
	USER_FONT_ERROR= (int)27;
	NEGATIVE_COUNT= (int)28;
	INVALID_CLUSTERS= (int)29;
	INVALID_SLANT= (int)30;
	INVALID_WEIGHT= (int)31;
	INVALID_SIZE= (int)32;
	USER_FONT_NOT_IMPLEMENTED= (int)33;
	DEVICE_TYPE_MISMATCH= (int)34;
	DEVICE_ERROR= (int)35;
	INVALID_MESH_CONSTRUCTION= (int)36;
	DEVICE_FINISHED= (int)37;
	JBIG2_GLOBAL_MISSING= (int)38;
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoStatus
