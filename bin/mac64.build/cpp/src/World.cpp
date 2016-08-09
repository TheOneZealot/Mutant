#include <hxcpp.h>

#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Physics
#include <Physics.h>
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
#ifndef INCLUDED_creatures_Scientist
#include <creatures/Scientist.h>
#endif
#ifndef INCLUDED_creatures_Soldier
#include <creatures/Soldier.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
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
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
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
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_luxe_components_physics_nape_BoxCollider
#include <luxe/components/physics/nape/BoxCollider.h>
#endif
#ifndef INCLUDED_luxe_components_physics_nape_NapeBody
#include <luxe/components/physics/nape/NapeBody.h>
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
#ifndef INCLUDED_nape_shape_ShapeIterator
#include <nape/shape/ShapeIterator.h>
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
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
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
HX_STACK_FRAME("World","new",0xe2d1a824,"World.new","World.hx",33,0x7e25a7cc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	::World _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(34)
	hx::ClassOf< ::creatures::Player >();
	HX_STACK_LINE(35)
	hx::ClassOf< ::creatures::Soldier >();
	HX_STACK_LINE(36)
	hx::ClassOf< ::creatures::Scientist >();
	HX_STACK_LINE(38)
	this->reset();
	HX_STACK_LINE(40)
	::luxe::Events tmp = ::Luxe_obj::events;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::World,_g)
	int __ArgCount() const { return 1; }
	Void run(Dynamic _){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","World.hx",40,0x7e25a7cc)
		HX_STACK_ARG(_,"_")
		{
			HX_STACK_LINE(40)
			_g->reset();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(40)
	tmp->listen(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), Dynamic(new _Function_1_1(_g)));
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
		::nape::phys::Body tmp = this->map_static;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		if ((tmp1)){
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				::nape::phys::Body tmp2 = this->map_static;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(47)
				::nape::phys::Body _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					::zpp_nape::phys::ZPP_Compound tmp3 = _this->zpp_inner->compound;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(47)
					bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(47)
					if ((tmp4)){
						HX_STACK_LINE(47)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set","\x2f","\x88","\x46","\xff"));
					}
					HX_STACK_LINE(47)
					_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
					HX_STACK_LINE(47)
					bool tmp5 = _this->zpp_inner->world;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(47)
					if ((tmp5)){
						HX_STACK_LINE(47)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
					}
					HX_STACK_LINE(47)
					::zpp_nape::space::ZPP_Space tmp6 = _this->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(47)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(47)
					::nape::space::Space tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(47)
					if ((tmp7)){
						HX_STACK_LINE(47)
						tmp8 = null();
					}
					else{
						HX_STACK_LINE(47)
						::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(47)
						tmp8 = tmp9->outer;
					}
					HX_STACK_LINE(47)
					bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(47)
					if ((tmp9)){
						HX_STACK_LINE(47)
						::zpp_nape::space::ZPP_Space tmp10 = _this->zpp_inner->space;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(47)
						bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(47)
						::nape::space::Space tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(47)
						if ((tmp11)){
							HX_STACK_LINE(47)
							tmp12 = null();
						}
						else{
							HX_STACK_LINE(47)
							::zpp_nape::space::ZPP_Space tmp13 = _this->zpp_inner->space;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(47)
							tmp12 = tmp13->outer;
						}
						HX_STACK_LINE(47)
						bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(47)
						if ((tmp13)){
							HX_STACK_LINE(47)
							::zpp_nape::space::ZPP_Component tmp14 = _this->zpp_inner->component;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(47)
							tmp14->woken = false;
						}
						HX_STACK_LINE(47)
						::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(47)
						bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(47)
						::nape::space::Space tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(47)
						if ((tmp15)){
							HX_STACK_LINE(47)
							tmp16 = null();
						}
						else{
							HX_STACK_LINE(47)
							::zpp_nape::space::ZPP_Space tmp17 = _this->zpp_inner->space;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(47)
							tmp16 = tmp17->outer;
						}
						HX_STACK_LINE(47)
						bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(47)
						if ((tmp17)){
							HX_STACK_LINE(47)
							::zpp_nape::space::ZPP_Space tmp18 = _this->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(47)
							bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(47)
							::nape::space::Space tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(47)
							if ((tmp19)){
								HX_STACK_LINE(47)
								tmp20 = null();
							}
							else{
								HX_STACK_LINE(47)
								::zpp_nape::space::ZPP_Space tmp21 = _this->zpp_inner->space;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(47)
								tmp20 = tmp21->outer;
							}
							HX_STACK_LINE(47)
							::nape::phys::BodyList tmp21 = tmp20->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(47)
							::nape::phys::Body tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(47)
							tmp21->remove(tmp22);
						}
						HX_STACK_LINE(47)
						bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(47)
						if ((tmp18)){
							HX_STACK_LINE(47)
							::zpp_nape::space::ZPP_Space tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(47)
							::nape::phys::BodyList _this1 = tmp19->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(47)
							bool tmp20 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(47)
							if ((tmp20)){
								HX_STACK_LINE(47)
								::nape::phys::Body tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(47)
								_this1->push(tmp21);
							}
							else{
								HX_STACK_LINE(47)
								::nape::phys::Body tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(47)
								_this1->unshift(tmp21);
							}
						}
					}
				}
				HX_STACK_LINE(47)
				::zpp_nape::space::ZPP_Space tmp3 = _this->zpp_inner->space;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(47)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(47)
				if ((tmp4)){
					HX_STACK_LINE(47)
					Dynamic();
				}
				else{
					HX_STACK_LINE(47)
					::zpp_nape::space::ZPP_Space tmp5 = _this->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(47)
					tmp5->outer;
				}
			}
			HX_STACK_LINE(48)
			this->map_static = null();
		}
		HX_STACK_LINE(51)
		::luxe::importers::tiled::TiledMap tmp2 = this->map;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		::luxe::tilemaps::TileLayer tmp3 = tmp2->layer(HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		tmp3->visible = false;
		HX_STACK_LINE(52)
		::luxe::importers::tiled::TiledMap tmp4 = this->map;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		::luxe::tilemaps::TileLayer tmp5 = tmp4->layer(HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		Array< ::Dynamic > bounds = tmp5->bounds_fitted();		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(54)
		::nape::phys::BodyType tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::nape::phys::BodyType tmp7 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			if ((tmp8)){
				HX_STACK_LINE(54)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(54)
				::nape::phys::BodyType tmp9 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(54)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = tmp9;
				HX_STACK_LINE(54)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(54)
			tmp6 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
		}
		HX_STACK_LINE(54)
		::nape::phys::Body tmp7 = ::nape::phys::Body_obj::__new(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		this->map_static = tmp7;
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::nape::callbacks::CbTypeList tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				::nape::phys::Body tmp9 = this->map_static;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				::nape::phys::Body _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(55)
				::nape::callbacks::CbTypeList tmp10 = _this->zpp_inner_i->wrap_cbTypes;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(55)
				bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(55)
				if ((tmp11)){
					HX_STACK_LINE(55)
					_this->zpp_inner_i->setupcbTypes();
				}
				HX_STACK_LINE(55)
				tmp8 = _this->zpp_inner_i->wrap_cbTypes;
			}
			HX_STACK_LINE(55)
			::nape::callbacks::CbTypeList _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(55)
			Dynamic tmp9 = ::Physics_obj::types;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(55)
			::nape::callbacks::CbType obj = tmp9->__Field(HX_HCSTRING("terrain","\xb5","\xab","\x17","\x29"), hx::paccDynamic );		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(55)
			bool tmp10 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			if ((tmp10)){
				HX_STACK_LINE(55)
				::nape::callbacks::CbType tmp11 = obj;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(55)
				_this->push(tmp11);
			}
			else{
				HX_STACK_LINE(55)
				::nape::callbacks::CbType tmp11 = obj;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(55)
				_this->unshift(tmp11);
			}
		}
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			while((true)){
				HX_STACK_LINE(56)
				bool tmp8 = (_g < bounds->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(56)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(56)
				if ((tmp9)){
					HX_STACK_LINE(56)
					break;
				}
				HX_STACK_LINE(56)
				::phoenix::Rectangle tmp10 = bounds->__get(_g).StaticCast< ::phoenix::Rectangle >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(56)
				::phoenix::Rectangle rect = tmp10;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(56)
				++(_g);
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					::phoenix::Rectangle _g1 = rect;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(58)
					Float tmp11 = _g1->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(58)
					::luxe::importers::tiled::TiledMap tmp12 = this->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(58)
					int tmp13 = tmp12->tile_width;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(58)
					Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(58)
					_g1->set_x(tmp14);
				}
				HX_STACK_LINE(59)
				{
					HX_STACK_LINE(59)
					::phoenix::Rectangle _g1 = rect;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(59)
					Float tmp11 = _g1->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(59)
					::luxe::importers::tiled::TiledMap tmp12 = this->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(59)
					int tmp13 = tmp12->tile_height;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(59)
					Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(59)
					_g1->set_y(tmp14);
				}
				HX_STACK_LINE(60)
				{
					HX_STACK_LINE(60)
					::phoenix::Rectangle _g1 = rect;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(60)
					Float tmp11 = _g1->w;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(60)
					::luxe::importers::tiled::TiledMap tmp12 = this->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(60)
					int tmp13 = tmp12->tile_width;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(60)
					Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(60)
					_g1->set_w(tmp14);
				}
				HX_STACK_LINE(61)
				{
					HX_STACK_LINE(61)
					::phoenix::Rectangle _g1 = rect;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(61)
					Float tmp11 = _g1->h;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(61)
					::luxe::importers::tiled::TiledMap tmp12 = this->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(61)
					int tmp13 = tmp12->tile_height;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(61)
					Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(61)
					_g1->set_h(tmp14);
				}
				HX_STACK_LINE(62)
				{
					HX_STACK_LINE(62)
					::nape::phys::Body tmp11 = this->map_static;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(62)
					::nape::shape::ShapeList tmp12 = tmp11->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(62)
					::nape::shape::ShapeList _this = tmp12;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(62)
					Float tmp13 = rect->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					Float tmp14 = rect->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(62)
					Float tmp15 = rect->w;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(62)
					Float tmp16 = rect->h;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(62)
					::nape::shape::Polygon tmp17 = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect(tmp13,tmp14,tmp15,tmp16,null()),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(62)
					::nape::shape::Shape obj = tmp17;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(62)
					bool tmp18 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(62)
					if ((tmp18)){
						HX_STACK_LINE(62)
						::nape::shape::Shape tmp19 = obj;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(62)
						_this->push(tmp19);
					}
					else{
						HX_STACK_LINE(62)
						::nape::shape::Shape tmp19 = obj;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(62)
						_this->unshift(tmp19);
					}
				}
			}
		}
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(65)
			::luxe::importers::tiled::TiledMap tmp8 = this->map;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			Array< ::Dynamic > _g1 = tmp8->tiledmap_data->object_groups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(65)
			while((true)){
				HX_STACK_LINE(65)
				bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(65)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(65)
				if ((tmp10)){
					HX_STACK_LINE(65)
					break;
				}
				HX_STACK_LINE(65)
				::luxe::importers::tiled::TiledObjectGroup tmp11 = _g1->__get(_g).StaticCast< ::luxe::importers::tiled::TiledObjectGroup >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(65)
				::luxe::importers::tiled::TiledObjectGroup obj_grp = tmp11;		HX_STACK_VAR(obj_grp,"obj_grp");
				HX_STACK_LINE(65)
				++(_g);
				HX_STACK_LINE(67)
				bool tmp12 = (obj_grp->name != HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(67)
				if ((tmp12)){
					HX_STACK_LINE(67)
					continue;
				}
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(69)
					Array< ::Dynamic > _g3 = obj_grp->objects;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(69)
					while((true)){
						HX_STACK_LINE(69)
						bool tmp13 = (_g2 < _g3->length);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(69)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(69)
						if ((tmp14)){
							HX_STACK_LINE(69)
							break;
						}
						HX_STACK_LINE(69)
						::luxe::importers::tiled::TiledObject tmp15 = _g3->__get(_g2).StaticCast< ::luxe::importers::tiled::TiledObject >();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(69)
						::luxe::importers::tiled::TiledObject obj = tmp15;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(69)
						++(_g2);
						HX_STACK_LINE(71)
						Array< ::Dynamic > verts = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(73)
							Array< ::Dynamic > _g5 = obj->polyobject->points;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(73)
							while((true)){
								HX_STACK_LINE(73)
								bool tmp16 = (_g4 < _g5->length);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(73)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(73)
								if ((tmp17)){
									HX_STACK_LINE(73)
									break;
								}
								HX_STACK_LINE(73)
								::phoenix::Vector tmp18 = _g5->__get(_g4).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(73)
								::phoenix::Vector point = tmp18;		HX_STACK_VAR(point,"point");
								HX_STACK_LINE(73)
								++(_g4);
								HX_STACK_LINE(75)
								::nape::geom::Vec2 tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(75)
								{
									HX_STACK_LINE(75)
									Float tmp20 = point->x;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(75)
									Float tmp21 = obj->pos->x;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(75)
									Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(75)
									Float x = tmp22;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(75)
									Float tmp23 = point->y;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(75)
									Float tmp24 = obj->pos->y;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(75)
									Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(75)
									Float y = tmp25;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(75)
									{
										HX_STACK_LINE(75)
										bool tmp26 = (x != x);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(75)
										bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(75)
										bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(75)
										if ((tmp27)){
											HX_STACK_LINE(75)
											tmp28 = (y != y);
										}
										else{
											HX_STACK_LINE(75)
											tmp28 = true;
										}
										HX_STACK_LINE(75)
										if ((tmp28)){
											HX_STACK_LINE(75)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
										}
										HX_STACK_LINE(75)
										::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(75)
										{
											HX_STACK_LINE(75)
											::nape::geom::Vec2 tmp29 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(75)
											bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(75)
											if ((tmp30)){
												HX_STACK_LINE(75)
												::nape::geom::Vec2 tmp31 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(75)
												ret = tmp31;
											}
											else{
												HX_STACK_LINE(75)
												::nape::geom::Vec2 tmp31 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(75)
												ret = tmp31;
												HX_STACK_LINE(75)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(75)
												ret->zpp_pool = null();
												HX_STACK_LINE(75)
												ret->zpp_disp = false;
												HX_STACK_LINE(75)
												::nape::geom::Vec2 tmp32 = ret;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(75)
												::nape::geom::Vec2 tmp33 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(75)
												bool tmp34 = (tmp32 == tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(75)
												if ((tmp34)){
													HX_STACK_LINE(75)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
										}
										HX_STACK_LINE(75)
										bool tmp29 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(75)
										if ((tmp29)){
											HX_STACK_LINE(75)
											::zpp_nape::geom::ZPP_Vec2 tmp30;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(75)
												::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													::zpp_nape::geom::ZPP_Vec2 tmp31 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(75)
													bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(75)
													if ((tmp32)){
														HX_STACK_LINE(75)
														::zpp_nape::geom::ZPP_Vec2 tmp33 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(75)
														ret1 = tmp33;
													}
													else{
														HX_STACK_LINE(75)
														::zpp_nape::geom::ZPP_Vec2 tmp33 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(75)
														ret1 = tmp33;
														HX_STACK_LINE(75)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(75)
														ret1->next = null();
													}
													HX_STACK_LINE(75)
													ret1->weak = false;
												}
												HX_STACK_LINE(75)
												ret1->_immutable = immutable;
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													ret1->x = x;
													HX_STACK_LINE(75)
													ret1->y = y;
													HX_STACK_LINE(75)
													{
													}
												}
												HX_STACK_LINE(75)
												tmp30 = ret1;
											}
											HX_STACK_LINE(75)
											ret->zpp_inner = tmp30;
											HX_STACK_LINE(75)
											ret->zpp_inner->outer = ret;
										}
										else{
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												bool tmp30 = (ret != null());		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(75)
												bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(75)
												if ((tmp30)){
													HX_STACK_LINE(75)
													tmp31 = ret->zpp_disp;
												}
												else{
													HX_STACK_LINE(75)
													tmp31 = false;
												}
												HX_STACK_LINE(75)
												if ((tmp31)){
													HX_STACK_LINE(75)
													::String tmp32 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(75)
													::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(75)
													HX_STACK_DO_THROW(tmp33);
												}
											}
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(75)
												bool tmp30 = _this->_immutable;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(75)
												if ((tmp30)){
													HX_STACK_LINE(75)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
												}
												HX_STACK_LINE(75)
												bool tmp31 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(75)
												if ((tmp31)){
													HX_STACK_LINE(75)
													_this->_isimmutable();
												}
											}
											HX_STACK_LINE(75)
											bool tmp30 = (x != x);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(75)
											bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(75)
											bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(75)
											if ((tmp31)){
												HX_STACK_LINE(75)
												tmp32 = (y != y);
											}
											else{
												HX_STACK_LINE(75)
												tmp32 = true;
											}
											HX_STACK_LINE(75)
											if ((tmp32)){
												HX_STACK_LINE(75)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
											}
											HX_STACK_LINE(75)
											Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(75)
											{
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													bool tmp34 = (ret != null());		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(75)
													bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(75)
													if ((tmp34)){
														HX_STACK_LINE(75)
														tmp35 = ret->zpp_disp;
													}
													else{
														HX_STACK_LINE(75)
														tmp35 = false;
													}
													HX_STACK_LINE(75)
													if ((tmp35)){
														HX_STACK_LINE(75)
														::String tmp36 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(75)
														::String tmp37 = (tmp36 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(75)
														HX_STACK_DO_THROW(tmp37);
													}
												}
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(75)
													bool tmp34 = (_this->_validate != null());		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(75)
													if ((tmp34)){
														HX_STACK_LINE(75)
														_this->_validate();
													}
												}
												HX_STACK_LINE(75)
												tmp33 = ret->zpp_inner->x;
											}
											HX_STACK_LINE(75)
											Float tmp34 = x;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(75)
											bool tmp35 = (tmp33 == tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(75)
											bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(75)
											if ((tmp35)){
												HX_STACK_LINE(75)
												Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													{
														HX_STACK_LINE(75)
														bool tmp38 = (ret != null());		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(75)
														bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(75)
														bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(75)
														bool tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(75)
														if ((tmp41)){
															HX_STACK_LINE(75)
															tmp40 = ret->zpp_disp;
														}
														else{
															HX_STACK_LINE(75)
															tmp40 = false;
														}
														HX_STACK_LINE(75)
														bool tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(75)
														if ((tmp42)){
															HX_STACK_LINE(75)
															::String tmp43 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(75)
															::String tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(75)
															::String tmp45 = (tmp44 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(75)
															::String tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(75)
															::String tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(75)
															HX_STACK_DO_THROW(tmp47);
														}
													}
													HX_STACK_LINE(75)
													{
														HX_STACK_LINE(75)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(75)
														bool tmp38 = (_this->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(75)
														bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(75)
														bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(75)
														if ((tmp40)){
															HX_STACK_LINE(75)
															_this->_validate();
														}
													}
													HX_STACK_LINE(75)
													Float tmp38 = ret->zpp_inner->y;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(75)
													tmp37 = tmp38;
												}
												HX_STACK_LINE(75)
												Float tmp38 = y;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(75)
												tmp36 = (tmp37 == tmp38);
											}
											else{
												HX_STACK_LINE(75)
												tmp36 = false;
											}
											HX_STACK_LINE(75)
											bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(75)
											if ((tmp37)){
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													ret->zpp_inner->x = x;
													HX_STACK_LINE(75)
													ret->zpp_inner->y = y;
													HX_STACK_LINE(75)
													{
													}
												}
												HX_STACK_LINE(75)
												{
													HX_STACK_LINE(75)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(75)
													bool tmp38 = (_this->_invalidate != null());		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(75)
													if ((tmp38)){
														HX_STACK_LINE(75)
														::zpp_nape::geom::ZPP_Vec2 tmp39 = _this;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(75)
														_this->_invalidate(tmp39);
													}
												}
											}
											HX_STACK_LINE(75)
											ret;
										}
										HX_STACK_LINE(75)
										ret->zpp_inner->weak = true;
										HX_STACK_LINE(75)
										tmp19 = ret;
									}
								}
								HX_STACK_LINE(75)
								verts->push(tmp19);
							}
						}
						HX_STACK_LINE(77)
						{
							HX_STACK_LINE(77)
							::nape::phys::Body tmp16 = this->map_static;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(77)
							::nape::shape::ShapeList tmp17 = tmp16->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(77)
							::nape::shape::ShapeList _this = tmp17;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(77)
							::nape::shape::Polygon tmp18 = ::nape::shape::Polygon_obj::__new(verts,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(77)
							::nape::shape::Shape obj1 = tmp18;		HX_STACK_VAR(obj1,"obj1");
							HX_STACK_LINE(77)
							bool tmp19 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(77)
							if ((tmp19)){
								HX_STACK_LINE(77)
								::nape::shape::Shape tmp20 = obj1;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(77)
								_this->push(tmp20);
							}
							else{
								HX_STACK_LINE(77)
								::nape::shape::Shape tmp20 = obj1;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(77)
								_this->unshift(tmp20);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			::nape::phys::Body tmp8 = this->map_static;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(81)
			::nape::phys::Body _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(81)
			::luxe::Physics tmp9 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(81)
			::nape::space::Space tmp10 = tmp9->nape->space;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(81)
			::nape::space::Space space = tmp10;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				::zpp_nape::phys::ZPP_Compound tmp11 = _this->zpp_inner->compound;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(81)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(81)
				if ((tmp12)){
					HX_STACK_LINE(81)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set","\x2f","\x88","\x46","\xff"));
				}
				HX_STACK_LINE(81)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(81)
				bool tmp13 = _this->zpp_inner->world;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(81)
				if ((tmp13)){
					HX_STACK_LINE(81)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
				}
				HX_STACK_LINE(81)
				::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(81)
				bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(81)
				::nape::space::Space tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(81)
				if ((tmp15)){
					HX_STACK_LINE(81)
					tmp16 = null();
				}
				else{
					HX_STACK_LINE(81)
					::zpp_nape::space::ZPP_Space tmp17 = _this->zpp_inner->space;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(81)
					tmp16 = tmp17->outer;
				}
				HX_STACK_LINE(81)
				::nape::space::Space tmp17 = space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(81)
				bool tmp18 = (tmp16 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(81)
				if ((tmp18)){
					HX_STACK_LINE(81)
					::zpp_nape::space::ZPP_Space tmp19 = _this->zpp_inner->space;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(81)
					bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(81)
					::nape::space::Space tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(81)
					if ((tmp20)){
						HX_STACK_LINE(81)
						tmp21 = null();
					}
					else{
						HX_STACK_LINE(81)
						::zpp_nape::space::ZPP_Space tmp22 = _this->zpp_inner->space;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(81)
						tmp21 = tmp22->outer;
					}
					HX_STACK_LINE(81)
					bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(81)
					if ((tmp22)){
						HX_STACK_LINE(81)
						::zpp_nape::space::ZPP_Component tmp23 = _this->zpp_inner->component;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(81)
						tmp23->woken = false;
					}
					HX_STACK_LINE(81)
					::zpp_nape::space::ZPP_Space tmp23 = _this->zpp_inner->space;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(81)
					bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(81)
					::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(81)
					if ((tmp24)){
						HX_STACK_LINE(81)
						tmp25 = null();
					}
					else{
						HX_STACK_LINE(81)
						::zpp_nape::space::ZPP_Space tmp26 = _this->zpp_inner->space;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(81)
						tmp25 = tmp26->outer;
					}
					HX_STACK_LINE(81)
					bool tmp26 = (tmp25 != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(81)
					if ((tmp26)){
						HX_STACK_LINE(81)
						::zpp_nape::space::ZPP_Space tmp27 = _this->zpp_inner->space;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(81)
						bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(81)
						::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(81)
						if ((tmp28)){
							HX_STACK_LINE(81)
							tmp29 = null();
						}
						else{
							HX_STACK_LINE(81)
							::zpp_nape::space::ZPP_Space tmp30 = _this->zpp_inner->space;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(81)
							tmp29 = tmp30->outer;
						}
						HX_STACK_LINE(81)
						::nape::phys::BodyList tmp30 = tmp29->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(81)
						::nape::phys::Body tmp31 = _this;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(81)
						tmp30->remove(tmp31);
					}
					HX_STACK_LINE(81)
					bool tmp27 = (space != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(81)
					if ((tmp27)){
						HX_STACK_LINE(81)
						::nape::phys::BodyList tmp28 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(81)
						::nape::phys::BodyList _this1 = tmp28;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(81)
						bool tmp29 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(81)
						if ((tmp29)){
							HX_STACK_LINE(81)
							::nape::phys::Body tmp30 = _this;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(81)
							_this1->push(tmp30);
						}
						else{
							HX_STACK_LINE(81)
							::nape::phys::Body tmp30 = _this;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(81)
							_this1->unshift(tmp30);
						}
					}
				}
			}
			HX_STACK_LINE(81)
			::zpp_nape::space::ZPP_Space tmp11 = _this->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(81)
			bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(81)
			if ((tmp12)){
				HX_STACK_LINE(81)
				Dynamic();
			}
			else{
				HX_STACK_LINE(81)
				::zpp_nape::space::ZPP_Space tmp13 = _this->zpp_inner->space;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(81)
				tmp13->outer;
			}
		}
		HX_STACK_LINE(82)
		::luxe::physics::nape::DebugDraw tmp8 = ::World_obj::debugdraw;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		::nape::phys::Body tmp9 = this->map_static;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		::phoenix::Color tmp10 = ::phoenix::Color_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(82)
		::phoenix::Color tmp11 = ::phoenix::Color_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(82)
		tmp8->add(tmp9,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,generate_collision,(void))

Void World_obj::generate_objects( ){
{
		HX_STACK_FRAME("World","generate_objects",0x7ab77c46,"World.generate_objects","World.hx",86,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		bool tmp = (this->entities != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		if ((tmp)){
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(90)
				Array< ::Dynamic > _g1 = this->entities;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(90)
				while((true)){
					HX_STACK_LINE(90)
					bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(90)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(90)
					if ((tmp2)){
						HX_STACK_LINE(90)
						break;
					}
					HX_STACK_LINE(90)
					::luxe::Entity tmp3 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(90)
					::luxe::Entity entity = tmp3;		HX_STACK_VAR(entity,"entity");
					HX_STACK_LINE(90)
					++(_g);
					HX_STACK_LINE(92)
					bool tmp4 = entity->destroyed;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(92)
					if ((tmp4)){
						HX_STACK_LINE(92)
						continue;
					}
					HX_STACK_LINE(93)
					entity->destroy(null());
				}
			}
			HX_STACK_LINE(95)
			this->entities = null();
		}
		HX_STACK_LINE(98)
		this->entities = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(100)
			::luxe::importers::tiled::TiledMap tmp1 = this->map;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			Array< ::Dynamic > _g1 = tmp1->tiledmap_data->object_groups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(100)
			while((true)){
				HX_STACK_LINE(100)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(100)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(100)
				if ((tmp3)){
					HX_STACK_LINE(100)
					break;
				}
				HX_STACK_LINE(100)
				::luxe::importers::tiled::TiledObjectGroup tmp4 = _g1->__get(_g).StaticCast< ::luxe::importers::tiled::TiledObjectGroup >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				::luxe::importers::tiled::TiledObjectGroup object_group = tmp4;		HX_STACK_VAR(object_group,"object_group");
				HX_STACK_LINE(100)
				++(_g);
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(102)
					Array< ::Dynamic > _g3 = object_group->objects;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(102)
					while((true)){
						HX_STACK_LINE(102)
						bool tmp5 = (_g2 < _g3->length);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(102)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(102)
						if ((tmp6)){
							HX_STACK_LINE(102)
							break;
						}
						HX_STACK_LINE(102)
						::luxe::importers::tiled::TiledObject tmp7 = _g3->__get(_g2).StaticCast< ::luxe::importers::tiled::TiledObject >();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(102)
						::luxe::importers::tiled::TiledObject object = tmp7;		HX_STACK_VAR(object,"object");
						HX_STACK_LINE(102)
						++(_g2);
						HX_STACK_LINE(104)
						{
							HX_STACK_LINE(104)
							::String _g4 = object->type;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(104)
							::String tmp8 = _g4;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(104)
							::String _switch_1 = (tmp8);
							if (  ( _switch_1==HX_HCSTRING("Spawn","\x1b","\x0e","\x94","\x14"))){
								HX_STACK_LINE(108)
								::String tmp9 = object->properties->get(HX_HCSTRING("Creature","\xdf","\x61","\xb2","\x05"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(108)
								::String creature_name = tmp9;		HX_STACK_VAR(creature_name,"creature_name");
								HX_STACK_LINE(110)
								::String tmp10 = object->properties->get(HX_HCSTRING("Facing Left","\xcd","\x1e","\x6c","\xce"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(110)
								::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(110)
								bool tmp12 = (tmp11 == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(110)
								bool creature_facing_left = tmp12;		HX_STACK_VAR(creature_facing_left,"creature_facing_left");
								HX_STACK_LINE(112)
								::phoenix::Vector tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(112)
								{
									HX_STACK_LINE(112)
									::phoenix::Vector a = object->pos;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(112)
									::phoenix::Vector tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(112)
									{
										HX_STACK_LINE(112)
										::phoenix::Vector tmp15 = ::phoenix::Vector_obj::__new(object->width,object->height,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(112)
										::phoenix::Vector _this = tmp15;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(112)
										{
											HX_STACK_LINE(112)
											Float tmp16 = (Float(_this->x) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(112)
											Float _x = tmp16;		HX_STACK_VAR(_x,"_x");
											HX_STACK_LINE(112)
											Float tmp17 = (Float(_this->y) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(112)
											Float _y = tmp17;		HX_STACK_VAR(_y,"_y");
											HX_STACK_LINE(112)
											Float tmp18 = (Float(_this->z) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(112)
											Float _z = tmp18;		HX_STACK_VAR(_z,"_z");
											HX_STACK_LINE(112)
											bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
											HX_STACK_LINE(112)
											_this->ignore_listeners = true;
											HX_STACK_LINE(112)
											{
												HX_STACK_LINE(112)
												_this->x = _x;
												HX_STACK_LINE(112)
												bool tmp19 = _this->_construct;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(112)
												if ((tmp19)){
													HX_STACK_LINE(112)
													_this->x;
												}
												else{
													HX_STACK_LINE(112)
													bool tmp20 = (_this->listen_x != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(112)
													bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(112)
													if ((tmp20)){
														HX_STACK_LINE(112)
														bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(112)
														bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(112)
														tmp21 = !(tmp23);
													}
													else{
														HX_STACK_LINE(112)
														tmp21 = false;
													}
													HX_STACK_LINE(112)
													if ((tmp21)){
														HX_STACK_LINE(112)
														Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(112)
														_this->listen_x(tmp22);
													}
													HX_STACK_LINE(112)
													_this->x;
												}
											}
											HX_STACK_LINE(112)
											{
												HX_STACK_LINE(112)
												_this->y = _y;
												HX_STACK_LINE(112)
												bool tmp19 = _this->_construct;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(112)
												if ((tmp19)){
													HX_STACK_LINE(112)
													_this->y;
												}
												else{
													HX_STACK_LINE(112)
													bool tmp20 = (_this->listen_y != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(112)
													bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(112)
													if ((tmp20)){
														HX_STACK_LINE(112)
														bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(112)
														bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(112)
														tmp21 = !(tmp23);
													}
													else{
														HX_STACK_LINE(112)
														tmp21 = false;
													}
													HX_STACK_LINE(112)
													if ((tmp21)){
														HX_STACK_LINE(112)
														Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(112)
														_this->listen_y(tmp22);
													}
													HX_STACK_LINE(112)
													_this->y;
												}
											}
											HX_STACK_LINE(112)
											{
												HX_STACK_LINE(112)
												_this->z = _z;
												HX_STACK_LINE(112)
												bool tmp19 = _this->_construct;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(112)
												if ((tmp19)){
													HX_STACK_LINE(112)
													_this->z;
												}
												else{
													HX_STACK_LINE(112)
													bool tmp20 = (_this->listen_z != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(112)
													bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(112)
													if ((tmp20)){
														HX_STACK_LINE(112)
														bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(112)
														bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(112)
														tmp21 = !(tmp23);
													}
													else{
														HX_STACK_LINE(112)
														tmp21 = false;
													}
													HX_STACK_LINE(112)
													if ((tmp21)){
														HX_STACK_LINE(112)
														Float tmp22 = _z;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(112)
														_this->listen_z(tmp22);
													}
													HX_STACK_LINE(112)
													_this->z;
												}
											}
											HX_STACK_LINE(112)
											_this->ignore_listeners = prev;
											HX_STACK_LINE(112)
											bool tmp19 = (_this->listen_x != null());		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(112)
											bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(112)
											if ((tmp19)){
												HX_STACK_LINE(112)
												bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(112)
												bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(112)
												tmp20 = !(tmp22);
											}
											else{
												HX_STACK_LINE(112)
												tmp20 = false;
											}
											HX_STACK_LINE(112)
											if ((tmp20)){
												HX_STACK_LINE(112)
												Float tmp21 = _this->x;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(112)
												_this->listen_x(tmp21);
											}
											HX_STACK_LINE(112)
											bool tmp21 = (_this->listen_y != null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(112)
											bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(112)
											if ((tmp21)){
												HX_STACK_LINE(112)
												bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(112)
												bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(112)
												tmp22 = !(tmp24);
											}
											else{
												HX_STACK_LINE(112)
												tmp22 = false;
											}
											HX_STACK_LINE(112)
											if ((tmp22)){
												HX_STACK_LINE(112)
												Float tmp23 = _this->y;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(112)
												_this->listen_y(tmp23);
											}
											HX_STACK_LINE(112)
											bool tmp23 = (_this->listen_z != null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(112)
											bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(112)
											if ((tmp23)){
												HX_STACK_LINE(112)
												bool tmp25 = _this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(112)
												bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(112)
												tmp24 = !(tmp26);
											}
											else{
												HX_STACK_LINE(112)
												tmp24 = false;
											}
											HX_STACK_LINE(112)
											if ((tmp24)){
												HX_STACK_LINE(112)
												Float tmp25 = _this->z;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(112)
												_this->listen_z(tmp25);
											}
											HX_STACK_LINE(112)
											_this;
										}
										HX_STACK_LINE(112)
										tmp14 = _this;
									}
									HX_STACK_LINE(112)
									::phoenix::Vector b = tmp14;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(112)
									Float tmp15 = (a->x + b->x);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(112)
									Float tmp16 = (a->y + b->y);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(112)
									Float tmp17 = (a->z + b->z);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(112)
									tmp13 = ::phoenix::Vector_obj::__new(tmp15,tmp16,tmp17,null());
								}
								HX_STACK_LINE(112)
								::phoenix::Vector body_pos = tmp13;		HX_STACK_VAR(body_pos,"body_pos");
								HX_STACK_LINE(115)
								::String tmp14 = (HX_HCSTRING("creatures.","\xda","\x37","\xc5","\xa9") + creature_name);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(115)
								::hx::Class tmp15 = ::Type_obj::resolveClass(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(114)
								::Creature tmp16 = ::Type_obj::createInstance(tmp15,cpp::ArrayBase_obj::__new().Add(body_pos).Add(object->name));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(114)
								::Creature creature = tmp16;		HX_STACK_VAR(creature,"creature");
								HX_STACK_LINE(117)
								bool tmp17 = creature_facing_left;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(117)
								creature->set_flipx(tmp17);
								HX_STACK_LINE(119)
								::Creature tmp18 = creature;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(119)
								this->entities->push(tmp18);
								HX_STACK_LINE(121)
								::Physics tmp19 = this->physics;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(121)
								::Controller tmp20 = creature->controller;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(121)
								tmp19->controllers->push(tmp20);
								HX_STACK_LINE(123)
								bool tmp21 = (creature_name == HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(123)
								if ((tmp21)){
									HX_STACK_LINE(125)
									this->player = ((::creatures::Player)(creature));
								}
							}
							else if (  ( _switch_1==HX_HCSTRING("PhysObject","\x51","\x5a","\x28","\xca"))){
								HX_STACK_LINE(130)
								bool tmp9 = object->properties->exists(HX_HCSTRING("Texture","\xbb","\xf0","\x31","\x6c"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(130)
								bool tmp10 = (tmp9 == false);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(130)
								if ((tmp10)){
									HX_STACK_LINE(130)
									continue;
								}
								HX_STACK_LINE(132)
								::String tmp11 = object->properties->get(HX_HCSTRING("Texture","\xbb","\xf0","\x31","\x6c"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(132)
								::String texture_name = tmp11;		HX_STACK_VAR(texture_name,"texture_name");
								HX_STACK_LINE(133)
								::luxe::Resources tmp12 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(133)
								::String tmp13 = (HX_HCSTRING("assets/textures/","\x2b","\x86","\xb3","\x0a") + texture_name);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(133)
								::String tmp14 = (tmp13 + HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(133)
								::luxe::resource::Resource tmp15 = tmp12->cache->get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(133)
								::phoenix::Texture texture = ((::phoenix::Texture)(tmp15));		HX_STACK_VAR(texture,"texture");
								HX_STACK_LINE(134)
								int tmp16 = texture->set_filter_mag((int)9728);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(134)
								texture->set_filter_min(tmp16);
								HX_STACK_LINE(136)
								::phoenix::Vector tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(136)
								{
									HX_STACK_LINE(136)
									::phoenix::Vector a = object->pos;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(136)
									::phoenix::Vector tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(136)
									{
										HX_STACK_LINE(136)
										::phoenix::Vector tmp19 = ::phoenix::Vector_obj::__new(object->width,object->height,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(136)
										::phoenix::Vector _this = tmp19;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(136)
										{
											HX_STACK_LINE(136)
											Float tmp20 = (Float(_this->x) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(136)
											Float _x = tmp20;		HX_STACK_VAR(_x,"_x");
											HX_STACK_LINE(136)
											Float tmp21 = (Float(_this->y) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(136)
											Float _y = tmp21;		HX_STACK_VAR(_y,"_y");
											HX_STACK_LINE(136)
											Float tmp22 = (Float(_this->z) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(136)
											Float _z = tmp22;		HX_STACK_VAR(_z,"_z");
											HX_STACK_LINE(136)
											bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
											HX_STACK_LINE(136)
											_this->ignore_listeners = true;
											HX_STACK_LINE(136)
											{
												HX_STACK_LINE(136)
												_this->x = _x;
												HX_STACK_LINE(136)
												bool tmp23 = _this->_construct;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(136)
												if ((tmp23)){
													HX_STACK_LINE(136)
													_this->x;
												}
												else{
													HX_STACK_LINE(136)
													bool tmp24 = (_this->listen_x != null());		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(136)
													bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(136)
													if ((tmp24)){
														HX_STACK_LINE(136)
														bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(136)
														bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(136)
														tmp25 = !(tmp27);
													}
													else{
														HX_STACK_LINE(136)
														tmp25 = false;
													}
													HX_STACK_LINE(136)
													if ((tmp25)){
														HX_STACK_LINE(136)
														Float tmp26 = _x;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(136)
														_this->listen_x(tmp26);
													}
													HX_STACK_LINE(136)
													_this->x;
												}
											}
											HX_STACK_LINE(136)
											{
												HX_STACK_LINE(136)
												_this->y = _y;
												HX_STACK_LINE(136)
												bool tmp23 = _this->_construct;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(136)
												if ((tmp23)){
													HX_STACK_LINE(136)
													_this->y;
												}
												else{
													HX_STACK_LINE(136)
													bool tmp24 = (_this->listen_y != null());		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(136)
													bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(136)
													if ((tmp24)){
														HX_STACK_LINE(136)
														bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(136)
														bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(136)
														tmp25 = !(tmp27);
													}
													else{
														HX_STACK_LINE(136)
														tmp25 = false;
													}
													HX_STACK_LINE(136)
													if ((tmp25)){
														HX_STACK_LINE(136)
														Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(136)
														_this->listen_y(tmp26);
													}
													HX_STACK_LINE(136)
													_this->y;
												}
											}
											HX_STACK_LINE(136)
											{
												HX_STACK_LINE(136)
												_this->z = _z;
												HX_STACK_LINE(136)
												bool tmp23 = _this->_construct;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(136)
												if ((tmp23)){
													HX_STACK_LINE(136)
													_this->z;
												}
												else{
													HX_STACK_LINE(136)
													bool tmp24 = (_this->listen_z != null());		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(136)
													bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(136)
													if ((tmp24)){
														HX_STACK_LINE(136)
														bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(136)
														bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(136)
														tmp25 = !(tmp27);
													}
													else{
														HX_STACK_LINE(136)
														tmp25 = false;
													}
													HX_STACK_LINE(136)
													if ((tmp25)){
														HX_STACK_LINE(136)
														Float tmp26 = _z;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(136)
														_this->listen_z(tmp26);
													}
													HX_STACK_LINE(136)
													_this->z;
												}
											}
											HX_STACK_LINE(136)
											_this->ignore_listeners = prev;
											HX_STACK_LINE(136)
											bool tmp23 = (_this->listen_x != null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(136)
											bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(136)
											if ((tmp23)){
												HX_STACK_LINE(136)
												bool tmp25 = _this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(136)
												bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(136)
												tmp24 = !(tmp26);
											}
											else{
												HX_STACK_LINE(136)
												tmp24 = false;
											}
											HX_STACK_LINE(136)
											if ((tmp24)){
												HX_STACK_LINE(136)
												Float tmp25 = _this->x;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(136)
												_this->listen_x(tmp25);
											}
											HX_STACK_LINE(136)
											bool tmp25 = (_this->listen_y != null());		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(136)
											bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(136)
											if ((tmp25)){
												HX_STACK_LINE(136)
												bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(136)
												bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(136)
												tmp26 = !(tmp28);
											}
											else{
												HX_STACK_LINE(136)
												tmp26 = false;
											}
											HX_STACK_LINE(136)
											if ((tmp26)){
												HX_STACK_LINE(136)
												Float tmp27 = _this->y;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(136)
												_this->listen_y(tmp27);
											}
											HX_STACK_LINE(136)
											bool tmp27 = (_this->listen_z != null());		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(136)
											bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(136)
											if ((tmp27)){
												HX_STACK_LINE(136)
												bool tmp29 = _this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(136)
												bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(136)
												tmp28 = !(tmp30);
											}
											else{
												HX_STACK_LINE(136)
												tmp28 = false;
											}
											HX_STACK_LINE(136)
											if ((tmp28)){
												HX_STACK_LINE(136)
												Float tmp29 = _this->z;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(136)
												_this->listen_z(tmp29);
											}
											HX_STACK_LINE(136)
											_this;
										}
										HX_STACK_LINE(136)
										tmp18 = _this;
									}
									HX_STACK_LINE(136)
									::phoenix::Vector b = tmp18;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(136)
									Float tmp19 = (a->x + b->x);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(136)
									Float tmp20 = (a->y + b->y);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(136)
									Float tmp21 = (a->z + b->z);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(136)
									tmp17 = ::phoenix::Vector_obj::__new(tmp19,tmp20,tmp21,null());
								}
								HX_STACK_LINE(136)
								::phoenix::Vector body_pos = tmp17;		HX_STACK_VAR(body_pos,"body_pos");
								HX_STACK_LINE(139)
								::String tmp18 = object->name;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(140)
								::phoenix::Vector tmp19 = body_pos;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(141)
								::phoenix::Texture tmp20 = texture;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(142)
								::phoenix::Vector tmp21 = ::phoenix::Vector_obj::__new(object->width,object->height,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
								struct _Function_7_1{
									inline static Dynamic Block( ::phoenix::Texture &tmp20,::phoenix::Vector &tmp19,::phoenix::Vector &tmp21,::String &tmp18){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",138,0x7e25a7cc)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp18,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp19,false);
											__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp20,false);
											__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp21,false);
											__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)1)),false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(138)
								Dynamic tmp22 = _Function_7_1::Block(tmp20,tmp19,tmp21,tmp18);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(138)
								::luxe::Sprite tmp23 = ::luxe::Sprite_obj::__new(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(138)
								::luxe::Sprite sprite = tmp23;		HX_STACK_VAR(sprite,"sprite");
								HX_STACK_LINE(148)
								Float tmp24 = body_pos->x;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(148)
								Float tmp25 = body_pos->y;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(149)
								Float tmp26 = ((Float)(object->width));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(149)
								Float tmp27 = ((Float)(object->width));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(150)
								::nape::phys::BodyType tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(150)
								{
									HX_STACK_LINE(150)
									::nape::phys::BodyType tmp29 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(150)
									bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(150)
									if ((tmp30)){
										HX_STACK_LINE(150)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(150)
										::nape::phys::BodyType tmp31 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(150)
										::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp31;
										HX_STACK_LINE(150)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(150)
									tmp28 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
								}
								struct _Function_7_2{
									inline static Dynamic Block( ::nape::phys::BodyType &tmp28,Float &tmp26,Float &tmp24,Float &tmp25,Float &tmp27){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",146,0x7e25a7cc)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),false);
											__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp24,false);
											__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp25,false);
											__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp26,false);
											__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp27,false);
											__result->Add(HX_HCSTRING("body_type","\xb7","\xc8","\xf4","\x2c") , tmp28,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(146)
								Dynamic tmp29 = _Function_7_2::Block(tmp28,tmp26,tmp24,tmp25,tmp27);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(146)
								::luxe::components::physics::nape::BoxCollider tmp30 = ::luxe::components::physics::nape::BoxCollider_obj::__new(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(146)
								::luxe::components::physics::nape::BoxCollider collider = tmp30;		HX_STACK_VAR(collider,"collider");
								HX_STACK_LINE(152)
								::luxe::components::physics::nape::BoxCollider tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(152)
								{
									HX_STACK_LINE(152)
									(sprite->component_count)++;
									HX_STACK_LINE(152)
									::luxe::components::physics::nape::BoxCollider tmp32 = collider;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(152)
									tmp31 = sprite->_components->add(tmp32);
								}
								HX_STACK_LINE(152)
								tmp31;
								HX_STACK_LINE(154)
								::nape::phys::Body body = collider->body;		HX_STACK_VAR(body,"body");
								HX_STACK_LINE(155)
								{
									HX_STACK_LINE(155)
									::nape::shape::ShapeList tmp32 = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(155)
									::nape::shape::ShapeList _this = tmp32;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(155)
									bool tmp33 = false;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(155)
									if ((tmp33)){
										HX_STACK_LINE(155)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot execute null on list elements","\x97","\xfe","\x61","\x00"));
									}
									HX_STACK_LINE(155)
									::nape::shape::ShapeIterator tmp34;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(155)
									{
										HX_STACK_LINE(155)
										_this->zpp_inner->valmod();
										HX_STACK_LINE(155)
										::nape::shape::ShapeList tmp35 = _this;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(155)
										tmp34 = ::nape::shape::ShapeIterator_obj::get(tmp35);
									}
									HX_STACK_LINE(155)
									::nape::shape::ShapeIterator it = tmp34;		HX_STACK_VAR(it,"it");
									HX_STACK_LINE(155)
									while((true)){
										HX_STACK_LINE(155)
										bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(155)
										{
											HX_STACK_LINE(155)
											::zpp_nape::util::ZPP_ShapeList tmp36 = it->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(155)
											tmp36->valmod();
											HX_STACK_LINE(155)
											int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(155)
											{
												HX_STACK_LINE(155)
												::nape::shape::ShapeList _this1 = it->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(155)
												_this1->zpp_inner->valmod();
												HX_STACK_LINE(155)
												bool tmp38 = _this1->zpp_inner->zip_length;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(155)
												if ((tmp38)){
													HX_STACK_LINE(155)
													_this1->zpp_inner->zip_length = false;
													HX_STACK_LINE(155)
													{
														HX_STACK_LINE(155)
														::zpp_nape::util::ZNPList_ZPP_Shape tmp39 = _this1->zpp_inner->inner;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(155)
														_this1->zpp_inner->user_length = tmp39->length;
													}
												}
												HX_STACK_LINE(155)
												tmp37 = _this1->zpp_inner->user_length;
											}
											HX_STACK_LINE(155)
											int length = tmp37;		HX_STACK_VAR(length,"length");
											HX_STACK_LINE(155)
											it->zpp_critical = true;
											HX_STACK_LINE(155)
											bool tmp38 = (it->zpp_i < length);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(155)
											if ((tmp38)){
												HX_STACK_LINE(155)
												tmp35 = true;
											}
											else{
												HX_STACK_LINE(155)
												{
													HX_STACK_LINE(155)
													::nape::shape::ShapeIterator tmp39 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(155)
													it->zpp_next = tmp39;
													HX_STACK_LINE(155)
													::nape::shape::ShapeIterator_obj::zpp_pool = it;
													HX_STACK_LINE(155)
													it->zpp_inner = null();
												}
												HX_STACK_LINE(155)
												tmp35 = false;
											}
										}
										HX_STACK_LINE(155)
										bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(155)
										if ((tmp36)){
											HX_STACK_LINE(155)
											break;
										}
										HX_STACK_LINE(155)
										try
										{
										HX_STACK_CATCHABLE(Dynamic, 0);
										{
											HX_STACK_LINE(155)
											::nape::shape::Shape tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(155)
											{
												HX_STACK_LINE(155)
												it->zpp_critical = false;
												HX_STACK_LINE(155)
												int tmp38 = (it->zpp_i)++;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(155)
												tmp37 = it->zpp_inner->at(tmp38);
											}
											HX_STACK_LINE(156)
											{
												HX_STACK_LINE(156)
												Dynamic tmp38 = ::Physics_obj::filters;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(156)
												::nape::dynamics::InteractionFilter filter = tmp38->__Field(HX_HCSTRING("physobj","\x65","\xc5","\x55","\xbe"), hx::paccDynamic );		HX_STACK_VAR(filter,"filter");
												HX_STACK_LINE(156)
												{
													HX_STACK_LINE(156)
													tmp37->zpp_inner->immutable_midstep(HX_HCSTRING("Shape::filter","\x79","\x9e","\xc6","\x67"));
													HX_STACK_LINE(156)
													bool tmp39 = (filter == null());		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(156)
													if ((tmp39)){
														HX_STACK_LINE(156)
														HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null as Shape filter","\x2e","\x7a","\x75","\x59"));
													}
													HX_STACK_LINE(156)
													::zpp_nape::dynamics::ZPP_InteractionFilter tmp40 = filter->zpp_inner;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(156)
													tmp37->zpp_inner->setFilter(tmp40);
												}
												HX_STACK_LINE(156)
												::zpp_nape::dynamics::ZPP_InteractionFilter tmp39 = tmp37->zpp_inner->filter;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(156)
												tmp39->wrapper();
											}
										}
										}
										catch(Dynamic __e){
											{
												HX_STACK_BEGIN_CATCH
												Dynamic e = __e;{
													HX_STACK_LINE(155)
													{
														HX_STACK_LINE(155)
														::nape::shape::ShapeIterator tmp37 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(155)
														it->zpp_next = tmp37;
														HX_STACK_LINE(155)
														::nape::shape::ShapeIterator_obj::zpp_pool = it;
														HX_STACK_LINE(155)
														it->zpp_inner = null();
													}
													HX_STACK_LINE(155)
													break;
												}
											}
										}
									}
									HX_STACK_LINE(155)
									_this;
								}
								HX_STACK_LINE(158)
								{
									HX_STACK_LINE(158)
									::nape::callbacks::CbTypeList tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(158)
									{
										HX_STACK_LINE(158)
										::nape::callbacks::CbTypeList tmp33 = body->zpp_inner_i->wrap_cbTypes;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(158)
										bool tmp34 = (tmp33 == null());		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(158)
										if ((tmp34)){
											HX_STACK_LINE(158)
											body->zpp_inner_i->setupcbTypes();
										}
										HX_STACK_LINE(158)
										tmp32 = body->zpp_inner_i->wrap_cbTypes;
									}
									HX_STACK_LINE(158)
									::nape::callbacks::CbTypeList _this = tmp32;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(158)
									Dynamic tmp33 = ::Physics_obj::types;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(158)
									::nape::callbacks::CbType obj = tmp33->__Field(HX_HCSTRING("physobj","\x65","\xc5","\x55","\xbe"), hx::paccDynamic );		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(158)
									bool tmp34 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(158)
									if ((tmp34)){
										HX_STACK_LINE(158)
										::nape::callbacks::CbType tmp35 = obj;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(158)
										_this->push(tmp35);
									}
									else{
										HX_STACK_LINE(158)
										::nape::callbacks::CbType tmp35 = obj;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(158)
										_this->unshift(tmp35);
									}
								}
								HX_STACK_LINE(160)
								::luxe::Sprite tmp32 = sprite;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(160)
								this->entities->push(tmp32);
							}
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
		HX_STACK_FRAME("World","reset",0xc63e9a93,"World.reset","World.hx",167,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		::luxe::physics::nape::DebugDraw tmp = ::World_obj::debugdraw;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		if ((tmp1)){
			HX_STACK_LINE(170)
			::luxe::physics::nape::DebugDraw tmp2 = ::World_obj::debugdraw;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(170)
			tmp2->destroy();
			HX_STACK_LINE(171)
			::World_obj::debugdraw = null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",173,0x7e25a7cc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)1000)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(173)
		Dynamic tmp2 = _Function_1_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		::luxe::physics::nape::DebugDraw tmp3 = ::luxe::physics::nape::DebugDraw_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		::World_obj::debugdraw = tmp3;
		HX_STACK_LINE(176)
		::luxe::physics::nape::DebugDraw tmp4 = ::World_obj::debugdraw;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(176)
		::luxe::Physics tmp5 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(176)
		tmp5->nape->debugdraw = tmp4;
		HX_STACK_LINE(177)
		::luxe::Physics tmp6 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(177)
		tmp6->nape->set_draw(true);
		HX_STACK_LINE(178)
		::luxe::Physics tmp7 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(178)
		::nape::space::Space tmp8 = tmp7->nape->space;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(178)
		tmp8->clear();
		HX_STACK_LINE(180)
		::Physics tmp9 = this->physics;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(180)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(180)
		if ((tmp10)){
			HX_STACK_LINE(182)
			::Physics tmp11 = this->physics;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(182)
			tmp11->destroy();
			HX_STACK_LINE(183)
			this->physics = null();
		}
		HX_STACK_LINE(185)
		::luxe::Physics tmp11 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(185)
		::Physics tmp12 = tmp11->add_engine(hx::ClassOf< ::Physics >(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(185)
		this->physics = tmp12;
		HX_STACK_LINE(187)
		::luxe::importers::tiled::TiledMap tmp13 = this->map;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(187)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(187)
		if ((tmp14)){
			HX_STACK_LINE(189)
			::luxe::importers::tiled::TiledMap tmp15 = this->map;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(189)
			tmp15->destroy(null());
			HX_STACK_LINE(190)
			this->map = null();
		}
		HX_STACK_LINE(192)
		::luxe::Resources tmp15 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(192)
		::luxe::resource::Resource tmp16 = tmp15->cache->get(HX_HCSTRING("assets/maps/test/Gameplay_Testing.tmx","\x99","\xa5","\x60","\x88"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(192)
		::snow::systems::assets::AssetText tmp17 = ((::luxe::resource::TextResource)(tmp16))->asset;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(192)
		::String map_data = tmp17->text;		HX_STACK_VAR(map_data,"map_data");
		struct _Function_1_2{
			inline static Dynamic Block( ::String &map_data){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",193,0x7e25a7cc)
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
		HX_STACK_LINE(193)
		Dynamic tmp18 = _Function_1_2::Block(map_data);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(193)
		::luxe::importers::tiled::TiledMap tmp19 = ::luxe::importers::tiled::TiledMap_obj::__new(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(193)
		this->map = tmp19;
		HX_STACK_LINE(195)
		this->generate_collision();
		HX_STACK_LINE(196)
		this->generate_objects();
		HX_STACK_LINE(198)
		::luxe::importers::tiled::TiledMap tmp20 = this->map;		HX_STACK_VAR(tmp20,"tmp20");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","World.hx",198,0x7e25a7cc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85") , (int)9728,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)0)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(198)
		Dynamic tmp21 = _Function_1_3::Block();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(198)
		tmp20->display(tmp21);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,reset,(void))

::luxe::physics::nape::DebugDraw World_obj::debugdraw;


World_obj::World_obj()
{
}

void World_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(World);
	HX_MARK_MEMBER_NAME(physics,"physics");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(map_static,"map_static");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(entities,"entities");
	HX_MARK_END_CLASS();
}

void World_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(physics,"physics");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(map_static,"map_static");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(entities,"entities");
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
	case 7:
		if (HX_FIELD_EQ(inName,"physics") ) { return physics; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { return entities; }
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
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::creatures::Player >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"physics") ) { physics=inValue.Cast< ::Physics >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { entities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
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
	}
	return false;
}

void World_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("map_static","\x31","\xaf","\xb2","\x47"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("entities","\x41","\x96","\x95","\x92"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Physics*/ ,(int)offsetof(World_obj,physics),HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe")},
	{hx::fsObject /*::luxe::importers::tiled::TiledMap*/ ,(int)offsetof(World_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(World_obj,map_static),HX_HCSTRING("map_static","\x31","\xaf","\xb2","\x47")},
	{hx::fsObject /*::creatures::Player*/ ,(int)offsetof(World_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,entities),HX_HCSTRING("entities","\x41","\x96","\x95","\x92")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::luxe::physics::nape::DebugDraw*/ ,(void *) &World_obj::debugdraw,HX_HCSTRING("debugdraw","\xd7","\xa3","\xe2","\x3a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("map_static","\x31","\xaf","\xb2","\x47"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("entities","\x41","\x96","\x95","\x92"),
	HX_HCSTRING("generate_collision","\xa8","\x77","\xd8","\x66"),
	HX_HCSTRING("generate_objects","\x8a","\xde","\x9b","\x49"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(World_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(World_obj::debugdraw,"debugdraw");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(World_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(World_obj::debugdraw,"debugdraw");
};

#endif

hx::Class World_obj::__mClass;

static ::String sStaticFields[] = {
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

