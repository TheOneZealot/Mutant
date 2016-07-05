#ifndef INCLUDED_mint_Scroll
#define INCLUDED_mint_Scroll

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Scroll)
HX_DECLARE_CLASS2(mint,core,Signal)
namespace mint{


class HXCPP_CLASS_ATTRIBUTES  Scroll_obj : public ::mint::Control_obj{
	public:
		typedef ::mint::Control_obj super;
		typedef Scroll_obj OBJ_;
		Scroll_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.Scroll")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Scroll_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scroll_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Scroll","\x2d","\x4c","\xf9","\x7b"); }

		::mint::Control scrollh;
		::mint::Control scrollv;
		::mint::Control container;
		Dynamic child_bounds;
		::mint::core::Signal onchange;
		::mint::core::Signal onhandlevis;
		bool drag_v;
		Float drag_y;
		Float percent_v;
		bool visible_v;
		bool drag_h;
		Float drag_x;
		Float percent_h;
		bool visible_h;
		Dynamic options;
		bool ready;
		virtual Void set_scroll_percent( Dynamic _horizontal,Dynamic _vertical);
		Dynamic set_scroll_percent_dyn();

		virtual Void update_container( );
		Dynamic update_container_dyn();

		virtual Void scrollvdown( Dynamic e,::mint::Control _);
		Dynamic scrollvdown_dyn();

		virtual Void scrollvup( Dynamic e,::mint::Control _);
		Dynamic scrollvup_dyn();

		virtual Void scrollvmove( Dynamic e,::mint::Control _);
		Dynamic scrollvmove_dyn();

		virtual Void scrollhdown( Dynamic e,::mint::Control _);
		Dynamic scrollhdown_dyn();

		virtual Void scrollhup( Dynamic e,::mint::Control _);
		Dynamic scrollhup_dyn();

		virtual Void scrollhmove( Dynamic e,::mint::Control _);
		Dynamic scrollhmove_dyn();

		virtual Void update_scroll( );
		Dynamic update_scroll_dyn();

		virtual Float get_step_h( );
		Dynamic get_step_h_dyn();

		virtual Float get_step_v( );
		Dynamic get_step_v_dyn();

		virtual Void destroy( );

		virtual Void add( ::mint::Control child);

		virtual Void refresh_scroll( );
		Dynamic refresh_scroll_dyn();

		virtual Void remove( ::mint::Control child);

		virtual Void mousewheel( Dynamic e);

		virtual Void bounds_changed( hx::Null< Float >  _dx,hx::Null< Float >  _dy,hx::Null< Float >  _dw,hx::Null< Float >  _dh);

};

} // end namespace mint

#endif /* INCLUDED_mint_Scroll */ 
