#ifndef INCLUDED_Creature
#define INCLUDED_Creature

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
HX_DECLARE_CLASS0(Action)
HX_DECLARE_CLASS0(Controller)
HX_DECLARE_CLASS0(Creature)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS4(luxe,components,physics,nape,BoxCollider)
HX_DECLARE_CLASS4(luxe,components,physics,nape,NapeBody)
HX_DECLARE_CLASS3(luxe,components,sprite,SpriteAnimation)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS1(phoenix,Vector)


class HXCPP_CLASS_ATTRIBUTES  Creature_obj : public ::luxe::Sprite_obj{
	public:
		typedef ::luxe::Sprite_obj super;
		typedef Creature_obj OBJ_;
		Creature_obj();
		Void __construct(::String _name,::phoenix::Vector _pos,::phoenix::Vector _size,::phoenix::Vector _bounds);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Creature")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Creature_obj > __new(::String _name,::phoenix::Vector _pos,::phoenix::Vector _size,::phoenix::Vector _bounds);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Creature_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Creature","\xdf","\x61","\xb2","\x05"); }

		::Controller controller;
		::luxe::components::sprite::SpriteAnimation animation;
		::luxe::components::physics::nape::BoxCollider collider;
		::nape::phys::Body body;
		int health;
		int max_health;
		int exp_on_kill;
		Array< ::Dynamic > actions;
		int facing;
		Float speed_x;
		Float default_anim_speed;
		virtual Void update( Float dt);

		virtual Void set_animation( ::String anim_name);
		Dynamic set_animation_dyn();

		virtual Void health_heal_any( Dynamic args);
		Dynamic health_heal_any_dyn();

		virtual Void health_damage_any( Dynamic args);
		Dynamic health_damage_any_dyn();

		virtual Void kill( Dynamic args);
		Dynamic kill_dyn();

		virtual int get_facing( );
		Dynamic get_facing_dyn();

		virtual Float get_speed_x( );
		Dynamic get_speed_x_dyn();

		virtual Void init( );

		virtual Void ondestroy( );

};


#endif /* INCLUDED_Creature */ 
