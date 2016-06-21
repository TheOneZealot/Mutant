#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#define INCLUDED_zpp_nape_util_ZPP_PubPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,GeomPoly)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_PubPool)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZPP_PubPool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_PubPool_obj OBJ_;
		ZPP_PubPool_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="zpp_nape.util.ZPP_PubPool")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_PubPool_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_PubPool_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ZPP_PubPool","\x74","\x2e","\x91","\xf3"); }

		static void __boot();
		static ::nape::geom::GeomPoly poolGeomPoly;
		static ::nape::geom::GeomPoly nextGeomPoly;
		static ::nape::geom::Vec2 poolVec2;
		static ::nape::geom::Vec2 nextVec2;
		static ::nape::geom::Vec3 poolVec3;
		static ::nape::geom::Vec3 nextVec3;
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZPP_PubPool */ 
