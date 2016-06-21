#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#define INCLUDED_zpp_nape_geom_ZPP_SimplifyP

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimplifyP)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimplifyV)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_SimplifyP_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_SimplifyP_obj OBJ_;
		ZPP_SimplifyP_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_SimplifyP")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_SimplifyP_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_SimplifyP_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_SimplifyP","\x22","\x12","\x30","\x7e"); }

		static void __boot();
		static ::zpp_nape::geom::ZPP_SimplifyP zpp_pool;
		static ::zpp_nape::geom::ZPP_SimplifyP get( ::zpp_nape::geom::ZPP_SimplifyV min,::zpp_nape::geom::ZPP_SimplifyV max);
		static Dynamic get_dyn();

		::zpp_nape::geom::ZPP_SimplifyP next;
		::zpp_nape::geom::ZPP_SimplifyV min;
		::zpp_nape::geom::ZPP_SimplifyV max;
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_SimplifyP */ 
