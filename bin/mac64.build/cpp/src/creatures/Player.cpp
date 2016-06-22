#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_PlayerController
#include <PlayerController.h>
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
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
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

Void Player_obj::__construct(::phoenix::Vector _pos,::String _name)
{
HX_STACK_FRAME("creatures.Player","new",0x85cca14d,"creatures.Player.new","creatures/Player.hx",10,0x97903ea2)
HX_STACK_THIS(this)
HX_STACK_ARG(_pos,"_pos")
HX_STACK_ARG(_name,"_name")
{
	HX_STACK_LINE(12)
	::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	::luxe::resource::Resource tmp1 = tmp->cache->get(HX_HCSTRING("assets/animations/Creature_Player.json","\x29","\x20","\x7c","\x05"));		HX_STACK_VAR(tmp1,"tmp1");
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
	::luxe::resource::Resource tmp8 = tmp7->cache->get(HX_HCSTRING("assets/textures/Creature_Player.png","\x91","\x4b","\xf8","\xb3"));		HX_STACK_VAR(tmp8,"tmp8");
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
	this->set_depth(((Float)1.1));
	HX_STACK_LINE(21)
	{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","creatures/Player.hx",21,0x97903ea2)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(21)
		Dynamic tmp13 = _Function_2_1::Block();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(21)
		::luxe::components::sprite::SpriteAnimation tmp14 = ::luxe::components::sprite::SpriteAnimation_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(21)
		::luxe::components::sprite::SpriteAnimation tmp15 = this->animation = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(21)
		::luxe::components::sprite::SpriteAnimation _component = tmp15;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(21)
		(this->component_count)++;
		HX_STACK_LINE(21)
		::luxe::components::Components tmp16 = this->_components;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(21)
		::luxe::components::sprite::SpriteAnimation tmp17 = _component;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(21)
		tmp16->add(tmp17);
	}
	HX_STACK_LINE(22)
	::luxe::components::sprite::SpriteAnimation tmp13 = this->animation;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(22)
	Dynamic tmp14 = anim_object;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(22)
	tmp13->add_from_json_object(tmp14);
	HX_STACK_LINE(23)
	::luxe::components::sprite::SpriteAnimation tmp15 = this->animation;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(23)
	tmp15->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
	HX_STACK_LINE(24)
	::luxe::components::sprite::SpriteAnimation tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(24)
	tmp16->play();
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::PlayerController tmp17 = ::PlayerController_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(27)
		::Controller tmp18 = this->controller = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(27)
		::Controller _component = tmp18;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(27)
		(this->component_count)++;
		HX_STACK_LINE(27)
		::luxe::components::Components tmp19 = this->_components;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(27)
		::Controller tmp20 = _component;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(27)
		tmp19->add(tmp20);
	}
	HX_STACK_LINE(28)
	::Controller tmp17 = this->controller;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(28)
	tmp17->acceleration = (int)2048;
	HX_STACK_LINE(29)
	::Controller tmp18 = this->controller;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(29)
	tmp18->max_speed = (int)128;
	HX_STACK_LINE(30)
	::Controller tmp19 = this->controller;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(30)
	tmp19->jump_impulse = (int)256;
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(::phoenix::Vector _pos,::String _name)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(_pos,_name);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Player_obj::update( Float dt){
{
		HX_STACK_FRAME("creatures.Player","update",0xd596473c,"creatures.Player.update","creatures/Player.hx",34,0x97903ea2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(36)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				::Controller tmp2 = this->controller;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(36)
				::nape::phys::Body tmp3 = tmp2->get_body();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(36)
				::nape::phys::Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(36)
				::nape::geom::Vec2 tmp4 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(36)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(36)
				if ((tmp5)){
					HX_STACK_LINE(36)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(36)
				tmp1 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(36)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(36)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(36)
				if ((tmp2)){
					HX_STACK_LINE(36)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(36)
					tmp3 = false;
				}
				HX_STACK_LINE(36)
				if ((tmp3)){
					HX_STACK_LINE(36)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(36)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(36)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(36)
				bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(36)
				if ((tmp2)){
					HX_STACK_LINE(36)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(36)
			tmp = _this->zpp_inner->x;
		}
		HX_STACK_LINE(36)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		if ((tmp1)){
			HX_STACK_LINE(36)
			this->set_flipx(false);
		}
		else{
			HX_STACK_LINE(37)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					::Controller tmp4 = this->controller;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(37)
					::nape::phys::Body tmp5 = tmp4->get_body();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(37)
					::nape::phys::Body _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(37)
					::nape::geom::Vec2 tmp6 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(37)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(37)
					if ((tmp7)){
						HX_STACK_LINE(37)
						_this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(37)
					tmp3 = _this->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(37)
				::nape::geom::Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					bool tmp4 = (_this != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(37)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(37)
					if ((tmp4)){
						HX_STACK_LINE(37)
						tmp5 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(37)
						tmp5 = false;
					}
					HX_STACK_LINE(37)
					if ((tmp5)){
						HX_STACK_LINE(37)
						::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(37)
						::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(37)
						HX_STACK_DO_THROW(tmp7);
					}
				}
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(37)
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(37)
					if ((tmp4)){
						HX_STACK_LINE(37)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(37)
				tmp2 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(37)
			bool tmp3 = (tmp2 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			if ((tmp3)){
				HX_STACK_LINE(37)
				this->set_flipx(true);
			}
		}
		HX_STACK_LINE(39)
		::Controller tmp2 = this->controller;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		bool tmp3 = tmp2->grounded;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		if ((tmp3)){
			HX_STACK_LINE(41)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					::Controller tmp6 = this->controller;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(41)
					::nape::phys::Body tmp7 = tmp6->get_body();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(41)
					::nape::phys::Body _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(41)
					::nape::geom::Vec2 tmp8 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(41)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(41)
					if ((tmp9)){
						HX_STACK_LINE(41)
						_this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(41)
					tmp5 = _this->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(41)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(41)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(41)
					if ((tmp6)){
						HX_STACK_LINE(41)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(41)
						tmp7 = false;
					}
					HX_STACK_LINE(41)
					if ((tmp7)){
						HX_STACK_LINE(41)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(41)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(41)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(41)
					bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(41)
					if ((tmp6)){
						HX_STACK_LINE(41)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(41)
				tmp4 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(41)
			Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			bool tmp6 = (tmp5 > (int)16);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(41)
			if ((tmp6)){
				HX_STACK_LINE(43)
				this->set_animation(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"));
			}
			else{
				HX_STACK_LINE(45)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					::nape::geom::Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						::Controller tmp9 = this->controller;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(45)
						::nape::phys::Body tmp10 = tmp9->get_body();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(45)
						::nape::phys::Body _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(45)
						::nape::geom::Vec2 tmp11 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(45)
						bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(45)
						if ((tmp12)){
							HX_STACK_LINE(45)
							_this->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(45)
						tmp8 = _this->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(45)
					::nape::geom::Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						bool tmp9 = (_this != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(45)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(45)
						if ((tmp9)){
							HX_STACK_LINE(45)
							tmp10 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(45)
							tmp10 = false;
						}
						HX_STACK_LINE(45)
						if ((tmp10)){
							HX_STACK_LINE(45)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(45)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(45)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(45)
						bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(45)
						if ((tmp9)){
							HX_STACK_LINE(45)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(45)
					tmp7 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(45)
				Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(45)
				bool tmp9 = (tmp8 < (int)16);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(45)
				if ((tmp9)){
					HX_STACK_LINE(47)
					this->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
				}
			}
		}
		else{
			HX_STACK_LINE(52)
			this->set_animation(HX_HCSTRING("fall","\x7b","\xbc","\xb5","\x43"));
		}
	}
return null();
}


Void Player_obj::init( ){
{
		HX_STACK_FRAME("creatures.Player","init",0x89f93983,"creatures.Player.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Player_obj::ondestroy( ){
{
		HX_STACK_FRAME("creatures.Player","ondestroy",0x0e337e68,"creatures.Player.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("creatures.Player","\xdb","\xf6","\x9c","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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
