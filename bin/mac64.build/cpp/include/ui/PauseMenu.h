#ifndef INCLUDED_ui_PauseMenu
#define INCLUDED_ui_PauseMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_Panel
#include <mint/Panel.h>
#endif
HX_DECLARE_CLASS1(mint,Button)
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Label)
HX_DECLARE_CLASS1(mint,Panel)
HX_DECLARE_CLASS1(ui,PauseMenu)
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  PauseMenu_obj : public ::mint::Panel_obj{
	public:
		typedef ::mint::Panel_obj super;
		typedef PauseMenu_obj OBJ_;
		PauseMenu_obj();
		Void __construct(::mint::Control _parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ui.PauseMenu")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PauseMenu_obj > __new(::mint::Control _parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PauseMenu_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PauseMenu","\x95","\xdb","\x92","\xee"); }

		::mint::Label title;
		::mint::Button btn_reset;
};

} // end namespace ui

#endif /* INCLUDED_ui_PauseMenu */ 
