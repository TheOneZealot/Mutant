#ifndef INCLUDED_luxe_components_physics_nape_CircleCollider
#define INCLUDED_luxe_components_physics_nape_CircleCollider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_components_physics_nape_NapeBody
#include <luxe/components/physics/nape/NapeBody.h>
#endif
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS4(luxe,components,physics,nape,CircleCollider)
HX_DECLARE_CLASS4(luxe,components,physics,nape,NapeBody)
namespace luxe{
namespace components{
namespace physics{
namespace nape{


class HXCPP_CLASS_ATTRIBUTES  CircleCollider_obj : public ::luxe::components::physics::nape::NapeBody_obj{
	public:
		typedef ::luxe::components::physics::nape::NapeBody_obj super;
		typedef CircleCollider_obj OBJ_;
		CircleCollider_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.components.physics.nape.CircleCollider")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CircleCollider_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CircleCollider_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CircleCollider","\x84","\x31","\xc3","\xa8"); }

		Dynamic options;
		virtual Void onadded( );

		virtual Void init( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};

} // end namespace luxe
} // end namespace components
} // end namespace physics
} // end namespace nape

#endif /* INCLUDED_luxe_components_physics_nape_CircleCollider */ 
