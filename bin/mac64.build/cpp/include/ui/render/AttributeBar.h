#ifndef INCLUDED_ui_render_AttributeBar
#define INCLUDED_ui_render_AttributeBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_render_Render
#include <mint/render/Render.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS2(mint,render,Render)
HX_DECLARE_CLASS2(mint,render,Renderer)
HX_DECLARE_CLASS2(mint,render,Rendering)
HX_DECLARE_CLASS3(mint,render,luxe,LuxeMintRender)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadGeometry)
HX_DECLARE_CLASS1(ui,AttributeBar)
HX_DECLARE_CLASS2(ui,render,AttributeBar)
HX_DECLARE_CLASS2(ui,render,MutantMintRenderer)
namespace ui{
namespace render{


class HXCPP_CLASS_ATTRIBUTES  AttributeBar_obj : public ::mint::render::Render_obj{
	public:
		typedef ::mint::render::Render_obj super;
		typedef AttributeBar_obj OBJ_;
		AttributeBar_obj();
		Void __construct(::ui::render::MutantMintRenderer _render,::ui::AttributeBar _control);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ui.render.AttributeBar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AttributeBar_obj > __new(::ui::render::MutantMintRenderer _render,::ui::AttributeBar _control);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AttributeBar_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AttributeBar","\x37","\x3f","\xbc","\x5d"); }

		::ui::AttributeBar attribute_bar;
		::phoenix::geometry::QuadGeometry visual;
		Array< ::Dynamic > bars;
		::phoenix::Color color;
		::phoenix::Color color_bar;
		::phoenix::Color color_bar_empty;
		::ui::render::MutantMintRenderer render;
		Float margin;
		Float padding;
		virtual Void onchange( int _val,int _max);
		Dynamic onchange_dyn();

		virtual Void create_bar( int _index);
		Dynamic create_bar_dyn();

		virtual Float get_bar_width( );
		Dynamic get_bar_width_dyn();

		virtual Float get_bar_x( int _index);
		Dynamic get_bar_x_dyn();

		virtual Void ondestroy( );

		virtual Void onbounds( );

		virtual Void onvisible( bool _visible);

		virtual Void ondepth( Float _depth);

};

} // end namespace ui
} // end namespace render

#endif /* INCLUDED_ui_render_AttributeBar */ 
