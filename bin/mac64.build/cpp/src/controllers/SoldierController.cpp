#include <hxcpp.h>

#include "linc_timestamp.h"
#ifndef INCLUDED_AIController
#include <AIController.h>
#endif
#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Physics
#include <Physics.h>
#endif
#ifndef INCLUDED_Projectile
#include <Projectile.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_controllers_SoldierController
#include <controllers/SoldierController.h>
#endif
#ifndef INCLUDED_creatures_Player
#include <creatures/Player.h>
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
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_States
#include <luxe/States.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Ray
#include <nape/geom/Ray.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_core_Runtime
#include <snow/core/Runtime.h>
#endif
#ifndef INCLUDED_snow_core_native_Runtime
#include <snow/core/native/Runtime.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_Runtime
#include <snow/modules/sdl/Runtime.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Ray
#include <zpp_nape/geom/ZPP_Ray.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
namespace controllers{

Void SoldierController_obj::__construct()
{
HX_STACK_FRAME("controllers.SoldierController","new",0xfe5ec939,"controllers.SoldierController.new","controllers/SoldierController.hx",14,0xbc9166d8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->fire_interval = ((Float)1);
	HX_STACK_LINE(16)
	this->fire_ready = true;
	HX_STACK_LINE(22)
	super::__construct();
}
;
	return null();
}

//SoldierController_obj::~SoldierController_obj() { }

Dynamic SoldierController_obj::__CreateEmpty() { return  new SoldierController_obj; }
hx::ObjectPtr< SoldierController_obj > SoldierController_obj::__new()
{  hx::ObjectPtr< SoldierController_obj > _result_ = new SoldierController_obj();
	_result_->__construct();
	return _result_;}

Dynamic SoldierController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoldierController_obj > _result_ = new SoldierController_obj();
	_result_->__construct();
	return _result_;}

