#include <hxcpp.h>

#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_World
#include <World.h>
#endif
#ifndef INCLUDED_creatures_Player
#include <creatures/Player.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledMap
#include <luxe/importers/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledMapData
#include <luxe/importers/tiled/TiledMapData.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledObject
#include <luxe/importers/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledObjectGroup
#include <luxe/importers/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_luxe_importers_tiled_TiledPolyObject
#include <luxe/importers/tiled/TiledPolyObject.h>
#endif
#ifndef INCLUDED_luxe_physics_nape_DebugDraw
#include <luxe/physics/nape/DebugDraw.h>
#endif
#ifndef INCLUDED_luxe_physics_nape_PhysicsNape
#include <luxe/physics/nape/PhysicsNape.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_TextResource
#include <luxe/resource/TextResource.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_TileLayer
#include <luxe/tilemaps/TileLayer.h>
#endif
#ifndef INCLUDED_luxe_tilemaps_Tilemap
#include <luxe/tilemaps/Tilemap.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <nape/callbacks/ListenerList.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetText
#include <snow/systems/assets/AssetText.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ListenerList
#include <zpp_nape/util/ZPP_ListenerList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif

Void World_obj::__construct()
{
HX_STACK_FRAME("World","new",0xe2d1a824,"World.new","World.hx",30,0x7e25a7cc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	::luxe::resource::Resource tmp1 = tmp->cache->get(HX_HCSTRING("assets/maps/test/Gameplay_Testing.tmx","\x99","\xa5","\x60","\x88"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	::snow::systems::assets::AssetText tmp2 = ((::luxe::resource::TextResource)(tmp1))->asset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	::String map_data = tmp2->text;		HX_STACK_VAR(map_data,"map_data");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &map_data){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",32,0x7e25a7cc)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd") , HX_HCSTRING("tmx","\xdf","\x64","\x58","\x00"),false);
				__result->Add(HX_HCSTRING("asset_path","\x94","\x91","\x13","\x17") , HX_HCSTRING("assets/maps/test","\x7e","\x9e","\x8e","\x61"),false);
				__result->Add(HX_HCSTRING("tiled_file_data","\xc4","\xca","\xc9","\xcf") , map_data,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(32)
	Dynamic tmp3 = _Function_1_1::Block(map_data);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	::luxe::importers::tiled::TiledMap tmp4 = ::luxe::importers::tiled::TiledMap_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	this->map = tmp4;
	HX_STACK_LINE(34)
	this->reset();
}
;
	return null();
}

//World_obj::~World_obj() { }

Dynamic World_obj::__CreateEmpty() { return  new World_obj; }
hx::ObjectPtr< World_obj > World_obj::__new()
{  hx::ObjectPtr< World_obj > _result_ = new World_obj();
	_result_->__construct();
	return _result_;}

Dynamic World_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< World_obj > _result_ = new World_obj();
	_result_->__construct();
	return _result_;}

