#ifndef INCLUDED_luxe_physics_nape_PhysicsNape
#define INCLUDED_luxe_physics_nape_PhysicsNape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
HX_DECLARE_CLASS1(luxe,PhysicsEngine)
HX_DECLARE_CLASS3(luxe,physics,nape,DebugDraw)
HX_DECLARE_CLASS3(luxe,physics,nape,PhysicsNape)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace physics{
namespace nape{


class HXCPP_CLASS_ATTRIBUTES  PhysicsNape_obj : public ::luxe::PhysicsEngine_obj{
	public:
		typedef ::luxe::PhysicsEngine_obj super;
		typedef PhysicsNape_obj OBJ_;
		PhysicsNape_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.physics.nape.PhysicsNape")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PhysicsNape_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsNape_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PhysicsNape","\x2f","\xe1","\x15","\xd8"); }

		::nape::space::Space space;
		::luxe::physics::nape::DebugDraw debugdraw;
		int velocity_iterations;
		int position_iterations;
		virtual Void init( );

		virtual Void update( );

		virtual Void destroy( );

		virtual ::phoenix::Vector set_gravity( ::phoenix::Vector _gravity);

		virtual bool set_draw( bool _draw);

};

} // end namespace luxe
} // end namespace physics
} // end namespace nape

#endif /* INCLUDED_luxe_physics_nape_PhysicsNape */ 
