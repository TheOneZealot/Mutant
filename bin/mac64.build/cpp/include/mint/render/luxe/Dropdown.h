#ifndef INCLUDED_mint_render_luxe_Dropdown
#define INCLUDED_mint_render_luxe_Dropdown

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_render_Render
#include <mint/render/Render.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Dropdown)
HX_DECLARE_CLASS2(mint,render,Render)
HX_DECLARE_CLASS2(mint,render,Renderer)
HX_DECLARE_CLASS2(mint,render,Rendering)
HX_DECLARE_CLASS3(mint,render,luxe,Dropdown)
HX_DECLARE_CLASS3(mint,render,luxe,LuxeMintRender)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,RectangleGeometry)
namespace mint{
namespace render{
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Dropdown_obj : public ::mint::render::Render_obj{
	public:
		typedef ::mint::render::Render_obj super;
		typedef Dropdown_obj OBJ_;
		Dropdown_obj();
		Void __construct(::mint::render::luxe::LuxeMintRender _render,::mint::Dropdown _control);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.render.luxe.Dropdown")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Dropdown_obj > __new(::mint::render::luxe::LuxeMintRender _render,::mint::Dropdown _control);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Dropdown_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Dropdown","\x31","\x30","\xe1","\xd6"); }

		::mint::Dropdown dropdown;
		::phoenix::geometry::QuadGeometry visual;
		::phoenix::geometry::RectangleGeometry border;
		::phoenix::Color color;
		::phoenix::Color color_border;
		::mint::render::luxe::LuxeMintRender render;
		virtual Void update_clip( Float _scale);
		Dynamic update_clip_dyn();

		virtual Void onscale( Float _scale,Float _prev_scale);

		virtual Void ondestroy( );

		virtual Void onbounds( );

		virtual Void onclip( bool _disable,Float _x,Float _y,Float _w,Float _h);

		virtual Void onvisible( bool _visible);

		virtual Void ondepth( Float _depth);

};

} // end namespace mint
} // end namespace render
} // end namespace luxe

#endif /* INCLUDED_mint_render_luxe_Dropdown */ 
