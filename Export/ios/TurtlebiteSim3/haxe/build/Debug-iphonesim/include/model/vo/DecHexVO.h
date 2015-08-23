#ifndef INCLUDED_model_vo_DecHexVO
#define INCLUDED_model_vo_DecHexVO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(model,vo,DecHexVO)
namespace model{
namespace vo{


class HXCPP_CLASS_ATTRIBUTES  DecHexVO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DecHexVO_obj OBJ_;
		DecHexVO_obj();
		Void __construct(int dec,::String hex);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DecHexVO_obj > __new(int dec,::String hex);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DecHexVO_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DecHexVO"); }

		int dec;
		::String hex;
};

} // end namespace model
} // end namespace vo

#endif /* INCLUDED_model_vo_DecHexVO */ 
