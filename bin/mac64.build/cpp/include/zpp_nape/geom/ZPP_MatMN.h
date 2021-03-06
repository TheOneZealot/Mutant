#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#define INCLUDED_zpp_nape_geom_ZPP_MatMN

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,MatMN)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_MatMN)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_MatMN_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_MatMN_obj OBJ_;
		ZPP_MatMN_obj();
		Void __construct(int m,int n);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_MatMN")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_MatMN_obj > __new(int m,int n);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_MatMN_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_MatMN","\x7c","\x9d","\x8f","\x99"); }

		::nape::geom::MatMN outer;
		int m;
		int n;
		Array< Float > x;
};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_MatMN */ 
