#ifndef INCLUDED_mint_Slider
#define INCLUDED_mint_Slider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Slider)
HX_DECLARE_CLASS2(mint,core,Signal)
namespace mint{


class HXCPP_CLASS_ATTRIBUTES  Slider_obj : public ::mint::Control_obj{
	public:
		typedef ::mint::Control_obj super;
		typedef Slider_obj OBJ_;
		Slider_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.Slider")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Slider_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Slider_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Slider","\x41","\x3a","\x99","\xa4"); }

		Dynamic options;
		Float min;
		Float max;
		Float value;
		Float percent;
		Dynamic step;
		bool vertical;
		bool invert;
		Float bar_x;
		Float bar_y;
		Float bar_w;
		Float bar_h;
		::mint::core::Signal onchange;
		virtual Void destroy( );

		bool dragging;
		virtual Void mousedown( Dynamic e);

		virtual Float get_range( );
		Dynamic get_range_dyn();

		bool ignore_set;
		virtual Void update_value( Float _value);
		Dynamic update_value_dyn();

		virtual Float set_value( Float _value);
		Dynamic set_value_dyn();

		virtual Void update_value_from_mouse( Dynamic e);
		Dynamic update_value_from_mouse_dyn();

		virtual Void mousemove( Dynamic e);

		virtual Void mouseup( Dynamic e);

};

} // end namespace mint

#endif /* INCLUDED_mint_Slider */ 
