#ifndef INCLUDED_ui_render_MutantMintRenderer
#define INCLUDED_ui_render_MutantMintRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_render_luxe_LuxeMintRender
#include <mint/render/luxe/LuxeMintRender.h>
#endif
HX_DECLARE_CLASS2(mint,render,Rendering)
HX_DECLARE_CLASS3(mint,render,luxe,LuxeMintRender)
HX_DECLARE_CLASS2(ui,render,MutantMintRenderer)
namespace ui{
namespace render{


class HXCPP_CLASS_ATTRIBUTES  MutantMintRenderer_obj : public ::mint::render::luxe::LuxeMintRender_obj{
	public:
		typedef ::mint::render::luxe::LuxeMintRender_obj super;
		typedef MutantMintRenderer_obj OBJ_;
		MutantMintRenderer_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ui.render.MutantMintRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MutantMintRenderer_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MutantMintRenderer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MutantMintRenderer","\x20","\x3d","\x19","\xbc"); }

		virtual Dynamic get( ::hx::Class type,Dynamic control);

};

} // end namespace ui
} // end namespace render

#endif /* INCLUDED_ui_render_MutantMintRenderer */ 