Void World_obj::generate_collision( ){
{
		HX_STACK_FRAME("World","generate_collision",0xcc63fc64,"World.generate_collision","World.hx",38,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::luxe::importers::tiled::TiledMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		::luxe::tilemaps::TileLayer tmp1 = tmp->layer(HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		Array< ::Dynamic > bounds = tmp1->bounds_fitted();		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(41)
		::nape::phys::BodyType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			::nape::phys::BodyType tmp3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(41)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			if ((tmp4)){
				HX_STACK_LINE(41)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(41)
				::nape::phys::BodyType tmp5 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(41)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = tmp5;
				HX_STACK_LINE(41)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(41)
			tmp2 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
		}
		HX_STACK_LINE(41)
		::nape::phys::Body tmp3 = ::nape::phys::Body_obj::__new(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		this->map_static = tmp3;
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::nape::callbacks::CbTypeList tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				::nape::phys::Body tmp5 = this->map_static;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(42)
				::nape::phys::Body _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(42)
				::nape::callbacks::CbTypeList tmp6 = _this->zpp_inner_i->wrap_cbTypes;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(42)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(42)
				if ((tmp7)){
					HX_STACK_LINE(42)
					_this->zpp_inner_i->setupcbTypes();
				}
				HX_STACK_LINE(42)
				tmp4 = _this->zpp_inner_i->wrap_cbTypes;
			}
			HX_STACK_LINE(42)
			::nape::callbacks::CbTypeList _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(42)
			::nape::callbacks::CbType tmp5 = ::World_obj::CBTYPE_TERRAIN;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			::nape::callbacks::CbType obj = tmp5;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(42)
			bool tmp6 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			if ((tmp6)){
				HX_STACK_LINE(42)
				::nape::callbacks::CbType tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(42)
				_this->push(tmp7);
			}
			else{
				HX_STACK_LINE(42)
				::nape::callbacks::CbType tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(42)
				_this->unshift(tmp7);
			}
		}
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(43)
			while((true)){
				HX_STACK_LINE(43)
				bool tmp4 = (_g < bounds->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(43)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(43)
				if ((tmp5)){
					HX_STACK_LINE(43)
					break;
				}
				HX_STACK_LINE(43)
				::phoenix::Rectangle tmp6 = bounds->__get(_g).StaticCast< ::phoenix::Rectangle >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(43)
				::phoenix::Rectangle rect = tmp6;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(43)
				++(_g);
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					::phoenix::Rectangle _g1 = rect;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(45)
					Float tmp7 = _g1->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(45)
					::luxe::importers::tiled::TiledMap tmp8 = this->map;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(45)
					int tmp9 = tmp8->tile_width;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(45)
					Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(45)
					_g1->set_x(tmp10);
				}
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					::phoenix::Rectangle _g1 = rect;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(46)
					Float tmp7 = _g1->y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(46)
					::luxe::importers::tiled::TiledMap tmp8 = this->map;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(46)
					int tmp9 = tmp8->tile_height;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(46)
					Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(46)
					_g1->set_y(tmp10);
				}
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					::phoenix::Rectangle _g1 = rect;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(47)
					Float tmp7 = _g1->w;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(47)
					::luxe::importers::tiled::TiledMap tmp8 = this->map;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(47)
					int tmp9 = tmp8->tile_width;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(47)
					Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(47)
					_g1->set_w(tmp10);
				}
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					::phoenix::Rectangle _g1 = rect;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(48)
					Float tmp7 = _g1->h;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(48)
					::luxe::importers::tiled::TiledMap tmp8 = this->map;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(48)
					int tmp9 = tmp8->tile_height;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(48)
					Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(48)
					_g1->set_h(tmp10);
				}
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(49)
					::nape::phys::Body tmp7 = this->map_static;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(49)
					::nape::shape::ShapeList tmp8 = tmp7->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(49)
					::nape::shape::ShapeList _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(49)
					Float tmp9 = rect->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(49)
					Float tmp10 = rect->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(49)
					Float tmp11 = rect->w;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(49)
					Float tmp12 = rect->h;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(49)
					::nape::shape::Polygon tmp13 = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect(tmp9,tmp10,tmp11,tmp12,null()),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(49)
					::nape::shape::Shape obj = tmp13;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(49)
					bool tmp14 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(49)
					if ((tmp14)){
						HX_STACK_LINE(49)
						::nape::shape::Shape tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(49)
						_this->push(tmp15);
					}
					else{
						HX_STACK_LINE(49)
						::nape::shape::Shape tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(49)
						_this->unshift(tmp15);
					}
				}
			}
		}
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			::luxe::importers::tiled::TiledMap tmp4 = this->map;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			Array< ::Dynamic > _g1 = tmp4->tiledmap_data->object_groups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(52)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				if ((tmp6)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				::luxe::importers::tiled::TiledObjectGroup tmp7 = _g1->__get(_g).StaticCast< ::luxe::importers::tiled::TiledObjectGroup >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				::luxe::importers::tiled::TiledObjectGroup obj_grp = tmp7;		HX_STACK_VAR(obj_grp,"obj_grp");
				HX_STACK_LINE(52)
				++(_g);
				HX_STACK_LINE(54)
				bool tmp8 = (obj_grp->name != HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(54)
				if ((tmp8)){
					HX_STACK_LINE(54)
					continue;
				}
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(56)
					Array< ::Dynamic > _g3 = obj_grp->objects;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (_g2 < _g3->length);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(56)
						::luxe::importers::tiled::TiledObject tmp11 = _g3->__get(_g2).StaticCast< ::luxe::importers::tiled::TiledObject >();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(56)
						::luxe::importers::tiled::TiledObject obj = tmp11;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(56)
						++(_g2);
						HX_STACK_LINE(58)
						Array< ::Dynamic > verts = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(60)
						{
							HX_STACK_LINE(60)
							int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(60)
							Array< ::Dynamic > _g5 = obj->polyobject->points;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(60)
							while((true)){
								HX_STACK_LINE(60)
								bool tmp12 = (_g4 < _g5->length);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(60)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(60)
								if ((tmp13)){
									HX_STACK_LINE(60)
									break;
								}
								HX_STACK_LINE(60)
								::phoenix::Vector tmp14 = _g5->__get(_g4).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(60)
								::phoenix::Vector point = tmp14;		HX_STACK_VAR(point,"point");
								HX_STACK_LINE(60)
								++(_g4);
								HX_STACK_LINE(62)
								{
									HX_STACK_LINE(62)
									::phoenix::Vector other = obj->pos;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(62)
									{
										HX_STACK_LINE(62)
										bool tmp15 = (other == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(62)
										if ((tmp15)){
											HX_STACK_LINE(62)
											::String tmp16 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(62)
											::luxe::DebugError tmp17 = ::luxe::DebugError_obj::null_assertion(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(62)
											HX_STACK_DO_THROW(tmp17);
										}
									}
									HX_STACK_LINE(62)
									{
										HX_STACK_LINE(62)
										Float tmp15 = (point->x + other->x);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(62)
										Float _x = tmp15;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(62)
										Float tmp16 = (point->y + other->y);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(62)
										Float _y = tmp16;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(62)
										Float tmp17 = (point->z + other->z);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(62)
										Float _z = tmp17;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(62)
										bool prev = point->ignore_listeners;		HX_STACK_VAR(prev,"prev");
										HX_STACK_LINE(62)
										point->ignore_listeners = true;
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											point->x = _x;
											HX_STACK_LINE(62)
											bool tmp18 = point->_construct;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(62)
											if ((tmp18)){
												HX_STACK_LINE(62)
												point->x;
											}
											else{
												HX_STACK_LINE(62)
												bool tmp19 = (point->listen_x != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(62)
												bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(62)
												if ((tmp19)){
													HX_STACK_LINE(62)
													bool tmp21 = point->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(62)
													bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(62)
													tmp20 = !(tmp22);
												}
												else{
													HX_STACK_LINE(62)
													tmp20 = false;
												}
												HX_STACK_LINE(62)
												if ((tmp20)){
													HX_STACK_LINE(62)
													Float tmp21 = _x;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(62)
													point->listen_x(tmp21);
												}
												HX_STACK_LINE(62)
												point->x;
											}
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											point->y = _y;
											HX_STACK_LINE(62)
											bool tmp18 = point->_construct;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(62)
											if ((tmp18)){
												HX_STACK_LINE(62)
												point->y;
											}
											else{
												HX_STACK_LINE(62)
												bool tmp19 = (point->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(62)
												bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(62)
												if ((tmp19)){
													HX_STACK_LINE(62)
													bool tmp21 = point->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(62)
													bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(62)
													tmp20 = !(tmp22);
												}
												else{
													HX_STACK_LINE(62)
													tmp20 = false;
												}
												HX_STACK_LINE(62)
												if ((tmp20)){
													HX_STACK_LINE(62)
													Float tmp21 = _y;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(62)
													point->listen_y(tmp21);
												}
												HX_STACK_LINE(62)
												point->y;
											}
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											point->z = _z;
											HX_STACK_LINE(62)
											bool tmp18 = point->_construct;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(62)
											if ((tmp18)){
												HX_STACK_LINE(62)
												point->z;
											}
											else{
												HX_STACK_LINE(62)
												bool tmp19 = (point->listen_z != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(62)
												bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(62)
												if ((tmp19)){
													HX_STACK_LINE(62)
													bool tmp21 = point->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(62)
													bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(62)
													tmp20 = !(tmp22);
												}
												else{
													HX_STACK_LINE(62)
													tmp20 = false;
												}
												HX_STACK_LINE(62)
												if ((tmp20)){
													HX_STACK_LINE(62)
													Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(62)
													point->listen_z(tmp21);
												}
												HX_STACK_LINE(62)
												point->z;
											}
										}
										HX_STACK_LINE(62)
										point->ignore_listeners = prev;
										HX_STACK_LINE(62)
										bool tmp18 = (point->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(62)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(62)
										if ((tmp18)){
											HX_STACK_LINE(62)
											bool tmp20 = point->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(62)
											bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(62)
											tmp19 = !(tmp21);
										}
										else{
											HX_STACK_LINE(62)
											tmp19 = false;
										}
										HX_STACK_LINE(62)
										if ((tmp19)){
											HX_STACK_LINE(62)
											Float tmp20 = point->x;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(62)
											point->listen_x(tmp20);
										}
										HX_STACK_LINE(62)
										bool tmp20 = (point->listen_y != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(62)
										bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(62)
										if ((tmp20)){
											HX_STACK_LINE(62)
											bool tmp22 = point->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(62)
											bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(62)
											tmp21 = !(tmp23);
										}
										else{
											HX_STACK_LINE(62)
											tmp21 = false;
										}
										HX_STACK_LINE(62)
										if ((tmp21)){
											HX_STACK_LINE(62)
											Float tmp22 = point->y;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(62)
											point->listen_y(tmp22);
										}
										HX_STACK_LINE(62)
										bool tmp22 = (point->listen_z != null());		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(62)
										bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(62)
										if ((tmp22)){
											HX_STACK_LINE(62)
											bool tmp24 = point->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(62)
											bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(62)
											tmp23 = !(tmp25);
										}
										else{
											HX_STACK_LINE(62)
											tmp23 = false;
										}
										HX_STACK_LINE(62)
										if ((tmp23)){
											HX_STACK_LINE(62)
											Float tmp24 = point->z;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(62)
											point->listen_z(tmp24);
										}
										HX_STACK_LINE(62)
										point;
									}
									HX_STACK_LINE(62)
									point;
								}
								HX_STACK_LINE(63)
								::nape::geom::Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(63)
								{
									HX_STACK_LINE(63)
									Float x = point->x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(63)
									Float y = point->y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(63)
									{
										HX_STACK_LINE(63)
										bool tmp16 = (x != x);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(63)
										bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(63)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(63)
										if ((tmp17)){
											HX_STACK_LINE(63)
											tmp18 = (y != y);
										}
										else{
											HX_STACK_LINE(63)
											tmp18 = true;
										}
										HX_STACK_LINE(63)
										if ((tmp18)){
											HX_STACK_LINE(63)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
										}
										HX_STACK_LINE(63)
										::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(63)
										{
											HX_STACK_LINE(63)
											::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(63)
											bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(63)
											if ((tmp20)){
												HX_STACK_LINE(63)
												::nape::geom::Vec2 tmp21 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(63)
												ret = tmp21;
											}
											else{
												HX_STACK_LINE(63)
												::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(63)
												ret = tmp21;
												HX_STACK_LINE(63)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(63)
												ret->zpp_pool = null();
												HX_STACK_LINE(63)
												ret->zpp_disp = false;
												HX_STACK_LINE(63)
												::nape::geom::Vec2 tmp22 = ret;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(63)
												::nape::geom::Vec2 tmp23 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(63)
												bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(63)
												if ((tmp24)){
													HX_STACK_LINE(63)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
										}
										HX_STACK_LINE(63)
										bool tmp19 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(63)
										if ((tmp19)){
											HX_STACK_LINE(63)
											::zpp_nape::geom::ZPP_Vec2 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(63)
											{
												HX_STACK_LINE(63)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(63)
												::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(63)
												{
													HX_STACK_LINE(63)
													::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(63)
													bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(63)
													if ((tmp22)){
														HX_STACK_LINE(63)
														::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(63)
														ret1 = tmp23;
													}
													else{
														HX_STACK_LINE(63)
														::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(63)
														ret1 = tmp23;
														HX_STACK_LINE(63)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(63)
														ret1->next = null();
													}
													HX_STACK_LINE(63)
													ret1->weak = false;
												}
												HX_STACK_LINE(63)
												ret1->_immutable = immutable;
												HX_STACK_LINE(63)
												{
													HX_STACK_LINE(63)
													ret1->x = x;
													HX_STACK_LINE(63)
													ret1->y = y;
													HX_STACK_LINE(63)
													{
													}
												}
												HX_STACK_LINE(63)
												tmp20 = ret1;
											}
											HX_STACK_LINE(63)
											ret->zpp_inner = tmp20;
											HX_STACK_LINE(63)
											ret->zpp_inner->outer = ret;
										}
										else{
											HX_STACK_LINE(63)
											{
												HX_STACK_LINE(63)
												bool tmp20 = (ret != null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(63)
												bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(63)
												if ((tmp20)){
													HX_STACK_LINE(63)
													tmp21 = ret->zpp_disp;
												}
												else{
													HX_STACK_LINE(63)
													tmp21 = false;
												}
												HX_STACK_LINE(63)
												if ((tmp21)){
													HX_STACK_LINE(63)
													::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(63)
													::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(63)
													HX_STACK_DO_THROW(tmp23);
												}
											}
											HX_STACK_LINE(63)
											{
												HX_STACK_LINE(63)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(63)
												bool tmp20 = _this->_immutable;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(63)
												if ((tmp20)){
													HX_STACK_LINE(63)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
												}
												HX_STACK_LINE(63)
												bool tmp21 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(63)
												if ((tmp21)){
													HX_STACK_LINE(63)
													_this->_isimmutable();
												}
											}
											HX_STACK_LINE(63)
											bool tmp20 = (x != x);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(63)
											bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(63)
											bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(63)
											if ((tmp21)){
												HX_STACK_LINE(63)
												tmp22 = (y != y);
											}
											else{
												HX_STACK_LINE(63)
												tmp22 = true;
											}
											HX_STACK_LINE(63)
											if ((tmp22)){
												HX_STACK_LINE(63)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
											}
											HX_STACK_LINE(63)
											Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(63)
											{
												HX_STACK_LINE(63)
												{
													HX_STACK_LINE(63)
													bool tmp24 = (ret != null());		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(63)
													bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(63)
													if ((tmp24)){
														HX_STACK_LINE(63)
														tmp25 = ret->zpp_disp;
													}
													else{
														HX_STACK_LINE(63)
														tmp25 = false;
													}
													HX_STACK_LINE(63)
													if ((tmp25)){
														HX_STACK_LINE(63)
														::String tmp26 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(63)
														::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(63)
														HX_STACK_DO_THROW(tmp27);
													}
												}
												HX_STACK_LINE(63)
												{
													HX_STACK_LINE(63)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(63)
													bool tmp24 = (_this->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(63)
													if ((tmp24)){
														HX_STACK_LINE(63)
														_this->_validate();
													}
												}
												HX_STACK_LINE(63)
												tmp23 = ret->zpp_inner->x;
											}
											HX_STACK_LINE(63)
											Float tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(63)
											bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(63)
											bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(63)
											if ((tmp25)){
												HX_STACK_LINE(63)
												Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(63)
												{
													HX_STACK_LINE(63)
													{
														HX_STACK_LINE(63)
														bool tmp28 = (ret != null());		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(63)
														bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(63)
														bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(63)
														bool tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(63)
														if ((tmp31)){
															HX_STACK_LINE(63)
															tmp30 = ret->zpp_disp;
														}
														else{
															HX_STACK_LINE(63)
															tmp30 = false;
														}
														HX_STACK_LINE(63)
														bool tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(63)
														if ((tmp32)){
															HX_STACK_LINE(63)
															::String tmp33 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(63)
															::String tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(63)
															::String tmp35 = (tmp34 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(63)
															::String tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(63)
															::String tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(63)
															HX_STACK_DO_THROW(tmp37);
														}
													}
													HX_STACK_LINE(63)
													{
														HX_STACK_LINE(63)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(63)
														bool tmp28 = (_this->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(63)
														bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(63)
														bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(63)
														if ((tmp30)){
															HX_STACK_LINE(63)
															_this->_validate();
														}
													}
													HX_STACK_LINE(63)
													Float tmp28 = ret->zpp_inner->y;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(63)
													tmp27 = tmp28;
												}
												HX_STACK_LINE(63)
												Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(63)
												tmp26 = (tmp27 == tmp28);
											}
											else{
												HX_STACK_LINE(63)
												tmp26 = false;
											}
											HX_STACK_LINE(63)
											bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(63)
											if ((tmp27)){
												HX_STACK_LINE(63)
												{
													HX_STACK_LINE(63)
													ret->zpp_inner->x = x;
													HX_STACK_LINE(63)
													ret->zpp_inner->y = y;
													HX_STACK_LINE(63)
													{
													}
												}
												HX_STACK_LINE(63)
												{
													HX_STACK_LINE(63)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(63)
													bool tmp28 = (_this->_invalidate != null());		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(63)
													if ((tmp28)){
														HX_STACK_LINE(63)
														::zpp_nape::geom::ZPP_Vec2 tmp29 = _this;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(63)
														_this->_invalidate(tmp29);
													}
												}
											}
											HX_STACK_LINE(63)
											ret;
										}
										HX_STACK_LINE(63)
										ret->zpp_inner->weak = true;
										HX_STACK_LINE(63)
										tmp15 = ret;
									}
								}
								HX_STACK_LINE(63)
								verts->push(tmp15);
							}
						}
						HX_STACK_LINE(65)
						{
							HX_STACK_LINE(65)
							::nape::phys::Body tmp12 = this->map_static;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(65)
							::nape::shape::ShapeList tmp13 = tmp12->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(65)
							::nape::shape::ShapeList _this = tmp13;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(65)
							::nape::shape::Polygon tmp14 = ::nape::shape::Polygon_obj::__new(verts,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(65)
							::nape::shape::Shape obj1 = tmp14;		HX_STACK_VAR(obj1,"obj1");
							HX_STACK_LINE(65)
							bool tmp15 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(65)
							if ((tmp15)){
								HX_STACK_LINE(65)
								::nape::shape::Shape tmp16 = obj1;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(65)
								_this->push(tmp16);
							}
							else{
								HX_STACK_LINE(65)
								::nape::shape::Shape tmp16 = obj1;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(65)
								_this->unshift(tmp16);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::nape::phys::Body tmp4 = this->map_static;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(69)
			::luxe::Physics tmp5 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			::nape::space::Space tmp6 = tmp5->nape->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(69)
			::nape::space::Space space = tmp6;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::zpp_nape::phys::ZPP_Compound tmp7 = _this->zpp_inner->compound;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(69)
				bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(69)
				if ((tmp8)){
					HX_STACK_LINE(69)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set","\x2f","\x88","\x46","\xff"));
				}
				HX_STACK_LINE(69)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(69)
				bool tmp9 = _this->zpp_inner->world;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(69)
				if ((tmp9)){
					HX_STACK_LINE(69)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
				}
				HX_STACK_LINE(69)
				::zpp_nape::space::ZPP_Space tmp10 = _this->zpp_inner->space;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(69)
				bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(69)
				::nape::space::Space tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(69)
				if ((tmp11)){
					HX_STACK_LINE(69)
					tmp12 = null();
				}
				else{
					HX_STACK_LINE(69)
					::zpp_nape::space::ZPP_Space tmp13 = _this->zpp_inner->space;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(69)
					tmp12 = tmp13->outer;
				}
				HX_STACK_LINE(69)
				::nape::space::Space tmp13 = space;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(69)
				bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(69)
				if ((tmp14)){
					HX_STACK_LINE(69)
					::zpp_nape::space::ZPP_Space tmp15 = _this->zpp_inner->space;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(69)
					bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(69)
					::nape::space::Space tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(69)
					if ((tmp16)){
						HX_STACK_LINE(69)
						tmp17 = null();
					}
					else{
						HX_STACK_LINE(69)
						::zpp_nape::space::ZPP_Space tmp18 = _this->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(69)
						tmp17 = tmp18->outer;
					}
					HX_STACK_LINE(69)
					bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(69)
					if ((tmp18)){
						HX_STACK_LINE(69)
						::zpp_nape::space::ZPP_Component tmp19 = _this->zpp_inner->component;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(69)
						tmp19->woken = false;
					}
					HX_STACK_LINE(69)
					::zpp_nape::space::ZPP_Space tmp19 = _this->zpp_inner->space;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(69)
					bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(69)
					::nape::space::Space tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(69)
					if ((tmp20)){
						HX_STACK_LINE(69)
						tmp21 = null();
					}
					else{
						HX_STACK_LINE(69)
						::zpp_nape::space::ZPP_Space tmp22 = _this->zpp_inner->space;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(69)
						tmp21 = tmp22->outer;
					}
					HX_STACK_LINE(69)
					bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(69)
					if ((tmp22)){
						HX_STACK_LINE(69)
						::zpp_nape::space::ZPP_Space tmp23 = _this->zpp_inner->space;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(69)
						bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(69)
						::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(69)
						if ((tmp24)){
							HX_STACK_LINE(69)
							tmp25 = null();
						}
						else{
							HX_STACK_LINE(69)
							::zpp_nape::space::ZPP_Space tmp26 = _this->zpp_inner->space;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(69)
							tmp25 = tmp26->outer;
						}
						HX_STACK_LINE(69)
						::nape::phys::BodyList tmp26 = tmp25->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(69)
						::nape::phys::Body tmp27 = _this;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(69)
						tmp26->remove(tmp27);
					}
					HX_STACK_LINE(69)
					bool tmp23 = (space != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(69)
					if ((tmp23)){
						HX_STACK_LINE(69)
						::nape::phys::BodyList tmp24 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(69)
						::nape::phys::BodyList _this1 = tmp24;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(69)
						bool tmp25 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(69)
						if ((tmp25)){
							HX_STACK_LINE(69)
							::nape::phys::Body tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(69)
							_this1->push(tmp26);
						}
						else{
							HX_STACK_LINE(69)
							::nape::phys::Body tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(69)
							_this1->unshift(tmp26);
						}
					}
				}
			}
			HX_STACK_LINE(69)
			::zpp_nape::space::ZPP_Space tmp7 = _this->zpp_inner->space;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			if ((tmp8)){
				HX_STACK_LINE(69)
				Dynamic();
			}
			else{
				HX_STACK_LINE(69)
				::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(69)
				tmp9->outer;
			}
		}
		HX_STACK_LINE(70)
		::luxe::physics::nape::DebugDraw tmp4 = ::World_obj::debugdraw;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		::nape::phys::Body tmp5 = this->map_static;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		tmp4->add(tmp5,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,generate_collision,(void))

Void World_obj::generate_objects( ){
{
		HX_STACK_FRAME("World","generate_objects",0x7ab77c46,"World.generate_objects","World.hx",75,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		::luxe::importers::tiled::TiledMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		Array< ::Dynamic > _g1 = tmp->tiledmap_data->object_groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(75)
		while((true)){
			HX_STACK_LINE(75)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(75)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(75)
			if ((tmp2)){
				HX_STACK_LINE(75)
				break;
			}
			HX_STACK_LINE(75)
			::luxe::importers::tiled::TiledObjectGroup tmp3 = _g1->__get(_g).StaticCast< ::luxe::importers::tiled::TiledObjectGroup >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(75)
			::luxe::importers::tiled::TiledObjectGroup object_group = tmp3;		HX_STACK_VAR(object_group,"object_group");
			HX_STACK_LINE(75)
			++(_g);
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(77)
				Array< ::Dynamic > _g3 = object_group->objects;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(77)
				while((true)){
					HX_STACK_LINE(77)
					bool tmp4 = (_g2 < _g3->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(77)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(77)
					if ((tmp5)){
						HX_STACK_LINE(77)
						break;
					}
					HX_STACK_LINE(77)
					::luxe::importers::tiled::TiledObject tmp6 = _g3->__get(_g2).StaticCast< ::luxe::importers::tiled::TiledObject >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(77)
					::luxe::importers::tiled::TiledObject object = tmp6;		HX_STACK_VAR(object,"object");
					HX_STACK_LINE(77)
					++(_g2);
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						::String _g4 = object->type;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(79)
						::String tmp7 = _g4;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(79)
						::String _switch_1 = (tmp7);
						if (  ( _switch_1==HX_HCSTRING("Spawn","\x1b","\x0e","\x94","\x14"))){
							HX_STACK_LINE(83)
							::luxe::importers::tiled::TiledMap tmp8 = this->map;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(83)
							int tmp9 = tmp8->tile_width;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(83)
							::luxe::importers::tiled::TiledMap tmp10 = this->map;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(83)
							int tmp11 = tmp10->tile_height;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(83)
							::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new(tmp9,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(83)
							::phoenix::Vector player_size = tmp12;		HX_STACK_VAR(player_size,"player_size");
							HX_STACK_LINE(84)
							::phoenix::Vector tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(84)
							{
								HX_STACK_LINE(84)
								::phoenix::Vector _this = object->pos;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(84)
								::phoenix::Vector tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(84)
								{
									HX_STACK_LINE(84)
									::phoenix::Vector tmp15 = ::phoenix::Vector_obj::__new(object->width,object->height,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(84)
									::phoenix::Vector _this1 = tmp15;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(84)
									{
										HX_STACK_LINE(84)
										Float tmp16 = (Float(_this1->x) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(84)
										Float _x = tmp16;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(84)
										Float tmp17 = (Float(_this1->y) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(84)
										Float _y = tmp17;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(84)
										Float tmp18 = (Float(_this1->z) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(84)
										Float _z = tmp18;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(84)
										bool prev = _this1->ignore_listeners;		HX_STACK_VAR(prev,"prev");
										HX_STACK_LINE(84)
										_this1->ignore_listeners = true;
										HX_STACK_LINE(84)
										{
											HX_STACK_LINE(84)
											_this1->x = _x;
											HX_STACK_LINE(84)
											bool tmp19 = _this1->_construct;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(84)
											if ((tmp19)){
												HX_STACK_LINE(84)
												_this1->x;
											}
											else{
												HX_STACK_LINE(84)
												bool tmp20 = (_this1->listen_x != null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(84)
												bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(84)
												if ((tmp20)){
													HX_STACK_LINE(84)
													bool tmp22 = _this1->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(84)
													bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(84)
													tmp21 = !(tmp23);
												}
												else{
													HX_STACK_LINE(84)
													tmp21 = false;
												}
												HX_STACK_LINE(84)
												if ((tmp21)){
													HX_STACK_LINE(84)
													Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(84)
													_this1->listen_x(tmp22);
												}
												HX_STACK_LINE(84)
												_this1->x;
											}
										}
										HX_STACK_LINE(84)
										{
											HX_STACK_LINE(84)
											_this1->y = _y;
											HX_STACK_LINE(84)
											bool tmp19 = _this1->_construct;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(84)
											if ((tmp19)){
												HX_STACK_LINE(84)
												_this1->y;
											}
											else{
												HX_STACK_LINE(84)
												bool tmp20 = (_this1->listen_y != null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(84)
												bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(84)
												if ((tmp20)){
													HX_STACK_LINE(84)
													bool tmp22 = _this1->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(84)
													bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(84)
													tmp21 = !(tmp23);
												}
												else{
													HX_STACK_LINE(84)
													tmp21 = false;
												}
												HX_STACK_LINE(84)
												if ((tmp21)){
													HX_STACK_LINE(84)
													Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(84)
													_this1->listen_y(tmp22);
												}
												HX_STACK_LINE(84)
												_this1->y;
											}
										}
										HX_STACK_LINE(84)
										{
											HX_STACK_LINE(84)
											_this1->z = _z;
											HX_STACK_LINE(84)
											bool tmp19 = _this1->_construct;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(84)
											if ((tmp19)){
												HX_STACK_LINE(84)
												_this1->z;
											}
											else{
												HX_STACK_LINE(84)
												bool tmp20 = (_this1->listen_z != null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(84)
												bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(84)
												if ((tmp20)){
													HX_STACK_LINE(84)
													bool tmp22 = _this1->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(84)
													bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(84)
													tmp21 = !(tmp23);
												}
												else{
													HX_STACK_LINE(84)
													tmp21 = false;
												}
												HX_STACK_LINE(84)
												if ((tmp21)){
													HX_STACK_LINE(84)
													Float tmp22 = _z;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(84)
													_this1->listen_z(tmp22);
												}
												HX_STACK_LINE(84)
												_this1->z;
											}
										}
										HX_STACK_LINE(84)
										_this1->ignore_listeners = prev;
										HX_STACK_LINE(84)
										bool tmp19 = (_this1->listen_x != null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(84)
										bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(84)
										if ((tmp19)){
											HX_STACK_LINE(84)
											bool tmp21 = _this1->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(84)
											bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(84)
											tmp20 = !(tmp22);
										}
										else{
											HX_STACK_LINE(84)
											tmp20 = false;
										}
										HX_STACK_LINE(84)
										if ((tmp20)){
											HX_STACK_LINE(84)
											Float tmp21 = _this1->x;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(84)
											_this1->listen_x(tmp21);
										}
										HX_STACK_LINE(84)
										bool tmp21 = (_this1->listen_y != null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(84)
										bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(84)
										if ((tmp21)){
											HX_STACK_LINE(84)
											bool tmp23 = _this1->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(84)
											bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(84)
											tmp22 = !(tmp24);
										}
										else{
											HX_STACK_LINE(84)
											tmp22 = false;
										}
										HX_STACK_LINE(84)
										if ((tmp22)){
											HX_STACK_LINE(84)
											Float tmp23 = _this1->y;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(84)
											_this1->listen_y(tmp23);
										}
										HX_STACK_LINE(84)
										bool tmp23 = (_this1->listen_z != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(84)
										bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(84)
										if ((tmp23)){
											HX_STACK_LINE(84)
											bool tmp25 = _this1->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(84)
											bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(84)
											tmp24 = !(tmp26);
										}
										else{
											HX_STACK_LINE(84)
											tmp24 = false;
										}
										HX_STACK_LINE(84)
										if ((tmp24)){
											HX_STACK_LINE(84)
											Float tmp25 = _this1->z;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(84)
											_this1->listen_z(tmp25);
										}
										HX_STACK_LINE(84)
										_this1;
									}
									HX_STACK_LINE(84)
									tmp14 = _this1;
								}
								HX_STACK_LINE(84)
								::phoenix::Vector other = tmp14;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(84)
								{
									HX_STACK_LINE(84)
									bool tmp15 = (other == null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(84)
									if ((tmp15)){
										HX_STACK_LINE(84)
										::String tmp16 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(84)
										::luxe::DebugError tmp17 = ::luxe::DebugError_obj::null_assertion(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(84)
										HX_STACK_DO_THROW(tmp17);
									}
								}
								HX_STACK_LINE(84)
								{
									HX_STACK_LINE(84)
									Float tmp15 = (_this->x + other->x);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(84)
									Float _x = tmp15;		HX_STACK_VAR(_x,"_x");
									HX_STACK_LINE(84)
									Float tmp16 = (_this->y + other->y);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(84)
									Float _y = tmp16;		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(84)
									Float tmp17 = (_this->z + other->z);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(84)
									Float _z = tmp17;		HX_STACK_VAR(_z,"_z");
									HX_STACK_LINE(84)
									bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
									HX_STACK_LINE(84)
									_this->ignore_listeners = true;
									HX_STACK_LINE(84)
									{
										HX_STACK_LINE(84)
										_this->x = _x;
										HX_STACK_LINE(84)
										bool tmp18 = _this->_construct;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(84)
										if ((tmp18)){
											HX_STACK_LINE(84)
											_this->x;
										}
										else{
											HX_STACK_LINE(84)
											bool tmp19 = (_this->listen_x != null());		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(84)
											bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(84)
											if ((tmp19)){
												HX_STACK_LINE(84)
												bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(84)
												bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(84)
												tmp20 = !(tmp22);
											}
											else{
												HX_STACK_LINE(84)
												tmp20 = false;
											}
											HX_STACK_LINE(84)
											if ((tmp20)){
												HX_STACK_LINE(84)
												Float tmp21 = _x;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(84)
												_this->listen_x(tmp21);
											}
											HX_STACK_LINE(84)
											_this->x;
										}
									}
									HX_STACK_LINE(84)
									{
										HX_STACK_LINE(84)
										_this->y = _y;
										HX_STACK_LINE(84)
										bool tmp18 = _this->_construct;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(84)
										if ((tmp18)){
											HX_STACK_LINE(84)
											_this->y;
										}
										else{
											HX_STACK_LINE(84)
											bool tmp19 = (_this->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(84)
											bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(84)
											if ((tmp19)){
												HX_STACK_LINE(84)
												bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(84)
												bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(84)
												tmp20 = !(tmp22);
											}
											else{
												HX_STACK_LINE(84)
												tmp20 = false;
											}
											HX_STACK_LINE(84)
											if ((tmp20)){
												HX_STACK_LINE(84)
												Float tmp21 = _y;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(84)
												_this->listen_y(tmp21);
											}
											HX_STACK_LINE(84)
											_this->y;
										}
									}
									HX_STACK_LINE(84)
									{
										HX_STACK_LINE(84)
										_this->z = _z;
										HX_STACK_LINE(84)
										bool tmp18 = _this->_construct;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(84)
										if ((tmp18)){
											HX_STACK_LINE(84)
											_this->z;
										}
										else{
											HX_STACK_LINE(84)
											bool tmp19 = (_this->listen_z != null());		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(84)
											bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(84)
											if ((tmp19)){
												HX_STACK_LINE(84)
												bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(84)
												bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(84)
												tmp20 = !(tmp22);
											}
											else{
												HX_STACK_LINE(84)
												tmp20 = false;
											}
											HX_STACK_LINE(84)
											if ((tmp20)){
												HX_STACK_LINE(84)
												Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(84)
												_this->listen_z(tmp21);
											}
											HX_STACK_LINE(84)
											_this->z;
										}
									}
									HX_STACK_LINE(84)
									_this->ignore_listeners = prev;
									HX_STACK_LINE(84)
									bool tmp18 = (_this->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(84)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(84)
									if ((tmp18)){
										HX_STACK_LINE(84)
										bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(84)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(84)
										tmp19 = !(tmp21);
									}
									else{
										HX_STACK_LINE(84)
										tmp19 = false;
									}
									HX_STACK_LINE(84)
									if ((tmp19)){
										HX_STACK_LINE(84)
										Float tmp20 = _this->x;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(84)
										_this->listen_x(tmp20);
									}
									HX_STACK_LINE(84)
									bool tmp20 = (_this->listen_y != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(84)
									bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(84)
									if ((tmp20)){
										HX_STACK_LINE(84)
										bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(84)
										bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(84)
										tmp21 = !(tmp23);
									}
									else{
										HX_STACK_LINE(84)
										tmp21 = false;
									}
									HX_STACK_LINE(84)
									if ((tmp21)){
										HX_STACK_LINE(84)
										Float tmp22 = _this->y;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(84)
										_this->listen_y(tmp22);
									}
									HX_STACK_LINE(84)
									bool tmp22 = (_this->listen_z != null());		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(84)
									bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(84)
									if ((tmp22)){
										HX_STACK_LINE(84)
										bool tmp24 = _this->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(84)
										bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(84)
										tmp23 = !(tmp25);
									}
									else{
										HX_STACK_LINE(84)
										tmp23 = false;
									}
									HX_STACK_LINE(84)
									if ((tmp23)){
										HX_STACK_LINE(84)
										Float tmp24 = _this->z;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(84)
										_this->listen_z(tmp24);
									}
									HX_STACK_LINE(84)
									_this;
								}
								HX_STACK_LINE(84)
								tmp13 = _this;
							}
							HX_STACK_LINE(84)
							::phoenix::Vector body_pos = tmp13;		HX_STACK_VAR(body_pos,"body_pos");
							HX_STACK_LINE(85)
							::creatures::Player tmp14 = ::creatures::Player_obj::__new(body_pos);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(85)
							this->player = tmp14;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,generate_objects,(void))

Void World_obj::reset( ){
{
		HX_STACK_FRAME("World","reset",0xc63e9a93,"World.reset","World.hx",92,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		::luxe::physics::nape::DebugDraw tmp = ::World_obj::debugdraw;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		if ((tmp1)){
			HX_STACK_LINE(95)
			::luxe::physics::nape::DebugDraw tmp2 = ::World_obj::debugdraw;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			tmp2->destroy();
			HX_STACK_LINE(96)
			::World_obj::debugdraw = null();
		}
		HX_STACK_LINE(99)
		::luxe::physics::nape::DebugDraw tmp2 = ::luxe::physics::nape::DebugDraw_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		::World_obj::debugdraw = tmp2;
		HX_STACK_LINE(100)
		::luxe::physics::nape::DebugDraw tmp3 = ::World_obj::debugdraw;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		::luxe::Physics tmp4 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		tmp4->nape->debugdraw = tmp3;
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			::luxe::Physics tmp5 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(102)
			::nape::space::Space tmp6 = tmp5->nape->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(102)
			::nape::callbacks::ListenerList tmp7 = tmp6->zpp_inner->wrap_listeners;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(102)
			::nape::callbacks::ListenerList _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(103)
			::nape::callbacks::CbEvent tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(103)
			{
				HX_STACK_LINE(103)
				::nape::callbacks::CbEvent tmp9 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(103)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(103)
				if ((tmp10)){
					HX_STACK_LINE(103)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(103)
					::nape::callbacks::CbEvent tmp11 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(103)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = tmp11;
					HX_STACK_LINE(103)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(103)
				tmp8 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
			}
			HX_STACK_LINE(103)
			::nape::callbacks::InteractionType tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(103)
			{
				HX_STACK_LINE(103)
				::nape::callbacks::InteractionType tmp10 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(103)
				bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(103)
				if ((tmp11)){
					HX_STACK_LINE(103)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(103)
					::nape::callbacks::InteractionType tmp12 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(103)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp12;
					HX_STACK_LINE(103)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(103)
				tmp9 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			HX_STACK_LINE(104)
			::nape::callbacks::CbType tmp10 = ::World_obj::CBTYPE_CREATURE;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(105)
			::nape::callbacks::CbType tmp11 = ::World_obj::CBTYPE_TERRAIN;		HX_STACK_VAR(tmp11,"tmp11");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Void run(::nape::callbacks::InteractionCallback cb){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","World.hx",106,0x7e25a7cc)
				HX_STACK_ARG(cb,"cb")
				{
					HX_STACK_LINE(107)
					Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						::zpp_nape::phys::ZPP_Interactor tmp13 = cb->zpp_inner->int1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(107)
						::nape::phys::Interactor _this1 = tmp13->outer_i;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(107)
						Dynamic tmp14 = _this1->zpp_inner_i->userData;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(107)
						bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(107)
						if ((tmp15)){
							struct _Function_5_1{
								inline static Dynamic Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",107,0x7e25a7cc)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(107)
							Dynamic tmp16 = _Function_5_1::Block();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(107)
							_this1->zpp_inner_i->userData = tmp16;
						}
						HX_STACK_LINE(107)
						tmp12 = _this1->zpp_inner_i->userData;
					}
					HX_STACK_LINE(107)
					::luxe::Entity entity = tmp12->__Field(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"), hx::paccDynamic );		HX_STACK_VAR(entity,"entity");
					HX_STACK_LINE(108)
					::nape::callbacks::InteractionCallback tmp13 = cb;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(108)
					entity->events->fire(HX_HCSTRING("begin.collide.terrain","\x80","\x7a","\x22","\xde"),tmp13,null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(102)
			::nape::callbacks::InteractionListener tmp12 = ::nape::callbacks::InteractionListener_obj::__new(tmp8,tmp9,tmp10,tmp11, Dynamic(new _Function_2_1()),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(102)
			::nape::callbacks::Listener obj = tmp12;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(102)
			bool tmp13 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(102)
			if ((tmp13)){
				HX_STACK_LINE(102)
				::nape::callbacks::Listener tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(102)
				_this->push(tmp14);
			}
			else{
				HX_STACK_LINE(102)
				::nape::callbacks::Listener tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(102)
				_this->unshift(tmp14);
			}
		}
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			::luxe::Physics tmp5 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(111)
			::nape::space::Space tmp6 = tmp5->nape->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			::nape::callbacks::ListenerList tmp7 = tmp6->zpp_inner->wrap_listeners;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			::nape::callbacks::ListenerList _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(112)
			::nape::callbacks::CbEvent tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				::nape::callbacks::CbEvent tmp9 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(112)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(112)
				if ((tmp10)){
					HX_STACK_LINE(112)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(112)
					::nape::callbacks::CbEvent tmp11 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(112)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = tmp11;
					HX_STACK_LINE(112)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(112)
				tmp8 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
			}
			HX_STACK_LINE(112)
			::nape::callbacks::InteractionType tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				::nape::callbacks::InteractionType tmp10 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(112)
				bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(112)
				if ((tmp11)){
					HX_STACK_LINE(112)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(112)
					::nape::callbacks::InteractionType tmp12 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(112)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp12;
					HX_STACK_LINE(112)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(112)
				tmp9 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			HX_STACK_LINE(113)
			::nape::callbacks::CbType tmp10 = ::World_obj::CBTYPE_CREATURE;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(114)
			::nape::callbacks::CbType tmp11 = ::World_obj::CBTYPE_TERRAIN;		HX_STACK_VAR(tmp11,"tmp11");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Void run(::nape::callbacks::InteractionCallback cb){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","World.hx",115,0x7e25a7cc)
				HX_STACK_ARG(cb,"cb")
				{
					HX_STACK_LINE(116)
					Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(116)
					{
						HX_STACK_LINE(116)
						::zpp_nape::phys::ZPP_Interactor tmp13 = cb->zpp_inner->int1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(116)
						::nape::phys::Interactor _this1 = tmp13->outer_i;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(116)
						Dynamic tmp14 = _this1->zpp_inner_i->userData;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(116)
						bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(116)
						if ((tmp15)){
							struct _Function_5_1{
								inline static Dynamic Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",116,0x7e25a7cc)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(116)
							Dynamic tmp16 = _Function_5_1::Block();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(116)
							_this1->zpp_inner_i->userData = tmp16;
						}
						HX_STACK_LINE(116)
						tmp12 = _this1->zpp_inner_i->userData;
					}
					HX_STACK_LINE(116)
					::luxe::Entity entity = tmp12->__Field(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"), hx::paccDynamic );		HX_STACK_VAR(entity,"entity");
					HX_STACK_LINE(117)
					::nape::callbacks::InteractionCallback tmp13 = cb;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(117)
					entity->events->fire(HX_HCSTRING("ongoing.collide.terrain","\x92","\xfe","\x75","\x97"),tmp13,null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(111)
			::nape::callbacks::InteractionListener tmp12 = ::nape::callbacks::InteractionListener_obj::__new(tmp8,tmp9,tmp10,tmp11, Dynamic(new _Function_2_1()),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(111)
			::nape::callbacks::Listener obj = tmp12;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(111)
			bool tmp13 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(111)
			if ((tmp13)){
				HX_STACK_LINE(111)
				::nape::callbacks::Listener tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(111)
				_this->push(tmp14);
			}
			else{
				HX_STACK_LINE(111)
				::nape::callbacks::Listener tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(111)
				_this->unshift(tmp14);
			}
		}
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			::luxe::Physics tmp5 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			::nape::space::Space tmp6 = tmp5->nape->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(120)
			::nape::callbacks::ListenerList tmp7 = tmp6->zpp_inner->wrap_listeners;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(120)
			::nape::callbacks::ListenerList _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(121)
			::nape::callbacks::CbEvent tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				::nape::callbacks::CbEvent tmp9 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(121)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(121)
				if ((tmp10)){
					HX_STACK_LINE(121)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(121)
					::nape::callbacks::CbEvent tmp11 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(121)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = tmp11;
					HX_STACK_LINE(121)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(121)
				tmp8 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
			}
			HX_STACK_LINE(121)
			::nape::callbacks::InteractionType tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				::nape::callbacks::InteractionType tmp10 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(121)
				bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(121)
				if ((tmp11)){
					HX_STACK_LINE(121)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(121)
					::nape::callbacks::InteractionType tmp12 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(121)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp12;
					HX_STACK_LINE(121)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(121)
				tmp9 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			HX_STACK_LINE(122)
			::nape::callbacks::CbType tmp10 = ::World_obj::CBTYPE_CREATURE;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(123)
			::nape::callbacks::CbType tmp11 = ::World_obj::CBTYPE_TERRAIN;		HX_STACK_VAR(tmp11,"tmp11");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Void run(::nape::callbacks::InteractionCallback cb){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","World.hx",124,0x7e25a7cc)
				HX_STACK_ARG(cb,"cb")
				{
					HX_STACK_LINE(125)
					Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(125)
					{
						HX_STACK_LINE(125)
						::zpp_nape::phys::ZPP_Interactor tmp13 = cb->zpp_inner->int1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(125)
						::nape::phys::Interactor _this1 = tmp13->outer_i;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(125)
						Dynamic tmp14 = _this1->zpp_inner_i->userData;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(125)
						bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(125)
						if ((tmp15)){
							struct _Function_5_1{
								inline static Dynamic Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",125,0x7e25a7cc)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(125)
							Dynamic tmp16 = _Function_5_1::Block();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(125)
							_this1->zpp_inner_i->userData = tmp16;
						}
						HX_STACK_LINE(125)
						tmp12 = _this1->zpp_inner_i->userData;
					}
					HX_STACK_LINE(125)
					::luxe::Entity entity = tmp12->__Field(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"), hx::paccDynamic );		HX_STACK_VAR(entity,"entity");
					HX_STACK_LINE(126)
					::nape::callbacks::InteractionCallback tmp13 = cb;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(126)
					entity->events->fire(HX_HCSTRING("end.collide.terrain","\x32","\x98","\x23","\xa9"),tmp13,null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(120)
			::nape::callbacks::InteractionListener tmp12 = ::nape::callbacks::InteractionListener_obj::__new(tmp8,tmp9,tmp10,tmp11, Dynamic(new _Function_2_1()),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(120)
			::nape::callbacks::Listener obj = tmp12;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(120)
			bool tmp13 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(120)
			if ((tmp13)){
				HX_STACK_LINE(120)
				::nape::callbacks::Listener tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(120)
				_this->push(tmp14);
			}
			else{
				HX_STACK_LINE(120)
				::nape::callbacks::Listener tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(120)
				_this->unshift(tmp14);
			}
		}
		HX_STACK_LINE(130)
		this->generate_collision();
		HX_STACK_LINE(131)
		this->generate_objects();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,reset,(void))

::nape::callbacks::CbType World_obj::CBTYPE_TERRAIN;

::nape::callbacks::CbType World_obj::CBTYPE_CREATURE;

::luxe::physics::nape::DebugDraw World_obj::debugdraw;


World_obj::World_obj()
{
}

void World_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(World);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(map_static,"map_static");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_END_CLASS();
}

void World_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(map_static,"map_static");
	HX_VISIT_MEMBER_NAME(player,"player");
}

Dynamic World_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"map_static") ) { return map_static; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"generate_objects") ) { return generate_objects_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"generate_collision") ) { return generate_collision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool World_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"debugdraw") ) { outValue = debugdraw; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"CBTYPE_TERRAIN") ) { outValue = CBTYPE_TERRAIN; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CBTYPE_CREATURE") ) { outValue = CBTYPE_CREATURE; return true;  }
	}
	return false;
}

Dynamic World_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::luxe::importers::tiled::TiledMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"map_static") ) { map_static=inValue.Cast< ::nape::phys::Body >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool World_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"debugdraw") ) { debugdraw=ioValue.Cast< ::luxe::physics::nape::DebugDraw >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"CBTYPE_TERRAIN") ) { CBTYPE_TERRAIN=ioValue.Cast< ::nape::callbacks::CbType >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CBTYPE_CREATURE") ) { CBTYPE_CREATURE=ioValue.Cast< ::nape::callbacks::CbType >(); return true; }
	}
	return false;
}

void World_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("map_static","\x31","\xaf","\xb2","\x47"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::importers::tiled::TiledMap*/ ,(int)offsetof(World_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(World_obj,map_static),HX_HCSTRING("map_static","\x31","\xaf","\xb2","\x47")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(World_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::nape::callbacks::CbType*/ ,(void *) &World_obj::CBTYPE_TERRAIN,HX_HCSTRING("CBTYPE_TERRAIN","\xef","\x0a","\x1b","\x24")},
	{hx::fsObject /*::nape::callbacks::CbType*/ ,(void *) &World_obj::CBTYPE_CREATURE,HX_HCSTRING("CBTYPE_CREATURE","\x25","\x99","\xf0","\xd3")},
	{hx::fsObject /*::luxe::physics::nape::DebugDraw*/ ,(void *) &World_obj::debugdraw,HX_HCSTRING("debugdraw","\xd7","\xa3","\xe2","\x3a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("map_static","\x31","\xaf","\xb2","\x47"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("generate_collision","\xa8","\x77","\xd8","\x66"),
	HX_HCSTRING("generate_objects","\x8a","\xde","\x9b","\x49"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(World_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(World_obj::CBTYPE_TERRAIN,"CBTYPE_TERRAIN");
	HX_MARK_MEMBER_NAME(World_obj::CBTYPE_CREATURE,"CBTYPE_CREATURE");
	HX_MARK_MEMBER_NAME(World_obj::debugdraw,"debugdraw");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(World_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(World_obj::CBTYPE_TERRAIN,"CBTYPE_TERRAIN");
	HX_VISIT_MEMBER_NAME(World_obj::CBTYPE_CREATURE,"CBTYPE_CREATURE");
	HX_VISIT_MEMBER_NAME(World_obj::debugdraw,"debugdraw");
};

#endif

hx::Class World_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CBTYPE_TERRAIN","\xef","\x0a","\x1b","\x24"),
	HX_HCSTRING("CBTYPE_CREATURE","\x25","\x99","\xf0","\xd3"),
	HX_HCSTRING("debugdraw","\xd7","\xa3","\xe2","\x3a"),
	::String(null()) };

void World_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("World","\x32","\x06","\x92","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &World_obj::__GetStatic;
	__mClass->mSetStaticField = &World_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< World_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void World_obj::__boot()
{
	CBTYPE_TERRAIN= ::nape::callbacks::CbType_obj::__new();
	CBTYPE_CREATURE= ::nape::callbacks::CbType_obj::__new();
}

