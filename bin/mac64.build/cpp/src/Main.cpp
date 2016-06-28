#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_World
#include <World.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
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
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
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
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_systems_input_Keycodes
#include <snow/systems/input/Keycodes.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",8,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->loaded = false;
	HX_STACK_LINE(8)
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
	HX_STACK_FRAME("Main","config",0xf87c7637,"Main.config","Main.hx",15,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(16)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("title","\x98","\x15","\x3b","\x10")) = HX_HCSTRING("mutant","\x5b","\xee","\xbe","\x3f");
	HX_STACK_LINE(17)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = (int)960;
	HX_STACK_LINE(18)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = (int)640;
	HX_STACK_LINE(19)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")) = false;
	HX_STACK_LINE(21)
	Dynamic tmp = config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",25,0x087e5c05)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",28,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/maps/test/Gameplay_Testing.tmx","\x99","\xa5","\x60","\x88"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(28)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",31,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Tileset_Editor.png","\xfe","\x0e","\x8a","\x35"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(31)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",32,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Tileset_Mansion.png","\x34","\x55","\x4f","\xd0"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",33,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Creature_Player.png","\x91","\x4b","\xf8","\xb3"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(33)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",34,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Creature_Soldier.png","\xa8","\xb5","\x53","\x57"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(34)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",35,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/textures/Projectile_Bullet.png","\x48","\xa2","\x43","\x47"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		Dynamic tmp5 = _Function_1_6::Block();		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",38,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/animations/Creature_Player.json","\x29","\x20","\x7c","\x05"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(38)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",39,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/animations/Creature_Soldier.json","\x40","\xb2","\xdb","\x6a"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(39)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( Dynamic &tmp5,Dynamic &tmp6,Dynamic &tmp,Dynamic &tmp4,Dynamic &tmp2,Dynamic &tmp3,Dynamic &tmp1,Dynamic &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",26,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d") , cpp::ArrayBase_obj::__new().Add(tmp),false);
					__result->Add(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65") , cpp::ArrayBase_obj::__new().Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5),false);
					__result->Add(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54") , cpp::ArrayBase_obj::__new().Add(tmp6).Add(tmp7),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(26)
		Dynamic tmp8 = _Function_1_9::Block(tmp5,tmp6,tmp,tmp4,tmp2,tmp3,tmp1,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(26)
		::luxe::Parcel tmp9 = ::luxe::Parcel_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(26)
		::luxe::Parcel parcel = tmp9;		HX_STACK_VAR(parcel,"parcel");
		HX_STACK_LINE(44)
		::luxe::Parcel tmp10 = parcel;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		::phoenix::Color tmp11 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,((Float)0.85));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		Dynamic tmp12 = this->onassetsloaded_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_10{
			inline static Dynamic Block( ::phoenix::Color &tmp11,::luxe::Parcel &tmp10,Dynamic &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",43,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("parcel","\xc9","\x78","\x7c","\xed") , tmp10,false);
					__result->Add(HX_HCSTRING("background","\xee","\x93","\x1d","\x26") , tmp11,false);
					__result->Add(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83") , tmp12,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(43)
		Dynamic tmp13 = _Function_1_10::Block(tmp11,tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(43)
		::luxe::ParcelProgress_obj::__new(tmp13);
		HX_STACK_LINE(49)
		parcel->load(null());
	}
return null();
}


Void Main_obj::onassetsloaded( ::luxe::Parcel _){
{
		HX_STACK_FRAME("Main","onassetsloaded",0x4a2784dc,"Main.onassetsloaded","Main.hx",53,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(54)
		::phoenix::Color tmp = ::phoenix::Color_obj::__new(((Float)0.23),((Float)0.53),((Float)0.53),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		tmp1->clear_color = tmp;
		HX_STACK_LINE(56)
		::luxe::Input tmp2 = ::Luxe_obj::input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		tmp2->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),(int)97);
		HX_STACK_LINE(57)
		::luxe::Input tmp3 = ::Luxe_obj::input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		int tmp4 = ::snow::systems::input::Keycodes_obj::left;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		tmp3->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),tmp4);
		HX_STACK_LINE(58)
		::luxe::Input tmp5 = ::Luxe_obj::input;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		tmp5->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),(int)100);
		HX_STACK_LINE(59)
		::luxe::Input tmp6 = ::Luxe_obj::input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		int tmp7 = ::snow::systems::input::Keycodes_obj::right;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		tmp6->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),tmp7);
		HX_STACK_LINE(60)
		::luxe::Input tmp8 = ::Luxe_obj::input;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(60)
		tmp8->bind_key(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),(int)32);
		HX_STACK_LINE(61)
		::luxe::Input tmp9 = ::Luxe_obj::input;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		int tmp10 = ::snow::systems::input::Keycodes_obj::up;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		tmp9->bind_key(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),tmp10);
		HX_STACK_LINE(63)
		::World tmp11 = ::World_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(63)
		::Main_obj::world = tmp11;
		HX_STACK_LINE(65)
		::luxe::Camera tmp12 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(65)
		tmp12->set_zoom((int)4);
		HX_STACK_LINE(67)
		this->loaded = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onassetsloaded,(void))

Void Main_obj::onkeyup( ::luxe::KeyEvent e){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",71,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(72)
		bool tmp = (e->keycode == (int)27);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		if ((tmp)){
			HX_STACK_LINE(74)
			::luxe::Engine tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(74)
			tmp1->shutdown();
		}
	}
return null();
}


Void Main_obj::update( Float dt){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",79,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(80)
		bool tmp = this->loaded;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		if ((tmp1)){
			HX_STACK_LINE(80)
			return null();
		}
		HX_STACK_LINE(82)
		::luxe::Camera tmp2 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		::World tmp3 = ::Main_obj::world;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		::phoenix::Vector tmp4 = tmp3->player->get_pos();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		tmp2->set_center(tmp4);
	}
return null();
}


::World Main_obj::world;


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
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { outValue = world; return true;  }
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
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { world=ioValue.Cast< ::World >(); return true; }
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
	{hx::fsObject /*::World*/ ,(void *) &Main_obj::world,HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
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
	HX_MARK_MEMBER_NAME(Main_obj::world,"world");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::world,"world");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
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

