#ifndef INCLUDED_mint_render_luxe_Button
#define INCLUDED_mint_render_luxe_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_render_Render
#include <mint/render/Render.h>
#endif
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(mint,Button)
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS2(mint,render,Render)
HX_DECLARE_CLASS2(mint,render,Renderer)
HX_DECLARE_CLASS2(mint,render,Rendering)
HX_DECLARE_CLASS3(mint,render,luxe,Button)
HX_DECLARE_CLASS3(mint,render,luxe,LuxeMintRender)
HX_DECLARE_CLASS1(phoenix,Color)
namespace mint{
namespace render{
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Button_obj : public ::mint::render::Render_obj{
	public:
		typedef ::mint::render::Render_obj super;
		typedef Button_obj OBJ_;
		Button_obj();
		Void __construct(::mint::render::luxe::LuxeMintRender _render,::mint::Button _control);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.render.luxe.Button")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Button_obj > __new(::mint::render::luxe::LuxeMintRender _render,::mint::Button _control);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Button_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"); }

		::mint::Button button;
		::luxe::Sprite visual;
		::phoenix::Color color;
		::phoenix::Color color_hover;
		::phoenix::Color color_down;
		::mint::render::luxe::LuxeMintRender render;
		virtual Void onscale( Float _scale,Float _prev_scale);

		virtual Void onbounds( );

		virtual Void ondestroy( );

		virtual Void onclip( bool _disable,Float _x,Float _y,Float _w,Float _h);

		virtual Void onvisible( bool _visible);

		virtual Void ondepth( Float _depth);

};

} // end namespace mint
} // end namespace render
} // end namespace luxe

#endif /* INCLUDED_mint_render_luxe_Button */ 
