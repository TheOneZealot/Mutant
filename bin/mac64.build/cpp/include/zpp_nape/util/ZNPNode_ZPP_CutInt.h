#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt
#define INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_CutInt)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_CutInt)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZNPNode_ZPP_CutInt_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPNode_ZPP_CutInt_obj OBJ_;
		ZNPNode_ZPP_CutInt_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPNode_ZPP_CutInt")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZNPNode_ZPP_CutInt_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPNode_ZPP_CutInt_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZNPNode_ZPP_CutInt","\x53","\xf7","\x14","\xb5"); }

		static void __boot();
		static ::zpp_nape::util::ZNPNode_ZPP_CutInt zpp_pool;
		::zpp_nape::util::ZNPNode_ZPP_CutInt next;
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		::zpp_nape::geom::ZPP_CutInt elt;
		virtual ::zpp_nape::geom::ZPP_CutInt elem( );
		Dynamic elem_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt */ 
