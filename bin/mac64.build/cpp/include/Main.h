#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
HX_DECLARE_CLASS0(GameState)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS0(UserInterface)
HX_DECLARE_CLASS0(World)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Game)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Parcel)
HX_DECLARE_CLASS1(luxe,States)
HX_DECLARE_CLASS1(phoenix,Vector)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::luxe::Game_obj{
	public:
		typedef ::luxe::Game_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Main")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"); }

		static void __boot();
		static ::GameState gamestate;
		static ::World world;
		static ::UserInterface ui;
		static Float min_shake;
		static bool shaking;
		static Float shake_amount;
		static ::phoenix::Vector shake_vector;
		static Void shake( Float _amount);
		static Dynamic shake_dyn();

		bool loaded;
		virtual Dynamic config( Dynamic config);

		virtual Void ready( );

		virtual Void onassetsloaded( ::luxe::Parcel _);
		Dynamic onassetsloaded_dyn();

		virtual Void onkeyup( ::luxe::KeyEvent e);

		virtual Void update( Float dt);

};


#endif /* INCLUDED_Main */ 
