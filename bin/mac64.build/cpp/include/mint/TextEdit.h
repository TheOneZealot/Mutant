#ifndef INCLUDED_mint_TextEdit
#define INCLUDED_mint_TextEdit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Label)
HX_DECLARE_CLASS1(mint,TextEdit)
HX_DECLARE_CLASS2(mint,core,Signal)
namespace mint{


class HXCPP_CLASS_ATTRIBUTES  TextEdit_obj : public ::mint::Control_obj{
	public:
		typedef ::mint::Control_obj super;
		typedef TextEdit_obj OBJ_;
		TextEdit_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.TextEdit")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextEdit_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextEdit_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextEdit","\x77","\xd9","\xbb","\x1f"); }

		::mint::Label label;
		Dynamic filter;
		Dynamic &filter_dyn() { return filter;}
		int index;
		::String display_char;
		::mint::core::Signal onchangeindex;
		::mint::core::Signal onchange;
		::String edit;
		::String composition;
		int composition_start;
		int composition_length;
		::String display;
		Dynamic options;
		virtual Void destroy( );

		virtual Void mousedown( Dynamic event);

		virtual Void unfocus( );

		virtual Void textinput( Dynamic event);

		virtual Void keydown( Dynamic event);

		virtual ::String refresh( ::String str,hx::Null< bool >  _from_typing,hx::Null< bool >  _emit);
		Dynamic refresh_dyn();

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String get_display_text( );
		Dynamic get_display_text_dyn();

		virtual ::String get_display_char( );
		Dynamic get_display_char_dyn();

		virtual ::String set_text( ::String v);
		Dynamic set_text_dyn();

		virtual ::String set_display_char( ::String v);
		Dynamic set_display_char_dyn();

		virtual Void move( hx::Null< int >  amount);
		Dynamic move_dyn();

		virtual ::String cut( hx::Null< int >  start,hx::Null< int >  count);
		Dynamic cut_dyn();

		virtual ::String after( hx::Null< int >  cur);
		Dynamic after_dyn();

		virtual ::String before( hx::Null< int >  cur);
		Dynamic before_dyn();

		virtual ::String after_display( hx::Null< int >  cur);
		Dynamic after_display_dyn();

		virtual ::String before_display( hx::Null< int >  cur);
		Dynamic before_display_dyn();

		virtual Void update_cur( );
		Dynamic update_cur_dyn();

};

} // end namespace mint

#endif /* INCLUDED_mint_TextEdit */ 
