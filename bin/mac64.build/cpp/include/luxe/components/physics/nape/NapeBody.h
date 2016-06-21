#ifndef INCLUDED_luxe_components_physics_nape_NapeBody
#define INCLUDED_luxe_components_physics_nape_NapeBody

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS4(luxe,components,physics,nape,NapeBody)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace components{
namespace physics{
namespace nape{


class HXCPP_CLASS_ATTRIBUTES  NapeBody_obj : public ::luxe::Component_obj{
	public:
		typedef ::luxe::Component_obj super;
		typedef NapeBody_obj OBJ_;
		NapeBody_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.components.physics.nape.NapeBody")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NapeBody_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NapeBody_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NapeBody","\xca","\x6b","\x66","\x4a"); }

		::nape::phys::Body body;
		Dynamic body_options;
		::phoenix::Vector euler;
		virtual Void onadded( );

		virtual Void onremoved( );

		virtual Void update( Float dt);

		virtual Void post_add( );
		Dynamic post_add_dyn();

		virtual Void init( );

		virtual Void ondestroy( );

};

} // end namespace luxe
} // end namespace components
} // end namespace physics
} // end namespace nape

#endif /* INCLUDED_luxe_components_physics_nape_NapeBody */ 