Void SoldierController_obj::update( Float dt){
{
		HX_STACK_FRAME("controllers.SoldierController","update",0xe794dad0,"controllers.SoldierController.update","controllers/SoldierController.hx",26,0xbc9166d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(27)
		bool tmp = ::GameState_obj::paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		if ((tmp)){
			HX_STACK_LINE(27)
			return null();
		}
		HX_STACK_LINE(29)
		::nape::geom::Vec2 tmp1 = ::nape::geom::Vec2_obj::__new((int)0,((Float)-7.5));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::nape::phys::Body tmp3 = this->get_body();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(29)
			::nape::phys::Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(29)
			::nape::geom::Vec2 tmp4 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(29)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(29)
			if ((tmp5)){
				HX_STACK_LINE(29)
				_this->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(29)
			tmp2 = _this->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(29)
		::nape::geom::Vec2 tmp3 = tmp1->addeq(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		::Creature tmp4 = this->get_creature();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		int tmp5 = tmp4->get_facing();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(tmp5,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(29)
		::nape::geom::Ray tmp7 = ::nape::geom::Ray_obj::__new(tmp3,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(29)
		::nape::geom::Ray ray = tmp7;		HX_STACK_VAR(ray,"ray");
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(30)
				if ((tmp8)){
					HX_STACK_LINE(30)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: maxDistance cannot be NaN","\xc6","\x98","\x5d","\x73"));
				}
				HX_STACK_LINE(30)
				ray->zpp_inner->maxdist = (int)1000;
			}
			HX_STACK_LINE(30)
			ray->zpp_inner->maxdist;
		}
		HX_STACK_LINE(31)
		::nape::space::Space tmp8 = this->get_space();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		::nape::geom::Ray tmp9 = ray;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(31)
		Dynamic tmp10 = ::Physics_obj::filters;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(31)
		::nape::dynamics::InteractionFilter tmp11 = tmp10->__Field(HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(31)
		::nape::geom::RayResult tmp12 = tmp8->rayCast(tmp9,false,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(31)
		::nape::geom::RayResult result = tmp12;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(33)
		bool tmp13 = (result != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(33)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(33)
		if ((tmp13)){
			HX_STACK_LINE(33)
			Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				::nape::phys::Body tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(33)
					::nape::shape::Shape tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(33)
					{
						HX_STACK_LINE(33)
						{
							HX_STACK_LINE(33)
							::zpp_nape::geom::ZPP_ConvexRayResult tmp18 = result->zpp_inner->next;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(33)
							::zpp_nape::geom::ZPP_ConvexRayResult tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(33)
							bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(33)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(33)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(33)
							if ((tmp22)){
								HX_STACK_LINE(33)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
							}
						}
						HX_STACK_LINE(33)
						::nape::shape::Shape tmp18 = result->zpp_inner->shape;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(33)
						tmp17 = tmp18;
					}
					HX_STACK_LINE(33)
					::nape::shape::Shape _this = tmp17;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(33)
					::zpp_nape::phys::ZPP_Body tmp18 = _this->zpp_inner->body;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(33)
					::zpp_nape::phys::ZPP_Body tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(33)
					bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(33)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(33)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(33)
					if ((tmp22)){
						HX_STACK_LINE(33)
						::zpp_nape::phys::ZPP_Body tmp23 = _this->zpp_inner->body;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(33)
						::zpp_nape::phys::ZPP_Body tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(33)
						tmp16 = tmp24->outer;
					}
					else{
						HX_STACK_LINE(33)
						tmp16 = null();
					}
				}
				HX_STACK_LINE(33)
				::nape::phys::Body _this = tmp16;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(33)
				Dynamic tmp17 = _this->zpp_inner_i->userData;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(33)
				Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(33)
				bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(33)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(33)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(33)
				if ((tmp21)){
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","controllers/SoldierController.hx",33,0xbc9166d8)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(33)
					Dynamic tmp22 = _Function_4_1::Block();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(33)
					Dynamic tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(33)
					_this->zpp_inner_i->userData = tmp23;
				}
				HX_STACK_LINE(33)
				Dynamic tmp22 = _this->zpp_inner_i->userData;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(33)
				tmp15 = tmp22;
			}
			HX_STACK_LINE(33)
			tmp14 = ::Std_obj::is(tmp15->__Field(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"), hx::paccDynamic ),hx::ClassOf< ::creatures::Player >());
		}
		else{
			HX_STACK_LINE(33)
			tmp14 = false;
		}
		HX_STACK_LINE(33)
		if ((tmp14)){
			HX_STACK_LINE(35)
			Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::nape::phys::Body tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(35)
				{
					HX_STACK_LINE(35)
					::nape::shape::Shape tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(35)
					{
						HX_STACK_LINE(35)
						{
							HX_STACK_LINE(35)
							::zpp_nape::geom::ZPP_ConvexRayResult tmp18 = result->zpp_inner->next;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(35)
							bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(35)
							if ((tmp19)){
								HX_STACK_LINE(35)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
							}
						}
						HX_STACK_LINE(35)
						tmp17 = result->zpp_inner->shape;
					}
					HX_STACK_LINE(35)
					::nape::shape::Shape _this = tmp17;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(35)
					::zpp_nape::phys::ZPP_Body tmp18 = _this->zpp_inner->body;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(35)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(35)
					if ((tmp19)){
						HX_STACK_LINE(35)
						::zpp_nape::phys::ZPP_Body tmp20 = _this->zpp_inner->body;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(35)
						tmp16 = tmp20->outer;
					}
					else{
						HX_STACK_LINE(35)
						tmp16 = null();
					}
				}
				HX_STACK_LINE(35)
				::nape::phys::Body _this = tmp16;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(35)
				Dynamic tmp17 = _this->zpp_inner_i->userData;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(35)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(35)
				if ((tmp18)){
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","controllers/SoldierController.hx",35,0xbc9166d8)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(35)
					Dynamic tmp19 = _Function_4_1::Block();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(35)
					_this->zpp_inner_i->userData = tmp19;
				}
				HX_STACK_LINE(35)
				tmp15 = _this->zpp_inner_i->userData;
			}
			HX_STACK_LINE(35)
			::creatures::Player player = ((::creatures::Player)(tmp15->__Field(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"), hx::paccDynamic )));		HX_STACK_VAR(player,"player");
			HX_STACK_LINE(36)
			this->fire();
		}
		HX_STACK_LINE(38)
		::nape::geom::Ray tmp15 = ray;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(38)
		::nape::geom::RayResult tmp16 = result;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(38)
		this->debug_ray(tmp15,tmp16);
		HX_STACK_LINE(40)
		Float tmp17 = this->fire_ready_timer;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(40)
		bool tmp18 = (tmp17 > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(40)
		if ((tmp18)){
			HX_STACK_LINE(40)
			hx::SubEq(this->fire_ready_timer,dt);
		}
		HX_STACK_LINE(41)
		Float tmp19 = this->fire_ready_timer;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(41)
		bool tmp20 = (tmp19 <= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(41)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(41)
		if ((tmp20)){
			HX_STACK_LINE(41)
			bool tmp22 = this->fire_ready;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(41)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(41)
			tmp21 = (tmp23 == false);
		}
		else{
			HX_STACK_LINE(41)
			tmp21 = false;
		}
		HX_STACK_LINE(41)
		if ((tmp21)){
			HX_STACK_LINE(43)
			this->fire_ready = true;
			HX_STACK_LINE(44)
			::String tmp22 = this->name;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(44)
			::String tmp23 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(44)
			::String tmp24 = (tmp23 + HX_HCSTRING(" fire ready","\x99","\x14","\x12","\xd1"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(44)
			::String tmp25 = (HX_HCSTRING("i / soldiercontroller / ","\xbb","\x2d","\x42","\x95") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(44)
			Dynamic tmp26 = hx::SourceInfo(HX_HCSTRING("SoldierController.hx","\xe0","\x3e","\x8b","\xa5"),44,HX_HCSTRING("controllers.SoldierController","\xc7","\xb8","\xa9","\x07"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(44)
			::haxe::Log_obj::trace(tmp25,tmp26);
		}
		HX_STACK_LINE(47)
		Float tmp22 = dt;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(47)
		this->super::update(tmp22);
	}
return null();
}


Void SoldierController_obj::fire( ){
{
		HX_STACK_FRAME("controllers.SoldierController","fire",0x8f4a98bd,"controllers.SoldierController.fire","controllers/SoldierController.hx",51,0xbc9166d8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		bool tmp = this->fire_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		if ((tmp1)){
			HX_STACK_LINE(52)
			return null();
		}
		HX_STACK_LINE(54)
		::luxe::Resources tmp2 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		::luxe::resource::Resource tmp3 = tmp2->cache->get(HX_HCSTRING("assets/textures/Projectile_Bullet.png","\x48","\xa2","\x43","\x47"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		::phoenix::Texture texture = ((::phoenix::Texture)(tmp3));		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(55)
		int tmp4 = texture->set_filter_min((int)9728);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		texture->set_filter_mag(tmp4);
		HX_STACK_LINE(57)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				::nape::phys::Body tmp7 = this->get_body();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(57)
				::nape::phys::Body _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(57)
				::nape::geom::Vec2 tmp8 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(57)
				if ((tmp9)){
					HX_STACK_LINE(57)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(57)
				tmp6 = _this->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(57)
			::nape::geom::Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(57)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				if ((tmp7)){
					HX_STACK_LINE(57)
					tmp8 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(57)
					tmp8 = false;
				}
				HX_STACK_LINE(57)
				if ((tmp8)){
					HX_STACK_LINE(57)
					::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(57)
					::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(57)
					HX_STACK_DO_THROW(tmp10);
				}
			}
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(57)
				bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(57)
				if ((tmp7)){
					HX_STACK_LINE(57)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(57)
			tmp5 = _this->zpp_inner->x;
		}
		HX_STACK_LINE(57)
		::Creature tmp6 = this->get_creature();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		int tmp7 = tmp6->get_facing();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(57)
		int tmp8 = ((int)8 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(57)
		Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(57)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				::nape::phys::Body tmp12 = this->get_body();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(57)
				::nape::phys::Body _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(57)
				::nape::geom::Vec2 tmp13 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(57)
				bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(57)
				if ((tmp14)){
					HX_STACK_LINE(57)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(57)
				tmp11 = _this->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(57)
			::nape::geom::Vec2 _this = tmp11;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				bool tmp12 = (_this != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(57)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(57)
				if ((tmp12)){
					HX_STACK_LINE(57)
					tmp13 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(57)
					tmp13 = false;
				}
				HX_STACK_LINE(57)
				if ((tmp13)){
					HX_STACK_LINE(57)
					::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(57)
					::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(57)
					HX_STACK_DO_THROW(tmp15);
				}
			}
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(57)
				bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(57)
				if ((tmp12)){
					HX_STACK_LINE(57)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(57)
			tmp10 = _this->zpp_inner->y;
		}
		HX_STACK_LINE(57)
		Float tmp11 = (tmp10 - ((Float)7.5));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(57)
		::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new(tmp9,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(58)
		::phoenix::Vector tmp13 = ::phoenix::Vector_obj::__new(texture->width,texture->height,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(59)
		::phoenix::Vector tmp14 = ::phoenix::Vector_obj::__new((int)2,(int)1,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(60)
		::phoenix::Texture tmp15 = texture;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(61)
		::luxe::Entity tmp16 = this->get_entity();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(62)
		::Creature tmp17 = this->get_creature();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(62)
		bool tmp18 = tmp17->flipx;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(62)
		Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(62)
		if ((tmp18)){
			HX_STACK_LINE(62)
			tmp19 = (int)-1;
		}
		else{
			HX_STACK_LINE(62)
			tmp19 = (int)1;
		}
		HX_STACK_LINE(62)
		::phoenix::Vector tmp20 = ::phoenix::Vector_obj::__new(tmp19,(int)0,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Vector &tmp13,::phoenix::Vector &tmp20,::phoenix::Texture &tmp15,::phoenix::Vector &tmp12,::luxe::Entity &tmp16,::phoenix::Vector &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","controllers/SoldierController.hx",56,0xbc9166d8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp12,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp13,false);
					__result->Add(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66") , tmp14,false);
					__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp15,false);
					__result->Add(HX_HCSTRING("owner","\x33","\x98","\x76","\x38") , tmp16,false);
					__result->Add(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00") , tmp20,false);
					__result->Add(HX_HCSTRING("speed","\x87","\x97","\x69","\x81") , ((Dynamic)((int)128)),false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)10)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(56)
		Dynamic tmp21 = _Function_1_1::Block(tmp13,tmp20,tmp15,tmp12,tmp16,tmp14);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(56)
		::Projectile_obj::__new(tmp21);
		HX_STACK_LINE(66)
		this->fire_ready = false;
		HX_STACK_LINE(67)
		Float tmp22 = this->fire_interval;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(67)
		this->fire_ready_timer = tmp22;
		HX_STACK_LINE(68)
		::String tmp23 = this->name;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(68)
		::String tmp24 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(68)
		::String tmp25 = (tmp24 + HX_HCSTRING(" fired at time ","\x18","\x17","\x32","\xc6"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(68)
		Float tmp26 = linc::timestamp::now();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(68)
		Float tmp27 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(68)
		Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(68)
		::String tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(68)
		::String tmp30 = (HX_HCSTRING("i / soldiercontroller / ","\xbb","\x2d","\x42","\x95") + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(68)
		Dynamic tmp31 = hx::SourceInfo(HX_HCSTRING("SoldierController.hx","\xe0","\x3e","\x8b","\xa5"),68,HX_HCSTRING("controllers.SoldierController","\xc7","\xb8","\xa9","\x07"),HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(68)
		::haxe::Log_obj::trace(tmp30,tmp31);
		HX_STACK_LINE(71)
		::Creature tmp32 = this->get_creature();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(71)
		tmp32->events->fire(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoldierController_obj,fire,(void))

Void SoldierController_obj::init( ){
{
		HX_STACK_FRAME("controllers.SoldierController","init",0x914a0017,"controllers.SoldierController.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::init();
	}
return null();
}


Void SoldierController_obj::ondestroy( ){
{
		HX_STACK_FRAME("controllers.SoldierController","ondestroy",0x5b265f54,"controllers.SoldierController.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void SoldierController_obj::onremoved( ){
{
		HX_STACK_FRAME("controllers.SoldierController","onremoved",0x29a051fa,"controllers.SoldierController.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



SoldierController_obj::SoldierController_obj()
{
}

Dynamic SoldierController_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fire_ready") ) { return fire_ready; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fire_interval") ) { return fire_interval; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fire_ready_timer") ) { return fire_ready_timer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoldierController_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fire_ready") ) { fire_ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fire_interval") ) { fire_interval=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fire_ready_timer") ) { fire_ready_timer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoldierController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fire_ready","\xda","\x67","\xc0","\xe5"));
	outFields->push(HX_HCSTRING("fire_interval","\x2e","\x76","\xb5","\x72"));
	outFields->push(HX_HCSTRING("fire_ready_timer","\x60","\xce","\xeb","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(SoldierController_obj,fire_ready),HX_HCSTRING("fire_ready","\xda","\x67","\xc0","\xe5")},
	{hx::fsFloat,(int)offsetof(SoldierController_obj,fire_interval),HX_HCSTRING("fire_interval","\x2e","\x76","\xb5","\x72")},
	{hx::fsFloat,(int)offsetof(SoldierController_obj,fire_ready_timer),HX_HCSTRING("fire_ready_timer","\x60","\xce","\xeb","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fire_ready","\xda","\x67","\xc0","\xe5"),
	HX_HCSTRING("fire_interval","\x2e","\x76","\xb5","\x72"),
	HX_HCSTRING("fire_ready_timer","\x60","\xce","\xeb","\x4d"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoldierController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoldierController_obj::__mClass,"__mClass");
};

#endif

hx::Class SoldierController_obj::__mClass;

void SoldierController_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("controllers.SoldierController","\xc7","\xb8","\xa9","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoldierController_obj >;
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

} // end namespace controllers
