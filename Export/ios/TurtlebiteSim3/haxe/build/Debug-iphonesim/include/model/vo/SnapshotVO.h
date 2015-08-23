#ifndef INCLUDED_model_vo_SnapshotVO
#define INCLUDED_model_vo_SnapshotVO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(model,vo,SnapshotVO)
namespace model{
namespace vo{


class HXCPP_CLASS_ATTRIBUTES  SnapshotVO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SnapshotVO_obj OBJ_;
		SnapshotVO_obj();
		Void __construct(::String __o_binary,::String __o_hex,Dynamic __o_decimal);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SnapshotVO_obj > __new(::String __o_binary,::String __o_hex,Dynamic __o_decimal);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SnapshotVO_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SnapshotVO"); }

		::String binary;
		::String hex;
		int decimal;
		Array< bool > codeArr;
		virtual Void createCodeArray( );
		Dynamic createCodeArray_dyn();

		virtual ::String getBinary( );
		Dynamic getBinary_dyn();

		virtual ::String getHex( );
		Dynamic getHex_dyn();

		virtual int getDecimal( );
		Dynamic getDecimal_dyn();

		virtual Array< bool > getCodeArr( );
		Dynamic getCodeArr_dyn();

};

} // end namespace model
} // end namespace vo

#endif /* INCLUDED_model_vo_SnapshotVO */ 
