#ifndef INCLUDED_luxe_physics_nape_DebugDraw
#define INCLUDED_luxe_physics_nape_DebugDraw

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(luxe,physics,nape,DebugDraw)
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,geom,AABB)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec2List)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Compound)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Circle)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Vertex)
namespace luxe{
namespace physics{
namespace nape{


class HXCPP_CLASS_ATTRIBUTES  DebugDraw_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DebugDraw_obj OBJ_;
		DebugDraw_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.physics.nape.DebugDraw")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DebugDraw_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DebugDraw_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DebugDraw","\xd7","\xaf","\x8e","\xc7"); }

		static void __boot();
		static ::phoenix::Vector cache_euler;
		bool drawBodies;
		bool drawBodyDetail;
		bool drawShapeDetail;
		bool drawShapeAngleIndicators;
		bool drawConstraints;
		Dynamic options;
		::haxe::ds::ObjectMap geometry;
		bool visible;
		virtual Void add( ::nape::phys::Body _body,::phoenix::Color _active_color,::phoenix::Color _inactive_color);
		Dynamic add_dyn();

		virtual Void remove( ::nape::phys::Body _body);
		Dynamic remove_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void draw_immediate( Dynamic _options);
		Dynamic draw_immediate_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual bool set_visible( bool state);
		Dynamic set_visible_dyn();

		virtual Void draw_body( ::nape::phys::Body _body,::phoenix::Color _active_color,::phoenix::Color _inactive_color);
		Dynamic draw_body_dyn();

		virtual Void draw_shape( ::nape::shape::Shape _shape,::phoenix::Color _active_color,::phoenix::Color _inactive_color);
		Dynamic draw_shape_dyn();

		virtual Void draw_constraint( ::nape::constraint::Constraint _constraint);
		Dynamic draw_constraint_dyn();

		virtual Void draw_compound( ::nape::phys::Compound _space);
		Dynamic draw_compound_dyn();

		virtual Void draw_point( ::nape::geom::Vec2 _p,::phoenix::Color color);
		Dynamic draw_point_dyn();

		virtual Void draw_AABB( ::nape::geom::AABB _bounds,::phoenix::Color color);
		Dynamic draw_AABB_dyn();

		virtual Array< ::Dynamic > make_circle_verts( ::nape::shape::Circle circle);
		Dynamic make_circle_verts_dyn();

		virtual Array< ::Dynamic > make_polygon_verts( ::nape::geom::Vec2List vertexList);
		Dynamic make_polygon_verts_dyn();

};

} // end namespace luxe
} // end namespace physics
} // end namespace nape

#endif /* INCLUDED_luxe_physics_nape_DebugDraw */ 
