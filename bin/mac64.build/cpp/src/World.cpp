#include <hxcpp.h>

#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_World
#include <World.h>
#endif
#ifndef INCLUDED_creatures_Player
#include <creatures/Player.h>
#endif
#ifndef INCLUDED_creatures_Soldier
#include <creatures/Soldier.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif

Void World_obj::__construct()
{
HX_STACK_FRAME("World","new",0xe2d1a824,"World.new","World.hx",31,0x7e25a7cc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	hx::ClassOf< ::creatures::Player >();
	HX_STACK_LINE(33)
	hx::ClassOf< ::creatures::Soldier >();
	HX_STACK_LINE(35)
	::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	::luxe::resource::Resource tmp1 = tmp->cache->get(HX_HCSTRING("assets/maps/test/Gameplay_Testing.tmx","\x99","\xa5","\x60","\x88"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	::snow::systems::assets::AssetText tmp2 = ((::luxe::resource::TextResource)(tmp1))->asset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	::String map_data = tmp2->text;		HX_STACK_VAR(map_data,"map_data");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &map_data){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",36,0x7e25a7cc)
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
	HX_STACK_LINE(36)
	Dynamic tmp3 = _Function_1_1::Block(map_data);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	::luxe::importers::tiled::TiledMap tmp4 = ::luxe::importers::tiled::TiledMap_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	this->map = tmp4;
	HX_STACK_LINE(38)
	this->reset();
	HX_STACK_LINE(40)
	::luxe::importers::tiled::TiledMap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",40,0x7e25a7cc)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , (int)9728,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)0.9),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(40)
	Dynamic tmp6 = _Function_1_2::Block();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(40)
	tmp5->display(tmp6);
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
		HX_STACK_FRAME("World","generate_collision",0xcc63fc64,"World.generate_collision","World.hx",44,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		::luxe::importers::tiled::TiledMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::luxe::tilemaps::TileLayer tmp1 = tmp->layer(HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		tmp1->visible = false;
		HX_STACK_LINE(46)
		::luxe::importers::tiled::TiledMap tmp2 = this->map;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		::luxe::tilemaps::TileLayer tmp3 = tmp2->layer(HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		Array< ::Dynamic > bounds = tmp3->bounds_fitted();		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(48)
		::nape::phys::BodyType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			::nape::phys::BodyType tmp5 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(48)
			if ((tmp6)){
				HX_STACK_LINE(48)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(48)
				::nape::phys::BodyType tmp7 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(48)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = tmp7;
				HX_STACK_LINE(48)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(48)
			tmp4 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
		}
		HX_STACK_LINE(48)
		::nape::phys::Body tmp5 = ::nape::phys::Body_obj::__new(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		this->map_static = tmp5;
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			::nape::callbacks::CbTypeList tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				::nape::phys::Body tmp7 = this->map_static;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(49)
				::nape::phys::Body _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(49)
				::nape::callbacks::CbTypeList tmp8 = _this->zpp_inner_i->wrap_cbTypes;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(49)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(49)
				if ((tmp9)){
					HX_STACK_LINE(49)
					_this->zpp_inner_i->setupcbTypes();
				}
				HX_STACK_LINE(49)
				tmp6 = _this->zpp_inner_i->wrap_cbTypes;
			}
			HX_STACK_LINE(49)
			::nape::callbacks::CbTypeList _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(49)
			::nape::callbacks::CbType tmp7 = ::World_obj::CBTYPE_TERRAIN;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			::nape::callbacks::CbType obj = tmp7;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(49)
			bool tmp8 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(49)
			if ((tmp8)){
				HX_STACK_LINE(49)
				::nape::callbacks::CbType tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(49)
				_this->push(tmp9);
			}
			else{
				HX_STACK_LINE(49)
				::nape::callbacks::CbType tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(49)
				_this->unshift(tmp9);
			}
		}
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				bool tmp6 = (_g < bounds->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(50)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(50)
				if ((tmp7)){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(50)
				::phoenix::Rectangle tmp8 = bounds->__get(_g).StaticCast< ::phoenix::Rectangle >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(50)
				::phoenix::Rectangle rect = tmp8;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(50)
				++(_g);
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					::phoenix::Rectangle _g1 = rect;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(52)
					Float tmp9 = _g1->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(52)
					::luxe::importers::tiled::TiledMap tmp10 = this->map;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(52)
					int tmp11 = tmp10->tile_width;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(52)
					Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(52)
					_g1->set_x(tmp12);
				}
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					::phoenix::Rectangle _g1 = rect;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(53)
					Float tmp9 = _g1->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(53)
					::luxe::importers::tiled::TiledMap tmp10 = this->map;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(53)
					int tmp11 = tmp10->tile_height;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(53)
					Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(53)
					_g1->set_y(tmp12);
				}
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::phoenix::Rectangle _g1 = rect;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(54)
					Float tmp9 = _g1->w;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(54)
					::luxe::importers::tiled::TiledMap tmp10 = this->map;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(54)
					int tmp11 = tmp10->tile_width;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(54)
					Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(54)
					_g1->set_w(tmp12);
				}
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					::phoenix::Rectangle _g1 = rect;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(55)
					Float tmp9 = _g1->h;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(55)
					::luxe::importers::tiled::TiledMap tmp10 = this->map;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(55)
					int tmp11 = tmp10->tile_height;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(55)
					Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(55)
					_g1->set_h(tmp12);
				}
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					::nape::phys::Body tmp9 = this->map_static;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(56)
					::nape::shape::ShapeList tmp10 = tmp9->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(56)
					::nape::shape::ShapeList _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(56)
					Float tmp11 = rect->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(56)
					Float tmp12 = rect->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(56)
					Float tmp13 = rect->w;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(56)
					Float tmp14 = rect->h;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(56)
					::nape::shape::Polygon tmp15 = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect(tmp11,tmp12,tmp13,tmp14,null()),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(56)
					::nape::shape::Shape obj = tmp15;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(56)
					bool tmp16 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(56)
					if ((tmp16)){
						HX_STACK_LINE(56)
						::nape::shape::Shape tmp17 = obj;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(56)
						_this->push(tmp17);
					}
					else{
						HX_STACK_LINE(56)
						::nape::shape::Shape tmp17 = obj;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(56)
						_this->unshift(tmp17);
					}
				}
			}
		}
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(59)
			::luxe::importers::tiled::TiledMap tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(59)
			Array< ::Dynamic > _g1 = tmp6->tiledmap_data->object_groups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(59)
			while((true)){
				HX_STACK_LINE(59)
				bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(59)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(59)
				if ((tmp8)){
					HX_STACK_LINE(59)
					break;
				}
				HX_STACK_LINE(59)
				::luxe::importers::tiled::TiledObjectGroup tmp9 = _g1->__get(_g).StaticCast< ::luxe::importers::tiled::TiledObjectGroup >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(59)
				::luxe::importers::tiled::TiledObjectGroup obj_grp = tmp9;		HX_STACK_VAR(obj_grp,"obj_grp");
				HX_STACK_LINE(59)
				++(_g);
				HX_STACK_LINE(61)
				bool tmp10 = (obj_grp->name != HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(61)
				if ((tmp10)){
					HX_STACK_LINE(61)
					continue;
				}
				HX_STACK_LINE(63)
				{
					HX_STACK_LINE(63)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(63)
					Array< ::Dynamic > _g3 = obj_grp->objects;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(63)
					while((true)){
						HX_STACK_LINE(63)
						bool tmp11 = (_g2 < _g3->length);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(63)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(63)
						if ((tmp12)){
							HX_STACK_LINE(63)
							break;
						}
						HX_STACK_LINE(63)
						::luxe::importers::tiled::TiledObject tmp13 = _g3->__get(_g2).StaticCast< ::luxe::importers::tiled::TiledObject >();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(63)
						::luxe::importers::tiled::TiledObject obj = tmp13;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(63)
						++(_g2);
						HX_STACK_LINE(65)
						Array< ::Dynamic > verts = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(67)
						{
							HX_STACK_LINE(67)
							int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(67)
							Array< ::Dynamic > _g5 = obj->polyobject->points;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(67)
							while((true)){
								HX_STACK_LINE(67)
								bool tmp14 = (_g4 < _g5->length);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(67)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(67)
								if ((tmp15)){
									HX_STACK_LINE(67)
									break;
								}
								HX_STACK_LINE(67)
								::phoenix::Vector tmp16 = _g5->__get(_g4).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(67)
								::phoenix::Vector point = tmp16;		HX_STACK_VAR(point,"point");
								HX_STACK_LINE(67)
								++(_g4);
								HX_STACK_LINE(69)
								{
									HX_STACK_LINE(69)
									::phoenix::Vector other = obj->pos;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										bool tmp17 = (other == null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(69)
										if ((tmp17)){
											HX_STACK_LINE(69)
											::String tmp18 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(69)
											::luxe::DebugError tmp19 = ::luxe::DebugError_obj::null_assertion(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											HX_STACK_DO_THROW(tmp19);
										}
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										Float tmp17 = (point->x + other->x);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(69)
										Float _x = tmp17;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(69)
										Float tmp18 = (point->y + other->y);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(69)
										Float _y = tmp18;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(69)
										Float tmp19 = (point->z + other->z);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(69)
										Float _z = tmp19;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(69)
										bool prev = point->ignore_listeners;		HX_STACK_VAR(prev,"prev");
										HX_STACK_LINE(69)
										point->ignore_listeners = true;
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											point->x = _x;
											HX_STACK_LINE(69)
											bool tmp20 = point->_construct;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											if ((tmp20)){
												HX_STACK_LINE(69)
												point->x;
											}
											else{
												HX_STACK_LINE(69)
												bool tmp21 = (point->listen_x != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(69)
												bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(69)
												if ((tmp21)){
													HX_STACK_LINE(69)
													bool tmp23 = point->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(69)
													bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(69)
													tmp22 = !(tmp24);
												}
												else{
													HX_STACK_LINE(69)
													tmp22 = false;
												}
												HX_STACK_LINE(69)
												if ((tmp22)){
													HX_STACK_LINE(69)
													Float tmp23 = _x;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(69)
													point->listen_x(tmp23);
												}
												HX_STACK_LINE(69)
												point->x;
											}
										}
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											point->y = _y;
											HX_STACK_LINE(69)
											bool tmp20 = point->_construct;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											if ((tmp20)){
												HX_STACK_LINE(69)
												point->y;
											}
											else{
												HX_STACK_LINE(69)
												bool tmp21 = (point->listen_y != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(69)
												bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(69)
												if ((tmp21)){
													HX_STACK_LINE(69)
													bool tmp23 = point->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(69)
													bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(69)
													tmp22 = !(tmp24);
												}
												else{
													HX_STACK_LINE(69)
													tmp22 = false;
												}
												HX_STACK_LINE(69)
												if ((tmp22)){
													HX_STACK_LINE(69)
													Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(69)
													point->listen_y(tmp23);
												}
												HX_STACK_LINE(69)
												point->y;
											}
										}
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											point->z = _z;
											HX_STACK_LINE(69)
											bool tmp20 = point->_construct;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											if ((tmp20)){
												HX_STACK_LINE(69)
												point->z;
											}
											else{
												HX_STACK_LINE(69)
												bool tmp21 = (point->listen_z != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(69)
												bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(69)
												if ((tmp21)){
													HX_STACK_LINE(69)
													bool tmp23 = point->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(69)
													bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(69)
													tmp22 = !(tmp24);
												}
												else{
													HX_STACK_LINE(69)
													tmp22 = false;
												}
												HX_STACK_LINE(69)
												if ((tmp22)){
													HX_STACK_LINE(69)
													Float tmp23 = _z;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(69)
													point->listen_z(tmp23);
												}
												HX_STACK_LINE(69)
												point->z;
											}
										}
										HX_STACK_LINE(69)
										point->ignore_listeners = prev;
										HX_STACK_LINE(69)
										bool tmp20 = (point->listen_x != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(69)
										bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(69)
										if ((tmp20)){
											HX_STACK_LINE(69)
											bool tmp22 = point->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(69)
											bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(69)
											tmp21 = !(tmp23);
										}
										else{
											HX_STACK_LINE(69)
											tmp21 = false;
										}
										HX_STACK_LINE(69)
										if ((tmp21)){
											HX_STACK_LINE(69)
											Float tmp22 = point->x;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(69)
											point->listen_x(tmp22);
										}
										HX_STACK_LINE(69)
										bool tmp22 = (point->listen_y != null());		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(69)
										bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(69)
										if ((tmp22)){
											HX_STACK_LINE(69)
											bool tmp24 = point->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(69)
											bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(69)
											tmp23 = !(tmp25);
										}
										else{
											HX_STACK_LINE(69)
											tmp23 = false;
										}
										HX_STACK_LINE(69)
										if ((tmp23)){
											HX_STACK_LINE(69)
											Float tmp24 = point->y;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(69)
											point->listen_y(tmp24);
										}
										HX_STACK_LINE(69)
										bool tmp24 = (point->listen_z != null());		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(69)
										bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(69)
										if ((tmp24)){
											HX_STACK_LINE(69)
											bool tmp26 = point->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(69)
											bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(69)
											tmp25 = !(tmp27);
										}
										else{
											HX_STACK_LINE(69)
											tmp25 = false;
										}
										HX_STACK_LINE(69)
										if ((tmp25)){
											HX_STACK_LINE(69)
											Float tmp26 = point->z;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(69)
											point->listen_z(tmp26);
										}
										HX_STACK_LINE(69)
										point;
									}
									HX_STACK_LINE(69)
									point;
								}
								HX_STACK_LINE(70)
								::nape::geom::Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(70)
								{
									HX_STACK_LINE(70)
									Float x = point->x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(70)
									Float y = point->y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(70)
									{
										HX_STACK_LINE(70)
										bool tmp18 = (x != x);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(70)
										bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(70)
										bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(70)
										if ((tmp19)){
											HX_STACK_LINE(70)
											tmp20 = (y != y);
										}
										else{
											HX_STACK_LINE(70)
											tmp20 = true;
										}
										HX_STACK_LINE(70)
										if ((tmp20)){
											HX_STACK_LINE(70)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
										}
										HX_STACK_LINE(70)
										::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											if ((tmp22)){
												HX_STACK_LINE(70)
												::nape::geom::Vec2 tmp23 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(70)
												ret = tmp23;
											}
											else{
												HX_STACK_LINE(70)
												::nape::geom::Vec2 tmp23 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(70)
												ret = tmp23;
												HX_STACK_LINE(70)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(70)
												ret->zpp_pool = null();
												HX_STACK_LINE(70)
												ret->zpp_disp = false;
												HX_STACK_LINE(70)
												::nape::geom::Vec2 tmp24 = ret;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(70)
												::nape::geom::Vec2 tmp25 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(70)
												bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(70)
												if ((tmp26)){
													HX_STACK_LINE(70)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
										}
										HX_STACK_LINE(70)
										bool tmp21 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(70)
										if ((tmp21)){
											HX_STACK_LINE(70)
											::zpp_nape::geom::ZPP_Vec2 tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(70)
												::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(70)
													bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(70)
													if ((tmp24)){
														HX_STACK_LINE(70)
														::zpp_nape::geom::ZPP_Vec2 tmp25 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(70)
														ret1 = tmp25;
													}
													else{
														HX_STACK_LINE(70)
														::zpp_nape::geom::ZPP_Vec2 tmp25 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(70)
														ret1 = tmp25;
														HX_STACK_LINE(70)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(70)
														ret1->next = null();
													}
													HX_STACK_LINE(70)
													ret1->weak = false;
												}
												HX_STACK_LINE(70)
												ret1->_immutable = immutable;
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													ret1->x = x;
													HX_STACK_LINE(70)
													ret1->y = y;
													HX_STACK_LINE(70)
													{
													}
												}
												HX_STACK_LINE(70)
												tmp22 = ret1;
											}
											HX_STACK_LINE(70)
											ret->zpp_inner = tmp22;
											HX_STACK_LINE(70)
											ret->zpp_inner->outer = ret;
										}
										else{
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												bool tmp22 = (ret != null());		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(70)
												bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(70)
												if ((tmp22)){
													HX_STACK_LINE(70)
													tmp23 = ret->zpp_disp;
												}
												else{
													HX_STACK_LINE(70)
													tmp23 = false;
												}
												HX_STACK_LINE(70)
												if ((tmp23)){
													HX_STACK_LINE(70)
													::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(70)
													::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(70)
													HX_STACK_DO_THROW(tmp25);
												}
											}
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(70)
												bool tmp22 = _this->_immutable;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(70)
												if ((tmp22)){
													HX_STACK_LINE(70)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
												}
												HX_STACK_LINE(70)
												bool tmp23 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(70)
												if ((tmp23)){
													HX_STACK_LINE(70)
													_this->_isimmutable();
												}
											}
											HX_STACK_LINE(70)
											bool tmp22 = (x != x);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(70)
											bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(70)
											if ((tmp23)){
												HX_STACK_LINE(70)
												tmp24 = (y != y);
											}
											else{
												HX_STACK_LINE(70)
												tmp24 = true;
											}
											HX_STACK_LINE(70)
											if ((tmp24)){
												HX_STACK_LINE(70)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
											}
											HX_STACK_LINE(70)
											Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													bool tmp26 = (ret != null());		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(70)
													bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(70)
													if ((tmp26)){
														HX_STACK_LINE(70)
														tmp27 = ret->zpp_disp;
													}
													else{
														HX_STACK_LINE(70)
														tmp27 = false;
													}
													HX_STACK_LINE(70)
													if ((tmp27)){
														HX_STACK_LINE(70)
														::String tmp28 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(70)
														::String tmp29 = (tmp28 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(70)
														HX_STACK_DO_THROW(tmp29);
													}
												}
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(70)
													bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(70)
													if ((tmp26)){
														HX_STACK_LINE(70)
														_this->_validate();
													}
												}
												HX_STACK_LINE(70)
												tmp25 = ret->zpp_inner->x;
											}
											HX_STACK_LINE(70)
											Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(70)
											bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(70)
											bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(70)
											if ((tmp27)){
												HX_STACK_LINE(70)
												Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													{
														HX_STACK_LINE(70)
														bool tmp30 = (ret != null());		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(70)
														bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(70)
														bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(70)
														bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(70)
														if ((tmp33)){
															HX_STACK_LINE(70)
															tmp32 = ret->zpp_disp;
														}
														else{
															HX_STACK_LINE(70)
															tmp32 = false;
														}
														HX_STACK_LINE(70)
														bool tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(70)
														if ((tmp34)){
															HX_STACK_LINE(70)
															::String tmp35 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(70)
															::String tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(70)
															::String tmp37 = (tmp36 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(70)
															::String tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(70)
															::String tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(70)
															HX_STACK_DO_THROW(tmp39);
														}
													}
													HX_STACK_LINE(70)
													{
														HX_STACK_LINE(70)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(70)
														bool tmp30 = (_this->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(70)
														bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(70)
														bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(70)
														if ((tmp32)){
															HX_STACK_LINE(70)
															_this->_validate();
														}
													}
													HX_STACK_LINE(70)
													Float tmp30 = ret->zpp_inner->y;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(70)
													tmp29 = tmp30;
												}
												HX_STACK_LINE(70)
												Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(70)
												tmp28 = (tmp29 == tmp30);
											}
											else{
												HX_STACK_LINE(70)
												tmp28 = false;
											}
											HX_STACK_LINE(70)
											bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(70)
											if ((tmp29)){
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													ret->zpp_inner->x = x;
													HX_STACK_LINE(70)
													ret->zpp_inner->y = y;
													HX_STACK_LINE(70)
													{
													}
												}
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(70)
													bool tmp30 = (_this->_invalidate != null());		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(70)
													if ((tmp30)){
														HX_STACK_LINE(70)
														::zpp_nape::geom::ZPP_Vec2 tmp31 = _this;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(70)
														_this->_invalidate(tmp31);
													}
												}
											}
											HX_STACK_LINE(70)
											ret;
										}
										HX_STACK_LINE(70)
										ret->zpp_inner->weak = true;
										HX_STACK_LINE(70)
										tmp17 = ret;
									}
								}
								HX_STACK_LINE(70)
								verts->push(tmp17);
							}
						}
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							::nape::phys::Body tmp14 = this->map_static;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(72)
							::nape::shape::ShapeList tmp15 = tmp14->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(72)
							::nape::shape::ShapeList _this = tmp15;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(72)
							::nape::shape::Polygon tmp16 = ::nape::shape::Polygon_obj::__new(verts,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(72)
							::nape::shape::Shape obj1 = tmp16;		HX_STACK_VAR(obj1,"obj1");
							HX_STACK_LINE(72)
							bool tmp17 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(72)
							if ((tmp17)){
								HX_STACK_LINE(72)
								::nape::shape::Shape tmp18 = obj1;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(72)
								_this->push(tmp18);
							}
							else{
								HX_STACK_LINE(72)
								::nape::shape::Shape tmp18 = obj1;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(72)
								_this->unshift(tmp18);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			::nape::phys::Body tmp6 = this->map_static;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(76)
			::nape::phys::Body _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(76)
			::luxe::Physics tmp7 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(76)
			::nape::space::Space tmp8 = tmp7->nape->space;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(76)
			::nape::space::Space space = tmp8;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				::zpp_nape::phys::ZPP_Compound tmp9 = _this->zpp_inner->compound;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(76)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(76)
				if ((tmp10)){
					HX_STACK_LINE(76)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set","\x2f","\x88","\x46","\xff"));
				}
				HX_STACK_LINE(76)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(76)
				bool tmp11 = _this->zpp_inner->world;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(76)
				if ((tmp11)){
					HX_STACK_LINE(76)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
				}
				HX_STACK_LINE(76)
				::zpp_nape::space::ZPP_Space tmp12 = _this->zpp_inner->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(76)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(76)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(76)
				if ((tmp13)){
					HX_STACK_LINE(76)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(76)
					::zpp_nape::space::ZPP_Space tmp15 = _this->zpp_inner->space;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(76)
					tmp14 = tmp15->outer;
				}
				HX_STACK_LINE(76)
				::nape::space::Space tmp15 = space;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(76)
				bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(76)
				if ((tmp16)){
					HX_STACK_LINE(76)
					::zpp_nape::space::ZPP_Space tmp17 = _this->zpp_inner->space;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(76)
					bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(76)
					::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(76)
					if ((tmp18)){
						HX_STACK_LINE(76)
						tmp19 = null();
					}
					else{
						HX_STACK_LINE(76)
						::zpp_nape::space::ZPP_Space tmp20 = _this->zpp_inner->space;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(76)
						tmp19 = tmp20->outer;
					}
					HX_STACK_LINE(76)
					bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(76)
					if ((tmp20)){
						HX_STACK_LINE(76)
						::zpp_nape::space::ZPP_Component tmp21 = _this->zpp_inner->component;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(76)
						tmp21->woken = false;
					}
					HX_STACK_LINE(76)
					::zpp_nape::space::ZPP_Space tmp21 = _this->zpp_inner->space;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(76)
					bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(76)
					::nape::space::Space tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(76)
					if ((tmp22)){
						HX_STACK_LINE(76)
						tmp23 = null();
					}
					else{
						HX_STACK_LINE(76)
						::zpp_nape::space::ZPP_Space tmp24 = _this->zpp_inner->space;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(76)
						tmp23 = tmp24->outer;
					}
					HX_STACK_LINE(76)
					bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(76)
					if ((tmp24)){
						HX_STACK_LINE(76)
						::zpp_nape::space::ZPP_Space tmp25 = _this->zpp_inner->space;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(76)
						bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(76)
						::nape::space::Space tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(76)
						if ((tmp26)){
							HX_STACK_LINE(76)
							tmp27 = null();
						}
						else{
							HX_STACK_LINE(76)
							::zpp_nape::space::ZPP_Space tmp28 = _this->zpp_inner->space;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(76)
							tmp27 = tmp28->outer;
						}
						HX_STACK_LINE(76)
						::nape::phys::BodyList tmp28 = tmp27->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(76)
						::nape::phys::Body tmp29 = _this;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(76)
						tmp28->remove(tmp29);
					}
					HX_STACK_LINE(76)
					bool tmp25 = (space != null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(76)
					if ((tmp25)){
						HX_STACK_LINE(76)
						::nape::phys::BodyList tmp26 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(76)
						::nape::phys::BodyList _this1 = tmp26;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(76)
						bool tmp27 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(76)
						if ((tmp27)){
							HX_STACK_LINE(76)
							::nape::phys::Body tmp28 = _this;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(76)
							_this1->push(tmp28);
						}
						else{
							HX_STACK_LINE(76)
							::nape::phys::Body tmp28 = _this;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(76)
							_this1->unshift(tmp28);
						}
					}
				}
			}
			HX_STACK_LINE(76)
			::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(76)
			bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(76)
			if ((tmp10)){
				HX_STACK_LINE(76)
				Dynamic();
			}
			else{
				HX_STACK_LINE(76)
				::zpp_nape::space::ZPP_Space tmp11 = _this->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(76)
				tmp11->outer;
			}
		}
		HX_STACK_LINE(77)
		::luxe::physics::nape::DebugDraw tmp6 = ::World_obj::debugdraw;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		::nape::phys::Body tmp7 = this->map_static;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		tmp6->add(tmp7,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,generate_collision,(void))

Void World_obj::generate_objects( ){
{
		HX_STACK_FRAME("World","generate_objects",0x7ab77c46,"World.generate_objects","World.hx",82,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		::luxe::importers::tiled::TiledMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		Array< ::Dynamic > _g1 = tmp->tiledmap_data->object_groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(82)
		while((true)){
			HX_STACK_LINE(82)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(82)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(82)
			if ((tmp2)){
				HX_STACK_LINE(82)
				break;
			}
			HX_STACK_LINE(82)
			::luxe::importers::tiled::TiledObjectGroup tmp3 = _g1->__get(_g).StaticCast< ::luxe::importers::tiled::TiledObjectGroup >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			::luxe::importers::tiled::TiledObjectGroup object_group = tmp3;		HX_STACK_VAR(object_group,"object_group");
			HX_STACK_LINE(82)
			++(_g);
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(84)
				Array< ::Dynamic > _g3 = object_group->objects;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(84)
				while((true)){
					HX_STACK_LINE(84)
					bool tmp4 = (_g2 < _g3->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(84)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(84)
					if ((tmp5)){
						HX_STACK_LINE(84)
						break;
					}
					HX_STACK_LINE(84)
					::luxe::importers::tiled::TiledObject tmp6 = _g3->__get(_g2).StaticCast< ::luxe::importers::tiled::TiledObject >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(84)
					::luxe::importers::tiled::TiledObject object = tmp6;		HX_STACK_VAR(object,"object");
					HX_STACK_LINE(84)
					++(_g2);
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						::String _g4 = object->type;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(86)
						::String tmp7 = _g4;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(86)
						::String _switch_1 = (tmp7);
						if (  ( _switch_1==HX_HCSTRING("Spawn","\x1b","\x0e","\x94","\x14"))){
							HX_STACK_LINE(89)
							::String tmp8 = object->properties->get(HX_HCSTRING("Creature","\xdf","\x61","\xb2","\x05"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(89)
							::String creature_name = tmp8;		HX_STACK_VAR(creature_name,"creature_name");
							HX_STACK_LINE(90)
							::phoenix::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(90)
							{
								HX_STACK_LINE(90)
								::phoenix::Vector _this = object->pos;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(90)
								::phoenix::Vector tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(90)
								{
									HX_STACK_LINE(90)
									::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(object->width,object->height,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(90)
									::phoenix::Vector _this1 = tmp11;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(90)
									{
										HX_STACK_LINE(90)
										Float tmp12 = (Float(_this1->x) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(90)
										Float _x = tmp12;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(90)
										Float tmp13 = (Float(_this1->y) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(90)
										Float _y = tmp13;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(90)
										Float tmp14 = (Float(_this1->z) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(90)
										Float _z = tmp14;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(90)
										bool prev = _this1->ignore_listeners;		HX_STACK_VAR(prev,"prev");
										HX_STACK_LINE(90)
										_this1->ignore_listeners = true;
										HX_STACK_LINE(90)
										{
											HX_STACK_LINE(90)
											_this1->x = _x;
											HX_STACK_LINE(90)
											bool tmp15 = _this1->_construct;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(90)
											if ((tmp15)){
												HX_STACK_LINE(90)
												_this1->x;
											}
											else{
												HX_STACK_LINE(90)
												bool tmp16 = (_this1->listen_x != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(90)
												bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(90)
												if ((tmp16)){
													HX_STACK_LINE(90)
													bool tmp18 = _this1->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(90)
													bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(90)
													tmp17 = !(tmp19);
												}
												else{
													HX_STACK_LINE(90)
													tmp17 = false;
												}
												HX_STACK_LINE(90)
												if ((tmp17)){
													HX_STACK_LINE(90)
													Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(90)
													_this1->listen_x(tmp18);
												}
												HX_STACK_LINE(90)
												_this1->x;
											}
										}
										HX_STACK_LINE(90)
										{
											HX_STACK_LINE(90)
											_this1->y = _y;
											HX_STACK_LINE(90)
											bool tmp15 = _this1->_construct;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(90)
											if ((tmp15)){
												HX_STACK_LINE(90)
												_this1->y;
											}
											else{
												HX_STACK_LINE(90)
												bool tmp16 = (_this1->listen_y != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(90)
												bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(90)
												if ((tmp16)){
													HX_STACK_LINE(90)
													bool tmp18 = _this1->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(90)
													bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(90)
													tmp17 = !(tmp19);
												}
												else{
													HX_STACK_LINE(90)
													tmp17 = false;
												}
												HX_STACK_LINE(90)
												if ((tmp17)){
													HX_STACK_LINE(90)
													Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(90)
													_this1->listen_y(tmp18);
												}
												HX_STACK_LINE(90)
												_this1->y;
											}
										}
										HX_STACK_LINE(90)
										{
											HX_STACK_LINE(90)
											_this1->z = _z;
											HX_STACK_LINE(90)
											bool tmp15 = _this1->_construct;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(90)
											if ((tmp15)){
												HX_STACK_LINE(90)
												_this1->z;
											}
											else{
												HX_STACK_LINE(90)
												bool tmp16 = (_this1->listen_z != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(90)
												bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(90)
												if ((tmp16)){
													HX_STACK_LINE(90)
													bool tmp18 = _this1->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(90)
													bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(90)
													tmp17 = !(tmp19);
												}
												else{
													HX_STACK_LINE(90)
													tmp17 = false;
												}
												HX_STACK_LINE(90)
												if ((tmp17)){
													HX_STACK_LINE(90)
													Float tmp18 = _z;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(90)
													_this1->listen_z(tmp18);
												}
												HX_STACK_LINE(90)
												_this1->z;
											}
										}
										HX_STACK_LINE(90)
										_this1->ignore_listeners = prev;
										HX_STACK_LINE(90)
										bool tmp15 = (_this1->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(90)
										bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(90)
										if ((tmp15)){
											HX_STACK_LINE(90)
											bool tmp17 = _this1->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(90)
											bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(90)
											tmp16 = !(tmp18);
										}
										else{
											HX_STACK_LINE(90)
											tmp16 = false;
										}
										HX_STACK_LINE(90)
										if ((tmp16)){
											HX_STACK_LINE(90)
											Float tmp17 = _this1->x;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(90)
											_this1->listen_x(tmp17);
										}
										HX_STACK_LINE(90)
										bool tmp17 = (_this1->listen_y != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(90)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(90)
										if ((tmp17)){
											HX_STACK_LINE(90)
											bool tmp19 = _this1->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(90)
											bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(90)
											tmp18 = !(tmp20);
										}
										else{
											HX_STACK_LINE(90)
											tmp18 = false;
										}
										HX_STACK_LINE(90)
										if ((tmp18)){
											HX_STACK_LINE(90)
											Float tmp19 = _this1->y;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(90)
											_this1->listen_y(tmp19);
										}
										HX_STACK_LINE(90)
										bool tmp19 = (_this1->listen_z != null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(90)
										bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(90)
										if ((tmp19)){
											HX_STACK_LINE(90)
											bool tmp21 = _this1->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(90)
											bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(90)
											tmp20 = !(tmp22);
										}
										else{
											HX_STACK_LINE(90)
											tmp20 = false;
										}
										HX_STACK_LINE(90)
										if ((tmp20)){
											HX_STACK_LINE(90)
											Float tmp21 = _this1->z;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(90)
											_this1->listen_z(tmp21);
										}
										HX_STACK_LINE(90)
										_this1;
									}
									HX_STACK_LINE(90)
									tmp10 = _this1;
								}
								HX_STACK_LINE(90)
								::phoenix::Vector other = tmp10;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(90)
								{
									HX_STACK_LINE(90)
									bool tmp11 = (other == null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(90)
									if ((tmp11)){
										HX_STACK_LINE(90)
										::String tmp12 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(90)
										::luxe::DebugError tmp13 = ::luxe::DebugError_obj::null_assertion(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(90)
										HX_STACK_DO_THROW(tmp13);
									}
								}
								HX_STACK_LINE(90)
								{
									HX_STACK_LINE(90)
									Float tmp11 = (_this->x + other->x);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(90)
									Float _x = tmp11;		HX_STACK_VAR(_x,"_x");
									HX_STACK_LINE(90)
									Float tmp12 = (_this->y + other->y);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(90)
									Float _y = tmp12;		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(90)
									Float tmp13 = (_this->z + other->z);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(90)
									Float _z = tmp13;		HX_STACK_VAR(_z,"_z");
									HX_STACK_LINE(90)
									bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
									HX_STACK_LINE(90)
									_this->ignore_listeners = true;
									HX_STACK_LINE(90)
									{
										HX_STACK_LINE(90)
										_this->x = _x;
										HX_STACK_LINE(90)
										bool tmp14 = _this->_construct;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(90)
										if ((tmp14)){
											HX_STACK_LINE(90)
											_this->x;
										}
										else{
											HX_STACK_LINE(90)
											bool tmp15 = (_this->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(90)
											bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(90)
											if ((tmp15)){
												HX_STACK_LINE(90)
												bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(90)
												bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(90)
												tmp16 = !(tmp18);
											}
											else{
												HX_STACK_LINE(90)
												tmp16 = false;
											}
											HX_STACK_LINE(90)
											if ((tmp16)){
												HX_STACK_LINE(90)
												Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(90)
												_this->listen_x(tmp17);
											}
											HX_STACK_LINE(90)
											_this->x;
										}
									}
									HX_STACK_LINE(90)
									{
										HX_STACK_LINE(90)
										_this->y = _y;
										HX_STACK_LINE(90)
										bool tmp14 = _this->_construct;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(90)
										if ((tmp14)){
											HX_STACK_LINE(90)
											_this->y;
										}
										else{
											HX_STACK_LINE(90)
											bool tmp15 = (_this->listen_y != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(90)
											bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(90)
											if ((tmp15)){
												HX_STACK_LINE(90)
												bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(90)
												bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(90)
												tmp16 = !(tmp18);
											}
											else{
												HX_STACK_LINE(90)
												tmp16 = false;
											}
											HX_STACK_LINE(90)
											if ((tmp16)){
												HX_STACK_LINE(90)
												Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(90)
												_this->listen_y(tmp17);
											}
											HX_STACK_LINE(90)
											_this->y;
										}
									}
									HX_STACK_LINE(90)
									{
										HX_STACK_LINE(90)
										_this->z = _z;
										HX_STACK_LINE(90)
										bool tmp14 = _this->_construct;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(90)
										if ((tmp14)){
											HX_STACK_LINE(90)
											_this->z;
										}
										else{
											HX_STACK_LINE(90)
											bool tmp15 = (_this->listen_z != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(90)
											bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(90)
											if ((tmp15)){
												HX_STACK_LINE(90)
												bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(90)
												bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(90)
												tmp16 = !(tmp18);
											}
											else{
												HX_STACK_LINE(90)
												tmp16 = false;
											}
											HX_STACK_LINE(90)
											if ((tmp16)){
												HX_STACK_LINE(90)
												Float tmp17 = _z;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(90)
												_this->listen_z(tmp17);
											}
											HX_STACK_LINE(90)
											_this->z;
										}
									}
									HX_STACK_LINE(90)
									_this->ignore_listeners = prev;
									HX_STACK_LINE(90)
									bool tmp14 = (_this->listen_x != null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(90)
									bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(90)
									if ((tmp14)){
										HX_STACK_LINE(90)
										bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(90)
										bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(90)
										tmp15 = !(tmp17);
									}
									else{
										HX_STACK_LINE(90)
										tmp15 = false;
									}
									HX_STACK_LINE(90)
									if ((tmp15)){
										HX_STACK_LINE(90)
										Float tmp16 = _this->x;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(90)
										_this->listen_x(tmp16);
									}
									HX_STACK_LINE(90)
									bool tmp16 = (_this->listen_y != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(90)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(90)
									if ((tmp16)){
										HX_STACK_LINE(90)
										bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(90)
										bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(90)
										tmp17 = !(tmp19);
									}
									else{
										HX_STACK_LINE(90)
										tmp17 = false;
									}
									HX_STACK_LINE(90)
									if ((tmp17)){
										HX_STACK_LINE(90)
										Float tmp18 = _this->y;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(90)
										_this->listen_y(tmp18);
									}
									HX_STACK_LINE(90)
									bool tmp18 = (_this->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(90)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(90)
									if ((tmp18)){
										HX_STACK_LINE(90)
										bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(90)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(90)
										tmp19 = !(tmp21);
									}
									else{
										HX_STACK_LINE(90)
										tmp19 = false;
									}
									HX_STACK_LINE(90)
									if ((tmp19)){
										HX_STACK_LINE(90)
										Float tmp20 = _this->z;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(90)
										_this->listen_z(tmp20);
									}
									HX_STACK_LINE(90)
									_this;
								}
								HX_STACK_LINE(90)
								tmp9 = _this;
							}
							HX_STACK_LINE(90)
							::phoenix::Vector body_pos = tmp9;		HX_STACK_VAR(body_pos,"body_pos");
							HX_STACK_LINE(92)
							::String tmp10 = (HX_HCSTRING("creatures.","\xda","\x37","\xc5","\xa9") + creature_name);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(92)
							::hx::Class tmp11 = ::Type_obj::resolveClass(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(91)
							::Creature tmp12 = ::Type_obj::createInstance(tmp11,cpp::ArrayBase_obj::__new().Add(body_pos).Add(object->name));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(91)
							::Creature creature = tmp12;		HX_STACK_VAR(creature,"creature");
							HX_STACK_LINE(94)
							::hx::Class tmp13 = ::Type_obj::resolveClass(HX_HCSTRING("creatures.Player","\xdb","\xf6","\x9c","\xbd"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(94)
							Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("World.hx","\xcc","\xa7","\x25","\x7e"),94,HX_HCSTRING("World","\x32","\x06","\x92","\x61"),HX_HCSTRING("generate_objects","\x8a","\xde","\x9b","\x49"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(94)
							::haxe::Log_obj::trace(tmp13,tmp14);
							HX_STACK_LINE(95)
							bool tmp15 = (creature_name == HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(95)
							if ((tmp15)){
								HX_STACK_LINE(97)
								this->player = creature;
							}
						}
						else if (  ( _switch_1==HX_HCSTRING("Dynamic","\x5f","\xc7","\x66","\x03"))){
							HX_STACK_LINE(101)
							::phoenix::Vector tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(101)
							{
								HX_STACK_LINE(101)
								::phoenix::Vector _this = object->pos;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(101)
								::phoenix::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(101)
								{
									HX_STACK_LINE(101)
									::phoenix::Vector tmp10 = ::phoenix::Vector_obj::__new(object->width,object->height,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(101)
									::phoenix::Vector _this1 = tmp10;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(101)
									{
										HX_STACK_LINE(101)
										Float tmp11 = (Float(_this1->x) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(101)
										Float _x = tmp11;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(101)
										Float tmp12 = (Float(_this1->y) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(101)
										Float _y = tmp12;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(101)
										Float tmp13 = (Float(_this1->z) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(101)
										Float _z = tmp13;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(101)
										bool prev = _this1->ignore_listeners;		HX_STACK_VAR(prev,"prev");
										HX_STACK_LINE(101)
										_this1->ignore_listeners = true;
										HX_STACK_LINE(101)
										{
											HX_STACK_LINE(101)
											_this1->x = _x;
											HX_STACK_LINE(101)
											bool tmp14 = _this1->_construct;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(101)
											if ((tmp14)){
												HX_STACK_LINE(101)
												_this1->x;
											}
											else{
												HX_STACK_LINE(101)
												bool tmp15 = (_this1->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(101)
												bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(101)
												if ((tmp15)){
													HX_STACK_LINE(101)
													bool tmp17 = _this1->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(101)
													bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(101)
													tmp16 = !(tmp18);
												}
												else{
													HX_STACK_LINE(101)
													tmp16 = false;
												}
												HX_STACK_LINE(101)
												if ((tmp16)){
													HX_STACK_LINE(101)
													Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(101)
													_this1->listen_x(tmp17);
												}
												HX_STACK_LINE(101)
												_this1->x;
											}
										}
										HX_STACK_LINE(101)
										{
											HX_STACK_LINE(101)
											_this1->y = _y;
											HX_STACK_LINE(101)
											bool tmp14 = _this1->_construct;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(101)
											if ((tmp14)){
												HX_STACK_LINE(101)
												_this1->y;
											}
											else{
												HX_STACK_LINE(101)
												bool tmp15 = (_this1->listen_y != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(101)
												bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(101)
												if ((tmp15)){
													HX_STACK_LINE(101)
													bool tmp17 = _this1->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(101)
													bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(101)
													tmp16 = !(tmp18);
												}
												else{
													HX_STACK_LINE(101)
													tmp16 = false;
												}
												HX_STACK_LINE(101)
												if ((tmp16)){
													HX_STACK_LINE(101)
													Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(101)
													_this1->listen_y(tmp17);
												}
												HX_STACK_LINE(101)
												_this1->y;
											}
										}
										HX_STACK_LINE(101)
										{
											HX_STACK_LINE(101)
											_this1->z = _z;
											HX_STACK_LINE(101)
											bool tmp14 = _this1->_construct;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(101)
											if ((tmp14)){
												HX_STACK_LINE(101)
												_this1->z;
											}
											else{
												HX_STACK_LINE(101)
												bool tmp15 = (_this1->listen_z != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(101)
												bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(101)
												if ((tmp15)){
													HX_STACK_LINE(101)
													bool tmp17 = _this1->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(101)
													bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(101)
													tmp16 = !(tmp18);
												}
												else{
													HX_STACK_LINE(101)
													tmp16 = false;
												}
												HX_STACK_LINE(101)
												if ((tmp16)){
													HX_STACK_LINE(101)
													Float tmp17 = _z;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(101)
													_this1->listen_z(tmp17);
												}
												HX_STACK_LINE(101)
												_this1->z;
											}
										}
										HX_STACK_LINE(101)
										_this1->ignore_listeners = prev;
										HX_STACK_LINE(101)
										bool tmp14 = (_this1->listen_x != null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(101)
										bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(101)
										if ((tmp14)){
											HX_STACK_LINE(101)
											bool tmp16 = _this1->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(101)
											bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(101)
											tmp15 = !(tmp17);
										}
										else{
											HX_STACK_LINE(101)
											tmp15 = false;
										}
										HX_STACK_LINE(101)
										if ((tmp15)){
											HX_STACK_LINE(101)
											Float tmp16 = _this1->x;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(101)
											_this1->listen_x(tmp16);
										}
										HX_STACK_LINE(101)
										bool tmp16 = (_this1->listen_y != null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(101)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(101)
										if ((tmp16)){
											HX_STACK_LINE(101)
											bool tmp18 = _this1->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(101)
											bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(101)
											tmp17 = !(tmp19);
										}
										else{
											HX_STACK_LINE(101)
											tmp17 = false;
										}
										HX_STACK_LINE(101)
										if ((tmp17)){
											HX_STACK_LINE(101)
											Float tmp18 = _this1->y;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(101)
											_this1->listen_y(tmp18);
										}
										HX_STACK_LINE(101)
										bool tmp18 = (_this1->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(101)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(101)
										if ((tmp18)){
											HX_STACK_LINE(101)
											bool tmp20 = _this1->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(101)
											bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(101)
											tmp19 = !(tmp21);
										}
										else{
											HX_STACK_LINE(101)
											tmp19 = false;
										}
										HX_STACK_LINE(101)
										if ((tmp19)){
											HX_STACK_LINE(101)
											Float tmp20 = _this1->z;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(101)
											_this1->listen_z(tmp20);
										}
										HX_STACK_LINE(101)
										_this1;
									}
									HX_STACK_LINE(101)
									tmp9 = _this1;
								}
								HX_STACK_LINE(101)
								::phoenix::Vector other = tmp9;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(101)
								{
									HX_STACK_LINE(101)
									bool tmp10 = (other == null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(101)
									if ((tmp10)){
										HX_STACK_LINE(101)
										::String tmp11 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(101)
										::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(101)
										HX_STACK_DO_THROW(tmp12);
									}
								}
								HX_STACK_LINE(101)
								{
									HX_STACK_LINE(101)
									Float tmp10 = (_this->x + other->x);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(101)
									Float _x = tmp10;		HX_STACK_VAR(_x,"_x");
									HX_STACK_LINE(101)
									Float tmp11 = (_this->y + other->y);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(101)
									Float _y = tmp11;		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(101)
									Float tmp12 = (_this->z + other->z);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(101)
									Float _z = tmp12;		HX_STACK_VAR(_z,"_z");
									HX_STACK_LINE(101)
									bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
									HX_STACK_LINE(101)
									_this->ignore_listeners = true;
									HX_STACK_LINE(101)
									{
										HX_STACK_LINE(101)
										_this->x = _x;
										HX_STACK_LINE(101)
										bool tmp13 = _this->_construct;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(101)
										if ((tmp13)){
											HX_STACK_LINE(101)
											_this->x;
										}
										else{
											HX_STACK_LINE(101)
											bool tmp14 = (_this->listen_x != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(101)
											bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(101)
											if ((tmp14)){
												HX_STACK_LINE(101)
												bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(101)
												bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(101)
												tmp15 = !(tmp17);
											}
											else{
												HX_STACK_LINE(101)
												tmp15 = false;
											}
											HX_STACK_LINE(101)
											if ((tmp15)){
												HX_STACK_LINE(101)
												Float tmp16 = _x;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(101)
												_this->listen_x(tmp16);
											}
											HX_STACK_LINE(101)
											_this->x;
										}
									}
									HX_STACK_LINE(101)
									{
										HX_STACK_LINE(101)
										_this->y = _y;
										HX_STACK_LINE(101)
										bool tmp13 = _this->_construct;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(101)
										if ((tmp13)){
											HX_STACK_LINE(101)
											_this->y;
										}
										else{
											HX_STACK_LINE(101)
											bool tmp14 = (_this->listen_y != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(101)
											bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(101)
											if ((tmp14)){
												HX_STACK_LINE(101)
												bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(101)
												bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(101)
												tmp15 = !(tmp17);
											}
											else{
												HX_STACK_LINE(101)
												tmp15 = false;
											}
											HX_STACK_LINE(101)
											if ((tmp15)){
												HX_STACK_LINE(101)
												Float tmp16 = _y;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(101)
												_this->listen_y(tmp16);
											}
											HX_STACK_LINE(101)
											_this->y;
										}
									}
									HX_STACK_LINE(101)
									{
										HX_STACK_LINE(101)
										_this->z = _z;
										HX_STACK_LINE(101)
										bool tmp13 = _this->_construct;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(101)
										if ((tmp13)){
											HX_STACK_LINE(101)
											_this->z;
										}
										else{
											HX_STACK_LINE(101)
											bool tmp14 = (_this->listen_z != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(101)
											bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(101)
											if ((tmp14)){
												HX_STACK_LINE(101)
												bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(101)
												bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(101)
												tmp15 = !(tmp17);
											}
											else{
												HX_STACK_LINE(101)
												tmp15 = false;
											}
											HX_STACK_LINE(101)
											if ((tmp15)){
												HX_STACK_LINE(101)
												Float tmp16 = _z;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(101)
												_this->listen_z(tmp16);
											}
											HX_STACK_LINE(101)
											_this->z;
										}
									}
									HX_STACK_LINE(101)
									_this->ignore_listeners = prev;
									HX_STACK_LINE(101)
									bool tmp13 = (_this->listen_x != null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(101)
									bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(101)
									if ((tmp13)){
										HX_STACK_LINE(101)
										bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(101)
										bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(101)
										tmp14 = !(tmp16);
									}
									else{
										HX_STACK_LINE(101)
										tmp14 = false;
									}
									HX_STACK_LINE(101)
									if ((tmp14)){
										HX_STACK_LINE(101)
										Float tmp15 = _this->x;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(101)
										_this->listen_x(tmp15);
									}
									HX_STACK_LINE(101)
									bool tmp15 = (_this->listen_y != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(101)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(101)
									if ((tmp15)){
										HX_STACK_LINE(101)
										bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(101)
										bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(101)
										tmp16 = !(tmp18);
									}
									else{
										HX_STACK_LINE(101)
										tmp16 = false;
									}
									HX_STACK_LINE(101)
									if ((tmp16)){
										HX_STACK_LINE(101)
										Float tmp17 = _this->y;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(101)
										_this->listen_y(tmp17);
									}
									HX_STACK_LINE(101)
									bool tmp17 = (_this->listen_z != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(101)
									bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(101)
									if ((tmp17)){
										HX_STACK_LINE(101)
										bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(101)
										bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(101)
										tmp18 = !(tmp20);
									}
									else{
										HX_STACK_LINE(101)
										tmp18 = false;
									}
									HX_STACK_LINE(101)
									if ((tmp18)){
										HX_STACK_LINE(101)
										Float tmp19 = _this->z;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(101)
										_this->listen_z(tmp19);
									}
									HX_STACK_LINE(101)
									_this;
								}
								HX_STACK_LINE(101)
								tmp8 = _this;
							}
							HX_STACK_LINE(101)
							::phoenix::Vector body_pos = tmp8;		HX_STACK_VAR(body_pos,"body_pos");
							HX_STACK_LINE(102)
							::nape::phys::BodyType tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::nape::phys::BodyType tmp10 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(102)
								bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(102)
								if ((tmp11)){
									HX_STACK_LINE(102)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(102)
									::nape::phys::BodyType tmp12 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(102)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp12;
									HX_STACK_LINE(102)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(102)
								tmp9 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
							}
							HX_STACK_LINE(102)
							::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(body_pos->x,body_pos->y);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(102)
							::nape::phys::Body tmp11 = ::nape::phys::Body_obj::__new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(102)
							::nape::phys::Body body = tmp11;		HX_STACK_VAR(body,"body");
							HX_STACK_LINE(103)
							{
								HX_STACK_LINE(103)
								::nape::shape::ShapeList tmp12 = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(103)
								::nape::shape::ShapeList _this = tmp12;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(103)
								int tmp13 = object->width;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(103)
								int tmp14 = object->height;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(103)
								::nape::shape::Polygon tmp15 = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::box(tmp13,tmp14,null()),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(103)
								::nape::shape::Shape obj = tmp15;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(103)
								bool tmp16 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(103)
								if ((tmp16)){
									HX_STACK_LINE(103)
									::nape::shape::Shape tmp17 = obj;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(103)
									_this->push(tmp17);
								}
								else{
									HX_STACK_LINE(103)
									::nape::shape::Shape tmp17 = obj;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(103)
									_this->unshift(tmp17);
								}
							}
							HX_STACK_LINE(104)
							{
								HX_STACK_LINE(104)
								::luxe::Physics tmp12 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(104)
								::nape::space::Space tmp13 = tmp12->nape->space;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(104)
								::nape::space::Space space = tmp13;		HX_STACK_VAR(space,"space");
								HX_STACK_LINE(104)
								{
									HX_STACK_LINE(104)
									::zpp_nape::phys::ZPP_Compound tmp14 = body->zpp_inner->compound;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(104)
									bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(104)
									if ((tmp15)){
										HX_STACK_LINE(104)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set","\x2f","\x88","\x46","\xff"));
									}
									HX_STACK_LINE(104)
									body->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
									HX_STACK_LINE(104)
									bool tmp16 = body->zpp_inner->world;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(104)
									if ((tmp16)){
										HX_STACK_LINE(104)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
									}
									HX_STACK_LINE(104)
									::zpp_nape::space::ZPP_Space tmp17 = body->zpp_inner->space;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(104)
									bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(104)
									::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(104)
									if ((tmp18)){
										HX_STACK_LINE(104)
										tmp19 = null();
									}
									else{
										HX_STACK_LINE(104)
										::zpp_nape::space::ZPP_Space tmp20 = body->zpp_inner->space;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(104)
										tmp19 = tmp20->outer;
									}
									HX_STACK_LINE(104)
									::nape::space::Space tmp20 = space;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(104)
									bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(104)
									if ((tmp21)){
										HX_STACK_LINE(104)
										::zpp_nape::space::ZPP_Space tmp22 = body->zpp_inner->space;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(104)
										bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(104)
										::nape::space::Space tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(104)
										if ((tmp23)){
											HX_STACK_LINE(104)
											tmp24 = null();
										}
										else{
											HX_STACK_LINE(104)
											::zpp_nape::space::ZPP_Space tmp25 = body->zpp_inner->space;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(104)
											tmp24 = tmp25->outer;
										}
										HX_STACK_LINE(104)
										bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(104)
										if ((tmp25)){
											HX_STACK_LINE(104)
											::zpp_nape::space::ZPP_Component tmp26 = body->zpp_inner->component;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(104)
											tmp26->woken = false;
										}
										HX_STACK_LINE(104)
										::zpp_nape::space::ZPP_Space tmp26 = body->zpp_inner->space;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(104)
										bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(104)
										::nape::space::Space tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(104)
										if ((tmp27)){
											HX_STACK_LINE(104)
											tmp28 = null();
										}
										else{
											HX_STACK_LINE(104)
											::zpp_nape::space::ZPP_Space tmp29 = body->zpp_inner->space;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(104)
											tmp28 = tmp29->outer;
										}
										HX_STACK_LINE(104)
										bool tmp29 = (tmp28 != null());		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(104)
										if ((tmp29)){
											HX_STACK_LINE(104)
											::zpp_nape::space::ZPP_Space tmp30 = body->zpp_inner->space;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(104)
											bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(104)
											::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(104)
											if ((tmp31)){
												HX_STACK_LINE(104)
												tmp32 = null();
											}
											else{
												HX_STACK_LINE(104)
												::zpp_nape::space::ZPP_Space tmp33 = body->zpp_inner->space;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(104)
												tmp32 = tmp33->outer;
											}
											HX_STACK_LINE(104)
											::nape::phys::BodyList tmp33 = tmp32->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(104)
											::nape::phys::Body tmp34 = body;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(104)
											tmp33->remove(tmp34);
										}
										HX_STACK_LINE(104)
										bool tmp30 = (space != null());		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(104)
										if ((tmp30)){
											HX_STACK_LINE(104)
											::nape::phys::BodyList tmp31 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(104)
											::nape::phys::BodyList _this = tmp31;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(104)
											bool tmp32 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(104)
											if ((tmp32)){
												HX_STACK_LINE(104)
												::nape::phys::Body tmp33 = body;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(104)
												_this->push(tmp33);
											}
											else{
												HX_STACK_LINE(104)
												::nape::phys::Body tmp33 = body;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(104)
												_this->unshift(tmp33);
											}
										}
									}
								}
								HX_STACK_LINE(104)
								::zpp_nape::space::ZPP_Space tmp14 = body->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(104)
								bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(104)
								if ((tmp15)){
									HX_STACK_LINE(104)
									Dynamic();
								}
								else{
									HX_STACK_LINE(104)
									::zpp_nape::space::ZPP_Space tmp16 = body->zpp_inner->space;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(104)
									tmp16->outer;
								}
							}
							HX_STACK_LINE(105)
							::luxe::physics::nape::DebugDraw tmp12 = ::World_obj::debugdraw;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(105)
							::nape::phys::Body tmp13 = body;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(105)
							tmp12->add(tmp13,null(),null());
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
		HX_STACK_FRAME("World","reset",0xc63e9a93,"World.reset","World.hx",112,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		::luxe::physics::nape::DebugDraw tmp = ::World_obj::debugdraw;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		if ((tmp1)){
			HX_STACK_LINE(115)
			::luxe::physics::nape::DebugDraw tmp2 = ::World_obj::debugdraw;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(115)
			tmp2->destroy();
			HX_STACK_LINE(116)
			::World_obj::debugdraw = null();
		}
		HX_STACK_LINE(118)
		::luxe::physics::nape::DebugDraw tmp2 = ::luxe::physics::nape::DebugDraw_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		::World_obj::debugdraw = tmp2;
		HX_STACK_LINE(119)
		::luxe::physics::nape::DebugDraw tmp3 = ::World_obj::debugdraw;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		::luxe::Physics tmp4 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		tmp4->nape->debugdraw = tmp3;
		HX_STACK_LINE(120)
		::luxe::Physics tmp5 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		tmp5->nape->set_draw(false);
		HX_STACK_LINE(122)
		this->generate_collision();
		HX_STACK_LINE(123)
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

