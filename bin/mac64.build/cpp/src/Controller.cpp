#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
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
	HX_STACK_LINE(42)
	this->skin_thickness = ((Float)0.5);
	HX_STACK_LINE(41)
	this->rays_vertical = (int)3;
	HX_STACK_LINE(40)
	this->rays_horizontal = (int)2;
	HX_STACK_LINE(39)
	this->input_vector = ::nape::geom::Vec2_obj::__new(null(),null());
	HX_STACK_LINE(36)
	this->slope = false;
	HX_STACK_LINE(35)
	this->grounded = false;
	HX_STACK_LINE(46)
	super::__construct(null());
	HX_STACK_LINE(48)
	this->name = HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04");
	HX_STACK_LINE(50)
	this->gravity = (int)512;
	HX_STACK_LINE(51)
	this->acceleration = (int)1024;
	HX_STACK_LINE(52)
	this->max_speed = (int)128;
	HX_STACK_LINE(53)
	this->jump_impulse = (int)128;
	HX_STACK_LINE(54)
	this->max_slope_angle = (int)70;
	HX_STACK_LINE(55)
	Float tmp = this->max_slope_angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	Float tmp1 = (tmp * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
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
		HX_STACK_FRAME("Controller","onadded",0xee193d8f,"Controller.onadded","Controller.hx",59,0x2da14382)
		HX_STACK_THIS(this)
	}
return null();
}


