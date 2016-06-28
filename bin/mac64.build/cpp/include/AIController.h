#ifndef INCLUDED_AIController
#define INCLUDED_AIController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
HX_DECLARE_CLASS0(AIController)
HX_DECLARE_CLASS0(Controller)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)


class HXCPP_CLASS_ATTRIBUTES  AIController_obj : public ::Controller_obj{
	public:
		typedef ::Controller_obj super;
		typedef AIController_obj OBJ_;
		AIController_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="AIController")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AIController_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AIController_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AIController","\xa4","\x07","\x77","\x6c"); }

		virtual Void onadded( );

		virtual Void init( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};


#endif /* INCLUDED_AIController */ 
