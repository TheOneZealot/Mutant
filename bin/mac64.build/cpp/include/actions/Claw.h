#ifndef INCLUDED_actions_Claw
#define INCLUDED_actions_Claw

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Action
#include <Action.h>
#endif
HX_DECLARE_CLASS0(Action)
HX_DECLARE_CLASS1(actions,Claw)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS2(nape,geom,AABB)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,RectangleGeometry)
namespace actions{


class HXCPP_CLASS_ATTRIBUTES  Claw_obj : public ::Action_obj{
	public:
		typedef ::Action_obj super;
		typedef Claw_obj OBJ_;
		Claw_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actions.Claw")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Claw_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Claw_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Claw","\xff","\x93","\x9b","\x2c"); }

		int damage;
		::nape::geom::AABB hit_area;
		::phoenix::geometry::RectangleGeometry debug_geom;
		virtual Void act( );

};

} // end namespace actions

#endif /* INCLUDED_actions_Claw */ 
