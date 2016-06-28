#ifndef INCLUDED_controllers_SoldierController
#define INCLUDED_controllers_SoldierController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_AIController
#include <AIController.h>
#endif
HX_DECLARE_CLASS0(AIController)
HX_DECLARE_CLASS0(Controller)
HX_DECLARE_CLASS1(controllers,SoldierController)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
namespace controllers{


class HXCPP_CLASS_ATTRIBUTES  SoldierController_obj : public ::AIController_obj{
	public:
		typedef ::AIController_obj super;
		typedef SoldierController_obj OBJ_;
		SoldierController_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="controllers.SoldierController")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SoldierController_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoldierController_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SoldierController","\x9e","\xfa","\xbf","\xa3"); }

		bool fire_ready;
		virtual Void update( Float dt);

		virtual Void fire( );
		Dynamic fire_dyn();

		virtual Void init( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};

} // end namespace controllers

#endif /* INCLUDED_controllers_SoldierController */ 
