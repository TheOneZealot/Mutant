#ifndef INCLUDED_mint_Window
#define INCLUDED_mint_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Label)
HX_DECLARE_CLASS1(mint,Window)
HX_DECLARE_CLASS2(mint,core,Signal)
namespace mint{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public ::mint::Control_obj{
	public:
		typedef ::mint::Control_obj super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.Window")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Window_obj > __new(Dynamic _options);
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

		::mint::Label title;
		::mint::Control close_handle;
		::mint::Control resize_handle;
		::mint::Control collapse_handle;
		bool closable;
		bool focusable;
		bool moveable;
		bool resizable;
		bool collapsible;
		::mint::core::Signal onclose;
		::mint::core::Signal oncollapse;
		bool dragging;
		Float drag_x;
		Float drag_y;
		Dynamic options;
		bool ready;
		bool resizing;
		Float resize_x;
		Float resize_y;
		virtual Void on_resize_up( Dynamic e,::mint::Control _);
		Dynamic on_resize_up_dyn();

		virtual Void on_resize_down( Dynamic e,::mint::Control _);
		Dynamic on_resize_down_dyn();

		bool collapsed;
		Float pre_h;
		Float pre_h_min;
		bool pre_resize;
		virtual Void on_collapse( Dynamic e,::mint::Control _);
		Dynamic on_collapse_dyn();

		virtual Void on_close( Dynamic e,::mint::Control _);
		Dynamic on_close_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void open( );
		Dynamic open_dyn();

		virtual Void destroy( );

		virtual Void add( ::mint::Control child);

		virtual Void mousemove( Dynamic e);

		virtual Void mousedown( Dynamic e);

		virtual Void mouseup( Dynamic e);

		virtual Void bounds_changed( hx::Null< Float >  _dx,hx::Null< Float >  _dy,hx::Null< Float >  _dw,hx::Null< Float >  _dh);

};

} // end namespace mint

#endif /* INCLUDED_mint_Window */ 
