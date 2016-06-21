#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SweepDistance
#include <zpp_nape/geom/ZPP_SweepDistance.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SweepDistance_obj::__construct()
{
	return null();
}

//ZPP_SweepDistance_obj::~ZPP_SweepDistance_obj() { }

Dynamic ZPP_SweepDistance_obj::__CreateEmpty() { return  new ZPP_SweepDistance_obj; }
hx::ObjectPtr< ZPP_SweepDistance_obj > ZPP_SweepDistance_obj::__new()
{  hx::ObjectPtr< ZPP_SweepDistance_obj > _result_ = new ZPP_SweepDistance_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_SweepDistance_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SweepDistance_obj > _result_ = new ZPP_SweepDistance_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_SweepDistance_obj::dynamicSweep( ::zpp_nape::geom::ZPP_ToiEvent toi,Float timeStep,Float lowerBound,Float negRadius,hx::Null< bool >  __o_userAPI){
bool userAPI = __o_userAPI.Default(false);
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SweepDistance","dynamicSweep",0x731dabf0,"zpp_nape.geom.ZPP_SweepDistance.dynamicSweep","zpp_nape/geom/SweepDistance.hx",230,0x2645f2ee)
	HX_STACK_ARG(toi,"toi")
	HX_STACK_ARG(timeStep,"timeStep")
	HX_STACK_ARG(lowerBound,"lowerBound")
	HX_STACK_ARG(negRadius,"negRadius")
	HX_STACK_ARG(userAPI,"userAPI")
{
		HX_STACK_LINE(231)
		::zpp_nape::shape::ZPP_Shape s1 = toi->s1;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(232)
		::zpp_nape::shape::ZPP_Shape s2 = toi->s2;		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(233)
		::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(234)
		::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(235)
		Float deltax = ((Float)0.0);		HX_STACK_VAR(deltax,"deltax");
		HX_STACK_LINE(236)
		Float deltay = ((Float)0.0);		HX_STACK_VAR(deltay,"deltay");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(238)
			Float tmp = (b2->velx - b1->velx);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(238)
			deltax = tmp;
			HX_STACK_LINE(239)
			Float tmp1 = (b2->vely - b1->vely);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(239)
			deltay = tmp1;
		}
		HX_STACK_LINE(241)
		Float ang1 = b1->angvel;		HX_STACK_VAR(ang1,"ang1");
		HX_STACK_LINE(242)
		bool tmp = (ang1 < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		if ((tmp)){
			HX_STACK_LINE(242)
			Float tmp1 = ang1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(242)
			Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(242)
			ang1 = tmp2;
		}
		HX_STACK_LINE(243)
		Float ang2 = b2->angvel;		HX_STACK_VAR(ang2,"ang2");
		HX_STACK_LINE(244)
		bool tmp1 = (ang2 < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		if ((tmp1)){
			HX_STACK_LINE(244)
			Float tmp2 = ang2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(244)
			Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(244)
			ang2 = tmp3;
		}
		HX_STACK_LINE(245)
		Float tmp2 = (s1->sweepCoef * ang1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		Float tmp3 = (s2->sweepCoef * ang2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(245)
		Float angBias = tmp4;		HX_STACK_VAR(angBias,"angBias");
		HX_STACK_LINE(246)
		bool tmp5 = userAPI;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(246)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(246)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(246)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(246)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(246)
		if ((tmp8)){
			HX_STACK_LINE(246)
			bool tmp10 = toi->kinematic;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(246)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(246)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(246)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(246)
			tmp9 = false;
		}
		HX_STACK_LINE(246)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(246)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(246)
		if ((tmp10)){
			HX_STACK_LINE(246)
			Float tmp12 = (deltax * deltax);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(246)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(246)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(246)
			Float tmp15 = (deltay * deltay);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(246)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(246)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(246)
			Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(246)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(246)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(246)
			Float tmp21 = ::nape::Config_obj::dynamicSweepLinearThreshold;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(246)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(246)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(246)
			Float tmp24 = ::nape::Config_obj::dynamicSweepLinearThreshold;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(246)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(246)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(246)
			Float tmp27 = (tmp23 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(246)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(246)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(246)
			tmp11 = (tmp20 < tmp29);
		}
		else{
			HX_STACK_LINE(246)
			tmp11 = false;
		}
		HX_STACK_LINE(246)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(246)
		if ((tmp11)){
			HX_STACK_LINE(246)
			Float tmp13 = angBias;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(246)
			Float tmp14 = ::nape::Config_obj::dynamicSweepAngularThreshold;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(246)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(246)
			tmp12 = (tmp13 < tmp15);
		}
		else{
			HX_STACK_LINE(246)
			tmp12 = false;
		}
		HX_STACK_LINE(246)
		if ((tmp12)){
			HX_STACK_LINE(247)
			toi->toi = (int)-1;
			HX_STACK_LINE(248)
			toi->failed = true;
			HX_STACK_LINE(249)
			return null();
		}
		HX_STACK_LINE(251)
		::zpp_nape::geom::ZPP_Vec2 c1 = toi->c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(252)
		::zpp_nape::geom::ZPP_Vec2 c2 = toi->c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(253)
		::zpp_nape::geom::ZPP_Vec2 axis = toi->axis;		HX_STACK_VAR(axis,"axis");
		HX_STACK_LINE(254)
		Float curTOI = lowerBound;		HX_STACK_VAR(curTOI,"curTOI");
		HX_STACK_LINE(255)
		int curIter = (int)0;		HX_STACK_VAR(curIter,"curIter");
		HX_STACK_LINE(256)
		while((true)){
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				Float tmp13 = (curTOI * timeStep);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(257)
				Float dt = tmp13;		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(257)
				Float tmp14 = (dt - b1->sweepTime);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(257)
				Float delta = tmp14;		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(257)
				bool tmp15 = (delta != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(257)
				if ((tmp15)){
					HX_STACK_LINE(257)
					b1->sweepTime = dt;
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						Float t = delta;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(257)
						Float tmp16 = (b1->velx * t);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(257)
						hx::AddEq(b1->posx,tmp16);
						HX_STACK_LINE(257)
						Float tmp17 = (b1->vely * t);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(257)
						hx::AddEq(b1->posy,tmp17);
					}
					HX_STACK_LINE(257)
					bool tmp16 = (b1->angvel != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(257)
					if ((tmp16)){
						HX_STACK_LINE(257)
						Float tmp17 = (b1->sweep_angvel * delta);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(257)
						Float dr = tmp17;		HX_STACK_VAR(dr,"dr");
						HX_STACK_LINE(257)
						hx::AddEq(b1->rot,dr);
						HX_STACK_LINE(257)
						Float tmp18 = (dr * dr);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(257)
						bool tmp19 = (tmp18 > ((Float)0.0001));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(257)
						if ((tmp19)){
							HX_STACK_LINE(257)
							Float tmp20 = b1->rot;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(257)
							Float tmp21 = ::Math_obj::sin(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(257)
							b1->axisx = tmp21;
							HX_STACK_LINE(257)
							Float tmp22 = b1->rot;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(257)
							Float tmp23 = ::Math_obj::cos(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(257)
							b1->axisy = tmp23;
							HX_STACK_LINE(257)
							Dynamic();
						}
						else{
							HX_STACK_LINE(257)
							Float tmp20 = (dr * dr);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(257)
							Float d2 = tmp20;		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(257)
							Float tmp21 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(257)
							Float tmp22 = ((int)1 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(257)
							Float p = tmp22;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(257)
							Float tmp23 = (d2 * d2);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(257)
							Float tmp24 = (Float(tmp23) / Float((int)8));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(257)
							Float tmp25 = ((int)1 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(257)
							Float m = tmp25;		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(257)
							Float tmp26 = (p * b1->axisx);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(257)
							Float tmp27 = (dr * b1->axisy);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(257)
							Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(257)
							Float tmp29 = m;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(257)
							Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(257)
							Float nx = tmp30;		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(257)
							Float tmp31 = (p * b1->axisy);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(257)
							Float tmp32 = (dr * b1->axisx);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(257)
							Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(257)
							Float tmp34 = m;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(257)
							Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(257)
							b1->axisy = tmp35;
							HX_STACK_LINE(257)
							b1->axisx = nx;
						}
					}
				}
			}
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				bool tmp13 = (s1->type == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(258)
				if ((tmp13)){
					HX_STACK_LINE(258)
					Float tmp14 = b1->posx;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(258)
					Float tmp15 = (b1->axisy * s1->localCOMx);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(258)
					Float tmp16 = (b1->axisx * s1->localCOMy);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(258)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(258)
					Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(258)
					s1->worldCOMx = tmp18;
					HX_STACK_LINE(258)
					Float tmp19 = b1->posy;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(258)
					Float tmp20 = (s1->localCOMx * b1->axisx);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(258)
					Float tmp21 = (s1->localCOMy * b1->axisy);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(258)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(258)
					Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(258)
					s1->worldCOMy = tmp23;
				}
				else{
					HX_STACK_LINE(258)
					::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = p->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 li = tmp14;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 tmp15 = p->gverts->next;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp15;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(258)
						while((true)){
							HX_STACK_LINE(258)
							bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(258)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(258)
							if ((tmp17)){
								HX_STACK_LINE(258)
								break;
							}
							HX_STACK_LINE(258)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(258)
								li = li->next;
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									Float tmp18 = b1->posx;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(258)
									Float tmp19 = (b1->axisy * l->x);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(258)
									Float tmp20 = (b1->axisx * l->y);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(258)
									Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(258)
									Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(258)
									g->x = tmp22;
									HX_STACK_LINE(258)
									Float tmp23 = b1->posy;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(258)
									Float tmp24 = (l->x * b1->axisx);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(258)
									Float tmp25 = (l->y * b1->axisy);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(258)
									Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(258)
									Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(258)
									g->y = tmp27;
								}
							}
							HX_STACK_LINE(258)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp15 = p->edges->head;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp15;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 tmp16 = p->gverts->next;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(258)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(258)
						while((true)){
							HX_STACK_LINE(258)
							bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(258)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(258)
							if ((tmp18)){
								HX_STACK_LINE(258)
								break;
							}
							HX_STACK_LINE(258)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(258)
								ite = ite->next;
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									Float tmp19 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(258)
									Float tmp20 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(258)
									Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(258)
									e->gnormx = tmp21;
									HX_STACK_LINE(258)
									Float tmp22 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(258)
									Float tmp23 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(258)
									Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(258)
									e->gnormy = tmp24;
								}
								HX_STACK_LINE(258)
								Float tmp19 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(258)
								Float tmp20 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(258)
								Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(258)
								Float tmp22 = e->lprojection;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(258)
								Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(258)
								e->gprojection = tmp23;
								HX_STACK_LINE(258)
								Float tmp24 = (u->y * e->gnormx);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(258)
								Float tmp25 = (u->x * e->gnormy);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(258)
								Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(258)
								e->tp0 = tmp26;
								HX_STACK_LINE(258)
								Float tmp27 = (v->y * e->gnormx);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(258)
								Float tmp28 = (v->x * e->gnormy);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(258)
								Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(258)
								e->tp1 = tmp29;
							}
							HX_STACK_LINE(258)
							u = v;
							HX_STACK_LINE(258)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 tmp17 = p->gverts->next;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 v = tmp17;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(258)
							ite = ite->next;
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								Float tmp18 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(258)
								Float tmp19 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(258)
								Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(258)
								e->gnormx = tmp20;
								HX_STACK_LINE(258)
								Float tmp21 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(258)
								Float tmp22 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(258)
								Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(258)
								e->gnormy = tmp23;
							}
							HX_STACK_LINE(258)
							Float tmp18 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(258)
							Float tmp19 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(258)
							Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(258)
							Float tmp21 = e->lprojection;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(258)
							Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(258)
							e->gprojection = tmp22;
							HX_STACK_LINE(258)
							Float tmp23 = (u->y * e->gnormx);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(258)
							Float tmp24 = (u->x * e->gnormy);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(258)
							Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(258)
							e->tp0 = tmp25;
							HX_STACK_LINE(258)
							Float tmp26 = (v->y * e->gnormx);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(258)
							Float tmp27 = (v->x * e->gnormy);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(258)
							Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(258)
							e->tp1 = tmp28;
						}
					}
				}
			}
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				Float tmp13 = (curTOI * timeStep);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(259)
				Float dt = tmp13;		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(259)
				Float tmp14 = (dt - b2->sweepTime);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(259)
				Float delta = tmp14;		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(259)
				bool tmp15 = (delta != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(259)
				if ((tmp15)){
					HX_STACK_LINE(259)
					b2->sweepTime = dt;
					HX_STACK_LINE(259)
					{
						HX_STACK_LINE(259)
						Float t = delta;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(259)
						Float tmp16 = (b2->velx * t);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(259)
						hx::AddEq(b2->posx,tmp16);
						HX_STACK_LINE(259)
						Float tmp17 = (b2->vely * t);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(259)
						hx::AddEq(b2->posy,tmp17);
					}
					HX_STACK_LINE(259)
					bool tmp16 = (b2->angvel != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(259)
					if ((tmp16)){
						HX_STACK_LINE(259)
						Float tmp17 = (b2->sweep_angvel * delta);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(259)
						Float dr = tmp17;		HX_STACK_VAR(dr,"dr");
						HX_STACK_LINE(259)
						hx::AddEq(b2->rot,dr);
						HX_STACK_LINE(259)
						Float tmp18 = (dr * dr);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(259)
						bool tmp19 = (tmp18 > ((Float)0.0001));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(259)
						if ((tmp19)){
							HX_STACK_LINE(259)
							Float tmp20 = b2->rot;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(259)
							Float tmp21 = ::Math_obj::sin(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(259)
							b2->axisx = tmp21;
							HX_STACK_LINE(259)
							Float tmp22 = b2->rot;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(259)
							Float tmp23 = ::Math_obj::cos(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(259)
							b2->axisy = tmp23;
							HX_STACK_LINE(259)
							Dynamic();
						}
						else{
							HX_STACK_LINE(259)
							Float tmp20 = (dr * dr);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(259)
							Float d2 = tmp20;		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(259)
							Float tmp21 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(259)
							Float tmp22 = ((int)1 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(259)
							Float p = tmp22;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(259)
							Float tmp23 = (d2 * d2);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(259)
							Float tmp24 = (Float(tmp23) / Float((int)8));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(259)
							Float tmp25 = ((int)1 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(259)
							Float m = tmp25;		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(259)
							Float tmp26 = (p * b2->axisx);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(259)
							Float tmp27 = (dr * b2->axisy);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(259)
							Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(259)
							Float tmp29 = m;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(259)
							Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(259)
							Float nx = tmp30;		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(259)
							Float tmp31 = (p * b2->axisy);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(259)
							Float tmp32 = (dr * b2->axisx);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(259)
							Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(259)
							Float tmp34 = m;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(259)
							Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(259)
							b2->axisy = tmp35;
							HX_STACK_LINE(259)
							b2->axisx = nx;
						}
					}
				}
			}
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(260)
				bool tmp13 = (s2->type == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(260)
				if ((tmp13)){
					HX_STACK_LINE(260)
					Float tmp14 = b2->posx;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(260)
					Float tmp15 = (b2->axisy * s2->localCOMx);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(260)
					Float tmp16 = (b2->axisx * s2->localCOMy);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(260)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(260)
					Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(260)
					s2->worldCOMx = tmp18;
					HX_STACK_LINE(260)
					Float tmp19 = b2->posy;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(260)
					Float tmp20 = (s2->localCOMx * b2->axisx);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(260)
					Float tmp21 = (s2->localCOMy * b2->axisy);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(260)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(260)
					Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(260)
					s2->worldCOMy = tmp23;
				}
				else{
					HX_STACK_LINE(260)
					::zpp_nape::shape::ZPP_Polygon p = s2->polygon;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(260)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = p->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(260)
					::zpp_nape::geom::ZPP_Vec2 li = tmp14;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 tmp15 = p->gverts->next;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp15;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(260)
						while((true)){
							HX_STACK_LINE(260)
							bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(260)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(260)
							if ((tmp17)){
								HX_STACK_LINE(260)
								break;
							}
							HX_STACK_LINE(260)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(260)
								li = li->next;
								HX_STACK_LINE(260)
								{
									HX_STACK_LINE(260)
									Float tmp18 = b2->posx;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(260)
									Float tmp19 = (b2->axisy * l->x);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(260)
									Float tmp20 = (b2->axisx * l->y);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(260)
									Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(260)
									Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(260)
									g->x = tmp22;
									HX_STACK_LINE(260)
									Float tmp23 = b2->posy;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(260)
									Float tmp24 = (l->x * b2->axisx);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(260)
									Float tmp25 = (l->y * b2->axisy);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(260)
									Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(260)
									Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(260)
									g->y = tmp27;
								}
							}
							HX_STACK_LINE(260)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(260)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp15 = p->edges->head;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(260)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp15;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 tmp16 = p->gverts->next;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(260)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(260)
						while((true)){
							HX_STACK_LINE(260)
							bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(260)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(260)
							if ((tmp18)){
								HX_STACK_LINE(260)
								break;
							}
							HX_STACK_LINE(260)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(260)
								ite = ite->next;
								HX_STACK_LINE(260)
								{
									HX_STACK_LINE(260)
									Float tmp19 = (b2->axisy * e->lnormx);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(260)
									Float tmp20 = (b2->axisx * e->lnormy);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(260)
									Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(260)
									e->gnormx = tmp21;
									HX_STACK_LINE(260)
									Float tmp22 = (e->lnormx * b2->axisx);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(260)
									Float tmp23 = (e->lnormy * b2->axisy);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(260)
									Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(260)
									e->gnormy = tmp24;
								}
								HX_STACK_LINE(260)
								Float tmp19 = (b2->posx * e->gnormx);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(260)
								Float tmp20 = (b2->posy * e->gnormy);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(260)
								Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(260)
								Float tmp22 = e->lprojection;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(260)
								Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(260)
								e->gprojection = tmp23;
								HX_STACK_LINE(260)
								Float tmp24 = (u->y * e->gnormx);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(260)
								Float tmp25 = (u->x * e->gnormy);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(260)
								Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(260)
								e->tp0 = tmp26;
								HX_STACK_LINE(260)
								Float tmp27 = (v->y * e->gnormx);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(260)
								Float tmp28 = (v->x * e->gnormy);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(260)
								Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(260)
								e->tp1 = tmp29;
							}
							HX_STACK_LINE(260)
							u = v;
							HX_STACK_LINE(260)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 tmp17 = p->gverts->next;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 v = tmp17;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(260)
							ite = ite->next;
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								Float tmp18 = (b2->axisy * e->lnormx);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(260)
								Float tmp19 = (b2->axisx * e->lnormy);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(260)
								Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(260)
								e->gnormx = tmp20;
								HX_STACK_LINE(260)
								Float tmp21 = (e->lnormx * b2->axisx);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(260)
								Float tmp22 = (e->lnormy * b2->axisy);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(260)
								Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(260)
								e->gnormy = tmp23;
							}
							HX_STACK_LINE(260)
							Float tmp18 = (b2->posx * e->gnormx);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(260)
							Float tmp19 = (b2->posy * e->gnormy);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(260)
							Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(260)
							Float tmp21 = e->lprojection;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(260)
							Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(260)
							e->gprojection = tmp22;
							HX_STACK_LINE(260)
							Float tmp23 = (u->y * e->gnormx);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(260)
							Float tmp24 = (u->x * e->gnormy);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(260)
							Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(260)
							e->tp0 = tmp25;
							HX_STACK_LINE(260)
							Float tmp26 = (v->y * e->gnormx);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(260)
							Float tmp27 = (v->x * e->gnormy);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(260)
							Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(260)
							e->tp1 = tmp28;
						}
					}
				}
			}
			HX_STACK_LINE(261)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
				HX_STACK_LINE(261)
				::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
				HX_STACK_LINE(261)
				::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(261)
				::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
				HX_STACK_LINE(261)
				Float upperBound = ((Float)1e100);		HX_STACK_VAR(upperBound,"upperBound");
				HX_STACK_LINE(261)
				bool tmp14 = (s11->type == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(261)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(261)
				if ((tmp14)){
					HX_STACK_LINE(261)
					tmp15 = (s21->type == (int)0);
				}
				else{
					HX_STACK_LINE(261)
					tmp15 = false;
				}
				HX_STACK_LINE(261)
				if ((tmp15)){
					HX_STACK_LINE(261)
					::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
					HX_STACK_LINE(261)
					::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
					HX_STACK_LINE(261)
					Float dist;		HX_STACK_VAR(dist,"dist");
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
						HX_STACK_LINE(261)
						Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							Float tmp16 = (c21->worldCOMx - c11->worldCOMx);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(261)
							nx = tmp16;
							HX_STACK_LINE(261)
							Float tmp17 = (c21->worldCOMy - c11->worldCOMy);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(261)
							ny = tmp17;
						}
						HX_STACK_LINE(261)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							Float tmp17 = (nx * nx);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(261)
							Float tmp18 = (ny * ny);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(261)
							Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(261)
							tmp16 = ::Math_obj::sqrt(tmp19);
						}
						HX_STACK_LINE(261)
						Float len = tmp16;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(261)
						Float tmp17 = len;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(261)
						Float tmp18 = (c11->radius + c21->radius);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(261)
						Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(261)
						dist = tmp19;
						HX_STACK_LINE(261)
						bool tmp20 = (dist < upperBound);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(261)
						if ((tmp20)){
							HX_STACK_LINE(261)
							bool tmp21 = (len == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(261)
							if ((tmp21)){
								HX_STACK_LINE(261)
								nx = (int)1;
								HX_STACK_LINE(261)
								ny = (int)0;
								HX_STACK_LINE(261)
								{
								}
							}
							else{
								HX_STACK_LINE(261)
								Float tmp22 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(261)
								Float t = tmp22;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(261)
								hx::MultEq(nx,t);
								HX_STACK_LINE(261)
								hx::MultEq(ny,t);
							}
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								Float t = c11->radius;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(261)
								Float tmp22 = c11->worldCOMx;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(261)
								Float tmp23 = (nx * t);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(261)
								Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(261)
								w1->x = tmp24;
								HX_STACK_LINE(261)
								Float tmp25 = c11->worldCOMy;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(261)
								Float tmp26 = (ny * t);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(261)
								Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(261)
								w1->y = tmp27;
							}
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								Float tmp22 = c21->radius;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(261)
								Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(261)
								Float t = tmp23;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(261)
								Float tmp24 = c21->worldCOMx;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(261)
								Float tmp25 = (nx * t);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(261)
								Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(261)
								w2->x = tmp26;
								HX_STACK_LINE(261)
								Float tmp27 = c21->worldCOMy;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(261)
								Float tmp28 = (ny * t);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(261)
								Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(261)
								w2->y = tmp29;
							}
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								axis->x = nx;
								HX_STACK_LINE(261)
								axis->y = ny;
								HX_STACK_LINE(261)
								{
								}
							}
						}
					}
					HX_STACK_LINE(261)
					tmp13 = dist;
				}
				else{
					HX_STACK_LINE(261)
					bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
					HX_STACK_LINE(261)
					bool tmp16 = (s11->type == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(261)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(261)
					if ((tmp16)){
						HX_STACK_LINE(261)
						tmp17 = (s21->type == (int)1);
					}
					else{
						HX_STACK_LINE(261)
						tmp17 = false;
					}
					HX_STACK_LINE(261)
					if ((tmp17)){
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Shape tmp18 = s11;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(261)
						s11 = s21;
						HX_STACK_LINE(261)
						s21 = tmp18;
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2 tmp21 = w1;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(261)
						w1 = w2;
						HX_STACK_LINE(261)
						w2 = tmp21;
						HX_STACK_LINE(261)
						swapped = true;
					}
					HX_STACK_LINE(261)
					bool tmp18 = (s11->type == (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(261)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(261)
					if ((tmp18)){
						HX_STACK_LINE(261)
						tmp19 = (s21->type == (int)0);
					}
					else{
						HX_STACK_LINE(261)
						tmp19 = false;
					}
					HX_STACK_LINE(261)
					if ((tmp19)){
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
						HX_STACK_LINE(261)
						Float tmp20 = ((Float)-1e+100);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(261)
						Float best = tmp20;		HX_STACK_VAR(best,"best");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							::zpp_nape::util::ZNPNode_ZPP_Edge tmp21 = poly->edges->head;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(261)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp21;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(261)
							while((true)){
								HX_STACK_LINE(261)
								bool tmp22 = (cx_ite != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(261)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(261)
								if ((tmp23)){
									HX_STACK_LINE(261)
									break;
								}
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									Float tmp24 = (a->gnormx * circle->worldCOMx);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(261)
									Float tmp25 = (a->gnormy * circle->worldCOMy);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(261)
									Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(261)
									Float tmp27 = a->gprojection;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(261)
									Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(261)
									Float tmp29 = circle->radius;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(261)
									Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(261)
									Float dist = tmp30;		HX_STACK_VAR(dist,"dist");
									HX_STACK_LINE(261)
									bool tmp31 = (dist > upperBound);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(261)
									if ((tmp31)){
										HX_STACK_LINE(261)
										best = dist;
										HX_STACK_LINE(261)
										break;
									}
									HX_STACK_LINE(261)
									bool tmp32 = (dist > (int)0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(261)
									if ((tmp32)){
										HX_STACK_LINE(261)
										bool tmp33 = (dist > best);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(261)
										if ((tmp33)){
											HX_STACK_LINE(261)
											best = dist;
											HX_STACK_LINE(261)
											a0 = a;
										}
									}
									else{
										HX_STACK_LINE(261)
										bool tmp33 = (best < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(261)
										bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(261)
										if ((tmp33)){
											HX_STACK_LINE(261)
											tmp34 = (dist > best);
										}
										else{
											HX_STACK_LINE(261)
											tmp34 = false;
										}
										HX_STACK_LINE(261)
										if ((tmp34)){
											HX_STACK_LINE(261)
											best = dist;
											HX_STACK_LINE(261)
											a0 = a;
										}
									}
								}
								HX_STACK_LINE(261)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(261)
						bool tmp21 = (best < upperBound);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(261)
						if ((tmp21)){
							HX_STACK_LINE(261)
							::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
							HX_STACK_LINE(261)
							::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(261)
							Float tmp22 = (circle->worldCOMy * a0->gnormx);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(261)
							Float tmp23 = (circle->worldCOMx * a0->gnormy);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(261)
							Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(261)
							Float dt = tmp24;		HX_STACK_VAR(dt,"dt");
							HX_STACK_LINE(261)
							Float tmp25 = dt;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(261)
							Float tmp26 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(261)
							Float tmp27 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(261)
							Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(261)
							bool tmp29 = (tmp25 <= tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(261)
							if ((tmp29)){
								HX_STACK_LINE(261)
								Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(261)
								Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									Float tmp30 = (circle->worldCOMx - v0->x);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(261)
									nx = tmp30;
									HX_STACK_LINE(261)
									Float tmp31 = (circle->worldCOMy - v0->y);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(261)
									ny = tmp31;
								}
								HX_STACK_LINE(261)
								Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									Float tmp31 = (nx * nx);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(261)
									Float tmp32 = (ny * ny);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(261)
									Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(261)
									tmp30 = ::Math_obj::sqrt(tmp33);
								}
								HX_STACK_LINE(261)
								Float len = tmp30;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(261)
								Float tmp31 = len;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(261)
								Float tmp32 = circle->radius;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(261)
								Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(261)
								best = tmp33;
								HX_STACK_LINE(261)
								bool tmp34 = (best < upperBound);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(261)
								if ((tmp34)){
									HX_STACK_LINE(261)
									bool tmp35 = (len == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(261)
									if ((tmp35)){
										HX_STACK_LINE(261)
										nx = (int)1;
										HX_STACK_LINE(261)
										ny = (int)0;
										HX_STACK_LINE(261)
										{
										}
									}
									else{
										HX_STACK_LINE(261)
										Float tmp36 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(261)
										Float t = tmp36;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										hx::MultEq(nx,t);
										HX_STACK_LINE(261)
										hx::MultEq(ny,t);
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										int t = (int)0;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp36 = v0->x;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(261)
										Float tmp37 = (nx * t);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(261)
										Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(261)
										w1->x = tmp38;
										HX_STACK_LINE(261)
										Float tmp39 = v0->y;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(261)
										Float tmp40 = (ny * t);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(261)
										Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(261)
										w1->y = tmp41;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp36 = circle->radius;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(261)
										Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(261)
										Float t = tmp37;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp38 = circle->worldCOMx;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(261)
										Float tmp39 = (nx * t);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(261)
										Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(261)
										w2->x = tmp40;
										HX_STACK_LINE(261)
										Float tmp41 = circle->worldCOMy;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(261)
										Float tmp42 = (ny * t);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(261)
										Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(261)
										w2->y = tmp43;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										axis->x = nx;
										HX_STACK_LINE(261)
										axis->y = ny;
										HX_STACK_LINE(261)
										{
										}
									}
								}
							}
							else{
								HX_STACK_LINE(261)
								Float tmp30 = dt;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(261)
								Float tmp31 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(261)
								Float tmp32 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(261)
								Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(261)
								bool tmp34 = (tmp30 >= tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(261)
								if ((tmp34)){
									HX_STACK_LINE(261)
									Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(261)
									Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp35 = (circle->worldCOMx - v1->x);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(261)
										nx = tmp35;
										HX_STACK_LINE(261)
										Float tmp36 = (circle->worldCOMy - v1->y);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(261)
										ny = tmp36;
									}
									HX_STACK_LINE(261)
									Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp36 = (nx * nx);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(261)
										Float tmp37 = (ny * ny);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(261)
										Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(261)
										tmp35 = ::Math_obj::sqrt(tmp38);
									}
									HX_STACK_LINE(261)
									Float len = tmp35;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(261)
									Float tmp36 = len;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(261)
									Float tmp37 = circle->radius;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(261)
									Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(261)
									best = tmp38;
									HX_STACK_LINE(261)
									bool tmp39 = (best < upperBound);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(261)
									if ((tmp39)){
										HX_STACK_LINE(261)
										bool tmp40 = (len == (int)0);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(261)
										if ((tmp40)){
											HX_STACK_LINE(261)
											nx = (int)1;
											HX_STACK_LINE(261)
											ny = (int)0;
											HX_STACK_LINE(261)
											{
											}
										}
										else{
											HX_STACK_LINE(261)
											Float tmp41 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(261)
											Float t = tmp41;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(261)
											hx::MultEq(nx,t);
											HX_STACK_LINE(261)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											int t = (int)0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(261)
											Float tmp41 = v1->x;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(261)
											Float tmp42 = (nx * t);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(261)
											Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(261)
											w1->x = tmp43;
											HX_STACK_LINE(261)
											Float tmp44 = v1->y;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(261)
											Float tmp45 = (ny * t);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(261)
											Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(261)
											w1->y = tmp46;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp41 = circle->radius;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(261)
											Float tmp42 = -(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(261)
											Float t = tmp42;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(261)
											Float tmp43 = circle->worldCOMx;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(261)
											Float tmp44 = (nx * t);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(261)
											Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(261)
											w2->x = tmp45;
											HX_STACK_LINE(261)
											Float tmp46 = circle->worldCOMy;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(261)
											Float tmp47 = (ny * t);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(261)
											Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(261)
											w2->y = tmp48;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											axis->x = nx;
											HX_STACK_LINE(261)
											axis->y = ny;
											HX_STACK_LINE(261)
											{
											}
										}
									}
								}
								else{
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp35 = circle->radius;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(261)
										Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(261)
										Float t = tmp36;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp37 = circle->worldCOMx;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(261)
										Float tmp38 = (a0->gnormx * t);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(261)
										Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(261)
										w2->x = tmp39;
										HX_STACK_LINE(261)
										Float tmp40 = circle->worldCOMy;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(261)
										Float tmp41 = (a0->gnormy * t);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(261)
										Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(261)
										w2->y = tmp42;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp35 = best;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(261)
										Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(261)
										Float t = tmp36;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp37 = w2->x;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(261)
										Float tmp38 = (a0->gnormx * t);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(261)
										Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(261)
										w1->x = tmp39;
										HX_STACK_LINE(261)
										Float tmp40 = w2->y;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(261)
										Float tmp41 = (a0->gnormy * t);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(261)
										Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(261)
										w1->y = tmp42;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										axis->x = a0->gnormx;
										HX_STACK_LINE(261)
										axis->y = a0->gnormy;
										HX_STACK_LINE(261)
										{
										}
									}
								}
							}
						}
						HX_STACK_LINE(261)
						bool tmp22 = swapped;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(261)
						if ((tmp22)){
							HX_STACK_LINE(261)
							Float tmp23 = axis->x;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(261)
							Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(261)
							axis->x = tmp24;
							HX_STACK_LINE(261)
							Float tmp25 = axis->y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(261)
							Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(261)
							axis->y = tmp26;
						}
						HX_STACK_LINE(261)
						tmp13 = best;
					}
					else{
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
						HX_STACK_LINE(261)
						Float tmp20 = ((Float)-1e+100);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(261)
						Float best = tmp20;		HX_STACK_VAR(best,"best");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
						HX_STACK_LINE(261)
						int besti = (int)0;		HX_STACK_VAR(besti,"besti");
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							::zpp_nape::util::ZNPNode_ZPP_Edge tmp21 = p1->edges->head;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(261)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp21;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(261)
							while((true)){
								HX_STACK_LINE(261)
								bool tmp22 = (cx_ite != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(261)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(261)
								if ((tmp23)){
									HX_STACK_LINE(261)
									break;
								}
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										::zpp_nape::geom::ZPP_Vec2 tmp24 = p2->gverts->next;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(261)
										::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp24;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(261)
										while((true)){
											HX_STACK_LINE(261)
											bool tmp25 = (cx_ite1 != null());		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(261)
											bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(261)
											if ((tmp26)){
												HX_STACK_LINE(261)
												break;
											}
											HX_STACK_LINE(261)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												Float tmp27 = (a->gnormx * v->x);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(261)
												Float tmp28 = (a->gnormy * v->y);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(261)
												Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(261)
												Float k = tmp29;		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(261)
												bool tmp30 = (k < min);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(261)
												if ((tmp30)){
													HX_STACK_LINE(261)
													min = k;
												}
											}
											HX_STACK_LINE(261)
											cx_ite1 = cx_ite1->next;
										}
									}
									HX_STACK_LINE(261)
									hx::SubEq(min,a->gprojection);
									HX_STACK_LINE(261)
									bool tmp24 = (min > upperBound);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(261)
									if ((tmp24)){
										HX_STACK_LINE(261)
										best = min;
										HX_STACK_LINE(261)
										break;
									}
									HX_STACK_LINE(261)
									bool tmp25 = (min > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(261)
									if ((tmp25)){
										HX_STACK_LINE(261)
										bool tmp26 = (min > best);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(261)
										if ((tmp26)){
											HX_STACK_LINE(261)
											best = min;
											HX_STACK_LINE(261)
											a1 = a;
											HX_STACK_LINE(261)
											besti = (int)1;
										}
									}
									else{
										HX_STACK_LINE(261)
										bool tmp26 = (best < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(261)
										bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(261)
										if ((tmp26)){
											HX_STACK_LINE(261)
											tmp27 = (min > best);
										}
										else{
											HX_STACK_LINE(261)
											tmp27 = false;
										}
										HX_STACK_LINE(261)
										if ((tmp27)){
											HX_STACK_LINE(261)
											best = min;
											HX_STACK_LINE(261)
											a1 = a;
											HX_STACK_LINE(261)
											besti = (int)1;
										}
									}
								}
								HX_STACK_LINE(261)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(261)
						bool tmp21 = (best < upperBound);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(261)
						if ((tmp21)){
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								::zpp_nape::util::ZNPNode_ZPP_Edge tmp22 = p2->edges->head;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(261)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp22;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(261)
								while((true)){
									HX_STACK_LINE(261)
									bool tmp23 = (cx_ite != null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(261)
									bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(261)
									if ((tmp24)){
										HX_STACK_LINE(261)
										break;
									}
									HX_STACK_LINE(261)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::zpp_nape::geom::ZPP_Vec2 tmp25 = p1->gverts->next;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(261)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp25;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(261)
											while((true)){
												HX_STACK_LINE(261)
												bool tmp26 = (cx_ite1 != null());		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(261)
												bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(261)
												if ((tmp27)){
													HX_STACK_LINE(261)
													break;
												}
												HX_STACK_LINE(261)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													Float tmp28 = (a->gnormx * v->x);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(261)
													Float tmp29 = (a->gnormy * v->y);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(261)
													Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(261)
													Float k = tmp30;		HX_STACK_VAR(k,"k");
													HX_STACK_LINE(261)
													bool tmp31 = (k < min);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(261)
													if ((tmp31)){
														HX_STACK_LINE(261)
														min = k;
													}
												}
												HX_STACK_LINE(261)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(261)
										hx::SubEq(min,a->gprojection);
										HX_STACK_LINE(261)
										bool tmp25 = (min > upperBound);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(261)
										if ((tmp25)){
											HX_STACK_LINE(261)
											best = min;
											HX_STACK_LINE(261)
											break;
										}
										HX_STACK_LINE(261)
										bool tmp26 = (min > (int)0);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(261)
										if ((tmp26)){
											HX_STACK_LINE(261)
											bool tmp27 = (min > best);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(261)
											if ((tmp27)){
												HX_STACK_LINE(261)
												best = min;
												HX_STACK_LINE(261)
												a2 = a;
												HX_STACK_LINE(261)
												besti = (int)2;
											}
										}
										else{
											HX_STACK_LINE(261)
											bool tmp27 = (best < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(261)
											bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(261)
											if ((tmp27)){
												HX_STACK_LINE(261)
												tmp28 = (min > best);
											}
											else{
												HX_STACK_LINE(261)
												tmp28 = false;
											}
											HX_STACK_LINE(261)
											if ((tmp28)){
												HX_STACK_LINE(261)
												best = min;
												HX_STACK_LINE(261)
												a2 = a;
												HX_STACK_LINE(261)
												besti = (int)2;
											}
										}
									}
									HX_STACK_LINE(261)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(261)
							bool tmp22 = (best < upperBound);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(261)
							if ((tmp22)){
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
								HX_STACK_LINE(261)
								bool tmp23 = (besti == (int)1);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(261)
								if ((tmp23)){
									HX_STACK_LINE(261)
									q1 = p1;
									HX_STACK_LINE(261)
									q2 = p2;
									HX_STACK_LINE(261)
									ax = a1;
								}
								else{
									HX_STACK_LINE(261)
									q1 = p2;
									HX_STACK_LINE(261)
									q2 = p1;
									HX_STACK_LINE(261)
									ax = a2;
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 tmp24 = w1;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(261)
									w1 = w2;
									HX_STACK_LINE(261)
									w2 = tmp24;
									HX_STACK_LINE(261)
									bool tmp25 = swapped;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(261)
									bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(261)
									swapped = tmp26;
								}
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
								HX_STACK_LINE(261)
								Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									::zpp_nape::util::ZNPNode_ZPP_Edge tmp24 = q2->edges->head;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(261)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp24;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(261)
									while((true)){
										HX_STACK_LINE(261)
										bool tmp25 = (cx_ite != null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(261)
										bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(261)
										if ((tmp26)){
											HX_STACK_LINE(261)
											break;
										}
										HX_STACK_LINE(261)
										::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp27 = (ax->gnormx * a->gnormx);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(261)
											Float tmp28 = (ax->gnormy * a->gnormy);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(261)
											Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(261)
											Float k = tmp29;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(261)
											bool tmp30 = (k < min);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(261)
											if ((tmp30)){
												HX_STACK_LINE(261)
												min = k;
												HX_STACK_LINE(261)
												ay = a;
											}
										}
										HX_STACK_LINE(261)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(261)
								bool tmp24 = swapped;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(261)
								if ((tmp24)){
									HX_STACK_LINE(261)
									Float tmp25 = ax->gnormx;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(261)
									Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(261)
									axis->x = tmp26;
									HX_STACK_LINE(261)
									Float tmp27 = ax->gnormy;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(261)
									Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(261)
									axis->y = tmp28;
									HX_STACK_LINE(261)
									{
									}
								}
								else{
									HX_STACK_LINE(261)
									axis->x = ax->gnormx;
									HX_STACK_LINE(261)
									axis->y = ax->gnormy;
									HX_STACK_LINE(261)
									{
									}
								}
								HX_STACK_LINE(261)
								bool tmp25 = (best >= (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(261)
								if ((tmp25)){
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
									HX_STACK_LINE(261)
									Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
									HX_STACK_LINE(261)
									Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
									HX_STACK_LINE(261)
									Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
									HX_STACK_LINE(261)
									Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp26 = (v1->x - v0->x);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(261)
										vx = tmp26;
										HX_STACK_LINE(261)
										Float tmp27 = (v1->y - v0->y);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(261)
										vy = tmp27;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp26 = (q11->x - q0->x);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(261)
										qx = tmp26;
										HX_STACK_LINE(261)
										Float tmp27 = (q11->y - q0->y);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(261)
										qy = tmp27;
									}
									HX_STACK_LINE(261)
									Float tmp26 = (vx * vx);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(261)
									Float tmp27 = (vy * vy);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(261)
									Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(261)
									Float tmp29 = (Float((int)1) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(261)
									Float vdot = tmp29;		HX_STACK_VAR(vdot,"vdot");
									HX_STACK_LINE(261)
									Float tmp30 = (qx * qx);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(261)
									Float tmp31 = (qy * qy);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(261)
									Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(261)
									Float tmp33 = (Float((int)1) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(261)
									Float qdot = tmp33;		HX_STACK_VAR(qdot,"qdot");
									HX_STACK_LINE(261)
									Float tmp34 = vx;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(261)
									Float tmp35 = (v0->x - q0->x);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(261)
									Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(261)
									Float tmp37 = vy;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(261)
									Float tmp38 = (v0->y - q0->y);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(261)
									Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(261)
									Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(261)
									Float tmp41 = -(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(261)
									Float tmp42 = vdot;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(261)
									Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(261)
									Float t1 = tmp43;		HX_STACK_VAR(t1,"t1");
									HX_STACK_LINE(261)
									Float tmp44 = vx;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(261)
									Float tmp45 = (v0->x - q11->x);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(261)
									Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(261)
									Float tmp47 = vy;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(261)
									Float tmp48 = (v0->y - q11->y);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(261)
									Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(261)
									Float tmp50 = (tmp46 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(261)
									Float tmp51 = -(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(261)
									Float tmp52 = vdot;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(261)
									Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(261)
									Float t2 = tmp53;		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(261)
									Float tmp54 = qx;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(261)
									Float tmp55 = (q0->x - v0->x);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(261)
									Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(261)
									Float tmp57 = qy;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(261)
									Float tmp58 = (q0->y - v0->y);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(261)
									Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(261)
									Float tmp60 = (tmp56 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(261)
									Float tmp61 = -(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(261)
									Float tmp62 = qdot;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(261)
									Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(261)
									Float s12 = tmp63;		HX_STACK_VAR(s12,"s12");
									HX_STACK_LINE(261)
									Float tmp64 = qx;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(261)
									Float tmp65 = (q0->x - v1->x);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(261)
									Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(261)
									Float tmp67 = qy;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(261)
									Float tmp68 = (q0->y - v1->y);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(261)
									Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(261)
									Float tmp70 = (tmp66 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(261)
									Float tmp71 = -(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(261)
									Float tmp72 = qdot;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(261)
									Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(261)
									Float s22 = tmp73;		HX_STACK_VAR(s22,"s22");
									HX_STACK_LINE(261)
									bool tmp74 = (t1 < (int)0);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(261)
									if ((tmp74)){
										HX_STACK_LINE(261)
										t1 = (int)0;
									}
									else{
										HX_STACK_LINE(261)
										bool tmp75 = (t1 > (int)1);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(261)
										if ((tmp75)){
											HX_STACK_LINE(261)
											t1 = (int)1;
										}
									}
									HX_STACK_LINE(261)
									bool tmp75 = (t2 < (int)0);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(261)
									if ((tmp75)){
										HX_STACK_LINE(261)
										t2 = (int)0;
									}
									else{
										HX_STACK_LINE(261)
										bool tmp76 = (t2 > (int)1);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(261)
										if ((tmp76)){
											HX_STACK_LINE(261)
											t2 = (int)1;
										}
									}
									HX_STACK_LINE(261)
									bool tmp76 = (s12 < (int)0);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(261)
									if ((tmp76)){
										HX_STACK_LINE(261)
										s12 = (int)0;
									}
									else{
										HX_STACK_LINE(261)
										bool tmp77 = (s12 > (int)1);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(261)
										if ((tmp77)){
											HX_STACK_LINE(261)
											s12 = (int)1;
										}
									}
									HX_STACK_LINE(261)
									bool tmp77 = (s22 < (int)0);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(261)
									if ((tmp77)){
										HX_STACK_LINE(261)
										s22 = (int)0;
									}
									else{
										HX_STACK_LINE(261)
										bool tmp78 = (s22 > (int)1);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(261)
										if ((tmp78)){
											HX_STACK_LINE(261)
											s22 = (int)1;
										}
									}
									HX_STACK_LINE(261)
									Float f1x = ((Float)0.0);		HX_STACK_VAR(f1x,"f1x");
									HX_STACK_LINE(261)
									Float f1y = ((Float)0.0);		HX_STACK_VAR(f1y,"f1y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = t1;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp78 = v0->x;		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(261)
										Float tmp79 = (vx * t);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(261)
										Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(261)
										f1x = tmp80;
										HX_STACK_LINE(261)
										Float tmp81 = v0->y;		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(261)
										Float tmp82 = (vy * t);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(261)
										Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(261)
										f1y = tmp83;
									}
									HX_STACK_LINE(261)
									Float f2x = ((Float)0.0);		HX_STACK_VAR(f2x,"f2x");
									HX_STACK_LINE(261)
									Float f2y = ((Float)0.0);		HX_STACK_VAR(f2y,"f2y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = t2;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp78 = v0->x;		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(261)
										Float tmp79 = (vx * t);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(261)
										Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(261)
										f2x = tmp80;
										HX_STACK_LINE(261)
										Float tmp81 = v0->y;		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(261)
										Float tmp82 = (vy * t);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(261)
										Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(261)
										f2y = tmp83;
									}
									HX_STACK_LINE(261)
									Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
									HX_STACK_LINE(261)
									Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = s12;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp78 = q0->x;		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(261)
										Float tmp79 = (qx * t);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(261)
										Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(261)
										g1x = tmp80;
										HX_STACK_LINE(261)
										Float tmp81 = q0->y;		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(261)
										Float tmp82 = (qy * t);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(261)
										Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(261)
										g1y = tmp83;
									}
									HX_STACK_LINE(261)
									Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
									HX_STACK_LINE(261)
									Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = s22;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp78 = q0->x;		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(261)
										Float tmp79 = (qx * t);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(261)
										Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(261)
										g2x = tmp80;
										HX_STACK_LINE(261)
										Float tmp81 = q0->y;		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(261)
										Float tmp82 = (qy * t);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(261)
										Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(261)
										g2y = tmp83;
									}
									HX_STACK_LINE(261)
									Float tmp78;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(261)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp79 = (f1x - q0->x);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(261)
											dx = tmp79;
											HX_STACK_LINE(261)
											Float tmp80 = (f1y - q0->y);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(261)
											dy = tmp80;
										}
										HX_STACK_LINE(261)
										Float tmp79 = (dx * dx);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(261)
										Float tmp80 = (dy * dy);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(261)
										tmp78 = (tmp79 + tmp80);
									}
									HX_STACK_LINE(261)
									Float d1 = tmp78;		HX_STACK_VAR(d1,"d1");
									HX_STACK_LINE(261)
									Float tmp79;		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(261)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp80 = (f2x - q11->x);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(261)
											dx = tmp80;
											HX_STACK_LINE(261)
											Float tmp81 = (f2y - q11->y);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(261)
											dy = tmp81;
										}
										HX_STACK_LINE(261)
										Float tmp80 = (dx * dx);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(261)
										Float tmp81 = (dy * dy);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(261)
										tmp79 = (tmp80 + tmp81);
									}
									HX_STACK_LINE(261)
									Float d2 = tmp79;		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(261)
									Float tmp80;		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(261)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp81 = (g1x - v0->x);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(261)
											dx = tmp81;
											HX_STACK_LINE(261)
											Float tmp82 = (g1y - v0->y);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(261)
											dy = tmp82;
										}
										HX_STACK_LINE(261)
										Float tmp81 = (dx * dx);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(261)
										Float tmp82 = (dy * dy);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(261)
										tmp80 = (tmp81 + tmp82);
									}
									HX_STACK_LINE(261)
									Float e1 = tmp80;		HX_STACK_VAR(e1,"e1");
									HX_STACK_LINE(261)
									Float tmp81;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(261)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp82 = (g2x - v1->x);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(261)
											dx = tmp82;
											HX_STACK_LINE(261)
											Float tmp83 = (g2y - v1->y);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(261)
											dy = tmp83;
										}
										HX_STACK_LINE(261)
										Float tmp82 = (dx * dx);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(261)
										Float tmp83 = (dy * dy);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(261)
										tmp81 = (tmp82 + tmp83);
									}
									HX_STACK_LINE(261)
									Float e2 = tmp81;		HX_STACK_VAR(e2,"e2");
									HX_STACK_LINE(261)
									Float minfx = ((Float)0.0);		HX_STACK_VAR(minfx,"minfx");
									HX_STACK_LINE(261)
									Float minfy = ((Float)0.0);		HX_STACK_VAR(minfy,"minfy");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
									HX_STACK_LINE(261)
									bool tmp82 = (d1 < d2);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(261)
									if ((tmp82)){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											minfx = f1x;
											HX_STACK_LINE(261)
											minfy = f1y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										minq = q0;
									}
									else{
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											minfx = f2x;
											HX_STACK_LINE(261)
											minfy = f2y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										minq = q11;
										HX_STACK_LINE(261)
										d1 = d2;
									}
									HX_STACK_LINE(261)
									Float mingx = ((Float)0.0);		HX_STACK_VAR(mingx,"mingx");
									HX_STACK_LINE(261)
									Float mingy = ((Float)0.0);		HX_STACK_VAR(mingy,"mingy");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
									HX_STACK_LINE(261)
									bool tmp83 = (e1 < e2);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(261)
									if ((tmp83)){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											mingx = g1x;
											HX_STACK_LINE(261)
											mingy = g1y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										minv = v0;
									}
									else{
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											mingx = g2x;
											HX_STACK_LINE(261)
											mingy = g2y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										minv = v1;
										HX_STACK_LINE(261)
										e1 = e2;
									}
									HX_STACK_LINE(261)
									bool tmp84 = (d1 < e1);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(261)
									if ((tmp84)){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w1->x = minfx;
											HX_STACK_LINE(261)
											w1->y = minfy;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w2->x = minq->x;
											HX_STACK_LINE(261)
											w2->y = minq->y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										Float tmp85 = d1;		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(261)
										Float tmp86 = ::Math_obj::sqrt(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(261)
										best = tmp86;
									}
									else{
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w2->x = mingx;
											HX_STACK_LINE(261)
											w2->y = mingy;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w1->x = minv->x;
											HX_STACK_LINE(261)
											w1->y = minv->y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										Float tmp85 = e1;		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(261)
										Float tmp86 = ::Math_obj::sqrt(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(261)
										best = tmp86;
									}
									HX_STACK_LINE(261)
									bool tmp85 = (best != (int)0);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(261)
									if ((tmp85)){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp86 = (w2->x - w1->x);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(261)
											axis->x = tmp86;
											HX_STACK_LINE(261)
											Float tmp87 = (w2->y - w1->y);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(261)
											axis->y = tmp87;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp86 = (Float(((Float)1.0)) / Float(best));		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(261)
											Float t = tmp86;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(261)
											hx::MultEq(axis->x,t);
											HX_STACK_LINE(261)
											hx::MultEq(axis->y,t);
										}
										HX_STACK_LINE(261)
										bool tmp86 = swapped;		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(261)
										if ((tmp86)){
											HX_STACK_LINE(261)
											Float tmp87 = axis->x;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(261)
											Float tmp88 = -(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(261)
											axis->x = tmp88;
											HX_STACK_LINE(261)
											Float tmp89 = axis->y;		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(261)
											Float tmp90 = -(tmp89);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(261)
											axis->y = tmp90;
										}
									}
									HX_STACK_LINE(261)
									tmp13 = best;
								}
								else{
									HX_STACK_LINE(261)
									Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
									HX_STACK_LINE(261)
									Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp26 = ay->gp0->x;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(261)
										c0x = tmp26;
										HX_STACK_LINE(261)
										Float tmp27 = ay->gp0->y;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(261)
										c0y = tmp27;
										HX_STACK_LINE(261)
										{
										}
									}
									HX_STACK_LINE(261)
									Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
									HX_STACK_LINE(261)
									Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp26 = ay->gp1->x;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(261)
										c1x = tmp26;
										HX_STACK_LINE(261)
										Float tmp27 = ay->gp1->y;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(261)
										c1y = tmp27;
										HX_STACK_LINE(261)
										{
										}
									}
									HX_STACK_LINE(261)
									Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
									HX_STACK_LINE(261)
									Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp26 = (c1x - c0x);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(261)
										dvx = tmp26;
										HX_STACK_LINE(261)
										Float tmp27 = (c1y - c0y);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(261)
										dvy = tmp27;
									}
									HX_STACK_LINE(261)
									Float tmp26 = (ax->gnormy * c0x);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(261)
									Float tmp27 = (ax->gnormx * c0y);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(261)
									Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(261)
									Float d0 = tmp28;		HX_STACK_VAR(d0,"d0");
									HX_STACK_LINE(261)
									Float tmp29 = (ax->gnormy * c1x);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(261)
									Float tmp30 = (ax->gnormx * c1y);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(261)
									Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(261)
									Float d1 = tmp31;		HX_STACK_VAR(d1,"d1");
									HX_STACK_LINE(261)
									Float tmp32 = (d1 - d0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(261)
									Float tmp33 = (Float((int)1) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(261)
									Float den = tmp33;		HX_STACK_VAR(den,"den");
									HX_STACK_LINE(261)
									Float tmp34 = ax->tp1;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(261)
									Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(261)
									Float tmp36 = d0;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(261)
									Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(261)
									Float tmp38 = den;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(261)
									Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(261)
									Float t = tmp39;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(261)
									Float tmp40 = t;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(261)
									Float tmp41 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(261)
									bool tmp42 = (tmp40 > tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(261)
									if ((tmp42)){
										HX_STACK_LINE(261)
										Float t1 = t;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(261)
										Float tmp43 = (dvx * t1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(261)
										hx::AddEq(c0x,tmp43);
										HX_STACK_LINE(261)
										Float tmp44 = (dvy * t1);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(261)
										hx::AddEq(c0y,tmp44);
									}
									HX_STACK_LINE(261)
									Float tmp43 = ax->tp0;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(261)
									Float tmp44 = -(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(261)
									Float tmp45 = d1;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(261)
									Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(261)
									Float tmp47 = den;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(261)
									Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(261)
									Float t1 = tmp48;		HX_STACK_VAR(t1,"t1");
									HX_STACK_LINE(261)
									Float tmp49 = t1;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(261)
									Float tmp50 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(261)
									Float tmp51 = -(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(261)
									bool tmp52 = (tmp49 < tmp51);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(261)
									if ((tmp52)){
										HX_STACK_LINE(261)
										Float t2 = t1;		HX_STACK_VAR(t2,"t2");
										HX_STACK_LINE(261)
										Float tmp53 = (dvx * t2);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(261)
										hx::AddEq(c1x,tmp53);
										HX_STACK_LINE(261)
										Float tmp54 = (dvy * t2);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(261)
										hx::AddEq(c1y,tmp54);
									}
									HX_STACK_LINE(261)
									Float tmp53 = (c0x * ax->gnormx);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(261)
									Float tmp54 = (c0y * ax->gnormy);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(261)
									Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(261)
									Float tmp56 = ax->gprojection;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(261)
									Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(261)
									Float c0d = tmp57;		HX_STACK_VAR(c0d,"c0d");
									HX_STACK_LINE(261)
									Float tmp58 = (c1x * ax->gnormx);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(261)
									Float tmp59 = (c1y * ax->gnormy);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(261)
									Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(261)
									Float tmp61 = ax->gprojection;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(261)
									Float tmp62 = (tmp60 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(261)
									Float c1d = tmp62;		HX_STACK_VAR(c1d,"c1d");
									HX_STACK_LINE(261)
									bool tmp63 = (c0d < c1d);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(261)
									if ((tmp63)){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w2->x = c0x;
											HX_STACK_LINE(261)
											w2->y = c0y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp64 = c0d;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(261)
											Float tmp65 = -(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(261)
											Float t2 = tmp65;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(261)
											Float tmp66 = w2->x;		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(261)
											Float tmp67 = (ax->gnormx * t2);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(261)
											Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(261)
											w1->x = tmp68;
											HX_STACK_LINE(261)
											Float tmp69 = w2->y;		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(261)
											Float tmp70 = (ax->gnormy * t2);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(261)
											Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(261)
											w1->y = tmp71;
										}
										HX_STACK_LINE(261)
										tmp13 = c0d;
									}
									else{
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w2->x = c1x;
											HX_STACK_LINE(261)
											w2->y = c1y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp64 = c1d;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(261)
											Float tmp65 = -(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(261)
											Float t2 = tmp65;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(261)
											Float tmp66 = w2->x;		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(261)
											Float tmp67 = (ax->gnormx * t2);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(261)
											Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(261)
											w1->x = tmp68;
											HX_STACK_LINE(261)
											Float tmp69 = w2->y;		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(261)
											Float tmp70 = (ax->gnormy * t2);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(261)
											Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(261)
											w1->y = tmp71;
										}
										HX_STACK_LINE(261)
										tmp13 = c1d;
									}
								}
							}
							else{
								HX_STACK_LINE(261)
								tmp13 = upperBound;
							}
						}
						else{
							HX_STACK_LINE(261)
							tmp13 = upperBound;
						}
					}
				}
			}
			HX_STACK_LINE(261)
			Float tmp14 = negRadius;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(261)
			Float sep = tmp15;		HX_STACK_VAR(sep,"sep");
			HX_STACK_LINE(262)
			Float tmp16 = (deltax * axis->x);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(262)
			Float tmp17 = (deltay * axis->y);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(262)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(262)
			Float dot = tmp18;		HX_STACK_VAR(dot,"dot");
			HX_STACK_LINE(263)
			Float tmp19 = sep;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(263)
			Float tmp20 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(263)
			bool tmp21 = (tmp19 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(263)
			if ((tmp21)){
				HX_STACK_LINE(264)
				bool tmp22 = userAPI;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(264)
				if ((tmp22)){
					HX_STACK_LINE(265)
					break;
				}
				HX_STACK_LINE(267)
				Float d1x = ((Float)0.0);		HX_STACK_VAR(d1x,"d1x");
				HX_STACK_LINE(268)
				Float d1y = ((Float)0.0);		HX_STACK_VAR(d1y,"d1y");
				HX_STACK_LINE(269)
				{
					HX_STACK_LINE(270)
					Float tmp23 = (c1->x - b1->posx);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(270)
					d1x = tmp23;
					HX_STACK_LINE(271)
					Float tmp24 = (c1->y - b1->posy);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(271)
					d1y = tmp24;
				}
				HX_STACK_LINE(273)
				Float d2x = ((Float)0.0);		HX_STACK_VAR(d2x,"d2x");
				HX_STACK_LINE(274)
				Float d2y = ((Float)0.0);		HX_STACK_VAR(d2y,"d2y");
				HX_STACK_LINE(275)
				{
					HX_STACK_LINE(276)
					Float tmp23 = (c2->x - b2->posx);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(276)
					d2x = tmp23;
					HX_STACK_LINE(277)
					Float tmp24 = (c2->y - b2->posy);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(277)
					d2y = tmp24;
				}
				HX_STACK_LINE(279)
				Float tmp23 = dot;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(279)
				Float tmp24 = b1->sweep_angvel;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(279)
				Float tmp25 = (axis->y * d1x);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(279)
				Float tmp26 = (axis->x * d1y);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(279)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(279)
				Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(279)
				Float tmp29 = (tmp23 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(279)
				Float tmp30 = b2->sweep_angvel;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(279)
				Float tmp31 = (axis->y * d2x);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(279)
				Float tmp32 = (axis->x * d2y);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(279)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(279)
				Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(279)
				Float tmp35 = (tmp29 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(279)
				Float proj = tmp35;		HX_STACK_VAR(proj,"proj");
				HX_STACK_LINE(280)
				bool tmp36 = (proj > (int)0);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(280)
				if ((tmp36)){
					HX_STACK_LINE(281)
					toi->slipped = true;
				}
				HX_STACK_LINE(283)
				bool tmp37 = (proj <= (int)0);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(283)
				bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(283)
				bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(283)
				if ((tmp38)){
					HX_STACK_LINE(283)
					Float tmp40 = sep;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(283)
					Float tmp41 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(283)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(283)
					Float tmp43 = (tmp42 * ((Float)0.5));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(283)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(283)
					tmp39 = (tmp40 < tmp44);
				}
				else{
					HX_STACK_LINE(283)
					tmp39 = true;
				}
				HX_STACK_LINE(283)
				if ((tmp39)){
					HX_STACK_LINE(284)
					break;
				}
			}
			HX_STACK_LINE(287)
			Float tmp22 = (angBias - dot);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(287)
			Float tmp23 = timeStep;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(287)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(287)
			Float denom = tmp24;		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(288)
			bool tmp25 = (denom <= (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(288)
			if ((tmp25)){
				HX_STACK_LINE(289)
				curTOI = (int)-1;
				HX_STACK_LINE(290)
				break;
			}
			HX_STACK_LINE(292)
			Float tmp26 = (Float(sep) / Float(denom));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(292)
			Float delta = tmp26;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(293)
			bool tmp27 = (delta < ((Float)1e-6));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(293)
			if ((tmp27)){
				HX_STACK_LINE(293)
				delta = ((Float)1e-6);
			}
			HX_STACK_LINE(294)
			hx::AddEq(curTOI,delta);
			HX_STACK_LINE(295)
			bool tmp28 = (curTOI >= (int)1);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(295)
			if ((tmp28)){
				HX_STACK_LINE(296)
				curTOI = (int)1;
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					Float tmp29 = (curTOI * timeStep);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(297)
					Float dt = tmp29;		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(297)
					Float tmp30 = (dt - b1->sweepTime);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(297)
					Float delta1 = tmp30;		HX_STACK_VAR(delta1,"delta1");
					HX_STACK_LINE(297)
					bool tmp31 = (delta1 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(297)
					if ((tmp31)){
						HX_STACK_LINE(297)
						b1->sweepTime = dt;
						HX_STACK_LINE(297)
						{
							HX_STACK_LINE(297)
							Float t = delta1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(297)
							Float tmp32 = (b1->velx * t);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(297)
							hx::AddEq(b1->posx,tmp32);
							HX_STACK_LINE(297)
							Float tmp33 = (b1->vely * t);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(297)
							hx::AddEq(b1->posy,tmp33);
						}
						HX_STACK_LINE(297)
						bool tmp32 = (b1->angvel != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(297)
						if ((tmp32)){
							HX_STACK_LINE(297)
							Float tmp33 = (b1->sweep_angvel * delta1);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(297)
							Float dr = tmp33;		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(297)
							hx::AddEq(b1->rot,dr);
							HX_STACK_LINE(297)
							Float tmp34 = (dr * dr);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(297)
							bool tmp35 = (tmp34 > ((Float)0.0001));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(297)
							if ((tmp35)){
								HX_STACK_LINE(297)
								Float tmp36 = b1->rot;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(297)
								Float tmp37 = ::Math_obj::sin(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(297)
								b1->axisx = tmp37;
								HX_STACK_LINE(297)
								Float tmp38 = b1->rot;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(297)
								Float tmp39 = ::Math_obj::cos(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(297)
								b1->axisy = tmp39;
								HX_STACK_LINE(297)
								Dynamic();
							}
							else{
								HX_STACK_LINE(297)
								Float tmp36 = (dr * dr);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(297)
								Float d2 = tmp36;		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(297)
								Float tmp37 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(297)
								Float tmp38 = ((int)1 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(297)
								Float p = tmp38;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(297)
								Float tmp39 = (d2 * d2);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(297)
								Float tmp40 = (Float(tmp39) / Float((int)8));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(297)
								Float tmp41 = ((int)1 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(297)
								Float m = tmp41;		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(297)
								Float tmp42 = (p * b1->axisx);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(297)
								Float tmp43 = (dr * b1->axisy);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(297)
								Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(297)
								Float tmp45 = m;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(297)
								Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(297)
								Float nx = tmp46;		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(297)
								Float tmp47 = (p * b1->axisy);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(297)
								Float tmp48 = (dr * b1->axisx);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(297)
								Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(297)
								Float tmp50 = m;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(297)
								Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(297)
								b1->axisy = tmp51;
								HX_STACK_LINE(297)
								b1->axisx = nx;
							}
						}
					}
				}
				HX_STACK_LINE(298)
				{
					HX_STACK_LINE(298)
					bool tmp29 = (s1->type == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(298)
					if ((tmp29)){
						HX_STACK_LINE(298)
						Float tmp30 = b1->posx;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(298)
						Float tmp31 = (b1->axisy * s1->localCOMx);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(298)
						Float tmp32 = (b1->axisx * s1->localCOMy);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(298)
						Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(298)
						Float tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(298)
						s1->worldCOMx = tmp34;
						HX_STACK_LINE(298)
						Float tmp35 = b1->posy;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(298)
						Float tmp36 = (s1->localCOMx * b1->axisx);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(298)
						Float tmp37 = (s1->localCOMy * b1->axisy);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(298)
						Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(298)
						Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(298)
						s1->worldCOMy = tmp39;
					}
					else{
						HX_STACK_LINE(298)
						::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(298)
						::zpp_nape::geom::ZPP_Vec2 tmp30 = p->lverts->next;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(298)
						::zpp_nape::geom::ZPP_Vec2 li = tmp30;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 tmp31 = p->gverts->next;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp31;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(298)
							while((true)){
								HX_STACK_LINE(298)
								bool tmp32 = (cx_ite != null());		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(298)
								bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(298)
								if ((tmp33)){
									HX_STACK_LINE(298)
									break;
								}
								HX_STACK_LINE(298)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(298)
								{
									HX_STACK_LINE(298)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(298)
									li = li->next;
									HX_STACK_LINE(298)
									{
										HX_STACK_LINE(298)
										Float tmp34 = b1->posx;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(298)
										Float tmp35 = (b1->axisy * l->x);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(298)
										Float tmp36 = (b1->axisx * l->y);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(298)
										Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(298)
										Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(298)
										g->x = tmp38;
										HX_STACK_LINE(298)
										Float tmp39 = b1->posy;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(298)
										Float tmp40 = (l->x * b1->axisx);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(298)
										Float tmp41 = (l->y * b1->axisy);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(298)
										Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(298)
										Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(298)
										g->y = tmp43;
									}
								}
								HX_STACK_LINE(298)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(298)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp31 = p->edges->head;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(298)
						::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp31;		HX_STACK_VAR(ite,"ite");
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 tmp32 = p->gverts->next;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp32;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(298)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(298)
							while((true)){
								HX_STACK_LINE(298)
								bool tmp33 = (cx_ite != null());		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(298)
								bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(298)
								if ((tmp34)){
									HX_STACK_LINE(298)
									break;
								}
								HX_STACK_LINE(298)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(298)
								{
									HX_STACK_LINE(298)
									::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(298)
									ite = ite->next;
									HX_STACK_LINE(298)
									{
										HX_STACK_LINE(298)
										Float tmp35 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(298)
										Float tmp36 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(298)
										Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(298)
										e->gnormx = tmp37;
										HX_STACK_LINE(298)
										Float tmp38 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(298)
										Float tmp39 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(298)
										Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(298)
										e->gnormy = tmp40;
									}
									HX_STACK_LINE(298)
									Float tmp35 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(298)
									Float tmp36 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(298)
									Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(298)
									Float tmp38 = e->lprojection;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(298)
									Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(298)
									e->gprojection = tmp39;
									HX_STACK_LINE(298)
									Float tmp40 = (u->y * e->gnormx);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(298)
									Float tmp41 = (u->x * e->gnormy);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(298)
									Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(298)
									e->tp0 = tmp42;
									HX_STACK_LINE(298)
									Float tmp43 = (v->y * e->gnormx);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(298)
									Float tmp44 = (v->x * e->gnormy);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(298)
									Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(298)
									e->tp1 = tmp45;
								}
								HX_STACK_LINE(298)
								u = v;
								HX_STACK_LINE(298)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 tmp33 = p->gverts->next;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 v = tmp33;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(298)
							{
								HX_STACK_LINE(298)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(298)
								ite = ite->next;
								HX_STACK_LINE(298)
								{
									HX_STACK_LINE(298)
									Float tmp34 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(298)
									Float tmp35 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(298)
									Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(298)
									e->gnormx = tmp36;
									HX_STACK_LINE(298)
									Float tmp37 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(298)
									Float tmp38 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(298)
									Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(298)
									e->gnormy = tmp39;
								}
								HX_STACK_LINE(298)
								Float tmp34 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(298)
								Float tmp35 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(298)
								Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(298)
								Float tmp37 = e->lprojection;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(298)
								Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(298)
								e->gprojection = tmp38;
								HX_STACK_LINE(298)
								Float tmp39 = (u->y * e->gnormx);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(298)
								Float tmp40 = (u->x * e->gnormy);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(298)
								Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(298)
								e->tp0 = tmp41;
								HX_STACK_LINE(298)
								Float tmp42 = (v->y * e->gnormx);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(298)
								Float tmp43 = (v->x * e->gnormy);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(298)
								Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(298)
								e->tp1 = tmp44;
							}
						}
					}
				}
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					Float tmp29 = (curTOI * timeStep);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(299)
					Float dt = tmp29;		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(299)
					Float tmp30 = (dt - b2->sweepTime);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(299)
					Float delta1 = tmp30;		HX_STACK_VAR(delta1,"delta1");
					HX_STACK_LINE(299)
					bool tmp31 = (delta1 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(299)
					if ((tmp31)){
						HX_STACK_LINE(299)
						b2->sweepTime = dt;
						HX_STACK_LINE(299)
						{
							HX_STACK_LINE(299)
							Float t = delta1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(299)
							Float tmp32 = (b2->velx * t);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(299)
							hx::AddEq(b2->posx,tmp32);
							HX_STACK_LINE(299)
							Float tmp33 = (b2->vely * t);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(299)
							hx::AddEq(b2->posy,tmp33);
						}
						HX_STACK_LINE(299)
						bool tmp32 = (b2->angvel != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(299)
						if ((tmp32)){
							HX_STACK_LINE(299)
							Float tmp33 = (b2->sweep_angvel * delta1);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(299)
							Float dr = tmp33;		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(299)
							hx::AddEq(b2->rot,dr);
							HX_STACK_LINE(299)
							Float tmp34 = (dr * dr);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(299)
							bool tmp35 = (tmp34 > ((Float)0.0001));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(299)
							if ((tmp35)){
								HX_STACK_LINE(299)
								Float tmp36 = b2->rot;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(299)
								Float tmp37 = ::Math_obj::sin(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(299)
								b2->axisx = tmp37;
								HX_STACK_LINE(299)
								Float tmp38 = b2->rot;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(299)
								Float tmp39 = ::Math_obj::cos(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(299)
								b2->axisy = tmp39;
								HX_STACK_LINE(299)
								Dynamic();
							}
							else{
								HX_STACK_LINE(299)
								Float tmp36 = (dr * dr);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(299)
								Float d2 = tmp36;		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(299)
								Float tmp37 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(299)
								Float tmp38 = ((int)1 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(299)
								Float p = tmp38;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(299)
								Float tmp39 = (d2 * d2);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(299)
								Float tmp40 = (Float(tmp39) / Float((int)8));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(299)
								Float tmp41 = ((int)1 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(299)
								Float m = tmp41;		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(299)
								Float tmp42 = (p * b2->axisx);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(299)
								Float tmp43 = (dr * b2->axisy);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(299)
								Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(299)
								Float tmp45 = m;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(299)
								Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(299)
								Float nx = tmp46;		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(299)
								Float tmp47 = (p * b2->axisy);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(299)
								Float tmp48 = (dr * b2->axisx);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(299)
								Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(299)
								Float tmp50 = m;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(299)
								Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(299)
								b2->axisy = tmp51;
								HX_STACK_LINE(299)
								b2->axisx = nx;
							}
						}
					}
				}
				HX_STACK_LINE(300)
				{
					HX_STACK_LINE(300)
					bool tmp29 = (s2->type == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(300)
					if ((tmp29)){
						HX_STACK_LINE(300)
						Float tmp30 = b2->posx;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(300)
						Float tmp31 = (b2->axisy * s2->localCOMx);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(300)
						Float tmp32 = (b2->axisx * s2->localCOMy);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(300)
						Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(300)
						Float tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(300)
						s2->worldCOMx = tmp34;
						HX_STACK_LINE(300)
						Float tmp35 = b2->posy;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(300)
						Float tmp36 = (s2->localCOMx * b2->axisx);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(300)
						Float tmp37 = (s2->localCOMy * b2->axisy);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(300)
						Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(300)
						Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(300)
						s2->worldCOMy = tmp39;
					}
					else{
						HX_STACK_LINE(300)
						::zpp_nape::shape::ZPP_Polygon p = s2->polygon;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(300)
						::zpp_nape::geom::ZPP_Vec2 tmp30 = p->lverts->next;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(300)
						::zpp_nape::geom::ZPP_Vec2 li = tmp30;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(300)
						{
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 tmp31 = p->gverts->next;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp31;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(300)
							while((true)){
								HX_STACK_LINE(300)
								bool tmp32 = (cx_ite != null());		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(300)
								bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(300)
								if ((tmp33)){
									HX_STACK_LINE(300)
									break;
								}
								HX_STACK_LINE(300)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(300)
								{
									HX_STACK_LINE(300)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(300)
									li = li->next;
									HX_STACK_LINE(300)
									{
										HX_STACK_LINE(300)
										Float tmp34 = b2->posx;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(300)
										Float tmp35 = (b2->axisy * l->x);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(300)
										Float tmp36 = (b2->axisx * l->y);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(300)
										Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(300)
										Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(300)
										g->x = tmp38;
										HX_STACK_LINE(300)
										Float tmp39 = b2->posy;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(300)
										Float tmp40 = (l->x * b2->axisx);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(300)
										Float tmp41 = (l->y * b2->axisy);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(300)
										Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(300)
										Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(300)
										g->y = tmp43;
									}
								}
								HX_STACK_LINE(300)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(300)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp31 = p->edges->head;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(300)
						::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp31;		HX_STACK_VAR(ite,"ite");
						HX_STACK_LINE(300)
						{
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 tmp32 = p->gverts->next;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp32;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(300)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(300)
							while((true)){
								HX_STACK_LINE(300)
								bool tmp33 = (cx_ite != null());		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(300)
								bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(300)
								if ((tmp34)){
									HX_STACK_LINE(300)
									break;
								}
								HX_STACK_LINE(300)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(300)
								{
									HX_STACK_LINE(300)
									::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(300)
									ite = ite->next;
									HX_STACK_LINE(300)
									{
										HX_STACK_LINE(300)
										Float tmp35 = (b2->axisy * e->lnormx);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(300)
										Float tmp36 = (b2->axisx * e->lnormy);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(300)
										Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(300)
										e->gnormx = tmp37;
										HX_STACK_LINE(300)
										Float tmp38 = (e->lnormx * b2->axisx);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(300)
										Float tmp39 = (e->lnormy * b2->axisy);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(300)
										Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(300)
										e->gnormy = tmp40;
									}
									HX_STACK_LINE(300)
									Float tmp35 = (b2->posx * e->gnormx);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(300)
									Float tmp36 = (b2->posy * e->gnormy);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(300)
									Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(300)
									Float tmp38 = e->lprojection;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(300)
									Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(300)
									e->gprojection = tmp39;
									HX_STACK_LINE(300)
									Float tmp40 = (u->y * e->gnormx);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(300)
									Float tmp41 = (u->x * e->gnormy);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(300)
									Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(300)
									e->tp0 = tmp42;
									HX_STACK_LINE(300)
									Float tmp43 = (v->y * e->gnormx);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(300)
									Float tmp44 = (v->x * e->gnormy);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(300)
									Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(300)
									e->tp1 = tmp45;
								}
								HX_STACK_LINE(300)
								u = v;
								HX_STACK_LINE(300)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 tmp33 = p->gverts->next;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 v = tmp33;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(300)
							{
								HX_STACK_LINE(300)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(300)
								ite = ite->next;
								HX_STACK_LINE(300)
								{
									HX_STACK_LINE(300)
									Float tmp34 = (b2->axisy * e->lnormx);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(300)
									Float tmp35 = (b2->axisx * e->lnormy);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(300)
									Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(300)
									e->gnormx = tmp36;
									HX_STACK_LINE(300)
									Float tmp37 = (e->lnormx * b2->axisx);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(300)
									Float tmp38 = (e->lnormy * b2->axisy);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(300)
									Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(300)
									e->gnormy = tmp39;
								}
								HX_STACK_LINE(300)
								Float tmp34 = (b2->posx * e->gnormx);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(300)
								Float tmp35 = (b2->posy * e->gnormy);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(300)
								Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(300)
								Float tmp37 = e->lprojection;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(300)
								Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(300)
								e->gprojection = tmp38;
								HX_STACK_LINE(300)
								Float tmp39 = (u->y * e->gnormx);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(300)
								Float tmp40 = (u->x * e->gnormy);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(300)
								Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(300)
								e->tp0 = tmp41;
								HX_STACK_LINE(300)
								Float tmp42 = (v->y * e->gnormx);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(300)
								Float tmp43 = (v->x * e->gnormy);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(300)
								Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(300)
								e->tp1 = tmp44;
							}
						}
					}
				}
				HX_STACK_LINE(301)
				Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
					HX_STACK_LINE(301)
					::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
					HX_STACK_LINE(301)
					::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(301)
					::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
					HX_STACK_LINE(301)
					Float upperBound = ((Float)1e100);		HX_STACK_VAR(upperBound,"upperBound");
					HX_STACK_LINE(301)
					bool tmp30 = (s11->type == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(301)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(301)
					if ((tmp30)){
						HX_STACK_LINE(301)
						tmp31 = (s21->type == (int)0);
					}
					else{
						HX_STACK_LINE(301)
						tmp31 = false;
					}
					HX_STACK_LINE(301)
					if ((tmp31)){
						HX_STACK_LINE(301)
						::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
						HX_STACK_LINE(301)
						::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
						HX_STACK_LINE(301)
						Float dist;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(301)
							Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
							HX_STACK_LINE(301)
							{
								HX_STACK_LINE(301)
								Float tmp32 = (c21->worldCOMx - c11->worldCOMx);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(301)
								nx = tmp32;
								HX_STACK_LINE(301)
								Float tmp33 = (c21->worldCOMy - c11->worldCOMy);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(301)
								ny = tmp33;
							}
							HX_STACK_LINE(301)
							Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(301)
							{
								HX_STACK_LINE(301)
								Float tmp33 = (nx * nx);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(301)
								Float tmp34 = (ny * ny);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(301)
								Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(301)
								tmp32 = ::Math_obj::sqrt(tmp35);
							}
							HX_STACK_LINE(301)
							Float len = tmp32;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(301)
							Float tmp33 = len;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(301)
							Float tmp34 = (c11->radius + c21->radius);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(301)
							Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(301)
							dist = tmp35;
							HX_STACK_LINE(301)
							bool tmp36 = (dist < upperBound);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(301)
							if ((tmp36)){
								HX_STACK_LINE(301)
								bool tmp37 = (len == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(301)
								if ((tmp37)){
									HX_STACK_LINE(301)
									nx = (int)1;
									HX_STACK_LINE(301)
									ny = (int)0;
									HX_STACK_LINE(301)
									{
									}
								}
								else{
									HX_STACK_LINE(301)
									Float tmp38 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(301)
									Float t = tmp38;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(301)
									hx::MultEq(nx,t);
									HX_STACK_LINE(301)
									hx::MultEq(ny,t);
								}
								HX_STACK_LINE(301)
								{
									HX_STACK_LINE(301)
									Float t = c11->radius;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(301)
									Float tmp38 = c11->worldCOMx;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(301)
									Float tmp39 = (nx * t);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(301)
									Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(301)
									w1->x = tmp40;
									HX_STACK_LINE(301)
									Float tmp41 = c11->worldCOMy;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(301)
									Float tmp42 = (ny * t);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(301)
									Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(301)
									w1->y = tmp43;
								}
								HX_STACK_LINE(301)
								{
									HX_STACK_LINE(301)
									Float tmp38 = c21->radius;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(301)
									Float tmp39 = -(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(301)
									Float t = tmp39;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(301)
									Float tmp40 = c21->worldCOMx;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(301)
									Float tmp41 = (nx * t);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(301)
									Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(301)
									w2->x = tmp42;
									HX_STACK_LINE(301)
									Float tmp43 = c21->worldCOMy;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(301)
									Float tmp44 = (ny * t);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(301)
									Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(301)
									w2->y = tmp45;
								}
								HX_STACK_LINE(301)
								{
									HX_STACK_LINE(301)
									axis->x = nx;
									HX_STACK_LINE(301)
									axis->y = ny;
									HX_STACK_LINE(301)
									{
									}
								}
							}
						}
						HX_STACK_LINE(301)
						tmp29 = dist;
					}
					else{
						HX_STACK_LINE(301)
						bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
						HX_STACK_LINE(301)
						bool tmp32 = (s11->type == (int)0);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(301)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(301)
						if ((tmp32)){
							HX_STACK_LINE(301)
							tmp33 = (s21->type == (int)1);
						}
						else{
							HX_STACK_LINE(301)
							tmp33 = false;
						}
						HX_STACK_LINE(301)
						if ((tmp33)){
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Shape tmp34 = s11;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(301)
							s11 = s21;
							HX_STACK_LINE(301)
							s21 = tmp34;
							HX_STACK_LINE(301)
							::zpp_nape::geom::ZPP_Vec2 tmp210 = w1;		HX_STACK_VAR(tmp210,"tmp210");
							HX_STACK_LINE(301)
							w1 = w2;
							HX_STACK_LINE(301)
							w2 = tmp210;
							HX_STACK_LINE(301)
							swapped = true;
						}
						HX_STACK_LINE(301)
						bool tmp34 = (s11->type == (int)1);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(301)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(301)
						if ((tmp34)){
							HX_STACK_LINE(301)
							tmp35 = (s21->type == (int)0);
						}
						else{
							HX_STACK_LINE(301)
							tmp35 = false;
						}
						HX_STACK_LINE(301)
						if ((tmp35)){
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
							HX_STACK_LINE(301)
							Float tmp36 = ((Float)-1e+100);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(301)
							Float best = tmp36;		HX_STACK_VAR(best,"best");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
							HX_STACK_LINE(301)
							{
								HX_STACK_LINE(301)
								::zpp_nape::util::ZNPNode_ZPP_Edge tmp37 = poly->edges->head;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(301)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp37;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(301)
								while((true)){
									HX_STACK_LINE(301)
									bool tmp38 = (cx_ite != null());		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(301)
									bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(301)
									if ((tmp39)){
										HX_STACK_LINE(301)
										break;
									}
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										Float tmp40 = (a->gnormx * circle->worldCOMx);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(301)
										Float tmp41 = (a->gnormy * circle->worldCOMy);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(301)
										Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(301)
										Float tmp43 = a->gprojection;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(301)
										Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(301)
										Float tmp45 = circle->radius;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(301)
										Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(301)
										Float dist = tmp46;		HX_STACK_VAR(dist,"dist");
										HX_STACK_LINE(301)
										bool tmp47 = (dist > upperBound);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(301)
										if ((tmp47)){
											HX_STACK_LINE(301)
											best = dist;
											HX_STACK_LINE(301)
											break;
										}
										HX_STACK_LINE(301)
										bool tmp48 = (dist > (int)0);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(301)
										if ((tmp48)){
											HX_STACK_LINE(301)
											bool tmp49 = (dist > best);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(301)
											if ((tmp49)){
												HX_STACK_LINE(301)
												best = dist;
												HX_STACK_LINE(301)
												a0 = a;
											}
										}
										else{
											HX_STACK_LINE(301)
											bool tmp49 = (best < (int)0);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(301)
											bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(301)
											if ((tmp49)){
												HX_STACK_LINE(301)
												tmp50 = (dist > best);
											}
											else{
												HX_STACK_LINE(301)
												tmp50 = false;
											}
											HX_STACK_LINE(301)
											if ((tmp50)){
												HX_STACK_LINE(301)
												best = dist;
												HX_STACK_LINE(301)
												a0 = a;
											}
										}
									}
									HX_STACK_LINE(301)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(301)
							bool tmp37 = (best < upperBound);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(301)
							if ((tmp37)){
								HX_STACK_LINE(301)
								::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
								HX_STACK_LINE(301)
								::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
								HX_STACK_LINE(301)
								Float tmp38 = (circle->worldCOMy * a0->gnormx);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(301)
								Float tmp39 = (circle->worldCOMx * a0->gnormy);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(301)
								Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(301)
								Float dt = tmp40;		HX_STACK_VAR(dt,"dt");
								HX_STACK_LINE(301)
								Float tmp41 = dt;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(301)
								Float tmp42 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(301)
								Float tmp43 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(301)
								Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(301)
								bool tmp45 = (tmp41 <= tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(301)
								if ((tmp45)){
									HX_STACK_LINE(301)
									Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(301)
									Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										Float tmp46 = (circle->worldCOMx - v0->x);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(301)
										nx = tmp46;
										HX_STACK_LINE(301)
										Float tmp47 = (circle->worldCOMy - v0->y);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(301)
										ny = tmp47;
									}
									HX_STACK_LINE(301)
									Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										Float tmp47 = (nx * nx);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(301)
										Float tmp48 = (ny * ny);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(301)
										Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(301)
										tmp46 = ::Math_obj::sqrt(tmp49);
									}
									HX_STACK_LINE(301)
									Float len = tmp46;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(301)
									Float tmp47 = len;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(301)
									Float tmp48 = circle->radius;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(301)
									Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(301)
									best = tmp49;
									HX_STACK_LINE(301)
									bool tmp50 = (best < upperBound);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(301)
									if ((tmp50)){
										HX_STACK_LINE(301)
										bool tmp51 = (len == (int)0);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(301)
										if ((tmp51)){
											HX_STACK_LINE(301)
											nx = (int)1;
											HX_STACK_LINE(301)
											ny = (int)0;
											HX_STACK_LINE(301)
											{
											}
										}
										else{
											HX_STACK_LINE(301)
											Float tmp52 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(301)
											Float t = tmp52;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											hx::MultEq(nx,t);
											HX_STACK_LINE(301)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											int t = (int)0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp52 = v0->x;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(301)
											Float tmp53 = (nx * t);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(301)
											Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(301)
											w1->x = tmp54;
											HX_STACK_LINE(301)
											Float tmp55 = v0->y;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(301)
											Float tmp56 = (ny * t);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(301)
											Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(301)
											w1->y = tmp57;
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp52 = circle->radius;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(301)
											Float tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(301)
											Float t = tmp53;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp54 = circle->worldCOMx;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(301)
											Float tmp55 = (nx * t);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(301)
											Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(301)
											w2->x = tmp56;
											HX_STACK_LINE(301)
											Float tmp57 = circle->worldCOMy;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(301)
											Float tmp58 = (ny * t);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(301)
											Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(301)
											w2->y = tmp59;
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											axis->x = nx;
											HX_STACK_LINE(301)
											axis->y = ny;
											HX_STACK_LINE(301)
											{
											}
										}
									}
								}
								else{
									HX_STACK_LINE(301)
									Float tmp46 = dt;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(301)
									Float tmp47 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(301)
									Float tmp48 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(301)
									Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(301)
									bool tmp50 = (tmp46 >= tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(301)
									if ((tmp50)){
										HX_STACK_LINE(301)
										Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
										HX_STACK_LINE(301)
										Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp51 = (circle->worldCOMx - v1->x);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(301)
											nx = tmp51;
											HX_STACK_LINE(301)
											Float tmp52 = (circle->worldCOMy - v1->y);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(301)
											ny = tmp52;
										}
										HX_STACK_LINE(301)
										Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp52 = (nx * nx);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(301)
											Float tmp53 = (ny * ny);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(301)
											Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(301)
											tmp51 = ::Math_obj::sqrt(tmp54);
										}
										HX_STACK_LINE(301)
										Float len = tmp51;		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(301)
										Float tmp52 = len;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(301)
										Float tmp53 = circle->radius;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(301)
										Float tmp54 = (tmp52 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(301)
										best = tmp54;
										HX_STACK_LINE(301)
										bool tmp55 = (best < upperBound);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(301)
										if ((tmp55)){
											HX_STACK_LINE(301)
											bool tmp56 = (len == (int)0);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(301)
											if ((tmp56)){
												HX_STACK_LINE(301)
												nx = (int)1;
												HX_STACK_LINE(301)
												ny = (int)0;
												HX_STACK_LINE(301)
												{
												}
											}
											else{
												HX_STACK_LINE(301)
												Float tmp57 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(301)
												Float t = tmp57;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(301)
												hx::MultEq(nx,t);
												HX_STACK_LINE(301)
												hx::MultEq(ny,t);
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												int t = (int)0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(301)
												Float tmp57 = v1->x;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(301)
												Float tmp58 = (nx * t);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(301)
												Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(301)
												w1->x = tmp59;
												HX_STACK_LINE(301)
												Float tmp60 = v1->y;		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(301)
												Float tmp61 = (ny * t);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(301)
												Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(301)
												w1->y = tmp62;
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp57 = circle->radius;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(301)
												Float tmp58 = -(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(301)
												Float t = tmp58;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(301)
												Float tmp59 = circle->worldCOMx;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(301)
												Float tmp60 = (nx * t);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(301)
												Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(301)
												w2->x = tmp61;
												HX_STACK_LINE(301)
												Float tmp62 = circle->worldCOMy;		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(301)
												Float tmp63 = (ny * t);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(301)
												Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(301)
												w2->y = tmp64;
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												axis->x = nx;
												HX_STACK_LINE(301)
												axis->y = ny;
												HX_STACK_LINE(301)
												{
												}
											}
										}
									}
									else{
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp51 = circle->radius;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(301)
											Float tmp52 = -(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(301)
											Float t = tmp52;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp53 = circle->worldCOMx;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(301)
											Float tmp54 = (a0->gnormx * t);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(301)
											Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(301)
											w2->x = tmp55;
											HX_STACK_LINE(301)
											Float tmp56 = circle->worldCOMy;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(301)
											Float tmp57 = (a0->gnormy * t);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(301)
											Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(301)
											w2->y = tmp58;
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp51 = best;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(301)
											Float tmp52 = -(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(301)
											Float t = tmp52;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp53 = w2->x;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(301)
											Float tmp54 = (a0->gnormx * t);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(301)
											Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(301)
											w1->x = tmp55;
											HX_STACK_LINE(301)
											Float tmp56 = w2->y;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(301)
											Float tmp57 = (a0->gnormy * t);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(301)
											Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(301)
											w1->y = tmp58;
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											axis->x = a0->gnormx;
											HX_STACK_LINE(301)
											axis->y = a0->gnormy;
											HX_STACK_LINE(301)
											{
											}
										}
									}
								}
							}
							HX_STACK_LINE(301)
							bool tmp38 = swapped;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(301)
							if ((tmp38)){
								HX_STACK_LINE(301)
								Float tmp39 = axis->x;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(301)
								Float tmp40 = -(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(301)
								axis->x = tmp40;
								HX_STACK_LINE(301)
								Float tmp41 = axis->y;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(301)
								Float tmp42 = -(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(301)
								axis->y = tmp42;
							}
							HX_STACK_LINE(301)
							tmp29 = best;
						}
						else{
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
							HX_STACK_LINE(301)
							Float tmp36 = ((Float)-1e+100);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(301)
							Float best = tmp36;		HX_STACK_VAR(best,"best");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
							HX_STACK_LINE(301)
							int besti = (int)0;		HX_STACK_VAR(besti,"besti");
							HX_STACK_LINE(301)
							{
								HX_STACK_LINE(301)
								::zpp_nape::util::ZNPNode_ZPP_Edge tmp37 = p1->edges->head;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(301)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp37;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(301)
								while((true)){
									HX_STACK_LINE(301)
									bool tmp38 = (cx_ite != null());		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(301)
									bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(301)
									if ((tmp39)){
										HX_STACK_LINE(301)
										break;
									}
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											::zpp_nape::geom::ZPP_Vec2 tmp40 = p2->gverts->next;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(301)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp40;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(301)
											while((true)){
												HX_STACK_LINE(301)
												bool tmp41 = (cx_ite1 != null());		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(301)
												bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(301)
												if ((tmp42)){
													HX_STACK_LINE(301)
													break;
												}
												HX_STACK_LINE(301)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(301)
												{
													HX_STACK_LINE(301)
													Float tmp43 = (a->gnormx * v->x);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(301)
													Float tmp44 = (a->gnormy * v->y);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(301)
													Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(301)
													Float k = tmp45;		HX_STACK_VAR(k,"k");
													HX_STACK_LINE(301)
													bool tmp46 = (k < min);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(301)
													if ((tmp46)){
														HX_STACK_LINE(301)
														min = k;
													}
												}
												HX_STACK_LINE(301)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(301)
										hx::SubEq(min,a->gprojection);
										HX_STACK_LINE(301)
										bool tmp40 = (min > upperBound);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(301)
										if ((tmp40)){
											HX_STACK_LINE(301)
											best = min;
											HX_STACK_LINE(301)
											break;
										}
										HX_STACK_LINE(301)
										bool tmp41 = (min > (int)0);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(301)
										if ((tmp41)){
											HX_STACK_LINE(301)
											bool tmp42 = (min > best);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(301)
											if ((tmp42)){
												HX_STACK_LINE(301)
												best = min;
												HX_STACK_LINE(301)
												a1 = a;
												HX_STACK_LINE(301)
												besti = (int)1;
											}
										}
										else{
											HX_STACK_LINE(301)
											bool tmp42 = (best < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(301)
											bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(301)
											if ((tmp42)){
												HX_STACK_LINE(301)
												tmp43 = (min > best);
											}
											else{
												HX_STACK_LINE(301)
												tmp43 = false;
											}
											HX_STACK_LINE(301)
											if ((tmp43)){
												HX_STACK_LINE(301)
												best = min;
												HX_STACK_LINE(301)
												a1 = a;
												HX_STACK_LINE(301)
												besti = (int)1;
											}
										}
									}
									HX_STACK_LINE(301)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(301)
							bool tmp37 = (best < upperBound);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(301)
							if ((tmp37)){
								HX_STACK_LINE(301)
								{
									HX_STACK_LINE(301)
									::zpp_nape::util::ZNPNode_ZPP_Edge tmp38 = p2->edges->head;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(301)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp38;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(301)
									while((true)){
										HX_STACK_LINE(301)
										bool tmp39 = (cx_ite != null());		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(301)
										bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(301)
										if ((tmp40)){
											HX_STACK_LINE(301)
											break;
										}
										HX_STACK_LINE(301)
										::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												::zpp_nape::geom::ZPP_Vec2 tmp41 = p1->gverts->next;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(301)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp41;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(301)
												while((true)){
													HX_STACK_LINE(301)
													bool tmp42 = (cx_ite1 != null());		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(301)
													bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(301)
													if ((tmp43)){
														HX_STACK_LINE(301)
														break;
													}
													HX_STACK_LINE(301)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(301)
													{
														HX_STACK_LINE(301)
														Float tmp44 = (a->gnormx * v->x);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(301)
														Float tmp45 = (a->gnormy * v->y);		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(301)
														Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(301)
														Float k = tmp46;		HX_STACK_VAR(k,"k");
														HX_STACK_LINE(301)
														bool tmp47 = (k < min);		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(301)
														if ((tmp47)){
															HX_STACK_LINE(301)
															min = k;
														}
													}
													HX_STACK_LINE(301)
													cx_ite1 = cx_ite1->next;
												}
											}
											HX_STACK_LINE(301)
											hx::SubEq(min,a->gprojection);
											HX_STACK_LINE(301)
											bool tmp41 = (min > upperBound);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(301)
											if ((tmp41)){
												HX_STACK_LINE(301)
												best = min;
												HX_STACK_LINE(301)
												break;
											}
											HX_STACK_LINE(301)
											bool tmp42 = (min > (int)0);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(301)
											if ((tmp42)){
												HX_STACK_LINE(301)
												bool tmp43 = (min > best);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(301)
												if ((tmp43)){
													HX_STACK_LINE(301)
													best = min;
													HX_STACK_LINE(301)
													a2 = a;
													HX_STACK_LINE(301)
													besti = (int)2;
												}
											}
											else{
												HX_STACK_LINE(301)
												bool tmp43 = (best < (int)0);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(301)
												bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(301)
												if ((tmp43)){
													HX_STACK_LINE(301)
													tmp44 = (min > best);
												}
												else{
													HX_STACK_LINE(301)
													tmp44 = false;
												}
												HX_STACK_LINE(301)
												if ((tmp44)){
													HX_STACK_LINE(301)
													best = min;
													HX_STACK_LINE(301)
													a2 = a;
													HX_STACK_LINE(301)
													besti = (int)2;
												}
											}
										}
										HX_STACK_LINE(301)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(301)
								bool tmp38 = (best < upperBound);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(301)
								if ((tmp38)){
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
									HX_STACK_LINE(301)
									bool tmp39 = (besti == (int)1);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(301)
									if ((tmp39)){
										HX_STACK_LINE(301)
										q1 = p1;
										HX_STACK_LINE(301)
										q2 = p2;
										HX_STACK_LINE(301)
										ax = a1;
									}
									else{
										HX_STACK_LINE(301)
										q1 = p2;
										HX_STACK_LINE(301)
										q2 = p1;
										HX_STACK_LINE(301)
										ax = a2;
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 tmp40 = w1;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(301)
										w1 = w2;
										HX_STACK_LINE(301)
										w2 = tmp40;
										HX_STACK_LINE(301)
										bool tmp41 = swapped;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(301)
										bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(301)
										swapped = tmp42;
									}
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
									HX_STACK_LINE(301)
									Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										::zpp_nape::util::ZNPNode_ZPP_Edge tmp40 = q2->edges->head;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(301)
										::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp40;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(301)
										while((true)){
											HX_STACK_LINE(301)
											bool tmp41 = (cx_ite != null());		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(301)
											bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(301)
											if ((tmp42)){
												HX_STACK_LINE(301)
												break;
											}
											HX_STACK_LINE(301)
											::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp43 = (ax->gnormx * a->gnormx);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(301)
												Float tmp44 = (ax->gnormy * a->gnormy);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(301)
												Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(301)
												Float k = tmp45;		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(301)
												bool tmp46 = (k < min);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(301)
												if ((tmp46)){
													HX_STACK_LINE(301)
													min = k;
													HX_STACK_LINE(301)
													ay = a;
												}
											}
											HX_STACK_LINE(301)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(301)
									bool tmp40 = swapped;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(301)
									if ((tmp40)){
										HX_STACK_LINE(301)
										Float tmp41 = ax->gnormx;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(301)
										Float tmp42 = -(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(301)
										axis->x = tmp42;
										HX_STACK_LINE(301)
										Float tmp43 = ax->gnormy;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(301)
										Float tmp44 = -(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(301)
										axis->y = tmp44;
										HX_STACK_LINE(301)
										{
										}
									}
									else{
										HX_STACK_LINE(301)
										axis->x = ax->gnormx;
										HX_STACK_LINE(301)
										axis->y = ax->gnormy;
										HX_STACK_LINE(301)
										{
										}
									}
									HX_STACK_LINE(301)
									bool tmp41 = (best >= (int)0);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(301)
									if ((tmp41)){
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
										HX_STACK_LINE(301)
										Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
										HX_STACK_LINE(301)
										Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
										HX_STACK_LINE(301)
										Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
										HX_STACK_LINE(301)
										Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp42 = (v1->x - v0->x);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(301)
											vx = tmp42;
											HX_STACK_LINE(301)
											Float tmp43 = (v1->y - v0->y);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(301)
											vy = tmp43;
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp42 = (q11->x - q0->x);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(301)
											qx = tmp42;
											HX_STACK_LINE(301)
											Float tmp43 = (q11->y - q0->y);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(301)
											qy = tmp43;
										}
										HX_STACK_LINE(301)
										Float tmp42 = (vx * vx);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(301)
										Float tmp43 = (vy * vy);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(301)
										Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(301)
										Float tmp45 = (Float((int)1) / Float(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(301)
										Float vdot = tmp45;		HX_STACK_VAR(vdot,"vdot");
										HX_STACK_LINE(301)
										Float tmp46 = (qx * qx);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(301)
										Float tmp47 = (qy * qy);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(301)
										Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(301)
										Float tmp49 = (Float((int)1) / Float(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(301)
										Float qdot = tmp49;		HX_STACK_VAR(qdot,"qdot");
										HX_STACK_LINE(301)
										Float tmp50 = vx;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(301)
										Float tmp51 = (v0->x - q0->x);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(301)
										Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(301)
										Float tmp53 = vy;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(301)
										Float tmp54 = (v0->y - q0->y);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(301)
										Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(301)
										Float tmp56 = (tmp52 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(301)
										Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(301)
										Float tmp58 = vdot;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(301)
										Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(301)
										Float t1 = tmp59;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(301)
										Float tmp60 = vx;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(301)
										Float tmp61 = (v0->x - q11->x);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(301)
										Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(301)
										Float tmp63 = vy;		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(301)
										Float tmp64 = (v0->y - q11->y);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(301)
										Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(301)
										Float tmp66 = (tmp62 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(301)
										Float tmp67 = -(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(301)
										Float tmp68 = vdot;		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(301)
										Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(301)
										Float t2 = tmp69;		HX_STACK_VAR(t2,"t2");
										HX_STACK_LINE(301)
										Float tmp70 = qx;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(301)
										Float tmp71 = (q0->x - v0->x);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(301)
										Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(301)
										Float tmp73 = qy;		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(301)
										Float tmp74 = (q0->y - v0->y);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(301)
										Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(301)
										Float tmp76 = (tmp72 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(301)
										Float tmp77 = -(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(301)
										Float tmp78 = qdot;		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(301)
										Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(301)
										Float s12 = tmp79;		HX_STACK_VAR(s12,"s12");
										HX_STACK_LINE(301)
										Float tmp80 = qx;		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(301)
										Float tmp81 = (q0->x - v1->x);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(301)
										Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(301)
										Float tmp83 = qy;		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(301)
										Float tmp84 = (q0->y - v1->y);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(301)
										Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(301)
										Float tmp86 = (tmp82 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(301)
										Float tmp87 = -(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(301)
										Float tmp88 = qdot;		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(301)
										Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(301)
										Float s22 = tmp89;		HX_STACK_VAR(s22,"s22");
										HX_STACK_LINE(301)
										bool tmp90 = (t1 < (int)0);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(301)
										if ((tmp90)){
											HX_STACK_LINE(301)
											t1 = (int)0;
										}
										else{
											HX_STACK_LINE(301)
											bool tmp91 = (t1 > (int)1);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(301)
											if ((tmp91)){
												HX_STACK_LINE(301)
												t1 = (int)1;
											}
										}
										HX_STACK_LINE(301)
										bool tmp91 = (t2 < (int)0);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(301)
										if ((tmp91)){
											HX_STACK_LINE(301)
											t2 = (int)0;
										}
										else{
											HX_STACK_LINE(301)
											bool tmp92 = (t2 > (int)1);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(301)
											if ((tmp92)){
												HX_STACK_LINE(301)
												t2 = (int)1;
											}
										}
										HX_STACK_LINE(301)
										bool tmp92 = (s12 < (int)0);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(301)
										if ((tmp92)){
											HX_STACK_LINE(301)
											s12 = (int)0;
										}
										else{
											HX_STACK_LINE(301)
											bool tmp93 = (s12 > (int)1);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(301)
											if ((tmp93)){
												HX_STACK_LINE(301)
												s12 = (int)1;
											}
										}
										HX_STACK_LINE(301)
										bool tmp93 = (s22 < (int)0);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(301)
										if ((tmp93)){
											HX_STACK_LINE(301)
											s22 = (int)0;
										}
										else{
											HX_STACK_LINE(301)
											bool tmp94 = (s22 > (int)1);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(301)
											if ((tmp94)){
												HX_STACK_LINE(301)
												s22 = (int)1;
											}
										}
										HX_STACK_LINE(301)
										Float f1x = ((Float)0.0);		HX_STACK_VAR(f1x,"f1x");
										HX_STACK_LINE(301)
										Float f1y = ((Float)0.0);		HX_STACK_VAR(f1y,"f1y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = t1;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp94 = v0->x;		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(301)
											Float tmp95 = (vx * t);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(301)
											Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(301)
											f1x = tmp96;
											HX_STACK_LINE(301)
											Float tmp97 = v0->y;		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(301)
											Float tmp98 = (vy * t);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(301)
											Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(301)
											f1y = tmp99;
										}
										HX_STACK_LINE(301)
										Float f2x = ((Float)0.0);		HX_STACK_VAR(f2x,"f2x");
										HX_STACK_LINE(301)
										Float f2y = ((Float)0.0);		HX_STACK_VAR(f2y,"f2y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = t2;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp94 = v0->x;		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(301)
											Float tmp95 = (vx * t);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(301)
											Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(301)
											f2x = tmp96;
											HX_STACK_LINE(301)
											Float tmp97 = v0->y;		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(301)
											Float tmp98 = (vy * t);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(301)
											Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(301)
											f2y = tmp99;
										}
										HX_STACK_LINE(301)
										Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
										HX_STACK_LINE(301)
										Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = s12;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp94 = q0->x;		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(301)
											Float tmp95 = (qx * t);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(301)
											Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(301)
											g1x = tmp96;
											HX_STACK_LINE(301)
											Float tmp97 = q0->y;		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(301)
											Float tmp98 = (qy * t);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(301)
											Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(301)
											g1y = tmp99;
										}
										HX_STACK_LINE(301)
										Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
										HX_STACK_LINE(301)
										Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = s22;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp94 = q0->x;		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(301)
											Float tmp95 = (qx * t);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(301)
											Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(301)
											g2x = tmp96;
											HX_STACK_LINE(301)
											Float tmp97 = q0->y;		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(301)
											Float tmp98 = (qy * t);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(301)
											Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(301)
											g2y = tmp99;
										}
										HX_STACK_LINE(301)
										Float tmp94;		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(301)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp95 = (f1x - q0->x);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(301)
												dx = tmp95;
												HX_STACK_LINE(301)
												Float tmp96 = (f1y - q0->y);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(301)
												dy = tmp96;
											}
											HX_STACK_LINE(301)
											Float tmp95 = (dx * dx);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(301)
											Float tmp96 = (dy * dy);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(301)
											tmp94 = (tmp95 + tmp96);
										}
										HX_STACK_LINE(301)
										Float d1 = tmp94;		HX_STACK_VAR(d1,"d1");
										HX_STACK_LINE(301)
										Float tmp95;		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(301)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp96 = (f2x - q11->x);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(301)
												dx = tmp96;
												HX_STACK_LINE(301)
												Float tmp97 = (f2y - q11->y);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(301)
												dy = tmp97;
											}
											HX_STACK_LINE(301)
											Float tmp96 = (dx * dx);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(301)
											Float tmp97 = (dy * dy);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(301)
											tmp95 = (tmp96 + tmp97);
										}
										HX_STACK_LINE(301)
										Float d2 = tmp95;		HX_STACK_VAR(d2,"d2");
										HX_STACK_LINE(301)
										Float tmp96;		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(301)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp97 = (g1x - v0->x);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(301)
												dx = tmp97;
												HX_STACK_LINE(301)
												Float tmp98 = (g1y - v0->y);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(301)
												dy = tmp98;
											}
											HX_STACK_LINE(301)
											Float tmp97 = (dx * dx);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(301)
											Float tmp98 = (dy * dy);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(301)
											tmp96 = (tmp97 + tmp98);
										}
										HX_STACK_LINE(301)
										Float e1 = tmp96;		HX_STACK_VAR(e1,"e1");
										HX_STACK_LINE(301)
										Float tmp97;		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(301)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp98 = (g2x - v1->x);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(301)
												dx = tmp98;
												HX_STACK_LINE(301)
												Float tmp99 = (g2y - v1->y);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(301)
												dy = tmp99;
											}
											HX_STACK_LINE(301)
											Float tmp98 = (dx * dx);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(301)
											Float tmp99 = (dy * dy);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(301)
											tmp97 = (tmp98 + tmp99);
										}
										HX_STACK_LINE(301)
										Float e2 = tmp97;		HX_STACK_VAR(e2,"e2");
										HX_STACK_LINE(301)
										Float minfx = ((Float)0.0);		HX_STACK_VAR(minfx,"minfx");
										HX_STACK_LINE(301)
										Float minfy = ((Float)0.0);		HX_STACK_VAR(minfy,"minfy");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
										HX_STACK_LINE(301)
										bool tmp98 = (d1 < d2);		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(301)
										if ((tmp98)){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												minfx = f1x;
												HX_STACK_LINE(301)
												minfy = f1y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											minq = q0;
										}
										else{
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												minfx = f2x;
												HX_STACK_LINE(301)
												minfy = f2y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											minq = q11;
											HX_STACK_LINE(301)
											d1 = d2;
										}
										HX_STACK_LINE(301)
										Float mingx = ((Float)0.0);		HX_STACK_VAR(mingx,"mingx");
										HX_STACK_LINE(301)
										Float mingy = ((Float)0.0);		HX_STACK_VAR(mingy,"mingy");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
										HX_STACK_LINE(301)
										bool tmp99 = (e1 < e2);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(301)
										if ((tmp99)){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												mingx = g1x;
												HX_STACK_LINE(301)
												mingy = g1y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											minv = v0;
										}
										else{
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												mingx = g2x;
												HX_STACK_LINE(301)
												mingy = g2y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											minv = v1;
											HX_STACK_LINE(301)
											e1 = e2;
										}
										HX_STACK_LINE(301)
										bool tmp100 = (d1 < e1);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(301)
										if ((tmp100)){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w1->x = minfx;
												HX_STACK_LINE(301)
												w1->y = minfy;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w2->x = minq->x;
												HX_STACK_LINE(301)
												w2->y = minq->y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											Float tmp101 = d1;		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(301)
											Float tmp102 = ::Math_obj::sqrt(tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(301)
											best = tmp102;
										}
										else{
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w2->x = mingx;
												HX_STACK_LINE(301)
												w2->y = mingy;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w1->x = minv->x;
												HX_STACK_LINE(301)
												w1->y = minv->y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											Float tmp101 = e1;		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(301)
											Float tmp102 = ::Math_obj::sqrt(tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(301)
											best = tmp102;
										}
										HX_STACK_LINE(301)
										bool tmp101 = (best != (int)0);		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(301)
										if ((tmp101)){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp102 = (w2->x - w1->x);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(301)
												axis->x = tmp102;
												HX_STACK_LINE(301)
												Float tmp103 = (w2->y - w1->y);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(301)
												axis->y = tmp103;
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp102 = (Float(((Float)1.0)) / Float(best));		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(301)
												Float t = tmp102;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(301)
												hx::MultEq(axis->x,t);
												HX_STACK_LINE(301)
												hx::MultEq(axis->y,t);
											}
											HX_STACK_LINE(301)
											bool tmp102 = swapped;		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(301)
											if ((tmp102)){
												HX_STACK_LINE(301)
												Float tmp103 = axis->x;		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(301)
												Float tmp104 = -(tmp103);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(301)
												axis->x = tmp104;
												HX_STACK_LINE(301)
												Float tmp105 = axis->y;		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(301)
												Float tmp106 = -(tmp105);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(301)
												axis->y = tmp106;
											}
										}
										HX_STACK_LINE(301)
										tmp29 = best;
									}
									else{
										HX_STACK_LINE(301)
										Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
										HX_STACK_LINE(301)
										Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp42 = ay->gp0->x;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(301)
											c0x = tmp42;
											HX_STACK_LINE(301)
											Float tmp43 = ay->gp0->y;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(301)
											c0y = tmp43;
											HX_STACK_LINE(301)
											{
											}
										}
										HX_STACK_LINE(301)
										Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
										HX_STACK_LINE(301)
										Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp42 = ay->gp1->x;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(301)
											c1x = tmp42;
											HX_STACK_LINE(301)
											Float tmp43 = ay->gp1->y;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(301)
											c1y = tmp43;
											HX_STACK_LINE(301)
											{
											}
										}
										HX_STACK_LINE(301)
										Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
										HX_STACK_LINE(301)
										Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp42 = (c1x - c0x);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(301)
											dvx = tmp42;
											HX_STACK_LINE(301)
											Float tmp43 = (c1y - c0y);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(301)
											dvy = tmp43;
										}
										HX_STACK_LINE(301)
										Float tmp42 = (ax->gnormy * c0x);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(301)
										Float tmp43 = (ax->gnormx * c0y);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(301)
										Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(301)
										Float d0 = tmp44;		HX_STACK_VAR(d0,"d0");
										HX_STACK_LINE(301)
										Float tmp45 = (ax->gnormy * c1x);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(301)
										Float tmp46 = (ax->gnormx * c1y);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(301)
										Float tmp47 = (tmp45 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(301)
										Float d1 = tmp47;		HX_STACK_VAR(d1,"d1");
										HX_STACK_LINE(301)
										Float tmp48 = (d1 - d0);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(301)
										Float tmp49 = (Float((int)1) / Float(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(301)
										Float den = tmp49;		HX_STACK_VAR(den,"den");
										HX_STACK_LINE(301)
										Float tmp50 = ax->tp1;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(301)
										Float tmp51 = -(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(301)
										Float tmp52 = d0;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(301)
										Float tmp53 = (tmp51 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(301)
										Float tmp54 = den;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(301)
										Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(301)
										Float t = tmp55;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(301)
										Float tmp56 = t;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(301)
										Float tmp57 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(301)
										bool tmp58 = (tmp56 > tmp57);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(301)
										if ((tmp58)){
											HX_STACK_LINE(301)
											Float t1 = t;		HX_STACK_VAR(t1,"t1");
											HX_STACK_LINE(301)
											Float tmp59 = (dvx * t1);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(301)
											hx::AddEq(c0x,tmp59);
											HX_STACK_LINE(301)
											Float tmp60 = (dvy * t1);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(301)
											hx::AddEq(c0y,tmp60);
										}
										HX_STACK_LINE(301)
										Float tmp59 = ax->tp0;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(301)
										Float tmp60 = -(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(301)
										Float tmp61 = d1;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(301)
										Float tmp62 = (tmp60 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(301)
										Float tmp63 = den;		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(301)
										Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(301)
										Float t1 = tmp64;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(301)
										Float tmp65 = t1;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(301)
										Float tmp66 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(301)
										Float tmp67 = -(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(301)
										bool tmp68 = (tmp65 < tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(301)
										if ((tmp68)){
											HX_STACK_LINE(301)
											Float t2 = t1;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(301)
											Float tmp69 = (dvx * t2);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(301)
											hx::AddEq(c1x,tmp69);
											HX_STACK_LINE(301)
											Float tmp70 = (dvy * t2);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(301)
											hx::AddEq(c1y,tmp70);
										}
										HX_STACK_LINE(301)
										Float tmp69 = (c0x * ax->gnormx);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(301)
										Float tmp70 = (c0y * ax->gnormy);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(301)
										Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(301)
										Float tmp72 = ax->gprojection;		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(301)
										Float tmp73 = (tmp71 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(301)
										Float c0d = tmp73;		HX_STACK_VAR(c0d,"c0d");
										HX_STACK_LINE(301)
										Float tmp74 = (c1x * ax->gnormx);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(301)
										Float tmp75 = (c1y * ax->gnormy);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(301)
										Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(301)
										Float tmp77 = ax->gprojection;		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(301)
										Float tmp78 = (tmp76 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(301)
										Float c1d = tmp78;		HX_STACK_VAR(c1d,"c1d");
										HX_STACK_LINE(301)
										bool tmp79 = (c0d < c1d);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(301)
										if ((tmp79)){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w2->x = c0x;
												HX_STACK_LINE(301)
												w2->y = c0y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp80 = c0d;		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(301)
												Float tmp81 = -(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(301)
												Float t2 = tmp81;		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(301)
												Float tmp82 = w2->x;		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(301)
												Float tmp83 = (ax->gnormx * t2);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(301)
												Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(301)
												w1->x = tmp84;
												HX_STACK_LINE(301)
												Float tmp85 = w2->y;		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(301)
												Float tmp86 = (ax->gnormy * t2);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(301)
												Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(301)
												w1->y = tmp87;
											}
											HX_STACK_LINE(301)
											tmp29 = c0d;
										}
										else{
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w2->x = c1x;
												HX_STACK_LINE(301)
												w2->y = c1y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp80 = c1d;		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(301)
												Float tmp81 = -(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(301)
												Float t2 = tmp81;		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(301)
												Float tmp82 = w2->x;		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(301)
												Float tmp83 = (ax->gnormx * t2);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(301)
												Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(301)
												w1->x = tmp84;
												HX_STACK_LINE(301)
												Float tmp85 = w2->y;		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(301)
												Float tmp86 = (ax->gnormy * t2);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(301)
												Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(301)
												w1->y = tmp87;
											}
											HX_STACK_LINE(301)
											tmp29 = c1d;
										}
									}
								}
								else{
									HX_STACK_LINE(301)
									tmp29 = upperBound;
								}
							}
							else{
								HX_STACK_LINE(301)
								tmp29 = upperBound;
							}
						}
					}
				}
				HX_STACK_LINE(301)
				Float tmp30 = negRadius;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(301)
				Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(301)
				Float sep1 = tmp31;		HX_STACK_VAR(sep1,"sep1");
				HX_STACK_LINE(302)
				Float tmp32 = (deltax * axis->x);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(302)
				Float tmp33 = (deltay * axis->y);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(302)
				Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(302)
				Float dot1 = tmp34;		HX_STACK_VAR(dot1,"dot1");
				HX_STACK_LINE(303)
				Float tmp35 = sep1;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(303)
				Float tmp36 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(303)
				bool tmp37 = (tmp35 < tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(303)
				if ((tmp37)){
					HX_STACK_LINE(304)
					bool tmp38 = userAPI;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(304)
					if ((tmp38)){
						HX_STACK_LINE(305)
						break;
					}
					HX_STACK_LINE(307)
					Float d1x = ((Float)0.0);		HX_STACK_VAR(d1x,"d1x");
					HX_STACK_LINE(308)
					Float d1y = ((Float)0.0);		HX_STACK_VAR(d1y,"d1y");
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(310)
						Float tmp39 = (c1->x - b1->posx);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(310)
						d1x = tmp39;
						HX_STACK_LINE(311)
						Float tmp40 = (c1->y - b1->posy);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(311)
						d1y = tmp40;
					}
					HX_STACK_LINE(313)
					Float d2x = ((Float)0.0);		HX_STACK_VAR(d2x,"d2x");
					HX_STACK_LINE(314)
					Float d2y = ((Float)0.0);		HX_STACK_VAR(d2y,"d2y");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(316)
						Float tmp39 = (c2->x - b2->posx);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(316)
						d2x = tmp39;
						HX_STACK_LINE(317)
						Float tmp40 = (c2->y - b2->posy);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(317)
						d2y = tmp40;
					}
					HX_STACK_LINE(319)
					Float tmp39 = dot1;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(319)
					Float tmp40 = b1->sweep_angvel;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(319)
					Float tmp41 = (axis->y * d1x);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(319)
					Float tmp42 = (axis->x * d1y);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(319)
					Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(319)
					Float tmp44 = (tmp40 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(319)
					Float tmp45 = (tmp39 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(319)
					Float tmp46 = b2->sweep_angvel;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(319)
					Float tmp47 = (axis->y * d2x);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(319)
					Float tmp48 = (axis->x * d2y);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(319)
					Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(319)
					Float tmp50 = (tmp46 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(319)
					Float tmp51 = (tmp45 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(319)
					Float proj = tmp51;		HX_STACK_VAR(proj,"proj");
					HX_STACK_LINE(320)
					bool tmp52 = (proj > (int)0);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(320)
					if ((tmp52)){
						HX_STACK_LINE(321)
						toi->slipped = true;
					}
					HX_STACK_LINE(323)
					bool tmp53 = (proj <= (int)0);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(323)
					bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(323)
					bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(323)
					if ((tmp54)){
						HX_STACK_LINE(323)
						Float tmp56 = sep1;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(323)
						Float tmp57 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(323)
						Float tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(323)
						Float tmp59 = (tmp58 * ((Float)0.5));		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(323)
						Float tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(323)
						tmp55 = (tmp56 < tmp60);
					}
					else{
						HX_STACK_LINE(323)
						tmp55 = true;
					}
					HX_STACK_LINE(323)
					if ((tmp55)){
						HX_STACK_LINE(324)
						break;
					}
				}
				HX_STACK_LINE(327)
				curTOI = (int)-1;
				HX_STACK_LINE(328)
				break;
			}
			HX_STACK_LINE(330)
			int tmp29 = ++(curIter);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(330)
			bool tmp30 = (tmp29 >= (int)40);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(330)
			if ((tmp30)){
				HX_STACK_LINE(331)
				bool tmp31 = (sep > negRadius);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(331)
				if ((tmp31)){
					HX_STACK_LINE(332)
					toi->failed = true;
				}
				HX_STACK_LINE(334)
				break;
			}
		}
		HX_STACK_LINE(337)
		toi->toi = curTOI;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ZPP_SweepDistance_obj,dynamicSweep,(void))

Void ZPP_SweepDistance_obj::staticSweep( ::zpp_nape::geom::ZPP_ToiEvent toi,Float timeStep,Float lowerBound,Float negRadius){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SweepDistance","staticSweep",0x284911bb,"zpp_nape.geom.ZPP_SweepDistance.staticSweep","zpp_nape/geom/SweepDistance.hx",339,0x2645f2ee)
		HX_STACK_ARG(toi,"toi")
		HX_STACK_ARG(timeStep,"timeStep")
		HX_STACK_ARG(lowerBound,"lowerBound")
		HX_STACK_ARG(negRadius,"negRadius")
		HX_STACK_LINE(340)
		::zpp_nape::shape::ZPP_Shape s1 = toi->s1;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(341)
		::zpp_nape::shape::ZPP_Shape s2 = toi->s2;		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(342)
		::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(343)
		::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(344)
		Float deltax = ((Float)0.0);		HX_STACK_VAR(deltax,"deltax");
		HX_STACK_LINE(345)
		Float deltay = ((Float)0.0);		HX_STACK_VAR(deltay,"deltay");
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(347)
			Float tmp = b1->velx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(347)
			Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(347)
			deltax = tmp1;
			HX_STACK_LINE(348)
			Float tmp2 = b1->vely;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(348)
			Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(348)
			deltay = tmp3;
			HX_STACK_LINE(357)
			{
			}
		}
		HX_STACK_LINE(366)
		Float ang1 = b1->sweep_angvel;		HX_STACK_VAR(ang1,"ang1");
		HX_STACK_LINE(367)
		bool tmp = (ang1 < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		if ((tmp)){
			HX_STACK_LINE(367)
			Float tmp1 = ang1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(367)
			Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(367)
			ang1 = tmp2;
		}
		HX_STACK_LINE(368)
		Float tmp1 = (s1->sweepCoef * ang1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(368)
		Float angBias = tmp1;		HX_STACK_VAR(angBias,"angBias");
		HX_STACK_LINE(369)
		::zpp_nape::geom::ZPP_Vec2 c1 = toi->c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(370)
		::zpp_nape::geom::ZPP_Vec2 c2 = toi->c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(371)
		::zpp_nape::geom::ZPP_Vec2 axis = toi->axis;		HX_STACK_VAR(axis,"axis");
		HX_STACK_LINE(372)
		Float curTOI = lowerBound;		HX_STACK_VAR(curTOI,"curTOI");
		HX_STACK_LINE(373)
		int curIter = (int)0;		HX_STACK_VAR(curIter,"curIter");
		HX_STACK_LINE(374)
		while((true)){
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				Float tmp2 = (curTOI * timeStep);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(391)
				Float dt = tmp2;		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(391)
				Float tmp3 = (dt - b1->sweepTime);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(391)
				Float delta = tmp3;		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(391)
				bool tmp4 = (delta != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(391)
				if ((tmp4)){
					HX_STACK_LINE(391)
					b1->sweepTime = dt;
					HX_STACK_LINE(391)
					{
						HX_STACK_LINE(391)
						Float t = delta;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(391)
						Float tmp5 = (b1->velx * t);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(391)
						hx::AddEq(b1->posx,tmp5);
						HX_STACK_LINE(391)
						Float tmp6 = (b1->vely * t);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(391)
						hx::AddEq(b1->posy,tmp6);
					}
					HX_STACK_LINE(391)
					bool tmp5 = (b1->angvel != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(391)
					if ((tmp5)){
						HX_STACK_LINE(391)
						Float tmp6 = (b1->sweep_angvel * delta);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(391)
						Float dr = tmp6;		HX_STACK_VAR(dr,"dr");
						HX_STACK_LINE(391)
						hx::AddEq(b1->rot,dr);
						HX_STACK_LINE(391)
						Float tmp7 = (dr * dr);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(391)
						bool tmp8 = (tmp7 > ((Float)0.0001));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(391)
						if ((tmp8)){
							HX_STACK_LINE(391)
							Float tmp9 = b1->rot;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(391)
							Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(391)
							b1->axisx = tmp10;
							HX_STACK_LINE(391)
							Float tmp11 = b1->rot;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(391)
							Float tmp12 = ::Math_obj::cos(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(391)
							b1->axisy = tmp12;
							HX_STACK_LINE(391)
							Dynamic();
						}
						else{
							HX_STACK_LINE(391)
							Float tmp9 = (dr * dr);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(391)
							Float d2 = tmp9;		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(391)
							Float tmp10 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(391)
							Float tmp11 = ((int)1 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(391)
							Float p = tmp11;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(391)
							Float tmp12 = (d2 * d2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(391)
							Float tmp13 = (Float(tmp12) / Float((int)8));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(391)
							Float tmp14 = ((int)1 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(391)
							Float m = tmp14;		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(391)
							Float tmp15 = (p * b1->axisx);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(391)
							Float tmp16 = (dr * b1->axisy);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(391)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(391)
							Float tmp18 = m;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(391)
							Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(391)
							Float nx = tmp19;		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(391)
							Float tmp20 = (p * b1->axisy);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(391)
							Float tmp21 = (dr * b1->axisx);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(391)
							Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(391)
							Float tmp23 = m;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(391)
							Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(391)
							b1->axisy = tmp24;
							HX_STACK_LINE(391)
							b1->axisx = nx;
						}
					}
				}
			}
			HX_STACK_LINE(392)
			{
				HX_STACK_LINE(392)
				bool tmp2 = (s1->type == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(392)
				if ((tmp2)){
					HX_STACK_LINE(392)
					Float tmp3 = b1->posx;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(392)
					Float tmp4 = (b1->axisy * s1->localCOMx);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(392)
					Float tmp5 = (b1->axisx * s1->localCOMy);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(392)
					Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(392)
					Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(392)
					s1->worldCOMx = tmp7;
					HX_STACK_LINE(392)
					Float tmp8 = b1->posy;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(392)
					Float tmp9 = (s1->localCOMx * b1->axisx);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(392)
					Float tmp10 = (s1->localCOMy * b1->axisy);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(392)
					Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(392)
					Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(392)
					s1->worldCOMy = tmp12;
				}
				else{
					HX_STACK_LINE(392)
					::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(392)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = p->lverts->next;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(392)
					::zpp_nape::geom::ZPP_Vec2 li = tmp3;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(392)
					{
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = p->gverts->next;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(392)
						while((true)){
							HX_STACK_LINE(392)
							bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(392)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(392)
							if ((tmp6)){
								HX_STACK_LINE(392)
								break;
							}
							HX_STACK_LINE(392)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(392)
							{
								HX_STACK_LINE(392)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(392)
								li = li->next;
								HX_STACK_LINE(392)
								{
									HX_STACK_LINE(392)
									Float tmp7 = b1->posx;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(392)
									Float tmp8 = (b1->axisy * l->x);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(392)
									Float tmp9 = (b1->axisx * l->y);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(392)
									Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(392)
									Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(392)
									g->x = tmp11;
									HX_STACK_LINE(392)
									Float tmp12 = b1->posy;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(392)
									Float tmp13 = (l->x * b1->axisx);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(392)
									Float tmp14 = (l->y * b1->axisy);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(392)
									Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(392)
									Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(392)
									g->y = tmp16;
								}
							}
							HX_STACK_LINE(392)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(392)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp4 = p->edges->head;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(392)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp4;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(392)
					{
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 tmp5 = p->gverts->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp5;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(392)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(392)
						while((true)){
							HX_STACK_LINE(392)
							bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(392)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(392)
							if ((tmp7)){
								HX_STACK_LINE(392)
								break;
							}
							HX_STACK_LINE(392)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(392)
							{
								HX_STACK_LINE(392)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(392)
								ite = ite->next;
								HX_STACK_LINE(392)
								{
									HX_STACK_LINE(392)
									Float tmp8 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(392)
									Float tmp9 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(392)
									Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(392)
									e->gnormx = tmp10;
									HX_STACK_LINE(392)
									Float tmp11 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(392)
									Float tmp12 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(392)
									Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(392)
									e->gnormy = tmp13;
								}
								HX_STACK_LINE(392)
								Float tmp8 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(392)
								Float tmp9 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(392)
								Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(392)
								Float tmp11 = e->lprojection;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(392)
								Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(392)
								e->gprojection = tmp12;
								HX_STACK_LINE(392)
								Float tmp13 = (u->y * e->gnormx);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(392)
								Float tmp14 = (u->x * e->gnormy);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(392)
								Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(392)
								e->tp0 = tmp15;
								HX_STACK_LINE(392)
								Float tmp16 = (v->y * e->gnormx);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(392)
								Float tmp17 = (v->x * e->gnormy);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(392)
								Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(392)
								e->tp1 = tmp18;
							}
							HX_STACK_LINE(392)
							u = v;
							HX_STACK_LINE(392)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = p->gverts->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 v = tmp6;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(392)
						{
							HX_STACK_LINE(392)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(392)
							ite = ite->next;
							HX_STACK_LINE(392)
							{
								HX_STACK_LINE(392)
								Float tmp7 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(392)
								Float tmp8 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(392)
								Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(392)
								e->gnormx = tmp9;
								HX_STACK_LINE(392)
								Float tmp10 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(392)
								Float tmp11 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(392)
								Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(392)
								e->gnormy = tmp12;
							}
							HX_STACK_LINE(392)
							Float tmp7 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(392)
							Float tmp8 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(392)
							Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(392)
							Float tmp10 = e->lprojection;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(392)
							Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(392)
							e->gprojection = tmp11;
							HX_STACK_LINE(392)
							Float tmp12 = (u->y * e->gnormx);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(392)
							Float tmp13 = (u->x * e->gnormy);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(392)
							Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(392)
							e->tp0 = tmp14;
							HX_STACK_LINE(392)
							Float tmp15 = (v->y * e->gnormx);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(392)
							Float tmp16 = (v->x * e->gnormy);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(392)
							Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(392)
							e->tp1 = tmp17;
						}
					}
				}
			}
			HX_STACK_LINE(393)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(393)
			{
				HX_STACK_LINE(393)
				::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
				HX_STACK_LINE(393)
				::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
				HX_STACK_LINE(393)
				::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(393)
				::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
				HX_STACK_LINE(393)
				Float upperBound = ((Float)1e100);		HX_STACK_VAR(upperBound,"upperBound");
				HX_STACK_LINE(393)
				bool tmp3 = (s11->type == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(393)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(393)
				if ((tmp3)){
					HX_STACK_LINE(393)
					tmp4 = (s21->type == (int)0);
				}
				else{
					HX_STACK_LINE(393)
					tmp4 = false;
				}
				HX_STACK_LINE(393)
				if ((tmp4)){
					HX_STACK_LINE(393)
					::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
					HX_STACK_LINE(393)
					::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
					HX_STACK_LINE(393)
					Float dist;		HX_STACK_VAR(dist,"dist");
					HX_STACK_LINE(393)
					{
						HX_STACK_LINE(393)
						Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
						HX_STACK_LINE(393)
						Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							Float tmp5 = (c21->worldCOMx - c11->worldCOMx);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(393)
							nx = tmp5;
							HX_STACK_LINE(393)
							Float tmp6 = (c21->worldCOMy - c11->worldCOMy);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(393)
							ny = tmp6;
						}
						HX_STACK_LINE(393)
						Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							Float tmp6 = (nx * nx);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(393)
							Float tmp7 = (ny * ny);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(393)
							Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(393)
							tmp5 = ::Math_obj::sqrt(tmp8);
						}
						HX_STACK_LINE(393)
						Float len = tmp5;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(393)
						Float tmp6 = len;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(393)
						Float tmp7 = (c11->radius + c21->radius);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(393)
						Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(393)
						dist = tmp8;
						HX_STACK_LINE(393)
						bool tmp9 = (dist < upperBound);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(393)
						if ((tmp9)){
							HX_STACK_LINE(393)
							bool tmp10 = (len == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(393)
							if ((tmp10)){
								HX_STACK_LINE(393)
								nx = (int)1;
								HX_STACK_LINE(393)
								ny = (int)0;
								HX_STACK_LINE(393)
								{
								}
							}
							else{
								HX_STACK_LINE(393)
								Float tmp11 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(393)
								Float t = tmp11;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(393)
								hx::MultEq(nx,t);
								HX_STACK_LINE(393)
								hx::MultEq(ny,t);
							}
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(393)
								Float t = c11->radius;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(393)
								Float tmp11 = c11->worldCOMx;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(393)
								Float tmp12 = (nx * t);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(393)
								Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(393)
								w1->x = tmp13;
								HX_STACK_LINE(393)
								Float tmp14 = c11->worldCOMy;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(393)
								Float tmp15 = (ny * t);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(393)
								Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(393)
								w1->y = tmp16;
							}
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(393)
								Float tmp11 = c21->radius;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(393)
								Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(393)
								Float t = tmp12;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(393)
								Float tmp13 = c21->worldCOMx;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(393)
								Float tmp14 = (nx * t);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(393)
								Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(393)
								w2->x = tmp15;
								HX_STACK_LINE(393)
								Float tmp16 = c21->worldCOMy;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(393)
								Float tmp17 = (ny * t);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(393)
								Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(393)
								w2->y = tmp18;
							}
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(393)
								axis->x = nx;
								HX_STACK_LINE(393)
								axis->y = ny;
								HX_STACK_LINE(393)
								{
								}
							}
						}
					}
					HX_STACK_LINE(393)
					tmp2 = dist;
				}
				else{
					HX_STACK_LINE(393)
					bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
					HX_STACK_LINE(393)
					bool tmp5 = (s11->type == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(393)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(393)
					if ((tmp5)){
						HX_STACK_LINE(393)
						tmp6 = (s21->type == (int)1);
					}
					else{
						HX_STACK_LINE(393)
						tmp6 = false;
					}
					HX_STACK_LINE(393)
					if ((tmp6)){
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Shape tmp7 = s11;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(393)
						s11 = s21;
						HX_STACK_LINE(393)
						s21 = tmp7;
						HX_STACK_LINE(393)
						::zpp_nape::geom::ZPP_Vec2 tmp21 = w1;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(393)
						w1 = w2;
						HX_STACK_LINE(393)
						w2 = tmp21;
						HX_STACK_LINE(393)
						swapped = true;
					}
					HX_STACK_LINE(393)
					bool tmp7 = (s11->type == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(393)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(393)
					if ((tmp7)){
						HX_STACK_LINE(393)
						tmp8 = (s21->type == (int)0);
					}
					else{
						HX_STACK_LINE(393)
						tmp8 = false;
					}
					HX_STACK_LINE(393)
					if ((tmp8)){
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
						HX_STACK_LINE(393)
						Float tmp9 = ((Float)-1e+100);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(393)
						Float best = tmp9;		HX_STACK_VAR(best,"best");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							::zpp_nape::util::ZNPNode_ZPP_Edge tmp10 = poly->edges->head;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(393)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(393)
							while((true)){
								HX_STACK_LINE(393)
								bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(393)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(393)
								if ((tmp12)){
									HX_STACK_LINE(393)
									break;
								}
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									Float tmp13 = (a->gnormx * circle->worldCOMx);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(393)
									Float tmp14 = (a->gnormy * circle->worldCOMy);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(393)
									Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(393)
									Float tmp16 = a->gprojection;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(393)
									Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(393)
									Float tmp18 = circle->radius;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(393)
									Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(393)
									Float dist = tmp19;		HX_STACK_VAR(dist,"dist");
									HX_STACK_LINE(393)
									bool tmp20 = (dist > upperBound);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(393)
									if ((tmp20)){
										HX_STACK_LINE(393)
										best = dist;
										HX_STACK_LINE(393)
										break;
									}
									HX_STACK_LINE(393)
									bool tmp21 = (dist > (int)0);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(393)
									if ((tmp21)){
										HX_STACK_LINE(393)
										bool tmp22 = (dist > best);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(393)
										if ((tmp22)){
											HX_STACK_LINE(393)
											best = dist;
											HX_STACK_LINE(393)
											a0 = a;
										}
									}
									else{
										HX_STACK_LINE(393)
										bool tmp22 = (best < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(393)
										bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(393)
										if ((tmp22)){
											HX_STACK_LINE(393)
											tmp23 = (dist > best);
										}
										else{
											HX_STACK_LINE(393)
											tmp23 = false;
										}
										HX_STACK_LINE(393)
										if ((tmp23)){
											HX_STACK_LINE(393)
											best = dist;
											HX_STACK_LINE(393)
											a0 = a;
										}
									}
								}
								HX_STACK_LINE(393)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(393)
						bool tmp10 = (best < upperBound);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(393)
						if ((tmp10)){
							HX_STACK_LINE(393)
							::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
							HX_STACK_LINE(393)
							::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(393)
							Float tmp11 = (circle->worldCOMy * a0->gnormx);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(393)
							Float tmp12 = (circle->worldCOMx * a0->gnormy);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(393)
							Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(393)
							Float dt = tmp13;		HX_STACK_VAR(dt,"dt");
							HX_STACK_LINE(393)
							Float tmp14 = dt;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(393)
							Float tmp15 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(393)
							Float tmp16 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(393)
							Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(393)
							bool tmp18 = (tmp14 <= tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(393)
							if ((tmp18)){
								HX_STACK_LINE(393)
								Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(393)
								Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									Float tmp19 = (circle->worldCOMx - v0->x);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(393)
									nx = tmp19;
									HX_STACK_LINE(393)
									Float tmp20 = (circle->worldCOMy - v0->y);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(393)
									ny = tmp20;
								}
								HX_STACK_LINE(393)
								Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									Float tmp20 = (nx * nx);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(393)
									Float tmp21 = (ny * ny);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(393)
									Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(393)
									tmp19 = ::Math_obj::sqrt(tmp22);
								}
								HX_STACK_LINE(393)
								Float len = tmp19;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(393)
								Float tmp20 = len;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(393)
								Float tmp21 = circle->radius;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(393)
								Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(393)
								best = tmp22;
								HX_STACK_LINE(393)
								bool tmp23 = (best < upperBound);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(393)
								if ((tmp23)){
									HX_STACK_LINE(393)
									bool tmp24 = (len == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(393)
									if ((tmp24)){
										HX_STACK_LINE(393)
										nx = (int)1;
										HX_STACK_LINE(393)
										ny = (int)0;
										HX_STACK_LINE(393)
										{
										}
									}
									else{
										HX_STACK_LINE(393)
										Float tmp25 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(393)
										Float t = tmp25;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										hx::MultEq(nx,t);
										HX_STACK_LINE(393)
										hx::MultEq(ny,t);
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										int t = (int)0;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp25 = v0->x;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(393)
										Float tmp26 = (nx * t);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(393)
										Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(393)
										w1->x = tmp27;
										HX_STACK_LINE(393)
										Float tmp28 = v0->y;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(393)
										Float tmp29 = (ny * t);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(393)
										Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(393)
										w1->y = tmp30;
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp25 = circle->radius;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(393)
										Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(393)
										Float t = tmp26;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp27 = circle->worldCOMx;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(393)
										Float tmp28 = (nx * t);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(393)
										Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(393)
										w2->x = tmp29;
										HX_STACK_LINE(393)
										Float tmp30 = circle->worldCOMy;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(393)
										Float tmp31 = (ny * t);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(393)
										Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(393)
										w2->y = tmp32;
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										axis->x = nx;
										HX_STACK_LINE(393)
										axis->y = ny;
										HX_STACK_LINE(393)
										{
										}
									}
								}
							}
							else{
								HX_STACK_LINE(393)
								Float tmp19 = dt;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(393)
								Float tmp20 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(393)
								Float tmp21 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(393)
								Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(393)
								bool tmp23 = (tmp19 >= tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(393)
								if ((tmp23)){
									HX_STACK_LINE(393)
									Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(393)
									Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp24 = (circle->worldCOMx - v1->x);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(393)
										nx = tmp24;
										HX_STACK_LINE(393)
										Float tmp25 = (circle->worldCOMy - v1->y);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(393)
										ny = tmp25;
									}
									HX_STACK_LINE(393)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp25 = (nx * nx);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(393)
										Float tmp26 = (ny * ny);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(393)
										Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(393)
										tmp24 = ::Math_obj::sqrt(tmp27);
									}
									HX_STACK_LINE(393)
									Float len = tmp24;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(393)
									Float tmp25 = len;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(393)
									Float tmp26 = circle->radius;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(393)
									Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(393)
									best = tmp27;
									HX_STACK_LINE(393)
									bool tmp28 = (best < upperBound);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(393)
									if ((tmp28)){
										HX_STACK_LINE(393)
										bool tmp29 = (len == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(393)
										if ((tmp29)){
											HX_STACK_LINE(393)
											nx = (int)1;
											HX_STACK_LINE(393)
											ny = (int)0;
											HX_STACK_LINE(393)
											{
											}
										}
										else{
											HX_STACK_LINE(393)
											Float tmp30 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(393)
											Float t = tmp30;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(393)
											hx::MultEq(nx,t);
											HX_STACK_LINE(393)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											int t = (int)0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(393)
											Float tmp30 = v1->x;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(393)
											Float tmp31 = (nx * t);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(393)
											Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(393)
											w1->x = tmp32;
											HX_STACK_LINE(393)
											Float tmp33 = v1->y;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(393)
											Float tmp34 = (ny * t);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(393)
											Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(393)
											w1->y = tmp35;
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp30 = circle->radius;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(393)
											Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(393)
											Float t = tmp31;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(393)
											Float tmp32 = circle->worldCOMx;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(393)
											Float tmp33 = (nx * t);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(393)
											Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(393)
											w2->x = tmp34;
											HX_STACK_LINE(393)
											Float tmp35 = circle->worldCOMy;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(393)
											Float tmp36 = (ny * t);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(393)
											Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(393)
											w2->y = tmp37;
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											axis->x = nx;
											HX_STACK_LINE(393)
											axis->y = ny;
											HX_STACK_LINE(393)
											{
											}
										}
									}
								}
								else{
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp24 = circle->radius;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(393)
										Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(393)
										Float t = tmp25;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp26 = circle->worldCOMx;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(393)
										Float tmp27 = (a0->gnormx * t);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(393)
										Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(393)
										w2->x = tmp28;
										HX_STACK_LINE(393)
										Float tmp29 = circle->worldCOMy;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(393)
										Float tmp30 = (a0->gnormy * t);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(393)
										Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(393)
										w2->y = tmp31;
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp24 = best;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(393)
										Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(393)
										Float t = tmp25;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp26 = w2->x;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(393)
										Float tmp27 = (a0->gnormx * t);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(393)
										Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(393)
										w1->x = tmp28;
										HX_STACK_LINE(393)
										Float tmp29 = w2->y;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(393)
										Float tmp30 = (a0->gnormy * t);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(393)
										Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(393)
										w1->y = tmp31;
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										axis->x = a0->gnormx;
										HX_STACK_LINE(393)
										axis->y = a0->gnormy;
										HX_STACK_LINE(393)
										{
										}
									}
								}
							}
						}
						HX_STACK_LINE(393)
						bool tmp11 = swapped;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(393)
						if ((tmp11)){
							HX_STACK_LINE(393)
							Float tmp12 = axis->x;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(393)
							Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(393)
							axis->x = tmp13;
							HX_STACK_LINE(393)
							Float tmp14 = axis->y;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(393)
							Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(393)
							axis->y = tmp15;
						}
						HX_STACK_LINE(393)
						tmp2 = best;
					}
					else{
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
						HX_STACK_LINE(393)
						Float tmp9 = ((Float)-1e+100);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(393)
						Float best = tmp9;		HX_STACK_VAR(best,"best");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
						HX_STACK_LINE(393)
						int besti = (int)0;		HX_STACK_VAR(besti,"besti");
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							::zpp_nape::util::ZNPNode_ZPP_Edge tmp10 = p1->edges->head;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(393)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(393)
							while((true)){
								HX_STACK_LINE(393)
								bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(393)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(393)
								if ((tmp12)){
									HX_STACK_LINE(393)
									break;
								}
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										::zpp_nape::geom::ZPP_Vec2 tmp13 = p2->gverts->next;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(393)
										::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp13;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(393)
										while((true)){
											HX_STACK_LINE(393)
											bool tmp14 = (cx_ite1 != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(393)
											bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(393)
											if ((tmp15)){
												HX_STACK_LINE(393)
												break;
											}
											HX_STACK_LINE(393)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(393)
											{
												HX_STACK_LINE(393)
												Float tmp16 = (a->gnormx * v->x);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(393)
												Float tmp17 = (a->gnormy * v->y);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(393)
												Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(393)
												Float k = tmp18;		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(393)
												bool tmp19 = (k < min);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(393)
												if ((tmp19)){
													HX_STACK_LINE(393)
													min = k;
												}
											}
											HX_STACK_LINE(393)
											cx_ite1 = cx_ite1->next;
										}
									}
									HX_STACK_LINE(393)
									hx::SubEq(min,a->gprojection);
									HX_STACK_LINE(393)
									bool tmp13 = (min > upperBound);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(393)
									if ((tmp13)){
										HX_STACK_LINE(393)
										best = min;
										HX_STACK_LINE(393)
										break;
									}
									HX_STACK_LINE(393)
									bool tmp14 = (min > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(393)
									if ((tmp14)){
										HX_STACK_LINE(393)
										bool tmp15 = (min > best);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(393)
										if ((tmp15)){
											HX_STACK_LINE(393)
											best = min;
											HX_STACK_LINE(393)
											a1 = a;
											HX_STACK_LINE(393)
											besti = (int)1;
										}
									}
									else{
										HX_STACK_LINE(393)
										bool tmp15 = (best < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(393)
										bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(393)
										if ((tmp15)){
											HX_STACK_LINE(393)
											tmp16 = (min > best);
										}
										else{
											HX_STACK_LINE(393)
											tmp16 = false;
										}
										HX_STACK_LINE(393)
										if ((tmp16)){
											HX_STACK_LINE(393)
											best = min;
											HX_STACK_LINE(393)
											a1 = a;
											HX_STACK_LINE(393)
											besti = (int)1;
										}
									}
								}
								HX_STACK_LINE(393)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(393)
						bool tmp10 = (best < upperBound);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(393)
						if ((tmp10)){
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(393)
								::zpp_nape::util::ZNPNode_ZPP_Edge tmp11 = p2->edges->head;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(393)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp11;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(393)
								while((true)){
									HX_STACK_LINE(393)
									bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(393)
									bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(393)
									if ((tmp13)){
										HX_STACK_LINE(393)
										break;
									}
									HX_STACK_LINE(393)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = p1->gverts->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(393)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp14;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(393)
											while((true)){
												HX_STACK_LINE(393)
												bool tmp15 = (cx_ite1 != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(393)
												bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(393)
												if ((tmp16)){
													HX_STACK_LINE(393)
													break;
												}
												HX_STACK_LINE(393)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(393)
												{
													HX_STACK_LINE(393)
													Float tmp17 = (a->gnormx * v->x);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(393)
													Float tmp18 = (a->gnormy * v->y);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(393)
													Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(393)
													Float k = tmp19;		HX_STACK_VAR(k,"k");
													HX_STACK_LINE(393)
													bool tmp20 = (k < min);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(393)
													if ((tmp20)){
														HX_STACK_LINE(393)
														min = k;
													}
												}
												HX_STACK_LINE(393)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(393)
										hx::SubEq(min,a->gprojection);
										HX_STACK_LINE(393)
										bool tmp14 = (min > upperBound);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(393)
										if ((tmp14)){
											HX_STACK_LINE(393)
											best = min;
											HX_STACK_LINE(393)
											break;
										}
										HX_STACK_LINE(393)
										bool tmp15 = (min > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(393)
										if ((tmp15)){
											HX_STACK_LINE(393)
											bool tmp16 = (min > best);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(393)
											if ((tmp16)){
												HX_STACK_LINE(393)
												best = min;
												HX_STACK_LINE(393)
												a2 = a;
												HX_STACK_LINE(393)
												besti = (int)2;
											}
										}
										else{
											HX_STACK_LINE(393)
											bool tmp16 = (best < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(393)
											bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(393)
											if ((tmp16)){
												HX_STACK_LINE(393)
												tmp17 = (min > best);
											}
											else{
												HX_STACK_LINE(393)
												tmp17 = false;
											}
											HX_STACK_LINE(393)
											if ((tmp17)){
												HX_STACK_LINE(393)
												best = min;
												HX_STACK_LINE(393)
												a2 = a;
												HX_STACK_LINE(393)
												besti = (int)2;
											}
										}
									}
									HX_STACK_LINE(393)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(393)
							bool tmp11 = (best < upperBound);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(393)
							if ((tmp11)){
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
								HX_STACK_LINE(393)
								bool tmp12 = (besti == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(393)
								if ((tmp12)){
									HX_STACK_LINE(393)
									q1 = p1;
									HX_STACK_LINE(393)
									q2 = p2;
									HX_STACK_LINE(393)
									ax = a1;
								}
								else{
									HX_STACK_LINE(393)
									q1 = p2;
									HX_STACK_LINE(393)
									q2 = p1;
									HX_STACK_LINE(393)
									ax = a2;
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 tmp13 = w1;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(393)
									w1 = w2;
									HX_STACK_LINE(393)
									w2 = tmp13;
									HX_STACK_LINE(393)
									bool tmp14 = swapped;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(393)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(393)
									swapped = tmp15;
								}
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
								HX_STACK_LINE(393)
								Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									::zpp_nape::util::ZNPNode_ZPP_Edge tmp13 = q2->edges->head;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(393)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(393)
									while((true)){
										HX_STACK_LINE(393)
										bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(393)
										bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(393)
										if ((tmp15)){
											HX_STACK_LINE(393)
											break;
										}
										HX_STACK_LINE(393)
										::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp16 = (ax->gnormx * a->gnormx);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(393)
											Float tmp17 = (ax->gnormy * a->gnormy);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(393)
											Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(393)
											Float k = tmp18;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(393)
											bool tmp19 = (k < min);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(393)
											if ((tmp19)){
												HX_STACK_LINE(393)
												min = k;
												HX_STACK_LINE(393)
												ay = a;
											}
										}
										HX_STACK_LINE(393)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(393)
								bool tmp13 = swapped;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(393)
								if ((tmp13)){
									HX_STACK_LINE(393)
									Float tmp14 = ax->gnormx;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(393)
									Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(393)
									axis->x = tmp15;
									HX_STACK_LINE(393)
									Float tmp16 = ax->gnormy;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(393)
									Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(393)
									axis->y = tmp17;
									HX_STACK_LINE(393)
									{
									}
								}
								else{
									HX_STACK_LINE(393)
									axis->x = ax->gnormx;
									HX_STACK_LINE(393)
									axis->y = ax->gnormy;
									HX_STACK_LINE(393)
									{
									}
								}
								HX_STACK_LINE(393)
								bool tmp14 = (best >= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(393)
								if ((tmp14)){
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
									HX_STACK_LINE(393)
									Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
									HX_STACK_LINE(393)
									Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
									HX_STACK_LINE(393)
									Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
									HX_STACK_LINE(393)
									Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp15 = (v1->x - v0->x);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(393)
										vx = tmp15;
										HX_STACK_LINE(393)
										Float tmp16 = (v1->y - v0->y);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(393)
										vy = tmp16;
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp15 = (q11->x - q0->x);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(393)
										qx = tmp15;
										HX_STACK_LINE(393)
										Float tmp16 = (q11->y - q0->y);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(393)
										qy = tmp16;
									}
									HX_STACK_LINE(393)
									Float tmp15 = (vx * vx);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(393)
									Float tmp16 = (vy * vy);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(393)
									Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(393)
									Float tmp18 = (Float((int)1) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(393)
									Float vdot = tmp18;		HX_STACK_VAR(vdot,"vdot");
									HX_STACK_LINE(393)
									Float tmp19 = (qx * qx);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(393)
									Float tmp20 = (qy * qy);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(393)
									Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(393)
									Float tmp22 = (Float((int)1) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(393)
									Float qdot = tmp22;		HX_STACK_VAR(qdot,"qdot");
									HX_STACK_LINE(393)
									Float tmp23 = vx;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(393)
									Float tmp24 = (v0->x - q0->x);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(393)
									Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(393)
									Float tmp26 = vy;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(393)
									Float tmp27 = (v0->y - q0->y);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(393)
									Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(393)
									Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(393)
									Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(393)
									Float tmp31 = vdot;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(393)
									Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(393)
									Float t1 = tmp32;		HX_STACK_VAR(t1,"t1");
									HX_STACK_LINE(393)
									Float tmp33 = vx;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(393)
									Float tmp34 = (v0->x - q11->x);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(393)
									Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(393)
									Float tmp36 = vy;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(393)
									Float tmp37 = (v0->y - q11->y);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(393)
									Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(393)
									Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(393)
									Float tmp40 = -(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(393)
									Float tmp41 = vdot;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(393)
									Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(393)
									Float t2 = tmp42;		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(393)
									Float tmp43 = qx;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(393)
									Float tmp44 = (q0->x - v0->x);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(393)
									Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(393)
									Float tmp46 = qy;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(393)
									Float tmp47 = (q0->y - v0->y);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(393)
									Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(393)
									Float tmp49 = (tmp45 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(393)
									Float tmp50 = -(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(393)
									Float tmp51 = qdot;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(393)
									Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(393)
									Float s12 = tmp52;		HX_STACK_VAR(s12,"s12");
									HX_STACK_LINE(393)
									Float tmp53 = qx;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(393)
									Float tmp54 = (q0->x - v1->x);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(393)
									Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(393)
									Float tmp56 = qy;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(393)
									Float tmp57 = (q0->y - v1->y);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(393)
									Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(393)
									Float tmp59 = (tmp55 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(393)
									Float tmp60 = -(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(393)
									Float tmp61 = qdot;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(393)
									Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(393)
									Float s22 = tmp62;		HX_STACK_VAR(s22,"s22");
									HX_STACK_LINE(393)
									bool tmp63 = (t1 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(393)
									if ((tmp63)){
										HX_STACK_LINE(393)
										t1 = (int)0;
									}
									else{
										HX_STACK_LINE(393)
										bool tmp64 = (t1 > (int)1);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(393)
										if ((tmp64)){
											HX_STACK_LINE(393)
											t1 = (int)1;
										}
									}
									HX_STACK_LINE(393)
									bool tmp64 = (t2 < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(393)
									if ((tmp64)){
										HX_STACK_LINE(393)
										t2 = (int)0;
									}
									else{
										HX_STACK_LINE(393)
										bool tmp65 = (t2 > (int)1);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(393)
										if ((tmp65)){
											HX_STACK_LINE(393)
											t2 = (int)1;
										}
									}
									HX_STACK_LINE(393)
									bool tmp65 = (s12 < (int)0);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(393)
									if ((tmp65)){
										HX_STACK_LINE(393)
										s12 = (int)0;
									}
									else{
										HX_STACK_LINE(393)
										bool tmp66 = (s12 > (int)1);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(393)
										if ((tmp66)){
											HX_STACK_LINE(393)
											s12 = (int)1;
										}
									}
									HX_STACK_LINE(393)
									bool tmp66 = (s22 < (int)0);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(393)
									if ((tmp66)){
										HX_STACK_LINE(393)
										s22 = (int)0;
									}
									else{
										HX_STACK_LINE(393)
										bool tmp67 = (s22 > (int)1);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(393)
										if ((tmp67)){
											HX_STACK_LINE(393)
											s22 = (int)1;
										}
									}
									HX_STACK_LINE(393)
									Float f1x = ((Float)0.0);		HX_STACK_VAR(f1x,"f1x");
									HX_STACK_LINE(393)
									Float f1y = ((Float)0.0);		HX_STACK_VAR(f1y,"f1y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = t1;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp67 = v0->x;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(393)
										Float tmp68 = (vx * t);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(393)
										Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(393)
										f1x = tmp69;
										HX_STACK_LINE(393)
										Float tmp70 = v0->y;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(393)
										Float tmp71 = (vy * t);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(393)
										Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(393)
										f1y = tmp72;
									}
									HX_STACK_LINE(393)
									Float f2x = ((Float)0.0);		HX_STACK_VAR(f2x,"f2x");
									HX_STACK_LINE(393)
									Float f2y = ((Float)0.0);		HX_STACK_VAR(f2y,"f2y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = t2;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp67 = v0->x;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(393)
										Float tmp68 = (vx * t);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(393)
										Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(393)
										f2x = tmp69;
										HX_STACK_LINE(393)
										Float tmp70 = v0->y;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(393)
										Float tmp71 = (vy * t);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(393)
										Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(393)
										f2y = tmp72;
									}
									HX_STACK_LINE(393)
									Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
									HX_STACK_LINE(393)
									Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = s12;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp67 = q0->x;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(393)
										Float tmp68 = (qx * t);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(393)
										Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(393)
										g1x = tmp69;
										HX_STACK_LINE(393)
										Float tmp70 = q0->y;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(393)
										Float tmp71 = (qy * t);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(393)
										Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(393)
										g1y = tmp72;
									}
									HX_STACK_LINE(393)
									Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
									HX_STACK_LINE(393)
									Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = s22;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp67 = q0->x;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(393)
										Float tmp68 = (qx * t);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(393)
										Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(393)
										g2x = tmp69;
										HX_STACK_LINE(393)
										Float tmp70 = q0->y;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(393)
										Float tmp71 = (qy * t);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(393)
										Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(393)
										g2y = tmp72;
									}
									HX_STACK_LINE(393)
									Float tmp67;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(393)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp68 = (f1x - q0->x);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(393)
											dx = tmp68;
											HX_STACK_LINE(393)
											Float tmp69 = (f1y - q0->y);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(393)
											dy = tmp69;
										}
										HX_STACK_LINE(393)
										Float tmp68 = (dx * dx);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(393)
										Float tmp69 = (dy * dy);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(393)
										tmp67 = (tmp68 + tmp69);
									}
									HX_STACK_LINE(393)
									Float d1 = tmp67;		HX_STACK_VAR(d1,"d1");
									HX_STACK_LINE(393)
									Float tmp68;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(393)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp69 = (f2x - q11->x);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(393)
											dx = tmp69;
											HX_STACK_LINE(393)
											Float tmp70 = (f2y - q11->y);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(393)
											dy = tmp70;
										}
										HX_STACK_LINE(393)
										Float tmp69 = (dx * dx);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(393)
										Float tmp70 = (dy * dy);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(393)
										tmp68 = (tmp69 + tmp70);
									}
									HX_STACK_LINE(393)
									Float d2 = tmp68;		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(393)
									Float tmp69;		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(393)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp70 = (g1x - v0->x);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(393)
											dx = tmp70;
											HX_STACK_LINE(393)
											Float tmp71 = (g1y - v0->y);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(393)
											dy = tmp71;
										}
										HX_STACK_LINE(393)
										Float tmp70 = (dx * dx);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(393)
										Float tmp71 = (dy * dy);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(393)
										tmp69 = (tmp70 + tmp71);
									}
									HX_STACK_LINE(393)
									Float e1 = tmp69;		HX_STACK_VAR(e1,"e1");
									HX_STACK_LINE(393)
									Float tmp70;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(393)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp71 = (g2x - v1->x);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(393)
											dx = tmp71;
											HX_STACK_LINE(393)
											Float tmp72 = (g2y - v1->y);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(393)
											dy = tmp72;
										}
										HX_STACK_LINE(393)
										Float tmp71 = (dx * dx);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(393)
										Float tmp72 = (dy * dy);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(393)
										tmp70 = (tmp71 + tmp72);
									}
									HX_STACK_LINE(393)
									Float e2 = tmp70;		HX_STACK_VAR(e2,"e2");
									HX_STACK_LINE(393)
									Float minfx = ((Float)0.0);		HX_STACK_VAR(minfx,"minfx");
									HX_STACK_LINE(393)
									Float minfy = ((Float)0.0);		HX_STACK_VAR(minfy,"minfy");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
									HX_STACK_LINE(393)
									bool tmp71 = (d1 < d2);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(393)
									if ((tmp71)){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											minfx = f1x;
											HX_STACK_LINE(393)
											minfy = f1y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										minq = q0;
									}
									else{
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											minfx = f2x;
											HX_STACK_LINE(393)
											minfy = f2y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										minq = q11;
										HX_STACK_LINE(393)
										d1 = d2;
									}
									HX_STACK_LINE(393)
									Float mingx = ((Float)0.0);		HX_STACK_VAR(mingx,"mingx");
									HX_STACK_LINE(393)
									Float mingy = ((Float)0.0);		HX_STACK_VAR(mingy,"mingy");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
									HX_STACK_LINE(393)
									bool tmp72 = (e1 < e2);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(393)
									if ((tmp72)){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											mingx = g1x;
											HX_STACK_LINE(393)
											mingy = g1y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										minv = v0;
									}
									else{
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											mingx = g2x;
											HX_STACK_LINE(393)
											mingy = g2y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										minv = v1;
										HX_STACK_LINE(393)
										e1 = e2;
									}
									HX_STACK_LINE(393)
									bool tmp73 = (d1 < e1);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(393)
									if ((tmp73)){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w1->x = minfx;
											HX_STACK_LINE(393)
											w1->y = minfy;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w2->x = minq->x;
											HX_STACK_LINE(393)
											w2->y = minq->y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										Float tmp74 = d1;		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(393)
										Float tmp75 = ::Math_obj::sqrt(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(393)
										best = tmp75;
									}
									else{
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w2->x = mingx;
											HX_STACK_LINE(393)
											w2->y = mingy;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w1->x = minv->x;
											HX_STACK_LINE(393)
											w1->y = minv->y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										Float tmp74 = e1;		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(393)
										Float tmp75 = ::Math_obj::sqrt(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(393)
										best = tmp75;
									}
									HX_STACK_LINE(393)
									bool tmp74 = (best != (int)0);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(393)
									if ((tmp74)){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp75 = (w2->x - w1->x);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(393)
											axis->x = tmp75;
											HX_STACK_LINE(393)
											Float tmp76 = (w2->y - w1->y);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(393)
											axis->y = tmp76;
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp75 = (Float(((Float)1.0)) / Float(best));		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(393)
											Float t = tmp75;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(393)
											hx::MultEq(axis->x,t);
											HX_STACK_LINE(393)
											hx::MultEq(axis->y,t);
										}
										HX_STACK_LINE(393)
										bool tmp75 = swapped;		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(393)
										if ((tmp75)){
											HX_STACK_LINE(393)
											Float tmp76 = axis->x;		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(393)
											Float tmp77 = -(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(393)
											axis->x = tmp77;
											HX_STACK_LINE(393)
											Float tmp78 = axis->y;		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(393)
											Float tmp79 = -(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(393)
											axis->y = tmp79;
										}
									}
									HX_STACK_LINE(393)
									tmp2 = best;
								}
								else{
									HX_STACK_LINE(393)
									Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
									HX_STACK_LINE(393)
									Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp15 = ay->gp0->x;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(393)
										c0x = tmp15;
										HX_STACK_LINE(393)
										Float tmp16 = ay->gp0->y;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(393)
										c0y = tmp16;
										HX_STACK_LINE(393)
										{
										}
									}
									HX_STACK_LINE(393)
									Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
									HX_STACK_LINE(393)
									Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp15 = ay->gp1->x;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(393)
										c1x = tmp15;
										HX_STACK_LINE(393)
										Float tmp16 = ay->gp1->y;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(393)
										c1y = tmp16;
										HX_STACK_LINE(393)
										{
										}
									}
									HX_STACK_LINE(393)
									Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
									HX_STACK_LINE(393)
									Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp15 = (c1x - c0x);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(393)
										dvx = tmp15;
										HX_STACK_LINE(393)
										Float tmp16 = (c1y - c0y);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(393)
										dvy = tmp16;
									}
									HX_STACK_LINE(393)
									Float tmp15 = (ax->gnormy * c0x);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(393)
									Float tmp16 = (ax->gnormx * c0y);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(393)
									Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(393)
									Float d0 = tmp17;		HX_STACK_VAR(d0,"d0");
									HX_STACK_LINE(393)
									Float tmp18 = (ax->gnormy * c1x);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(393)
									Float tmp19 = (ax->gnormx * c1y);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(393)
									Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(393)
									Float d1 = tmp20;		HX_STACK_VAR(d1,"d1");
									HX_STACK_LINE(393)
									Float tmp21 = (d1 - d0);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(393)
									Float tmp22 = (Float((int)1) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(393)
									Float den = tmp22;		HX_STACK_VAR(den,"den");
									HX_STACK_LINE(393)
									Float tmp23 = ax->tp1;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(393)
									Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(393)
									Float tmp25 = d0;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(393)
									Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(393)
									Float tmp27 = den;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(393)
									Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(393)
									Float t = tmp28;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(393)
									Float tmp29 = t;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(393)
									Float tmp30 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(393)
									bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(393)
									if ((tmp31)){
										HX_STACK_LINE(393)
										Float t1 = t;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(393)
										Float tmp32 = (dvx * t1);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(393)
										hx::AddEq(c0x,tmp32);
										HX_STACK_LINE(393)
										Float tmp33 = (dvy * t1);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(393)
										hx::AddEq(c0y,tmp33);
									}
									HX_STACK_LINE(393)
									Float tmp32 = ax->tp0;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(393)
									Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(393)
									Float tmp34 = d1;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(393)
									Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(393)
									Float tmp36 = den;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(393)
									Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(393)
									Float t1 = tmp37;		HX_STACK_VAR(t1,"t1");
									HX_STACK_LINE(393)
									Float tmp38 = t1;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(393)
									Float tmp39 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(393)
									Float tmp40 = -(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(393)
									bool tmp41 = (tmp38 < tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(393)
									if ((tmp41)){
										HX_STACK_LINE(393)
										Float t2 = t1;		HX_STACK_VAR(t2,"t2");
										HX_STACK_LINE(393)
										Float tmp42 = (dvx * t2);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(393)
										hx::AddEq(c1x,tmp42);
										HX_STACK_LINE(393)
										Float tmp43 = (dvy * t2);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(393)
										hx::AddEq(c1y,tmp43);
									}
									HX_STACK_LINE(393)
									Float tmp42 = (c0x * ax->gnormx);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(393)
									Float tmp43 = (c0y * ax->gnormy);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(393)
									Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(393)
									Float tmp45 = ax->gprojection;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(393)
									Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(393)
									Float c0d = tmp46;		HX_STACK_VAR(c0d,"c0d");
									HX_STACK_LINE(393)
									Float tmp47 = (c1x * ax->gnormx);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(393)
									Float tmp48 = (c1y * ax->gnormy);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(393)
									Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(393)
									Float tmp50 = ax->gprojection;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(393)
									Float tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(393)
									Float c1d = tmp51;		HX_STACK_VAR(c1d,"c1d");
									HX_STACK_LINE(393)
									bool tmp52 = (c0d < c1d);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(393)
									if ((tmp52)){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w2->x = c0x;
											HX_STACK_LINE(393)
											w2->y = c0y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp53 = c0d;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(393)
											Float tmp54 = -(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(393)
											Float t2 = tmp54;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(393)
											Float tmp55 = w2->x;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(393)
											Float tmp56 = (ax->gnormx * t2);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(393)
											Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(393)
											w1->x = tmp57;
											HX_STACK_LINE(393)
											Float tmp58 = w2->y;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(393)
											Float tmp59 = (ax->gnormy * t2);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(393)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(393)
											w1->y = tmp60;
										}
										HX_STACK_LINE(393)
										tmp2 = c0d;
									}
									else{
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w2->x = c1x;
											HX_STACK_LINE(393)
											w2->y = c1y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp53 = c1d;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(393)
											Float tmp54 = -(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(393)
											Float t2 = tmp54;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(393)
											Float tmp55 = w2->x;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(393)
											Float tmp56 = (ax->gnormx * t2);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(393)
											Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(393)
											w1->x = tmp57;
											HX_STACK_LINE(393)
											Float tmp58 = w2->y;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(393)
											Float tmp59 = (ax->gnormy * t2);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(393)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(393)
											w1->y = tmp60;
										}
										HX_STACK_LINE(393)
										tmp2 = c1d;
									}
								}
							}
							else{
								HX_STACK_LINE(393)
								tmp2 = upperBound;
							}
						}
						else{
							HX_STACK_LINE(393)
							tmp2 = upperBound;
						}
					}
				}
			}
			HX_STACK_LINE(393)
			Float tmp3 = negRadius;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(393)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(393)
			Float sep = tmp4;		HX_STACK_VAR(sep,"sep");
			HX_STACK_LINE(394)
			Float tmp5 = (deltax * axis->x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(394)
			Float tmp6 = (deltay * axis->y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(394)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(394)
			Float dot = tmp7;		HX_STACK_VAR(dot,"dot");
			HX_STACK_LINE(395)
			Float tmp8 = sep;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(395)
			Float tmp9 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(395)
			bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(395)
			if ((tmp10)){
				HX_STACK_LINE(396)
				Float d1x = ((Float)0.0);		HX_STACK_VAR(d1x,"d1x");
				HX_STACK_LINE(397)
				Float d1y = ((Float)0.0);		HX_STACK_VAR(d1y,"d1y");
				HX_STACK_LINE(398)
				{
					HX_STACK_LINE(399)
					Float tmp11 = (c1->x - b1->posx);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(399)
					d1x = tmp11;
					HX_STACK_LINE(400)
					Float tmp12 = (c1->y - b1->posy);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(400)
					d1y = tmp12;
				}
				HX_STACK_LINE(402)
				Float tmp11 = dot;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(402)
				Float tmp12 = b1->sweep_angvel;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(402)
				Float tmp13 = (axis->y * d1x);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(402)
				Float tmp14 = (axis->x * d1y);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(402)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(402)
				Float tmp16 = (tmp12 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(402)
				Float tmp17 = (tmp11 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(402)
				Float proj = tmp17;		HX_STACK_VAR(proj,"proj");
				HX_STACK_LINE(403)
				bool tmp18 = (proj > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(403)
				if ((tmp18)){
					HX_STACK_LINE(404)
					toi->slipped = true;
				}
				HX_STACK_LINE(406)
				bool tmp19 = (proj <= (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(406)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(406)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(406)
				if ((tmp20)){
					HX_STACK_LINE(406)
					Float tmp22 = sep;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(406)
					Float tmp23 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(406)
					Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(406)
					Float tmp25 = (tmp24 * ((Float)0.5));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(406)
					Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(406)
					tmp21 = (tmp22 < tmp26);
				}
				else{
					HX_STACK_LINE(406)
					tmp21 = true;
				}
				HX_STACK_LINE(406)
				if ((tmp21)){
					HX_STACK_LINE(407)
					break;
				}
			}
			HX_STACK_LINE(410)
			Float tmp11 = (angBias - dot);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(410)
			Float tmp12 = timeStep;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(410)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(410)
			Float denom = tmp13;		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(411)
			bool tmp14 = (denom <= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(411)
			if ((tmp14)){
				HX_STACK_LINE(412)
				curTOI = (int)-1;
				HX_STACK_LINE(413)
				break;
			}
			HX_STACK_LINE(415)
			Float tmp15 = (Float(sep) / Float(denom));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(415)
			Float delta = tmp15;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(416)
			bool tmp16 = (delta < ((Float)1e-6));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(416)
			if ((tmp16)){
				HX_STACK_LINE(416)
				delta = ((Float)1e-6);
			}
			HX_STACK_LINE(425)
			hx::AddEq(curTOI,delta);
			HX_STACK_LINE(426)
			bool tmp17 = (curTOI >= (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(426)
			if ((tmp17)){
				HX_STACK_LINE(427)
				curTOI = (int)1;
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					Float tmp18 = (curTOI * timeStep);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(444)
					Float dt = tmp18;		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(444)
					Float tmp19 = (dt - b1->sweepTime);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(444)
					Float delta1 = tmp19;		HX_STACK_VAR(delta1,"delta1");
					HX_STACK_LINE(444)
					bool tmp20 = (delta1 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(444)
					if ((tmp20)){
						HX_STACK_LINE(444)
						b1->sweepTime = dt;
						HX_STACK_LINE(444)
						{
							HX_STACK_LINE(444)
							Float t = delta1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(444)
							Float tmp21 = (b1->velx * t);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(444)
							hx::AddEq(b1->posx,tmp21);
							HX_STACK_LINE(444)
							Float tmp22 = (b1->vely * t);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(444)
							hx::AddEq(b1->posy,tmp22);
						}
						HX_STACK_LINE(444)
						bool tmp21 = (b1->angvel != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(444)
						if ((tmp21)){
							HX_STACK_LINE(444)
							Float tmp22 = (b1->sweep_angvel * delta1);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(444)
							Float dr = tmp22;		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(444)
							hx::AddEq(b1->rot,dr);
							HX_STACK_LINE(444)
							Float tmp23 = (dr * dr);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(444)
							bool tmp24 = (tmp23 > ((Float)0.0001));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(444)
							if ((tmp24)){
								HX_STACK_LINE(444)
								Float tmp25 = b1->rot;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(444)
								Float tmp26 = ::Math_obj::sin(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(444)
								b1->axisx = tmp26;
								HX_STACK_LINE(444)
								Float tmp27 = b1->rot;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(444)
								Float tmp28 = ::Math_obj::cos(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(444)
								b1->axisy = tmp28;
								HX_STACK_LINE(444)
								Dynamic();
							}
							else{
								HX_STACK_LINE(444)
								Float tmp25 = (dr * dr);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(444)
								Float d2 = tmp25;		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(444)
								Float tmp26 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(444)
								Float tmp27 = ((int)1 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(444)
								Float p = tmp27;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(444)
								Float tmp28 = (d2 * d2);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(444)
								Float tmp29 = (Float(tmp28) / Float((int)8));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(444)
								Float tmp30 = ((int)1 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(444)
								Float m = tmp30;		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(444)
								Float tmp31 = (p * b1->axisx);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(444)
								Float tmp32 = (dr * b1->axisy);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(444)
								Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(444)
								Float tmp34 = m;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(444)
								Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(444)
								Float nx = tmp35;		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(444)
								Float tmp36 = (p * b1->axisy);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(444)
								Float tmp37 = (dr * b1->axisx);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(444)
								Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(444)
								Float tmp39 = m;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(444)
								Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(444)
								b1->axisy = tmp40;
								HX_STACK_LINE(444)
								b1->axisx = nx;
							}
						}
					}
				}
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					bool tmp18 = (s1->type == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(445)
					if ((tmp18)){
						HX_STACK_LINE(445)
						Float tmp19 = b1->posx;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(445)
						Float tmp20 = (b1->axisy * s1->localCOMx);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(445)
						Float tmp21 = (b1->axisx * s1->localCOMy);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(445)
						Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(445)
						Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(445)
						s1->worldCOMx = tmp23;
						HX_STACK_LINE(445)
						Float tmp24 = b1->posy;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(445)
						Float tmp25 = (s1->localCOMx * b1->axisx);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(445)
						Float tmp26 = (s1->localCOMy * b1->axisy);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(445)
						Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(445)
						Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(445)
						s1->worldCOMy = tmp28;
					}
					else{
						HX_STACK_LINE(445)
						::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 tmp19 = p->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 li = tmp19;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 tmp20 = p->gverts->next;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp20;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(445)
							while((true)){
								HX_STACK_LINE(445)
								bool tmp21 = (cx_ite != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(445)
								bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(445)
								if ((tmp22)){
									HX_STACK_LINE(445)
									break;
								}
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(445)
									li = li->next;
									HX_STACK_LINE(445)
									{
										HX_STACK_LINE(445)
										Float tmp23 = b1->posx;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(445)
										Float tmp24 = (b1->axisy * l->x);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(445)
										Float tmp25 = (b1->axisx * l->y);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(445)
										Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(445)
										Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(445)
										g->x = tmp27;
										HX_STACK_LINE(445)
										Float tmp28 = b1->posy;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(445)
										Float tmp29 = (l->x * b1->axisx);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(445)
										Float tmp30 = (l->y * b1->axisy);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(445)
										Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(445)
										Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(445)
										g->y = tmp32;
									}
								}
								HX_STACK_LINE(445)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(445)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp20 = p->edges->head;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(445)
						::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp20;		HX_STACK_VAR(ite,"ite");
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 tmp21 = p->gverts->next;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp21;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(445)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(445)
							while((true)){
								HX_STACK_LINE(445)
								bool tmp22 = (cx_ite != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(445)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(445)
								if ((tmp23)){
									HX_STACK_LINE(445)
									break;
								}
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(445)
									ite = ite->next;
									HX_STACK_LINE(445)
									{
										HX_STACK_LINE(445)
										Float tmp24 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(445)
										Float tmp25 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(445)
										Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(445)
										e->gnormx = tmp26;
										HX_STACK_LINE(445)
										Float tmp27 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(445)
										Float tmp28 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(445)
										Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(445)
										e->gnormy = tmp29;
									}
									HX_STACK_LINE(445)
									Float tmp24 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(445)
									Float tmp25 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(445)
									Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(445)
									Float tmp27 = e->lprojection;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(445)
									Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(445)
									e->gprojection = tmp28;
									HX_STACK_LINE(445)
									Float tmp29 = (u->y * e->gnormx);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(445)
									Float tmp30 = (u->x * e->gnormy);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(445)
									Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(445)
									e->tp0 = tmp31;
									HX_STACK_LINE(445)
									Float tmp32 = (v->y * e->gnormx);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(445)
									Float tmp33 = (v->x * e->gnormy);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(445)
									Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(445)
									e->tp1 = tmp34;
								}
								HX_STACK_LINE(445)
								u = v;
								HX_STACK_LINE(445)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 tmp22 = p->gverts->next;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 v = tmp22;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(445)
								ite = ite->next;
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									Float tmp23 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(445)
									Float tmp24 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(445)
									Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(445)
									e->gnormx = tmp25;
									HX_STACK_LINE(445)
									Float tmp26 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(445)
									Float tmp27 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(445)
									Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(445)
									e->gnormy = tmp28;
								}
								HX_STACK_LINE(445)
								Float tmp23 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(445)
								Float tmp24 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(445)
								Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(445)
								Float tmp26 = e->lprojection;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(445)
								Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(445)
								e->gprojection = tmp27;
								HX_STACK_LINE(445)
								Float tmp28 = (u->y * e->gnormx);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(445)
								Float tmp29 = (u->x * e->gnormy);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(445)
								Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(445)
								e->tp0 = tmp30;
								HX_STACK_LINE(445)
								Float tmp31 = (v->y * e->gnormx);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(445)
								Float tmp32 = (v->x * e->gnormy);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(445)
								Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(445)
								e->tp1 = tmp33;
							}
						}
					}
				}
				HX_STACK_LINE(446)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
					HX_STACK_LINE(446)
					::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
					HX_STACK_LINE(446)
					::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(446)
					::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
					HX_STACK_LINE(446)
					Float upperBound = ((Float)1e100);		HX_STACK_VAR(upperBound,"upperBound");
					HX_STACK_LINE(446)
					bool tmp19 = (s11->type == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(446)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(446)
					if ((tmp19)){
						HX_STACK_LINE(446)
						tmp20 = (s21->type == (int)0);
					}
					else{
						HX_STACK_LINE(446)
						tmp20 = false;
					}
					HX_STACK_LINE(446)
					if ((tmp20)){
						HX_STACK_LINE(446)
						::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
						HX_STACK_LINE(446)
						::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
						HX_STACK_LINE(446)
						Float dist;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(446)
							Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								Float tmp21 = (c21->worldCOMx - c11->worldCOMx);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(446)
								nx = tmp21;
								HX_STACK_LINE(446)
								Float tmp22 = (c21->worldCOMy - c11->worldCOMy);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(446)
								ny = tmp22;
							}
							HX_STACK_LINE(446)
							Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								Float tmp22 = (nx * nx);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(446)
								Float tmp23 = (ny * ny);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(446)
								Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(446)
								tmp21 = ::Math_obj::sqrt(tmp24);
							}
							HX_STACK_LINE(446)
							Float len = tmp21;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(446)
							Float tmp22 = len;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(446)
							Float tmp23 = (c11->radius + c21->radius);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(446)
							Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(446)
							dist = tmp24;
							HX_STACK_LINE(446)
							bool tmp25 = (dist < upperBound);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(446)
							if ((tmp25)){
								HX_STACK_LINE(446)
								bool tmp26 = (len == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(446)
								if ((tmp26)){
									HX_STACK_LINE(446)
									nx = (int)1;
									HX_STACK_LINE(446)
									ny = (int)0;
									HX_STACK_LINE(446)
									{
									}
								}
								else{
									HX_STACK_LINE(446)
									Float tmp27 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(446)
									Float t = tmp27;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(446)
									hx::MultEq(nx,t);
									HX_STACK_LINE(446)
									hx::MultEq(ny,t);
								}
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									Float t = c11->radius;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(446)
									Float tmp27 = c11->worldCOMx;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(446)
									Float tmp28 = (nx * t);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(446)
									Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(446)
									w1->x = tmp29;
									HX_STACK_LINE(446)
									Float tmp30 = c11->worldCOMy;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(446)
									Float tmp31 = (ny * t);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(446)
									Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(446)
									w1->y = tmp32;
								}
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									Float tmp27 = c21->radius;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(446)
									Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(446)
									Float t = tmp28;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(446)
									Float tmp29 = c21->worldCOMx;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(446)
									Float tmp30 = (nx * t);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(446)
									Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(446)
									w2->x = tmp31;
									HX_STACK_LINE(446)
									Float tmp32 = c21->worldCOMy;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(446)
									Float tmp33 = (ny * t);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(446)
									Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(446)
									w2->y = tmp34;
								}
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									axis->x = nx;
									HX_STACK_LINE(446)
									axis->y = ny;
									HX_STACK_LINE(446)
									{
									}
								}
							}
						}
						HX_STACK_LINE(446)
						tmp18 = dist;
					}
					else{
						HX_STACK_LINE(446)
						bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
						HX_STACK_LINE(446)
						bool tmp21 = (s11->type == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(446)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(446)
						if ((tmp21)){
							HX_STACK_LINE(446)
							tmp22 = (s21->type == (int)1);
						}
						else{
							HX_STACK_LINE(446)
							tmp22 = false;
						}
						HX_STACK_LINE(446)
						if ((tmp22)){
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Shape tmp23 = s11;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(446)
							s11 = s21;
							HX_STACK_LINE(446)
							s21 = tmp23;
							HX_STACK_LINE(446)
							::zpp_nape::geom::ZPP_Vec2 tmp24 = w1;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(446)
							w1 = w2;
							HX_STACK_LINE(446)
							w2 = tmp24;
							HX_STACK_LINE(446)
							swapped = true;
						}
						HX_STACK_LINE(446)
						bool tmp23 = (s11->type == (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(446)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(446)
						if ((tmp23)){
							HX_STACK_LINE(446)
							tmp24 = (s21->type == (int)0);
						}
						else{
							HX_STACK_LINE(446)
							tmp24 = false;
						}
						HX_STACK_LINE(446)
						if ((tmp24)){
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
							HX_STACK_LINE(446)
							Float tmp25 = ((Float)-1e+100);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(446)
							Float best = tmp25;		HX_STACK_VAR(best,"best");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								::zpp_nape::util::ZNPNode_ZPP_Edge tmp26 = poly->edges->head;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(446)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp26;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(446)
								while((true)){
									HX_STACK_LINE(446)
									bool tmp27 = (cx_ite != null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(446)
									bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(446)
									if ((tmp28)){
										HX_STACK_LINE(446)
										break;
									}
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										Float tmp29 = (a->gnormx * circle->worldCOMx);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(446)
										Float tmp30 = (a->gnormy * circle->worldCOMy);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(446)
										Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(446)
										Float tmp32 = a->gprojection;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(446)
										Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(446)
										Float tmp34 = circle->radius;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(446)
										Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(446)
										Float dist = tmp35;		HX_STACK_VAR(dist,"dist");
										HX_STACK_LINE(446)
										bool tmp36 = (dist > upperBound);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(446)
										if ((tmp36)){
											HX_STACK_LINE(446)
											best = dist;
											HX_STACK_LINE(446)
											break;
										}
										HX_STACK_LINE(446)
										bool tmp37 = (dist > (int)0);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(446)
										if ((tmp37)){
											HX_STACK_LINE(446)
											bool tmp38 = (dist > best);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(446)
											if ((tmp38)){
												HX_STACK_LINE(446)
												best = dist;
												HX_STACK_LINE(446)
												a0 = a;
											}
										}
										else{
											HX_STACK_LINE(446)
											bool tmp38 = (best < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(446)
											bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(446)
											if ((tmp38)){
												HX_STACK_LINE(446)
												tmp39 = (dist > best);
											}
											else{
												HX_STACK_LINE(446)
												tmp39 = false;
											}
											HX_STACK_LINE(446)
											if ((tmp39)){
												HX_STACK_LINE(446)
												best = dist;
												HX_STACK_LINE(446)
												a0 = a;
											}
										}
									}
									HX_STACK_LINE(446)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(446)
							bool tmp26 = (best < upperBound);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(446)
							if ((tmp26)){
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
								HX_STACK_LINE(446)
								Float tmp27 = (circle->worldCOMy * a0->gnormx);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(446)
								Float tmp28 = (circle->worldCOMx * a0->gnormy);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(446)
								Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(446)
								Float dt = tmp29;		HX_STACK_VAR(dt,"dt");
								HX_STACK_LINE(446)
								Float tmp30 = dt;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(446)
								Float tmp31 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(446)
								Float tmp32 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(446)
								Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(446)
								bool tmp34 = (tmp30 <= tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(446)
								if ((tmp34)){
									HX_STACK_LINE(446)
									Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(446)
									Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										Float tmp35 = (circle->worldCOMx - v0->x);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(446)
										nx = tmp35;
										HX_STACK_LINE(446)
										Float tmp36 = (circle->worldCOMy - v0->y);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(446)
										ny = tmp36;
									}
									HX_STACK_LINE(446)
									Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										Float tmp36 = (nx * nx);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(446)
										Float tmp37 = (ny * ny);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(446)
										Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(446)
										tmp35 = ::Math_obj::sqrt(tmp38);
									}
									HX_STACK_LINE(446)
									Float len = tmp35;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(446)
									Float tmp36 = len;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(446)
									Float tmp37 = circle->radius;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(446)
									Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(446)
									best = tmp38;
									HX_STACK_LINE(446)
									bool tmp39 = (best < upperBound);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(446)
									if ((tmp39)){
										HX_STACK_LINE(446)
										bool tmp40 = (len == (int)0);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(446)
										if ((tmp40)){
											HX_STACK_LINE(446)
											nx = (int)1;
											HX_STACK_LINE(446)
											ny = (int)0;
											HX_STACK_LINE(446)
											{
											}
										}
										else{
											HX_STACK_LINE(446)
											Float tmp41 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(446)
											Float t = tmp41;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											hx::MultEq(nx,t);
											HX_STACK_LINE(446)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											int t = (int)0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp41 = v0->x;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(446)
											Float tmp42 = (nx * t);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(446)
											Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(446)
											w1->x = tmp43;
											HX_STACK_LINE(446)
											Float tmp44 = v0->y;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(446)
											Float tmp45 = (ny * t);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(446)
											Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(446)
											w1->y = tmp46;
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp41 = circle->radius;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(446)
											Float tmp42 = -(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(446)
											Float t = tmp42;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp43 = circle->worldCOMx;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(446)
											Float tmp44 = (nx * t);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(446)
											Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(446)
											w2->x = tmp45;
											HX_STACK_LINE(446)
											Float tmp46 = circle->worldCOMy;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(446)
											Float tmp47 = (ny * t);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(446)
											Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(446)
											w2->y = tmp48;
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											axis->x = nx;
											HX_STACK_LINE(446)
											axis->y = ny;
											HX_STACK_LINE(446)
											{
											}
										}
									}
								}
								else{
									HX_STACK_LINE(446)
									Float tmp35 = dt;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(446)
									Float tmp36 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(446)
									Float tmp37 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(446)
									Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(446)
									bool tmp39 = (tmp35 >= tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(446)
									if ((tmp39)){
										HX_STACK_LINE(446)
										Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
										HX_STACK_LINE(446)
										Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp40 = (circle->worldCOMx - v1->x);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(446)
											nx = tmp40;
											HX_STACK_LINE(446)
											Float tmp41 = (circle->worldCOMy - v1->y);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(446)
											ny = tmp41;
										}
										HX_STACK_LINE(446)
										Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp41 = (nx * nx);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(446)
											Float tmp42 = (ny * ny);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(446)
											Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(446)
											tmp40 = ::Math_obj::sqrt(tmp43);
										}
										HX_STACK_LINE(446)
										Float len = tmp40;		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(446)
										Float tmp41 = len;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(446)
										Float tmp42 = circle->radius;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(446)
										Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(446)
										best = tmp43;
										HX_STACK_LINE(446)
										bool tmp44 = (best < upperBound);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(446)
										if ((tmp44)){
											HX_STACK_LINE(446)
											bool tmp45 = (len == (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(446)
											if ((tmp45)){
												HX_STACK_LINE(446)
												nx = (int)1;
												HX_STACK_LINE(446)
												ny = (int)0;
												HX_STACK_LINE(446)
												{
												}
											}
											else{
												HX_STACK_LINE(446)
												Float tmp46 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(446)
												Float t = tmp46;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(446)
												hx::MultEq(nx,t);
												HX_STACK_LINE(446)
												hx::MultEq(ny,t);
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												int t = (int)0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(446)
												Float tmp46 = v1->x;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(446)
												Float tmp47 = (nx * t);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(446)
												Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(446)
												w1->x = tmp48;
												HX_STACK_LINE(446)
												Float tmp49 = v1->y;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(446)
												Float tmp50 = (ny * t);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(446)
												Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(446)
												w1->y = tmp51;
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp46 = circle->radius;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(446)
												Float tmp47 = -(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(446)
												Float t = tmp47;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(446)
												Float tmp48 = circle->worldCOMx;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(446)
												Float tmp49 = (nx * t);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(446)
												Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(446)
												w2->x = tmp50;
												HX_STACK_LINE(446)
												Float tmp51 = circle->worldCOMy;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(446)
												Float tmp52 = (ny * t);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(446)
												Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(446)
												w2->y = tmp53;
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												axis->x = nx;
												HX_STACK_LINE(446)
												axis->y = ny;
												HX_STACK_LINE(446)
												{
												}
											}
										}
									}
									else{
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp40 = circle->radius;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(446)
											Float tmp41 = -(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(446)
											Float t = tmp41;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp42 = circle->worldCOMx;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(446)
											Float tmp43 = (a0->gnormx * t);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(446)
											Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(446)
											w2->x = tmp44;
											HX_STACK_LINE(446)
											Float tmp45 = circle->worldCOMy;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(446)
											Float tmp46 = (a0->gnormy * t);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(446)
											Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(446)
											w2->y = tmp47;
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp40 = best;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(446)
											Float tmp41 = -(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(446)
											Float t = tmp41;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp42 = w2->x;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(446)
											Float tmp43 = (a0->gnormx * t);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(446)
											Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(446)
											w1->x = tmp44;
											HX_STACK_LINE(446)
											Float tmp45 = w2->y;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(446)
											Float tmp46 = (a0->gnormy * t);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(446)
											Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(446)
											w1->y = tmp47;
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											axis->x = a0->gnormx;
											HX_STACK_LINE(446)
											axis->y = a0->gnormy;
											HX_STACK_LINE(446)
											{
											}
										}
									}
								}
							}
							HX_STACK_LINE(446)
							bool tmp27 = swapped;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(446)
							if ((tmp27)){
								HX_STACK_LINE(446)
								Float tmp28 = axis->x;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(446)
								Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(446)
								axis->x = tmp29;
								HX_STACK_LINE(446)
								Float tmp30 = axis->y;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(446)
								Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(446)
								axis->y = tmp31;
							}
							HX_STACK_LINE(446)
							tmp18 = best;
						}
						else{
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
							HX_STACK_LINE(446)
							Float tmp25 = ((Float)-1e+100);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(446)
							Float best = tmp25;		HX_STACK_VAR(best,"best");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
							HX_STACK_LINE(446)
							int besti = (int)0;		HX_STACK_VAR(besti,"besti");
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								::zpp_nape::util::ZNPNode_ZPP_Edge tmp26 = p1->edges->head;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(446)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp26;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(446)
								while((true)){
									HX_STACK_LINE(446)
									bool tmp27 = (cx_ite != null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(446)
									bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(446)
									if ((tmp28)){
										HX_STACK_LINE(446)
										break;
									}
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											::zpp_nape::geom::ZPP_Vec2 tmp29 = p2->gverts->next;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(446)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp29;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(446)
											while((true)){
												HX_STACK_LINE(446)
												bool tmp30 = (cx_ite1 != null());		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(446)
												bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(446)
												if ((tmp31)){
													HX_STACK_LINE(446)
													break;
												}
												HX_STACK_LINE(446)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(446)
												{
													HX_STACK_LINE(446)
													Float tmp32 = (a->gnormx * v->x);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(446)
													Float tmp33 = (a->gnormy * v->y);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(446)
													Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(446)
													Float k = tmp34;		HX_STACK_VAR(k,"k");
													HX_STACK_LINE(446)
													bool tmp35 = (k < min);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(446)
													if ((tmp35)){
														HX_STACK_LINE(446)
														min = k;
													}
												}
												HX_STACK_LINE(446)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(446)
										hx::SubEq(min,a->gprojection);
										HX_STACK_LINE(446)
										bool tmp29 = (min > upperBound);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(446)
										if ((tmp29)){
											HX_STACK_LINE(446)
											best = min;
											HX_STACK_LINE(446)
											break;
										}
										HX_STACK_LINE(446)
										bool tmp30 = (min > (int)0);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(446)
										if ((tmp30)){
											HX_STACK_LINE(446)
											bool tmp31 = (min > best);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(446)
											if ((tmp31)){
												HX_STACK_LINE(446)
												best = min;
												HX_STACK_LINE(446)
												a1 = a;
												HX_STACK_LINE(446)
												besti = (int)1;
											}
										}
										else{
											HX_STACK_LINE(446)
											bool tmp31 = (best < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(446)
											bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(446)
											if ((tmp31)){
												HX_STACK_LINE(446)
												tmp32 = (min > best);
											}
											else{
												HX_STACK_LINE(446)
												tmp32 = false;
											}
											HX_STACK_LINE(446)
											if ((tmp32)){
												HX_STACK_LINE(446)
												best = min;
												HX_STACK_LINE(446)
												a1 = a;
												HX_STACK_LINE(446)
												besti = (int)1;
											}
										}
									}
									HX_STACK_LINE(446)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(446)
							bool tmp26 = (best < upperBound);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(446)
							if ((tmp26)){
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									::zpp_nape::util::ZNPNode_ZPP_Edge tmp27 = p2->edges->head;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(446)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp27;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(446)
									while((true)){
										HX_STACK_LINE(446)
										bool tmp28 = (cx_ite != null());		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(446)
										bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(446)
										if ((tmp29)){
											HX_STACK_LINE(446)
											break;
										}
										HX_STACK_LINE(446)
										::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												::zpp_nape::geom::ZPP_Vec2 tmp30 = p1->gverts->next;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(446)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp30;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(446)
												while((true)){
													HX_STACK_LINE(446)
													bool tmp31 = (cx_ite1 != null());		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(446)
													bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(446)
													if ((tmp32)){
														HX_STACK_LINE(446)
														break;
													}
													HX_STACK_LINE(446)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(446)
													{
														HX_STACK_LINE(446)
														Float tmp33 = (a->gnormx * v->x);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(446)
														Float tmp34 = (a->gnormy * v->y);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(446)
														Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(446)
														Float k = tmp35;		HX_STACK_VAR(k,"k");
														HX_STACK_LINE(446)
														bool tmp36 = (k < min);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(446)
														if ((tmp36)){
															HX_STACK_LINE(446)
															min = k;
														}
													}
													HX_STACK_LINE(446)
													cx_ite1 = cx_ite1->next;
												}
											}
											HX_STACK_LINE(446)
											hx::SubEq(min,a->gprojection);
											HX_STACK_LINE(446)
											bool tmp30 = (min > upperBound);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(446)
											if ((tmp30)){
												HX_STACK_LINE(446)
												best = min;
												HX_STACK_LINE(446)
												break;
											}
											HX_STACK_LINE(446)
											bool tmp31 = (min > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(446)
											if ((tmp31)){
												HX_STACK_LINE(446)
												bool tmp32 = (min > best);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(446)
												if ((tmp32)){
													HX_STACK_LINE(446)
													best = min;
													HX_STACK_LINE(446)
													a2 = a;
													HX_STACK_LINE(446)
													besti = (int)2;
												}
											}
											else{
												HX_STACK_LINE(446)
												bool tmp32 = (best < (int)0);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(446)
												bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(446)
												if ((tmp32)){
													HX_STACK_LINE(446)
													tmp33 = (min > best);
												}
												else{
													HX_STACK_LINE(446)
													tmp33 = false;
												}
												HX_STACK_LINE(446)
												if ((tmp33)){
													HX_STACK_LINE(446)
													best = min;
													HX_STACK_LINE(446)
													a2 = a;
													HX_STACK_LINE(446)
													besti = (int)2;
												}
											}
										}
										HX_STACK_LINE(446)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(446)
								bool tmp27 = (best < upperBound);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(446)
								if ((tmp27)){
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
									HX_STACK_LINE(446)
									bool tmp28 = (besti == (int)1);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(446)
									if ((tmp28)){
										HX_STACK_LINE(446)
										q1 = p1;
										HX_STACK_LINE(446)
										q2 = p2;
										HX_STACK_LINE(446)
										ax = a1;
									}
									else{
										HX_STACK_LINE(446)
										q1 = p2;
										HX_STACK_LINE(446)
										q2 = p1;
										HX_STACK_LINE(446)
										ax = a2;
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 tmp29 = w1;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(446)
										w1 = w2;
										HX_STACK_LINE(446)
										w2 = tmp29;
										HX_STACK_LINE(446)
										bool tmp30 = swapped;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(446)
										bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(446)
										swapped = tmp31;
									}
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
									HX_STACK_LINE(446)
									Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										::zpp_nape::util::ZNPNode_ZPP_Edge tmp29 = q2->edges->head;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(446)
										::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp29;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(446)
										while((true)){
											HX_STACK_LINE(446)
											bool tmp30 = (cx_ite != null());		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(446)
											bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(446)
											if ((tmp31)){
												HX_STACK_LINE(446)
												break;
											}
											HX_STACK_LINE(446)
											::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp32 = (ax->gnormx * a->gnormx);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(446)
												Float tmp33 = (ax->gnormy * a->gnormy);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(446)
												Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(446)
												Float k = tmp34;		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(446)
												bool tmp35 = (k < min);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(446)
												if ((tmp35)){
													HX_STACK_LINE(446)
													min = k;
													HX_STACK_LINE(446)
													ay = a;
												}
											}
											HX_STACK_LINE(446)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(446)
									bool tmp29 = swapped;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(446)
									if ((tmp29)){
										HX_STACK_LINE(446)
										Float tmp30 = ax->gnormx;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(446)
										Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(446)
										axis->x = tmp31;
										HX_STACK_LINE(446)
										Float tmp32 = ax->gnormy;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(446)
										Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(446)
										axis->y = tmp33;
										HX_STACK_LINE(446)
										{
										}
									}
									else{
										HX_STACK_LINE(446)
										axis->x = ax->gnormx;
										HX_STACK_LINE(446)
										axis->y = ax->gnormy;
										HX_STACK_LINE(446)
										{
										}
									}
									HX_STACK_LINE(446)
									bool tmp30 = (best >= (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(446)
									if ((tmp30)){
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
										HX_STACK_LINE(446)
										Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
										HX_STACK_LINE(446)
										Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
										HX_STACK_LINE(446)
										Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
										HX_STACK_LINE(446)
										Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp31 = (v1->x - v0->x);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(446)
											vx = tmp31;
											HX_STACK_LINE(446)
											Float tmp32 = (v1->y - v0->y);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(446)
											vy = tmp32;
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp31 = (q11->x - q0->x);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(446)
											qx = tmp31;
											HX_STACK_LINE(446)
											Float tmp32 = (q11->y - q0->y);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(446)
											qy = tmp32;
										}
										HX_STACK_LINE(446)
										Float tmp31 = (vx * vx);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(446)
										Float tmp32 = (vy * vy);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(446)
										Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(446)
										Float tmp34 = (Float((int)1) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(446)
										Float vdot = tmp34;		HX_STACK_VAR(vdot,"vdot");
										HX_STACK_LINE(446)
										Float tmp35 = (qx * qx);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(446)
										Float tmp36 = (qy * qy);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(446)
										Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(446)
										Float tmp38 = (Float((int)1) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(446)
										Float qdot = tmp38;		HX_STACK_VAR(qdot,"qdot");
										HX_STACK_LINE(446)
										Float tmp39 = vx;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(446)
										Float tmp40 = (v0->x - q0->x);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(446)
										Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(446)
										Float tmp42 = vy;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(446)
										Float tmp43 = (v0->y - q0->y);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(446)
										Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(446)
										Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(446)
										Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(446)
										Float tmp47 = vdot;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(446)
										Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(446)
										Float t1 = tmp48;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(446)
										Float tmp49 = vx;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(446)
										Float tmp50 = (v0->x - q11->x);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(446)
										Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(446)
										Float tmp52 = vy;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(446)
										Float tmp53 = (v0->y - q11->y);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(446)
										Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(446)
										Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(446)
										Float tmp56 = -(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(446)
										Float tmp57 = vdot;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(446)
										Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(446)
										Float t2 = tmp58;		HX_STACK_VAR(t2,"t2");
										HX_STACK_LINE(446)
										Float tmp59 = qx;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(446)
										Float tmp60 = (q0->x - v0->x);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(446)
										Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(446)
										Float tmp62 = qy;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(446)
										Float tmp63 = (q0->y - v0->y);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(446)
										Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(446)
										Float tmp65 = (tmp61 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(446)
										Float tmp66 = -(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(446)
										Float tmp67 = qdot;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(446)
										Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(446)
										Float s12 = tmp68;		HX_STACK_VAR(s12,"s12");
										HX_STACK_LINE(446)
										Float tmp69 = qx;		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(446)
										Float tmp70 = (q0->x - v1->x);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(446)
										Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(446)
										Float tmp72 = qy;		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(446)
										Float tmp73 = (q0->y - v1->y);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(446)
										Float tmp74 = (tmp72 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(446)
										Float tmp75 = (tmp71 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(446)
										Float tmp76 = -(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(446)
										Float tmp77 = qdot;		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(446)
										Float tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(446)
										Float s22 = tmp78;		HX_STACK_VAR(s22,"s22");
										HX_STACK_LINE(446)
										bool tmp79 = (t1 < (int)0);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(446)
										if ((tmp79)){
											HX_STACK_LINE(446)
											t1 = (int)0;
										}
										else{
											HX_STACK_LINE(446)
											bool tmp80 = (t1 > (int)1);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(446)
											if ((tmp80)){
												HX_STACK_LINE(446)
												t1 = (int)1;
											}
										}
										HX_STACK_LINE(446)
										bool tmp80 = (t2 < (int)0);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(446)
										if ((tmp80)){
											HX_STACK_LINE(446)
											t2 = (int)0;
										}
										else{
											HX_STACK_LINE(446)
											bool tmp81 = (t2 > (int)1);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(446)
											if ((tmp81)){
												HX_STACK_LINE(446)
												t2 = (int)1;
											}
										}
										HX_STACK_LINE(446)
										bool tmp81 = (s12 < (int)0);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(446)
										if ((tmp81)){
											HX_STACK_LINE(446)
											s12 = (int)0;
										}
										else{
											HX_STACK_LINE(446)
											bool tmp82 = (s12 > (int)1);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(446)
											if ((tmp82)){
												HX_STACK_LINE(446)
												s12 = (int)1;
											}
										}
										HX_STACK_LINE(446)
										bool tmp82 = (s22 < (int)0);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(446)
										if ((tmp82)){
											HX_STACK_LINE(446)
											s22 = (int)0;
										}
										else{
											HX_STACK_LINE(446)
											bool tmp83 = (s22 > (int)1);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(446)
											if ((tmp83)){
												HX_STACK_LINE(446)
												s22 = (int)1;
											}
										}
										HX_STACK_LINE(446)
										Float f1x = ((Float)0.0);		HX_STACK_VAR(f1x,"f1x");
										HX_STACK_LINE(446)
										Float f1y = ((Float)0.0);		HX_STACK_VAR(f1y,"f1y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = t1;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp83 = v0->x;		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(446)
											Float tmp84 = (vx * t);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(446)
											Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(446)
											f1x = tmp85;
											HX_STACK_LINE(446)
											Float tmp86 = v0->y;		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(446)
											Float tmp87 = (vy * t);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(446)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(446)
											f1y = tmp88;
										}
										HX_STACK_LINE(446)
										Float f2x = ((Float)0.0);		HX_STACK_VAR(f2x,"f2x");
										HX_STACK_LINE(446)
										Float f2y = ((Float)0.0);		HX_STACK_VAR(f2y,"f2y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = t2;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp83 = v0->x;		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(446)
											Float tmp84 = (vx * t);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(446)
											Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(446)
											f2x = tmp85;
											HX_STACK_LINE(446)
											Float tmp86 = v0->y;		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(446)
											Float tmp87 = (vy * t);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(446)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(446)
											f2y = tmp88;
										}
										HX_STACK_LINE(446)
										Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
										HX_STACK_LINE(446)
										Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = s12;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp83 = q0->x;		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(446)
											Float tmp84 = (qx * t);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(446)
											Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(446)
											g1x = tmp85;
											HX_STACK_LINE(446)
											Float tmp86 = q0->y;		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(446)
											Float tmp87 = (qy * t);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(446)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(446)
											g1y = tmp88;
										}
										HX_STACK_LINE(446)
										Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
										HX_STACK_LINE(446)
										Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = s22;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp83 = q0->x;		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(446)
											Float tmp84 = (qx * t);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(446)
											Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(446)
											g2x = tmp85;
											HX_STACK_LINE(446)
											Float tmp86 = q0->y;		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(446)
											Float tmp87 = (qy * t);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(446)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(446)
											g2y = tmp88;
										}
										HX_STACK_LINE(446)
										Float tmp83;		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(446)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp84 = (f1x - q0->x);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(446)
												dx = tmp84;
												HX_STACK_LINE(446)
												Float tmp85 = (f1y - q0->y);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(446)
												dy = tmp85;
											}
											HX_STACK_LINE(446)
											Float tmp84 = (dx * dx);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(446)
											Float tmp85 = (dy * dy);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(446)
											tmp83 = (tmp84 + tmp85);
										}
										HX_STACK_LINE(446)
										Float d1 = tmp83;		HX_STACK_VAR(d1,"d1");
										HX_STACK_LINE(446)
										Float tmp84;		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(446)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp85 = (f2x - q11->x);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(446)
												dx = tmp85;
												HX_STACK_LINE(446)
												Float tmp86 = (f2y - q11->y);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(446)
												dy = tmp86;
											}
											HX_STACK_LINE(446)
											Float tmp85 = (dx * dx);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(446)
											Float tmp86 = (dy * dy);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(446)
											tmp84 = (tmp85 + tmp86);
										}
										HX_STACK_LINE(446)
										Float d2 = tmp84;		HX_STACK_VAR(d2,"d2");
										HX_STACK_LINE(446)
										Float tmp85;		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(446)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp86 = (g1x - v0->x);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(446)
												dx = tmp86;
												HX_STACK_LINE(446)
												Float tmp87 = (g1y - v0->y);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(446)
												dy = tmp87;
											}
											HX_STACK_LINE(446)
											Float tmp86 = (dx * dx);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(446)
											Float tmp87 = (dy * dy);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(446)
											tmp85 = (tmp86 + tmp87);
										}
										HX_STACK_LINE(446)
										Float e1 = tmp85;		HX_STACK_VAR(e1,"e1");
										HX_STACK_LINE(446)
										Float tmp86;		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(446)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp87 = (g2x - v1->x);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(446)
												dx = tmp87;
												HX_STACK_LINE(446)
												Float tmp88 = (g2y - v1->y);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(446)
												dy = tmp88;
											}
											HX_STACK_LINE(446)
											Float tmp87 = (dx * dx);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(446)
											Float tmp88 = (dy * dy);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(446)
											tmp86 = (tmp87 + tmp88);
										}
										HX_STACK_LINE(446)
										Float e2 = tmp86;		HX_STACK_VAR(e2,"e2");
										HX_STACK_LINE(446)
										Float minfx = ((Float)0.0);		HX_STACK_VAR(minfx,"minfx");
										HX_STACK_LINE(446)
										Float minfy = ((Float)0.0);		HX_STACK_VAR(minfy,"minfy");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
										HX_STACK_LINE(446)
										bool tmp87 = (d1 < d2);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(446)
										if ((tmp87)){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												minfx = f1x;
												HX_STACK_LINE(446)
												minfy = f1y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											minq = q0;
										}
										else{
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												minfx = f2x;
												HX_STACK_LINE(446)
												minfy = f2y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											minq = q11;
											HX_STACK_LINE(446)
											d1 = d2;
										}
										HX_STACK_LINE(446)
										Float mingx = ((Float)0.0);		HX_STACK_VAR(mingx,"mingx");
										HX_STACK_LINE(446)
										Float mingy = ((Float)0.0);		HX_STACK_VAR(mingy,"mingy");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
										HX_STACK_LINE(446)
										bool tmp88 = (e1 < e2);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(446)
										if ((tmp88)){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												mingx = g1x;
												HX_STACK_LINE(446)
												mingy = g1y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											minv = v0;
										}
										else{
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												mingx = g2x;
												HX_STACK_LINE(446)
												mingy = g2y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											minv = v1;
											HX_STACK_LINE(446)
											e1 = e2;
										}
										HX_STACK_LINE(446)
										bool tmp89 = (d1 < e1);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(446)
										if ((tmp89)){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w1->x = minfx;
												HX_STACK_LINE(446)
												w1->y = minfy;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w2->x = minq->x;
												HX_STACK_LINE(446)
												w2->y = minq->y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											Float tmp90 = d1;		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(446)
											Float tmp91 = ::Math_obj::sqrt(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(446)
											best = tmp91;
										}
										else{
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w2->x = mingx;
												HX_STACK_LINE(446)
												w2->y = mingy;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w1->x = minv->x;
												HX_STACK_LINE(446)
												w1->y = minv->y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											Float tmp90 = e1;		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(446)
											Float tmp91 = ::Math_obj::sqrt(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(446)
											best = tmp91;
										}
										HX_STACK_LINE(446)
										bool tmp90 = (best != (int)0);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(446)
										if ((tmp90)){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp91 = (w2->x - w1->x);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(446)
												axis->x = tmp91;
												HX_STACK_LINE(446)
												Float tmp92 = (w2->y - w1->y);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(446)
												axis->y = tmp92;
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp91 = (Float(((Float)1.0)) / Float(best));		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(446)
												Float t = tmp91;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(446)
												hx::MultEq(axis->x,t);
												HX_STACK_LINE(446)
												hx::MultEq(axis->y,t);
											}
											HX_STACK_LINE(446)
											bool tmp91 = swapped;		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(446)
											if ((tmp91)){
												HX_STACK_LINE(446)
												Float tmp92 = axis->x;		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(446)
												Float tmp93 = -(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(446)
												axis->x = tmp93;
												HX_STACK_LINE(446)
												Float tmp94 = axis->y;		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(446)
												Float tmp95 = -(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(446)
												axis->y = tmp95;
											}
										}
										HX_STACK_LINE(446)
										tmp18 = best;
									}
									else{
										HX_STACK_LINE(446)
										Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
										HX_STACK_LINE(446)
										Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp31 = ay->gp0->x;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(446)
											c0x = tmp31;
											HX_STACK_LINE(446)
											Float tmp32 = ay->gp0->y;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(446)
											c0y = tmp32;
											HX_STACK_LINE(446)
											{
											}
										}
										HX_STACK_LINE(446)
										Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
										HX_STACK_LINE(446)
										Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp31 = ay->gp1->x;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(446)
											c1x = tmp31;
											HX_STACK_LINE(446)
											Float tmp32 = ay->gp1->y;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(446)
											c1y = tmp32;
											HX_STACK_LINE(446)
											{
											}
										}
										HX_STACK_LINE(446)
										Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
										HX_STACK_LINE(446)
										Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp31 = (c1x - c0x);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(446)
											dvx = tmp31;
											HX_STACK_LINE(446)
											Float tmp32 = (c1y - c0y);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(446)
											dvy = tmp32;
										}
										HX_STACK_LINE(446)
										Float tmp31 = (ax->gnormy * c0x);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(446)
										Float tmp32 = (ax->gnormx * c0y);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(446)
										Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(446)
										Float d0 = tmp33;		HX_STACK_VAR(d0,"d0");
										HX_STACK_LINE(446)
										Float tmp34 = (ax->gnormy * c1x);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(446)
										Float tmp35 = (ax->gnormx * c1y);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(446)
										Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(446)
										Float d1 = tmp36;		HX_STACK_VAR(d1,"d1");
										HX_STACK_LINE(446)
										Float tmp37 = (d1 - d0);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(446)
										Float tmp38 = (Float((int)1) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(446)
										Float den = tmp38;		HX_STACK_VAR(den,"den");
										HX_STACK_LINE(446)
										Float tmp39 = ax->tp1;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(446)
										Float tmp40 = -(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(446)
										Float tmp41 = d0;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(446)
										Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(446)
										Float tmp43 = den;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(446)
										Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(446)
										Float t = tmp44;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(446)
										Float tmp45 = t;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(446)
										Float tmp46 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(446)
										bool tmp47 = (tmp45 > tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(446)
										if ((tmp47)){
											HX_STACK_LINE(446)
											Float t1 = t;		HX_STACK_VAR(t1,"t1");
											HX_STACK_LINE(446)
											Float tmp48 = (dvx * t1);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(446)
											hx::AddEq(c0x,tmp48);
											HX_STACK_LINE(446)
											Float tmp49 = (dvy * t1);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(446)
											hx::AddEq(c0y,tmp49);
										}
										HX_STACK_LINE(446)
										Float tmp48 = ax->tp0;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(446)
										Float tmp49 = -(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(446)
										Float tmp50 = d1;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(446)
										Float tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(446)
										Float tmp52 = den;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(446)
										Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(446)
										Float t1 = tmp53;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(446)
										Float tmp54 = t1;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(446)
										Float tmp55 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(446)
										Float tmp56 = -(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(446)
										bool tmp57 = (tmp54 < tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(446)
										if ((tmp57)){
											HX_STACK_LINE(446)
											Float t2 = t1;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(446)
											Float tmp58 = (dvx * t2);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(446)
											hx::AddEq(c1x,tmp58);
											HX_STACK_LINE(446)
											Float tmp59 = (dvy * t2);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(446)
											hx::AddEq(c1y,tmp59);
										}
										HX_STACK_LINE(446)
										Float tmp58 = (c0x * ax->gnormx);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(446)
										Float tmp59 = (c0y * ax->gnormy);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(446)
										Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(446)
										Float tmp61 = ax->gprojection;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(446)
										Float tmp62 = (tmp60 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(446)
										Float c0d = tmp62;		HX_STACK_VAR(c0d,"c0d");
										HX_STACK_LINE(446)
										Float tmp63 = (c1x * ax->gnormx);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(446)
										Float tmp64 = (c1y * ax->gnormy);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(446)
										Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(446)
										Float tmp66 = ax->gprojection;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(446)
										Float tmp67 = (tmp65 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(446)
										Float c1d = tmp67;		HX_STACK_VAR(c1d,"c1d");
										HX_STACK_LINE(446)
										bool tmp68 = (c0d < c1d);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(446)
										if ((tmp68)){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w2->x = c0x;
												HX_STACK_LINE(446)
												w2->y = c0y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp69 = c0d;		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(446)
												Float tmp70 = -(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(446)
												Float t2 = tmp70;		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(446)
												Float tmp71 = w2->x;		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(446)
												Float tmp72 = (ax->gnormx * t2);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(446)
												Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(446)
												w1->x = tmp73;
												HX_STACK_LINE(446)
												Float tmp74 = w2->y;		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(446)
												Float tmp75 = (ax->gnormy * t2);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(446)
												Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(446)
												w1->y = tmp76;
											}
											HX_STACK_LINE(446)
											tmp18 = c0d;
										}
										else{
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w2->x = c1x;
												HX_STACK_LINE(446)
												w2->y = c1y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp69 = c1d;		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(446)
												Float tmp70 = -(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(446)
												Float t2 = tmp70;		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(446)
												Float tmp71 = w2->x;		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(446)
												Float tmp72 = (ax->gnormx * t2);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(446)
												Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(446)
												w1->x = tmp73;
												HX_STACK_LINE(446)
												Float tmp74 = w2->y;		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(446)
												Float tmp75 = (ax->gnormy * t2);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(446)
												Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(446)
												w1->y = tmp76;
											}
											HX_STACK_LINE(446)
											tmp18 = c1d;
										}
									}
								}
								else{
									HX_STACK_LINE(446)
									tmp18 = upperBound;
								}
							}
							else{
								HX_STACK_LINE(446)
								tmp18 = upperBound;
							}
						}
					}
				}
				HX_STACK_LINE(446)
				Float tmp19 = negRadius;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(446)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(446)
				Float sep1 = tmp20;		HX_STACK_VAR(sep1,"sep1");
				HX_STACK_LINE(447)
				Float tmp21 = (deltax * axis->x);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(447)
				Float tmp22 = (deltay * axis->y);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(447)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(447)
				Float dot1 = tmp23;		HX_STACK_VAR(dot1,"dot1");
				HX_STACK_LINE(448)
				Float tmp24 = sep1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(448)
				Float tmp25 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(448)
				bool tmp26 = (tmp24 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(448)
				if ((tmp26)){
					HX_STACK_LINE(449)
					Float d1x = ((Float)0.0);		HX_STACK_VAR(d1x,"d1x");
					HX_STACK_LINE(450)
					Float d1y = ((Float)0.0);		HX_STACK_VAR(d1y,"d1y");
					HX_STACK_LINE(451)
					{
						HX_STACK_LINE(452)
						Float tmp27 = (c1->x - b1->posx);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(452)
						d1x = tmp27;
						HX_STACK_LINE(453)
						Float tmp28 = (c1->y - b1->posy);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(453)
						d1y = tmp28;
					}
					HX_STACK_LINE(455)
					Float tmp27 = dot1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(455)
					Float tmp28 = b1->sweep_angvel;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(455)
					Float tmp29 = (axis->y * d1x);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(455)
					Float tmp30 = (axis->x * d1y);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(455)
					Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(455)
					Float tmp32 = (tmp28 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(455)
					Float tmp33 = (tmp27 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(455)
					Float proj = tmp33;		HX_STACK_VAR(proj,"proj");
					HX_STACK_LINE(456)
					bool tmp34 = (proj > (int)0);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(456)
					if ((tmp34)){
						HX_STACK_LINE(457)
						toi->slipped = true;
					}
					HX_STACK_LINE(459)
					bool tmp35 = (proj <= (int)0);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(459)
					bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(459)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(459)
					if ((tmp36)){
						HX_STACK_LINE(459)
						Float tmp38 = sep1;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(459)
						Float tmp39 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(459)
						Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(459)
						Float tmp41 = (tmp40 * ((Float)0.5));		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(459)
						Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(459)
						tmp37 = (tmp38 < tmp42);
					}
					else{
						HX_STACK_LINE(459)
						tmp37 = true;
					}
					HX_STACK_LINE(459)
					if ((tmp37)){
						HX_STACK_LINE(460)
						break;
					}
				}
				HX_STACK_LINE(463)
				curTOI = (int)-1;
				HX_STACK_LINE(464)
				break;
			}
			HX_STACK_LINE(466)
			int tmp18 = ++(curIter);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(466)
			bool tmp19 = (tmp18 >= (int)40);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(466)
			if ((tmp19)){
				HX_STACK_LINE(467)
				bool tmp20 = (sep > negRadius);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(467)
				if ((tmp20)){
					HX_STACK_LINE(468)
					toi->failed = true;
				}
				HX_STACK_LINE(470)
				break;
			}
		}
		HX_STACK_LINE(473)
		toi->toi = curTOI;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_SweepDistance_obj,staticSweep,(void))

Float ZPP_SweepDistance_obj::distanceBody( ::zpp_nape::phys::ZPP_Body b1,::zpp_nape::phys::ZPP_Body b2,::zpp_nape::geom::ZPP_Vec2 w1,::zpp_nape::geom::ZPP_Vec2 w2){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SweepDistance","distanceBody",0x2a59ca7a,"zpp_nape.geom.ZPP_SweepDistance.distanceBody","zpp_nape/geom/SweepDistance.hx",475,0x2645f2ee)
	HX_STACK_ARG(b1,"b1")
	HX_STACK_ARG(b2,"b2")
	HX_STACK_ARG(w1,"w1")
	HX_STACK_ARG(w2,"w2")
	HX_STACK_LINE(476)
	::zpp_nape::geom::ZPP_Vec2 t1;		HX_STACK_VAR(t1,"t1");
	HX_STACK_LINE(477)
	{
		HX_STACK_LINE(478)
		::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(478)
		if ((tmp1)){
			HX_STACK_LINE(479)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(479)
			t1 = tmp2;
		}
		else{
			HX_STACK_LINE(485)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(485)
			t1 = tmp2;
			HX_STACK_LINE(486)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = t1->next;
			HX_STACK_LINE(487)
			t1->next = null();
		}
		HX_STACK_LINE(492)
		t1->weak = false;
	}
	HX_STACK_LINE(494)
	::zpp_nape::geom::ZPP_Vec2 t2;		HX_STACK_VAR(t2,"t2");
	HX_STACK_LINE(495)
	{
		HX_STACK_LINE(496)
		::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(496)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(496)
		if ((tmp1)){
			HX_STACK_LINE(497)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(497)
			t2 = tmp2;
		}
		else{
			HX_STACK_LINE(503)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(503)
			t2 = tmp2;
			HX_STACK_LINE(504)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = t2->next;
			HX_STACK_LINE(505)
			t2->next = null();
		}
		HX_STACK_LINE(510)
		t2->weak = false;
	}
	HX_STACK_LINE(512)
	::zpp_nape::geom::ZPP_Vec2 ax;		HX_STACK_VAR(ax,"ax");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(514)
		::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(514)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(514)
		if ((tmp1)){
			HX_STACK_LINE(515)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(515)
			ax = tmp2;
		}
		else{
			HX_STACK_LINE(521)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(521)
			ax = tmp2;
			HX_STACK_LINE(522)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ax->next;
			HX_STACK_LINE(523)
			ax->next = null();
		}
		HX_STACK_LINE(528)
		ax->weak = false;
	}
	HX_STACK_LINE(530)
	Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(531)
	{
		HX_STACK_LINE(532)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp = b1->shapes->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(532)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(533)
		while((true)){
			HX_STACK_LINE(533)
			bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(533)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(533)
			if ((tmp2)){
				HX_STACK_LINE(533)
				break;
			}
			HX_STACK_LINE(534)
			::zpp_nape::shape::ZPP_Shape s1 = cx_ite->elt;		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(537)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = b2->shapes->head;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(537)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite1 = tmp3;		HX_STACK_VAR(cx_ite1,"cx_ite1");
				HX_STACK_LINE(538)
				while((true)){
					HX_STACK_LINE(538)
					bool tmp4 = (cx_ite1 != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(538)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(538)
					if ((tmp5)){
						HX_STACK_LINE(538)
						break;
					}
					HX_STACK_LINE(539)
					::zpp_nape::shape::ZPP_Shape s2 = cx_ite1->elt;		HX_STACK_VAR(s2,"s2");
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(541)
						Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(541)
						{
							HX_STACK_LINE(541)
							::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
							HX_STACK_LINE(541)
							::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
							HX_STACK_LINE(541)
							::zpp_nape::geom::ZPP_Vec2 w11 = t1;		HX_STACK_VAR(w11,"w11");
							HX_STACK_LINE(541)
							::zpp_nape::geom::ZPP_Vec2 w21 = t2;		HX_STACK_VAR(w21,"w21");
							HX_STACK_LINE(541)
							bool tmp7 = (s11->type == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(541)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(541)
							if ((tmp7)){
								HX_STACK_LINE(541)
								tmp8 = (s21->type == (int)0);
							}
							else{
								HX_STACK_LINE(541)
								tmp8 = false;
							}
							HX_STACK_LINE(541)
							if ((tmp8)){
								HX_STACK_LINE(541)
								::zpp_nape::shape::ZPP_Circle c1 = s11->circle;		HX_STACK_VAR(c1,"c1");
								HX_STACK_LINE(541)
								::zpp_nape::shape::ZPP_Circle c2 = s21->circle;		HX_STACK_VAR(c2,"c2");
								HX_STACK_LINE(541)
								Float dist;		HX_STACK_VAR(dist,"dist");
								HX_STACK_LINE(541)
								{
									HX_STACK_LINE(541)
									Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(541)
									Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(541)
									{
										HX_STACK_LINE(541)
										Float tmp9 = (c2->worldCOMx - c1->worldCOMx);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(541)
										nx = tmp9;
										HX_STACK_LINE(541)
										Float tmp10 = (c2->worldCOMy - c1->worldCOMy);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(541)
										ny = tmp10;
									}
									HX_STACK_LINE(541)
									Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(541)
									{
										HX_STACK_LINE(541)
										Float tmp10 = (nx * nx);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(541)
										Float tmp11 = (ny * ny);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(541)
										Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(541)
										tmp9 = ::Math_obj::sqrt(tmp12);
									}
									HX_STACK_LINE(541)
									Float len = tmp9;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(541)
									Float tmp10 = len;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(541)
									Float tmp11 = (c1->radius + c2->radius);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(541)
									Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(541)
									dist = tmp12;
									HX_STACK_LINE(541)
									bool tmp13 = (dist < min);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(541)
									if ((tmp13)){
										HX_STACK_LINE(541)
										bool tmp14 = (len == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(541)
										if ((tmp14)){
											HX_STACK_LINE(541)
											nx = (int)1;
											HX_STACK_LINE(541)
											ny = (int)0;
											HX_STACK_LINE(541)
											{
											}
										}
										else{
											HX_STACK_LINE(541)
											Float tmp15 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(541)
											Float t = tmp15;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(541)
											hx::MultEq(nx,t);
											HX_STACK_LINE(541)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(541)
										{
											HX_STACK_LINE(541)
											Float t = c1->radius;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(541)
											Float tmp15 = c1->worldCOMx;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(541)
											Float tmp16 = (nx * t);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(541)
											Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(541)
											w11->x = tmp17;
											HX_STACK_LINE(541)
											Float tmp18 = c1->worldCOMy;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(541)
											Float tmp19 = (ny * t);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(541)
											Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(541)
											w11->y = tmp20;
										}
										HX_STACK_LINE(541)
										{
											HX_STACK_LINE(541)
											Float tmp15 = c2->radius;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(541)
											Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(541)
											Float t = tmp16;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(541)
											Float tmp17 = c2->worldCOMx;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(541)
											Float tmp18 = (nx * t);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(541)
											Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(541)
											w21->x = tmp19;
											HX_STACK_LINE(541)
											Float tmp20 = c2->worldCOMy;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(541)
											Float tmp21 = (ny * t);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(541)
											Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(541)
											w21->y = tmp22;
										}
										HX_STACK_LINE(541)
										{
											HX_STACK_LINE(541)
											ax->x = nx;
											HX_STACK_LINE(541)
											ax->y = ny;
											HX_STACK_LINE(541)
											{
											}
										}
									}
								}
								HX_STACK_LINE(541)
								tmp6 = dist;
							}
							else{
								HX_STACK_LINE(541)
								bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
								HX_STACK_LINE(541)
								bool tmp9 = (s11->type == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(541)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(541)
								if ((tmp9)){
									HX_STACK_LINE(541)
									tmp10 = (s21->type == (int)1);
								}
								else{
									HX_STACK_LINE(541)
									tmp10 = false;
								}
								HX_STACK_LINE(541)
								if ((tmp10)){
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Shape tmp11 = s11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(541)
									s11 = s21;
									HX_STACK_LINE(541)
									s21 = tmp11;
									HX_STACK_LINE(541)
									::zpp_nape::geom::ZPP_Vec2 tmp21 = w11;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(541)
									w11 = w21;
									HX_STACK_LINE(541)
									w21 = tmp21;
									HX_STACK_LINE(541)
									swapped = true;
								}
								HX_STACK_LINE(541)
								bool tmp11 = (s11->type == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(541)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(541)
								if ((tmp11)){
									HX_STACK_LINE(541)
									tmp12 = (s21->type == (int)0);
								}
								else{
									HX_STACK_LINE(541)
									tmp12 = false;
								}
								HX_STACK_LINE(541)
								if ((tmp12)){
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
									HX_STACK_LINE(541)
									Float tmp13 = ((Float)-1e+100);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(541)
									Float best = tmp13;		HX_STACK_VAR(best,"best");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
									HX_STACK_LINE(541)
									{
										HX_STACK_LINE(541)
										::zpp_nape::util::ZNPNode_ZPP_Edge tmp14 = poly->edges->head;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(541)
										::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = tmp14;		HX_STACK_VAR(cx_ite2,"cx_ite2");
										HX_STACK_LINE(541)
										while((true)){
											HX_STACK_LINE(541)
											bool tmp15 = (cx_ite2 != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(541)
											bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(541)
											if ((tmp16)){
												HX_STACK_LINE(541)
												break;
											}
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												Float tmp17 = (a->gnormx * circle->worldCOMx);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(541)
												Float tmp18 = (a->gnormy * circle->worldCOMy);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(541)
												Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(541)
												Float tmp20 = a->gprojection;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(541)
												Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(541)
												Float tmp22 = circle->radius;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(541)
												Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(541)
												Float dist = tmp23;		HX_STACK_VAR(dist,"dist");
												HX_STACK_LINE(541)
												bool tmp24 = (dist > min);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(541)
												if ((tmp24)){
													HX_STACK_LINE(541)
													best = dist;
													HX_STACK_LINE(541)
													break;
												}
												HX_STACK_LINE(541)
												bool tmp25 = (dist > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(541)
												if ((tmp25)){
													HX_STACK_LINE(541)
													bool tmp26 = (dist > best);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(541)
													if ((tmp26)){
														HX_STACK_LINE(541)
														best = dist;
														HX_STACK_LINE(541)
														a0 = a;
													}
												}
												else{
													HX_STACK_LINE(541)
													bool tmp26 = (best < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(541)
													bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(541)
													if ((tmp26)){
														HX_STACK_LINE(541)
														tmp27 = (dist > best);
													}
													else{
														HX_STACK_LINE(541)
														tmp27 = false;
													}
													HX_STACK_LINE(541)
													if ((tmp27)){
														HX_STACK_LINE(541)
														best = dist;
														HX_STACK_LINE(541)
														a0 = a;
													}
												}
											}
											HX_STACK_LINE(541)
											cx_ite2 = cx_ite2->next;
										}
									}
									HX_STACK_LINE(541)
									bool tmp14 = (best < min);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(541)
									if ((tmp14)){
										HX_STACK_LINE(541)
										::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
										HX_STACK_LINE(541)
										::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
										HX_STACK_LINE(541)
										Float tmp15 = (circle->worldCOMy * a0->gnormx);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(541)
										Float tmp16 = (circle->worldCOMx * a0->gnormy);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(541)
										Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(541)
										Float dt = tmp17;		HX_STACK_VAR(dt,"dt");
										HX_STACK_LINE(541)
										Float tmp18 = dt;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(541)
										Float tmp19 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(541)
										Float tmp20 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(541)
										Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(541)
										bool tmp22 = (tmp18 <= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(541)
										if ((tmp22)){
											HX_STACK_LINE(541)
											Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
											HX_STACK_LINE(541)
											Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												Float tmp23 = (circle->worldCOMx - v0->x);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(541)
												nx = tmp23;
												HX_STACK_LINE(541)
												Float tmp24 = (circle->worldCOMy - v0->y);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(541)
												ny = tmp24;
											}
											HX_STACK_LINE(541)
											Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												Float tmp24 = (nx * nx);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(541)
												Float tmp25 = (ny * ny);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(541)
												Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(541)
												tmp23 = ::Math_obj::sqrt(tmp26);
											}
											HX_STACK_LINE(541)
											Float len = tmp23;		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(541)
											Float tmp24 = len;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(541)
											Float tmp25 = circle->radius;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(541)
											Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(541)
											best = tmp26;
											HX_STACK_LINE(541)
											bool tmp27 = (best < min);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(541)
											if ((tmp27)){
												HX_STACK_LINE(541)
												bool tmp28 = (len == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(541)
												if ((tmp28)){
													HX_STACK_LINE(541)
													nx = (int)1;
													HX_STACK_LINE(541)
													ny = (int)0;
													HX_STACK_LINE(541)
													{
													}
												}
												else{
													HX_STACK_LINE(541)
													Float tmp29 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(541)
													Float t = tmp29;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													hx::MultEq(nx,t);
													HX_STACK_LINE(541)
													hx::MultEq(ny,t);
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													int t = (int)0;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp29 = v0->x;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(541)
													Float tmp30 = (nx * t);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(541)
													Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(541)
													w11->x = tmp31;
													HX_STACK_LINE(541)
													Float tmp32 = v0->y;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(541)
													Float tmp33 = (ny * t);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(541)
													Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(541)
													w11->y = tmp34;
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp29 = circle->radius;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(541)
													Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(541)
													Float t = tmp30;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp31 = circle->worldCOMx;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(541)
													Float tmp32 = (nx * t);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(541)
													Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(541)
													w21->x = tmp33;
													HX_STACK_LINE(541)
													Float tmp34 = circle->worldCOMy;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(541)
													Float tmp35 = (ny * t);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(541)
													Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(541)
													w21->y = tmp36;
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													ax->x = nx;
													HX_STACK_LINE(541)
													ax->y = ny;
													HX_STACK_LINE(541)
													{
													}
												}
											}
										}
										else{
											HX_STACK_LINE(541)
											Float tmp23 = dt;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(541)
											Float tmp24 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(541)
											Float tmp25 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(541)
											Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(541)
											bool tmp27 = (tmp23 >= tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(541)
											if ((tmp27)){
												HX_STACK_LINE(541)
												Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
												HX_STACK_LINE(541)
												Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp28 = (circle->worldCOMx - v1->x);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(541)
													nx = tmp28;
													HX_STACK_LINE(541)
													Float tmp29 = (circle->worldCOMy - v1->y);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(541)
													ny = tmp29;
												}
												HX_STACK_LINE(541)
												Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp29 = (nx * nx);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(541)
													Float tmp30 = (ny * ny);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(541)
													Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(541)
													tmp28 = ::Math_obj::sqrt(tmp31);
												}
												HX_STACK_LINE(541)
												Float len = tmp28;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(541)
												Float tmp29 = len;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(541)
												Float tmp30 = circle->radius;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(541)
												Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(541)
												best = tmp31;
												HX_STACK_LINE(541)
												bool tmp32 = (best < min);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(541)
												if ((tmp32)){
													HX_STACK_LINE(541)
													bool tmp33 = (len == (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(541)
													if ((tmp33)){
														HX_STACK_LINE(541)
														nx = (int)1;
														HX_STACK_LINE(541)
														ny = (int)0;
														HX_STACK_LINE(541)
														{
														}
													}
													else{
														HX_STACK_LINE(541)
														Float tmp34 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(541)
														Float t = tmp34;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(541)
														hx::MultEq(nx,t);
														HX_STACK_LINE(541)
														hx::MultEq(ny,t);
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														int t = (int)0;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(541)
														Float tmp34 = v1->x;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(541)
														Float tmp35 = (nx * t);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(541)
														Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(541)
														w11->x = tmp36;
														HX_STACK_LINE(541)
														Float tmp37 = v1->y;		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(541)
														Float tmp38 = (ny * t);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(541)
														Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(541)
														w11->y = tmp39;
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp34 = circle->radius;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(541)
														Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(541)
														Float t = tmp35;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(541)
														Float tmp36 = circle->worldCOMx;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(541)
														Float tmp37 = (nx * t);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(541)
														Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(541)
														w21->x = tmp38;
														HX_STACK_LINE(541)
														Float tmp39 = circle->worldCOMy;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(541)
														Float tmp40 = (ny * t);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(541)
														Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(541)
														w21->y = tmp41;
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														ax->x = nx;
														HX_STACK_LINE(541)
														ax->y = ny;
														HX_STACK_LINE(541)
														{
														}
													}
												}
											}
											else{
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp28 = circle->radius;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(541)
													Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(541)
													Float t = tmp29;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp30 = circle->worldCOMx;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(541)
													Float tmp31 = (a0->gnormx * t);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(541)
													Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(541)
													w21->x = tmp32;
													HX_STACK_LINE(541)
													Float tmp33 = circle->worldCOMy;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(541)
													Float tmp34 = (a0->gnormy * t);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(541)
													Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(541)
													w21->y = tmp35;
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp28 = best;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(541)
													Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(541)
													Float t = tmp29;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp30 = w21->x;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(541)
													Float tmp31 = (a0->gnormx * t);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(541)
													Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(541)
													w11->x = tmp32;
													HX_STACK_LINE(541)
													Float tmp33 = w21->y;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(541)
													Float tmp34 = (a0->gnormy * t);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(541)
													Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(541)
													w11->y = tmp35;
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													ax->x = a0->gnormx;
													HX_STACK_LINE(541)
													ax->y = a0->gnormy;
													HX_STACK_LINE(541)
													{
													}
												}
											}
										}
									}
									HX_STACK_LINE(541)
									bool tmp15 = swapped;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(541)
									if ((tmp15)){
										HX_STACK_LINE(541)
										Float tmp16 = ax->x;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(541)
										Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(541)
										ax->x = tmp17;
										HX_STACK_LINE(541)
										Float tmp18 = ax->y;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(541)
										Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(541)
										ax->y = tmp19;
									}
									HX_STACK_LINE(541)
									tmp6 = best;
								}
								else{
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
									HX_STACK_LINE(541)
									Float tmp13 = ((Float)-1e+100);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(541)
									Float best = tmp13;		HX_STACK_VAR(best,"best");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
									HX_STACK_LINE(541)
									int besti = (int)0;		HX_STACK_VAR(besti,"besti");
									HX_STACK_LINE(541)
									{
										HX_STACK_LINE(541)
										::zpp_nape::util::ZNPNode_ZPP_Edge tmp14 = p1->edges->head;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(541)
										::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = tmp14;		HX_STACK_VAR(cx_ite2,"cx_ite2");
										HX_STACK_LINE(541)
										while((true)){
											HX_STACK_LINE(541)
											bool tmp15 = (cx_ite2 != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(541)
											bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(541)
											if ((tmp16)){
												HX_STACK_LINE(541)
												break;
											}
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												Float min1 = ((Float)1e100);		HX_STACK_VAR(min1,"min1");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													::zpp_nape::geom::ZPP_Vec2 tmp17 = p2->gverts->next;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(541)
													::zpp_nape::geom::ZPP_Vec2 cx_ite3 = tmp17;		HX_STACK_VAR(cx_ite3,"cx_ite3");
													HX_STACK_LINE(541)
													while((true)){
														HX_STACK_LINE(541)
														bool tmp18 = (cx_ite3 != null());		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(541)
														bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(541)
														if ((tmp19)){
															HX_STACK_LINE(541)
															break;
														}
														HX_STACK_LINE(541)
														::zpp_nape::geom::ZPP_Vec2 v = cx_ite3;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(541)
														{
															HX_STACK_LINE(541)
															Float tmp20 = (a->gnormx * v->x);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(541)
															Float tmp21 = (a->gnormy * v->y);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(541)
															Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(541)
															Float k = tmp22;		HX_STACK_VAR(k,"k");
															HX_STACK_LINE(541)
															bool tmp23 = (k < min1);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(541)
															if ((tmp23)){
																HX_STACK_LINE(541)
																min1 = k;
															}
														}
														HX_STACK_LINE(541)
														cx_ite3 = cx_ite3->next;
													}
												}
												HX_STACK_LINE(541)
												hx::SubEq(min1,a->gprojection);
												HX_STACK_LINE(541)
												bool tmp17 = (min1 > min);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(541)
												if ((tmp17)){
													HX_STACK_LINE(541)
													best = min1;
													HX_STACK_LINE(541)
													break;
												}
												HX_STACK_LINE(541)
												bool tmp18 = (min1 > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(541)
												if ((tmp18)){
													HX_STACK_LINE(541)
													bool tmp19 = (min1 > best);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(541)
													if ((tmp19)){
														HX_STACK_LINE(541)
														best = min1;
														HX_STACK_LINE(541)
														a1 = a;
														HX_STACK_LINE(541)
														besti = (int)1;
													}
												}
												else{
													HX_STACK_LINE(541)
													bool tmp19 = (best < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(541)
													bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(541)
													if ((tmp19)){
														HX_STACK_LINE(541)
														tmp20 = (min1 > best);
													}
													else{
														HX_STACK_LINE(541)
														tmp20 = false;
													}
													HX_STACK_LINE(541)
													if ((tmp20)){
														HX_STACK_LINE(541)
														best = min1;
														HX_STACK_LINE(541)
														a1 = a;
														HX_STACK_LINE(541)
														besti = (int)1;
													}
												}
											}
											HX_STACK_LINE(541)
											cx_ite2 = cx_ite2->next;
										}
									}
									HX_STACK_LINE(541)
									bool tmp14 = (best < min);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(541)
									if ((tmp14)){
										HX_STACK_LINE(541)
										{
											HX_STACK_LINE(541)
											::zpp_nape::util::ZNPNode_ZPP_Edge tmp15 = p2->edges->head;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(541)
											::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = tmp15;		HX_STACK_VAR(cx_ite2,"cx_ite2");
											HX_STACK_LINE(541)
											while((true)){
												HX_STACK_LINE(541)
												bool tmp16 = (cx_ite2 != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(541)
												bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(541)
												if ((tmp17)){
													HX_STACK_LINE(541)
													break;
												}
												HX_STACK_LINE(541)
												::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float min1 = ((Float)1e100);		HX_STACK_VAR(min1,"min1");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														::zpp_nape::geom::ZPP_Vec2 tmp18 = p1->gverts->next;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(541)
														::zpp_nape::geom::ZPP_Vec2 cx_ite3 = tmp18;		HX_STACK_VAR(cx_ite3,"cx_ite3");
														HX_STACK_LINE(541)
														while((true)){
															HX_STACK_LINE(541)
															bool tmp19 = (cx_ite3 != null());		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(541)
															bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(541)
															if ((tmp20)){
																HX_STACK_LINE(541)
																break;
															}
															HX_STACK_LINE(541)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite3;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(541)
															{
																HX_STACK_LINE(541)
																Float tmp21 = (a->gnormx * v->x);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(541)
																Float tmp22 = (a->gnormy * v->y);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(541)
																Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(541)
																Float k = tmp23;		HX_STACK_VAR(k,"k");
																HX_STACK_LINE(541)
																bool tmp24 = (k < min1);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(541)
																if ((tmp24)){
																	HX_STACK_LINE(541)
																	min1 = k;
																}
															}
															HX_STACK_LINE(541)
															cx_ite3 = cx_ite3->next;
														}
													}
													HX_STACK_LINE(541)
													hx::SubEq(min1,a->gprojection);
													HX_STACK_LINE(541)
													bool tmp18 = (min1 > min);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(541)
													if ((tmp18)){
														HX_STACK_LINE(541)
														best = min1;
														HX_STACK_LINE(541)
														break;
													}
													HX_STACK_LINE(541)
													bool tmp19 = (min1 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(541)
													if ((tmp19)){
														HX_STACK_LINE(541)
														bool tmp20 = (min1 > best);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(541)
														if ((tmp20)){
															HX_STACK_LINE(541)
															best = min1;
															HX_STACK_LINE(541)
															a2 = a;
															HX_STACK_LINE(541)
															besti = (int)2;
														}
													}
													else{
														HX_STACK_LINE(541)
														bool tmp20 = (best < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(541)
														bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(541)
														if ((tmp20)){
															HX_STACK_LINE(541)
															tmp21 = (min1 > best);
														}
														else{
															HX_STACK_LINE(541)
															tmp21 = false;
														}
														HX_STACK_LINE(541)
														if ((tmp21)){
															HX_STACK_LINE(541)
															best = min1;
															HX_STACK_LINE(541)
															a2 = a;
															HX_STACK_LINE(541)
															besti = (int)2;
														}
													}
												}
												HX_STACK_LINE(541)
												cx_ite2 = cx_ite2->next;
											}
										}
										HX_STACK_LINE(541)
										bool tmp15 = (best < min);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(541)
										if ((tmp15)){
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Edge ax1;		HX_STACK_VAR(ax1,"ax1");
											HX_STACK_LINE(541)
											bool tmp16 = (besti == (int)1);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(541)
											if ((tmp16)){
												HX_STACK_LINE(541)
												q1 = p1;
												HX_STACK_LINE(541)
												q2 = p2;
												HX_STACK_LINE(541)
												ax1 = a1;
											}
											else{
												HX_STACK_LINE(541)
												q1 = p2;
												HX_STACK_LINE(541)
												q2 = p1;
												HX_STACK_LINE(541)
												ax1 = a2;
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 tmp17 = w11;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(541)
												w11 = w21;
												HX_STACK_LINE(541)
												w21 = tmp17;
												HX_STACK_LINE(541)
												bool tmp18 = swapped;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(541)
												bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(541)
												swapped = tmp19;
											}
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
											HX_STACK_LINE(541)
											Float min1 = ((Float)1e100);		HX_STACK_VAR(min1,"min1");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												::zpp_nape::util::ZNPNode_ZPP_Edge tmp17 = q2->edges->head;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(541)
												::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = tmp17;		HX_STACK_VAR(cx_ite2,"cx_ite2");
												HX_STACK_LINE(541)
												while((true)){
													HX_STACK_LINE(541)
													bool tmp18 = (cx_ite2 != null());		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(541)
													bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(541)
													if ((tmp19)){
														HX_STACK_LINE(541)
														break;
													}
													HX_STACK_LINE(541)
													::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp20 = (ax1->gnormx * a->gnormx);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(541)
														Float tmp21 = (ax1->gnormy * a->gnormy);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(541)
														Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(541)
														Float k = tmp22;		HX_STACK_VAR(k,"k");
														HX_STACK_LINE(541)
														bool tmp23 = (k < min1);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(541)
														if ((tmp23)){
															HX_STACK_LINE(541)
															min1 = k;
															HX_STACK_LINE(541)
															ay = a;
														}
													}
													HX_STACK_LINE(541)
													cx_ite2 = cx_ite2->next;
												}
											}
											HX_STACK_LINE(541)
											bool tmp17 = swapped;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(541)
											if ((tmp17)){
												HX_STACK_LINE(541)
												Float tmp18 = ax1->gnormx;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(541)
												Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(541)
												ax->x = tmp19;
												HX_STACK_LINE(541)
												Float tmp20 = ax1->gnormy;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(541)
												Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(541)
												ax->y = tmp21;
												HX_STACK_LINE(541)
												{
												}
											}
											else{
												HX_STACK_LINE(541)
												ax->x = ax1->gnormx;
												HX_STACK_LINE(541)
												ax->y = ax1->gnormy;
												HX_STACK_LINE(541)
												{
												}
											}
											HX_STACK_LINE(541)
											bool tmp18 = (best >= (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(541)
											if ((tmp18)){
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 v0 = ax1->gp0;		HX_STACK_VAR(v0,"v0");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 v1 = ax1->gp1;		HX_STACK_VAR(v1,"v1");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
												HX_STACK_LINE(541)
												Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
												HX_STACK_LINE(541)
												Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
												HX_STACK_LINE(541)
												Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
												HX_STACK_LINE(541)
												Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp19 = (v1->x - v0->x);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(541)
													vx = tmp19;
													HX_STACK_LINE(541)
													Float tmp20 = (v1->y - v0->y);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(541)
													vy = tmp20;
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp19 = (q11->x - q0->x);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(541)
													qx = tmp19;
													HX_STACK_LINE(541)
													Float tmp20 = (q11->y - q0->y);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(541)
													qy = tmp20;
												}
												HX_STACK_LINE(541)
												Float tmp19 = (vx * vx);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(541)
												Float tmp20 = (vy * vy);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(541)
												Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(541)
												Float tmp22 = (Float((int)1) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(541)
												Float vdot = tmp22;		HX_STACK_VAR(vdot,"vdot");
												HX_STACK_LINE(541)
												Float tmp23 = (qx * qx);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(541)
												Float tmp24 = (qy * qy);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(541)
												Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(541)
												Float tmp26 = (Float((int)1) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(541)
												Float qdot = tmp26;		HX_STACK_VAR(qdot,"qdot");
												HX_STACK_LINE(541)
												Float tmp27 = vx;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(541)
												Float tmp28 = (v0->x - q0->x);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(541)
												Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(541)
												Float tmp30 = vy;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(541)
												Float tmp31 = (v0->y - q0->y);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(541)
												Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(541)
												Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(541)
												Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(541)
												Float tmp35 = vdot;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(541)
												Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(541)
												Float t11 = tmp36;		HX_STACK_VAR(t11,"t11");
												HX_STACK_LINE(541)
												Float tmp37 = vx;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(541)
												Float tmp38 = (v0->x - q11->x);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(541)
												Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(541)
												Float tmp40 = vy;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(541)
												Float tmp41 = (v0->y - q11->y);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(541)
												Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(541)
												Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(541)
												Float tmp44 = -(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(541)
												Float tmp45 = vdot;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(541)
												Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(541)
												Float t21 = tmp46;		HX_STACK_VAR(t21,"t21");
												HX_STACK_LINE(541)
												Float tmp47 = qx;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(541)
												Float tmp48 = (q0->x - v0->x);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(541)
												Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(541)
												Float tmp50 = qy;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(541)
												Float tmp51 = (q0->y - v0->y);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(541)
												Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(541)
												Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(541)
												Float tmp54 = -(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(541)
												Float tmp55 = qdot;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(541)
												Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(541)
												Float s12 = tmp56;		HX_STACK_VAR(s12,"s12");
												HX_STACK_LINE(541)
												Float tmp57 = qx;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(541)
												Float tmp58 = (q0->x - v1->x);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(541)
												Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(541)
												Float tmp60 = qy;		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(541)
												Float tmp61 = (q0->y - v1->y);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(541)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(541)
												Float tmp63 = (tmp59 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(541)
												Float tmp64 = -(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(541)
												Float tmp65 = qdot;		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(541)
												Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(541)
												Float s22 = tmp66;		HX_STACK_VAR(s22,"s22");
												HX_STACK_LINE(541)
												bool tmp67 = (t11 < (int)0);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(541)
												if ((tmp67)){
													HX_STACK_LINE(541)
													t11 = (int)0;
												}
												else{
													HX_STACK_LINE(541)
													bool tmp68 = (t11 > (int)1);		HX_STACK_VAR(tmp68,"tmp68");
													HX_STACK_LINE(541)
													if ((tmp68)){
														HX_STACK_LINE(541)
														t11 = (int)1;
													}
												}
												HX_STACK_LINE(541)
												bool tmp68 = (t21 < (int)0);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(541)
												if ((tmp68)){
													HX_STACK_LINE(541)
													t21 = (int)0;
												}
												else{
													HX_STACK_LINE(541)
													bool tmp69 = (t21 > (int)1);		HX_STACK_VAR(tmp69,"tmp69");
													HX_STACK_LINE(541)
													if ((tmp69)){
														HX_STACK_LINE(541)
														t21 = (int)1;
													}
												}
												HX_STACK_LINE(541)
												bool tmp69 = (s12 < (int)0);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(541)
												if ((tmp69)){
													HX_STACK_LINE(541)
													s12 = (int)0;
												}
												else{
													HX_STACK_LINE(541)
													bool tmp70 = (s12 > (int)1);		HX_STACK_VAR(tmp70,"tmp70");
													HX_STACK_LINE(541)
													if ((tmp70)){
														HX_STACK_LINE(541)
														s12 = (int)1;
													}
												}
												HX_STACK_LINE(541)
												bool tmp70 = (s22 < (int)0);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(541)
												if ((tmp70)){
													HX_STACK_LINE(541)
													s22 = (int)0;
												}
												else{
													HX_STACK_LINE(541)
													bool tmp71 = (s22 > (int)1);		HX_STACK_VAR(tmp71,"tmp71");
													HX_STACK_LINE(541)
													if ((tmp71)){
														HX_STACK_LINE(541)
														s22 = (int)1;
													}
												}
												HX_STACK_LINE(541)
												Float f1x = ((Float)0.0);		HX_STACK_VAR(f1x,"f1x");
												HX_STACK_LINE(541)
												Float f1y = ((Float)0.0);		HX_STACK_VAR(f1y,"f1y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = t11;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp71 = v0->x;		HX_STACK_VAR(tmp71,"tmp71");
													HX_STACK_LINE(541)
													Float tmp72 = (vx * t);		HX_STACK_VAR(tmp72,"tmp72");
													HX_STACK_LINE(541)
													Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
													HX_STACK_LINE(541)
													f1x = tmp73;
													HX_STACK_LINE(541)
													Float tmp74 = v0->y;		HX_STACK_VAR(tmp74,"tmp74");
													HX_STACK_LINE(541)
													Float tmp75 = (vy * t);		HX_STACK_VAR(tmp75,"tmp75");
													HX_STACK_LINE(541)
													Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
													HX_STACK_LINE(541)
													f1y = tmp76;
												}
												HX_STACK_LINE(541)
												Float f2x = ((Float)0.0);		HX_STACK_VAR(f2x,"f2x");
												HX_STACK_LINE(541)
												Float f2y = ((Float)0.0);		HX_STACK_VAR(f2y,"f2y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = t21;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp71 = v0->x;		HX_STACK_VAR(tmp71,"tmp71");
													HX_STACK_LINE(541)
													Float tmp72 = (vx * t);		HX_STACK_VAR(tmp72,"tmp72");
													HX_STACK_LINE(541)
													Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
													HX_STACK_LINE(541)
													f2x = tmp73;
													HX_STACK_LINE(541)
													Float tmp74 = v0->y;		HX_STACK_VAR(tmp74,"tmp74");
													HX_STACK_LINE(541)
													Float tmp75 = (vy * t);		HX_STACK_VAR(tmp75,"tmp75");
													HX_STACK_LINE(541)
													Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
													HX_STACK_LINE(541)
													f2y = tmp76;
												}
												HX_STACK_LINE(541)
												Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
												HX_STACK_LINE(541)
												Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = s12;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp71 = q0->x;		HX_STACK_VAR(tmp71,"tmp71");
													HX_STACK_LINE(541)
													Float tmp72 = (qx * t);		HX_STACK_VAR(tmp72,"tmp72");
													HX_STACK_LINE(541)
													Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
													HX_STACK_LINE(541)
													g1x = tmp73;
													HX_STACK_LINE(541)
													Float tmp74 = q0->y;		HX_STACK_VAR(tmp74,"tmp74");
													HX_STACK_LINE(541)
													Float tmp75 = (qy * t);		HX_STACK_VAR(tmp75,"tmp75");
													HX_STACK_LINE(541)
													Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
													HX_STACK_LINE(541)
													g1y = tmp76;
												}
												HX_STACK_LINE(541)
												Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
												HX_STACK_LINE(541)
												Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = s22;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp71 = q0->x;		HX_STACK_VAR(tmp71,"tmp71");
													HX_STACK_LINE(541)
													Float tmp72 = (qx * t);		HX_STACK_VAR(tmp72,"tmp72");
													HX_STACK_LINE(541)
													Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
													HX_STACK_LINE(541)
													g2x = tmp73;
													HX_STACK_LINE(541)
													Float tmp74 = q0->y;		HX_STACK_VAR(tmp74,"tmp74");
													HX_STACK_LINE(541)
													Float tmp75 = (qy * t);		HX_STACK_VAR(tmp75,"tmp75");
													HX_STACK_LINE(541)
													Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
													HX_STACK_LINE(541)
													g2y = tmp76;
												}
												HX_STACK_LINE(541)
												Float tmp71;		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
													HX_STACK_LINE(541)
													Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp72 = (f1x - q0->x);		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(541)
														dx = tmp72;
														HX_STACK_LINE(541)
														Float tmp73 = (f1y - q0->y);		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(541)
														dy = tmp73;
													}
													HX_STACK_LINE(541)
													Float tmp72 = (dx * dx);		HX_STACK_VAR(tmp72,"tmp72");
													HX_STACK_LINE(541)
													Float tmp73 = (dy * dy);		HX_STACK_VAR(tmp73,"tmp73");
													HX_STACK_LINE(541)
													tmp71 = (tmp72 + tmp73);
												}
												HX_STACK_LINE(541)
												Float d1 = tmp71;		HX_STACK_VAR(d1,"d1");
												HX_STACK_LINE(541)
												Float tmp72;		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
													HX_STACK_LINE(541)
													Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp73 = (f2x - q11->x);		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(541)
														dx = tmp73;
														HX_STACK_LINE(541)
														Float tmp74 = (f2y - q11->y);		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(541)
														dy = tmp74;
													}
													HX_STACK_LINE(541)
													Float tmp73 = (dx * dx);		HX_STACK_VAR(tmp73,"tmp73");
													HX_STACK_LINE(541)
													Float tmp74 = (dy * dy);		HX_STACK_VAR(tmp74,"tmp74");
													HX_STACK_LINE(541)
													tmp72 = (tmp73 + tmp74);
												}
												HX_STACK_LINE(541)
												Float d2 = tmp72;		HX_STACK_VAR(d2,"d2");
												HX_STACK_LINE(541)
												Float tmp73;		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
													HX_STACK_LINE(541)
													Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp74 = (g1x - v0->x);		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(541)
														dx = tmp74;
														HX_STACK_LINE(541)
														Float tmp75 = (g1y - v0->y);		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(541)
														dy = tmp75;
													}
													HX_STACK_LINE(541)
													Float tmp74 = (dx * dx);		HX_STACK_VAR(tmp74,"tmp74");
													HX_STACK_LINE(541)
													Float tmp75 = (dy * dy);		HX_STACK_VAR(tmp75,"tmp75");
													HX_STACK_LINE(541)
													tmp73 = (tmp74 + tmp75);
												}
												HX_STACK_LINE(541)
												Float e1 = tmp73;		HX_STACK_VAR(e1,"e1");
												HX_STACK_LINE(541)
												Float tmp74;		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
													HX_STACK_LINE(541)
													Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp75 = (g2x - v1->x);		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(541)
														dx = tmp75;
														HX_STACK_LINE(541)
														Float tmp76 = (g2y - v1->y);		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(541)
														dy = tmp76;
													}
													HX_STACK_LINE(541)
													Float tmp75 = (dx * dx);		HX_STACK_VAR(tmp75,"tmp75");
													HX_STACK_LINE(541)
													Float tmp76 = (dy * dy);		HX_STACK_VAR(tmp76,"tmp76");
													HX_STACK_LINE(541)
													tmp74 = (tmp75 + tmp76);
												}
												HX_STACK_LINE(541)
												Float e2 = tmp74;		HX_STACK_VAR(e2,"e2");
												HX_STACK_LINE(541)
												Float minfx = ((Float)0.0);		HX_STACK_VAR(minfx,"minfx");
												HX_STACK_LINE(541)
												Float minfy = ((Float)0.0);		HX_STACK_VAR(minfy,"minfy");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
												HX_STACK_LINE(541)
												bool tmp75 = (d1 < d2);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(541)
												if ((tmp75)){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														minfx = f1x;
														HX_STACK_LINE(541)
														minfy = f1y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													minq = q0;
												}
												else{
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														minfx = f2x;
														HX_STACK_LINE(541)
														minfy = f2y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													minq = q11;
													HX_STACK_LINE(541)
													d1 = d2;
												}
												HX_STACK_LINE(541)
												Float mingx = ((Float)0.0);		HX_STACK_VAR(mingx,"mingx");
												HX_STACK_LINE(541)
												Float mingy = ((Float)0.0);		HX_STACK_VAR(mingy,"mingy");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
												HX_STACK_LINE(541)
												bool tmp76 = (e1 < e2);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(541)
												if ((tmp76)){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														mingx = g1x;
														HX_STACK_LINE(541)
														mingy = g1y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													minv = v0;
												}
												else{
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														mingx = g2x;
														HX_STACK_LINE(541)
														mingy = g2y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													minv = v1;
													HX_STACK_LINE(541)
													e1 = e2;
												}
												HX_STACK_LINE(541)
												bool tmp77 = (d1 < e1);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(541)
												if ((tmp77)){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w11->x = minfx;
														HX_STACK_LINE(541)
														w11->y = minfy;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w21->x = minq->x;
														HX_STACK_LINE(541)
														w21->y = minq->y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													Float tmp78 = d1;		HX_STACK_VAR(tmp78,"tmp78");
													HX_STACK_LINE(541)
													Float tmp79 = ::Math_obj::sqrt(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
													HX_STACK_LINE(541)
													best = tmp79;
												}
												else{
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w21->x = mingx;
														HX_STACK_LINE(541)
														w21->y = mingy;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w11->x = minv->x;
														HX_STACK_LINE(541)
														w11->y = minv->y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													Float tmp78 = e1;		HX_STACK_VAR(tmp78,"tmp78");
													HX_STACK_LINE(541)
													Float tmp79 = ::Math_obj::sqrt(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
													HX_STACK_LINE(541)
													best = tmp79;
												}
												HX_STACK_LINE(541)
												bool tmp78 = (best != (int)0);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(541)
												if ((tmp78)){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp79 = (w21->x - w11->x);		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(541)
														ax->x = tmp79;
														HX_STACK_LINE(541)
														Float tmp80 = (w21->y - w11->y);		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(541)
														ax->y = tmp80;
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp79 = (Float(((Float)1.0)) / Float(best));		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(541)
														Float t = tmp79;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(541)
														hx::MultEq(ax->x,t);
														HX_STACK_LINE(541)
														hx::MultEq(ax->y,t);
													}
													HX_STACK_LINE(541)
													bool tmp79 = swapped;		HX_STACK_VAR(tmp79,"tmp79");
													HX_STACK_LINE(541)
													if ((tmp79)){
														HX_STACK_LINE(541)
														Float tmp80 = ax->x;		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(541)
														Float tmp81 = -(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(541)
														ax->x = tmp81;
														HX_STACK_LINE(541)
														Float tmp82 = ax->y;		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(541)
														Float tmp83 = -(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
														HX_STACK_LINE(541)
														ax->y = tmp83;
													}
												}
												HX_STACK_LINE(541)
												tmp6 = best;
											}
											else{
												HX_STACK_LINE(541)
												Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
												HX_STACK_LINE(541)
												Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp19 = ay->gp0->x;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(541)
													c0x = tmp19;
													HX_STACK_LINE(541)
													Float tmp20 = ay->gp0->y;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(541)
													c0y = tmp20;
													HX_STACK_LINE(541)
													{
													}
												}
												HX_STACK_LINE(541)
												Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
												HX_STACK_LINE(541)
												Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp19 = ay->gp1->x;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(541)
													c1x = tmp19;
													HX_STACK_LINE(541)
													Float tmp20 = ay->gp1->y;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(541)
													c1y = tmp20;
													HX_STACK_LINE(541)
													{
													}
												}
												HX_STACK_LINE(541)
												Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
												HX_STACK_LINE(541)
												Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp19 = (c1x - c0x);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(541)
													dvx = tmp19;
													HX_STACK_LINE(541)
													Float tmp20 = (c1y - c0y);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(541)
													dvy = tmp20;
												}
												HX_STACK_LINE(541)
												Float tmp19 = (ax1->gnormy * c0x);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(541)
												Float tmp20 = (ax1->gnormx * c0y);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(541)
												Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(541)
												Float d0 = tmp21;		HX_STACK_VAR(d0,"d0");
												HX_STACK_LINE(541)
												Float tmp22 = (ax1->gnormy * c1x);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(541)
												Float tmp23 = (ax1->gnormx * c1y);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(541)
												Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(541)
												Float d1 = tmp24;		HX_STACK_VAR(d1,"d1");
												HX_STACK_LINE(541)
												Float tmp25 = (d1 - d0);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(541)
												Float tmp26 = (Float((int)1) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(541)
												Float den = tmp26;		HX_STACK_VAR(den,"den");
												HX_STACK_LINE(541)
												Float tmp27 = ax1->tp1;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(541)
												Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(541)
												Float tmp29 = d0;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(541)
												Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(541)
												Float tmp31 = den;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(541)
												Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(541)
												Float t = tmp32;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(541)
												Float tmp33 = t;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(541)
												Float tmp34 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(541)
												bool tmp35 = (tmp33 > tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(541)
												if ((tmp35)){
													HX_STACK_LINE(541)
													Float t3 = t;		HX_STACK_VAR(t3,"t3");
													HX_STACK_LINE(541)
													Float tmp36 = (dvx * t3);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(541)
													hx::AddEq(c0x,tmp36);
													HX_STACK_LINE(541)
													Float tmp37 = (dvy * t3);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(541)
													hx::AddEq(c0y,tmp37);
												}
												HX_STACK_LINE(541)
												Float tmp36 = ax1->tp0;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(541)
												Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(541)
												Float tmp38 = d1;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(541)
												Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(541)
												Float tmp40 = den;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(541)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(541)
												Float t3 = tmp41;		HX_STACK_VAR(t3,"t3");
												HX_STACK_LINE(541)
												Float tmp42 = t3;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(541)
												Float tmp43 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(541)
												Float tmp44 = -(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(541)
												bool tmp45 = (tmp42 < tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(541)
												if ((tmp45)){
													HX_STACK_LINE(541)
													Float t4 = t3;		HX_STACK_VAR(t4,"t4");
													HX_STACK_LINE(541)
													Float tmp46 = (dvx * t4);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(541)
													hx::AddEq(c1x,tmp46);
													HX_STACK_LINE(541)
													Float tmp47 = (dvy * t4);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(541)
													hx::AddEq(c1y,tmp47);
												}
												HX_STACK_LINE(541)
												Float tmp46 = (c0x * ax1->gnormx);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(541)
												Float tmp47 = (c0y * ax1->gnormy);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(541)
												Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(541)
												Float tmp49 = ax1->gprojection;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(541)
												Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(541)
												Float c0d = tmp50;		HX_STACK_VAR(c0d,"c0d");
												HX_STACK_LINE(541)
												Float tmp51 = (c1x * ax1->gnormx);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(541)
												Float tmp52 = (c1y * ax1->gnormy);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(541)
												Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(541)
												Float tmp54 = ax1->gprojection;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(541)
												Float tmp55 = (tmp53 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(541)
												Float c1d = tmp55;		HX_STACK_VAR(c1d,"c1d");
												HX_STACK_LINE(541)
												bool tmp56 = (c0d < c1d);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(541)
												if ((tmp56)){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w21->x = c0x;
														HX_STACK_LINE(541)
														w21->y = c0y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp57 = c0d;		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(541)
														Float tmp58 = -(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(541)
														Float t4 = tmp58;		HX_STACK_VAR(t4,"t4");
														HX_STACK_LINE(541)
														Float tmp59 = w21->x;		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(541)
														Float tmp60 = (ax1->gnormx * t4);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(541)
														Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(541)
														w11->x = tmp61;
														HX_STACK_LINE(541)
														Float tmp62 = w21->y;		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(541)
														Float tmp63 = (ax1->gnormy * t4);		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(541)
														Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(541)
														w11->y = tmp64;
													}
													HX_STACK_LINE(541)
													tmp6 = c0d;
												}
												else{
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w21->x = c1x;
														HX_STACK_LINE(541)
														w21->y = c1y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp57 = c1d;		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(541)
														Float tmp58 = -(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(541)
														Float t4 = tmp58;		HX_STACK_VAR(t4,"t4");
														HX_STACK_LINE(541)
														Float tmp59 = w21->x;		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(541)
														Float tmp60 = (ax1->gnormx * t4);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(541)
														Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(541)
														w11->x = tmp61;
														HX_STACK_LINE(541)
														Float tmp62 = w21->y;		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(541)
														Float tmp63 = (ax1->gnormy * t4);		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(541)
														Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(541)
														w11->y = tmp64;
													}
													HX_STACK_LINE(541)
													tmp6 = c1d;
												}
											}
										}
										else{
											HX_STACK_LINE(541)
											tmp6 = min;
										}
									}
									else{
										HX_STACK_LINE(541)
										tmp6 = min;
									}
								}
							}
						}
						HX_STACK_LINE(541)
						Float dist = tmp6;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(542)
						bool tmp7 = (dist < min);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(542)
						if ((tmp7)){
							HX_STACK_LINE(543)
							min = dist;
							HX_STACK_LINE(544)
							{
								HX_STACK_LINE(545)
								w1->x = t1->x;
								HX_STACK_LINE(546)
								w1->y = t1->y;
								HX_STACK_LINE(555)
								{
								}
							}
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(565)
								w2->x = t2->x;
								HX_STACK_LINE(566)
								w2->y = t2->y;
								HX_STACK_LINE(575)
								{
								}
							}
						}
					}
					HX_STACK_LINE(586)
					cx_ite1 = cx_ite1->next;
				}
			}
			HX_STACK_LINE(590)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(593)
	{
		HX_STACK_LINE(594)
		::zpp_nape::geom::ZPP_Vec2 o = t1;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			bool tmp = (o->outer != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(603)
			if ((tmp)){
				HX_STACK_LINE(603)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(603)
				o->outer = null();
			}
			HX_STACK_LINE(603)
			o->_isimmutable = null();
			HX_STACK_LINE(603)
			o->_validate = null();
			HX_STACK_LINE(603)
			o->_invalidate = null();
		}
		HX_STACK_LINE(604)
		::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(604)
		o->next = tmp;
		HX_STACK_LINE(605)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(610)
	{
		HX_STACK_LINE(611)
		::zpp_nape::geom::ZPP_Vec2 o = t2;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			bool tmp = (o->outer != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(620)
			if ((tmp)){
				HX_STACK_LINE(620)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(620)
				o->outer = null();
			}
			HX_STACK_LINE(620)
			o->_isimmutable = null();
			HX_STACK_LINE(620)
			o->_validate = null();
			HX_STACK_LINE(620)
			o->_invalidate = null();
		}
		HX_STACK_LINE(621)
		::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(621)
		o->next = tmp;
		HX_STACK_LINE(622)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(627)
	{
		HX_STACK_LINE(628)
		::zpp_nape::geom::ZPP_Vec2 o = ax;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(637)
		{
			HX_STACK_LINE(637)
			bool tmp = (o->outer != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(637)
			if ((tmp)){
				HX_STACK_LINE(637)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(637)
				o->outer = null();
			}
			HX_STACK_LINE(637)
			o->_isimmutable = null();
			HX_STACK_LINE(637)
			o->_validate = null();
			HX_STACK_LINE(637)
			o->_invalidate = null();
		}
		HX_STACK_LINE(638)
		::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(638)
		o->next = tmp;
		HX_STACK_LINE(639)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(644)
	Float tmp = min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(644)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_SweepDistance_obj,distanceBody,return )

Float ZPP_SweepDistance_obj::distance( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,::zpp_nape::geom::ZPP_Vec2 w1,::zpp_nape::geom::ZPP_Vec2 w2,::zpp_nape::geom::ZPP_Vec2 axis,hx::Null< Float >  __o_upperBound){
Float upperBound = __o_upperBound.Default(((Float)1e100));
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SweepDistance","distance",0x5faae7b8,"zpp_nape.geom.ZPP_SweepDistance.distance","zpp_nape/geom/SweepDistance.hx",647,0x2645f2ee)
	HX_STACK_ARG(s1,"s1")
	HX_STACK_ARG(s2,"s2")
	HX_STACK_ARG(w1,"w1")
	HX_STACK_ARG(w2,"w2")
	HX_STACK_ARG(axis,"axis")
	HX_STACK_ARG(upperBound,"upperBound")
{
		HX_STACK_LINE(648)
		bool tmp = (s1->type == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(648)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(648)
		if ((tmp)){
			HX_STACK_LINE(648)
			tmp1 = (s2->type == (int)0);
		}
		else{
			HX_STACK_LINE(648)
			tmp1 = false;
		}
		HX_STACK_LINE(648)
		if ((tmp1)){
			HX_STACK_LINE(649)
			::zpp_nape::shape::ZPP_Circle c1 = s1->circle;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(650)
			::zpp_nape::shape::ZPP_Circle c2 = s2->circle;		HX_STACK_VAR(c2,"c2");
			HX_STACK_LINE(651)
			Float dist;		HX_STACK_VAR(dist,"dist");
			HX_STACK_LINE(652)
			{
				HX_STACK_LINE(653)
				Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(654)
				Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
				HX_STACK_LINE(655)
				{
					HX_STACK_LINE(656)
					Float tmp2 = (c2->worldCOMx - c1->worldCOMx);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(656)
					nx = tmp2;
					HX_STACK_LINE(657)
					Float tmp3 = (c2->worldCOMy - c1->worldCOMy);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(657)
					ny = tmp3;
				}
				HX_STACK_LINE(659)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(659)
				{
					HX_STACK_LINE(659)
					Float tmp3 = (nx * nx);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(659)
					Float tmp4 = (ny * ny);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(659)
					Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(659)
					tmp2 = ::Math_obj::sqrt(tmp5);
				}
				HX_STACK_LINE(659)
				Float len = tmp2;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(660)
				Float tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(660)
				Float tmp4 = (c1->radius + c2->radius);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(660)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(660)
				dist = tmp5;
				HX_STACK_LINE(661)
				bool tmp6 = (dist < upperBound);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(661)
				if ((tmp6)){
					HX_STACK_LINE(662)
					bool tmp7 = (len == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(662)
					if ((tmp7)){
						HX_STACK_LINE(663)
						nx = (int)1;
						HX_STACK_LINE(664)
						ny = (int)0;
						HX_STACK_LINE(673)
						{
						}
					}
					else{
						HX_STACK_LINE(683)
						Float tmp8 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(683)
						Float t = tmp8;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(692)
						hx::MultEq(nx,t);
						HX_STACK_LINE(693)
						hx::MultEq(ny,t);
					}
					HX_STACK_LINE(695)
					{
						HX_STACK_LINE(696)
						Float t = c1->radius;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(705)
						Float tmp8 = c1->worldCOMx;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(705)
						Float tmp9 = (nx * t);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(705)
						Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(705)
						w1->x = tmp10;
						HX_STACK_LINE(706)
						Float tmp11 = c1->worldCOMy;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(706)
						Float tmp12 = (ny * t);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(706)
						Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(706)
						w1->y = tmp13;
					}
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(709)
						Float tmp8 = c2->radius;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(709)
						Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(709)
						Float t = tmp9;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(718)
						Float tmp10 = c2->worldCOMx;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(718)
						Float tmp11 = (nx * t);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(718)
						Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(718)
						w2->x = tmp12;
						HX_STACK_LINE(719)
						Float tmp13 = c2->worldCOMy;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(719)
						Float tmp14 = (ny * t);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(719)
						Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(719)
						w2->y = tmp15;
					}
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(722)
						axis->x = nx;
						HX_STACK_LINE(723)
						axis->y = ny;
						HX_STACK_LINE(732)
						{
						}
					}
				}
			}
			HX_STACK_LINE(743)
			Float tmp2 = dist;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(743)
			return tmp2;
		}
		else{
			HX_STACK_LINE(746)
			bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
			HX_STACK_LINE(747)
			bool tmp2 = (s1->type == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(747)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(747)
			if ((tmp2)){
				HX_STACK_LINE(747)
				tmp3 = (s2->type == (int)1);
			}
			else{
				HX_STACK_LINE(747)
				tmp3 = false;
			}
			HX_STACK_LINE(747)
			if ((tmp3)){
				HX_STACK_LINE(748)
				::zpp_nape::shape::ZPP_Shape tmp4 = s1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(749)
				s1 = s2;
				HX_STACK_LINE(750)
				s2 = tmp4;
				HX_STACK_LINE(751)
				::zpp_nape::geom::ZPP_Vec2 tmp21 = w1;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(752)
				w1 = w2;
				HX_STACK_LINE(753)
				w2 = tmp21;
				HX_STACK_LINE(754)
				swapped = true;
			}
			HX_STACK_LINE(756)
			bool tmp4 = (s1->type == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(756)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(756)
			if ((tmp4)){
				HX_STACK_LINE(756)
				tmp5 = (s2->type == (int)0);
			}
			else{
				HX_STACK_LINE(756)
				tmp5 = false;
			}
			HX_STACK_LINE(756)
			if ((tmp5)){
				HX_STACK_LINE(757)
				::zpp_nape::shape::ZPP_Polygon poly = s1->polygon;		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(758)
				::zpp_nape::shape::ZPP_Circle circle = s2->circle;		HX_STACK_VAR(circle,"circle");
				HX_STACK_LINE(759)
				Float tmp6 = ((Float)-1e+100);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(759)
				Float best = tmp6;		HX_STACK_VAR(best,"best");
				HX_STACK_LINE(760)
				::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
				HX_STACK_LINE(761)
				{
					HX_STACK_LINE(762)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp7 = poly->edges->head;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(762)
					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp7;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(763)
					while((true)){
						HX_STACK_LINE(763)
						bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(763)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(763)
						if ((tmp9)){
							HX_STACK_LINE(763)
							break;
						}
						HX_STACK_LINE(764)
						::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(765)
						{
							HX_STACK_LINE(766)
							Float tmp10 = (a->gnormx * circle->worldCOMx);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(766)
							Float tmp11 = (a->gnormy * circle->worldCOMy);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(766)
							Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(766)
							Float tmp13 = a->gprojection;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(766)
							Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(766)
							Float tmp15 = circle->radius;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(766)
							Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(766)
							Float dist = tmp16;		HX_STACK_VAR(dist,"dist");
							HX_STACK_LINE(767)
							bool tmp17 = (dist > upperBound);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(767)
							if ((tmp17)){
								HX_STACK_LINE(768)
								best = dist;
								HX_STACK_LINE(769)
								break;
							}
							HX_STACK_LINE(771)
							bool tmp18 = (dist > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(771)
							if ((tmp18)){
								HX_STACK_LINE(772)
								bool tmp19 = (dist > best);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(772)
								if ((tmp19)){
									HX_STACK_LINE(773)
									best = dist;
									HX_STACK_LINE(774)
									a0 = a;
								}
							}
							else{
								HX_STACK_LINE(777)
								bool tmp19 = (best < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(777)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(777)
								if ((tmp19)){
									HX_STACK_LINE(777)
									tmp20 = (dist > best);
								}
								else{
									HX_STACK_LINE(777)
									tmp20 = false;
								}
								HX_STACK_LINE(777)
								if ((tmp20)){
									HX_STACK_LINE(778)
									best = dist;
									HX_STACK_LINE(779)
									a0 = a;
								}
							}
						}
						HX_STACK_LINE(782)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(785)
				bool tmp7 = (best < upperBound);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(785)
				if ((tmp7)){
					HX_STACK_LINE(786)
					::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
					HX_STACK_LINE(787)
					::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(788)
					Float tmp8 = (circle->worldCOMy * a0->gnormx);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(788)
					Float tmp9 = (circle->worldCOMx * a0->gnormy);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(788)
					Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(788)
					Float dt = tmp10;		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(789)
					Float tmp11 = dt;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(789)
					Float tmp12 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(789)
					Float tmp13 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(789)
					Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(789)
					bool tmp15 = (tmp11 <= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(789)
					if ((tmp15)){
						HX_STACK_LINE(791)
						Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
						HX_STACK_LINE(792)
						Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
						HX_STACK_LINE(793)
						{
							HX_STACK_LINE(794)
							Float tmp16 = (circle->worldCOMx - v0->x);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(794)
							nx = tmp16;
							HX_STACK_LINE(795)
							Float tmp17 = (circle->worldCOMy - v0->y);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(795)
							ny = tmp17;
						}
						HX_STACK_LINE(797)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(797)
						{
							HX_STACK_LINE(797)
							Float tmp17 = (nx * nx);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(797)
							Float tmp18 = (ny * ny);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(797)
							Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(797)
							tmp16 = ::Math_obj::sqrt(tmp19);
						}
						HX_STACK_LINE(797)
						Float len = tmp16;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(798)
						Float tmp17 = len;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(798)
						Float tmp18 = circle->radius;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(798)
						Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(798)
						best = tmp19;
						HX_STACK_LINE(799)
						bool tmp20 = (best < upperBound);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(799)
						if ((tmp20)){
							HX_STACK_LINE(800)
							bool tmp21 = (len == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(800)
							if ((tmp21)){
								HX_STACK_LINE(801)
								nx = (int)1;
								HX_STACK_LINE(802)
								ny = (int)0;
								HX_STACK_LINE(811)
								{
								}
							}
							else{
								HX_STACK_LINE(821)
								Float tmp22 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(821)
								Float t = tmp22;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(830)
								hx::MultEq(nx,t);
								HX_STACK_LINE(831)
								hx::MultEq(ny,t);
							}
							HX_STACK_LINE(833)
							{
								HX_STACK_LINE(834)
								int t = (int)0;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(843)
								Float tmp22 = v0->x;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(843)
								Float tmp23 = (nx * t);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(843)
								Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(843)
								w1->x = tmp24;
								HX_STACK_LINE(844)
								Float tmp25 = v0->y;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(844)
								Float tmp26 = (ny * t);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(844)
								Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(844)
								w1->y = tmp27;
							}
							HX_STACK_LINE(846)
							{
								HX_STACK_LINE(847)
								Float tmp22 = circle->radius;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(847)
								Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(847)
								Float t = tmp23;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(856)
								Float tmp24 = circle->worldCOMx;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(856)
								Float tmp25 = (nx * t);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(856)
								Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(856)
								w2->x = tmp26;
								HX_STACK_LINE(857)
								Float tmp27 = circle->worldCOMy;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(857)
								Float tmp28 = (ny * t);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(857)
								Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(857)
								w2->y = tmp29;
							}
							HX_STACK_LINE(859)
							{
								HX_STACK_LINE(860)
								axis->x = nx;
								HX_STACK_LINE(861)
								axis->y = ny;
								HX_STACK_LINE(870)
								{
								}
							}
						}
					}
					else{
						HX_STACK_LINE(882)
						Float tmp16 = dt;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(882)
						Float tmp17 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(882)
						Float tmp18 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(882)
						Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(882)
						bool tmp20 = (tmp16 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(882)
						if ((tmp20)){
							HX_STACK_LINE(884)
							Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(885)
							Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
							HX_STACK_LINE(886)
							{
								HX_STACK_LINE(887)
								Float tmp21 = (circle->worldCOMx - v1->x);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(887)
								nx = tmp21;
								HX_STACK_LINE(888)
								Float tmp22 = (circle->worldCOMy - v1->y);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(888)
								ny = tmp22;
							}
							HX_STACK_LINE(890)
							Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(890)
							{
								HX_STACK_LINE(890)
								Float tmp22 = (nx * nx);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(890)
								Float tmp23 = (ny * ny);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(890)
								Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(890)
								tmp21 = ::Math_obj::sqrt(tmp24);
							}
							HX_STACK_LINE(890)
							Float len = tmp21;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(891)
							Float tmp22 = len;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(891)
							Float tmp23 = circle->radius;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(891)
							Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(891)
							best = tmp24;
							HX_STACK_LINE(892)
							bool tmp25 = (best < upperBound);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(892)
							if ((tmp25)){
								HX_STACK_LINE(893)
								bool tmp26 = (len == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(893)
								if ((tmp26)){
									HX_STACK_LINE(894)
									nx = (int)1;
									HX_STACK_LINE(895)
									ny = (int)0;
									HX_STACK_LINE(904)
									{
									}
								}
								else{
									HX_STACK_LINE(914)
									Float tmp27 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(914)
									Float t = tmp27;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(923)
									hx::MultEq(nx,t);
									HX_STACK_LINE(924)
									hx::MultEq(ny,t);
								}
								HX_STACK_LINE(926)
								{
									HX_STACK_LINE(927)
									int t = (int)0;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(936)
									Float tmp27 = v1->x;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(936)
									Float tmp28 = (nx * t);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(936)
									Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(936)
									w1->x = tmp29;
									HX_STACK_LINE(937)
									Float tmp30 = v1->y;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(937)
									Float tmp31 = (ny * t);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(937)
									Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(937)
									w1->y = tmp32;
								}
								HX_STACK_LINE(939)
								{
									HX_STACK_LINE(940)
									Float tmp27 = circle->radius;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(940)
									Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(940)
									Float t = tmp28;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(949)
									Float tmp29 = circle->worldCOMx;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(949)
									Float tmp30 = (nx * t);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(949)
									Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(949)
									w2->x = tmp31;
									HX_STACK_LINE(950)
									Float tmp32 = circle->worldCOMy;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(950)
									Float tmp33 = (ny * t);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(950)
									Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(950)
									w2->y = tmp34;
								}
								HX_STACK_LINE(952)
								{
									HX_STACK_LINE(953)
									axis->x = nx;
									HX_STACK_LINE(954)
									axis->y = ny;
									HX_STACK_LINE(963)
									{
									}
								}
							}
						}
						else{
							HX_STACK_LINE(976)
							{
								HX_STACK_LINE(977)
								Float tmp21 = circle->radius;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(977)
								Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(977)
								Float t = tmp22;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(986)
								Float tmp23 = circle->worldCOMx;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(986)
								Float tmp24 = (a0->gnormx * t);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(986)
								Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(986)
								w2->x = tmp25;
								HX_STACK_LINE(987)
								Float tmp26 = circle->worldCOMy;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(987)
								Float tmp27 = (a0->gnormy * t);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(987)
								Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(987)
								w2->y = tmp28;
							}
							HX_STACK_LINE(989)
							{
								HX_STACK_LINE(990)
								Float tmp21 = best;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(990)
								Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(990)
								Float t = tmp22;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(999)
								Float tmp23 = w2->x;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(999)
								Float tmp24 = (a0->gnormx * t);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(999)
								Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(999)
								w1->x = tmp25;
								HX_STACK_LINE(1000)
								Float tmp26 = w2->y;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1000)
								Float tmp27 = (a0->gnormy * t);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1000)
								Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1000)
								w1->y = tmp28;
							}
							HX_STACK_LINE(1002)
							{
								HX_STACK_LINE(1003)
								axis->x = a0->gnormx;
								HX_STACK_LINE(1004)
								axis->y = a0->gnormy;
								HX_STACK_LINE(1013)
								{
								}
							}
						}
					}
				}
				HX_STACK_LINE(1024)
				bool tmp8 = swapped;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1024)
				if ((tmp8)){
					HX_STACK_LINE(1025)
					Float tmp9 = axis->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1025)
					Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1025)
					axis->x = tmp10;
					HX_STACK_LINE(1026)
					Float tmp11 = axis->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1026)
					Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1026)
					axis->y = tmp12;
				}
				HX_STACK_LINE(1028)
				Float tmp9 = best;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1028)
				return tmp9;
			}
			else{
				HX_STACK_LINE(1031)
				::zpp_nape::shape::ZPP_Polygon p1 = s1->polygon;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(1032)
				::zpp_nape::shape::ZPP_Polygon p2 = s2->polygon;		HX_STACK_VAR(p2,"p2");
				HX_STACK_LINE(1033)
				Float tmp6 = ((Float)-1e+100);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1033)
				Float best = tmp6;		HX_STACK_VAR(best,"best");
				HX_STACK_LINE(1034)
				::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
				HX_STACK_LINE(1035)
				::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
				HX_STACK_LINE(1036)
				int besti = (int)0;		HX_STACK_VAR(besti,"besti");
				HX_STACK_LINE(1037)
				{
					HX_STACK_LINE(1038)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp7 = p1->edges->head;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1038)
					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp7;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1039)
					while((true)){
						HX_STACK_LINE(1039)
						bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1039)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1039)
						if ((tmp9)){
							HX_STACK_LINE(1039)
							break;
						}
						HX_STACK_LINE(1040)
						::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(1041)
						{
							HX_STACK_LINE(1042)
							Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
							HX_STACK_LINE(1043)
							{
								HX_STACK_LINE(1044)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = p2->gverts->next;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1044)
								::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp10;		HX_STACK_VAR(cx_ite1,"cx_ite1");
								HX_STACK_LINE(1045)
								while((true)){
									HX_STACK_LINE(1045)
									bool tmp11 = (cx_ite1 != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1045)
									bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1045)
									if ((tmp12)){
										HX_STACK_LINE(1045)
										break;
									}
									HX_STACK_LINE(1046)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1047)
									{
										HX_STACK_LINE(1048)
										Float tmp13 = (a->gnormx * v->x);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1048)
										Float tmp14 = (a->gnormy * v->y);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1048)
										Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1048)
										Float k = tmp15;		HX_STACK_VAR(k,"k");
										HX_STACK_LINE(1049)
										bool tmp16 = (k < min);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1049)
										if ((tmp16)){
											HX_STACK_LINE(1049)
											min = k;
										}
									}
									HX_STACK_LINE(1051)
									cx_ite1 = cx_ite1->next;
								}
							}
							HX_STACK_LINE(1054)
							hx::SubEq(min,a->gprojection);
							HX_STACK_LINE(1055)
							bool tmp10 = (min > upperBound);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1055)
							if ((tmp10)){
								HX_STACK_LINE(1056)
								best = min;
								HX_STACK_LINE(1057)
								break;
							}
							HX_STACK_LINE(1059)
							bool tmp11 = (min > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1059)
							if ((tmp11)){
								HX_STACK_LINE(1060)
								bool tmp12 = (min > best);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1060)
								if ((tmp12)){
									HX_STACK_LINE(1061)
									best = min;
									HX_STACK_LINE(1062)
									a1 = a;
									HX_STACK_LINE(1063)
									besti = (int)1;
								}
							}
							else{
								HX_STACK_LINE(1066)
								bool tmp12 = (best < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1066)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1066)
								if ((tmp12)){
									HX_STACK_LINE(1066)
									tmp13 = (min > best);
								}
								else{
									HX_STACK_LINE(1066)
									tmp13 = false;
								}
								HX_STACK_LINE(1066)
								if ((tmp13)){
									HX_STACK_LINE(1067)
									best = min;
									HX_STACK_LINE(1068)
									a1 = a;
									HX_STACK_LINE(1069)
									besti = (int)1;
								}
							}
						}
						HX_STACK_LINE(1072)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(1075)
				bool tmp7 = (best < upperBound);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1075)
				if ((tmp7)){
					HX_STACK_LINE(1076)
					{
						HX_STACK_LINE(1077)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp8 = p2->edges->head;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1077)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp8;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1078)
						while((true)){
							HX_STACK_LINE(1078)
							bool tmp9 = (cx_ite != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1078)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1078)
							if ((tmp10)){
								HX_STACK_LINE(1078)
								break;
							}
							HX_STACK_LINE(1079)
							::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(1080)
							{
								HX_STACK_LINE(1081)
								Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(1082)
								{
									HX_STACK_LINE(1083)
									::zpp_nape::geom::ZPP_Vec2 tmp11 = p1->gverts->next;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1083)
									::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp11;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(1084)
									while((true)){
										HX_STACK_LINE(1084)
										bool tmp12 = (cx_ite1 != null());		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1084)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1084)
										if ((tmp13)){
											HX_STACK_LINE(1084)
											break;
										}
										HX_STACK_LINE(1085)
										::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1086)
										{
											HX_STACK_LINE(1087)
											Float tmp14 = (a->gnormx * v->x);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1087)
											Float tmp15 = (a->gnormy * v->y);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1087)
											Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1087)
											Float k = tmp16;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(1088)
											bool tmp17 = (k < min);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1088)
											if ((tmp17)){
												HX_STACK_LINE(1088)
												min = k;
											}
										}
										HX_STACK_LINE(1090)
										cx_ite1 = cx_ite1->next;
									}
								}
								HX_STACK_LINE(1093)
								hx::SubEq(min,a->gprojection);
								HX_STACK_LINE(1094)
								bool tmp11 = (min > upperBound);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1094)
								if ((tmp11)){
									HX_STACK_LINE(1095)
									best = min;
									HX_STACK_LINE(1096)
									break;
								}
								HX_STACK_LINE(1098)
								bool tmp12 = (min > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1098)
								if ((tmp12)){
									HX_STACK_LINE(1099)
									bool tmp13 = (min > best);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1099)
									if ((tmp13)){
										HX_STACK_LINE(1100)
										best = min;
										HX_STACK_LINE(1101)
										a2 = a;
										HX_STACK_LINE(1102)
										besti = (int)2;
									}
								}
								else{
									HX_STACK_LINE(1105)
									bool tmp13 = (best < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1105)
									bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1105)
									if ((tmp13)){
										HX_STACK_LINE(1105)
										tmp14 = (min > best);
									}
									else{
										HX_STACK_LINE(1105)
										tmp14 = false;
									}
									HX_STACK_LINE(1105)
									if ((tmp14)){
										HX_STACK_LINE(1106)
										best = min;
										HX_STACK_LINE(1107)
										a2 = a;
										HX_STACK_LINE(1108)
										besti = (int)2;
									}
								}
							}
							HX_STACK_LINE(1111)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(1114)
					bool tmp8 = (best < upperBound);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1114)
					if ((tmp8)){
						HX_STACK_LINE(1115)
						::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
						HX_STACK_LINE(1115)
						::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
						HX_STACK_LINE(1116)
						::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
						HX_STACK_LINE(1117)
						bool tmp9 = (besti == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1117)
						if ((tmp9)){
							HX_STACK_LINE(1118)
							q1 = p1;
							HX_STACK_LINE(1119)
							q2 = p2;
							HX_STACK_LINE(1120)
							ax = a1;
						}
						else{
							HX_STACK_LINE(1123)
							q1 = p2;
							HX_STACK_LINE(1124)
							q2 = p1;
							HX_STACK_LINE(1125)
							ax = a2;
							HX_STACK_LINE(1126)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = w1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1127)
							w1 = w2;
							HX_STACK_LINE(1128)
							w2 = tmp10;
							HX_STACK_LINE(1129)
							bool tmp11 = swapped;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1129)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1129)
							swapped = tmp12;
						}
						HX_STACK_LINE(1131)
						::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
						HX_STACK_LINE(1132)
						Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(1133)
						{
							HX_STACK_LINE(1134)
							::zpp_nape::util::ZNPNode_ZPP_Edge tmp10 = q2->edges->head;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1134)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(1135)
							while((true)){
								HX_STACK_LINE(1135)
								bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1135)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1135)
								if ((tmp12)){
									HX_STACK_LINE(1135)
									break;
								}
								HX_STACK_LINE(1136)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1137)
								{
									HX_STACK_LINE(1138)
									Float tmp13 = (ax->gnormx * a->gnormx);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1138)
									Float tmp14 = (ax->gnormy * a->gnormy);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1138)
									Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1138)
									Float k = tmp15;		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(1139)
									bool tmp16 = (k < min);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1139)
									if ((tmp16)){
										HX_STACK_LINE(1140)
										min = k;
										HX_STACK_LINE(1141)
										ay = a;
									}
								}
								HX_STACK_LINE(1144)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(1147)
						bool tmp10 = swapped;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1147)
						if ((tmp10)){
							HX_STACK_LINE(1148)
							Float tmp11 = ax->gnormx;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1148)
							Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1148)
							axis->x = tmp12;
							HX_STACK_LINE(1149)
							Float tmp13 = ax->gnormy;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1149)
							Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1149)
							axis->y = tmp14;
							HX_STACK_LINE(1158)
							{
							}
						}
						else{
							HX_STACK_LINE(1168)
							axis->x = ax->gnormx;
							HX_STACK_LINE(1169)
							axis->y = ax->gnormy;
							HX_STACK_LINE(1178)
							{
							}
						}
						HX_STACK_LINE(1187)
						bool tmp11 = (best >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1187)
						if ((tmp11)){
							HX_STACK_LINE(1188)
							::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
							HX_STACK_LINE(1189)
							::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(1190)
							::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
							HX_STACK_LINE(1191)
							::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
							HX_STACK_LINE(1192)
							Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
							HX_STACK_LINE(1193)
							Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
							HX_STACK_LINE(1194)
							Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
							HX_STACK_LINE(1195)
							Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
							HX_STACK_LINE(1196)
							{
								HX_STACK_LINE(1197)
								Float tmp12 = (v1->x - v0->x);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1197)
								vx = tmp12;
								HX_STACK_LINE(1198)
								Float tmp13 = (v1->y - v0->y);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1198)
								vy = tmp13;
							}
							HX_STACK_LINE(1200)
							{
								HX_STACK_LINE(1201)
								Float tmp12 = (q11->x - q0->x);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1201)
								qx = tmp12;
								HX_STACK_LINE(1202)
								Float tmp13 = (q11->y - q0->y);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1202)
								qy = tmp13;
							}
							HX_STACK_LINE(1204)
							Float tmp12 = (vx * vx);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1204)
							Float tmp13 = (vy * vy);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1204)
							Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1204)
							Float tmp15 = (Float((int)1) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1204)
							Float vdot = tmp15;		HX_STACK_VAR(vdot,"vdot");
							HX_STACK_LINE(1205)
							Float tmp16 = (qx * qx);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1205)
							Float tmp17 = (qy * qy);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1205)
							Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1205)
							Float tmp19 = (Float((int)1) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1205)
							Float qdot = tmp19;		HX_STACK_VAR(qdot,"qdot");
							HX_STACK_LINE(1206)
							Float tmp20 = vx;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1206)
							Float tmp21 = (v0->x - q0->x);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1206)
							Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1206)
							Float tmp23 = vy;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1206)
							Float tmp24 = (v0->y - q0->y);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1206)
							Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1206)
							Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1206)
							Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1206)
							Float tmp28 = vdot;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1206)
							Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1206)
							Float t1 = tmp29;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(1207)
							Float tmp30 = vx;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1207)
							Float tmp31 = (v0->x - q11->x);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1207)
							Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1207)
							Float tmp33 = vy;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1207)
							Float tmp34 = (v0->y - q11->y);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1207)
							Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1207)
							Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1207)
							Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1207)
							Float tmp38 = vdot;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1207)
							Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1207)
							Float t2 = tmp39;		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(1208)
							Float tmp40 = qx;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1208)
							Float tmp41 = (q0->x - v0->x);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1208)
							Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1208)
							Float tmp43 = qy;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1208)
							Float tmp44 = (q0->y - v0->y);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1208)
							Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1208)
							Float tmp46 = (tmp42 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1208)
							Float tmp47 = -(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1208)
							Float tmp48 = qdot;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1208)
							Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1208)
							Float s11 = tmp49;		HX_STACK_VAR(s11,"s11");
							HX_STACK_LINE(1209)
							Float tmp50 = qx;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1209)
							Float tmp51 = (q0->x - v1->x);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1209)
							Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1209)
							Float tmp53 = qy;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1209)
							Float tmp54 = (q0->y - v1->y);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1209)
							Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1209)
							Float tmp56 = (tmp52 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1209)
							Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1209)
							Float tmp58 = qdot;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1209)
							Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1209)
							Float s21 = tmp59;		HX_STACK_VAR(s21,"s21");
							HX_STACK_LINE(1210)
							bool tmp60 = (t1 < (int)0);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1210)
							if ((tmp60)){
								HX_STACK_LINE(1210)
								t1 = (int)0;
							}
							else{
								HX_STACK_LINE(1211)
								bool tmp61 = (t1 > (int)1);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1211)
								if ((tmp61)){
									HX_STACK_LINE(1211)
									t1 = (int)1;
								}
							}
							HX_STACK_LINE(1212)
							bool tmp61 = (t2 < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1212)
							if ((tmp61)){
								HX_STACK_LINE(1212)
								t2 = (int)0;
							}
							else{
								HX_STACK_LINE(1213)
								bool tmp62 = (t2 > (int)1);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1213)
								if ((tmp62)){
									HX_STACK_LINE(1213)
									t2 = (int)1;
								}
							}
							HX_STACK_LINE(1214)
							bool tmp62 = (s11 < (int)0);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1214)
							if ((tmp62)){
								HX_STACK_LINE(1214)
								s11 = (int)0;
							}
							else{
								HX_STACK_LINE(1215)
								bool tmp63 = (s11 > (int)1);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1215)
								if ((tmp63)){
									HX_STACK_LINE(1215)
									s11 = (int)1;
								}
							}
							HX_STACK_LINE(1216)
							bool tmp63 = (s21 < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1216)
							if ((tmp63)){
								HX_STACK_LINE(1216)
								s21 = (int)0;
							}
							else{
								HX_STACK_LINE(1217)
								bool tmp64 = (s21 > (int)1);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1217)
								if ((tmp64)){
									HX_STACK_LINE(1217)
									s21 = (int)1;
								}
							}
							HX_STACK_LINE(1218)
							Float f1x = ((Float)0.0);		HX_STACK_VAR(f1x,"f1x");
							HX_STACK_LINE(1219)
							Float f1y = ((Float)0.0);		HX_STACK_VAR(f1y,"f1y");
							HX_STACK_LINE(1220)
							{
								HX_STACK_LINE(1221)
								Float t = t1;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1230)
								Float tmp64 = v0->x;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1230)
								Float tmp65 = (vx * t);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1230)
								Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1230)
								f1x = tmp66;
								HX_STACK_LINE(1231)
								Float tmp67 = v0->y;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1231)
								Float tmp68 = (vy * t);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1231)
								Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1231)
								f1y = tmp69;
							}
							HX_STACK_LINE(1233)
							Float f2x = ((Float)0.0);		HX_STACK_VAR(f2x,"f2x");
							HX_STACK_LINE(1234)
							Float f2y = ((Float)0.0);		HX_STACK_VAR(f2y,"f2y");
							HX_STACK_LINE(1235)
							{
								HX_STACK_LINE(1236)
								Float t = t2;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1245)
								Float tmp64 = v0->x;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1245)
								Float tmp65 = (vx * t);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1245)
								Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1245)
								f2x = tmp66;
								HX_STACK_LINE(1246)
								Float tmp67 = v0->y;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1246)
								Float tmp68 = (vy * t);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1246)
								Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1246)
								f2y = tmp69;
							}
							HX_STACK_LINE(1248)
							Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
							HX_STACK_LINE(1249)
							Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
							HX_STACK_LINE(1250)
							{
								HX_STACK_LINE(1251)
								Float t = s11;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1260)
								Float tmp64 = q0->x;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1260)
								Float tmp65 = (qx * t);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1260)
								Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1260)
								g1x = tmp66;
								HX_STACK_LINE(1261)
								Float tmp67 = q0->y;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1261)
								Float tmp68 = (qy * t);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1261)
								Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1261)
								g1y = tmp69;
							}
							HX_STACK_LINE(1263)
							Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
							HX_STACK_LINE(1264)
							Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
							HX_STACK_LINE(1265)
							{
								HX_STACK_LINE(1266)
								Float t = s21;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1275)
								Float tmp64 = q0->x;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1275)
								Float tmp65 = (qx * t);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1275)
								Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1275)
								g2x = tmp66;
								HX_STACK_LINE(1276)
								Float tmp67 = q0->y;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1276)
								Float tmp68 = (qy * t);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1276)
								Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1276)
								g2y = tmp69;
							}
							HX_STACK_LINE(1278)
							Float tmp64;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1278)
							{
								HX_STACK_LINE(1278)
								Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(1278)
								Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(1278)
								{
									HX_STACK_LINE(1278)
									Float tmp65 = (f1x - q0->x);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(1278)
									dx = tmp65;
									HX_STACK_LINE(1278)
									Float tmp66 = (f1y - q0->y);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(1278)
									dy = tmp66;
								}
								HX_STACK_LINE(1278)
								Float tmp65 = (dx * dx);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1278)
								Float tmp66 = (dy * dy);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1278)
								tmp64 = (tmp65 + tmp66);
							}
							HX_STACK_LINE(1278)
							Float d1 = tmp64;		HX_STACK_VAR(d1,"d1");
							HX_STACK_LINE(1279)
							Float tmp65;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1279)
							{
								HX_STACK_LINE(1279)
								Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(1279)
								Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(1279)
								{
									HX_STACK_LINE(1279)
									Float tmp66 = (f2x - q11->x);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(1279)
									dx = tmp66;
									HX_STACK_LINE(1279)
									Float tmp67 = (f2y - q11->y);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(1279)
									dy = tmp67;
								}
								HX_STACK_LINE(1279)
								Float tmp66 = (dx * dx);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1279)
								Float tmp67 = (dy * dy);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1279)
								tmp65 = (tmp66 + tmp67);
							}
							HX_STACK_LINE(1279)
							Float d2 = tmp65;		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(1280)
							Float tmp66;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1280)
							{
								HX_STACK_LINE(1280)
								Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(1280)
								Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(1280)
								{
									HX_STACK_LINE(1280)
									Float tmp67 = (g1x - v0->x);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(1280)
									dx = tmp67;
									HX_STACK_LINE(1280)
									Float tmp68 = (g1y - v0->y);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(1280)
									dy = tmp68;
								}
								HX_STACK_LINE(1280)
								Float tmp67 = (dx * dx);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1280)
								Float tmp68 = (dy * dy);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1280)
								tmp66 = (tmp67 + tmp68);
							}
							HX_STACK_LINE(1280)
							Float e1 = tmp66;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(1281)
							Float tmp67;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1281)
							{
								HX_STACK_LINE(1281)
								Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(1281)
								Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(1281)
								{
									HX_STACK_LINE(1281)
									Float tmp68 = (g2x - v1->x);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(1281)
									dx = tmp68;
									HX_STACK_LINE(1281)
									Float tmp69 = (g2y - v1->y);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(1281)
									dy = tmp69;
								}
								HX_STACK_LINE(1281)
								Float tmp68 = (dx * dx);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1281)
								Float tmp69 = (dy * dy);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1281)
								tmp67 = (tmp68 + tmp69);
							}
							HX_STACK_LINE(1281)
							Float e2 = tmp67;		HX_STACK_VAR(e2,"e2");
							HX_STACK_LINE(1282)
							Float minfx = ((Float)0.0);		HX_STACK_VAR(minfx,"minfx");
							HX_STACK_LINE(1283)
							Float minfy = ((Float)0.0);		HX_STACK_VAR(minfy,"minfy");
							HX_STACK_LINE(1284)
							::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
							HX_STACK_LINE(1285)
							bool tmp68 = (d1 < d2);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1285)
							if ((tmp68)){
								HX_STACK_LINE(1286)
								{
									HX_STACK_LINE(1287)
									minfx = f1x;
									HX_STACK_LINE(1288)
									minfy = f1y;
									HX_STACK_LINE(1297)
									{
									}
								}
								HX_STACK_LINE(1306)
								minq = q0;
							}
							else{
								HX_STACK_LINE(1309)
								{
									HX_STACK_LINE(1310)
									minfx = f2x;
									HX_STACK_LINE(1311)
									minfy = f2y;
									HX_STACK_LINE(1320)
									{
									}
								}
								HX_STACK_LINE(1329)
								minq = q11;
								HX_STACK_LINE(1330)
								d1 = d2;
							}
							HX_STACK_LINE(1332)
							Float mingx = ((Float)0.0);		HX_STACK_VAR(mingx,"mingx");
							HX_STACK_LINE(1333)
							Float mingy = ((Float)0.0);		HX_STACK_VAR(mingy,"mingy");
							HX_STACK_LINE(1334)
							::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
							HX_STACK_LINE(1335)
							bool tmp69 = (e1 < e2);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1335)
							if ((tmp69)){
								HX_STACK_LINE(1336)
								{
									HX_STACK_LINE(1337)
									mingx = g1x;
									HX_STACK_LINE(1338)
									mingy = g1y;
									HX_STACK_LINE(1347)
									{
									}
								}
								HX_STACK_LINE(1356)
								minv = v0;
							}
							else{
								HX_STACK_LINE(1359)
								{
									HX_STACK_LINE(1360)
									mingx = g2x;
									HX_STACK_LINE(1361)
									mingy = g2y;
									HX_STACK_LINE(1370)
									{
									}
								}
								HX_STACK_LINE(1379)
								minv = v1;
								HX_STACK_LINE(1380)
								e1 = e2;
							}
							HX_STACK_LINE(1382)
							bool tmp70 = (d1 < e1);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1382)
							if ((tmp70)){
								HX_STACK_LINE(1383)
								{
									HX_STACK_LINE(1384)
									w1->x = minfx;
									HX_STACK_LINE(1385)
									w1->y = minfy;
									HX_STACK_LINE(1394)
									{
									}
								}
								HX_STACK_LINE(1403)
								{
									HX_STACK_LINE(1404)
									w2->x = minq->x;
									HX_STACK_LINE(1405)
									w2->y = minq->y;
									HX_STACK_LINE(1414)
									{
									}
								}
								HX_STACK_LINE(1423)
								Float tmp71 = d1;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1423)
								Float tmp72 = ::Math_obj::sqrt(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1423)
								best = tmp72;
							}
							else{
								HX_STACK_LINE(1426)
								{
									HX_STACK_LINE(1427)
									w2->x = mingx;
									HX_STACK_LINE(1428)
									w2->y = mingy;
									HX_STACK_LINE(1437)
									{
									}
								}
								HX_STACK_LINE(1446)
								{
									HX_STACK_LINE(1447)
									w1->x = minv->x;
									HX_STACK_LINE(1448)
									w1->y = minv->y;
									HX_STACK_LINE(1457)
									{
									}
								}
								HX_STACK_LINE(1466)
								Float tmp71 = e1;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1466)
								Float tmp72 = ::Math_obj::sqrt(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1466)
								best = tmp72;
							}
							HX_STACK_LINE(1468)
							bool tmp71 = (best != (int)0);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1468)
							if ((tmp71)){
								HX_STACK_LINE(1469)
								{
									HX_STACK_LINE(1470)
									Float tmp72 = (w2->x - w1->x);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(1470)
									axis->x = tmp72;
									HX_STACK_LINE(1471)
									Float tmp73 = (w2->y - w1->y);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(1471)
									axis->y = tmp73;
								}
								HX_STACK_LINE(1473)
								{
									HX_STACK_LINE(1474)
									Float tmp72 = (Float(((Float)1.0)) / Float(best));		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(1474)
									Float t = tmp72;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(1483)
									hx::MultEq(axis->x,t);
									HX_STACK_LINE(1484)
									hx::MultEq(axis->y,t);
								}
								HX_STACK_LINE(1486)
								bool tmp72 = swapped;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1486)
								if ((tmp72)){
									HX_STACK_LINE(1487)
									Float tmp73 = axis->x;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(1487)
									Float tmp74 = -(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(1487)
									axis->x = tmp74;
									HX_STACK_LINE(1488)
									Float tmp75 = axis->y;		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(1488)
									Float tmp76 = -(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(1488)
									axis->y = tmp76;
								}
							}
							HX_STACK_LINE(1491)
							Float tmp72 = best;		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(1491)
							return tmp72;
						}
						else{
							HX_STACK_LINE(1494)
							Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
							HX_STACK_LINE(1495)
							Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
							HX_STACK_LINE(1496)
							{
								HX_STACK_LINE(1497)
								Float tmp12 = ay->gp0->x;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1497)
								c0x = tmp12;
								HX_STACK_LINE(1498)
								Float tmp13 = ay->gp0->y;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1498)
								c0y = tmp13;
								HX_STACK_LINE(1507)
								{
								}
							}
							HX_STACK_LINE(1516)
							Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
							HX_STACK_LINE(1517)
							Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
							HX_STACK_LINE(1518)
							{
								HX_STACK_LINE(1519)
								Float tmp12 = ay->gp1->x;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1519)
								c1x = tmp12;
								HX_STACK_LINE(1520)
								Float tmp13 = ay->gp1->y;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1520)
								c1y = tmp13;
								HX_STACK_LINE(1529)
								{
								}
							}
							HX_STACK_LINE(1538)
							Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
							HX_STACK_LINE(1539)
							Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
							HX_STACK_LINE(1540)
							{
								HX_STACK_LINE(1541)
								Float tmp12 = (c1x - c0x);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1541)
								dvx = tmp12;
								HX_STACK_LINE(1542)
								Float tmp13 = (c1y - c0y);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1542)
								dvy = tmp13;
							}
							HX_STACK_LINE(1544)
							Float tmp12 = (ax->gnormy * c0x);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1544)
							Float tmp13 = (ax->gnormx * c0y);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1544)
							Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1544)
							Float d0 = tmp14;		HX_STACK_VAR(d0,"d0");
							HX_STACK_LINE(1545)
							Float tmp15 = (ax->gnormy * c1x);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1545)
							Float tmp16 = (ax->gnormx * c1y);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1545)
							Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1545)
							Float d1 = tmp17;		HX_STACK_VAR(d1,"d1");
							HX_STACK_LINE(1546)
							Float tmp18 = (d1 - d0);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1546)
							Float tmp19 = (Float((int)1) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1546)
							Float den = tmp19;		HX_STACK_VAR(den,"den");
							HX_STACK_LINE(1547)
							Float tmp20 = ax->tp1;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1547)
							Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1547)
							Float tmp22 = d0;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1547)
							Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1547)
							Float tmp24 = den;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1547)
							Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1547)
							Float t = tmp25;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1548)
							Float tmp26 = t;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1548)
							Float tmp27 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1548)
							bool tmp28 = (tmp26 > tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1548)
							if ((tmp28)){
								HX_STACK_LINE(1549)
								Float t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(1558)
								Float tmp29 = (dvx * t1);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1558)
								hx::AddEq(c0x,tmp29);
								HX_STACK_LINE(1559)
								Float tmp30 = (dvy * t1);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1559)
								hx::AddEq(c0y,tmp30);
							}
							HX_STACK_LINE(1561)
							Float tmp29 = ax->tp0;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1561)
							Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1561)
							Float tmp31 = d1;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1561)
							Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1561)
							Float tmp33 = den;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1561)
							Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1561)
							Float t1 = tmp34;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(1562)
							Float tmp35 = t1;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1562)
							Float tmp36 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1562)
							Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1562)
							bool tmp38 = (tmp35 < tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1562)
							if ((tmp38)){
								HX_STACK_LINE(1563)
								Float t2 = t1;		HX_STACK_VAR(t2,"t2");
								HX_STACK_LINE(1572)
								Float tmp39 = (dvx * t2);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1572)
								hx::AddEq(c1x,tmp39);
								HX_STACK_LINE(1573)
								Float tmp40 = (dvy * t2);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1573)
								hx::AddEq(c1y,tmp40);
							}
							HX_STACK_LINE(1575)
							Float tmp39 = (c0x * ax->gnormx);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1575)
							Float tmp40 = (c0y * ax->gnormy);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1575)
							Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1575)
							Float tmp42 = ax->gprojection;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1575)
							Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1575)
							Float c0d = tmp43;		HX_STACK_VAR(c0d,"c0d");
							HX_STACK_LINE(1576)
							Float tmp44 = (c1x * ax->gnormx);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1576)
							Float tmp45 = (c1y * ax->gnormy);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1576)
							Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1576)
							Float tmp47 = ax->gprojection;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1576)
							Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1576)
							Float c1d = tmp48;		HX_STACK_VAR(c1d,"c1d");
							HX_STACK_LINE(1577)
							bool tmp49 = (c0d < c1d);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1577)
							if ((tmp49)){
								HX_STACK_LINE(1578)
								{
									HX_STACK_LINE(1579)
									w2->x = c0x;
									HX_STACK_LINE(1580)
									w2->y = c0y;
									HX_STACK_LINE(1589)
									{
									}
								}
								HX_STACK_LINE(1598)
								{
									HX_STACK_LINE(1599)
									Float tmp50 = c0d;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1599)
									Float tmp51 = -(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(1599)
									Float t2 = tmp51;		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(1608)
									Float tmp52 = w2->x;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(1608)
									Float tmp53 = (ax->gnormx * t2);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(1608)
									Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1608)
									w1->x = tmp54;
									HX_STACK_LINE(1609)
									Float tmp55 = w2->y;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(1609)
									Float tmp56 = (ax->gnormy * t2);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(1609)
									Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(1609)
									w1->y = tmp57;
								}
								HX_STACK_LINE(1611)
								Float tmp50 = c0d;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1611)
								return tmp50;
							}
							else{
								HX_STACK_LINE(1614)
								{
									HX_STACK_LINE(1615)
									w2->x = c1x;
									HX_STACK_LINE(1616)
									w2->y = c1y;
									HX_STACK_LINE(1625)
									{
									}
								}
								HX_STACK_LINE(1634)
								{
									HX_STACK_LINE(1635)
									Float tmp50 = c1d;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1635)
									Float tmp51 = -(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(1635)
									Float t2 = tmp51;		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(1644)
									Float tmp52 = w2->x;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(1644)
									Float tmp53 = (ax->gnormx * t2);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(1644)
									Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1644)
									w1->x = tmp54;
									HX_STACK_LINE(1645)
									Float tmp55 = w2->y;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(1645)
									Float tmp56 = (ax->gnormy * t2);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(1645)
									Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(1645)
									w1->y = tmp57;
								}
								HX_STACK_LINE(1647)
								Float tmp50 = c1d;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1647)
								return tmp50;
							}
						}
					}
					else{
						HX_STACK_LINE(1651)
						Float tmp9 = upperBound;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1651)
						return tmp9;
					}
				}
				else{
					HX_STACK_LINE(1653)
					Float tmp8 = upperBound;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1653)
					return tmp8;
				}
			}
		}
		HX_STACK_LINE(648)
		return ((Float)0.);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ZPP_SweepDistance_obj,distance,return )


ZPP_SweepDistance_obj::ZPP_SweepDistance_obj()
{
}

bool ZPP_SweepDistance_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"staticSweep") ) { outValue = staticSweep_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dynamicSweep") ) { outValue = dynamicSweep_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distanceBody") ) { outValue = distanceBody_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SweepDistance_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SweepDistance_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_SweepDistance_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("dynamicSweep","\xed","\x59","\xb4","\x3c"),
	HX_HCSTRING("staticSweep","\x5e","\xf2","\xd6","\x9a"),
	HX_HCSTRING("distanceBody","\x77","\x78","\xf0","\xf3"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	::String(null()) };

void ZPP_SweepDistance_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_SweepDistance","\x4b","\xa8","\xcb","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_SweepDistance_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_SweepDistance_obj >;
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
} // end namespace geom
