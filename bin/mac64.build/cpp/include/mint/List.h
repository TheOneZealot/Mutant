#ifndef INCLUDED_mint_List
#define INCLUDED_mint_List

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,List)
HX_DECLARE_CLASS1(mint,Scroll)
HX_DECLARE_CLASS2(mint,core,Signal)
namespace mint{


class HXCPP_CLASS_ATTRIBUTES  List_obj : public ::mint::Control_obj{
	public:
		typedef ::mint::Control_obj super;
		typedef List_obj OBJ_;
		List_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.List")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< List_obj > __new(Dynamic _options);
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

		::mint::Scroll view;
		Array< ::Dynamic > items;
		Dynamic options;
		::mint::core::Signal onselect;
		::mint::core::Signal onitementer;
		::mint::core::Signal onitemleave;
		virtual Void add_item( ::mint::Control item,hx::Null< Float >  offset_x,hx::Null< Float >  offset_y);
		Dynamic add_item_dyn();

		virtual Void item_mouseenter( Dynamic event,::mint::Control ctrl);
		Dynamic item_mouseenter_dyn();

		virtual Void item_mouseleave( Dynamic event,::mint::Control ctrl);
		Dynamic item_mouseleave_dyn();

		virtual Void item_mousedown( Dynamic event,::mint::Control ctrl);
		Dynamic item_mousedown_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void destroy( );

		virtual Void bounds_changed( hx::Null< Float >  _dx,hx::Null< Float >  _dy,hx::Null< Float >  _dw,hx::Null< Float >  _dh);

};

} // end namespace mint

#endif /* INCLUDED_mint_List */ 
