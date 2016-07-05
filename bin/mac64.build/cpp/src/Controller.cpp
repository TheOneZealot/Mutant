#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Physics
#include <Physics.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
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
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_States
#include <luxe/States.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_physics_nape_PhysicsNape
#include <luxe/physics/nape/PhysicsNape.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Ray
#include <nape/geom/Ray.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
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
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_LineGeometry
#include <phoenix/geometry/LineGeometry.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Ray
#include <zpp_nape/geom/ZPP_Ray.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif

Void Controller_obj::__construct()
{
HX_STACK_FRAME("Controller","new",0xbf7e4bae,"Controller.new","Controller.hx",19,0x2da14382)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(45)
	this->skin_thickness = ((Float)0.5);
	HX_STACK_LINE(44)
	this->rays_vertical = (int)3;
	HX_STACK_LINE(43)
	this->rays_horizontal = (int)2;
	HX_STACK_LINE(42)
	this->input_vector = ::nape::geom::Vec2_obj::__new(null(),null());
	HX_STACK_LINE(39)
	this->jumped_this_frame = false;
	HX_STACK_LINE(38)
	this->slope = false;
	HX_STACK_LINE(37)
	this->grounded = false;
	HX_STACK_LINE(49)
	super::__construct(null());
	HX_STACK_LINE(51)
	this->name = HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04");
	HX_STACK_LINE(53)
	this->gravity = (int)512;
	HX_STACK_LINE(54)
	this->acceleration = (int)1024;
	HX_STACK_LINE(55)
	this->max_speed = (int)128;
	HX_STACK_LINE(56)
	this->jump_impulse = (int)128;
	HX_STACK_LINE(57)
	this->friction_ground = ((Float)0.5);
	HX_STACK_LINE(58)
	this->friction_air = ((Float)0.9);
	HX_STACK_LINE(59)
	this->max_slope_angle = (int)70;
	HX_STACK_LINE(60)
	Float tmp = this->max_slope_angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	Float tmp1 = (tmp * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	this->max_slope_y = tmp3;
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
		HX_STACK_FRAME("Controller","onadded",0xee193d8f,"Controller.onadded","Controller.hx",63,0x2da14382)
		HX_STACK_THIS(this)
	}
return null();
}


