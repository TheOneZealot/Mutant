#ifndef INCLUDED_mint_render_luxe_LuxeMintRender
#define INCLUDED_mint_render_luxe_LuxeMintRender

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_render_Rendering
#include <mint/render/Rendering.h>
#endif
HX_DECLARE_CLASS2(mint,render,Rendering)
HX_DECLARE_CLASS3(mint,render,luxe,LuxeMintRender)
namespace mint{
namespace render{
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  LuxeMintRender_obj : public ::mint::render::Rendering_obj{
	public:
		typedef ::mint::render::Rendering_obj super;
		typedef LuxeMintRender_obj OBJ_;
		LuxeMintRender_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.render.luxe.LuxeMintRender")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LuxeMintRender_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LuxeMintRender_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LuxeMintRender","\x0e","\xa7","\x78","\x56"); }

		Dynamic options;
		virtual Dynamic get( ::hx::Class type,Dynamic control);

};

} // end namespace mint
} // end namespace render
} // end namespace luxe

#endif /* INCLUDED_mint_render_luxe_LuxeMintRender */ 
