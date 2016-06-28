#ifndef INCLUDED_World
#define INCLUDED_World

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(World)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS3(luxe,importers,tiled,TiledMap)
HX_DECLARE_CLASS3(luxe,physics,nape,DebugDraw)
HX_DECLARE_CLASS2(luxe,tilemaps,Tilemap)
HX_DECLARE_CLASS2(nape,callbacks,CbType)
HX_DECLARE_CLASS2(nape,callbacks,InteractionListener)
HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)


class HXCPP_CLASS_ATTRIBUTES  World_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef World_obj OBJ_;
		World_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="World")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< World_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~World_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("World","\x32","\x06","\x92","\x61"); }

		static void __boot();
		static ::nape::callbacks::CbType CBTYPE_TERRAIN;
		static ::nape::callbacks::CbType CBTYPE_CREATURE;
		static ::nape::callbacks::CbType CBTYPE_PROJECTILE;
		static ::nape::callbacks::InteractionListener projectile_begin_interaction_listener;
		static ::luxe::physics::nape::DebugDraw debugdraw;
		::luxe::importers::tiled::TiledMap map;
		::nape::phys::Body map_static;
		::luxe::Sprite player;
		virtual Void generate_collision( );
		Dynamic generate_collision_dyn();

		virtual Void generate_objects( );
		Dynamic generate_objects_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

};


#endif /* INCLUDED_World */ 
