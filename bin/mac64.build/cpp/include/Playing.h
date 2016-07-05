#ifndef INCLUDED_Playing
#define INCLUDED_Playing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_State
#include <luxe/State.h>
#endif
HX_DECLARE_CLASS0(Playing)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,State)


class HXCPP_CLASS_ATTRIBUTES  Playing_obj : public ::luxe::State_obj{
	public:
		typedef ::luxe::State_obj super;
		typedef Playing_obj OBJ_;
		Playing_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Playing")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Playing_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Playing_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Playing","\x4e","\x37","\x69","\x57"); }

		virtual Void init( );

		virtual Void onenter( Dynamic _value);

		virtual Void onleave( Dynamic _value);

};


#endif /* INCLUDED_Playing */ 
