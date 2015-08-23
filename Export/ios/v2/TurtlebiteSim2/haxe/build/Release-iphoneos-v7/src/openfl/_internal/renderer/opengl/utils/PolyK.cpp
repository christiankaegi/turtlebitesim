#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PolyK
#include <openfl/_internal/renderer/opengl/utils/PolyK.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void PolyK_obj::__construct()
{
	return null();
}

//PolyK_obj::~PolyK_obj() { }

Dynamic PolyK_obj::__CreateEmpty() { return  new PolyK_obj; }
hx::ObjectPtr< PolyK_obj > PolyK_obj::__new()
{  hx::ObjectPtr< PolyK_obj > result = new PolyK_obj();
	result->__construct();
	return result;}

Dynamic PolyK_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PolyK_obj > result = new PolyK_obj();
	result->__construct();
	return result;}

Array< int > PolyK_obj::triangulate( Array< Float > p){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PolyK","triangulate",0x8fb1bcbc,"openfl._internal.renderer.opengl.utils.PolyK.triangulate","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1636,0xd295150c)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(1638)
	bool sign = true;		HX_STACK_VAR(sign,"sign");
	HX_STACK_LINE(1640)
	int n = (int(p->length) >> int((int)1));		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(1641)
	if (((n < (int)3))){
		HX_STACK_LINE(1641)
		return Array_obj< int >::__new();
	}
	HX_STACK_LINE(1643)
	Array< int > tgs = Array_obj< int >::__new();		HX_STACK_VAR(tgs,"tgs");
	HX_STACK_LINE(1644)
	Array< int > avl;		HX_STACK_VAR(avl,"avl");
	HX_STACK_LINE(1644)
	{
		HX_STACK_LINE(1644)
		Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1644)
		{
			HX_STACK_LINE(1644)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1644)
			while((true)){
				HX_STACK_LINE(1644)
				if ((!(((_g1 < n))))){
					HX_STACK_LINE(1644)
					break;
				}
				HX_STACK_LINE(1644)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1644)
				_g->push(i);
			}
		}
		HX_STACK_LINE(1644)
		avl = _g;
	}
	HX_STACK_LINE(1646)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1647)
	int al = n;		HX_STACK_VAR(al,"al");
	HX_STACK_LINE(1648)
	bool earFound = false;		HX_STACK_VAR(earFound,"earFound");
	HX_STACK_LINE(1650)
	while((true)){
		HX_STACK_LINE(1650)
		if ((!(((al > (int)3))))){
			HX_STACK_LINE(1650)
			break;
		}
		HX_STACK_LINE(1652)
		int i0 = avl->__get(hx::Mod(i,al));		HX_STACK_VAR(i0,"i0");
		HX_STACK_LINE(1653)
		int i1 = avl->__get(hx::Mod(((i + (int)1)),al));		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(1654)
		int i2 = avl->__get(hx::Mod(((i + (int)2)),al));		HX_STACK_VAR(i2,"i2");
		HX_STACK_LINE(1656)
		Float ax = p->__get(((int)2 * i0));		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(1656)
		Float ay = p->__get((((int)2 * i0) + (int)1));		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(1657)
		Float bx = p->__get(((int)2 * i1));		HX_STACK_VAR(bx,"bx");
		HX_STACK_LINE(1657)
		Float by = p->__get((((int)2 * i1) + (int)1));		HX_STACK_VAR(by,"by");
		HX_STACK_LINE(1658)
		Float cx = p->__get(((int)2 * i2));		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(1658)
		Float cy = p->__get((((int)2 * i2) + (int)1));		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(1660)
		earFound = false;
		HX_STACK_LINE(1662)
		if ((::openfl::_internal::renderer::opengl::utils::PolyK_obj::_convex(ax,ay,bx,by,cx,cy,sign))){
			HX_STACK_LINE(1664)
			earFound = true;
			HX_STACK_LINE(1666)
			{
				HX_STACK_LINE(1666)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1666)
				while((true)){
					HX_STACK_LINE(1666)
					if ((!(((_g1 < al))))){
						HX_STACK_LINE(1666)
						break;
					}
					HX_STACK_LINE(1666)
					int j = (_g1)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(1668)
					int vi = avl->__get(j);		HX_STACK_VAR(vi,"vi");
					HX_STACK_LINE(1669)
					if (((bool((bool((vi == i0)) || bool((vi == i1)))) || bool((vi == i2))))){
						HX_STACK_LINE(1669)
						continue;
					}
					HX_STACK_LINE(1671)
					if ((::openfl::_internal::renderer::opengl::utils::PolyK_obj::_PointInTriangle(p->__get(((int)2 * vi)),p->__get((((int)2 * vi) + (int)1)),ax,ay,bx,by,cx,cy))){
						HX_STACK_LINE(1673)
						earFound = false;
						HX_STACK_LINE(1674)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1682)
		if ((earFound)){
			HX_STACK_LINE(1684)
			tgs->push(i0);
			HX_STACK_LINE(1685)
			tgs->push(i1);
			HX_STACK_LINE(1686)
			tgs->push(i2);
			HX_STACK_LINE(1687)
			avl->splice(hx::Mod(((i + (int)1)),al),(int)1);
			HX_STACK_LINE(1688)
			(al)--;
			HX_STACK_LINE(1689)
			i = (int)0;
		}
		else{
			HX_STACK_LINE(1691)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1691)
			if (((_g > ((int)3 * al)))){
				HX_STACK_LINE(1693)
				if ((sign)){
					HX_STACK_LINE(1695)
					tgs = Array_obj< int >::__new();
					HX_STACK_LINE(1696)
					Array< int > _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1696)
					{
						HX_STACK_LINE(1696)
						Array< int > _g11 = Array_obj< int >::__new();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(1696)
						{
							HX_STACK_LINE(1696)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1696)
							while((true)){
								HX_STACK_LINE(1696)
								if ((!(((_g2 < n))))){
									HX_STACK_LINE(1696)
									break;
								}
								HX_STACK_LINE(1696)
								int k = (_g2)++;		HX_STACK_VAR(k,"k");
								HX_STACK_LINE(1696)
								_g11->push(k);
							}
						}
						HX_STACK_LINE(1696)
						_g1 = _g11;
					}
					HX_STACK_LINE(1696)
					avl = _g1;
					HX_STACK_LINE(1698)
					i = (int)0;
					HX_STACK_LINE(1699)
					al = n;
					HX_STACK_LINE(1700)
					sign = false;
				}
				else{
					HX_STACK_LINE(1704)
					::haxe::Log_obj::trace(HX_CSTRING("Warning: shape too complex to fill"),hx::SourceInfo(HX_CSTRING("GraphicsRenderer.hx"),1704,HX_CSTRING("openfl._internal.renderer.opengl.utils.PolyK"),HX_CSTRING("triangulate")));
					HX_STACK_LINE(1705)
					return Array_obj< int >::__new();
				}
			}
		}
	}
	HX_STACK_LINE(1713)
	tgs->push(avl->__get((int)0));
	HX_STACK_LINE(1714)
	tgs->push(avl->__get((int)1));
	HX_STACK_LINE(1715)
	tgs->push(avl->__get((int)2));
	HX_STACK_LINE(1716)
	return tgs;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolyK_obj,triangulate,return )

