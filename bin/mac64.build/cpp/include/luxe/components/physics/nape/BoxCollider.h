#ifndef INCLUDED_luxe_components_physics_nape_BoxCollider
#define INCLUDED_luxe_components_physics_nape_BoxCollider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_components_physics_nape_NapeBody
#include <luxe/components/physics/nape/NapeBody.h>
#endif
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS4(luxe,components,physics,nape,BoxCollider)
HX_DECLARE_CLASS4(luxe,components,physics,nape,NapeBody)
namespace luxe{
namespace components{
namespace physics{
namespace nape{


class HXCPP_CLASS_ATTRIBUTES  BoxCollider_obj : public ::luxe::components::physics::nape::NapeBody_obj{
	public:
		typedef ::luxe::components::physics::nape::NapeBody_obj super;
		typedef BoxCollider_obj OBJ_;
		BoxCollider_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.components.physics.nape.BoxCollider")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BoxCollider_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoxCollider_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BoxCollider","\x3f","\x74","\x52","\x1e"); }

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

#endif /* INCLUDED_luxe_components_physics_nape_BoxCollider */ 
