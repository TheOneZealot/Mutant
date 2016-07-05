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
#ifndef INCLUDED_creatures_Scientist
#include <creatures/Scientist.h>
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

Void Scientist_obj::__construct(::phoenix::Vector _pos,::String _name)
{
HX_STACK_FRAME("creatures.Scientist","new",0x27ceb990,"creatures.Scientist.new","creatures/Scientist.hx",11,0xed892561)
HX_STACK_THIS(this)
HX_STACK_ARG(_pos,"_pos")
HX_STACK_ARG(_name,"_name")
{
	HX_STACK_LINE(13)
	::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	::luxe::resource::Resource tmp1 = tmp->cache->get(HX_HCSTRING("assets/animations/Creature_Scientist.json","\x2a","\x30","\x35","\xa7"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	::snow::systems::assets::AssetJSON tmp2 = ((::luxe::resource::JSONResource)(tmp1))->asset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	Dynamic anim_object = tmp2->json;		HX_STACK_VAR(anim_object,"anim_object");
	HX_STACK_LINE(16)
	::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	::phoenix::Vector tmp4 = _pos;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16)
	::phoenix::Vector tmp5 = ::phoenix::Vector_obj::__new((int)16,(int)32,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(16)
	::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new((int)12,(int)30,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(16)
	super::__construct(tmp3,tmp4,tmp5,tmp6);
	HX_STACK_LINE(17)
	::luxe::Resources tmp7 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(17)
	::luxe::resource::Resource tmp8 = tmp7->cache->get(HX_HCSTRING("assets/textures/Creature_Scientist.png","\xbe","\xd6","\xfe","\x80"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(17)
	::phoenix::Texture tmp9 = ((::phoenix::Texture)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(17)
	this->set_texture(tmp9);
	HX_STACK_LINE(18)
	::phoenix::Texture tmp10 = this->texture;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(18)
	::phoenix::Texture tmp11 = this->texture;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(18)
	int tmp12 = tmp11->set_filter_mag((int)9728);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(18)
	tmp10->set_filter_min(tmp12);
	HX_STACK_LINE(19)
	int tmp13 = this->max_health = (int)1;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(19)
	this->health = tmp13;
	HX_STACK_LINE(20)
	this->exp_on_kill = (int)1;
	HX_STACK_LINE(23)
	{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","creatures/Scientist.hx",23,0xed892561)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(23)
		Dynamic tmp14 = _Function_2_1::Block();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(23)
		::luxe::components::sprite::SpriteAnimation tmp15 = ::luxe::components::sprite::SpriteAnimation_obj::__new(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(23)
		::luxe::components::sprite::SpriteAnimation tmp16 = this->animation = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(23)
		::luxe::components::sprite::SpriteAnimation _component = tmp16;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(23)
		(this->component_count)++;
		HX_STACK_LINE(23)
		::luxe::components::Components tmp17 = this->_components;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(23)
		::luxe::components::sprite::SpriteAnimation tmp18 = _component;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(23)
		tmp17->add(tmp18);
	}
	HX_STACK_LINE(24)
	::luxe::components::sprite::SpriteAnimation tmp14 = this->animation;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(24)
	Dynamic tmp15 = anim_object;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(24)
	tmp14->add_from_json_object(tmp15);
	HX_STACK_LINE(25)
	::luxe::components::sprite::SpriteAnimation tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(25)
	tmp16->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
	HX_STACK_LINE(26)
	::luxe::components::sprite::SpriteAnimation tmp17 = this->animation;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(26)
	tmp17->play();
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::AIController tmp18 = ::AIController_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(29)
		::Controller tmp19 = this->controller = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(29)
		::Controller _component = tmp19;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(29)
		(this->component_count)++;
		HX_STACK_LINE(29)
		::luxe::components::Components tmp20 = this->_components;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(29)
		::Controller tmp21 = _component;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(29)
		tmp20->add(tmp21);
	}
	HX_STACK_LINE(30)
	::Controller tmp18 = this->controller;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(30)
	tmp18->acceleration = (int)2048;
	HX_STACK_LINE(31)
	::Controller tmp19 = this->controller;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(31)
	tmp19->max_speed = (int)128;
	HX_STACK_LINE(32)
	::Controller tmp20 = this->controller;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(32)
	tmp20->jump_impulse = (int)256;
}
;
	return null();
}

//Scientist_obj::~Scientist_obj() { }

Dynamic Scientist_obj::__CreateEmpty() { return  new Scientist_obj; }
hx::ObjectPtr< Scientist_obj > Scientist_obj::__new(::phoenix::Vector _pos,::String _name)
{  hx::ObjectPtr< Scientist_obj > _result_ = new Scientist_obj();
	_result_->__construct(_pos,_name);
	return _result_;}

Dynamic Scientist_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scientist_obj > _result_ = new Scientist_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Scientist_obj::update( Float dt){
{
		HX_STACK_FRAME("creatures.Scientist","update",0xea3c7ad9,"creatures.Scientist.update","creatures/Scientist.hx",36,0xed892561)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(37)
		Float tmp = dt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		this->super::update(tmp);
		HX_STACK_LINE(40)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			{
				HX_STACK_LINE(40)
				::Controller tmp3 = this->controller;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(40)
				::nape::phys::Body tmp4 = tmp3->get_body();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(40)
				::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(40)
				::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(40)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(40)
				if ((tmp6)){
					HX_STACK_LINE(40)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(40)
				tmp2 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(40)
			::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(40)
			{
				HX_STACK_LINE(40)
				bool tmp3 = (_this != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(40)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(40)
				if ((tmp3)){
					HX_STACK_LINE(40)
					tmp4 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(40)
					tmp4 = false;
				}
				HX_STACK_LINE(40)
				if ((tmp4)){
					HX_STACK_LINE(40)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(40)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(40)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(40)
			{
				HX_STACK_LINE(40)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(40)
				bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(40)
				if ((tmp3)){
					HX_STACK_LINE(40)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(40)
			tmp1 = _this->zpp_inner->x;
		}
		HX_STACK_LINE(40)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		if ((tmp2)){
			HX_STACK_LINE(40)
			this->set_flipx(false);
		}
		else{
			HX_STACK_LINE(41)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					::Controller tmp5 = this->controller;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(41)
					::nape::phys::Body tmp6 = tmp5->get_body();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(41)
					::nape::phys::Body _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(41)
					::nape::geom::Vec2 tmp7 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(41)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(41)
					if ((tmp8)){
						HX_STACK_LINE(41)
						_this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(41)
					tmp4 = _this->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(41)
				::nape::geom::Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(41)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(41)
					if ((tmp5)){
						HX_STACK_LINE(41)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(41)
						tmp6 = false;
					}
					HX_STACK_LINE(41)
					if ((tmp6)){
						HX_STACK_LINE(41)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(41)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(41)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(41)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(41)
					if ((tmp5)){
						HX_STACK_LINE(41)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(41)
				tmp3 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(41)
			bool tmp4 = (tmp3 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			if ((tmp4)){
				HX_STACK_LINE(41)
				this->set_flipx(true);
			}
		}
		HX_STACK_LINE(44)
		::luxe::components::sprite::SpriteAnimation tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		bool tmp4 = tmp3->playing;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		bool tmp5 = (tmp4 == false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		if ((tmp5)){
			HX_STACK_LINE(46)
			this->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
		}
		else{
			HX_STACK_LINE(48)
			::Controller tmp6 = this->controller;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(48)
			bool tmp7 = tmp6->grounded;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			if ((tmp7)){
				HX_STACK_LINE(50)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(50)
					::nape::geom::Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(50)
						::Controller tmp10 = this->controller;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(50)
						::nape::phys::Body tmp11 = tmp10->get_body();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(50)
						::nape::phys::Body _this = tmp11;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(50)
						::nape::geom::Vec2 tmp12 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(50)
						bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(50)
						if ((tmp13)){
							HX_STACK_LINE(50)
							_this->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(50)
						tmp9 = _this->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(50)
					::nape::geom::Vec2 _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(50)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(50)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(50)
						if ((tmp10)){
							HX_STACK_LINE(50)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(50)
							tmp11 = false;
						}
						HX_STACK_LINE(50)
						if ((tmp11)){
							HX_STACK_LINE(50)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(50)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(50)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(50)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(50)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(50)
						if ((tmp10)){
							HX_STACK_LINE(50)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(50)
					tmp8 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(50)
				Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(50)
				bool tmp10 = (tmp9 > (int)16);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(50)
				if ((tmp10)){
					HX_STACK_LINE(52)
					this->set_animation(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"));
				}
				else{
					HX_STACK_LINE(54)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							::Controller tmp13 = this->controller;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(54)
							::nape::phys::Body tmp14 = tmp13->get_body();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(54)
							::nape::phys::Body _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(54)
							::nape::geom::Vec2 tmp15 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(54)
							bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(54)
							if ((tmp16)){
								HX_STACK_LINE(54)
								_this->zpp_inner->setupVelocity();
							}
							HX_STACK_LINE(54)
							tmp12 = _this->zpp_inner->wrap_vel;
						}
						HX_STACK_LINE(54)
						::nape::geom::Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							bool tmp13 = (_this != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(54)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(54)
							if ((tmp13)){
								HX_STACK_LINE(54)
								tmp14 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(54)
								tmp14 = false;
							}
							HX_STACK_LINE(54)
							if ((tmp14)){
								HX_STACK_LINE(54)
								::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(54)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(54)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(54)
							bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(54)
							if ((tmp13)){
								HX_STACK_LINE(54)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(54)
						tmp11 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(54)
					Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(54)
					bool tmp13 = (tmp12 < (int)16);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(54)
					if ((tmp13)){
						HX_STACK_LINE(56)
						this->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
					}
				}
			}
			else{
				HX_STACK_LINE(61)
				this->set_animation(HX_HCSTRING("fall","\x7b","\xbc","\xb5","\x43"));
			}
		}
	}
return null();
}


Void Scientist_obj::init( ){
{
		HX_STACK_FRAME("creatures.Scientist","init",0xa9cc5be0,"creatures.Scientist.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Scientist_obj::ondestroy( ){
{
		HX_STACK_FRAME("creatures.Scientist","ondestroy",0x02f5aaeb,"creatures.Scientist.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Scientist_obj::Scientist_obj()
{
}

Dynamic Scientist_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Scientist_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scientist_obj::__mClass,"__mClass");
};

#endif

hx::Class Scientist_obj::__mClass;

void Scientist_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("creatures.Scientist","\x9e","\xf1","\xf6","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Scientist_obj >;
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
