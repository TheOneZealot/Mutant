#ifndef INCLUDED_Controller
#define INCLUDED_Controller

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
HX_DECLARE_CLASS0(Controller)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS3(luxe,components,sprite,SpriteAnimation)
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,InteractionCallback)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,phys,Material)


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

		::nape::phys::Body _body;
		::nape::phys::Body body;
		::luxe::components::sprite::SpriteAnimation _animation;
		::luxe::components::sprite::SpriteAnimation animation;
		bool _jumped_this_frame;
		bool _grounded;
		Float _slope_angle;
		Float acceleration;
		Float max_speed;
		Float jump_impulse;
		virtual Void onadded( );

		virtual Void update( Float dt);

		virtual Void move( int direction);
		Dynamic move_dyn();

		virtual Void jump( );
		Dynamic jump_dyn();

		virtual Void begincollideterrain( ::nape::callbacks::InteractionCallback cb);
		Dynamic begincollideterrain_dyn();

		virtual Void ongoingcollideterrain( ::nape::callbacks::InteractionCallback cb);
		Dynamic ongoingcollideterrain_dyn();

		virtual Void endcollideterrain( ::nape::callbacks::InteractionCallback cb);
		Dynamic endcollideterrain_dyn();

		virtual ::nape::phys::Body get_body( );
		Dynamic get_body_dyn();

		virtual ::luxe::components::sprite::SpriteAnimation get_animation( );
		Dynamic get_animation_dyn();

		virtual Void init( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};


#endif /* INCLUDED_Controller */ 
