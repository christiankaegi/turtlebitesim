#ifndef INCLUDED_lime_graphics_cairo__CairoStatus_CairoStatus_Impl_
#define INCLUDED_lime_graphics_cairo__CairoStatus_CairoStatus_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoStatus,CairoStatus_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoStatus{


class HXCPP_CLASS_ATTRIBUTES  CairoStatus_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoStatus_Impl__obj OBJ_;
		CairoStatus_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CairoStatus_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoStatus_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CairoStatus_Impl_"); }

		static int SUCCESS;
		static int NO_MEMORY;
		static int INVALID_RESTORE;
		static int INVALID_POP_GROUP;
		static int NO_CURRENT_POINT;
		static int INVALID_MATRIX;
		static int INVALID_STATUS;
		static int NULL_POINTER;
		static int INVALID_STRING;
		static int INVALID_PATH_DATA;
		static int READ_ERROR;
		static int WRITE_ERROR;
		static int SURFACE_FINISHED;
		static int SURFACE_TYPE_MISMATCH;
		static int PATTERN_TYPE_MISMATCH;
		static int INVALID_CONTENT;
		static int INVALID_FORMAT;
		static int INVALID_VISUAL;
		static int FILE_NOT_FOUND;
		static int INVALID_DASH;
		static int INVALID_DSC_COMMENT;
		static int INVALID_INDEX;
		static int CLIP_NOT_REPRESENTABLE;
		static int TEMP_FILE_ERROR;
		static int INVALID_STRIDE;
		static int FONT_TYPE_MISMATCH;
		static int USER_FONT_IMMUTABLE;
		static int USER_FONT_ERROR;
		static int NEGATIVE_COUNT;
		static int INVALID_CLUSTERS;
		static int INVALID_SLANT;
		static int INVALID_WEIGHT;
		static int INVALID_SIZE;
		static int USER_FONT_NOT_IMPLEMENTED;
		static int DEVICE_TYPE_MISMATCH;
		static int DEVICE_ERROR;
		static int INVALID_MESH_CONSTRUCTION;
		static int DEVICE_FINISHED;
		static int JBIG2_GLOBAL_MISSING;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoStatus

#endif /* INCLUDED_lime_graphics_cairo__CairoStatus_CairoStatus_Impl_ */ 
