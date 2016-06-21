#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
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
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
#ifndef INCLUDED_luxe_components_physics_nape_NapeBody
#include <luxe/components/physics/nape/NapeBody.h>
#endif
#ifndef INCLUDED_luxe_physics_nape_DebugDraw
#include <luxe/physics/nape/DebugDraw.h>
#endif
#ifndef INCLUDED_luxe_physics_nape_PhysicsNape
#include <luxe/physics/nape/PhysicsNape.h>
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
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
namespace luxe{
namespace components{
namespace physics{
namespace nape{

Void NapeBody_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.components.physics.nape.NapeBody","new",0xb6bf69fb,"luxe.components.physics.nape.NapeBody.new","luxe/components/physics/nape/NapeBody.hx",29,0x40e3bb15)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(31)
	this->body_options = _options;
	HX_STACK_LINE(32)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	this->euler = tmp;
	HX_STACK_LINE(34)
	Dynamic tmp1 = this->body_options;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	super::__construct(tmp1);
}
;
	return null();
}

//NapeBody_obj::~NapeBody_obj() { }

Dynamic NapeBody_obj::__CreateEmpty() { return  new NapeBody_obj; }
hx::ObjectPtr< NapeBody_obj > NapeBody_obj::__new(Dynamic _options)
{  hx::ObjectPtr< NapeBody_obj > _result_ = new NapeBody_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic NapeBody_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NapeBody_obj > _result_ = new NapeBody_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NapeBody_obj::onadded( ){
{
		HX_STACK_FRAME("luxe.components.physics.nape.NapeBody","onadded",0x751c065c,"luxe.components.physics.nape.NapeBody.onadded","luxe/components/physics/nape/NapeBody.hx",38,0x40e3bb15)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		Dynamic tmp = this->body_options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::nape::phys::BodyType tmp1 = tmp->__Field(HX_HCSTRING("body_type","\xb7","\xc8","\xf4","\x2c"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		::nape::phys::Body tmp2 = ::nape::phys::Body_obj::__new(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		this->body = tmp2;
	}
return null();
}


Void NapeBody_obj::onremoved( ){
{
		HX_STACK_FRAME("luxe.components.physics.nape.NapeBody","onremoved",0x577cf03c,"luxe.components.physics.nape.NapeBody.onremoved","luxe/components/physics/nape/NapeBody.hx",44,0x40e3bb15)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->super::onremoved();
		HX_STACK_LINE(48)
		::luxe::Physics tmp = ::Luxe_obj::physics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::luxe::physics::nape::DebugDraw tmp1 = tmp->nape->debugdraw;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		if ((tmp2)){
			HX_STACK_LINE(49)
			::luxe::Physics tmp3 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			::luxe::physics::nape::DebugDraw tmp4 = tmp3->nape->debugdraw;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			::nape::phys::Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			tmp4->remove(tmp5);
		}
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			::nape::phys::Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			::nape::phys::Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				::zpp_nape::phys::ZPP_Compound tmp4 = _this->zpp_inner->compound;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(52)
				bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(52)
				if ((tmp5)){
					HX_STACK_LINE(52)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set","\x2f","\x88","\x46","\xff"));
				}
				HX_STACK_LINE(52)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(52)
				bool tmp6 = _this->zpp_inner->world;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				if ((tmp6)){
					HX_STACK_LINE(52)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
				}
				HX_STACK_LINE(52)
				::zpp_nape::space::ZPP_Space tmp7 = _this->zpp_inner->space;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(52)
				::nape::space::Space tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(52)
				if ((tmp8)){
					HX_STACK_LINE(52)
					tmp9 = null();
				}
				else{
					HX_STACK_LINE(52)
					::zpp_nape::space::ZPP_Space tmp10 = _this->zpp_inner->space;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(52)
					tmp9 = tmp10->outer;
				}
				HX_STACK_LINE(52)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(52)
				if ((tmp10)){
					HX_STACK_LINE(52)
					::zpp_nape::space::ZPP_Space tmp11 = _this->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(52)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(52)
					::nape::space::Space tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(52)
					if ((tmp12)){
						HX_STACK_LINE(52)
						tmp13 = null();
					}
					else{
						HX_STACK_LINE(52)
						::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(52)
						tmp13 = tmp14->outer;
					}
					HX_STACK_LINE(52)
					bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(52)
					if ((tmp14)){
						HX_STACK_LINE(52)
						::zpp_nape::space::ZPP_Component tmp15 = _this->zpp_inner->component;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(52)
						tmp15->woken = false;
					}
					HX_STACK_LINE(52)
					::zpp_nape::space::ZPP_Space tmp15 = _this->zpp_inner->space;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(52)
					bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(52)
					::nape::space::Space tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(52)
					if ((tmp16)){
						HX_STACK_LINE(52)
						tmp17 = null();
					}
					else{
						HX_STACK_LINE(52)
						::zpp_nape::space::ZPP_Space tmp18 = _this->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(52)
						tmp17 = tmp18->outer;
					}
					HX_STACK_LINE(52)
					bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(52)
					if ((tmp18)){
						HX_STACK_LINE(52)
						::zpp_nape::space::ZPP_Space tmp19 = _this->zpp_inner->space;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(52)
						bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(52)
						::nape::space::Space tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(52)
						if ((tmp20)){
							HX_STACK_LINE(52)
							tmp21 = null();
						}
						else{
							HX_STACK_LINE(52)
							::zpp_nape::space::ZPP_Space tmp22 = _this->zpp_inner->space;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(52)
							tmp21 = tmp22->outer;
						}
						HX_STACK_LINE(52)
						::nape::phys::BodyList tmp22 = tmp21->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(52)
						::nape::phys::Body tmp23 = _this;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(52)
						tmp22->remove(tmp23);
					}
					HX_STACK_LINE(52)
					bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(52)
					if ((tmp19)){
						HX_STACK_LINE(52)
						::zpp_nape::space::ZPP_Space tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(52)
						::nape::phys::BodyList _this1 = tmp20->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(52)
						bool tmp21 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(52)
						if ((tmp21)){
							HX_STACK_LINE(52)
							::nape::phys::Body tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(52)
							_this1->push(tmp22);
						}
						else{
							HX_STACK_LINE(52)
							::nape::phys::Body tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(52)
							_this1->unshift(tmp22);
						}
					}
				}
			}
			HX_STACK_LINE(52)
			::zpp_nape::space::ZPP_Space tmp4 = _this->zpp_inner->space;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			if ((tmp5)){
				HX_STACK_LINE(52)
				Dynamic();
			}
			else{
				HX_STACK_LINE(52)
				::zpp_nape::space::ZPP_Space tmp6 = _this->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				tmp6->outer;
			}
		}
		HX_STACK_LINE(53)
		this->body = null();
	}
return null();
}


Void NapeBody_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.components.physics.nape.NapeBody","update",0xed939f4e,"luxe.components.physics.nape.NapeBody.update","luxe/components/physics/nape/NapeBody.hx",57,0x40e3bb15)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(59)
		::luxe::Entity tmp = this->get_entity();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		if ((tmp1)){
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				::luxe::Entity tmp2 = this->get_entity();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				::phoenix::Vector tmp3 = tmp2->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(60)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(60)
				{
					HX_STACK_LINE(60)
					::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(60)
					{
						HX_STACK_LINE(60)
						::nape::phys::Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(60)
						::nape::phys::Body _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(60)
						::nape::geom::Vec2 tmp7 = _this1->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(60)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(60)
						if ((tmp8)){
							HX_STACK_LINE(60)
							_this1->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(60)
						tmp5 = _this1->zpp_inner->wrap_pos;
					}
					HX_STACK_LINE(60)
					::nape::geom::Vec2 _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(60)
					bool tmp6 = (_this1 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(60)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(60)
					if ((tmp6)){
						HX_STACK_LINE(60)
						tmp7 = _this1->zpp_disp;
					}
					else{
						HX_STACK_LINE(60)
						tmp7 = false;
					}
					HX_STACK_LINE(60)
					if ((tmp7)){
						HX_STACK_LINE(60)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(60)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(60)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(60)
					{
						HX_STACK_LINE(60)
						::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(60)
						bool tmp8 = (_this2->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(60)
						if ((tmp8)){
							HX_STACK_LINE(60)
							_this2->_validate();
						}
					}
					HX_STACK_LINE(60)
					tmp4 = _this1->zpp_inner->x;
				}
				HX_STACK_LINE(60)
				Float _x = tmp4;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(60)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(60)
				{
					HX_STACK_LINE(60)
					::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(60)
					{
						HX_STACK_LINE(60)
						::nape::phys::Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(60)
						::nape::phys::Body _this1 = tmp7;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(60)
						::nape::geom::Vec2 tmp8 = _this1->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(60)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(60)
						if ((tmp9)){
							HX_STACK_LINE(60)
							_this1->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(60)
						tmp6 = _this1->zpp_inner->wrap_pos;
					}
					HX_STACK_LINE(60)
					::nape::geom::Vec2 _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(60)
					bool tmp7 = (_this1 != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(60)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(60)
					if ((tmp7)){
						HX_STACK_LINE(60)
						tmp8 = _this1->zpp_disp;
					}
					else{
						HX_STACK_LINE(60)
						tmp8 = false;
					}
					HX_STACK_LINE(60)
					if ((tmp8)){
						HX_STACK_LINE(60)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(60)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(60)
						HX_STACK_DO_THROW(tmp10);
					}
					HX_STACK_LINE(60)
					{
						HX_STACK_LINE(60)
						::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(60)
						bool tmp9 = (_this2->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(60)
						if ((tmp9)){
							HX_STACK_LINE(60)
							_this2->_validate();
						}
					}
					HX_STACK_LINE(60)
					tmp5 = _this1->zpp_inner->y;
				}
				HX_STACK_LINE(60)
				Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(60)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(60)
				_this->ignore_listeners = true;
				HX_STACK_LINE(60)
				{
					HX_STACK_LINE(60)
					_this->x = _x;
					HX_STACK_LINE(60)
					bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(60)
					if ((tmp6)){
						HX_STACK_LINE(60)
						_this->x;
					}
					else{
						HX_STACK_LINE(60)
						bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(60)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(60)
						if ((tmp7)){
							HX_STACK_LINE(60)
							bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(60)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(60)
							tmp8 = !(tmp10);
						}
						else{
							HX_STACK_LINE(60)
							tmp8 = false;
						}
						HX_STACK_LINE(60)
						if ((tmp8)){
							HX_STACK_LINE(60)
							Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(60)
							_this->listen_x(tmp9);
						}
						HX_STACK_LINE(60)
						_this->x;
					}
				}
				HX_STACK_LINE(60)
				{
					HX_STACK_LINE(60)
					_this->y = _y;
					HX_STACK_LINE(60)
					bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(60)
					if ((tmp6)){
						HX_STACK_LINE(60)
						_this->y;
					}
					else{
						HX_STACK_LINE(60)
						bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(60)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(60)
						if ((tmp7)){
							HX_STACK_LINE(60)
							bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(60)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(60)
							tmp8 = !(tmp10);
						}
						else{
							HX_STACK_LINE(60)
							tmp8 = false;
						}
						HX_STACK_LINE(60)
						if ((tmp8)){
							HX_STACK_LINE(60)
							Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(60)
							_this->listen_y(tmp9);
						}
						HX_STACK_LINE(60)
						_this->y;
					}
				}
				HX_STACK_LINE(60)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(60)
				bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(60)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(60)
				if ((tmp6)){
					HX_STACK_LINE(60)
					bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(60)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(60)
					tmp7 = !(tmp9);
				}
				else{
					HX_STACK_LINE(60)
					tmp7 = false;
				}
				HX_STACK_LINE(60)
				if ((tmp7)){
					HX_STACK_LINE(60)
					Float tmp8 = _this->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(60)
					_this->listen_x(tmp8);
				}
				HX_STACK_LINE(60)
				bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(60)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(60)
				if ((tmp8)){
					HX_STACK_LINE(60)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(60)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(60)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(60)
					tmp9 = false;
				}
				HX_STACK_LINE(60)
				if ((tmp9)){
					HX_STACK_LINE(60)
					Float tmp10 = _this->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(60)
					_this->listen_y(tmp10);
				}
				HX_STACK_LINE(60)
				_this;
			}
			HX_STACK_LINE(61)
			{
				HX_STACK_LINE(61)
				::phoenix::Vector tmp2 = this->euler;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(61)
				::phoenix::Vector _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(61)
				::nape::phys::Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(61)
				Float tmp4 = tmp3->zpp_inner->rot;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				Float _z = tmp4;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(61)
				_this->z = _z;
				HX_STACK_LINE(61)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				if ((tmp5)){
					HX_STACK_LINE(61)
					_this->z;
				}
				else{
					HX_STACK_LINE(61)
					bool tmp6 = (_this->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(61)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(61)
					if ((tmp6)){
						HX_STACK_LINE(61)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(61)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(61)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(61)
						tmp7 = false;
					}
					HX_STACK_LINE(61)
					if ((tmp7)){
						HX_STACK_LINE(61)
						Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(61)
						_this->listen_z(tmp8);
					}
					HX_STACK_LINE(61)
					_this->z;
				}
			}
			HX_STACK_LINE(62)
			::luxe::Entity tmp2 = this->get_entity();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			::phoenix::Quaternion tmp3 = tmp2->get_rotation();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			::phoenix::Vector tmp4 = this->euler;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			tmp3->setFromEuler(tmp4,null());
		}
	}
return null();
}


Void NapeBody_obj::post_add( ){
{
		HX_STACK_FRAME("luxe.components.physics.nape.NapeBody","post_add",0xcbb62007,"luxe.components.physics.nape.NapeBody.post_add","luxe/components/physics/nape/NapeBody.hx",70,0x40e3bb15)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(72)
			::nape::phys::Body _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(72)
			::luxe::Physics tmp1 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(72)
			::nape::space::Space tmp2 = tmp1->nape->space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			::nape::space::Space space = tmp2;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				::zpp_nape::phys::ZPP_Compound tmp3 = _this->zpp_inner->compound;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(72)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(72)
				if ((tmp4)){
					HX_STACK_LINE(72)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set","\x2f","\x88","\x46","\xff"));
				}
				HX_STACK_LINE(72)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(72)
				bool tmp5 = _this->zpp_inner->world;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(72)
				if ((tmp5)){
					HX_STACK_LINE(72)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
				}
				HX_STACK_LINE(72)
				::zpp_nape::space::ZPP_Space tmp6 = _this->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(72)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(72)
				::nape::space::Space tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(72)
				if ((tmp7)){
					HX_STACK_LINE(72)
					tmp8 = null();
				}
				else{
					HX_STACK_LINE(72)
					::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(72)
					tmp8 = tmp9->outer;
				}
				HX_STACK_LINE(72)
				::nape::space::Space tmp9 = space;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(72)
				bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(72)
				if ((tmp10)){
					HX_STACK_LINE(72)
					::zpp_nape::space::ZPP_Space tmp11 = _this->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(72)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(72)
					::nape::space::Space tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(72)
					if ((tmp12)){
						HX_STACK_LINE(72)
						tmp13 = null();
					}
					else{
						HX_STACK_LINE(72)
						::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(72)
						tmp13 = tmp14->outer;
					}
					HX_STACK_LINE(72)
					bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(72)
					if ((tmp14)){
						HX_STACK_LINE(72)
						::zpp_nape::space::ZPP_Component tmp15 = _this->zpp_inner->component;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(72)
						tmp15->woken = false;
					}
					HX_STACK_LINE(72)
					::zpp_nape::space::ZPP_Space tmp15 = _this->zpp_inner->space;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(72)
					bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(72)
					::nape::space::Space tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(72)
					if ((tmp16)){
						HX_STACK_LINE(72)
						tmp17 = null();
					}
					else{
						HX_STACK_LINE(72)
						::zpp_nape::space::ZPP_Space tmp18 = _this->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(72)
						tmp17 = tmp18->outer;
					}
					HX_STACK_LINE(72)
					bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(72)
					if ((tmp18)){
						HX_STACK_LINE(72)
						::zpp_nape::space::ZPP_Space tmp19 = _this->zpp_inner->space;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(72)
						bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(72)
						::nape::space::Space tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(72)
						if ((tmp20)){
							HX_STACK_LINE(72)
							tmp21 = null();
						}
						else{
							HX_STACK_LINE(72)
							::zpp_nape::space::ZPP_Space tmp22 = _this->zpp_inner->space;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(72)
							tmp21 = tmp22->outer;
						}
						HX_STACK_LINE(72)
						::nape::phys::BodyList tmp22 = tmp21->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(72)
						::nape::phys::Body tmp23 = _this;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(72)
						tmp22->remove(tmp23);
					}
					HX_STACK_LINE(72)
					bool tmp19 = (space != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(72)
					if ((tmp19)){
						HX_STACK_LINE(72)
						::nape::phys::BodyList tmp20 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(72)
						::nape::phys::BodyList _this1 = tmp20;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(72)
						bool tmp21 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(72)
						if ((tmp21)){
							HX_STACK_LINE(72)
							::nape::phys::Body tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(72)
							_this1->push(tmp22);
						}
						else{
							HX_STACK_LINE(72)
							::nape::phys::Body tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(72)
							_this1->unshift(tmp22);
						}
					}
				}
			}
			HX_STACK_LINE(72)
			::zpp_nape::space::ZPP_Space tmp3 = _this->zpp_inner->space;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			if ((tmp4)){
				HX_STACK_LINE(72)
				Dynamic();
			}
			else{
				HX_STACK_LINE(72)
				::zpp_nape::space::ZPP_Space tmp5 = _this->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(72)
				tmp5->outer;
			}
		}
		HX_STACK_LINE(74)
		::luxe::Physics tmp = ::Luxe_obj::physics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		::luxe::physics::nape::DebugDraw tmp1 = tmp->nape->debugdraw;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		if ((tmp2)){
			HX_STACK_LINE(75)
			::luxe::Physics tmp3 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(75)
			::luxe::physics::nape::DebugDraw tmp4 = tmp3->nape->debugdraw;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			::nape::phys::Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			tmp4->add(tmp5,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NapeBody_obj,post_add,(void))

Void NapeBody_obj::init( ){
{
		HX_STACK_FRAME("luxe.components.physics.nape.NapeBody","init",0x2d760915,"luxe.components.physics.nape.NapeBody.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::init();
	}
return null();
}


Void NapeBody_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.components.physics.nape.NapeBody","ondestroy",0x8902fd96,"luxe.components.physics.nape.NapeBody.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}



NapeBody_obj::NapeBody_obj()
{
}

void NapeBody_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NapeBody);
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(body_options,"body_options");
	HX_MARK_MEMBER_NAME(euler,"euler");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NapeBody_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(body_options,"body_options");
	HX_VISIT_MEMBER_NAME(euler,"euler");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NapeBody_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"euler") ) { return euler; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onadded") ) { return onadded_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"post_add") ) { return post_add_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"body_options") ) { return body_options; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NapeBody_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"euler") ) { euler=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"body_options") ) { body_options=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NapeBody_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	outFields->push(HX_HCSTRING("body_options","\x81","\x79","\xa0","\xf6"));
	outFields->push(HX_HCSTRING("euler","\x69","\xd9","\x20","\x75"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(NapeBody_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NapeBody_obj,body_options),HX_HCSTRING("body_options","\x81","\x79","\xa0","\xf6")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(NapeBody_obj,euler),HX_HCSTRING("euler","\x69","\xd9","\x20","\x75")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	HX_HCSTRING("body_options","\x81","\x79","\xa0","\xf6"),
	HX_HCSTRING("euler","\x69","\xd9","\x20","\x75"),
	HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("post_add","\x82","\x6b","\x7b","\x12"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NapeBody_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NapeBody_obj::__mClass,"__mClass");
};

#endif

hx::Class NapeBody_obj::__mClass;

void NapeBody_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.components.physics.nape.NapeBody","\x89","\x50","\xb6","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NapeBody_obj >;
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

} // end namespace luxe
} // end namespace components
} // end namespace physics
} // end namespace nape