bool PolyK_obj::_PointInTriangle( Float px,Float py,Float ax,Float ay,Float bx,Float by,Float cx,Float cy){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PolyK","_PointInTriangle",0x7548890e,"openfl._internal.renderer.opengl.utils.PolyK._PointInTriangle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1721,0xd295150c)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_LINE(1723)
	int v0x = ::Std_obj::_int((cx - ax));		HX_STACK_VAR(v0x,"v0x");
	HX_STACK_LINE(1724)
	int v0y = ::Std_obj::_int((cy - ay));		HX_STACK_VAR(v0y,"v0y");
	HX_STACK_LINE(1725)
	int v1x = ::Std_obj::_int((bx - ax));		HX_STACK_VAR(v1x,"v1x");
	HX_STACK_LINE(1726)
	int v1y = ::Std_obj::_int((by - ay));		HX_STACK_VAR(v1y,"v1y");
	HX_STACK_LINE(1727)
	int v2x = ::Std_obj::_int((px - ax));		HX_STACK_VAR(v2x,"v2x");
	HX_STACK_LINE(1728)
	int v2y = ::Std_obj::_int((py - ay));		HX_STACK_VAR(v2y,"v2y");
	HX_STACK_LINE(1730)
	int dot00 = ((v0x * v0x) + (v0y * v0y));		HX_STACK_VAR(dot00,"dot00");
	HX_STACK_LINE(1731)
	int dot01 = ((v0x * v1x) + (v0y * v1y));		HX_STACK_VAR(dot01,"dot01");
	HX_STACK_LINE(1732)
	int dot02 = ((v0x * v2x) + (v0y * v2y));		HX_STACK_VAR(dot02,"dot02");
	HX_STACK_LINE(1733)
	int dot11 = ((v1x * v1x) + (v1y * v1y));		HX_STACK_VAR(dot11,"dot11");
	HX_STACK_LINE(1734)
	int dot12 = ((v1x * v2x) + (v1y * v2y));		HX_STACK_VAR(dot12,"dot12");
	HX_STACK_LINE(1736)
	Float invDenom = (Float((int)1) / Float((((dot00 * dot11) - (dot01 * dot01)))));		HX_STACK_VAR(invDenom,"invDenom");
	HX_STACK_LINE(1737)
	Float u = ((((dot11 * dot02) - (dot01 * dot12))) * invDenom);		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(1738)
	Float v = ((((dot00 * dot12) - (dot01 * dot02))) * invDenom);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(1740)
	return (bool((bool((u >= (int)0)) && bool((v >= (int)0)))) && bool(((u + v) < (int)1)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(PolyK_obj,_PointInTriangle,return )

bool PolyK_obj::_convex( Float ax,Float ay,Float bx,Float by,Float cx,Float cy,bool sign){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PolyK","_convex",0xc062d896,"openfl._internal.renderer.opengl.utils.PolyK._convex","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1747,0xd295150c)
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_ARG(sign,"sign")
	HX_STACK_LINE(1747)
	return ((((((ay - by)) * ((cx - bx))) + (((bx - ax)) * ((cy - by)))) >= (int)0) == sign);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(PolyK_obj,_convex,return )


PolyK_obj::PolyK_obj()
{
}

Dynamic PolyK_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_convex") ) { return _convex_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"triangulate") ) { return triangulate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_PointInTriangle") ) { return _PointInTriangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PolyK_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PolyK_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("triangulate"),
	HX_CSTRING("_PointInTriangle"),
	HX_CSTRING("_convex"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PolyK_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PolyK_obj::__mClass,"__mClass");
};

#endif

Class PolyK_obj::__mClass;

void PolyK_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.PolyK"), hx::TCanCast< PolyK_obj> ,sStaticFields,sMemberFields,
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

void PolyK_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
