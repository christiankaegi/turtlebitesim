#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2__PatternFillShader_Uniform_Impl_
#define INCLUDED_openfl__internal_renderer_opengl_shaders2__PatternFillShader_Uniform_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(openfl,_internal,renderer,opengl,shaders2,_PatternFillShader,Uniform_Impl_)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{
namespace _PatternFillShader{


class HXCPP_CLASS_ATTRIBUTES  Uniform_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Uniform_Impl__obj OBJ_;
		Uniform_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Uniform_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniform_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Uniform_Impl_"); }

		static ::String TranslationMatrix;
		static ::String PatternMatrix;
		static ::String PatternTL;
		static ::String PatternBR;
		static ::String Sampler;
		static ::String ProjectionMatrix;
		static ::String Color;
		static ::String Alpha;
		static ::String ColorMultiplier;
		static ::String ColorOffset;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2
} // end namespace _PatternFillShader

#endif /* INCLUDED_openfl__internal_renderer_opengl_shaders2__PatternFillShader_Uniform_Impl_ */ 
