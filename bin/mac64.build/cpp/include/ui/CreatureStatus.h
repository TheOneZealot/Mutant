#ifndef INCLUDED_ui_CreatureStatus
#define INCLUDED_ui_CreatureStatus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_Panel
#include <mint/Panel.h>
#endif
HX_DECLARE_CLASS0(Creature)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Panel)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS1(ui,AttributeBar)
HX_DECLARE_CLASS1(ui,CreatureStatus)
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  CreatureStatus_obj : public ::mint::Panel_obj{
	public:
		typedef ::mint::Panel_obj super;
		typedef CreatureStatus_obj OBJ_;
		CreatureStatus_obj();
		Void __construct(::mint::Control _parent,::Creature _target);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ui.CreatureStatus")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CreatureStatus_obj > __new(::mint::Control _parent,::Creature _target);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CreatureStatus_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CreatureStatus","\x71","\xee","\xf3","\x6c"); }

		::Creature target;
		::ui::AttributeBar healthbar;
		virtual Void update_health( );
		Dynamic update_health_dyn();

		virtual ::phoenix::Vector get_screen_pos( ::phoenix::Vector _pos);
		Dynamic get_screen_pos_dyn();

};

} // end namespace ui

#endif /* INCLUDED_ui_CreatureStatus */ 
