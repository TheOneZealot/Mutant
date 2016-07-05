#ifndef INCLUDED_mint_Button
#define INCLUDED_mint_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
HX_DECLARE_CLASS1(mint,Button)
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Label)
namespace mint{


class HXCPP_CLASS_ATTRIBUTES  Button_obj : public ::mint::Control_obj{
	public:
		typedef ::mint::Control_obj super;
		typedef Button_obj OBJ_;
		Button_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.Button")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Button_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Button_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"); }

		::mint::Label label;
		Dynamic options;
};

} // end namespace mint

#endif /* INCLUDED_mint_Button */ 
