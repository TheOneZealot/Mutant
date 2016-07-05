#ifndef INCLUDED_Controller
#define INCLUDED_Controller

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
HX_DECLARE_CLASS0(Controller)
HX_DECLARE_CLASS0(Creature)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS2(nape,geom,AABB)
HX_DECLARE_CLASS2(nape,geom,Ray)
HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,phys,Material)
HX_DECLARE_CLASS2(nape,space,Space)


class HXCPP_CLASS_ATTRIBUTES  Controller_obj : public ::luxe::Component_obj{
	public:
		typedef ::luxe::Component_obj super;
		typedef Controller_obj OBJ_;
		Controller_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Controller")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Controller_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Controller_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Controller","\xbc","\x9c","\x6f","\xfb"); }

		static ::nape::phys::Material zero_friction;
		static ::nape::phys::Material normal_friction;
		static ::nape::phys::Material get_zero_friction( );
		static Dynamic get_zero_friction_dyn();

		static ::nape::phys::Material get_normal_friction( );
		static Dynamic get_normal_friction_dyn();

		Float gravity;
		Float acceleration;
		Float max_speed;
		Float jump_impulse;
		Float friction_ground;
		Float friction_air;
		Float max_slope_angle;
		Float max_slope_y;
		::Creature creature;
		::nape::phys::Body body;
		::nape::geom::AABB bounds;
		bool grounded;
		bool slope;
		bool jumped_this_frame;
		::nape::space::Space space;
		::nape::geom::Vec2 input_vector;
		int rays_horizontal;
		int rays_vertical;
		Float skin_thickness;
		virtual Void onadded( );

		virtual Void update( Float dt);

		virtual Void raycast_horizontal( Float dt);
		Dynamic raycast_horizontal_dyn();

		virtual Void raycast_vertical( Float dt);
		Dynamic raycast_vertical_dyn();

		virtual Void slope_raycast( Float dt);
		Dynamic slope_raycast_dyn();

		virtual Void debug_ray( ::nape::geom::Ray ray,::nape::geom::RayResult result);
		Dynamic debug_ray_dyn();

		virtual Void add_movement_input( ::nape::geom::Vec2 input);
		Dynamic add_movement_input_dyn();

		virtual Void jump( );
		Dynamic jump_dyn();

		virtual ::nape::space::Space get_space( );
		Dynamic get_space_dyn();

		virtual ::Creature get_creature( );
		Dynamic get_creature_dyn();

		virtual ::nape::phys::Body get_body( );
		Dynamic get_body_dyn();

		virtual ::nape::geom::AABB get_bounds( );
		Dynamic get_bounds_dyn();

		virtual Void init( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};


#endif /* INCLUDED_Controller */ 
