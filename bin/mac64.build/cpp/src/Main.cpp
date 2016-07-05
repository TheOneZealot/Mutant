#include <hxcpp.h>

#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_UserInterface
#include <UserInterface.h>
#endif
#ifndef INCLUDED_World
#include <World.h>
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
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
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
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_KeyEvent
#include <luxe/KeyEvent.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Parcel
#include <luxe/Parcel.h>
#endif
#ifndef INCLUDED_luxe_ParcelProgress
#include <luxe/ParcelProgress.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_State
#include <luxe/State.h>
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
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_systems_input_Keycodes
#include <snow/systems/input/Keycodes.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",10,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	this->loaded = false;
	HX_STACK_LINE(10)
	super::__construct();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::config( Dynamic config){
	HX_STACK_FRAME("Main","config",0xf87c7637,"Main.config","Main.hx",25,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(26)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("title","\x98","\x15","\x3b","\x10")) = HX_HCSTRING("mutant","\x5b","\xee","\xbe","\x3f");
	HX_STACK_LINE(27)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = (int)960;
	HX_STACK_LINE(28)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = (int)640;
	HX_STACK_LINE(29)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")) = false;
	HX_STACK_LINE(31)
	Dynamic tmp = config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	return tmp;
}


Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",35,0x087e5c05)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",38,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/maps/test/Gameplay_Testing.tmx","\x99","\xa5","\x60","\x88"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(38)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",41,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Tileset_Editor.png","\xfe","\x0e","\x8a","\x35"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(41)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",42,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Tileset_Mansion.png","\x34","\x55","\x4f","\xd0"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(42)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",43,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Creature_Player.png","\x91","\x4b","\xf8","\xb3"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(43)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",44,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Creature_Soldier.png","\xa8","\xb5","\x53","\x57"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",45,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Creature_Scientist.png","\xbe","\xd6","\xfe","\x80"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(45)
		Dynamic tmp5 = _Function_1_6::Block();		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",46,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Projectile_Bullet.png","\x48","\xa2","\x43","\x47"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(46)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",47,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Prop_Crate.png","\x0d","\xa8","\x8c","\x35"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(47)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",50,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/animations/Creature_Player.json","\x29","\x20","\x7c","\x05"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(50)
		Dynamic tmp8 = _Function_1_9::Block();		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",51,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/animations/Creature_Soldier.json","\x40","\xb2","\xdb","\x6a"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(51)
		Dynamic tmp9 = _Function_1_10::Block();		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",52,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/animations/Creature_Scientist.json","\x2a","\x30","\x35","\xa7"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(52)
		Dynamic tmp10 = _Function_1_11::Block();		HX_STACK_VAR(tmp10,"tmp10");
		struct _Function_1_12{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",55,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/fonts/Default.fnt","\x08","\xea","\x9a","\x43"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(55)
		Dynamic tmp11 = _Function_1_12::Block();		HX_STACK_VAR(tmp11,"tmp11");
		struct _Function_1_13{
			inline static Dynamic Block( Dynamic &tmp5,Dynamic &tmp6,Dynamic &tmp9,Dynamic &tmp11,Dynamic &tmp,Dynamic &tmp4,Dynamic &tmp10,Dynamic &tmp2,Dynamic &tmp3,Dynamic &tmp1,Dynamic &tmp7,Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",36,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d") , cpp::ArrayBase_obj::__new().Add(tmp),false);
					__result->Add(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65") , cpp::ArrayBase_obj::__new().Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7),false);
					__result->Add(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54") , cpp::ArrayBase_obj::__new().Add(tmp8).Add(tmp9).Add(tmp10),false);
					__result->Add(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04") , cpp::ArrayBase_obj::__new().Add(tmp11),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(36)
		Dynamic tmp12 = _Function_1_13::Block(tmp5,tmp6,tmp9,tmp11,tmp,tmp4,tmp10,tmp2,tmp3,tmp1,tmp7,tmp8);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(36)
		::luxe::Parcel tmp13 = ::luxe::Parcel_obj::__new(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(36)
		::luxe::Parcel parcel = tmp13;		HX_STACK_VAR(parcel,"parcel");
		HX_STACK_LINE(60)
		::luxe::Parcel tmp14 = parcel;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(61)
		::phoenix::Color tmp15 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,((Float)0.85));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(62)
		Dynamic tmp16 = this->onassetsloaded_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_14{
			inline static Dynamic Block( ::phoenix::Color &tmp15,Dynamic &tmp16,::luxe::Parcel &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",59,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("parcel","\xc9","\x78","\x7c","\xed") , tmp14,false);
					__result->Add(HX_HCSTRING("background","\xee","\x93","\x1d","\x26") , tmp15,false);
					__result->Add(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83") , tmp16,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(59)
		Dynamic tmp17 = _Function_1_14::Block(tmp15,tmp16,tmp14);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(59)
		::luxe::ParcelProgress_obj::__new(tmp17);
		HX_STACK_LINE(65)
		parcel->load(null());
	}
return null();
}


Void Main_obj::onassetsloaded( ::luxe::Parcel _){
{
		HX_STACK_FRAME("Main","onassetsloaded",0x4a2784dc,"Main.onassetsloaded","Main.hx",69,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(70)
		::phoenix::Color tmp = ::phoenix::Color_obj::__new(((Float)0.23),((Float)0.53),((Float)0.53),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		tmp1->clear_color = tmp;
		HX_STACK_LINE(71)
		::luxe::Resources tmp2 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		::luxe::resource::Resource tmp3 = tmp2->cache->get(HX_HCSTRING("assets/fonts/Default.fnt","\x08","\xea","\x9a","\x43"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		::phoenix::Renderer tmp4 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		tmp4->font = ((::phoenix::BitmapFont)(tmp3));
		HX_STACK_LINE(73)
		::luxe::Input tmp5 = ::Luxe_obj::input;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		tmp5->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),(int)97);
		HX_STACK_LINE(74)
		::luxe::Input tmp6 = ::Luxe_obj::input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		int tmp7 = ::snow::systems::input::Keycodes_obj::left;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(74)
		tmp6->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),tmp7);
		HX_STACK_LINE(75)
		::luxe::Input tmp8 = ::Luxe_obj::input;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(75)
		tmp8->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),(int)100);
		HX_STACK_LINE(76)
		::luxe::Input tmp9 = ::Luxe_obj::input;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		int tmp10 = ::snow::systems::input::Keycodes_obj::right;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(76)
		tmp9->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),tmp10);
		HX_STACK_LINE(77)
		::luxe::Input tmp11 = ::Luxe_obj::input;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(77)
		tmp11->bind_key(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),(int)119);
		HX_STACK_LINE(78)
		::luxe::Input tmp12 = ::Luxe_obj::input;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(78)
		int tmp13 = ::snow::systems::input::Keycodes_obj::up;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(78)
		tmp12->bind_key(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),tmp13);
		HX_STACK_LINE(79)
		::luxe::Input tmp14 = ::Luxe_obj::input;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(79)
		tmp14->bind_key(HX_HCSTRING("act","\x52","\xf1","\x49","\x00"),(int)32);
		HX_STACK_LINE(81)
		::GameState tmp15 = ::GameState_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(81)
		::Main_obj::gamestate = tmp15;
		HX_STACK_LINE(82)
		::World tmp16 = ::World_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(82)
		::Main_obj::world = tmp16;
		HX_STACK_LINE(83)
		::UserInterface tmp17 = ::UserInterface_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(83)
		::Main_obj::ui = tmp17;
		HX_STACK_LINE(85)
		::luxe::Camera tmp18 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(85)
		tmp18->set_zoom((int)4);
		HX_STACK_LINE(87)
		::World tmp19 = ::Main_obj::world;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(87)
		::luxe::Events tmp20 = tmp19->player->events;		HX_STACK_VAR(tmp20,"tmp20");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 1; }
		Void run(Dynamic args){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Main.hx",87,0x087e5c05)
			HX_STACK_ARG(args,"args")
			{
				HX_STACK_LINE(88)
				Float tmp21 = args->__Field(HX_HCSTRING("amount","\xd8","\x11","\x03","\xd5"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(88)
				::Main_obj::shake(tmp21);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(87)
		tmp20->listen(HX_HCSTRING("health.damage.*","\x7d","\xb4","\x33","\xb6"), Dynamic(new _Function_1_1()));
		HX_STACK_LINE(91)
		this->loaded = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onassetsloaded,(void))

Void Main_obj::onkeyup( ::luxe::KeyEvent e){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",95,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(96)
		bool tmp = (e->keycode == (int)27);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		if ((tmp)){
			HX_STACK_LINE(98)
			::GameState tmp1 = ::Main_obj::gamestate;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(98)
			::String tmp2 = tmp1->current_state->name;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			bool tmp3 = (tmp2 == HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			if ((tmp3)){
				HX_STACK_LINE(100)
				::GameState tmp4 = ::Main_obj::gamestate;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				tmp4->set(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),null(),null());
			}
			else{
				HX_STACK_LINE(104)
				::GameState tmp4 = ::Main_obj::gamestate;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(104)
				tmp4->set(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),null(),null());
			}
		}
		HX_STACK_LINE(107)
		bool tmp1 = (e->keycode == (int)114);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		if ((tmp1)){
			HX_STACK_LINE(109)
			::luxe::Events tmp2 = ::Luxe_obj::events;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			tmp2->fire(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),null(),null());
		}
	}
return null();
}


