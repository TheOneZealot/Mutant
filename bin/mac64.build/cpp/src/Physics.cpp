#include <hxcpp.h>

#ifndef INCLUDED_Controller
#include <Controller.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
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
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
#ifndef INCLUDED_luxe_States
#include <luxe/States.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
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
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
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
#ifndef INCLUDED_snow_App
#include <snow/App.h>
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

Void Physics_obj::__construct()
{
HX_STACK_FRAME("Physics","new",0xc2f8e119,"Physics.new","Physics.hx",10,0xc89f8477)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(34)
	this->debug_depth = ((Float)1000);
	HX_STACK_LINE(40)
	super::__construct();
	HX_STACK_LINE(42)
	this->controllers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(44)
	::String tmp = HX_HCSTRING("  i / physics / physics engine created","\x75","\xb5","\x70","\xd7");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Physics.hx","\x77","\x84","\x9f","\xc8"),44,HX_HCSTRING("Physics","\xa7","\x60","\xa2","\x8b"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	::haxe::Log_obj::trace(tmp,tmp1);
}
;
	return null();
}

//Physics_obj::~Physics_obj() { }

Dynamic Physics_obj::__CreateEmpty() { return  new Physics_obj; }
hx::ObjectPtr< Physics_obj > Physics_obj::__new()
{  hx::ObjectPtr< Physics_obj > _result_ = new Physics_obj();
	_result_->__construct();
	return _result_;}

Dynamic Physics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Physics_obj > _result_ = new Physics_obj();
	_result_->__construct();
	return _result_;}

Void Physics_obj::update( ){
{
		HX_STACK_FRAME("Physics","update",0x4732eef0,"Physics.update","Physics.hx",48,0xc89f8477)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		bool tmp = ::GameState_obj::paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		if ((tmp)){
			HX_STACK_LINE(49)
			return null();
		}
		HX_STACK_LINE(51)
		::luxe::Engine tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		Float dt = tmp1->tick_delta;		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(53)
			Array< ::Dynamic > _g1 = this->controllers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(53)
			while((true)){
				HX_STACK_LINE(53)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(53)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(53)
				if ((tmp3)){
					HX_STACK_LINE(53)
					break;
				}
				HX_STACK_LINE(53)
				::Controller tmp4 = _g1->__get(_g).StaticCast< ::Controller >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				::Controller ctrl = tmp4;		HX_STACK_VAR(ctrl,"ctrl");
				HX_STACK_LINE(53)
				++(_g);
				HX_STACK_LINE(55)
				::luxe::Entity tmp5 = ctrl->get_entity();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(55)
				if ((tmp6)){
					HX_STACK_LINE(55)
					continue;
				}
			}
		}
	}
return null();
}