Void Controller_obj::update( Float dt){
{
		HX_STACK_FRAME("Controller","update",0x9ee88f7b,"Controller.update","Controller.hx",66,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(67)
		bool tmp = ::GameState_obj::paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		if ((tmp)){
			HX_STACK_LINE(67)
			return null();
		}
		HX_STACK_LINE(69)
		this->jumped_this_frame = false;
		HX_STACK_LINE(71)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			::nape::geom::Vec2 tmp2 = this->input_vector;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				bool tmp3 = (_this != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(71)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(71)
				if ((tmp3)){
					HX_STACK_LINE(71)
					tmp4 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(71)
					tmp4 = false;
				}
				HX_STACK_LINE(71)
				if ((tmp4)){
					HX_STACK_LINE(71)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(71)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(71)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(71)
				bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(71)
				if ((tmp3)){
					HX_STACK_LINE(71)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(71)
			tmp1 = _this->zpp_inner->x;
		}
		HX_STACK_LINE(71)
		Float tmp2 = ::Math_obj::abs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		if ((tmp3)){
			HX_STACK_LINE(73)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				::nape::phys::Body tmp5 = this->get_body();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				::nape::phys::Body _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(73)
				::nape::geom::Vec2 tmp6 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				if ((tmp7)){
					HX_STACK_LINE(73)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(73)
				tmp4 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(73)
			::nape::geom::Vec2 _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					bool tmp6 = (_g != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(73)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(73)
					if ((tmp6)){
						HX_STACK_LINE(73)
						tmp7 = _g->zpp_disp;
					}
					else{
						HX_STACK_LINE(73)
						tmp7 = false;
					}
					HX_STACK_LINE(73)
					if ((tmp7)){
						HX_STACK_LINE(73)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(73)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(73)
						bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(73)
						if ((tmp8)){
							HX_STACK_LINE(73)
							_this->_validate();
						}
					}
					HX_STACK_LINE(73)
					tmp5 = _g->zpp_inner->x;
				}
				HX_STACK_LINE(73)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					::nape::geom::Vec2 tmp7 = this->input_vector;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(73)
					::nape::geom::Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(73)
					bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(73)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(73)
					if ((tmp8)){
						HX_STACK_LINE(73)
						tmp9 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(73)
						tmp9 = false;
					}
					HX_STACK_LINE(73)
					if ((tmp9)){
						HX_STACK_LINE(73)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(73)
						HX_STACK_DO_THROW(tmp11);
					}
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(73)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						if ((tmp10)){
							HX_STACK_LINE(73)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(73)
					tmp6 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(73)
				Float tmp7 = this->acceleration;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				Float tmp9 = dt;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(73)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(73)
				bool tmp11 = this->grounded;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(73)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(73)
				if ((tmp11)){
					HX_STACK_LINE(73)
					tmp12 = (int)1;
				}
				else{
					HX_STACK_LINE(73)
					tmp12 = ((Float)0.5);
				}
				HX_STACK_LINE(73)
				Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				Float tmp14 = (tmp5 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				Float x = tmp14;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(73)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(73)
						if ((tmp15)){
							HX_STACK_LINE(73)
							tmp16 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(73)
							tmp16 = false;
						}
						HX_STACK_LINE(73)
						if ((tmp16)){
							HX_STACK_LINE(73)
							::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(73)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(73)
							HX_STACK_DO_THROW(tmp18);
						}
					}
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(73)
						bool tmp15 = _this->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(73)
						if ((tmp15)){
							HX_STACK_LINE(73)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(73)
						bool tmp16 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(73)
						if ((tmp16)){
							HX_STACK_LINE(73)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(73)
					Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							bool tmp16 = (_g != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(73)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(73)
							if ((tmp16)){
								HX_STACK_LINE(73)
								tmp17 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(73)
								tmp17 = false;
							}
							HX_STACK_LINE(73)
							if ((tmp17)){
								HX_STACK_LINE(73)
								::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(73)
								::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(73)
								HX_STACK_DO_THROW(tmp19);
							}
						}
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(73)
							bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(73)
							if ((tmp16)){
								HX_STACK_LINE(73)
								_this->_validate();
							}
						}
						HX_STACK_LINE(73)
						tmp15 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(73)
					Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(73)
					bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(73)
					if ((tmp17)){
						HX_STACK_LINE(73)
						bool tmp18 = (x != x);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(73)
						if ((tmp18)){
							HX_STACK_LINE(73)
							::String tmp19 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(73)
							::String tmp20 = (tmp19 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(73)
							HX_STACK_DO_THROW(tmp20);
						}
						HX_STACK_LINE(73)
						_g->zpp_inner->x = x;
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(73)
							bool tmp19 = (_this->_invalidate != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(73)
							if ((tmp19)){
								HX_STACK_LINE(73)
								::zpp_nape::geom::ZPP_Vec2 tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(73)
								_this->_invalidate(tmp20);
							}
						}
					}
				}
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(73)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(73)
						if ((tmp15)){
							HX_STACK_LINE(73)
							tmp16 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(73)
							tmp16 = false;
						}
						HX_STACK_LINE(73)
						if ((tmp16)){
							HX_STACK_LINE(73)
							::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(73)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(73)
							HX_STACK_DO_THROW(tmp18);
						}
					}
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(73)
						bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(73)
						if ((tmp15)){
							HX_STACK_LINE(73)
							_this->_validate();
						}
					}
					HX_STACK_LINE(73)
					_g->zpp_inner->x;
				}
			}
		}
		else{
			HX_STACK_LINE(77)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				::nape::phys::Body tmp5 = this->get_body();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				::nape::phys::Body _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(77)
				::nape::geom::Vec2 tmp6 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(77)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(77)
				if ((tmp7)){
					HX_STACK_LINE(77)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(77)
				tmp4 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(77)
			::nape::geom::Vec2 _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				{
					HX_STACK_LINE(77)
					bool tmp6 = (_g != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(77)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(77)
					if ((tmp6)){
						HX_STACK_LINE(77)
						tmp7 = _g->zpp_disp;
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
					HX_STACK_LINE(77)
					{
						HX_STACK_LINE(77)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(77)
						bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(77)
						if ((tmp8)){
							HX_STACK_LINE(77)
							_this->_validate();
						}
					}
					HX_STACK_LINE(77)
					tmp5 = _g->zpp_inner->x;
				}
				HX_STACK_LINE(77)
				bool tmp6 = this->grounded;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(77)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(77)
				if ((tmp6)){
					HX_STACK_LINE(77)
					tmp7 = this->friction_ground;
				}
				else{
					HX_STACK_LINE(77)
					tmp7 = this->friction_air;
				}
				HX_STACK_LINE(77)
				Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(77)
				Float x = tmp8;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(77)
				{
					HX_STACK_LINE(77)
					{
						HX_STACK_LINE(77)
						bool tmp9 = (_g != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(77)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(77)
						if ((tmp9)){
							HX_STACK_LINE(77)
							tmp10 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(77)
							tmp10 = false;
						}
						HX_STACK_LINE(77)
						if ((tmp10)){
							HX_STACK_LINE(77)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(77)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(77)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(77)
					{
						HX_STACK_LINE(77)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(77)
						bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(77)
						if ((tmp9)){
							HX_STACK_LINE(77)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(77)
						bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(77)
						if ((tmp10)){
							HX_STACK_LINE(77)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(77)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(77)
					{
						HX_STACK_LINE(77)
						{
							HX_STACK_LINE(77)
							bool tmp10 = (_g != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(77)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(77)
							if ((tmp10)){
								HX_STACK_LINE(77)
								tmp11 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(77)
								tmp11 = false;
							}
							HX_STACK_LINE(77)
							if ((tmp11)){
								HX_STACK_LINE(77)
								::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(77)
								::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(77)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(77)
						{
							HX_STACK_LINE(77)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(77)
							bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(77)
							if ((tmp10)){
								HX_STACK_LINE(77)
								_this->_validate();
							}
						}
						HX_STACK_LINE(77)
						tmp9 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(77)
					Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(77)
					bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(77)
					if ((tmp11)){
						HX_STACK_LINE(77)
						bool tmp12 = (x != x);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(77)
						if ((tmp12)){
							HX_STACK_LINE(77)
							::String tmp13 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(77)
							::String tmp14 = (tmp13 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(77)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(77)
						_g->zpp_inner->x = x;
						HX_STACK_LINE(77)
						{
							HX_STACK_LINE(77)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(77)
							bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(77)
							if ((tmp13)){
								HX_STACK_LINE(77)
								::zpp_nape::geom::ZPP_Vec2 tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(77)
								_this->_invalidate(tmp14);
							}
						}
					}
				}
				HX_STACK_LINE(77)
				{
					HX_STACK_LINE(77)
					{
						HX_STACK_LINE(77)
						bool tmp9 = (_g != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(77)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(77)
						if ((tmp9)){
							HX_STACK_LINE(77)
							tmp10 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(77)
							tmp10 = false;
						}
						HX_STACK_LINE(77)
						if ((tmp10)){
							HX_STACK_LINE(77)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(77)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(77)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(77)
					{
						HX_STACK_LINE(77)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(77)
						bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(77)
						if ((tmp9)){
							HX_STACK_LINE(77)
							_this->_validate();
						}
					}
					HX_STACK_LINE(77)
					_g->zpp_inner->x;
				}
			}
		}
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				::nape::phys::Body tmp5 = this->get_body();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				::nape::phys::Body _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(79)
				::nape::geom::Vec2 tmp6 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(79)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(79)
				if ((tmp7)){
					HX_STACK_LINE(79)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(79)
				tmp4 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(79)
			::nape::geom::Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(79)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(79)
				{
					HX_STACK_LINE(79)
					::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						::nape::phys::Body tmp8 = this->get_body();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(79)
						::nape::phys::Body _this1 = tmp8;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(79)
						::nape::geom::Vec2 tmp9 = _this1->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(79)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(79)
						if ((tmp10)){
							HX_STACK_LINE(79)
							_this1->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(79)
						tmp7 = _this1->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(79)
					::nape::geom::Vec2 _this1 = tmp7;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(79)
					bool tmp8 = (_this1 != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(79)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(79)
					if ((tmp8)){
						HX_STACK_LINE(79)
						tmp9 = _this1->zpp_disp;
					}
					else{
						HX_STACK_LINE(79)
						tmp9 = false;
					}
					HX_STACK_LINE(79)
					if ((tmp9)){
						HX_STACK_LINE(79)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(79)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(79)
						HX_STACK_DO_THROW(tmp11);
					}
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(79)
						bool tmp10 = (_this2->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(79)
						if ((tmp10)){
							HX_STACK_LINE(79)
							_this2->_validate();
						}
					}
					HX_STACK_LINE(79)
					tmp6 = _this1->zpp_inner->x;
				}
				HX_STACK_LINE(79)
				Float value = tmp6;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(79)
				Float tmp7 = this->max_speed;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(79)
				Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(79)
				Float a = tmp8;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(79)
				Float tmp9 = this->max_speed;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(79)
				Float b = tmp9;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(79)
				bool tmp10 = (value < a);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(79)
				if ((tmp10)){
					HX_STACK_LINE(79)
					tmp5 = a;
				}
				else{
					HX_STACK_LINE(79)
					bool tmp11 = (value > b);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(79)
					if ((tmp11)){
						HX_STACK_LINE(79)
						tmp5 = b;
					}
					else{
						HX_STACK_LINE(79)
						tmp5 = value;
					}
				}
			}
			HX_STACK_LINE(79)
			Float x = tmp5;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				{
					HX_STACK_LINE(79)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(79)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(79)
					if ((tmp6)){
						HX_STACK_LINE(79)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(79)
						tmp7 = false;
					}
					HX_STACK_LINE(79)
					if ((tmp7)){
						HX_STACK_LINE(79)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(79)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(79)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(79)
				{
					HX_STACK_LINE(79)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(79)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(79)
					if ((tmp6)){
						HX_STACK_LINE(79)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(79)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(79)
					if ((tmp7)){
						HX_STACK_LINE(79)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(79)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(79)
				{
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(79)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(79)
						if ((tmp7)){
							HX_STACK_LINE(79)
							tmp8 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(79)
							tmp8 = false;
						}
						HX_STACK_LINE(79)
						if ((tmp8)){
							HX_STACK_LINE(79)
							::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(79)
							::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(79)
							HX_STACK_DO_THROW(tmp10);
						}
					}
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(79)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(79)
						if ((tmp7)){
							HX_STACK_LINE(79)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(79)
					tmp6 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(79)
				Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(79)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(79)
				if ((tmp8)){
					HX_STACK_LINE(79)
					bool tmp9 = (x != x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(79)
					if ((tmp9)){
						HX_STACK_LINE(79)
						::String tmp10 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(79)
						::String tmp11 = (tmp10 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(79)
						HX_STACK_DO_THROW(tmp11);
					}
					HX_STACK_LINE(79)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(79)
						bool tmp10 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(79)
						if ((tmp10)){
							HX_STACK_LINE(79)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = _this1;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(79)
							_this1->_invalidate(tmp11);
						}
					}
				}
			}
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				{
					HX_STACK_LINE(79)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(79)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(79)
					if ((tmp6)){
						HX_STACK_LINE(79)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(79)
						tmp7 = false;
					}
					HX_STACK_LINE(79)
					if ((tmp7)){
						HX_STACK_LINE(79)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(79)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(79)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(79)
				{
					HX_STACK_LINE(79)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(79)
					bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(79)
					if ((tmp6)){
						HX_STACK_LINE(79)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(79)
				_this->zpp_inner->x;
			}
		}
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				::nape::phys::Body tmp5 = this->get_body();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(80)
				::nape::phys::Body _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(80)
				::nape::geom::Vec2 tmp6 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(80)
				if ((tmp7)){
					HX_STACK_LINE(80)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(80)
				tmp4 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(80)
			::nape::geom::Vec2 _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					bool tmp6 = (_g != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(80)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					if ((tmp6)){
						HX_STACK_LINE(80)
						tmp7 = _g->zpp_disp;
					}
					else{
						HX_STACK_LINE(80)
						tmp7 = false;
					}
					HX_STACK_LINE(80)
					if ((tmp7)){
						HX_STACK_LINE(80)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(80)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(80)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(80)
						bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(80)
						if ((tmp8)){
							HX_STACK_LINE(80)
							_this->_validate();
						}
					}
					HX_STACK_LINE(80)
					tmp5 = _g->zpp_inner->y;
				}
				HX_STACK_LINE(80)
				Float tmp6 = this->gravity;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				Float tmp7 = dt;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(80)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(80)
				Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(80)
				Float y = tmp9;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						bool tmp10 = (_g != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(80)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(80)
						if ((tmp10)){
							HX_STACK_LINE(80)
							tmp11 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(80)
							tmp11 = false;
						}
						HX_STACK_LINE(80)
						if ((tmp11)){
							HX_STACK_LINE(80)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(80)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(80)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(80)
						bool tmp10 = _this->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(80)
						if ((tmp10)){
							HX_STACK_LINE(80)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(80)
						bool tmp11 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(80)
						if ((tmp11)){
							HX_STACK_LINE(80)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(80)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						{
							HX_STACK_LINE(80)
							bool tmp11 = (_g != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(80)
							bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(80)
							if ((tmp11)){
								HX_STACK_LINE(80)
								tmp12 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(80)
								tmp12 = false;
							}
							HX_STACK_LINE(80)
							if ((tmp12)){
								HX_STACK_LINE(80)
								::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(80)
								::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(80)
								HX_STACK_DO_THROW(tmp14);
							}
						}
						HX_STACK_LINE(80)
						{
							HX_STACK_LINE(80)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(80)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(80)
							if ((tmp11)){
								HX_STACK_LINE(80)
								_this->_validate();
							}
						}
						HX_STACK_LINE(80)
						tmp10 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(80)
					Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(80)
					bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(80)
					if ((tmp12)){
						HX_STACK_LINE(80)
						bool tmp13 = (y != y);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(80)
						if ((tmp13)){
							HX_STACK_LINE(80)
							::String tmp14 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(80)
							::String tmp15 = (tmp14 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(80)
							HX_STACK_DO_THROW(tmp15);
						}
						HX_STACK_LINE(80)
						_g->zpp_inner->y = y;
						HX_STACK_LINE(80)
						{
							HX_STACK_LINE(80)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(80)
							bool tmp14 = (_this->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(80)
							if ((tmp14)){
								HX_STACK_LINE(80)
								::zpp_nape::geom::ZPP_Vec2 tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(80)
								_this->_invalidate(tmp15);
							}
						}
					}
				}
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						bool tmp10 = (_g != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(80)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(80)
						if ((tmp10)){
							HX_STACK_LINE(80)
							tmp11 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(80)
							tmp11 = false;
						}
						HX_STACK_LINE(80)
						if ((tmp11)){
							HX_STACK_LINE(80)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(80)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(80)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(80)
						bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(80)
						if ((tmp10)){
							HX_STACK_LINE(80)
							_this->_validate();
						}
					}
					HX_STACK_LINE(80)
					_g->zpp_inner->y;
				}
			}
		}
		HX_STACK_LINE(81)
		::nape::geom::Vec2 tmp4 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		this->input_vector = tmp4;
		HX_STACK_LINE(83)
		Float tmp5 = dt;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		this->slope_raycast(tmp5);
		HX_STACK_LINE(84)
		Float tmp6 = dt;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		this->raycast_horizontal(tmp6);
		HX_STACK_LINE(85)
		Float tmp7 = dt;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		this->raycast_vertical(tmp7);
	}
return null();
}


Void Controller_obj::raycast_horizontal( Float dt){
{
		HX_STACK_FRAME("Controller","raycast_horizontal",0x12aa036c,"Controller.raycast_horizontal","Controller.hx",89,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(91)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			::nape::phys::Body tmp1 = this->get_body();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(91)
			::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			if ((tmp3)){
				HX_STACK_LINE(91)
				_this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(91)
			tmp = _this->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(91)
		Float tmp1 = dt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		::nape::geom::Vec2 tmp2 = tmp->mul(tmp1,false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		::nape::geom::Vec2 movement_delta = tmp2;		HX_STACK_VAR(movement_delta,"movement_delta");
		HX_STACK_LINE(93)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				bool tmp4 = (movement_delta != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(93)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(93)
				if ((tmp4)){
					HX_STACK_LINE(93)
					tmp5 = movement_delta->zpp_disp;
				}
				else{
					HX_STACK_LINE(93)
					tmp5 = false;
				}
				HX_STACK_LINE(93)
				if ((tmp5)){
					HX_STACK_LINE(93)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(93)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(93)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(93)
				if ((tmp4)){
					HX_STACK_LINE(93)
					_this->_validate();
				}
			}
			HX_STACK_LINE(93)
			tmp3 = movement_delta->zpp_inner->x;
		}
		HX_STACK_LINE(93)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		if ((tmp4)){
			HX_STACK_LINE(93)
			return null();
		}
		HX_STACK_LINE(96)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			::nape::geom::AABB tmp6 = this->get_bounds();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			::nape::geom::AABB _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(96)
				bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(96)
				if ((tmp7)){
					HX_STACK_LINE(96)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(96)
			tmp5 = _this->zpp_inner->minx;
		}
		HX_STACK_LINE(96)
		Float tmp6 = this->skin_thickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			::nape::geom::AABB tmp9 = this->get_bounds();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(96)
			::nape::geom::AABB _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(96)
				bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(96)
				if ((tmp10)){
					HX_STACK_LINE(96)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(96)
			tmp8 = _this->zpp_inner->miny;
		}
		HX_STACK_LINE(96)
		Float tmp9 = this->skin_thickness;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(96)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(97)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::nape::geom::AABB tmp12 = this->get_bounds();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(97)
			::nape::geom::AABB _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(97)
				bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(97)
				if ((tmp13)){
					HX_STACK_LINE(97)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(97)
				tmp11 = (_this1->maxx - _this1->minx);
			}
		}
		HX_STACK_LINE(97)
		Float tmp12 = this->skin_thickness;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(97)
		Float tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(97)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(97)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::nape::geom::AABB tmp16 = this->get_bounds();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(97)
			::nape::geom::AABB _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(97)
				bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(97)
				if ((tmp17)){
					HX_STACK_LINE(97)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(97)
				tmp15 = (_this1->maxy - _this1->miny);
			}
		}
		HX_STACK_LINE(97)
		Float tmp16 = this->skin_thickness;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(97)
		Float tmp17 = (tmp16 * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(97)
		Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(95)
		::nape::geom::AABB tmp19 = ::nape::geom::AABB_obj::__new(tmp7,tmp10,tmp14,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(95)
		::nape::geom::AABB skin_bounds = tmp19;		HX_STACK_VAR(skin_bounds,"skin_bounds");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(99)
			int tmp20 = this->rays_vertical;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(99)
			int _g = tmp20;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(99)
			while((true)){
				HX_STACK_LINE(99)
				bool tmp21 = (_g1 < _g);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(99)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(99)
				if ((tmp22)){
					HX_STACK_LINE(99)
					break;
				}
				HX_STACK_LINE(99)
				int tmp23 = (_g1)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(99)
				int y = tmp23;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(101)
				bool tmp24 = (y == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(101)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(101)
				if ((tmp24)){
					HX_STACK_LINE(101)
					tmp25 = this->slope;
				}
				else{
					HX_STACK_LINE(101)
					tmp25 = false;
				}
				HX_STACK_LINE(101)
				if ((tmp25)){
					HX_STACK_LINE(101)
					continue;
				}
				HX_STACK_LINE(103)
				::nape::geom::Vec2 tmp26 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(103)
				::nape::geom::Vec2 ray_origin = tmp26;		HX_STACK_VAR(ray_origin,"ray_origin");
				HX_STACK_LINE(105)
				int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(105)
				{
					HX_STACK_LINE(105)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(105)
					{
						HX_STACK_LINE(105)
						bool tmp29 = (movement_delta != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(105)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(105)
						if ((tmp29)){
							HX_STACK_LINE(105)
							tmp30 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(105)
							tmp30 = false;
						}
						HX_STACK_LINE(105)
						if ((tmp30)){
							HX_STACK_LINE(105)
							::String tmp31 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(105)
							::String tmp32 = (tmp31 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(105)
							HX_STACK_DO_THROW(tmp32);
						}
						HX_STACK_LINE(105)
						{
							HX_STACK_LINE(105)
							::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(105)
							bool tmp31 = (_this->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(105)
							if ((tmp31)){
								HX_STACK_LINE(105)
								_this->_validate();
							}
						}
						HX_STACK_LINE(105)
						tmp28 = movement_delta->zpp_inner->x;
					}
					HX_STACK_LINE(105)
					Float x = tmp28;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(105)
					bool tmp29 = (x >= (int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(105)
					if ((tmp29)){
						HX_STACK_LINE(105)
						tmp27 = (int)1;
					}
					else{
						HX_STACK_LINE(105)
						tmp27 = (int)-1;
					}
				}
				HX_STACK_LINE(105)
				int ray_direction = tmp27;		HX_STACK_VAR(ray_direction,"ray_direction");
				HX_STACK_LINE(107)
				Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						bool tmp29 = (movement_delta != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(107)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(107)
						if ((tmp29)){
							HX_STACK_LINE(107)
							tmp30 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(107)
							tmp30 = false;
						}
						HX_STACK_LINE(107)
						if ((tmp30)){
							HX_STACK_LINE(107)
							::String tmp31 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(107)
							::String tmp32 = (tmp31 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(107)
							HX_STACK_DO_THROW(tmp32);
						}
					}
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(107)
						bool tmp29 = (_this->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(107)
						if ((tmp29)){
							HX_STACK_LINE(107)
							_this->_validate();
						}
					}
					HX_STACK_LINE(107)
					tmp28 = movement_delta->zpp_inner->x;
				}
				HX_STACK_LINE(107)
				bool tmp29 = (tmp28 > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(107)
				if ((tmp29)){
					HX_STACK_LINE(109)
					Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(109)
					{
						HX_STACK_LINE(109)
						::nape::geom::Vec2 tmp31 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(109)
						::nape::geom::Vec2 _this = tmp31;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(109)
						{
							HX_STACK_LINE(109)
							bool tmp32 = (_this != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(109)
							bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(109)
							if ((tmp32)){
								HX_STACK_LINE(109)
								tmp33 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(109)
								tmp33 = false;
							}
							HX_STACK_LINE(109)
							if ((tmp33)){
								HX_STACK_LINE(109)
								::String tmp34 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(109)
								::String tmp35 = (tmp34 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(109)
								HX_STACK_DO_THROW(tmp35);
							}
						}
						HX_STACK_LINE(109)
						{
							HX_STACK_LINE(109)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(109)
							bool tmp32 = (_this1->_validate != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(109)
							if ((tmp32)){
								HX_STACK_LINE(109)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(109)
						tmp30 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(109)
					Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(109)
					{
						HX_STACK_LINE(109)
						::nape::geom::Vec2 tmp32 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(109)
						::nape::geom::Vec2 _this = tmp32;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(109)
						{
							HX_STACK_LINE(109)
							bool tmp33 = (_this != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(109)
							bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(109)
							if ((tmp33)){
								HX_STACK_LINE(109)
								tmp34 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(109)
								tmp34 = false;
							}
							HX_STACK_LINE(109)
							if ((tmp34)){
								HX_STACK_LINE(109)
								::String tmp35 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(109)
								::String tmp36 = (tmp35 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(109)
								HX_STACK_DO_THROW(tmp36);
							}
						}
						HX_STACK_LINE(109)
						{
							HX_STACK_LINE(109)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(109)
							bool tmp33 = (_this1->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(109)
							if ((tmp33)){
								HX_STACK_LINE(109)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(109)
						tmp31 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(109)
					Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(109)
					{
						HX_STACK_LINE(109)
						{
							HX_STACK_LINE(109)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(109)
							bool tmp33 = (_this->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(109)
							if ((tmp33)){
								HX_STACK_LINE(109)
								_this->_validate();
							}
						}
						HX_STACK_LINE(109)
						{
							HX_STACK_LINE(109)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(109)
							tmp32 = (_this->maxy - _this->miny);
						}
					}
					HX_STACK_LINE(109)
					int tmp33 = this->rays_vertical;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(109)
					int tmp34 = (tmp33 - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(109)
					Float tmp35 = (Float(tmp32) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(109)
					int tmp36 = y;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(109)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(109)
					Float tmp38 = (tmp31 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(109)
					::nape::geom::Vec2 tmp39 = ::nape::geom::Vec2_obj::__new(tmp30,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(109)
					ray_origin = tmp39;
				}
				else{
					HX_STACK_LINE(113)
					Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(113)
					{
						HX_STACK_LINE(113)
						::nape::geom::Vec2 tmp31 = skin_bounds->zpp_inner->getmin();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(113)
						::nape::geom::Vec2 _this = tmp31;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(113)
						{
							HX_STACK_LINE(113)
							bool tmp32 = (_this != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(113)
							bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(113)
							if ((tmp32)){
								HX_STACK_LINE(113)
								tmp33 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(113)
								tmp33 = false;
							}
							HX_STACK_LINE(113)
							if ((tmp33)){
								HX_STACK_LINE(113)
								::String tmp34 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(113)
								::String tmp35 = (tmp34 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(113)
								HX_STACK_DO_THROW(tmp35);
							}
						}
						HX_STACK_LINE(113)
						{
							HX_STACK_LINE(113)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(113)
							bool tmp32 = (_this1->_validate != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(113)
							if ((tmp32)){
								HX_STACK_LINE(113)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(113)
						tmp30 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(113)
					Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(113)
					{
						HX_STACK_LINE(113)
						::nape::geom::Vec2 tmp32 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(113)
						::nape::geom::Vec2 _this = tmp32;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(113)
						{
							HX_STACK_LINE(113)
							bool tmp33 = (_this != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(113)
							bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(113)
							if ((tmp33)){
								HX_STACK_LINE(113)
								tmp34 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(113)
								tmp34 = false;
							}
							HX_STACK_LINE(113)
							if ((tmp34)){
								HX_STACK_LINE(113)
								::String tmp35 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(113)
								::String tmp36 = (tmp35 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(113)
								HX_STACK_DO_THROW(tmp36);
							}
						}
						HX_STACK_LINE(113)
						{
							HX_STACK_LINE(113)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(113)
							bool tmp33 = (_this1->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(113)
							if ((tmp33)){
								HX_STACK_LINE(113)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(113)
						tmp31 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(113)
					Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(113)
					{
						HX_STACK_LINE(113)
						{
							HX_STACK_LINE(113)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(113)
							bool tmp33 = (_this->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(113)
							if ((tmp33)){
								HX_STACK_LINE(113)
								_this->_validate();
							}
						}
						HX_STACK_LINE(113)
						{
							HX_STACK_LINE(113)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(113)
							tmp32 = (_this->maxy - _this->miny);
						}
					}
					HX_STACK_LINE(113)
					int tmp33 = this->rays_vertical;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(113)
					int tmp34 = (tmp33 - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(113)
					Float tmp35 = (Float(tmp32) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(113)
					int tmp36 = y;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(113)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(113)
					Float tmp38 = (tmp31 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(113)
					::nape::geom::Vec2 tmp39 = ::nape::geom::Vec2_obj::__new(tmp30,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(113)
					ray_origin = tmp39;
				}
				HX_STACK_LINE(116)
				::nape::geom::Vec2 tmp30 = ray_origin;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(116)
				::nape::geom::Vec2 tmp31 = ::nape::geom::Vec2_obj::__new(ray_direction,(int)0);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(116)
				::nape::geom::Ray tmp32 = ::nape::geom::Ray_obj::__new(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(116)
				::nape::geom::Ray ray = tmp32;		HX_STACK_VAR(ray,"ray");
				HX_STACK_LINE(117)
				{
					HX_STACK_LINE(117)
					Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(117)
					{
						HX_STACK_LINE(117)
						bool tmp34 = (movement_delta != null());		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(117)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(117)
						if ((tmp34)){
							HX_STACK_LINE(117)
							tmp35 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(117)
							tmp35 = false;
						}
						HX_STACK_LINE(117)
						if ((tmp35)){
							HX_STACK_LINE(117)
							::String tmp36 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(117)
							::String tmp37 = (tmp36 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(117)
							HX_STACK_DO_THROW(tmp37);
						}
						HX_STACK_LINE(117)
						{
							HX_STACK_LINE(117)
							::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(117)
							bool tmp36 = (_this->_validate != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(117)
							if ((tmp36)){
								HX_STACK_LINE(117)
								_this->_validate();
							}
						}
						HX_STACK_LINE(117)
						tmp33 = movement_delta->zpp_inner->x;
					}
					HX_STACK_LINE(117)
					Float tmp34 = ::Math_obj::abs(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(117)
					Float tmp35 = this->skin_thickness;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(117)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(117)
					Float maxDistance = tmp36;		HX_STACK_VAR(maxDistance,"maxDistance");
					HX_STACK_LINE(117)
					{
						HX_STACK_LINE(117)
						bool tmp37 = (maxDistance != maxDistance);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(117)
						if ((tmp37)){
							HX_STACK_LINE(117)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: maxDistance cannot be NaN","\xc6","\x98","\x5d","\x73"));
						}
						HX_STACK_LINE(117)
						ray->zpp_inner->maxdist = maxDistance;
					}
					HX_STACK_LINE(117)
					ray->zpp_inner->maxdist;
				}
				HX_STACK_LINE(119)
				::nape::space::Space tmp33 = this->get_space();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(119)
				::nape::geom::Ray tmp34 = ray;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(119)
				Dynamic tmp35 = ::Physics_obj::filters;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(119)
				::nape::dynamics::InteractionFilter tmp36 = tmp35->__Field(HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(119)
				::nape::geom::RayResult tmp37 = tmp33->rayCast(tmp34,false,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(119)
				::nape::geom::RayResult ray_result = tmp37;		HX_STACK_VAR(ray_result,"ray_result");
				HX_STACK_LINE(121)
				bool tmp38 = (ray_result != null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(121)
				if ((tmp38)){
					HX_STACK_LINE(123)
					::nape::phys::Body tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(123)
					{
						HX_STACK_LINE(123)
						::nape::shape::Shape tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(123)
						{
							HX_STACK_LINE(123)
							{
								HX_STACK_LINE(123)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp41 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(123)
								bool tmp42 = (tmp41 != null());		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(123)
								if ((tmp42)){
									HX_STACK_LINE(123)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(123)
							tmp40 = ray_result->zpp_inner->shape;
						}
						HX_STACK_LINE(123)
						::nape::shape::Shape _this = tmp40;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(123)
						::zpp_nape::phys::ZPP_Body tmp41 = _this->zpp_inner->body;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(123)
						bool tmp42 = (tmp41 != null());		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(123)
						if ((tmp42)){
							HX_STACK_LINE(123)
							::zpp_nape::phys::ZPP_Body tmp43 = _this->zpp_inner->body;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(123)
							tmp39 = tmp43->outer;
						}
						else{
							HX_STACK_LINE(123)
							tmp39 = null();
						}
					}
					HX_STACK_LINE(123)
					::nape::phys::Body hit_body = tmp39;		HX_STACK_VAR(hit_body,"hit_body");
					HX_STACK_LINE(124)
					Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(124)
					{
						HX_STACK_LINE(124)
						::nape::geom::Vec2 tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(124)
						{
							HX_STACK_LINE(124)
							::nape::phys::Body tmp42 = this->get_body();		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(124)
							::nape::phys::Body _this = tmp42;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(124)
							::nape::geom::Vec2 tmp43 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(124)
							bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(124)
							if ((tmp44)){
								HX_STACK_LINE(124)
								_this->zpp_inner->setupVelocity();
							}
							HX_STACK_LINE(124)
							tmp41 = _this->zpp_inner->wrap_vel;
						}
						HX_STACK_LINE(124)
						::nape::geom::Vec2 _this = tmp41;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(124)
						{
							HX_STACK_LINE(124)
							bool tmp42 = (_this != null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(124)
							bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(124)
							if ((tmp42)){
								HX_STACK_LINE(124)
								tmp43 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(124)
								tmp43 = false;
							}
							HX_STACK_LINE(124)
							if ((tmp43)){
								HX_STACK_LINE(124)
								::String tmp44 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(124)
								::String tmp45 = (tmp44 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(124)
								HX_STACK_DO_THROW(tmp45);
							}
						}
						HX_STACK_LINE(124)
						{
							HX_STACK_LINE(124)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(124)
							bool tmp42 = (_this1->_validate != null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(124)
							if ((tmp42)){
								HX_STACK_LINE(124)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(124)
						tmp40 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(124)
					Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(124)
					{
						HX_STACK_LINE(124)
						bool tmp42 = hit_body->zpp_inner->world;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(124)
						if ((tmp42)){
							HX_STACK_LINE(124)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no mass","\x47","\x6a","\x54","\x2b"));
						}
						HX_STACK_LINE(124)
						hit_body->zpp_inner->validate_mass();
						HX_STACK_LINE(124)
						int tmp43 = hit_body->zpp_inner->massMode;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(124)
						bool tmp44 = (tmp43 == (int)0);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(124)
						bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(124)
						if ((tmp44)){
							HX_STACK_LINE(124)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp46 = hit_body->zpp_inner->shapes;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(124)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(124)
							::zpp_nape::util::ZNPNode_ZPP_Shape tmp48 = tmp47->head;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(124)
							tmp45 = (tmp48 == null());
						}
						else{
							HX_STACK_LINE(124)
							tmp45 = false;
						}
						HX_STACK_LINE(124)
						if ((tmp45)){
							HX_STACK_LINE(124)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes","\x3f","\xab","\x6b","\xcb"));
						}
						HX_STACK_LINE(124)
						tmp41 = hit_body->zpp_inner->cmass;
					}
					HX_STACK_LINE(124)
					Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(124)
					::nape::geom::Vec2 tmp43 = ::nape::geom::Vec2_obj::__new(tmp42,(int)0);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(124)
					hit_body->applyImpulse(tmp43,null(),null());
					HX_STACK_LINE(125)
					Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(125)
					{
						HX_STACK_LINE(125)
						::nape::geom::Vec2 tmp45;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(125)
						{
							HX_STACK_LINE(125)
							{
								HX_STACK_LINE(125)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp46 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(125)
								bool tmp47 = (tmp46 != null());		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(125)
								if ((tmp47)){
									HX_STACK_LINE(125)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(125)
							tmp45 = ray_result->zpp_inner->normal;
						}
						HX_STACK_LINE(125)
						::nape::geom::Vec2 _this = tmp45;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(125)
						{
							HX_STACK_LINE(125)
							bool tmp46 = (_this != null());		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(125)
							bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(125)
							if ((tmp46)){
								HX_STACK_LINE(125)
								tmp47 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(125)
								tmp47 = false;
							}
							HX_STACK_LINE(125)
							if ((tmp47)){
								HX_STACK_LINE(125)
								::String tmp48 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(125)
								::String tmp49 = (tmp48 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(125)
								HX_STACK_DO_THROW(tmp49);
							}
						}
						HX_STACK_LINE(125)
						{
							HX_STACK_LINE(125)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(125)
							bool tmp46 = (_this1->_validate != null());		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(125)
							if ((tmp46)){
								HX_STACK_LINE(125)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(125)
						tmp44 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(125)
					bool tmp45 = (tmp44 == (int)0);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(125)
					bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(125)
					bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(125)
					if ((tmp46)){
						HX_STACK_LINE(125)
						Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(125)
						{
							HX_STACK_LINE(125)
							::nape::geom::Vec2 tmp49;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(125)
							{
								HX_STACK_LINE(125)
								{
									HX_STACK_LINE(125)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp50 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(125)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(125)
									bool tmp52 = (tmp51 != null());		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(125)
									bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(125)
									bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(125)
									if ((tmp54)){
										HX_STACK_LINE(125)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(125)
								::nape::geom::Vec2 tmp50 = ray_result->zpp_inner->normal;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(125)
								tmp49 = tmp50;
							}
							HX_STACK_LINE(125)
							::nape::geom::Vec2 _this = tmp49;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(125)
							{
								HX_STACK_LINE(125)
								bool tmp50 = (_this != null());		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(125)
								bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(125)
								bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(125)
								bool tmp53 = tmp51;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(125)
								if ((tmp53)){
									HX_STACK_LINE(125)
									tmp52 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(125)
									tmp52 = false;
								}
								HX_STACK_LINE(125)
								bool tmp54 = tmp52;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(125)
								if ((tmp54)){
									HX_STACK_LINE(125)
									::String tmp55 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(125)
									::String tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(125)
									::String tmp57 = (tmp56 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(125)
									::String tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(125)
									::String tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(125)
									HX_STACK_DO_THROW(tmp59);
								}
							}
							HX_STACK_LINE(125)
							{
								HX_STACK_LINE(125)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(125)
								bool tmp50 = (_this1->_validate != null());		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(125)
								bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(125)
								bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(125)
								if ((tmp52)){
									HX_STACK_LINE(125)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(125)
							Float tmp50 = _this->zpp_inner->y;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(125)
							tmp48 = tmp50;
						}
						HX_STACK_LINE(125)
						Float tmp49 = this->max_slope_y;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(125)
						Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(125)
						tmp47 = (tmp48 > tmp50);
					}
					else{
						HX_STACK_LINE(125)
						tmp47 = true;
					}
					HX_STACK_LINE(125)
					if ((tmp47)){
						HX_STACK_LINE(127)
						{
							HX_STACK_LINE(127)
							::nape::geom::Vec2 tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(127)
							{
								HX_STACK_LINE(127)
								::nape::phys::Body tmp49 = this->get_body();		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(127)
								::nape::phys::Body _this = tmp49;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(127)
								::nape::geom::Vec2 tmp50 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(127)
								bool tmp51 = (tmp50 == null());		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(127)
								if ((tmp51)){
									HX_STACK_LINE(127)
									_this->zpp_inner->setupVelocity();
								}
								HX_STACK_LINE(127)
								tmp48 = _this->zpp_inner->wrap_vel;
							}
							HX_STACK_LINE(127)
							::nape::geom::Vec2 _this = tmp48;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(127)
							{
								HX_STACK_LINE(127)
								{
									HX_STACK_LINE(127)
									bool tmp49 = (_this != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(127)
									bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(127)
									if ((tmp49)){
										HX_STACK_LINE(127)
										tmp50 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(127)
										tmp50 = false;
									}
									HX_STACK_LINE(127)
									if ((tmp50)){
										HX_STACK_LINE(127)
										::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(127)
										::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(127)
										HX_STACK_DO_THROW(tmp52);
									}
								}
								HX_STACK_LINE(127)
								{
									HX_STACK_LINE(127)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(127)
									bool tmp49 = _this1->_immutable;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(127)
									if ((tmp49)){
										HX_STACK_LINE(127)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(127)
									bool tmp50 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(127)
									if ((tmp50)){
										HX_STACK_LINE(127)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(127)
								Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(127)
								{
									HX_STACK_LINE(127)
									{
										HX_STACK_LINE(127)
										bool tmp50 = (_this != null());		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(127)
										bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(127)
										if ((tmp50)){
											HX_STACK_LINE(127)
											tmp51 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(127)
											tmp51 = false;
										}
										HX_STACK_LINE(127)
										if ((tmp51)){
											HX_STACK_LINE(127)
											::String tmp52 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(127)
											::String tmp53 = (tmp52 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(127)
											HX_STACK_DO_THROW(tmp53);
										}
									}
									HX_STACK_LINE(127)
									{
										HX_STACK_LINE(127)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(127)
										bool tmp50 = (_this1->_validate != null());		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(127)
										if ((tmp50)){
											HX_STACK_LINE(127)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(127)
									tmp49 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(127)
								bool tmp50 = (tmp49 != (int)0);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(127)
								if ((tmp50)){
									HX_STACK_LINE(127)
									bool tmp51 = false;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(127)
									if ((tmp51)){
										HX_STACK_LINE(127)
										::String tmp52 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(127)
										::String tmp53 = (tmp52 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(127)
										HX_STACK_DO_THROW(tmp53);
									}
									HX_STACK_LINE(127)
									_this->zpp_inner->x = (int)0;
									HX_STACK_LINE(127)
									{
										HX_STACK_LINE(127)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(127)
										bool tmp52 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(127)
										if ((tmp52)){
											HX_STACK_LINE(127)
											::zpp_nape::geom::ZPP_Vec2 tmp53 = _this1;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(127)
											_this1->_invalidate(tmp53);
										}
									}
								}
							}
							HX_STACK_LINE(127)
							{
								HX_STACK_LINE(127)
								{
									HX_STACK_LINE(127)
									bool tmp49 = (_this != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(127)
									bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(127)
									if ((tmp49)){
										HX_STACK_LINE(127)
										tmp50 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(127)
										tmp50 = false;
									}
									HX_STACK_LINE(127)
									if ((tmp50)){
										HX_STACK_LINE(127)
										::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(127)
										::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(127)
										HX_STACK_DO_THROW(tmp52);
									}
								}
								HX_STACK_LINE(127)
								{
									HX_STACK_LINE(127)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(127)
									bool tmp49 = (_this1->_validate != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(127)
									if ((tmp49)){
										HX_STACK_LINE(127)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(127)
								_this->zpp_inner->x;
							}
						}
						HX_STACK_LINE(128)
						{
							HX_STACK_LINE(128)
							::nape::geom::Vec2 tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(128)
							{
								HX_STACK_LINE(128)
								::nape::phys::Body tmp49 = this->get_body();		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(128)
								::nape::phys::Body _this = tmp49;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(128)
								::nape::geom::Vec2 tmp50 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(128)
								bool tmp51 = (tmp50 == null());		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(128)
								if ((tmp51)){
									HX_STACK_LINE(128)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(128)
								tmp48 = _this->zpp_inner->wrap_pos;
							}
							HX_STACK_LINE(128)
							::nape::geom::Vec2 _this = tmp48;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(128)
							Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(128)
							{
								HX_STACK_LINE(128)
								Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(128)
								{
									HX_STACK_LINE(128)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp51 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(128)
									bool tmp52 = (tmp51 != null());		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(128)
									if ((tmp52)){
										HX_STACK_LINE(128)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
									HX_STACK_LINE(128)
									tmp50 = ray_result->zpp_inner->toiDistance;
								}
								HX_STACK_LINE(128)
								::nape::geom::Vec2 tmp51 = ray->at(tmp50,null());		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(128)
								::nape::geom::Vec2 _this1 = tmp51;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(128)
								bool tmp52 = (_this1 != null());		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(128)
								bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(128)
								if ((tmp52)){
									HX_STACK_LINE(128)
									tmp53 = _this1->zpp_disp;
								}
								else{
									HX_STACK_LINE(128)
									tmp53 = false;
								}
								HX_STACK_LINE(128)
								if ((tmp53)){
									HX_STACK_LINE(128)
									::String tmp54 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(128)
									::String tmp55 = (tmp54 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(128)
									HX_STACK_DO_THROW(tmp55);
								}
								HX_STACK_LINE(128)
								{
									HX_STACK_LINE(128)
									::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(128)
									bool tmp54 = (_this2->_validate != null());		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(128)
									if ((tmp54)){
										HX_STACK_LINE(128)
										_this2->_validate();
									}
								}
								HX_STACK_LINE(128)
								tmp49 = _this1->zpp_inner->x;
							}
							HX_STACK_LINE(128)
							Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(128)
							{
								HX_STACK_LINE(128)
								::nape::geom::AABB tmp51 = this->get_bounds();		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(128)
								::nape::geom::AABB _this1 = tmp51;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(128)
								{
									HX_STACK_LINE(128)
									::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(128)
									bool tmp52 = (_this2->_validate != null());		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(128)
									if ((tmp52)){
										HX_STACK_LINE(128)
										_this2->_validate();
									}
								}
								HX_STACK_LINE(128)
								{
									HX_STACK_LINE(128)
									::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(128)
									tmp50 = (_this2->maxx - _this2->minx);
								}
							}
							HX_STACK_LINE(128)
							Float tmp51 = (Float(tmp50) / Float((int)2));		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(128)
							int tmp52 = ray_direction;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(128)
							Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(128)
							Float tmp54 = (tmp49 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(128)
							Float x = tmp54;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(128)
							{
								HX_STACK_LINE(128)
								{
									HX_STACK_LINE(128)
									bool tmp55 = (_this != null());		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(128)
									bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(128)
									if ((tmp55)){
										HX_STACK_LINE(128)
										tmp56 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(128)
										tmp56 = false;
									}
									HX_STACK_LINE(128)
									if ((tmp56)){
										HX_STACK_LINE(128)
										::String tmp57 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(128)
										::String tmp58 = (tmp57 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(128)
										HX_STACK_DO_THROW(tmp58);
									}
								}
								HX_STACK_LINE(128)
								{
									HX_STACK_LINE(128)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(128)
									bool tmp55 = _this1->_immutable;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(128)
									if ((tmp55)){
										HX_STACK_LINE(128)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(128)
									bool tmp56 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(128)
									if ((tmp56)){
										HX_STACK_LINE(128)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(128)
								Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(128)
								{
									HX_STACK_LINE(128)
									{
										HX_STACK_LINE(128)
										bool tmp56 = (_this != null());		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(128)
										bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(128)
										if ((tmp56)){
											HX_STACK_LINE(128)
											tmp57 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(128)
											tmp57 = false;
										}
										HX_STACK_LINE(128)
										if ((tmp57)){
											HX_STACK_LINE(128)
											::String tmp58 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(128)
											::String tmp59 = (tmp58 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(128)
											HX_STACK_DO_THROW(tmp59);
										}
									}
									HX_STACK_LINE(128)
									{
										HX_STACK_LINE(128)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(128)
										bool tmp56 = (_this1->_validate != null());		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(128)
										if ((tmp56)){
											HX_STACK_LINE(128)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(128)
									tmp55 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(128)
								Float tmp56 = x;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(128)
								bool tmp57 = (tmp55 != tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(128)
								if ((tmp57)){
									HX_STACK_LINE(128)
									bool tmp58 = (x != x);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(128)
									if ((tmp58)){
										HX_STACK_LINE(128)
										::String tmp59 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(128)
										::String tmp60 = (tmp59 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(128)
										HX_STACK_DO_THROW(tmp60);
									}
									HX_STACK_LINE(128)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(128)
									{
										HX_STACK_LINE(128)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(128)
										bool tmp59 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(128)
										if ((tmp59)){
											HX_STACK_LINE(128)
											::zpp_nape::geom::ZPP_Vec2 tmp60 = _this1;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(128)
											_this1->_invalidate(tmp60);
										}
									}
								}
							}
							HX_STACK_LINE(128)
							{
								HX_STACK_LINE(128)
								{
									HX_STACK_LINE(128)
									bool tmp55 = (_this != null());		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(128)
									bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(128)
									if ((tmp55)){
										HX_STACK_LINE(128)
										tmp56 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(128)
										tmp56 = false;
									}
									HX_STACK_LINE(128)
									if ((tmp56)){
										HX_STACK_LINE(128)
										::String tmp57 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(128)
										::String tmp58 = (tmp57 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(128)
										HX_STACK_DO_THROW(tmp58);
									}
								}
								HX_STACK_LINE(128)
								{
									HX_STACK_LINE(128)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(128)
									bool tmp55 = (_this1->_validate != null());		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(128)
									if ((tmp55)){
										HX_STACK_LINE(128)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(128)
								_this->zpp_inner->x;
							}
						}
						HX_STACK_LINE(129)
						break;
					}
				}
				HX_STACK_LINE(132)
				::nape::geom::Ray tmp39 = ray;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(132)
				::nape::geom::RayResult tmp40 = ray_result;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(132)
				this->debug_ray(tmp39,tmp40);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,raycast_horizontal,(void))

Void Controller_obj::raycast_vertical( Float dt){
{
		HX_STACK_FRAME("Controller","raycast_vertical",0xeb7790fe,"Controller.raycast_vertical","Controller.hx",137,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(139)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::nape::phys::Body tmp1 = this->get_body();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(139)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(139)
			::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			if ((tmp3)){
				HX_STACK_LINE(139)
				_this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(139)
			tmp = _this->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(139)
		Float tmp1 = dt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		::nape::geom::Vec2 tmp2 = tmp->mul(tmp1,false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		::nape::geom::Vec2 movement_delta = tmp2;		HX_STACK_VAR(movement_delta,"movement_delta");
		HX_STACK_LINE(141)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				bool tmp4 = (movement_delta != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(141)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(141)
				if ((tmp4)){
					HX_STACK_LINE(141)
					tmp5 = movement_delta->zpp_disp;
				}
				else{
					HX_STACK_LINE(141)
					tmp5 = false;
				}
				HX_STACK_LINE(141)
				if ((tmp5)){
					HX_STACK_LINE(141)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(141)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(141)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(141)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(141)
				if ((tmp4)){
					HX_STACK_LINE(141)
					_this->_validate();
				}
			}
			HX_STACK_LINE(141)
			tmp3 = movement_delta->zpp_inner->y;
		}
		HX_STACK_LINE(141)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(141)
		if ((tmp4)){
			HX_STACK_LINE(141)
			return null();
		}
		HX_STACK_LINE(142)
		this->grounded = false;
		HX_STACK_LINE(145)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			::nape::geom::AABB tmp6 = this->get_bounds();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(145)
			::nape::geom::AABB _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(145)
			{
				HX_STACK_LINE(145)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(145)
				bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(145)
				if ((tmp7)){
					HX_STACK_LINE(145)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(145)
			tmp5 = _this->zpp_inner->minx;
		}
		HX_STACK_LINE(145)
		Float tmp6 = this->skin_thickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			::nape::geom::AABB tmp9 = this->get_bounds();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(145)
			::nape::geom::AABB _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(145)
			{
				HX_STACK_LINE(145)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(145)
				bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(145)
				if ((tmp10)){
					HX_STACK_LINE(145)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(145)
			tmp8 = _this->zpp_inner->miny;
		}
		HX_STACK_LINE(145)
		Float tmp9 = this->skin_thickness;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(145)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(146)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			::nape::geom::AABB tmp12 = this->get_bounds();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(146)
			::nape::geom::AABB _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(146)
				bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(146)
				if ((tmp13)){
					HX_STACK_LINE(146)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(146)
				tmp11 = (_this1->maxx - _this1->minx);
			}
		}
		HX_STACK_LINE(146)
		Float tmp12 = this->skin_thickness;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(146)
		Float tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(146)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(146)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			::nape::geom::AABB tmp16 = this->get_bounds();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(146)
			::nape::geom::AABB _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(146)
				bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(146)
				if ((tmp17)){
					HX_STACK_LINE(146)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(146)
				tmp15 = (_this1->maxy - _this1->miny);
			}
		}
		HX_STACK_LINE(146)
		Float tmp16 = this->skin_thickness;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(146)
		Float tmp17 = (tmp16 * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(146)
		Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(144)
		::nape::geom::AABB tmp19 = ::nape::geom::AABB_obj::__new(tmp7,tmp10,tmp14,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(144)
		::nape::geom::AABB skin_bounds = tmp19;		HX_STACK_VAR(skin_bounds,"skin_bounds");
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(148)
			int tmp20 = this->rays_horizontal;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(148)
			int _g = tmp20;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(148)
			while((true)){
				HX_STACK_LINE(148)
				bool tmp21 = (_g1 < _g);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(148)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(148)
				if ((tmp22)){
					HX_STACK_LINE(148)
					break;
				}
				HX_STACK_LINE(148)
				int tmp23 = (_g1)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(148)
				int x = tmp23;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(151)
				::nape::geom::Vec2 tmp24 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(151)
				::nape::geom::Vec2 ray_origin = tmp24;		HX_STACK_VAR(ray_origin,"ray_origin");
				HX_STACK_LINE(153)
				int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(153)
				{
					HX_STACK_LINE(153)
					Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(153)
					{
						HX_STACK_LINE(153)
						bool tmp27 = (movement_delta != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(153)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(153)
						if ((tmp27)){
							HX_STACK_LINE(153)
							tmp28 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(153)
							tmp28 = false;
						}
						HX_STACK_LINE(153)
						if ((tmp28)){
							HX_STACK_LINE(153)
							::String tmp29 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(153)
							::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(153)
							HX_STACK_DO_THROW(tmp30);
						}
						HX_STACK_LINE(153)
						{
							HX_STACK_LINE(153)
							::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(153)
							bool tmp29 = (_this->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(153)
							if ((tmp29)){
								HX_STACK_LINE(153)
								_this->_validate();
							}
						}
						HX_STACK_LINE(153)
						tmp26 = movement_delta->zpp_inner->y;
					}
					HX_STACK_LINE(153)
					Float x1 = tmp26;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(153)
					bool tmp27 = (x1 >= (int)0);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(153)
					if ((tmp27)){
						HX_STACK_LINE(153)
						tmp25 = (int)1;
					}
					else{
						HX_STACK_LINE(153)
						tmp25 = (int)-1;
					}
				}
				HX_STACK_LINE(153)
				int ray_direction = tmp25;		HX_STACK_VAR(ray_direction,"ray_direction");
				HX_STACK_LINE(155)
				Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(155)
				{
					HX_STACK_LINE(155)
					{
						HX_STACK_LINE(155)
						bool tmp27 = (movement_delta != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(155)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(155)
						if ((tmp27)){
							HX_STACK_LINE(155)
							tmp28 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(155)
							tmp28 = false;
						}
						HX_STACK_LINE(155)
						if ((tmp28)){
							HX_STACK_LINE(155)
							::String tmp29 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(155)
							::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(155)
							HX_STACK_DO_THROW(tmp30);
						}
					}
					HX_STACK_LINE(155)
					{
						HX_STACK_LINE(155)
						::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(155)
						bool tmp27 = (_this->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(155)
						if ((tmp27)){
							HX_STACK_LINE(155)
							_this->_validate();
						}
					}
					HX_STACK_LINE(155)
					tmp26 = movement_delta->zpp_inner->y;
				}
				HX_STACK_LINE(155)
				bool tmp27 = (tmp26 > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(155)
				if ((tmp27)){
					HX_STACK_LINE(157)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(157)
					{
						HX_STACK_LINE(157)
						::nape::geom::Vec2 tmp29 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(157)
						::nape::geom::Vec2 _this = tmp29;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(157)
						{
							HX_STACK_LINE(157)
							bool tmp30 = (_this != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(157)
							bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(157)
							if ((tmp30)){
								HX_STACK_LINE(157)
								tmp31 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(157)
								tmp31 = false;
							}
							HX_STACK_LINE(157)
							if ((tmp31)){
								HX_STACK_LINE(157)
								::String tmp32 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(157)
								::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(157)
								HX_STACK_DO_THROW(tmp33);
							}
						}
						HX_STACK_LINE(157)
						{
							HX_STACK_LINE(157)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(157)
							bool tmp30 = (_this1->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(157)
							if ((tmp30)){
								HX_STACK_LINE(157)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(157)
						tmp28 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(157)
					Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(157)
					{
						HX_STACK_LINE(157)
						{
							HX_STACK_LINE(157)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(157)
							bool tmp30 = (_this->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(157)
							if ((tmp30)){
								HX_STACK_LINE(157)
								_this->_validate();
							}
						}
						HX_STACK_LINE(157)
						{
							HX_STACK_LINE(157)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(157)
							tmp29 = (_this->maxx - _this->minx);
						}
					}
					HX_STACK_LINE(157)
					int tmp30 = this->rays_horizontal;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(157)
					int tmp31 = (tmp30 - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(157)
					Float tmp32 = (Float(tmp29) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(157)
					int tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(157)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(157)
					Float tmp35 = (tmp28 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(157)
					Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(157)
					{
						HX_STACK_LINE(157)
						::nape::geom::Vec2 tmp37 = skin_bounds->zpp_inner->getmin();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(157)
						::nape::geom::Vec2 _this = tmp37;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(157)
						{
							HX_STACK_LINE(157)
							bool tmp38 = (_this != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(157)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(157)
							if ((tmp38)){
								HX_STACK_LINE(157)
								tmp39 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(157)
								tmp39 = false;
							}
							HX_STACK_LINE(157)
							if ((tmp39)){
								HX_STACK_LINE(157)
								::String tmp40 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(157)
								::String tmp41 = (tmp40 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(157)
								HX_STACK_DO_THROW(tmp41);
							}
						}
						HX_STACK_LINE(157)
						{
							HX_STACK_LINE(157)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(157)
							bool tmp38 = (_this1->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(157)
							if ((tmp38)){
								HX_STACK_LINE(157)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(157)
						tmp36 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(157)
					::nape::geom::Vec2 tmp37 = ::nape::geom::Vec2_obj::__new(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(157)
					ray_origin = tmp37;
				}
				else{
					HX_STACK_LINE(161)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(161)
					{
						HX_STACK_LINE(161)
						::nape::geom::Vec2 tmp29 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(161)
						::nape::geom::Vec2 _this = tmp29;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(161)
						{
							HX_STACK_LINE(161)
							bool tmp30 = (_this != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(161)
							bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(161)
							if ((tmp30)){
								HX_STACK_LINE(161)
								tmp31 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(161)
								tmp31 = false;
							}
							HX_STACK_LINE(161)
							if ((tmp31)){
								HX_STACK_LINE(161)
								::String tmp32 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(161)
								::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(161)
								HX_STACK_DO_THROW(tmp33);
							}
						}
						HX_STACK_LINE(161)
						{
							HX_STACK_LINE(161)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(161)
							bool tmp30 = (_this1->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(161)
							if ((tmp30)){
								HX_STACK_LINE(161)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(161)
						tmp28 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(161)
					Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(161)
					{
						HX_STACK_LINE(161)
						{
							HX_STACK_LINE(161)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(161)
							bool tmp30 = (_this->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(161)
							if ((tmp30)){
								HX_STACK_LINE(161)
								_this->_validate();
							}
						}
						HX_STACK_LINE(161)
						{
							HX_STACK_LINE(161)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(161)
							tmp29 = (_this->maxx - _this->minx);
						}
					}
					HX_STACK_LINE(161)
					int tmp30 = this->rays_horizontal;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(161)
					int tmp31 = (tmp30 - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(161)
					Float tmp32 = (Float(tmp29) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(161)
					int tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(161)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(161)
					Float tmp35 = (tmp28 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(161)
					Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(161)
					{
						HX_STACK_LINE(161)
						::nape::geom::Vec2 tmp37 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(161)
						::nape::geom::Vec2 _this = tmp37;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(161)
						{
							HX_STACK_LINE(161)
							bool tmp38 = (_this != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(161)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(161)
							if ((tmp38)){
								HX_STACK_LINE(161)
								tmp39 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(161)
								tmp39 = false;
							}
							HX_STACK_LINE(161)
							if ((tmp39)){
								HX_STACK_LINE(161)
								::String tmp40 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(161)
								::String tmp41 = (tmp40 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(161)
								HX_STACK_DO_THROW(tmp41);
							}
						}
						HX_STACK_LINE(161)
						{
							HX_STACK_LINE(161)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(161)
							bool tmp38 = (_this1->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(161)
							if ((tmp38)){
								HX_STACK_LINE(161)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(161)
						tmp36 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(161)
					::nape::geom::Vec2 tmp37 = ::nape::geom::Vec2_obj::__new(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(161)
					ray_origin = tmp37;
				}
				HX_STACK_LINE(164)
				::nape::geom::Vec2 tmp28 = ray_origin;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(164)
				::nape::geom::Vec2 tmp29 = ::nape::geom::Vec2_obj::__new((int)0,ray_direction);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(164)
				::nape::geom::Ray tmp30 = ::nape::geom::Ray_obj::__new(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(164)
				::nape::geom::Ray ray = tmp30;		HX_STACK_VAR(ray,"ray");
				HX_STACK_LINE(165)
				{
					HX_STACK_LINE(165)
					Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						bool tmp32 = (movement_delta != null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(165)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(165)
						if ((tmp32)){
							HX_STACK_LINE(165)
							tmp33 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(165)
							tmp33 = false;
						}
						HX_STACK_LINE(165)
						if ((tmp33)){
							HX_STACK_LINE(165)
							::String tmp34 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(165)
							::String tmp35 = (tmp34 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(165)
							HX_STACK_DO_THROW(tmp35);
						}
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(165)
							bool tmp34 = (_this->_validate != null());		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(165)
							if ((tmp34)){
								HX_STACK_LINE(165)
								_this->_validate();
							}
						}
						HX_STACK_LINE(165)
						tmp31 = movement_delta->zpp_inner->y;
					}
					HX_STACK_LINE(165)
					Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(165)
					Float tmp33 = this->skin_thickness;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(165)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(165)
					Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(165)
							bool tmp36 = (_this->_validate != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(165)
							if ((tmp36)){
								HX_STACK_LINE(165)
								_this->_validate();
							}
						}
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(165)
							tmp35 = (_this->maxy - _this->miny);
						}
					}
					HX_STACK_LINE(165)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(165)
					Float maxDistance = tmp36;		HX_STACK_VAR(maxDistance,"maxDistance");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						bool tmp37 = (maxDistance != maxDistance);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(165)
						if ((tmp37)){
							HX_STACK_LINE(165)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: maxDistance cannot be NaN","\xc6","\x98","\x5d","\x73"));
						}
						HX_STACK_LINE(165)
						ray->zpp_inner->maxdist = maxDistance;
					}
					HX_STACK_LINE(165)
					ray->zpp_inner->maxdist;
				}
				HX_STACK_LINE(167)
				::nape::space::Space tmp31 = this->get_space();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(167)
				::nape::geom::Ray tmp32 = ray;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(167)
				Dynamic tmp33 = ::Physics_obj::filters;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(167)
				::nape::dynamics::InteractionFilter tmp34 = tmp33->__Field(HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(167)
				::nape::geom::RayResult tmp35 = tmp31->rayCast(tmp32,false,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(167)
				::nape::geom::RayResult ray_result = tmp35;		HX_STACK_VAR(ray_result,"ray_result");
				HX_STACK_LINE(169)
				bool tmp36 = (ray_result != null());		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(169)
				if ((tmp36)){
					HX_STACK_LINE(171)
					::nape::phys::Body tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(171)
					{
						HX_STACK_LINE(171)
						::nape::shape::Shape tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(171)
						{
							HX_STACK_LINE(171)
							{
								HX_STACK_LINE(171)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp39 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(171)
								bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(171)
								if ((tmp40)){
									HX_STACK_LINE(171)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(171)
							tmp38 = ray_result->zpp_inner->shape;
						}
						HX_STACK_LINE(171)
						::nape::shape::Shape _this = tmp38;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(171)
						::zpp_nape::phys::ZPP_Body tmp39 = _this->zpp_inner->body;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(171)
						bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(171)
						if ((tmp40)){
							HX_STACK_LINE(171)
							::zpp_nape::phys::ZPP_Body tmp41 = _this->zpp_inner->body;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(171)
							tmp37 = tmp41->outer;
						}
						else{
							HX_STACK_LINE(171)
							tmp37 = null();
						}
					}
					HX_STACK_LINE(171)
					::nape::phys::Body hit_body = tmp37;		HX_STACK_VAR(hit_body,"hit_body");
					HX_STACK_LINE(172)
					Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(172)
					{
						HX_STACK_LINE(172)
						::nape::geom::Vec2 tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							::nape::phys::Body tmp40 = this->get_body();		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(172)
							::nape::phys::Body _this = tmp40;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(172)
							::nape::geom::Vec2 tmp41 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(172)
							bool tmp42 = (tmp41 == null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(172)
							if ((tmp42)){
								HX_STACK_LINE(172)
								_this->zpp_inner->setupVelocity();
							}
							HX_STACK_LINE(172)
							tmp39 = _this->zpp_inner->wrap_vel;
						}
						HX_STACK_LINE(172)
						::nape::geom::Vec2 _this = tmp39;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							bool tmp40 = (_this != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(172)
							bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(172)
							if ((tmp40)){
								HX_STACK_LINE(172)
								tmp41 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(172)
								tmp41 = false;
							}
							HX_STACK_LINE(172)
							if ((tmp41)){
								HX_STACK_LINE(172)
								::String tmp42 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(172)
								::String tmp43 = (tmp42 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(172)
								HX_STACK_DO_THROW(tmp43);
							}
						}
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(172)
							bool tmp40 = (_this1->_validate != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(172)
							if ((tmp40)){
								HX_STACK_LINE(172)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(172)
						tmp38 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(172)
					Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(172)
					{
						HX_STACK_LINE(172)
						bool tmp40 = hit_body->zpp_inner->world;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(172)
						if ((tmp40)){
							HX_STACK_LINE(172)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no mass","\x47","\x6a","\x54","\x2b"));
						}
						HX_STACK_LINE(172)
						hit_body->zpp_inner->validate_mass();
						HX_STACK_LINE(172)
						int tmp41 = hit_body->zpp_inner->massMode;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(172)
						bool tmp42 = (tmp41 == (int)0);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(172)
						bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(172)
						if ((tmp42)){
							HX_STACK_LINE(172)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp44 = hit_body->zpp_inner->shapes;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(172)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(172)
							::zpp_nape::util::ZNPNode_ZPP_Shape tmp46 = tmp45->head;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(172)
							tmp43 = (tmp46 == null());
						}
						else{
							HX_STACK_LINE(172)
							tmp43 = false;
						}
						HX_STACK_LINE(172)
						if ((tmp43)){
							HX_STACK_LINE(172)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes","\x3f","\xab","\x6b","\xcb"));
						}
						HX_STACK_LINE(172)
						tmp39 = hit_body->zpp_inner->cmass;
					}
					HX_STACK_LINE(172)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(172)
					::nape::geom::Vec2 tmp41 = ::nape::geom::Vec2_obj::__new((int)0,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(172)
					hit_body->applyImpulse(tmp41,null(),null());
					HX_STACK_LINE(173)
					Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(173)
					{
						HX_STACK_LINE(173)
						::nape::geom::Vec2 tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp44 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(173)
								bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(173)
								if ((tmp45)){
									HX_STACK_LINE(173)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(173)
							tmp43 = ray_result->zpp_inner->normal;
						}
						HX_STACK_LINE(173)
						::nape::geom::Vec2 _this = tmp43;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							bool tmp44 = (_this != null());		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(173)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(173)
							if ((tmp44)){
								HX_STACK_LINE(173)
								tmp45 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(173)
								tmp45 = false;
							}
							HX_STACK_LINE(173)
							if ((tmp45)){
								HX_STACK_LINE(173)
								::String tmp46 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(173)
								::String tmp47 = (tmp46 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(173)
								HX_STACK_DO_THROW(tmp47);
							}
						}
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(173)
							bool tmp44 = (_this1->_validate != null());		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(173)
							if ((tmp44)){
								HX_STACK_LINE(173)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(173)
						tmp42 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(173)
					Float tmp43 = this->max_slope_y;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(173)
					bool tmp44 = (tmp42 < tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(173)
					bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(173)
					bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(173)
					if ((tmp45)){
						HX_STACK_LINE(173)
						Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::nape::geom::Vec2 tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								{
									HX_STACK_LINE(173)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp49 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(173)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(173)
									bool tmp51 = (tmp50 != null());		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(173)
									bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(173)
									bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(173)
									if ((tmp53)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(173)
								::nape::geom::Vec2 tmp49 = ray_result->zpp_inner->normal;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(173)
								tmp48 = tmp49;
							}
							HX_STACK_LINE(173)
							::nape::geom::Vec2 _this = tmp48;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								bool tmp49 = (_this != null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(173)
								bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(173)
								bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(173)
								bool tmp52 = tmp50;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(173)
								if ((tmp52)){
									HX_STACK_LINE(173)
									tmp51 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(173)
									tmp51 = false;
								}
								HX_STACK_LINE(173)
								bool tmp53 = tmp51;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(173)
								if ((tmp53)){
									HX_STACK_LINE(173)
									::String tmp54 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(173)
									::String tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(173)
									::String tmp56 = (tmp55 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(173)
									::String tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(173)
									::String tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(173)
									HX_STACK_DO_THROW(tmp58);
								}
							}
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(173)
								bool tmp49 = (_this1->_validate != null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(173)
								bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(173)
								bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(173)
								if ((tmp51)){
									HX_STACK_LINE(173)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(173)
							Float tmp49 = _this->zpp_inner->y;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(173)
							tmp47 = tmp49;
						}
						HX_STACK_LINE(173)
						tmp46 = (tmp47 > (int)0);
					}
					else{
						HX_STACK_LINE(173)
						tmp46 = true;
					}
					HX_STACK_LINE(173)
					if ((tmp46)){
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::nape::geom::Vec2 tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::nape::phys::Body tmp48 = this->get_body();		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(175)
								::nape::phys::Body _this = tmp48;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(175)
								::nape::geom::Vec2 tmp49 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(175)
								bool tmp50 = (tmp49 == null());		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(175)
								if ((tmp50)){
									HX_STACK_LINE(175)
									_this->zpp_inner->setupVelocity();
								}
								HX_STACK_LINE(175)
								tmp47 = _this->zpp_inner->wrap_vel;
							}
							HX_STACK_LINE(175)
							::nape::geom::Vec2 _this = tmp47;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									bool tmp48 = (_this != null());		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(175)
									bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(175)
									if ((tmp48)){
										HX_STACK_LINE(175)
										tmp49 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(175)
										tmp49 = false;
									}
									HX_STACK_LINE(175)
									if ((tmp49)){
										HX_STACK_LINE(175)
										::String tmp50 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(175)
										::String tmp51 = (tmp50 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(tmp51);
									}
								}
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(175)
									bool tmp48 = _this1->_immutable;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(175)
									if ((tmp48)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(175)
									bool tmp49 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(175)
									if ((tmp49)){
										HX_STACK_LINE(175)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(175)
								Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										bool tmp49 = (_this != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(175)
										bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(175)
										if ((tmp49)){
											HX_STACK_LINE(175)
											tmp50 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(175)
											tmp50 = false;
										}
										HX_STACK_LINE(175)
										if ((tmp50)){
											HX_STACK_LINE(175)
											::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(175)
											::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(tmp52);
										}
									}
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(175)
										bool tmp49 = (_this1->_validate != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(175)
										if ((tmp49)){
											HX_STACK_LINE(175)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(175)
									tmp48 = _this->zpp_inner->y;
								}
								HX_STACK_LINE(175)
								bool tmp49 = (tmp48 != (int)0);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(175)
								if ((tmp49)){
									HX_STACK_LINE(175)
									bool tmp50 = false;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(175)
									if ((tmp50)){
										HX_STACK_LINE(175)
										::String tmp51 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(175)
										::String tmp52 = (tmp51 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(tmp52);
									}
									HX_STACK_LINE(175)
									_this->zpp_inner->y = (int)0;
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(175)
										bool tmp51 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(175)
										if ((tmp51)){
											HX_STACK_LINE(175)
											::zpp_nape::geom::ZPP_Vec2 tmp52 = _this1;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(175)
											_this1->_invalidate(tmp52);
										}
									}
								}
							}
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									bool tmp48 = (_this != null());		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(175)
									bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(175)
									if ((tmp48)){
										HX_STACK_LINE(175)
										tmp49 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(175)
										tmp49 = false;
									}
									HX_STACK_LINE(175)
									if ((tmp49)){
										HX_STACK_LINE(175)
										::String tmp50 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(175)
										::String tmp51 = (tmp50 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(tmp51);
									}
								}
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(175)
									bool tmp48 = (_this1->_validate != null());		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(175)
									if ((tmp48)){
										HX_STACK_LINE(175)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(175)
								_this->zpp_inner->y;
							}
						}
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::nape::geom::Vec2 tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::nape::phys::Body tmp48 = this->get_body();		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(176)
								::nape::phys::Body _this = tmp48;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(176)
								::nape::geom::Vec2 tmp49 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(176)
								bool tmp50 = (tmp49 == null());		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(176)
								if ((tmp50)){
									HX_STACK_LINE(176)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(176)
								tmp47 = _this->zpp_inner->wrap_pos;
							}
							HX_STACK_LINE(176)
							::nape::geom::Vec2 _this = tmp47;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(176)
							Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp50 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(176)
									bool tmp51 = (tmp50 != null());		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(176)
									if ((tmp51)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
									HX_STACK_LINE(176)
									tmp49 = ray_result->zpp_inner->toiDistance;
								}
								HX_STACK_LINE(176)
								::nape::geom::Vec2 tmp50 = ray->at(tmp49,null());		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(176)
								::nape::geom::Vec2 _this1 = tmp50;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(176)
								bool tmp51 = (_this1 != null());		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(176)
								bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(176)
								if ((tmp51)){
									HX_STACK_LINE(176)
									tmp52 = _this1->zpp_disp;
								}
								else{
									HX_STACK_LINE(176)
									tmp52 = false;
								}
								HX_STACK_LINE(176)
								if ((tmp52)){
									HX_STACK_LINE(176)
									::String tmp53 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(176)
									::String tmp54 = (tmp53 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(176)
									HX_STACK_DO_THROW(tmp54);
								}
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(176)
									bool tmp53 = (_this2->_validate != null());		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(176)
									if ((tmp53)){
										HX_STACK_LINE(176)
										_this2->_validate();
									}
								}
								HX_STACK_LINE(176)
								tmp48 = _this1->zpp_inner->y;
							}
							HX_STACK_LINE(176)
							Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::nape::geom::AABB tmp50 = this->get_bounds();		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(176)
								::nape::geom::AABB _this1 = tmp50;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(176)
									bool tmp51 = (_this2->_validate != null());		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(176)
									if ((tmp51)){
										HX_STACK_LINE(176)
										_this2->_validate();
									}
								}
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(176)
									tmp49 = (_this2->maxy - _this2->miny);
								}
							}
							HX_STACK_LINE(176)
							Float tmp50 = (Float(tmp49) / Float((int)2));		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(176)
							int tmp51 = ray_direction;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(176)
							Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(176)
							Float tmp53 = (tmp48 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(176)
							Float y = tmp53;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									bool tmp54 = (_this != null());		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(176)
									bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(176)
									if ((tmp54)){
										HX_STACK_LINE(176)
										tmp55 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(176)
										tmp55 = false;
									}
									HX_STACK_LINE(176)
									if ((tmp55)){
										HX_STACK_LINE(176)
										::String tmp56 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(176)
										::String tmp57 = (tmp56 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(tmp57);
									}
								}
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(176)
									bool tmp54 = _this1->_immutable;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(176)
									if ((tmp54)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(176)
									bool tmp55 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(176)
									if ((tmp55)){
										HX_STACK_LINE(176)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(176)
								Float tmp54;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										bool tmp55 = (_this != null());		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(176)
										bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(176)
										if ((tmp55)){
											HX_STACK_LINE(176)
											tmp56 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(176)
											tmp56 = false;
										}
										HX_STACK_LINE(176)
										if ((tmp56)){
											HX_STACK_LINE(176)
											::String tmp57 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(176)
											::String tmp58 = (tmp57 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(tmp58);
										}
									}
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(176)
										bool tmp55 = (_this1->_validate != null());		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(176)
										if ((tmp55)){
											HX_STACK_LINE(176)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(176)
									tmp54 = _this->zpp_inner->y;
								}
								HX_STACK_LINE(176)
								Float tmp55 = y;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(176)
								bool tmp56 = (tmp54 != tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(176)
								if ((tmp56)){
									HX_STACK_LINE(176)
									bool tmp57 = (y != y);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(176)
									if ((tmp57)){
										HX_STACK_LINE(176)
										::String tmp58 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(176)
										::String tmp59 = (tmp58 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(tmp59);
									}
									HX_STACK_LINE(176)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(176)
										bool tmp58 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(176)
										if ((tmp58)){
											HX_STACK_LINE(176)
											::zpp_nape::geom::ZPP_Vec2 tmp59 = _this1;		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(176)
											_this1->_invalidate(tmp59);
										}
									}
								}
							}
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									bool tmp54 = (_this != null());		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(176)
									bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(176)
									if ((tmp54)){
										HX_STACK_LINE(176)
										tmp55 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(176)
										tmp55 = false;
									}
									HX_STACK_LINE(176)
									if ((tmp55)){
										HX_STACK_LINE(176)
										::String tmp56 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(176)
										::String tmp57 = (tmp56 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(tmp57);
									}
								}
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(176)
									bool tmp54 = (_this1->_validate != null());		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(176)
									if ((tmp54)){
										HX_STACK_LINE(176)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(176)
								_this->zpp_inner->y;
							}
						}
						HX_STACK_LINE(177)
						bool tmp47 = (ray_direction > (int)0);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(177)
						if ((tmp47)){
							HX_STACK_LINE(177)
							this->grounded = true;
						}
						HX_STACK_LINE(178)
						break;
					}
					else{
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							::nape::geom::Vec2 tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::nape::phys::Body tmp48 = this->get_body();		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(182)
								::nape::phys::Body _this = tmp48;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(182)
								::nape::geom::Vec2 tmp49 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(182)
								bool tmp50 = (tmp49 == null());		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(182)
								if ((tmp50)){
									HX_STACK_LINE(182)
									_this->zpp_inner->setupVelocity();
								}
								HX_STACK_LINE(182)
								tmp47 = _this->zpp_inner->wrap_vel;
							}
							HX_STACK_LINE(182)
							::nape::geom::Vec2 _this = tmp47;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									bool tmp48 = (_this != null());		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(182)
									bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(182)
									if ((tmp48)){
										HX_STACK_LINE(182)
										tmp49 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(182)
										tmp49 = false;
									}
									HX_STACK_LINE(182)
									if ((tmp49)){
										HX_STACK_LINE(182)
										::String tmp50 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(182)
										::String tmp51 = (tmp50 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(tmp51);
									}
								}
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(182)
									bool tmp48 = _this1->_immutable;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(182)
									if ((tmp48)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(182)
									bool tmp49 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(182)
									if ((tmp49)){
										HX_STACK_LINE(182)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(182)
								Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									{
										HX_STACK_LINE(182)
										bool tmp49 = (_this != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(182)
										bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(182)
										if ((tmp49)){
											HX_STACK_LINE(182)
											tmp50 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(182)
											tmp50 = false;
										}
										HX_STACK_LINE(182)
										if ((tmp50)){
											HX_STACK_LINE(182)
											::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(182)
											::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(tmp52);
										}
									}
									HX_STACK_LINE(182)
									{
										HX_STACK_LINE(182)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(182)
										bool tmp49 = (_this1->_validate != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(182)
										if ((tmp49)){
											HX_STACK_LINE(182)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(182)
									tmp48 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(182)
								bool tmp49 = (tmp48 != (int)0);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(182)
								if ((tmp49)){
									HX_STACK_LINE(182)
									bool tmp50 = false;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(182)
									if ((tmp50)){
										HX_STACK_LINE(182)
										::String tmp51 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(182)
										::String tmp52 = (tmp51 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(tmp52);
									}
									HX_STACK_LINE(182)
									_this->zpp_inner->x = (int)0;
									HX_STACK_LINE(182)
									{
										HX_STACK_LINE(182)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(182)
										bool tmp51 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(182)
										if ((tmp51)){
											HX_STACK_LINE(182)
											::zpp_nape::geom::ZPP_Vec2 tmp52 = _this1;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(182)
											_this1->_invalidate(tmp52);
										}
									}
								}
							}
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									bool tmp48 = (_this != null());		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(182)
									bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(182)
									if ((tmp48)){
										HX_STACK_LINE(182)
										tmp49 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(182)
										tmp49 = false;
									}
									HX_STACK_LINE(182)
									if ((tmp49)){
										HX_STACK_LINE(182)
										::String tmp50 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(182)
										::String tmp51 = (tmp50 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(tmp51);
									}
								}
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(182)
									bool tmp48 = (_this1->_validate != null());		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(182)
									if ((tmp48)){
										HX_STACK_LINE(182)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(182)
								_this->zpp_inner->x;
							}
						}
						HX_STACK_LINE(183)
						{
							HX_STACK_LINE(183)
							::nape::geom::Vec2 tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(183)
							{
								HX_STACK_LINE(183)
								::nape::phys::Body tmp48 = this->get_body();		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(183)
								::nape::phys::Body _this = tmp48;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(183)
								::nape::geom::Vec2 tmp49 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(183)
								bool tmp50 = (tmp49 == null());		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(183)
								if ((tmp50)){
									HX_STACK_LINE(183)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(183)
								tmp47 = _this->zpp_inner->wrap_pos;
							}
							HX_STACK_LINE(183)
							::nape::geom::Vec2 _g2 = tmp47;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(183)
							{
								HX_STACK_LINE(183)
								Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(183)
								{
									HX_STACK_LINE(183)
									bool tmp49 = (_g2 != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(183)
									bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(183)
									if ((tmp49)){
										HX_STACK_LINE(183)
										tmp50 = _g2->zpp_disp;
									}
									else{
										HX_STACK_LINE(183)
										tmp50 = false;
									}
									HX_STACK_LINE(183)
									if ((tmp50)){
										HX_STACK_LINE(183)
										::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(183)
										::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(183)
										HX_STACK_DO_THROW(tmp52);
									}
									HX_STACK_LINE(183)
									{
										HX_STACK_LINE(183)
										::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(183)
										bool tmp51 = (_this->_validate != null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(183)
										if ((tmp51)){
											HX_STACK_LINE(183)
											_this->_validate();
										}
									}
									HX_STACK_LINE(183)
									tmp48 = _g2->zpp_inner->x;
								}
								HX_STACK_LINE(183)
								Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(183)
								{
									HX_STACK_LINE(183)
									::nape::geom::Vec2 tmp50;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(183)
									{
										HX_STACK_LINE(183)
										::zpp_nape::geom::ZPP_ConvexRayResult tmp51 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(183)
										bool tmp52 = (tmp51 != null());		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(183)
										if ((tmp52)){
											HX_STACK_LINE(183)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
										}
										HX_STACK_LINE(183)
										tmp50 = ray_result->zpp_inner->normal;
									}
									HX_STACK_LINE(183)
									::nape::geom::Vec2 _this = tmp50;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(183)
									bool tmp51 = (_this != null());		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(183)
									bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(183)
									if ((tmp51)){
										HX_STACK_LINE(183)
										tmp52 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(183)
										tmp52 = false;
									}
									HX_STACK_LINE(183)
									if ((tmp52)){
										HX_STACK_LINE(183)
										::String tmp53 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(183)
										::String tmp54 = (tmp53 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(183)
										HX_STACK_DO_THROW(tmp54);
									}
									HX_STACK_LINE(183)
									{
										HX_STACK_LINE(183)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(183)
										bool tmp53 = (_this1->_validate != null());		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(183)
										if ((tmp53)){
											HX_STACK_LINE(183)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(183)
									tmp49 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(183)
								Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(183)
								Float x1 = tmp50;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(183)
								{
									HX_STACK_LINE(183)
									{
										HX_STACK_LINE(183)
										bool tmp51 = (_g2 != null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(183)
										bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(183)
										if ((tmp51)){
											HX_STACK_LINE(183)
											tmp52 = _g2->zpp_disp;
										}
										else{
											HX_STACK_LINE(183)
											tmp52 = false;
										}
										HX_STACK_LINE(183)
										if ((tmp52)){
											HX_STACK_LINE(183)
											::String tmp53 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(183)
											::String tmp54 = (tmp53 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(183)
											HX_STACK_DO_THROW(tmp54);
										}
									}
									HX_STACK_LINE(183)
									{
										HX_STACK_LINE(183)
										::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(183)
										bool tmp51 = _this->_immutable;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(183)
										if ((tmp51)){
											HX_STACK_LINE(183)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
										}
										HX_STACK_LINE(183)
										bool tmp52 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(183)
										if ((tmp52)){
											HX_STACK_LINE(183)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(183)
									Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(183)
									{
										HX_STACK_LINE(183)
										{
											HX_STACK_LINE(183)
											bool tmp52 = (_g2 != null());		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(183)
											bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(183)
											if ((tmp52)){
												HX_STACK_LINE(183)
												tmp53 = _g2->zpp_disp;
											}
											else{
												HX_STACK_LINE(183)
												tmp53 = false;
											}
											HX_STACK_LINE(183)
											if ((tmp53)){
												HX_STACK_LINE(183)
												::String tmp54 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(183)
												::String tmp55 = (tmp54 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(183)
												HX_STACK_DO_THROW(tmp55);
											}
										}
										HX_STACK_LINE(183)
										{
											HX_STACK_LINE(183)
											::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(183)
											bool tmp52 = (_this->_validate != null());		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(183)
											if ((tmp52)){
												HX_STACK_LINE(183)
												_this->_validate();
											}
										}
										HX_STACK_LINE(183)
										tmp51 = _g2->zpp_inner->x;
									}
									HX_STACK_LINE(183)
									Float tmp52 = x1;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(183)
									bool tmp53 = (tmp51 != tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(183)
									if ((tmp53)){
										HX_STACK_LINE(183)
										bool tmp54 = (x1 != x1);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(183)
										if ((tmp54)){
											HX_STACK_LINE(183)
											::String tmp55 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(183)
											::String tmp56 = (tmp55 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(183)
											HX_STACK_DO_THROW(tmp56);
										}
										HX_STACK_LINE(183)
										_g2->zpp_inner->x = x1;
										HX_STACK_LINE(183)
										{
											HX_STACK_LINE(183)
											::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(183)
											bool tmp55 = (_this->_invalidate != null());		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(183)
											if ((tmp55)){
												HX_STACK_LINE(183)
												::zpp_nape::geom::ZPP_Vec2 tmp56 = _this;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(183)
												_this->_invalidate(tmp56);
											}
										}
									}
								}
								HX_STACK_LINE(183)
								{
									HX_STACK_LINE(183)
									{
										HX_STACK_LINE(183)
										bool tmp51 = (_g2 != null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(183)
										bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(183)
										if ((tmp51)){
											HX_STACK_LINE(183)
											tmp52 = _g2->zpp_disp;
										}
										else{
											HX_STACK_LINE(183)
											tmp52 = false;
										}
										HX_STACK_LINE(183)
										if ((tmp52)){
											HX_STACK_LINE(183)
											::String tmp53 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(183)
											::String tmp54 = (tmp53 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(183)
											HX_STACK_DO_THROW(tmp54);
										}
									}
									HX_STACK_LINE(183)
									{
										HX_STACK_LINE(183)
										::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(183)
										bool tmp51 = (_this->_validate != null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(183)
										if ((tmp51)){
											HX_STACK_LINE(183)
											_this->_validate();
										}
									}
									HX_STACK_LINE(183)
									_g2->zpp_inner->x;
								}
							}
						}
					}
				}
				HX_STACK_LINE(186)
				::nape::geom::Ray tmp37 = ray;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(186)
				::nape::geom::RayResult tmp38 = ray_result;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(186)
				this->debug_ray(tmp37,tmp38);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,raycast_vertical,(void))

Void Controller_obj::slope_raycast( Float dt){
{
		HX_STACK_FRAME("Controller","slope_raycast",0xf9907423,"Controller.slope_raycast","Controller.hx",191,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(192)
		this->slope = false;
		HX_STACK_LINE(194)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::nape::phys::Body tmp1 = this->get_body();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(194)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(194)
			::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(194)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			if ((tmp3)){
				HX_STACK_LINE(194)
				_this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(194)
			tmp = _this->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(194)
		Float tmp1 = dt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		::nape::geom::Vec2 tmp2 = tmp->mul(tmp1,false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		::nape::geom::Vec2 movement_delta = tmp2;		HX_STACK_VAR(movement_delta,"movement_delta");
		HX_STACK_LINE(196)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(196)
				bool tmp4 = (movement_delta != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(196)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(196)
				if ((tmp4)){
					HX_STACK_LINE(196)
					tmp5 = movement_delta->zpp_disp;
				}
				else{
					HX_STACK_LINE(196)
					tmp5 = false;
				}
				HX_STACK_LINE(196)
				if ((tmp5)){
					HX_STACK_LINE(196)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(196)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(196)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(196)
				::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(196)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(196)
				if ((tmp4)){
					HX_STACK_LINE(196)
					_this->_validate();
				}
			}
			HX_STACK_LINE(196)
			tmp3 = movement_delta->zpp_inner->y;
		}
		HX_STACK_LINE(196)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		if ((tmp4)){
			HX_STACK_LINE(196)
			return null();
		}
		HX_STACK_LINE(199)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			::nape::geom::AABB tmp6 = this->get_bounds();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(199)
			::nape::geom::AABB _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(199)
			{
				HX_STACK_LINE(199)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(199)
				bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(199)
				if ((tmp7)){
					HX_STACK_LINE(199)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(199)
			tmp5 = _this->zpp_inner->minx;
		}
		HX_STACK_LINE(199)
		Float tmp6 = this->skin_thickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(199)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			::nape::geom::AABB tmp9 = this->get_bounds();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(199)
			::nape::geom::AABB _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(199)
			{
				HX_STACK_LINE(199)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(199)
				bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(199)
				if ((tmp10)){
					HX_STACK_LINE(199)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(199)
			tmp8 = _this->zpp_inner->miny;
		}
		HX_STACK_LINE(199)
		Float tmp9 = this->skin_thickness;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(199)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(200)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			::nape::geom::AABB tmp12 = this->get_bounds();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(200)
			::nape::geom::AABB _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(200)
				bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(200)
				if ((tmp13)){
					HX_STACK_LINE(200)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(200)
				tmp11 = (_this1->maxx - _this1->minx);
			}
		}
		HX_STACK_LINE(200)
		Float tmp12 = this->skin_thickness;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(200)
		Float tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(200)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(200)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			::nape::geom::AABB tmp16 = this->get_bounds();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(200)
			::nape::geom::AABB _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(200)
				bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(200)
				if ((tmp17)){
					HX_STACK_LINE(200)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(200)
				tmp15 = (_this1->maxy - _this1->miny);
			}
		}
		HX_STACK_LINE(200)
		Float tmp16 = this->skin_thickness;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(200)
		Float tmp17 = (tmp16 * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(200)
		Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(198)
		::nape::geom::AABB tmp19 = ::nape::geom::AABB_obj::__new(tmp7,tmp10,tmp14,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(198)
		::nape::geom::AABB skin_bounds = tmp19;		HX_STACK_VAR(skin_bounds,"skin_bounds");
		HX_STACK_LINE(201)
		int direction = (int)1;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(202)
		::nape::geom::Vec2 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			::nape::phys::Body tmp21 = this->get_body();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(202)
			::nape::phys::Body _this = tmp21;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(202)
			::nape::geom::Vec2 tmp22 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(202)
			bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(202)
			if ((tmp23)){
				HX_STACK_LINE(202)
				_this->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(202)
			tmp20 = _this->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(202)
		::nape::geom::Vec2 tmp21 = ::nape::geom::Vec2_obj::__new((int)0,direction);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(202)
		::nape::geom::Ray tmp22 = ::nape::geom::Ray_obj::__new(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(202)
		::nape::geom::Ray ray = tmp22;		HX_STACK_VAR(ray,"ray");
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(203)
			{
				HX_STACK_LINE(203)
				::nape::geom::AABB tmp24 = this->get_bounds();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(203)
				::nape::geom::AABB _this = tmp24;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(203)
				{
					HX_STACK_LINE(203)
					::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(203)
					bool tmp25 = (_this1->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(203)
					if ((tmp25)){
						HX_STACK_LINE(203)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(203)
				{
					HX_STACK_LINE(203)
					::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(203)
					tmp23 = (_this1->maxy - _this1->miny);
				}
			}
			HX_STACK_LINE(203)
			Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(203)
			Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(203)
			{
				HX_STACK_LINE(203)
				bool tmp26 = (movement_delta != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(203)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(203)
				if ((tmp26)){
					HX_STACK_LINE(203)
					tmp27 = movement_delta->zpp_disp;
				}
				else{
					HX_STACK_LINE(203)
					tmp27 = false;
				}
				HX_STACK_LINE(203)
				if ((tmp27)){
					HX_STACK_LINE(203)
					::String tmp28 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(203)
					::String tmp29 = (tmp28 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(203)
					HX_STACK_DO_THROW(tmp29);
				}
				HX_STACK_LINE(203)
				{
					HX_STACK_LINE(203)
					::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(203)
					bool tmp28 = (_this->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(203)
					if ((tmp28)){
						HX_STACK_LINE(203)
						_this->_validate();
					}
				}
				HX_STACK_LINE(203)
				tmp25 = movement_delta->zpp_inner->y;
			}
			HX_STACK_LINE(203)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(203)
			bool tmp27 = this->grounded;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(203)
			int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(203)
			if ((tmp27)){
				HX_STACK_LINE(203)
				tmp28 = (int)12;
			}
			else{
				HX_STACK_LINE(203)
				tmp28 = (int)0;
			}
			HX_STACK_LINE(203)
			Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(203)
			Float maxDistance = tmp29;		HX_STACK_VAR(maxDistance,"maxDistance");
			HX_STACK_LINE(203)
			{
				HX_STACK_LINE(203)
				bool tmp30 = (maxDistance != maxDistance);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(203)
				if ((tmp30)){
					HX_STACK_LINE(203)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: maxDistance cannot be NaN","\xc6","\x98","\x5d","\x73"));
				}
				HX_STACK_LINE(203)
				ray->zpp_inner->maxdist = maxDistance;
			}
			HX_STACK_LINE(203)
			ray->zpp_inner->maxdist;
		}
		HX_STACK_LINE(204)
		::nape::space::Space tmp23 = this->get_space();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(204)
		::nape::geom::Ray tmp24 = ray;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(204)
		Dynamic tmp25 = ::Physics_obj::filters;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(204)
		::nape::dynamics::InteractionFilter tmp26 = tmp25->__Field(HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(204)
		::nape::geom::RayResult tmp27 = tmp23->rayCast(tmp24,false,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(204)
		::nape::geom::RayResult result = tmp27;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(205)
		bool tmp28 = (result != null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(205)
		if ((tmp28)){
			HX_STACK_LINE(207)
			Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(207)
			{
				HX_STACK_LINE(207)
				::nape::geom::Vec2 tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(207)
				{
					HX_STACK_LINE(207)
					{
						HX_STACK_LINE(207)
						::zpp_nape::geom::ZPP_ConvexRayResult tmp31 = result->zpp_inner->next;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(207)
						bool tmp32 = (tmp31 != null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(207)
						if ((tmp32)){
							HX_STACK_LINE(207)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
						}
					}
					HX_STACK_LINE(207)
					tmp30 = result->zpp_inner->normal;
				}
				HX_STACK_LINE(207)
				::nape::geom::Vec2 _this = tmp30;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(207)
				{
					HX_STACK_LINE(207)
					bool tmp31 = (_this != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(207)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(207)
					if ((tmp31)){
						HX_STACK_LINE(207)
						tmp32 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(207)
						tmp32 = false;
					}
					HX_STACK_LINE(207)
					if ((tmp32)){
						HX_STACK_LINE(207)
						::String tmp33 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(207)
						::String tmp34 = (tmp33 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(207)
						HX_STACK_DO_THROW(tmp34);
					}
				}
				HX_STACK_LINE(207)
				{
					HX_STACK_LINE(207)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(207)
					bool tmp31 = (_this1->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(207)
					if ((tmp31)){
						HX_STACK_LINE(207)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(207)
				tmp29 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(207)
			bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(207)
			if ((tmp30)){
				HX_STACK_LINE(209)
				this->slope = true;
			}
			HX_STACK_LINE(212)
			Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(212)
			{
				HX_STACK_LINE(212)
				::nape::geom::Vec2 tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(212)
					{
						HX_STACK_LINE(212)
						::zpp_nape::geom::ZPP_ConvexRayResult tmp33 = result->zpp_inner->next;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(212)
						bool tmp34 = (tmp33 != null());		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(212)
						if ((tmp34)){
							HX_STACK_LINE(212)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
						}
					}
					HX_STACK_LINE(212)
					tmp32 = result->zpp_inner->normal;
				}
				HX_STACK_LINE(212)
				::nape::geom::Vec2 _this = tmp32;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(212)
					bool tmp33 = (_this != null());		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(212)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(212)
					if ((tmp33)){
						HX_STACK_LINE(212)
						tmp34 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(212)
						tmp34 = false;
					}
					HX_STACK_LINE(212)
					if ((tmp34)){
						HX_STACK_LINE(212)
						::String tmp35 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(212)
						::String tmp36 = (tmp35 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(212)
						HX_STACK_DO_THROW(tmp36);
					}
				}
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(212)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(212)
					bool tmp33 = (_this1->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(212)
					if ((tmp33)){
						HX_STACK_LINE(212)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(212)
				tmp31 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(212)
			Float tmp32 = this->max_slope_y;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(212)
			bool tmp33 = (tmp31 < tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(212)
			if ((tmp33)){
				HX_STACK_LINE(214)
				{
					HX_STACK_LINE(214)
					::nape::geom::Vec2 tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(214)
					{
						HX_STACK_LINE(214)
						::nape::phys::Body tmp35 = this->get_body();		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(214)
						::nape::phys::Body _this = tmp35;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(214)
						::nape::geom::Vec2 tmp36 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(214)
						bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(214)
						if ((tmp37)){
							HX_STACK_LINE(214)
							_this->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(214)
						tmp34 = _this->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(214)
					::nape::geom::Vec2 _this = tmp34;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(214)
					{
						HX_STACK_LINE(214)
						{
							HX_STACK_LINE(214)
							bool tmp35 = (_this != null());		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(214)
							bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(214)
							if ((tmp35)){
								HX_STACK_LINE(214)
								tmp36 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(214)
								tmp36 = false;
							}
							HX_STACK_LINE(214)
							if ((tmp36)){
								HX_STACK_LINE(214)
								::String tmp37 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(214)
								::String tmp38 = (tmp37 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(214)
								HX_STACK_DO_THROW(tmp38);
							}
						}
						HX_STACK_LINE(214)
						{
							HX_STACK_LINE(214)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(214)
							bool tmp35 = _this1->_immutable;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(214)
							if ((tmp35)){
								HX_STACK_LINE(214)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(214)
							bool tmp36 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(214)
							if ((tmp36)){
								HX_STACK_LINE(214)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(214)
						Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(214)
						{
							HX_STACK_LINE(214)
							{
								HX_STACK_LINE(214)
								bool tmp36 = (_this != null());		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(214)
								bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(214)
								if ((tmp36)){
									HX_STACK_LINE(214)
									tmp37 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(214)
									tmp37 = false;
								}
								HX_STACK_LINE(214)
								if ((tmp37)){
									HX_STACK_LINE(214)
									::String tmp38 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(214)
									::String tmp39 = (tmp38 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(214)
									HX_STACK_DO_THROW(tmp39);
								}
							}
							HX_STACK_LINE(214)
							{
								HX_STACK_LINE(214)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(214)
								bool tmp36 = (_this1->_validate != null());		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(214)
								if ((tmp36)){
									HX_STACK_LINE(214)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(214)
							tmp35 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(214)
						bool tmp36 = (tmp35 != (int)0);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(214)
						if ((tmp36)){
							HX_STACK_LINE(214)
							bool tmp37 = false;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(214)
							if ((tmp37)){
								HX_STACK_LINE(214)
								::String tmp38 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(214)
								::String tmp39 = (tmp38 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(214)
								HX_STACK_DO_THROW(tmp39);
							}
							HX_STACK_LINE(214)
							_this->zpp_inner->y = (int)0;
							HX_STACK_LINE(214)
							{
								HX_STACK_LINE(214)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(214)
								bool tmp38 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(214)
								if ((tmp38)){
									HX_STACK_LINE(214)
									::zpp_nape::geom::ZPP_Vec2 tmp39 = _this1;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(214)
									_this1->_invalidate(tmp39);
								}
							}
						}
					}
					HX_STACK_LINE(214)
					{
						HX_STACK_LINE(214)
						{
							HX_STACK_LINE(214)
							bool tmp35 = (_this != null());		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(214)
							bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(214)
							if ((tmp35)){
								HX_STACK_LINE(214)
								tmp36 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(214)
								tmp36 = false;
							}
							HX_STACK_LINE(214)
							if ((tmp36)){
								HX_STACK_LINE(214)
								::String tmp37 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(214)
								::String tmp38 = (tmp37 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(214)
								HX_STACK_DO_THROW(tmp38);
							}
						}
						HX_STACK_LINE(214)
						{
							HX_STACK_LINE(214)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(214)
							bool tmp35 = (_this1->_validate != null());		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(214)
							if ((tmp35)){
								HX_STACK_LINE(214)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(214)
						_this->zpp_inner->y;
					}
				}
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					::nape::geom::Vec2 tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(215)
					{
						HX_STACK_LINE(215)
						::nape::phys::Body tmp35 = this->get_body();		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(215)
						::nape::phys::Body _this = tmp35;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(215)
						::nape::geom::Vec2 tmp36 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(215)
						bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(215)
						if ((tmp37)){
							HX_STACK_LINE(215)
							_this->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(215)
						tmp34 = _this->zpp_inner->wrap_pos;
					}
					HX_STACK_LINE(215)
					::nape::geom::Vec2 _this = tmp34;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(215)
					Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(215)
					{
						HX_STACK_LINE(215)
						Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							::zpp_nape::geom::ZPP_ConvexRayResult tmp37 = result->zpp_inner->next;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(215)
							bool tmp38 = (tmp37 != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(215)
							if ((tmp38)){
								HX_STACK_LINE(215)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
							}
							HX_STACK_LINE(215)
							tmp36 = result->zpp_inner->toiDistance;
						}
						HX_STACK_LINE(215)
						::nape::geom::Vec2 tmp37 = ray->at(tmp36,null());		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(215)
						::nape::geom::Vec2 _this1 = tmp37;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(215)
						bool tmp38 = (_this1 != null());		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(215)
						bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(215)
						if ((tmp38)){
							HX_STACK_LINE(215)
							tmp39 = _this1->zpp_disp;
						}
						else{
							HX_STACK_LINE(215)
							tmp39 = false;
						}
						HX_STACK_LINE(215)
						if ((tmp39)){
							HX_STACK_LINE(215)
							::String tmp40 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(215)
							::String tmp41 = (tmp40 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(215)
							HX_STACK_DO_THROW(tmp41);
						}
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(215)
							bool tmp40 = (_this2->_validate != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(215)
							if ((tmp40)){
								HX_STACK_LINE(215)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(215)
						tmp35 = _this1->zpp_inner->y;
					}
					HX_STACK_LINE(215)
					Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(215)
					{
						HX_STACK_LINE(215)
						::nape::geom::AABB tmp37 = this->get_bounds();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(215)
						::nape::geom::AABB _this1 = tmp37;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(215)
							bool tmp38 = (_this2->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(215)
							if ((tmp38)){
								HX_STACK_LINE(215)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(215)
							tmp36 = (_this2->maxy - _this2->miny);
						}
					}
					HX_STACK_LINE(215)
					Float tmp37 = (Float(tmp36) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(215)
					int tmp38 = direction;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(215)
					Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(215)
					Float tmp40 = (tmp35 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(215)
					Float y = tmp40;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(215)
					{
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							bool tmp41 = (_this != null());		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(215)
							bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(215)
							if ((tmp41)){
								HX_STACK_LINE(215)
								tmp42 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(215)
								tmp42 = false;
							}
							HX_STACK_LINE(215)
							if ((tmp42)){
								HX_STACK_LINE(215)
								::String tmp43 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(215)
								::String tmp44 = (tmp43 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(215)
								HX_STACK_DO_THROW(tmp44);
							}
						}
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(215)
							bool tmp41 = _this1->_immutable;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(215)
							if ((tmp41)){
								HX_STACK_LINE(215)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(215)
							bool tmp42 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(215)
							if ((tmp42)){
								HX_STACK_LINE(215)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(215)
						Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								bool tmp42 = (_this != null());		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(215)
								bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(215)
								if ((tmp42)){
									HX_STACK_LINE(215)
									tmp43 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(215)
									tmp43 = false;
								}
								HX_STACK_LINE(215)
								if ((tmp43)){
									HX_STACK_LINE(215)
									::String tmp44 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(215)
									::String tmp45 = (tmp44 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(215)
									HX_STACK_DO_THROW(tmp45);
								}
							}
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(215)
								bool tmp42 = (_this1->_validate != null());		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(215)
								if ((tmp42)){
									HX_STACK_LINE(215)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(215)
							tmp41 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(215)
						Float tmp42 = y;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(215)
						bool tmp43 = (tmp41 != tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(215)
						if ((tmp43)){
							HX_STACK_LINE(215)
							bool tmp44 = (y != y);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(215)
							if ((tmp44)){
								HX_STACK_LINE(215)
								::String tmp45 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(215)
								::String tmp46 = (tmp45 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(215)
								HX_STACK_DO_THROW(tmp46);
							}
							HX_STACK_LINE(215)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(215)
								bool tmp45 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(215)
								if ((tmp45)){
									HX_STACK_LINE(215)
									::zpp_nape::geom::ZPP_Vec2 tmp46 = _this1;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(215)
									_this1->_invalidate(tmp46);
								}
							}
						}
					}
					HX_STACK_LINE(215)
					{
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							bool tmp41 = (_this != null());		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(215)
							bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(215)
							if ((tmp41)){
								HX_STACK_LINE(215)
								tmp42 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(215)
								tmp42 = false;
							}
							HX_STACK_LINE(215)
							if ((tmp42)){
								HX_STACK_LINE(215)
								::String tmp43 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(215)
								::String tmp44 = (tmp43 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(215)
								HX_STACK_DO_THROW(tmp44);
							}
						}
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(215)
							bool tmp41 = (_this1->_validate != null());		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(215)
							if ((tmp41)){
								HX_STACK_LINE(215)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(215)
						_this->zpp_inner->y;
					}
				}
				HX_STACK_LINE(216)
				bool tmp34 = (direction > (int)0);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(216)
				if ((tmp34)){
					HX_STACK_LINE(216)
					this->grounded = true;
				}
			}
		}
		HX_STACK_LINE(219)
		::nape::geom::Ray tmp29 = ray;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(219)
		::nape::geom::RayResult tmp30 = result;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(219)
		this->debug_ray(tmp29,tmp30);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,slope_raycast,(void))

Void Controller_obj::debug_ray( ::nape::geom::Ray ray,::nape::geom::RayResult result){
{
		HX_STACK_FRAME("Controller","debug_ray",0x2dd77c8c,"Controller.debug_ray","Controller.hx",223,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ray,"ray")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(224)
		::luxe::Physics tmp = ::Luxe_obj::physics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		bool tmp1 = tmp->nape->get_draw();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		if ((tmp2)){
			HX_STACK_LINE(224)
			return null();
		}
		HX_STACK_LINE(225)
		::phoenix::Vector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				::nape::geom::Vec2 tmp5 = ray->zpp_inner->direction;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(225)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(225)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(225)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(225)
					if ((tmp6)){
						HX_STACK_LINE(225)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(225)
						tmp7 = false;
					}
					HX_STACK_LINE(225)
					if ((tmp7)){
						HX_STACK_LINE(225)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(225)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(225)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(225)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(225)
					bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(225)
					if ((tmp6)){
						HX_STACK_LINE(225)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(225)
				tmp4 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(225)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				::nape::geom::Vec2 tmp6 = ray->zpp_inner->direction;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(225)
				::nape::geom::Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(225)
					bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(225)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(225)
					if ((tmp7)){
						HX_STACK_LINE(225)
						tmp8 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(225)
						tmp8 = false;
					}
					HX_STACK_LINE(225)
					if ((tmp8)){
						HX_STACK_LINE(225)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(225)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(225)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(225)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(225)
					bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(225)
					if ((tmp7)){
						HX_STACK_LINE(225)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(225)
				tmp5 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(225)
			::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(tmp4,tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(225)
			::phoenix::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				Float tmp7 = (_this->x * _this->x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(225)
				Float tmp8 = (_this->y * _this->y);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(225)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(225)
				Float tmp10 = (_this->z * _this->z);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(225)
				Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(225)
				Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(225)
				Float b = tmp12;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(225)
				Float tmp13 = (Float(_this->x) / Float(b));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(225)
				Float tmp14 = (Float(_this->y) / Float(b));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(225)
				Float tmp15 = (Float(_this->z) / Float(b));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(225)
				tmp3 = ::phoenix::Vector_obj::__new(tmp13,tmp14,tmp15,null());
			}
		}
		HX_STACK_LINE(225)
		::phoenix::Vector direction = tmp3;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(226)
		bool tmp4 = (result != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		if ((tmp4)){
			HX_STACK_LINE(228)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				{
					HX_STACK_LINE(228)
					::zpp_nape::geom::ZPP_ConvexRayResult tmp6 = result->zpp_inner->next;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(228)
					bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(228)
					if ((tmp7)){
						HX_STACK_LINE(228)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
					}
				}
				HX_STACK_LINE(228)
				tmp5 = result->zpp_inner->toiDistance;
			}
			HX_STACK_LINE(228)
			::nape::geom::Vec2 tmp6 = ray->at(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(228)
			::nape::geom::Vec2 hit_point = tmp6;		HX_STACK_VAR(hit_point,"hit_point");
			HX_STACK_LINE(229)
			::luxe::Draw tmp7 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(230)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				::nape::geom::Vec2 tmp9 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(230)
				::nape::geom::Vec2 _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(230)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(230)
					if ((tmp10)){
						HX_STACK_LINE(230)
						tmp11 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(230)
						tmp11 = false;
					}
					HX_STACK_LINE(230)
					if ((tmp11)){
						HX_STACK_LINE(230)
						::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(230)
						::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(230)
						HX_STACK_DO_THROW(tmp13);
					}
				}
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(230)
					bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(230)
					if ((tmp10)){
						HX_STACK_LINE(230)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(230)
				tmp8 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(230)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				::nape::geom::Vec2 tmp10 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(230)
				::nape::geom::Vec2 _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(230)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(230)
					if ((tmp11)){
						HX_STACK_LINE(230)
						tmp12 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(230)
						tmp12 = false;
					}
					HX_STACK_LINE(230)
					if ((tmp12)){
						HX_STACK_LINE(230)
						::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(230)
						::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(230)
						HX_STACK_DO_THROW(tmp14);
					}
				}
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(230)
					bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(230)
					if ((tmp11)){
						HX_STACK_LINE(230)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(230)
				tmp9 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(230)
			::phoenix::Vector tmp10 = ::phoenix::Vector_obj::__new(tmp8,tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(231)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(231)
					bool tmp12 = (hit_point != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(231)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(231)
					if ((tmp12)){
						HX_STACK_LINE(231)
						tmp13 = hit_point->zpp_disp;
					}
					else{
						HX_STACK_LINE(231)
						tmp13 = false;
					}
					HX_STACK_LINE(231)
					if ((tmp13)){
						HX_STACK_LINE(231)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(231)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(231)
						HX_STACK_DO_THROW(tmp15);
					}
				}
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(231)
					::zpp_nape::geom::ZPP_Vec2 _this = hit_point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(231)
					bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(231)
					if ((tmp12)){
						HX_STACK_LINE(231)
						_this->_validate();
					}
				}
				HX_STACK_LINE(231)
				tmp11 = hit_point->zpp_inner->x;
			}
			HX_STACK_LINE(231)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(231)
					bool tmp13 = (hit_point != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(231)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(231)
					if ((tmp13)){
						HX_STACK_LINE(231)
						tmp14 = hit_point->zpp_disp;
					}
					else{
						HX_STACK_LINE(231)
						tmp14 = false;
					}
					HX_STACK_LINE(231)
					if ((tmp14)){
						HX_STACK_LINE(231)
						::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(231)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(231)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(231)
					::zpp_nape::geom::ZPP_Vec2 _this = hit_point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(231)
					bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(231)
					if ((tmp13)){
						HX_STACK_LINE(231)
						_this->_validate();
					}
				}
				HX_STACK_LINE(231)
				tmp12 = hit_point->zpp_inner->y;
			}
			HX_STACK_LINE(231)
			::phoenix::Vector tmp13 = ::phoenix::Vector_obj::__new(tmp11,tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(232)
			::phoenix::Color tmp14 = ::phoenix::Color_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp14,"tmp14");
			struct _Function_2_1{
				inline static Dynamic Block( ::phoenix::Vector &tmp13,::phoenix::Vector &tmp10,::phoenix::Color &tmp14){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Controller.hx",229,0x2da14382)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00") , tmp10,false);
						__result->Add(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00") , tmp13,false);
						__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp14,false);
						__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)1000)),false);
						__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , true,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(229)
			Dynamic tmp15 = _Function_2_1::Block(tmp13,tmp10,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(229)
			tmp7->line(tmp15);
			HX_STACK_LINE(236)
			::luxe::Draw tmp16 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(237)
			Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					bool tmp18 = (hit_point != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(237)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(237)
					if ((tmp18)){
						HX_STACK_LINE(237)
						tmp19 = hit_point->zpp_disp;
					}
					else{
						HX_STACK_LINE(237)
						tmp19 = false;
					}
					HX_STACK_LINE(237)
					if ((tmp19)){
						HX_STACK_LINE(237)
						::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(237)
						::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(237)
						HX_STACK_DO_THROW(tmp21);
					}
				}
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					::zpp_nape::geom::ZPP_Vec2 _this = hit_point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(237)
					bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(237)
					if ((tmp18)){
						HX_STACK_LINE(237)
						_this->_validate();
					}
				}
				HX_STACK_LINE(237)
				tmp17 = hit_point->zpp_inner->x;
			}
			HX_STACK_LINE(237)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					bool tmp19 = (hit_point != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(237)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(237)
					if ((tmp19)){
						HX_STACK_LINE(237)
						tmp20 = hit_point->zpp_disp;
					}
					else{
						HX_STACK_LINE(237)
						tmp20 = false;
					}
					HX_STACK_LINE(237)
					if ((tmp20)){
						HX_STACK_LINE(237)
						::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(237)
						::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(237)
						HX_STACK_DO_THROW(tmp22);
					}
				}
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					::zpp_nape::geom::ZPP_Vec2 _this = hit_point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(237)
					bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(237)
					if ((tmp19)){
						HX_STACK_LINE(237)
						_this->_validate();
					}
				}
				HX_STACK_LINE(237)
				tmp18 = hit_point->zpp_inner->y;
			}
			HX_STACK_LINE(237)
			::phoenix::Vector tmp19 = ::phoenix::Vector_obj::__new(tmp17,tmp18,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(238)
			::phoenix::Vector tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					::nape::geom::Vec2 tmp22 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(238)
					::nape::geom::Vec2 _this = tmp22;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						bool tmp23 = (_this != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(238)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(238)
						if ((tmp23)){
							HX_STACK_LINE(238)
							tmp24 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(238)
							tmp24 = false;
						}
						HX_STACK_LINE(238)
						if ((tmp24)){
							HX_STACK_LINE(238)
							::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(238)
							::String tmp26 = (tmp25 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(238)
							HX_STACK_DO_THROW(tmp26);
						}
					}
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(238)
						bool tmp23 = (_this1->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(238)
						if ((tmp23)){
							HX_STACK_LINE(238)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(238)
					tmp21 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(238)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					::nape::geom::Vec2 tmp23 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(238)
					::nape::geom::Vec2 _this = tmp23;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						bool tmp24 = (_this != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(238)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(238)
						if ((tmp24)){
							HX_STACK_LINE(238)
							tmp25 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(238)
							tmp25 = false;
						}
						HX_STACK_LINE(238)
						if ((tmp25)){
							HX_STACK_LINE(238)
							::String tmp26 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(238)
							::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(238)
							HX_STACK_DO_THROW(tmp27);
						}
					}
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(238)
						bool tmp24 = (_this1->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(238)
						if ((tmp24)){
							HX_STACK_LINE(238)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(238)
					tmp22 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(238)
				::phoenix::Vector tmp23 = ::phoenix::Vector_obj::__new(tmp21,tmp22,null(),null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(238)
				::phoenix::Vector _this = tmp23;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(238)
				::phoenix::Vector tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					Float tmp25 = ray->zpp_inner->maxdist;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(238)
					Float v = tmp25;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						Float tmp26 = (direction->x * v);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(238)
						Float _x = tmp26;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(238)
						Float tmp27 = (direction->y * v);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(238)
						Float _y = tmp27;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(238)
						Float tmp28 = (direction->z * v);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(238)
						Float _z = tmp28;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(238)
						bool prev = direction->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(238)
						direction->ignore_listeners = true;
						HX_STACK_LINE(238)
						{
							HX_STACK_LINE(238)
							direction->x = _x;
							HX_STACK_LINE(238)
							bool tmp29 = direction->_construct;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(238)
							if ((tmp29)){
								HX_STACK_LINE(238)
								direction->x;
							}
							else{
								HX_STACK_LINE(238)
								bool tmp30 = (direction->listen_x != null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(238)
								bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(238)
								if ((tmp30)){
									HX_STACK_LINE(238)
									bool tmp32 = direction->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(238)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(238)
									tmp31 = !(tmp33);
								}
								else{
									HX_STACK_LINE(238)
									tmp31 = false;
								}
								HX_STACK_LINE(238)
								if ((tmp31)){
									HX_STACK_LINE(238)
									Float tmp32 = _x;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(238)
									direction->listen_x(tmp32);
								}
								HX_STACK_LINE(238)
								direction->x;
							}
						}
						HX_STACK_LINE(238)
						{
							HX_STACK_LINE(238)
							direction->y = _y;
							HX_STACK_LINE(238)
							bool tmp29 = direction->_construct;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(238)
							if ((tmp29)){
								HX_STACK_LINE(238)
								direction->y;
							}
							else{
								HX_STACK_LINE(238)
								bool tmp30 = (direction->listen_y != null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(238)
								bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(238)
								if ((tmp30)){
									HX_STACK_LINE(238)
									bool tmp32 = direction->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(238)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(238)
									tmp31 = !(tmp33);
								}
								else{
									HX_STACK_LINE(238)
									tmp31 = false;
								}
								HX_STACK_LINE(238)
								if ((tmp31)){
									HX_STACK_LINE(238)
									Float tmp32 = _y;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(238)
									direction->listen_y(tmp32);
								}
								HX_STACK_LINE(238)
								direction->y;
							}
						}
						HX_STACK_LINE(238)
						{
							HX_STACK_LINE(238)
							direction->z = _z;
							HX_STACK_LINE(238)
							bool tmp29 = direction->_construct;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(238)
							if ((tmp29)){
								HX_STACK_LINE(238)
								direction->z;
							}
							else{
								HX_STACK_LINE(238)
								bool tmp30 = (direction->listen_z != null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(238)
								bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(238)
								if ((tmp30)){
									HX_STACK_LINE(238)
									bool tmp32 = direction->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(238)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(238)
									tmp31 = !(tmp33);
								}
								else{
									HX_STACK_LINE(238)
									tmp31 = false;
								}
								HX_STACK_LINE(238)
								if ((tmp31)){
									HX_STACK_LINE(238)
									Float tmp32 = _z;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(238)
									direction->listen_z(tmp32);
								}
								HX_STACK_LINE(238)
								direction->z;
							}
						}
						HX_STACK_LINE(238)
						direction->ignore_listeners = prev;
						HX_STACK_LINE(238)
						bool tmp29 = (direction->listen_x != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(238)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(238)
						if ((tmp29)){
							HX_STACK_LINE(238)
							bool tmp31 = direction->ignore_listeners;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(238)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(238)
							tmp30 = !(tmp32);
						}
						else{
							HX_STACK_LINE(238)
							tmp30 = false;
						}
						HX_STACK_LINE(238)
						if ((tmp30)){
							HX_STACK_LINE(238)
							Float tmp31 = direction->x;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(238)
							direction->listen_x(tmp31);
						}
						HX_STACK_LINE(238)
						bool tmp31 = (direction->listen_y != null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(238)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(238)
						if ((tmp31)){
							HX_STACK_LINE(238)
							bool tmp33 = direction->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(238)
							bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(238)
							tmp32 = !(tmp34);
						}
						else{
							HX_STACK_LINE(238)
							tmp32 = false;
						}
						HX_STACK_LINE(238)
						if ((tmp32)){
							HX_STACK_LINE(238)
							Float tmp33 = direction->y;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(238)
							direction->listen_y(tmp33);
						}
						HX_STACK_LINE(238)
						bool tmp33 = (direction->listen_z != null());		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(238)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(238)
						if ((tmp33)){
							HX_STACK_LINE(238)
							bool tmp35 = direction->ignore_listeners;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(238)
							bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(238)
							tmp34 = !(tmp36);
						}
						else{
							HX_STACK_LINE(238)
							tmp34 = false;
						}
						HX_STACK_LINE(238)
						if ((tmp34)){
							HX_STACK_LINE(238)
							Float tmp35 = direction->z;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(238)
							direction->listen_z(tmp35);
						}
						HX_STACK_LINE(238)
						direction;
					}
					HX_STACK_LINE(238)
					tmp24 = direction;
				}
				HX_STACK_LINE(238)
				::phoenix::Vector other = tmp24;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					bool tmp25 = (other == null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(238)
					if ((tmp25)){
						HX_STACK_LINE(238)
						::String tmp26 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(238)
						::luxe::DebugError tmp27 = ::luxe::DebugError_obj::null_assertion(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(238)
						HX_STACK_DO_THROW(tmp27);
					}
				}
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					Float tmp25 = (_this->x + other->x);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(238)
					Float _x = tmp25;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(238)
					Float tmp26 = (_this->y + other->y);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(238)
					Float _y = tmp26;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(238)
					Float tmp27 = (_this->z + other->z);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(238)
					Float _z = tmp27;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(238)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(238)
					_this->ignore_listeners = true;
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						_this->x = _x;
						HX_STACK_LINE(238)
						bool tmp28 = _this->_construct;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(238)
						if ((tmp28)){
							HX_STACK_LINE(238)
							_this->x;
						}
						else{
							HX_STACK_LINE(238)
							bool tmp29 = (_this->listen_x != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(238)
							bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(238)
							if ((tmp29)){
								HX_STACK_LINE(238)
								bool tmp31 = _this->ignore_listeners;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(238)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(238)
								tmp30 = !(tmp32);
							}
							else{
								HX_STACK_LINE(238)
								tmp30 = false;
							}
							HX_STACK_LINE(238)
							if ((tmp30)){
								HX_STACK_LINE(238)
								Float tmp31 = _x;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(238)
								_this->listen_x(tmp31);
							}
							HX_STACK_LINE(238)
							_this->x;
						}
					}
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						_this->y = _y;
						HX_STACK_LINE(238)
						bool tmp28 = _this->_construct;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(238)
						if ((tmp28)){
							HX_STACK_LINE(238)
							_this->y;
						}
						else{
							HX_STACK_LINE(238)
							bool tmp29 = (_this->listen_y != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(238)
							bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(238)
							if ((tmp29)){
								HX_STACK_LINE(238)
								bool tmp31 = _this->ignore_listeners;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(238)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(238)
								tmp30 = !(tmp32);
							}
							else{
								HX_STACK_LINE(238)
								tmp30 = false;
							}
							HX_STACK_LINE(238)
							if ((tmp30)){
								HX_STACK_LINE(238)
								Float tmp31 = _y;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(238)
								_this->listen_y(tmp31);
							}
							HX_STACK_LINE(238)
							_this->y;
						}
					}
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						_this->z = _z;
						HX_STACK_LINE(238)
						bool tmp28 = _this->_construct;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(238)
						if ((tmp28)){
							HX_STACK_LINE(238)
							_this->z;
						}
						else{
							HX_STACK_LINE(238)
							bool tmp29 = (_this->listen_z != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(238)
							bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(238)
							if ((tmp29)){
								HX_STACK_LINE(238)
								bool tmp31 = _this->ignore_listeners;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(238)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(238)
								tmp30 = !(tmp32);
							}
							else{
								HX_STACK_LINE(238)
								tmp30 = false;
							}
							HX_STACK_LINE(238)
							if ((tmp30)){
								HX_STACK_LINE(238)
								Float tmp31 = _z;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(238)
								_this->listen_z(tmp31);
							}
							HX_STACK_LINE(238)
							_this->z;
						}
					}
					HX_STACK_LINE(238)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(238)
					bool tmp28 = (_this->listen_x != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(238)
					bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(238)
					if ((tmp28)){
						HX_STACK_LINE(238)
						bool tmp30 = _this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(238)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(238)
						tmp29 = !(tmp31);
					}
					else{
						HX_STACK_LINE(238)
						tmp29 = false;
					}
					HX_STACK_LINE(238)
					if ((tmp29)){
						HX_STACK_LINE(238)
						Float tmp30 = _this->x;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(238)
						_this->listen_x(tmp30);
					}
					HX_STACK_LINE(238)
					bool tmp30 = (_this->listen_y != null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(238)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(238)
					if ((tmp30)){
						HX_STACK_LINE(238)
						bool tmp32 = _this->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(238)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(238)
						tmp31 = !(tmp33);
					}
					else{
						HX_STACK_LINE(238)
						tmp31 = false;
					}
					HX_STACK_LINE(238)
					if ((tmp31)){
						HX_STACK_LINE(238)
						Float tmp32 = _this->y;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(238)
						_this->listen_y(tmp32);
					}
					HX_STACK_LINE(238)
					bool tmp32 = (_this->listen_z != null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(238)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(238)
					if ((tmp32)){
						HX_STACK_LINE(238)
						bool tmp34 = _this->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(238)
						bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(238)
						tmp33 = !(tmp35);
					}
					else{
						HX_STACK_LINE(238)
						tmp33 = false;
					}
					HX_STACK_LINE(238)
					if ((tmp33)){
						HX_STACK_LINE(238)
						Float tmp34 = _this->z;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(238)
						_this->listen_z(tmp34);
					}
					HX_STACK_LINE(238)
					_this;
				}
				HX_STACK_LINE(238)
				tmp20 = _this;
			}
			HX_STACK_LINE(239)
			::phoenix::Color tmp21 = ::phoenix::Color_obj::__new((int)0,(int)1,(int)0,null());		HX_STACK_VAR(tmp21,"tmp21");
			struct _Function_2_2{
				inline static Dynamic Block( ::phoenix::Vector &tmp20,::phoenix::Vector &tmp19,::phoenix::Color &tmp21){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Controller.hx",236,0x2da14382)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00") , tmp19,false);
						__result->Add(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00") , tmp20,false);
						__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp21,false);
						__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)1000)),false);
						__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , true,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(236)
			Dynamic tmp22 = _Function_2_2::Block(tmp20,tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(236)
			tmp16->line(tmp22);
		}
		else{
			HX_STACK_LINE(246)
			::luxe::Draw tmp5 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(247)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				::nape::geom::Vec2 tmp7 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(247)
				::nape::geom::Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(247)
					bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(247)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(247)
					if ((tmp8)){
						HX_STACK_LINE(247)
						tmp9 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(247)
						tmp9 = false;
					}
					HX_STACK_LINE(247)
					if ((tmp9)){
						HX_STACK_LINE(247)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(247)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(247)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(247)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(247)
					bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(247)
					if ((tmp8)){
						HX_STACK_LINE(247)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(247)
				tmp6 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(247)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				::nape::geom::Vec2 tmp8 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(247)
				::nape::geom::Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(247)
					bool tmp9 = (_this != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(247)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(247)
					if ((tmp9)){
						HX_STACK_LINE(247)
						tmp10 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(247)
						tmp10 = false;
					}
					HX_STACK_LINE(247)
					if ((tmp10)){
						HX_STACK_LINE(247)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(247)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(247)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(247)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(247)
					bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(247)
					if ((tmp9)){
						HX_STACK_LINE(247)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(247)
				tmp7 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(247)
			::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(tmp6,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(248)
			::phoenix::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(248)
			{
				HX_STACK_LINE(248)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					::nape::geom::Vec2 tmp11 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(248)
					::nape::geom::Vec2 _this = tmp11;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						bool tmp12 = (_this != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(248)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(248)
						if ((tmp12)){
							HX_STACK_LINE(248)
							tmp13 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(248)
							tmp13 = false;
						}
						HX_STACK_LINE(248)
						if ((tmp13)){
							HX_STACK_LINE(248)
							::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(248)
							::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(248)
							HX_STACK_DO_THROW(tmp15);
						}
					}
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(248)
						bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(248)
						if ((tmp12)){
							HX_STACK_LINE(248)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(248)
					tmp10 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(248)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					::nape::geom::Vec2 tmp12 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(248)
					::nape::geom::Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						bool tmp13 = (_this != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(248)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(248)
						if ((tmp13)){
							HX_STACK_LINE(248)
							tmp14 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(248)
							tmp14 = false;
						}
						HX_STACK_LINE(248)
						if ((tmp14)){
							HX_STACK_LINE(248)
							::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(248)
							::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(248)
							HX_STACK_DO_THROW(tmp16);
						}
					}
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(248)
						bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(248)
						if ((tmp13)){
							HX_STACK_LINE(248)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(248)
					tmp11 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(248)
				::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new(tmp10,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(248)
				::phoenix::Vector _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(248)
				::phoenix::Vector tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					Float tmp14 = ray->zpp_inner->maxdist;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(248)
					Float v = tmp14;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						Float tmp15 = (direction->x * v);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(248)
						Float _x = tmp15;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(248)
						Float tmp16 = (direction->y * v);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(248)
						Float _y = tmp16;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(248)
						Float tmp17 = (direction->z * v);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(248)
						Float _z = tmp17;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(248)
						bool prev = direction->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(248)
						direction->ignore_listeners = true;
						HX_STACK_LINE(248)
						{
							HX_STACK_LINE(248)
							direction->x = _x;
							HX_STACK_LINE(248)
							bool tmp18 = direction->_construct;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(248)
							if ((tmp18)){
								HX_STACK_LINE(248)
								direction->x;
							}
							else{
								HX_STACK_LINE(248)
								bool tmp19 = (direction->listen_x != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(248)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(248)
								if ((tmp19)){
									HX_STACK_LINE(248)
									bool tmp21 = direction->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(248)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(248)
									tmp20 = !(tmp22);
								}
								else{
									HX_STACK_LINE(248)
									tmp20 = false;
								}
								HX_STACK_LINE(248)
								if ((tmp20)){
									HX_STACK_LINE(248)
									Float tmp21 = _x;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(248)
									direction->listen_x(tmp21);
								}
								HX_STACK_LINE(248)
								direction->x;
							}
						}
						HX_STACK_LINE(248)
						{
							HX_STACK_LINE(248)
							direction->y = _y;
							HX_STACK_LINE(248)
							bool tmp18 = direction->_construct;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(248)
							if ((tmp18)){
								HX_STACK_LINE(248)
								direction->y;
							}
							else{
								HX_STACK_LINE(248)
								bool tmp19 = (direction->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(248)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(248)
								if ((tmp19)){
									HX_STACK_LINE(248)
									bool tmp21 = direction->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(248)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(248)
									tmp20 = !(tmp22);
								}
								else{
									HX_STACK_LINE(248)
									tmp20 = false;
								}
								HX_STACK_LINE(248)
								if ((tmp20)){
									HX_STACK_LINE(248)
									Float tmp21 = _y;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(248)
									direction->listen_y(tmp21);
								}
								HX_STACK_LINE(248)
								direction->y;
							}
						}
						HX_STACK_LINE(248)
						{
							HX_STACK_LINE(248)
							direction->z = _z;
							HX_STACK_LINE(248)
							bool tmp18 = direction->_construct;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(248)
							if ((tmp18)){
								HX_STACK_LINE(248)
								direction->z;
							}
							else{
								HX_STACK_LINE(248)
								bool tmp19 = (direction->listen_z != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(248)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(248)
								if ((tmp19)){
									HX_STACK_LINE(248)
									bool tmp21 = direction->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(248)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(248)
									tmp20 = !(tmp22);
								}
								else{
									HX_STACK_LINE(248)
									tmp20 = false;
								}
								HX_STACK_LINE(248)
								if ((tmp20)){
									HX_STACK_LINE(248)
									Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(248)
									direction->listen_z(tmp21);
								}
								HX_STACK_LINE(248)
								direction->z;
							}
						}
						HX_STACK_LINE(248)
						direction->ignore_listeners = prev;
						HX_STACK_LINE(248)
						bool tmp18 = (direction->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(248)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(248)
						if ((tmp18)){
							HX_STACK_LINE(248)
							bool tmp20 = direction->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(248)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(248)
							tmp19 = !(tmp21);
						}
						else{
							HX_STACK_LINE(248)
							tmp19 = false;
						}
						HX_STACK_LINE(248)
						if ((tmp19)){
							HX_STACK_LINE(248)
							Float tmp20 = direction->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(248)
							direction->listen_x(tmp20);
						}
						HX_STACK_LINE(248)
						bool tmp20 = (direction->listen_y != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(248)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(248)
						if ((tmp20)){
							HX_STACK_LINE(248)
							bool tmp22 = direction->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(248)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(248)
							tmp21 = !(tmp23);
						}
						else{
							HX_STACK_LINE(248)
							tmp21 = false;
						}
						HX_STACK_LINE(248)
						if ((tmp21)){
							HX_STACK_LINE(248)
							Float tmp22 = direction->y;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(248)
							direction->listen_y(tmp22);
						}
						HX_STACK_LINE(248)
						bool tmp22 = (direction->listen_z != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(248)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(248)
						if ((tmp22)){
							HX_STACK_LINE(248)
							bool tmp24 = direction->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(248)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(248)
							tmp23 = !(tmp25);
						}
						else{
							HX_STACK_LINE(248)
							tmp23 = false;
						}
						HX_STACK_LINE(248)
						if ((tmp23)){
							HX_STACK_LINE(248)
							Float tmp24 = direction->z;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(248)
							direction->listen_z(tmp24);
						}
						HX_STACK_LINE(248)
						direction;
					}
					HX_STACK_LINE(248)
					tmp13 = direction;
				}
				HX_STACK_LINE(248)
				::phoenix::Vector other = tmp13;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					bool tmp14 = (other == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(248)
					if ((tmp14)){
						HX_STACK_LINE(248)
						::String tmp15 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(248)
						::luxe::DebugError tmp16 = ::luxe::DebugError_obj::null_assertion(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(248)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					Float tmp14 = (_this->x + other->x);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(248)
					Float _x = tmp14;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(248)
					Float tmp15 = (_this->y + other->y);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(248)
					Float _y = tmp15;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(248)
					Float tmp16 = (_this->z + other->z);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(248)
					Float _z = tmp16;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(248)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(248)
					_this->ignore_listeners = true;
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						_this->x = _x;
						HX_STACK_LINE(248)
						bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(248)
						if ((tmp17)){
							HX_STACK_LINE(248)
							_this->x;
						}
						else{
							HX_STACK_LINE(248)
							bool tmp18 = (_this->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(248)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(248)
							if ((tmp18)){
								HX_STACK_LINE(248)
								bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(248)
								bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(248)
								tmp19 = !(tmp21);
							}
							else{
								HX_STACK_LINE(248)
								tmp19 = false;
							}
							HX_STACK_LINE(248)
							if ((tmp19)){
								HX_STACK_LINE(248)
								Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(248)
								_this->listen_x(tmp20);
							}
							HX_STACK_LINE(248)
							_this->x;
						}
					}
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						_this->y = _y;
						HX_STACK_LINE(248)
						bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(248)
						if ((tmp17)){
							HX_STACK_LINE(248)
							_this->y;
						}
						else{
							HX_STACK_LINE(248)
							bool tmp18 = (_this->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(248)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(248)
							if ((tmp18)){
								HX_STACK_LINE(248)
								bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(248)
								bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(248)
								tmp19 = !(tmp21);
							}
							else{
								HX_STACK_LINE(248)
								tmp19 = false;
							}
							HX_STACK_LINE(248)
							if ((tmp19)){
								HX_STACK_LINE(248)
								Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(248)
								_this->listen_y(tmp20);
							}
							HX_STACK_LINE(248)
							_this->y;
						}
					}
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						_this->z = _z;
						HX_STACK_LINE(248)
						bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(248)
						if ((tmp17)){
							HX_STACK_LINE(248)
							_this->z;
						}
						else{
							HX_STACK_LINE(248)
							bool tmp18 = (_this->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(248)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(248)
							if ((tmp18)){
								HX_STACK_LINE(248)
								bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(248)
								bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(248)
								tmp19 = !(tmp21);
							}
							else{
								HX_STACK_LINE(248)
								tmp19 = false;
							}
							HX_STACK_LINE(248)
							if ((tmp19)){
								HX_STACK_LINE(248)
								Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(248)
								_this->listen_z(tmp20);
							}
							HX_STACK_LINE(248)
							_this->z;
						}
					}
					HX_STACK_LINE(248)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(248)
					bool tmp17 = (_this->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(248)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(248)
					if ((tmp17)){
						HX_STACK_LINE(248)
						bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(248)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(248)
						tmp18 = !(tmp20);
					}
					else{
						HX_STACK_LINE(248)
						tmp18 = false;
					}
					HX_STACK_LINE(248)
					if ((tmp18)){
						HX_STACK_LINE(248)
						Float tmp19 = _this->x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(248)
						_this->listen_x(tmp19);
					}
					HX_STACK_LINE(248)
					bool tmp19 = (_this->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(248)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(248)
					if ((tmp19)){
						HX_STACK_LINE(248)
						bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(248)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(248)
						tmp20 = !(tmp22);
					}
					else{
						HX_STACK_LINE(248)
						tmp20 = false;
					}
					HX_STACK_LINE(248)
					if ((tmp20)){
						HX_STACK_LINE(248)
						Float tmp21 = _this->y;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(248)
						_this->listen_y(tmp21);
					}
					HX_STACK_LINE(248)
					bool tmp21 = (_this->listen_z != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(248)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(248)
					if ((tmp21)){
						HX_STACK_LINE(248)
						bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(248)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(248)
						tmp22 = !(tmp24);
					}
					else{
						HX_STACK_LINE(248)
						tmp22 = false;
					}
					HX_STACK_LINE(248)
					if ((tmp22)){
						HX_STACK_LINE(248)
						Float tmp23 = _this->z;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(248)
						_this->listen_z(tmp23);
					}
					HX_STACK_LINE(248)
					_this;
				}
				HX_STACK_LINE(248)
				tmp9 = _this;
			}
			HX_STACK_LINE(249)
			::phoenix::Color tmp10 = ::phoenix::Color_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp10,"tmp10");
			struct _Function_2_1{
				inline static Dynamic Block( ::phoenix::Vector &tmp9,::phoenix::Color &tmp10,::phoenix::Vector &tmp8){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Controller.hx",246,0x2da14382)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00") , tmp8,false);
						__result->Add(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00") , tmp9,false);
						__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp10,false);
						__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)1000)),false);
						__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , true,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(246)
			Dynamic tmp11 = _Function_2_1::Block(tmp9,tmp10,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(246)
			tmp5->line(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,debug_ray,(void))

Void Controller_obj::add_movement_input( ::nape::geom::Vec2 input){
{
		HX_STACK_FRAME("Controller","add_movement_input",0x726f6dca,"Controller.add_movement_input","Controller.hx",258,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(input,"input")
		HX_STACK_LINE(258)
		this->input_vector = input;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,add_movement_input,(void))

Void Controller_obj::jump( ){
{
		HX_STACK_FRAME("Controller","jump",0xcc6b2de0,"Controller.jump","Controller.hx",262,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(263)
		bool tmp = this->grounded;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		if ((tmp1)){
			HX_STACK_LINE(263)
			return null();
		}
		HX_STACK_LINE(264)
		this->grounded = false;
		HX_STACK_LINE(265)
		this->jumped_this_frame = true;
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				::nape::phys::Body tmp3 = this->get_body();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(266)
				::nape::phys::Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(266)
				::nape::geom::Vec2 tmp4 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(266)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(266)
				if ((tmp5)){
					HX_STACK_LINE(266)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(266)
				tmp2 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(266)
			::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(266)
			Float tmp3 = this->jump_impulse;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(266)
			Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(266)
			Float y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				{
					HX_STACK_LINE(266)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(266)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(266)
					if ((tmp5)){
						HX_STACK_LINE(266)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(266)
						tmp6 = false;
					}
					HX_STACK_LINE(266)
					if ((tmp6)){
						HX_STACK_LINE(266)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(266)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(266)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(266)
				{
					HX_STACK_LINE(266)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(266)
					bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(266)
					if ((tmp5)){
						HX_STACK_LINE(266)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(266)
					bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(266)
					if ((tmp6)){
						HX_STACK_LINE(266)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(266)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(266)
				{
					HX_STACK_LINE(266)
					{
						HX_STACK_LINE(266)
						bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(266)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(266)
						if ((tmp6)){
							HX_STACK_LINE(266)
							tmp7 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(266)
							tmp7 = false;
						}
						HX_STACK_LINE(266)
						if ((tmp7)){
							HX_STACK_LINE(266)
							::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(266)
							::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(266)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(266)
					{
						HX_STACK_LINE(266)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(266)
						bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(266)
						if ((tmp6)){
							HX_STACK_LINE(266)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(266)
					tmp5 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(266)
				Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(266)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(266)
				if ((tmp7)){
					HX_STACK_LINE(266)
					bool tmp8 = (y != y);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(266)
					if ((tmp8)){
						HX_STACK_LINE(266)
						::String tmp9 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(266)
						::String tmp10 = (tmp9 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(266)
						HX_STACK_DO_THROW(tmp10);
					}
					HX_STACK_LINE(266)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(266)
					{
						HX_STACK_LINE(266)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(266)
						bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(266)
						if ((tmp9)){
							HX_STACK_LINE(266)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(266)
							_this1->_invalidate(tmp10);
						}
					}
				}
			}
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				{
					HX_STACK_LINE(266)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(266)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(266)
					if ((tmp5)){
						HX_STACK_LINE(266)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(266)
						tmp6 = false;
					}
					HX_STACK_LINE(266)
					if ((tmp6)){
						HX_STACK_LINE(266)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(266)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(266)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(266)
				{
					HX_STACK_LINE(266)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(266)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(266)
					if ((tmp5)){
						HX_STACK_LINE(266)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(266)
				_this->zpp_inner->y;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,jump,(void))

::nape::space::Space Controller_obj::get_space( ){
	HX_STACK_FRAME("Controller","get_space",0xbb52d2eb,"Controller.get_space","Controller.hx",281,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(282)
	::luxe::Physics tmp = ::Luxe_obj::physics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	::nape::space::Space tmp1 = tmp->nape->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_space,return )

::Creature Controller_obj::get_creature( ){
	HX_STACK_FRAME("Controller","get_creature",0x4af904ba,"Controller.get_creature","Controller.hx",286,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(287)
	::luxe::Entity tmp = this->get_entity();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(287)
	::Creature tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(287)
	tmp1 = hx::TCast< ::Creature >::cast(tmp);
	HX_STACK_LINE(287)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_creature,return )

::nape::phys::Body Controller_obj::get_body( ){
	HX_STACK_FRAME("Controller","get_body",0xdea4001d,"Controller.get_body","Controller.hx",291,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(292)
	::Creature tmp = this->get_creature();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	::nape::phys::Body tmp1 = tmp->body;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(292)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_body,return )

::nape::geom::AABB Controller_obj::get_bounds( ){
	HX_STACK_FRAME("Controller","get_bounds",0xdaeea0b0,"Controller.get_bounds","Controller.hx",296,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	::nape::geom::AABB tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(297)
		::nape::phys::Body tmp1 = this->get_body();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(297)
		::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(297)
		bool tmp2 = _this->zpp_inner->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(297)
		if ((tmp2)){
			HX_STACK_LINE(297)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no bounds","\x88","\xea","\xf6","\xa3"));
		}
		HX_STACK_LINE(297)
		::zpp_nape::geom::ZPP_AABB tmp3 = _this->zpp_inner->aabb;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(297)
		tmp = tmp3->wrapper();
	}
	HX_STACK_LINE(297)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_bounds,return )

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
	HX_STACK_FRAME("Controller","get_zero_friction",0x567daf56,"Controller.get_zero_friction","Controller.hx",271,0x2da14382)
	HX_STACK_LINE(272)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new((int)0,(int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_zero_friction,return )

::nape::phys::Material Controller_obj::get_normal_friction( ){
	HX_STACK_FRAME("Controller","get_normal_friction",0x18f547b7,"Controller.get_normal_friction","Controller.hx",276,0x2da14382)
	HX_STACK_LINE(277)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new((int)0,(int)4,(int)8,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_normal_friction,return )


Controller_obj::Controller_obj()
{
}

void Controller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controller);
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(max_speed,"max_speed");
	HX_MARK_MEMBER_NAME(jump_impulse,"jump_impulse");
	HX_MARK_MEMBER_NAME(friction_ground,"friction_ground");
	HX_MARK_MEMBER_NAME(friction_air,"friction_air");
	HX_MARK_MEMBER_NAME(max_slope_angle,"max_slope_angle");
	HX_MARK_MEMBER_NAME(max_slope_y,"max_slope_y");
	HX_MARK_MEMBER_NAME(creature,"creature");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(grounded,"grounded");
	HX_MARK_MEMBER_NAME(slope,"slope");
	HX_MARK_MEMBER_NAME(jumped_this_frame,"jumped_this_frame");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(input_vector,"input_vector");
	HX_MARK_MEMBER_NAME(rays_horizontal,"rays_horizontal");
	HX_MARK_MEMBER_NAME(rays_vertical,"rays_vertical");
	HX_MARK_MEMBER_NAME(skin_thickness,"skin_thickness");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Controller_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(max_speed,"max_speed");
	HX_VISIT_MEMBER_NAME(jump_impulse,"jump_impulse");
	HX_VISIT_MEMBER_NAME(friction_ground,"friction_ground");
	HX_VISIT_MEMBER_NAME(friction_air,"friction_air");
	HX_VISIT_MEMBER_NAME(max_slope_angle,"max_slope_angle");
	HX_VISIT_MEMBER_NAME(max_slope_y,"max_slope_y");
	HX_VISIT_MEMBER_NAME(creature,"creature");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(grounded,"grounded");
	HX_VISIT_MEMBER_NAME(slope,"slope");
	HX_VISIT_MEMBER_NAME(jumped_this_frame,"jumped_this_frame");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(input_vector,"input_vector");
	HX_VISIT_MEMBER_NAME(rays_horizontal,"rays_horizontal");
	HX_VISIT_MEMBER_NAME(rays_vertical,"rays_vertical");
	HX_VISIT_MEMBER_NAME(skin_thickness,"skin_thickness");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Controller_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return inCallProp == hx::paccAlways ? get_body() : body; }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slope") ) { return slope; }
		if (HX_FIELD_EQ(inName,"space") ) { return inCallProp == hx::paccAlways ? get_space() : space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return inCallProp == hx::paccAlways ? get_bounds() : bounds; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return gravity; }
		if (HX_FIELD_EQ(inName,"onadded") ) { return onadded_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"creature") ) { return inCallProp == hx::paccAlways ? get_creature() : creature; }
		if (HX_FIELD_EQ(inName,"grounded") ) { return grounded; }
		if (HX_FIELD_EQ(inName,"get_body") ) { return get_body_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_speed") ) { return max_speed; }
		if (HX_FIELD_EQ(inName,"debug_ray") ) { return debug_ray_dyn(); }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"max_slope_y") ) { return max_slope_y; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"jump_impulse") ) { return jump_impulse; }
		if (HX_FIELD_EQ(inName,"friction_air") ) { return friction_air; }
		if (HX_FIELD_EQ(inName,"input_vector") ) { return input_vector; }
		if (HX_FIELD_EQ(inName,"get_creature") ) { return get_creature_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rays_vertical") ) { return rays_vertical; }
		if (HX_FIELD_EQ(inName,"slope_raycast") ) { return slope_raycast_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"skin_thickness") ) { return skin_thickness; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"friction_ground") ) { return friction_ground; }
		if (HX_FIELD_EQ(inName,"max_slope_angle") ) { return max_slope_angle; }
		if (HX_FIELD_EQ(inName,"rays_horizontal") ) { return rays_horizontal; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"raycast_vertical") ) { return raycast_vertical_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"jumped_this_frame") ) { return jumped_this_frame; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"raycast_horizontal") ) { return raycast_horizontal_dyn(); }
		if (HX_FIELD_EQ(inName,"add_movement_input") ) { return add_movement_input_dyn(); }
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
		if (HX_FIELD_EQ(inName,"slope") ) { slope=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::nape::geom::AABB >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"creature") ) { creature=inValue.Cast< ::Creature >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grounded") ) { grounded=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_speed") ) { max_speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"max_slope_y") ) { max_slope_y=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jump_impulse") ) { jump_impulse=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"friction_air") ) { friction_air=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input_vector") ) { input_vector=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rays_vertical") ) { rays_vertical=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"skin_thickness") ) { skin_thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"friction_ground") ) { friction_ground=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_slope_angle") ) { max_slope_angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rays_horizontal") ) { rays_horizontal=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"jumped_this_frame") ) { jumped_this_frame=inValue.Cast< bool >(); return inValue; }
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
	outFields->push(HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"));
	outFields->push(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"));
	outFields->push(HX_HCSTRING("max_speed","\x6c","\x7c","\x47","\x78"));
	outFields->push(HX_HCSTRING("jump_impulse","\x24","\x0d","\xb3","\xef"));
	outFields->push(HX_HCSTRING("friction_ground","\x6c","\x2e","\xb8","\xee"));
	outFields->push(HX_HCSTRING("friction_air","\x85","\xb9","\x27","\xf7"));
	outFields->push(HX_HCSTRING("max_slope_angle","\x24","\xb9","\xe8","\x51"));
	outFields->push(HX_HCSTRING("max_slope_y","\x4a","\x39","\x4b","\xe6"));
	outFields->push(HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c"));
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("grounded","\xa6","\x6a","\x5b","\x90"));
	outFields->push(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"));
	outFields->push(HX_HCSTRING("jumped_this_frame","\xbe","\x41","\x42","\xdd"));
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	outFields->push(HX_HCSTRING("input_vector","\x98","\xf3","\xaf","\xd0"));
	outFields->push(HX_HCSTRING("rays_horizontal","\x5a","\x15","\x01","\x85"));
	outFields->push(HX_HCSTRING("rays_vertical","\x6c","\xab","\x80","\xf5"));
	outFields->push(HX_HCSTRING("skin_thickness","\xf2","\x61","\x70","\xa8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Controller_obj,gravity),HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77")},
	{hx::fsFloat,(int)offsetof(Controller_obj,acceleration),HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")},
	{hx::fsFloat,(int)offsetof(Controller_obj,max_speed),HX_HCSTRING("max_speed","\x6c","\x7c","\x47","\x78")},
	{hx::fsFloat,(int)offsetof(Controller_obj,jump_impulse),HX_HCSTRING("jump_impulse","\x24","\x0d","\xb3","\xef")},
	{hx::fsFloat,(int)offsetof(Controller_obj,friction_ground),HX_HCSTRING("friction_ground","\x6c","\x2e","\xb8","\xee")},
	{hx::fsFloat,(int)offsetof(Controller_obj,friction_air),HX_HCSTRING("friction_air","\x85","\xb9","\x27","\xf7")},
	{hx::fsFloat,(int)offsetof(Controller_obj,max_slope_angle),HX_HCSTRING("max_slope_angle","\x24","\xb9","\xe8","\x51")},
	{hx::fsFloat,(int)offsetof(Controller_obj,max_slope_y),HX_HCSTRING("max_slope_y","\x4a","\x39","\x4b","\xe6")},
	{hx::fsObject /*::Creature*/ ,(int)offsetof(Controller_obj,creature),HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c")},
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(Controller_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{hx::fsObject /*::nape::geom::AABB*/ ,(int)offsetof(Controller_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsBool,(int)offsetof(Controller_obj,grounded),HX_HCSTRING("grounded","\xa6","\x6a","\x5b","\x90")},
	{hx::fsBool,(int)offsetof(Controller_obj,slope),HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e")},
	{hx::fsBool,(int)offsetof(Controller_obj,jumped_this_frame),HX_HCSTRING("jumped_this_frame","\xbe","\x41","\x42","\xdd")},
	{hx::fsObject /*::nape::space::Space*/ ,(int)offsetof(Controller_obj,space),HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(Controller_obj,input_vector),HX_HCSTRING("input_vector","\x98","\xf3","\xaf","\xd0")},
	{hx::fsInt,(int)offsetof(Controller_obj,rays_horizontal),HX_HCSTRING("rays_horizontal","\x5a","\x15","\x01","\x85")},
	{hx::fsInt,(int)offsetof(Controller_obj,rays_vertical),HX_HCSTRING("rays_vertical","\x6c","\xab","\x80","\xf5")},
	{hx::fsFloat,(int)offsetof(Controller_obj,skin_thickness),HX_HCSTRING("skin_thickness","\xf2","\x61","\x70","\xa8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Material*/ ,(void *) &Controller_obj::zero_friction,HX_HCSTRING("zero_friction","\x31","\x3c","\xf7","\xd0")},
	{hx::fsObject /*::nape::phys::Material*/ ,(void *) &Controller_obj::normal_friction,HX_HCSTRING("normal_friction","\x52","\x01","\x90","\x4e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"),
	HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),
	HX_HCSTRING("max_speed","\x6c","\x7c","\x47","\x78"),
	HX_HCSTRING("jump_impulse","\x24","\x0d","\xb3","\xef"),
	HX_HCSTRING("friction_ground","\x6c","\x2e","\xb8","\xee"),
	HX_HCSTRING("friction_air","\x85","\xb9","\x27","\xf7"),
	HX_HCSTRING("max_slope_angle","\x24","\xb9","\xe8","\x51"),
	HX_HCSTRING("max_slope_y","\x4a","\x39","\x4b","\xe6"),
	HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c"),
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("grounded","\xa6","\x6a","\x5b","\x90"),
	HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"),
	HX_HCSTRING("jumped_this_frame","\xbe","\x41","\x42","\xdd"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("input_vector","\x98","\xf3","\xaf","\xd0"),
	HX_HCSTRING("rays_horizontal","\x5a","\x15","\x01","\x85"),
	HX_HCSTRING("rays_vertical","\x6c","\xab","\x80","\xf5"),
	HX_HCSTRING("skin_thickness","\xf2","\x61","\x70","\xa8"),
	HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("raycast_horizontal","\xfa","\x96","\x25","\x5e"),
	HX_HCSTRING("raycast_vertical","\x0c","\x85","\x03","\xc5"),
	HX_HCSTRING("slope_raycast","\x55","\x8b","\x99","\xc0"),
	HX_HCSTRING("debug_ray","\xbe","\x92","\x94","\x37"),
	HX_HCSTRING("add_movement_input","\x58","\x01","\xeb","\xbd"),
	HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),
	HX_HCSTRING("get_space","\x1d","\xe9","\x0f","\xc5"),
	HX_HCSTRING("get_creature","\xc8","\x59","\x1a","\xe1"),
	HX_HCSTRING("get_body","\x2b","\x36","\xd6","\xc0"),
	HX_HCSTRING("get_bounds","\x3e","\xf6","\xa4","\x56"),
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

