#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Projectile
#include <Projectile.h>
#endif
#ifndef INCLUDED_World
#include <World.h>
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
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
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
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
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
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
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

Void Projectile_obj::__construct(::phoenix::Vector _pos,::phoenix::Vector _bounds,::phoenix::Texture _tex,::phoenix::Vector _dir,Float _spd)
{
HX_STACK_FRAME("Projectile","new",0xa2a0637b,"Projectile.new","Projectile.hx",25,0x2fcbe455)
HX_STACK_THIS(this)
HX_STACK_ARG(_pos,"_pos")
HX_STACK_ARG(_bounds,"_bounds")
HX_STACK_ARG(_tex,"_tex")
HX_STACK_ARG(_dir,"_dir")
HX_STACK_ARG(_spd,"_spd")
{
	HX_STACK_LINE(28)
	int tmp = (::Projectile_obj::num_projectiles)++;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::String tmp1 = (HX_HCSTRING("projectile","\xe9","\x85","\x8b","\xc4") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	::phoenix::Vector tmp2 = _pos;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(_tex->width,_tex->height,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	::phoenix::Texture tmp4 = _tex;		HX_STACK_VAR(tmp4,"tmp4");
	struct _Function_1_1{
		inline static Dynamic Block( ::phoenix::Texture &tmp4,::phoenix::Vector &tmp2,::phoenix::Vector &tmp3,::String &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Projectile.hx",27,0x2fcbe455)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp1,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp2,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp3,false);
				__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp4,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(27)
	Dynamic tmp5 = _Function_1_1::Block(tmp4,tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	super::__construct(tmp5);
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(36)
		Float tmp6 = _pos->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		Float tmp7 = _pos->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		Float tmp8 = _bounds->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		Float tmp9 = _bounds->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(38)
		::nape::phys::BodyType tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			::nape::phys::BodyType tmp11 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(38)
			bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(38)
			if ((tmp12)){
				HX_STACK_LINE(38)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(38)
				::nape::phys::BodyType tmp13 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(38)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = tmp13;
				HX_STACK_LINE(38)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(38)
			tmp10 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
		}
		struct _Function_2_1{
			inline static Dynamic Block( Float &tmp6,Float &tmp9,::nape::phys::BodyType &tmp10,Float &tmp7,Float &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Projectile.hx",35,0x2fcbe455)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp9,false);
					__result->Add(HX_HCSTRING("body_type","\xb7","\xc8","\xf4","\x2c") , tmp10,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		Dynamic tmp11 = _Function_2_1::Block(tmp6,tmp9,tmp10,tmp7,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(35)
		::luxe::components::physics::nape::BoxCollider tmp12 = ::luxe::components::physics::nape::BoxCollider_obj::__new(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(35)
		::luxe::components::physics::nape::BoxCollider tmp13 = this->collider = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(35)
		::luxe::components::physics::nape::BoxCollider _component = tmp13;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(35)
		(this->component_count)++;
		HX_STACK_LINE(35)
		::luxe::components::Components tmp14 = this->_components;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(35)
		::luxe::components::physics::nape::BoxCollider tmp15 = _component;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(35)
		tmp14->add(tmp15);
	}
	HX_STACK_LINE(42)
	::luxe::components::physics::nape::BoxCollider tmp6 = this->collider;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	this->body = tmp6->body;
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		::nape::phys::Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		::nape::shape::ShapeList tmp8 = tmp7->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		::nape::shape::ShapeList _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(43)
		bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		if ((tmp9)){
			HX_STACK_LINE(43)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot execute null on list elements","\x97","\xfe","\x61","\x00"));
		}
		HX_STACK_LINE(43)
		::nape::shape::ShapeIterator tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(43)
			::nape::shape::ShapeList tmp11 = _this;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(43)
			tmp10 = ::nape::shape::ShapeIterator_obj::get(tmp11);
		}
		HX_STACK_LINE(43)
		::nape::shape::ShapeIterator it = tmp10;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				::zpp_nape::util::ZPP_ShapeList tmp12 = it->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(43)
				tmp12->valmod();
				HX_STACK_LINE(43)
				int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(43)
				{
					HX_STACK_LINE(43)
					::nape::shape::ShapeList _this1 = it->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(43)
					_this1->zpp_inner->valmod();
					HX_STACK_LINE(43)
					bool tmp14 = _this1->zpp_inner->zip_length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(43)
					if ((tmp14)){
						HX_STACK_LINE(43)
						_this1->zpp_inner->zip_length = false;
						HX_STACK_LINE(43)
						{
							HX_STACK_LINE(43)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp15 = _this1->zpp_inner->inner;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(43)
							_this1->zpp_inner->user_length = tmp15->length;
						}
					}
					HX_STACK_LINE(43)
					tmp13 = _this1->zpp_inner->user_length;
				}
				HX_STACK_LINE(43)
				int length = tmp13;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(43)
				it->zpp_critical = true;
				HX_STACK_LINE(43)
				bool tmp14 = (it->zpp_i < length);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(43)
				if ((tmp14)){
					HX_STACK_LINE(43)
					tmp11 = true;
				}
				else{
					HX_STACK_LINE(43)
					{
						HX_STACK_LINE(43)
						::nape::shape::ShapeIterator tmp15 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(43)
						it->zpp_next = tmp15;
						HX_STACK_LINE(43)
						::nape::shape::ShapeIterator_obj::zpp_pool = it;
						HX_STACK_LINE(43)
						it->zpp_inner = null();
					}
					HX_STACK_LINE(43)
					tmp11 = false;
				}
			}
			HX_STACK_LINE(43)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			if ((tmp12)){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(43)
				::nape::shape::Shape tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(43)
				{
					HX_STACK_LINE(43)
					it->zpp_critical = false;
					HX_STACK_LINE(43)
					int tmp14 = (it->zpp_i)++;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(43)
					tmp13 = it->zpp_inner->at(tmp14);
				}
				HX_STACK_LINE(43)
				{
					HX_STACK_LINE(43)
					{
						HX_STACK_LINE(43)
						tmp13->zpp_inner->immutable_midstep(HX_HCSTRING("Shape::sensorEnabled","\xc6","\x60","\x6c","\x36"));
						HX_STACK_LINE(43)
						tmp13->zpp_inner->sensorEnabled = true;
						HX_STACK_LINE(43)
						tmp13->zpp_inner->wake();
					}
					HX_STACK_LINE(43)
					tmp13->zpp_inner->sensorEnabled;
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(43)
						{
							HX_STACK_LINE(43)
							::nape::shape::ShapeIterator tmp13 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(43)
							it->zpp_next = tmp13;
							HX_STACK_LINE(43)
							::nape::shape::ShapeIterator_obj::zpp_pool = it;
							HX_STACK_LINE(43)
							it->zpp_inner = null();
						}
						HX_STACK_LINE(43)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(43)
		_this;
	}
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::nape::callbacks::CbTypeList tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::nape::phys::Body tmp8 = this->body;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(44)
			::nape::phys::Body _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(44)
			::nape::callbacks::CbTypeList tmp9 = _this->zpp_inner_i->wrap_cbTypes;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(44)
			bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(44)
			if ((tmp10)){
				HX_STACK_LINE(44)
				_this->zpp_inner_i->setupcbTypes();
			}
			HX_STACK_LINE(44)
			tmp7 = _this->zpp_inner_i->wrap_cbTypes;
		}
		HX_STACK_LINE(44)
		::nape::callbacks::CbTypeList _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(44)
		::nape::callbacks::CbType tmp8 = ::World_obj::CBTYPE_PROJECTILE;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(44)
		::nape::callbacks::CbType obj = tmp8;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(44)
		bool tmp9 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		if ((tmp9)){
			HX_STACK_LINE(44)
			::nape::callbacks::CbType tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(44)
			_this->push(tmp10);
		}
		else{
			HX_STACK_LINE(44)
			::nape::callbacks::CbType tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(44)
			_this->unshift(tmp10);
		}
	}
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::nape::phys::Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		::nape::phys::Body _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(45)
		::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(_dir->x,_dir->y);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		Float tmp9 = _spd;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		::nape::geom::Vec2 tmp10 = tmp8->mul(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		::nape::geom::Vec2 velocity = tmp10;		HX_STACK_VAR(velocity,"velocity");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				bool tmp11 = (velocity != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(45)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(45)
				if ((tmp11)){
					HX_STACK_LINE(45)
					tmp12 = velocity->zpp_disp;
				}
				else{
					HX_STACK_LINE(45)
					tmp12 = false;
				}
				HX_STACK_LINE(45)
				if ((tmp12)){
					HX_STACK_LINE(45)
					::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(45)
					::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(45)
					HX_STACK_DO_THROW(tmp14);
				}
			}
			HX_STACK_LINE(45)
			bool tmp11 = (velocity == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			if ((tmp11)){
				HX_STACK_LINE(45)
				::String tmp12 = HX_HCSTRING("Error: Body::velocity","\xed","\xb6","\xb8","\xc7");		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(45)
				::String tmp13 = (tmp12 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(45)
				HX_STACK_DO_THROW(tmp13);
			}
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					::nape::geom::Vec2 tmp13 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(45)
					bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(45)
					if ((tmp14)){
						HX_STACK_LINE(45)
						_this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(45)
					tmp12 = _this->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(45)
				::nape::geom::Vec2 _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					bool tmp13 = (_this1 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(45)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(45)
					if ((tmp13)){
						HX_STACK_LINE(45)
						tmp14 = _this1->zpp_disp;
					}
					else{
						HX_STACK_LINE(45)
						tmp14 = false;
					}
					HX_STACK_LINE(45)
					if ((tmp14)){
						HX_STACK_LINE(45)
						::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(45)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(45)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					bool tmp13 = (velocity != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(45)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(45)
					if ((tmp13)){
						HX_STACK_LINE(45)
						tmp14 = velocity->zpp_disp;
					}
					else{
						HX_STACK_LINE(45)
						tmp14 = false;
					}
					HX_STACK_LINE(45)
					if ((tmp14)){
						HX_STACK_LINE(45)
						::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(45)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(45)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(45)
					bool tmp13 = _this2->_immutable;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(45)
					if ((tmp13)){
						HX_STACK_LINE(45)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(45)
					bool tmp14 = (_this2->_isimmutable != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(45)
					if ((tmp14)){
						HX_STACK_LINE(45)
						_this2->_isimmutable();
					}
				}
				HX_STACK_LINE(45)
				bool tmp13 = (velocity == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(45)
				if ((tmp13)){
					HX_STACK_LINE(45)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(45)
				::nape::geom::Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						bool tmp16 = (velocity != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(45)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(45)
						if ((tmp16)){
							HX_STACK_LINE(45)
							tmp17 = velocity->zpp_disp;
						}
						else{
							HX_STACK_LINE(45)
							tmp17 = false;
						}
						HX_STACK_LINE(45)
						if ((tmp17)){
							HX_STACK_LINE(45)
							::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(45)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(45)
							HX_STACK_DO_THROW(tmp19);
						}
						HX_STACK_LINE(45)
						{
							HX_STACK_LINE(45)
							::zpp_nape::geom::ZPP_Vec2 _this2 = velocity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(45)
							bool tmp18 = (_this2->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(45)
							if ((tmp18)){
								HX_STACK_LINE(45)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(45)
						tmp15 = velocity->zpp_inner->x;
					}
					HX_STACK_LINE(45)
					Float x = tmp15;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(45)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						bool tmp17 = (velocity != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(45)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(45)
						if ((tmp17)){
							HX_STACK_LINE(45)
							tmp18 = velocity->zpp_disp;
						}
						else{
							HX_STACK_LINE(45)
							tmp18 = false;
						}
						HX_STACK_LINE(45)
						if ((tmp18)){
							HX_STACK_LINE(45)
							::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(45)
							::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(45)
							HX_STACK_DO_THROW(tmp20);
						}
						HX_STACK_LINE(45)
						{
							HX_STACK_LINE(45)
							::zpp_nape::geom::ZPP_Vec2 _this2 = velocity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(45)
							bool tmp19 = (_this2->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(45)
							if ((tmp19)){
								HX_STACK_LINE(45)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(45)
						tmp16 = velocity->zpp_inner->y;
					}
					HX_STACK_LINE(45)
					Float y = tmp16;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						bool tmp17 = (_this1 != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(45)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(45)
						if ((tmp17)){
							HX_STACK_LINE(45)
							tmp18 = _this1->zpp_disp;
						}
						else{
							HX_STACK_LINE(45)
							tmp18 = false;
						}
						HX_STACK_LINE(45)
						if ((tmp18)){
							HX_STACK_LINE(45)
							::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(45)
							::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(45)
							HX_STACK_DO_THROW(tmp20);
						}
					}
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(45)
						bool tmp17 = _this2->_immutable;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(45)
						if ((tmp17)){
							HX_STACK_LINE(45)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(45)
						bool tmp18 = (_this2->_isimmutable != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(45)
						if ((tmp18)){
							HX_STACK_LINE(45)
							_this2->_isimmutable();
						}
					}
					HX_STACK_LINE(45)
					bool tmp17 = (x != x);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(45)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(45)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(45)
					if ((tmp18)){
						HX_STACK_LINE(45)
						tmp19 = (y != y);
					}
					else{
						HX_STACK_LINE(45)
						tmp19 = true;
					}
					HX_STACK_LINE(45)
					if ((tmp19)){
						HX_STACK_LINE(45)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(45)
					Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						{
							HX_STACK_LINE(45)
							bool tmp21 = (_this1 != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(45)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(45)
							if ((tmp21)){
								HX_STACK_LINE(45)
								tmp22 = _this1->zpp_disp;
							}
							else{
								HX_STACK_LINE(45)
								tmp22 = false;
							}
							HX_STACK_LINE(45)
							if ((tmp22)){
								HX_STACK_LINE(45)
								::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(45)
								::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(45)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(45)
						{
							HX_STACK_LINE(45)
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(45)
							bool tmp21 = (_this2->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(45)
							if ((tmp21)){
								HX_STACK_LINE(45)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(45)
						tmp20 = _this1->zpp_inner->x;
					}
					HX_STACK_LINE(45)
					Float tmp21 = x;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(45)
					bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(45)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(45)
					if ((tmp22)){
						HX_STACK_LINE(45)
						Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(45)
						{
							HX_STACK_LINE(45)
							{
								HX_STACK_LINE(45)
								bool tmp25 = (_this1 != null());		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(45)
								bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(45)
								bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(45)
								bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(45)
								if ((tmp28)){
									HX_STACK_LINE(45)
									tmp27 = _this1->zpp_disp;
								}
								else{
									HX_STACK_LINE(45)
									tmp27 = false;
								}
								HX_STACK_LINE(45)
								bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(45)
								if ((tmp29)){
									HX_STACK_LINE(45)
									::String tmp30 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(45)
									::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(45)
									::String tmp32 = (tmp31 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(45)
									::String tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(45)
									::String tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(45)
									HX_STACK_DO_THROW(tmp34);
								}
							}
							HX_STACK_LINE(45)
							{
								HX_STACK_LINE(45)
								::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(45)
								bool tmp25 = (_this2->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(45)
								bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(45)
								bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(45)
								if ((tmp27)){
									HX_STACK_LINE(45)
									_this2->_validate();
								}
							}
							HX_STACK_LINE(45)
							Float tmp25 = _this1->zpp_inner->y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(45)
							tmp24 = tmp25;
						}
						HX_STACK_LINE(45)
						Float tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(45)
						tmp23 = (tmp24 == tmp25);
					}
					else{
						HX_STACK_LINE(45)
						tmp23 = false;
					}
					HX_STACK_LINE(45)
					bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(45)
					if ((tmp24)){
						HX_STACK_LINE(45)
						{
							HX_STACK_LINE(45)
							_this1->zpp_inner->x = x;
							HX_STACK_LINE(45)
							_this1->zpp_inner->y = y;
							HX_STACK_LINE(45)
							{
							}
						}
						HX_STACK_LINE(45)
						{
							HX_STACK_LINE(45)
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(45)
							bool tmp25 = (_this2->_invalidate != null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(45)
							if ((tmp25)){
								HX_STACK_LINE(45)
								::zpp_nape::geom::ZPP_Vec2 tmp26 = _this2;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(45)
								_this2->_invalidate(tmp26);
							}
						}
					}
					HX_STACK_LINE(45)
					tmp14 = _this1;
				}
				HX_STACK_LINE(45)
				::nape::geom::Vec2 ret = tmp14;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(45)
					tmp15 = velocity->zpp_inner->weak;
					HX_STACK_LINE(45)
					if ((tmp15)){
						HX_STACK_LINE(45)
						{
							HX_STACK_LINE(45)
							{
								HX_STACK_LINE(45)
								bool tmp16 = (velocity != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(45)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(45)
								if ((tmp16)){
									HX_STACK_LINE(45)
									tmp17 = velocity->zpp_disp;
								}
								else{
									HX_STACK_LINE(45)
									tmp17 = false;
								}
								HX_STACK_LINE(45)
								if ((tmp17)){
									HX_STACK_LINE(45)
									::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(45)
									::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(45)
									HX_STACK_DO_THROW(tmp19);
								}
							}
							HX_STACK_LINE(45)
							{
								HX_STACK_LINE(45)
								::zpp_nape::geom::ZPP_Vec2 _this2 = velocity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(45)
								bool tmp16 = _this2->_immutable;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(45)
								if ((tmp16)){
									HX_STACK_LINE(45)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(45)
								bool tmp17 = (_this2->_isimmutable != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(45)
								if ((tmp17)){
									HX_STACK_LINE(45)
									_this2->_isimmutable();
								}
							}
							HX_STACK_LINE(45)
							bool tmp16 = velocity->zpp_inner->_inuse;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(45)
							if ((tmp16)){
								HX_STACK_LINE(45)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(45)
							::zpp_nape::geom::ZPP_Vec2 inner = velocity->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(45)
							velocity->zpp_inner->outer = null();
							HX_STACK_LINE(45)
							velocity->zpp_inner = null();
							HX_STACK_LINE(45)
							{
								HX_STACK_LINE(45)
								::nape::geom::Vec2 o = velocity;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(45)
								o->zpp_pool = null();
								HX_STACK_LINE(45)
								::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(45)
								bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(45)
								if ((tmp18)){
									HX_STACK_LINE(45)
									::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(45)
									tmp19->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(45)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(45)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(45)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(45)
							{
								HX_STACK_LINE(45)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(45)
								{
									HX_STACK_LINE(45)
									bool tmp17 = (o->outer != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(45)
									if ((tmp17)){
										HX_STACK_LINE(45)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(45)
										o->outer = null();
									}
									HX_STACK_LINE(45)
									o->_isimmutable = null();
									HX_STACK_LINE(45)
									o->_validate = null();
									HX_STACK_LINE(45)
									o->_invalidate = null();
								}
								HX_STACK_LINE(45)
								::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(45)
								o->next = tmp17;
								HX_STACK_LINE(45)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(45)
						true;
					}
					else{
						HX_STACK_LINE(45)
						false;
					}
				}
				HX_STACK_LINE(45)
				ret;
			}
		}
		HX_STACK_LINE(45)
		{
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
			_this->zpp_inner->wrap_vel;
		}
	}
	HX_STACK_LINE(46)
	Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::nape::phys::Body tmp8 = this->body;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(46)
		::nape::phys::Body _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(46)
		Dynamic tmp9 = _this->zpp_inner_i->userData;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(46)
		bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(46)
		if ((tmp10)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Projectile.hx",46,0x2fcbe455)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(46)
			Dynamic tmp11 = _Function_3_1::Block();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(46)
			_this->zpp_inner_i->userData = tmp11;
		}
		HX_STACK_LINE(46)
		tmp7 = _this->zpp_inner_i->userData;
	}
	HX_STACK_LINE(46)
	tmp7->__FieldRef(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05")) = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(49)
	::luxe::Events tmp8 = this->events;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(49)
	Dynamic tmp9 = this->handler_interaction_begin_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(49)
	tmp8->listen(HX_HCSTRING("projectile.interaction.begin","\xc8","\x84","\xa5","\x48"),tmp9);
}
;
	return null();
}

//Projectile_obj::~Projectile_obj() { }

Dynamic Projectile_obj::__CreateEmpty() { return  new Projectile_obj; }
hx::ObjectPtr< Projectile_obj > Projectile_obj::__new(::phoenix::Vector _pos,::phoenix::Vector _bounds,::phoenix::Texture _tex,::phoenix::Vector _dir,Float _spd)
{  hx::ObjectPtr< Projectile_obj > _result_ = new Projectile_obj();
	_result_->__construct(_pos,_bounds,_tex,_dir,_spd);
	return _result_;}

Dynamic Projectile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Projectile_obj > _result_ = new Projectile_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void Projectile_obj::handler_interaction_begin( ::nape::callbacks::InteractionCallback cb){
{
		HX_STACK_FRAME("Projectile","handler_interaction_begin",0xf3b82122,"Projectile.handler_interaction_begin","Projectile.hx",54,0x2fcbe455)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(54)
		this->destroy(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Projectile_obj,handler_interaction_begin,(void))

Void Projectile_obj::update( Float dt){
{
		HX_STACK_FRAME("Projectile","update",0x986f95ce,"Projectile.update","Projectile.hx",58,0x2fcbe455)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(59)
		::luxe::Physics tmp = ::Luxe_obj::physics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		::nape::space::Space tmp1 = tmp->nape->space;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		::nape::phys::Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		::nape::phys::BodyList tmp3 = tmp1->bodiesInBody(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		::nape::phys::BodyList bodies = tmp3;		HX_STACK_VAR(bodies,"bodies");
		HX_STACK_LINE(60)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			bodies->zpp_inner->valmod();
			HX_STACK_LINE(60)
			bool tmp5 = bodies->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			if ((tmp5)){
				HX_STACK_LINE(60)
				bodies->zpp_inner->zip_length = false;
				HX_STACK_LINE(60)
				{
					HX_STACK_LINE(60)
					::zpp_nape::util::ZNPList_ZPP_Body tmp6 = bodies->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(60)
					bodies->zpp_inner->user_length = tmp6->length;
				}
			}
			HX_STACK_LINE(60)
			tmp4 = bodies->zpp_inner->user_length;
		}
		HX_STACK_LINE(60)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		if ((tmp5)){
			HX_STACK_LINE(62)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Projectile.hx","\x55","\xe4","\xcb","\x2f"),62,HX_HCSTRING("Projectile","\x09","\x8a","\x3c","\xbb"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			::haxe::Log_obj::trace(HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),tmp6);
			HX_STACK_LINE(63)
			this->set_active(false);
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
	HX_MARK_MEMBER_NAME(begin_interaction_listener,"begin_interaction_listener");
	::luxe::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Projectile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collider,"collider");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(begin_interaction_listener,"begin_interaction_listener");
	::luxe::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Projectile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { return collider; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"handler_interaction_begin") ) { return handler_interaction_begin_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"begin_interaction_listener") ) { return begin_interaction_listener; }
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
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { collider=inValue.Cast< ::luxe::components::physics::nape::BoxCollider >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"begin_interaction_listener") ) { begin_interaction_listener=inValue.Cast< ::nape::callbacks::InteractionListener >(); return inValue; }
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
	outFields->push(HX_HCSTRING("begin_interaction_listener","\xd7","\xfe","\xd0","\x1d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::components::physics::nape::BoxCollider*/ ,(int)offsetof(Projectile_obj,collider),HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9")},
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(Projectile_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{hx::fsObject /*::nape::callbacks::InteractionListener*/ ,(int)offsetof(Projectile_obj,begin_interaction_listener),HX_HCSTRING("begin_interaction_listener","\xd7","\xfe","\xd0","\x1d")},
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
	HX_HCSTRING("begin_interaction_listener","\xd7","\xfe","\xd0","\x1d"),
	HX_HCSTRING("handler_interaction_begin","\xc7","\x21","\xca","\x89"),
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

