#ifndef INCLUDED_mint_render_luxe_Label
#define INCLUDED_mint_render_luxe_Label

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_render_Render
#include <mint/render/Render.h>
#endif
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Text)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Label)
HX_DECLARE_CLASS2(mint,render,Render)
HX_DECLARE_CLASS2(mint,render,Renderer)
HX_DECLARE_CLASS2(mint,render,Rendering)
HX_DECLARE_CLASS3(mint,render,luxe,Label)
HX_DECLARE_CLASS3(mint,render,luxe,LuxeMintRender)
HX_DECLARE_CLASS1(phoenix,Color)
namespace mint{
namespace render{
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Label_obj : public ::mint::render::Render_obj{
	public:
		typedef ::mint::render::Render_obj super;
		typedef Label_obj OBJ_;
		Label_obj();
		Void __construct(::mint::render::luxe::LuxeMintRender _render,::mint::Label _control);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.render.luxe.Label")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Label_obj > __new(::mint::render::luxe::LuxeMintRender _render,::mint::Label _control);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Label_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Label","\xd4","\x7d","\xdc","\x02"); }

		::mint::Label label;
		::luxe::Text text;
		::phoenix::Color color_hover;
		::phoenix::Color color;
		::mint::render::luxe::LuxeMintRender render;
		virtual Void onscale( Float _scale,Float _prev_scale);

		virtual Void onbounds( );

		virtual Void ontext( ::String _text);
		Dynamic ontext_dyn();

		virtual Void ondestroy( );

		virtual Void onclip( bool _disable,Float _x,Float _y,Float _w,Float _h);

		virtual Void onvisible( bool _visible);

		virtual Void ondepth( Float _depth);

};

} // end namespace mint
} // end namespace render
} // end namespace luxe

#endif /* INCLUDED_mint_render_luxe_Label */ 
