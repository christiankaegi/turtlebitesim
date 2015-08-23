#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2__DrawTrianglesShader_Attrib_Impl_
#define INCLUDED_openfl__internal_renderer_opengl_shaders2__DrawTrianglesShader_Attrib_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(openfl,_internal,renderer,opengl,shaders2,_DrawTrianglesShader,Attrib_Impl_)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{
namespace _DrawTrianglesShader{


class HXCPP_CLASS_ATTRIBUTES  Attrib_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Attrib_Impl__obj OBJ_;
		Attrib_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Attrib_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Attrib_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Attrib_Impl_"); }

		static ::String Position;
		static ::String TexCoord;
		static ::String Color;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2
} // end namespace _DrawTrianglesShader

#endif /* INCLUDED_openfl__internal_renderer_opengl_shaders2__DrawTrianglesShader_Attrib_Impl_ */ 
