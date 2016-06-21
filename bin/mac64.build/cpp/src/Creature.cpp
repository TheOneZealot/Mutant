#include <hxcpp.h>

#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_World
#include <World.h>
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
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
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
HX_STACK_FRAME("Creature","new",0x2a0dde51,"Creature.new","Creature.hx",21,0xc6ca163f)
HX_STACK_THIS(this)
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(_pos,"_pos")
HX_STACK_ARG(_size,"_size")
HX_STACK_ARG(_bounds,"_bounds")
{
	HX_STACK_LINE(23)
	Float tmp = (Float(_bounds->x) / Float((int)2));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	Float radius = tmp;		HX_STACK_VAR(radius,"radius");
	HX_STACK_LINE(24)
	Float tmp1 = (Float(_bounds->y) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	Float half_height = tmp1;		HX_STACK_VAR(half_height,"half_height");
	HX_STACK_LINE(25)
	Float tmp2 = (_size->y - _bounds->y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	Float delta = tmp3;		HX_STACK_VAR(delta,"delta");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &_name,::phoenix::Vector &_pos,::phoenix::Vector &_size){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",28,0xc6ca163f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _name,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , _pos,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , _size,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(28)
	Dynamic tmp4 = _Function_1_1::Block(_name,_pos,_size);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	super::__construct(tmp4);
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(37)
		Float tmp5 = _pos->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		Float tmp6 = _pos->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		Float tmp7 = _bounds->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		Float tmp8 = _bounds->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		::nape::phys::BodyType tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			::nape::phys::BodyType tmp10 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(39)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(39)
			if ((tmp11)){
				HX_STACK_LINE(39)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(39)
				::nape::phys::BodyType tmp12 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(39)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = tmp12;
				HX_STACK_LINE(39)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(39)
			tmp9 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
		}
		struct _Function_2_1{
			inline static Dynamic Block( Float &tmp5,Float &tmp6,::nape::phys::BodyType &tmp9,Float &tmp7,Float &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",35,0xc6ca163f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp5,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("body_type","\xb7","\xc8","\xf4","\x2c") , tmp9,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		Dynamic tmp10 = _Function_2_1::Block(tmp5,tmp6,tmp9,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(35)
		::luxe::components::physics::nape::BoxCollider tmp11 = ::luxe::components::physics::nape::BoxCollider_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(35)
		::luxe::components::physics::nape::BoxCollider tmp12 = this->collider = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(35)
		::luxe::components::physics::nape::BoxCollider _component = tmp12;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(35)
		(this->component_count)++;
		HX_STACK_LINE(35)
		::luxe::components::Components tmp13 = this->_components;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(35)
		::luxe::components::physics::nape::BoxCollider tmp14 = _component;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(35)
		tmp13->add(tmp14);
	}
	HX_STACK_LINE(41)
	::luxe::components::physics::nape::BoxCollider tmp5 = this->collider;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	this->body = tmp5->body;
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::nape::callbacks::CbTypeList tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::nape::phys::Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			::nape::phys::Body _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(42)
			::nape::callbacks::CbTypeList tmp8 = _this->zpp_inner_i->wrap_cbTypes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(42)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(42)
			if ((tmp9)){
				HX_STACK_LINE(42)
				_this->zpp_inner_i->setupcbTypes();
			}
			HX_STACK_LINE(42)
			tmp6 = _this->zpp_inner_i->wrap_cbTypes;
		}
		HX_STACK_LINE(42)
		::nape::callbacks::CbTypeList _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(42)
		::nape::callbacks::CbType tmp7 = ::World_obj::CBTYPE_CREATURE;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		::nape::callbacks::CbType obj = tmp7;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(42)
		bool tmp8 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		if ((tmp8)){
			HX_STACK_LINE(42)
			::nape::callbacks::CbType tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(42)
			_this->push(tmp9);
		}
		else{
			HX_STACK_LINE(42)
			::nape::callbacks::CbType tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(42)
			_this->unshift(tmp9);
		}
	}
	HX_STACK_LINE(43)
	Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		::nape::phys::Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		::nape::phys::Body _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(43)
		Dynamic tmp8 = _this->zpp_inner_i->userData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		if ((tmp9)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",43,0xc6ca163f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(43)
			Dynamic tmp10 = _Function_3_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(43)
			_this->zpp_inner_i->userData = tmp10;
		}
		HX_STACK_LINE(43)
		tmp6 = _this->zpp_inner_i->userData;
	}
	HX_STACK_LINE(43)
	tmp6->__FieldRef(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05")) = hx::ObjectPtr<OBJ_>(this);
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
	::luxe::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Creature_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(controller,"controller");
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(collider,"collider");
	HX_VISIT_MEMBER_NAME(body,"body");
	::luxe::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Creature_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Creature_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { collider=inValue.Cast< ::luxe::components::physics::nape::BoxCollider >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::luxe::components::sprite::SpriteAnimation >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { controller=inValue.Cast< ::Controller >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Creature_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04"));
	outFields->push(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));
	outFields->push(HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"));
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Controller*/ ,(int)offsetof(Creature_obj,controller),HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04")},
	{hx::fsObject /*::luxe::components::sprite::SpriteAnimation*/ ,(int)offsetof(Creature_obj,animation),HX_HCSTRING("animation","\x04","\xef","\x34","\x4b")},
	{hx::fsObject /*::luxe::components::physics::nape::BoxCollider*/ ,(int)offsetof(Creature_obj,collider),HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9")},
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(Creature_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04"),
	HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),
	HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
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

