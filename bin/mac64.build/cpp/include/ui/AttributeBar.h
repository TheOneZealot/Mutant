#ifndef INCLUDED_ui_AttributeBar
#define INCLUDED_ui_AttributeBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS2(mint,core,Signal)
HX_DECLARE_CLASS1(ui,AttributeBar)
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  AttributeBar_obj : public ::mint::Control_obj{
	public:
		typedef ::mint::Control_obj super;
		typedef AttributeBar_obj OBJ_;
		AttributeBar_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ui.AttributeBar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AttributeBar_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AttributeBar_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AttributeBar","\x37","\x3f","\xbc","\x5d"); }

		int value;
		int max_value;
		::mint::core::Signal onchange;
		Dynamic options;
		virtual Void destroy( );

		virtual int set_value( int val);
		Dynamic set_value_dyn();

		virtual int set_max_value( int val);
		Dynamic set_max_value_dyn();

};

} // end namespace ui

#endif /* INCLUDED_ui_AttributeBar */ 
