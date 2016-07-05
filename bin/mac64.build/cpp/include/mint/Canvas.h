#ifndef INCLUDED_mint_Canvas
#define INCLUDED_mint_Canvas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
HX_DECLARE_CLASS1(mint,Canvas)
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS2(mint,core,Signal)
namespace mint{


class HXCPP_CLASS_ATTRIBUTES  Canvas_obj : public ::mint::Control_obj{
	public:
		typedef ::mint::Control_obj super;
		typedef Canvas_obj OBJ_;
		Canvas_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.Canvas")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Canvas_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Canvas_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Canvas","\xf8","\xc8","\xd6","\xec"); }

		::mint::Control focused;
		::mint::Control marked;
		::mint::Control captured;
		bool focus_invalid;
		Float scale;
		::mint::core::Signal onfocusedchange;
		::mint::core::Signal onmarkedchange;
		::mint::core::Signal oncapturedchange;
		::mint::core::Signal onscalechange;
		Dynamic options;
		virtual Void bring_to_front( ::mint::Control control);
		Dynamic bring_to_front_dyn();

		virtual ::mint::Control topmost_at_point( Float _x,Float _y);
		Dynamic topmost_at_point_dyn();

		Float depth_idx;
		virtual Void apply_depth( ::mint::Control control);
		Dynamic apply_depth_dyn();

		virtual Void sync_depth( );
		Dynamic sync_depth_dyn();

		virtual Void mouseup( Dynamic e);

		bool _mouse_down;
		virtual Void mousedown( Dynamic e);

		virtual Void mousemove( Dynamic e);

		virtual Void mousewheel( Dynamic e);

		virtual Void keyup( Dynamic e);

		virtual Void keydown( Dynamic e);

		virtual Void textinput( Dynamic e);

		virtual Void update( Float dt);

		virtual Void destroy( );

		virtual Float set_scale( Float _scale);
		Dynamic set_scale_dyn();

		virtual ::mint::Control get_focused( );
		Dynamic get_focused_dyn();

		virtual ::mint::Control set_focused( ::mint::Control _control);
		Dynamic set_focused_dyn();

		virtual ::mint::Control get_captured( );
		Dynamic get_captured_dyn();

		virtual ::mint::Control set_captured( ::mint::Control _control);
		Dynamic set_captured_dyn();

		virtual ::mint::Control get_marked( );
		Dynamic get_marked_dyn();

		virtual ::mint::Control set_marked( ::mint::Control _control);
		Dynamic set_marked_dyn();

};

} // end namespace mint

#endif /* INCLUDED_mint_Canvas */ 
