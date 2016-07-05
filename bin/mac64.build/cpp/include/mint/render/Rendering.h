#ifndef INCLUDED_mint_render_Rendering
#define INCLUDED_mint_render_Rendering

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(mint,render,Rendering)
namespace mint{
namespace render{


class HXCPP_CLASS_ATTRIBUTES  Rendering_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rendering_obj OBJ_;
		Rendering_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="mint.render.Rendering")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Rendering_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rendering_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Rendering","\x2c","\xbb","\x46","\x6f"); }

		virtual Dynamic get( ::hx::Class type,Dynamic control);
		Dynamic get_dyn();

};

} // end namespace mint
} // end namespace render

#endif /* INCLUDED_mint_render_Rendering */ 
