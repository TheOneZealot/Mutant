#include <hxcpp.h>

#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Physics
#include <Physics.h>
#endif
#ifndef INCLUDED_Projectile
#include <Projectile.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
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
#ifndef INCLUDED_luxe_physics_nape_PhysicsNape
#include <luxe/physics/nape/PhysicsNape.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_GravMassMode
#include <nape/phys/GravMassMode.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeIterator
#include <nape/shape/ShapeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif

Void Projectile_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("Projectile","new",0xa2a0637b,"Projectile.new","Projectile.hx",27,0x2fcbe455)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(29)
	bool tmp = (options == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(29)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Projectile.hx","\x55","\xe4","\xcb","\x2f"),29,HX_HCSTRING("Projectile","\x09","\x8a","\x3c","\xbb"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		::haxe::Log_obj::trace(HX_HCSTRING("projectile cant have null options","\x18","\x20","\x1a","\xd1"),tmp1);
	}
	HX_STACK_LINE(30)
	bool tmp1 = (options->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	if ((tmp1)){
		HX_STACK_LINE(30)
		options->__FieldRef(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")) = options->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );
	}
	HX_STACK_LINE(31)
	bool tmp2 = (options->__Field(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	if ((tmp2)){
		HX_STACK_LINE(31)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new((int)1,(int)0,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		options->__FieldRef(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00")) = tmp3;
	}
	HX_STACK_LINE(32)
	bool tmp3 = (options->__Field(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	if ((tmp3)){
		HX_STACK_LINE(32)
		options->__FieldRef(HX_HCSTRING("speed","\x87","\x97","\x69","\x81")) = (int)16;
	}
	HX_STACK_LINE(35)
	Dynamic tmp4 = options;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(35)
	super::__construct(tmp4);
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(40)
		Float tmp5 = options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		Float tmp6 = options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		Float tmp7 = options->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		Float tmp8 = options->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		::nape::phys::BodyType tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::nape::phys::BodyType tmp10 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(42)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(42)
			if ((tmp11)){
				HX_STACK_LINE(42)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(42)
				::nape::phys::BodyType tmp12 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(42)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp12;
				HX_STACK_LINE(42)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(42)
			tmp9 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
		}
		struct _Function_2_1{
			inline static Dynamic Block( Float &tmp5,Float &tmp6,::nape::phys::BodyType &tmp9,Float &tmp7,Float &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Projectile.hx",38,0x2fcbe455)
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
		HX_STACK_LINE(38)
		Dynamic tmp10 = _Function_2_1::Block(tmp5,tmp6,tmp9,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		::luxe::components::physics::nape::BoxCollider tmp11 = ::luxe::components::physics::nape::BoxCollider_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(38)
		::luxe::components::physics::nape::BoxCollider tmp12 = this->collider = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(38)
		::luxe::components::physics::nape::BoxCollider _component = tmp12;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(38)
		(this->component_count)++;
		HX_STACK_LINE(38)
		::luxe::components::Components tmp13 = this->_components;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(38)
		::luxe::components::physics::nape::BoxCollider tmp14 = _component;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(38)
		tmp13->add(tmp14);
	}
	HX_STACK_LINE(46)
	::luxe::components::physics::nape::BoxCollider tmp5 = this->collider;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	this->body = tmp5->body;
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::nape::phys::Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		::nape::phys::Body _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(47)
		::nape::phys::GravMassMode tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::nape::phys::GravMassMode tmp8 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(47)
			if ((tmp9)){
				HX_STACK_LINE(47)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(47)
				::nape::phys::GravMassMode tmp10 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(47)
				::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = tmp10;
				HX_STACK_LINE(47)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(47)
			tmp7 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
		}
		HX_STACK_LINE(47)
		::nape::phys::GravMassMode gravMassMode = tmp7;		HX_STACK_VAR(gravMassMode,"gravMassMode");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::gravMassMode","\x79","\xbf","\xd1","\xf1"));
			HX_STACK_LINE(47)
			bool tmp8 = _this->zpp_inner->world;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			if ((tmp8)){
				HX_STACK_LINE(47)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
			}
			HX_STACK_LINE(47)
			bool tmp9 = (gravMassMode == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(47)
			if ((tmp9)){
				HX_STACK_LINE(47)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot use null gravMassMode","\x28","\xc8","\x7d","\xc2"));
			}
			HX_STACK_LINE(47)
			::nape::phys::GravMassMode tmp10 = gravMassMode;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			::nape::phys::GravMassMode tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				::nape::phys::GravMassMode tmp12 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(47)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(47)
				if ((tmp13)){
					HX_STACK_LINE(47)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(47)
					::nape::phys::GravMassMode tmp14 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(47)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = tmp14;
					HX_STACK_LINE(47)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(47)
				tmp11 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
			}
			HX_STACK_LINE(47)
			bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(47)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(47)
			if ((tmp12)){
				HX_STACK_LINE(47)
				tmp13 = (int)2;
			}
			else{
				HX_STACK_LINE(47)
				::nape::phys::GravMassMode tmp14 = gravMassMode;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(47)
				::nape::phys::GravMassMode tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					::nape::phys::GravMassMode tmp16 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(47)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(47)
					if ((tmp17)){
						HX_STACK_LINE(47)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(47)
						::nape::phys::GravMassMode tmp18 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(47)
						::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = tmp18;
						HX_STACK_LINE(47)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(47)
					tmp15 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
				}
				HX_STACK_LINE(47)
				bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(47)
				if ((tmp16)){
					HX_STACK_LINE(47)
					tmp13 = (int)0;
				}
				else{
					HX_STACK_LINE(47)
					tmp13 = (int)1;
				}
			}
			HX_STACK_LINE(47)
			_this->zpp_inner->gravMassMode = tmp13;
			HX_STACK_LINE(47)
			_this->zpp_inner->invalidate_gravMass();
		}
		HX_STACK_LINE(47)
		::nape::phys::GravMassMode tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::nape::phys::GravMassMode tmp9 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(47)
			bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			if ((tmp10)){
				HX_STACK_LINE(47)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(47)
				::nape::phys::GravMassMode tmp11 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(47)
				::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = tmp11;
				HX_STACK_LINE(47)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(47)
			tmp8 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
		}
		HX_STACK_LINE(47)
		::nape::phys::GravMassMode tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::nape::phys::GravMassMode tmp10 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(47)
			if ((tmp11)){
				HX_STACK_LINE(47)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(47)
				::nape::phys::GravMassMode tmp12 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(47)
				::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = tmp12;
				HX_STACK_LINE(47)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(47)
			tmp9 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
		}
		HX_STACK_LINE(47)
		::nape::phys::GravMassMode tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::nape::phys::GravMassMode tmp11 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(47)
			bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(47)
			if ((tmp12)){
				HX_STACK_LINE(47)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(47)
				::nape::phys::GravMassMode tmp13 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(47)
				::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = tmp13;
				HX_STACK_LINE(47)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(47)
			tmp10 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
		}
		HX_STACK_LINE(47)
		int tmp11 = _this->zpp_inner->massMode;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(47)
		Array_obj< ::Dynamic >::__new().Add(tmp8).Add(tmp9).Add(tmp10)->__get(tmp11).StaticCast< ::nape::phys::GravMassMode >();
	}
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		::nape::phys::Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(48)
		::nape::phys::Body _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::gravMass","\xf6","\x0c","\x8f","\xd7"));
			HX_STACK_LINE(48)
			bool tmp7 = _this->zpp_inner->world;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			if ((tmp7)){
				HX_STACK_LINE(48)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
			}
			HX_STACK_LINE(48)
			bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(48)
			if ((tmp8)){
				HX_STACK_LINE(48)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: gravMass cannot be NaN","\xdd","\x39","\x2d","\x37"));
			}
			HX_STACK_LINE(48)
			_this->zpp_inner->gravMassMode = (int)1;
			HX_STACK_LINE(48)
			_this->zpp_inner->gravMass = (int)0;
			HX_STACK_LINE(48)
			_this->zpp_inner->invalidate_gravMass();
		}
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			bool tmp7 = _this->zpp_inner->world;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			if ((tmp7)){
				HX_STACK_LINE(48)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no gravMass","\xc7","\x7b","\xf9","\xe6"));
			}
			HX_STACK_LINE(48)
			_this->zpp_inner->validate_gravMass();
			HX_STACK_LINE(48)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp8 = _this->zpp_inner->shapes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(48)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp9 = tmp8->head;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(48)
			bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(48)
			if ((tmp10)){
				HX_STACK_LINE(48)
				int tmp11 = _this->zpp_inner->massMode;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(48)
				bool tmp12 = (tmp11 == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(48)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(48)
				if ((tmp12)){
					HX_STACK_LINE(48)
					int tmp14 = _this->zpp_inner->gravMassMode;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(48)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(48)
					tmp13 = (tmp15 != (int)1);
				}
				else{
					HX_STACK_LINE(48)
					tmp13 = false;
				}
				HX_STACK_LINE(48)
				if ((tmp13)){
					HX_STACK_LINE(48)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass/gravMass modes; Body::gravMass only makes sense if it contains Shapes","\xbe","\x98","\xa4","\x72"));
				}
			}
			HX_STACK_LINE(48)
			_this->zpp_inner->gravMass;
		}
	}
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::nape::phys::Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		::nape::shape::ShapeList tmp7 = tmp6->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(49)
		::nape::shape::ShapeList _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(49)
		bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(49)
		if ((tmp8)){
			HX_STACK_LINE(49)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot execute null on list elements","\x97","\xfe","\x61","\x00"));
		}
		HX_STACK_LINE(49)
		::nape::shape::ShapeIterator tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(49)
			::nape::shape::ShapeList tmp10 = _this;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(49)
			tmp9 = ::nape::shape::ShapeIterator_obj::get(tmp10);
		}
		HX_STACK_LINE(49)
		::nape::shape::ShapeIterator it = tmp9;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(49)
		while((true)){
			HX_STACK_LINE(49)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				::zpp_nape::util::ZPP_ShapeList tmp11 = it->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(49)
				tmp11->valmod();
				HX_STACK_LINE(49)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(49)
					::nape::shape::ShapeList _this1 = it->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(49)
					_this1->zpp_inner->valmod();
					HX_STACK_LINE(49)
					bool tmp13 = _this1->zpp_inner->zip_length;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(49)
					if ((tmp13)){
						HX_STACK_LINE(49)
						_this1->zpp_inner->zip_length = false;
						HX_STACK_LINE(49)
						{
							HX_STACK_LINE(49)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp14 = _this1->zpp_inner->inner;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(49)
							_this1->zpp_inner->user_length = tmp14->length;
						}
					}
					HX_STACK_LINE(49)
					tmp12 = _this1->zpp_inner->user_length;
				}
				HX_STACK_LINE(49)
				int length = tmp12;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(49)
				it->zpp_critical = true;
				HX_STACK_LINE(49)
				bool tmp13 = (it->zpp_i < length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(49)
				if ((tmp13)){
					HX_STACK_LINE(49)
					tmp10 = true;
				}
				else{
					HX_STACK_LINE(49)
					{
						HX_STACK_LINE(49)
						::nape::shape::ShapeIterator tmp14 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(49)
						it->zpp_next = tmp14;
						HX_STACK_LINE(49)
						::nape::shape::ShapeIterator_obj::zpp_pool = it;
						HX_STACK_LINE(49)
						it->zpp_inner = null();
					}
					HX_STACK_LINE(49)
					tmp10 = false;
				}
			}
			HX_STACK_LINE(49)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(49)
			if ((tmp11)){
				HX_STACK_LINE(49)
				break;
			}
			HX_STACK_LINE(49)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(49)
				::nape::shape::Shape tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(49)
					it->zpp_critical = false;
					HX_STACK_LINE(49)
					int tmp13 = (it->zpp_i)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(49)
					tmp12 = it->zpp_inner->at(tmp13);
				}
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(50)
							tmp12->zpp_inner->immutable_midstep(HX_HCSTRING("Shape::sensorEnabled","\xc6","\x60","\x6c","\x36"));
							HX_STACK_LINE(50)
							tmp12->zpp_inner->sensorEnabled = true;
							HX_STACK_LINE(50)
							tmp12->zpp_inner->wake();
						}
						HX_STACK_LINE(50)
						tmp12->zpp_inner->sensorEnabled;
					}
					HX_STACK_LINE(51)
					{
						HX_STACK_LINE(51)
						Dynamic tmp13 = ::Physics_obj::filters;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(51)
						::nape::dynamics::InteractionFilter filter = tmp13->__Field(HX_HCSTRING("projectile","\xe9","\x85","\x8b","\xc4"), hx::paccDynamic );		HX_STACK_VAR(filter,"filter");
						HX_STACK_LINE(51)
						{
							HX_STACK_LINE(51)
							tmp12->zpp_inner->immutable_midstep(HX_HCSTRING("Shape::filter","\x79","\x9e","\xc6","\x67"));
							HX_STACK_LINE(51)
							bool tmp14 = (filter == null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(51)
							if ((tmp14)){
								HX_STACK_LINE(51)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null as Shape filter","\x2e","\x7a","\x75","\x59"));
							}
							HX_STACK_LINE(51)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp15 = filter->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(51)
							tmp12->zpp_inner->setFilter(tmp15);
						}
						HX_STACK_LINE(51)
						::zpp_nape::dynamics::ZPP_InteractionFilter tmp14 = tmp12->zpp_inner->filter;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(51)
						tmp14->wrapper();
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(49)
						{
							HX_STACK_LINE(49)
							::nape::shape::ShapeIterator tmp12 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(49)
							it->zpp_next = tmp12;
							HX_STACK_LINE(49)
							::nape::shape::ShapeIterator_obj::zpp_pool = it;
							HX_STACK_LINE(49)
							it->zpp_inner = null();
						}
						HX_STACK_LINE(49)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(49)
		_this;
	}
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::nape::callbacks::CbTypeList tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::nape::phys::Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			::nape::phys::Body _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(53)
			::nape::callbacks::CbTypeList tmp8 = _this->zpp_inner_i->wrap_cbTypes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			if ((tmp9)){
				HX_STACK_LINE(53)
				_this->zpp_inner_i->setupcbTypes();
			}
			HX_STACK_LINE(53)
			tmp6 = _this->zpp_inner_i->wrap_cbTypes;
		}
		HX_STACK_LINE(53)
		::nape::callbacks::CbTypeList _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(53)
		Dynamic tmp7 = ::Physics_obj::types;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(53)
		::nape::callbacks::CbType obj = tmp7->__Field(HX_HCSTRING("projectile","\xe9","\x85","\x8b","\xc4"), hx::paccDynamic );		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(53)
		bool tmp8 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		if ((tmp8)){
			HX_STACK_LINE(53)
			::nape::callbacks::CbType tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			_this->push(tmp9);
		}
		else{
			HX_STACK_LINE(53)
			::nape::callbacks::CbType tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			_this->unshift(tmp9);
		}
	}
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		::nape::phys::Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		::nape::phys::Body _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(54)
		Float tmp7 = options->__Field(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		Float tmp8 = options->__Field(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		::nape::geom::Vec2 tmp9 = ::nape::geom::Vec2_obj::__new(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(54)
		Dynamic tmp10 = options->__Field(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(54)
		::nape::geom::Vec2 tmp11 = tmp9->mul(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(54)
		::nape::geom::Vec2 velocity = tmp11;		HX_STACK_VAR(velocity,"velocity");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				bool tmp12 = (velocity != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(54)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(54)
				if ((tmp12)){
					HX_STACK_LINE(54)
					tmp13 = velocity->zpp_disp;
				}
				else{
					HX_STACK_LINE(54)
					tmp13 = false;
				}
				HX_STACK_LINE(54)
				if ((tmp13)){
					HX_STACK_LINE(54)
					::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(54)
					::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(54)
					HX_STACK_DO_THROW(tmp15);
				}
			}
			HX_STACK_LINE(54)
			bool tmp12 = (velocity == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(54)
			if ((tmp12)){
				HX_STACK_LINE(54)
				::String tmp13 = HX_HCSTRING("Error: Body::velocity","\xed","\xb6","\xb8","\xc7");		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(54)
				::String tmp14 = (tmp13 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(54)
				HX_STACK_DO_THROW(tmp14);
			}
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::nape::geom::Vec2 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::nape::geom::Vec2 tmp14 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(54)
					bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(54)
					if ((tmp15)){
						HX_STACK_LINE(54)
						_this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(54)
					tmp13 = _this->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(54)
				::nape::geom::Vec2 _this1 = tmp13;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					bool tmp14 = (_this1 != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(54)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(54)
					if ((tmp14)){
						HX_STACK_LINE(54)
						tmp15 = _this1->zpp_disp;
					}
					else{
						HX_STACK_LINE(54)
						tmp15 = false;
					}
					HX_STACK_LINE(54)
					if ((tmp15)){
						HX_STACK_LINE(54)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(54)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(54)
						HX_STACK_DO_THROW(tmp17);
					}
				}
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					bool tmp14 = (velocity != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(54)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(54)
					if ((tmp14)){
						HX_STACK_LINE(54)
						tmp15 = velocity->zpp_disp;
					}
					else{
						HX_STACK_LINE(54)
						tmp15 = false;
					}
					HX_STACK_LINE(54)
					if ((tmp15)){
						HX_STACK_LINE(54)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(54)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(54)
						HX_STACK_DO_THROW(tmp17);
					}
				}
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(54)
					bool tmp14 = _this2->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(54)
					if ((tmp14)){
						HX_STACK_LINE(54)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(54)
					bool tmp15 = (_this2->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(54)
					if ((tmp15)){
						HX_STACK_LINE(54)
						_this2->_isimmutable();
					}
				}
				HX_STACK_LINE(54)
				bool tmp14 = (velocity == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(54)
				if ((tmp14)){
					HX_STACK_LINE(54)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(54)
				::nape::geom::Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						bool tmp17 = (velocity != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(54)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(54)
						if ((tmp17)){
							HX_STACK_LINE(54)
							tmp18 = velocity->zpp_disp;
						}
						else{
							HX_STACK_LINE(54)
							tmp18 = false;
						}
						HX_STACK_LINE(54)
						if ((tmp18)){
							HX_STACK_LINE(54)
							::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(54)
							::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(54)
							HX_STACK_DO_THROW(tmp20);
						}
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							::zpp_nape::geom::ZPP_Vec2 _this2 = velocity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(54)
							bool tmp19 = (_this2->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(54)
							if ((tmp19)){
								HX_STACK_LINE(54)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(54)
						tmp16 = velocity->zpp_inner->x;
					}
					HX_STACK_LINE(54)
					Float x = tmp16;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(54)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						bool tmp18 = (velocity != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(54)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(54)
						if ((tmp18)){
							HX_STACK_LINE(54)
							tmp19 = velocity->zpp_disp;
						}
						else{
							HX_STACK_LINE(54)
							tmp19 = false;
						}
						HX_STACK_LINE(54)
						if ((tmp19)){
							HX_STACK_LINE(54)
							::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(54)
							::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(54)
							HX_STACK_DO_THROW(tmp21);
						}
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							::zpp_nape::geom::ZPP_Vec2 _this2 = velocity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(54)
							bool tmp20 = (_this2->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(54)
							if ((tmp20)){
								HX_STACK_LINE(54)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(54)
						tmp17 = velocity->zpp_inner->y;
					}
					HX_STACK_LINE(54)
					Float y = tmp17;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						bool tmp18 = (_this1 != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(54)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(54)
						if ((tmp18)){
							HX_STACK_LINE(54)
							tmp19 = _this1->zpp_disp;
						}
						else{
							HX_STACK_LINE(54)
							tmp19 = false;
						}
						HX_STACK_LINE(54)
						if ((tmp19)){
							HX_STACK_LINE(54)
							::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(54)
							::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(54)
							HX_STACK_DO_THROW(tmp21);
						}
					}
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(54)
						bool tmp18 = _this2->_immutable;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(54)
						if ((tmp18)){
							HX_STACK_LINE(54)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(54)
						bool tmp19 = (_this2->_isimmutable != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(54)
						if ((tmp19)){
							HX_STACK_LINE(54)
							_this2->_isimmutable();
						}
					}
					HX_STACK_LINE(54)
					bool tmp18 = (x != x);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(54)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(54)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(54)
					if ((tmp19)){
						HX_STACK_LINE(54)
						tmp20 = (y != y);
					}
					else{
						HX_STACK_LINE(54)
						tmp20 = true;
					}
					HX_STACK_LINE(54)
					if ((tmp20)){
						HX_STACK_LINE(54)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(54)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							bool tmp22 = (_this1 != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(54)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(54)
							if ((tmp22)){
								HX_STACK_LINE(54)
								tmp23 = _this1->zpp_disp;
							}
							else{
								HX_STACK_LINE(54)
								tmp23 = false;
							}
							HX_STACK_LINE(54)
							if ((tmp23)){
								HX_STACK_LINE(54)
								::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(54)
								::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(54)
								HX_STACK_DO_THROW(tmp25);
							}
						}
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(54)
							bool tmp22 = (_this2->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(54)
							if ((tmp22)){
								HX_STACK_LINE(54)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(54)
						tmp21 = _this1->zpp_inner->x;
					}
					HX_STACK_LINE(54)
					Float tmp22 = x;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(54)
					bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(54)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(54)
					if ((tmp23)){
						HX_STACK_LINE(54)
						Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							{
								HX_STACK_LINE(54)
								bool tmp26 = (_this1 != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(54)
								bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(54)
								bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(54)
								bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(54)
								if ((tmp29)){
									HX_STACK_LINE(54)
									tmp28 = _this1->zpp_disp;
								}
								else{
									HX_STACK_LINE(54)
									tmp28 = false;
								}
								HX_STACK_LINE(54)
								bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(54)
								if ((tmp30)){
									HX_STACK_LINE(54)
									::String tmp31 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(54)
									::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(54)
									::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(54)
									::String tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(54)
									::String tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(54)
									HX_STACK_DO_THROW(tmp35);
								}
							}
							HX_STACK_LINE(54)
							{
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(54)
								bool tmp26 = (_this2->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(54)
								bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(54)
								bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(54)
								if ((tmp28)){
									HX_STACK_LINE(54)
									_this2->_validate();
								}
							}
							HX_STACK_LINE(54)
							Float tmp26 = _this1->zpp_inner->y;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(54)
							tmp25 = tmp26;
						}
						HX_STACK_LINE(54)
						Float tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(54)
						tmp24 = (tmp25 == tmp26);
					}
					else{
						HX_STACK_LINE(54)
						tmp24 = false;
					}
					HX_STACK_LINE(54)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(54)
					if ((tmp25)){
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							_this1->zpp_inner->x = x;
							HX_STACK_LINE(54)
							_this1->zpp_inner->y = y;
							HX_STACK_LINE(54)
							{
							}
						}
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(54)
							bool tmp26 = (_this2->_invalidate != null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(54)
							if ((tmp26)){
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2 tmp27 = _this2;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(54)
								_this2->_invalidate(tmp27);
							}
						}
					}
					HX_STACK_LINE(54)
					tmp15 = _this1;
				}
				HX_STACK_LINE(54)
				::nape::geom::Vec2 ret = tmp15;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(54)
					tmp16 = velocity->zpp_inner->weak;
					HX_STACK_LINE(54)
					if ((tmp16)){
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							{
								HX_STACK_LINE(54)
								bool tmp17 = (velocity != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(54)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(54)
								if ((tmp17)){
									HX_STACK_LINE(54)
									tmp18 = velocity->zpp_disp;
								}
								else{
									HX_STACK_LINE(54)
									tmp18 = false;
								}
								HX_STACK_LINE(54)
								if ((tmp18)){
									HX_STACK_LINE(54)
									::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(54)
									::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(54)
									HX_STACK_DO_THROW(tmp20);
								}
							}
							HX_STACK_LINE(54)
							{
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2 _this2 = velocity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(54)
								bool tmp17 = _this2->_immutable;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(54)
								if ((tmp17)){
									HX_STACK_LINE(54)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(54)
								bool tmp18 = (_this2->_isimmutable != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(54)
								if ((tmp18)){
									HX_STACK_LINE(54)
									_this2->_isimmutable();
								}
							}
							HX_STACK_LINE(54)
							bool tmp17 = velocity->zpp_inner->_inuse;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(54)
							if ((tmp17)){
								HX_STACK_LINE(54)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(54)
							::zpp_nape::geom::ZPP_Vec2 inner = velocity->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(54)
							velocity->zpp_inner->outer = null();
							HX_STACK_LINE(54)
							velocity->zpp_inner = null();
							HX_STACK_LINE(54)
							{
								HX_STACK_LINE(54)
								::nape::geom::Vec2 o = velocity;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(54)
								o->zpp_pool = null();
								HX_STACK_LINE(54)
								::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(54)
								bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(54)
								if ((tmp19)){
									HX_STACK_LINE(54)
									::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(54)
									tmp20->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(54)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(54)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(54)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(54)
							{
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(54)
								{
									HX_STACK_LINE(54)
									bool tmp18 = (o->outer != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(54)
									if ((tmp18)){
										HX_STACK_LINE(54)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(54)
										o->outer = null();
									}
									HX_STACK_LINE(54)
									o->_isimmutable = null();
									HX_STACK_LINE(54)
									o->_validate = null();
									HX_STACK_LINE(54)
									o->_invalidate = null();
								}
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(54)
								o->next = tmp18;
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(54)
						true;
					}
					else{
						HX_STACK_LINE(54)
						false;
					}
				}
				HX_STACK_LINE(54)
				ret;
			}
		}
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::nape::geom::Vec2 tmp12 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(54)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(54)
			if ((tmp13)){
				HX_STACK_LINE(54)
				_this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(54)
			_this->zpp_inner->wrap_vel;
		}
	}
	HX_STACK_LINE(55)
	Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		::nape::phys::Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(55)
		::nape::phys::Body _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(55)
		Dynamic tmp8 = _this->zpp_inner_i->userData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(55)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		if ((tmp9)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Projectile.hx",55,0x2fcbe455)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(55)
			Dynamic tmp10 = _Function_3_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			_this->zpp_inner_i->userData = tmp10;
		}
		HX_STACK_LINE(55)
		tmp6 = _this->zpp_inner_i->userData;
	}
	HX_STACK_LINE(55)
	tmp6->__FieldRef(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05")) = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(58)
	this->owner = options->__Field(HX_HCSTRING("owner","\x33","\x98","\x76","\x38"), hx::paccDynamic );
}
;
	return null();
}

//Projectile_obj::~Projectile_obj() { }

Dynamic Projectile_obj::__CreateEmpty() { return  new Projectile_obj; }
hx::ObjectPtr< Projectile_obj > Projectile_obj::__new(Dynamic options)
{  hx::ObjectPtr< Projectile_obj > _result_ = new Projectile_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic Projectile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Projectile_obj > _result_ = new Projectile_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Projectile_obj::update( Float dt){
{
		HX_STACK_FRAME("Projectile","update",0x986f95ce,"Projectile.update","Projectile.hx",62,0x2fcbe455)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(61)
		::Projectile _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		bool tmp = ::GameState_obj::paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		if ((tmp)){
			HX_STACK_LINE(63)
			return null();
		}
		HX_STACK_LINE(65)
		::luxe::Physics tmp1 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		::nape::space::Space tmp2 = tmp1->nape->space;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		::nape::phys::Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		::nape::phys::BodyList tmp4 = tmp2->bodiesInBody(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		::nape::phys::BodyList bodies = tmp4;		HX_STACK_VAR(bodies,"bodies");
		HX_STACK_LINE(66)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			bodies->zpp_inner->valmod();
			HX_STACK_LINE(66)
			bool tmp6 = bodies->zpp_inner->zip_length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			if ((tmp6)){
				HX_STACK_LINE(66)
				bodies->zpp_inner->zip_length = false;
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					::zpp_nape::util::ZNPList_ZPP_Body tmp7 = bodies->zpp_inner->inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(66)
					bodies->zpp_inner->user_length = tmp7->length;
				}
			}
			HX_STACK_LINE(66)
			tmp5 = bodies->zpp_inner->user_length;
		}
		HX_STACK_LINE(66)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		if ((tmp6)){
			HX_STACK_LINE(68)
			bool hit_occurred = false;		HX_STACK_VAR(hit_occurred,"hit_occurred");
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(69)
				if ((tmp7)){
					HX_STACK_LINE(69)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot execute null on list elements","\x97","\xfe","\x61","\x00"));
				}
				HX_STACK_LINE(69)
				::nape::phys::BodyIterator tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					bodies->zpp_inner->valmod();
					HX_STACK_LINE(69)
					::nape::phys::BodyList tmp9 = bodies;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(69)
					tmp8 = ::nape::phys::BodyIterator_obj::get(tmp9);
				}
				HX_STACK_LINE(69)
				::nape::phys::BodyIterator it = tmp8;		HX_STACK_VAR(it,"it");
				HX_STACK_LINE(69)
				while((true)){
					HX_STACK_LINE(69)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						::zpp_nape::util::ZPP_BodyList tmp10 = it->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(69)
						tmp10->valmod();
						HX_STACK_LINE(69)
						int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							::nape::phys::BodyList _this = it->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(69)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(69)
							bool tmp12 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(69)
							if ((tmp12)){
								HX_STACK_LINE(69)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(69)
								{
									HX_STACK_LINE(69)
									::zpp_nape::util::ZNPList_ZPP_Body tmp13 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(69)
									_this->zpp_inner->user_length = tmp13->length;
								}
							}
							HX_STACK_LINE(69)
							tmp11 = _this->zpp_inner->user_length;
						}
						HX_STACK_LINE(69)
						int length = tmp11;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(69)
						it->zpp_critical = true;
						HX_STACK_LINE(69)
						bool tmp12 = (it->zpp_i < length);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(69)
						if ((tmp12)){
							HX_STACK_LINE(69)
							tmp9 = true;
						}
						else{
							HX_STACK_LINE(69)
							{
								HX_STACK_LINE(69)
								::nape::phys::BodyIterator tmp13 = ::nape::phys::BodyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(69)
								it->zpp_next = tmp13;
								HX_STACK_LINE(69)
								::nape::phys::BodyIterator_obj::zpp_pool = it;
								HX_STACK_LINE(69)
								it->zpp_inner = null();
							}
							HX_STACK_LINE(69)
							tmp9 = false;
						}
					}
					HX_STACK_LINE(69)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(69)
					if ((tmp10)){
						HX_STACK_LINE(69)
						break;
					}
					HX_STACK_LINE(69)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(69)
						::nape::phys::Body tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							it->zpp_critical = false;
							HX_STACK_LINE(69)
							int tmp12 = (it->zpp_i)++;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(69)
							tmp11 = it->zpp_inner->at(tmp12);
						}
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(70)
							Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(70)
							{
								HX_STACK_LINE(70)
								Dynamic tmp13 = tmp11->zpp_inner_i->userData;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(70)
								bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(70)
								if ((tmp14)){
									struct _Function_8_1{
										inline static Dynamic Block( ){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Projectile.hx",70,0x2fcbe455)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(70)
									Dynamic tmp15 = _Function_8_1::Block();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(70)
									tmp11->zpp_inner_i->userData = tmp15;
								}
								HX_STACK_LINE(70)
								tmp12 = tmp11->zpp_inner_i->userData;
							}
							HX_STACK_LINE(70)
							::luxe::Entity entity = tmp12->__Field(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"), hx::paccDynamic );		HX_STACK_VAR(entity,"entity");
							HX_STACK_LINE(71)
							bool tmp13 = (entity != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(71)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(71)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(71)
							if ((tmp14)){
								HX_STACK_LINE(71)
								tmp15 = (entity != _g->owner);
							}
							else{
								HX_STACK_LINE(71)
								tmp15 = false;
							}
							HX_STACK_LINE(71)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(71)
							if ((tmp15)){
								HX_STACK_LINE(71)
								tmp16 = (entity != _g);
							}
							else{
								HX_STACK_LINE(71)
								tmp16 = false;
							}
							HX_STACK_LINE(71)
							if ((tmp16)){
								struct _Function_7_1{
									inline static Dynamic Block( ::Projectile &_g){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Projectile.hx",73,0x2fcbe455)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("amount","\xd8","\x11","\x03","\xd5") , (int)1,false);
											__result->Add(HX_HCSTRING("attacker","\x35","\xd6","\xdc","\x00") , _g->owner,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(73)
								Dynamic tmp17 = _Function_7_1::Block(_g);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(73)
								entity->events->fire(HX_HCSTRING("health.damage.point","\x23","\x8e","\xef","\xfc"),tmp17,null());
								HX_STACK_LINE(74)
								hit_occurred = true;
							}
							else{
								HX_STACK_LINE(76)
								int tmp17 = tmp11->zpp_inner->type;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(76)
								bool tmp18 = (tmp17 == (int)1);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(76)
								if ((tmp18)){
									HX_STACK_LINE(78)
									hit_occurred = true;
								}
							}
						}
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(69)
								{
									HX_STACK_LINE(69)
									::nape::phys::BodyIterator tmp11 = ::nape::phys::BodyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(69)
									it->zpp_next = tmp11;
									HX_STACK_LINE(69)
									::nape::phys::BodyIterator_obj::zpp_pool = it;
									HX_STACK_LINE(69)
									it->zpp_inner = null();
								}
								HX_STACK_LINE(69)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(69)
				bodies;
			}
			HX_STACK_LINE(81)
			bool tmp7 = hit_occurred;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			if ((tmp7)){
				HX_STACK_LINE(83)
				{
					HX_STACK_LINE(83)
					(this->component_count)--;
					HX_STACK_LINE(83)
					::luxe::components::Components tmp8 = this->_components;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(83)
					::luxe::components::physics::nape::BoxCollider tmp9 = this->collider;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(83)
					::String tmp10 = tmp9->name;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(83)
					tmp8->remove(tmp10);
				}
				HX_STACK_LINE(84)
				this->destroy(true);
			}
		}
	}
return null();
}


Void Projectile_obj::init( ){
{
		HX_STACK_FRAME("Projectile","init",0xa66f5f95,"Projectile.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Projectile_obj::ondestroy( ){
{
		HX_STACK_FRAME("Projectile","ondestroy",0xc8201716,"Projectile.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}


int Projectile_obj::num_projectiles;


Projectile_obj::Projectile_obj()
{
}

void Projectile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Projectile);
	HX_MARK_MEMBER_NAME(collider,"collider");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(owner,"owner");
	::luxe::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Projectile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collider,"collider");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(owner,"owner");
	::luxe::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Projectile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { return owner; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { return collider; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Projectile_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"num_projectiles") ) { outValue = num_projectiles; return true;  }
	}
	return false;
}

Dynamic Projectile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { owner=inValue.Cast< ::luxe::Entity >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { collider=inValue.Cast< ::luxe::components::physics::nape::BoxCollider >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Projectile_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"num_projectiles") ) { num_projectiles=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Projectile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"));
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	outFields->push(HX_HCSTRING("owner","\x33","\x98","\x76","\x38"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::components::physics::nape::BoxCollider*/ ,(int)offsetof(Projectile_obj,collider),HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9")},
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(Projectile_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{hx::fsObject /*::luxe::Entity*/ ,(int)offsetof(Projectile_obj,owner),HX_HCSTRING("owner","\x33","\x98","\x76","\x38")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Projectile_obj::num_projectiles,HX_HCSTRING("num_projectiles","\xb1","\x83","\xde","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	HX_HCSTRING("owner","\x33","\x98","\x76","\x38"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Projectile_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Projectile_obj::num_projectiles,"num_projectiles");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Projectile_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Projectile_obj::num_projectiles,"num_projectiles");
};

#endif

hx::Class Projectile_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("num_projectiles","\xb1","\x83","\xde","\x4b"),
	::String(null()) };

void Projectile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Projectile","\x09","\x8a","\x3c","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Projectile_obj::__GetStatic;
	__mClass->mSetStaticField = &Projectile_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Projectile_obj >;
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

void Projectile_obj::__boot()
{
	num_projectiles= (int)0;
}

