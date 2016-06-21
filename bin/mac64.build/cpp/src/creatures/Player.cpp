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

Void Player_obj::__construct(::phoenix::Vector _pos)
{
HX_STACK_FRAME("creatures.Player","new",0x85cca14d,"creatures.Player.new","creatures/Player.hx",10,0x97903ea2)
HX_STACK_THIS(this)
HX_STACK_ARG(_pos,"_pos")
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
	::phoenix::Vector tmp3 = _pos;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(15)
	::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new((int)16,(int)32,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(15)
	::phoenix::Vector tmp5 = ::phoenix::Vector_obj::__new((int)12,(int)30,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(15)
	super::__construct(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),tmp3,tmp4,tmp5);
	HX_STACK_LINE(16)
	::luxe::Resources tmp6 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(16)
	::luxe::resource::Resource tmp7 = tmp6->cache->get(HX_HCSTRING("assets/textures/Creature_Player.png","\x91","\x4b","\xf8","\xb3"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(16)
	::phoenix::Texture tmp8 = ((::phoenix::Texture)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(16)
	this->set_texture(tmp8);
	HX_STACK_LINE(17)
	::phoenix::Texture tmp9 = this->texture;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(17)
	::phoenix::Texture tmp10 = this->texture;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(17)
	int tmp11 = tmp10->set_filter_mag((int)9728);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(17)
	tmp9->set_filter_min(tmp11);
	HX_STACK_LINE(20)
	{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","creatures/Player.hx",20,0x97903ea2)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(20)
		Dynamic tmp12 = _Function_2_1::Block();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(20)
		::luxe::components::sprite::SpriteAnimation tmp13 = ::luxe::components::sprite::SpriteAnimation_obj::__new(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(20)
		::luxe::components::sprite::SpriteAnimation tmp14 = this->animation = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(20)
		::luxe::components::sprite::SpriteAnimation _component = tmp14;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(20)
		(this->component_count)++;
		HX_STACK_LINE(20)
		::luxe::components::Components tmp15 = this->_components;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(20)
		::luxe::components::sprite::SpriteAnimation tmp16 = _component;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(20)
		tmp15->add(tmp16);
	}
	HX_STACK_LINE(21)
	::luxe::components::sprite::SpriteAnimation tmp12 = this->animation;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(21)
	Dynamic tmp13 = anim_object;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(21)
	tmp12->add_from_json_object(tmp13);
	HX_STACK_LINE(22)
	::luxe::components::sprite::SpriteAnimation tmp14 = this->animation;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(22)
	tmp14->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
	HX_STACK_LINE(23)
	::luxe::components::sprite::SpriteAnimation tmp15 = this->animation;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(23)
	tmp15->play();
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::PlayerController tmp16 = ::PlayerController_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(26)
		::Controller tmp17 = this->controller = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(26)
		::Controller _component = tmp17;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(26)
		(this->component_count)++;
		HX_STACK_LINE(26)
		::luxe::components::Components tmp18 = this->_components;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(26)
		::Controller tmp19 = _component;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(26)
		tmp18->add(tmp19);
	}
	HX_STACK_LINE(27)
	::Controller tmp16 = this->controller;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(27)
	tmp16->acceleration = (int)2048;
	HX_STACK_LINE(28)
	::Controller tmp17 = this->controller;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(28)
	tmp17->max_speed = (int)128;
	HX_STACK_LINE(29)
	::Controller tmp18 = this->controller;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(29)
	tmp18->jump_impulse = (int)256;
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(::phoenix::Vector _pos)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(_pos);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Player_obj::update( Float dt){
{
		HX_STACK_FRAME("creatures.Player","update",0xd596473c,"creatures.Player.update","creatures/Player.hx",33,0x97903ea2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(35)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::Controller tmp2 = this->controller;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(35)
				::nape::phys::Body tmp3 = tmp2->get_body();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(35)
				::nape::phys::Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(35)
				::nape::geom::Vec2 tmp4 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(35)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(35)
				if ((tmp5)){
					HX_STACK_LINE(35)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(35)
				tmp1 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(35)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(35)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(35)
				if ((tmp2)){
					HX_STACK_LINE(35)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(35)
					tmp3 = false;
				}
				HX_STACK_LINE(35)
				if ((tmp3)){
					HX_STACK_LINE(35)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(35)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(35)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(35)
				bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(35)
				if ((tmp2)){
					HX_STACK_LINE(35)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(35)
			tmp = _this->zpp_inner->x;
		}
		HX_STACK_LINE(35)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		bool tmp2 = (tmp1 > (int)16);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		if ((tmp2)){
			HX_STACK_LINE(35)
			::luxe::components::sprite::SpriteAnimation tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(35)
			::luxe::components::sprite::SpriteAnimation tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			::String tmp6 = tmp5->animation;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(35)
			tmp3 = (tmp6 != HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"));
		}
		else{
			HX_STACK_LINE(35)
			tmp3 = false;
		}
		HX_STACK_LINE(35)
		if ((tmp3)){
			HX_STACK_LINE(37)
			::luxe::components::sprite::SpriteAnimation tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			tmp4->set_animation(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"));
		}
		else{
			HX_STACK_LINE(39)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(39)
			{
				HX_STACK_LINE(39)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(39)
				{
					HX_STACK_LINE(39)
					::Controller tmp6 = this->controller;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(39)
					::nape::phys::Body tmp7 = tmp6->get_body();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(39)
					::nape::phys::Body _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(39)
					::nape::geom::Vec2 tmp8 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(39)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(39)
					if ((tmp9)){
						HX_STACK_LINE(39)
						_this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(39)
					tmp5 = _this->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(39)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(39)
				{
					HX_STACK_LINE(39)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(39)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(39)
					if ((tmp6)){
						HX_STACK_LINE(39)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(39)
						tmp7 = false;
					}
					HX_STACK_LINE(39)
					if ((tmp7)){
						HX_STACK_LINE(39)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(39)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(39)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(39)
				{
					HX_STACK_LINE(39)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(39)
					bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(39)
					if ((tmp6)){
						HX_STACK_LINE(39)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(39)
				tmp4 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(39)
			Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(39)
			bool tmp6 = (tmp5 < (int)16);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(39)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(39)
			if ((tmp6)){
				HX_STACK_LINE(39)
				::luxe::components::sprite::SpriteAnimation tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(39)
				::luxe::components::sprite::SpriteAnimation tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(39)
				::String tmp10 = tmp9->animation;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(39)
				tmp7 = (tmp10 != HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
			}
			else{
				HX_STACK_LINE(39)
				tmp7 = false;
			}
			HX_STACK_LINE(39)
			if ((tmp7)){
				HX_STACK_LINE(41)
				::luxe::components::sprite::SpriteAnimation tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(41)
				tmp8->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
			}
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
