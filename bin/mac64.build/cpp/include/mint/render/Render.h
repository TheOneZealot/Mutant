#ifndef INCLUDED_mint_render_Render
#define INCLUDED_mint_render_Render

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_render_Renderer
#include <mint/render/Renderer.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS2(mint,render,Render)
HX_DECLARE_CLASS2(mint,render,Renderer)
HX_DECLARE_CLASS2(mint,render,Rendering)
namespace mint{
namespace render{


class HXCPP_CLASS_ATTRIBUTES  Render_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Render_obj OBJ_;
		Render_obj();
		Void __construct(::mint::render::Rendering _render,::mint::Control _control);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.render.Render")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Render_obj > __new(::mint::render::Rendering _render,::mint::Control _control);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Render_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::mint::render::Renderer_obj *();
		::String __ToString() const { return HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39"); }

		::mint::render::Rendering rendering;
		::mint::Control control;
		virtual Void internal_connect( );
		Dynamic internal_connect_dyn();

		virtual Void internal_disconnect( );
		Dynamic internal_disconnect_dyn();

		virtual Float get_scale( );
		Dynamic get_scale_dyn();

		virtual Float get_sx( );
		Dynamic get_sx_dyn();

		virtual Float get_sy( );
		Dynamic get_sy_dyn();

		virtual Float get_sw( );
		Dynamic get_sw_dyn();

		virtual Float get_sh( );
		Dynamic get_sh_dyn();

		virtual Float cs( Float _value);
		Dynamic cs_dyn();

		virtual Void onscale( Float _scale,Float _prev);
		Dynamic onscale_dyn();

		virtual Void onvisible( bool _v);
		Dynamic onvisible_dyn();

		virtual Void ondepth( Float _d);
		Dynamic ondepth_dyn();

		virtual Void ondestroy( );
		Dynamic ondestroy_dyn();

		virtual Void onbounds( );
		Dynamic onbounds_dyn();

		virtual Void onclip( bool _disable,Float _x,Float _y,Float _w,Float _h);
		Dynamic onclip_dyn();

		virtual Void onchildadd( ::mint::Control _c);
		Dynamic onchildadd_dyn();

		virtual Void onchildremove( ::mint::Control _c);
		Dynamic onchildremove_dyn();

};

} // end namespace mint
} // end namespace render

#endif /* INCLUDED_mint_render_Render */ 
