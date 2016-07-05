#ifndef INCLUDED_mint_render_luxe_Convert
#define INCLUDED_mint_render_luxe_Convert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,InteractState)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(luxe,TextEvent)
HX_DECLARE_CLASS1(luxe,TextEventType)
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS3(mint,render,luxe,Convert)
HX_DECLARE_CLASS2(mint,types,TextEventType)
HX_DECLARE_CLASS1(phoenix,Camera)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS2(snow,types,ModState)
namespace mint{
namespace render{
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Convert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Convert_obj OBJ_;
		Convert_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="mint.render.luxe.Convert")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Convert_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Convert_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Convert","\xd3","\x25","\x1b","\xe8"); }

		static int text_align( int _align);
		static Dynamic text_align_dyn();

		static ::phoenix::Rectangle bounds( ::mint::Control _control,Dynamic _scale);
		static Dynamic bounds_dyn();

		static int interact_state( ::luxe::InteractState _state);
		static Dynamic interact_state_dyn();

		static int mouse_button( int _button);
		static Dynamic mouse_button_dyn();

		static int key_code( int _keycode);
		static Dynamic key_code_dyn();

		static ::mint::types::TextEventType text_event_type( ::luxe::TextEventType _type);
		static Dynamic text_event_type_dyn();

		static Dynamic mod_state( ::snow::types::ModState _mod);
		static Dynamic mod_state_dyn();

		static Dynamic mouse_event( ::luxe::MouseEvent _event,Dynamic _scale,::phoenix::Camera view);
		static Dynamic mouse_event_dyn();

		static Dynamic key_event( ::luxe::KeyEvent _event);
		static Dynamic key_event_dyn();

		static Dynamic text_event( ::luxe::TextEvent _event);
		static Dynamic text_event_dyn();

};

} // end namespace mint
} // end namespace render
} // end namespace luxe

#endif /* INCLUDED_mint_render_luxe_Convert */ 