Void Controller_obj::update( Float dt){
{
		HX_STACK_FRAME("Controller","update",0x9ee88f7b,"Controller.update","Controller.hx",63,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(64)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			::nape::geom::Vec2 tmp1 = this->input_vector;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(64)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(64)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(64)
				if ((tmp2)){
					HX_STACK_LINE(64)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(64)
					tmp3 = false;
				}
				HX_STACK_LINE(64)
				if ((tmp3)){
					HX_STACK_LINE(64)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(64)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(64)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(64)
				bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(64)
				if ((tmp2)){
					HX_STACK_LINE(64)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(64)
			tmp = _this->zpp_inner->x;
		}
		HX_STACK_LINE(64)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		if ((tmp2)){
			HX_STACK_LINE(66)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				::nape::phys::Body tmp4 = this->get_body();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(66)
				::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(66)
				::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(66)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(66)
				if ((tmp6)){
					HX_STACK_LINE(66)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(66)
				tmp3 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(66)
			::nape::geom::Vec2 _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					bool tmp5 = (_g != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(66)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(66)
					if ((tmp5)){
						HX_STACK_LINE(66)
						tmp6 = _g->zpp_disp;
					}
					else{
						HX_STACK_LINE(66)
						tmp6 = false;
					}
					HX_STACK_LINE(66)
					if ((tmp6)){
						HX_STACK_LINE(66)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(66)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(66)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(66)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(66)
						if ((tmp7)){
							HX_STACK_LINE(66)
							_this->_validate();
						}
					}
					HX_STACK_LINE(66)
					tmp4 = _g->zpp_inner->x;
				}
				HX_STACK_LINE(66)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					::nape::geom::Vec2 tmp6 = this->input_vector;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(66)
					::nape::geom::Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(66)
					bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(66)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(66)
					if ((tmp7)){
						HX_STACK_LINE(66)
						tmp8 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(66)
						tmp8 = false;
					}
					HX_STACK_LINE(66)
					if ((tmp8)){
						HX_STACK_LINE(66)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(66)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(66)
						HX_STACK_DO_THROW(tmp10);
					}
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(66)
						bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(66)
						if ((tmp9)){
							HX_STACK_LINE(66)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(66)
					tmp5 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(66)
				Float tmp6 = this->acceleration;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(66)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(66)
				Float tmp8 = dt;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(66)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(66)
				Float tmp10 = (tmp4 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(66)
				Float x = tmp10;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						bool tmp11 = (_g != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(66)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(66)
						if ((tmp11)){
							HX_STACK_LINE(66)
							tmp12 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(66)
							tmp12 = false;
						}
						HX_STACK_LINE(66)
						if ((tmp12)){
							HX_STACK_LINE(66)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(66)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(66)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(66)
						bool tmp11 = _this->_immutable;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(66)
						if ((tmp11)){
							HX_STACK_LINE(66)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(66)
						bool tmp12 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(66)
						if ((tmp12)){
							HX_STACK_LINE(66)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(66)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						{
							HX_STACK_LINE(66)
							bool tmp12 = (_g != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(66)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(66)
							if ((tmp12)){
								HX_STACK_LINE(66)
								tmp13 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(66)
								tmp13 = false;
							}
							HX_STACK_LINE(66)
							if ((tmp13)){
								HX_STACK_LINE(66)
								::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(66)
								::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(66)
								HX_STACK_DO_THROW(tmp15);
							}
						}
						HX_STACK_LINE(66)
						{
							HX_STACK_LINE(66)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(66)
							bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(66)
							if ((tmp12)){
								HX_STACK_LINE(66)
								_this->_validate();
							}
						}
						HX_STACK_LINE(66)
						tmp11 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(66)
					Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(66)
					bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(66)
					if ((tmp13)){
						HX_STACK_LINE(66)
						bool tmp14 = (x != x);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(66)
						if ((tmp14)){
							HX_STACK_LINE(66)
							::String tmp15 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(66)
							::String tmp16 = (tmp15 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(66)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(66)
						_g->zpp_inner->x = x;
						HX_STACK_LINE(66)
						{
							HX_STACK_LINE(66)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(66)
							bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(66)
							if ((tmp15)){
								HX_STACK_LINE(66)
								::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(66)
								_this->_invalidate(tmp16);
							}
						}
					}
				}
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						bool tmp11 = (_g != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(66)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(66)
						if ((tmp11)){
							HX_STACK_LINE(66)
							tmp12 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(66)
							tmp12 = false;
						}
						HX_STACK_LINE(66)
						if ((tmp12)){
							HX_STACK_LINE(66)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(66)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(66)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(66)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(66)
						if ((tmp11)){
							HX_STACK_LINE(66)
							_this->_validate();
						}
					}
					HX_STACK_LINE(66)
					_g->zpp_inner->x;
				}
			}
		}
		else{
			HX_STACK_LINE(70)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::nape::phys::Body tmp4 = this->get_body();		HX_STACK_VAR(tmp4,"tmp4");
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
				tmp3 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(70)
			::nape::geom::Vec2 _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					bool tmp5 = (_g != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(70)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(70)
					if ((tmp5)){
						HX_STACK_LINE(70)
						tmp6 = _g->zpp_disp;
					}
					else{
						HX_STACK_LINE(70)
						tmp6 = false;
					}
					HX_STACK_LINE(70)
					if ((tmp6)){
						HX_STACK_LINE(70)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(70)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(70)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(70)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(70)
						if ((tmp7)){
							HX_STACK_LINE(70)
							_this->_validate();
						}
					}
					HX_STACK_LINE(70)
					tmp4 = _g->zpp_inner->x;
				}
				HX_STACK_LINE(70)
				Float tmp5 = (tmp4 * ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				Float x = tmp5;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						bool tmp6 = (_g != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(70)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(70)
						if ((tmp6)){
							HX_STACK_LINE(70)
							tmp7 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(70)
							tmp7 = false;
						}
						HX_STACK_LINE(70)
						if ((tmp7)){
							HX_STACK_LINE(70)
							::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(70)
							::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(70)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(70)
						bool tmp6 = _this->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(70)
						if ((tmp6)){
							HX_STACK_LINE(70)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(70)
						bool tmp7 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(70)
						if ((tmp7)){
							HX_STACK_LINE(70)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(70)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						{
							HX_STACK_LINE(70)
							bool tmp7 = (_g != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(70)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(70)
							if ((tmp7)){
								HX_STACK_LINE(70)
								tmp8 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(70)
								tmp8 = false;
							}
							HX_STACK_LINE(70)
							if ((tmp8)){
								HX_STACK_LINE(70)
								::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(70)
								::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(70)
								HX_STACK_DO_THROW(tmp10);
							}
						}
						HX_STACK_LINE(70)
						{
							HX_STACK_LINE(70)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(70)
							bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(70)
							if ((tmp7)){
								HX_STACK_LINE(70)
								_this->_validate();
							}
						}
						HX_STACK_LINE(70)
						tmp6 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(70)
					Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(70)
					bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(70)
					if ((tmp8)){
						HX_STACK_LINE(70)
						bool tmp9 = (x != x);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(70)
						if ((tmp9)){
							HX_STACK_LINE(70)
							::String tmp10 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(70)
							::String tmp11 = (tmp10 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(70)
							HX_STACK_DO_THROW(tmp11);
						}
						HX_STACK_LINE(70)
						_g->zpp_inner->x = x;
						HX_STACK_LINE(70)
						{
							HX_STACK_LINE(70)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(70)
							bool tmp10 = (_this->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(70)
							if ((tmp10)){
								HX_STACK_LINE(70)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = _this;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(70)
								_this->_invalidate(tmp11);
							}
						}
					}
				}
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						bool tmp6 = (_g != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(70)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(70)
						if ((tmp6)){
							HX_STACK_LINE(70)
							tmp7 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(70)
							tmp7 = false;
						}
						HX_STACK_LINE(70)
						if ((tmp7)){
							HX_STACK_LINE(70)
							::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(70)
							::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(70)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(70)
						bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(70)
						if ((tmp6)){
							HX_STACK_LINE(70)
							_this->_validate();
						}
					}
					HX_STACK_LINE(70)
					_g->zpp_inner->x;
				}
			}
		}
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				::nape::phys::Body tmp4 = this->get_body();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(72)
				::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(72)
				::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(72)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(72)
				if ((tmp6)){
					HX_STACK_LINE(72)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(72)
				tmp3 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(72)
			::nape::geom::Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(72)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(72)
				{
					HX_STACK_LINE(72)
					::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						::nape::phys::Body tmp7 = this->get_body();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(72)
						::nape::phys::Body _this1 = tmp7;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(72)
						::nape::geom::Vec2 tmp8 = _this1->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(72)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(72)
						if ((tmp9)){
							HX_STACK_LINE(72)
							_this1->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(72)
						tmp6 = _this1->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(72)
					::nape::geom::Vec2 _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(72)
					bool tmp7 = (_this1 != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(72)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(72)
					if ((tmp7)){
						HX_STACK_LINE(72)
						tmp8 = _this1->zpp_disp;
					}
					else{
						HX_STACK_LINE(72)
						tmp8 = false;
					}
					HX_STACK_LINE(72)
					if ((tmp8)){
						HX_STACK_LINE(72)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(72)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(72)
						HX_STACK_DO_THROW(tmp10);
					}
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(72)
						bool tmp9 = (_this2->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(72)
						if ((tmp9)){
							HX_STACK_LINE(72)
							_this2->_validate();
						}
					}
					HX_STACK_LINE(72)
					tmp5 = _this1->zpp_inner->x;
				}
				HX_STACK_LINE(72)
				Float value = tmp5;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(72)
				Float tmp6 = this->max_speed;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(72)
				Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(72)
				Float a = tmp7;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(72)
				Float tmp8 = this->max_speed;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(72)
				Float b = tmp8;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(72)
				bool tmp9 = (value < a);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(72)
				if ((tmp9)){
					HX_STACK_LINE(72)
					tmp4 = a;
				}
				else{
					HX_STACK_LINE(72)
					bool tmp10 = (value > b);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(72)
					if ((tmp10)){
						HX_STACK_LINE(72)
						tmp4 = b;
					}
					else{
						HX_STACK_LINE(72)
						tmp4 = value;
					}
				}
			}
			HX_STACK_LINE(72)
			Float x = tmp4;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				{
					HX_STACK_LINE(72)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(72)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(72)
					if ((tmp5)){
						HX_STACK_LINE(72)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(72)
						tmp6 = false;
					}
					HX_STACK_LINE(72)
					if ((tmp6)){
						HX_STACK_LINE(72)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(72)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(72)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(72)
				{
					HX_STACK_LINE(72)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(72)
					bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(72)
					if ((tmp5)){
						HX_STACK_LINE(72)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(72)
					bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(72)
					if ((tmp6)){
						HX_STACK_LINE(72)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(72)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(72)
				{
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(72)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(72)
						if ((tmp6)){
							HX_STACK_LINE(72)
							tmp7 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(72)
							tmp7 = false;
						}
						HX_STACK_LINE(72)
						if ((tmp7)){
							HX_STACK_LINE(72)
							::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(72)
							::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(72)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(72)
						bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(72)
						if ((tmp6)){
							HX_STACK_LINE(72)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(72)
					tmp5 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(72)
				Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(72)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(72)
				if ((tmp7)){
					HX_STACK_LINE(72)
					bool tmp8 = (x != x);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(72)
					if ((tmp8)){
						HX_STACK_LINE(72)
						::String tmp9 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(72)
						::String tmp10 = (tmp9 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(72)
						HX_STACK_DO_THROW(tmp10);
					}
					HX_STACK_LINE(72)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(72)
						bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(72)
						if ((tmp9)){
							HX_STACK_LINE(72)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(72)
							_this1->_invalidate(tmp10);
						}
					}
				}
			}
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				{
					HX_STACK_LINE(72)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(72)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(72)
					if ((tmp5)){
						HX_STACK_LINE(72)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(72)
						tmp6 = false;
					}
					HX_STACK_LINE(72)
					if ((tmp6)){
						HX_STACK_LINE(72)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(72)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(72)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(72)
				{
					HX_STACK_LINE(72)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(72)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(72)
					if ((tmp5)){
						HX_STACK_LINE(72)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(72)
				_this->zpp_inner->x;
			}
		}
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				::nape::phys::Body tmp4 = this->get_body();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(73)
				::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				if ((tmp6)){
					HX_STACK_LINE(73)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(73)
				tmp3 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(73)
			::nape::geom::Vec2 _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					bool tmp5 = (_g != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(73)
					if ((tmp5)){
						HX_STACK_LINE(73)
						tmp6 = _g->zpp_disp;
					}
					else{
						HX_STACK_LINE(73)
						tmp6 = false;
					}
					HX_STACK_LINE(73)
					if ((tmp6)){
						HX_STACK_LINE(73)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(73)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(73)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(73)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(73)
						if ((tmp7)){
							HX_STACK_LINE(73)
							_this->_validate();
						}
					}
					HX_STACK_LINE(73)
					tmp4 = _g->zpp_inner->y;
				}
				HX_STACK_LINE(73)
				Float tmp5 = this->gravity;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				Float tmp6 = dt;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				Float y = tmp8;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						bool tmp9 = (_g != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						if ((tmp9)){
							HX_STACK_LINE(73)
							tmp10 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(73)
							tmp10 = false;
						}
						HX_STACK_LINE(73)
						if ((tmp10)){
							HX_STACK_LINE(73)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(73)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(73)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(73)
						bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						if ((tmp9)){
							HX_STACK_LINE(73)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(73)
						bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						if ((tmp10)){
							HX_STACK_LINE(73)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(73)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							bool tmp10 = (_g != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(73)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(73)
							if ((tmp10)){
								HX_STACK_LINE(73)
								tmp11 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(73)
								tmp11 = false;
							}
							HX_STACK_LINE(73)
							if ((tmp11)){
								HX_STACK_LINE(73)
								::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(73)
								::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(73)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(73)
							bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(73)
							if ((tmp10)){
								HX_STACK_LINE(73)
								_this->_validate();
							}
						}
						HX_STACK_LINE(73)
						tmp9 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(73)
					Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(73)
					bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(73)
					if ((tmp11)){
						HX_STACK_LINE(73)
						bool tmp12 = (y != y);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(73)
						if ((tmp12)){
							HX_STACK_LINE(73)
							::String tmp13 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(73)
							::String tmp14 = (tmp13 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(73)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(73)
						_g->zpp_inner->y = y;
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(73)
							bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(73)
							if ((tmp13)){
								HX_STACK_LINE(73)
								::zpp_nape::geom::ZPP_Vec2 tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(73)
								_this->_invalidate(tmp14);
							}
						}
					}
				}
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						bool tmp9 = (_g != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						if ((tmp9)){
							HX_STACK_LINE(73)
							tmp10 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(73)
							tmp10 = false;
						}
						HX_STACK_LINE(73)
						if ((tmp10)){
							HX_STACK_LINE(73)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(73)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(73)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(73)
						bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						if ((tmp9)){
							HX_STACK_LINE(73)
							_this->_validate();
						}
					}
					HX_STACK_LINE(73)
					_g->zpp_inner->y;
				}
			}
		}
		HX_STACK_LINE(74)
		::nape::geom::Vec2 tmp3 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		this->input_vector = tmp3;
		HX_STACK_LINE(76)
		Float tmp4 = dt;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		this->slope_raycast(tmp4);
		HX_STACK_LINE(77)
		Float tmp5 = dt;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		this->raycast_horizontal(tmp5);
		HX_STACK_LINE(78)
		Float tmp6 = dt;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		this->raycast_vertical(tmp6);
	}
return null();
}


Void Controller_obj::raycast_horizontal( Float dt){
{
		HX_STACK_FRAME("Controller","raycast_horizontal",0x12aa036c,"Controller.raycast_horizontal","Controller.hx",82,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(84)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			::nape::phys::Body tmp1 = this->get_body();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(84)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(84)
			::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			if ((tmp3)){
				HX_STACK_LINE(84)
				_this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(84)
			tmp = _this->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(84)
		Float tmp1 = dt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		::nape::geom::Vec2 tmp2 = tmp->mul(tmp1,false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		::nape::geom::Vec2 movement_delta = tmp2;		HX_STACK_VAR(movement_delta,"movement_delta");
		HX_STACK_LINE(86)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				bool tmp4 = (movement_delta != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(86)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(86)
				if ((tmp4)){
					HX_STACK_LINE(86)
					tmp5 = movement_delta->zpp_disp;
				}
				else{
					HX_STACK_LINE(86)
					tmp5 = false;
				}
				HX_STACK_LINE(86)
				if ((tmp5)){
					HX_STACK_LINE(86)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(86)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(86)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(86)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(86)
				if ((tmp4)){
					HX_STACK_LINE(86)
					_this->_validate();
				}
			}
			HX_STACK_LINE(86)
			tmp3 = movement_delta->zpp_inner->x;
		}
		HX_STACK_LINE(86)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		if ((tmp4)){
			HX_STACK_LINE(86)
			return null();
		}
		HX_STACK_LINE(89)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			::nape::geom::AABB tmp6 = this->get_bounds();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			::nape::geom::AABB _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(89)
				bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(89)
				if ((tmp7)){
					HX_STACK_LINE(89)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(89)
			tmp5 = _this->zpp_inner->minx;
		}
		HX_STACK_LINE(89)
		Float tmp6 = this->skin_thickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(89)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			::nape::geom::AABB tmp9 = this->get_bounds();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(89)
			::nape::geom::AABB _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(89)
				bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(89)
				if ((tmp10)){
					HX_STACK_LINE(89)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(89)
			tmp8 = _this->zpp_inner->miny;
		}
		HX_STACK_LINE(89)
		Float tmp9 = this->skin_thickness;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(89)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(90)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			::nape::geom::AABB tmp12 = this->get_bounds();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(90)
			::nape::geom::AABB _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(90)
				bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(90)
				if ((tmp13)){
					HX_STACK_LINE(90)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(90)
				tmp11 = (_this1->maxx - _this1->minx);
			}
		}
		HX_STACK_LINE(90)
		Float tmp12 = this->skin_thickness;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(90)
		Float tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(90)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(90)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			::nape::geom::AABB tmp16 = this->get_bounds();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(90)
			::nape::geom::AABB _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(90)
				bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(90)
				if ((tmp17)){
					HX_STACK_LINE(90)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(90)
				tmp15 = (_this1->maxy - _this1->miny);
			}
		}
		HX_STACK_LINE(90)
		Float tmp16 = this->skin_thickness;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(90)
		Float tmp17 = (tmp16 * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(90)
		Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(88)
		::nape::geom::AABB tmp19 = ::nape::geom::AABB_obj::__new(tmp7,tmp10,tmp14,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(88)
		::nape::geom::AABB skin_bounds = tmp19;		HX_STACK_VAR(skin_bounds,"skin_bounds");
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(92)
			int tmp20 = this->rays_vertical;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(92)
			int _g = tmp20;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(92)
			while((true)){
				HX_STACK_LINE(92)
				bool tmp21 = (_g1 < _g);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(92)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(92)
				if ((tmp22)){
					HX_STACK_LINE(92)
					break;
				}
				HX_STACK_LINE(92)
				int tmp23 = (_g1)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(92)
				int y = tmp23;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(94)
				bool tmp24 = (y == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(94)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(94)
				if ((tmp24)){
					HX_STACK_LINE(94)
					tmp25 = this->slope;
				}
				else{
					HX_STACK_LINE(94)
					tmp25 = false;
				}
				HX_STACK_LINE(94)
				if ((tmp25)){
					HX_STACK_LINE(94)
					continue;
				}
				HX_STACK_LINE(96)
				::nape::geom::Vec2 tmp26 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(96)
				::nape::geom::Vec2 ray_origin = tmp26;		HX_STACK_VAR(ray_origin,"ray_origin");
				HX_STACK_LINE(98)
				int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(98)
				{
					HX_STACK_LINE(98)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(98)
					{
						HX_STACK_LINE(98)
						bool tmp29 = (movement_delta != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(98)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(98)
						if ((tmp29)){
							HX_STACK_LINE(98)
							tmp30 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(98)
							tmp30 = false;
						}
						HX_STACK_LINE(98)
						if ((tmp30)){
							HX_STACK_LINE(98)
							::String tmp31 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(98)
							::String tmp32 = (tmp31 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(98)
							HX_STACK_DO_THROW(tmp32);
						}
						HX_STACK_LINE(98)
						{
							HX_STACK_LINE(98)
							::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(98)
							bool tmp31 = (_this->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(98)
							if ((tmp31)){
								HX_STACK_LINE(98)
								_this->_validate();
							}
						}
						HX_STACK_LINE(98)
						tmp28 = movement_delta->zpp_inner->x;
					}
					HX_STACK_LINE(98)
					Float x = tmp28;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(98)
					bool tmp29 = (x >= (int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(98)
					if ((tmp29)){
						HX_STACK_LINE(98)
						tmp27 = (int)1;
					}
					else{
						HX_STACK_LINE(98)
						tmp27 = (int)-1;
					}
				}
				HX_STACK_LINE(98)
				int ray_direction = tmp27;		HX_STACK_VAR(ray_direction,"ray_direction");
				HX_STACK_LINE(100)
				Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(100)
				{
					HX_STACK_LINE(100)
					{
						HX_STACK_LINE(100)
						bool tmp29 = (movement_delta != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(100)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(100)
						if ((tmp29)){
							HX_STACK_LINE(100)
							tmp30 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(100)
							tmp30 = false;
						}
						HX_STACK_LINE(100)
						if ((tmp30)){
							HX_STACK_LINE(100)
							::String tmp31 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(100)
							::String tmp32 = (tmp31 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(100)
							HX_STACK_DO_THROW(tmp32);
						}
					}
					HX_STACK_LINE(100)
					{
						HX_STACK_LINE(100)
						::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(100)
						bool tmp29 = (_this->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(100)
						if ((tmp29)){
							HX_STACK_LINE(100)
							_this->_validate();
						}
					}
					HX_STACK_LINE(100)
					tmp28 = movement_delta->zpp_inner->x;
				}
				HX_STACK_LINE(100)
				bool tmp29 = (tmp28 > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(100)
				if ((tmp29)){
					HX_STACK_LINE(102)
					Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						::nape::geom::Vec2 tmp31 = skin_bounds->zpp_inner->getmin();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(102)
						::nape::geom::Vec2 _this = tmp31;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							bool tmp32 = (_this != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(102)
							bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(102)
							if ((tmp32)){
								HX_STACK_LINE(102)
								tmp33 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(102)
								tmp33 = false;
							}
							HX_STACK_LINE(102)
							if ((tmp33)){
								HX_STACK_LINE(102)
								::String tmp34 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(102)
								::String tmp35 = (tmp34 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(102)
								HX_STACK_DO_THROW(tmp35);
							}
						}
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(102)
							bool tmp32 = (_this1->_validate != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(102)
							if ((tmp32)){
								HX_STACK_LINE(102)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(102)
						tmp30 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(102)
					Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						::nape::geom::Vec2 tmp32 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(102)
						::nape::geom::Vec2 _this = tmp32;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							bool tmp33 = (_this != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(102)
							bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(102)
							if ((tmp33)){
								HX_STACK_LINE(102)
								tmp34 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(102)
								tmp34 = false;
							}
							HX_STACK_LINE(102)
							if ((tmp34)){
								HX_STACK_LINE(102)
								::String tmp35 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(102)
								::String tmp36 = (tmp35 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(102)
								HX_STACK_DO_THROW(tmp36);
							}
						}
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(102)
							bool tmp33 = (_this1->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(102)
							if ((tmp33)){
								HX_STACK_LINE(102)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(102)
						tmp31 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(102)
					Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(102)
							bool tmp33 = (_this->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(102)
							if ((tmp33)){
								HX_STACK_LINE(102)
								_this->_validate();
							}
						}
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(102)
							tmp32 = (_this->maxy - _this->miny);
						}
					}
					HX_STACK_LINE(102)
					int tmp33 = this->rays_vertical;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(102)
					int tmp34 = (tmp33 - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(102)
					Float tmp35 = (Float(tmp32) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(102)
					int tmp36 = y;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(102)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(102)
					Float tmp38 = (tmp31 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(102)
					::nape::geom::Vec2 tmp39 = ::nape::geom::Vec2_obj::__new(tmp30,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(102)
					ray_origin = tmp39;
				}
				else{
					HX_STACK_LINE(106)
					Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(106)
					{
						HX_STACK_LINE(106)
						::nape::geom::Vec2 tmp31 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(106)
						::nape::geom::Vec2 _this = tmp31;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(106)
							bool tmp32 = (_this != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(106)
							bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(106)
							if ((tmp32)){
								HX_STACK_LINE(106)
								tmp33 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(106)
								tmp33 = false;
							}
							HX_STACK_LINE(106)
							if ((tmp33)){
								HX_STACK_LINE(106)
								::String tmp34 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(106)
								::String tmp35 = (tmp34 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(106)
								HX_STACK_DO_THROW(tmp35);
							}
						}
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(106)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(106)
							bool tmp32 = (_this1->_validate != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(106)
							if ((tmp32)){
								HX_STACK_LINE(106)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(106)
						tmp30 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(106)
					Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(106)
					{
						HX_STACK_LINE(106)
						::nape::geom::Vec2 tmp32 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(106)
						::nape::geom::Vec2 _this = tmp32;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(106)
							bool tmp33 = (_this != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(106)
							bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(106)
							if ((tmp33)){
								HX_STACK_LINE(106)
								tmp34 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(106)
								tmp34 = false;
							}
							HX_STACK_LINE(106)
							if ((tmp34)){
								HX_STACK_LINE(106)
								::String tmp35 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(106)
								::String tmp36 = (tmp35 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(106)
								HX_STACK_DO_THROW(tmp36);
							}
						}
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(106)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(106)
							bool tmp33 = (_this1->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(106)
							if ((tmp33)){
								HX_STACK_LINE(106)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(106)
						tmp31 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(106)
					Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(106)
					{
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(106)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(106)
							bool tmp33 = (_this->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(106)
							if ((tmp33)){
								HX_STACK_LINE(106)
								_this->_validate();
							}
						}
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(106)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(106)
							tmp32 = (_this->maxy - _this->miny);
						}
					}
					HX_STACK_LINE(106)
					int tmp33 = this->rays_vertical;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(106)
					int tmp34 = (tmp33 - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(106)
					Float tmp35 = (Float(tmp32) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(106)
					int tmp36 = y;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(106)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(106)
					Float tmp38 = (tmp31 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(106)
					::nape::geom::Vec2 tmp39 = ::nape::geom::Vec2_obj::__new(tmp30,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(106)
					ray_origin = tmp39;
				}
				HX_STACK_LINE(109)
				::nape::geom::Vec2 tmp30 = ray_origin;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(109)
				::nape::geom::Vec2 tmp31 = ::nape::geom::Vec2_obj::__new(ray_direction,(int)0);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(109)
				::nape::geom::Ray tmp32 = ::nape::geom::Ray_obj::__new(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(109)
				::nape::geom::Ray ray = tmp32;		HX_STACK_VAR(ray,"ray");
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						bool tmp34 = (movement_delta != null());		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(110)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(110)
						if ((tmp34)){
							HX_STACK_LINE(110)
							tmp35 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(110)
							tmp35 = false;
						}
						HX_STACK_LINE(110)
						if ((tmp35)){
							HX_STACK_LINE(110)
							::String tmp36 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(110)
							::String tmp37 = (tmp36 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(110)
							HX_STACK_DO_THROW(tmp37);
						}
						HX_STACK_LINE(110)
						{
							HX_STACK_LINE(110)
							::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(110)
							bool tmp36 = (_this->_validate != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(110)
							if ((tmp36)){
								HX_STACK_LINE(110)
								_this->_validate();
							}
						}
						HX_STACK_LINE(110)
						tmp33 = movement_delta->zpp_inner->x;
					}
					HX_STACK_LINE(110)
					Float tmp34 = ::Math_obj::abs(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(110)
					Float tmp35 = this->skin_thickness;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(110)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(110)
					Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						{
							HX_STACK_LINE(110)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(110)
							bool tmp38 = (_this->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(110)
							if ((tmp38)){
								HX_STACK_LINE(110)
								_this->_validate();
							}
						}
						HX_STACK_LINE(110)
						{
							HX_STACK_LINE(110)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(110)
							tmp37 = (_this->maxx - _this->minx);
						}
					}
					HX_STACK_LINE(110)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(110)
					Float maxDistance = tmp38;		HX_STACK_VAR(maxDistance,"maxDistance");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						bool tmp39 = (maxDistance != maxDistance);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(110)
						if ((tmp39)){
							HX_STACK_LINE(110)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: maxDistance cannot be NaN","\xc6","\x98","\x5d","\x73"));
						}
						HX_STACK_LINE(110)
						ray->zpp_inner->maxdist = maxDistance;
					}
					HX_STACK_LINE(110)
					ray->zpp_inner->maxdist;
				}
				HX_STACK_LINE(112)
				::nape::space::Space tmp33 = this->get_space();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(112)
				::nape::geom::Ray tmp34 = ray;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(112)
				::nape::geom::RayResult tmp35 = tmp33->rayCast(tmp34,null(),null());		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(112)
				::nape::geom::RayResult ray_result = tmp35;		HX_STACK_VAR(ray_result,"ray_result");
				HX_STACK_LINE(114)
				bool tmp36 = (ray_result != null());		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(114)
				if ((tmp36)){
					HX_STACK_LINE(116)
					::nape::phys::Body tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(116)
					{
						HX_STACK_LINE(116)
						::nape::shape::Shape tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(116)
						{
							HX_STACK_LINE(116)
							{
								HX_STACK_LINE(116)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp39 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(116)
								bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(116)
								if ((tmp40)){
									HX_STACK_LINE(116)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(116)
							tmp38 = ray_result->zpp_inner->shape;
						}
						HX_STACK_LINE(116)
						::nape::shape::Shape _this = tmp38;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(116)
						::zpp_nape::phys::ZPP_Body tmp39 = _this->zpp_inner->body;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(116)
						bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(116)
						if ((tmp40)){
							HX_STACK_LINE(116)
							::zpp_nape::phys::ZPP_Body tmp41 = _this->zpp_inner->body;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(116)
							tmp37 = tmp41->outer;
						}
						else{
							HX_STACK_LINE(116)
							tmp37 = null();
						}
					}
					HX_STACK_LINE(116)
					::nape::phys::Body hit_body = tmp37;		HX_STACK_VAR(hit_body,"hit_body");
					HX_STACK_LINE(117)
					Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(117)
					{
						HX_STACK_LINE(117)
						::nape::geom::Vec2 tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(117)
						{
							HX_STACK_LINE(117)
							::nape::phys::Body tmp40 = this->get_body();		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(117)
							::nape::phys::Body _this = tmp40;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(117)
							::nape::geom::Vec2 tmp41 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(117)
							bool tmp42 = (tmp41 == null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(117)
							if ((tmp42)){
								HX_STACK_LINE(117)
								_this->zpp_inner->setupVelocity();
							}
							HX_STACK_LINE(117)
							tmp39 = _this->zpp_inner->wrap_vel;
						}
						HX_STACK_LINE(117)
						::nape::geom::Vec2 _this = tmp39;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(117)
						{
							HX_STACK_LINE(117)
							bool tmp40 = (_this != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(117)
							bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(117)
							if ((tmp40)){
								HX_STACK_LINE(117)
								tmp41 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(117)
								tmp41 = false;
							}
							HX_STACK_LINE(117)
							if ((tmp41)){
								HX_STACK_LINE(117)
								::String tmp42 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(117)
								::String tmp43 = (tmp42 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(117)
								HX_STACK_DO_THROW(tmp43);
							}
						}
						HX_STACK_LINE(117)
						{
							HX_STACK_LINE(117)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(117)
							bool tmp40 = (_this1->_validate != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(117)
							if ((tmp40)){
								HX_STACK_LINE(117)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(117)
						tmp38 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(117)
					Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(117)
					{
						HX_STACK_LINE(117)
						bool tmp40 = hit_body->zpp_inner->world;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(117)
						if ((tmp40)){
							HX_STACK_LINE(117)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no mass","\x47","\x6a","\x54","\x2b"));
						}
						HX_STACK_LINE(117)
						hit_body->zpp_inner->validate_mass();
						HX_STACK_LINE(117)
						int tmp41 = hit_body->zpp_inner->massMode;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(117)
						bool tmp42 = (tmp41 == (int)0);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(117)
						bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(117)
						if ((tmp42)){
							HX_STACK_LINE(117)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp44 = hit_body->zpp_inner->shapes;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(117)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(117)
							::zpp_nape::util::ZNPNode_ZPP_Shape tmp46 = tmp45->head;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(117)
							tmp43 = (tmp46 == null());
						}
						else{
							HX_STACK_LINE(117)
							tmp43 = false;
						}
						HX_STACK_LINE(117)
						if ((tmp43)){
							HX_STACK_LINE(117)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes","\x3f","\xab","\x6b","\xcb"));
						}
						HX_STACK_LINE(117)
						tmp39 = hit_body->zpp_inner->cmass;
					}
					HX_STACK_LINE(117)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(117)
					::nape::geom::Vec2 tmp41 = ::nape::geom::Vec2_obj::__new(tmp40,(int)0);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(117)
					hit_body->applyImpulse(tmp41,null(),null());
					HX_STACK_LINE(118)
					Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(118)
					{
						HX_STACK_LINE(118)
						::nape::geom::Vec2 tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(118)
						{
							HX_STACK_LINE(118)
							{
								HX_STACK_LINE(118)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp44 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(118)
								bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(118)
								if ((tmp45)){
									HX_STACK_LINE(118)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(118)
							tmp43 = ray_result->zpp_inner->normal;
						}
						HX_STACK_LINE(118)
						::nape::geom::Vec2 _this = tmp43;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(118)
						{
							HX_STACK_LINE(118)
							bool tmp44 = (_this != null());		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(118)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(118)
							if ((tmp44)){
								HX_STACK_LINE(118)
								tmp45 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(118)
								tmp45 = false;
							}
							HX_STACK_LINE(118)
							if ((tmp45)){
								HX_STACK_LINE(118)
								::String tmp46 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(118)
								::String tmp47 = (tmp46 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(118)
								HX_STACK_DO_THROW(tmp47);
							}
						}
						HX_STACK_LINE(118)
						{
							HX_STACK_LINE(118)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(118)
							bool tmp44 = (_this1->_validate != null());		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(118)
							if ((tmp44)){
								HX_STACK_LINE(118)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(118)
						tmp42 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(118)
					bool tmp43 = (tmp42 == (int)0);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(118)
					bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(118)
					bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(118)
					if ((tmp44)){
						HX_STACK_LINE(118)
						Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(118)
						{
							HX_STACK_LINE(118)
							::nape::geom::Vec2 tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(118)
							{
								HX_STACK_LINE(118)
								{
									HX_STACK_LINE(118)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp48 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(118)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(118)
									bool tmp50 = (tmp49 != null());		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(118)
									bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(118)
									bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(118)
									if ((tmp52)){
										HX_STACK_LINE(118)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(118)
								::nape::geom::Vec2 tmp48 = ray_result->zpp_inner->normal;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(118)
								tmp47 = tmp48;
							}
							HX_STACK_LINE(118)
							::nape::geom::Vec2 _this = tmp47;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(118)
							{
								HX_STACK_LINE(118)
								bool tmp48 = (_this != null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(118)
								bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(118)
								bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(118)
								bool tmp51 = tmp49;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(118)
								if ((tmp51)){
									HX_STACK_LINE(118)
									tmp50 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(118)
									tmp50 = false;
								}
								HX_STACK_LINE(118)
								bool tmp52 = tmp50;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(118)
								if ((tmp52)){
									HX_STACK_LINE(118)
									::String tmp53 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(118)
									::String tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(118)
									::String tmp55 = (tmp54 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(118)
									::String tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(118)
									::String tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(118)
									HX_STACK_DO_THROW(tmp57);
								}
							}
							HX_STACK_LINE(118)
							{
								HX_STACK_LINE(118)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(118)
								bool tmp48 = (_this1->_validate != null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(118)
								bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(118)
								bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(118)
								if ((tmp50)){
									HX_STACK_LINE(118)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(118)
							Float tmp48 = _this->zpp_inner->y;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(118)
							tmp46 = tmp48;
						}
						HX_STACK_LINE(118)
						Float tmp47 = this->max_slope_y;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(118)
						Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(118)
						tmp45 = (tmp46 > tmp48);
					}
					else{
						HX_STACK_LINE(118)
						tmp45 = true;
					}
					HX_STACK_LINE(118)
					if ((tmp45)){
						HX_STACK_LINE(120)
						{
							HX_STACK_LINE(120)
							::nape::geom::Vec2 tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(120)
							{
								HX_STACK_LINE(120)
								::nape::phys::Body tmp47 = this->get_body();		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(120)
								::nape::phys::Body _this = tmp47;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(120)
								::nape::geom::Vec2 tmp48 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(120)
								bool tmp49 = (tmp48 == null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(120)
								if ((tmp49)){
									HX_STACK_LINE(120)
									_this->zpp_inner->setupVelocity();
								}
								HX_STACK_LINE(120)
								tmp46 = _this->zpp_inner->wrap_vel;
							}
							HX_STACK_LINE(120)
							::nape::geom::Vec2 _this = tmp46;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(120)
							{
								HX_STACK_LINE(120)
								{
									HX_STACK_LINE(120)
									bool tmp47 = (_this != null());		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(120)
									bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(120)
									if ((tmp47)){
										HX_STACK_LINE(120)
										tmp48 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(120)
										tmp48 = false;
									}
									HX_STACK_LINE(120)
									if ((tmp48)){
										HX_STACK_LINE(120)
										::String tmp49 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(120)
										::String tmp50 = (tmp49 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(120)
										HX_STACK_DO_THROW(tmp50);
									}
								}
								HX_STACK_LINE(120)
								{
									HX_STACK_LINE(120)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(120)
									bool tmp47 = _this1->_immutable;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(120)
									if ((tmp47)){
										HX_STACK_LINE(120)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(120)
									bool tmp48 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(120)
									if ((tmp48)){
										HX_STACK_LINE(120)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(120)
								Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(120)
								{
									HX_STACK_LINE(120)
									{
										HX_STACK_LINE(120)
										bool tmp48 = (_this != null());		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(120)
										bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(120)
										if ((tmp48)){
											HX_STACK_LINE(120)
											tmp49 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(120)
											tmp49 = false;
										}
										HX_STACK_LINE(120)
										if ((tmp49)){
											HX_STACK_LINE(120)
											::String tmp50 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(120)
											::String tmp51 = (tmp50 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(120)
											HX_STACK_DO_THROW(tmp51);
										}
									}
									HX_STACK_LINE(120)
									{
										HX_STACK_LINE(120)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(120)
										bool tmp48 = (_this1->_validate != null());		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(120)
										if ((tmp48)){
											HX_STACK_LINE(120)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(120)
									tmp47 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(120)
								bool tmp48 = (tmp47 != (int)0);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(120)
								if ((tmp48)){
									HX_STACK_LINE(120)
									bool tmp49 = false;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(120)
									if ((tmp49)){
										HX_STACK_LINE(120)
										::String tmp50 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(120)
										::String tmp51 = (tmp50 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(120)
										HX_STACK_DO_THROW(tmp51);
									}
									HX_STACK_LINE(120)
									_this->zpp_inner->x = (int)0;
									HX_STACK_LINE(120)
									{
										HX_STACK_LINE(120)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(120)
										bool tmp50 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(120)
										if ((tmp50)){
											HX_STACK_LINE(120)
											::zpp_nape::geom::ZPP_Vec2 tmp51 = _this1;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(120)
											_this1->_invalidate(tmp51);
										}
									}
								}
							}
							HX_STACK_LINE(120)
							{
								HX_STACK_LINE(120)
								{
									HX_STACK_LINE(120)
									bool tmp47 = (_this != null());		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(120)
									bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(120)
									if ((tmp47)){
										HX_STACK_LINE(120)
										tmp48 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(120)
										tmp48 = false;
									}
									HX_STACK_LINE(120)
									if ((tmp48)){
										HX_STACK_LINE(120)
										::String tmp49 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(120)
										::String tmp50 = (tmp49 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(120)
										HX_STACK_DO_THROW(tmp50);
									}
								}
								HX_STACK_LINE(120)
								{
									HX_STACK_LINE(120)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(120)
									bool tmp47 = (_this1->_validate != null());		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(120)
									if ((tmp47)){
										HX_STACK_LINE(120)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(120)
								_this->zpp_inner->x;
							}
						}
						HX_STACK_LINE(121)
						{
							HX_STACK_LINE(121)
							::nape::geom::Vec2 tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								::nape::phys::Body tmp47 = this->get_body();		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(121)
								::nape::phys::Body _this = tmp47;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(121)
								::nape::geom::Vec2 tmp48 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(121)
								bool tmp49 = (tmp48 == null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(121)
								if ((tmp49)){
									HX_STACK_LINE(121)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(121)
								tmp46 = _this->zpp_inner->wrap_pos;
							}
							HX_STACK_LINE(121)
							::nape::geom::Vec2 _this = tmp46;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(121)
							Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp49 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(121)
									bool tmp50 = (tmp49 != null());		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(121)
									if ((tmp50)){
										HX_STACK_LINE(121)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
									HX_STACK_LINE(121)
									tmp48 = ray_result->zpp_inner->toiDistance;
								}
								HX_STACK_LINE(121)
								::nape::geom::Vec2 tmp49 = ray->at(tmp48,null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(121)
								::nape::geom::Vec2 _this1 = tmp49;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(121)
								bool tmp50 = (_this1 != null());		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(121)
								bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(121)
								if ((tmp50)){
									HX_STACK_LINE(121)
									tmp51 = _this1->zpp_disp;
								}
								else{
									HX_STACK_LINE(121)
									tmp51 = false;
								}
								HX_STACK_LINE(121)
								if ((tmp51)){
									HX_STACK_LINE(121)
									::String tmp52 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(121)
									::String tmp53 = (tmp52 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(121)
									HX_STACK_DO_THROW(tmp53);
								}
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(121)
									bool tmp52 = (_this2->_validate != null());		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(121)
									if ((tmp52)){
										HX_STACK_LINE(121)
										_this2->_validate();
									}
								}
								HX_STACK_LINE(121)
								tmp47 = _this1->zpp_inner->x;
							}
							HX_STACK_LINE(121)
							Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								::nape::geom::AABB tmp49 = this->get_bounds();		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(121)
								::nape::geom::AABB _this1 = tmp49;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(121)
									bool tmp50 = (_this2->_validate != null());		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(121)
									if ((tmp50)){
										HX_STACK_LINE(121)
										_this2->_validate();
									}
								}
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(121)
									tmp48 = (_this2->maxx - _this2->minx);
								}
							}
							HX_STACK_LINE(121)
							Float tmp49 = (Float(tmp48) / Float((int)2));		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(121)
							int tmp50 = ray_direction;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(121)
							Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(121)
							Float tmp52 = (tmp47 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(121)
							Float x = tmp52;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									bool tmp53 = (_this != null());		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(121)
									bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(121)
									if ((tmp53)){
										HX_STACK_LINE(121)
										tmp54 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(121)
										tmp54 = false;
									}
									HX_STACK_LINE(121)
									if ((tmp54)){
										HX_STACK_LINE(121)
										::String tmp55 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(121)
										::String tmp56 = (tmp55 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(121)
										HX_STACK_DO_THROW(tmp56);
									}
								}
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(121)
									bool tmp53 = _this1->_immutable;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(121)
									if ((tmp53)){
										HX_STACK_LINE(121)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(121)
									bool tmp54 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(121)
									if ((tmp54)){
										HX_STACK_LINE(121)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(121)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									{
										HX_STACK_LINE(121)
										bool tmp54 = (_this != null());		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(121)
										bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(121)
										if ((tmp54)){
											HX_STACK_LINE(121)
											tmp55 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(121)
											tmp55 = false;
										}
										HX_STACK_LINE(121)
										if ((tmp55)){
											HX_STACK_LINE(121)
											::String tmp56 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(121)
											::String tmp57 = (tmp56 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(121)
											HX_STACK_DO_THROW(tmp57);
										}
									}
									HX_STACK_LINE(121)
									{
										HX_STACK_LINE(121)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(121)
										bool tmp54 = (_this1->_validate != null());		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(121)
										if ((tmp54)){
											HX_STACK_LINE(121)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(121)
									tmp53 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(121)
								Float tmp54 = x;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(121)
								bool tmp55 = (tmp53 != tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(121)
								if ((tmp55)){
									HX_STACK_LINE(121)
									bool tmp56 = (x != x);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(121)
									if ((tmp56)){
										HX_STACK_LINE(121)
										::String tmp57 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(121)
										::String tmp58 = (tmp57 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(121)
										HX_STACK_DO_THROW(tmp58);
									}
									HX_STACK_LINE(121)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(121)
									{
										HX_STACK_LINE(121)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(121)
										bool tmp57 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(121)
										if ((tmp57)){
											HX_STACK_LINE(121)
											::zpp_nape::geom::ZPP_Vec2 tmp58 = _this1;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(121)
											_this1->_invalidate(tmp58);
										}
									}
								}
							}
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									bool tmp53 = (_this != null());		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(121)
									bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(121)
									if ((tmp53)){
										HX_STACK_LINE(121)
										tmp54 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(121)
										tmp54 = false;
									}
									HX_STACK_LINE(121)
									if ((tmp54)){
										HX_STACK_LINE(121)
										::String tmp55 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(121)
										::String tmp56 = (tmp55 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(121)
										HX_STACK_DO_THROW(tmp56);
									}
								}
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(121)
									bool tmp53 = (_this1->_validate != null());		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(121)
									if ((tmp53)){
										HX_STACK_LINE(121)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(121)
								_this->zpp_inner->x;
							}
						}
						HX_STACK_LINE(122)
						break;
					}
				}
				HX_STACK_LINE(125)
				::nape::geom::Ray tmp37 = ray;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(125)
				::nape::geom::RayResult tmp38 = ray_result;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(125)
				this->debug_ray(tmp37,tmp38);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,raycast_horizontal,(void))

Void Controller_obj::raycast_vertical( Float dt){
{
		HX_STACK_FRAME("Controller","raycast_vertical",0xeb7790fe,"Controller.raycast_vertical","Controller.hx",130,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(132)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::nape::phys::Body tmp1 = this->get_body();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(132)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(132)
			::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			if ((tmp3)){
				HX_STACK_LINE(132)
				_this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(132)
			tmp = _this->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(132)
		Float tmp1 = dt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		::nape::geom::Vec2 tmp2 = tmp->mul(tmp1,false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		::nape::geom::Vec2 movement_delta = tmp2;		HX_STACK_VAR(movement_delta,"movement_delta");
		HX_STACK_LINE(134)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				bool tmp4 = (movement_delta != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(134)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(134)
				if ((tmp4)){
					HX_STACK_LINE(134)
					tmp5 = movement_delta->zpp_disp;
				}
				else{
					HX_STACK_LINE(134)
					tmp5 = false;
				}
				HX_STACK_LINE(134)
				if ((tmp5)){
					HX_STACK_LINE(134)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(134)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(134)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(134)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(134)
				if ((tmp4)){
					HX_STACK_LINE(134)
					_this->_validate();
				}
			}
			HX_STACK_LINE(134)
			tmp3 = movement_delta->zpp_inner->y;
		}
		HX_STACK_LINE(134)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		if ((tmp4)){
			HX_STACK_LINE(134)
			return null();
		}
		HX_STACK_LINE(135)
		this->grounded = false;
		HX_STACK_LINE(138)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			::nape::geom::AABB tmp6 = this->get_bounds();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(138)
			::nape::geom::AABB _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(138)
				bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(138)
				if ((tmp7)){
					HX_STACK_LINE(138)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(138)
			tmp5 = _this->zpp_inner->minx;
		}
		HX_STACK_LINE(138)
		Float tmp6 = this->skin_thickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(138)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(138)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			::nape::geom::AABB tmp9 = this->get_bounds();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(138)
			::nape::geom::AABB _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(138)
				bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(138)
				if ((tmp10)){
					HX_STACK_LINE(138)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(138)
			tmp8 = _this->zpp_inner->miny;
		}
		HX_STACK_LINE(138)
		Float tmp9 = this->skin_thickness;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(138)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(139)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::nape::geom::AABB tmp12 = this->get_bounds();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(139)
			::nape::geom::AABB _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(139)
				bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(139)
				if ((tmp13)){
					HX_STACK_LINE(139)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(139)
				tmp11 = (_this1->maxx - _this1->minx);
			}
		}
		HX_STACK_LINE(139)
		Float tmp12 = this->skin_thickness;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(139)
		Float tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(139)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(139)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::nape::geom::AABB tmp16 = this->get_bounds();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(139)
			::nape::geom::AABB _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(139)
				bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(139)
				if ((tmp17)){
					HX_STACK_LINE(139)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(139)
				tmp15 = (_this1->maxy - _this1->miny);
			}
		}
		HX_STACK_LINE(139)
		Float tmp16 = this->skin_thickness;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(139)
		Float tmp17 = (tmp16 * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(139)
		Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(137)
		::nape::geom::AABB tmp19 = ::nape::geom::AABB_obj::__new(tmp7,tmp10,tmp14,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(137)
		::nape::geom::AABB skin_bounds = tmp19;		HX_STACK_VAR(skin_bounds,"skin_bounds");
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(141)
			int tmp20 = this->rays_horizontal;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(141)
			int _g = tmp20;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			while((true)){
				HX_STACK_LINE(141)
				bool tmp21 = (_g1 < _g);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(141)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(141)
				if ((tmp22)){
					HX_STACK_LINE(141)
					break;
				}
				HX_STACK_LINE(141)
				int tmp23 = (_g1)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(141)
				int x = tmp23;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(144)
				::nape::geom::Vec2 tmp24 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(144)
				::nape::geom::Vec2 ray_origin = tmp24;		HX_STACK_VAR(ray_origin,"ray_origin");
				HX_STACK_LINE(146)
				int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(146)
				{
					HX_STACK_LINE(146)
					Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(146)
					{
						HX_STACK_LINE(146)
						bool tmp27 = (movement_delta != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(146)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(146)
						if ((tmp27)){
							HX_STACK_LINE(146)
							tmp28 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(146)
							tmp28 = false;
						}
						HX_STACK_LINE(146)
						if ((tmp28)){
							HX_STACK_LINE(146)
							::String tmp29 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(146)
							::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(146)
							HX_STACK_DO_THROW(tmp30);
						}
						HX_STACK_LINE(146)
						{
							HX_STACK_LINE(146)
							::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(146)
							bool tmp29 = (_this->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(146)
							if ((tmp29)){
								HX_STACK_LINE(146)
								_this->_validate();
							}
						}
						HX_STACK_LINE(146)
						tmp26 = movement_delta->zpp_inner->y;
					}
					HX_STACK_LINE(146)
					Float x1 = tmp26;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(146)
					bool tmp27 = (x1 >= (int)0);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(146)
					if ((tmp27)){
						HX_STACK_LINE(146)
						tmp25 = (int)1;
					}
					else{
						HX_STACK_LINE(146)
						tmp25 = (int)-1;
					}
				}
				HX_STACK_LINE(146)
				int ray_direction = tmp25;		HX_STACK_VAR(ray_direction,"ray_direction");
				HX_STACK_LINE(148)
				Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						bool tmp27 = (movement_delta != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(148)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(148)
						if ((tmp27)){
							HX_STACK_LINE(148)
							tmp28 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(148)
							tmp28 = false;
						}
						HX_STACK_LINE(148)
						if ((tmp28)){
							HX_STACK_LINE(148)
							::String tmp29 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(148)
							::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(148)
							HX_STACK_DO_THROW(tmp30);
						}
					}
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(148)
						bool tmp27 = (_this->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(148)
						if ((tmp27)){
							HX_STACK_LINE(148)
							_this->_validate();
						}
					}
					HX_STACK_LINE(148)
					tmp26 = movement_delta->zpp_inner->y;
				}
				HX_STACK_LINE(148)
				bool tmp27 = (tmp26 > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(148)
				if ((tmp27)){
					HX_STACK_LINE(150)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(150)
					{
						HX_STACK_LINE(150)
						::nape::geom::Vec2 tmp29 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(150)
						::nape::geom::Vec2 _this = tmp29;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(150)
						{
							HX_STACK_LINE(150)
							bool tmp30 = (_this != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(150)
							bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(150)
							if ((tmp30)){
								HX_STACK_LINE(150)
								tmp31 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(150)
								tmp31 = false;
							}
							HX_STACK_LINE(150)
							if ((tmp31)){
								HX_STACK_LINE(150)
								::String tmp32 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(150)
								::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(150)
								HX_STACK_DO_THROW(tmp33);
							}
						}
						HX_STACK_LINE(150)
						{
							HX_STACK_LINE(150)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(150)
							bool tmp30 = (_this1->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(150)
							if ((tmp30)){
								HX_STACK_LINE(150)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(150)
						tmp28 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(150)
					Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(150)
					{
						HX_STACK_LINE(150)
						{
							HX_STACK_LINE(150)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(150)
							bool tmp30 = (_this->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(150)
							if ((tmp30)){
								HX_STACK_LINE(150)
								_this->_validate();
							}
						}
						HX_STACK_LINE(150)
						{
							HX_STACK_LINE(150)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(150)
							tmp29 = (_this->maxx - _this->minx);
						}
					}
					HX_STACK_LINE(150)
					int tmp30 = this->rays_horizontal;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(150)
					int tmp31 = (tmp30 - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(150)
					Float tmp32 = (Float(tmp29) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(150)
					int tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(150)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(150)
					Float tmp35 = (tmp28 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(150)
					Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(150)
					{
						HX_STACK_LINE(150)
						::nape::geom::Vec2 tmp37 = skin_bounds->zpp_inner->getmin();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(150)
						::nape::geom::Vec2 _this = tmp37;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(150)
						{
							HX_STACK_LINE(150)
							bool tmp38 = (_this != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(150)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(150)
							if ((tmp38)){
								HX_STACK_LINE(150)
								tmp39 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(150)
								tmp39 = false;
							}
							HX_STACK_LINE(150)
							if ((tmp39)){
								HX_STACK_LINE(150)
								::String tmp40 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(150)
								::String tmp41 = (tmp40 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(150)
								HX_STACK_DO_THROW(tmp41);
							}
						}
						HX_STACK_LINE(150)
						{
							HX_STACK_LINE(150)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(150)
							bool tmp38 = (_this1->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(150)
							if ((tmp38)){
								HX_STACK_LINE(150)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(150)
						tmp36 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(150)
					::nape::geom::Vec2 tmp37 = ::nape::geom::Vec2_obj::__new(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(150)
					ray_origin = tmp37;
				}
				else{
					HX_STACK_LINE(154)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(154)
					{
						HX_STACK_LINE(154)
						::nape::geom::Vec2 tmp29 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(154)
						::nape::geom::Vec2 _this = tmp29;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							bool tmp30 = (_this != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(154)
							bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(154)
							if ((tmp30)){
								HX_STACK_LINE(154)
								tmp31 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(154)
								tmp31 = false;
							}
							HX_STACK_LINE(154)
							if ((tmp31)){
								HX_STACK_LINE(154)
								::String tmp32 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(154)
								::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(154)
								HX_STACK_DO_THROW(tmp33);
							}
						}
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(154)
							bool tmp30 = (_this1->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(154)
							if ((tmp30)){
								HX_STACK_LINE(154)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(154)
						tmp28 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(154)
					Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(154)
					{
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(154)
							bool tmp30 = (_this->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(154)
							if ((tmp30)){
								HX_STACK_LINE(154)
								_this->_validate();
							}
						}
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(154)
							tmp29 = (_this->maxx - _this->minx);
						}
					}
					HX_STACK_LINE(154)
					int tmp30 = this->rays_horizontal;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(154)
					int tmp31 = (tmp30 - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(154)
					Float tmp32 = (Float(tmp29) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(154)
					int tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(154)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(154)
					Float tmp35 = (tmp28 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(154)
					Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(154)
					{
						HX_STACK_LINE(154)
						::nape::geom::Vec2 tmp37 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(154)
						::nape::geom::Vec2 _this = tmp37;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							bool tmp38 = (_this != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(154)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(154)
							if ((tmp38)){
								HX_STACK_LINE(154)
								tmp39 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(154)
								tmp39 = false;
							}
							HX_STACK_LINE(154)
							if ((tmp39)){
								HX_STACK_LINE(154)
								::String tmp40 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(154)
								::String tmp41 = (tmp40 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(154)
								HX_STACK_DO_THROW(tmp41);
							}
						}
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(154)
							bool tmp38 = (_this1->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(154)
							if ((tmp38)){
								HX_STACK_LINE(154)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(154)
						tmp36 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(154)
					::nape::geom::Vec2 tmp37 = ::nape::geom::Vec2_obj::__new(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(154)
					ray_origin = tmp37;
				}
				HX_STACK_LINE(157)
				::nape::geom::Vec2 tmp28 = ray_origin;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(157)
				::nape::geom::Vec2 tmp29 = ::nape::geom::Vec2_obj::__new((int)0,ray_direction);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(157)
				::nape::geom::Ray tmp30 = ::nape::geom::Ray_obj::__new(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(157)
				::nape::geom::Ray ray = tmp30;		HX_STACK_VAR(ray,"ray");
				HX_STACK_LINE(158)
				{
					HX_STACK_LINE(158)
					Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(158)
					{
						HX_STACK_LINE(158)
						bool tmp32 = (movement_delta != null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(158)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(158)
						if ((tmp32)){
							HX_STACK_LINE(158)
							tmp33 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(158)
							tmp33 = false;
						}
						HX_STACK_LINE(158)
						if ((tmp33)){
							HX_STACK_LINE(158)
							::String tmp34 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(158)
							::String tmp35 = (tmp34 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(158)
							HX_STACK_DO_THROW(tmp35);
						}
						HX_STACK_LINE(158)
						{
							HX_STACK_LINE(158)
							::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(158)
							bool tmp34 = (_this->_validate != null());		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(158)
							if ((tmp34)){
								HX_STACK_LINE(158)
								_this->_validate();
							}
						}
						HX_STACK_LINE(158)
						tmp31 = movement_delta->zpp_inner->y;
					}
					HX_STACK_LINE(158)
					Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(158)
					Float tmp33 = this->skin_thickness;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(158)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(158)
					Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(158)
					{
						HX_STACK_LINE(158)
						{
							HX_STACK_LINE(158)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(158)
							bool tmp36 = (_this->_validate != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(158)
							if ((tmp36)){
								HX_STACK_LINE(158)
								_this->_validate();
							}
						}
						HX_STACK_LINE(158)
						{
							HX_STACK_LINE(158)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(158)
							tmp35 = (_this->maxy - _this->miny);
						}
					}
					HX_STACK_LINE(158)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(158)
					Float maxDistance = tmp36;		HX_STACK_VAR(maxDistance,"maxDistance");
					HX_STACK_LINE(158)
					{
						HX_STACK_LINE(158)
						bool tmp37 = (maxDistance != maxDistance);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(158)
						if ((tmp37)){
							HX_STACK_LINE(158)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: maxDistance cannot be NaN","\xc6","\x98","\x5d","\x73"));
						}
						HX_STACK_LINE(158)
						ray->zpp_inner->maxdist = maxDistance;
					}
					HX_STACK_LINE(158)
					ray->zpp_inner->maxdist;
				}
				HX_STACK_LINE(160)
				::nape::space::Space tmp31 = this->get_space();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(160)
				::nape::geom::Ray tmp32 = ray;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(160)
				::nape::geom::RayResult tmp33 = tmp31->rayCast(tmp32,null(),null());		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(160)
				::nape::geom::RayResult ray_result = tmp33;		HX_STACK_VAR(ray_result,"ray_result");
				HX_STACK_LINE(162)
				bool tmp34 = (ray_result != null());		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(162)
				if ((tmp34)){
					HX_STACK_LINE(164)
					::nape::phys::Body tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(164)
					{
						HX_STACK_LINE(164)
						::nape::shape::Shape tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(164)
						{
							HX_STACK_LINE(164)
							{
								HX_STACK_LINE(164)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp37 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(164)
								bool tmp38 = (tmp37 != null());		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(164)
								if ((tmp38)){
									HX_STACK_LINE(164)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(164)
							tmp36 = ray_result->zpp_inner->shape;
						}
						HX_STACK_LINE(164)
						::nape::shape::Shape _this = tmp36;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(164)
						::zpp_nape::phys::ZPP_Body tmp37 = _this->zpp_inner->body;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(164)
						bool tmp38 = (tmp37 != null());		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(164)
						if ((tmp38)){
							HX_STACK_LINE(164)
							::zpp_nape::phys::ZPP_Body tmp39 = _this->zpp_inner->body;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(164)
							tmp35 = tmp39->outer;
						}
						else{
							HX_STACK_LINE(164)
							tmp35 = null();
						}
					}
					HX_STACK_LINE(164)
					::nape::phys::Body hit_body = tmp35;		HX_STACK_VAR(hit_body,"hit_body");
					HX_STACK_LINE(165)
					Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::nape::geom::Vec2 tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							::nape::phys::Body tmp38 = this->get_body();		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(165)
							::nape::phys::Body _this = tmp38;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(165)
							::nape::geom::Vec2 tmp39 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(165)
							bool tmp40 = (tmp39 == null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(165)
							if ((tmp40)){
								HX_STACK_LINE(165)
								_this->zpp_inner->setupVelocity();
							}
							HX_STACK_LINE(165)
							tmp37 = _this->zpp_inner->wrap_vel;
						}
						HX_STACK_LINE(165)
						::nape::geom::Vec2 _this = tmp37;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							bool tmp38 = (_this != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(165)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(165)
							if ((tmp38)){
								HX_STACK_LINE(165)
								tmp39 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(165)
								tmp39 = false;
							}
							HX_STACK_LINE(165)
							if ((tmp39)){
								HX_STACK_LINE(165)
								::String tmp40 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(165)
								::String tmp41 = (tmp40 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(165)
								HX_STACK_DO_THROW(tmp41);
							}
						}
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(165)
							bool tmp38 = (_this1->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(165)
							if ((tmp38)){
								HX_STACK_LINE(165)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(165)
						tmp36 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(165)
					Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						bool tmp38 = hit_body->zpp_inner->world;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(165)
						if ((tmp38)){
							HX_STACK_LINE(165)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no mass","\x47","\x6a","\x54","\x2b"));
						}
						HX_STACK_LINE(165)
						hit_body->zpp_inner->validate_mass();
						HX_STACK_LINE(165)
						int tmp39 = hit_body->zpp_inner->massMode;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(165)
						bool tmp40 = (tmp39 == (int)0);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(165)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(165)
						if ((tmp40)){
							HX_STACK_LINE(165)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp42 = hit_body->zpp_inner->shapes;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(165)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(165)
							::zpp_nape::util::ZNPNode_ZPP_Shape tmp44 = tmp43->head;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(165)
							tmp41 = (tmp44 == null());
						}
						else{
							HX_STACK_LINE(165)
							tmp41 = false;
						}
						HX_STACK_LINE(165)
						if ((tmp41)){
							HX_STACK_LINE(165)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes","\x3f","\xab","\x6b","\xcb"));
						}
						HX_STACK_LINE(165)
						tmp37 = hit_body->zpp_inner->cmass;
					}
					HX_STACK_LINE(165)
					Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(165)
					::nape::geom::Vec2 tmp39 = ::nape::geom::Vec2_obj::__new((int)0,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(165)
					hit_body->applyImpulse(tmp39,null(),null());
					HX_STACK_LINE(166)
					Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						::nape::geom::Vec2 tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							{
								HX_STACK_LINE(166)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp42 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(166)
								bool tmp43 = (tmp42 != null());		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(166)
								if ((tmp43)){
									HX_STACK_LINE(166)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(166)
							tmp41 = ray_result->zpp_inner->normal;
						}
						HX_STACK_LINE(166)
						::nape::geom::Vec2 _this = tmp41;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							bool tmp42 = (_this != null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(166)
							bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(166)
							if ((tmp42)){
								HX_STACK_LINE(166)
								tmp43 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(166)
								tmp43 = false;
							}
							HX_STACK_LINE(166)
							if ((tmp43)){
								HX_STACK_LINE(166)
								::String tmp44 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(166)
								::String tmp45 = (tmp44 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(166)
								HX_STACK_DO_THROW(tmp45);
							}
						}
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(166)
							bool tmp42 = (_this1->_validate != null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(166)
							if ((tmp42)){
								HX_STACK_LINE(166)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(166)
						tmp40 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(166)
					Float tmp41 = this->max_slope_y;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(166)
					bool tmp42 = (tmp40 < tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(166)
					bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(166)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(166)
					if ((tmp43)){
						HX_STACK_LINE(166)
						Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							::nape::geom::Vec2 tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(166)
							{
								HX_STACK_LINE(166)
								{
									HX_STACK_LINE(166)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp47 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(166)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(166)
									bool tmp49 = (tmp48 != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(166)
									bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(166)
									bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(166)
									if ((tmp51)){
										HX_STACK_LINE(166)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(166)
								::nape::geom::Vec2 tmp47 = ray_result->zpp_inner->normal;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(166)
								tmp46 = tmp47;
							}
							HX_STACK_LINE(166)
							::nape::geom::Vec2 _this = tmp46;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(166)
							{
								HX_STACK_LINE(166)
								bool tmp47 = (_this != null());		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(166)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(166)
								bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(166)
								bool tmp50 = tmp48;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(166)
								if ((tmp50)){
									HX_STACK_LINE(166)
									tmp49 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(166)
									tmp49 = false;
								}
								HX_STACK_LINE(166)
								bool tmp51 = tmp49;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(166)
								if ((tmp51)){
									HX_STACK_LINE(166)
									::String tmp52 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(166)
									::String tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(166)
									::String tmp54 = (tmp53 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(166)
									::String tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(166)
									::String tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(166)
									HX_STACK_DO_THROW(tmp56);
								}
							}
							HX_STACK_LINE(166)
							{
								HX_STACK_LINE(166)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(166)
								bool tmp47 = (_this1->_validate != null());		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(166)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(166)
								bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(166)
								if ((tmp49)){
									HX_STACK_LINE(166)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(166)
							Float tmp47 = _this->zpp_inner->y;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(166)
							tmp45 = tmp47;
						}
						HX_STACK_LINE(166)
						tmp44 = (tmp45 > (int)0);
					}
					else{
						HX_STACK_LINE(166)
						tmp44 = true;
					}
					HX_STACK_LINE(166)
					if ((tmp44)){
						HX_STACK_LINE(168)
						{
							HX_STACK_LINE(168)
							::nape::geom::Vec2 tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(168)
							{
								HX_STACK_LINE(168)
								::nape::phys::Body tmp46 = this->get_body();		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(168)
								::nape::phys::Body _this = tmp46;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(168)
								::nape::geom::Vec2 tmp47 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(168)
								bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(168)
								if ((tmp48)){
									HX_STACK_LINE(168)
									_this->zpp_inner->setupVelocity();
								}
								HX_STACK_LINE(168)
								tmp45 = _this->zpp_inner->wrap_vel;
							}
							HX_STACK_LINE(168)
							::nape::geom::Vec2 _this = tmp45;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(168)
							{
								HX_STACK_LINE(168)
								{
									HX_STACK_LINE(168)
									bool tmp46 = (_this != null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(168)
									bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(168)
									if ((tmp46)){
										HX_STACK_LINE(168)
										tmp47 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(168)
										tmp47 = false;
									}
									HX_STACK_LINE(168)
									if ((tmp47)){
										HX_STACK_LINE(168)
										::String tmp48 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(168)
										::String tmp49 = (tmp48 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(168)
										HX_STACK_DO_THROW(tmp49);
									}
								}
								HX_STACK_LINE(168)
								{
									HX_STACK_LINE(168)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(168)
									bool tmp46 = _this1->_immutable;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(168)
									if ((tmp46)){
										HX_STACK_LINE(168)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(168)
									bool tmp47 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(168)
									if ((tmp47)){
										HX_STACK_LINE(168)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(168)
								Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(168)
								{
									HX_STACK_LINE(168)
									{
										HX_STACK_LINE(168)
										bool tmp47 = (_this != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(168)
										bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(168)
										if ((tmp47)){
											HX_STACK_LINE(168)
											tmp48 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(168)
											tmp48 = false;
										}
										HX_STACK_LINE(168)
										if ((tmp48)){
											HX_STACK_LINE(168)
											::String tmp49 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(168)
											::String tmp50 = (tmp49 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(168)
											HX_STACK_DO_THROW(tmp50);
										}
									}
									HX_STACK_LINE(168)
									{
										HX_STACK_LINE(168)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(168)
										bool tmp47 = (_this1->_validate != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(168)
										if ((tmp47)){
											HX_STACK_LINE(168)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(168)
									tmp46 = _this->zpp_inner->y;
								}
								HX_STACK_LINE(168)
								bool tmp47 = (tmp46 != (int)0);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(168)
								if ((tmp47)){
									HX_STACK_LINE(168)
									bool tmp48 = false;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(168)
									if ((tmp48)){
										HX_STACK_LINE(168)
										::String tmp49 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(168)
										::String tmp50 = (tmp49 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(168)
										HX_STACK_DO_THROW(tmp50);
									}
									HX_STACK_LINE(168)
									_this->zpp_inner->y = (int)0;
									HX_STACK_LINE(168)
									{
										HX_STACK_LINE(168)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(168)
										bool tmp49 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(168)
										if ((tmp49)){
											HX_STACK_LINE(168)
											::zpp_nape::geom::ZPP_Vec2 tmp50 = _this1;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(168)
											_this1->_invalidate(tmp50);
										}
									}
								}
							}
							HX_STACK_LINE(168)
							{
								HX_STACK_LINE(168)
								{
									HX_STACK_LINE(168)
									bool tmp46 = (_this != null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(168)
									bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(168)
									if ((tmp46)){
										HX_STACK_LINE(168)
										tmp47 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(168)
										tmp47 = false;
									}
									HX_STACK_LINE(168)
									if ((tmp47)){
										HX_STACK_LINE(168)
										::String tmp48 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(168)
										::String tmp49 = (tmp48 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(168)
										HX_STACK_DO_THROW(tmp49);
									}
								}
								HX_STACK_LINE(168)
								{
									HX_STACK_LINE(168)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(168)
									bool tmp46 = (_this1->_validate != null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(168)
									if ((tmp46)){
										HX_STACK_LINE(168)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(168)
								_this->zpp_inner->y;
							}
						}
						HX_STACK_LINE(169)
						{
							HX_STACK_LINE(169)
							::nape::geom::Vec2 tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(169)
							{
								HX_STACK_LINE(169)
								::nape::phys::Body tmp46 = this->get_body();		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(169)
								::nape::phys::Body _this = tmp46;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(169)
								::nape::geom::Vec2 tmp47 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(169)
								bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(169)
								if ((tmp48)){
									HX_STACK_LINE(169)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(169)
								tmp45 = _this->zpp_inner->wrap_pos;
							}
							HX_STACK_LINE(169)
							::nape::geom::Vec2 _this = tmp45;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(169)
							Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(169)
							{
								HX_STACK_LINE(169)
								Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp48 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(169)
									bool tmp49 = (tmp48 != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(169)
									if ((tmp49)){
										HX_STACK_LINE(169)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
									HX_STACK_LINE(169)
									tmp47 = ray_result->zpp_inner->toiDistance;
								}
								HX_STACK_LINE(169)
								::nape::geom::Vec2 tmp48 = ray->at(tmp47,null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(169)
								::nape::geom::Vec2 _this1 = tmp48;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(169)
								bool tmp49 = (_this1 != null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(169)
								bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(169)
								if ((tmp49)){
									HX_STACK_LINE(169)
									tmp50 = _this1->zpp_disp;
								}
								else{
									HX_STACK_LINE(169)
									tmp50 = false;
								}
								HX_STACK_LINE(169)
								if ((tmp50)){
									HX_STACK_LINE(169)
									::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(169)
									::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(169)
									HX_STACK_DO_THROW(tmp52);
								}
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(169)
									bool tmp51 = (_this2->_validate != null());		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(169)
									if ((tmp51)){
										HX_STACK_LINE(169)
										_this2->_validate();
									}
								}
								HX_STACK_LINE(169)
								tmp46 = _this1->zpp_inner->y;
							}
							HX_STACK_LINE(169)
							Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(169)
							{
								HX_STACK_LINE(169)
								::nape::geom::AABB tmp48 = this->get_bounds();		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(169)
								::nape::geom::AABB _this1 = tmp48;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(169)
									bool tmp49 = (_this2->_validate != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(169)
									if ((tmp49)){
										HX_STACK_LINE(169)
										_this2->_validate();
									}
								}
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(169)
									tmp47 = (_this2->maxy - _this2->miny);
								}
							}
							HX_STACK_LINE(169)
							Float tmp48 = (Float(tmp47) / Float((int)2));		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(169)
							int tmp49 = ray_direction;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(169)
							Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(169)
							Float tmp51 = (tmp46 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(169)
							Float y = tmp51;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(169)
							{
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									bool tmp52 = (_this != null());		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(169)
									bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(169)
									if ((tmp52)){
										HX_STACK_LINE(169)
										tmp53 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(169)
										tmp53 = false;
									}
									HX_STACK_LINE(169)
									if ((tmp53)){
										HX_STACK_LINE(169)
										::String tmp54 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(169)
										::String tmp55 = (tmp54 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(169)
										HX_STACK_DO_THROW(tmp55);
									}
								}
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(169)
									bool tmp52 = _this1->_immutable;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(169)
									if ((tmp52)){
										HX_STACK_LINE(169)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(169)
									bool tmp53 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(169)
									if ((tmp53)){
										HX_STACK_LINE(169)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(169)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									{
										HX_STACK_LINE(169)
										bool tmp53 = (_this != null());		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(169)
										bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(169)
										if ((tmp53)){
											HX_STACK_LINE(169)
											tmp54 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(169)
											tmp54 = false;
										}
										HX_STACK_LINE(169)
										if ((tmp54)){
											HX_STACK_LINE(169)
											::String tmp55 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(169)
											::String tmp56 = (tmp55 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(169)
											HX_STACK_DO_THROW(tmp56);
										}
									}
									HX_STACK_LINE(169)
									{
										HX_STACK_LINE(169)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(169)
										bool tmp53 = (_this1->_validate != null());		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(169)
										if ((tmp53)){
											HX_STACK_LINE(169)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(169)
									tmp52 = _this->zpp_inner->y;
								}
								HX_STACK_LINE(169)
								Float tmp53 = y;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(169)
								bool tmp54 = (tmp52 != tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(169)
								if ((tmp54)){
									HX_STACK_LINE(169)
									bool tmp55 = (y != y);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(169)
									if ((tmp55)){
										HX_STACK_LINE(169)
										::String tmp56 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(169)
										::String tmp57 = (tmp56 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(169)
										HX_STACK_DO_THROW(tmp57);
									}
									HX_STACK_LINE(169)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(169)
									{
										HX_STACK_LINE(169)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(169)
										bool tmp56 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(169)
										if ((tmp56)){
											HX_STACK_LINE(169)
											::zpp_nape::geom::ZPP_Vec2 tmp57 = _this1;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(169)
											_this1->_invalidate(tmp57);
										}
									}
								}
							}
							HX_STACK_LINE(169)
							{
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									bool tmp52 = (_this != null());		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(169)
									bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(169)
									if ((tmp52)){
										HX_STACK_LINE(169)
										tmp53 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(169)
										tmp53 = false;
									}
									HX_STACK_LINE(169)
									if ((tmp53)){
										HX_STACK_LINE(169)
										::String tmp54 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(169)
										::String tmp55 = (tmp54 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(169)
										HX_STACK_DO_THROW(tmp55);
									}
								}
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(169)
									bool tmp52 = (_this1->_validate != null());		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(169)
									if ((tmp52)){
										HX_STACK_LINE(169)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(169)
								_this->zpp_inner->y;
							}
						}
						HX_STACK_LINE(170)
						bool tmp45 = (ray_direction > (int)0);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(170)
						if ((tmp45)){
							HX_STACK_LINE(170)
							this->grounded = true;
						}
						HX_STACK_LINE(171)
						break;
					}
					else{
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::nape::geom::Vec2 tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::nape::phys::Body tmp46 = this->get_body();		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(175)
								::nape::phys::Body _this = tmp46;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(175)
								::nape::geom::Vec2 tmp47 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(175)
								bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(175)
								if ((tmp48)){
									HX_STACK_LINE(175)
									_this->zpp_inner->setupVelocity();
								}
								HX_STACK_LINE(175)
								tmp45 = _this->zpp_inner->wrap_vel;
							}
							HX_STACK_LINE(175)
							::nape::geom::Vec2 _this = tmp45;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									bool tmp46 = (_this != null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(175)
									bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(175)
									if ((tmp46)){
										HX_STACK_LINE(175)
										tmp47 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(175)
										tmp47 = false;
									}
									HX_STACK_LINE(175)
									if ((tmp47)){
										HX_STACK_LINE(175)
										::String tmp48 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(175)
										::String tmp49 = (tmp48 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(tmp49);
									}
								}
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(175)
									bool tmp46 = _this1->_immutable;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(175)
									if ((tmp46)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(175)
									bool tmp47 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(175)
									if ((tmp47)){
										HX_STACK_LINE(175)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(175)
								Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										bool tmp47 = (_this != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(175)
										bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(175)
										if ((tmp47)){
											HX_STACK_LINE(175)
											tmp48 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(175)
											tmp48 = false;
										}
										HX_STACK_LINE(175)
										if ((tmp48)){
											HX_STACK_LINE(175)
											::String tmp49 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(175)
											::String tmp50 = (tmp49 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(tmp50);
										}
									}
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(175)
										bool tmp47 = (_this1->_validate != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(175)
										if ((tmp47)){
											HX_STACK_LINE(175)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(175)
									tmp46 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(175)
								bool tmp47 = (tmp46 != (int)0);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(175)
								if ((tmp47)){
									HX_STACK_LINE(175)
									bool tmp48 = false;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(175)
									if ((tmp48)){
										HX_STACK_LINE(175)
										::String tmp49 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(175)
										::String tmp50 = (tmp49 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(tmp50);
									}
									HX_STACK_LINE(175)
									_this->zpp_inner->x = (int)0;
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(175)
										bool tmp49 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(175)
										if ((tmp49)){
											HX_STACK_LINE(175)
											::zpp_nape::geom::ZPP_Vec2 tmp50 = _this1;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(175)
											_this1->_invalidate(tmp50);
										}
									}
								}
							}
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									bool tmp46 = (_this != null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(175)
									bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(175)
									if ((tmp46)){
										HX_STACK_LINE(175)
										tmp47 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(175)
										tmp47 = false;
									}
									HX_STACK_LINE(175)
									if ((tmp47)){
										HX_STACK_LINE(175)
										::String tmp48 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(175)
										::String tmp49 = (tmp48 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(tmp49);
									}
								}
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(175)
									bool tmp46 = (_this1->_validate != null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(175)
									if ((tmp46)){
										HX_STACK_LINE(175)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(175)
								_this->zpp_inner->x;
							}
						}
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::nape::geom::Vec2 tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::nape::phys::Body tmp46 = this->get_body();		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(176)
								::nape::phys::Body _this = tmp46;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(176)
								::nape::geom::Vec2 tmp47 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(176)
								bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(176)
								if ((tmp48)){
									HX_STACK_LINE(176)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(176)
								tmp45 = _this->zpp_inner->wrap_pos;
							}
							HX_STACK_LINE(176)
							::nape::geom::Vec2 _g2 = tmp45;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									bool tmp47 = (_g2 != null());		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(176)
									bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(176)
									if ((tmp47)){
										HX_STACK_LINE(176)
										tmp48 = _g2->zpp_disp;
									}
									else{
										HX_STACK_LINE(176)
										tmp48 = false;
									}
									HX_STACK_LINE(176)
									if ((tmp48)){
										HX_STACK_LINE(176)
										::String tmp49 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(176)
										::String tmp50 = (tmp49 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(tmp50);
									}
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(176)
										bool tmp49 = (_this->_validate != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(176)
										if ((tmp49)){
											HX_STACK_LINE(176)
											_this->_validate();
										}
									}
									HX_STACK_LINE(176)
									tmp46 = _g2->zpp_inner->x;
								}
								HX_STACK_LINE(176)
								Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::nape::geom::Vec2 tmp48;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::zpp_nape::geom::ZPP_ConvexRayResult tmp49 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(176)
										bool tmp50 = (tmp49 != null());		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(176)
										if ((tmp50)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
										}
										HX_STACK_LINE(176)
										tmp48 = ray_result->zpp_inner->normal;
									}
									HX_STACK_LINE(176)
									::nape::geom::Vec2 _this = tmp48;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(176)
									bool tmp49 = (_this != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(176)
									bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(176)
									if ((tmp49)){
										HX_STACK_LINE(176)
										tmp50 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(176)
										tmp50 = false;
									}
									HX_STACK_LINE(176)
									if ((tmp50)){
										HX_STACK_LINE(176)
										::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(176)
										::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(tmp52);
									}
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(176)
										bool tmp51 = (_this1->_validate != null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(176)
										if ((tmp51)){
											HX_STACK_LINE(176)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(176)
									tmp47 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(176)
								Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(176)
								Float x1 = tmp48;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										bool tmp49 = (_g2 != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(176)
										bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(176)
										if ((tmp49)){
											HX_STACK_LINE(176)
											tmp50 = _g2->zpp_disp;
										}
										else{
											HX_STACK_LINE(176)
											tmp50 = false;
										}
										HX_STACK_LINE(176)
										if ((tmp50)){
											HX_STACK_LINE(176)
											::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(176)
											::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(tmp52);
										}
									}
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(176)
										bool tmp49 = _this->_immutable;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(176)
										if ((tmp49)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
										}
										HX_STACK_LINE(176)
										bool tmp50 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(176)
										if ((tmp50)){
											HX_STACK_LINE(176)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(176)
									Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											bool tmp50 = (_g2 != null());		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(176)
											bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(176)
											if ((tmp50)){
												HX_STACK_LINE(176)
												tmp51 = _g2->zpp_disp;
											}
											else{
												HX_STACK_LINE(176)
												tmp51 = false;
											}
											HX_STACK_LINE(176)
											if ((tmp51)){
												HX_STACK_LINE(176)
												::String tmp52 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(176)
												::String tmp53 = (tmp52 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(tmp53);
											}
										}
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(176)
											bool tmp50 = (_this->_validate != null());		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(176)
											if ((tmp50)){
												HX_STACK_LINE(176)
												_this->_validate();
											}
										}
										HX_STACK_LINE(176)
										tmp49 = _g2->zpp_inner->x;
									}
									HX_STACK_LINE(176)
									Float tmp50 = x1;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(176)
									bool tmp51 = (tmp49 != tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(176)
									if ((tmp51)){
										HX_STACK_LINE(176)
										bool tmp52 = (x1 != x1);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(176)
										if ((tmp52)){
											HX_STACK_LINE(176)
											::String tmp53 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(176)
											::String tmp54 = (tmp53 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(tmp54);
										}
										HX_STACK_LINE(176)
										_g2->zpp_inner->x = x1;
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(176)
											bool tmp53 = (_this->_invalidate != null());		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(176)
											if ((tmp53)){
												HX_STACK_LINE(176)
												::zpp_nape::geom::ZPP_Vec2 tmp54 = _this;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(176)
												_this->_invalidate(tmp54);
											}
										}
									}
								}
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										bool tmp49 = (_g2 != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(176)
										bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(176)
										if ((tmp49)){
											HX_STACK_LINE(176)
											tmp50 = _g2->zpp_disp;
										}
										else{
											HX_STACK_LINE(176)
											tmp50 = false;
										}
										HX_STACK_LINE(176)
										if ((tmp50)){
											HX_STACK_LINE(176)
											::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(176)
											::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(tmp52);
										}
									}
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(176)
										bool tmp49 = (_this->_validate != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(176)
										if ((tmp49)){
											HX_STACK_LINE(176)
											_this->_validate();
										}
									}
									HX_STACK_LINE(176)
									_g2->zpp_inner->x;
								}
							}
						}
					}
				}
				HX_STACK_LINE(179)
				::nape::geom::Ray tmp35 = ray;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(179)
				::nape::geom::RayResult tmp36 = ray_result;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(179)
				this->debug_ray(tmp35,tmp36);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,raycast_vertical,(void))

Void Controller_obj::slope_raycast( Float dt){
{
		HX_STACK_FRAME("Controller","slope_raycast",0xf9907423,"Controller.slope_raycast","Controller.hx",184,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(185)
		this->slope = false;
		HX_STACK_LINE(187)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			::nape::phys::Body tmp1 = this->get_body();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(187)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(187)
			::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(187)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(187)
			if ((tmp3)){
				HX_STACK_LINE(187)
				_this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(187)
			tmp = _this->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(187)
		Float tmp1 = dt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		::nape::geom::Vec2 tmp2 = tmp->mul(tmp1,false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		::nape::geom::Vec2 movement_delta = tmp2;		HX_STACK_VAR(movement_delta,"movement_delta");
		HX_STACK_LINE(189)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		{
			HX_STACK_LINE(189)
			{
				HX_STACK_LINE(189)
				bool tmp4 = (movement_delta != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(189)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(189)
				if ((tmp4)){
					HX_STACK_LINE(189)
					tmp5 = movement_delta->zpp_disp;
				}
				else{
					HX_STACK_LINE(189)
					tmp5 = false;
				}
				HX_STACK_LINE(189)
				if ((tmp5)){
					HX_STACK_LINE(189)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(189)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(189)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(189)
			{
				HX_STACK_LINE(189)
				::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(189)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(189)
				if ((tmp4)){
					HX_STACK_LINE(189)
					_this->_validate();
				}
			}
			HX_STACK_LINE(189)
			tmp3 = movement_delta->zpp_inner->y;
		}
		HX_STACK_LINE(189)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		if ((tmp4)){
			HX_STACK_LINE(189)
			return null();
		}
		HX_STACK_LINE(192)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(192)
			::nape::geom::AABB tmp6 = this->get_bounds();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(192)
			::nape::geom::AABB _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(192)
			{
				HX_STACK_LINE(192)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(192)
				bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(192)
				if ((tmp7)){
					HX_STACK_LINE(192)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(192)
			tmp5 = _this->zpp_inner->minx;
		}
		HX_STACK_LINE(192)
		Float tmp6 = this->skin_thickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(192)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(192)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(192)
			::nape::geom::AABB tmp9 = this->get_bounds();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(192)
			::nape::geom::AABB _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(192)
			{
				HX_STACK_LINE(192)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(192)
				bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(192)
				if ((tmp10)){
					HX_STACK_LINE(192)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(192)
			tmp8 = _this->zpp_inner->miny;
		}
		HX_STACK_LINE(192)
		Float tmp9 = this->skin_thickness;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(192)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(193)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::geom::AABB tmp12 = this->get_bounds();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(193)
			::nape::geom::AABB _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(193)
				bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(193)
				if ((tmp13)){
					HX_STACK_LINE(193)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(193)
				tmp11 = (_this1->maxx - _this1->minx);
			}
		}
		HX_STACK_LINE(193)
		Float tmp12 = this->skin_thickness;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(193)
		Float tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(193)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(193)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::geom::AABB tmp16 = this->get_bounds();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(193)
			::nape::geom::AABB _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(193)
				bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(193)
				if ((tmp17)){
					HX_STACK_LINE(193)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(193)
				tmp15 = (_this1->maxy - _this1->miny);
			}
		}
		HX_STACK_LINE(193)
		Float tmp16 = this->skin_thickness;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(193)
		Float tmp17 = (tmp16 * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(193)
		Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(191)
		::nape::geom::AABB tmp19 = ::nape::geom::AABB_obj::__new(tmp7,tmp10,tmp14,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(191)
		::nape::geom::AABB skin_bounds = tmp19;		HX_STACK_VAR(skin_bounds,"skin_bounds");
		HX_STACK_LINE(194)
		int direction = (int)1;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(195)
		::nape::geom::Vec2 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			::nape::phys::Body tmp21 = this->get_body();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(195)
			::nape::phys::Body _this = tmp21;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(195)
			::nape::geom::Vec2 tmp22 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(195)
			bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(195)
			if ((tmp23)){
				HX_STACK_LINE(195)
				_this->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(195)
			tmp20 = _this->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(195)
		::nape::geom::Vec2 tmp21 = ::nape::geom::Vec2_obj::__new((int)0,direction);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(195)
		::nape::geom::Ray tmp22 = ::nape::geom::Ray_obj::__new(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(195)
		::nape::geom::Ray ray = tmp22;		HX_STACK_VAR(ray,"ray");
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(196)
			Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(196)
				::nape::geom::AABB tmp24 = this->get_bounds();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(196)
				::nape::geom::AABB _this = tmp24;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(196)
				{
					HX_STACK_LINE(196)
					::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(196)
					bool tmp25 = (_this1->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(196)
					if ((tmp25)){
						HX_STACK_LINE(196)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(196)
				{
					HX_STACK_LINE(196)
					::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(196)
					tmp23 = (_this1->maxy - _this1->miny);
				}
			}
			HX_STACK_LINE(196)
			Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(196)
			Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(196)
				bool tmp26 = (movement_delta != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(196)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(196)
				if ((tmp26)){
					HX_STACK_LINE(196)
					tmp27 = movement_delta->zpp_disp;
				}
				else{
					HX_STACK_LINE(196)
					tmp27 = false;
				}
				HX_STACK_LINE(196)
				if ((tmp27)){
					HX_STACK_LINE(196)
					::String tmp28 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(196)
					::String tmp29 = (tmp28 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(196)
					HX_STACK_DO_THROW(tmp29);
				}
				HX_STACK_LINE(196)
				{
					HX_STACK_LINE(196)
					::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(196)
					bool tmp28 = (_this->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(196)
					if ((tmp28)){
						HX_STACK_LINE(196)
						_this->_validate();
					}
				}
				HX_STACK_LINE(196)
				tmp25 = movement_delta->zpp_inner->y;
			}
			HX_STACK_LINE(196)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(196)
			bool tmp27 = this->grounded;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(196)
			int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(196)
			if ((tmp27)){
				HX_STACK_LINE(196)
				tmp28 = (int)12;
			}
			else{
				HX_STACK_LINE(196)
				tmp28 = (int)0;
			}
			HX_STACK_LINE(196)
			Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(196)
			Float maxDistance = tmp29;		HX_STACK_VAR(maxDistance,"maxDistance");
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(196)
				bool tmp30 = (maxDistance != maxDistance);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(196)
				if ((tmp30)){
					HX_STACK_LINE(196)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: maxDistance cannot be NaN","\xc6","\x98","\x5d","\x73"));
				}
				HX_STACK_LINE(196)
				ray->zpp_inner->maxdist = maxDistance;
			}
			HX_STACK_LINE(196)
			ray->zpp_inner->maxdist;
		}
		HX_STACK_LINE(197)
		::nape::space::Space tmp23 = this->get_space();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(197)
		::nape::geom::Ray tmp24 = ray;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(197)
		::nape::geom::RayResult tmp25 = tmp23->rayCast(tmp24,null(),null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(197)
		::nape::geom::RayResult result = tmp25;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(198)
		bool tmp26 = (result != null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(198)
		if ((tmp26)){
			HX_STACK_LINE(200)
			Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				::nape::geom::Vec2 tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_ConvexRayResult tmp29 = result->zpp_inner->next;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(200)
						bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(200)
						if ((tmp30)){
							HX_STACK_LINE(200)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
						}
					}
					HX_STACK_LINE(200)
					tmp28 = result->zpp_inner->normal;
				}
				HX_STACK_LINE(200)
				::nape::geom::Vec2 _this = tmp28;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					bool tmp29 = (_this != null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(200)
					bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(200)
					if ((tmp29)){
						HX_STACK_LINE(200)
						tmp30 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(200)
						tmp30 = false;
					}
					HX_STACK_LINE(200)
					if ((tmp30)){
						HX_STACK_LINE(200)
						::String tmp31 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(200)
						::String tmp32 = (tmp31 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(200)
						HX_STACK_DO_THROW(tmp32);
					}
				}
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(200)
					bool tmp29 = (_this1->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(200)
					if ((tmp29)){
						HX_STACK_LINE(200)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(200)
				tmp27 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(200)
			bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(200)
			if ((tmp28)){
				HX_STACK_LINE(202)
				this->slope = true;
			}
			HX_STACK_LINE(205)
			Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(205)
			{
				HX_STACK_LINE(205)
				::nape::geom::Vec2 tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(205)
				{
					HX_STACK_LINE(205)
					{
						HX_STACK_LINE(205)
						::zpp_nape::geom::ZPP_ConvexRayResult tmp31 = result->zpp_inner->next;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(205)
						bool tmp32 = (tmp31 != null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(205)
						if ((tmp32)){
							HX_STACK_LINE(205)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
						}
					}
					HX_STACK_LINE(205)
					tmp30 = result->zpp_inner->normal;
				}
				HX_STACK_LINE(205)
				::nape::geom::Vec2 _this = tmp30;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(205)
				{
					HX_STACK_LINE(205)
					bool tmp31 = (_this != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(205)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(205)
					if ((tmp31)){
						HX_STACK_LINE(205)
						tmp32 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(205)
						tmp32 = false;
					}
					HX_STACK_LINE(205)
					if ((tmp32)){
						HX_STACK_LINE(205)
						::String tmp33 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(205)
						::String tmp34 = (tmp33 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(205)
						HX_STACK_DO_THROW(tmp34);
					}
				}
				HX_STACK_LINE(205)
				{
					HX_STACK_LINE(205)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(205)
					bool tmp31 = (_this1->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(205)
					if ((tmp31)){
						HX_STACK_LINE(205)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(205)
				tmp29 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(205)
			Float tmp30 = this->max_slope_y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(205)
			bool tmp31 = (tmp29 < tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(205)
			if ((tmp31)){
				HX_STACK_LINE(207)
				{
					HX_STACK_LINE(207)
					::nape::geom::Vec2 tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(207)
					{
						HX_STACK_LINE(207)
						::nape::phys::Body tmp33 = this->get_body();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(207)
						::nape::phys::Body _this = tmp33;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(207)
						::nape::geom::Vec2 tmp34 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(207)
						bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(207)
						if ((tmp35)){
							HX_STACK_LINE(207)
							_this->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(207)
						tmp32 = _this->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(207)
					::nape::geom::Vec2 _this = tmp32;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(207)
					{
						HX_STACK_LINE(207)
						{
							HX_STACK_LINE(207)
							bool tmp33 = (_this != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(207)
							bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(207)
							if ((tmp33)){
								HX_STACK_LINE(207)
								tmp34 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(207)
								tmp34 = false;
							}
							HX_STACK_LINE(207)
							if ((tmp34)){
								HX_STACK_LINE(207)
								::String tmp35 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(207)
								::String tmp36 = (tmp35 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(207)
								HX_STACK_DO_THROW(tmp36);
							}
						}
						HX_STACK_LINE(207)
						{
							HX_STACK_LINE(207)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(207)
							bool tmp33 = _this1->_immutable;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(207)
							if ((tmp33)){
								HX_STACK_LINE(207)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(207)
							bool tmp34 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(207)
							if ((tmp34)){
								HX_STACK_LINE(207)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(207)
						Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(207)
						{
							HX_STACK_LINE(207)
							{
								HX_STACK_LINE(207)
								bool tmp34 = (_this != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(207)
								bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(207)
								if ((tmp34)){
									HX_STACK_LINE(207)
									tmp35 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(207)
									tmp35 = false;
								}
								HX_STACK_LINE(207)
								if ((tmp35)){
									HX_STACK_LINE(207)
									::String tmp36 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(207)
									::String tmp37 = (tmp36 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(207)
									HX_STACK_DO_THROW(tmp37);
								}
							}
							HX_STACK_LINE(207)
							{
								HX_STACK_LINE(207)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(207)
								bool tmp34 = (_this1->_validate != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(207)
								if ((tmp34)){
									HX_STACK_LINE(207)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(207)
							tmp33 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(207)
						bool tmp34 = (tmp33 != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(207)
						if ((tmp34)){
							HX_STACK_LINE(207)
							bool tmp35 = false;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(207)
							if ((tmp35)){
								HX_STACK_LINE(207)
								::String tmp36 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(207)
								::String tmp37 = (tmp36 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(207)
								HX_STACK_DO_THROW(tmp37);
							}
							HX_STACK_LINE(207)
							_this->zpp_inner->y = (int)0;
							HX_STACK_LINE(207)
							{
								HX_STACK_LINE(207)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(207)
								bool tmp36 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(207)
								if ((tmp36)){
									HX_STACK_LINE(207)
									::zpp_nape::geom::ZPP_Vec2 tmp37 = _this1;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(207)
									_this1->_invalidate(tmp37);
								}
							}
						}
					}
					HX_STACK_LINE(207)
					{
						HX_STACK_LINE(207)
						{
							HX_STACK_LINE(207)
							bool tmp33 = (_this != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(207)
							bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(207)
							if ((tmp33)){
								HX_STACK_LINE(207)
								tmp34 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(207)
								tmp34 = false;
							}
							HX_STACK_LINE(207)
							if ((tmp34)){
								HX_STACK_LINE(207)
								::String tmp35 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(207)
								::String tmp36 = (tmp35 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(207)
								HX_STACK_DO_THROW(tmp36);
							}
						}
						HX_STACK_LINE(207)
						{
							HX_STACK_LINE(207)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(207)
							bool tmp33 = (_this1->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(207)
							if ((tmp33)){
								HX_STACK_LINE(207)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(207)
						_this->zpp_inner->y;
					}
				}
				HX_STACK_LINE(208)
				{
					HX_STACK_LINE(208)
					::nape::geom::Vec2 tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						::nape::phys::Body tmp33 = this->get_body();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(208)
						::nape::phys::Body _this = tmp33;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(208)
						::nape::geom::Vec2 tmp34 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(208)
						bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(208)
						if ((tmp35)){
							HX_STACK_LINE(208)
							_this->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(208)
						tmp32 = _this->zpp_inner->wrap_pos;
					}
					HX_STACK_LINE(208)
					::nape::geom::Vec2 _this = tmp32;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(208)
					Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_ConvexRayResult tmp35 = result->zpp_inner->next;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(208)
							bool tmp36 = (tmp35 != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(208)
							if ((tmp36)){
								HX_STACK_LINE(208)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
							}
							HX_STACK_LINE(208)
							tmp34 = result->zpp_inner->toiDistance;
						}
						HX_STACK_LINE(208)
						::nape::geom::Vec2 tmp35 = ray->at(tmp34,null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(208)
						::nape::geom::Vec2 _this1 = tmp35;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(208)
						bool tmp36 = (_this1 != null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(208)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(208)
						if ((tmp36)){
							HX_STACK_LINE(208)
							tmp37 = _this1->zpp_disp;
						}
						else{
							HX_STACK_LINE(208)
							tmp37 = false;
						}
						HX_STACK_LINE(208)
						if ((tmp37)){
							HX_STACK_LINE(208)
							::String tmp38 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(208)
							::String tmp39 = (tmp38 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(208)
							HX_STACK_DO_THROW(tmp39);
						}
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(208)
							bool tmp38 = (_this2->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(208)
							if ((tmp38)){
								HX_STACK_LINE(208)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(208)
						tmp33 = _this1->zpp_inner->y;
					}
					HX_STACK_LINE(208)
					Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						::nape::geom::AABB tmp35 = this->get_bounds();		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(208)
						::nape::geom::AABB _this1 = tmp35;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(208)
							bool tmp36 = (_this2->_validate != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(208)
							if ((tmp36)){
								HX_STACK_LINE(208)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(208)
							tmp34 = (_this2->maxy - _this2->miny);
						}
					}
					HX_STACK_LINE(208)
					Float tmp35 = (Float(tmp34) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(208)
					int tmp36 = direction;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(208)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(208)
					Float tmp38 = (tmp33 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(208)
					Float y = tmp38;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							bool tmp39 = (_this != null());		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(208)
							bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(208)
							if ((tmp39)){
								HX_STACK_LINE(208)
								tmp40 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(208)
								tmp40 = false;
							}
							HX_STACK_LINE(208)
							if ((tmp40)){
								HX_STACK_LINE(208)
								::String tmp41 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(208)
								::String tmp42 = (tmp41 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(208)
								HX_STACK_DO_THROW(tmp42);
							}
						}
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(208)
							bool tmp39 = _this1->_immutable;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(208)
							if ((tmp39)){
								HX_STACK_LINE(208)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(208)
							bool tmp40 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(208)
							if ((tmp40)){
								HX_STACK_LINE(208)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(208)
						Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							{
								HX_STACK_LINE(208)
								bool tmp40 = (_this != null());		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(208)
								bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(208)
								if ((tmp40)){
									HX_STACK_LINE(208)
									tmp41 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(208)
									tmp41 = false;
								}
								HX_STACK_LINE(208)
								if ((tmp41)){
									HX_STACK_LINE(208)
									::String tmp42 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(208)
									::String tmp43 = (tmp42 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(208)
									HX_STACK_DO_THROW(tmp43);
								}
							}
							HX_STACK_LINE(208)
							{
								HX_STACK_LINE(208)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(208)
								bool tmp40 = (_this1->_validate != null());		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(208)
								if ((tmp40)){
									HX_STACK_LINE(208)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(208)
							tmp39 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(208)
						Float tmp40 = y;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(208)
						bool tmp41 = (tmp39 != tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(208)
						if ((tmp41)){
							HX_STACK_LINE(208)
							bool tmp42 = (y != y);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(208)
							if ((tmp42)){
								HX_STACK_LINE(208)
								::String tmp43 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(208)
								::String tmp44 = (tmp43 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(208)
								HX_STACK_DO_THROW(tmp44);
							}
							HX_STACK_LINE(208)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(208)
							{
								HX_STACK_LINE(208)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(208)
								bool tmp43 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(208)
								if ((tmp43)){
									HX_STACK_LINE(208)
									::zpp_nape::geom::ZPP_Vec2 tmp44 = _this1;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(208)
									_this1->_invalidate(tmp44);
								}
							}
						}
					}
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							bool tmp39 = (_this != null());		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(208)
							bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(208)
							if ((tmp39)){
								HX_STACK_LINE(208)
								tmp40 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(208)
								tmp40 = false;
							}
							HX_STACK_LINE(208)
							if ((tmp40)){
								HX_STACK_LINE(208)
								::String tmp41 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(208)
								::String tmp42 = (tmp41 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(208)
								HX_STACK_DO_THROW(tmp42);
							}
						}
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(208)
							bool tmp39 = (_this1->_validate != null());		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(208)
							if ((tmp39)){
								HX_STACK_LINE(208)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(208)
						_this->zpp_inner->y;
					}
				}
				HX_STACK_LINE(209)
				bool tmp32 = (direction > (int)0);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(209)
				if ((tmp32)){
					HX_STACK_LINE(209)
					this->grounded = true;
				}
			}
		}
		HX_STACK_LINE(212)
		::nape::geom::Ray tmp27 = ray;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(212)
		::nape::geom::RayResult tmp28 = result;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(212)
		this->debug_ray(tmp27,tmp28);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,slope_raycast,(void))

Void Controller_obj::debug_ray( ::nape::geom::Ray ray,::nape::geom::RayResult result){
{
		HX_STACK_FRAME("Controller","debug_ray",0x2dd77c8c,"Controller.debug_ray","Controller.hx",216,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ray,"ray")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(217)
		::luxe::Physics tmp = ::Luxe_obj::physics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		bool tmp1 = tmp->nape->get_draw();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		if ((tmp2)){
			HX_STACK_LINE(217)
			return null();
		}
		HX_STACK_LINE(218)
		::phoenix::Vector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(218)
			{
				HX_STACK_LINE(218)
				::nape::geom::Vec2 tmp5 = ray->zpp_inner->direction;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(218)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(218)
				{
					HX_STACK_LINE(218)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(218)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(218)
					if ((tmp6)){
						HX_STACK_LINE(218)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(218)
						tmp7 = false;
					}
					HX_STACK_LINE(218)
					if ((tmp7)){
						HX_STACK_LINE(218)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(218)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(218)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(218)
				{
					HX_STACK_LINE(218)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(218)
					bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(218)
					if ((tmp6)){
						HX_STACK_LINE(218)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(218)
				tmp4 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(218)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(218)
			{
				HX_STACK_LINE(218)
				::nape::geom::Vec2 tmp6 = ray->zpp_inner->direction;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(218)
				::nape::geom::Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(218)
				{
					HX_STACK_LINE(218)
					bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(218)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(218)
					if ((tmp7)){
						HX_STACK_LINE(218)
						tmp8 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(218)
						tmp8 = false;
					}
					HX_STACK_LINE(218)
					if ((tmp8)){
						HX_STACK_LINE(218)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(218)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(218)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(218)
				{
					HX_STACK_LINE(218)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(218)
					bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(218)
					if ((tmp7)){
						HX_STACK_LINE(218)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(218)
				tmp5 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(218)
			::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(tmp4,tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(218)
			::phoenix::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(218)
			{
				HX_STACK_LINE(218)
				Float tmp7 = (_this->x * _this->x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(218)
				Float tmp8 = (_this->y * _this->y);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(218)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(218)
				Float tmp10 = (_this->z * _this->z);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(218)
				Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(218)
				Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(218)
				Float b = tmp12;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(218)
				Float tmp13 = (Float(_this->x) / Float(b));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(218)
				Float tmp14 = (Float(_this->y) / Float(b));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(218)
				Float tmp15 = (Float(_this->z) / Float(b));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(218)
				tmp3 = ::phoenix::Vector_obj::__new(tmp13,tmp14,tmp15,null());
			}
		}
		HX_STACK_LINE(218)
		::phoenix::Vector direction = tmp3;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(219)
		bool tmp4 = (result != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		if ((tmp4)){
			HX_STACK_LINE(221)
			::luxe::Draw tmp5 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(222)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				::nape::geom::Vec2 tmp7 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(222)
				::nape::geom::Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(222)
				{
					HX_STACK_LINE(222)
					bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(222)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(222)
					if ((tmp8)){
						HX_STACK_LINE(222)
						tmp9 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(222)
						tmp9 = false;
					}
					HX_STACK_LINE(222)
					if ((tmp9)){
						HX_STACK_LINE(222)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(222)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(222)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(222)
				{
					HX_STACK_LINE(222)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(222)
					bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(222)
					if ((tmp8)){
						HX_STACK_LINE(222)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(222)
				tmp6 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(222)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				::nape::geom::Vec2 tmp8 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(222)
				::nape::geom::Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(222)
				{
					HX_STACK_LINE(222)
					bool tmp9 = (_this != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(222)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(222)
					if ((tmp9)){
						HX_STACK_LINE(222)
						tmp10 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(222)
						tmp10 = false;
					}
					HX_STACK_LINE(222)
					if ((tmp10)){
						HX_STACK_LINE(222)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(222)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(222)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(222)
				{
					HX_STACK_LINE(222)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(222)
					bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(222)
					if ((tmp9)){
						HX_STACK_LINE(222)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(222)
				tmp7 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(222)
			::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(tmp6,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(223)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						::zpp_nape::geom::ZPP_ConvexRayResult tmp11 = result->zpp_inner->next;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(223)
						bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(223)
						if ((tmp12)){
							HX_STACK_LINE(223)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
						}
					}
					HX_STACK_LINE(223)
					tmp10 = result->zpp_inner->toiDistance;
				}
				HX_STACK_LINE(223)
				::nape::geom::Vec2 tmp11 = ray->at(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(223)
				::nape::geom::Vec2 _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					bool tmp12 = (_this != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(223)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(223)
					if ((tmp12)){
						HX_STACK_LINE(223)
						tmp13 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(223)
						tmp13 = false;
					}
					HX_STACK_LINE(223)
					if ((tmp13)){
						HX_STACK_LINE(223)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(223)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(223)
						HX_STACK_DO_THROW(tmp15);
					}
				}
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(223)
					bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(223)
					if ((tmp12)){
						HX_STACK_LINE(223)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(223)
				tmp9 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(223)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						::zpp_nape::geom::ZPP_ConvexRayResult tmp12 = result->zpp_inner->next;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(223)
						bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(223)
						if ((tmp13)){
							HX_STACK_LINE(223)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
						}
					}
					HX_STACK_LINE(223)
					tmp11 = result->zpp_inner->toiDistance;
				}
				HX_STACK_LINE(223)
				::nape::geom::Vec2 tmp12 = ray->at(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(223)
				::nape::geom::Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					bool tmp13 = (_this != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(223)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(223)
					if ((tmp13)){
						HX_STACK_LINE(223)
						tmp14 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(223)
						tmp14 = false;
					}
					HX_STACK_LINE(223)
					if ((tmp14)){
						HX_STACK_LINE(223)
						::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(223)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(223)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(223)
					bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(223)
					if ((tmp13)){
						HX_STACK_LINE(223)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(223)
				tmp10 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(223)
			::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(tmp9,tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(224)
			::phoenix::Color tmp12 = ::phoenix::Color_obj::__new((int)0,(int)1,(int)0,null());		HX_STACK_VAR(tmp12,"tmp12");
			struct _Function_2_1{
				inline static Dynamic Block( ::phoenix::Vector &tmp11,::phoenix::Vector &tmp8,::phoenix::Color &tmp12){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Controller.hx",221,0x2da14382)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00") , tmp8,false);
						__result->Add(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00") , tmp11,false);
						__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp12,false);
						__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , true,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(221)
			Dynamic tmp13 = _Function_2_1::Block(tmp11,tmp8,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(221)
			tmp5->line(tmp13);
		}
		else{
			HX_STACK_LINE(230)
			::luxe::Draw tmp5 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(231)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				::nape::geom::Vec2 tmp7 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(231)
				::nape::geom::Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(231)
					bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(231)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(231)
					if ((tmp8)){
						HX_STACK_LINE(231)
						tmp9 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(231)
						tmp9 = false;
					}
					HX_STACK_LINE(231)
					if ((tmp9)){
						HX_STACK_LINE(231)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(231)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(231)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(231)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(231)
					bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(231)
					if ((tmp8)){
						HX_STACK_LINE(231)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(231)
				tmp6 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(231)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				::nape::geom::Vec2 tmp8 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(231)
				::nape::geom::Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(231)
					bool tmp9 = (_this != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(231)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(231)
					if ((tmp9)){
						HX_STACK_LINE(231)
						tmp10 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(231)
						tmp10 = false;
					}
					HX_STACK_LINE(231)
					if ((tmp10)){
						HX_STACK_LINE(231)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(231)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(231)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(231)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(231)
					bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(231)
					if ((tmp9)){
						HX_STACK_LINE(231)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(231)
				tmp7 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(231)
			::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(tmp6,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(232)
			::phoenix::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					::nape::geom::Vec2 tmp11 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(232)
					::nape::geom::Vec2 _this = tmp11;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(232)
					{
						HX_STACK_LINE(232)
						bool tmp12 = (_this != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(232)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(232)
						if ((tmp12)){
							HX_STACK_LINE(232)
							tmp13 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(232)
							tmp13 = false;
						}
						HX_STACK_LINE(232)
						if ((tmp13)){
							HX_STACK_LINE(232)
							::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(232)
							::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(232)
							HX_STACK_DO_THROW(tmp15);
						}
					}
					HX_STACK_LINE(232)
					{
						HX_STACK_LINE(232)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(232)
						bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(232)
						if ((tmp12)){
							HX_STACK_LINE(232)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(232)
					tmp10 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(232)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					::nape::geom::Vec2 tmp12 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(232)
					::nape::geom::Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(232)
					{
						HX_STACK_LINE(232)
						bool tmp13 = (_this != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(232)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(232)
						if ((tmp13)){
							HX_STACK_LINE(232)
							tmp14 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(232)
							tmp14 = false;
						}
						HX_STACK_LINE(232)
						if ((tmp14)){
							HX_STACK_LINE(232)
							::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(232)
							::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(232)
							HX_STACK_DO_THROW(tmp16);
						}
					}
					HX_STACK_LINE(232)
					{
						HX_STACK_LINE(232)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(232)
						bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(232)
						if ((tmp13)){
							HX_STACK_LINE(232)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(232)
					tmp11 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(232)
				::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new(tmp10,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(232)
				::phoenix::Vector _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(232)
				::phoenix::Vector tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					Float tmp14 = ray->zpp_inner->maxdist;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(232)
					Float v = tmp14;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(232)
					{
						HX_STACK_LINE(232)
						Float tmp15 = (direction->x * v);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(232)
						Float _x = tmp15;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(232)
						Float tmp16 = (direction->y * v);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(232)
						Float _y = tmp16;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(232)
						Float tmp17 = (direction->z * v);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(232)
						Float _z = tmp17;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(232)
						bool prev = direction->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(232)
						direction->ignore_listeners = true;
						HX_STACK_LINE(232)
						{
							HX_STACK_LINE(232)
							direction->x = _x;
							HX_STACK_LINE(232)
							bool tmp18 = direction->_construct;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(232)
							if ((tmp18)){
								HX_STACK_LINE(232)
								direction->x;
							}
							else{
								HX_STACK_LINE(232)
								bool tmp19 = (direction->listen_x != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(232)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(232)
								if ((tmp19)){
									HX_STACK_LINE(232)
									bool tmp21 = direction->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(232)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(232)
									tmp20 = !(tmp22);
								}
								else{
									HX_STACK_LINE(232)
									tmp20 = false;
								}
								HX_STACK_LINE(232)
								if ((tmp20)){
									HX_STACK_LINE(232)
									Float tmp21 = _x;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(232)
									direction->listen_x(tmp21);
								}
								HX_STACK_LINE(232)
								direction->x;
							}
						}
						HX_STACK_LINE(232)
						{
							HX_STACK_LINE(232)
							direction->y = _y;
							HX_STACK_LINE(232)
							bool tmp18 = direction->_construct;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(232)
							if ((tmp18)){
								HX_STACK_LINE(232)
								direction->y;
							}
							else{
								HX_STACK_LINE(232)
								bool tmp19 = (direction->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(232)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(232)
								if ((tmp19)){
									HX_STACK_LINE(232)
									bool tmp21 = direction->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(232)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(232)
									tmp20 = !(tmp22);
								}
								else{
									HX_STACK_LINE(232)
									tmp20 = false;
								}
								HX_STACK_LINE(232)
								if ((tmp20)){
									HX_STACK_LINE(232)
									Float tmp21 = _y;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(232)
									direction->listen_y(tmp21);
								}
								HX_STACK_LINE(232)
								direction->y;
							}
						}
						HX_STACK_LINE(232)
						{
							HX_STACK_LINE(232)
							direction->z = _z;
							HX_STACK_LINE(232)
							bool tmp18 = direction->_construct;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(232)
							if ((tmp18)){
								HX_STACK_LINE(232)
								direction->z;
							}
							else{
								HX_STACK_LINE(232)
								bool tmp19 = (direction->listen_z != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(232)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(232)
								if ((tmp19)){
									HX_STACK_LINE(232)
									bool tmp21 = direction->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(232)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(232)
									tmp20 = !(tmp22);
								}
								else{
									HX_STACK_LINE(232)
									tmp20 = false;
								}
								HX_STACK_LINE(232)
								if ((tmp20)){
									HX_STACK_LINE(232)
									Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(232)
									direction->listen_z(tmp21);
								}
								HX_STACK_LINE(232)
								direction->z;
							}
						}
						HX_STACK_LINE(232)
						direction->ignore_listeners = prev;
						HX_STACK_LINE(232)
						bool tmp18 = (direction->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(232)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(232)
						if ((tmp18)){
							HX_STACK_LINE(232)
							bool tmp20 = direction->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(232)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(232)
							tmp19 = !(tmp21);
						}
						else{
							HX_STACK_LINE(232)
							tmp19 = false;
						}
						HX_STACK_LINE(232)
						if ((tmp19)){
							HX_STACK_LINE(232)
							Float tmp20 = direction->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(232)
							direction->listen_x(tmp20);
						}
						HX_STACK_LINE(232)
						bool tmp20 = (direction->listen_y != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(232)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(232)
						if ((tmp20)){
							HX_STACK_LINE(232)
							bool tmp22 = direction->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(232)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(232)
							tmp21 = !(tmp23);
						}
						else{
							HX_STACK_LINE(232)
							tmp21 = false;
						}
						HX_STACK_LINE(232)
						if ((tmp21)){
							HX_STACK_LINE(232)
							Float tmp22 = direction->y;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(232)
							direction->listen_y(tmp22);
						}
						HX_STACK_LINE(232)
						bool tmp22 = (direction->listen_z != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(232)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(232)
						if ((tmp22)){
							HX_STACK_LINE(232)
							bool tmp24 = direction->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(232)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(232)
							tmp23 = !(tmp25);
						}
						else{
							HX_STACK_LINE(232)
							tmp23 = false;
						}
						HX_STACK_LINE(232)
						if ((tmp23)){
							HX_STACK_LINE(232)
							Float tmp24 = direction->z;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(232)
							direction->listen_z(tmp24);
						}
						HX_STACK_LINE(232)
						direction;
					}
					HX_STACK_LINE(232)
					tmp13 = direction;
				}
				HX_STACK_LINE(232)
				::phoenix::Vector other = tmp13;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					bool tmp14 = (other == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(232)
					if ((tmp14)){
						HX_STACK_LINE(232)
						::String tmp15 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(232)
						::luxe::DebugError tmp16 = ::luxe::DebugError_obj::null_assertion(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(232)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					Float tmp14 = (_this->x + other->x);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(232)
					Float _x = tmp14;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(232)
					Float tmp15 = (_this->y + other->y);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(232)
					Float _y = tmp15;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(232)
					Float tmp16 = (_this->z + other->z);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(232)
					Float _z = tmp16;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(232)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(232)
					_this->ignore_listeners = true;
					HX_STACK_LINE(232)
					{
						HX_STACK_LINE(232)
						_this->x = _x;
						HX_STACK_LINE(232)
						bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(232)
						if ((tmp17)){
							HX_STACK_LINE(232)
							_this->x;
						}
						else{
							HX_STACK_LINE(232)
							bool tmp18 = (_this->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(232)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(232)
							if ((tmp18)){
								HX_STACK_LINE(232)
								bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(232)
								bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(232)
								tmp19 = !(tmp21);
							}
							else{
								HX_STACK_LINE(232)
								tmp19 = false;
							}
							HX_STACK_LINE(232)
							if ((tmp19)){
								HX_STACK_LINE(232)
								Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(232)
								_this->listen_x(tmp20);
							}
							HX_STACK_LINE(232)
							_this->x;
						}
					}
					HX_STACK_LINE(232)
					{
						HX_STACK_LINE(232)
						_this->y = _y;
						HX_STACK_LINE(232)
						bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(232)
						if ((tmp17)){
							HX_STACK_LINE(232)
							_this->y;
						}
						else{
							HX_STACK_LINE(232)
							bool tmp18 = (_this->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(232)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(232)
							if ((tmp18)){
								HX_STACK_LINE(232)
								bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(232)
								bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(232)
								tmp19 = !(tmp21);
							}
							else{
								HX_STACK_LINE(232)
								tmp19 = false;
							}
							HX_STACK_LINE(232)
							if ((tmp19)){
								HX_STACK_LINE(232)
								Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(232)
								_this->listen_y(tmp20);
							}
							HX_STACK_LINE(232)
							_this->y;
						}
					}
					HX_STACK_LINE(232)
					{
						HX_STACK_LINE(232)
						_this->z = _z;
						HX_STACK_LINE(232)
						bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(232)
						if ((tmp17)){
							HX_STACK_LINE(232)
							_this->z;
						}
						else{
							HX_STACK_LINE(232)
							bool tmp18 = (_this->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(232)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(232)
							if ((tmp18)){
								HX_STACK_LINE(232)
								bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(232)
								bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(232)
								tmp19 = !(tmp21);
							}
							else{
								HX_STACK_LINE(232)
								tmp19 = false;
							}
							HX_STACK_LINE(232)
							if ((tmp19)){
								HX_STACK_LINE(232)
								Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(232)
								_this->listen_z(tmp20);
							}
							HX_STACK_LINE(232)
							_this->z;
						}
					}
					HX_STACK_LINE(232)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(232)
					bool tmp17 = (_this->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(232)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(232)
					if ((tmp17)){
						HX_STACK_LINE(232)
						bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(232)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(232)
						tmp18 = !(tmp20);
					}
					else{
						HX_STACK_LINE(232)
						tmp18 = false;
					}
					HX_STACK_LINE(232)
					if ((tmp18)){
						HX_STACK_LINE(232)
						Float tmp19 = _this->x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(232)
						_this->listen_x(tmp19);
					}
					HX_STACK_LINE(232)
					bool tmp19 = (_this->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(232)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(232)
					if ((tmp19)){
						HX_STACK_LINE(232)
						bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(232)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(232)
						tmp20 = !(tmp22);
					}
					else{
						HX_STACK_LINE(232)
						tmp20 = false;
					}
					HX_STACK_LINE(232)
					if ((tmp20)){
						HX_STACK_LINE(232)
						Float tmp21 = _this->y;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(232)
						_this->listen_y(tmp21);
					}
					HX_STACK_LINE(232)
					bool tmp21 = (_this->listen_z != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(232)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(232)
					if ((tmp21)){
						HX_STACK_LINE(232)
						bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(232)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(232)
						tmp22 = !(tmp24);
					}
					else{
						HX_STACK_LINE(232)
						tmp22 = false;
					}
					HX_STACK_LINE(232)
					if ((tmp22)){
						HX_STACK_LINE(232)
						Float tmp23 = _this->z;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(232)
						_this->listen_z(tmp23);
					}
					HX_STACK_LINE(232)
					_this;
				}
				HX_STACK_LINE(232)
				tmp9 = _this;
			}
			HX_STACK_LINE(233)
			::phoenix::Color tmp10 = ::phoenix::Color_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp10,"tmp10");
			struct _Function_2_1{
				inline static Dynamic Block( ::phoenix::Vector &tmp9,::phoenix::Color &tmp10,::phoenix::Vector &tmp8){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Controller.hx",230,0x2da14382)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00") , tmp8,false);
						__result->Add(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00") , tmp9,false);
						__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp10,false);
						__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , true,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(230)
			Dynamic tmp11 = _Function_2_1::Block(tmp9,tmp10,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(230)
			tmp5->line(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,debug_ray,(void))

Void Controller_obj::add_movement_input( ::nape::geom::Vec2 input){
{
		HX_STACK_FRAME("Controller","add_movement_input",0x726f6dca,"Controller.add_movement_input","Controller.hx",241,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(input,"input")
		HX_STACK_LINE(241)
		this->input_vector = input;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,add_movement_input,(void))

Void Controller_obj::jump( ){
{
		HX_STACK_FRAME("Controller","jump",0xcc6b2de0,"Controller.jump","Controller.hx",245,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(246)
		bool tmp = this->grounded;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		if ((tmp1)){
			HX_STACK_LINE(246)
			return null();
		}
		HX_STACK_LINE(247)
		this->grounded = false;
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(248)
			::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			{
				HX_STACK_LINE(248)
				::nape::phys::Body tmp3 = this->get_body();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(248)
				::nape::phys::Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(248)
				::nape::geom::Vec2 tmp4 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(248)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(248)
				if ((tmp5)){
					HX_STACK_LINE(248)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(248)
				tmp2 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(248)
			::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(248)
			Float tmp3 = this->jump_impulse;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(248)
			Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(248)
			Float y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(248)
			{
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(248)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(248)
					if ((tmp5)){
						HX_STACK_LINE(248)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(248)
						tmp6 = false;
					}
					HX_STACK_LINE(248)
					if ((tmp6)){
						HX_STACK_LINE(248)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(248)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(248)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(248)
					bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(248)
					if ((tmp5)){
						HX_STACK_LINE(248)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(248)
					bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(248)
					if ((tmp6)){
						HX_STACK_LINE(248)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(248)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(248)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(248)
						if ((tmp6)){
							HX_STACK_LINE(248)
							tmp7 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(248)
							tmp7 = false;
						}
						HX_STACK_LINE(248)
						if ((tmp7)){
							HX_STACK_LINE(248)
							::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(248)
							::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(248)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(248)
						bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(248)
						if ((tmp6)){
							HX_STACK_LINE(248)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(248)
					tmp5 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(248)
				Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(248)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(248)
				if ((tmp7)){
					HX_STACK_LINE(248)
					bool tmp8 = (y != y);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(248)
					if ((tmp8)){
						HX_STACK_LINE(248)
						::String tmp9 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(248)
						::String tmp10 = (tmp9 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(248)
						HX_STACK_DO_THROW(tmp10);
					}
					HX_STACK_LINE(248)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(248)
						bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(248)
						if ((tmp9)){
							HX_STACK_LINE(248)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(248)
							_this1->_invalidate(tmp10);
						}
					}
				}
			}
			HX_STACK_LINE(248)
			{
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(248)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(248)
					if ((tmp5)){
						HX_STACK_LINE(248)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(248)
						tmp6 = false;
					}
					HX_STACK_LINE(248)
					if ((tmp6)){
						HX_STACK_LINE(248)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(248)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(248)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(248)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(248)
					if ((tmp5)){
						HX_STACK_LINE(248)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(248)
				_this->zpp_inner->y;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,jump,(void))

::nape::space::Space Controller_obj::get_space( ){
	HX_STACK_FRAME("Controller","get_space",0xbb52d2eb,"Controller.get_space","Controller.hx",262,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(263)
	::luxe::Physics tmp = ::Luxe_obj::physics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	::nape::space::Space tmp1 = tmp->nape->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_space,return )

::Creature Controller_obj::get_creature( ){
	HX_STACK_FRAME("Controller","get_creature",0x4af904ba,"Controller.get_creature","Controller.hx",267,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(268)
	::luxe::Entity tmp = this->get_entity();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	::Creature tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	tmp1 = hx::TCast< ::Creature >::cast(tmp);
	HX_STACK_LINE(268)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_creature,return )

::nape::phys::Body Controller_obj::get_body( ){
	HX_STACK_FRAME("Controller","get_body",0xdea4001d,"Controller.get_body","Controller.hx",272,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	::Creature tmp = this->get_creature();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	::nape::phys::Body tmp1 = tmp->body;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_body,return )

::nape::geom::AABB Controller_obj::get_bounds( ){
	HX_STACK_FRAME("Controller","get_bounds",0xdaeea0b0,"Controller.get_bounds","Controller.hx",277,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	::nape::geom::AABB tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	{
		HX_STACK_LINE(278)
		::nape::phys::Body tmp1 = this->get_body();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(278)
		::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(278)
		bool tmp2 = _this->zpp_inner->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(278)
		if ((tmp2)){
			HX_STACK_LINE(278)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no bounds","\x88","\xea","\xf6","\xa3"));
		}
		HX_STACK_LINE(278)
		::zpp_nape::geom::ZPP_AABB tmp3 = _this->zpp_inner->aabb;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(278)
		tmp = tmp3->wrapper();
	}
	HX_STACK_LINE(278)
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
	HX_STACK_FRAME("Controller","get_zero_friction",0x567daf56,"Controller.get_zero_friction","Controller.hx",252,0x2da14382)
	HX_STACK_LINE(253)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new((int)0,(int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_zero_friction,return )

::nape::phys::Material Controller_obj::get_normal_friction( ){
	HX_STACK_FRAME("Controller","get_normal_friction",0x18f547b7,"Controller.get_normal_friction","Controller.hx",257,0x2da14382)
	HX_STACK_LINE(258)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new((int)0,(int)4,(int)8,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
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
	HX_MARK_MEMBER_NAME(max_slope_angle,"max_slope_angle");
	HX_MARK_MEMBER_NAME(max_slope_y,"max_slope_y");
	HX_MARK_MEMBER_NAME(creature,"creature");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(grounded,"grounded");
	HX_MARK_MEMBER_NAME(slope,"slope");
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
	HX_VISIT_MEMBER_NAME(max_slope_angle,"max_slope_angle");
	HX_VISIT_MEMBER_NAME(max_slope_y,"max_slope_y");
	HX_VISIT_MEMBER_NAME(creature,"creature");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(grounded,"grounded");
	HX_VISIT_MEMBER_NAME(slope,"slope");
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
		if (HX_FIELD_EQ(inName,"max_slope_angle") ) { return max_slope_angle; }
		if (HX_FIELD_EQ(inName,"rays_horizontal") ) { return rays_horizontal; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"raycast_vertical") ) { return raycast_vertical_dyn(); }
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
		if (HX_FIELD_EQ(inName,"input_vector") ) { input_vector=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rays_vertical") ) { rays_vertical=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"skin_thickness") ) { skin_thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"max_slope_angle") ) { max_slope_angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rays_horizontal") ) { rays_horizontal=inValue.Cast< int >(); return inValue; }
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
	outFields->push(HX_HCSTRING("max_slope_angle","\x24","\xb9","\xe8","\x51"));
	outFields->push(HX_HCSTRING("max_slope_y","\x4a","\x39","\x4b","\xe6"));
	outFields->push(HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c"));
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("grounded","\xa6","\x6a","\x5b","\x90"));
	outFields->push(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"));
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
	{hx::fsFloat,(int)offsetof(Controller_obj,max_slope_angle),HX_HCSTRING("max_slope_angle","\x24","\xb9","\xe8","\x51")},
	{hx::fsFloat,(int)offsetof(Controller_obj,max_slope_y),HX_HCSTRING("max_slope_y","\x4a","\x39","\x4b","\xe6")},
	{hx::fsObject /*::Creature*/ ,(int)offsetof(Controller_obj,creature),HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c")},
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(Controller_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{hx::fsObject /*::nape::geom::AABB*/ ,(int)offsetof(Controller_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsBool,(int)offsetof(Controller_obj,grounded),HX_HCSTRING("grounded","\xa6","\x6a","\x5b","\x90")},
	{hx::fsBool,(int)offsetof(Controller_obj,slope),HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e")},
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
	HX_HCSTRING("max_slope_angle","\x24","\xb9","\xe8","\x51"),
	HX_HCSTRING("max_slope_y","\x4a","\x39","\x4b","\xe6"),
	HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c"),
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("grounded","\xa6","\x6a","\x5b","\x90"),
	HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"),
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

