#include <hxcpp.h>

#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
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
#ifndef INCLUDED_luxe_resource_JSONResource
#include <luxe/resource/JSONResource.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
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
namespace creatures{

Void Soldier_obj::__construct(::phoenix::Vector _pos,::String _name)
{
HX_STACK_FRAME("creatures.Soldier","new",0x20a20bba,"creatures.Soldier.new","creatures/Soldier.hx",10,0x1640b437)
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
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::Controller tmp13 = ::Controller_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(26)
		::Controller tmp14 = this->controller = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(26)
		::Controller _component = tmp14;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(26)
		(this->component_count)++;
		HX_STACK_LINE(26)
		::luxe::components::Components tmp15 = this->_components;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(26)
		::Controller tmp16 = _component;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(26)
		tmp15->add(tmp16);
	}
	HX_STACK_LINE(27)
	::Controller tmp13 = this->controller;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(27)
	tmp13->acceleration = (int)2048;
	HX_STACK_LINE(28)
	::Controller tmp14 = this->controller;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(28)
	tmp14->max_speed = (int)128;
	HX_STACK_LINE(29)
	::Controller tmp15 = this->controller;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(29)
	tmp15->jump_impulse = (int)256;
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
		HX_STACK_FRAME("creatures.Soldier","update",0x468b5eef,"creatures.Soldier.update","creatures/Soldier.hx",33,0x1640b437)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
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
