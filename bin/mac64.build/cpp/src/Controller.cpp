#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
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
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
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
#ifndef INCLUDED_luxe_components_sprite_SpriteAnimation
#include <luxe/components/sprite/SpriteAnimation.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
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
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <zpp_nape/util/ZPP_ArbiterList.h>
#endif

Void Controller_obj::__construct()
{
HX_STACK_FRAME("Controller","new",0xbf7e4bae,"Controller.new","Controller.hx",13,0x2da14382)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	this->_slope_angle = ((Float)0);
	HX_STACK_LINE(24)
	this->_grounded = false;
	HX_STACK_LINE(23)
	this->_jumped_this_frame = false;
	HX_STACK_LINE(33)
	super::__construct(null());
	HX_STACK_LINE(35)
	this->name = HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04");
	HX_STACK_LINE(37)
	this->acceleration = (int)1024;
	HX_STACK_LINE(38)
	this->max_speed = (int)128;
	HX_STACK_LINE(39)
	this->jump_impulse = (int)128;
}
;
	return null();
}

//Controller_obj::~Controller_obj() { }

Dynamic Controller_obj::__CreateEmpty() { return  new Controller_obj; }
hx::ObjectPtr< Controller_obj > Controller_obj::__new()
{  hx::ObjectPtr< Controller_obj > _result_ = new Controller_obj();
	_result_->__construct();
	return _result_;}

Dynamic Controller_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Controller_obj > _result_ = new Controller_obj();
	_result_->__construct();
	return _result_;}

Void Controller_obj::onadded( ){
{
		HX_STACK_FRAME("Controller","onadded",0xee193d8f,"Controller.onadded","Controller.hx",43,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::nape::phys::Body tmp = this->get_body();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(44)
			::nape::phys::Body _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::String tmp1 = HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				::String tmp2 = (HX_HCSTRING("Body::","\x02","\x8e","\x7d","\x8f") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				_this->zpp_inner->immutable_midstep(tmp2);
				HX_STACK_LINE(44)
				bool tmp3 = _this->zpp_inner->norotate;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(44)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(44)
				bool tmp5 = (tmp4 != false);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(44)
				if ((tmp5)){
					HX_STACK_LINE(44)
					bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(44)
					_this->zpp_inner->norotate = tmp6;
					HX_STACK_LINE(44)
					_this->zpp_inner->invalidate_inertia();
				}
			}
			HX_STACK_LINE(44)
			bool tmp1 = _this->zpp_inner->norotate;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			!(tmp1);
		}
		HX_STACK_LINE(45)
		::luxe::Entity tmp = this->get_entity();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		Dynamic tmp1 = this->begincollideterrain_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		tmp->events->listen(HX_HCSTRING("begin.collide.terrain","\x80","\x7a","\x22","\xde"),tmp1);
		HX_STACK_LINE(46)
		::luxe::Entity tmp2 = this->get_entity();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		Dynamic tmp3 = this->ongoingcollideterrain_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		tmp2->events->listen(HX_HCSTRING("ongoing.collide.terrain","\x92","\xfe","\x75","\x97"),tmp3);
		HX_STACK_LINE(47)
		::luxe::Entity tmp4 = this->get_entity();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		Dynamic tmp5 = this->endcollideterrain_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		tmp4->events->listen(HX_HCSTRING("end.collide.terrain","\x32","\x98","\x23","\xa9"),tmp5);
	}
return null();
}


