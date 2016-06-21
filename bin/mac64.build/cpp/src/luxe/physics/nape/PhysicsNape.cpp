#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
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
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace luxe{
namespace physics{
namespace nape{

Void PhysicsNape_obj::__construct()
{
HX_STACK_FRAME("luxe.physics.nape.PhysicsNape","new",0x8a9418da,"luxe.physics.nape.PhysicsNape.new","luxe/physics/nape/PhysicsNape.hx",11,0x19a15fd5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->position_iterations = (int)18;
	HX_STACK_LINE(16)
	this->velocity_iterations = (int)18;
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

//PhysicsNape_obj::~PhysicsNape_obj() { }

Dynamic PhysicsNape_obj::__CreateEmpty() { return  new PhysicsNape_obj; }
hx::ObjectPtr< PhysicsNape_obj > PhysicsNape_obj::__new()
{  hx::ObjectPtr< PhysicsNape_obj > _result_ = new PhysicsNape_obj();
	_result_->__construct();
	return _result_;}

Dynamic PhysicsNape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsNape_obj > _result_ = new PhysicsNape_obj();
	_result_->__construct();
	return _result_;}

Void PhysicsNape_obj::init( ){
{
		HX_STACK_FRAME("luxe.physics.nape.PhysicsNape","init",0xb3ba5d56,"luxe.physics.nape.PhysicsNape.init","luxe/physics/nape/PhysicsNape.hx",19,0x19a15fd5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		::nape::space::Space tmp = ::nape::space::Space_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		this->space = tmp;
		HX_STACK_LINE(23)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new((int)0,(int)980,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		this->set_gravity(tmp1);
	}
return null();
}


Void PhysicsNape_obj::update( ){
{
		HX_STACK_FRAME("luxe.physics.nape.PhysicsNape","update",0xccc645cf,"luxe.physics.nape.PhysicsNape.update","luxe/physics/nape/PhysicsNape.hx",28,0x19a15fd5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		bool tmp = this->get_paused();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		if ((tmp1)){
			HX_STACK_LINE(32)
			::nape::space::Space tmp2 = this->space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			::luxe::Physics tmp3 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			Float tmp4 = tmp3->step_delta;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(32)
			::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(32)
			Float tmp6 = tmp5->timescale;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(32)
			Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(32)
			int tmp8 = this->velocity_iterations;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(32)
			int tmp9 = this->position_iterations;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(32)
			tmp2->step(tmp7,tmp8,tmp9);
			HX_STACK_LINE(34)
			bool tmp10 = this->get_draw();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(34)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(34)
			if ((tmp10)){
				HX_STACK_LINE(34)
				::luxe::physics::nape::DebugDraw tmp12 = this->debugdraw;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(34)
				::luxe::physics::nape::DebugDraw tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(34)
				tmp11 = (tmp13 != null());
			}
			else{
				HX_STACK_LINE(34)
				tmp11 = false;
			}
			HX_STACK_LINE(34)
			if ((tmp11)){
				HX_STACK_LINE(35)
				::luxe::physics::nape::DebugDraw tmp12 = this->debugdraw;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(35)
				tmp12->update();
			}
		}
	}
return null();
}


Void PhysicsNape_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.physics.nape.PhysicsNape","destroy",0xe76d3a74,"luxe.physics.nape.PhysicsNape.destroy","luxe/physics/nape/PhysicsNape.hx",42,0x19a15fd5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::nape::space::Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		tmp->clear();
		HX_STACK_LINE(45)
		this->space = null();
	}
return null();
}


::phoenix::Vector PhysicsNape_obj::set_gravity( ::phoenix::Vector _gravity){
	HX_STACK_FRAME("luxe.physics.nape.PhysicsNape","set_gravity",0x3f3b27eb,"luxe.physics.nape.PhysicsNape.set_gravity","luxe/physics/nape/PhysicsNape.hx",51,0x19a15fd5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gravity,"_gravity")
	HX_STACK_LINE(53)
	::nape::space::Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	if ((tmp1)){
		HX_STACK_LINE(54)
		::nape::space::Space tmp2 = this->space;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		::nape::space::Space _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(54)
		::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			Float x = _gravity->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(54)
			Float y = _gravity->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				bool tmp4 = (x != x);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp5)){
					HX_STACK_LINE(54)
					tmp6 = (y != y);
				}
				else{
					HX_STACK_LINE(54)
					tmp6 = true;
				}
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(54)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(54)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(54)
				::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(54)
				if ((tmp8)){
					HX_STACK_LINE(54)
					::nape::geom::Vec2 tmp9 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(54)
					ret = tmp9;
				}
				else{
					HX_STACK_LINE(54)
					::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(54)
					ret = tmp9;
					HX_STACK_LINE(54)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(54)
					ret->zpp_pool = null();
					HX_STACK_LINE(54)
					ret->zpp_disp = false;
					HX_STACK_LINE(54)
					::nape::geom::Vec2 tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(54)
					::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(54)
					bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(54)
					if ((tmp12)){
						HX_STACK_LINE(54)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
				HX_STACK_LINE(54)
				bool tmp9 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(54)
				if ((tmp9)){
					HX_STACK_LINE(54)
					::zpp_nape::geom::ZPP_Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(54)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(54)
							bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(54)
							if ((tmp12)){
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(54)
								ret1 = tmp13;
							}
							else{
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(54)
								ret1 = tmp13;
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(54)
								ret1->next = null();
							}
							HX_STACK_LINE(54)
							ret1->weak = false;
						}
						HX_STACK_LINE(54)
						ret1->_immutable = immutable;
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							ret1->x = x;
							HX_STACK_LINE(54)
							ret1->y = y;
							HX_STACK_LINE(54)
							{
							}
						}
						HX_STACK_LINE(54)
						tmp10 = ret1;
					}
					HX_STACK_LINE(54)
					ret->zpp_inner = tmp10;
					HX_STACK_LINE(54)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(54)
					bool tmp10 = (ret != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(54)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(54)
					if ((tmp10)){
						HX_STACK_LINE(54)
						tmp11 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(54)
						tmp11 = false;
					}
					HX_STACK_LINE(54)
					if ((tmp11)){
						HX_STACK_LINE(54)
						::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(54)
						::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(54)
						HX_STACK_DO_THROW(tmp13);
					}
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(54)
						bool tmp12 = _this1->_immutable;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(54)
						if ((tmp12)){
							HX_STACK_LINE(54)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(54)
						bool tmp13 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(54)
						if ((tmp13)){
							HX_STACK_LINE(54)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(54)
					bool tmp12 = (x != x);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(54)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(54)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(54)
					if ((tmp13)){
						HX_STACK_LINE(54)
						tmp14 = (y != y);
					}
					else{
						HX_STACK_LINE(54)
						tmp14 = true;
					}
					HX_STACK_LINE(54)
					if ((tmp14)){
						HX_STACK_LINE(54)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(54)
					Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						bool tmp16 = (ret != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(54)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(54)
						if ((tmp16)){
							HX_STACK_LINE(54)
							tmp17 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(54)
							tmp17 = false;
						}
						HX_STACK_LINE(54)
						if ((tmp17)){
							HX_STACK_LINE(54)
							::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(54)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(54)
							HX_STACK_DO_THROW(tmp19);
						}
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(54)
							bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(54)
							if ((tmp18)){
								HX_STACK_LINE(54)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(54)
						tmp15 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(54)
					Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(54)
					bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(54)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(54)
					if ((tmp17)){
						HX_STACK_LINE(54)
						Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							bool tmp20 = (ret != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(54)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(54)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(54)
							bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(54)
							if ((tmp23)){
								HX_STACK_LINE(54)
								tmp22 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(54)
								tmp22 = false;
							}
							HX_STACK_LINE(54)
							bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(54)
							if ((tmp24)){
								HX_STACK_LINE(54)
								::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(54)
								::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(54)
								::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(54)
								::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(54)
								::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(54)
								HX_STACK_DO_THROW(tmp29);
							}
							HX_STACK_LINE(54)
							{
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(54)
								bool tmp25 = (_this1->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(54)
								bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(54)
								bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(54)
								if ((tmp27)){
									HX_STACK_LINE(54)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(54)
							Float tmp25 = ret->zpp_inner->y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(54)
							tmp19 = tmp25;
						}
						HX_STACK_LINE(54)
						Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(54)
						tmp18 = (tmp19 == tmp20);
					}
					else{
						HX_STACK_LINE(54)
						tmp18 = false;
					}
					HX_STACK_LINE(54)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(54)
					if ((tmp19)){
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(54)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(54)
							{
							}
						}
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(54)
							bool tmp20 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(54)
							if ((tmp20)){
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2 tmp21 = _this1;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(54)
								_this1->_invalidate(tmp21);
							}
						}
					}
					HX_STACK_LINE(54)
					ret;
				}
				HX_STACK_LINE(54)
				ret->zpp_inner->weak = true;
				HX_STACK_LINE(54)
				tmp3 = ret;
			}
		}
		HX_STACK_LINE(54)
		::nape::geom::Vec2 gravity = tmp3;		HX_STACK_VAR(gravity,"gravity");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				bool tmp4 = (gravity != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				if ((tmp4)){
					HX_STACK_LINE(54)
					tmp5 = gravity->zpp_disp;
				}
				else{
					HX_STACK_LINE(54)
					tmp5 = false;
				}
				HX_STACK_LINE(54)
				if ((tmp5)){
					HX_STACK_LINE(54)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(54)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(54)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(54)
			bool tmp4 = (gravity == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			if ((tmp4)){
				HX_STACK_LINE(54)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::gravity cannot be null","\xd1","\x79","\xde","\xe5"));
			}
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::nape::geom::Vec2 tmp6 = _this->zpp_inner->wrap_gravity;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(54)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(54)
					if ((tmp7)){
						HX_STACK_LINE(54)
						_this->zpp_inner->getgravity();
					}
					HX_STACK_LINE(54)
					tmp5 = _this->zpp_inner->wrap_gravity;
				}
				HX_STACK_LINE(54)
				::nape::geom::Vec2 _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					bool tmp6 = (_this1 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(54)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(54)
					if ((tmp6)){
						HX_STACK_LINE(54)
						tmp7 = _this1->zpp_disp;
					}
					else{
						HX_STACK_LINE(54)
						tmp7 = false;
					}
					HX_STACK_LINE(54)
					if ((tmp7)){
						HX_STACK_LINE(54)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(54)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(54)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					bool tmp6 = (gravity != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(54)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(54)
					if ((tmp6)){
						HX_STACK_LINE(54)
						tmp7 = gravity->zpp_disp;
					}
					else{
						HX_STACK_LINE(54)
						tmp7 = false;
					}
					HX_STACK_LINE(54)
					if ((tmp7)){
						HX_STACK_LINE(54)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(54)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(54)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(54)
					bool tmp6 = _this2->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(54)
					if ((tmp6)){
						HX_STACK_LINE(54)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(54)
					bool tmp7 = (_this2->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(54)
					if ((tmp7)){
						HX_STACK_LINE(54)
						_this2->_isimmutable();
					}
				}
				HX_STACK_LINE(54)
				bool tmp6 = (gravity == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(54)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(54)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						bool tmp9 = (gravity != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(54)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(54)
						if ((tmp9)){
							HX_STACK_LINE(54)
							tmp10 = gravity->zpp_disp;
						}
						else{
							HX_STACK_LINE(54)
							tmp10 = false;
						}
						HX_STACK_LINE(54)
						if ((tmp10)){
							HX_STACK_LINE(54)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(54)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(54)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							::zpp_nape::geom::ZPP_Vec2 _this2 = gravity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(54)
							bool tmp11 = (_this2->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(54)
							if ((tmp11)){
								HX_STACK_LINE(54)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(54)
						tmp8 = gravity->zpp_inner->x;
					}
					HX_STACK_LINE(54)
					Float x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(54)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						bool tmp10 = (gravity != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(54)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(54)
						if ((tmp10)){
							HX_STACK_LINE(54)
							tmp11 = gravity->zpp_disp;
						}
						else{
							HX_STACK_LINE(54)
							tmp11 = false;
						}
						HX_STACK_LINE(54)
						if ((tmp11)){
							HX_STACK_LINE(54)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(54)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(54)
							HX_STACK_DO_THROW(tmp13);
						}
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							::zpp_nape::geom::ZPP_Vec2 _this2 = gravity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(54)
							bool tmp12 = (_this2->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(54)
							if ((tmp12)){
								HX_STACK_LINE(54)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(54)
						tmp9 = gravity->zpp_inner->y;
					}
					HX_STACK_LINE(54)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						bool tmp10 = (_this1 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(54)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(54)
						if ((tmp10)){
							HX_STACK_LINE(54)
							tmp11 = _this1->zpp_disp;
						}
						else{
							HX_STACK_LINE(54)
							tmp11 = false;
						}
						HX_STACK_LINE(54)
						if ((tmp11)){
							HX_STACK_LINE(54)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(54)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(54)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(54)
						bool tmp10 = _this2->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(54)
						if ((tmp10)){
							HX_STACK_LINE(54)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(54)
						bool tmp11 = (_this2->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(54)
						if ((tmp11)){
							HX_STACK_LINE(54)
							_this2->_isimmutable();
						}
					}
					HX_STACK_LINE(54)
					bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(54)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(54)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(54)
					if ((tmp11)){
						HX_STACK_LINE(54)
						tmp12 = (y != y);
					}
					else{
						HX_STACK_LINE(54)
						tmp12 = true;
					}
					HX_STACK_LINE(54)
					if ((tmp12)){
						HX_STACK_LINE(54)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(54)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(54)
					{
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
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(54)
							bool tmp14 = (_this2->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(54)
							if ((tmp14)){
								HX_STACK_LINE(54)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(54)
						tmp13 = _this1->zpp_inner->x;
					}
					HX_STACK_LINE(54)
					Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(54)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(54)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(54)
					if ((tmp15)){
						HX_STACK_LINE(54)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							{
								HX_STACK_LINE(54)
								bool tmp18 = (_this1 != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(54)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(54)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(54)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(54)
								if ((tmp21)){
									HX_STACK_LINE(54)
									tmp20 = _this1->zpp_disp;
								}
								else{
									HX_STACK_LINE(54)
									tmp20 = false;
								}
								HX_STACK_LINE(54)
								bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(54)
								if ((tmp22)){
									HX_STACK_LINE(54)
									::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(54)
									::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(54)
									::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(54)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(54)
									::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(54)
									HX_STACK_DO_THROW(tmp27);
								}
							}
							HX_STACK_LINE(54)
							{
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(54)
								bool tmp18 = (_this2->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(54)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(54)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(54)
								if ((tmp20)){
									HX_STACK_LINE(54)
									_this2->_validate();
								}
							}
							HX_STACK_LINE(54)
							Float tmp18 = _this1->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(54)
							tmp17 = tmp18;
						}
						HX_STACK_LINE(54)
						Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(54)
						tmp16 = (tmp17 == tmp18);
					}
					else{
						HX_STACK_LINE(54)
						tmp16 = false;
					}
					HX_STACK_LINE(54)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(54)
					if ((tmp17)){
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
							bool tmp18 = (_this2->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(54)
							if ((tmp18)){
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = _this2;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(54)
								_this2->_invalidate(tmp19);
							}
						}
					}
					HX_STACK_LINE(54)
					tmp7 = _this1;
				}
				HX_STACK_LINE(54)
				::nape::geom::Vec2 ret = tmp7;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(54)
					tmp8 = gravity->zpp_inner->weak;
					HX_STACK_LINE(54)
					if ((tmp8)){
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							{
								HX_STACK_LINE(54)
								bool tmp9 = (gravity != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(54)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(54)
								if ((tmp9)){
									HX_STACK_LINE(54)
									tmp10 = gravity->zpp_disp;
								}
								else{
									HX_STACK_LINE(54)
									tmp10 = false;
								}
								HX_STACK_LINE(54)
								if ((tmp10)){
									HX_STACK_LINE(54)
									::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(54)
									::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(54)
									HX_STACK_DO_THROW(tmp12);
								}
							}
							HX_STACK_LINE(54)
							{
								HX_STACK_LINE(54)
								::zpp_nape::geom::ZPP_Vec2 _this2 = gravity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(54)
								bool tmp9 = _this2->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(54)
								if ((tmp9)){
									HX_STACK_LINE(54)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(54)
								bool tmp10 = (_this2->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(54)
								if ((tmp10)){
									HX_STACK_LINE(54)
									_this2->_isimmutable();
								}
							}
							HX_STACK_LINE(54)
							bool tmp9 = gravity->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(54)
							if ((tmp9)){
								HX_STACK_LINE(54)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(54)
							::zpp_nape::geom::ZPP_Vec2 inner = gravity->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(54)
							gravity->zpp_inner->outer = null();
							HX_STACK_LINE(54)
							gravity->zpp_inner = null();
							HX_STACK_LINE(54)
							{
								HX_STACK_LINE(54)
								::nape::geom::Vec2 o = gravity;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(54)
								o->zpp_pool = null();
								HX_STACK_LINE(54)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(54)
								bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(54)
								if ((tmp11)){
									HX_STACK_LINE(54)
									::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(54)
									tmp12->zpp_pool = o;
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
									bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(54)
									if ((tmp10)){
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
								::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(54)
								o->next = tmp10;
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
			::nape::geom::Vec2 tmp4 = _this->zpp_inner->wrap_gravity;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			if ((tmp5)){
				HX_STACK_LINE(54)
				_this->zpp_inner->getgravity();
			}
			HX_STACK_LINE(54)
			_this->zpp_inner->wrap_gravity;
		}
	}
	HX_STACK_LINE(57)
	::phoenix::Vector tmp2 = _gravity;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	::phoenix::Vector tmp3 = this->super::set_gravity(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	return tmp3;
}


bool PhysicsNape_obj::set_draw( bool _draw){
	HX_STACK_FRAME("luxe.physics.nape.PhysicsNape","set_draw",0x37ccfe47,"luxe.physics.nape.PhysicsNape.set_draw","luxe/physics/nape/PhysicsNape.hx",61,0x19a15fd5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_draw,"_draw")
	HX_STACK_LINE(63)
	::luxe::physics::nape::DebugDraw tmp = this->debugdraw;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	if ((tmp1)){
		HX_STACK_LINE(64)
		::luxe::physics::nape::DebugDraw tmp2 = this->debugdraw;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		bool tmp3 = _draw;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		tmp2->set_visible(tmp3);
	}
	HX_STACK_LINE(67)
	bool tmp2 = this->draw = _draw;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	return tmp2;
}



PhysicsNape_obj::PhysicsNape_obj()
{
}

void PhysicsNape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsNape);
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(debugdraw,"debugdraw");
	HX_MARK_MEMBER_NAME(velocity_iterations,"velocity_iterations");
	HX_MARK_MEMBER_NAME(position_iterations,"position_iterations");
	::luxe::PhysicsEngine_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicsNape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(debugdraw,"debugdraw");
	HX_VISIT_MEMBER_NAME(velocity_iterations,"velocity_iterations");
	HX_VISIT_MEMBER_NAME(position_iterations,"position_iterations");
	::luxe::PhysicsEngine_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PhysicsNape_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_draw") ) { return set_draw_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugdraw") ) { return debugdraw; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_gravity") ) { return set_gravity_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"velocity_iterations") ) { return velocity_iterations; }
		if (HX_FIELD_EQ(inName,"position_iterations") ) { return position_iterations; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsNape_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugdraw") ) { debugdraw=inValue.Cast< ::luxe::physics::nape::DebugDraw >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"velocity_iterations") ) { velocity_iterations=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position_iterations") ) { position_iterations=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsNape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	outFields->push(HX_HCSTRING("debugdraw","\xd7","\xa3","\xe2","\x3a"));
	outFields->push(HX_HCSTRING("velocity_iterations","\x58","\x69","\x10","\x8c"));
	outFields->push(HX_HCSTRING("position_iterations","\x4c","\x7e","\xec","\xc3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::space::Space*/ ,(int)offsetof(PhysicsNape_obj,space),HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{hx::fsObject /*::luxe::physics::nape::DebugDraw*/ ,(int)offsetof(PhysicsNape_obj,debugdraw),HX_HCSTRING("debugdraw","\xd7","\xa3","\xe2","\x3a")},
	{hx::fsInt,(int)offsetof(PhysicsNape_obj,velocity_iterations),HX_HCSTRING("velocity_iterations","\x58","\x69","\x10","\x8c")},
	{hx::fsInt,(int)offsetof(PhysicsNape_obj,position_iterations),HX_HCSTRING("position_iterations","\x4c","\x7e","\xec","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("debugdraw","\xd7","\xa3","\xe2","\x3a"),
	HX_HCSTRING("velocity_iterations","\x58","\x69","\x10","\x8c"),
	HX_HCSTRING("position_iterations","\x4c","\x7e","\xec","\xc3"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_gravity","\x71","\xd5","\x66","\x08"),
	HX_HCSTRING("set_draw","\x01","\x41","\x88","\x70"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsNape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsNape_obj::__mClass,"__mClass");
};

#endif

hx::Class PhysicsNape_obj::__mClass;

void PhysicsNape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.physics.nape.PhysicsNape","\xe8","\x63","\x74","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PhysicsNape_obj >;
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
} // end namespace physics
} // end namespace nape
