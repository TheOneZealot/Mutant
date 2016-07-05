#ifndef INCLUDED_UserInterface
#define INCLUDED_UserInterface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Creature)
HX_DECLARE_CLASS0(UserInterface)
HX_DECLARE_CLASS1(creatures,Player)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(mint,Canvas)
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Panel)
HX_DECLARE_CLASS2(mint,render,Rendering)
HX_DECLARE_CLASS3(mint,render,luxe,LuxeMintRender)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(ui,AttributeBar)
HX_DECLARE_CLASS1(ui,CreatureStatus)
HX_DECLARE_CLASS1(ui,PauseMenu)
HX_DECLARE_CLASS2(ui,render,MutantMintRenderer)


class HXCPP_CLASS_ATTRIBUTES  UserInterface_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UserInterface_obj OBJ_;
		UserInterface_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="UserInterface")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UserInterface_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UserInterface_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("UserInterface","\xce","\xad","\x7e","\x06"); }

		static void __boot();
		static Dynamic palette;
		static ::phoenix::Batcher batcher;
		::ui::render::MutantMintRenderer rendering;
		Float scale;
		::mint::Panel damage_flash;
		::mint::Canvas canvas;
		::ui::AttributeBar healthbar;
		::ui::AttributeBar expbar;
		Array< ::Dynamic > creature_statuses;
		::ui::PauseMenu pause_menu;
		::creatures::Player player;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update_healthbar( );
		Dynamic update_healthbar_dyn();

		virtual Void update_expbar( );
		Dynamic update_expbar_dyn();

		virtual ::creatures::Player get_player( );
		Dynamic get_player_dyn();

};


#endif /* INCLUDED_UserInterface */ 