Void Controller_obj::update( Float dt){
{
		HX_STACK_FRAME("Controller","update",0x9ee88f7b,"Controller.update","Controller.hx",51,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(52)
		this->_jumped_this_frame = false;
		HX_STACK_LINE(54)
		::nape::phys::Body tmp = this->get_body();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		::nape::phys::Material tmp1 = ::Controller_obj::get_normal_friction();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		tmp->setShapeMaterials(tmp1);
	}
return null();
}


Void Controller_obj::move( int direction){
{
		HX_STACK_FRAME("Controller","move",0xce624c03,"Controller.move","Controller.hx",58,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(direction,"direction")
		HX_STACK_LINE(60)
		::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		Float dt = tmp->tick_delta;		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(61)
		::luxe::Entity tmp1 = this->get_entity();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		::luxe::Sprite sprite = ((::luxe::Sprite)(tmp1));		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(63)
		int tmp2 = direction;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		int tmp3 = (int)-1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		if ((tmp4)){
			HX_STACK_LINE(63)
			tmp5 = (sprite != null());
		}
		else{
			HX_STACK_LINE(63)
			tmp5 = false;
		}
		HX_STACK_LINE(63)
		if ((tmp5)){
			HX_STACK_LINE(63)
			sprite->set_flipx(true);
		}
		else{
			HX_STACK_LINE(64)
			bool tmp6 = (direction == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(64)
			if ((tmp6)){
				HX_STACK_LINE(64)
				tmp7 = (sprite != null());
			}
			else{
				HX_STACK_LINE(64)
				tmp7 = false;
			}
			HX_STACK_LINE(64)
			if ((tmp7)){
				HX_STACK_LINE(64)
				sprite->set_flipx(false);
			}
		}
		HX_STACK_LINE(66)
		::nape::phys::Body tmp6 = this->get_body();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		::nape::phys::Material tmp7 = ::Controller_obj::get_zero_friction();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		tmp6->setShapeMaterials(tmp7);
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			::nape::geom::Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::nape::phys::Body tmp9 = this->get_body();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(67)
				::nape::phys::Body _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				::nape::geom::Vec2 tmp10 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(67)
				bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(67)
				if ((tmp11)){
					HX_STACK_LINE(67)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(67)
				tmp8 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(67)
			::nape::geom::Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(67)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						::nape::phys::Body tmp12 = this->get_body();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(67)
						::nape::phys::Body _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(67)
						::nape::geom::Vec2 tmp13 = _this1->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(67)
						bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(67)
						if ((tmp14)){
							HX_STACK_LINE(67)
							_this1->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(67)
						tmp11 = _this1->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(67)
					::nape::geom::Vec2 _this1 = tmp11;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(67)
					bool tmp12 = (_this1 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(67)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(67)
					if ((tmp12)){
						HX_STACK_LINE(67)
						tmp13 = _this1->zpp_disp;
					}
					else{
						HX_STACK_LINE(67)
						tmp13 = false;
					}
					HX_STACK_LINE(67)
					if ((tmp13)){
						HX_STACK_LINE(67)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(67)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(67)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(67)
						bool tmp14 = (_this2->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(67)
						if ((tmp14)){
							HX_STACK_LINE(67)
							_this2->_validate();
						}
					}
					HX_STACK_LINE(67)
					tmp10 = _this1->zpp_inner->x;
				}
				HX_STACK_LINE(67)
				Float tmp11 = this->acceleration;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(67)
				Float tmp12 = dt;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(67)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(67)
				int tmp14 = direction;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(67)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(67)
				Float tmp16 = (tmp10 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(67)
				Float value = tmp16;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(67)
				Float tmp17 = this->max_speed;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(67)
				Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(67)
				Float a = tmp18;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(67)
				Float tmp19 = this->max_speed;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(67)
				Float b = tmp19;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(67)
				bool tmp20 = (value < a);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(67)
				if ((tmp20)){
					HX_STACK_LINE(67)
					tmp9 = a;
				}
				else{
					HX_STACK_LINE(67)
					bool tmp21 = (value > b);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(67)
					if ((tmp21)){
						HX_STACK_LINE(67)
						tmp9 = b;
					}
					else{
						HX_STACK_LINE(67)
						tmp9 = value;
					}
				}
			}
			HX_STACK_LINE(67)
			Float x = tmp9;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(67)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(67)
					if ((tmp10)){
						HX_STACK_LINE(67)
						tmp11 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(67)
						tmp11 = false;
					}
					HX_STACK_LINE(67)
					if ((tmp11)){
						HX_STACK_LINE(67)
						::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(67)
						::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(67)
						HX_STACK_DO_THROW(tmp13);
					}
				}
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(67)
					bool tmp10 = _this1->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(67)
					if ((tmp10)){
						HX_STACK_LINE(67)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(67)
					bool tmp11 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(67)
					if ((tmp11)){
						HX_STACK_LINE(67)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(67)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(67)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(67)
						if ((tmp11)){
							HX_STACK_LINE(67)
							tmp12 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(67)
							tmp12 = false;
						}
						HX_STACK_LINE(67)
						if ((tmp12)){
							HX_STACK_LINE(67)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(67)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(67)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(67)
						bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(67)
						if ((tmp11)){
							HX_STACK_LINE(67)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(67)
					tmp10 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(67)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(67)
				bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(67)
				if ((tmp12)){
					HX_STACK_LINE(67)
					bool tmp13 = (x != x);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(67)
					if ((tmp13)){
						HX_STACK_LINE(67)
						::String tmp14 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(67)
						::String tmp15 = (tmp14 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(67)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(67)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(67)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(67)
						if ((tmp14)){
							HX_STACK_LINE(67)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(67)
							_this1->_invalidate(tmp15);
						}
					}
				}
			}
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(67)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(67)
					if ((tmp10)){
						HX_STACK_LINE(67)
						tmp11 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(67)
						tmp11 = false;
					}
					HX_STACK_LINE(67)
					if ((tmp11)){
						HX_STACK_LINE(67)
						::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(67)
						::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(67)
						HX_STACK_DO_THROW(tmp13);
					}
				}
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(67)
					bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(67)
					if ((tmp10)){
						HX_STACK_LINE(67)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(67)
				_this->zpp_inner->x;
			}
		}
		HX_STACK_LINE(68)
		bool tmp8 = this->_grounded;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(68)
		if ((tmp8)){
			HX_STACK_LINE(68)
			bool tmp10 = this->_jumped_this_frame;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(68)
			tmp9 = false;
		}
		HX_STACK_LINE(68)
		if ((tmp9)){
			HX_STACK_LINE(68)
			::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				::nape::phys::Body tmp11 = this->get_body();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(68)
				::nape::phys::Body _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(68)
				::nape::geom::Vec2 tmp12 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(68)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(68)
				if ((tmp13)){
					HX_STACK_LINE(68)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(68)
				tmp10 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(68)
			::nape::geom::Vec2 _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(68)
			Float tmp11 = this->_slope_angle;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			int tmp12 = ((int)90 * direction);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(68)
			Float tmp14 = (tmp13 * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(68)
			Float angle = tmp14;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					bool tmp15 = (_this != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(68)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(68)
					if ((tmp15)){
						HX_STACK_LINE(68)
						tmp16 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(68)
						tmp16 = false;
					}
					HX_STACK_LINE(68)
					if ((tmp16)){
						HX_STACK_LINE(68)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(68)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(68)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(68)
					bool tmp15 = _this1->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(68)
					if ((tmp15)){
						HX_STACK_LINE(68)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(68)
					bool tmp16 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(68)
					if ((tmp16)){
						HX_STACK_LINE(68)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(68)
				bool tmp15 = (angle != angle);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(68)
				if ((tmp15)){
					HX_STACK_LINE(68)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2::angle cannot be NaN","\x22","\xf5","\x3f","\x13"));
				}
				HX_STACK_LINE(68)
				Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						bool tmp17 = (_this != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(68)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(68)
						if ((tmp17)){
							HX_STACK_LINE(68)
							tmp18 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(68)
							tmp18 = false;
						}
						HX_STACK_LINE(68)
						if ((tmp18)){
							HX_STACK_LINE(68)
							::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(68)
							::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(68)
							HX_STACK_DO_THROW(tmp20);
						}
					}
					HX_STACK_LINE(68)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(68)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(68)
							if ((tmp18)){
								HX_STACK_LINE(68)
								tmp19 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(68)
								tmp19 = false;
							}
							HX_STACK_LINE(68)
							if ((tmp19)){
								HX_STACK_LINE(68)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(68)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(68)
								HX_STACK_DO_THROW(tmp21);
							}
						}
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(68)
							bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(68)
							if ((tmp18)){
								HX_STACK_LINE(68)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(68)
						tmp17 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(68)
					Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							bool tmp19 = (_this != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(68)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(68)
							if ((tmp19)){
								HX_STACK_LINE(68)
								tmp20 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(68)
								tmp20 = false;
							}
							HX_STACK_LINE(68)
							if ((tmp20)){
								HX_STACK_LINE(68)
								::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(68)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(68)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(68)
							bool tmp19 = (_this1->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(68)
							if ((tmp19)){
								HX_STACK_LINE(68)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(68)
						tmp18 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(68)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(68)
					Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							bool tmp21 = (_this != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(68)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(68)
							if ((tmp21)){
								HX_STACK_LINE(68)
								tmp22 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(68)
								tmp22 = false;
							}
							HX_STACK_LINE(68)
							if ((tmp22)){
								HX_STACK_LINE(68)
								::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(68)
								::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(68)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(68)
							bool tmp21 = (_this1->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(68)
							if ((tmp21)){
								HX_STACK_LINE(68)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(68)
						tmp20 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(68)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							bool tmp22 = (_this != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(68)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(68)
							if ((tmp22)){
								HX_STACK_LINE(68)
								tmp23 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(68)
								tmp23 = false;
							}
							HX_STACK_LINE(68)
							if ((tmp23)){
								HX_STACK_LINE(68)
								::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(68)
								::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(68)
								HX_STACK_DO_THROW(tmp25);
							}
						}
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(68)
							bool tmp22 = (_this1->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(68)
							if ((tmp22)){
								HX_STACK_LINE(68)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(68)
						tmp21 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(68)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(68)
					Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(68)
					tmp16 = ::Math_obj::sqrt(tmp23);
				}
				HX_STACK_LINE(68)
				Float l = tmp16;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					Float tmp17 = l;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(68)
					Float tmp18 = angle;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(68)
					Float tmp19 = ::Math_obj::cos(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(68)
					Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(68)
					Float x = tmp20;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(68)
					Float tmp21 = l;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(68)
					Float tmp22 = angle;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(68)
					Float tmp23 = ::Math_obj::sin(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(68)
					Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(68)
					Float y = tmp24;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						bool tmp25 = (_this != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(68)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(68)
						if ((tmp25)){
							HX_STACK_LINE(68)
							tmp26 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(68)
							tmp26 = false;
						}
						HX_STACK_LINE(68)
						if ((tmp26)){
							HX_STACK_LINE(68)
							::String tmp27 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(68)
							::String tmp28 = (tmp27 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(68)
							HX_STACK_DO_THROW(tmp28);
						}
					}
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(68)
						bool tmp25 = _this1->_immutable;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(68)
						if ((tmp25)){
							HX_STACK_LINE(68)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(68)
						bool tmp26 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(68)
						if ((tmp26)){
							HX_STACK_LINE(68)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(68)
					bool tmp25 = (x != x);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(68)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(68)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(68)
					if ((tmp26)){
						HX_STACK_LINE(68)
						tmp27 = (y != y);
					}
					else{
						HX_STACK_LINE(68)
						tmp27 = true;
					}
					HX_STACK_LINE(68)
					if ((tmp27)){
						HX_STACK_LINE(68)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(68)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							bool tmp29 = (_this != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(68)
							bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(68)
							if ((tmp29)){
								HX_STACK_LINE(68)
								tmp30 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(68)
								tmp30 = false;
							}
							HX_STACK_LINE(68)
							if ((tmp30)){
								HX_STACK_LINE(68)
								::String tmp31 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(68)
								::String tmp32 = (tmp31 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(68)
								HX_STACK_DO_THROW(tmp32);
							}
						}
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(68)
							bool tmp29 = (_this1->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(68)
							if ((tmp29)){
								HX_STACK_LINE(68)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(68)
						tmp28 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(68)
					Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(68)
					bool tmp30 = (tmp28 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(68)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(68)
					if ((tmp30)){
						HX_STACK_LINE(68)
						Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							{
								HX_STACK_LINE(68)
								bool tmp33 = (_this != null());		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(68)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(68)
								bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(68)
								bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(68)
								if ((tmp36)){
									HX_STACK_LINE(68)
									tmp35 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(68)
									tmp35 = false;
								}
								HX_STACK_LINE(68)
								bool tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(68)
								if ((tmp37)){
									HX_STACK_LINE(68)
									::String tmp38 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(68)
									::String tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(68)
									::String tmp40 = (tmp39 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(68)
									::String tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(68)
									::String tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(68)
									HX_STACK_DO_THROW(tmp42);
								}
							}
							HX_STACK_LINE(68)
							{
								HX_STACK_LINE(68)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(68)
								bool tmp33 = (_this1->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(68)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(68)
								bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(68)
								if ((tmp35)){
									HX_STACK_LINE(68)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(68)
							Float tmp33 = _this->zpp_inner->y;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(68)
							tmp32 = tmp33;
						}
						HX_STACK_LINE(68)
						Float tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(68)
						tmp31 = (tmp32 == tmp33);
					}
					else{
						HX_STACK_LINE(68)
						tmp31 = false;
					}
					HX_STACK_LINE(68)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(68)
					if ((tmp32)){
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(68)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(68)
							{
							}
						}
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(68)
							bool tmp33 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(68)
							if ((tmp33)){
								HX_STACK_LINE(68)
								::zpp_nape::geom::ZPP_Vec2 tmp34 = _this1;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(68)
								_this1->_invalidate(tmp34);
							}
						}
					}
					HX_STACK_LINE(68)
					_this;
				}
			}
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					bool tmp15 = (_this != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(68)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(68)
					if ((tmp15)){
						HX_STACK_LINE(68)
						tmp16 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(68)
						tmp16 = false;
					}
					HX_STACK_LINE(68)
					if ((tmp16)){
						HX_STACK_LINE(68)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(68)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(68)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(68)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						bool tmp16 = (_this != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(68)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(68)
						if ((tmp16)){
							HX_STACK_LINE(68)
							tmp17 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(68)
							tmp17 = false;
						}
						HX_STACK_LINE(68)
						if ((tmp17)){
							HX_STACK_LINE(68)
							::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(68)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(68)
							HX_STACK_DO_THROW(tmp19);
						}
					}
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(68)
						bool tmp16 = (_this1->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(68)
						if ((tmp16)){
							HX_STACK_LINE(68)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(68)
					tmp15 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(68)
				Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						bool tmp17 = (_this != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(68)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(68)
						if ((tmp17)){
							HX_STACK_LINE(68)
							tmp18 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(68)
							tmp18 = false;
						}
						HX_STACK_LINE(68)
						if ((tmp18)){
							HX_STACK_LINE(68)
							::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(68)
							::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(68)
							HX_STACK_DO_THROW(tmp20);
						}
					}
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(68)
						bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(68)
						if ((tmp17)){
							HX_STACK_LINE(68)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(68)
					tmp16 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(68)
				bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(68)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(68)
				if ((tmp17)){
					HX_STACK_LINE(68)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							bool tmp20 = (_this != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(68)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(68)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(68)
							bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(68)
							if ((tmp23)){
								HX_STACK_LINE(68)
								tmp22 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(68)
								tmp22 = false;
							}
							HX_STACK_LINE(68)
							bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(68)
							if ((tmp24)){
								HX_STACK_LINE(68)
								::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(68)
								::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(68)
								::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(68)
								::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(68)
								::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(68)
								HX_STACK_DO_THROW(tmp29);
							}
						}
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(68)
							bool tmp20 = (_this1->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(68)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(68)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(68)
							if ((tmp22)){
								HX_STACK_LINE(68)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(68)
						Float tmp20 = _this->zpp_inner->x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(68)
						tmp19 = tmp20;
					}
					HX_STACK_LINE(68)
					tmp18 = (tmp19 == (int)0);
				}
				else{
					HX_STACK_LINE(68)
					tmp18 = false;
				}
				HX_STACK_LINE(68)
				if ((tmp18)){
					HX_STACK_LINE(68)
					((Float)0.0);
				}
				else{
					HX_STACK_LINE(68)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							bool tmp20 = (_this != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(68)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(68)
							if ((tmp20)){
								HX_STACK_LINE(68)
								tmp21 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(68)
								tmp21 = false;
							}
							HX_STACK_LINE(68)
							if ((tmp21)){
								HX_STACK_LINE(68)
								::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(68)
								::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(68)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(68)
							bool tmp20 = (_this1->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(68)
							if ((tmp20)){
								HX_STACK_LINE(68)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(68)
						tmp19 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(68)
					Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							bool tmp21 = (_this != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(68)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(68)
							if ((tmp21)){
								HX_STACK_LINE(68)
								tmp22 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(68)
								tmp22 = false;
							}
							HX_STACK_LINE(68)
							if ((tmp22)){
								HX_STACK_LINE(68)
								::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(68)
								::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(68)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(68)
							bool tmp21 = (_this1->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(68)
							if ((tmp21)){
								HX_STACK_LINE(68)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(68)
						tmp20 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(68)
					::Math_obj::atan2(tmp19,tmp20);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,move,(void))

Void Controller_obj::jump( ){
{
		HX_STACK_FRAME("Controller","jump",0xcc6b2de0,"Controller.jump","Controller.hx",72,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		bool tmp = this->_grounded;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		if ((tmp1)){
			HX_STACK_LINE(73)
			return null();
		}
		HX_STACK_LINE(75)
		this->_jumped_this_frame = true;
		HX_STACK_LINE(76)
		this->_grounded = false;
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				::nape::phys::Body tmp3 = this->get_body();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(77)
				::nape::phys::Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(77)
				::nape::geom::Vec2 tmp4 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(77)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				if ((tmp5)){
					HX_STACK_LINE(77)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(77)
				tmp2 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(77)
			::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(77)
			Float tmp3 = this->jump_impulse;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(77)
			Float y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				{
					HX_STACK_LINE(77)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(77)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(77)
					if ((tmp5)){
						HX_STACK_LINE(77)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(77)
						tmp6 = false;
					}
					HX_STACK_LINE(77)
					if ((tmp6)){
						HX_STACK_LINE(77)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(77)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(77)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(77)
				{
					HX_STACK_LINE(77)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(77)
					bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(77)
					if ((tmp5)){
						HX_STACK_LINE(77)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(77)
					bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(77)
					if ((tmp6)){
						HX_STACK_LINE(77)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(77)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				{
					HX_STACK_LINE(77)
					{
						HX_STACK_LINE(77)
						bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(77)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(77)
						if ((tmp6)){
							HX_STACK_LINE(77)
							tmp7 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(77)
							tmp7 = false;
						}
						HX_STACK_LINE(77)
						if ((tmp7)){
							HX_STACK_LINE(77)
							::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(77)
							::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(77)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(77)
					{
						HX_STACK_LINE(77)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(77)
						bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(77)
						if ((tmp6)){
							HX_STACK_LINE(77)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(77)
					tmp5 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(77)
				Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(77)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(77)
				if ((tmp7)){
					HX_STACK_LINE(77)
					bool tmp8 = (y != y);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(77)
					if ((tmp8)){
						HX_STACK_LINE(77)
						::String tmp9 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(77)
						::String tmp10 = (tmp9 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(77)
						HX_STACK_DO_THROW(tmp10);
					}
					HX_STACK_LINE(77)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(77)
					{
						HX_STACK_LINE(77)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(77)
						bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(77)
						if ((tmp9)){
							HX_STACK_LINE(77)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(77)
							_this1->_invalidate(tmp10);
						}
					}
				}
			}
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				{
					HX_STACK_LINE(77)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(77)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(77)
					if ((tmp5)){
						HX_STACK_LINE(77)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(77)
						tmp6 = false;
					}
					HX_STACK_LINE(77)
					if ((tmp6)){
						HX_STACK_LINE(77)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(77)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(77)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(77)
				{
					HX_STACK_LINE(77)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(77)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(77)
					if ((tmp5)){
						HX_STACK_LINE(77)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(77)
				_this->zpp_inner->y;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,jump,(void))

Void Controller_obj::begincollideterrain( ::nape::callbacks::InteractionCallback cb){
{
		HX_STACK_FRAME("Controller","begincollideterrain",0x77ae7f2e,"Controller.begincollideterrain","Controller.hx",81,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(82)
		this->_grounded = false;
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			::nape::dynamics::ArbiterList tmp = cb->zpp_inner->wrap_arbiters;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(83)
			::nape::dynamics::ArbiterIterator tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			::nape::dynamics::ArbiterIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			while((true)){
				HX_STACK_LINE(83)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(83)
				{
					HX_STACK_LINE(83)
					::zpp_nape::util::ZPP_ArbiterList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(83)
					tmp3->valmod();
					HX_STACK_LINE(83)
					int tmp4 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(83)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(83)
					_g->zpp_critical = true;
					HX_STACK_LINE(83)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(83)
					if ((tmp5)){
						HX_STACK_LINE(83)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(83)
						{
							HX_STACK_LINE(83)
							::nape::dynamics::ArbiterIterator tmp6 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(83)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(83)
							::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(83)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(83)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(83)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(83)
				if ((tmp3)){
					HX_STACK_LINE(83)
					break;
				}
				HX_STACK_LINE(83)
				::nape::dynamics::Arbiter tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(83)
				{
					HX_STACK_LINE(83)
					_g->zpp_critical = false;
					HX_STACK_LINE(83)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(83)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(83)
				::nape::dynamics::Arbiter arbiter = tmp4;		HX_STACK_VAR(arbiter,"arbiter");
				HX_STACK_LINE(85)
				::nape::dynamics::CollisionArbiter collision_arbiter = ((::nape::dynamics::CollisionArbiter)(arbiter));		HX_STACK_VAR(collision_arbiter,"collision_arbiter");
				HX_STACK_LINE(86)
				bool tmp5 = (collision_arbiter == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(86)
				if ((tmp5)){
					HX_STACK_LINE(86)
					continue;
				}
				HX_STACK_LINE(88)
				::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(88)
				{
					HX_STACK_LINE(88)
					bool tmp7 = collision_arbiter->zpp_inner->active;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(88)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(88)
					if ((tmp8)){
						HX_STACK_LINE(88)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
					}
					HX_STACK_LINE(88)
					::zpp_nape::dynamics::ZPP_ColArbiter tmp9 = collision_arbiter->zpp_inner->colarb;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(88)
					::nape::geom::Vec2 tmp10 = tmp9->wrap_normal;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(88)
					bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(88)
					if ((tmp11)){
						HX_STACK_LINE(88)
						::zpp_nape::dynamics::ZPP_ColArbiter tmp12 = collision_arbiter->zpp_inner->colarb;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(88)
						tmp12->getnormal();
					}
					HX_STACK_LINE(88)
					::zpp_nape::dynamics::ZPP_ColArbiter tmp12 = collision_arbiter->zpp_inner->colarb;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(88)
					tmp6 = tmp12->wrap_normal;
				}
				HX_STACK_LINE(88)
				::nape::geom::Vec2 normal = tmp6;		HX_STACK_VAR(normal,"normal");
				HX_STACK_LINE(90)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(90)
				{
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(90)
						bool tmp8 = (normal != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(90)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(90)
						if ((tmp8)){
							HX_STACK_LINE(90)
							tmp9 = normal->zpp_disp;
						}
						else{
							HX_STACK_LINE(90)
							tmp9 = false;
						}
						HX_STACK_LINE(90)
						if ((tmp9)){
							HX_STACK_LINE(90)
							::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(90)
							::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(90)
							HX_STACK_DO_THROW(tmp11);
						}
					}
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(90)
						::zpp_nape::geom::ZPP_Vec2 _this = normal->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(90)
						bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(90)
						if ((tmp8)){
							HX_STACK_LINE(90)
							_this->_validate();
						}
					}
					HX_STACK_LINE(90)
					tmp7 = normal->zpp_inner->y;
				}
				HX_STACK_LINE(90)
				bool tmp8 = (tmp7 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(90)
				if ((tmp8)){
					HX_STACK_LINE(92)
					this->_grounded = true;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,begincollideterrain,(void))

Void Controller_obj::ongoingcollideterrain( ::nape::callbacks::InteractionCallback cb){
{
		HX_STACK_FRAME("Controller","ongoingcollideterrain",0x0d656a40,"Controller.ongoingcollideterrain","Controller.hx",98,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(99)
		this->_grounded = false;
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			::nape::dynamics::ArbiterList tmp = cb->zpp_inner->wrap_arbiters;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(100)
			::nape::dynamics::ArbiterIterator tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			::nape::dynamics::ArbiterIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(100)
			while((true)){
				HX_STACK_LINE(100)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(100)
				{
					HX_STACK_LINE(100)
					::zpp_nape::util::ZPP_ArbiterList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(100)
					tmp3->valmod();
					HX_STACK_LINE(100)
					int tmp4 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(100)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(100)
					_g->zpp_critical = true;
					HX_STACK_LINE(100)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(100)
					if ((tmp5)){
						HX_STACK_LINE(100)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(100)
						{
							HX_STACK_LINE(100)
							::nape::dynamics::ArbiterIterator tmp6 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(100)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(100)
							::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(100)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(100)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(100)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(100)
				if ((tmp3)){
					HX_STACK_LINE(100)
					break;
				}
				HX_STACK_LINE(100)
				::nape::dynamics::Arbiter tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				{
					HX_STACK_LINE(100)
					_g->zpp_critical = false;
					HX_STACK_LINE(100)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(100)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(100)
				::nape::dynamics::Arbiter arbiter = tmp4;		HX_STACK_VAR(arbiter,"arbiter");
				HX_STACK_LINE(102)
				::nape::dynamics::CollisionArbiter collision_arbiter = ((::nape::dynamics::CollisionArbiter)(arbiter));		HX_STACK_VAR(collision_arbiter,"collision_arbiter");
				HX_STACK_LINE(103)
				bool tmp5 = (collision_arbiter == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(103)
				if ((tmp5)){
					HX_STACK_LINE(103)
					continue;
				}
				HX_STACK_LINE(105)
				::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(105)
				{
					HX_STACK_LINE(105)
					bool tmp7 = collision_arbiter->zpp_inner->active;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(105)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(105)
					if ((tmp8)){
						HX_STACK_LINE(105)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
					}
					HX_STACK_LINE(105)
					::zpp_nape::dynamics::ZPP_ColArbiter tmp9 = collision_arbiter->zpp_inner->colarb;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(105)
					::nape::geom::Vec2 tmp10 = tmp9->wrap_normal;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(105)
					bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(105)
					if ((tmp11)){
						HX_STACK_LINE(105)
						::zpp_nape::dynamics::ZPP_ColArbiter tmp12 = collision_arbiter->zpp_inner->colarb;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(105)
						tmp12->getnormal();
					}
					HX_STACK_LINE(105)
					::zpp_nape::dynamics::ZPP_ColArbiter tmp12 = collision_arbiter->zpp_inner->colarb;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(105)
					tmp6 = tmp12->wrap_normal;
				}
				HX_STACK_LINE(105)
				::nape::geom::Vec2 normal = tmp6;		HX_STACK_VAR(normal,"normal");
				HX_STACK_LINE(107)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						bool tmp8 = (normal != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(107)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(107)
						if ((tmp8)){
							HX_STACK_LINE(107)
							tmp9 = normal->zpp_disp;
						}
						else{
							HX_STACK_LINE(107)
							tmp9 = false;
						}
						HX_STACK_LINE(107)
						if ((tmp9)){
							HX_STACK_LINE(107)
							::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(107)
							::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(107)
							HX_STACK_DO_THROW(tmp11);
						}
					}
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						::zpp_nape::geom::ZPP_Vec2 _this = normal->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(107)
						bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(107)
						if ((tmp8)){
							HX_STACK_LINE(107)
							_this->_validate();
						}
					}
					HX_STACK_LINE(107)
					tmp7 = normal->zpp_inner->y;
				}
				HX_STACK_LINE(107)
				bool tmp8 = (tmp7 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(107)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(107)
				if ((tmp8)){
					HX_STACK_LINE(107)
					bool tmp10 = this->_jumped_this_frame;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(107)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(107)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(107)
					tmp9 = !(tmp12);
				}
				else{
					HX_STACK_LINE(107)
					tmp9 = false;
				}
				HX_STACK_LINE(107)
				if ((tmp9)){
					HX_STACK_LINE(109)
					this->_grounded = true;
					HX_STACK_LINE(110)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(110)
						{
							HX_STACK_LINE(110)
							bool tmp12 = (normal != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(110)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(110)
							if ((tmp12)){
								HX_STACK_LINE(110)
								tmp13 = normal->zpp_disp;
							}
							else{
								HX_STACK_LINE(110)
								tmp13 = false;
							}
							HX_STACK_LINE(110)
							if ((tmp13)){
								HX_STACK_LINE(110)
								::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(110)
								::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(110)
								HX_STACK_DO_THROW(tmp15);
							}
							HX_STACK_LINE(110)
							Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(110)
							{
								HX_STACK_LINE(110)
								bool tmp15 = (normal != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(110)
								bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(110)
								if ((tmp15)){
									HX_STACK_LINE(110)
									tmp16 = normal->zpp_disp;
								}
								else{
									HX_STACK_LINE(110)
									tmp16 = false;
								}
								HX_STACK_LINE(110)
								if ((tmp16)){
									HX_STACK_LINE(110)
									::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(110)
									::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(110)
									HX_STACK_DO_THROW(tmp18);
								}
								HX_STACK_LINE(110)
								{
									HX_STACK_LINE(110)
									::zpp_nape::geom::ZPP_Vec2 _this = normal->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(110)
									bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(110)
									if ((tmp17)){
										HX_STACK_LINE(110)
										_this->_validate();
									}
								}
								HX_STACK_LINE(110)
								tmp14 = normal->zpp_inner->x;
							}
							HX_STACK_LINE(110)
							Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(110)
							{
								HX_STACK_LINE(110)
								bool tmp16 = (normal != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(110)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(110)
								if ((tmp16)){
									HX_STACK_LINE(110)
									tmp17 = normal->zpp_disp;
								}
								else{
									HX_STACK_LINE(110)
									tmp17 = false;
								}
								HX_STACK_LINE(110)
								if ((tmp17)){
									HX_STACK_LINE(110)
									::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(110)
									::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(110)
									HX_STACK_DO_THROW(tmp19);
								}
								HX_STACK_LINE(110)
								{
									HX_STACK_LINE(110)
									::zpp_nape::geom::ZPP_Vec2 _this = normal->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(110)
									bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(110)
									if ((tmp18)){
										HX_STACK_LINE(110)
										_this->_validate();
									}
								}
								HX_STACK_LINE(110)
								tmp15 = normal->zpp_inner->y;
							}
							HX_STACK_LINE(110)
							bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(110)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(110)
							if ((tmp16)){
								HX_STACK_LINE(110)
								Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(110)
								{
									HX_STACK_LINE(110)
									bool tmp19 = (normal != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(110)
									bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(110)
									bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(110)
									bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(110)
									if ((tmp22)){
										HX_STACK_LINE(110)
										tmp21 = normal->zpp_disp;
									}
									else{
										HX_STACK_LINE(110)
										tmp21 = false;
									}
									HX_STACK_LINE(110)
									bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(110)
									if ((tmp23)){
										HX_STACK_LINE(110)
										::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(110)
										::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(110)
										::String tmp26 = (tmp25 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(110)
										::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(110)
										::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(110)
										HX_STACK_DO_THROW(tmp28);
									}
									HX_STACK_LINE(110)
									{
										HX_STACK_LINE(110)
										::zpp_nape::geom::ZPP_Vec2 _this = normal->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(110)
										bool tmp24 = (_this->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(110)
										bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(110)
										bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(110)
										if ((tmp26)){
											HX_STACK_LINE(110)
											_this->_validate();
										}
									}
									HX_STACK_LINE(110)
									Float tmp24 = normal->zpp_inner->x;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(110)
									tmp18 = tmp24;
								}
								HX_STACK_LINE(110)
								tmp17 = (tmp18 == (int)0);
							}
							else{
								HX_STACK_LINE(110)
								tmp17 = false;
							}
							HX_STACK_LINE(110)
							if ((tmp17)){
								HX_STACK_LINE(110)
								tmp11 = ((Float)0.0);
							}
							else{
								HX_STACK_LINE(110)
								Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(110)
								{
									HX_STACK_LINE(110)
									bool tmp19 = (normal != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(110)
									bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(110)
									if ((tmp19)){
										HX_STACK_LINE(110)
										tmp20 = normal->zpp_disp;
									}
									else{
										HX_STACK_LINE(110)
										tmp20 = false;
									}
									HX_STACK_LINE(110)
									if ((tmp20)){
										HX_STACK_LINE(110)
										::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(110)
										::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(110)
										HX_STACK_DO_THROW(tmp22);
									}
									HX_STACK_LINE(110)
									{
										HX_STACK_LINE(110)
										::zpp_nape::geom::ZPP_Vec2 _this = normal->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(110)
										bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(110)
										if ((tmp21)){
											HX_STACK_LINE(110)
											_this->_validate();
										}
									}
									HX_STACK_LINE(110)
									tmp18 = normal->zpp_inner->y;
								}
								HX_STACK_LINE(110)
								Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(110)
								{
									HX_STACK_LINE(110)
									bool tmp20 = (normal != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(110)
									bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(110)
									if ((tmp20)){
										HX_STACK_LINE(110)
										tmp21 = normal->zpp_disp;
									}
									else{
										HX_STACK_LINE(110)
										tmp21 = false;
									}
									HX_STACK_LINE(110)
									if ((tmp21)){
										HX_STACK_LINE(110)
										::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(110)
										::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(110)
										HX_STACK_DO_THROW(tmp23);
									}
									HX_STACK_LINE(110)
									{
										HX_STACK_LINE(110)
										::zpp_nape::geom::ZPP_Vec2 _this = normal->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(110)
										bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(110)
										if ((tmp22)){
											HX_STACK_LINE(110)
											_this->_validate();
										}
									}
									HX_STACK_LINE(110)
									tmp19 = normal->zpp_inner->x;
								}
								HX_STACK_LINE(110)
								tmp11 = ::Math_obj::atan2(tmp18,tmp19);
							}
						}
						HX_STACK_LINE(110)
						Float radians = tmp11;		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(110)
						tmp10 = (radians * ((Float)57.2957795130823797));
					}
					HX_STACK_LINE(110)
					this->_slope_angle = tmp10;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,ongoingcollideterrain,(void))

Void Controller_obj::endcollideterrain( ::nape::callbacks::InteractionCallback cb){
{
		HX_STACK_FRAME("Controller","endcollideterrain",0x93305ce0,"Controller.endcollideterrain","Controller.hx",117,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(117)
		this->_grounded = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,endcollideterrain,(void))

::nape::phys::Body Controller_obj::get_body( ){
	HX_STACK_FRAME("Controller","get_body",0xdea4001d,"Controller.get_body","Controller.hx",131,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	::nape::phys::Body tmp = this->_body;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	if ((tmp1)){
		HX_STACK_LINE(132)
		Dynamic tmp2 = this->get(HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		this->_body = tmp2->__Field(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"), hx::paccDynamic );
	}
	HX_STACK_LINE(133)
	::nape::phys::Body tmp2 = this->_body;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_body,return )

::luxe::components::sprite::SpriteAnimation Controller_obj::get_animation( ){
	HX_STACK_FRAME("Controller","get_animation",0x458faba9,"Controller.get_animation","Controller.hx",137,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	::luxe::components::sprite::SpriteAnimation tmp = this->_animation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	if ((tmp1)){
		HX_STACK_LINE(138)
		::luxe::components::sprite::SpriteAnimation tmp2 = this->get(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		this->_animation = tmp2;
	}
	HX_STACK_LINE(139)
	::luxe::components::sprite::SpriteAnimation tmp2 = this->_animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_animation,return )

Void Controller_obj::init( ){
{
		HX_STACK_FRAME("Controller","init",0xcbbca402,"Controller.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::init();
	}
return null();
}


Void Controller_obj::ondestroy( ){
{
		HX_STACK_FRAME("Controller","ondestroy",0x2522a789,"Controller.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void Controller_obj::onremoved( ){
{
		HX_STACK_FRAME("Controller","onremoved",0xf39c9a2f,"Controller.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}


::nape::phys::Material Controller_obj::zero_friction;

::nape::phys::Material Controller_obj::normal_friction;

::nape::phys::Material Controller_obj::get_zero_friction( ){
	HX_STACK_FRAME("Controller","get_zero_friction",0x567daf56,"Controller.get_zero_friction","Controller.hx",121,0x2da14382)
	HX_STACK_LINE(122)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new((int)0,(int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_zero_friction,return )

::nape::phys::Material Controller_obj::get_normal_friction( ){
	HX_STACK_FRAME("Controller","get_normal_friction",0x18f547b7,"Controller.get_normal_friction","Controller.hx",126,0x2da14382)
	HX_STACK_LINE(127)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new((int)0,(int)4,(int)8,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_normal_friction,return )


Controller_obj::Controller_obj()
{
}

void Controller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controller);
	HX_MARK_MEMBER_NAME(_body,"_body");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(_animation,"_animation");
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(_jumped_this_frame,"_jumped_this_frame");
	HX_MARK_MEMBER_NAME(_grounded,"_grounded");
	HX_MARK_MEMBER_NAME(_slope_angle,"_slope_angle");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(max_speed,"max_speed");
	HX_MARK_MEMBER_NAME(jump_impulse,"jump_impulse");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Controller_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_body,"_body");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(_animation,"_animation");
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(_jumped_this_frame,"_jumped_this_frame");
	HX_VISIT_MEMBER_NAME(_grounded,"_grounded");
	HX_VISIT_MEMBER_NAME(_slope_angle,"_slope_angle");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(max_speed,"max_speed");
	HX_VISIT_MEMBER_NAME(jump_impulse,"jump_impulse");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Controller_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return inCallProp == hx::paccAlways ? get_body() : body; }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_body") ) { return _body; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onadded") ) { return onadded_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_body") ) { return get_body_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return inCallProp == hx::paccAlways ? get_animation() : animation; }
		if (HX_FIELD_EQ(inName,"_grounded") ) { return _grounded; }
		if (HX_FIELD_EQ(inName,"max_speed") ) { return max_speed; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_animation") ) { return _animation; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_slope_angle") ) { return _slope_angle; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"jump_impulse") ) { return jump_impulse; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_animation") ) { return get_animation_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"endcollideterrain") ) { return endcollideterrain_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_jumped_this_frame") ) { return _jumped_this_frame; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"begincollideterrain") ) { return begincollideterrain_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ongoingcollideterrain") ) { return ongoingcollideterrain_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Controller_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"zero_friction") ) { outValue = inCallProp == hx::paccAlways ? get_zero_friction() : zero_friction; return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"normal_friction") ) { outValue = inCallProp == hx::paccAlways ? get_normal_friction() : normal_friction; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_zero_friction") ) { outValue = get_zero_friction_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_normal_friction") ) { outValue = get_normal_friction_dyn(); return true;  }
	}
	return false;
}

Dynamic Controller_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_body") ) { _body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::luxe::components::sprite::SpriteAnimation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_grounded") ) { _grounded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_speed") ) { max_speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_animation") ) { _animation=inValue.Cast< ::luxe::components::sprite::SpriteAnimation >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_slope_angle") ) { _slope_angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jump_impulse") ) { jump_impulse=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_jumped_this_frame") ) { _jumped_this_frame=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Controller_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"zero_friction") ) { zero_friction=ioValue.Cast< ::nape::phys::Material >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"normal_friction") ) { normal_friction=ioValue.Cast< ::nape::phys::Material >(); return true; }
	}
	return false;
}

void Controller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_body","\x81","\x96","\x2c","\xf4"));
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	outFields->push(HX_HCSTRING("_animation","\xc5","\x6a","\xd7","\xa6"));
	outFields->push(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));
	outFields->push(HX_HCSTRING("_jumped_this_frame","\x7f","\xe6","\x57","\xb0"));
	outFields->push(HX_HCSTRING("_grounded","\x05","\x62","\xf1","\xd7"));
	outFields->push(HX_HCSTRING("_slope_angle","\x80","\x48","\xde","\x6c"));
	outFields->push(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"));
	outFields->push(HX_HCSTRING("max_speed","\x6c","\x7c","\x47","\x78"));
	outFields->push(HX_HCSTRING("jump_impulse","\x24","\x0d","\xb3","\xef"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(Controller_obj,_body),HX_HCSTRING("_body","\x81","\x96","\x2c","\xf4")},
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(Controller_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{hx::fsObject /*::luxe::components::sprite::SpriteAnimation*/ ,(int)offsetof(Controller_obj,_animation),HX_HCSTRING("_animation","\xc5","\x6a","\xd7","\xa6")},
	{hx::fsObject /*::luxe::components::sprite::SpriteAnimation*/ ,(int)offsetof(Controller_obj,animation),HX_HCSTRING("animation","\x04","\xef","\x34","\x4b")},
	{hx::fsBool,(int)offsetof(Controller_obj,_jumped_this_frame),HX_HCSTRING("_jumped_this_frame","\x7f","\xe6","\x57","\xb0")},
	{hx::fsBool,(int)offsetof(Controller_obj,_grounded),HX_HCSTRING("_grounded","\x05","\x62","\xf1","\xd7")},
	{hx::fsFloat,(int)offsetof(Controller_obj,_slope_angle),HX_HCSTRING("_slope_angle","\x80","\x48","\xde","\x6c")},
	{hx::fsFloat,(int)offsetof(Controller_obj,acceleration),HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")},
	{hx::fsFloat,(int)offsetof(Controller_obj,max_speed),HX_HCSTRING("max_speed","\x6c","\x7c","\x47","\x78")},
	{hx::fsFloat,(int)offsetof(Controller_obj,jump_impulse),HX_HCSTRING("jump_impulse","\x24","\x0d","\xb3","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Material*/ ,(void *) &Controller_obj::zero_friction,HX_HCSTRING("zero_friction","\x31","\x3c","\xf7","\xd0")},
	{hx::fsObject /*::nape::phys::Material*/ ,(void *) &Controller_obj::normal_friction,HX_HCSTRING("normal_friction","\x52","\x01","\x90","\x4e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_body","\x81","\x96","\x2c","\xf4"),
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	HX_HCSTRING("_animation","\xc5","\x6a","\xd7","\xa6"),
	HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),
	HX_HCSTRING("_jumped_this_frame","\x7f","\xe6","\x57","\xb0"),
	HX_HCSTRING("_grounded","\x05","\x62","\xf1","\xd7"),
	HX_HCSTRING("_slope_angle","\x80","\x48","\xde","\x6c"),
	HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),
	HX_HCSTRING("max_speed","\x6c","\x7c","\x47","\x78"),
	HX_HCSTRING("jump_impulse","\x24","\x0d","\xb3","\xef"),
	HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),
	HX_HCSTRING("begincollideterrain","\xe0","\x07","\x54","\x38"),
	HX_HCSTRING("ongoingcollideterrain","\x72","\x03","\x04","\x69"),
	HX_HCSTRING("endcollideterrain","\x12","\xf5","\x19","\x14"),
	HX_HCSTRING("get_body","\x2b","\x36","\xd6","\xc0"),
	HX_HCSTRING("get_animation","\xdb","\xc2","\x98","\x0c"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Controller_obj::zero_friction,"zero_friction");
	HX_MARK_MEMBER_NAME(Controller_obj::normal_friction,"normal_friction");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Controller_obj::zero_friction,"zero_friction");
	HX_VISIT_MEMBER_NAME(Controller_obj::normal_friction,"normal_friction");
};

#endif

hx::Class Controller_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zero_friction","\x31","\x3c","\xf7","\xd0"),
	HX_HCSTRING("normal_friction","\x52","\x01","\x90","\x4e"),
	HX_HCSTRING("get_zero_friction","\x88","\x47","\x67","\xd7"),
	HX_HCSTRING("get_normal_friction","\x69","\xd0","\x9a","\xd9"),
	::String(null()) };

void Controller_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Controller","\xbc","\x9c","\x6f","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Controller_obj::__GetStatic;
	__mClass->mSetStaticField = &Controller_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Controller_obj >;
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

