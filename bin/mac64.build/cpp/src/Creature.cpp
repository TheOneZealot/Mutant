#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Action
#include <Action.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
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
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
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
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_luxe_components_physics_nape_BoxCollider
#include <luxe/components/physics/nape/BoxCollider.h>
#endif
#ifndef INCLUDED_luxe_components_physics_nape_NapeBody
#include <luxe/components/physics/nape/NapeBody.h>
#endif
#ifndef INCLUDED_luxe_components_sprite_SpriteAnimation
#include <luxe/components/sprite/SpriteAnimation.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif

Void Creature_obj::__construct(::String _name,::phoenix::Vector _pos,::phoenix::Vector _size,::phoenix::Vector _bounds)
{
HX_STACK_FRAME("Creature","new",0x2a0dde51,"Creature.new","Creature.hx",18,0xc6ca163f)
HX_STACK_THIS(this)
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(_pos,"_pos")
HX_STACK_ARG(_size,"_size")
HX_STACK_ARG(_bounds,"_bounds")
{
	HX_STACK_LINE(27)
	this->exp_on_kill = (int)0;
	HX_STACK_LINE(26)
	this->max_health = (int)10;
	HX_STACK_LINE(25)
	this->health = (int)10;
	HX_STACK_LINE(36)
	::Creature _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(39)
	Float tmp = (Float(_bounds->x) / Float((int)2));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	Float radius = tmp;		HX_STACK_VAR(radius,"radius");
	HX_STACK_LINE(40)
	Float tmp1 = (Float(_bounds->y) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	Float half_height = tmp1;		HX_STACK_VAR(half_height,"half_height");
	HX_STACK_LINE(41)
	Float tmp2 = (_size->y - _bounds->y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	Float delta = tmp3;		HX_STACK_VAR(delta,"delta");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &_name,::phoenix::Vector &_pos,::phoenix::Vector &_size){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",44,0xc6ca163f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _name,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , _pos,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , _size,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)20)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(44)
	Dynamic tmp4 = _Function_1_1::Block(_name,_pos,_size);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	super::__construct(tmp4);
	HX_STACK_LINE(51)
	::phoenix::geometry::Geometry tmp5 = this->geometry;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	Float tmp6 = delta;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(51)
	::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new((int)0,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(51)
	tmp5->translate(tmp8);
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(56)
		Float tmp9 = _pos->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(56)
		Float tmp10 = _pos->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(57)
		Float tmp11 = _bounds->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(57)
		Float tmp12 = _bounds->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(58)
		::nape::phys::BodyType tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::nape::phys::BodyType tmp14 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(58)
			bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(58)
			if ((tmp15)){
				HX_STACK_LINE(58)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(58)
				::nape::phys::BodyType tmp16 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(58)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = tmp16;
				HX_STACK_LINE(58)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(58)
			tmp13 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
		}
		struct _Function_2_1{
			inline static Dynamic Block( ::nape::phys::BodyType &tmp13,Float &tmp9,Float &tmp11,Float &tmp10,Float &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",54,0xc6ca163f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp9,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp10,false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp11,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp12,false);
					__result->Add(HX_HCSTRING("body_type","\xb7","\xc8","\xf4","\x2c") , tmp13,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(54)
		Dynamic tmp14 = _Function_2_1::Block(tmp13,tmp9,tmp11,tmp10,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(54)
		::luxe::components::physics::nape::BoxCollider tmp15 = ::luxe::components::physics::nape::BoxCollider_obj::__new(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(54)
		::luxe::components::physics::nape::BoxCollider tmp16 = this->collider = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(54)
		::luxe::components::physics::nape::BoxCollider _component = tmp16;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(54)
		(this->component_count)++;
		HX_STACK_LINE(54)
		::luxe::components::Components tmp17 = this->_components;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(54)
		::luxe::components::physics::nape::BoxCollider tmp18 = _component;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(54)
		tmp17->add(tmp18);
	}
	HX_STACK_LINE(60)
	::luxe::components::physics::nape::BoxCollider tmp9 = this->collider;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(60)
	this->body = tmp9->body;
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::nape::callbacks::CbTypeList tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::nape::phys::Body tmp11 = this->body;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(61)
			::nape::phys::Body _this = tmp11;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(61)
			::nape::callbacks::CbTypeList tmp12 = _this->zpp_inner_i->wrap_cbTypes;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(61)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(61)
			if ((tmp13)){
				HX_STACK_LINE(61)
				_this->zpp_inner_i->setupcbTypes();
			}
			HX_STACK_LINE(61)
			tmp10 = _this->zpp_inner_i->wrap_cbTypes;
		}
		HX_STACK_LINE(61)
		::nape::callbacks::CbTypeList _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(61)
		Dynamic tmp11 = ::Physics_obj::types;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		::nape::callbacks::CbType obj = tmp11->__Field(HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c"), hx::paccDynamic );		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(61)
		bool tmp12 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(61)
		if ((tmp12)){
			HX_STACK_LINE(61)
			::nape::callbacks::CbType tmp13 = obj;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(61)
			_this->push(tmp13);
		}
		else{
			HX_STACK_LINE(61)
			::nape::callbacks::CbType tmp13 = obj;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(61)
			_this->unshift(tmp13);
		}
	}
	HX_STACK_LINE(62)
	Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		::nape::phys::Body tmp11 = this->body;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(62)
		::nape::phys::Body _this = tmp11;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(62)
		Dynamic tmp12 = _this->zpp_inner_i->userData;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(62)
		bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(62)
		if ((tmp13)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",62,0xc6ca163f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(62)
			Dynamic tmp14 = _Function_3_1::Block();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(62)
			_this->zpp_inner_i->userData = tmp14;
		}
		HX_STACK_LINE(62)
		tmp10 = _this->zpp_inner_i->userData;
	}
	HX_STACK_LINE(62)
	tmp10->__FieldRef(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05")) = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::nape::phys::Body tmp11 = this->body;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(63)
		::nape::phys::Body _this = tmp11;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			::String tmp12 = HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb");		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(63)
			::String tmp13 = (HX_HCSTRING("Body::","\x02","\x8e","\x7d","\x8f") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(63)
			_this->zpp_inner->immutable_midstep(tmp13);
			HX_STACK_LINE(63)
			bool tmp14 = _this->zpp_inner->norotate;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(63)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(63)
			bool tmp16 = (tmp15 != false);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(63)
			if ((tmp16)){
				HX_STACK_LINE(63)
				bool tmp17 = true;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(63)
				_this->zpp_inner->norotate = tmp17;
				HX_STACK_LINE(63)
				_this->zpp_inner->invalidate_inertia();
			}
		}
		HX_STACK_LINE(63)
		bool tmp12 = _this->zpp_inner->norotate;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(63)
		!(tmp12);
	}
	HX_STACK_LINE(66)
	this->actions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(69)
	::luxe::Events tmp11 = ::GameState_obj::events;		HX_STACK_VAR(tmp11,"tmp11");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::Creature,_g)
	int __ArgCount() const { return 1; }
	Void run(Dynamic _){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","Creature.hx",69,0xc6ca163f)
		HX_STACK_ARG(_,"_")
		{
			HX_STACK_LINE(70)
			bool tmp12 = (_g->animation != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(70)
			if ((tmp12)){
				HX_STACK_LINE(70)
				_g->animation->stop();
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(69)
	tmp11->listen(HX_HCSTRING("paused.enter","\x58","\xfd","\xbb","\xe0"), Dynamic(new _Function_1_2(_g)));
	HX_STACK_LINE(72)
	::luxe::Events tmp12 = ::GameState_obj::events;		HX_STACK_VAR(tmp12,"tmp12");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,::Creature,_g)
	int __ArgCount() const { return 1; }
	Void run(Dynamic _){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","Creature.hx",72,0xc6ca163f)
		HX_STACK_ARG(_,"_")
		{
			HX_STACK_LINE(73)
			bool tmp13 = (_g->animation != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(73)
			if ((tmp13)){
				HX_STACK_LINE(73)
				_g->animation->play();
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(72)
	tmp12->listen(HX_HCSTRING("paused.leave","\x37","\xc5","\x88","\xe2"), Dynamic(new _Function_1_3(_g)));
	HX_STACK_LINE(76)
	::luxe::Events tmp13 = this->events;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(76)
	Dynamic tmp14 = this->health_heal_any_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(76)
	tmp13->listen(HX_HCSTRING("health.heal.*","\xf6","\xa4","\x2d","\x82"),tmp14);
	HX_STACK_LINE(77)
	::luxe::Events tmp15 = this->events;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(77)
	Dynamic tmp16 = this->health_damage_any_dyn();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(77)
	tmp15->listen(HX_HCSTRING("health.damage.*","\x7d","\xb4","\x33","\xb6"),tmp16);
	HX_STACK_LINE(78)
	::luxe::Events tmp17 = this->events;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(78)
	Dynamic tmp18 = this->kill_dyn();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(78)
	tmp17->listen(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),tmp18);
}
;
	return null();
}

//Creature_obj::~Creature_obj() { }

Dynamic Creature_obj::__CreateEmpty() { return  new Creature_obj; }
hx::ObjectPtr< Creature_obj > Creature_obj::__new(::String _name,::phoenix::Vector _pos,::phoenix::Vector _size,::phoenix::Vector _bounds)
{  hx::ObjectPtr< Creature_obj > _result_ = new Creature_obj();
	_result_->__construct(_name,_pos,_size,_bounds);
	return _result_;}

Dynamic Creature_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Creature_obj > _result_ = new Creature_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Creature_obj::update( Float dt){
{
		HX_STACK_FRAME("Creature","update",0xe49e04b8,"Creature.update","Creature.hx",82,0xc6ca163f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(83)
		bool tmp = ::GameState_obj::paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		if ((tmp)){
			HX_STACK_LINE(83)
			return null();
		}
	}
return null();
}


Void Creature_obj::set_animation( ::String anim_name){
{
		HX_STACK_FRAME("Creature","set_animation",0x44adea18,"Creature.set_animation","Creature.hx",87,0xc6ca163f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(anim_name,"anim_name")
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::luxe::components::sprite::SpriteAnimation tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(88)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(88)
			if ((tmp1)){
				HX_STACK_LINE(230)
				::String tmp2 = HX_HCSTRING(" ( cant set animation because the component equals null","\x1e","\x04","\xfa","\xd2");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(230)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(88)
				::String tmp4 = (HX_HCSTRING("animation was null","\x7a","\xe9","\x8c","\x9c") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(88)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::null_assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(88)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(90)
		::luxe::components::sprite::SpriteAnimation tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		::String tmp1 = tmp->animation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		::String tmp2 = anim_name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		if ((tmp3)){
			HX_STACK_LINE(92)
			::luxe::components::sprite::SpriteAnimation tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(92)
			::String tmp5 = anim_name;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			tmp4->set_animation(tmp5);
			HX_STACK_LINE(93)
			::luxe::components::sprite::SpriteAnimation tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			this->default_anim_speed = tmp6->speed;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Creature_obj,set_animation,(void))

Void Creature_obj::health_heal_any( Dynamic args){
{
		HX_STACK_FRAME("Creature","health_heal_any",0x6eababc9,"Creature.health_heal_any","Creature.hx",98,0xc6ca163f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(args,"args")
		HX_STACK_LINE(99)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int tmp1 = this->health;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(99)
			int tmp2 = args->__Field(HX_HCSTRING("amount","\xd8","\x11","\x03","\xd5"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(99)
			int value = tmp3;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(99)
			int tmp4 = this->max_health;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			int b = tmp4;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(99)
			bool tmp5 = (value < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			if ((tmp5)){
				HX_STACK_LINE(99)
				tmp = (int)0;
			}
			else{
				HX_STACK_LINE(99)
				bool tmp6 = (value > b);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(99)
				if ((tmp6)){
					HX_STACK_LINE(99)
					tmp = b;
				}
				else{
					HX_STACK_LINE(99)
					tmp = value;
				}
			}
		}
		HX_STACK_LINE(99)
		this->health = tmp;
		HX_STACK_LINE(100)
		::String tmp1 = this->get_name();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		::String tmp3 = (tmp2 + HX_HCSTRING(" healed ","\x99","\x3e","\xa0","\x8e"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		int tmp4 = args->__Field(HX_HCSTRING("amount","\xd8","\x11","\x03","\xd5"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		::String tmp6 = (tmp5 + HX_HCSTRING(" health ","\xe4","\xa3","\xab","\x8e"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		int tmp7 = this->health;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(100)
		::String tmp9 = (tmp8 + HX_HCSTRING(" of ","\x09","\x67","\x7b","\x15"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		int tmp10 = this->max_health;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(100)
		::String tmp12 = (tmp11 + HX_HCSTRING(" left","\x27","\x98","\x82","\xb4"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		::String tmp13 = (HX_HCSTRING(" i / creature / ","\x4a","\x81","\xb5","\x3f") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Creature.hx","\x3f","\x16","\xca","\xc6"),100,HX_HCSTRING("Creature","\xdf","\x61","\xb2","\x05"),HX_HCSTRING("health_heal_any","\x58","\xf8","\x5b","\x25"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(100)
		::haxe::Log_obj::trace(tmp13,tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Creature_obj,health_heal_any,(void))

Void Creature_obj::health_damage_any( Dynamic args){
{
		HX_STACK_FRAME("Creature","health_damage_any",0x403fd790,"Creature.health_damage_any","Creature.hx",104,0xc6ca163f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(args,"args")
		HX_STACK_LINE(103)
		::Creature _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int tmp1 = this->health;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(105)
			int tmp2 = args->__Field(HX_HCSTRING("amount","\xd8","\x11","\x03","\xd5"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(105)
			int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			int value = tmp3;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(105)
			int tmp4 = this->max_health;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(105)
			int b = tmp4;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(105)
			bool tmp5 = (value < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(105)
			if ((tmp5)){
				HX_STACK_LINE(105)
				tmp = (int)0;
			}
			else{
				HX_STACK_LINE(105)
				bool tmp6 = (value > b);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(105)
				if ((tmp6)){
					HX_STACK_LINE(105)
					tmp = b;
				}
				else{
					HX_STACK_LINE(105)
					tmp = value;
				}
			}
		}
		HX_STACK_LINE(105)
		this->health = tmp;
		HX_STACK_LINE(106)
		::String tmp1 = this->get_name();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		::String tmp3 = (tmp2 + HX_HCSTRING(" took ","\xc9","\x1c","\x9a","\xdf"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		int tmp4 = args->__Field(HX_HCSTRING("amount","\xd8","\x11","\x03","\xd5"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(106)
		::String tmp6 = (tmp5 + HX_HCSTRING(" damage ","\xb1","\x14","\x68","\x30"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(106)
		int tmp7 = this->health;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(106)
		::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(106)
		::String tmp9 = (tmp8 + HX_HCSTRING(" of ","\x09","\x67","\x7b","\x15"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(106)
		int tmp10 = this->max_health;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(106)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(106)
		::String tmp12 = (tmp11 + HX_HCSTRING(" left","\x27","\x98","\x82","\xb4"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(106)
		::String tmp13 = (HX_HCSTRING(" i / creature / ","\x4a","\x81","\xb5","\x3f") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(106)
		Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Creature.hx","\x3f","\x16","\xca","\xc6"),106,HX_HCSTRING("Creature","\xdf","\x61","\xb2","\x05"),HX_HCSTRING("health_damage_any","\xdf","\xa5","\x07","\x3d"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(106)
		::haxe::Log_obj::trace(tmp13,tmp14);
		HX_STACK_LINE(107)
		int tmp15 = this->health;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(107)
		bool tmp16 = (tmp15 <= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(107)
		if ((tmp16)){
			HX_STACK_LINE(110)
			bool tmp17 = true;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(110)
			if ((tmp17)){

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,args,::Creature,_g)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","Creature.hx",110,0xc6ca163f)
					{
						struct _Function_4_1{
							inline static Dynamic Block( Dynamic &args){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",110,0xc6ca163f)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("killer","\x8b","\xdb","\xf7","\x84") , args->__Field(HX_HCSTRING("attacker","\x35","\xd6","\xdc","\x00"), hx::paccDynamic ),false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(110)
						Dynamic tmp18 = _Function_4_1::Block(args);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(110)
						_g->events->fire(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),tmp18,null());
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(110)
				::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )( Dynamic(new _Function_3_1(args,_g)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Creature_obj,health_damage_any,(void))

Void Creature_obj::kill( Dynamic args){
{
		HX_STACK_FRAME("Creature","kill",0xa01c048d,"Creature.kill","Creature.hx",115,0xc6ca163f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(args,"args")
		HX_STACK_LINE(116)
		::String tmp = this->get_name();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		::String tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		::String tmp2 = (tmp1 + HX_HCSTRING(" died or was already dead","\x44","\x2a","\xe9","\x36"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		::String tmp3 = (HX_HCSTRING(" i / creature / ","\x4a","\x81","\xb5","\x3f") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Creature.hx","\x3f","\x16","\xca","\xc6"),116,HX_HCSTRING("Creature","\xdf","\x61","\xb2","\x05"),HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		::haxe::Log_obj::trace(tmp3,tmp4);
		HX_STACK_LINE(117)
		::String tmp5 = this->get_name();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		bool tmp6 = (tmp5 == HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		if ((tmp6)){
			HX_STACK_LINE(119)
			::luxe::Events tmp7 = ::Luxe_obj::events;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(119)
			tmp7->fire(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),null(),null());
		}
		else{
			HX_STACK_LINE(123)
			::Creature creature = ((::Creature)(args->__Field(HX_HCSTRING("killer","\x8b","\xdb","\xf7","\x84"), hx::paccDynamic )));		HX_STACK_VAR(creature,"creature");
			HX_STACK_LINE(124)
			bool tmp7 = (creature != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			if ((tmp7)){
				HX_STACK_LINE(126)
				int tmp8 = this->exp_on_kill;		HX_STACK_VAR(tmp8,"tmp8");
				struct _Function_3_1{
					inline static Dynamic Block( hx::ObjectPtr< ::Creature_obj > __this,int &tmp8){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",126,0xc6ca163f)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("amount","\xd8","\x11","\x03","\xd5") , tmp8,false);
							__result->Add(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32") , __this,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(126)
				Dynamic tmp9 = _Function_3_1::Block(this,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(126)
				creature->events->fire(HX_HCSTRING("exp.gain.kill","\xdc","\xce","\xa3","\x9d"),tmp9,null());
			}
			HX_STACK_LINE(129)
			this->destroy(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Creature_obj,kill,(void))

int Creature_obj::get_facing( ){
	HX_STACK_FRAME("Creature","get_facing",0x1e5bb112,"Creature.get_facing","Creature.hx",133,0xc6ca163f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(133)
	bool tmp = this->flipx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	if ((tmp)){
		HX_STACK_LINE(133)
		tmp1 = (int)-1;
	}
	else{
		HX_STACK_LINE(133)
		tmp1 = (int)1;
	}
	HX_STACK_LINE(133)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Creature_obj,get_facing,return )

Float Creature_obj::get_speed_x( ){
	HX_STACK_FRAME("Creature","get_speed_x",0xb1f16188,"Creature.get_speed_x","Creature.hx",134,0xc6ca163f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	{
		HX_STACK_LINE(134)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::Controller tmp2 = this->controller;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(134)
			::nape::phys::Body tmp3 = tmp2->get_body();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(134)
			::nape::phys::Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(134)
			::nape::geom::Vec2 tmp4 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			if ((tmp5)){
				HX_STACK_LINE(134)
				_this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(134)
			tmp1 = _this->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(134)
		::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(134)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(134)
			if ((tmp2)){
				HX_STACK_LINE(134)
				tmp3 = _this->zpp_disp;
			}
			else{
				HX_STACK_LINE(134)
				tmp3 = false;
			}
			HX_STACK_LINE(134)
			if ((tmp3)){
				HX_STACK_LINE(134)
				::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(134)
				::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(134)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(134)
			bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(134)
			if ((tmp2)){
				HX_STACK_LINE(134)
				_this1->_validate();
			}
		}
		HX_STACK_LINE(134)
		tmp = _this->zpp_inner->x;
	}
	HX_STACK_LINE(134)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Creature_obj,get_speed_x,return )

Void Creature_obj::init( ){
{
		HX_STACK_FRAME("Creature","init",0x9ecd5fff,"Creature.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Creature_obj::ondestroy( ){
{
		HX_STACK_FRAME("Creature","ondestroy",0x1cd6566c,"Creature.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Creature_obj::Creature_obj()
{
}

void Creature_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Creature);
	HX_MARK_MEMBER_NAME(controller,"controller");
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(collider,"collider");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(max_health,"max_health");
	HX_MARK_MEMBER_NAME(exp_on_kill,"exp_on_kill");
	HX_MARK_MEMBER_NAME(actions,"actions");
	HX_MARK_MEMBER_NAME(facing,"facing");
	HX_MARK_MEMBER_NAME(speed_x,"speed_x");
	HX_MARK_MEMBER_NAME(default_anim_speed,"default_anim_speed");
	::luxe::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Creature_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(controller,"controller");
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(collider,"collider");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(max_health,"max_health");
	HX_VISIT_MEMBER_NAME(exp_on_kill,"exp_on_kill");
	HX_VISIT_MEMBER_NAME(actions,"actions");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	HX_VISIT_MEMBER_NAME(speed_x,"speed_x");
	HX_VISIT_MEMBER_NAME(default_anim_speed,"default_anim_speed");
	::luxe::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Creature_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"facing") ) { return inCallProp == hx::paccAlways ? get_facing() : facing; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"actions") ) { return actions; }
		if (HX_FIELD_EQ(inName,"speed_x") ) { return inCallProp == hx::paccAlways ? get_speed_x() : speed_x; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { return collider; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { return controller; }
		if (HX_FIELD_EQ(inName,"max_health") ) { return max_health; }
		if (HX_FIELD_EQ(inName,"get_facing") ) { return get_facing_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"exp_on_kill") ) { return exp_on_kill; }
		if (HX_FIELD_EQ(inName,"get_speed_x") ) { return get_speed_x_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_animation") ) { return set_animation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"health_heal_any") ) { return health_heal_any_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"health_damage_any") ) { return health_damage_any_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"default_anim_speed") ) { return default_anim_speed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Creature_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { facing=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"actions") ) { actions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed_x") ) { speed_x=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { collider=inValue.Cast< ::luxe::components::physics::nape::BoxCollider >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::luxe::components::sprite::SpriteAnimation >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { controller=inValue.Cast< ::Controller >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_health") ) { max_health=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"exp_on_kill") ) { exp_on_kill=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"default_anim_speed") ) { default_anim_speed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Creature_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04"));
	outFields->push(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));
	outFields->push(HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"));
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	outFields->push(HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"));
	outFields->push(HX_HCSTRING("max_health","\x17","\x8c","\x50","\x08"));
	outFields->push(HX_HCSTRING("exp_on_kill","\x1c","\xf5","\x29","\x7b"));
	outFields->push(HX_HCSTRING("actions","\xfd","\x03","\x2e","\x67"));
	outFields->push(HX_HCSTRING("facing","\x1a","\x3f","\x05","\xe4"));
	outFields->push(HX_HCSTRING("speed_x","\x80","\x1a","\xa4","\xe0"));
	outFields->push(HX_HCSTRING("default_anim_speed","\x97","\x61","\x0e","\xd5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Controller*/ ,(int)offsetof(Creature_obj,controller),HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04")},
	{hx::fsObject /*::luxe::components::sprite::SpriteAnimation*/ ,(int)offsetof(Creature_obj,animation),HX_HCSTRING("animation","\x04","\xef","\x34","\x4b")},
	{hx::fsObject /*::luxe::components::physics::nape::BoxCollider*/ ,(int)offsetof(Creature_obj,collider),HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9")},
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(Creature_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{hx::fsInt,(int)offsetof(Creature_obj,health),HX_HCSTRING("health","\x9c","\x28","\x06","\xfd")},
	{hx::fsInt,(int)offsetof(Creature_obj,max_health),HX_HCSTRING("max_health","\x17","\x8c","\x50","\x08")},
	{hx::fsInt,(int)offsetof(Creature_obj,exp_on_kill),HX_HCSTRING("exp_on_kill","\x1c","\xf5","\x29","\x7b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Creature_obj,actions),HX_HCSTRING("actions","\xfd","\x03","\x2e","\x67")},
	{hx::fsInt,(int)offsetof(Creature_obj,facing),HX_HCSTRING("facing","\x1a","\x3f","\x05","\xe4")},
	{hx::fsFloat,(int)offsetof(Creature_obj,speed_x),HX_HCSTRING("speed_x","\x80","\x1a","\xa4","\xe0")},
	{hx::fsFloat,(int)offsetof(Creature_obj,default_anim_speed),HX_HCSTRING("default_anim_speed","\x97","\x61","\x0e","\xd5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04"),
	HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),
	HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"),
	HX_HCSTRING("max_health","\x17","\x8c","\x50","\x08"),
	HX_HCSTRING("exp_on_kill","\x1c","\xf5","\x29","\x7b"),
	HX_HCSTRING("actions","\xfd","\x03","\x2e","\x67"),
	HX_HCSTRING("facing","\x1a","\x3f","\x05","\xe4"),
	HX_HCSTRING("speed_x","\x80","\x1a","\xa4","\xe0"),
	HX_HCSTRING("default_anim_speed","\x97","\x61","\x0e","\xd5"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("set_animation","\xe7","\xa4","\x9e","\x51"),
	HX_HCSTRING("health_heal_any","\x58","\xf8","\x5b","\x25"),
	HX_HCSTRING("health_damage_any","\xdf","\xa5","\x07","\x3d"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("get_facing","\xe3","\xae","\x8c","\xd4"),
	HX_HCSTRING("get_speed_x","\x97","\x7a","\x9e","\x66"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Creature_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Creature_obj::__mClass,"__mClass");
};

#endif

hx::Class Creature_obj::__mClass;

void Creature_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Creature","\xdf","\x61","\xb2","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Creature_obj >;
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

