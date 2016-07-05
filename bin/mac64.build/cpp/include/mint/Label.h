#ifndef INCLUDED_mint_Label
#define INCLUDED_mint_Label

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Label)
HX_DECLARE_CLASS2(mint,core,Signal)
namespace mint{


class HXCPP_CLASS_ATTRIBUTES  Label_obj : public ::mint::Control_obj{
	public:
		typedef ::mint::Control_obj super;
		typedef Label_obj OBJ_;
		Label_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.Label")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Label_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Label_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Label","\xd4","\x7d","\xdc","\x02"); }

		::String text;
		::mint::core::Signal onchange;
		Dynamic options;
		virtual Void destroy( );

		virtual ::String set_text( ::String _s);
		Dynamic set_text_dyn();

};

} // end namespace mint

#endif /* INCLUDED_mint_Label */ 
