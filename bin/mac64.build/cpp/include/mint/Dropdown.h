#ifndef INCLUDED_mint_Dropdown
#define INCLUDED_mint_Dropdown

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Dropdown)
HX_DECLARE_CLASS1(mint,Label)
HX_DECLARE_CLASS1(mint,List)
HX_DECLARE_CLASS2(mint,core,Signal)
namespace mint{


class HXCPP_CLASS_ATTRIBUTES  Dropdown_obj : public ::mint::Control_obj{
	public:
		typedef ::mint::Control_obj super;
		typedef Dropdown_obj OBJ_;
		Dropdown_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.Dropdown")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Dropdown_obj > __new(Dynamic _options);
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

		::mint::List list;
		::mint::Label label;
		bool is_open;
		::mint::core::Signal onselect;
		Float _height;
		Dynamic options;
		virtual Void ondeselect( Dynamic e,::mint::Control c);
		Dynamic ondeselect_dyn();

		virtual Void onselected( int idx,::mint::Control c,Dynamic e);
		Dynamic onselected_dyn();

		virtual Void add_item( ::mint::Control _item,hx::Null< Float >  offset_x,hx::Null< Float >  offset_y);
		Dynamic add_item_dyn();

		virtual Void close_list( );
		Dynamic close_list_dyn();

		virtual Void open_list( );
		Dynamic open_list_dyn();

		virtual Void destroy( );

		bool skip_mouse_up;
		virtual Void mousedown( Dynamic e);

		virtual Void mouseup( Dynamic e);

		virtual Void bounds_changed( hx::Null< Float >  _dx,hx::Null< Float >  _dy,hx::Null< Float >  _dw,hx::Null< Float >  _dh);

};

} // end namespace mint

#endif /* INCLUDED_mint_Dropdown */ 