Void Physics_obj::render( ){
{
		HX_STACK_FRAME("Physics","render",0xc556d43d,"Physics.render","Physics.hx",60,0xc89f8477)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		bool tmp = this->get_draw();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		if ((tmp1)){
			HX_STACK_LINE(61)
			return null();
		}
		HX_STACK_LINE(63)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		Float dt = tmp2->tick_delta;		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(65)
			Array< ::Dynamic > _g1 = this->controllers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(65)
			while((true)){
				HX_STACK_LINE(65)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(65)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(65)
				if ((tmp4)){
					HX_STACK_LINE(65)
					break;
				}
				HX_STACK_LINE(65)
				::Controller tmp5 = _g1->__get(_g).StaticCast< ::Controller >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(65)
				::Controller ctrl = tmp5;		HX_STACK_VAR(ctrl,"ctrl");
				HX_STACK_LINE(65)
				++(_g);
				HX_STACK_LINE(67)
				::luxe::Entity tmp6 = ctrl->get_entity();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(67)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				if ((tmp7)){
					HX_STACK_LINE(67)
					continue;
				}
				HX_STACK_LINE(69)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					::nape::geom::Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						::nape::phys::Body tmp10 = ctrl->get_body();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(69)
						::nape::phys::Body _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(69)
						::nape::geom::Vec2 tmp11 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(69)
						bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(69)
						if ((tmp12)){
							HX_STACK_LINE(69)
							_this->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(69)
						tmp9 = _this->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(69)
					::nape::geom::Vec2 _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(69)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(69)
						if ((tmp10)){
							HX_STACK_LINE(69)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(69)
							tmp11 = false;
						}
						HX_STACK_LINE(69)
						if ((tmp11)){
							HX_STACK_LINE(69)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(69)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(69)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(69)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(69)
						if ((tmp10)){
							HX_STACK_LINE(69)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(69)
					tmp8 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(69)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						::nape::phys::Body tmp11 = ctrl->get_body();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(69)
						::nape::phys::Body _this = tmp11;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(69)
						::nape::geom::Vec2 tmp12 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(69)
						bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(69)
						if ((tmp13)){
							HX_STACK_LINE(69)
							_this->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(69)
						tmp10 = _this->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(69)
					::nape::geom::Vec2 _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(69)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(69)
						if ((tmp11)){
							HX_STACK_LINE(69)
							tmp12 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(69)
							tmp12 = false;
						}
						HX_STACK_LINE(69)
						if ((tmp12)){
							HX_STACK_LINE(69)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(69)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(69)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(69)
						bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(69)
						if ((tmp11)){
							HX_STACK_LINE(69)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(69)
					tmp9 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(69)
				::phoenix::Vector tmp10 = ::phoenix::Vector_obj::__new(tmp8,tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(69)
				::phoenix::Vector vel = tmp10;		HX_STACK_VAR(vel,"vel");
				HX_STACK_LINE(71)
				::luxe::Draw tmp11 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(73)
				::phoenix::Vector tmp12 = ctrl->get_pos();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(74)
				::phoenix::Vector tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					::phoenix::Vector tmp14 = ctrl->get_pos();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(74)
					::phoenix::Vector a = tmp14;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(74)
					::phoenix::Vector tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						{
							HX_STACK_LINE(74)
							Float tmp16 = (vel->x * dt);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(74)
							Float _x = tmp16;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(74)
							Float tmp17 = (vel->y * dt);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(74)
							Float _y = tmp17;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(74)
							Float tmp18 = (vel->z * dt);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(74)
							Float _z = tmp18;		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(74)
							bool prev = vel->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(74)
							vel->ignore_listeners = true;
							HX_STACK_LINE(74)
							{
								HX_STACK_LINE(74)
								vel->x = _x;
								HX_STACK_LINE(74)
								bool tmp19 = vel->_construct;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(74)
								if ((tmp19)){
									HX_STACK_LINE(74)
									vel->x;
								}
								else{
									HX_STACK_LINE(74)
									bool tmp20 = (vel->listen_x != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(74)
									bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(74)
									if ((tmp20)){
										HX_STACK_LINE(74)
										bool tmp22 = vel->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(74)
										bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(74)
										tmp21 = !(tmp23);
									}
									else{
										HX_STACK_LINE(74)
										tmp21 = false;
									}
									HX_STACK_LINE(74)
									if ((tmp21)){
										HX_STACK_LINE(74)
										Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(74)
										vel->listen_x(tmp22);
									}
									HX_STACK_LINE(74)
									vel->x;
								}
							}
							HX_STACK_LINE(74)
							{
								HX_STACK_LINE(74)
								vel->y = _y;
								HX_STACK_LINE(74)
								bool tmp19 = vel->_construct;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(74)
								if ((tmp19)){
									HX_STACK_LINE(74)
									vel->y;
								}
								else{
									HX_STACK_LINE(74)
									bool tmp20 = (vel->listen_y != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(74)
									bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(74)
									if ((tmp20)){
										HX_STACK_LINE(74)
										bool tmp22 = vel->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(74)
										bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(74)
										tmp21 = !(tmp23);
									}
									else{
										HX_STACK_LINE(74)
										tmp21 = false;
									}
									HX_STACK_LINE(74)
									if ((tmp21)){
										HX_STACK_LINE(74)
										Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(74)
										vel->listen_y(tmp22);
									}
									HX_STACK_LINE(74)
									vel->y;
								}
							}
							HX_STACK_LINE(74)
							{
								HX_STACK_LINE(74)
								vel->z = _z;
								HX_STACK_LINE(74)
								bool tmp19 = vel->_construct;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(74)
								if ((tmp19)){
									HX_STACK_LINE(74)
									vel->z;
								}
								else{
									HX_STACK_LINE(74)
									bool tmp20 = (vel->listen_z != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(74)
									bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(74)
									if ((tmp20)){
										HX_STACK_LINE(74)
										bool tmp22 = vel->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(74)
										bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(74)
										tmp21 = !(tmp23);
									}
									else{
										HX_STACK_LINE(74)
										tmp21 = false;
									}
									HX_STACK_LINE(74)
									if ((tmp21)){
										HX_STACK_LINE(74)
										Float tmp22 = _z;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(74)
										vel->listen_z(tmp22);
									}
									HX_STACK_LINE(74)
									vel->z;
								}
							}
							HX_STACK_LINE(74)
							vel->ignore_listeners = prev;
							HX_STACK_LINE(74)
							bool tmp19 = (vel->listen_x != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(74)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(74)
							if ((tmp19)){
								HX_STACK_LINE(74)
								bool tmp21 = vel->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(74)
								bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(74)
								tmp20 = !(tmp22);
							}
							else{
								HX_STACK_LINE(74)
								tmp20 = false;
							}
							HX_STACK_LINE(74)
							if ((tmp20)){
								HX_STACK_LINE(74)
								Float tmp21 = vel->x;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(74)
								vel->listen_x(tmp21);
							}
							HX_STACK_LINE(74)
							bool tmp21 = (vel->listen_y != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(74)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(74)
							if ((tmp21)){
								HX_STACK_LINE(74)
								bool tmp23 = vel->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(74)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(74)
								tmp22 = !(tmp24);
							}
							else{
								HX_STACK_LINE(74)
								tmp22 = false;
							}
							HX_STACK_LINE(74)
							if ((tmp22)){
								HX_STACK_LINE(74)
								Float tmp23 = vel->y;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(74)
								vel->listen_y(tmp23);
							}
							HX_STACK_LINE(74)
							bool tmp23 = (vel->listen_z != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(74)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(74)
							if ((tmp23)){
								HX_STACK_LINE(74)
								bool tmp25 = vel->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(74)
								bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(74)
								tmp24 = !(tmp26);
							}
							else{
								HX_STACK_LINE(74)
								tmp24 = false;
							}
							HX_STACK_LINE(74)
							if ((tmp24)){
								HX_STACK_LINE(74)
								Float tmp25 = vel->z;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(74)
								vel->listen_z(tmp25);
							}
							HX_STACK_LINE(74)
							vel;
						}
						HX_STACK_LINE(74)
						tmp15 = vel;
					}
					HX_STACK_LINE(74)
					::phoenix::Vector b = tmp15;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(74)
					Float tmp16 = (a->x + b->x);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(74)
					Float tmp17 = (a->y + b->y);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(74)
					Float tmp18 = (a->z + b->z);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(74)
					tmp13 = ::phoenix::Vector_obj::__new(tmp16,tmp17,tmp18,null());
				}
				HX_STACK_LINE(75)
				Dynamic tmp14 = ::Physics_obj::debug_palette;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(75)
				::phoenix::Color tmp15 = tmp14->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(76)
				Float tmp16 = this->debug_depth;		HX_STACK_VAR(tmp16,"tmp16");
				struct _Function_3_1{
					inline static Dynamic Block( ::phoenix::Vector &tmp13,::phoenix::Color &tmp15,::phoenix::Vector &tmp12,Float &tmp16){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Physics.hx",71,0xc89f8477)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , true,false);
							__result->Add(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00") , tmp12,false);
							__result->Add(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00") , tmp13,false);
							__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp15,false);
							__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp16,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(71)
				Dynamic tmp17 = _Function_3_1::Block(tmp13,tmp15,tmp12,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(71)
				tmp11->line(tmp17);
			}
		}
	}
return null();
}


Dynamic Physics_obj::debug_palette;

Dynamic Physics_obj::types;

Dynamic Physics_obj::filters;


Physics_obj::Physics_obj()
{
}

void Physics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Physics);
	HX_MARK_MEMBER_NAME(debug_depth,"debug_depth");
	HX_MARK_MEMBER_NAME(controllers,"controllers");
	::luxe::PhysicsEngine_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Physics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(debug_depth,"debug_depth");
	HX_VISIT_MEMBER_NAME(controllers,"controllers");
	::luxe::PhysicsEngine_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Physics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"debug_depth") ) { return debug_depth; }
		if (HX_FIELD_EQ(inName,"controllers") ) { return controllers; }
	}
	return super::__Field(inName,inCallProp);
}

bool Physics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { outValue = types; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { outValue = filters; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"debug_palette") ) { outValue = debug_palette; return true;  }
	}
	return false;
}

Dynamic Physics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"debug_depth") ) { debug_depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controllers") ) { controllers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Physics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { filters=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"debug_palette") ) { debug_palette=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Physics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("debug_depth","\xd7","\x8a","\xef","\xa6"));
	outFields->push(HX_HCSTRING("controllers","\x57","\xf0","\x06","\x22"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Physics_obj,debug_depth),HX_HCSTRING("debug_depth","\xd7","\x8a","\xef","\xa6")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Physics_obj,controllers),HX_HCSTRING("controllers","\x57","\xf0","\x06","\x22")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Physics_obj::debug_palette,HX_HCSTRING("debug_palette","\x4f","\x49","\x22","\xec")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Physics_obj::types,HX_HCSTRING("types","\x79","\x70","\xcb","\x1a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Physics_obj::filters,HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("debug_depth","\xd7","\x8a","\xef","\xa6"),
	HX_HCSTRING("controllers","\x57","\xf0","\x06","\x22"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Physics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Physics_obj::debug_palette,"debug_palette");
	HX_MARK_MEMBER_NAME(Physics_obj::types,"types");
	HX_MARK_MEMBER_NAME(Physics_obj::filters,"filters");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Physics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Physics_obj::debug_palette,"debug_palette");
	HX_VISIT_MEMBER_NAME(Physics_obj::types,"types");
	HX_VISIT_MEMBER_NAME(Physics_obj::filters,"filters");
};

#endif

hx::Class Physics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("debug_palette","\x4f","\x49","\x22","\xec"),
	HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"),
	HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"),
	::String(null()) };

void Physics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Physics","\xa7","\x60","\xa2","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Physics_obj::__GetStatic;
	__mClass->mSetStaticField = &Physics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Physics_obj >;
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

void Physics_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Physics.hx",12,0xc89f8477)
		{
			HX_STACK_LINE(13)
			::phoenix::Color tmp = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13)
			::phoenix::Color tmp1 = tmp->rgb((int)16750848);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(14)
			::phoenix::Color tmp2 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14)
			::phoenix::Color tmp3 = tmp2->rgb((int)10749954);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(15)
			::phoenix::Color tmp4 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(15)
			::phoenix::Color tmp5 = tmp4->rgb((int)3389246);		HX_STACK_VAR(tmp5,"tmp5");
			struct _Function_1_1{
				inline static Dynamic Block( ::phoenix::Color &tmp5,::phoenix::Color &tmp3,::phoenix::Color &tmp1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Physics.hx",12,0xc89f8477)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e") , tmp1,false);
						__result->Add(HX_HCSTRING("ray","\xea","\xd5","\x56","\x00") , tmp3,false);
						__result->Add(HX_HCSTRING("ray_hit","\x3e","\x9e","\xc3","\x37") , tmp5,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(12)
			return _Function_1_1::Block(tmp5,tmp3,tmp1);
		}
		return null();
	}
};
	debug_palette= _Function_0_1::Block();
struct _Function_0_2{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Physics.hx",19,0xc89f8477)
		{
			HX_STACK_LINE(20)
			::nape::callbacks::CbType tmp = ::nape::callbacks::CbType_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(21)
			::nape::callbacks::CbType tmp1 = ::nape::callbacks::CbType_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(22)
			::nape::callbacks::CbType tmp2 = ::nape::callbacks::CbType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			::nape::callbacks::CbType tmp3 = ::nape::callbacks::CbType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			struct _Function_1_1{
				inline static Dynamic Block( ::nape::callbacks::CbType &tmp,::nape::callbacks::CbType &tmp2,::nape::callbacks::CbType &tmp3,::nape::callbacks::CbType &tmp1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Physics.hx",19,0xc89f8477)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("terrain","\xb5","\xab","\x17","\x29") , tmp,false);
						__result->Add(HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c") , tmp1,false);
						__result->Add(HX_HCSTRING("projectile","\xe9","\x85","\x8b","\xc4") , tmp2,false);
						__result->Add(HX_HCSTRING("physobj","\x65","\xc5","\x55","\xbe") , tmp3,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(19)
			return _Function_1_1::Block(tmp,tmp2,tmp3,tmp1);
		}
		return null();
	}
};
	types= _Function_0_2::Block();
struct _Function_0_3{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Physics.hx",27,0xc89f8477)
		{
			HX_STACK_LINE(28)
			::nape::dynamics::InteractionFilter tmp = ::nape::dynamics::InteractionFilter_obj::__new((int)1,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(29)
			int tmp1 = (int)-5;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(29)
			::nape::dynamics::InteractionFilter tmp2 = ::nape::dynamics::InteractionFilter_obj::__new((int)2,tmp1,null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			int tmp3 = (int)-3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(30)
			::nape::dynamics::InteractionFilter tmp4 = ::nape::dynamics::InteractionFilter_obj::__new((int)4,tmp3,null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(31)
			::nape::dynamics::InteractionFilter tmp5 = ::nape::dynamics::InteractionFilter_obj::__new((int)8,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			struct _Function_1_1{
				inline static Dynamic Block( ::nape::dynamics::InteractionFilter &tmp5,::nape::dynamics::InteractionFilter &tmp,::nape::dynamics::InteractionFilter &tmp4,::nape::dynamics::InteractionFilter &tmp2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Physics.hx",27,0xc89f8477)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("terrain","\xb5","\xab","\x17","\x29") , tmp,false);
						__result->Add(HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c") , tmp2,false);
						__result->Add(HX_HCSTRING("projectile","\xe9","\x85","\x8b","\xc4") , tmp4,false);
						__result->Add(HX_HCSTRING("physobj","\x65","\xc5","\x55","\xbe") , tmp5,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(27)
			return _Function_1_1::Block(tmp5,tmp,tmp4,tmp2);
		}
		return null();
	}
};
	filters= _Function_0_3::Block();
}

