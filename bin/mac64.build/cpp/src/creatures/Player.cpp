#include <hxcpp.h>

#ifndef INCLUDED_Action
#include <Action.h>
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
#ifndef INCLUDED_actions_Claw
#include <actions/Claw.h>
#endif
#ifndef INCLUDED_controllers_PlayerController
#include <controllers/PlayerController.h>
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
HX_STACK_FRAME("creatures.Player","new",0x85cca14d,"creatures.Player.new","creatures/Player.hx",9,0x97903ea2)
HX_STACK_THIS(this)
HX_STACK_ARG(_pos,"_pos")
HX_STACK_ARG(_name,"_name")
{
	HX_STACK_LINE(16)
	this->talent_points = (int)1;
	HX_STACK_LINE(15)
	this->exp_level = (int)1;
	HX_STACK_LINE(14)
	this->exp = (int)0;
	HX_STACK_LINE(13)
	this->level = (int)1;
	HX_STACK_LINE(18)
	::creatures::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(21)
	::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	::luxe::resource::Resource tmp1 = tmp->cache->get(HX_HCSTRING("assets/animations/Creature_Player.json","\x29","\x20","\x7c","\x05"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	::snow::systems::assets::AssetJSON tmp2 = ((::luxe::resource::JSONResource)(tmp1))->asset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	Dynamic anim_object = tmp2->json;		HX_STACK_VAR(anim_object,"anim_object");
	HX_STACK_LINE(24)
	::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	::phoenix::Vector tmp4 = _pos;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	::phoenix::Vector tmp5 = ::phoenix::Vector_obj::__new((int)16,(int)32,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(24)
	::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new((int)12,(int)30,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(24)
	super::__construct(tmp3,tmp4,tmp5,tmp6);
	HX_STACK_LINE(25)
	::luxe::Resources tmp7 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(25)
	::luxe::resource::Resource tmp8 = tmp7->cache->get(HX_HCSTRING("assets/textures/Creature_Player.png","\x91","\x4b","\xf8","\xb3"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(25)
	::phoenix::Texture tmp9 = ((::phoenix::Texture)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(25)
	this->set_texture(tmp9);
	HX_STACK_LINE(26)
	::phoenix::Texture tmp10 = this->texture;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(26)
	::phoenix::Texture tmp11 = this->texture;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(26)
	int tmp12 = tmp11->set_filter_mag((int)9728);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(26)
	tmp10->set_filter_min(tmp12);
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::creatures::Player _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		Float tmp13 = (_g1->depth + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(27)
		_g1->set_depth(tmp13);
	}
	HX_STACK_LINE(30)
	{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","creatures/Player.hx",30,0x97903ea2)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(30)
		Dynamic tmp13 = _Function_2_1::Block();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(30)
		::luxe::components::sprite::SpriteAnimation tmp14 = ::luxe::components::sprite::SpriteAnimation_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(30)
		::luxe::components::sprite::SpriteAnimation tmp15 = this->animation = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(30)
		::luxe::components::sprite::SpriteAnimation _component = tmp15;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(30)
		(this->component_count)++;
		HX_STACK_LINE(30)
		::luxe::components::Components tmp16 = this->_components;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(30)
		::luxe::components::sprite::SpriteAnimation tmp17 = _component;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(30)
		tmp16->add(tmp17);
	}
	HX_STACK_LINE(31)
	::luxe::components::sprite::SpriteAnimation tmp13 = this->animation;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(31)
	Dynamic tmp14 = anim_object;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(31)
	tmp13->add_from_json_object(tmp14);
	HX_STACK_LINE(32)
	::luxe::components::sprite::SpriteAnimation tmp15 = this->animation;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(32)
	tmp15->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
	HX_STACK_LINE(33)
	::luxe::components::sprite::SpriteAnimation tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(33)
	tmp16->play();
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::controllers::PlayerController tmp17 = ::controllers::PlayerController_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(36)
		::Controller tmp18 = this->controller = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(36)
		::Controller _component = tmp18;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(36)
		(this->component_count)++;
		HX_STACK_LINE(36)
		::luxe::components::Components tmp19 = this->_components;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(36)
		::Controller tmp20 = _component;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(36)
		tmp19->add(tmp20);
	}
	HX_STACK_LINE(37)
	::Controller tmp17 = this->controller;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(37)
	tmp17->acceleration = (int)2048;
	HX_STACK_LINE(38)
	::Controller tmp18 = this->controller;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(38)
	tmp18->max_speed = (int)128;
	HX_STACK_LINE(39)
	::Controller tmp19 = this->controller;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(39)
	tmp19->jump_impulse = (int)256;
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::creatures::Player_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","creatures/Player.hx",42,0x97903ea2)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("claw","\xdf","\x67","\xc2","\x41"),false);
				__result->Add(HX_HCSTRING("owner","\x33","\x98","\x76","\x38") , ((::Creature)(__this)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(42)
	Dynamic tmp20 = _Function_1_1::Block(this);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(42)
	::actions::Claw tmp21 = ::actions::Claw_obj::__new(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(42)
	::Action tmp22 = this->action_claw = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(42)
	this->actions->push(tmp22);
	HX_STACK_LINE(48)
	::luxe::Events tmp23 = this->events;		HX_STACK_VAR(tmp23,"tmp23");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::creatures::Player,_g)
	int __ArgCount() const { return 1; }
	Void run(Dynamic args){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","creatures/Player.hx",48,0x97903ea2)
		HX_STACK_ARG(args,"args")
		{
			HX_STACK_LINE(49)
			hx::AddEq(_g->exp,args->__Field(HX_HCSTRING("amount","\xd8","\x11","\x03","\xd5"), hx::paccDynamic ));
			HX_STACK_LINE(50)
			::String tmp24 = _g->get_name();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(50)
			::String tmp25 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(50)
			::String tmp26 = (tmp25 + HX_HCSTRING(" recieved ","\x37","\x53","\xc1","\x0f"));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(50)
			int tmp27 = args->__Field(HX_HCSTRING("amount","\xd8","\x11","\x03","\xd5"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(50)
			::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(50)
			::String tmp29 = (tmp28 + HX_HCSTRING(" exp from killing ","\x2f","\x0a","\x37","\xa3"));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(50)
			::String tmp30 = args->__Field(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("nam","\xda","\xcc","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(50)
			::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(50)
			::String tmp32 = (tmp31 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(50)
			int tmp33 = _g->exp;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(50)
			::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(50)
			::String tmp35 = (tmp34 + HX_HCSTRING(" of ","\x09","\x67","\x7b","\x15"));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(50)
			int tmp36 = _g->exp_level;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(50)
			::String tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(50)
			::String tmp38 = (tmp37 + HX_HCSTRING(" to level","\x3f","\xf5","\xa5","\x8e"));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(50)
			::String tmp39 = (HX_HCSTRING("   i / player / ","\xe8","\x7a","\xcb","\x61") + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(50)
			Dynamic tmp40 = hx::SourceInfo(HX_HCSTRING("Player.hx","\xdd","\xc9","\x7f","\xa2"),50,HX_HCSTRING("creatures.Player","\xdb","\xf6","\x9c","\xbd"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(50)
			::haxe::Log_obj::trace(tmp39,tmp40);
			HX_STACK_LINE(51)
			bool tmp41 = (_g->exp >= _g->exp_level);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(51)
			if ((tmp41)){
				HX_STACK_LINE(53)
				_g->events->fire(HX_HCSTRING("level","\x84","\x15","\x63","\x72"),null(),null());
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(48)
	tmp23->listen(HX_HCSTRING("exp.gain.kill","\xdc","\xce","\xa3","\x9d"), Dynamic(new _Function_1_2(_g)));
	HX_STACK_LINE(56)
	::luxe::Events tmp24 = this->events;		HX_STACK_VAR(tmp24,"tmp24");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,::creatures::Player,_g)
	int __ArgCount() const { return 1; }
	Void run(Dynamic args){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","creatures/Player.hx",56,0x97903ea2)
		HX_STACK_ARG(args,"args")
		{
			HX_STACK_LINE(57)
			hx::AddEq(_g->level,(int)1);
			HX_STACK_LINE(58)
			hx::SubEq(_g->exp,_g->exp_level);
			HX_STACK_LINE(59)
			hx::AddEq(_g->exp_level,(int)1);
			HX_STACK_LINE(60)
			hx::AddEq(_g->talent_points,(int)1);
			HX_STACK_LINE(61)
			::String tmp25 = _g->get_name();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(61)
			::String tmp26 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(61)
			::String tmp27 = (tmp26 + HX_HCSTRING(" leveled up to level ","\x99","\x7f","\x05","\xce"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(61)
			int tmp28 = _g->level;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(61)
			::String tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(61)
			::String tmp30 = (tmp29 + HX_HCSTRING(" and has ","\x8f","\x39","\x0e","\x96"));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(61)
			int tmp31 = _g->talent_points;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(61)
			::String tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(61)
			::String tmp33 = (tmp32 + HX_HCSTRING(" talent points to spend","\x82","\x93","\x2e","\xf7"));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(61)
			::String tmp34 = (HX_HCSTRING("   i / player / ","\xe8","\x7a","\xcb","\x61") + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(61)
			Dynamic tmp35 = hx::SourceInfo(HX_HCSTRING("Player.hx","\xdd","\xc9","\x7f","\xa2"),61,HX_HCSTRING("creatures.Player","\xdb","\xf6","\x9c","\xbd"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(61)
			::haxe::Log_obj::trace(tmp34,tmp35);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(56)
	tmp24->listen(HX_HCSTRING("level","\x84","\x15","\x63","\x72"), Dynamic(new _Function_1_3(_g)));
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
		HX_STACK_FRAME("creatures.Player","update",0xd596473c,"creatures.Player.update","creatures/Player.hx",66,0x97903ea2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(67)
		Float tmp = dt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		this->super::update(tmp);
		HX_STACK_LINE(70)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::Controller tmp3 = this->controller;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(70)
				::nape::phys::Body tmp4 = tmp3->get_body();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(70)
				::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(70)
				::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(70)
				if ((tmp6)){
					HX_STACK_LINE(70)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(70)
				tmp2 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(70)
			::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				bool tmp3 = (_this != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(70)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(70)
				if ((tmp3)){
					HX_STACK_LINE(70)
					tmp4 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(70)
					tmp4 = false;
				}
				HX_STACK_LINE(70)
				if ((tmp4)){
					HX_STACK_LINE(70)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(70)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(70)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(70)
				bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(70)
				if ((tmp3)){
					HX_STACK_LINE(70)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(70)
			tmp1 = _this->zpp_inner->x;
		}
		HX_STACK_LINE(70)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		if ((tmp2)){
			HX_STACK_LINE(70)
			this->set_flipx(false);
		}
		else{
			HX_STACK_LINE(71)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(71)
				{
					HX_STACK_LINE(71)
					::Controller tmp5 = this->controller;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(71)
					::nape::phys::Body tmp6 = tmp5->get_body();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(71)
					::nape::phys::Body _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(71)
					::nape::geom::Vec2 tmp7 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(71)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(71)
					if ((tmp8)){
						HX_STACK_LINE(71)
						_this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(71)
					tmp4 = _this->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(71)
				::nape::geom::Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(71)
				{
					HX_STACK_LINE(71)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(71)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(71)
					if ((tmp5)){
						HX_STACK_LINE(71)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(71)
						tmp6 = false;
					}
					HX_STACK_LINE(71)
					if ((tmp6)){
						HX_STACK_LINE(71)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(71)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(71)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(71)
				{
					HX_STACK_LINE(71)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(71)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(71)
					if ((tmp5)){
						HX_STACK_LINE(71)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(71)
				tmp3 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(71)
			bool tmp4 = (tmp3 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			if ((tmp4)){
				HX_STACK_LINE(71)
				this->set_flipx(true);
			}
		}
		HX_STACK_LINE(73)
		::Controller tmp3 = this->controller;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		bool tmp4 = tmp3->grounded;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		if ((tmp4)){
			HX_STACK_LINE(75)
			Float tmp5 = this->get_speed_x();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			bool tmp6 = (tmp5 > (int)16);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			if ((tmp6)){
				HX_STACK_LINE(77)
				this->set_animation(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"));
			}
			else{
				HX_STACK_LINE(79)
				Float tmp7 = this->get_speed_x();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(79)
				bool tmp8 = (tmp7 < (int)16);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(79)
				if ((tmp8)){
					HX_STACK_LINE(81)
					this->set_animation(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));
				}
			}
		}
		else{
			HX_STACK_LINE(86)
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

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(action_claw,"action_claw");
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_MEMBER_NAME(exp,"exp");
	HX_MARK_MEMBER_NAME(exp_level,"exp_level");
	HX_MARK_MEMBER_NAME(talent_points,"talent_points");
	::Creature_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(action_claw,"action_claw");
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(exp,"exp");
	HX_VISIT_MEMBER_NAME(exp_level,"exp_level");
	HX_VISIT_MEMBER_NAME(talent_points,"talent_points");
	::Creature_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"exp") ) { return exp; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"exp_level") ) { return exp_level; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"action_claw") ) { return action_claw; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"talent_points") ) { return talent_points; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"exp") ) { exp=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"exp_level") ) { exp_level=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"action_claw") ) { action_claw=inValue.Cast< ::Action >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"talent_points") ) { talent_points=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("action_claw","\x48","\x14","\x0b","\x34"));
	outFields->push(HX_HCSTRING("level","\x84","\x15","\x63","\x72"));
	outFields->push(HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00"));
	outFields->push(HX_HCSTRING("exp_level","\x22","\x3d","\x92","\xa8"));
	outFields->push(HX_HCSTRING("talent_points","\x56","\xea","\x33","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Action*/ ,(int)offsetof(Player_obj,action_claw),HX_HCSTRING("action_claw","\x48","\x14","\x0b","\x34")},
	{hx::fsInt,(int)offsetof(Player_obj,level),HX_HCSTRING("level","\x84","\x15","\x63","\x72")},
	{hx::fsInt,(int)offsetof(Player_obj,exp),HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00")},
	{hx::fsInt,(int)offsetof(Player_obj,exp_level),HX_HCSTRING("exp_level","\x22","\x3d","\x92","\xa8")},
	{hx::fsInt,(int)offsetof(Player_obj,talent_points),HX_HCSTRING("talent_points","\x56","\xea","\x33","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("action_claw","\x48","\x14","\x0b","\x34"),
	HX_HCSTRING("level","\x84","\x15","\x63","\x72"),
	HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00"),
	HX_HCSTRING("exp_level","\x22","\x3d","\x92","\xa8"),
	HX_HCSTRING("talent_points","\x56","\xea","\x33","\xb4"),
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
