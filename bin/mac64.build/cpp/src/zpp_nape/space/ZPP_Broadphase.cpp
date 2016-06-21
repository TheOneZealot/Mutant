#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultList
#include <nape/geom/RayResultList.h>
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
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_DynAABBPhase
#include <zpp_nape/space/ZPP_DynAABBPhase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepPhase
#include <zpp_nape/space/ZPP_SweepPhase.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
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
namespace zpp_nape{
namespace space{

Void ZPP_Broadphase_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","new",0xf55a4ff9,"zpp_nape.space.ZPP_Broadphase.new","zpp_nape/space/Broadphase.hx",174,0xcf31b77a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(236)
	this->circShape = null();
	HX_STACK_LINE(209)
	this->matrix = null();
	HX_STACK_LINE(208)
	this->aabbShape = null();
	HX_STACK_LINE(178)
	this->dynab = null();
	HX_STACK_LINE(177)
	this->sweep = null();
	HX_STACK_LINE(176)
	this->is_sweep = false;
	HX_STACK_LINE(175)
	this->space = null();
}
;
	return null();
}

//ZPP_Broadphase_obj::~ZPP_Broadphase_obj() { }

Dynamic ZPP_Broadphase_obj::__CreateEmpty() { return  new ZPP_Broadphase_obj; }
hx::ObjectPtr< ZPP_Broadphase_obj > ZPP_Broadphase_obj::__new()
{  hx::ObjectPtr< ZPP_Broadphase_obj > _result_ = new ZPP_Broadphase_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Broadphase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Broadphase_obj > _result_ = new ZPP_Broadphase_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Broadphase_obj::insert( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","insert",0x67d1c940,"zpp_nape.space.ZPP_Broadphase.insert","zpp_nape/space/Broadphase.hx",179,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(180)
		bool tmp = this->is_sweep;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		if ((tmp)){
			HX_STACK_LINE(180)
			::zpp_nape::space::ZPP_SweepPhase tmp1 = this->sweep;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(180)
			::zpp_nape::shape::ZPP_Shape tmp2 = shape;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(180)
			tmp1->__insert(tmp2);
		}
		else{
			HX_STACK_LINE(181)
			::zpp_nape::space::ZPP_DynAABBPhase tmp1 = this->dynab;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(181)
			::zpp_nape::shape::ZPP_Shape tmp2 = shape;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			tmp1->__insert(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Broadphase_obj,insert,(void))

Void ZPP_Broadphase_obj::remove( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","remove",0xce7d224b,"zpp_nape.space.ZPP_Broadphase.remove","zpp_nape/space/Broadphase.hx",183,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(184)
		bool tmp = this->is_sweep;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		if ((tmp)){
			HX_STACK_LINE(184)
			::zpp_nape::space::ZPP_SweepPhase tmp1 = this->sweep;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(184)
			::zpp_nape::shape::ZPP_Shape tmp2 = shape;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(184)
			tmp1->__remove(tmp2);
		}
		else{
			HX_STACK_LINE(185)
			::zpp_nape::space::ZPP_DynAABBPhase tmp1 = this->dynab;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(185)
			::zpp_nape::shape::ZPP_Shape tmp2 = shape;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(185)
			tmp1->__remove(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Broadphase_obj,remove,(void))

Void ZPP_Broadphase_obj::sync( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","sync",0xbd08e0a2,"zpp_nape.space.ZPP_Broadphase.sync","zpp_nape/space/Broadphase.hx",187,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(188)
		bool tmp = this->is_sweep;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		if ((tmp)){
			HX_STACK_LINE(188)
			::zpp_nape::space::ZPP_SweepPhase tmp1 = this->sweep;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(188)
			bool tmp2 = tmp1->space->continuous;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(188)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(188)
			if ((tmp3)){
				HX_STACK_LINE(188)
				bool tmp4 = shape->zip_aabb;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(188)
				if ((tmp4)){
					HX_STACK_LINE(188)
					bool tmp5 = (shape->body != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(188)
					if ((tmp5)){
						HX_STACK_LINE(188)
						shape->zip_aabb = false;
						HX_STACK_LINE(188)
						bool tmp6 = (shape->type == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(188)
						if ((tmp6)){
							HX_STACK_LINE(188)
							::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								bool tmp7 = _this->zip_worldCOM;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(188)
								if ((tmp7)){
									HX_STACK_LINE(188)
									bool tmp8 = (_this->body != null());		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(188)
									if ((tmp8)){
										HX_STACK_LINE(188)
										_this->zip_worldCOM = false;
										HX_STACK_LINE(188)
										{
											HX_STACK_LINE(188)
											bool tmp9 = _this->zip_localCOM;		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(188)
											if ((tmp9)){
												HX_STACK_LINE(188)
												_this->zip_localCOM = false;
												HX_STACK_LINE(188)
												bool tmp10 = (_this->type == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(188)
												if ((tmp10)){
													HX_STACK_LINE(188)
													::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(188)
													::zpp_nape::geom::ZPP_Vec2 tmp11 = _this1->lverts->next;		HX_STACK_VAR(tmp11,"tmp11");
													HX_STACK_LINE(188)
													bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(188)
													if ((tmp12)){
														HX_STACK_LINE(188)
														HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
													}
													HX_STACK_LINE(188)
													::zpp_nape::geom::ZPP_Vec2 tmp13 = _this1->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(188)
													::zpp_nape::geom::ZPP_Vec2 tmp14 = tmp13->next;		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(188)
													bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(188)
													if ((tmp15)){
														HX_STACK_LINE(188)
														::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(188)
														_this1->localCOMx = tmp16->x;
														HX_STACK_LINE(188)
														::zpp_nape::geom::ZPP_Vec2 tmp17 = _this1->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(188)
														_this1->localCOMy = tmp17->y;
														HX_STACK_LINE(188)
														Dynamic();
													}
													else{
														HX_STACK_LINE(188)
														::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(188)
														::zpp_nape::geom::ZPP_Vec2 tmp17 = tmp16->next->next;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(188)
														bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(188)
														if ((tmp18)){
															HX_STACK_LINE(188)
															{
																HX_STACK_LINE(188)
																::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(188)
																_this1->localCOMx = tmp19->x;
																HX_STACK_LINE(188)
																::zpp_nape::geom::ZPP_Vec2 tmp20 = _this1->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(188)
																_this1->localCOMy = tmp20->y;
																HX_STACK_LINE(188)
																{
																}
															}
															HX_STACK_LINE(188)
															{
																HX_STACK_LINE(188)
																Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(188)
																::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(188)
																Float tmp20 = tmp19->next->x;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(188)
																Float tmp21 = t;		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(188)
																Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(188)
																hx::AddEq(_this1->localCOMx,tmp22);
																HX_STACK_LINE(188)
																::zpp_nape::geom::ZPP_Vec2 tmp23 = _this1->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(188)
																Float tmp24 = tmp23->next->y;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(188)
																Float tmp25 = t;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(188)
																Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(188)
																hx::AddEq(_this1->localCOMy,tmp26);
															}
															HX_STACK_LINE(188)
															{
																HX_STACK_LINE(188)
																Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(188)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(188)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
														else{
															HX_STACK_LINE(188)
															{
																HX_STACK_LINE(188)
																_this1->localCOMx = (int)0;
																HX_STACK_LINE(188)
																_this1->localCOMy = (int)0;
																HX_STACK_LINE(188)
																{
																}
															}
															HX_STACK_LINE(188)
															Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
															HX_STACK_LINE(188)
															{
																HX_STACK_LINE(188)
																::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(188)
																::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp19;		HX_STACK_VAR(cx_ite,"cx_ite");
																HX_STACK_LINE(188)
																::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																HX_STACK_LINE(188)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(188)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(188)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(188)
																while((true)){
																	HX_STACK_LINE(188)
																	bool tmp20 = (cx_ite != null());		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(188)
																	bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(188)
																	if ((tmp21)){
																		HX_STACK_LINE(188)
																		break;
																	}
																	HX_STACK_LINE(188)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(188)
																	{
																		HX_STACK_LINE(188)
																		Float tmp22 = v->x;		HX_STACK_VAR(tmp22,"tmp22");
																		HX_STACK_LINE(188)
																		Float tmp23 = (w->y - u->y);		HX_STACK_VAR(tmp23,"tmp23");
																		HX_STACK_LINE(188)
																		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																		HX_STACK_LINE(188)
																		hx::AddEq(area,tmp24);
																		HX_STACK_LINE(188)
																		Float tmp25 = (w->y * v->x);		HX_STACK_VAR(tmp25,"tmp25");
																		HX_STACK_LINE(188)
																		Float tmp26 = (w->x * v->y);		HX_STACK_VAR(tmp26,"tmp26");
																		HX_STACK_LINE(188)
																		Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(188)
																		Float cf = tmp27;		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(188)
																		Float tmp28 = (v->x + w->x);		HX_STACK_VAR(tmp28,"tmp28");
																		HX_STACK_LINE(188)
																		Float tmp29 = cf;		HX_STACK_VAR(tmp29,"tmp29");
																		HX_STACK_LINE(188)
																		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																		HX_STACK_LINE(188)
																		hx::AddEq(_this1->localCOMx,tmp30);
																		HX_STACK_LINE(188)
																		Float tmp31 = (v->y + w->y);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(188)
																		Float tmp32 = cf;		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(188)
																		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(188)
																		hx::AddEq(_this1->localCOMy,tmp33);
																	}
																	HX_STACK_LINE(188)
																	u = v;
																	HX_STACK_LINE(188)
																	v = w;
																	HX_STACK_LINE(188)
																	cx_ite = cx_ite->next;
																}
																HX_STACK_LINE(188)
																::zpp_nape::geom::ZPP_Vec2 tmp20 = _this1->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(188)
																cx_ite = tmp20;
																HX_STACK_LINE(188)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(188)
																{
																	HX_STACK_LINE(188)
																	Float tmp21 = v->x;		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(188)
																	Float tmp22 = (w->y - u->y);		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(188)
																	Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(188)
																	hx::AddEq(area,tmp23);
																	HX_STACK_LINE(188)
																	Float tmp24 = (w->y * v->x);		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(188)
																	Float tmp25 = (w->x * v->y);		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(188)
																	Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(188)
																	Float cf = tmp26;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(188)
																	Float tmp27 = (v->x + w->x);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(188)
																	Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(188)
																	Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(188)
																	hx::AddEq(_this1->localCOMx,tmp29);
																	HX_STACK_LINE(188)
																	Float tmp30 = (v->y + w->y);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(188)
																	Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(188)
																	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(188)
																	hx::AddEq(_this1->localCOMy,tmp32);
																}
																HX_STACK_LINE(188)
																u = v;
																HX_STACK_LINE(188)
																v = w;
																HX_STACK_LINE(188)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(188)
																::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																HX_STACK_LINE(188)
																{
																	HX_STACK_LINE(188)
																	Float tmp21 = v->x;		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(188)
																	Float tmp22 = (w1->y - u->y);		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(188)
																	Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(188)
																	hx::AddEq(area,tmp23);
																	HX_STACK_LINE(188)
																	Float tmp24 = (w1->y * v->x);		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(188)
																	Float tmp25 = (w1->x * v->y);		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(188)
																	Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(188)
																	Float cf = tmp26;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(188)
																	Float tmp27 = (v->x + w1->x);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(188)
																	Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(188)
																	Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(188)
																	hx::AddEq(_this1->localCOMx,tmp29);
																	HX_STACK_LINE(188)
																	Float tmp30 = (v->y + w1->y);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(188)
																	Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(188)
																	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(188)
																	hx::AddEq(_this1->localCOMy,tmp32);
																}
															}
															HX_STACK_LINE(188)
															Float tmp19 = ((int)3 * area);		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(188)
															Float tmp20 = (Float((int)1) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(188)
															area = tmp20;
															HX_STACK_LINE(188)
															{
																HX_STACK_LINE(188)
																Float t = area;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(188)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(188)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
													}
												}
												HX_STACK_LINE(188)
												bool tmp11 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(188)
												if ((tmp11)){
													HX_STACK_LINE(188)
													::zpp_nape::geom::ZPP_Vec2 tmp12 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(188)
													tmp12->x = _this->localCOMx;
													HX_STACK_LINE(188)
													::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(188)
													tmp13->y = _this->localCOMy;
													HX_STACK_LINE(188)
													{
													}
												}
											}
										}
										HX_STACK_LINE(188)
										{
											HX_STACK_LINE(188)
											::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(188)
											bool tmp9 = _this1->zip_axis;		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(188)
											if ((tmp9)){
												HX_STACK_LINE(188)
												_this1->zip_axis = false;
												HX_STACK_LINE(188)
												{
													HX_STACK_LINE(188)
													Float tmp10 = _this1->rot;		HX_STACK_VAR(tmp10,"tmp10");
													HX_STACK_LINE(188)
													Float tmp11 = ::Math_obj::sin(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
													HX_STACK_LINE(188)
													_this1->axisx = tmp11;
													HX_STACK_LINE(188)
													Float tmp12 = _this1->rot;		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(188)
													Float tmp13 = ::Math_obj::cos(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(188)
													_this1->axisy = tmp13;
													HX_STACK_LINE(188)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(188)
										{
											HX_STACK_LINE(188)
											Float tmp9 = _this->body->posx;		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(188)
											Float tmp10 = _this->body->axisy;		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(188)
											Float tmp11 = _this->localCOMx;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(188)
											Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(188)
											Float tmp13 = _this->body->axisx;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(188)
											Float tmp14 = _this->localCOMy;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(188)
											Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(188)
											Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(188)
											Float tmp17 = (tmp9 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(188)
											_this->worldCOMx = tmp17;
											HX_STACK_LINE(188)
											Float tmp18 = _this->body->posy;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(188)
											Float tmp19 = _this->localCOMx;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(188)
											Float tmp20 = _this->body->axisx;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(188)
											Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(188)
											Float tmp22 = _this->localCOMy;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(188)
											Float tmp23 = _this->body->axisy;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(188)
											Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(188)
											Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(188)
											Float tmp26 = (tmp18 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(188)
											_this->worldCOMy = tmp26;
										}
									}
								}
							}
							HX_STACK_LINE(188)
							Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(188)
							Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								Float tmp7 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(188)
								_this->aabb->minx = tmp7;
								HX_STACK_LINE(188)
								Float tmp8 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(188)
								_this->aabb->miny = tmp8;
							}
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								Float tmp7 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(188)
								_this->aabb->maxx = tmp7;
								HX_STACK_LINE(188)
								Float tmp8 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(188)
								_this->aabb->maxy = tmp8;
							}
						}
						else{
							HX_STACK_LINE(188)
							::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								bool tmp7 = _this->zip_gverts;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(188)
								if ((tmp7)){
									HX_STACK_LINE(188)
									bool tmp8 = (_this->body != null());		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(188)
									if ((tmp8)){
										HX_STACK_LINE(188)
										_this->zip_gverts = false;
										HX_STACK_LINE(188)
										_this->validate_lverts();
										HX_STACK_LINE(188)
										{
											HX_STACK_LINE(188)
											::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(188)
											bool tmp9 = _this1->zip_axis;		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(188)
											if ((tmp9)){
												HX_STACK_LINE(188)
												_this1->zip_axis = false;
												HX_STACK_LINE(188)
												{
													HX_STACK_LINE(188)
													Float tmp10 = _this1->rot;		HX_STACK_VAR(tmp10,"tmp10");
													HX_STACK_LINE(188)
													Float tmp11 = ::Math_obj::sin(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
													HX_STACK_LINE(188)
													_this1->axisx = tmp11;
													HX_STACK_LINE(188)
													Float tmp12 = _this1->rot;		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(188)
													Float tmp13 = ::Math_obj::cos(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(188)
													_this1->axisy = tmp13;
													HX_STACK_LINE(188)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(188)
										::zpp_nape::geom::ZPP_Vec2 tmp9 = _this->lverts->next;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(188)
										::zpp_nape::geom::ZPP_Vec2 li = tmp9;		HX_STACK_VAR(li,"li");
										HX_STACK_LINE(188)
										{
											HX_STACK_LINE(188)
											::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->gverts->next;		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(188)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(188)
											while((true)){
												HX_STACK_LINE(188)
												bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(188)
												bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(188)
												if ((tmp12)){
													HX_STACK_LINE(188)
													break;
												}
												HX_STACK_LINE(188)
												::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(188)
												{
													HX_STACK_LINE(188)
													::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
													HX_STACK_LINE(188)
													li = li->next;
													HX_STACK_LINE(188)
													{
														HX_STACK_LINE(188)
														Float tmp13 = _this->body->posx;		HX_STACK_VAR(tmp13,"tmp13");
														HX_STACK_LINE(188)
														Float tmp14 = _this->body->axisy;		HX_STACK_VAR(tmp14,"tmp14");
														HX_STACK_LINE(188)
														Float tmp15 = l->x;		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(188)
														Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(188)
														Float tmp17 = _this->body->axisx;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(188)
														Float tmp18 = l->y;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(188)
														Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(188)
														Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(188)
														Float tmp21 = (tmp13 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(188)
														g->x = tmp21;
														HX_STACK_LINE(188)
														Float tmp22 = _this->body->posy;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(188)
														Float tmp23 = l->x;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(188)
														Float tmp24 = _this->body->axisx;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(188)
														Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(188)
														Float tmp26 = l->y;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(188)
														Float tmp27 = _this->body->axisy;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(188)
														Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(188)
														Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(188)
														Float tmp30 = (tmp22 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(188)
														g->y = tmp30;
													}
												}
												HX_STACK_LINE(188)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
							}
							HX_STACK_LINE(188)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->lverts->next;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(188)
							bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(188)
							if ((tmp8)){
								HX_STACK_LINE(188)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
							}
							HX_STACK_LINE(188)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = _this->gverts->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(188)
							::zpp_nape::geom::ZPP_Vec2 p0 = tmp9;		HX_STACK_VAR(p0,"p0");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								_this->aabb->minx = p0->x;
								HX_STACK_LINE(188)
								_this->aabb->miny = p0->y;
								HX_STACK_LINE(188)
								{
								}
							}
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								_this->aabb->maxx = p0->x;
								HX_STACK_LINE(188)
								_this->aabb->maxy = p0->y;
								HX_STACK_LINE(188)
								{
								}
							}
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->gverts->next;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(188)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp10->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(188)
								while((true)){
									HX_STACK_LINE(188)
									bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(188)
									bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(188)
									if ((tmp12)){
										HX_STACK_LINE(188)
										break;
									}
									HX_STACK_LINE(188)
									::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										Float tmp13 = p->x;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(188)
										Float tmp14 = _this->aabb->minx;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(188)
										bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(188)
										if ((tmp15)){
											HX_STACK_LINE(188)
											_this->aabb->minx = p->x;
										}
										HX_STACK_LINE(188)
										Float tmp16 = p->x;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(188)
										Float tmp17 = _this->aabb->maxx;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(188)
										bool tmp18 = (tmp16 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(188)
										if ((tmp18)){
											HX_STACK_LINE(188)
											_this->aabb->maxx = p->x;
										}
										HX_STACK_LINE(188)
										Float tmp19 = p->y;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										Float tmp20 = _this->aabb->miny;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										bool tmp21 = (tmp19 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											_this->aabb->miny = p->y;
										}
										HX_STACK_LINE(188)
										Float tmp22 = p->y;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(188)
										Float tmp23 = _this->aabb->maxy;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(188)
										bool tmp24 = (tmp22 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(188)
										if ((tmp24)){
											HX_STACK_LINE(188)
											_this->aabb->maxy = p->y;
										}
									}
									HX_STACK_LINE(188)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(189)
			::zpp_nape::space::ZPP_DynAABBPhase tmp1 = this->dynab;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(189)
			::zpp_nape::space::ZPP_DynAABBPhase _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(189)
			::zpp_nape::space::ZPP_AABBNode node = shape->node;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(189)
			bool tmp2 = node->synced;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(189)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			if ((tmp3)){
				HX_STACK_LINE(189)
				bool tmp4 = _this->space->continuous;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(189)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(189)
				if ((tmp5)){
					HX_STACK_LINE(189)
					bool tmp6 = shape->zip_aabb;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(189)
					if ((tmp6)){
						HX_STACK_LINE(189)
						bool tmp7 = (shape->body != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(189)
						if ((tmp7)){
							HX_STACK_LINE(189)
							shape->zip_aabb = false;
							HX_STACK_LINE(189)
							bool tmp8 = (shape->type == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(189)
							if ((tmp8)){
								HX_STACK_LINE(189)
								::zpp_nape::shape::ZPP_Circle _this1 = shape->circle;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									bool tmp9 = _this1->zip_worldCOM;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(189)
									if ((tmp9)){
										HX_STACK_LINE(189)
										bool tmp10 = (_this1->body != null());		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(189)
										if ((tmp10)){
											HX_STACK_LINE(189)
											_this1->zip_worldCOM = false;
											HX_STACK_LINE(189)
											{
												HX_STACK_LINE(189)
												bool tmp11 = _this1->zip_localCOM;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(189)
												if ((tmp11)){
													HX_STACK_LINE(189)
													_this1->zip_localCOM = false;
													HX_STACK_LINE(189)
													bool tmp12 = (_this1->type == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(189)
													if ((tmp12)){
														HX_STACK_LINE(189)
														::zpp_nape::shape::ZPP_Polygon _this2 = _this1->polygon;		HX_STACK_VAR(_this2,"_this2");
														HX_STACK_LINE(189)
														::zpp_nape::geom::ZPP_Vec2 tmp13 = _this2->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
														HX_STACK_LINE(189)
														bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
														HX_STACK_LINE(189)
														if ((tmp14)){
															HX_STACK_LINE(189)
															HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
														}
														HX_STACK_LINE(189)
														::zpp_nape::geom::ZPP_Vec2 tmp15 = _this2->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(189)
														::zpp_nape::geom::ZPP_Vec2 tmp16 = tmp15->next;		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(189)
														bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(189)
														if ((tmp17)){
															HX_STACK_LINE(189)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = _this2->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(189)
															_this2->localCOMx = tmp18->x;
															HX_STACK_LINE(189)
															::zpp_nape::geom::ZPP_Vec2 tmp19 = _this2->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(189)
															_this2->localCOMy = tmp19->y;
															HX_STACK_LINE(189)
															Dynamic();
														}
														else{
															HX_STACK_LINE(189)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = _this2->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(189)
															::zpp_nape::geom::ZPP_Vec2 tmp19 = tmp18->next->next;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(189)
															bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(189)
															if ((tmp20)){
																HX_STACK_LINE(189)
																{
																	HX_STACK_LINE(189)
																	::zpp_nape::geom::ZPP_Vec2 tmp21 = _this2->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(189)
																	_this2->localCOMx = tmp21->x;
																	HX_STACK_LINE(189)
																	::zpp_nape::geom::ZPP_Vec2 tmp22 = _this2->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(189)
																	_this2->localCOMy = tmp22->y;
																	HX_STACK_LINE(189)
																	{
																	}
																}
																HX_STACK_LINE(189)
																{
																	HX_STACK_LINE(189)
																	Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(189)
																	::zpp_nape::geom::ZPP_Vec2 tmp21 = _this2->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(189)
																	Float tmp22 = tmp21->next->x;		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(189)
																	Float tmp23 = t;		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(189)
																	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(189)
																	hx::AddEq(_this2->localCOMx,tmp24);
																	HX_STACK_LINE(189)
																	::zpp_nape::geom::ZPP_Vec2 tmp25 = _this2->lverts->next;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(189)
																	Float tmp26 = tmp25->next->y;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(189)
																	Float tmp27 = t;		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(189)
																	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(189)
																	hx::AddEq(_this2->localCOMy,tmp28);
																}
																HX_STACK_LINE(189)
																{
																	HX_STACK_LINE(189)
																	Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(189)
																	hx::MultEq(_this2->localCOMx,t);
																	HX_STACK_LINE(189)
																	hx::MultEq(_this2->localCOMy,t);
																}
															}
															else{
																HX_STACK_LINE(189)
																{
																	HX_STACK_LINE(189)
																	_this2->localCOMx = (int)0;
																	HX_STACK_LINE(189)
																	_this2->localCOMy = (int)0;
																	HX_STACK_LINE(189)
																	{
																	}
																}
																HX_STACK_LINE(189)
																Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
																HX_STACK_LINE(189)
																{
																	HX_STACK_LINE(189)
																	::zpp_nape::geom::ZPP_Vec2 tmp21 = _this2->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(189)
																	::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp21;		HX_STACK_VAR(cx_ite,"cx_ite");
																	HX_STACK_LINE(189)
																	::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																	HX_STACK_LINE(189)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(189)
																	::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																	HX_STACK_LINE(189)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(189)
																	while((true)){
																		HX_STACK_LINE(189)
																		bool tmp22 = (cx_ite != null());		HX_STACK_VAR(tmp22,"tmp22");
																		HX_STACK_LINE(189)
																		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																		HX_STACK_LINE(189)
																		if ((tmp23)){
																			HX_STACK_LINE(189)
																			break;
																		}
																		HX_STACK_LINE(189)
																		::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																		HX_STACK_LINE(189)
																		{
																			HX_STACK_LINE(189)
																			Float tmp24 = v->x;		HX_STACK_VAR(tmp24,"tmp24");
																			HX_STACK_LINE(189)
																			Float tmp25 = (w->y - u->y);		HX_STACK_VAR(tmp25,"tmp25");
																			HX_STACK_LINE(189)
																			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																			HX_STACK_LINE(189)
																			hx::AddEq(area,tmp26);
																			HX_STACK_LINE(189)
																			Float tmp27 = (w->y * v->x);		HX_STACK_VAR(tmp27,"tmp27");
																			HX_STACK_LINE(189)
																			Float tmp28 = (w->x * v->y);		HX_STACK_VAR(tmp28,"tmp28");
																			HX_STACK_LINE(189)
																			Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																			HX_STACK_LINE(189)
																			Float cf = tmp29;		HX_STACK_VAR(cf,"cf");
																			HX_STACK_LINE(189)
																			Float tmp30 = (v->x + w->x);		HX_STACK_VAR(tmp30,"tmp30");
																			HX_STACK_LINE(189)
																			Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
																			HX_STACK_LINE(189)
																			Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																			HX_STACK_LINE(189)
																			hx::AddEq(_this2->localCOMx,tmp32);
																			HX_STACK_LINE(189)
																			Float tmp33 = (v->y + w->y);		HX_STACK_VAR(tmp33,"tmp33");
																			HX_STACK_LINE(189)
																			Float tmp34 = cf;		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(189)
																			Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(189)
																			hx::AddEq(_this2->localCOMy,tmp35);
																		}
																		HX_STACK_LINE(189)
																		u = v;
																		HX_STACK_LINE(189)
																		v = w;
																		HX_STACK_LINE(189)
																		cx_ite = cx_ite->next;
																	}
																	HX_STACK_LINE(189)
																	::zpp_nape::geom::ZPP_Vec2 tmp22 = _this2->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(189)
																	cx_ite = tmp22;
																	HX_STACK_LINE(189)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(189)
																	{
																		HX_STACK_LINE(189)
																		Float tmp23 = v->x;		HX_STACK_VAR(tmp23,"tmp23");
																		HX_STACK_LINE(189)
																		Float tmp24 = (w->y - u->y);		HX_STACK_VAR(tmp24,"tmp24");
																		HX_STACK_LINE(189)
																		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																		HX_STACK_LINE(189)
																		hx::AddEq(area,tmp25);
																		HX_STACK_LINE(189)
																		Float tmp26 = (w->y * v->x);		HX_STACK_VAR(tmp26,"tmp26");
																		HX_STACK_LINE(189)
																		Float tmp27 = (w->x * v->y);		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(189)
																		Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																		HX_STACK_LINE(189)
																		Float cf = tmp28;		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(189)
																		Float tmp29 = (v->x + w->x);		HX_STACK_VAR(tmp29,"tmp29");
																		HX_STACK_LINE(189)
																		Float tmp30 = cf;		HX_STACK_VAR(tmp30,"tmp30");
																		HX_STACK_LINE(189)
																		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(189)
																		hx::AddEq(_this2->localCOMx,tmp31);
																		HX_STACK_LINE(189)
																		Float tmp32 = (v->y + w->y);		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(189)
																		Float tmp33 = cf;		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(189)
																		Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(189)
																		hx::AddEq(_this2->localCOMy,tmp34);
																	}
																	HX_STACK_LINE(189)
																	u = v;
																	HX_STACK_LINE(189)
																	v = w;
																	HX_STACK_LINE(189)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(189)
																	::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																	HX_STACK_LINE(189)
																	{
																		HX_STACK_LINE(189)
																		Float tmp23 = v->x;		HX_STACK_VAR(tmp23,"tmp23");
																		HX_STACK_LINE(189)
																		Float tmp24 = (w1->y - u->y);		HX_STACK_VAR(tmp24,"tmp24");
																		HX_STACK_LINE(189)
																		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																		HX_STACK_LINE(189)
																		hx::AddEq(area,tmp25);
																		HX_STACK_LINE(189)
																		Float tmp26 = (w1->y * v->x);		HX_STACK_VAR(tmp26,"tmp26");
																		HX_STACK_LINE(189)
																		Float tmp27 = (w1->x * v->y);		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(189)
																		Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																		HX_STACK_LINE(189)
																		Float cf = tmp28;		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(189)
																		Float tmp29 = (v->x + w1->x);		HX_STACK_VAR(tmp29,"tmp29");
																		HX_STACK_LINE(189)
																		Float tmp30 = cf;		HX_STACK_VAR(tmp30,"tmp30");
																		HX_STACK_LINE(189)
																		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(189)
																		hx::AddEq(_this2->localCOMx,tmp31);
																		HX_STACK_LINE(189)
																		Float tmp32 = (v->y + w1->y);		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(189)
																		Float tmp33 = cf;		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(189)
																		Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(189)
																		hx::AddEq(_this2->localCOMy,tmp34);
																	}
																}
																HX_STACK_LINE(189)
																Float tmp21 = ((int)3 * area);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(189)
																Float tmp22 = (Float((int)1) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(189)
																area = tmp22;
																HX_STACK_LINE(189)
																{
																	HX_STACK_LINE(189)
																	Float t = area;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(189)
																	hx::MultEq(_this2->localCOMx,t);
																	HX_STACK_LINE(189)
																	hx::MultEq(_this2->localCOMy,t);
																}
															}
														}
													}
													HX_STACK_LINE(189)
													bool tmp13 = (_this1->wrap_localCOM != null());		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(189)
													if ((tmp13)){
														HX_STACK_LINE(189)
														::zpp_nape::geom::ZPP_Vec2 tmp14 = _this1->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
														HX_STACK_LINE(189)
														tmp14->x = _this1->localCOMx;
														HX_STACK_LINE(189)
														::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(189)
														tmp15->y = _this1->localCOMy;
														HX_STACK_LINE(189)
														{
														}
													}
												}
											}
											HX_STACK_LINE(189)
											{
												HX_STACK_LINE(189)
												::zpp_nape::phys::ZPP_Body _this2 = _this1->body;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(189)
												bool tmp11 = _this2->zip_axis;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(189)
												if ((tmp11)){
													HX_STACK_LINE(189)
													_this2->zip_axis = false;
													HX_STACK_LINE(189)
													{
														HX_STACK_LINE(189)
														Float tmp12 = _this2->rot;		HX_STACK_VAR(tmp12,"tmp12");
														HX_STACK_LINE(189)
														Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
														HX_STACK_LINE(189)
														_this2->axisx = tmp13;
														HX_STACK_LINE(189)
														Float tmp14 = _this2->rot;		HX_STACK_VAR(tmp14,"tmp14");
														HX_STACK_LINE(189)
														Float tmp15 = ::Math_obj::cos(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(189)
														_this2->axisy = tmp15;
														HX_STACK_LINE(189)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(189)
											{
												HX_STACK_LINE(189)
												Float tmp11 = _this1->body->posx;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(189)
												Float tmp12 = _this1->body->axisy;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(189)
												Float tmp13 = _this1->localCOMx;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(189)
												Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(189)
												Float tmp15 = _this1->body->axisx;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(189)
												Float tmp16 = _this1->localCOMy;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(189)
												Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(189)
												Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(189)
												Float tmp19 = (tmp11 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(189)
												_this1->worldCOMx = tmp19;
												HX_STACK_LINE(189)
												Float tmp20 = _this1->body->posy;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(189)
												Float tmp21 = _this1->localCOMx;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(189)
												Float tmp22 = _this1->body->axisx;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(189)
												Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(189)
												Float tmp24 = _this1->localCOMy;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(189)
												Float tmp25 = _this1->body->axisy;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(189)
												Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(189)
												Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(189)
												Float tmp28 = (tmp20 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(189)
												_this1->worldCOMy = tmp28;
											}
										}
									}
								}
								HX_STACK_LINE(189)
								Float rx = _this1->radius;		HX_STACK_VAR(rx,"rx");
								HX_STACK_LINE(189)
								Float ry = _this1->radius;		HX_STACK_VAR(ry,"ry");
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									Float tmp9 = (_this1->worldCOMx - rx);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(189)
									_this1->aabb->minx = tmp9;
									HX_STACK_LINE(189)
									Float tmp10 = (_this1->worldCOMy - ry);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(189)
									_this1->aabb->miny = tmp10;
								}
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									Float tmp9 = (_this1->worldCOMx + rx);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(189)
									_this1->aabb->maxx = tmp9;
									HX_STACK_LINE(189)
									Float tmp10 = (_this1->worldCOMy + ry);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(189)
									_this1->aabb->maxy = tmp10;
								}
							}
							else{
								HX_STACK_LINE(189)
								::zpp_nape::shape::ZPP_Polygon _this1 = shape->polygon;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									bool tmp9 = _this1->zip_gverts;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(189)
									if ((tmp9)){
										HX_STACK_LINE(189)
										bool tmp10 = (_this1->body != null());		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(189)
										if ((tmp10)){
											HX_STACK_LINE(189)
											_this1->zip_gverts = false;
											HX_STACK_LINE(189)
											_this1->validate_lverts();
											HX_STACK_LINE(189)
											{
												HX_STACK_LINE(189)
												::zpp_nape::phys::ZPP_Body _this2 = _this1->body;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(189)
												bool tmp11 = _this2->zip_axis;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(189)
												if ((tmp11)){
													HX_STACK_LINE(189)
													_this2->zip_axis = false;
													HX_STACK_LINE(189)
													{
														HX_STACK_LINE(189)
														Float tmp12 = _this2->rot;		HX_STACK_VAR(tmp12,"tmp12");
														HX_STACK_LINE(189)
														Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
														HX_STACK_LINE(189)
														_this2->axisx = tmp13;
														HX_STACK_LINE(189)
														Float tmp14 = _this2->rot;		HX_STACK_VAR(tmp14,"tmp14");
														HX_STACK_LINE(189)
														Float tmp15 = ::Math_obj::cos(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(189)
														_this2->axisy = tmp15;
														HX_STACK_LINE(189)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(189)
											::zpp_nape::geom::ZPP_Vec2 tmp11 = _this1->lverts->next;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(189)
											::zpp_nape::geom::ZPP_Vec2 li = tmp11;		HX_STACK_VAR(li,"li");
											HX_STACK_LINE(189)
											{
												HX_STACK_LINE(189)
												::zpp_nape::geom::ZPP_Vec2 tmp12 = _this1->gverts->next;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(189)
												::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp12;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(189)
												while((true)){
													HX_STACK_LINE(189)
													bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(189)
													bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(189)
													if ((tmp14)){
														HX_STACK_LINE(189)
														break;
													}
													HX_STACK_LINE(189)
													::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(189)
													{
														HX_STACK_LINE(189)
														::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
														HX_STACK_LINE(189)
														li = li->next;
														HX_STACK_LINE(189)
														{
															HX_STACK_LINE(189)
															Float tmp15 = _this1->body->posx;		HX_STACK_VAR(tmp15,"tmp15");
															HX_STACK_LINE(189)
															Float tmp16 = _this1->body->axisy;		HX_STACK_VAR(tmp16,"tmp16");
															HX_STACK_LINE(189)
															Float tmp17 = l->x;		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(189)
															Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(189)
															Float tmp19 = _this1->body->axisx;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(189)
															Float tmp20 = l->y;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(189)
															Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(189)
															Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(189)
															Float tmp23 = (tmp15 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(189)
															g->x = tmp23;
															HX_STACK_LINE(189)
															Float tmp24 = _this1->body->posy;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(189)
															Float tmp25 = l->x;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(189)
															Float tmp26 = _this1->body->axisx;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(189)
															Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(189)
															Float tmp28 = l->y;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(189)
															Float tmp29 = _this1->body->axisy;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(189)
															Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(189)
															Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(189)
															Float tmp32 = (tmp24 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(189)
															g->y = tmp32;
														}
													}
													HX_STACK_LINE(189)
													cx_ite = cx_ite->next;
												}
											}
										}
									}
								}
								HX_STACK_LINE(189)
								::zpp_nape::geom::ZPP_Vec2 tmp9 = _this1->lverts->next;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(189)
								bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(189)
								if ((tmp10)){
									HX_STACK_LINE(189)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
								}
								HX_STACK_LINE(189)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = _this1->gverts->next;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(189)
								::zpp_nape::geom::ZPP_Vec2 p0 = tmp11;		HX_STACK_VAR(p0,"p0");
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									_this1->aabb->minx = p0->x;
									HX_STACK_LINE(189)
									_this1->aabb->miny = p0->y;
									HX_STACK_LINE(189)
									{
									}
								}
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									_this1->aabb->maxx = p0->x;
									HX_STACK_LINE(189)
									_this1->aabb->maxy = p0->y;
									HX_STACK_LINE(189)
									{
									}
								}
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									::zpp_nape::geom::ZPP_Vec2 tmp12 = _this1->gverts->next;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(189)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp12->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(189)
									while((true)){
										HX_STACK_LINE(189)
										bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(189)
										bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(189)
										if ((tmp14)){
											HX_STACK_LINE(189)
											break;
										}
										HX_STACK_LINE(189)
										::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(189)
										{
											HX_STACK_LINE(189)
											Float tmp15 = p->x;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(189)
											Float tmp16 = _this1->aabb->minx;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(189)
											bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(189)
											if ((tmp17)){
												HX_STACK_LINE(189)
												_this1->aabb->minx = p->x;
											}
											HX_STACK_LINE(189)
											Float tmp18 = p->x;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(189)
											Float tmp19 = _this1->aabb->maxx;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(189)
											bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(189)
											if ((tmp20)){
												HX_STACK_LINE(189)
												_this1->aabb->maxx = p->x;
											}
											HX_STACK_LINE(189)
											Float tmp21 = p->y;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(189)
											Float tmp22 = _this1->aabb->miny;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(189)
											bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(189)
											if ((tmp23)){
												HX_STACK_LINE(189)
												_this1->aabb->miny = p->y;
											}
											HX_STACK_LINE(189)
											Float tmp24 = p->y;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(189)
											Float tmp25 = _this1->aabb->maxy;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(189)
											bool tmp26 = (tmp24 > tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(189)
											if ((tmp26)){
												HX_STACK_LINE(189)
												_this1->aabb->maxy = p->y;
											}
										}
										HX_STACK_LINE(189)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(189)
				bool tmp6 = node->dyn;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(189)
				int tmp7 = shape->body->type;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(189)
				bool tmp8 = (tmp7 == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(189)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(189)
				if ((tmp8)){
					HX_STACK_LINE(189)
					tmp9 = false;
				}
				else{
					HX_STACK_LINE(189)
					::zpp_nape::space::ZPP_Component tmp10 = shape->body->component;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(189)
					bool tmp11 = tmp10->sleeping;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(189)
					tmp9 = !(tmp11);
				}
				HX_STACK_LINE(189)
				bool tmp10 = (tmp6 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(189)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(189)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(189)
				if ((tmp11)){
					HX_STACK_LINE(189)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(189)
					{
						HX_STACK_LINE(189)
						::zpp_nape::geom::ZPP_AABB _this1 = node->aabb;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(189)
						::zpp_nape::geom::ZPP_AABB x = shape->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(189)
						bool tmp14 = (x->minx >= _this1->minx);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(189)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(189)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(189)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(189)
						bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(189)
						if ((tmp18)){
							HX_STACK_LINE(189)
							bool tmp19 = (x->miny >= _this1->miny);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(189)
							tmp17 = tmp19;
						}
						else{
							HX_STACK_LINE(189)
							tmp17 = false;
						}
						HX_STACK_LINE(189)
						bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(189)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(189)
						bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(189)
						if ((tmp21)){
							HX_STACK_LINE(189)
							bool tmp22 = (x->maxx <= _this1->maxx);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(189)
							tmp20 = tmp22;
						}
						else{
							HX_STACK_LINE(189)
							tmp20 = false;
						}
						HX_STACK_LINE(189)
						bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(189)
						if ((tmp22)){
							HX_STACK_LINE(189)
							bool tmp23 = (x->maxy <= _this1->maxy);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(189)
							tmp13 = tmp23;
						}
						else{
							HX_STACK_LINE(189)
							tmp13 = false;
						}
					}
					HX_STACK_LINE(189)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(189)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(189)
					tmp12 = true;
				}
				HX_STACK_LINE(189)
				bool sync = tmp12;		HX_STACK_VAR(sync,"sync");
				HX_STACK_LINE(189)
				bool tmp13 = sync;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(189)
				if ((tmp13)){
					HX_STACK_LINE(189)
					node->synced = true;
					HX_STACK_LINE(189)
					{
						HX_STACK_LINE(189)
						node->snext = _this->syncs;
						HX_STACK_LINE(189)
						_this->syncs = node;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Broadphase_obj,sync,(void))

Void ZPP_Broadphase_obj::broadphase( ::zpp_nape::space::ZPP_Space space,bool discrete){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","broadphase",0x659af340,"zpp_nape.space.ZPP_Broadphase.broadphase","zpp_nape/space/Broadphase.hx",192,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(space,"space")
		HX_STACK_ARG(discrete,"discrete")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Broadphase_obj,broadphase,(void))

Void ZPP_Broadphase_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","clear",0x6bb3c966,"zpp_nape.space.ZPP_Broadphase.clear","zpp_nape/space/Broadphase.hx",201,0xcf31b77a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Broadphase_obj,clear,(void))

::nape::shape::ShapeList ZPP_Broadphase_obj::shapesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","shapesUnderPoint",0x7ce9e1b1,"zpp_nape.space.ZPP_Broadphase.shapesUnderPoint","zpp_nape/space/Broadphase.hx",203,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(203)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_Broadphase_obj,shapesUnderPoint,return )

::nape::phys::BodyList ZPP_Broadphase_obj::bodiesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","bodiesUnderPoint",0xb55d107f,"zpp_nape.space.ZPP_Broadphase.bodiesUnderPoint","zpp_nape/space/Broadphase.hx",206,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(206)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_Broadphase_obj,bodiesUnderPoint,return )

Void ZPP_Broadphase_obj::updateAABBShape( ::zpp_nape::geom::ZPP_AABB aabb){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","updateAABBShape",0x82875651,"zpp_nape.space.ZPP_Broadphase.updateAABBShape","zpp_nape/space/Broadphase.hx",210,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(aabb,"aabb")
		HX_STACK_LINE(211)
		::nape::shape::Shape tmp = this->aabbShape;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		if ((tmp1)){
			HX_STACK_LINE(212)
			::nape::phys::BodyType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(212)
			{
				HX_STACK_LINE(212)
				::nape::phys::BodyType tmp3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(212)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(212)
				if ((tmp4)){
					HX_STACK_LINE(212)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(212)
					::nape::phys::BodyType tmp5 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(212)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = tmp5;
					HX_STACK_LINE(212)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(212)
				tmp2 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			HX_STACK_LINE(212)
			::nape::phys::Body tmp3 = ::nape::phys::Body_obj::__new(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(212)
			::nape::phys::Body body = tmp3;		HX_STACK_VAR(body,"body");
			HX_STACK_LINE(213)
			{
				HX_STACK_LINE(213)
				::nape::shape::ShapeList tmp4 = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(213)
				::nape::shape::ShapeList _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(213)
				Float tmp5 = aabb->minx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(213)
				Float tmp6 = aabb->miny;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				Float tmp7 = (aabb->maxx - aabb->minx);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(213)
				Float tmp8 = (aabb->maxy - aabb->miny);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(213)
				::nape::shape::Polygon tmp9 = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect(tmp5,tmp6,tmp7,tmp8,null()),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(213)
				::nape::shape::Shape tmp10 = this->aabbShape = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(213)
				::nape::shape::Shape obj = tmp10;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(213)
				bool tmp11 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(213)
				if ((tmp11)){
					HX_STACK_LINE(213)
					::nape::shape::Shape tmp12 = obj;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(213)
					_this->push(tmp12);
				}
				else{
					HX_STACK_LINE(213)
					::nape::shape::Shape tmp12 = obj;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(213)
					_this->unshift(tmp12);
				}
			}
		}
		else{
			HX_STACK_LINE(216)
			::nape::shape::Shape tmp2 = this->aabbShape;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(216)
			::zpp_nape::geom::ZPP_AABB tmp3 = tmp2->zpp_inner->aabb;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(216)
			::zpp_nape::geom::ZPP_AABB ab = tmp3;		HX_STACK_VAR(ab,"ab");
			HX_STACK_LINE(217)
			Float tmp4 = (aabb->maxx - aabb->minx);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			Float tmp5 = (ab->maxx - ab->minx);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			Float sx = tmp6;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(218)
			Float tmp7 = (aabb->maxy - aabb->miny);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(218)
			Float tmp8 = (ab->maxy - ab->miny);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(218)
			Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(218)
			Float sy = tmp9;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(219)
			::nape::geom::Mat23 tmp10 = this->matrix;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(219)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(219)
			if ((tmp11)){
				HX_STACK_LINE(219)
				::nape::geom::Mat23 tmp12 = ::nape::geom::Mat23_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(219)
				this->matrix = tmp12;
			}
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				::nape::geom::Mat23 tmp12 = this->matrix;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(220)
				::nape::geom::Mat23 _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(220)
				{
					HX_STACK_LINE(220)
					bool tmp13 = (sx != sx);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(220)
					if ((tmp13)){
						HX_STACK_LINE(220)
						::String tmp14 = HX_HCSTRING("Error: Mat23::a","\x4e","\xec","\xf0","\xff");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(220)
						::String tmp15 = (tmp14 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(220)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(220)
					_this->zpp_inner->a = sx;
					HX_STACK_LINE(220)
					{
						HX_STACK_LINE(220)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(220)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(220)
						if ((tmp14)){
							HX_STACK_LINE(220)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(220)
				_this->zpp_inner->a;
			}
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				::nape::geom::Mat23 tmp12 = this->matrix;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(221)
				::nape::geom::Mat23 _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(221)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(221)
				{
					HX_STACK_LINE(221)
					::nape::geom::Mat23 tmp14 = this->matrix;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(221)
					::nape::geom::Mat23 _this1 = tmp14;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						_this1->zpp_inner->c = (int)0;
						HX_STACK_LINE(221)
						{
							HX_STACK_LINE(221)
							::zpp_nape::geom::ZPP_Mat23 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(221)
							bool tmp15 = (_this2->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(221)
							if ((tmp15)){
								HX_STACK_LINE(221)
								_this2->_invalidate();
							}
						}
					}
					HX_STACK_LINE(221)
					tmp13 = _this1->zpp_inner->c;
				}
				HX_STACK_LINE(221)
				Float b = tmp13;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(221)
				{
					HX_STACK_LINE(221)
					bool tmp14 = (b != b);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(221)
					if ((tmp14)){
						HX_STACK_LINE(221)
						::String tmp15 = HX_HCSTRING("Error: Mat23::b","\x4f","\xec","\xf0","\xff");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(221)
						::String tmp16 = (tmp15 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(221)
						HX_STACK_DO_THROW(tmp16);
					}
					HX_STACK_LINE(221)
					_this->zpp_inner->b = b;
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(221)
						bool tmp15 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(221)
						if ((tmp15)){
							HX_STACK_LINE(221)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(221)
				_this->zpp_inner->b;
			}
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				::nape::geom::Mat23 tmp12 = this->matrix;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(222)
				::nape::geom::Mat23 _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(222)
				{
					HX_STACK_LINE(222)
					bool tmp13 = (sy != sy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(222)
					if ((tmp13)){
						HX_STACK_LINE(222)
						::String tmp14 = HX_HCSTRING("Error: Mat23::d","\x51","\xec","\xf0","\xff");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(222)
						::String tmp15 = (tmp14 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(222)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(222)
					_this->zpp_inner->d = sy;
					HX_STACK_LINE(222)
					{
						HX_STACK_LINE(222)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(222)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(222)
						if ((tmp14)){
							HX_STACK_LINE(222)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(222)
				_this->zpp_inner->d;
			}
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::nape::geom::Mat23 tmp12 = this->matrix;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(223)
				::nape::geom::Mat23 _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(223)
				Float tmp13 = aabb->minx;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(223)
				Float tmp14 = (sx * ab->minx);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(223)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(223)
				Float tx = tmp15;		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					bool tmp16 = (tx != tx);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(223)
					if ((tmp16)){
						HX_STACK_LINE(223)
						::String tmp17 = HX_HCSTRING("Error: Mat23::tx","\xf7","\xe8","\xdd","\xf2");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(223)
						::String tmp18 = (tmp17 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(223)
						HX_STACK_DO_THROW(tmp18);
					}
					HX_STACK_LINE(223)
					_this->zpp_inner->tx = tx;
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(223)
						bool tmp17 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(223)
						if ((tmp17)){
							HX_STACK_LINE(223)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(223)
				_this->zpp_inner->tx;
			}
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				::nape::geom::Mat23 tmp12 = this->matrix;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(224)
				::nape::geom::Mat23 _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(224)
				Float tmp13 = aabb->miny;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(224)
				Float tmp14 = (sy * ab->miny);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(224)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(224)
				Float ty = tmp15;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					bool tmp16 = (ty != ty);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(224)
					if ((tmp16)){
						HX_STACK_LINE(224)
						::String tmp17 = HX_HCSTRING("Error: Mat23::ty","\xf8","\xe8","\xdd","\xf2");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(224)
						::String tmp18 = (tmp17 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(224)
						HX_STACK_DO_THROW(tmp18);
					}
					HX_STACK_LINE(224)
					_this->zpp_inner->ty = ty;
					HX_STACK_LINE(224)
					{
						HX_STACK_LINE(224)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(224)
						bool tmp17 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(224)
						if ((tmp17)){
							HX_STACK_LINE(224)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(224)
				_this->zpp_inner->ty;
			}
			HX_STACK_LINE(225)
			::nape::shape::Shape tmp12 = this->aabbShape;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(225)
			::nape::geom::Mat23 tmp13 = this->matrix;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(225)
			tmp12->transform(tmp13);
		}
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			::nape::shape::Shape tmp2 = this->aabbShape;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			::zpp_nape::shape::ZPP_Shape _this = tmp2->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(227)
			bool tmp3 = _this->zip_aabb;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			if ((tmp3)){
				HX_STACK_LINE(227)
				bool tmp4 = (_this->body != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(227)
				if ((tmp4)){
					HX_STACK_LINE(227)
					_this->zip_aabb = false;
					HX_STACK_LINE(227)
					bool tmp5 = (_this->type == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(227)
					if ((tmp5)){
						HX_STACK_LINE(227)
						::zpp_nape::shape::ZPP_Circle _this1 = _this->circle;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							bool tmp6 = _this1->zip_worldCOM;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(227)
							if ((tmp6)){
								HX_STACK_LINE(227)
								bool tmp7 = (_this1->body != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(227)
								if ((tmp7)){
									HX_STACK_LINE(227)
									_this1->zip_worldCOM = false;
									HX_STACK_LINE(227)
									{
										HX_STACK_LINE(227)
										bool tmp8 = _this1->zip_localCOM;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(227)
										if ((tmp8)){
											HX_STACK_LINE(227)
											_this1->zip_localCOM = false;
											HX_STACK_LINE(227)
											bool tmp9 = (_this1->type == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(227)
											if ((tmp9)){
												HX_STACK_LINE(227)
												::zpp_nape::shape::ZPP_Polygon _this2 = _this1->polygon;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(227)
												::zpp_nape::geom::ZPP_Vec2 tmp10 = _this2->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(227)
												bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(227)
												if ((tmp11)){
													HX_STACK_LINE(227)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
												}
												HX_STACK_LINE(227)
												::zpp_nape::geom::ZPP_Vec2 tmp12 = _this2->lverts->next;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(227)
												::zpp_nape::geom::ZPP_Vec2 tmp13 = tmp12->next;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(227)
												bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(227)
												if ((tmp14)){
													HX_STACK_LINE(227)
													::zpp_nape::geom::ZPP_Vec2 tmp15 = _this2->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(227)
													_this2->localCOMx = tmp15->x;
													HX_STACK_LINE(227)
													::zpp_nape::geom::ZPP_Vec2 tmp16 = _this2->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(227)
													_this2->localCOMy = tmp16->y;
													HX_STACK_LINE(227)
													Dynamic();
												}
												else{
													HX_STACK_LINE(227)
													::zpp_nape::geom::ZPP_Vec2 tmp15 = _this2->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(227)
													::zpp_nape::geom::ZPP_Vec2 tmp16 = tmp15->next->next;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(227)
													bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(227)
													if ((tmp17)){
														HX_STACK_LINE(227)
														{
															HX_STACK_LINE(227)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = _this2->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(227)
															_this2->localCOMx = tmp18->x;
															HX_STACK_LINE(227)
															::zpp_nape::geom::ZPP_Vec2 tmp19 = _this2->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(227)
															_this2->localCOMy = tmp19->y;
															HX_STACK_LINE(227)
															{
															}
														}
														HX_STACK_LINE(227)
														{
															HX_STACK_LINE(227)
															Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(227)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = _this2->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(227)
															Float tmp19 = tmp18->next->x;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(227)
															Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(227)
															Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(227)
															hx::AddEq(_this2->localCOMx,tmp21);
															HX_STACK_LINE(227)
															::zpp_nape::geom::ZPP_Vec2 tmp22 = _this2->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(227)
															Float tmp23 = tmp22->next->y;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(227)
															Float tmp24 = t;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(227)
															Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(227)
															hx::AddEq(_this2->localCOMy,tmp25);
														}
														HX_STACK_LINE(227)
														{
															HX_STACK_LINE(227)
															Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(227)
															hx::MultEq(_this2->localCOMx,t);
															HX_STACK_LINE(227)
															hx::MultEq(_this2->localCOMy,t);
														}
													}
													else{
														HX_STACK_LINE(227)
														{
															HX_STACK_LINE(227)
															_this2->localCOMx = (int)0;
															HX_STACK_LINE(227)
															_this2->localCOMy = (int)0;
															HX_STACK_LINE(227)
															{
															}
														}
														HX_STACK_LINE(227)
														Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
														HX_STACK_LINE(227)
														{
															HX_STACK_LINE(227)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = _this2->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(227)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp18;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(227)
															::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
															HX_STACK_LINE(227)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(227)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(227)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(227)
															while((true)){
																HX_STACK_LINE(227)
																bool tmp19 = (cx_ite != null());		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(227)
																bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(227)
																if ((tmp20)){
																	HX_STACK_LINE(227)
																	break;
																}
																HX_STACK_LINE(227)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(227)
																{
																	HX_STACK_LINE(227)
																	Float tmp21 = v->x;		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(227)
																	Float tmp22 = (w->y - u->y);		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(227)
																	Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(227)
																	hx::AddEq(area,tmp23);
																	HX_STACK_LINE(227)
																	Float tmp24 = (w->y * v->x);		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(227)
																	Float tmp25 = (w->x * v->y);		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(227)
																	Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(227)
																	Float cf = tmp26;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(227)
																	Float tmp27 = (v->x + w->x);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(227)
																	Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(227)
																	Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(227)
																	hx::AddEq(_this2->localCOMx,tmp29);
																	HX_STACK_LINE(227)
																	Float tmp30 = (v->y + w->y);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(227)
																	Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(227)
																	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(227)
																	hx::AddEq(_this2->localCOMy,tmp32);
																}
																HX_STACK_LINE(227)
																u = v;
																HX_STACK_LINE(227)
																v = w;
																HX_STACK_LINE(227)
																cx_ite = cx_ite->next;
															}
															HX_STACK_LINE(227)
															::zpp_nape::geom::ZPP_Vec2 tmp19 = _this2->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(227)
															cx_ite = tmp19;
															HX_STACK_LINE(227)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(227)
															{
																HX_STACK_LINE(227)
																Float tmp20 = v->x;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(227)
																Float tmp21 = (w->y - u->y);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(227)
																Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(227)
																hx::AddEq(area,tmp22);
																HX_STACK_LINE(227)
																Float tmp23 = (w->y * v->x);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(227)
																Float tmp24 = (w->x * v->y);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(227)
																Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(227)
																Float cf = tmp25;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(227)
																Float tmp26 = (v->x + w->x);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(227)
																Float tmp27 = cf;		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(227)
																Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(227)
																hx::AddEq(_this2->localCOMx,tmp28);
																HX_STACK_LINE(227)
																Float tmp29 = (v->y + w->y);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(227)
																Float tmp30 = cf;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(227)
																Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(227)
																hx::AddEq(_this2->localCOMy,tmp31);
															}
															HX_STACK_LINE(227)
															u = v;
															HX_STACK_LINE(227)
															v = w;
															HX_STACK_LINE(227)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(227)
															::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
															HX_STACK_LINE(227)
															{
																HX_STACK_LINE(227)
																Float tmp20 = v->x;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(227)
																Float tmp21 = (w1->y - u->y);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(227)
																Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(227)
																hx::AddEq(area,tmp22);
																HX_STACK_LINE(227)
																Float tmp23 = (w1->y * v->x);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(227)
																Float tmp24 = (w1->x * v->y);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(227)
																Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(227)
																Float cf = tmp25;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(227)
																Float tmp26 = (v->x + w1->x);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(227)
																Float tmp27 = cf;		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(227)
																Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(227)
																hx::AddEq(_this2->localCOMx,tmp28);
																HX_STACK_LINE(227)
																Float tmp29 = (v->y + w1->y);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(227)
																Float tmp30 = cf;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(227)
																Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(227)
																hx::AddEq(_this2->localCOMy,tmp31);
															}
														}
														HX_STACK_LINE(227)
														Float tmp18 = ((int)3 * area);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(227)
														Float tmp19 = (Float((int)1) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(227)
														area = tmp19;
														HX_STACK_LINE(227)
														{
															HX_STACK_LINE(227)
															Float t = area;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(227)
															hx::MultEq(_this2->localCOMx,t);
															HX_STACK_LINE(227)
															hx::MultEq(_this2->localCOMy,t);
														}
													}
												}
											}
											HX_STACK_LINE(227)
											bool tmp10 = (_this1->wrap_localCOM != null());		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(227)
											if ((tmp10)){
												HX_STACK_LINE(227)
												::zpp_nape::geom::ZPP_Vec2 tmp11 = _this1->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(227)
												tmp11->x = _this1->localCOMx;
												HX_STACK_LINE(227)
												::zpp_nape::geom::ZPP_Vec2 tmp12 = _this1->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(227)
												tmp12->y = _this1->localCOMy;
												HX_STACK_LINE(227)
												{
												}
											}
										}
									}
									HX_STACK_LINE(227)
									{
										HX_STACK_LINE(227)
										::zpp_nape::phys::ZPP_Body _this2 = _this1->body;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(227)
										bool tmp8 = _this2->zip_axis;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(227)
										if ((tmp8)){
											HX_STACK_LINE(227)
											_this2->zip_axis = false;
											HX_STACK_LINE(227)
											{
												HX_STACK_LINE(227)
												Float tmp9 = _this2->rot;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(227)
												Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(227)
												_this2->axisx = tmp10;
												HX_STACK_LINE(227)
												Float tmp11 = _this2->rot;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(227)
												Float tmp12 = ::Math_obj::cos(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(227)
												_this2->axisy = tmp12;
												HX_STACK_LINE(227)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(227)
									{
										HX_STACK_LINE(227)
										Float tmp8 = _this1->body->posx;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(227)
										Float tmp9 = _this1->body->axisy;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(227)
										Float tmp10 = _this1->localCOMx;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(227)
										Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(227)
										Float tmp12 = _this1->body->axisx;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(227)
										Float tmp13 = _this1->localCOMy;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(227)
										Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(227)
										Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(227)
										Float tmp16 = (tmp8 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(227)
										_this1->worldCOMx = tmp16;
										HX_STACK_LINE(227)
										Float tmp17 = _this1->body->posy;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(227)
										Float tmp18 = _this1->localCOMx;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(227)
										Float tmp19 = _this1->body->axisx;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(227)
										Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(227)
										Float tmp21 = _this1->localCOMy;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(227)
										Float tmp22 = _this1->body->axisy;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(227)
										Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(227)
										Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(227)
										Float tmp25 = (tmp17 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(227)
										_this1->worldCOMy = tmp25;
									}
								}
							}
						}
						HX_STACK_LINE(227)
						Float rx = _this1->radius;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(227)
						Float ry = _this1->radius;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							Float tmp6 = (_this1->worldCOMx - rx);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(227)
							_this1->aabb->minx = tmp6;
							HX_STACK_LINE(227)
							Float tmp7 = (_this1->worldCOMy - ry);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(227)
							_this1->aabb->miny = tmp7;
						}
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							Float tmp6 = (_this1->worldCOMx + rx);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(227)
							_this1->aabb->maxx = tmp6;
							HX_STACK_LINE(227)
							Float tmp7 = (_this1->worldCOMy + ry);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(227)
							_this1->aabb->maxy = tmp7;
						}
					}
					else{
						HX_STACK_LINE(227)
						::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							bool tmp6 = _this1->zip_gverts;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(227)
							if ((tmp6)){
								HX_STACK_LINE(227)
								bool tmp7 = (_this1->body != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(227)
								if ((tmp7)){
									HX_STACK_LINE(227)
									_this1->zip_gverts = false;
									HX_STACK_LINE(227)
									_this1->validate_lverts();
									HX_STACK_LINE(227)
									{
										HX_STACK_LINE(227)
										::zpp_nape::phys::ZPP_Body _this2 = _this1->body;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(227)
										bool tmp8 = _this2->zip_axis;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(227)
										if ((tmp8)){
											HX_STACK_LINE(227)
											_this2->zip_axis = false;
											HX_STACK_LINE(227)
											{
												HX_STACK_LINE(227)
												Float tmp9 = _this2->rot;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(227)
												Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(227)
												_this2->axisx = tmp10;
												HX_STACK_LINE(227)
												Float tmp11 = _this2->rot;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(227)
												Float tmp12 = ::Math_obj::cos(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(227)
												_this2->axisy = tmp12;
												HX_STACK_LINE(227)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(227)
									::zpp_nape::geom::ZPP_Vec2 tmp8 = _this1->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(227)
									::zpp_nape::geom::ZPP_Vec2 li = tmp8;		HX_STACK_VAR(li,"li");
									HX_STACK_LINE(227)
									{
										HX_STACK_LINE(227)
										::zpp_nape::geom::ZPP_Vec2 tmp9 = _this1->gverts->next;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(227)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp9;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(227)
										while((true)){
											HX_STACK_LINE(227)
											bool tmp10 = (cx_ite != null());		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(227)
											bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(227)
											if ((tmp11)){
												HX_STACK_LINE(227)
												break;
											}
											HX_STACK_LINE(227)
											::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(227)
											{
												HX_STACK_LINE(227)
												::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(227)
												li = li->next;
												HX_STACK_LINE(227)
												{
													HX_STACK_LINE(227)
													Float tmp12 = _this1->body->posx;		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(227)
													Float tmp13 = _this1->body->axisy;		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(227)
													Float tmp14 = l->x;		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(227)
													Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(227)
													Float tmp16 = _this1->body->axisx;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(227)
													Float tmp17 = l->y;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(227)
													Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(227)
													Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(227)
													Float tmp20 = (tmp12 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(227)
													g->x = tmp20;
													HX_STACK_LINE(227)
													Float tmp21 = _this1->body->posy;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(227)
													Float tmp22 = l->x;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(227)
													Float tmp23 = _this1->body->axisx;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(227)
													Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(227)
													Float tmp25 = l->y;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(227)
													Float tmp26 = _this1->body->axisy;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(227)
													Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(227)
													Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(227)
													Float tmp29 = (tmp21 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(227)
													g->y = tmp29;
												}
											}
											HX_STACK_LINE(227)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(227)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = _this1->lverts->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(227)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(227)
						if ((tmp7)){
							HX_STACK_LINE(227)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
						}
						HX_STACK_LINE(227)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = _this1->gverts->next;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(227)
						::zpp_nape::geom::ZPP_Vec2 p0 = tmp8;		HX_STACK_VAR(p0,"p0");
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							_this1->aabb->minx = p0->x;
							HX_STACK_LINE(227)
							_this1->aabb->miny = p0->y;
							HX_STACK_LINE(227)
							{
							}
						}
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							_this1->aabb->maxx = p0->x;
							HX_STACK_LINE(227)
							_this1->aabb->maxy = p0->y;
							HX_STACK_LINE(227)
							{
							}
						}
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = _this1->gverts->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(227)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp9->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(227)
							while((true)){
								HX_STACK_LINE(227)
								bool tmp10 = (cx_ite != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(227)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(227)
								if ((tmp11)){
									HX_STACK_LINE(227)
									break;
								}
								HX_STACK_LINE(227)
								::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(227)
								{
									HX_STACK_LINE(227)
									Float tmp12 = p->x;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(227)
									Float tmp13 = _this1->aabb->minx;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(227)
									bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(227)
									if ((tmp14)){
										HX_STACK_LINE(227)
										_this1->aabb->minx = p->x;
									}
									HX_STACK_LINE(227)
									Float tmp15 = p->x;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(227)
									Float tmp16 = _this1->aabb->maxx;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(227)
									bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(227)
									if ((tmp17)){
										HX_STACK_LINE(227)
										_this1->aabb->maxx = p->x;
									}
									HX_STACK_LINE(227)
									Float tmp18 = p->y;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(227)
									Float tmp19 = _this1->aabb->miny;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(227)
									bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(227)
									if ((tmp20)){
										HX_STACK_LINE(227)
										_this1->aabb->miny = p->y;
									}
									HX_STACK_LINE(227)
									Float tmp21 = p->y;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(227)
									Float tmp22 = _this1->aabb->maxy;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(227)
									bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(227)
									if ((tmp23)){
										HX_STACK_LINE(227)
										_this1->aabb->maxy = p->y;
									}
								}
								HX_STACK_LINE(227)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			::nape::shape::Shape tmp2 = this->aabbShape;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(228)
			::zpp_nape::shape::ZPP_Polygon tmp3 = tmp2->zpp_inner->polygon;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(228)
			::zpp_nape::shape::ZPP_Polygon _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(228)
			bool tmp4 = _this->zip_gaxi;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(228)
			if ((tmp4)){
				HX_STACK_LINE(228)
				bool tmp5 = (_this->body != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(228)
				if ((tmp5)){
					HX_STACK_LINE(228)
					_this->zip_gaxi = false;
					HX_STACK_LINE(228)
					_this->validate_laxi();
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(228)
						bool tmp6 = _this1->zip_axis;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(228)
						if ((tmp6)){
							HX_STACK_LINE(228)
							_this1->zip_axis = false;
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								Float tmp7 = _this1->rot;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(228)
								Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(228)
								_this1->axisx = tmp8;
								HX_STACK_LINE(228)
								Float tmp9 = _this1->rot;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(228)
								Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(228)
								_this1->axisy = tmp10;
								HX_STACK_LINE(228)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						bool tmp6 = _this->zip_gverts;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(228)
						if ((tmp6)){
							HX_STACK_LINE(228)
							bool tmp7 = (_this->body != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(228)
							if ((tmp7)){
								HX_STACK_LINE(228)
								_this->zip_gverts = false;
								HX_STACK_LINE(228)
								_this->validate_lverts();
								HX_STACK_LINE(228)
								{
									HX_STACK_LINE(228)
									::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(228)
									bool tmp8 = _this1->zip_axis;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(228)
									if ((tmp8)){
										HX_STACK_LINE(228)
										_this1->zip_axis = false;
										HX_STACK_LINE(228)
										{
											HX_STACK_LINE(228)
											Float tmp9 = _this1->rot;		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(228)
											Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(228)
											_this1->axisx = tmp10;
											HX_STACK_LINE(228)
											Float tmp11 = _this1->rot;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(228)
											Float tmp12 = ::Math_obj::cos(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(228)
											_this1->axisy = tmp12;
											HX_STACK_LINE(228)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(228)
								::zpp_nape::geom::ZPP_Vec2 tmp8 = _this->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(228)
								::zpp_nape::geom::ZPP_Vec2 li = tmp8;		HX_STACK_VAR(li,"li");
								HX_STACK_LINE(228)
								{
									HX_STACK_LINE(228)
									::zpp_nape::geom::ZPP_Vec2 tmp9 = _this->gverts->next;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(228)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp9;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(228)
									while((true)){
										HX_STACK_LINE(228)
										bool tmp10 = (cx_ite != null());		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(228)
										bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(228)
										if ((tmp11)){
											HX_STACK_LINE(228)
											break;
										}
										HX_STACK_LINE(228)
										::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(228)
										{
											HX_STACK_LINE(228)
											::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(228)
											li = li->next;
											HX_STACK_LINE(228)
											{
												HX_STACK_LINE(228)
												Float tmp12 = _this->body->posx;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(228)
												Float tmp13 = _this->body->axisy;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(228)
												Float tmp14 = l->x;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(228)
												Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(228)
												Float tmp16 = _this->body->axisx;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(228)
												Float tmp17 = l->y;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(228)
												Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(228)
												Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(228)
												Float tmp20 = (tmp12 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(228)
												g->x = tmp20;
												HX_STACK_LINE(228)
												Float tmp21 = _this->body->posy;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(228)
												Float tmp22 = l->x;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(228)
												Float tmp23 = _this->body->axisx;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(228)
												Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(228)
												Float tmp25 = l->y;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(228)
												Float tmp26 = _this->body->axisy;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(228)
												Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(228)
												Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(228)
												Float tmp29 = (tmp21 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(228)
												g->y = tmp29;
											}
										}
										HX_STACK_LINE(228)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
					HX_STACK_LINE(228)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp6 = _this->edges->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(228)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp6;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->gverts->next;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(228)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp7;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(228)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(228)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(228)
						while((true)){
							HX_STACK_LINE(228)
							bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(228)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(228)
							if ((tmp9)){
								HX_STACK_LINE(228)
								break;
							}
							HX_STACK_LINE(228)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(228)
								ite = ite->next;
								HX_STACK_LINE(228)
								e->gp0 = u;
								HX_STACK_LINE(228)
								e->gp1 = v;
								HX_STACK_LINE(228)
								{
									HX_STACK_LINE(228)
									Float tmp10 = _this->body->axisy;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(228)
									Float tmp11 = e->lnormx;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(228)
									Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(228)
									Float tmp13 = _this->body->axisx;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(228)
									Float tmp14 = e->lnormy;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(228)
									Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(228)
									Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(228)
									e->gnormx = tmp16;
									HX_STACK_LINE(228)
									Float tmp17 = e->lnormx;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(228)
									Float tmp18 = _this->body->axisx;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(228)
									Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(228)
									Float tmp20 = e->lnormy;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(228)
									Float tmp21 = _this->body->axisy;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(228)
									Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(228)
									Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(228)
									e->gnormy = tmp23;
								}
								HX_STACK_LINE(228)
								Float tmp10 = _this->body->posx;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(228)
								Float tmp11 = e->gnormx;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(228)
								Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(228)
								Float tmp13 = _this->body->posy;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(228)
								Float tmp14 = e->gnormy;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(228)
								Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(228)
								Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(228)
								Float tmp17 = e->lprojection;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(228)
								Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(228)
								e->gprojection = tmp18;
								HX_STACK_LINE(228)
								bool tmp19 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(228)
								if ((tmp19)){
									HX_STACK_LINE(228)
									::zpp_nape::geom::ZPP_Vec2 tmp20 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(228)
									tmp20->x = e->gnormx;
									HX_STACK_LINE(228)
									::zpp_nape::geom::ZPP_Vec2 tmp21 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(228)
									tmp21->y = e->gnormy;
									HX_STACK_LINE(228)
									{
									}
								}
								HX_STACK_LINE(228)
								Float tmp20 = e->gp0->y;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(228)
								Float tmp21 = e->gnormx;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(228)
								Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(228)
								Float tmp23 = e->gp0->x;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(228)
								Float tmp24 = e->gnormy;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(228)
								Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(228)
								Float tmp26 = (tmp22 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(228)
								e->tp0 = tmp26;
								HX_STACK_LINE(228)
								Float tmp27 = e->gp1->y;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(228)
								Float tmp28 = e->gnormx;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(228)
								Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(228)
								Float tmp30 = e->gp1->x;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(228)
								Float tmp31 = e->gnormy;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(228)
								Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(228)
								Float tmp33 = (tmp29 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(228)
								e->tp1 = tmp33;
							}
							HX_STACK_LINE(228)
							u = v;
							HX_STACK_LINE(228)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(228)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = _this->gverts->next;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(228)
						::zpp_nape::geom::ZPP_Vec2 v = tmp8;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(228)
						{
							HX_STACK_LINE(228)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(228)
							ite = ite->next;
							HX_STACK_LINE(228)
							e->gp0 = u;
							HX_STACK_LINE(228)
							e->gp1 = v;
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								Float tmp9 = _this->body->axisy;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(228)
								Float tmp10 = e->lnormx;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(228)
								Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(228)
								Float tmp12 = _this->body->axisx;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(228)
								Float tmp13 = e->lnormy;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(228)
								Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(228)
								Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(228)
								e->gnormx = tmp15;
								HX_STACK_LINE(228)
								Float tmp16 = e->lnormx;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(228)
								Float tmp17 = _this->body->axisx;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(228)
								Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(228)
								Float tmp19 = e->lnormy;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(228)
								Float tmp20 = _this->body->axisy;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(228)
								Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(228)
								Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(228)
								e->gnormy = tmp22;
							}
							HX_STACK_LINE(228)
							Float tmp9 = _this->body->posx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(228)
							Float tmp10 = e->gnormx;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(228)
							Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(228)
							Float tmp12 = _this->body->posy;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(228)
							Float tmp13 = e->gnormy;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(228)
							Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(228)
							Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(228)
							Float tmp16 = e->lprojection;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(228)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(228)
							e->gprojection = tmp17;
							HX_STACK_LINE(228)
							bool tmp18 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(228)
							if ((tmp18)){
								HX_STACK_LINE(228)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(228)
								tmp19->x = e->gnormx;
								HX_STACK_LINE(228)
								::zpp_nape::geom::ZPP_Vec2 tmp20 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(228)
								tmp20->y = e->gnormy;
								HX_STACK_LINE(228)
								{
								}
							}
							HX_STACK_LINE(228)
							Float tmp19 = e->gp0->y;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(228)
							Float tmp20 = e->gnormx;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(228)
							Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(228)
							Float tmp22 = e->gp0->x;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(228)
							Float tmp23 = e->gnormy;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(228)
							Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(228)
							Float tmp25 = (tmp21 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(228)
							e->tp0 = tmp25;
							HX_STACK_LINE(228)
							Float tmp26 = e->gp1->y;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(228)
							Float tmp27 = e->gnormx;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(228)
							Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(228)
							Float tmp29 = e->gp1->x;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(228)
							Float tmp30 = e->gnormy;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(228)
							Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(228)
							Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(228)
							e->tp1 = tmp32;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Broadphase_obj,updateAABBShape,(void))

::nape::shape::ShapeList ZPP_Broadphase_obj::shapesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","shapesInAABB",0x11b7621e,"zpp_nape.space.ZPP_Broadphase.shapesInAABB","zpp_nape/space/Broadphase.hx",231,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aabb,"aabb")
	HX_STACK_ARG(strict,"strict")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(231)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ZPP_Broadphase_obj,shapesInAABB,return )

::nape::phys::BodyList ZPP_Broadphase_obj::bodiesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","bodiesInAABB",0xb65b91ec,"zpp_nape.space.ZPP_Broadphase.bodiesInAABB","zpp_nape/space/Broadphase.hx",234,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aabb,"aabb")
	HX_STACK_ARG(strict,"strict")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(234)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ZPP_Broadphase_obj,bodiesInAABB,return )

Void ZPP_Broadphase_obj::updateCircShape( Float x,Float y,Float r){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","updateCircShape",0x1619299a,"zpp_nape.space.ZPP_Broadphase.updateCircShape","zpp_nape/space/Broadphase.hx",237,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(238)
		::nape::shape::Shape tmp = this->circShape;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(238)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		if ((tmp1)){
			HX_STACK_LINE(239)
			::nape::phys::BodyType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(239)
			{
				HX_STACK_LINE(239)
				::nape::phys::BodyType tmp3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(239)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(239)
				if ((tmp4)){
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(239)
					::nape::phys::BodyType tmp5 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = tmp5;
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(239)
				tmp2 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			HX_STACK_LINE(239)
			::nape::phys::Body tmp3 = ::nape::phys::Body_obj::__new(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(239)
			::nape::phys::Body body = tmp3;		HX_STACK_VAR(body,"body");
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				::nape::shape::ShapeList tmp4 = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(240)
				::nape::shape::ShapeList _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(240)
				Float tmp5 = r;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(240)
				::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(240)
					bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(240)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(240)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(240)
					if ((tmp8)){
						HX_STACK_LINE(240)
						tmp9 = (y != y);
					}
					else{
						HX_STACK_LINE(240)
						tmp9 = true;
					}
					HX_STACK_LINE(240)
					if ((tmp9)){
						HX_STACK_LINE(240)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(240)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(240)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(240)
					bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(240)
					if ((tmp11)){
						HX_STACK_LINE(240)
						::nape::geom::Vec2 tmp12 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(240)
						ret = tmp12;
					}
					else{
						HX_STACK_LINE(240)
						::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(240)
						ret = tmp12;
						HX_STACK_LINE(240)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(240)
						ret->zpp_pool = null();
						HX_STACK_LINE(240)
						ret->zpp_disp = false;
						HX_STACK_LINE(240)
						::nape::geom::Vec2 tmp13 = ret;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(240)
						::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(240)
						bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(240)
						if ((tmp15)){
							HX_STACK_LINE(240)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(240)
					bool tmp12 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(240)
					if ((tmp12)){
						HX_STACK_LINE(240)
						::zpp_nape::geom::ZPP_Vec2 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(240)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(240)
								bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(240)
								if ((tmp15)){
									HX_STACK_LINE(240)
									::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(240)
									ret1 = tmp16;
								}
								else{
									HX_STACK_LINE(240)
									::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(240)
									ret1 = tmp16;
									HX_STACK_LINE(240)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(240)
									ret1->next = null();
								}
								HX_STACK_LINE(240)
								ret1->weak = false;
							}
							HX_STACK_LINE(240)
							ret1->_immutable = immutable;
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								ret1->x = x;
								HX_STACK_LINE(240)
								ret1->y = y;
								HX_STACK_LINE(240)
								{
								}
							}
							HX_STACK_LINE(240)
							tmp13 = ret1;
						}
						HX_STACK_LINE(240)
						ret->zpp_inner = tmp13;
						HX_STACK_LINE(240)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(240)
						bool tmp13 = (ret != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(240)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(240)
						if ((tmp13)){
							HX_STACK_LINE(240)
							tmp14 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(240)
							tmp14 = false;
						}
						HX_STACK_LINE(240)
						if ((tmp14)){
							HX_STACK_LINE(240)
							::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(240)
							::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(240)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(240)
							bool tmp15 = _this1->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(240)
							if ((tmp15)){
								HX_STACK_LINE(240)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(240)
							bool tmp16 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(240)
							if ((tmp16)){
								HX_STACK_LINE(240)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(240)
						bool tmp15 = (x != x);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(240)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(240)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(240)
						if ((tmp16)){
							HX_STACK_LINE(240)
							tmp17 = (y != y);
						}
						else{
							HX_STACK_LINE(240)
							tmp17 = true;
						}
						HX_STACK_LINE(240)
						if ((tmp17)){
							HX_STACK_LINE(240)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
						}
						HX_STACK_LINE(240)
						Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							bool tmp19 = (ret != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(240)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(240)
							if ((tmp19)){
								HX_STACK_LINE(240)
								tmp20 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(240)
								tmp20 = false;
							}
							HX_STACK_LINE(240)
							if ((tmp20)){
								HX_STACK_LINE(240)
								::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(240)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(240)
								HX_STACK_DO_THROW(tmp22);
							}
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(240)
								bool tmp21 = (_this1->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(240)
								if ((tmp21)){
									HX_STACK_LINE(240)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(240)
							tmp18 = ret->zpp_inner->x;
						}
						HX_STACK_LINE(240)
						Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(240)
						bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(240)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(240)
						if ((tmp20)){
							HX_STACK_LINE(240)
							Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								bool tmp23 = (ret != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(240)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(240)
								bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(240)
								bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(240)
								if ((tmp26)){
									HX_STACK_LINE(240)
									tmp25 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(240)
									tmp25 = false;
								}
								HX_STACK_LINE(240)
								bool tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(240)
								if ((tmp27)){
									HX_STACK_LINE(240)
									::String tmp28 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(240)
									::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(240)
									::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(240)
									::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(240)
									::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(240)
									HX_STACK_DO_THROW(tmp32);
								}
								HX_STACK_LINE(240)
								{
									HX_STACK_LINE(240)
									::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(240)
									bool tmp28 = (_this1->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(240)
									bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(240)
									bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(240)
									if ((tmp30)){
										HX_STACK_LINE(240)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(240)
								Float tmp28 = ret->zpp_inner->y;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(240)
								tmp22 = tmp28;
							}
							HX_STACK_LINE(240)
							Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(240)
							tmp21 = (tmp22 == tmp23);
						}
						else{
							HX_STACK_LINE(240)
							tmp21 = false;
						}
						HX_STACK_LINE(240)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(240)
						if ((tmp22)){
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(240)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(240)
								{
								}
							}
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(240)
								bool tmp23 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(240)
								if ((tmp23)){
									HX_STACK_LINE(240)
									::zpp_nape::geom::ZPP_Vec2 tmp24 = _this1;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(240)
									_this1->_invalidate(tmp24);
								}
							}
						}
						HX_STACK_LINE(240)
						ret;
					}
					HX_STACK_LINE(240)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(240)
					tmp6 = ret;
				}
				HX_STACK_LINE(240)
				::nape::shape::Circle tmp7 = ::nape::shape::Circle_obj::__new(tmp5,tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(240)
				::nape::shape::Shape tmp8 = this->circShape = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(240)
				::nape::shape::Shape obj = tmp8;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(240)
				bool tmp9 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(240)
				if ((tmp9)){
					HX_STACK_LINE(240)
					::nape::shape::Shape tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(240)
					_this->push(tmp10);
				}
				else{
					HX_STACK_LINE(240)
					::nape::shape::Shape tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(240)
					_this->unshift(tmp10);
				}
			}
		}
		else{
			HX_STACK_LINE(243)
			::nape::shape::Shape tmp2 = this->circShape;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(243)
			::zpp_nape::shape::ZPP_Circle tmp3 = tmp2->zpp_inner->circle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(243)
			::zpp_nape::shape::ZPP_Circle ci = tmp3;		HX_STACK_VAR(ci,"ci");
			HX_STACK_LINE(244)
			Float tmp4 = (Float(r) / Float(ci->radius));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(244)
			Float ss = tmp4;		HX_STACK_VAR(ss,"ss");
			HX_STACK_LINE(245)
			::nape::geom::Mat23 tmp5 = this->matrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(245)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(245)
			if ((tmp6)){
				HX_STACK_LINE(245)
				::nape::geom::Mat23 tmp7 = ::nape::geom::Mat23_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(245)
				this->matrix = tmp7;
			}
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				::nape::geom::Mat23 tmp7 = this->matrix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(246)
				::nape::geom::Mat23 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(246)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(246)
				{
					HX_STACK_LINE(246)
					::nape::geom::Mat23 tmp9 = this->matrix;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(246)
					::nape::geom::Mat23 _this1 = tmp9;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(246)
					{
						HX_STACK_LINE(246)
						bool tmp10 = (ss != ss);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(246)
						if ((tmp10)){
							HX_STACK_LINE(246)
							::String tmp11 = HX_HCSTRING("Error: Mat23::d","\x51","\xec","\xf0","\xff");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(246)
							::String tmp12 = (tmp11 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(246)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(246)
						_this1->zpp_inner->d = ss;
						HX_STACK_LINE(246)
						{
							HX_STACK_LINE(246)
							::zpp_nape::geom::ZPP_Mat23 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(246)
							bool tmp11 = (_this2->_invalidate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(246)
							if ((tmp11)){
								HX_STACK_LINE(246)
								_this2->_invalidate();
							}
						}
					}
					HX_STACK_LINE(246)
					tmp8 = _this1->zpp_inner->d;
				}
				HX_STACK_LINE(246)
				Float a = tmp8;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(246)
				{
					HX_STACK_LINE(246)
					bool tmp9 = (a != a);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(246)
					if ((tmp9)){
						HX_STACK_LINE(246)
						::String tmp10 = HX_HCSTRING("Error: Mat23::a","\x4e","\xec","\xf0","\xff");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(246)
						::String tmp11 = (tmp10 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(246)
						HX_STACK_DO_THROW(tmp11);
					}
					HX_STACK_LINE(246)
					_this->zpp_inner->a = a;
					HX_STACK_LINE(246)
					{
						HX_STACK_LINE(246)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(246)
						bool tmp10 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(246)
						if ((tmp10)){
							HX_STACK_LINE(246)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(246)
				_this->zpp_inner->a;
			}
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				::nape::geom::Mat23 tmp7 = this->matrix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(247)
				::nape::geom::Mat23 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(247)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(247)
					::nape::geom::Mat23 tmp9 = this->matrix;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(247)
					::nape::geom::Mat23 _this1 = tmp9;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(247)
					{
						HX_STACK_LINE(247)
						_this1->zpp_inner->c = (int)0;
						HX_STACK_LINE(247)
						{
							HX_STACK_LINE(247)
							::zpp_nape::geom::ZPP_Mat23 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(247)
							bool tmp10 = (_this2->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(247)
							if ((tmp10)){
								HX_STACK_LINE(247)
								_this2->_invalidate();
							}
						}
					}
					HX_STACK_LINE(247)
					tmp8 = _this1->zpp_inner->c;
				}
				HX_STACK_LINE(247)
				Float b = tmp8;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(247)
					bool tmp9 = (b != b);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(247)
					if ((tmp9)){
						HX_STACK_LINE(247)
						::String tmp10 = HX_HCSTRING("Error: Mat23::b","\x4f","\xec","\xf0","\xff");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(247)
						::String tmp11 = (tmp10 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(247)
						HX_STACK_DO_THROW(tmp11);
					}
					HX_STACK_LINE(247)
					_this->zpp_inner->b = b;
					HX_STACK_LINE(247)
					{
						HX_STACK_LINE(247)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(247)
						bool tmp10 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(247)
						if ((tmp10)){
							HX_STACK_LINE(247)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(247)
				_this->zpp_inner->b;
			}
			HX_STACK_LINE(248)
			{
				HX_STACK_LINE(248)
				::nape::geom::Mat23 tmp7 = this->matrix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(248)
				::nape::geom::Mat23 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(248)
				Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(248)
				Float tmp9 = (ss * ci->localCOMx);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(248)
				Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(248)
				Float tx = tmp10;		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					bool tmp11 = (tx != tx);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(248)
					if ((tmp11)){
						HX_STACK_LINE(248)
						::String tmp12 = HX_HCSTRING("Error: Mat23::tx","\xf7","\xe8","\xdd","\xf2");		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(248)
						::String tmp13 = (tmp12 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(248)
						HX_STACK_DO_THROW(tmp13);
					}
					HX_STACK_LINE(248)
					_this->zpp_inner->tx = tx;
					HX_STACK_LINE(248)
					{
						HX_STACK_LINE(248)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(248)
						bool tmp12 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(248)
						if ((tmp12)){
							HX_STACK_LINE(248)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(248)
				_this->zpp_inner->tx;
			}
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				::nape::geom::Mat23 tmp7 = this->matrix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(249)
				::nape::geom::Mat23 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(249)
				Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(249)
				Float tmp9 = (ss * ci->localCOMy);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(249)
				Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(249)
				Float ty = tmp10;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(249)
				{
					HX_STACK_LINE(249)
					bool tmp11 = (ty != ty);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(249)
					if ((tmp11)){
						HX_STACK_LINE(249)
						::String tmp12 = HX_HCSTRING("Error: Mat23::ty","\xf8","\xe8","\xdd","\xf2");		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(249)
						::String tmp13 = (tmp12 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(249)
						HX_STACK_DO_THROW(tmp13);
					}
					HX_STACK_LINE(249)
					_this->zpp_inner->ty = ty;
					HX_STACK_LINE(249)
					{
						HX_STACK_LINE(249)
						::zpp_nape::geom::ZPP_Mat23 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(249)
						bool tmp12 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(249)
						if ((tmp12)){
							HX_STACK_LINE(249)
							_this1->_invalidate();
						}
					}
				}
				HX_STACK_LINE(249)
				_this->zpp_inner->ty;
			}
			HX_STACK_LINE(250)
			::nape::shape::Shape tmp7 = this->circShape;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(250)
			::nape::geom::Mat23 tmp8 = this->matrix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(250)
			tmp7->transform(tmp8);
		}
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			::nape::shape::Shape tmp2 = this->circShape;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(252)
			::zpp_nape::shape::ZPP_Shape _this = tmp2->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(252)
			bool tmp3 = _this->zip_aabb;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			if ((tmp3)){
				HX_STACK_LINE(252)
				bool tmp4 = (_this->body != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(252)
				if ((tmp4)){
					HX_STACK_LINE(252)
					_this->zip_aabb = false;
					HX_STACK_LINE(252)
					bool tmp5 = (_this->type == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(252)
					if ((tmp5)){
						HX_STACK_LINE(252)
						::zpp_nape::shape::ZPP_Circle _this1 = _this->circle;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(252)
							bool tmp6 = _this1->zip_worldCOM;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(252)
							if ((tmp6)){
								HX_STACK_LINE(252)
								bool tmp7 = (_this1->body != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(252)
								if ((tmp7)){
									HX_STACK_LINE(252)
									_this1->zip_worldCOM = false;
									HX_STACK_LINE(252)
									{
										HX_STACK_LINE(252)
										bool tmp8 = _this1->zip_localCOM;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(252)
										if ((tmp8)){
											HX_STACK_LINE(252)
											_this1->zip_localCOM = false;
											HX_STACK_LINE(252)
											bool tmp9 = (_this1->type == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(252)
											if ((tmp9)){
												HX_STACK_LINE(252)
												::zpp_nape::shape::ZPP_Polygon _this2 = _this1->polygon;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(252)
												::zpp_nape::geom::ZPP_Vec2 tmp10 = _this2->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(252)
												bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(252)
												if ((tmp11)){
													HX_STACK_LINE(252)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
												}
												HX_STACK_LINE(252)
												::zpp_nape::geom::ZPP_Vec2 tmp12 = _this2->lverts->next;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(252)
												::zpp_nape::geom::ZPP_Vec2 tmp13 = tmp12->next;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(252)
												bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(252)
												if ((tmp14)){
													HX_STACK_LINE(252)
													::zpp_nape::geom::ZPP_Vec2 tmp15 = _this2->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(252)
													_this2->localCOMx = tmp15->x;
													HX_STACK_LINE(252)
													::zpp_nape::geom::ZPP_Vec2 tmp16 = _this2->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(252)
													_this2->localCOMy = tmp16->y;
													HX_STACK_LINE(252)
													Dynamic();
												}
												else{
													HX_STACK_LINE(252)
													::zpp_nape::geom::ZPP_Vec2 tmp15 = _this2->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(252)
													::zpp_nape::geom::ZPP_Vec2 tmp16 = tmp15->next->next;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(252)
													bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(252)
													if ((tmp17)){
														HX_STACK_LINE(252)
														{
															HX_STACK_LINE(252)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = _this2->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(252)
															_this2->localCOMx = tmp18->x;
															HX_STACK_LINE(252)
															::zpp_nape::geom::ZPP_Vec2 tmp19 = _this2->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(252)
															_this2->localCOMy = tmp19->y;
															HX_STACK_LINE(252)
															{
															}
														}
														HX_STACK_LINE(252)
														{
															HX_STACK_LINE(252)
															Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(252)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = _this2->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(252)
															Float tmp19 = tmp18->next->x;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(252)
															Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(252)
															Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(252)
															hx::AddEq(_this2->localCOMx,tmp21);
															HX_STACK_LINE(252)
															::zpp_nape::geom::ZPP_Vec2 tmp22 = _this2->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(252)
															Float tmp23 = tmp22->next->y;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(252)
															Float tmp24 = t;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(252)
															Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(252)
															hx::AddEq(_this2->localCOMy,tmp25);
														}
														HX_STACK_LINE(252)
														{
															HX_STACK_LINE(252)
															Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(252)
															hx::MultEq(_this2->localCOMx,t);
															HX_STACK_LINE(252)
															hx::MultEq(_this2->localCOMy,t);
														}
													}
													else{
														HX_STACK_LINE(252)
														{
															HX_STACK_LINE(252)
															_this2->localCOMx = (int)0;
															HX_STACK_LINE(252)
															_this2->localCOMy = (int)0;
															HX_STACK_LINE(252)
															{
															}
														}
														HX_STACK_LINE(252)
														Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
														HX_STACK_LINE(252)
														{
															HX_STACK_LINE(252)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = _this2->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(252)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp18;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(252)
															::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
															HX_STACK_LINE(252)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(252)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(252)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(252)
															while((true)){
																HX_STACK_LINE(252)
																bool tmp19 = (cx_ite != null());		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(252)
																bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(252)
																if ((tmp20)){
																	HX_STACK_LINE(252)
																	break;
																}
																HX_STACK_LINE(252)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(252)
																{
																	HX_STACK_LINE(252)
																	Float tmp21 = v->x;		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(252)
																	Float tmp22 = (w->y - u->y);		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(252)
																	Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(252)
																	hx::AddEq(area,tmp23);
																	HX_STACK_LINE(252)
																	Float tmp24 = (w->y * v->x);		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(252)
																	Float tmp25 = (w->x * v->y);		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(252)
																	Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(252)
																	Float cf = tmp26;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(252)
																	Float tmp27 = (v->x + w->x);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(252)
																	Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(252)
																	Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(252)
																	hx::AddEq(_this2->localCOMx,tmp29);
																	HX_STACK_LINE(252)
																	Float tmp30 = (v->y + w->y);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(252)
																	Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(252)
																	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(252)
																	hx::AddEq(_this2->localCOMy,tmp32);
																}
																HX_STACK_LINE(252)
																u = v;
																HX_STACK_LINE(252)
																v = w;
																HX_STACK_LINE(252)
																cx_ite = cx_ite->next;
															}
															HX_STACK_LINE(252)
															::zpp_nape::geom::ZPP_Vec2 tmp19 = _this2->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(252)
															cx_ite = tmp19;
															HX_STACK_LINE(252)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(252)
															{
																HX_STACK_LINE(252)
																Float tmp20 = v->x;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(252)
																Float tmp21 = (w->y - u->y);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(252)
																Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(252)
																hx::AddEq(area,tmp22);
																HX_STACK_LINE(252)
																Float tmp23 = (w->y * v->x);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(252)
																Float tmp24 = (w->x * v->y);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(252)
																Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(252)
																Float cf = tmp25;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(252)
																Float tmp26 = (v->x + w->x);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(252)
																Float tmp27 = cf;		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(252)
																Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(252)
																hx::AddEq(_this2->localCOMx,tmp28);
																HX_STACK_LINE(252)
																Float tmp29 = (v->y + w->y);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(252)
																Float tmp30 = cf;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(252)
																Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(252)
																hx::AddEq(_this2->localCOMy,tmp31);
															}
															HX_STACK_LINE(252)
															u = v;
															HX_STACK_LINE(252)
															v = w;
															HX_STACK_LINE(252)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(252)
															::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
															HX_STACK_LINE(252)
															{
																HX_STACK_LINE(252)
																Float tmp20 = v->x;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(252)
																Float tmp21 = (w1->y - u->y);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(252)
																Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(252)
																hx::AddEq(area,tmp22);
																HX_STACK_LINE(252)
																Float tmp23 = (w1->y * v->x);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(252)
																Float tmp24 = (w1->x * v->y);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(252)
																Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(252)
																Float cf = tmp25;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(252)
																Float tmp26 = (v->x + w1->x);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(252)
																Float tmp27 = cf;		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(252)
																Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(252)
																hx::AddEq(_this2->localCOMx,tmp28);
																HX_STACK_LINE(252)
																Float tmp29 = (v->y + w1->y);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(252)
																Float tmp30 = cf;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(252)
																Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(252)
																hx::AddEq(_this2->localCOMy,tmp31);
															}
														}
														HX_STACK_LINE(252)
														Float tmp18 = ((int)3 * area);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(252)
														Float tmp19 = (Float((int)1) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(252)
														area = tmp19;
														HX_STACK_LINE(252)
														{
															HX_STACK_LINE(252)
															Float t = area;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(252)
															hx::MultEq(_this2->localCOMx,t);
															HX_STACK_LINE(252)
															hx::MultEq(_this2->localCOMy,t);
														}
													}
												}
											}
											HX_STACK_LINE(252)
											bool tmp10 = (_this1->wrap_localCOM != null());		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(252)
											if ((tmp10)){
												HX_STACK_LINE(252)
												::zpp_nape::geom::ZPP_Vec2 tmp11 = _this1->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(252)
												tmp11->x = _this1->localCOMx;
												HX_STACK_LINE(252)
												::zpp_nape::geom::ZPP_Vec2 tmp12 = _this1->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(252)
												tmp12->y = _this1->localCOMy;
												HX_STACK_LINE(252)
												{
												}
											}
										}
									}
									HX_STACK_LINE(252)
									{
										HX_STACK_LINE(252)
										::zpp_nape::phys::ZPP_Body _this2 = _this1->body;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(252)
										bool tmp8 = _this2->zip_axis;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(252)
										if ((tmp8)){
											HX_STACK_LINE(252)
											_this2->zip_axis = false;
											HX_STACK_LINE(252)
											{
												HX_STACK_LINE(252)
												Float tmp9 = _this2->rot;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(252)
												Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(252)
												_this2->axisx = tmp10;
												HX_STACK_LINE(252)
												Float tmp11 = _this2->rot;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(252)
												Float tmp12 = ::Math_obj::cos(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(252)
												_this2->axisy = tmp12;
												HX_STACK_LINE(252)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(252)
									{
										HX_STACK_LINE(252)
										Float tmp8 = _this1->body->posx;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(252)
										Float tmp9 = _this1->body->axisy;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(252)
										Float tmp10 = _this1->localCOMx;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(252)
										Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(252)
										Float tmp12 = _this1->body->axisx;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(252)
										Float tmp13 = _this1->localCOMy;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(252)
										Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(252)
										Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(252)
										Float tmp16 = (tmp8 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(252)
										_this1->worldCOMx = tmp16;
										HX_STACK_LINE(252)
										Float tmp17 = _this1->body->posy;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(252)
										Float tmp18 = _this1->localCOMx;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(252)
										Float tmp19 = _this1->body->axisx;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(252)
										Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(252)
										Float tmp21 = _this1->localCOMy;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(252)
										Float tmp22 = _this1->body->axisy;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(252)
										Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(252)
										Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(252)
										Float tmp25 = (tmp17 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(252)
										_this1->worldCOMy = tmp25;
									}
								}
							}
						}
						HX_STACK_LINE(252)
						Float rx = _this1->radius;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(252)
						Float ry = _this1->radius;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(252)
							Float tmp6 = (_this1->worldCOMx - rx);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(252)
							_this1->aabb->minx = tmp6;
							HX_STACK_LINE(252)
							Float tmp7 = (_this1->worldCOMy - ry);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(252)
							_this1->aabb->miny = tmp7;
						}
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(252)
							Float tmp6 = (_this1->worldCOMx + rx);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(252)
							_this1->aabb->maxx = tmp6;
							HX_STACK_LINE(252)
							Float tmp7 = (_this1->worldCOMy + ry);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(252)
							_this1->aabb->maxy = tmp7;
						}
					}
					else{
						HX_STACK_LINE(252)
						::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(252)
							bool tmp6 = _this1->zip_gverts;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(252)
							if ((tmp6)){
								HX_STACK_LINE(252)
								bool tmp7 = (_this1->body != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(252)
								if ((tmp7)){
									HX_STACK_LINE(252)
									_this1->zip_gverts = false;
									HX_STACK_LINE(252)
									_this1->validate_lverts();
									HX_STACK_LINE(252)
									{
										HX_STACK_LINE(252)
										::zpp_nape::phys::ZPP_Body _this2 = _this1->body;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(252)
										bool tmp8 = _this2->zip_axis;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(252)
										if ((tmp8)){
											HX_STACK_LINE(252)
											_this2->zip_axis = false;
											HX_STACK_LINE(252)
											{
												HX_STACK_LINE(252)
												Float tmp9 = _this2->rot;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(252)
												Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(252)
												_this2->axisx = tmp10;
												HX_STACK_LINE(252)
												Float tmp11 = _this2->rot;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(252)
												Float tmp12 = ::Math_obj::cos(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(252)
												_this2->axisy = tmp12;
												HX_STACK_LINE(252)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(252)
									::zpp_nape::geom::ZPP_Vec2 tmp8 = _this1->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(252)
									::zpp_nape::geom::ZPP_Vec2 li = tmp8;		HX_STACK_VAR(li,"li");
									HX_STACK_LINE(252)
									{
										HX_STACK_LINE(252)
										::zpp_nape::geom::ZPP_Vec2 tmp9 = _this1->gverts->next;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(252)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp9;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(252)
										while((true)){
											HX_STACK_LINE(252)
											bool tmp10 = (cx_ite != null());		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(252)
											bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(252)
											if ((tmp11)){
												HX_STACK_LINE(252)
												break;
											}
											HX_STACK_LINE(252)
											::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(252)
											{
												HX_STACK_LINE(252)
												::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(252)
												li = li->next;
												HX_STACK_LINE(252)
												{
													HX_STACK_LINE(252)
													Float tmp12 = _this1->body->posx;		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(252)
													Float tmp13 = _this1->body->axisy;		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(252)
													Float tmp14 = l->x;		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(252)
													Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(252)
													Float tmp16 = _this1->body->axisx;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(252)
													Float tmp17 = l->y;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(252)
													Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(252)
													Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(252)
													Float tmp20 = (tmp12 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(252)
													g->x = tmp20;
													HX_STACK_LINE(252)
													Float tmp21 = _this1->body->posy;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(252)
													Float tmp22 = l->x;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(252)
													Float tmp23 = _this1->body->axisx;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(252)
													Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(252)
													Float tmp25 = l->y;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(252)
													Float tmp26 = _this1->body->axisy;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(252)
													Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(252)
													Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(252)
													Float tmp29 = (tmp21 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(252)
													g->y = tmp29;
												}
											}
											HX_STACK_LINE(252)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(252)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = _this1->lverts->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(252)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(252)
						if ((tmp7)){
							HX_STACK_LINE(252)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
						}
						HX_STACK_LINE(252)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = _this1->gverts->next;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(252)
						::zpp_nape::geom::ZPP_Vec2 p0 = tmp8;		HX_STACK_VAR(p0,"p0");
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(252)
							_this1->aabb->minx = p0->x;
							HX_STACK_LINE(252)
							_this1->aabb->miny = p0->y;
							HX_STACK_LINE(252)
							{
							}
						}
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(252)
							_this1->aabb->maxx = p0->x;
							HX_STACK_LINE(252)
							_this1->aabb->maxy = p0->y;
							HX_STACK_LINE(252)
							{
							}
						}
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(252)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = _this1->gverts->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(252)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp9->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(252)
							while((true)){
								HX_STACK_LINE(252)
								bool tmp10 = (cx_ite != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(252)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(252)
								if ((tmp11)){
									HX_STACK_LINE(252)
									break;
								}
								HX_STACK_LINE(252)
								::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(252)
								{
									HX_STACK_LINE(252)
									Float tmp12 = p->x;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(252)
									Float tmp13 = _this1->aabb->minx;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(252)
									bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(252)
									if ((tmp14)){
										HX_STACK_LINE(252)
										_this1->aabb->minx = p->x;
									}
									HX_STACK_LINE(252)
									Float tmp15 = p->x;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(252)
									Float tmp16 = _this1->aabb->maxx;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(252)
									bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(252)
									if ((tmp17)){
										HX_STACK_LINE(252)
										_this1->aabb->maxx = p->x;
									}
									HX_STACK_LINE(252)
									Float tmp18 = p->y;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(252)
									Float tmp19 = _this1->aabb->miny;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(252)
									bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(252)
									if ((tmp20)){
										HX_STACK_LINE(252)
										_this1->aabb->miny = p->y;
									}
									HX_STACK_LINE(252)
									Float tmp21 = p->y;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(252)
									Float tmp22 = _this1->aabb->maxy;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(252)
									bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(252)
									if ((tmp23)){
										HX_STACK_LINE(252)
										_this1->aabb->maxy = p->y;
									}
								}
								HX_STACK_LINE(252)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Broadphase_obj,updateCircShape,(void))

::nape::shape::ShapeList ZPP_Broadphase_obj::shapesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","shapesInCircle",0x6c7c392e,"zpp_nape.space.ZPP_Broadphase.shapesInCircle","zpp_nape/space/Broadphase.hx",255,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(255)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(ZPP_Broadphase_obj,shapesInCircle,return )

::nape::phys::BodyList ZPP_Broadphase_obj::bodiesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","bodiesInCircle",0xa666787c,"zpp_nape.space.ZPP_Broadphase.bodiesInCircle","zpp_nape/space/Broadphase.hx",258,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(258)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(ZPP_Broadphase_obj,bodiesInCircle,return )

Void ZPP_Broadphase_obj::validateShape( ::zpp_nape::shape::ZPP_Shape s){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","validateShape",0xbcc5fb84,"zpp_nape.space.ZPP_Broadphase.validateShape","zpp_nape/space/Broadphase.hx",260,0xcf31b77a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(261)
		bool tmp = (s->type == (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		if ((tmp)){
			HX_STACK_LINE(261)
			::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			bool tmp1 = _this->zip_gaxi;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(261)
			if ((tmp1)){
				HX_STACK_LINE(261)
				bool tmp2 = (_this->body != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(261)
				if ((tmp2)){
					HX_STACK_LINE(261)
					_this->zip_gaxi = false;
					HX_STACK_LINE(261)
					_this->validate_laxi();
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(261)
						bool tmp3 = _this1->zip_axis;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(261)
						if ((tmp3)){
							HX_STACK_LINE(261)
							_this1->zip_axis = false;
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								Float tmp4 = _this1->rot;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(261)
								Float tmp5 = ::Math_obj::sin(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(261)
								_this1->axisx = tmp5;
								HX_STACK_LINE(261)
								Float tmp6 = _this1->rot;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(261)
								Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(261)
								_this1->axisy = tmp7;
								HX_STACK_LINE(261)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						bool tmp3 = _this->zip_gverts;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(261)
						if ((tmp3)){
							HX_STACK_LINE(261)
							bool tmp4 = (_this->body != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(261)
							if ((tmp4)){
								HX_STACK_LINE(261)
								_this->zip_gverts = false;
								HX_STACK_LINE(261)
								_this->validate_lverts();
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(261)
									bool tmp5 = _this1->zip_axis;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(261)
									if ((tmp5)){
										HX_STACK_LINE(261)
										_this1->zip_axis = false;
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp6 = _this1->rot;		HX_STACK_VAR(tmp6,"tmp6");
											HX_STACK_LINE(261)
											Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
											HX_STACK_LINE(261)
											_this1->axisx = tmp7;
											HX_STACK_LINE(261)
											Float tmp8 = _this1->rot;		HX_STACK_VAR(tmp8,"tmp8");
											HX_STACK_LINE(261)
											Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(261)
											_this1->axisy = tmp9;
											HX_STACK_LINE(261)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(261)
								::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->lverts->next;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(261)
								::zpp_nape::geom::ZPP_Vec2 li = tmp5;		HX_STACK_VAR(li,"li");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->gverts->next;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(261)
									while((true)){
										HX_STACK_LINE(261)
										bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(261)
										bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(261)
										if ((tmp8)){
											HX_STACK_LINE(261)
											break;
										}
										HX_STACK_LINE(261)
										::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(261)
											li = li->next;
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												Float tmp9 = _this->body->posx;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(261)
												Float tmp10 = _this->body->axisy;		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(261)
												Float tmp11 = l->x;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(261)
												Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(261)
												Float tmp13 = _this->body->axisx;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(261)
												Float tmp14 = l->y;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(261)
												Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(261)
												Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(261)
												Float tmp17 = (tmp9 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(261)
												g->x = tmp17;
												HX_STACK_LINE(261)
												Float tmp18 = _this->body->posy;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(261)
												Float tmp19 = l->x;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(261)
												Float tmp20 = _this->body->axisx;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(261)
												Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(261)
												Float tmp22 = l->y;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(261)
												Float tmp23 = _this->body->axisy;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(261)
												Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(261)
												Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(261)
												Float tmp26 = (tmp18 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(261)
												g->y = tmp26;
											}
										}
										HX_STACK_LINE(261)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
					HX_STACK_LINE(261)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = _this->edges->head;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(261)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp3;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = _this->gverts->next;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(261)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(261)
						while((true)){
							HX_STACK_LINE(261)
							bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(261)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(261)
							if ((tmp6)){
								HX_STACK_LINE(261)
								break;
							}
							HX_STACK_LINE(261)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(261)
								ite = ite->next;
								HX_STACK_LINE(261)
								e->gp0 = u;
								HX_STACK_LINE(261)
								e->gp1 = v;
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									Float tmp7 = _this->body->axisy;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(261)
									Float tmp8 = e->lnormx;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(261)
									Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(261)
									Float tmp10 = _this->body->axisx;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(261)
									Float tmp11 = e->lnormy;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(261)
									Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(261)
									Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(261)
									e->gnormx = tmp13;
									HX_STACK_LINE(261)
									Float tmp14 = e->lnormx;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(261)
									Float tmp15 = _this->body->axisx;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(261)
									Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(261)
									Float tmp17 = e->lnormy;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(261)
									Float tmp18 = _this->body->axisy;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(261)
									Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(261)
									Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(261)
									e->gnormy = tmp20;
								}
								HX_STACK_LINE(261)
								Float tmp7 = _this->body->posx;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(261)
								Float tmp8 = e->gnormx;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(261)
								Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(261)
								Float tmp10 = _this->body->posy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(261)
								Float tmp11 = e->gnormy;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(261)
								Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(261)
								Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(261)
								Float tmp14 = e->lprojection;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(261)
								Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(261)
								e->gprojection = tmp15;
								HX_STACK_LINE(261)
								bool tmp16 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(261)
								if ((tmp16)){
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 tmp17 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(261)
									tmp17->x = e->gnormx;
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 tmp18 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(261)
									tmp18->y = e->gnormy;
									HX_STACK_LINE(261)
									{
									}
								}
								HX_STACK_LINE(261)
								Float tmp17 = e->gp0->y;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(261)
								Float tmp18 = e->gnormx;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(261)
								Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(261)
								Float tmp20 = e->gp0->x;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(261)
								Float tmp21 = e->gnormy;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(261)
								Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(261)
								Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(261)
								e->tp0 = tmp23;
								HX_STACK_LINE(261)
								Float tmp24 = e->gp1->y;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(261)
								Float tmp25 = e->gnormx;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(261)
								Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(261)
								Float tmp27 = e->gp1->x;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(261)
								Float tmp28 = e->gnormy;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(261)
								Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(261)
								Float tmp30 = (tmp26 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(261)
								e->tp1 = tmp30;
							}
							HX_STACK_LINE(261)
							u = v;
							HX_STACK_LINE(261)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->gverts->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2 v = tmp5;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(261)
							ite = ite->next;
							HX_STACK_LINE(261)
							e->gp0 = u;
							HX_STACK_LINE(261)
							e->gp1 = v;
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								Float tmp6 = _this->body->axisy;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(261)
								Float tmp7 = e->lnormx;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(261)
								Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(261)
								Float tmp9 = _this->body->axisx;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(261)
								Float tmp10 = e->lnormy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(261)
								Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(261)
								Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(261)
								e->gnormx = tmp12;
								HX_STACK_LINE(261)
								Float tmp13 = e->lnormx;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(261)
								Float tmp14 = _this->body->axisx;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(261)
								Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(261)
								Float tmp16 = e->lnormy;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(261)
								Float tmp17 = _this->body->axisy;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(261)
								Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(261)
								Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(261)
								e->gnormy = tmp19;
							}
							HX_STACK_LINE(261)
							Float tmp6 = _this->body->posx;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(261)
							Float tmp7 = e->gnormx;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(261)
							Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(261)
							Float tmp9 = _this->body->posy;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(261)
							Float tmp10 = e->gnormy;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(261)
							Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(261)
							Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(261)
							Float tmp13 = e->lprojection;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(261)
							Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(261)
							e->gprojection = tmp14;
							HX_STACK_LINE(261)
							bool tmp15 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(261)
							if ((tmp15)){
								HX_STACK_LINE(261)
								::zpp_nape::geom::ZPP_Vec2 tmp16 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(261)
								tmp16->x = e->gnormx;
								HX_STACK_LINE(261)
								::zpp_nape::geom::ZPP_Vec2 tmp17 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(261)
								tmp17->y = e->gnormy;
								HX_STACK_LINE(261)
								{
								}
							}
							HX_STACK_LINE(261)
							Float tmp16 = e->gp0->y;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(261)
							Float tmp17 = e->gnormx;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(261)
							Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(261)
							Float tmp19 = e->gp0->x;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(261)
							Float tmp20 = e->gnormy;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(261)
							Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(261)
							Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(261)
							e->tp0 = tmp22;
							HX_STACK_LINE(261)
							Float tmp23 = e->gp1->y;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(261)
							Float tmp24 = e->gnormx;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(261)
							Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(261)
							Float tmp26 = e->gp1->x;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(261)
							Float tmp27 = e->gnormy;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(261)
							Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(261)
							Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(261)
							e->tp1 = tmp29;
						}
					}
				}
			}
		}
		HX_STACK_LINE(262)
		{
			HX_STACK_LINE(262)
			bool tmp1 = s->zip_aabb;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(262)
			if ((tmp1)){
				HX_STACK_LINE(262)
				bool tmp2 = (s->body != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(262)
				if ((tmp2)){
					HX_STACK_LINE(262)
					s->zip_aabb = false;
					HX_STACK_LINE(262)
					bool tmp3 = (s->type == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(262)
					if ((tmp3)){
						HX_STACK_LINE(262)
						::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(262)
						{
							HX_STACK_LINE(262)
							bool tmp4 = _this->zip_worldCOM;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(262)
							if ((tmp4)){
								HX_STACK_LINE(262)
								bool tmp5 = (_this->body != null());		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(262)
								if ((tmp5)){
									HX_STACK_LINE(262)
									_this->zip_worldCOM = false;
									HX_STACK_LINE(262)
									{
										HX_STACK_LINE(262)
										bool tmp6 = _this->zip_localCOM;		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(262)
										if ((tmp6)){
											HX_STACK_LINE(262)
											_this->zip_localCOM = false;
											HX_STACK_LINE(262)
											bool tmp7 = (_this->type == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
											HX_STACK_LINE(262)
											if ((tmp7)){
												HX_STACK_LINE(262)
												::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(262)
												::zpp_nape::geom::ZPP_Vec2 tmp8 = _this1->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
												HX_STACK_LINE(262)
												bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(262)
												if ((tmp9)){
													HX_STACK_LINE(262)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
												}
												HX_STACK_LINE(262)
												::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(262)
												::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->next;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(262)
												bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(262)
												if ((tmp12)){
													HX_STACK_LINE(262)
													::zpp_nape::geom::ZPP_Vec2 tmp13 = _this1->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(262)
													_this1->localCOMx = tmp13->x;
													HX_STACK_LINE(262)
													::zpp_nape::geom::ZPP_Vec2 tmp14 = _this1->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(262)
													_this1->localCOMy = tmp14->y;
													HX_STACK_LINE(262)
													Dynamic();
												}
												else{
													HX_STACK_LINE(262)
													::zpp_nape::geom::ZPP_Vec2 tmp13 = _this1->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(262)
													::zpp_nape::geom::ZPP_Vec2 tmp14 = tmp13->next->next;		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(262)
													bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(262)
													if ((tmp15)){
														HX_STACK_LINE(262)
														{
															HX_STACK_LINE(262)
															::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
															HX_STACK_LINE(262)
															_this1->localCOMx = tmp16->x;
															HX_STACK_LINE(262)
															::zpp_nape::geom::ZPP_Vec2 tmp17 = _this1->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(262)
															_this1->localCOMy = tmp17->y;
															HX_STACK_LINE(262)
															{
															}
														}
														HX_STACK_LINE(262)
														{
															HX_STACK_LINE(262)
															Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(262)
															::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
															HX_STACK_LINE(262)
															Float tmp17 = tmp16->next->x;		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(262)
															Float tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(262)
															Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(262)
															hx::AddEq(_this1->localCOMx,tmp19);
															HX_STACK_LINE(262)
															::zpp_nape::geom::ZPP_Vec2 tmp20 = _this1->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(262)
															Float tmp21 = tmp20->next->y;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(262)
															Float tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(262)
															Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(262)
															hx::AddEq(_this1->localCOMy,tmp23);
														}
														HX_STACK_LINE(262)
														{
															HX_STACK_LINE(262)
															Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(262)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(262)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
													else{
														HX_STACK_LINE(262)
														{
															HX_STACK_LINE(262)
															_this1->localCOMx = (int)0;
															HX_STACK_LINE(262)
															_this1->localCOMy = (int)0;
															HX_STACK_LINE(262)
															{
															}
														}
														HX_STACK_LINE(262)
														Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
														HX_STACK_LINE(262)
														{
															HX_STACK_LINE(262)
															::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
															HX_STACK_LINE(262)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(262)
															::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
															HX_STACK_LINE(262)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(262)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(262)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(262)
															while((true)){
																HX_STACK_LINE(262)
																bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
																HX_STACK_LINE(262)
																bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
																HX_STACK_LINE(262)
																if ((tmp18)){
																	HX_STACK_LINE(262)
																	break;
																}
																HX_STACK_LINE(262)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(262)
																{
																	HX_STACK_LINE(262)
																	Float tmp19 = v->x;		HX_STACK_VAR(tmp19,"tmp19");
																	HX_STACK_LINE(262)
																	Float tmp20 = (w->y - u->y);		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(262)
																	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(262)
																	hx::AddEq(area,tmp21);
																	HX_STACK_LINE(262)
																	Float tmp22 = (w->y * v->x);		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(262)
																	Float tmp23 = (w->x * v->y);		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(262)
																	Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(262)
																	Float cf = tmp24;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(262)
																	Float tmp25 = (v->x + w->x);		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(262)
																	Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(262)
																	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(262)
																	hx::AddEq(_this1->localCOMx,tmp27);
																	HX_STACK_LINE(262)
																	Float tmp28 = (v->y + w->y);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(262)
																	Float tmp29 = cf;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(262)
																	Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(262)
																	hx::AddEq(_this1->localCOMy,tmp30);
																}
																HX_STACK_LINE(262)
																u = v;
																HX_STACK_LINE(262)
																v = w;
																HX_STACK_LINE(262)
																cx_ite = cx_ite->next;
															}
															HX_STACK_LINE(262)
															::zpp_nape::geom::ZPP_Vec2 tmp17 = _this1->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(262)
															cx_ite = tmp17;
															HX_STACK_LINE(262)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(262)
															{
																HX_STACK_LINE(262)
																Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
																HX_STACK_LINE(262)
																Float tmp19 = (w->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(262)
																Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(262)
																hx::AddEq(area,tmp20);
																HX_STACK_LINE(262)
																Float tmp21 = (w->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(262)
																Float tmp22 = (w->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(262)
																Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(262)
																Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(262)
																Float tmp24 = (v->x + w->x);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(262)
																Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(262)
																Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(262)
																hx::AddEq(_this1->localCOMx,tmp26);
																HX_STACK_LINE(262)
																Float tmp27 = (v->y + w->y);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(262)
																Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(262)
																Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(262)
																hx::AddEq(_this1->localCOMy,tmp29);
															}
															HX_STACK_LINE(262)
															u = v;
															HX_STACK_LINE(262)
															v = w;
															HX_STACK_LINE(262)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(262)
															::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
															HX_STACK_LINE(262)
															{
																HX_STACK_LINE(262)
																Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
																HX_STACK_LINE(262)
																Float tmp19 = (w1->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(262)
																Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(262)
																hx::AddEq(area,tmp20);
																HX_STACK_LINE(262)
																Float tmp21 = (w1->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(262)
																Float tmp22 = (w1->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(262)
																Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(262)
																Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(262)
																Float tmp24 = (v->x + w1->x);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(262)
																Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(262)
																Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(262)
																hx::AddEq(_this1->localCOMx,tmp26);
																HX_STACK_LINE(262)
																Float tmp27 = (v->y + w1->y);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(262)
																Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(262)
																Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(262)
																hx::AddEq(_this1->localCOMy,tmp29);
															}
														}
														HX_STACK_LINE(262)
														Float tmp16 = ((int)3 * area);		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(262)
														Float tmp17 = (Float((int)1) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(262)
														area = tmp17;
														HX_STACK_LINE(262)
														{
															HX_STACK_LINE(262)
															Float t = area;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(262)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(262)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
												}
											}
											HX_STACK_LINE(262)
											bool tmp8 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp8,"tmp8");
											HX_STACK_LINE(262)
											if ((tmp8)){
												HX_STACK_LINE(262)
												::zpp_nape::geom::ZPP_Vec2 tmp9 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(262)
												tmp9->x = _this->localCOMx;
												HX_STACK_LINE(262)
												::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(262)
												tmp10->y = _this->localCOMy;
												HX_STACK_LINE(262)
												{
												}
											}
										}
									}
									HX_STACK_LINE(262)
									{
										HX_STACK_LINE(262)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(262)
										bool tmp6 = _this1->zip_axis;		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(262)
										if ((tmp6)){
											HX_STACK_LINE(262)
											_this1->zip_axis = false;
											HX_STACK_LINE(262)
											{
												HX_STACK_LINE(262)
												Float tmp7 = _this1->rot;		HX_STACK_VAR(tmp7,"tmp7");
												HX_STACK_LINE(262)
												Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
												HX_STACK_LINE(262)
												_this1->axisx = tmp8;
												HX_STACK_LINE(262)
												Float tmp9 = _this1->rot;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(262)
												Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(262)
												_this1->axisy = tmp10;
												HX_STACK_LINE(262)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(262)
									{
										HX_STACK_LINE(262)
										Float tmp6 = _this->body->posx;		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(262)
										Float tmp7 = _this->body->axisy;		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(262)
										Float tmp8 = _this->localCOMx;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(262)
										Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(262)
										Float tmp10 = _this->body->axisx;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(262)
										Float tmp11 = _this->localCOMy;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(262)
										Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(262)
										Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(262)
										Float tmp14 = (tmp6 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(262)
										_this->worldCOMx = tmp14;
										HX_STACK_LINE(262)
										Float tmp15 = _this->body->posy;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(262)
										Float tmp16 = _this->localCOMx;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(262)
										Float tmp17 = _this->body->axisx;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(262)
										Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(262)
										Float tmp19 = _this->localCOMy;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(262)
										Float tmp20 = _this->body->axisy;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(262)
										Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(262)
										Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(262)
										Float tmp23 = (tmp15 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(262)
										_this->worldCOMy = tmp23;
									}
								}
							}
						}
						HX_STACK_LINE(262)
						Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(262)
						Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(262)
						{
							HX_STACK_LINE(262)
							Float tmp4 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(262)
							_this->aabb->minx = tmp4;
							HX_STACK_LINE(262)
							Float tmp5 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(262)
							_this->aabb->miny = tmp5;
						}
						HX_STACK_LINE(262)
						{
							HX_STACK_LINE(262)
							Float tmp4 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(262)
							_this->aabb->maxx = tmp4;
							HX_STACK_LINE(262)
							Float tmp5 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(262)
							_this->aabb->maxy = tmp5;
						}
					}
					else{
						HX_STACK_LINE(262)
						::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(262)
						{
							HX_STACK_LINE(262)
							bool tmp4 = _this->zip_gverts;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(262)
							if ((tmp4)){
								HX_STACK_LINE(262)
								bool tmp5 = (_this->body != null());		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(262)
								if ((tmp5)){
									HX_STACK_LINE(262)
									_this->zip_gverts = false;
									HX_STACK_LINE(262)
									_this->validate_lverts();
									HX_STACK_LINE(262)
									{
										HX_STACK_LINE(262)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(262)
										bool tmp6 = _this1->zip_axis;		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(262)
										if ((tmp6)){
											HX_STACK_LINE(262)
											_this1->zip_axis = false;
											HX_STACK_LINE(262)
											{
												HX_STACK_LINE(262)
												Float tmp7 = _this1->rot;		HX_STACK_VAR(tmp7,"tmp7");
												HX_STACK_LINE(262)
												Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
												HX_STACK_LINE(262)
												_this1->axisx = tmp8;
												HX_STACK_LINE(262)
												Float tmp9 = _this1->rot;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(262)
												Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(262)
												_this1->axisy = tmp10;
												HX_STACK_LINE(262)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(262)
									::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->lverts->next;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(262)
									::zpp_nape::geom::ZPP_Vec2 li = tmp6;		HX_STACK_VAR(li,"li");
									HX_STACK_LINE(262)
									{
										HX_STACK_LINE(262)
										::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->gverts->next;		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(262)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp7;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(262)
										while((true)){
											HX_STACK_LINE(262)
											bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
											HX_STACK_LINE(262)
											bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(262)
											if ((tmp9)){
												HX_STACK_LINE(262)
												break;
											}
											HX_STACK_LINE(262)
											::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(262)
											{
												HX_STACK_LINE(262)
												::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(262)
												li = li->next;
												HX_STACK_LINE(262)
												{
													HX_STACK_LINE(262)
													Float tmp10 = _this->body->posx;		HX_STACK_VAR(tmp10,"tmp10");
													HX_STACK_LINE(262)
													Float tmp11 = _this->body->axisy;		HX_STACK_VAR(tmp11,"tmp11");
													HX_STACK_LINE(262)
													Float tmp12 = l->x;		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(262)
													Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(262)
													Float tmp14 = _this->body->axisx;		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(262)
													Float tmp15 = l->y;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(262)
													Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(262)
													Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(262)
													Float tmp18 = (tmp10 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(262)
													g->x = tmp18;
													HX_STACK_LINE(262)
													Float tmp19 = _this->body->posy;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(262)
													Float tmp20 = l->x;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(262)
													Float tmp21 = _this->body->axisx;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(262)
													Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(262)
													Float tmp23 = l->y;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(262)
													Float tmp24 = _this->body->axisy;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(262)
													Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(262)
													Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(262)
													Float tmp27 = (tmp19 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(262)
													g->y = tmp27;
												}
											}
											HX_STACK_LINE(262)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(262)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = _this->lverts->next;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(262)
						bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(262)
						if ((tmp5)){
							HX_STACK_LINE(262)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
						}
						HX_STACK_LINE(262)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->gverts->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(262)
						::zpp_nape::geom::ZPP_Vec2 p0 = tmp6;		HX_STACK_VAR(p0,"p0");
						HX_STACK_LINE(262)
						{
							HX_STACK_LINE(262)
							_this->aabb->minx = p0->x;
							HX_STACK_LINE(262)
							_this->aabb->miny = p0->y;
							HX_STACK_LINE(262)
							{
							}
						}
						HX_STACK_LINE(262)
						{
							HX_STACK_LINE(262)
							_this->aabb->maxx = p0->x;
							HX_STACK_LINE(262)
							_this->aabb->maxy = p0->y;
							HX_STACK_LINE(262)
							{
							}
						}
						HX_STACK_LINE(262)
						{
							HX_STACK_LINE(262)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->gverts->next;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(262)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp7->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(262)
							while((true)){
								HX_STACK_LINE(262)
								bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(262)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(262)
								if ((tmp9)){
									HX_STACK_LINE(262)
									break;
								}
								HX_STACK_LINE(262)
								::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(262)
								{
									HX_STACK_LINE(262)
									Float tmp10 = p->x;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(262)
									Float tmp11 = _this->aabb->minx;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(262)
									bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(262)
									if ((tmp12)){
										HX_STACK_LINE(262)
										_this->aabb->minx = p->x;
									}
									HX_STACK_LINE(262)
									Float tmp13 = p->x;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(262)
									Float tmp14 = _this->aabb->maxx;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(262)
									bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(262)
									if ((tmp15)){
										HX_STACK_LINE(262)
										_this->aabb->maxx = p->x;
									}
									HX_STACK_LINE(262)
									Float tmp16 = p->y;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(262)
									Float tmp17 = _this->aabb->miny;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(262)
									bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(262)
									if ((tmp18)){
										HX_STACK_LINE(262)
										_this->aabb->miny = p->y;
									}
									HX_STACK_LINE(262)
									Float tmp19 = p->y;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(262)
									Float tmp20 = _this->aabb->maxy;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(262)
									bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(262)
									if ((tmp21)){
										HX_STACK_LINE(262)
										_this->aabb->maxy = p->y;
									}
								}
								HX_STACK_LINE(262)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			bool tmp1 = s->zip_worldCOM;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(263)
			if ((tmp1)){
				HX_STACK_LINE(263)
				bool tmp2 = (s->body != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(263)
				if ((tmp2)){
					HX_STACK_LINE(263)
					s->zip_worldCOM = false;
					HX_STACK_LINE(263)
					{
						HX_STACK_LINE(263)
						bool tmp3 = s->zip_localCOM;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(263)
						if ((tmp3)){
							HX_STACK_LINE(263)
							s->zip_localCOM = false;
							HX_STACK_LINE(263)
							bool tmp4 = (s->type == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(263)
							if ((tmp4)){
								HX_STACK_LINE(263)
								::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(263)
								::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->lverts->next;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(263)
								bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(263)
								if ((tmp6)){
									HX_STACK_LINE(263)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
								}
								HX_STACK_LINE(263)
								::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->lverts->next;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(263)
								::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7->next;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(263)
								bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(263)
								if ((tmp9)){
									HX_STACK_LINE(263)
									::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(263)
									_this->localCOMx = tmp10->x;
									HX_STACK_LINE(263)
									::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->lverts->next;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(263)
									_this->localCOMy = tmp11->y;
									HX_STACK_LINE(263)
									Dynamic();
								}
								else{
									HX_STACK_LINE(263)
									::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(263)
									::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->next->next;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(263)
									bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(263)
									if ((tmp12)){
										HX_STACK_LINE(263)
										{
											HX_STACK_LINE(263)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(263)
											_this->localCOMx = tmp13->x;
											HX_STACK_LINE(263)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(263)
											_this->localCOMy = tmp14->y;
											HX_STACK_LINE(263)
											{
											}
										}
										HX_STACK_LINE(263)
										{
											HX_STACK_LINE(263)
											Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(263)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(263)
											Float tmp14 = tmp13->next->x;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(263)
											Float tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(263)
											Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(263)
											hx::AddEq(_this->localCOMx,tmp16);
											HX_STACK_LINE(263)
											::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(263)
											Float tmp18 = tmp17->next->y;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(263)
											Float tmp19 = t;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(263)
											Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(263)
											hx::AddEq(_this->localCOMy,tmp20);
										}
										HX_STACK_LINE(263)
										{
											HX_STACK_LINE(263)
											Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(263)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(263)
											hx::MultEq(_this->localCOMy,t);
										}
									}
									else{
										HX_STACK_LINE(263)
										{
											HX_STACK_LINE(263)
											_this->localCOMx = (int)0;
											HX_STACK_LINE(263)
											_this->localCOMy = (int)0;
											HX_STACK_LINE(263)
											{
											}
										}
										HX_STACK_LINE(263)
										Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
										HX_STACK_LINE(263)
										{
											HX_STACK_LINE(263)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(263)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(263)
											::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
											HX_STACK_LINE(263)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(263)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(263)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(263)
											while((true)){
												HX_STACK_LINE(263)
												bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(263)
												bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(263)
												if ((tmp15)){
													HX_STACK_LINE(263)
													break;
												}
												HX_STACK_LINE(263)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(263)
												{
													HX_STACK_LINE(263)
													Float tmp16 = v->x;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(263)
													Float tmp17 = (w->y - u->y);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(263)
													Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(263)
													hx::AddEq(area,tmp18);
													HX_STACK_LINE(263)
													Float tmp19 = (w->y * v->x);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(263)
													Float tmp20 = (w->x * v->y);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(263)
													Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(263)
													Float cf = tmp21;		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(263)
													Float tmp22 = (v->x + w->x);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(263)
													Float tmp23 = cf;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(263)
													Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(263)
													hx::AddEq(_this->localCOMx,tmp24);
													HX_STACK_LINE(263)
													Float tmp25 = (v->y + w->y);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(263)
													Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(263)
													Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(263)
													hx::AddEq(_this->localCOMy,tmp27);
												}
												HX_STACK_LINE(263)
												u = v;
												HX_STACK_LINE(263)
												v = w;
												HX_STACK_LINE(263)
												cx_ite = cx_ite->next;
											}
											HX_STACK_LINE(263)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(263)
											cx_ite = tmp14;
											HX_STACK_LINE(263)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(263)
											{
												HX_STACK_LINE(263)
												Float tmp15 = v->x;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(263)
												Float tmp16 = (w->y - u->y);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(263)
												Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(263)
												hx::AddEq(area,tmp17);
												HX_STACK_LINE(263)
												Float tmp18 = (w->y * v->x);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(263)
												Float tmp19 = (w->x * v->y);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(263)
												Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(263)
												Float cf = tmp20;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(263)
												Float tmp21 = (v->x + w->x);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(263)
												Float tmp22 = cf;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(263)
												Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(263)
												hx::AddEq(_this->localCOMx,tmp23);
												HX_STACK_LINE(263)
												Float tmp24 = (v->y + w->y);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(263)
												Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(263)
												Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(263)
												hx::AddEq(_this->localCOMy,tmp26);
											}
											HX_STACK_LINE(263)
											u = v;
											HX_STACK_LINE(263)
											v = w;
											HX_STACK_LINE(263)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(263)
											::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
											HX_STACK_LINE(263)
											{
												HX_STACK_LINE(263)
												Float tmp15 = v->x;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(263)
												Float tmp16 = (w1->y - u->y);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(263)
												Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(263)
												hx::AddEq(area,tmp17);
												HX_STACK_LINE(263)
												Float tmp18 = (w1->y * v->x);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(263)
												Float tmp19 = (w1->x * v->y);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(263)
												Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(263)
												Float cf = tmp20;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(263)
												Float tmp21 = (v->x + w1->x);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(263)
												Float tmp22 = cf;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(263)
												Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(263)
												hx::AddEq(_this->localCOMx,tmp23);
												HX_STACK_LINE(263)
												Float tmp24 = (v->y + w1->y);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(263)
												Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(263)
												Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(263)
												hx::AddEq(_this->localCOMy,tmp26);
											}
										}
										HX_STACK_LINE(263)
										Float tmp13 = ((int)3 * area);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(263)
										Float tmp14 = (Float((int)1) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(263)
										area = tmp14;
										HX_STACK_LINE(263)
										{
											HX_STACK_LINE(263)
											Float t = area;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(263)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(263)
											hx::MultEq(_this->localCOMy,t);
										}
									}
								}
							}
							HX_STACK_LINE(263)
							bool tmp5 = (s->wrap_localCOM != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(263)
							if ((tmp5)){
								HX_STACK_LINE(263)
								::zpp_nape::geom::ZPP_Vec2 tmp6 = s->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(263)
								tmp6->x = s->localCOMx;
								HX_STACK_LINE(263)
								::zpp_nape::geom::ZPP_Vec2 tmp7 = s->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(263)
								tmp7->y = s->localCOMy;
								HX_STACK_LINE(263)
								{
								}
							}
						}
					}
					HX_STACK_LINE(263)
					{
						HX_STACK_LINE(263)
						::zpp_nape::phys::ZPP_Body _this = s->body;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(263)
						bool tmp3 = _this->zip_axis;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(263)
						if ((tmp3)){
							HX_STACK_LINE(263)
							_this->zip_axis = false;
							HX_STACK_LINE(263)
							{
								HX_STACK_LINE(263)
								Float tmp4 = _this->rot;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(263)
								Float tmp5 = ::Math_obj::sin(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(263)
								_this->axisx = tmp5;
								HX_STACK_LINE(263)
								Float tmp6 = _this->rot;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(263)
								Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(263)
								_this->axisy = tmp7;
								HX_STACK_LINE(263)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(263)
					{
						HX_STACK_LINE(263)
						Float tmp3 = s->body->posx;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(263)
						Float tmp4 = s->body->axisy;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(263)
						Float tmp5 = s->localCOMx;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(263)
						Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(263)
						Float tmp7 = s->body->axisx;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(263)
						Float tmp8 = s->localCOMy;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(263)
						Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(263)
						Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(263)
						Float tmp11 = (tmp3 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(263)
						s->worldCOMx = tmp11;
						HX_STACK_LINE(263)
						Float tmp12 = s->body->posy;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(263)
						Float tmp13 = s->localCOMx;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(263)
						Float tmp14 = s->body->axisx;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(263)
						Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(263)
						Float tmp16 = s->localCOMy;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(263)
						Float tmp17 = s->body->axisy;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(263)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(263)
						Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(263)
						Float tmp20 = (tmp12 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(263)
						s->worldCOMy = tmp20;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Broadphase_obj,validateShape,(void))

::nape::shape::ShapeList ZPP_Broadphase_obj::shapesInShape( ::zpp_nape::shape::ZPP_Shape shape,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","shapesInShape",0xe5d3e9c3,"zpp_nape.space.ZPP_Broadphase.shapesInShape","zpp_nape/space/Broadphase.hx",266,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(266)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_Broadphase_obj,shapesInShape,return )

::nape::phys::BodyList ZPP_Broadphase_obj::bodiesInShape( ::zpp_nape::shape::ZPP_Shape shape,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","bodiesInShape",0x50d98e35,"zpp_nape.space.ZPP_Broadphase.bodiesInShape","zpp_nape/space/Broadphase.hx",269,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(269)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_Broadphase_obj,bodiesInShape,return )

::nape::geom::RayResult ZPP_Broadphase_obj::rayCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","rayCast",0x113d1de2,"zpp_nape.space.ZPP_Broadphase.rayCast","zpp_nape/space/Broadphase.hx",272,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(272)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Broadphase_obj,rayCast,return )

::nape::geom::RayResultList ZPP_Broadphase_obj::rayMultiCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::geom::RayResultList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Broadphase","rayMultiCast",0x3bb047d5,"zpp_nape.space.ZPP_Broadphase.rayMultiCast","zpp_nape/space/Broadphase.hx",275,0xcf31b77a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(275)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_Broadphase_obj,rayMultiCast,return )


ZPP_Broadphase_obj::ZPP_Broadphase_obj()
{
}

void ZPP_Broadphase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Broadphase);
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(is_sweep,"is_sweep");
	HX_MARK_MEMBER_NAME(sweep,"sweep");
	HX_MARK_MEMBER_NAME(dynab,"dynab");
	HX_MARK_MEMBER_NAME(aabbShape,"aabbShape");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(circShape,"circShape");
	HX_MARK_END_CLASS();
}

void ZPP_Broadphase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(is_sweep,"is_sweep");
	HX_VISIT_MEMBER_NAME(sweep,"sweep");
	HX_VISIT_MEMBER_NAME(dynab,"dynab");
	HX_VISIT_MEMBER_NAME(aabbShape,"aabbShape");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(circShape,"circShape");
}

Dynamic ZPP_Broadphase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { return sync_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"sweep") ) { return sweep; }
		if (HX_FIELD_EQ(inName,"dynab") ) { return dynab; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"is_sweep") ) { return is_sweep; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aabbShape") ) { return aabbShape; }
		if (HX_FIELD_EQ(inName,"circShape") ) { return circShape; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"broadphase") ) { return broadphase_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shapesInAABB") ) { return shapesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInAABB") ) { return bodiesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"rayMultiCast") ) { return rayMultiCast_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"validateShape") ) { return validateShape_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInShape") ) { return shapesInShape_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInShape") ) { return bodiesInShape_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shapesInCircle") ) { return shapesInCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInCircle") ) { return bodiesInCircle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateAABBShape") ) { return updateAABBShape_dyn(); }
		if (HX_FIELD_EQ(inName,"updateCircShape") ) { return updateCircShape_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"shapesUnderPoint") ) { return shapesUnderPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesUnderPoint") ) { return bodiesUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Broadphase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweep") ) { sweep=inValue.Cast< ::zpp_nape::space::ZPP_SweepPhase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dynab") ) { dynab=inValue.Cast< ::zpp_nape::space::ZPP_DynAABBPhase >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::nape::geom::Mat23 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"is_sweep") ) { is_sweep=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aabbShape") ) { aabbShape=inValue.Cast< ::nape::shape::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"circShape") ) { circShape=inValue.Cast< ::nape::shape::Shape >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Broadphase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	outFields->push(HX_HCSTRING("is_sweep","\x97","\x84","\xc6","\xa5"));
	outFields->push(HX_HCSTRING("sweep","\xec","\x15","\x0a","\x86"));
	outFields->push(HX_HCSTRING("dynab","\x5a","\xa0","\x60","\xe4"));
	outFields->push(HX_HCSTRING("aabbShape","\x61","\x2c","\x11","\xc3"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("circShape","\xca","\x57","\x3a","\x32"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_Broadphase_obj,space),HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{hx::fsBool,(int)offsetof(ZPP_Broadphase_obj,is_sweep),HX_HCSTRING("is_sweep","\x97","\x84","\xc6","\xa5")},
	{hx::fsObject /*::zpp_nape::space::ZPP_SweepPhase*/ ,(int)offsetof(ZPP_Broadphase_obj,sweep),HX_HCSTRING("sweep","\xec","\x15","\x0a","\x86")},
	{hx::fsObject /*::zpp_nape::space::ZPP_DynAABBPhase*/ ,(int)offsetof(ZPP_Broadphase_obj,dynab),HX_HCSTRING("dynab","\x5a","\xa0","\x60","\xe4")},
	{hx::fsObject /*::nape::shape::Shape*/ ,(int)offsetof(ZPP_Broadphase_obj,aabbShape),HX_HCSTRING("aabbShape","\x61","\x2c","\x11","\xc3")},
	{hx::fsObject /*::nape::geom::Mat23*/ ,(int)offsetof(ZPP_Broadphase_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::nape::shape::Shape*/ ,(int)offsetof(ZPP_Broadphase_obj,circShape),HX_HCSTRING("circShape","\xca","\x57","\x3a","\x32")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("is_sweep","\x97","\x84","\xc6","\xa5"),
	HX_HCSTRING("sweep","\xec","\x15","\x0a","\x86"),
	HX_HCSTRING("dynab","\x5a","\xa0","\x60","\xe4"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("sync","\x5b","\xba","\x5f","\x4c"),
	HX_HCSTRING("broadphase","\xb9","\x5d","\x1d","\xd8"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("shapesUnderPoint","\xea","\xec","\xbc","\x47"),
	HX_HCSTRING("bodiesUnderPoint","\xb8","\x1b","\x30","\x80"),
	HX_HCSTRING("aabbShape","\x61","\x2c","\x11","\xc3"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("updateAABBShape","\x38","\x55","\x33","\xee"),
	HX_HCSTRING("shapesInAABB","\xd7","\x1c","\x84","\xf9"),
	HX_HCSTRING("bodiesInAABB","\xa5","\x4c","\x28","\x9e"),
	HX_HCSTRING("circShape","\xca","\x57","\x3a","\x32"),
	HX_HCSTRING("updateCircShape","\x81","\x28","\xc5","\x81"),
	HX_HCSTRING("shapesInCircle","\x27","\xd4","\xf7","\x6c"),
	HX_HCSTRING("bodiesInCircle","\x75","\x13","\xe2","\xa6"),
	HX_HCSTRING("validateShape","\xab","\xa2","\x1c","\xa8"),
	HX_HCSTRING("shapesInShape","\xea","\x90","\x2a","\xd1"),
	HX_HCSTRING("bodiesInShape","\x5c","\x35","\x30","\x3c"),
	HX_HCSTRING("rayCast","\xc9","\x5d","\x3c","\x25"),
	HX_HCSTRING("rayMultiCast","\x8e","\x02","\x7d","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Broadphase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Broadphase_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_Broadphase_obj::__mClass;

void ZPP_Broadphase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.space.ZPP_Broadphase","\x87","\xdf","\x2a","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Broadphase_obj >;
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

} // end namespace zpp_nape
} // end namespace space
