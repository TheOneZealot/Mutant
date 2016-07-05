#ifndef INCLUDED_mint_render_luxe_Window
#define INCLUDED_mint_render_luxe_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_render_Render
#include <mint/render/Render.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Window)
HX_DECLARE_CLASS2(mint,render,Render)
HX_DECLARE_CLASS2(mint,render,Renderer)
HX_DECLARE_CLASS2(mint,render,Rendering)
HX_DECLARE_CLASS3(mint,render,luxe,LuxeMintRender)
HX_DECLARE_CLASS3(mint,render,luxe,Window)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,RectangleGeometry)
namespace mint{
namespace render{
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public ::mint::render::Render_obj{
	public:
		typedef ::mint::render::Render_obj super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(::mint::render::luxe::LuxeMintRender _render,::mint::Window _control);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.render.luxe.Window")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Window_obj > __new(::mint::render::luxe::LuxeMintRender _render,::mint::Window _control);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Window","\x10","\x08","\x21","\x87"); }

		::mint::Window window;
		::phoenix::geometry::QuadGeometry visual;
		::phoenix::geometry::QuadGeometry top;
		::phoenix::geometry::Geometry collapse;
		::phoenix::geometry::Geometry close;
		::phoenix::geometry::RectangleGeometry border;
		::phoenix::Color color;
		::phoenix::Color color_titlebar;
		::phoenix::Color color_border;
		::phoenix::Color color_close;
		::phoenix::Color color_collapse;
		::phoenix::Color color_close_hover;
		::phoenix::Color color_collapse_hover;
		::mint::render::luxe::LuxeMintRender render;
		virtual Void update_clip( Float _scale);
		Dynamic update_clip_dyn();

		virtual Void onscale( Float _scale,Float _prev_scale);

		virtual Void ondestroy( );

		virtual Void onbounds( );

		virtual Void onclip( bool _disable,Float _x,Float _y,Float _w,Float _h);

		virtual Void onvisible( bool _visible);

		virtual Void ondepth( Float _depth);

		virtual Void oncollapse( bool state);
		Dynamic oncollapse_dyn();

};

} // end namespace mint
} // end namespace render
} // end namespace luxe

#endif /* INCLUDED_mint_render_luxe_Window */ 
