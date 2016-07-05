#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_AIController
#include <AIController.h>
#endif
#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_controllers_SoldierController
#include <controllers/SoldierController.h>
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
#ifndef INCLUDED_luxe_components_sprite_SpriteAnimation
#include <luxe/components/sprite/SpriteAnimation.h>
#endif
#ifndef INCLUDED_luxe_resource_JSONResource
#include <luxe/resource/JSONResource.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
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
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetJSON
#include <snow/systems/assets/AssetJSON.h>
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
namespace creatures{

Void Soldier_obj::__construct(::phoenix::Vector _pos,::String _name)
{
HX_STACK_FRAME("creatures.Soldier","new",0x20a20bba,"creatures.Soldier.new","creatures/Soldier.hx",10,0x1640b437)
HX_STACK_THIS(this)
HX_STACK_ARG(_pos,"_pos")
HX_STACK_ARG(_name,"_name")
{
	HX_STACK_LINE(9)
	::creatures::Soldier _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(12)
	::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	::luxe::resource::Resource tmp1 = tmp->cache->get(HX_HCSTRING("assets/animations/Creature_Soldier.json","\x40","\xb2","\xdb","\x6a"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::snow::systems::assets::AssetJSON tmp2 = ((::luxe::resource::JSONResource)(tmp1))->asset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12)
	Dynamic anim_object = tmp2->json;		HX_STACK_VAR(anim_object,"anim_object");
	HX_STACK_LINE(15)
	::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(15)
	::phoenix::Vector tmp4 = _pos;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(15)
	::phoenix::Vector tmp5 = ::phoenix::Vector_obj::__new((int)16,(int)32,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(15)
	::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new((int)12,(int)30,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(15)
	super::__construct(tmp3,tmp4,tmp5,tmp6);
	HX_STACK_LINE(16)
	::luxe::Resources tmp7 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(16)
	::luxe::resource::Resource tmp8 = tmp7->cache->get(HX_HCSTRING("assets/textures/Creature_Soldier.png","\xa8","\xb5","\x53","\x57"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(16)
	::phoenix::Texture tmp9 = ((::phoenix::Texture)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(16)
	this->set_texture(tmp9);
	HX_STACK_LINE(17)
	::phoenix::Texture tmp10 = this->texture;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(17)
	::phoenix::Texture tmp11 = this->texture;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(17)
	int tmp12 = tmp11->set_filter_mag((int)9728);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(17)
	tmp10->set_filter_min(tmp12);
	HX_STACK_LINE(18)
	int tmp13 = this->max_health = (int)2;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(18)
	this->health = tmp13;
	HX_STACK_LINE(19)
	this->exp_on_kill = (int)2;
	HX_STACK_LINE(22)
	{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","creatures/Soldier.hx",22,0x1640b437)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(22)
		Dynamic tmp14 = _Function_2_1::Block();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(22)
		::luxe::components::sprite::SpriteAnimation tmp15 = ::luxe::components::sprite::SpriteAnimation_obj::__new(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(22)
		::luxe::components::sprite::SpriteAnimation tmp16 = this->animation = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(22)
		::luxe::components::sprite::SpriteAnimation _component = tmp16;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(22)
		(this->component_count)++;
		HX_STACK_LINE(22)
		::luxe::components::Components tmp17 = this->_components;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(22)
		::luxe::components::sprite::SpriteAnimation tmp18 = _component;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(22)
		tmp17->add(tmp18);
	}
	HX_STACK_LINE(23)
	::luxe::components::sprite::SpriteAnimation tmp14 = this->animation;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(23)
	Dynamic tmp15 = anim_object;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(23)
	tmp14->add_from_json_object(tmp15);
	HX_STACK_LINE(24)
	::luxe::components::sprite::SpriteAnimation tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(24)
	tmp16->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
	HX_STACK_LINE(25)
	::luxe::components::sprite::SpriteAnimation tmp17 = this->animation;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(25)
	tmp17->play();
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		::controllers::SoldierController tmp18 = ::controllers::SoldierController_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(28)
		::Controller tmp19 = this->controller = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(28)
		::Controller _component = tmp19;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(28)
		(this->component_count)++;
		HX_STACK_LINE(28)
		::luxe::components::Components tmp20 = this->_components;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(28)
		::Controller tmp21 = _component;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(28)
		tmp20->add(tmp21);
	}
	HX_STACK_LINE(29)
	::Controller tmp18 = this->controller;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(29)
	tmp18->acceleration = (int)2048;
	HX_STACK_LINE(30)
	::Controller tmp19 = this->controller;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(30)
	tmp19->max_speed = (int)128;
	HX_STACK_LINE(31)
	::Controller tmp20 = this->controller;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(31)
	tmp20->jump_impulse = (int)256;
	HX_STACK_LINE(34)
	::luxe::Events tmp21 = this->events;		HX_STACK_VAR(tmp21,"tmp21");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::creatures::Soldier,_g)
	int __ArgCount() const { return 1; }
	Void run(Dynamic _){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","creatures/Soldier.hx",34,0x1640b437)
		HX_STACK_ARG(_,"_")
		{
			HX_STACK_LINE(34)
			_g->set_animation(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(34)
	tmp21->listen(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"), Dynamic(new _Function_1_1(_g)));
}
;
	return null();
}

//Soldier_obj::~Soldier_obj() { }

Dynamic Soldier_obj::__CreateEmpty() { return  new Soldier_obj; }
hx::ObjectPtr< Soldier_obj > Soldier_obj::__new(::phoenix::Vector _pos,::String _name)
{  hx::ObjectPtr< Soldier_obj > _result_ = new Soldier_obj();
	_result_->__construct(_pos,_name);
	return _result_;}

Dynamic Soldier_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Soldier_obj > _result_ = new Soldier_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Soldier_obj::update( Float dt){
{
		HX_STACK_FRAME("creatures.Soldier","update",0x468b5eef,"creatures.Soldier.update","creatures/Soldier.hx",38,0x1640b437)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(39)
		Float tmp = dt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		this->super::update(tmp);
		HX_STACK_LINE(42)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				::Controller tmp3 = this->controller;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(42)
				::nape::phys::Body tmp4 = tmp3->get_body();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(42)
				::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(42)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(42)
				if ((tmp6)){
					HX_STACK_LINE(42)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(42)
				tmp2 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(42)
			::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				bool tmp3 = (_this != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(42)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				if ((tmp3)){
					HX_STACK_LINE(42)
					tmp4 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(42)
					tmp4 = false;
				}
				HX_STACK_LINE(42)
				if ((tmp4)){
					HX_STACK_LINE(42)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(42)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(42)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(42)
				bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(42)
				if ((tmp3)){
					HX_STACK_LINE(42)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(42)
			tmp1 = _this->zpp_inner->x;
		}
		HX_STACK_LINE(42)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		if ((tmp2)){
			HX_STACK_LINE(42)
			this->set_flipx(false);
		}
		else{
			HX_STACK_LINE(43)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(43)
				{
					HX_STACK_LINE(43)
					::Controller tmp5 = this->controller;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(43)
					::nape::phys::Body tmp6 = tmp5->get_body();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(43)
					::nape::phys::Body _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(43)
					::nape::geom::Vec2 tmp7 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(43)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(43)
					if ((tmp8)){
						HX_STACK_LINE(43)
						_this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(43)
					tmp4 = _this->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(43)
				::nape::geom::Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(43)
				{
					HX_STACK_LINE(43)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(43)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(43)
					if ((tmp5)){
						HX_STACK_LINE(43)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(43)
						tmp6 = false;
					}
					HX_STACK_LINE(43)
					if ((tmp6)){
						HX_STACK_LINE(43)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(43)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(43)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(43)
				{
					HX_STACK_LINE(43)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(43)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(43)
					if ((tmp5)){
						HX_STACK_LINE(43)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(43)
				tmp3 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(43)
			bool tmp4 = (tmp3 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			if ((tmp4)){
				HX_STACK_LINE(43)
				this->set_flipx(true);
			}
		}
		HX_STACK_LINE(46)
		::luxe::components::sprite::SpriteAnimation tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		bool tmp4 = tmp3->playing;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		bool tmp5 = (tmp4 == false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		if ((tmp5)){
			HX_STACK_LINE(48)
			this->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
		}
		else{
			HX_STACK_LINE(50)
			::Controller tmp6 = this->controller;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(50)
			bool tmp7 = tmp6->grounded;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(50)
			if ((tmp7)){
				HX_STACK_LINE(52)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					::nape::geom::Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(52)
					{
						HX_STACK_LINE(52)
						::Controller tmp10 = this->controller;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(52)
						::nape::phys::Body tmp11 = tmp10->get_body();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(52)
						::nape::phys::Body _this = tmp11;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(52)
						::nape::geom::Vec2 tmp12 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(52)
						bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(52)
						if ((tmp13)){
							HX_STACK_LINE(52)
							_this->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(52)
						tmp9 = _this->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(52)
					::nape::geom::Vec2 _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(52)
					{
						HX_STACK_LINE(52)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(52)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(52)
						if ((tmp10)){
							HX_STACK_LINE(52)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(52)
							tmp11 = false;
						}
						HX_STACK_LINE(52)
						if ((tmp11)){
							HX_STACK_LINE(52)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(52)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(52)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(52)
					{
						HX_STACK_LINE(52)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(52)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(52)
						if ((tmp10)){
							HX_STACK_LINE(52)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(52)
					tmp8 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(52)
				Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(52)
				bool tmp10 = (tmp9 > (int)16);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(52)
				if ((tmp10)){
					HX_STACK_LINE(54)
					this->set_animation(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"));
				}
				else{
					HX_STACK_LINE(56)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(56)
					{
						HX_STACK_LINE(56)
						::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(56)
						{
							HX_STACK_LINE(56)
							::Controller tmp13 = this->controller;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(56)
							::nape::phys::Body tmp14 = tmp13->get_body();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(56)
							::nape::phys::Body _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(56)
							::nape::geom::Vec2 tmp15 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(56)
							bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(56)
							if ((tmp16)){
								HX_STACK_LINE(56)
								_this->zpp_inner->setupVelocity();
							}
							HX_STACK_LINE(56)
							tmp12 = _this->zpp_inner->wrap_vel;
						}
						HX_STACK_LINE(56)
						::nape::geom::Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(56)
						{
							HX_STACK_LINE(56)
							bool tmp13 = (_this != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(56)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(56)
							if ((tmp13)){
								HX_STACK_LINE(56)
								tmp14 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(56)
								tmp14 = false;
							}
							HX_STACK_LINE(56)
							if ((tmp14)){
								HX_STACK_LINE(56)
								::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(56)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(56)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(56)
						{
							HX_STACK_LINE(56)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(56)
							bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(56)
							if ((tmp13)){
								HX_STACK_LINE(56)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(56)
						tmp11 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(56)
					Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(56)
					bool tmp13 = (tmp12 < (int)16);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(56)
					if ((tmp13)){
						HX_STACK_LINE(58)
						this->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
					}
				}
			}
			else{
				HX_STACK_LINE(63)
				this->set_animation(HX_HCSTRING("fall","\x7b","\xbc","\xb5","\x43"));
			}
		}
	}
return null();
}


Void Soldier_obj::init( ){
{
		HX_STACK_FRAME("creatures.Soldier","init",0x69e0ee76,"creatures.Soldier.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Soldier_obj::ondestroy( ){
{
		HX_STACK_FRAME("creatures.Soldier","ondestroy",0x8e97f895,"creatures.Soldier.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Soldier_obj::Soldier_obj()
{
}

Dynamic Soldier_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Soldier_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Soldier_obj::__mClass,"__mClass");
};

#endif

hx::Class Soldier_obj::__mClass;

void Soldier_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("creatures.Soldier","\xc8","\x66","\x17","\x23");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Soldier_obj >;
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

} // end namespace creatures
