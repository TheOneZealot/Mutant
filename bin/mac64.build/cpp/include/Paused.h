#ifndef INCLUDED_Paused
#define INCLUDED_Paused

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_State
#include <luxe/State.h>
#endif
HX_DECLARE_CLASS0(Paused)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,State)


class HXCPP_CLASS_ATTRIBUTES  Paused_obj : public ::luxe::State_obj{
	public:
		typedef ::luxe::State_obj super;
		typedef Paused_obj OBJ_;
		Paused_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Paused")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Paused_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Paused_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Paused","\xce","\xb4","\x18","\x24"); }

		virtual Void init( );

		virtual Void onenter( Dynamic _value);

		virtual Void onleave( Dynamic _value);

};


#endif /* INCLUDED_Paused */ 
