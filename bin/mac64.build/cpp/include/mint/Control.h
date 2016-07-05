#ifndef INCLUDED_mint_Control
#define INCLUDED_mint_Control

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(mint,Canvas)
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS2(mint,core,Signal)
HX_DECLARE_CLASS2(mint,render,Renderer)
HX_DECLARE_CLASS2(mint,render,Rendering)
namespace mint{


class HXCPP_CLASS_ATTRIBUTES  Control_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Control_obj OBJ_;
		Control_obj();
		Void __construct(Dynamic _options,hx::Null< bool >  __o__emit_oncreate);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.Control")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Control_obj > __new(Dynamic _options,hx::Null< bool >  __o__emit_oncreate);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Control_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Control","\x3d","\x93","\xd2","\xe6"); }

		::String name;
		Dynamic user;
		::mint::Canvas canvas;
		::mint::Control closest_to_canvas;
		Float x;
		Float y;
		Float w;
		Float h;
		Float w_min;
		Float h_min;
		Float w_max;
		Float h_max;
		Float x_local;
		Float y_local;
		::mint::Control clip_with;
		Array< ::Dynamic > children;
		bool isfocused;
		bool ismarked;
		bool iscaptured;
		bool ishovered;
		bool mouse_input;
		bool key_input;
		bool renderable;
		bool destroyed;
		bool visible;
		Dynamic children_bounds;
		::mint::core::Signal oncreate;
		::mint::core::Signal onrender;
		::mint::core::Signal onrenamed;
		::mint::core::Signal onbounds;
		::mint::core::Signal ondestroy;
		::mint::core::Signal onvisible;
		::mint::core::Signal ondepth;
		::mint::core::Signal onclip;
		::mint::core::Signal onchildadd;
		::mint::core::Signal onchildremove;
		::mint::core::Signal onmousedown;
		::mint::core::Signal onmouseup;
		::mint::core::Signal onmousemove;
		::mint::core::Signal onmousewheel;
		::mint::core::Signal onmouseenter;
		::mint::core::Signal onmouseleave;
		::mint::core::Signal onkeydown;
		::mint::core::Signal onkeyup;
		::mint::core::Signal ontextinput;
		::mint::core::Signal onfocused;
		::mint::core::Signal onmarked;
		::mint::core::Signal oncaptured;
		::mint::Control parent;
		Float depth;
		::mint::render::Renderer renderer;
		::mint::render::Rendering rendering;
		Dynamic _options_;
		Float depth_offset;
		virtual Array< ::Dynamic > children_at_point( Float _x,Float _y,Array< ::Dynamic > _into);
		Dynamic children_at_point_dyn();

		virtual ::mint::Control topmost_child_at_point( Float _x,Float _y);
		Dynamic topmost_child_at_point_dyn();

		virtual bool contains( Float _x,Float _y);
		Dynamic contains_dyn();

		virtual Void onclipchanged( );
		Dynamic onclipchanged_dyn();

		virtual ::mint::Control set_clip_with( ::mint::Control _other);
		Dynamic set_clip_with_dyn();

		bool vis_state;
		bool update_vis_state;
		virtual Void set_visible_only( bool _visible);
		Dynamic set_visible_only_dyn();

		virtual bool set_visible( bool _visible);
		Dynamic set_visible_dyn();

		virtual ::mint::Control find_top_parent( ::mint::Control _from);
		Dynamic find_top_parent_dyn();

		virtual Void add( ::mint::Control child);
		Dynamic add_dyn();

		virtual Void remove( ::mint::Control child);
		Dynamic remove_dyn();

		virtual Dynamic get_children_bounds( );
		Dynamic get_children_bounds_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void keyup( Dynamic e);
		Dynamic keyup_dyn();

		virtual Void keydown( Dynamic e);
		Dynamic keydown_dyn();

		virtual Void textinput( Dynamic e);
		Dynamic textinput_dyn();

		virtual Void mousemove( Dynamic e);
		Dynamic mousemove_dyn();

		virtual Void mouseup( Dynamic e);
		Dynamic mouseup_dyn();

		virtual Void mousewheel( Dynamic e);
		Dynamic mousewheel_dyn();

		virtual Void mousedown( Dynamic e);
		Dynamic mousedown_dyn();

		virtual Void mouseenter( Dynamic e);
		Dynamic mouseenter_dyn();

		virtual Void mouseleave( Dynamic e);
		Dynamic mouseleave_dyn();

		virtual Void destroy_children( );
		Dynamic destroy_children_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void focus( );
		Dynamic focus_dyn();

		virtual Void unfocus( );
		Dynamic unfocus_dyn();

		virtual Void capture( );
		Dynamic capture_dyn();

		virtual Void uncapture( );
		Dynamic uncapture_dyn();

		virtual Void mark( );
		Dynamic mark_dyn();

		virtual Void unmark( );
		Dynamic unmark_dyn();

		virtual Void refresh_bounds( );
		Dynamic refresh_bounds_dyn();

		bool updating;
		virtual Void bounds_changed( hx::Null< Float >  _dx,hx::Null< Float >  _dy,hx::Null< Float >  _dw,hx::Null< Float >  _dh);
		Dynamic bounds_changed_dyn();

		virtual Void set_pos( Float _x,Float _y);
		Dynamic set_pos_dyn();

		virtual Void set_size( Float _w,Float _h);
		Dynamic set_size_dyn();

		virtual Float get_right( );
		Dynamic get_right_dyn();

		virtual Float get_bottom( );
		Dynamic get_bottom_dyn();

		virtual ::String set_name( ::String _name);
		Dynamic set_name_dyn();

		virtual Float set_x( Float _x);
		Dynamic set_x_dyn();

		virtual Float set_y( Float _y);
		Dynamic set_y_dyn();

		virtual Float set_w_min( Float _w_min);
		Dynamic set_w_min_dyn();

		virtual Float set_h_min( Float _h_min);
		Dynamic set_h_min_dyn();

		virtual Float set_w_max( Float _w_max);
		Dynamic set_w_max_dyn();

		virtual Float set_h_max( Float _h_max);
		Dynamic set_h_max_dyn();

		virtual Float set_w( Float _w);
		Dynamic set_w_dyn();

		virtual Float set_h( Float _h);
		Dynamic set_h_dyn();

		bool ignore_spatial;
		virtual Float set_x_local( Float _x);
		Dynamic set_x_local_dyn();

		virtual Float set_y_local( Float _y);
		Dynamic set_y_local_dyn();

		virtual Float get_x_local( );
		Dynamic get_x_local_dyn();

		virtual Float get_y_local( );
		Dynamic get_y_local_dyn();

		virtual int get_nodes( );
		Dynamic get_nodes_dyn();

		virtual Float get_depth( );
		Dynamic get_depth_dyn();

		virtual Float set_depth( Float _depth);
		Dynamic set_depth_dyn();

		virtual ::mint::Control set_parent( ::mint::Control p);
		Dynamic set_parent_dyn();

		virtual ::mint::Control get_parent( );
		Dynamic get_parent_dyn();

};

} // end namespace mint

#endif /* INCLUDED_mint_Control */ 