Void Main_obj::update( Float dt){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",114,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(115)
		bool tmp = this->loaded;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		if ((tmp4)){
			HX_STACK_LINE(115)
			::World tmp6 = ::Main_obj::world;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			::World tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			::World tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(115)
			::creatures::Player tmp9 = tmp8->player;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(115)
			tmp5 = (tmp9 == null());
		}
		else{
			HX_STACK_LINE(115)
			tmp5 = true;
		}
		HX_STACK_LINE(115)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(115)
		if ((tmp6)){
			HX_STACK_LINE(115)
			tmp7 = ::GameState_obj::paused;
		}
		else{
			HX_STACK_LINE(115)
			tmp7 = true;
		}
		HX_STACK_LINE(115)
		if ((tmp7)){
			HX_STACK_LINE(115)
			return null();
		}
		HX_STACK_LINE(117)
		bool tmp8 = ::Main_obj::shaking;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		if ((tmp8)){
			HX_STACK_LINE(120)
			::luxe::utils::Utils tmp9 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(120)
			::phoenix::Vector tmp10 = tmp9->geometry->random_point_in_unit_circle();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(120)
			::Main_obj::shake_vector = tmp10;
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				::phoenix::Vector tmp11 = ::Main_obj::shake_vector;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(123)
				::phoenix::Vector _g = tmp11;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(123)
				{
					HX_STACK_LINE(123)
					Float tmp12 = _g->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(123)
					Float tmp13 = ::Main_obj::shake_amount;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(123)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(123)
					Float _x = tmp14;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(123)
					_g->x = _x;
					HX_STACK_LINE(123)
					bool tmp15 = _g->_construct;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(123)
					if ((tmp15)){
						HX_STACK_LINE(123)
						_g->x;
					}
					else{
						HX_STACK_LINE(123)
						bool tmp16 = (_g->listen_x != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(123)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(123)
						if ((tmp16)){
							HX_STACK_LINE(123)
							bool tmp18 = _g->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(123)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(123)
							tmp17 = !(tmp19);
						}
						else{
							HX_STACK_LINE(123)
							tmp17 = false;
						}
						HX_STACK_LINE(123)
						if ((tmp17)){
							HX_STACK_LINE(123)
							Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(123)
							_g->listen_x(tmp18);
						}
						HX_STACK_LINE(123)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				::phoenix::Vector tmp11 = ::Main_obj::shake_vector;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(124)
				::phoenix::Vector _g = tmp11;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(124)
				{
					HX_STACK_LINE(124)
					Float tmp12 = _g->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(124)
					Float tmp13 = ::Main_obj::shake_amount;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(124)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(124)
					Float _y = tmp14;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(124)
					_g->y = _y;
					HX_STACK_LINE(124)
					bool tmp15 = _g->_construct;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(124)
					if ((tmp15)){
						HX_STACK_LINE(124)
						_g->y;
					}
					else{
						HX_STACK_LINE(124)
						bool tmp16 = (_g->listen_y != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(124)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(124)
						if ((tmp16)){
							HX_STACK_LINE(124)
							bool tmp18 = _g->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(124)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(124)
							tmp17 = !(tmp19);
						}
						else{
							HX_STACK_LINE(124)
							tmp17 = false;
						}
						HX_STACK_LINE(124)
						if ((tmp17)){
							HX_STACK_LINE(124)
							Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(124)
							_g->listen_y(tmp18);
						}
						HX_STACK_LINE(124)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(125)
			{
				HX_STACK_LINE(125)
				::phoenix::Vector tmp11 = ::Main_obj::shake_vector;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(125)
				::phoenix::Vector _g = tmp11;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(125)
				{
					HX_STACK_LINE(125)
					Float tmp12 = _g->z;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(125)
					Float tmp13 = ::Main_obj::shake_amount;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(125)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(125)
					Float _z = tmp14;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(125)
					_g->z = _z;
					HX_STACK_LINE(125)
					bool tmp15 = _g->_construct;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(125)
					if ((tmp15)){
						HX_STACK_LINE(125)
						_g->z;
					}
					else{
						HX_STACK_LINE(125)
						bool tmp16 = (_g->listen_z != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(125)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(125)
						if ((tmp16)){
							HX_STACK_LINE(125)
							bool tmp18 = _g->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(125)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(125)
							tmp17 = !(tmp19);
						}
						else{
							HX_STACK_LINE(125)
							tmp17 = false;
						}
						HX_STACK_LINE(125)
						if ((tmp17)){
							HX_STACK_LINE(125)
							Float tmp18 = _z;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(125)
							_g->listen_z(tmp18);
						}
						HX_STACK_LINE(125)
						_g->z;
					}
				}
			}
			HX_STACK_LINE(128)
			hx::MultEq(::Main_obj::shake_amount,((Float)0.9));
			HX_STACK_LINE(131)
			Float tmp11 = ::Main_obj::shake_amount;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(131)
			Float tmp12 = ::Main_obj::min_shake;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(131)
			bool tmp13 = (tmp11 <= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(131)
			if ((tmp13)){
				HX_STACK_LINE(133)
				::phoenix::Vector tmp14 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(133)
				::Main_obj::shake_vector = tmp14;
				HX_STACK_LINE(134)
				::Main_obj::shake_amount = (int)0;
				HX_STACK_LINE(135)
				::Main_obj::shaking = false;
			}
		}
		HX_STACK_LINE(139)
		::luxe::Camera tmp9 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(139)
		::phoenix::Vector tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::World tmp11 = ::Main_obj::world;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(139)
			::phoenix::Vector tmp12 = tmp11->player->get_pos();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(139)
			::phoenix::Vector a = tmp12;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(139)
			::phoenix::Vector tmp13 = ::Main_obj::shake_vector;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(139)
			::phoenix::Vector b = tmp13;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(139)
			Float tmp14 = (a->x + b->x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(139)
			Float tmp15 = (a->y + b->y);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(139)
			Float tmp16 = (a->z + b->z);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(139)
			tmp10 = ::phoenix::Vector_obj::__new(tmp14,tmp15,tmp16,null());
		}
		HX_STACK_LINE(139)
		tmp9->set_center(tmp10);
	}
return null();
}


::GameState Main_obj::gamestate;

::World Main_obj::world;

::UserInterface Main_obj::ui;

Float Main_obj::min_shake;

bool Main_obj::shaking;

Float Main_obj::shake_amount;

::phoenix::Vector Main_obj::shake_vector;

Void Main_obj::shake( Float _amount){
{
		HX_STACK_FRAME("Main","shake",0xf85024f1,"Main.shake","Main.hx",143,0x087e5c05)
		HX_STACK_ARG(_amount,"_amount")
		HX_STACK_LINE(144)
		::Main_obj::shaking = true;
		HX_STACK_LINE(145)
		::Main_obj::shake_amount = _amount;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,shake,(void))


Main_obj::Main_obj()
{
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onassetsloaded") ) { return onassetsloaded_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ui") ) { outValue = ui; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { outValue = world; return true;  }
		if (HX_FIELD_EQ(inName,"shake") ) { outValue = shake_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaking") ) { outValue = shaking; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gamestate") ) { outValue = gamestate; return true;  }
		if (HX_FIELD_EQ(inName,"min_shake") ) { outValue = min_shake; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shake_amount") ) { outValue = shake_amount; return true;  }
		if (HX_FIELD_EQ(inName,"shake_vector") ) { outValue = shake_vector; return true;  }
	}
	return false;
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ui") ) { ui=ioValue.Cast< ::UserInterface >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { world=ioValue.Cast< ::World >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaking") ) { shaking=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gamestate") ) { gamestate=ioValue.Cast< ::GameState >(); return true; }
		if (HX_FIELD_EQ(inName,"min_shake") ) { min_shake=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shake_amount") ) { shake_amount=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"shake_vector") ) { shake_vector=ioValue.Cast< ::phoenix::Vector >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,loaded),HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::GameState*/ ,(void *) &Main_obj::gamestate,HX_HCSTRING("gamestate","\xdf","\xf4","\xf8","\x25")},
	{hx::fsObject /*::World*/ ,(void *) &Main_obj::world,HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
	{hx::fsObject /*::UserInterface*/ ,(void *) &Main_obj::ui,HX_HCSTRING("ui","\x54","\x66","\x00","\x00")},
	{hx::fsFloat,(void *) &Main_obj::min_shake,HX_HCSTRING("min_shake","\x19","\xb1","\xb7","\x9c")},
	{hx::fsBool,(void *) &Main_obj::shaking,HX_HCSTRING("shaking","\x83","\x05","\x2a","\x64")},
	{hx::fsFloat,(void *) &Main_obj::shake_amount,HX_HCSTRING("shake_amount","\x71","\x49","\xd9","\xbe")},
	{hx::fsObject /*::phoenix::Vector*/ ,(void *) &Main_obj::shake_vector,HX_HCSTRING("shake_vector","\x5c","\xe8","\x33","\x81")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("onassetsloaded","\x67","\x68","\x71","\xbb"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::gamestate,"gamestate");
	HX_MARK_MEMBER_NAME(Main_obj::world,"world");
	HX_MARK_MEMBER_NAME(Main_obj::ui,"ui");
	HX_MARK_MEMBER_NAME(Main_obj::min_shake,"min_shake");
	HX_MARK_MEMBER_NAME(Main_obj::shaking,"shaking");
	HX_MARK_MEMBER_NAME(Main_obj::shake_amount,"shake_amount");
	HX_MARK_MEMBER_NAME(Main_obj::shake_vector,"shake_vector");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::gamestate,"gamestate");
	HX_VISIT_MEMBER_NAME(Main_obj::world,"world");
	HX_VISIT_MEMBER_NAME(Main_obj::ui,"ui");
	HX_VISIT_MEMBER_NAME(Main_obj::min_shake,"min_shake");
	HX_VISIT_MEMBER_NAME(Main_obj::shaking,"shaking");
	HX_VISIT_MEMBER_NAME(Main_obj::shake_amount,"shake_amount");
	HX_VISIT_MEMBER_NAME(Main_obj::shake_vector,"shake_vector");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("gamestate","\xdf","\xf4","\xf8","\x25"),
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
	HX_HCSTRING("ui","\x54","\x66","\x00","\x00"),
	HX_HCSTRING("min_shake","\x19","\xb1","\xb7","\x9c"),
	HX_HCSTRING("shaking","\x83","\x05","\x2a","\x64"),
	HX_HCSTRING("shake_amount","\x71","\x49","\xd9","\xbe"),
	HX_HCSTRING("shake_vector","\x5c","\xe8","\x33","\x81"),
	HX_HCSTRING("shake","\xc6","\xde","\x1c","\x7c"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

void Main_obj::__boot()
{
	min_shake= ((Float)0.1);
	shaking= false;
	shake_amount= ((Float)0);
	shake_vector= ::phoenix::Vector_obj::__new(null(),null(),null(),null());
}

