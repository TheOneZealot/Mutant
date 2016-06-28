#ifndef INCLUDED_controllers_PlayerController
#define INCLUDED_controllers_PlayerController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
HX_DECLARE_CLASS0(Controller)
HX_DECLARE_CLASS1(controllers,PlayerController)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
namespace controllers{


class HXCPP_CLASS_ATTRIBUTES  PlayerController_obj : public ::Controller_obj{
	public:
		typedef ::Controller_obj super;
		typedef PlayerController_obj OBJ_;
		PlayerController_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="controllers.PlayerController")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlayerController_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerController_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PlayerController","\x7d","\xc7","\xdd","\x23"); }

		virtual Void update( Float dt);

		virtual Void init( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};

} // end namespace controllers

#endif /* INCLUDED_controllers_PlayerController */ 
