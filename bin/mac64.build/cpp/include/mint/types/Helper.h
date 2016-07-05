#ifndef INCLUDED_mint_types_Helper
#define INCLUDED_mint_types_Helper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(mint,types,Helper)
namespace mint{
namespace types{


class HXCPP_CLASS_ATTRIBUTES  Helper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Helper_obj OBJ_;
		Helper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="mint.types.Helper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Helper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Helper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Helper","\x8e","\xf1","\xe2","\x38"); }

		static Float clamp( Float value,Float a,Float b);
		static Dynamic clamp_dyn();

		static bool in_rect( Float x,Float y,Float rx,Float ry,Float rw,Float rh);
		static Dynamic in_rect_dyn();

};

} // end namespace mint
} // end namespace types

#endif /* INCLUDED_mint_types_Helper */ 
