#ifndef INCLUDED_Projectile
#define INCLUDED_Projectile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
HX_DECLARE_CLASS0(Projectile)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS4(luxe,components,physics,nape,BoxCollider)
HX_DECLARE_CLASS4(luxe,components,physics,nape,NapeBody)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)


class HXCPP_CLASS_ATTRIBUTES  Projectile_obj : public ::luxe::Sprite_obj{
	public:
		typedef ::luxe::Sprite_obj super;
		typedef Projectile_obj OBJ_;
		Projectile_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Projectile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Projectile_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Projectile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Projectile","\x09","\x8a","\x3c","\xbb"); }

		static void __boot();
		static int num_projectiles;
		::luxe::components::physics::nape::BoxCollider collider;
		::nape::phys::Body body;
		::luxe::Entity owner;
		virtual Void update( Float dt);

		virtual Void init( );

		virtual Void ondestroy( );

};


#endif /* INCLUDED_Projectile */ 
