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
		HX_STACK_FRAME("Controller","onadded",0xee193d8f,"Controller.onadded","Controller.hx",60,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		::nape::phys::Body tmp = this->get_body();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		::nape::phys::Body _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::String tmp1 = HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(60)
			::String tmp2 = (HX_HCSTRING("Body::","\x02","\x8e","\x7d","\x8f") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			_this->zpp_inner->immutable_midstep(tmp2);
			HX_STACK_LINE(60)
			bool tmp3 = _this->zpp_inner->norotate;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			bool tmp5 = (tmp4 != false);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			if ((tmp5)){
				HX_STACK_LINE(60)
				bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(60)
				_this->zpp_inner->norotate = tmp6;
				HX_STACK_LINE(60)
				_this->zpp_inner->invalidate_inertia();
			}
		}
		HX_STACK_LINE(60)
		bool tmp1 = _this->zpp_inner->norotate;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		!(tmp1);
	}
return null();
}


Void Controller_obj::update( Float dt){
{
		HX_STACK_FRAME("Controller","update",0x9ee88f7b,"Controller.update","Controller.hx",64,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(65)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			::nape::geom::Vec2 tmp1 = this->input_vector;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(65)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(65)
			{
				HX_STACK_LINE(65)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(65)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(65)
				if ((tmp2)){
					HX_STACK_LINE(65)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(65)
					tmp3 = false;
				}
				HX_STACK_LINE(65)
				if ((tmp3)){
					HX_STACK_LINE(65)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(65)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(65)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(65)
			{
				HX_STACK_LINE(65)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(65)
				bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(65)
				if ((tmp2)){
					HX_STACK_LINE(65)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(65)
			tmp = _this->zpp_inner->x;
		}
		HX_STACK_LINE(65)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		if ((tmp2)){
			HX_STACK_LINE(67)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::nape::phys::Body tmp4 = this->get_body();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(67)
				::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(67)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(67)
				if ((tmp6)){
					HX_STACK_LINE(67)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(67)
				tmp3 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(67)
			::nape::geom::Vec2 _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					bool tmp5 = (_g != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(67)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(67)
					if ((tmp5)){
						HX_STACK_LINE(67)
						tmp6 = _g->zpp_disp;
					}
					else{
						HX_STACK_LINE(67)
						tmp6 = false;
					}
					HX_STACK_LINE(67)
					if ((tmp6)){
						HX_STACK_LINE(67)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(67)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(67)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(67)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(67)
						if ((tmp7)){
							HX_STACK_LINE(67)
							_this->_validate();
						}
					}
					HX_STACK_LINE(67)
					tmp4 = _g->zpp_inner->x;
				}
				HX_STACK_LINE(67)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					::nape::geom::Vec2 tmp6 = this->input_vector;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(67)
					::nape::geom::Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(67)
					bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(67)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(67)
					if ((tmp7)){
						HX_STACK_LINE(67)
						tmp8 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(67)
						tmp8 = false;
					}
					HX_STACK_LINE(67)
					if ((tmp8)){
						HX_STACK_LINE(67)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(67)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(67)
						HX_STACK_DO_THROW(tmp10);
					}
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(67)
						bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(67)
						if ((tmp9)){
							HX_STACK_LINE(67)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(67)
					tmp5 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(67)
				Float tmp6 = this->acceleration;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(67)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				Float tmp8 = dt;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(67)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(67)
				Float tmp10 = (tmp4 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(67)
				Float x = tmp10;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						bool tmp11 = (_g != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(67)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(67)
						if ((tmp11)){
							HX_STACK_LINE(67)
							tmp12 = _g->zpp_disp;
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
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(67)
						bool tmp11 = _this->_immutable;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(67)
						if ((tmp11)){
							HX_STACK_LINE(67)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(67)
						bool tmp12 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(67)
						if ((tmp12)){
							HX_STACK_LINE(67)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(67)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						{
							HX_STACK_LINE(67)
							bool tmp12 = (_g != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(67)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(67)
							if ((tmp12)){
								HX_STACK_LINE(67)
								tmp13 = _g->zpp_disp;
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
						}
						HX_STACK_LINE(67)
						{
							HX_STACK_LINE(67)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(67)
							bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(67)
							if ((tmp12)){
								HX_STACK_LINE(67)
								_this->_validate();
							}
						}
						HX_STACK_LINE(67)
						tmp11 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(67)
					Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(67)
					bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(67)
					if ((tmp13)){
						HX_STACK_LINE(67)
						bool tmp14 = (x != x);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(67)
						if ((tmp14)){
							HX_STACK_LINE(67)
							::String tmp15 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(67)
							::String tmp16 = (tmp15 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(67)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(67)
						_g->zpp_inner->x = x;
						HX_STACK_LINE(67)
						{
							HX_STACK_LINE(67)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(67)
							bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(67)
							if ((tmp15)){
								HX_STACK_LINE(67)
								::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(67)
								_this->_invalidate(tmp16);
							}
						}
					}
				}
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						bool tmp11 = (_g != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(67)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(67)
						if ((tmp11)){
							HX_STACK_LINE(67)
							tmp12 = _g->zpp_disp;
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
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(67)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(67)
						if ((tmp11)){
							HX_STACK_LINE(67)
							_this->_validate();
						}
					}
					HX_STACK_LINE(67)
					_g->zpp_inner->x;
				}
			}
		}
		else{
			HX_STACK_LINE(71)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				::nape::phys::Body tmp4 = this->get_body();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(71)
				::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(71)
				::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(71)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(71)
				if ((tmp6)){
					HX_STACK_LINE(71)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(71)
				tmp3 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(71)
			::nape::geom::Vec2 _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(71)
				{
					HX_STACK_LINE(71)
					bool tmp5 = (_g != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(71)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(71)
					if ((tmp5)){
						HX_STACK_LINE(71)
						tmp6 = _g->zpp_disp;
					}
					else{
						HX_STACK_LINE(71)
						tmp6 = false;
					}
					HX_STACK_LINE(71)
					if ((tmp6)){
						HX_STACK_LINE(71)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(71)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(71)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(71)
					{
						HX_STACK_LINE(71)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(71)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(71)
						if ((tmp7)){
							HX_STACK_LINE(71)
							_this->_validate();
						}
					}
					HX_STACK_LINE(71)
					tmp4 = _g->zpp_inner->x;
				}
				HX_STACK_LINE(71)
				Float tmp5 = (tmp4 * ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(71)
				Float x = tmp5;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(71)
				{
					HX_STACK_LINE(71)
					{
						HX_STACK_LINE(71)
						bool tmp6 = (_g != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(71)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(71)
						if ((tmp6)){
							HX_STACK_LINE(71)
							tmp7 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(71)
							tmp7 = false;
						}
						HX_STACK_LINE(71)
						if ((tmp7)){
							HX_STACK_LINE(71)
							::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(71)
							::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(71)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(71)
					{
						HX_STACK_LINE(71)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(71)
						bool tmp6 = _this->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(71)
						if ((tmp6)){
							HX_STACK_LINE(71)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(71)
						bool tmp7 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(71)
						if ((tmp7)){
							HX_STACK_LINE(71)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(71)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(71)
					{
						HX_STACK_LINE(71)
						{
							HX_STACK_LINE(71)
							bool tmp7 = (_g != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(71)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(71)
							if ((tmp7)){
								HX_STACK_LINE(71)
								tmp8 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(71)
								tmp8 = false;
							}
							HX_STACK_LINE(71)
							if ((tmp8)){
								HX_STACK_LINE(71)
								::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(71)
								::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(71)
								HX_STACK_DO_THROW(tmp10);
							}
						}
						HX_STACK_LINE(71)
						{
							HX_STACK_LINE(71)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(71)
							bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(71)
							if ((tmp7)){
								HX_STACK_LINE(71)
								_this->_validate();
							}
						}
						HX_STACK_LINE(71)
						tmp6 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(71)
					Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(71)
					bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(71)
					if ((tmp8)){
						HX_STACK_LINE(71)
						bool tmp9 = (x != x);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(71)
						if ((tmp9)){
							HX_STACK_LINE(71)
							::String tmp10 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(71)
							::String tmp11 = (tmp10 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(71)
							HX_STACK_DO_THROW(tmp11);
						}
						HX_STACK_LINE(71)
						_g->zpp_inner->x = x;
						HX_STACK_LINE(71)
						{
							HX_STACK_LINE(71)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(71)
							bool tmp10 = (_this->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(71)
							if ((tmp10)){
								HX_STACK_LINE(71)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = _this;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(71)
								_this->_invalidate(tmp11);
							}
						}
					}
				}
				HX_STACK_LINE(71)
				{
					HX_STACK_LINE(71)
					{
						HX_STACK_LINE(71)
						bool tmp6 = (_g != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(71)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(71)
						if ((tmp6)){
							HX_STACK_LINE(71)
							tmp7 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(71)
							tmp7 = false;
						}
						HX_STACK_LINE(71)
						if ((tmp7)){
							HX_STACK_LINE(71)
							::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(71)
							::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(71)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(71)
					{
						HX_STACK_LINE(71)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(71)
						bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(71)
						if ((tmp6)){
							HX_STACK_LINE(71)
							_this->_validate();
						}
					}
					HX_STACK_LINE(71)
					_g->zpp_inner->x;
				}
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
			::nape::geom::Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(73)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::nape::phys::Body tmp7 = this->get_body();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(73)
						::nape::phys::Body _this1 = tmp7;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(73)
						::nape::geom::Vec2 tmp8 = _this1->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(73)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						if ((tmp9)){
							HX_STACK_LINE(73)
							_this1->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(73)
						tmp6 = _this1->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(73)
					::nape::geom::Vec2 _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(73)
					bool tmp7 = (_this1 != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(73)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(73)
					if ((tmp7)){
						HX_STACK_LINE(73)
						tmp8 = _this1->zpp_disp;
					}
					else{
						HX_STACK_LINE(73)
						tmp8 = false;
					}
					HX_STACK_LINE(73)
					if ((tmp8)){
						HX_STACK_LINE(73)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						HX_STACK_DO_THROW(tmp10);
					}
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(73)
						bool tmp9 = (_this2->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						if ((tmp9)){
							HX_STACK_LINE(73)
							_this2->_validate();
						}
					}
					HX_STACK_LINE(73)
					tmp5 = _this1->zpp_inner->x;
				}
				HX_STACK_LINE(73)
				Float value = tmp5;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(73)
				Float tmp6 = this->max_speed;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				Float a = tmp7;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(73)
				Float tmp8 = this->max_speed;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				Float b = tmp8;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(73)
				bool tmp9 = (value < a);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(73)
				if ((tmp9)){
					HX_STACK_LINE(73)
					tmp4 = a;
				}
				else{
					HX_STACK_LINE(73)
					bool tmp10 = (value > b);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(73)
					if ((tmp10)){
						HX_STACK_LINE(73)
						tmp4 = b;
					}
					else{
						HX_STACK_LINE(73)
						tmp4 = value;
					}
				}
			}
			HX_STACK_LINE(73)
			Float x = tmp4;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(73)
					if ((tmp5)){
						HX_STACK_LINE(73)
						tmp6 = _this->zpp_disp;
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
				}
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(73)
					bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					if ((tmp5)){
						HX_STACK_LINE(73)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(73)
					bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(73)
					if ((tmp6)){
						HX_STACK_LINE(73)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(73)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(73)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(73)
						if ((tmp6)){
							HX_STACK_LINE(73)
							tmp7 = _this->zpp_disp;
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
					}
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(73)
						bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(73)
						if ((tmp6)){
							HX_STACK_LINE(73)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(73)
					tmp5 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(73)
				Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				if ((tmp7)){
					HX_STACK_LINE(73)
					bool tmp8 = (x != x);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(73)
					if ((tmp8)){
						HX_STACK_LINE(73)
						::String tmp9 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						::String tmp10 = (tmp9 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						HX_STACK_DO_THROW(tmp10);
					}
					HX_STACK_LINE(73)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(73)
						bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						if ((tmp9)){
							HX_STACK_LINE(73)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(73)
							_this1->_invalidate(tmp10);
						}
					}
				}
			}
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(73)
					if ((tmp5)){
						HX_STACK_LINE(73)
						tmp6 = _this->zpp_disp;
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
				}
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(73)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					if ((tmp5)){
						HX_STACK_LINE(73)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(73)
				_this->zpp_inner->x;
			}
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(74)
				::nape::phys::Body tmp4 = this->get_body();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(74)
				::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(74)
				::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(74)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(74)
				if ((tmp6)){
					HX_STACK_LINE(74)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(74)
				tmp3 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(74)
			::nape::geom::Vec2 _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(74)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					bool tmp5 = (_g != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(74)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(74)
					if ((tmp5)){
						HX_STACK_LINE(74)
						tmp6 = _g->zpp_disp;
					}
					else{
						HX_STACK_LINE(74)
						tmp6 = false;
					}
					HX_STACK_LINE(74)
					if ((tmp6)){
						HX_STACK_LINE(74)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(74)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(74)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(74)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(74)
						if ((tmp7)){
							HX_STACK_LINE(74)
							_this->_validate();
						}
					}
					HX_STACK_LINE(74)
					tmp4 = _g->zpp_inner->y;
				}
				HX_STACK_LINE(74)
				Float tmp5 = this->gravity;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(74)
				Float tmp6 = dt;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(74)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(74)
				Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(74)
				Float y = tmp8;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						bool tmp9 = (_g != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(74)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(74)
						if ((tmp9)){
							HX_STACK_LINE(74)
							tmp10 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(74)
							tmp10 = false;
						}
						HX_STACK_LINE(74)
						if ((tmp10)){
							HX_STACK_LINE(74)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(74)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(74)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(74)
						bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(74)
						if ((tmp9)){
							HX_STACK_LINE(74)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(74)
						bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(74)
						if ((tmp10)){
							HX_STACK_LINE(74)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(74)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						{
							HX_STACK_LINE(74)
							bool tmp10 = (_g != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(74)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(74)
							if ((tmp10)){
								HX_STACK_LINE(74)
								tmp11 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(74)
								tmp11 = false;
							}
							HX_STACK_LINE(74)
							if ((tmp11)){
								HX_STACK_LINE(74)
								::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(74)
								::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(74)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(74)
						{
							HX_STACK_LINE(74)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(74)
							bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(74)
							if ((tmp10)){
								HX_STACK_LINE(74)
								_this->_validate();
							}
						}
						HX_STACK_LINE(74)
						tmp9 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(74)
					Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(74)
					bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(74)
					if ((tmp11)){
						HX_STACK_LINE(74)
						bool tmp12 = (y != y);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(74)
						if ((tmp12)){
							HX_STACK_LINE(74)
							::String tmp13 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(74)
							::String tmp14 = (tmp13 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(74)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(74)
						_g->zpp_inner->y = y;
						HX_STACK_LINE(74)
						{
							HX_STACK_LINE(74)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(74)
							bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(74)
							if ((tmp13)){
								HX_STACK_LINE(74)
								::zpp_nape::geom::ZPP_Vec2 tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(74)
								_this->_invalidate(tmp14);
							}
						}
					}
				}
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						bool tmp9 = (_g != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(74)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(74)
						if ((tmp9)){
							HX_STACK_LINE(74)
							tmp10 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(74)
							tmp10 = false;
						}
						HX_STACK_LINE(74)
						if ((tmp10)){
							HX_STACK_LINE(74)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(74)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(74)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(74)
						bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(74)
						if ((tmp9)){
							HX_STACK_LINE(74)
							_this->_validate();
						}
					}
					HX_STACK_LINE(74)
					_g->zpp_inner->y;
				}
			}
		}
		HX_STACK_LINE(75)
		::nape::geom::Vec2 tmp3 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		this->input_vector = tmp3;
		HX_STACK_LINE(77)
		Float tmp4 = dt;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		this->slope_raycast(tmp4);
		HX_STACK_LINE(78)
		Float tmp5 = dt;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		this->raycast_horizontal(tmp5);
		HX_STACK_LINE(79)
		Float tmp6 = dt;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(79)
		this->raycast_vertical(tmp6);
	}
return null();
}


Void Controller_obj::raycast_horizontal( Float dt){
{
		HX_STACK_FRAME("Controller","raycast_horizontal",0x12aa036c,"Controller.raycast_horizontal","Controller.hx",83,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(85)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			::nape::phys::Body tmp1 = this->get_body();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(85)
			::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(85)
			if ((tmp3)){
				HX_STACK_LINE(85)
				_this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(85)
			tmp = _this->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(85)
		Float tmp1 = dt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		::nape::geom::Vec2 tmp2 = tmp->mul(tmp1,false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		::nape::geom::Vec2 movement_delta = tmp2;		HX_STACK_VAR(movement_delta,"movement_delta");
		HX_STACK_LINE(87)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				bool tmp4 = (movement_delta != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(87)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				if ((tmp4)){
					HX_STACK_LINE(87)
					tmp5 = movement_delta->zpp_disp;
				}
				else{
					HX_STACK_LINE(87)
					tmp5 = false;
				}
				HX_STACK_LINE(87)
				if ((tmp5)){
					HX_STACK_LINE(87)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(87)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(87)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(87)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(87)
				if ((tmp4)){
					HX_STACK_LINE(87)
					_this->_validate();
				}
			}
			HX_STACK_LINE(87)
			tmp3 = movement_delta->zpp_inner->x;
		}
		HX_STACK_LINE(87)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		if ((tmp4)){
			HX_STACK_LINE(87)
			return null();
		}
		HX_STACK_LINE(90)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			::nape::geom::AABB tmp6 = this->get_bounds();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(90)
			::nape::geom::AABB _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(90)
				bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(90)
				if ((tmp7)){
					HX_STACK_LINE(90)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(90)
			tmp5 = _this->zpp_inner->minx;
		}
		HX_STACK_LINE(90)
		Float tmp6 = this->skin_thickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(90)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(90)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			::nape::geom::AABB tmp9 = this->get_bounds();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(90)
			::nape::geom::AABB _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(90)
				bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(90)
				if ((tmp10)){
					HX_STACK_LINE(90)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(90)
			tmp8 = _this->zpp_inner->miny;
		}
		HX_STACK_LINE(90)
		Float tmp9 = this->skin_thickness;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(90)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(91)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			::nape::geom::AABB tmp12 = this->get_bounds();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(91)
			::nape::geom::AABB _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(91)
				bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(91)
				if ((tmp13)){
					HX_STACK_LINE(91)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(91)
				tmp11 = (_this1->maxx - _this1->minx);
			}
		}
		HX_STACK_LINE(91)
		Float tmp12 = this->skin_thickness;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(91)
		Float tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(91)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(91)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			::nape::geom::AABB tmp16 = this->get_bounds();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(91)
			::nape::geom::AABB _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(91)
				bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(91)
				if ((tmp17)){
					HX_STACK_LINE(91)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(91)
				tmp15 = (_this1->maxy - _this1->miny);
			}
		}
		HX_STACK_LINE(91)
		Float tmp16 = this->skin_thickness;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(91)
		Float tmp17 = (tmp16 * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(91)
		Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(89)
		::nape::geom::AABB tmp19 = ::nape::geom::AABB_obj::__new(tmp7,tmp10,tmp14,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(89)
		::nape::geom::AABB skin_bounds = tmp19;		HX_STACK_VAR(skin_bounds,"skin_bounds");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(93)
			int tmp20 = this->rays_vertical;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(93)
			int _g = tmp20;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			while((true)){
				HX_STACK_LINE(93)
				bool tmp21 = (_g1 < _g);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(93)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(93)
				if ((tmp22)){
					HX_STACK_LINE(93)
					break;
				}
				HX_STACK_LINE(93)
				int tmp23 = (_g1)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(93)
				int y = tmp23;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(95)
				bool tmp24 = (y == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(95)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(95)
				if ((tmp24)){
					HX_STACK_LINE(95)
					tmp25 = this->slope;
				}
				else{
					HX_STACK_LINE(95)
					tmp25 = false;
				}
				HX_STACK_LINE(95)
				if ((tmp25)){
					HX_STACK_LINE(95)
					continue;
				}
				HX_STACK_LINE(97)
				::nape::geom::Vec2 tmp26 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(97)
				::nape::geom::Vec2 ray_origin = tmp26;		HX_STACK_VAR(ray_origin,"ray_origin");
				HX_STACK_LINE(99)
				int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(99)
				{
					HX_STACK_LINE(99)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(99)
					{
						HX_STACK_LINE(99)
						bool tmp29 = (movement_delta != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(99)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(99)
						if ((tmp29)){
							HX_STACK_LINE(99)
							tmp30 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(99)
							tmp30 = false;
						}
						HX_STACK_LINE(99)
						if ((tmp30)){
							HX_STACK_LINE(99)
							::String tmp31 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(99)
							::String tmp32 = (tmp31 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(99)
							HX_STACK_DO_THROW(tmp32);
						}
						HX_STACK_LINE(99)
						{
							HX_STACK_LINE(99)
							::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(99)
							bool tmp31 = (_this->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(99)
							if ((tmp31)){
								HX_STACK_LINE(99)
								_this->_validate();
							}
						}
						HX_STACK_LINE(99)
						tmp28 = movement_delta->zpp_inner->x;
					}
					HX_STACK_LINE(99)
					Float x = tmp28;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(99)
					bool tmp29 = (x >= (int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(99)
					if ((tmp29)){
						HX_STACK_LINE(99)
						tmp27 = (int)1;
					}
					else{
						HX_STACK_LINE(99)
						tmp27 = (int)-1;
					}
				}
				HX_STACK_LINE(99)
				int ray_direction = tmp27;		HX_STACK_VAR(ray_direction,"ray_direction");
				HX_STACK_LINE(101)
				Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(101)
				{
					HX_STACK_LINE(101)
					{
						HX_STACK_LINE(101)
						bool tmp29 = (movement_delta != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(101)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(101)
						if ((tmp29)){
							HX_STACK_LINE(101)
							tmp30 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(101)
							tmp30 = false;
						}
						HX_STACK_LINE(101)
						if ((tmp30)){
							HX_STACK_LINE(101)
							::String tmp31 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(101)
							::String tmp32 = (tmp31 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(101)
							HX_STACK_DO_THROW(tmp32);
						}
					}
					HX_STACK_LINE(101)
					{
						HX_STACK_LINE(101)
						::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(101)
						bool tmp29 = (_this->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(101)
						if ((tmp29)){
							HX_STACK_LINE(101)
							_this->_validate();
						}
					}
					HX_STACK_LINE(101)
					tmp28 = movement_delta->zpp_inner->x;
				}
				HX_STACK_LINE(101)
				bool tmp29 = (tmp28 > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(101)
				if ((tmp29)){
					HX_STACK_LINE(103)
					Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(103)
					{
						HX_STACK_LINE(103)
						::nape::geom::Vec2 tmp31 = skin_bounds->zpp_inner->getmin();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(103)
						::nape::geom::Vec2 _this = tmp31;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(103)
						{
							HX_STACK_LINE(103)
							bool tmp32 = (_this != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(103)
							bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(103)
							if ((tmp32)){
								HX_STACK_LINE(103)
								tmp33 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(103)
								tmp33 = false;
							}
							HX_STACK_LINE(103)
							if ((tmp33)){
								HX_STACK_LINE(103)
								::String tmp34 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(103)
								::String tmp35 = (tmp34 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(103)
								HX_STACK_DO_THROW(tmp35);
							}
						}
						HX_STACK_LINE(103)
						{
							HX_STACK_LINE(103)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(103)
							bool tmp32 = (_this1->_validate != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(103)
							if ((tmp32)){
								HX_STACK_LINE(103)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(103)
						tmp30 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(103)
					Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(103)
					{
						HX_STACK_LINE(103)
						::nape::geom::Vec2 tmp32 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(103)
						::nape::geom::Vec2 _this = tmp32;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(103)
						{
							HX_STACK_LINE(103)
							bool tmp33 = (_this != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(103)
							bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(103)
							if ((tmp33)){
								HX_STACK_LINE(103)
								tmp34 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(103)
								tmp34 = false;
							}
							HX_STACK_LINE(103)
							if ((tmp34)){
								HX_STACK_LINE(103)
								::String tmp35 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(103)
								::String tmp36 = (tmp35 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(103)
								HX_STACK_DO_THROW(tmp36);
							}
						}
						HX_STACK_LINE(103)
						{
							HX_STACK_LINE(103)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(103)
							bool tmp33 = (_this1->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(103)
							if ((tmp33)){
								HX_STACK_LINE(103)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(103)
						tmp31 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(103)
					Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(103)
					{
						HX_STACK_LINE(103)
						{
							HX_STACK_LINE(103)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(103)
							bool tmp33 = (_this->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(103)
							if ((tmp33)){
								HX_STACK_LINE(103)
								_this->_validate();
							}
						}
						HX_STACK_LINE(103)
						{
							HX_STACK_LINE(103)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(103)
							tmp32 = (_this->maxy - _this->miny);
						}
					}
					HX_STACK_LINE(103)
					int tmp33 = this->rays_vertical;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(103)
					int tmp34 = (tmp33 - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(103)
					Float tmp35 = (Float(tmp32) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(103)
					int tmp36 = y;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(103)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(103)
					Float tmp38 = (tmp31 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(103)
					::nape::geom::Vec2 tmp39 = ::nape::geom::Vec2_obj::__new(tmp30,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(103)
					ray_origin = tmp39;
				}
				else{
					HX_STACK_LINE(107)
					Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						::nape::geom::Vec2 tmp31 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(107)
						::nape::geom::Vec2 _this = tmp31;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(107)
						{
							HX_STACK_LINE(107)
							bool tmp32 = (_this != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(107)
							bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(107)
							if ((tmp32)){
								HX_STACK_LINE(107)
								tmp33 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(107)
								tmp33 = false;
							}
							HX_STACK_LINE(107)
							if ((tmp33)){
								HX_STACK_LINE(107)
								::String tmp34 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(107)
								::String tmp35 = (tmp34 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(107)
								HX_STACK_DO_THROW(tmp35);
							}
						}
						HX_STACK_LINE(107)
						{
							HX_STACK_LINE(107)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(107)
							bool tmp32 = (_this1->_validate != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(107)
							if ((tmp32)){
								HX_STACK_LINE(107)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(107)
						tmp30 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(107)
					Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						::nape::geom::Vec2 tmp32 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(107)
						::nape::geom::Vec2 _this = tmp32;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(107)
						{
							HX_STACK_LINE(107)
							bool tmp33 = (_this != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(107)
							bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(107)
							if ((tmp33)){
								HX_STACK_LINE(107)
								tmp34 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(107)
								tmp34 = false;
							}
							HX_STACK_LINE(107)
							if ((tmp34)){
								HX_STACK_LINE(107)
								::String tmp35 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(107)
								::String tmp36 = (tmp35 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(107)
								HX_STACK_DO_THROW(tmp36);
							}
						}
						HX_STACK_LINE(107)
						{
							HX_STACK_LINE(107)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(107)
							bool tmp33 = (_this1->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(107)
							if ((tmp33)){
								HX_STACK_LINE(107)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(107)
						tmp31 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(107)
					Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						{
							HX_STACK_LINE(107)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(107)
							bool tmp33 = (_this->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(107)
							if ((tmp33)){
								HX_STACK_LINE(107)
								_this->_validate();
							}
						}
						HX_STACK_LINE(107)
						{
							HX_STACK_LINE(107)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(107)
							tmp32 = (_this->maxy - _this->miny);
						}
					}
					HX_STACK_LINE(107)
					int tmp33 = this->rays_vertical;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(107)
					int tmp34 = (tmp33 - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(107)
					Float tmp35 = (Float(tmp32) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(107)
					int tmp36 = y;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(107)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(107)
					Float tmp38 = (tmp31 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(107)
					::nape::geom::Vec2 tmp39 = ::nape::geom::Vec2_obj::__new(tmp30,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(107)
					ray_origin = tmp39;
				}
				HX_STACK_LINE(110)
				::nape::geom::Vec2 tmp30 = ray_origin;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(110)
				::nape::geom::Vec2 tmp31 = ::nape::geom::Vec2_obj::__new(ray_direction,(int)0);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(110)
				::nape::geom::Ray tmp32 = ::nape::geom::Ray_obj::__new(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(110)
				::nape::geom::Ray ray = tmp32;		HX_STACK_VAR(ray,"ray");
				HX_STACK_LINE(111)
				{
					HX_STACK_LINE(111)
					Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(111)
					{
						HX_STACK_LINE(111)
						bool tmp34 = (movement_delta != null());		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(111)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(111)
						if ((tmp34)){
							HX_STACK_LINE(111)
							tmp35 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(111)
							tmp35 = false;
						}
						HX_STACK_LINE(111)
						if ((tmp35)){
							HX_STACK_LINE(111)
							::String tmp36 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(111)
							::String tmp37 = (tmp36 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(111)
							HX_STACK_DO_THROW(tmp37);
						}
						HX_STACK_LINE(111)
						{
							HX_STACK_LINE(111)
							::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(111)
							bool tmp36 = (_this->_validate != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(111)
							if ((tmp36)){
								HX_STACK_LINE(111)
								_this->_validate();
							}
						}
						HX_STACK_LINE(111)
						tmp33 = movement_delta->zpp_inner->x;
					}
					HX_STACK_LINE(111)
					Float tmp34 = ::Math_obj::abs(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(111)
					Float tmp35 = this->skin_thickness;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(111)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(111)
					Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(111)
					{
						HX_STACK_LINE(111)
						{
							HX_STACK_LINE(111)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(111)
							bool tmp38 = (_this->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(111)
							if ((tmp38)){
								HX_STACK_LINE(111)
								_this->_validate();
							}
						}
						HX_STACK_LINE(111)
						{
							HX_STACK_LINE(111)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(111)
							tmp37 = (_this->maxx - _this->minx);
						}
					}
					HX_STACK_LINE(111)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(111)
					Float maxDistance = tmp38;		HX_STACK_VAR(maxDistance,"maxDistance");
					HX_STACK_LINE(111)
					{
						HX_STACK_LINE(111)
						bool tmp39 = (maxDistance != maxDistance);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(111)
						if ((tmp39)){
							HX_STACK_LINE(111)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: maxDistance cannot be NaN","\xc6","\x98","\x5d","\x73"));
						}
						HX_STACK_LINE(111)
						ray->zpp_inner->maxdist = maxDistance;
					}
					HX_STACK_LINE(111)
					ray->zpp_inner->maxdist;
				}
				HX_STACK_LINE(113)
				::nape::space::Space tmp33 = this->get_space();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(113)
				::nape::geom::Ray tmp34 = ray;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(113)
				::nape::geom::RayResult tmp35 = tmp33->rayCast(tmp34,null(),null());		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(113)
				::nape::geom::RayResult ray_result = tmp35;		HX_STACK_VAR(ray_result,"ray_result");
				HX_STACK_LINE(115)
				bool tmp36 = (ray_result != null());		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(115)
				if ((tmp36)){
					HX_STACK_LINE(117)
					::nape::phys::Body tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(117)
					{
						HX_STACK_LINE(117)
						::nape::shape::Shape tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(117)
						{
							HX_STACK_LINE(117)
							{
								HX_STACK_LINE(117)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp39 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(117)
								bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(117)
								if ((tmp40)){
									HX_STACK_LINE(117)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(117)
							tmp38 = ray_result->zpp_inner->shape;
						}
						HX_STACK_LINE(117)
						::nape::shape::Shape _this = tmp38;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(117)
						::zpp_nape::phys::ZPP_Body tmp39 = _this->zpp_inner->body;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(117)
						bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(117)
						if ((tmp40)){
							HX_STACK_LINE(117)
							::zpp_nape::phys::ZPP_Body tmp41 = _this->zpp_inner->body;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(117)
							tmp37 = tmp41->outer;
						}
						else{
							HX_STACK_LINE(117)
							tmp37 = null();
						}
					}
					HX_STACK_LINE(117)
					::nape::phys::Body hit_body = tmp37;		HX_STACK_VAR(hit_body,"hit_body");
					HX_STACK_LINE(118)
					Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(118)
					{
						HX_STACK_LINE(118)
						::nape::geom::Vec2 tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(118)
						{
							HX_STACK_LINE(118)
							::nape::phys::Body tmp40 = this->get_body();		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(118)
							::nape::phys::Body _this = tmp40;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(118)
							::nape::geom::Vec2 tmp41 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(118)
							bool tmp42 = (tmp41 == null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(118)
							if ((tmp42)){
								HX_STACK_LINE(118)
								_this->zpp_inner->setupVelocity();
							}
							HX_STACK_LINE(118)
							tmp39 = _this->zpp_inner->wrap_vel;
						}
						HX_STACK_LINE(118)
						::nape::geom::Vec2 _this = tmp39;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(118)
						{
							HX_STACK_LINE(118)
							bool tmp40 = (_this != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(118)
							bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(118)
							if ((tmp40)){
								HX_STACK_LINE(118)
								tmp41 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(118)
								tmp41 = false;
							}
							HX_STACK_LINE(118)
							if ((tmp41)){
								HX_STACK_LINE(118)
								::String tmp42 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(118)
								::String tmp43 = (tmp42 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(118)
								HX_STACK_DO_THROW(tmp43);
							}
						}
						HX_STACK_LINE(118)
						{
							HX_STACK_LINE(118)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(118)
							bool tmp40 = (_this1->_validate != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(118)
							if ((tmp40)){
								HX_STACK_LINE(118)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(118)
						tmp38 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(118)
					Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(118)
					{
						HX_STACK_LINE(118)
						bool tmp40 = hit_body->zpp_inner->world;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(118)
						if ((tmp40)){
							HX_STACK_LINE(118)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no mass","\x47","\x6a","\x54","\x2b"));
						}
						HX_STACK_LINE(118)
						hit_body->zpp_inner->validate_mass();
						HX_STACK_LINE(118)
						int tmp41 = hit_body->zpp_inner->massMode;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(118)
						bool tmp42 = (tmp41 == (int)0);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(118)
						bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(118)
						if ((tmp42)){
							HX_STACK_LINE(118)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp44 = hit_body->zpp_inner->shapes;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(118)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(118)
							::zpp_nape::util::ZNPNode_ZPP_Shape tmp46 = tmp45->head;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(118)
							tmp43 = (tmp46 == null());
						}
						else{
							HX_STACK_LINE(118)
							tmp43 = false;
						}
						HX_STACK_LINE(118)
						if ((tmp43)){
							HX_STACK_LINE(118)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes","\x3f","\xab","\x6b","\xcb"));
						}
						HX_STACK_LINE(118)
						tmp39 = hit_body->zpp_inner->cmass;
					}
					HX_STACK_LINE(118)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(118)
					::nape::geom::Vec2 tmp41 = ::nape::geom::Vec2_obj::__new(tmp40,(int)0);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(118)
					hit_body->applyImpulse(tmp41,null(),null());
					HX_STACK_LINE(119)
					Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(119)
					{
						HX_STACK_LINE(119)
						::nape::geom::Vec2 tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(119)
						{
							HX_STACK_LINE(119)
							{
								HX_STACK_LINE(119)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp44 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(119)
								bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(119)
								if ((tmp45)){
									HX_STACK_LINE(119)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(119)
							tmp43 = ray_result->zpp_inner->normal;
						}
						HX_STACK_LINE(119)
						::nape::geom::Vec2 _this = tmp43;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(119)
						{
							HX_STACK_LINE(119)
							bool tmp44 = (_this != null());		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(119)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(119)
							if ((tmp44)){
								HX_STACK_LINE(119)
								tmp45 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(119)
								tmp45 = false;
							}
							HX_STACK_LINE(119)
							if ((tmp45)){
								HX_STACK_LINE(119)
								::String tmp46 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(119)
								::String tmp47 = (tmp46 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(119)
								HX_STACK_DO_THROW(tmp47);
							}
						}
						HX_STACK_LINE(119)
						{
							HX_STACK_LINE(119)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(119)
							bool tmp44 = (_this1->_validate != null());		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(119)
							if ((tmp44)){
								HX_STACK_LINE(119)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(119)
						tmp42 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(119)
					bool tmp43 = (tmp42 == (int)0);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(119)
					bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(119)
					bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(119)
					if ((tmp44)){
						HX_STACK_LINE(119)
						Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(119)
						{
							HX_STACK_LINE(119)
							::nape::geom::Vec2 tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(119)
							{
								HX_STACK_LINE(119)
								{
									HX_STACK_LINE(119)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp48 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(119)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(119)
									bool tmp50 = (tmp49 != null());		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(119)
									bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(119)
									bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(119)
									if ((tmp52)){
										HX_STACK_LINE(119)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(119)
								::nape::geom::Vec2 tmp48 = ray_result->zpp_inner->normal;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(119)
								tmp47 = tmp48;
							}
							HX_STACK_LINE(119)
							::nape::geom::Vec2 _this = tmp47;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(119)
							{
								HX_STACK_LINE(119)
								bool tmp48 = (_this != null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(119)
								bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(119)
								bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(119)
								bool tmp51 = tmp49;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(119)
								if ((tmp51)){
									HX_STACK_LINE(119)
									tmp50 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(119)
									tmp50 = false;
								}
								HX_STACK_LINE(119)
								bool tmp52 = tmp50;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(119)
								if ((tmp52)){
									HX_STACK_LINE(119)
									::String tmp53 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(119)
									::String tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(119)
									::String tmp55 = (tmp54 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(119)
									::String tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(119)
									::String tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(119)
									HX_STACK_DO_THROW(tmp57);
								}
							}
							HX_STACK_LINE(119)
							{
								HX_STACK_LINE(119)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(119)
								bool tmp48 = (_this1->_validate != null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(119)
								bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(119)
								bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(119)
								if ((tmp50)){
									HX_STACK_LINE(119)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(119)
							Float tmp48 = _this->zpp_inner->y;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(119)
							tmp46 = tmp48;
						}
						HX_STACK_LINE(119)
						Float tmp47 = this->max_slope_y;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(119)
						Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(119)
						tmp45 = (tmp46 > tmp48);
					}
					else{
						HX_STACK_LINE(119)
						tmp45 = true;
					}
					HX_STACK_LINE(119)
					if ((tmp45)){
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
								::nape::geom::Vec2 tmp48 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(121)
								bool tmp49 = (tmp48 == null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(121)
								if ((tmp49)){
									HX_STACK_LINE(121)
									_this->zpp_inner->setupVelocity();
								}
								HX_STACK_LINE(121)
								tmp46 = _this->zpp_inner->wrap_vel;
							}
							HX_STACK_LINE(121)
							::nape::geom::Vec2 _this = tmp46;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									bool tmp47 = (_this != null());		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(121)
									bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(121)
									if ((tmp47)){
										HX_STACK_LINE(121)
										tmp48 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(121)
										tmp48 = false;
									}
									HX_STACK_LINE(121)
									if ((tmp48)){
										HX_STACK_LINE(121)
										::String tmp49 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(121)
										::String tmp50 = (tmp49 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(121)
										HX_STACK_DO_THROW(tmp50);
									}
								}
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(121)
									bool tmp47 = _this1->_immutable;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(121)
									if ((tmp47)){
										HX_STACK_LINE(121)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(121)
									bool tmp48 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(121)
									if ((tmp48)){
										HX_STACK_LINE(121)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(121)
								Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									{
										HX_STACK_LINE(121)
										bool tmp48 = (_this != null());		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(121)
										bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(121)
										if ((tmp48)){
											HX_STACK_LINE(121)
											tmp49 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(121)
											tmp49 = false;
										}
										HX_STACK_LINE(121)
										if ((tmp49)){
											HX_STACK_LINE(121)
											::String tmp50 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(121)
											::String tmp51 = (tmp50 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(121)
											HX_STACK_DO_THROW(tmp51);
										}
									}
									HX_STACK_LINE(121)
									{
										HX_STACK_LINE(121)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(121)
										bool tmp48 = (_this1->_validate != null());		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(121)
										if ((tmp48)){
											HX_STACK_LINE(121)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(121)
									tmp47 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(121)
								bool tmp48 = (tmp47 != (int)0);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(121)
								if ((tmp48)){
									HX_STACK_LINE(121)
									bool tmp49 = false;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(121)
									if ((tmp49)){
										HX_STACK_LINE(121)
										::String tmp50 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(121)
										::String tmp51 = (tmp50 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(121)
										HX_STACK_DO_THROW(tmp51);
									}
									HX_STACK_LINE(121)
									_this->zpp_inner->x = (int)0;
									HX_STACK_LINE(121)
									{
										HX_STACK_LINE(121)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(121)
										bool tmp50 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(121)
										if ((tmp50)){
											HX_STACK_LINE(121)
											::zpp_nape::geom::ZPP_Vec2 tmp51 = _this1;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(121)
											_this1->_invalidate(tmp51);
										}
									}
								}
							}
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									bool tmp47 = (_this != null());		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(121)
									bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(121)
									if ((tmp47)){
										HX_STACK_LINE(121)
										tmp48 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(121)
										tmp48 = false;
									}
									HX_STACK_LINE(121)
									if ((tmp48)){
										HX_STACK_LINE(121)
										::String tmp49 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(121)
										::String tmp50 = (tmp49 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(121)
										HX_STACK_DO_THROW(tmp50);
									}
								}
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(121)
									bool tmp47 = (_this1->_validate != null());		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(121)
									if ((tmp47)){
										HX_STACK_LINE(121)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(121)
								_this->zpp_inner->x;
							}
						}
						HX_STACK_LINE(122)
						{
							HX_STACK_LINE(122)
							::nape::geom::Vec2 tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(122)
							{
								HX_STACK_LINE(122)
								::nape::phys::Body tmp47 = this->get_body();		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(122)
								::nape::phys::Body _this = tmp47;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(122)
								::nape::geom::Vec2 tmp48 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(122)
								bool tmp49 = (tmp48 == null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(122)
								if ((tmp49)){
									HX_STACK_LINE(122)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(122)
								tmp46 = _this->zpp_inner->wrap_pos;
							}
							HX_STACK_LINE(122)
							::nape::geom::Vec2 _this = tmp46;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(122)
							Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(122)
							{
								HX_STACK_LINE(122)
								Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(122)
								{
									HX_STACK_LINE(122)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp49 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(122)
									bool tmp50 = (tmp49 != null());		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(122)
									if ((tmp50)){
										HX_STACK_LINE(122)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
									HX_STACK_LINE(122)
									tmp48 = ray_result->zpp_inner->toiDistance;
								}
								HX_STACK_LINE(122)
								::nape::geom::Vec2 tmp49 = ray->at(tmp48,null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(122)
								::nape::geom::Vec2 _this1 = tmp49;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(122)
								bool tmp50 = (_this1 != null());		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(122)
								bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(122)
								if ((tmp50)){
									HX_STACK_LINE(122)
									tmp51 = _this1->zpp_disp;
								}
								else{
									HX_STACK_LINE(122)
									tmp51 = false;
								}
								HX_STACK_LINE(122)
								if ((tmp51)){
									HX_STACK_LINE(122)
									::String tmp52 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(122)
									::String tmp53 = (tmp52 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(122)
									HX_STACK_DO_THROW(tmp53);
								}
								HX_STACK_LINE(122)
								{
									HX_STACK_LINE(122)
									::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(122)
									bool tmp52 = (_this2->_validate != null());		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(122)
									if ((tmp52)){
										HX_STACK_LINE(122)
										_this2->_validate();
									}
								}
								HX_STACK_LINE(122)
								tmp47 = _this1->zpp_inner->x;
							}
							HX_STACK_LINE(122)
							Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(122)
							{
								HX_STACK_LINE(122)
								::nape::geom::AABB tmp49 = this->get_bounds();		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(122)
								::nape::geom::AABB _this1 = tmp49;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(122)
								{
									HX_STACK_LINE(122)
									::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(122)
									bool tmp50 = (_this2->_validate != null());		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(122)
									if ((tmp50)){
										HX_STACK_LINE(122)
										_this2->_validate();
									}
								}
								HX_STACK_LINE(122)
								{
									HX_STACK_LINE(122)
									::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(122)
									tmp48 = (_this2->maxx - _this2->minx);
								}
							}
							HX_STACK_LINE(122)
							Float tmp49 = (Float(tmp48) / Float((int)2));		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(122)
							int tmp50 = ray_direction;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(122)
							Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(122)
							Float tmp52 = (tmp47 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(122)
							Float x = tmp52;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(122)
							{
								HX_STACK_LINE(122)
								{
									HX_STACK_LINE(122)
									bool tmp53 = (_this != null());		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(122)
									bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(122)
									if ((tmp53)){
										HX_STACK_LINE(122)
										tmp54 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(122)
										tmp54 = false;
									}
									HX_STACK_LINE(122)
									if ((tmp54)){
										HX_STACK_LINE(122)
										::String tmp55 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(122)
										::String tmp56 = (tmp55 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(122)
										HX_STACK_DO_THROW(tmp56);
									}
								}
								HX_STACK_LINE(122)
								{
									HX_STACK_LINE(122)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(122)
									bool tmp53 = _this1->_immutable;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(122)
									if ((tmp53)){
										HX_STACK_LINE(122)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(122)
									bool tmp54 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(122)
									if ((tmp54)){
										HX_STACK_LINE(122)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(122)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(122)
								{
									HX_STACK_LINE(122)
									{
										HX_STACK_LINE(122)
										bool tmp54 = (_this != null());		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(122)
										bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(122)
										if ((tmp54)){
											HX_STACK_LINE(122)
											tmp55 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(122)
											tmp55 = false;
										}
										HX_STACK_LINE(122)
										if ((tmp55)){
											HX_STACK_LINE(122)
											::String tmp56 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(122)
											::String tmp57 = (tmp56 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(122)
											HX_STACK_DO_THROW(tmp57);
										}
									}
									HX_STACK_LINE(122)
									{
										HX_STACK_LINE(122)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(122)
										bool tmp54 = (_this1->_validate != null());		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(122)
										if ((tmp54)){
											HX_STACK_LINE(122)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(122)
									tmp53 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(122)
								Float tmp54 = x;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(122)
								bool tmp55 = (tmp53 != tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(122)
								if ((tmp55)){
									HX_STACK_LINE(122)
									bool tmp56 = (x != x);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(122)
									if ((tmp56)){
										HX_STACK_LINE(122)
										::String tmp57 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(122)
										::String tmp58 = (tmp57 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(122)
										HX_STACK_DO_THROW(tmp58);
									}
									HX_STACK_LINE(122)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(122)
									{
										HX_STACK_LINE(122)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(122)
										bool tmp57 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(122)
										if ((tmp57)){
											HX_STACK_LINE(122)
											::zpp_nape::geom::ZPP_Vec2 tmp58 = _this1;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(122)
											_this1->_invalidate(tmp58);
										}
									}
								}
							}
							HX_STACK_LINE(122)
							{
								HX_STACK_LINE(122)
								{
									HX_STACK_LINE(122)
									bool tmp53 = (_this != null());		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(122)
									bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(122)
									if ((tmp53)){
										HX_STACK_LINE(122)
										tmp54 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(122)
										tmp54 = false;
									}
									HX_STACK_LINE(122)
									if ((tmp54)){
										HX_STACK_LINE(122)
										::String tmp55 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(122)
										::String tmp56 = (tmp55 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(122)
										HX_STACK_DO_THROW(tmp56);
									}
								}
								HX_STACK_LINE(122)
								{
									HX_STACK_LINE(122)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(122)
									bool tmp53 = (_this1->_validate != null());		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(122)
									if ((tmp53)){
										HX_STACK_LINE(122)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(122)
								_this->zpp_inner->x;
							}
						}
						HX_STACK_LINE(123)
						break;
					}
				}
				HX_STACK_LINE(126)
				::nape::geom::Ray tmp37 = ray;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(126)
				::nape::geom::RayResult tmp38 = ray_result;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(126)
				this->debug_ray(tmp37,tmp38);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,raycast_horizontal,(void))

Void Controller_obj::raycast_vertical( Float dt){
{
		HX_STACK_FRAME("Controller","raycast_vertical",0xeb7790fe,"Controller.raycast_vertical","Controller.hx",131,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(133)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::nape::phys::Body tmp1 = this->get_body();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(133)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(133)
			::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(133)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(133)
			if ((tmp3)){
				HX_STACK_LINE(133)
				_this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(133)
			tmp = _this->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(133)
		Float tmp1 = dt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		::nape::geom::Vec2 tmp2 = tmp->mul(tmp1,false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		::nape::geom::Vec2 movement_delta = tmp2;		HX_STACK_VAR(movement_delta,"movement_delta");
		HX_STACK_LINE(135)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				bool tmp4 = (movement_delta != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(135)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(135)
				if ((tmp4)){
					HX_STACK_LINE(135)
					tmp5 = movement_delta->zpp_disp;
				}
				else{
					HX_STACK_LINE(135)
					tmp5 = false;
				}
				HX_STACK_LINE(135)
				if ((tmp5)){
					HX_STACK_LINE(135)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(135)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(135)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(135)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(135)
				if ((tmp4)){
					HX_STACK_LINE(135)
					_this->_validate();
				}
			}
			HX_STACK_LINE(135)
			tmp3 = movement_delta->zpp_inner->y;
		}
		HX_STACK_LINE(135)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		if ((tmp4)){
			HX_STACK_LINE(135)
			return null();
		}
		HX_STACK_LINE(136)
		this->grounded = false;
		HX_STACK_LINE(139)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::nape::geom::AABB tmp6 = this->get_bounds();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			::nape::geom::AABB _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(139)
				bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(139)
				if ((tmp7)){
					HX_STACK_LINE(139)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(139)
			tmp5 = _this->zpp_inner->minx;
		}
		HX_STACK_LINE(139)
		Float tmp6 = this->skin_thickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(139)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(139)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::nape::geom::AABB tmp9 = this->get_bounds();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(139)
			::nape::geom::AABB _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(139)
				bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(139)
				if ((tmp10)){
					HX_STACK_LINE(139)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(139)
			tmp8 = _this->zpp_inner->miny;
		}
		HX_STACK_LINE(139)
		Float tmp9 = this->skin_thickness;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(139)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(140)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			::nape::geom::AABB tmp12 = this->get_bounds();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(140)
			::nape::geom::AABB _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(140)
				bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(140)
				if ((tmp13)){
					HX_STACK_LINE(140)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(140)
				tmp11 = (_this1->maxx - _this1->minx);
			}
		}
		HX_STACK_LINE(140)
		Float tmp12 = this->skin_thickness;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(140)
		Float tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(140)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(140)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			::nape::geom::AABB tmp16 = this->get_bounds();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(140)
			::nape::geom::AABB _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(140)
				bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(140)
				if ((tmp17)){
					HX_STACK_LINE(140)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(140)
				tmp15 = (_this1->maxy - _this1->miny);
			}
		}
		HX_STACK_LINE(140)
		Float tmp16 = this->skin_thickness;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(140)
		Float tmp17 = (tmp16 * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(140)
		Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(138)
		::nape::geom::AABB tmp19 = ::nape::geom::AABB_obj::__new(tmp7,tmp10,tmp14,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(138)
		::nape::geom::AABB skin_bounds = tmp19;		HX_STACK_VAR(skin_bounds,"skin_bounds");
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(142)
			int tmp20 = this->rays_horizontal;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(142)
			int _g = tmp20;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(142)
			while((true)){
				HX_STACK_LINE(142)
				bool tmp21 = (_g1 < _g);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(142)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(142)
				if ((tmp22)){
					HX_STACK_LINE(142)
					break;
				}
				HX_STACK_LINE(142)
				int tmp23 = (_g1)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(142)
				int x = tmp23;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(145)
				::nape::geom::Vec2 tmp24 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(145)
				::nape::geom::Vec2 ray_origin = tmp24;		HX_STACK_VAR(ray_origin,"ray_origin");
				HX_STACK_LINE(147)
				int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(147)
				{
					HX_STACK_LINE(147)
					Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(147)
					{
						HX_STACK_LINE(147)
						bool tmp27 = (movement_delta != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(147)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(147)
						if ((tmp27)){
							HX_STACK_LINE(147)
							tmp28 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(147)
							tmp28 = false;
						}
						HX_STACK_LINE(147)
						if ((tmp28)){
							HX_STACK_LINE(147)
							::String tmp29 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(147)
							::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(147)
							HX_STACK_DO_THROW(tmp30);
						}
						HX_STACK_LINE(147)
						{
							HX_STACK_LINE(147)
							::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(147)
							bool tmp29 = (_this->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(147)
							if ((tmp29)){
								HX_STACK_LINE(147)
								_this->_validate();
							}
						}
						HX_STACK_LINE(147)
						tmp26 = movement_delta->zpp_inner->y;
					}
					HX_STACK_LINE(147)
					Float x1 = tmp26;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(147)
					bool tmp27 = (x1 >= (int)0);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(147)
					if ((tmp27)){
						HX_STACK_LINE(147)
						tmp25 = (int)1;
					}
					else{
						HX_STACK_LINE(147)
						tmp25 = (int)-1;
					}
				}
				HX_STACK_LINE(147)
				int ray_direction = tmp25;		HX_STACK_VAR(ray_direction,"ray_direction");
				HX_STACK_LINE(149)
				Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					{
						HX_STACK_LINE(149)
						bool tmp27 = (movement_delta != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(149)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(149)
						if ((tmp27)){
							HX_STACK_LINE(149)
							tmp28 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(149)
							tmp28 = false;
						}
						HX_STACK_LINE(149)
						if ((tmp28)){
							HX_STACK_LINE(149)
							::String tmp29 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(149)
							::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(149)
							HX_STACK_DO_THROW(tmp30);
						}
					}
					HX_STACK_LINE(149)
					{
						HX_STACK_LINE(149)
						::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(149)
						bool tmp27 = (_this->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(149)
						if ((tmp27)){
							HX_STACK_LINE(149)
							_this->_validate();
						}
					}
					HX_STACK_LINE(149)
					tmp26 = movement_delta->zpp_inner->y;
				}
				HX_STACK_LINE(149)
				bool tmp27 = (tmp26 > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(149)
				if ((tmp27)){
					HX_STACK_LINE(151)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(151)
					{
						HX_STACK_LINE(151)
						::nape::geom::Vec2 tmp29 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(151)
						::nape::geom::Vec2 _this = tmp29;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(151)
						{
							HX_STACK_LINE(151)
							bool tmp30 = (_this != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(151)
							bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(151)
							if ((tmp30)){
								HX_STACK_LINE(151)
								tmp31 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(151)
								tmp31 = false;
							}
							HX_STACK_LINE(151)
							if ((tmp31)){
								HX_STACK_LINE(151)
								::String tmp32 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(151)
								::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(151)
								HX_STACK_DO_THROW(tmp33);
							}
						}
						HX_STACK_LINE(151)
						{
							HX_STACK_LINE(151)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(151)
							bool tmp30 = (_this1->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(151)
							if ((tmp30)){
								HX_STACK_LINE(151)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(151)
						tmp28 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(151)
					Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(151)
					{
						HX_STACK_LINE(151)
						{
							HX_STACK_LINE(151)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(151)
							bool tmp30 = (_this->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(151)
							if ((tmp30)){
								HX_STACK_LINE(151)
								_this->_validate();
							}
						}
						HX_STACK_LINE(151)
						{
							HX_STACK_LINE(151)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(151)
							tmp29 = (_this->maxx - _this->minx);
						}
					}
					HX_STACK_LINE(151)
					int tmp30 = this->rays_horizontal;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(151)
					int tmp31 = (tmp30 - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(151)
					Float tmp32 = (Float(tmp29) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(151)
					int tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(151)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(151)
					Float tmp35 = (tmp28 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(151)
					Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(151)
					{
						HX_STACK_LINE(151)
						::nape::geom::Vec2 tmp37 = skin_bounds->zpp_inner->getmin();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(151)
						::nape::geom::Vec2 _this = tmp37;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(151)
						{
							HX_STACK_LINE(151)
							bool tmp38 = (_this != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(151)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(151)
							if ((tmp38)){
								HX_STACK_LINE(151)
								tmp39 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(151)
								tmp39 = false;
							}
							HX_STACK_LINE(151)
							if ((tmp39)){
								HX_STACK_LINE(151)
								::String tmp40 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(151)
								::String tmp41 = (tmp40 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(151)
								HX_STACK_DO_THROW(tmp41);
							}
						}
						HX_STACK_LINE(151)
						{
							HX_STACK_LINE(151)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(151)
							bool tmp38 = (_this1->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(151)
							if ((tmp38)){
								HX_STACK_LINE(151)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(151)
						tmp36 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(151)
					::nape::geom::Vec2 tmp37 = ::nape::geom::Vec2_obj::__new(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(151)
					ray_origin = tmp37;
				}
				else{
					HX_STACK_LINE(155)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(155)
					{
						HX_STACK_LINE(155)
						::nape::geom::Vec2 tmp29 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(155)
						::nape::geom::Vec2 _this = tmp29;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(155)
						{
							HX_STACK_LINE(155)
							bool tmp30 = (_this != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(155)
							bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(155)
							if ((tmp30)){
								HX_STACK_LINE(155)
								tmp31 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(155)
								tmp31 = false;
							}
							HX_STACK_LINE(155)
							if ((tmp31)){
								HX_STACK_LINE(155)
								::String tmp32 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(155)
								::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(155)
								HX_STACK_DO_THROW(tmp33);
							}
						}
						HX_STACK_LINE(155)
						{
							HX_STACK_LINE(155)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(155)
							bool tmp30 = (_this1->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(155)
							if ((tmp30)){
								HX_STACK_LINE(155)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(155)
						tmp28 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(155)
					Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(155)
					{
						HX_STACK_LINE(155)
						{
							HX_STACK_LINE(155)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(155)
							bool tmp30 = (_this->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(155)
							if ((tmp30)){
								HX_STACK_LINE(155)
								_this->_validate();
							}
						}
						HX_STACK_LINE(155)
						{
							HX_STACK_LINE(155)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(155)
							tmp29 = (_this->maxx - _this->minx);
						}
					}
					HX_STACK_LINE(155)
					int tmp30 = this->rays_horizontal;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(155)
					int tmp31 = (tmp30 - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(155)
					Float tmp32 = (Float(tmp29) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(155)
					int tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(155)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(155)
					Float tmp35 = (tmp28 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(155)
					Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(155)
					{
						HX_STACK_LINE(155)
						::nape::geom::Vec2 tmp37 = skin_bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(155)
						::nape::geom::Vec2 _this = tmp37;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(155)
						{
							HX_STACK_LINE(155)
							bool tmp38 = (_this != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(155)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(155)
							if ((tmp38)){
								HX_STACK_LINE(155)
								tmp39 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(155)
								tmp39 = false;
							}
							HX_STACK_LINE(155)
							if ((tmp39)){
								HX_STACK_LINE(155)
								::String tmp40 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(155)
								::String tmp41 = (tmp40 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(155)
								HX_STACK_DO_THROW(tmp41);
							}
						}
						HX_STACK_LINE(155)
						{
							HX_STACK_LINE(155)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(155)
							bool tmp38 = (_this1->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(155)
							if ((tmp38)){
								HX_STACK_LINE(155)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(155)
						tmp36 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(155)
					::nape::geom::Vec2 tmp37 = ::nape::geom::Vec2_obj::__new(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(155)
					ray_origin = tmp37;
				}
				HX_STACK_LINE(158)
				::nape::geom::Vec2 tmp28 = ray_origin;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(158)
				::nape::geom::Vec2 tmp29 = ::nape::geom::Vec2_obj::__new((int)0,ray_direction);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(158)
				::nape::geom::Ray tmp30 = ::nape::geom::Ray_obj::__new(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(158)
				::nape::geom::Ray ray = tmp30;		HX_STACK_VAR(ray,"ray");
				HX_STACK_LINE(159)
				{
					HX_STACK_LINE(159)
					Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(159)
					{
						HX_STACK_LINE(159)
						bool tmp32 = (movement_delta != null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(159)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(159)
						if ((tmp32)){
							HX_STACK_LINE(159)
							tmp33 = movement_delta->zpp_disp;
						}
						else{
							HX_STACK_LINE(159)
							tmp33 = false;
						}
						HX_STACK_LINE(159)
						if ((tmp33)){
							HX_STACK_LINE(159)
							::String tmp34 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(159)
							::String tmp35 = (tmp34 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(159)
							HX_STACK_DO_THROW(tmp35);
						}
						HX_STACK_LINE(159)
						{
							HX_STACK_LINE(159)
							::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(159)
							bool tmp34 = (_this->_validate != null());		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(159)
							if ((tmp34)){
								HX_STACK_LINE(159)
								_this->_validate();
							}
						}
						HX_STACK_LINE(159)
						tmp31 = movement_delta->zpp_inner->y;
					}
					HX_STACK_LINE(159)
					Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(159)
					Float tmp33 = this->skin_thickness;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(159)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(159)
					Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(159)
					{
						HX_STACK_LINE(159)
						{
							HX_STACK_LINE(159)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(159)
							bool tmp36 = (_this->_validate != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(159)
							if ((tmp36)){
								HX_STACK_LINE(159)
								_this->_validate();
							}
						}
						HX_STACK_LINE(159)
						{
							HX_STACK_LINE(159)
							::zpp_nape::geom::ZPP_AABB _this = skin_bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(159)
							tmp35 = (_this->maxy - _this->miny);
						}
					}
					HX_STACK_LINE(159)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(159)
					Float maxDistance = tmp36;		HX_STACK_VAR(maxDistance,"maxDistance");
					HX_STACK_LINE(159)
					{
						HX_STACK_LINE(159)
						bool tmp37 = (maxDistance != maxDistance);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(159)
						if ((tmp37)){
							HX_STACK_LINE(159)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: maxDistance cannot be NaN","\xc6","\x98","\x5d","\x73"));
						}
						HX_STACK_LINE(159)
						ray->zpp_inner->maxdist = maxDistance;
					}
					HX_STACK_LINE(159)
					ray->zpp_inner->maxdist;
				}
				HX_STACK_LINE(161)
				::nape::space::Space tmp31 = this->get_space();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(161)
				::nape::geom::Ray tmp32 = ray;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(161)
				::nape::geom::RayResult tmp33 = tmp31->rayCast(tmp32,null(),null());		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(161)
				::nape::geom::RayResult ray_result = tmp33;		HX_STACK_VAR(ray_result,"ray_result");
				HX_STACK_LINE(163)
				bool tmp34 = (ray_result != null());		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(163)
				if ((tmp34)){
					HX_STACK_LINE(165)
					::nape::phys::Body tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::nape::shape::Shape tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							{
								HX_STACK_LINE(165)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp37 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(165)
								bool tmp38 = (tmp37 != null());		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(165)
								if ((tmp38)){
									HX_STACK_LINE(165)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(165)
							tmp36 = ray_result->zpp_inner->shape;
						}
						HX_STACK_LINE(165)
						::nape::shape::Shape _this = tmp36;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						::zpp_nape::phys::ZPP_Body tmp37 = _this->zpp_inner->body;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(165)
						bool tmp38 = (tmp37 != null());		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(165)
						if ((tmp38)){
							HX_STACK_LINE(165)
							::zpp_nape::phys::ZPP_Body tmp39 = _this->zpp_inner->body;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(165)
							tmp35 = tmp39->outer;
						}
						else{
							HX_STACK_LINE(165)
							tmp35 = null();
						}
					}
					HX_STACK_LINE(165)
					::nape::phys::Body hit_body = tmp35;		HX_STACK_VAR(hit_body,"hit_body");
					HX_STACK_LINE(166)
					Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						::nape::geom::Vec2 tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							::nape::phys::Body tmp38 = this->get_body();		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(166)
							::nape::phys::Body _this = tmp38;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(166)
							::nape::geom::Vec2 tmp39 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(166)
							bool tmp40 = (tmp39 == null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(166)
							if ((tmp40)){
								HX_STACK_LINE(166)
								_this->zpp_inner->setupVelocity();
							}
							HX_STACK_LINE(166)
							tmp37 = _this->zpp_inner->wrap_vel;
						}
						HX_STACK_LINE(166)
						::nape::geom::Vec2 _this = tmp37;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							bool tmp38 = (_this != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(166)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(166)
							if ((tmp38)){
								HX_STACK_LINE(166)
								tmp39 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(166)
								tmp39 = false;
							}
							HX_STACK_LINE(166)
							if ((tmp39)){
								HX_STACK_LINE(166)
								::String tmp40 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(166)
								::String tmp41 = (tmp40 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(166)
								HX_STACK_DO_THROW(tmp41);
							}
						}
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(166)
							bool tmp38 = (_this1->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(166)
							if ((tmp38)){
								HX_STACK_LINE(166)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(166)
						tmp36 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(166)
					Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						bool tmp38 = hit_body->zpp_inner->world;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(166)
						if ((tmp38)){
							HX_STACK_LINE(166)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no mass","\x47","\x6a","\x54","\x2b"));
						}
						HX_STACK_LINE(166)
						hit_body->zpp_inner->validate_mass();
						HX_STACK_LINE(166)
						int tmp39 = hit_body->zpp_inner->massMode;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(166)
						bool tmp40 = (tmp39 == (int)0);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(166)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(166)
						if ((tmp40)){
							HX_STACK_LINE(166)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp42 = hit_body->zpp_inner->shapes;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(166)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(166)
							::zpp_nape::util::ZNPNode_ZPP_Shape tmp44 = tmp43->head;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(166)
							tmp41 = (tmp44 == null());
						}
						else{
							HX_STACK_LINE(166)
							tmp41 = false;
						}
						HX_STACK_LINE(166)
						if ((tmp41)){
							HX_STACK_LINE(166)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes","\x3f","\xab","\x6b","\xcb"));
						}
						HX_STACK_LINE(166)
						tmp37 = hit_body->zpp_inner->cmass;
					}
					HX_STACK_LINE(166)
					Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(166)
					::nape::geom::Vec2 tmp39 = ::nape::geom::Vec2_obj::__new((int)0,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(166)
					hit_body->applyImpulse(tmp39,null(),null());
					HX_STACK_LINE(167)
					Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(167)
					{
						HX_STACK_LINE(167)
						::nape::geom::Vec2 tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(167)
						{
							HX_STACK_LINE(167)
							{
								HX_STACK_LINE(167)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp42 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(167)
								bool tmp43 = (tmp42 != null());		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(167)
								if ((tmp43)){
									HX_STACK_LINE(167)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(167)
							tmp41 = ray_result->zpp_inner->normal;
						}
						HX_STACK_LINE(167)
						::nape::geom::Vec2 _this = tmp41;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(167)
						{
							HX_STACK_LINE(167)
							bool tmp42 = (_this != null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(167)
							bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(167)
							if ((tmp42)){
								HX_STACK_LINE(167)
								tmp43 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(167)
								tmp43 = false;
							}
							HX_STACK_LINE(167)
							if ((tmp43)){
								HX_STACK_LINE(167)
								::String tmp44 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(167)
								::String tmp45 = (tmp44 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(167)
								HX_STACK_DO_THROW(tmp45);
							}
						}
						HX_STACK_LINE(167)
						{
							HX_STACK_LINE(167)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(167)
							bool tmp42 = (_this1->_validate != null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(167)
							if ((tmp42)){
								HX_STACK_LINE(167)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(167)
						tmp40 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(167)
					Float tmp41 = this->max_slope_y;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(167)
					bool tmp42 = (tmp40 < tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(167)
					bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(167)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(167)
					if ((tmp43)){
						HX_STACK_LINE(167)
						Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(167)
						{
							HX_STACK_LINE(167)
							::nape::geom::Vec2 tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(167)
							{
								HX_STACK_LINE(167)
								{
									HX_STACK_LINE(167)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp47 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(167)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(167)
									bool tmp49 = (tmp48 != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(167)
									bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(167)
									bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(167)
									if ((tmp51)){
										HX_STACK_LINE(167)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(167)
								::nape::geom::Vec2 tmp47 = ray_result->zpp_inner->normal;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(167)
								tmp46 = tmp47;
							}
							HX_STACK_LINE(167)
							::nape::geom::Vec2 _this = tmp46;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(167)
							{
								HX_STACK_LINE(167)
								bool tmp47 = (_this != null());		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(167)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(167)
								bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(167)
								bool tmp50 = tmp48;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(167)
								if ((tmp50)){
									HX_STACK_LINE(167)
									tmp49 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(167)
									tmp49 = false;
								}
								HX_STACK_LINE(167)
								bool tmp51 = tmp49;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(167)
								if ((tmp51)){
									HX_STACK_LINE(167)
									::String tmp52 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(167)
									::String tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(167)
									::String tmp54 = (tmp53 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(167)
									::String tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(167)
									::String tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(167)
									HX_STACK_DO_THROW(tmp56);
								}
							}
							HX_STACK_LINE(167)
							{
								HX_STACK_LINE(167)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(167)
								bool tmp47 = (_this1->_validate != null());		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(167)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(167)
								bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(167)
								if ((tmp49)){
									HX_STACK_LINE(167)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(167)
							Float tmp47 = _this->zpp_inner->y;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(167)
							tmp45 = tmp47;
						}
						HX_STACK_LINE(167)
						tmp44 = (tmp45 > (int)0);
					}
					else{
						HX_STACK_LINE(167)
						tmp44 = true;
					}
					HX_STACK_LINE(167)
					if ((tmp44)){
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
								::nape::geom::Vec2 tmp47 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(169)
								bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(169)
								if ((tmp48)){
									HX_STACK_LINE(169)
									_this->zpp_inner->setupVelocity();
								}
								HX_STACK_LINE(169)
								tmp45 = _this->zpp_inner->wrap_vel;
							}
							HX_STACK_LINE(169)
							::nape::geom::Vec2 _this = tmp45;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(169)
							{
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									bool tmp46 = (_this != null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(169)
									bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(169)
									if ((tmp46)){
										HX_STACK_LINE(169)
										tmp47 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(169)
										tmp47 = false;
									}
									HX_STACK_LINE(169)
									if ((tmp47)){
										HX_STACK_LINE(169)
										::String tmp48 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(169)
										::String tmp49 = (tmp48 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(169)
										HX_STACK_DO_THROW(tmp49);
									}
								}
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(169)
									bool tmp46 = _this1->_immutable;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(169)
									if ((tmp46)){
										HX_STACK_LINE(169)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(169)
									bool tmp47 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(169)
									if ((tmp47)){
										HX_STACK_LINE(169)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(169)
								Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									{
										HX_STACK_LINE(169)
										bool tmp47 = (_this != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(169)
										bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(169)
										if ((tmp47)){
											HX_STACK_LINE(169)
											tmp48 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(169)
											tmp48 = false;
										}
										HX_STACK_LINE(169)
										if ((tmp48)){
											HX_STACK_LINE(169)
											::String tmp49 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(169)
											::String tmp50 = (tmp49 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(169)
											HX_STACK_DO_THROW(tmp50);
										}
									}
									HX_STACK_LINE(169)
									{
										HX_STACK_LINE(169)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(169)
										bool tmp47 = (_this1->_validate != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(169)
										if ((tmp47)){
											HX_STACK_LINE(169)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(169)
									tmp46 = _this->zpp_inner->y;
								}
								HX_STACK_LINE(169)
								bool tmp47 = (tmp46 != (int)0);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(169)
								if ((tmp47)){
									HX_STACK_LINE(169)
									bool tmp48 = false;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(169)
									if ((tmp48)){
										HX_STACK_LINE(169)
										::String tmp49 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(169)
										::String tmp50 = (tmp49 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(169)
										HX_STACK_DO_THROW(tmp50);
									}
									HX_STACK_LINE(169)
									_this->zpp_inner->y = (int)0;
									HX_STACK_LINE(169)
									{
										HX_STACK_LINE(169)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(169)
										bool tmp49 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(169)
										if ((tmp49)){
											HX_STACK_LINE(169)
											::zpp_nape::geom::ZPP_Vec2 tmp50 = _this1;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(169)
											_this1->_invalidate(tmp50);
										}
									}
								}
							}
							HX_STACK_LINE(169)
							{
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									bool tmp46 = (_this != null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(169)
									bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(169)
									if ((tmp46)){
										HX_STACK_LINE(169)
										tmp47 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(169)
										tmp47 = false;
									}
									HX_STACK_LINE(169)
									if ((tmp47)){
										HX_STACK_LINE(169)
										::String tmp48 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(169)
										::String tmp49 = (tmp48 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(169)
										HX_STACK_DO_THROW(tmp49);
									}
								}
								HX_STACK_LINE(169)
								{
									HX_STACK_LINE(169)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(169)
									bool tmp46 = (_this1->_validate != null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(169)
									if ((tmp46)){
										HX_STACK_LINE(169)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(169)
								_this->zpp_inner->y;
							}
						}
						HX_STACK_LINE(170)
						{
							HX_STACK_LINE(170)
							::nape::geom::Vec2 tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::nape::phys::Body tmp46 = this->get_body();		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(170)
								::nape::phys::Body _this = tmp46;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(170)
								::nape::geom::Vec2 tmp47 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(170)
								bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(170)
								if ((tmp48)){
									HX_STACK_LINE(170)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(170)
								tmp45 = _this->zpp_inner->wrap_pos;
							}
							HX_STACK_LINE(170)
							::nape::geom::Vec2 _this = tmp45;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(170)
							Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp48 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(170)
									bool tmp49 = (tmp48 != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(170)
									if ((tmp49)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
									HX_STACK_LINE(170)
									tmp47 = ray_result->zpp_inner->toiDistance;
								}
								HX_STACK_LINE(170)
								::nape::geom::Vec2 tmp48 = ray->at(tmp47,null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(170)
								::nape::geom::Vec2 _this1 = tmp48;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(170)
								bool tmp49 = (_this1 != null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(170)
								bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(170)
								if ((tmp49)){
									HX_STACK_LINE(170)
									tmp50 = _this1->zpp_disp;
								}
								else{
									HX_STACK_LINE(170)
									tmp50 = false;
								}
								HX_STACK_LINE(170)
								if ((tmp50)){
									HX_STACK_LINE(170)
									::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(170)
									::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(170)
									HX_STACK_DO_THROW(tmp52);
								}
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(170)
									bool tmp51 = (_this2->_validate != null());		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(170)
									if ((tmp51)){
										HX_STACK_LINE(170)
										_this2->_validate();
									}
								}
								HX_STACK_LINE(170)
								tmp46 = _this1->zpp_inner->y;
							}
							HX_STACK_LINE(170)
							Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::nape::geom::AABB tmp48 = this->get_bounds();		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(170)
								::nape::geom::AABB _this1 = tmp48;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(170)
									bool tmp49 = (_this2->_validate != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(170)
									if ((tmp49)){
										HX_STACK_LINE(170)
										_this2->_validate();
									}
								}
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(170)
									tmp47 = (_this2->maxy - _this2->miny);
								}
							}
							HX_STACK_LINE(170)
							Float tmp48 = (Float(tmp47) / Float((int)2));		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(170)
							int tmp49 = ray_direction;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(170)
							Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(170)
							Float tmp51 = (tmp46 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(170)
							Float y = tmp51;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									bool tmp52 = (_this != null());		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(170)
									bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(170)
									if ((tmp52)){
										HX_STACK_LINE(170)
										tmp53 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(170)
										tmp53 = false;
									}
									HX_STACK_LINE(170)
									if ((tmp53)){
										HX_STACK_LINE(170)
										::String tmp54 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(170)
										::String tmp55 = (tmp54 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(tmp55);
									}
								}
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(170)
									bool tmp52 = _this1->_immutable;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(170)
									if ((tmp52)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(170)
									bool tmp53 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(170)
									if ((tmp53)){
										HX_STACK_LINE(170)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(170)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									{
										HX_STACK_LINE(170)
										bool tmp53 = (_this != null());		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(170)
										bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(170)
										if ((tmp53)){
											HX_STACK_LINE(170)
											tmp54 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(170)
											tmp54 = false;
										}
										HX_STACK_LINE(170)
										if ((tmp54)){
											HX_STACK_LINE(170)
											::String tmp55 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(170)
											::String tmp56 = (tmp55 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(tmp56);
										}
									}
									HX_STACK_LINE(170)
									{
										HX_STACK_LINE(170)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(170)
										bool tmp53 = (_this1->_validate != null());		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(170)
										if ((tmp53)){
											HX_STACK_LINE(170)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(170)
									tmp52 = _this->zpp_inner->y;
								}
								HX_STACK_LINE(170)
								Float tmp53 = y;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(170)
								bool tmp54 = (tmp52 != tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(170)
								if ((tmp54)){
									HX_STACK_LINE(170)
									bool tmp55 = (y != y);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(170)
									if ((tmp55)){
										HX_STACK_LINE(170)
										::String tmp56 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(170)
										::String tmp57 = (tmp56 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(tmp57);
									}
									HX_STACK_LINE(170)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(170)
									{
										HX_STACK_LINE(170)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(170)
										bool tmp56 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(170)
										if ((tmp56)){
											HX_STACK_LINE(170)
											::zpp_nape::geom::ZPP_Vec2 tmp57 = _this1;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(170)
											_this1->_invalidate(tmp57);
										}
									}
								}
							}
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									bool tmp52 = (_this != null());		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(170)
									bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(170)
									if ((tmp52)){
										HX_STACK_LINE(170)
										tmp53 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(170)
										tmp53 = false;
									}
									HX_STACK_LINE(170)
									if ((tmp53)){
										HX_STACK_LINE(170)
										::String tmp54 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(170)
										::String tmp55 = (tmp54 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(tmp55);
									}
								}
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(170)
									bool tmp52 = (_this1->_validate != null());		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(170)
									if ((tmp52)){
										HX_STACK_LINE(170)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(170)
								_this->zpp_inner->y;
							}
						}
						HX_STACK_LINE(171)
						bool tmp45 = (ray_direction > (int)0);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(171)
						if ((tmp45)){
							HX_STACK_LINE(171)
							this->grounded = true;
						}
						HX_STACK_LINE(172)
						break;
					}
					else{
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
								::nape::geom::Vec2 tmp47 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(176)
								bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(176)
								if ((tmp48)){
									HX_STACK_LINE(176)
									_this->zpp_inner->setupVelocity();
								}
								HX_STACK_LINE(176)
								tmp45 = _this->zpp_inner->wrap_vel;
							}
							HX_STACK_LINE(176)
							::nape::geom::Vec2 _this = tmp45;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									bool tmp46 = (_this != null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(176)
									bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(176)
									if ((tmp46)){
										HX_STACK_LINE(176)
										tmp47 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(176)
										tmp47 = false;
									}
									HX_STACK_LINE(176)
									if ((tmp47)){
										HX_STACK_LINE(176)
										::String tmp48 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(176)
										::String tmp49 = (tmp48 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(tmp49);
									}
								}
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(176)
									bool tmp46 = _this1->_immutable;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(176)
									if ((tmp46)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(176)
									bool tmp47 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(176)
									if ((tmp47)){
										HX_STACK_LINE(176)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(176)
								Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										bool tmp47 = (_this != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(176)
										bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(176)
										if ((tmp47)){
											HX_STACK_LINE(176)
											tmp48 = _this->zpp_disp;
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
									}
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(176)
										bool tmp47 = (_this1->_validate != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(176)
										if ((tmp47)){
											HX_STACK_LINE(176)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(176)
									tmp46 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(176)
								bool tmp47 = (tmp46 != (int)0);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(176)
								if ((tmp47)){
									HX_STACK_LINE(176)
									bool tmp48 = false;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(176)
									if ((tmp48)){
										HX_STACK_LINE(176)
										::String tmp49 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(176)
										::String tmp50 = (tmp49 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(tmp50);
									}
									HX_STACK_LINE(176)
									_this->zpp_inner->x = (int)0;
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(176)
										bool tmp49 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(176)
										if ((tmp49)){
											HX_STACK_LINE(176)
											::zpp_nape::geom::ZPP_Vec2 tmp50 = _this1;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(176)
											_this1->_invalidate(tmp50);
										}
									}
								}
							}
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									bool tmp46 = (_this != null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(176)
									bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(176)
									if ((tmp46)){
										HX_STACK_LINE(176)
										tmp47 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(176)
										tmp47 = false;
									}
									HX_STACK_LINE(176)
									if ((tmp47)){
										HX_STACK_LINE(176)
										::String tmp48 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(176)
										::String tmp49 = (tmp48 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(tmp49);
									}
								}
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(176)
									bool tmp46 = (_this1->_validate != null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(176)
									if ((tmp46)){
										HX_STACK_LINE(176)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(176)
								_this->zpp_inner->x;
							}
						}
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							::nape::geom::Vec2 tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(177)
							{
								HX_STACK_LINE(177)
								::nape::phys::Body tmp46 = this->get_body();		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(177)
								::nape::phys::Body _this = tmp46;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(177)
								::nape::geom::Vec2 tmp47 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(177)
								bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(177)
								if ((tmp48)){
									HX_STACK_LINE(177)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(177)
								tmp45 = _this->zpp_inner->wrap_pos;
							}
							HX_STACK_LINE(177)
							::nape::geom::Vec2 _g2 = tmp45;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(177)
							{
								HX_STACK_LINE(177)
								Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(177)
								{
									HX_STACK_LINE(177)
									bool tmp47 = (_g2 != null());		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(177)
									bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(177)
									if ((tmp47)){
										HX_STACK_LINE(177)
										tmp48 = _g2->zpp_disp;
									}
									else{
										HX_STACK_LINE(177)
										tmp48 = false;
									}
									HX_STACK_LINE(177)
									if ((tmp48)){
										HX_STACK_LINE(177)
										::String tmp49 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(177)
										::String tmp50 = (tmp49 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(177)
										HX_STACK_DO_THROW(tmp50);
									}
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(177)
										bool tmp49 = (_this->_validate != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(177)
										if ((tmp49)){
											HX_STACK_LINE(177)
											_this->_validate();
										}
									}
									HX_STACK_LINE(177)
									tmp46 = _g2->zpp_inner->x;
								}
								HX_STACK_LINE(177)
								Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(177)
								{
									HX_STACK_LINE(177)
									::nape::geom::Vec2 tmp48;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										::zpp_nape::geom::ZPP_ConvexRayResult tmp49 = ray_result->zpp_inner->next;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(177)
										bool tmp50 = (tmp49 != null());		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(177)
										if ((tmp50)){
											HX_STACK_LINE(177)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
										}
										HX_STACK_LINE(177)
										tmp48 = ray_result->zpp_inner->normal;
									}
									HX_STACK_LINE(177)
									::nape::geom::Vec2 _this = tmp48;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(177)
									bool tmp49 = (_this != null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(177)
									bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(177)
									if ((tmp49)){
										HX_STACK_LINE(177)
										tmp50 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(177)
										tmp50 = false;
									}
									HX_STACK_LINE(177)
									if ((tmp50)){
										HX_STACK_LINE(177)
										::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(177)
										::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(177)
										HX_STACK_DO_THROW(tmp52);
									}
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(177)
										bool tmp51 = (_this1->_validate != null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(177)
										if ((tmp51)){
											HX_STACK_LINE(177)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(177)
									tmp47 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(177)
								Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(177)
								Float x1 = tmp48;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(177)
								{
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										bool tmp49 = (_g2 != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(177)
										bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(177)
										if ((tmp49)){
											HX_STACK_LINE(177)
											tmp50 = _g2->zpp_disp;
										}
										else{
											HX_STACK_LINE(177)
											tmp50 = false;
										}
										HX_STACK_LINE(177)
										if ((tmp50)){
											HX_STACK_LINE(177)
											::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(177)
											::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(177)
											HX_STACK_DO_THROW(tmp52);
										}
									}
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(177)
										bool tmp49 = _this->_immutable;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(177)
										if ((tmp49)){
											HX_STACK_LINE(177)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
										}
										HX_STACK_LINE(177)
										bool tmp50 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(177)
										if ((tmp50)){
											HX_STACK_LINE(177)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(177)
									Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										{
											HX_STACK_LINE(177)
											bool tmp50 = (_g2 != null());		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(177)
											bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(177)
											if ((tmp50)){
												HX_STACK_LINE(177)
												tmp51 = _g2->zpp_disp;
											}
											else{
												HX_STACK_LINE(177)
												tmp51 = false;
											}
											HX_STACK_LINE(177)
											if ((tmp51)){
												HX_STACK_LINE(177)
												::String tmp52 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(177)
												::String tmp53 = (tmp52 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(177)
												HX_STACK_DO_THROW(tmp53);
											}
										}
										HX_STACK_LINE(177)
										{
											HX_STACK_LINE(177)
											::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(177)
											bool tmp50 = (_this->_validate != null());		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(177)
											if ((tmp50)){
												HX_STACK_LINE(177)
												_this->_validate();
											}
										}
										HX_STACK_LINE(177)
										tmp49 = _g2->zpp_inner->x;
									}
									HX_STACK_LINE(177)
									Float tmp50 = x1;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(177)
									bool tmp51 = (tmp49 != tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(177)
									if ((tmp51)){
										HX_STACK_LINE(177)
										bool tmp52 = (x1 != x1);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(177)
										if ((tmp52)){
											HX_STACK_LINE(177)
											::String tmp53 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(177)
											::String tmp54 = (tmp53 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(177)
											HX_STACK_DO_THROW(tmp54);
										}
										HX_STACK_LINE(177)
										_g2->zpp_inner->x = x1;
										HX_STACK_LINE(177)
										{
											HX_STACK_LINE(177)
											::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(177)
											bool tmp53 = (_this->_invalidate != null());		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(177)
											if ((tmp53)){
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 tmp54 = _this;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(177)
												_this->_invalidate(tmp54);
											}
										}
									}
								}
								HX_STACK_LINE(177)
								{
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										bool tmp49 = (_g2 != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(177)
										bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(177)
										if ((tmp49)){
											HX_STACK_LINE(177)
											tmp50 = _g2->zpp_disp;
										}
										else{
											HX_STACK_LINE(177)
											tmp50 = false;
										}
										HX_STACK_LINE(177)
										if ((tmp50)){
											HX_STACK_LINE(177)
											::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(177)
											::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(177)
											HX_STACK_DO_THROW(tmp52);
										}
									}
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										::zpp_nape::geom::ZPP_Vec2 _this = _g2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(177)
										bool tmp49 = (_this->_validate != null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(177)
										if ((tmp49)){
											HX_STACK_LINE(177)
											_this->_validate();
										}
									}
									HX_STACK_LINE(177)
									_g2->zpp_inner->x;
								}
							}
						}
					}
				}
				HX_STACK_LINE(180)
				::nape::geom::Ray tmp35 = ray;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(180)
				::nape::geom::RayResult tmp36 = ray_result;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(180)
				this->debug_ray(tmp35,tmp36);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,raycast_vertical,(void))

Void Controller_obj::slope_raycast( Float dt){
{
		HX_STACK_FRAME("Controller","slope_raycast",0xf9907423,"Controller.slope_raycast","Controller.hx",185,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(186)
		this->slope = false;
		HX_STACK_LINE(188)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			::nape::phys::Body tmp1 = this->get_body();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(188)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(188)
			::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(188)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(188)
			if ((tmp3)){
				HX_STACK_LINE(188)
				_this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(188)
			tmp = _this->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(188)
		Float tmp1 = dt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		::nape::geom::Vec2 tmp2 = tmp->mul(tmp1,false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		::nape::geom::Vec2 movement_delta = tmp2;		HX_STACK_VAR(movement_delta,"movement_delta");
		HX_STACK_LINE(190)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			{
				HX_STACK_LINE(190)
				bool tmp4 = (movement_delta != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(190)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(190)
				if ((tmp4)){
					HX_STACK_LINE(190)
					tmp5 = movement_delta->zpp_disp;
				}
				else{
					HX_STACK_LINE(190)
					tmp5 = false;
				}
				HX_STACK_LINE(190)
				if ((tmp5)){
					HX_STACK_LINE(190)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(190)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(190)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(190)
			{
				HX_STACK_LINE(190)
				::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(190)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(190)
				if ((tmp4)){
					HX_STACK_LINE(190)
					_this->_validate();
				}
			}
			HX_STACK_LINE(190)
			tmp3 = movement_delta->zpp_inner->y;
		}
		HX_STACK_LINE(190)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		if ((tmp4)){
			HX_STACK_LINE(190)
			return null();
		}
		HX_STACK_LINE(193)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::geom::AABB tmp6 = this->get_bounds();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			::nape::geom::AABB _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(193)
				bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(193)
				if ((tmp7)){
					HX_STACK_LINE(193)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(193)
			tmp5 = _this->zpp_inner->minx;
		}
		HX_STACK_LINE(193)
		Float tmp6 = this->skin_thickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(193)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(193)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::geom::AABB tmp9 = this->get_bounds();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(193)
			::nape::geom::AABB _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(193)
				bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(193)
				if ((tmp10)){
					HX_STACK_LINE(193)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(193)
			tmp8 = _this->zpp_inner->miny;
		}
		HX_STACK_LINE(193)
		Float tmp9 = this->skin_thickness;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(193)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(194)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::nape::geom::AABB tmp12 = this->get_bounds();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(194)
			::nape::geom::AABB _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(194)
				bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(194)
				if ((tmp13)){
					HX_STACK_LINE(194)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(194)
				tmp11 = (_this1->maxx - _this1->minx);
			}
		}
		HX_STACK_LINE(194)
		Float tmp12 = this->skin_thickness;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(194)
		Float tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(194)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(194)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::nape::geom::AABB tmp16 = this->get_bounds();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(194)
			::nape::geom::AABB _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(194)
				bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(194)
				if ((tmp17)){
					HX_STACK_LINE(194)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(194)
				tmp15 = (_this1->maxy - _this1->miny);
			}
		}
		HX_STACK_LINE(194)
		Float tmp16 = this->skin_thickness;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(194)
		Float tmp17 = (tmp16 * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(194)
		Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(192)
		::nape::geom::AABB tmp19 = ::nape::geom::AABB_obj::__new(tmp7,tmp10,tmp14,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(192)
		::nape::geom::AABB skin_bounds = tmp19;		HX_STACK_VAR(skin_bounds,"skin_bounds");
		HX_STACK_LINE(195)
		int direction = (int)1;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(196)
		::nape::geom::Vec2 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(196)
			::nape::phys::Body tmp21 = this->get_body();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(196)
			::nape::phys::Body _this = tmp21;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(196)
			::nape::geom::Vec2 tmp22 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(196)
			bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(196)
			if ((tmp23)){
				HX_STACK_LINE(196)
				_this->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(196)
			tmp20 = _this->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(196)
		::nape::geom::Vec2 tmp21 = ::nape::geom::Vec2_obj::__new((int)0,direction);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(196)
		::nape::geom::Ray tmp22 = ::nape::geom::Ray_obj::__new(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(196)
		::nape::geom::Ray ray = tmp22;		HX_STACK_VAR(ray,"ray");
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(197)
			{
				HX_STACK_LINE(197)
				::nape::geom::AABB tmp24 = this->get_bounds();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(197)
				::nape::geom::AABB _this = tmp24;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(197)
					::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(197)
					bool tmp25 = (_this1->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(197)
					if ((tmp25)){
						HX_STACK_LINE(197)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(197)
					::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(197)
					tmp23 = (_this1->maxy - _this1->miny);
				}
			}
			HX_STACK_LINE(197)
			Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(197)
			Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(197)
			{
				HX_STACK_LINE(197)
				bool tmp26 = (movement_delta != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(197)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(197)
				if ((tmp26)){
					HX_STACK_LINE(197)
					tmp27 = movement_delta->zpp_disp;
				}
				else{
					HX_STACK_LINE(197)
					tmp27 = false;
				}
				HX_STACK_LINE(197)
				if ((tmp27)){
					HX_STACK_LINE(197)
					::String tmp28 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(197)
					::String tmp29 = (tmp28 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(197)
					HX_STACK_DO_THROW(tmp29);
				}
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(197)
					::zpp_nape::geom::ZPP_Vec2 _this = movement_delta->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(197)
					bool tmp28 = (_this->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(197)
					if ((tmp28)){
						HX_STACK_LINE(197)
						_this->_validate();
					}
				}
				HX_STACK_LINE(197)
				tmp25 = movement_delta->zpp_inner->y;
			}
			HX_STACK_LINE(197)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(197)
			bool tmp27 = this->grounded;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(197)
			int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(197)
			if ((tmp27)){
				HX_STACK_LINE(197)
				tmp28 = (int)12;
			}
			else{
				HX_STACK_LINE(197)
				tmp28 = (int)0;
			}
			HX_STACK_LINE(197)
			Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(197)
			Float maxDistance = tmp29;		HX_STACK_VAR(maxDistance,"maxDistance");
			HX_STACK_LINE(197)
			{
				HX_STACK_LINE(197)
				bool tmp30 = (maxDistance != maxDistance);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(197)
				if ((tmp30)){
					HX_STACK_LINE(197)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: maxDistance cannot be NaN","\xc6","\x98","\x5d","\x73"));
				}
				HX_STACK_LINE(197)
				ray->zpp_inner->maxdist = maxDistance;
			}
			HX_STACK_LINE(197)
			ray->zpp_inner->maxdist;
		}
		HX_STACK_LINE(198)
		::nape::space::Space tmp23 = this->get_space();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(198)
		::nape::geom::Ray tmp24 = ray;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(198)
		::nape::geom::RayResult tmp25 = tmp23->rayCast(tmp24,null(),null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(198)
		::nape::geom::RayResult result = tmp25;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(199)
		bool tmp26 = (result != null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(199)
		if ((tmp26)){
			HX_STACK_LINE(201)
			Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(201)
			{
				HX_STACK_LINE(201)
				::nape::geom::Vec2 tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(201)
				{
					HX_STACK_LINE(201)
					{
						HX_STACK_LINE(201)
						::zpp_nape::geom::ZPP_ConvexRayResult tmp29 = result->zpp_inner->next;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(201)
						bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(201)
						if ((tmp30)){
							HX_STACK_LINE(201)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
						}
					}
					HX_STACK_LINE(201)
					tmp28 = result->zpp_inner->normal;
				}
				HX_STACK_LINE(201)
				::nape::geom::Vec2 _this = tmp28;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(201)
				{
					HX_STACK_LINE(201)
					bool tmp29 = (_this != null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(201)
					bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(201)
					if ((tmp29)){
						HX_STACK_LINE(201)
						tmp30 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(201)
						tmp30 = false;
					}
					HX_STACK_LINE(201)
					if ((tmp30)){
						HX_STACK_LINE(201)
						::String tmp31 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(201)
						::String tmp32 = (tmp31 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(201)
						HX_STACK_DO_THROW(tmp32);
					}
				}
				HX_STACK_LINE(201)
				{
					HX_STACK_LINE(201)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(201)
					bool tmp29 = (_this1->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(201)
					if ((tmp29)){
						HX_STACK_LINE(201)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(201)
				tmp27 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(201)
			bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(201)
			if ((tmp28)){
				HX_STACK_LINE(203)
				this->slope = true;
			}
			HX_STACK_LINE(206)
			Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				::nape::geom::Vec2 tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(206)
				{
					HX_STACK_LINE(206)
					{
						HX_STACK_LINE(206)
						::zpp_nape::geom::ZPP_ConvexRayResult tmp31 = result->zpp_inner->next;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(206)
						bool tmp32 = (tmp31 != null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(206)
						if ((tmp32)){
							HX_STACK_LINE(206)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
						}
					}
					HX_STACK_LINE(206)
					tmp30 = result->zpp_inner->normal;
				}
				HX_STACK_LINE(206)
				::nape::geom::Vec2 _this = tmp30;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(206)
				{
					HX_STACK_LINE(206)
					bool tmp31 = (_this != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(206)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(206)
					if ((tmp31)){
						HX_STACK_LINE(206)
						tmp32 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(206)
						tmp32 = false;
					}
					HX_STACK_LINE(206)
					if ((tmp32)){
						HX_STACK_LINE(206)
						::String tmp33 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(206)
						::String tmp34 = (tmp33 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(206)
						HX_STACK_DO_THROW(tmp34);
					}
				}
				HX_STACK_LINE(206)
				{
					HX_STACK_LINE(206)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(206)
					bool tmp31 = (_this1->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(206)
					if ((tmp31)){
						HX_STACK_LINE(206)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(206)
				tmp29 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(206)
			Float tmp30 = this->max_slope_y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(206)
			bool tmp31 = (tmp29 < tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(206)
			if ((tmp31)){
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
						::nape::geom::Vec2 tmp34 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(208)
						bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(208)
						if ((tmp35)){
							HX_STACK_LINE(208)
							_this->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(208)
						tmp32 = _this->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(208)
					::nape::geom::Vec2 _this = tmp32;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							bool tmp33 = (_this != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(208)
							bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(208)
							if ((tmp33)){
								HX_STACK_LINE(208)
								tmp34 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(208)
								tmp34 = false;
							}
							HX_STACK_LINE(208)
							if ((tmp34)){
								HX_STACK_LINE(208)
								::String tmp35 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(208)
								::String tmp36 = (tmp35 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(208)
								HX_STACK_DO_THROW(tmp36);
							}
						}
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(208)
							bool tmp33 = _this1->_immutable;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(208)
							if ((tmp33)){
								HX_STACK_LINE(208)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(208)
							bool tmp34 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(208)
							if ((tmp34)){
								HX_STACK_LINE(208)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(208)
						Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							{
								HX_STACK_LINE(208)
								bool tmp34 = (_this != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(208)
								bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(208)
								if ((tmp34)){
									HX_STACK_LINE(208)
									tmp35 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(208)
									tmp35 = false;
								}
								HX_STACK_LINE(208)
								if ((tmp35)){
									HX_STACK_LINE(208)
									::String tmp36 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(208)
									::String tmp37 = (tmp36 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(208)
									HX_STACK_DO_THROW(tmp37);
								}
							}
							HX_STACK_LINE(208)
							{
								HX_STACK_LINE(208)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(208)
								bool tmp34 = (_this1->_validate != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(208)
								if ((tmp34)){
									HX_STACK_LINE(208)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(208)
							tmp33 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(208)
						bool tmp34 = (tmp33 != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(208)
						if ((tmp34)){
							HX_STACK_LINE(208)
							bool tmp35 = false;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(208)
							if ((tmp35)){
								HX_STACK_LINE(208)
								::String tmp36 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(208)
								::String tmp37 = (tmp36 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(208)
								HX_STACK_DO_THROW(tmp37);
							}
							HX_STACK_LINE(208)
							_this->zpp_inner->y = (int)0;
							HX_STACK_LINE(208)
							{
								HX_STACK_LINE(208)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(208)
								bool tmp36 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(208)
								if ((tmp36)){
									HX_STACK_LINE(208)
									::zpp_nape::geom::ZPP_Vec2 tmp37 = _this1;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(208)
									_this1->_invalidate(tmp37);
								}
							}
						}
					}
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							bool tmp33 = (_this != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(208)
							bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(208)
							if ((tmp33)){
								HX_STACK_LINE(208)
								tmp34 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(208)
								tmp34 = false;
							}
							HX_STACK_LINE(208)
							if ((tmp34)){
								HX_STACK_LINE(208)
								::String tmp35 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(208)
								::String tmp36 = (tmp35 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(208)
								HX_STACK_DO_THROW(tmp36);
							}
						}
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(208)
							bool tmp33 = (_this1->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(208)
							if ((tmp33)){
								HX_STACK_LINE(208)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(208)
						_this->zpp_inner->y;
					}
				}
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					::nape::geom::Vec2 tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(209)
					{
						HX_STACK_LINE(209)
						::nape::phys::Body tmp33 = this->get_body();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(209)
						::nape::phys::Body _this = tmp33;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(209)
						::nape::geom::Vec2 tmp34 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(209)
						bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(209)
						if ((tmp35)){
							HX_STACK_LINE(209)
							_this->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(209)
						tmp32 = _this->zpp_inner->wrap_pos;
					}
					HX_STACK_LINE(209)
					::nape::geom::Vec2 _this = tmp32;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(209)
					Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(209)
					{
						HX_STACK_LINE(209)
						Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(209)
						{
							HX_STACK_LINE(209)
							::zpp_nape::geom::ZPP_ConvexRayResult tmp35 = result->zpp_inner->next;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(209)
							bool tmp36 = (tmp35 != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(209)
							if ((tmp36)){
								HX_STACK_LINE(209)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
							}
							HX_STACK_LINE(209)
							tmp34 = result->zpp_inner->toiDistance;
						}
						HX_STACK_LINE(209)
						::nape::geom::Vec2 tmp35 = ray->at(tmp34,null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(209)
						::nape::geom::Vec2 _this1 = tmp35;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(209)
						bool tmp36 = (_this1 != null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(209)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(209)
						if ((tmp36)){
							HX_STACK_LINE(209)
							tmp37 = _this1->zpp_disp;
						}
						else{
							HX_STACK_LINE(209)
							tmp37 = false;
						}
						HX_STACK_LINE(209)
						if ((tmp37)){
							HX_STACK_LINE(209)
							::String tmp38 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(209)
							::String tmp39 = (tmp38 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(209)
							HX_STACK_DO_THROW(tmp39);
						}
						HX_STACK_LINE(209)
						{
							HX_STACK_LINE(209)
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(209)
							bool tmp38 = (_this2->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(209)
							if ((tmp38)){
								HX_STACK_LINE(209)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(209)
						tmp33 = _this1->zpp_inner->y;
					}
					HX_STACK_LINE(209)
					Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(209)
					{
						HX_STACK_LINE(209)
						::nape::geom::AABB tmp35 = this->get_bounds();		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(209)
						::nape::geom::AABB _this1 = tmp35;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(209)
						{
							HX_STACK_LINE(209)
							::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(209)
							bool tmp36 = (_this2->_validate != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(209)
							if ((tmp36)){
								HX_STACK_LINE(209)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(209)
						{
							HX_STACK_LINE(209)
							::zpp_nape::geom::ZPP_AABB _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(209)
							tmp34 = (_this2->maxy - _this2->miny);
						}
					}
					HX_STACK_LINE(209)
					Float tmp35 = (Float(tmp34) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(209)
					int tmp36 = direction;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(209)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(209)
					Float tmp38 = (tmp33 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(209)
					Float y = tmp38;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(209)
					{
						HX_STACK_LINE(209)
						{
							HX_STACK_LINE(209)
							bool tmp39 = (_this != null());		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(209)
							bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(209)
							if ((tmp39)){
								HX_STACK_LINE(209)
								tmp40 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(209)
								tmp40 = false;
							}
							HX_STACK_LINE(209)
							if ((tmp40)){
								HX_STACK_LINE(209)
								::String tmp41 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(209)
								::String tmp42 = (tmp41 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(209)
								HX_STACK_DO_THROW(tmp42);
							}
						}
						HX_STACK_LINE(209)
						{
							HX_STACK_LINE(209)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(209)
							bool tmp39 = _this1->_immutable;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(209)
							if ((tmp39)){
								HX_STACK_LINE(209)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(209)
							bool tmp40 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(209)
							if ((tmp40)){
								HX_STACK_LINE(209)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(209)
						Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(209)
						{
							HX_STACK_LINE(209)
							{
								HX_STACK_LINE(209)
								bool tmp40 = (_this != null());		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(209)
								bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(209)
								if ((tmp40)){
									HX_STACK_LINE(209)
									tmp41 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(209)
									tmp41 = false;
								}
								HX_STACK_LINE(209)
								if ((tmp41)){
									HX_STACK_LINE(209)
									::String tmp42 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(209)
									::String tmp43 = (tmp42 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(209)
									HX_STACK_DO_THROW(tmp43);
								}
							}
							HX_STACK_LINE(209)
							{
								HX_STACK_LINE(209)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(209)
								bool tmp40 = (_this1->_validate != null());		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(209)
								if ((tmp40)){
									HX_STACK_LINE(209)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(209)
							tmp39 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(209)
						Float tmp40 = y;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(209)
						bool tmp41 = (tmp39 != tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(209)
						if ((tmp41)){
							HX_STACK_LINE(209)
							bool tmp42 = (y != y);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(209)
							if ((tmp42)){
								HX_STACK_LINE(209)
								::String tmp43 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(209)
								::String tmp44 = (tmp43 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(209)
								HX_STACK_DO_THROW(tmp44);
							}
							HX_STACK_LINE(209)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(209)
							{
								HX_STACK_LINE(209)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(209)
								bool tmp43 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(209)
								if ((tmp43)){
									HX_STACK_LINE(209)
									::zpp_nape::geom::ZPP_Vec2 tmp44 = _this1;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(209)
									_this1->_invalidate(tmp44);
								}
							}
						}
					}
					HX_STACK_LINE(209)
					{
						HX_STACK_LINE(209)
						{
							HX_STACK_LINE(209)
							bool tmp39 = (_this != null());		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(209)
							bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(209)
							if ((tmp39)){
								HX_STACK_LINE(209)
								tmp40 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(209)
								tmp40 = false;
							}
							HX_STACK_LINE(209)
							if ((tmp40)){
								HX_STACK_LINE(209)
								::String tmp41 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(209)
								::String tmp42 = (tmp41 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(209)
								HX_STACK_DO_THROW(tmp42);
							}
						}
						HX_STACK_LINE(209)
						{
							HX_STACK_LINE(209)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(209)
							bool tmp39 = (_this1->_validate != null());		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(209)
							if ((tmp39)){
								HX_STACK_LINE(209)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(209)
						_this->zpp_inner->y;
					}
				}
				HX_STACK_LINE(210)
				bool tmp32 = (direction > (int)0);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(210)
				if ((tmp32)){
					HX_STACK_LINE(210)
					this->grounded = true;
				}
			}
		}
		HX_STACK_LINE(213)
		::nape::geom::Ray tmp27 = ray;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(213)
		::nape::geom::RayResult tmp28 = result;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(213)
		this->debug_ray(tmp27,tmp28);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,slope_raycast,(void))

Void Controller_obj::debug_ray( ::nape::geom::Ray ray,::nape::geom::RayResult result){
{
		HX_STACK_FRAME("Controller","debug_ray",0x2dd77c8c,"Controller.debug_ray","Controller.hx",217,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ray,"ray")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(218)
		::luxe::Physics tmp = ::Luxe_obj::physics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		bool tmp1 = tmp->nape->get_draw();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		if ((tmp2)){
			HX_STACK_LINE(218)
			return null();
		}
		HX_STACK_LINE(219)
		::phoenix::Vector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(219)
			{
				HX_STACK_LINE(219)
				::nape::geom::Vec2 tmp5 = ray->zpp_inner->direction;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(219)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(219)
				{
					HX_STACK_LINE(219)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(219)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(219)
					if ((tmp6)){
						HX_STACK_LINE(219)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(219)
						tmp7 = false;
					}
					HX_STACK_LINE(219)
					if ((tmp7)){
						HX_STACK_LINE(219)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(219)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(219)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(219)
				{
					HX_STACK_LINE(219)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(219)
					bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(219)
					if ((tmp6)){
						HX_STACK_LINE(219)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(219)
				tmp4 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(219)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(219)
			{
				HX_STACK_LINE(219)
				::nape::geom::Vec2 tmp6 = ray->zpp_inner->direction;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(219)
				::nape::geom::Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(219)
				{
					HX_STACK_LINE(219)
					bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(219)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(219)
					if ((tmp7)){
						HX_STACK_LINE(219)
						tmp8 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(219)
						tmp8 = false;
					}
					HX_STACK_LINE(219)
					if ((tmp8)){
						HX_STACK_LINE(219)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(219)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(219)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(219)
				{
					HX_STACK_LINE(219)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(219)
					bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(219)
					if ((tmp7)){
						HX_STACK_LINE(219)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(219)
				tmp5 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(219)
			::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(tmp4,tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(219)
			::phoenix::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(219)
			{
				HX_STACK_LINE(219)
				Float tmp7 = (_this->x * _this->x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(219)
				Float tmp8 = (_this->y * _this->y);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(219)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(219)
				Float tmp10 = (_this->z * _this->z);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(219)
				Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(219)
				Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(219)
				Float b = tmp12;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(219)
				Float tmp13 = (Float(_this->x) / Float(b));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(219)
				Float tmp14 = (Float(_this->y) / Float(b));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(219)
				Float tmp15 = (Float(_this->z) / Float(b));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(219)
				tmp3 = ::phoenix::Vector_obj::__new(tmp13,tmp14,tmp15,null());
			}
		}
		HX_STACK_LINE(219)
		::phoenix::Vector direction = tmp3;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(220)
		bool tmp4 = (result != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		if ((tmp4)){
			HX_STACK_LINE(222)
			::luxe::Draw tmp5 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(223)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::nape::geom::Vec2 tmp7 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(223)
				::nape::geom::Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(223)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(223)
					if ((tmp8)){
						HX_STACK_LINE(223)
						tmp9 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(223)
						tmp9 = false;
					}
					HX_STACK_LINE(223)
					if ((tmp9)){
						HX_STACK_LINE(223)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(223)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(223)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(223)
					bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(223)
					if ((tmp8)){
						HX_STACK_LINE(223)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(223)
				tmp6 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(223)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::nape::geom::Vec2 tmp8 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(223)
				::nape::geom::Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					bool tmp9 = (_this != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(223)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(223)
					if ((tmp9)){
						HX_STACK_LINE(223)
						tmp10 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(223)
						tmp10 = false;
					}
					HX_STACK_LINE(223)
					if ((tmp10)){
						HX_STACK_LINE(223)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(223)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(223)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(223)
					bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(223)
					if ((tmp9)){
						HX_STACK_LINE(223)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(223)
				tmp7 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(223)
			::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(tmp6,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(224)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					{
						HX_STACK_LINE(224)
						::zpp_nape::geom::ZPP_ConvexRayResult tmp11 = result->zpp_inner->next;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(224)
						bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(224)
						if ((tmp12)){
							HX_STACK_LINE(224)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
						}
					}
					HX_STACK_LINE(224)
					tmp10 = result->zpp_inner->toiDistance;
				}
				HX_STACK_LINE(224)
				::nape::geom::Vec2 tmp11 = ray->at(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(224)
				::nape::geom::Vec2 _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					bool tmp12 = (_this != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(224)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(224)
					if ((tmp12)){
						HX_STACK_LINE(224)
						tmp13 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(224)
						tmp13 = false;
					}
					HX_STACK_LINE(224)
					if ((tmp13)){
						HX_STACK_LINE(224)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(224)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(224)
						HX_STACK_DO_THROW(tmp15);
					}
				}
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(224)
					bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(224)
					if ((tmp12)){
						HX_STACK_LINE(224)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(224)
				tmp9 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(224)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					{
						HX_STACK_LINE(224)
						::zpp_nape::geom::ZPP_ConvexRayResult tmp12 = result->zpp_inner->next;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(224)
						bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(224)
						if ((tmp13)){
							HX_STACK_LINE(224)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
						}
					}
					HX_STACK_LINE(224)
					tmp11 = result->zpp_inner->toiDistance;
				}
				HX_STACK_LINE(224)
				::nape::geom::Vec2 tmp12 = ray->at(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(224)
				::nape::geom::Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					bool tmp13 = (_this != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(224)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(224)
					if ((tmp13)){
						HX_STACK_LINE(224)
						tmp14 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(224)
						tmp14 = false;
					}
					HX_STACK_LINE(224)
					if ((tmp14)){
						HX_STACK_LINE(224)
						::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(224)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(224)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(224)
					bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(224)
					if ((tmp13)){
						HX_STACK_LINE(224)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(224)
				tmp10 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(224)
			::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(tmp9,tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(225)
			::phoenix::Color tmp12 = ::phoenix::Color_obj::__new((int)0,(int)1,(int)0,null());		HX_STACK_VAR(tmp12,"tmp12");
			struct _Function_2_1{
				inline static Dynamic Block( ::phoenix::Vector &tmp11,::phoenix::Vector &tmp8,::phoenix::Color &tmp12){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Controller.hx",222,0x2da14382)
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
			HX_STACK_LINE(222)
			Dynamic tmp13 = _Function_2_1::Block(tmp11,tmp8,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(222)
			tmp5->line(tmp13);
		}
		else{
			HX_STACK_LINE(231)
			::luxe::Draw tmp5 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(232)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				::nape::geom::Vec2 tmp7 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(232)
				::nape::geom::Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(232)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(232)
					if ((tmp8)){
						HX_STACK_LINE(232)
						tmp9 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(232)
						tmp9 = false;
					}
					HX_STACK_LINE(232)
					if ((tmp9)){
						HX_STACK_LINE(232)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(232)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(232)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(232)
					bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(232)
					if ((tmp8)){
						HX_STACK_LINE(232)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(232)
				tmp6 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(232)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				::nape::geom::Vec2 tmp8 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(232)
				::nape::geom::Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					bool tmp9 = (_this != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(232)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(232)
					if ((tmp9)){
						HX_STACK_LINE(232)
						tmp10 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(232)
						tmp10 = false;
					}
					HX_STACK_LINE(232)
					if ((tmp10)){
						HX_STACK_LINE(232)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(232)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(232)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(232)
					bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(232)
					if ((tmp9)){
						HX_STACK_LINE(232)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(232)
				tmp7 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(232)
			::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(tmp6,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(233)
			::phoenix::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(233)
			{
				HX_STACK_LINE(233)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					::nape::geom::Vec2 tmp11 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(233)
					::nape::geom::Vec2 _this = tmp11;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						bool tmp12 = (_this != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(233)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(233)
						if ((tmp12)){
							HX_STACK_LINE(233)
							tmp13 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(233)
							tmp13 = false;
						}
						HX_STACK_LINE(233)
						if ((tmp13)){
							HX_STACK_LINE(233)
							::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(233)
							::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(233)
							HX_STACK_DO_THROW(tmp15);
						}
					}
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(233)
						bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(233)
						if ((tmp12)){
							HX_STACK_LINE(233)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(233)
					tmp10 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(233)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					::nape::geom::Vec2 tmp12 = ray->zpp_inner->origin;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(233)
					::nape::geom::Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						bool tmp13 = (_this != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(233)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(233)
						if ((tmp13)){
							HX_STACK_LINE(233)
							tmp14 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(233)
							tmp14 = false;
						}
						HX_STACK_LINE(233)
						if ((tmp14)){
							HX_STACK_LINE(233)
							::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(233)
							::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(233)
							HX_STACK_DO_THROW(tmp16);
						}
					}
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(233)
						bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(233)
						if ((tmp13)){
							HX_STACK_LINE(233)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(233)
					tmp11 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(233)
				::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new(tmp10,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(233)
				::phoenix::Vector _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(233)
				::phoenix::Vector tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					Float tmp14 = ray->zpp_inner->maxdist;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(233)
					Float v = tmp14;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						Float tmp15 = (direction->x * v);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(233)
						Float _x = tmp15;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(233)
						Float tmp16 = (direction->y * v);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(233)
						Float _y = tmp16;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(233)
						Float tmp17 = (direction->z * v);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(233)
						Float _z = tmp17;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(233)
						bool prev = direction->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(233)
						direction->ignore_listeners = true;
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							direction->x = _x;
							HX_STACK_LINE(233)
							bool tmp18 = direction->_construct;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(233)
							if ((tmp18)){
								HX_STACK_LINE(233)
								direction->x;
							}
							else{
								HX_STACK_LINE(233)
								bool tmp19 = (direction->listen_x != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(233)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(233)
								if ((tmp19)){
									HX_STACK_LINE(233)
									bool tmp21 = direction->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(233)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(233)
									tmp20 = !(tmp22);
								}
								else{
									HX_STACK_LINE(233)
									tmp20 = false;
								}
								HX_STACK_LINE(233)
								if ((tmp20)){
									HX_STACK_LINE(233)
									Float tmp21 = _x;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(233)
									direction->listen_x(tmp21);
								}
								HX_STACK_LINE(233)
								direction->x;
							}
						}
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							direction->y = _y;
							HX_STACK_LINE(233)
							bool tmp18 = direction->_construct;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(233)
							if ((tmp18)){
								HX_STACK_LINE(233)
								direction->y;
							}
							else{
								HX_STACK_LINE(233)
								bool tmp19 = (direction->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(233)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(233)
								if ((tmp19)){
									HX_STACK_LINE(233)
									bool tmp21 = direction->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(233)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(233)
									tmp20 = !(tmp22);
								}
								else{
									HX_STACK_LINE(233)
									tmp20 = false;
								}
								HX_STACK_LINE(233)
								if ((tmp20)){
									HX_STACK_LINE(233)
									Float tmp21 = _y;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(233)
									direction->listen_y(tmp21);
								}
								HX_STACK_LINE(233)
								direction->y;
							}
						}
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							direction->z = _z;
							HX_STACK_LINE(233)
							bool tmp18 = direction->_construct;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(233)
							if ((tmp18)){
								HX_STACK_LINE(233)
								direction->z;
							}
							else{
								HX_STACK_LINE(233)
								bool tmp19 = (direction->listen_z != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(233)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(233)
								if ((tmp19)){
									HX_STACK_LINE(233)
									bool tmp21 = direction->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(233)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(233)
									tmp20 = !(tmp22);
								}
								else{
									HX_STACK_LINE(233)
									tmp20 = false;
								}
								HX_STACK_LINE(233)
								if ((tmp20)){
									HX_STACK_LINE(233)
									Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(233)
									direction->listen_z(tmp21);
								}
								HX_STACK_LINE(233)
								direction->z;
							}
						}
						HX_STACK_LINE(233)
						direction->ignore_listeners = prev;
						HX_STACK_LINE(233)
						bool tmp18 = (direction->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(233)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(233)
						if ((tmp18)){
							HX_STACK_LINE(233)
							bool tmp20 = direction->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(233)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(233)
							tmp19 = !(tmp21);
						}
						else{
							HX_STACK_LINE(233)
							tmp19 = false;
						}
						HX_STACK_LINE(233)
						if ((tmp19)){
							HX_STACK_LINE(233)
							Float tmp20 = direction->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(233)
							direction->listen_x(tmp20);
						}
						HX_STACK_LINE(233)
						bool tmp20 = (direction->listen_y != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(233)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(233)
						if ((tmp20)){
							HX_STACK_LINE(233)
							bool tmp22 = direction->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(233)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(233)
							tmp21 = !(tmp23);
						}
						else{
							HX_STACK_LINE(233)
							tmp21 = false;
						}
						HX_STACK_LINE(233)
						if ((tmp21)){
							HX_STACK_LINE(233)
							Float tmp22 = direction->y;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(233)
							direction->listen_y(tmp22);
						}
						HX_STACK_LINE(233)
						bool tmp22 = (direction->listen_z != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(233)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(233)
						if ((tmp22)){
							HX_STACK_LINE(233)
							bool tmp24 = direction->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(233)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(233)
							tmp23 = !(tmp25);
						}
						else{
							HX_STACK_LINE(233)
							tmp23 = false;
						}
						HX_STACK_LINE(233)
						if ((tmp23)){
							HX_STACK_LINE(233)
							Float tmp24 = direction->z;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(233)
							direction->listen_z(tmp24);
						}
						HX_STACK_LINE(233)
						direction;
					}
					HX_STACK_LINE(233)
					tmp13 = direction;
				}
				HX_STACK_LINE(233)
				::phoenix::Vector other = tmp13;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					bool tmp14 = (other == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(233)
					if ((tmp14)){
						HX_STACK_LINE(233)
						::String tmp15 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(233)
						::luxe::DebugError tmp16 = ::luxe::DebugError_obj::null_assertion(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(233)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					Float tmp14 = (_this->x + other->x);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(233)
					Float _x = tmp14;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(233)
					Float tmp15 = (_this->y + other->y);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(233)
					Float _y = tmp15;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(233)
					Float tmp16 = (_this->z + other->z);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(233)
					Float _z = tmp16;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(233)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(233)
					_this->ignore_listeners = true;
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						_this->x = _x;
						HX_STACK_LINE(233)
						bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(233)
						if ((tmp17)){
							HX_STACK_LINE(233)
							_this->x;
						}
						else{
							HX_STACK_LINE(233)
							bool tmp18 = (_this->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(233)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(233)
							if ((tmp18)){
								HX_STACK_LINE(233)
								bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(233)
								bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(233)
								tmp19 = !(tmp21);
							}
							else{
								HX_STACK_LINE(233)
								tmp19 = false;
							}
							HX_STACK_LINE(233)
							if ((tmp19)){
								HX_STACK_LINE(233)
								Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(233)
								_this->listen_x(tmp20);
							}
							HX_STACK_LINE(233)
							_this->x;
						}
					}
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						_this->y = _y;
						HX_STACK_LINE(233)
						bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(233)
						if ((tmp17)){
							HX_STACK_LINE(233)
							_this->y;
						}
						else{
							HX_STACK_LINE(233)
							bool tmp18 = (_this->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(233)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(233)
							if ((tmp18)){
								HX_STACK_LINE(233)
								bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(233)
								bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(233)
								tmp19 = !(tmp21);
							}
							else{
								HX_STACK_LINE(233)
								tmp19 = false;
							}
							HX_STACK_LINE(233)
							if ((tmp19)){
								HX_STACK_LINE(233)
								Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(233)
								_this->listen_y(tmp20);
							}
							HX_STACK_LINE(233)
							_this->y;
						}
					}
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						_this->z = _z;
						HX_STACK_LINE(233)
						bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(233)
						if ((tmp17)){
							HX_STACK_LINE(233)
							_this->z;
						}
						else{
							HX_STACK_LINE(233)
							bool tmp18 = (_this->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(233)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(233)
							if ((tmp18)){
								HX_STACK_LINE(233)
								bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(233)
								bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(233)
								tmp19 = !(tmp21);
							}
							else{
								HX_STACK_LINE(233)
								tmp19 = false;
							}
							HX_STACK_LINE(233)
							if ((tmp19)){
								HX_STACK_LINE(233)
								Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(233)
								_this->listen_z(tmp20);
							}
							HX_STACK_LINE(233)
							_this->z;
						}
					}
					HX_STACK_LINE(233)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(233)
					bool tmp17 = (_this->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(233)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(233)
					if ((tmp17)){
						HX_STACK_LINE(233)
						bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(233)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(233)
						tmp18 = !(tmp20);
					}
					else{
						HX_STACK_LINE(233)
						tmp18 = false;
					}
					HX_STACK_LINE(233)
					if ((tmp18)){
						HX_STACK_LINE(233)
						Float tmp19 = _this->x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(233)
						_this->listen_x(tmp19);
					}
					HX_STACK_LINE(233)
					bool tmp19 = (_this->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(233)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(233)
					if ((tmp19)){
						HX_STACK_LINE(233)
						bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(233)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(233)
						tmp20 = !(tmp22);
					}
					else{
						HX_STACK_LINE(233)
						tmp20 = false;
					}
					HX_STACK_LINE(233)
					if ((tmp20)){
						HX_STACK_LINE(233)
						Float tmp21 = _this->y;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(233)
						_this->listen_y(tmp21);
					}
					HX_STACK_LINE(233)
					bool tmp21 = (_this->listen_z != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(233)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(233)
					if ((tmp21)){
						HX_STACK_LINE(233)
						bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(233)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(233)
						tmp22 = !(tmp24);
					}
					else{
						HX_STACK_LINE(233)
						tmp22 = false;
					}
					HX_STACK_LINE(233)
					if ((tmp22)){
						HX_STACK_LINE(233)
						Float tmp23 = _this->z;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(233)
						_this->listen_z(tmp23);
					}
					HX_STACK_LINE(233)
					_this;
				}
				HX_STACK_LINE(233)
				tmp9 = _this;
			}
			HX_STACK_LINE(234)
			::phoenix::Color tmp10 = ::phoenix::Color_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp10,"tmp10");
			struct _Function_2_1{
				inline static Dynamic Block( ::phoenix::Vector &tmp9,::phoenix::Color &tmp10,::phoenix::Vector &tmp8){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Controller.hx",231,0x2da14382)
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
			HX_STACK_LINE(231)
			Dynamic tmp11 = _Function_2_1::Block(tmp9,tmp10,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(231)
			tmp5->line(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,debug_ray,(void))

Void Controller_obj::add_movement_input( ::nape::geom::Vec2 input){
{
		HX_STACK_FRAME("Controller","add_movement_input",0x726f6dca,"Controller.add_movement_input","Controller.hx",242,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(input,"input")
		HX_STACK_LINE(242)
		this->input_vector = input;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,add_movement_input,(void))

Void Controller_obj::jump( ){
{
		HX_STACK_FRAME("Controller","jump",0xcc6b2de0,"Controller.jump","Controller.hx",246,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(247)
		bool tmp = this->grounded;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		if ((tmp1)){
			HX_STACK_LINE(247)
			return null();
		}
		HX_STACK_LINE(248)
		this->grounded = false;
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				::nape::phys::Body tmp3 = this->get_body();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(249)
				::nape::phys::Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(249)
				::nape::geom::Vec2 tmp4 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(249)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(249)
				if ((tmp5)){
					HX_STACK_LINE(249)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(249)
				tmp2 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(249)
			::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(249)
			Float tmp3 = this->jump_impulse;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			Float y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				{
					HX_STACK_LINE(249)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(249)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(249)
					if ((tmp5)){
						HX_STACK_LINE(249)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(249)
						tmp6 = false;
					}
					HX_STACK_LINE(249)
					if ((tmp6)){
						HX_STACK_LINE(249)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(249)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(249)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(249)
				{
					HX_STACK_LINE(249)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(249)
					bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(249)
					if ((tmp5)){
						HX_STACK_LINE(249)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(249)
					bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(249)
					if ((tmp6)){
						HX_STACK_LINE(249)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(249)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(249)
				{
					HX_STACK_LINE(249)
					{
						HX_STACK_LINE(249)
						bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(249)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(249)
						if ((tmp6)){
							HX_STACK_LINE(249)
							tmp7 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(249)
							tmp7 = false;
						}
						HX_STACK_LINE(249)
						if ((tmp7)){
							HX_STACK_LINE(249)
							::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(249)
							::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(249)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(249)
					{
						HX_STACK_LINE(249)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(249)
						bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(249)
						if ((tmp6)){
							HX_STACK_LINE(249)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(249)
					tmp5 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(249)
				Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(249)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(249)
				if ((tmp7)){
					HX_STACK_LINE(249)
					bool tmp8 = (y != y);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(249)
					if ((tmp8)){
						HX_STACK_LINE(249)
						::String tmp9 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(249)
						::String tmp10 = (tmp9 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(249)
						HX_STACK_DO_THROW(tmp10);
					}
					HX_STACK_LINE(249)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(249)
					{
						HX_STACK_LINE(249)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(249)
						bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(249)
						if ((tmp9)){
							HX_STACK_LINE(249)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(249)
							_this1->_invalidate(tmp10);
						}
					}
				}
			}
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				{
					HX_STACK_LINE(249)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(249)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(249)
					if ((tmp5)){
						HX_STACK_LINE(249)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(249)
						tmp6 = false;
					}
					HX_STACK_LINE(249)
					if ((tmp6)){
						HX_STACK_LINE(249)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(249)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(249)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(249)
				{
					HX_STACK_LINE(249)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(249)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(249)
					if ((tmp5)){
						HX_STACK_LINE(249)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(249)
				_this->zpp_inner->y;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,jump,(void))

::nape::space::Space Controller_obj::get_space( ){
	HX_STACK_FRAME("Controller","get_space",0xbb52d2eb,"Controller.get_space","Controller.hx",263,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	::luxe::Physics tmp = ::Luxe_obj::physics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(264)
	::nape::space::Space tmp1 = tmp->nape->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(264)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_space,return )

::Creature Controller_obj::get_creature( ){
	HX_STACK_FRAME("Controller","get_creature",0x4af904ba,"Controller.get_creature","Controller.hx",268,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	::luxe::Entity tmp = this->get_entity();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	::Creature tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(269)
	tmp1 = hx::TCast< ::Creature >::cast(tmp);
	HX_STACK_LINE(269)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_creature,return )

::nape::phys::Body Controller_obj::get_body( ){
	HX_STACK_FRAME("Controller","get_body",0xdea4001d,"Controller.get_body","Controller.hx",273,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(274)
	::Creature tmp = this->get_creature();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	::nape::phys::Body tmp1 = tmp->body;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_body,return )

::nape::geom::AABB Controller_obj::get_bounds( ){
	HX_STACK_FRAME("Controller","get_bounds",0xdaeea0b0,"Controller.get_bounds","Controller.hx",278,0x2da14382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	::nape::geom::AABB tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	{
		HX_STACK_LINE(279)
		::nape::phys::Body tmp1 = this->get_body();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(279)
		bool tmp2 = _this->zpp_inner->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(279)
		if ((tmp2)){
			HX_STACK_LINE(279)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no bounds","\x88","\xea","\xf6","\xa3"));
		}
		HX_STACK_LINE(279)
		::zpp_nape::geom::ZPP_AABB tmp3 = _this->zpp_inner->aabb;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(279)
		tmp = tmp3->wrapper();
	}
	HX_STACK_LINE(279)
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
	HX_STACK_FRAME("Controller","get_zero_friction",0x567daf56,"Controller.get_zero_friction","Controller.hx",253,0x2da14382)
	HX_STACK_LINE(254)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new((int)0,(int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(254)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_zero_friction,return )

::nape::phys::Material Controller_obj::get_normal_friction( ){
	HX_STACK_FRAME("Controller","get_normal_friction",0x18f547b7,"Controller.get_normal_friction","Controller.hx",258,0x2da14382)
	HX_STACK_LINE(259)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new((int)0,(int)4,(int)8,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
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

