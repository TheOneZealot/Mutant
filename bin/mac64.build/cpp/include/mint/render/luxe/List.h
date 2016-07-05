#ifndef INCLUDED_mint_render_luxe_List
#define INCLUDED_mint_render_luxe_List

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_render_Render
#include <mint/render/Render.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,List)
HX_DECLARE_CLASS2(mint,render,Render)
HX_DECLARE_CLASS2(mint,render,Renderer)
HX_DECLARE_CLASS2(mint,render,Rendering)
HX_DECLARE_CLASS3(mint,render,luxe,List)
HX_DECLARE_CLASS3(mint,render,luxe,LuxeMintRender)
namespace mint{
namespace render{
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  List_obj : public ::mint::render::Render_obj{
	public:
		typedef ::mint::render::Render_obj super;
		typedef List_obj OBJ_;
		List_obj();
		Void __construct(::mint::render::luxe::LuxeMintRender _render,::mint::List _control);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.render.luxe.List")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< List_obj > __new(::mint::render::luxe::LuxeMintRender _render,::mint::List _control);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~List_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("List","\x7e","\x48","\x8c","\x32"); }

		::mint::List list;
		::mint::render::luxe::LuxeMintRender render;
		virtual Void onitementer( int idx,::mint::Control ctrl,Dynamic e);
		Dynamic onitementer_dyn();

		virtual Void onitemleave( int idx,::mint::Control ctrl,Dynamic e);
		Dynamic onitemleave_dyn();

		bool selected;
		virtual Void onselect( int idx,::mint::Control ctrl,Dynamic e);
		Dynamic onselect_dyn();

		virtual Void ondestroy( );

		virtual Void onclip( bool _disable,Float _x,Float _y,Float _w,Float _h);

		virtual Void onvisible( bool _visible);

		virtual Void ondepth( Float _depth);

};

} // end namespace mint
} // end namespace render
} // end namespace luxe

#endif /* INCLUDED_mint_render_luxe_List */ 
