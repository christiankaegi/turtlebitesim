#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_PatternFillShader
#define INCLUDED_openfl__internal_renderer_opengl_shaders2_PatternFillShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,PatternFillShader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,Shader)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{


class HXCPP_CLASS_ATTRIBUTES  PatternFillShader_obj : public ::openfl::_internal::renderer::opengl::shaders2::Shader_obj{
	public:
		typedef ::openfl::_internal::renderer::opengl::shaders2::Shader_obj super;
		typedef PatternFillShader_obj OBJ_;
		PatternFillShader_obj();
		Void __construct(::lime::graphics::GLRenderContext gl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PatternFillShader_obj > __new(::lime::graphics::GLRenderContext gl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PatternFillShader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PatternFillShader"); }

		virtual Void init( );

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2

#endif /* INCLUDED_openfl__internal_renderer_opengl_shaders2_PatternFillShader */ 
