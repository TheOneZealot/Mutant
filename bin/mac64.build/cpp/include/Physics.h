#ifndef INCLUDED_Physics
#define INCLUDED_Physics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
HX_DECLARE_CLASS0(Controller)
HX_DECLARE_CLASS0(Physics)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,PhysicsEngine)


class HXCPP_CLASS_ATTRIBUTES  Physics_obj : public ::luxe::PhysicsEngine_obj{
	public:
		typedef ::luxe::PhysicsEngine_obj super;
		typedef Physics_obj OBJ_;
		Physics_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Physics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Physics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Physics_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Physics","\xa7","\x60","\xa2","\x8b"); }

		static void __boot();
		static Dynamic debug_palette;
		static Dynamic types;
		static Dynamic filters;
		Float debug_depth;
		Array< ::Dynamic > controllers;
		virtual Void update( );

		virtual Void render( );

};


#endif /* INCLUDED_Physics */ 
