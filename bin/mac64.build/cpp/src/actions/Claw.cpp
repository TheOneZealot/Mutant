#include <hxcpp.h>

#ifndef INCLUDED_Action
#include <Action.h>
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
#ifndef INCLUDED_actions_Claw
#include <actions/Claw.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
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
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_physics_nape_PhysicsNape
#include <luxe/physics/nape/PhysicsNape.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
namespace actions{

Void Claw_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("actions.Claw","new",0x02bd9302,"actions.Claw.new","actions/Claw.hx",12,0x4b93b4cd)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(15)
	this->hit_area = ::nape::geom::AABB_obj::__new((int)6,(int)-8,(int)16,(int)8);
	HX_STACK_LINE(14)
	this->damage = (int)1;
	HX_STACK_LINE(12)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	super::__construct(tmp);
}
;
	return null();
}

//Claw_obj::~Claw_obj() { }

Dynamic Claw_obj::__CreateEmpty() { return  new Claw_obj; }
hx::ObjectPtr< Claw_obj > Claw_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Claw_obj > _result_ = new Claw_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Claw_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Claw_obj > _result_ = new Claw_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Claw_obj::act( ){
{
		HX_STACK_FRAME("actions.Claw","act",0x02b3b3f4,"actions.Claw.act","actions/Claw.hx",20,0x4b93b4cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		this->super::act();
		HX_STACK_LINE(23)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		{
			HX_STACK_LINE(23)
			::nape::geom::AABB tmp1 = this->hit_area;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(23)
			::nape::geom::AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(23)
			{
				HX_STACK_LINE(23)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(23)
				bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(23)
				if ((tmp2)){
					HX_STACK_LINE(23)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(23)
			tmp = _this->zpp_inner->minx;
		}
		HX_STACK_LINE(23)
		::Creature tmp1 = this->owner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		int tmp2 = tmp1->get_facing();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		Float hit_x = tmp3;		HX_STACK_VAR(hit_x,"hit_x");
		HX_STACK_LINE(24)
		::Creature tmp4 = this->owner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		int tmp5 = tmp4->get_facing();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		bool tmp6 = (tmp5 < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(24)
		if ((tmp6)){
			HX_STACK_LINE(24)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(24)
			{
				HX_STACK_LINE(24)
				::nape::geom::AABB tmp8 = this->hit_area;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(24)
				::nape::geom::AABB _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(24)
				{
					HX_STACK_LINE(24)
					::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(24)
					bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(24)
					if ((tmp9)){
						HX_STACK_LINE(24)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(24)
				{
					HX_STACK_LINE(24)
					::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(24)
					tmp7 = (_this1->maxx - _this1->minx);
				}
			}
			HX_STACK_LINE(24)
			hx::SubEq(hit_x,tmp7);
		}
		HX_STACK_LINE(26)
		Float tmp7 = hit_x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(26)
		::Creature tmp8 = this->owner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(26)
		::phoenix::Vector tmp9 = tmp8->get_pos();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(26)
		Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(26)
		Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(27)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			::nape::geom::AABB tmp13 = this->hit_area;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(27)
			::nape::geom::AABB _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(27)
			{
				HX_STACK_LINE(27)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(27)
				bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(27)
				if ((tmp14)){
					HX_STACK_LINE(27)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(27)
			tmp12 = _this->zpp_inner->miny;
		}
		HX_STACK_LINE(27)
		::Creature tmp13 = this->owner;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(27)
		::phoenix::Vector tmp14 = tmp13->get_pos();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(27)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(27)
		Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(28)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			::nape::geom::AABB tmp18 = this->hit_area;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(28)
			::nape::geom::AABB _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(28)
				bool tmp19 = (_this1->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(28)
				if ((tmp19)){
					HX_STACK_LINE(28)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(28)
				tmp17 = (_this1->maxx - _this1->minx);
			}
		}
		HX_STACK_LINE(28)
		Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			::nape::geom::AABB tmp19 = this->hit_area;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(28)
			::nape::geom::AABB _this = tmp19;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(28)
				bool tmp20 = (_this1->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(28)
				if ((tmp20)){
					HX_STACK_LINE(28)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(28)
				tmp18 = (_this1->maxy - _this1->miny);
			}
		}
		HX_STACK_LINE(25)
		::nape::geom::AABB tmp19 = ::nape::geom::AABB_obj::__new(tmp11,tmp16,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(25)
		::nape::geom::AABB _hit_area = tmp19;		HX_STACK_VAR(_hit_area,"_hit_area");
		HX_STACK_LINE(30)
		::luxe::Physics tmp20 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(30)
		::nape::space::Space tmp21 = tmp20->nape->space;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(30)
		::nape::geom::AABB tmp22 = _hit_area;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(30)
		Dynamic tmp23 = ::Physics_obj::filters;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(30)
		::nape::dynamics::InteractionFilter tmp24 = tmp23->__Field(HX_HCSTRING("projectile","\xe9","\x85","\x8b","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(30)
		::nape::phys::BodyList tmp25 = tmp21->bodiesInAABB(tmp22,false,true,tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(30)
		::nape::phys::BodyList bodies = tmp25;		HX_STACK_VAR(bodies,"bodies");
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::nape::phys::BodyIterator tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(31)
			{
				HX_STACK_LINE(31)
				bodies->zpp_inner->valmod();
				HX_STACK_LINE(31)
				::nape::phys::BodyList tmp27 = bodies;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(31)
				tmp26 = ::nape::phys::BodyIterator_obj::get(tmp27);
			}
			HX_STACK_LINE(31)
			::nape::phys::BodyIterator _g = tmp26;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(31)
			while((true)){
				HX_STACK_LINE(31)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(31)
				{
					HX_STACK_LINE(31)
					::zpp_nape::util::ZPP_BodyList tmp28 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(31)
					tmp28->valmod();
					HX_STACK_LINE(31)
					int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(31)
					{
						HX_STACK_LINE(31)
						::nape::phys::BodyList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(31)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(31)
						bool tmp30 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(31)
						if ((tmp30)){
							HX_STACK_LINE(31)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(31)
							{
								HX_STACK_LINE(31)
								::zpp_nape::util::ZNPList_ZPP_Body tmp31 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(31)
								_this->zpp_inner->user_length = tmp31->length;
							}
						}
						HX_STACK_LINE(31)
						tmp29 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(31)
					int length = tmp29;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(31)
					_g->zpp_critical = true;
					HX_STACK_LINE(31)
					bool tmp30 = (_g->zpp_i < length);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(31)
					if ((tmp30)){
						HX_STACK_LINE(31)
						tmp27 = true;
					}
					else{
						HX_STACK_LINE(31)
						{
							HX_STACK_LINE(31)
							::nape::phys::BodyIterator tmp31 = ::nape::phys::BodyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(31)
							_g->zpp_next = tmp31;
							HX_STACK_LINE(31)
							::nape::phys::BodyIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(31)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(31)
						tmp27 = false;
					}
				}
				HX_STACK_LINE(31)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(31)
				if ((tmp28)){
					HX_STACK_LINE(31)
					break;
				}
				HX_STACK_LINE(31)
				::nape::phys::Body tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(31)
				{
					HX_STACK_LINE(31)
					_g->zpp_critical = false;
					HX_STACK_LINE(31)
					int tmp30 = (_g->zpp_i)++;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(31)
					tmp29 = _g->zpp_inner->at(tmp30);
				}
				HX_STACK_LINE(31)
				::nape::phys::Body body = tmp29;		HX_STACK_VAR(body,"body");
				HX_STACK_LINE(33)
				Dynamic tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(33)
					Dynamic tmp31 = body->zpp_inner_i->userData;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(33)
					bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(33)
					if ((tmp32)){
						struct _Function_5_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","actions/Claw.hx",33,0x4b93b4cd)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(33)
						Dynamic tmp33 = _Function_5_1::Block();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(33)
						body->zpp_inner_i->userData = tmp33;
					}
					HX_STACK_LINE(33)
					tmp30 = body->zpp_inner_i->userData;
				}
				HX_STACK_LINE(33)
				::Creature creature = ((::Creature)(tmp30->__Field(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"), hx::paccDynamic )));		HX_STACK_VAR(creature,"creature");
				HX_STACK_LINE(34)
				bool tmp31 = (creature == null());		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(34)
				bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(34)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(34)
				if ((tmp32)){
					HX_STACK_LINE(34)
					::Creature tmp34 = creature;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(34)
					::Creature tmp35 = this->owner;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(34)
					::Creature tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(34)
					tmp33 = (tmp34 == tmp36);
				}
				else{
					HX_STACK_LINE(34)
					tmp33 = true;
				}
				HX_STACK_LINE(34)
				if ((tmp33)){
					HX_STACK_LINE(34)
					continue;
				}
				HX_STACK_LINE(36)
				::Creature tmp34 = this->owner;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(36)
				::String tmp35 = tmp34->get_name();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(36)
				::String tmp36 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(36)
				::String tmp37 = (tmp36 + HX_HCSTRING(" hit ","\x8d","\xd2","\xe0","\xb1"));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(36)
				::String tmp38 = creature->get_name();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(36)
				::String tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(36)
				::String tmp40 = (tmp39 + HX_HCSTRING(" with ","\x3a","\x5b","\xda","\x95"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(36)
				::String tmp41 = this->get_name();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(36)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(36)
				::String tmp43 = (HX_HCSTRING("     i / claw / ","\x2a","\x6f","\x41","\xfc") + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(36)
				Dynamic tmp44 = hx::SourceInfo(HX_HCSTRING("Claw.hx","\x1f","\xf8","\x52","\x39"),36,HX_HCSTRING("actions.Claw","\x10","\xaa","\x7b","\xb5"),HX_HCSTRING("act","\x52","\xf1","\x49","\x00"));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(36)
				::haxe::Log_obj::trace(tmp43,tmp44);
				HX_STACK_LINE(37)
				int tmp45 = this->damage;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(37)
				::Creature tmp46 = this->owner;		HX_STACK_VAR(tmp46,"tmp46");
				struct _Function_3_1{
					inline static Dynamic Block( ::Creature &tmp46,int &tmp45){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","actions/Claw.hx",37,0x4b93b4cd)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("amount","\xd8","\x11","\x03","\xd5") , tmp45,false);
							__result->Add(HX_HCSTRING("attacker","\x35","\xd6","\xdc","\x00") , tmp46,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(37)
				Dynamic tmp47 = _Function_3_1::Block(tmp46,tmp45);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(37)
				creature->events->fire(HX_HCSTRING("health.damage.*","\x7d","\xb4","\x33","\xb6"),tmp47,null());
			}
		}
		HX_STACK_LINE(40)
		::phoenix::geometry::RectangleGeometry tmp26 = this->debug_geom;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(40)
		bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(40)
		if ((tmp27)){
			HX_STACK_LINE(40)
			::phoenix::geometry::RectangleGeometry tmp28 = this->debug_geom;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(40)
			tmp28->drop(null());
		}
		HX_STACK_LINE(41)
		::luxe::Draw tmp28 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(42)
		Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				::zpp_nape::geom::ZPP_AABB _this = _hit_area->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(42)
				bool tmp30 = (_this->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(42)
				if ((tmp30)){
					HX_STACK_LINE(42)
					_this->_validate();
				}
			}
			HX_STACK_LINE(42)
			tmp29 = _hit_area->zpp_inner->minx;
		}
		HX_STACK_LINE(42)
		Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				::zpp_nape::geom::ZPP_AABB _this = _hit_area->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(42)
				bool tmp31 = (_this->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(42)
				if ((tmp31)){
					HX_STACK_LINE(42)
					_this->_validate();
				}
			}
			HX_STACK_LINE(42)
			tmp30 = _hit_area->zpp_inner->miny;
		}
		HX_STACK_LINE(43)
		Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				::zpp_nape::geom::ZPP_AABB _this = _hit_area->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(43)
				bool tmp32 = (_this->_validate != null());		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(43)
				if ((tmp32)){
					HX_STACK_LINE(43)
					_this->_validate();
				}
			}
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				::zpp_nape::geom::ZPP_AABB _this = _hit_area->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(43)
				tmp31 = (_this->maxx - _this->minx);
			}
		}
		HX_STACK_LINE(43)
		Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				::zpp_nape::geom::ZPP_AABB _this = _hit_area->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(43)
				bool tmp33 = (_this->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(43)
				if ((tmp33)){
					HX_STACK_LINE(43)
					_this->_validate();
				}
			}
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				::zpp_nape::geom::ZPP_AABB _this = _hit_area->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(43)
				tmp32 = (_this->maxy - _this->miny);
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp31,Float &tmp29,Float &tmp32,Float &tmp30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","actions/Claw.hx",41,0x4b93b4cd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp29,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp30,false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp31,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp32,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)1000)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(41)
		Dynamic tmp33 = _Function_1_1::Block(tmp31,tmp29,tmp32,tmp30);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(41)
		::phoenix::geometry::RectangleGeometry tmp34 = tmp28->rectangle(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(41)
		this->debug_geom = tmp34;
	}
return null();
}



Claw_obj::Claw_obj()
{
}

void Claw_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Claw);
	HX_MARK_MEMBER_NAME(damage,"damage");
	HX_MARK_MEMBER_NAME(hit_area,"hit_area");
	HX_MARK_MEMBER_NAME(debug_geom,"debug_geom");
	::Action_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Claw_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(damage,"damage");
	HX_VISIT_MEMBER_NAME(hit_area,"hit_area");
	HX_VISIT_MEMBER_NAME(debug_geom,"debug_geom");
	::Action_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Claw_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"act") ) { return act_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"damage") ) { return damage; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hit_area") ) { return hit_area; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debug_geom") ) { return debug_geom; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Claw_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"damage") ) { damage=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hit_area") ) { hit_area=inValue.Cast< ::nape::geom::AABB >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debug_geom") ) { debug_geom=inValue.Cast< ::phoenix::geometry::RectangleGeometry >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Claw_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d"));
	outFields->push(HX_HCSTRING("hit_area","\x39","\x94","\xb7","\x9f"));
	outFields->push(HX_HCSTRING("debug_geom","\x68","\x7b","\x29","\x63"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Claw_obj,damage),HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d")},
	{hx::fsObject /*::nape::geom::AABB*/ ,(int)offsetof(Claw_obj,hit_area),HX_HCSTRING("hit_area","\x39","\x94","\xb7","\x9f")},
	{hx::fsObject /*::phoenix::geometry::RectangleGeometry*/ ,(int)offsetof(Claw_obj,debug_geom),HX_HCSTRING("debug_geom","\x68","\x7b","\x29","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d"),
	HX_HCSTRING("hit_area","\x39","\x94","\xb7","\x9f"),
	HX_HCSTRING("debug_geom","\x68","\x7b","\x29","\x63"),
	HX_HCSTRING("act","\x52","\xf1","\x49","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Claw_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Claw_obj::__mClass,"__mClass");
};

#endif

hx::Class Claw_obj::__mClass;

void Claw_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actions.Claw","\x10","\xaa","\x7b","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Claw_obj >;
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

} // end namespace actions
