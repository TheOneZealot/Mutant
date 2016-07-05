#ifndef INCLUDED_Physics
#define INCLUDED_Physics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Physics)


class HXCPP_CLASS_ATTRIBUTES  Physics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Physics_obj OBJ_;
		Physics_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Physics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Physics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Physics_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Physics","\xa7","\x60","\xa2","\x8b"); }

		static void __boot();
		static Dynamic types;
		static Dynamic filters;
};


#endif /* INCLUDED_Physics */ 
