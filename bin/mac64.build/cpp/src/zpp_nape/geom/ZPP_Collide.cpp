#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Collide
#include <zpp_nape/geom/ZPP_Collide.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Collide_obj::__construct()
{
	return null();
}

//ZPP_Collide_obj::~ZPP_Collide_obj() { }

Dynamic ZPP_Collide_obj::__CreateEmpty() { return  new ZPP_Collide_obj; }
hx::ObjectPtr< ZPP_Collide_obj > ZPP_Collide_obj::__new()
{  hx::ObjectPtr< ZPP_Collide_obj > _result_ = new ZPP_Collide_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Collide_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Collide_obj > _result_ = new ZPP_Collide_obj();
	_result_->__construct();
	return _result_;}

bool ZPP_Collide_obj::circleContains( ::zpp_nape::shape::ZPP_Circle c,::zpp_nape::geom::ZPP_Vec2 p){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Collide","circleContains",0x8c4c92f5,"zpp_nape.geom.ZPP_Collide.circleContains","zpp_nape/geom/Collide.hx",175,0x9b695611)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(176)
	Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(177)
	Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(179)
		Float tmp = (p->x - c->worldCOMx);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		dx = tmp;
		HX_STACK_LINE(180)
		Float tmp1 = (p->y - c->worldCOMy);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		dy = tmp1;
	}
	HX_STACK_LINE(182)
	Float tmp = (dx * dx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	Float tmp1 = (dy * dy);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	Float tmp3 = (c->radius * c->radius);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(182)
	bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(182)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,circleContains,return )

bool ZPP_Collide_obj::polyContains( ::zpp_nape::shape::ZPP_Polygon s,::zpp_nape::geom::ZPP_Vec2 p){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Collide","polyContains",0x9c1c25b1,"zpp_nape.geom.ZPP_Collide.polyContains","zpp_nape/geom/Collide.hx",184,0x9b695611)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(185)
	bool retvar;		HX_STACK_VAR(retvar,"retvar");
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(187)
		retvar = true;
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(189)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp = s->edges->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(189)
			::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(190)
			while((true)){
				HX_STACK_LINE(190)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(190)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(190)
				if ((tmp2)){
					HX_STACK_LINE(190)
					break;
				}
				HX_STACK_LINE(191)
				::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(192)
				{
					HX_STACK_LINE(193)
					Float tmp3 = (a->gnormx * p->x);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(193)
					Float tmp4 = (a->gnormy * p->y);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(193)
					Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(193)
					Float tmp6 = a->gprojection;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(193)
					bool tmp7 = (tmp5 <= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(193)
					if ((tmp7)){
						HX_STACK_LINE(195)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(196)
						continue;
					}
					else{
						HX_STACK_LINE(200)
						retvar = false;
						HX_STACK_LINE(201)
						break;
					}
				}
				HX_STACK_LINE(204)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(208)
	bool tmp = retvar;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,polyContains,return )

bool ZPP_Collide_obj::shapeContains( ::zpp_nape::shape::ZPP_Shape s,::zpp_nape::geom::ZPP_Vec2 p){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Collide","shapeContains",0x93829e7a,"zpp_nape.geom.ZPP_Collide.shapeContains","zpp_nape/geom/Collide.hx",210,0x9b695611)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(211)
	bool tmp = (s->type == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	if ((tmp)){
		HX_STACK_LINE(211)
		::zpp_nape::shape::ZPP_Circle tmp2 = s->circle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		tmp1 = ::zpp_nape::geom::ZPP_Collide_obj::circleContains(tmp2,tmp3);
	}
	else{
		HX_STACK_LINE(212)
		::zpp_nape::shape::ZPP_Polygon tmp2 = s->polygon;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(212)
		tmp1 = ::zpp_nape::geom::ZPP_Collide_obj::polyContains(tmp2,tmp3);
	}
	HX_STACK_LINE(211)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,shapeContains,return )

bool ZPP_Collide_obj::bodyContains( ::zpp_nape::phys::ZPP_Body b,::zpp_nape::geom::ZPP_Vec2 p){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Collide","bodyContains",0x01506807,"zpp_nape.geom.ZPP_Collide.bodyContains","zpp_nape/geom/Collide.hx",214,0x9b695611)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(215)
	bool retvar;		HX_STACK_VAR(retvar,"retvar");
	HX_STACK_LINE(216)
	{
		HX_STACK_LINE(217)
		retvar = false;
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(219)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp = b->shapes->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(219)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(220)
			while((true)){
				HX_STACK_LINE(220)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(220)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(220)
				if ((tmp2)){
					HX_STACK_LINE(220)
					break;
				}
				HX_STACK_LINE(221)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(222)
				{
					HX_STACK_LINE(223)
					::zpp_nape::shape::ZPP_Shape tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(223)
					bool tmp5 = ::zpp_nape::geom::ZPP_Collide_obj::shapeContains(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(223)
					if ((tmp5)){
						HX_STACK_LINE(224)
						retvar = true;
						HX_STACK_LINE(225)
						break;
					}
				}
				HX_STACK_LINE(228)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(232)
	bool tmp = retvar;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,bodyContains,return )

bool ZPP_Collide_obj::containTest( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Collide","containTest",0xa0adefe0,"zpp_nape.geom.ZPP_Collide.containTest","zpp_nape/geom/Collide.hx",234,0x9b695611)
	HX_STACK_ARG(s1,"s1")
	HX_STACK_ARG(s2,"s2")
	HX_STACK_LINE(235)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(235)
		::zpp_nape::geom::ZPP_AABB _this = s1->aabb;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(235)
		::zpp_nape::geom::ZPP_AABB x = s2->aabb;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(235)
		bool tmp1 = (x->minx >= _this->minx);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(235)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		if ((tmp2)){
			HX_STACK_LINE(235)
			tmp3 = (x->miny >= _this->miny);
		}
		else{
			HX_STACK_LINE(235)
			tmp3 = false;
		}
		HX_STACK_LINE(235)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(235)
		if ((tmp4)){
			HX_STACK_LINE(235)
			tmp5 = (x->maxx <= _this->maxx);
		}
		else{
			HX_STACK_LINE(235)
			tmp5 = false;
		}
		HX_STACK_LINE(235)
		if ((tmp5)){
			HX_STACK_LINE(235)
			tmp = (x->maxy <= _this->maxy);
		}
		else{
			HX_STACK_LINE(235)
			tmp = false;
		}
	}
	HX_STACK_LINE(235)
	if ((tmp)){
		HX_STACK_LINE(236)
		bool tmp1 = (s1->type == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		if ((tmp1)){
			HX_STACK_LINE(237)
			bool tmp3 = (s2->type == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(237)
			if ((tmp3)){
				HX_STACK_LINE(238)
				Float tmp4 = s1->circle->radius;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(238)
				Float tmp5 = s2->circle->radius;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(238)
				Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(238)
				Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(238)
				Float minDist = tmp7;		HX_STACK_VAR(minDist,"minDist");
				HX_STACK_LINE(239)
				Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(240)
				Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(242)
					Float tmp8 = s2->circle->worldCOMx;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(242)
					Float tmp9 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(242)
					Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(242)
					px = tmp10;
					HX_STACK_LINE(243)
					Float tmp11 = s2->circle->worldCOMy;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(243)
					Float tmp12 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(243)
					Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(243)
					py = tmp13;
				}
				HX_STACK_LINE(245)
				Float tmp8 = (px * px);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(245)
				Float tmp9 = (py * py);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(245)
				Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(245)
				Float distSqr = tmp10;		HX_STACK_VAR(distSqr,"distSqr");
				HX_STACK_LINE(246)
				Float tmp11 = distSqr;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(246)
				Float tmp12 = (minDist * minDist);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(246)
				tmp2 = (tmp11 <= tmp12);
			}
			else{
				HX_STACK_LINE(249)
				bool retvar;		HX_STACK_VAR(retvar,"retvar");
				HX_STACK_LINE(250)
				{
					HX_STACK_LINE(251)
					retvar = true;
					HX_STACK_LINE(252)
					{
						HX_STACK_LINE(253)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = s2->polygon->gverts;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(253)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp4->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(254)
						while((true)){
							HX_STACK_LINE(254)
							bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(254)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(254)
							if ((tmp6)){
								HX_STACK_LINE(254)
								break;
							}
							HX_STACK_LINE(255)
							::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(256)
							{
								HX_STACK_LINE(257)
								bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(257)
								{
									HX_STACK_LINE(258)
									Float tmp8 = s1->circle->radius;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(258)
									Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(258)
									Float minDist = tmp9;		HX_STACK_VAR(minDist,"minDist");
									HX_STACK_LINE(259)
									Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
									HX_STACK_LINE(260)
									Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(262)
										Float tmp10 = p->x;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(262)
										Float tmp11 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(262)
										Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(262)
										px = tmp12;
										HX_STACK_LINE(263)
										Float tmp13 = p->y;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(263)
										Float tmp14 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(263)
										Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(263)
										py = tmp15;
									}
									HX_STACK_LINE(265)
									Float tmp10 = (px * px);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(265)
									Float tmp11 = (py * py);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(265)
									Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(265)
									Float distSqr = tmp12;		HX_STACK_VAR(distSqr,"distSqr");
									HX_STACK_LINE(266)
									Float tmp13 = distSqr;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(266)
									Float tmp14 = (minDist * minDist);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(266)
									tmp7 = (tmp13 <= tmp14);
								}
								HX_STACK_LINE(257)
								if ((tmp7)){
									HX_STACK_LINE(269)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(270)
									continue;
								}
								else{
									HX_STACK_LINE(274)
									retvar = false;
									HX_STACK_LINE(275)
									break;
								}
							}
							HX_STACK_LINE(278)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(282)
				tmp2 = retvar;
			}
		}
		else{
			HX_STACK_LINE(286)
			bool tmp3 = (s2->type == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(286)
			if ((tmp3)){
				HX_STACK_LINE(287)
				bool retvar;		HX_STACK_VAR(retvar,"retvar");
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(289)
					retvar = true;
					HX_STACK_LINE(290)
					{
						HX_STACK_LINE(291)
						::zpp_nape::util::ZNPList_ZPP_Edge tmp4 = s1->polygon->edges;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(291)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp4->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(292)
						while((true)){
							HX_STACK_LINE(292)
							bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(292)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(292)
							if ((tmp6)){
								HX_STACK_LINE(292)
								break;
							}
							HX_STACK_LINE(293)
							::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(294)
							{
								HX_STACK_LINE(295)
								Float tmp7 = a->gnormx;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(295)
								Float tmp8 = s2->circle->worldCOMx;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(295)
								Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(295)
								Float tmp10 = a->gnormy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(295)
								Float tmp11 = s2->circle->worldCOMy;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(295)
								Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(295)
								Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(295)
								Float tmp14 = s2->circle->radius;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(295)
								Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(295)
								Float tmp16 = a->gprojection;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(295)
								bool tmp17 = (tmp15 <= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(295)
								if ((tmp17)){
									HX_STACK_LINE(297)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(298)
									continue;
								}
								else{
									HX_STACK_LINE(302)
									retvar = false;
									HX_STACK_LINE(303)
									break;
								}
							}
							HX_STACK_LINE(306)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(310)
				tmp2 = retvar;
			}
			else{
				HX_STACK_LINE(313)
				bool retvar;		HX_STACK_VAR(retvar,"retvar");
				HX_STACK_LINE(314)
				{
					HX_STACK_LINE(315)
					retvar = true;
					HX_STACK_LINE(316)
					{
						HX_STACK_LINE(317)
						::zpp_nape::util::ZNPList_ZPP_Edge tmp4 = s1->polygon->edges;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(317)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp4->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(318)
						while((true)){
							HX_STACK_LINE(318)
							bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(318)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(318)
							if ((tmp6)){
								HX_STACK_LINE(318)
								break;
							}
							HX_STACK_LINE(319)
							::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(320)
							{
								HX_STACK_LINE(321)
								bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(321)
								{
									HX_STACK_LINE(322)
									Float tmp8 = ((Float)-1e+100);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(322)
									Float max = tmp8;		HX_STACK_VAR(max,"max");
									HX_STACK_LINE(323)
									{
										HX_STACK_LINE(324)
										::zpp_nape::geom::ZPP_Vec2 tmp9 = s2->polygon->gverts;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(324)
										::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp9->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(325)
										while((true)){
											HX_STACK_LINE(325)
											bool tmp10 = (cx_ite1 != null());		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(325)
											bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(325)
											if ((tmp11)){
												HX_STACK_LINE(325)
												break;
											}
											HX_STACK_LINE(326)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(327)
											{
												HX_STACK_LINE(328)
												Float tmp12 = (a->gnormx * v->x);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(328)
												Float tmp13 = (a->gnormy * v->y);		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(328)
												Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(328)
												Float k = tmp14;		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(329)
												bool tmp15 = (k > max);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(329)
												if ((tmp15)){
													HX_STACK_LINE(329)
													max = k;
												}
											}
											HX_STACK_LINE(331)
											cx_ite1 = cx_ite1->next;
										}
									}
									HX_STACK_LINE(334)
									tmp7 = (max <= a->gprojection);
								}
								HX_STACK_LINE(321)
								if ((tmp7)){
									HX_STACK_LINE(337)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(338)
									continue;
								}
								else{
									HX_STACK_LINE(342)
									retvar = false;
									HX_STACK_LINE(343)
									break;
								}
							}
							HX_STACK_LINE(346)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(350)
				tmp2 = retvar;
			}
		}
		HX_STACK_LINE(236)
		return tmp2;
	}
	else{
		HX_STACK_LINE(354)
		return false;
	}
	HX_STACK_LINE(235)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,containTest,return )

bool ZPP_Collide_obj::contactCollide( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,::zpp_nape::dynamics::ZPP_ColArbiter arb,bool rev){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Collide","contactCollide",0x6ce46b64,"zpp_nape.geom.ZPP_Collide.contactCollide","zpp_nape/geom/Collide.hx",356,0x9b695611)
	HX_STACK_ARG(s1,"s1")
	HX_STACK_ARG(s2,"s2")
	HX_STACK_ARG(arb,"arb")
	HX_STACK_ARG(rev,"rev")
	HX_STACK_LINE(357)
	bool tmp = (s2->type == (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(357)
	if ((tmp)){
		HX_STACK_LINE(358)
		bool tmp1 = (s1->type == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		if ((tmp1)){
			HX_STACK_LINE(359)
			bool cont = true;		HX_STACK_VAR(cont,"cont");
			HX_STACK_LINE(360)
			Float tmp2 = ((Float)-1e+100);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(360)
			Float max = tmp2;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(361)
			Float tmp3 = ((Float)-1e+100);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(361)
			Float maxmin = tmp3;		HX_STACK_VAR(maxmin,"maxmin");
			HX_STACK_LINE(362)
			int maxi = (int)-1;		HX_STACK_VAR(maxi,"maxi");
			HX_STACK_LINE(363)
			::zpp_nape::shape::ZPP_Edge axis1 = null();		HX_STACK_VAR(axis1,"axis1");
			HX_STACK_LINE(364)
			::zpp_nape::shape::ZPP_Edge axis2 = null();		HX_STACK_VAR(axis2,"axis2");
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(366)
				::zpp_nape::util::ZNPList_ZPP_Edge tmp4 = s1->polygon->edges;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(366)
				::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp4->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(367)
				while((true)){
					HX_STACK_LINE(367)
					bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(367)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(367)
					if ((tmp6)){
						HX_STACK_LINE(367)
						break;
					}
					HX_STACK_LINE(368)
					::zpp_nape::shape::ZPP_Edge ax = cx_ite->elt;		HX_STACK_VAR(ax,"ax");
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(370)
						Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(371)
						{
							HX_STACK_LINE(372)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = s2->polygon->gverts;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(372)
							::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp7->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
							HX_STACK_LINE(373)
							while((true)){
								HX_STACK_LINE(373)
								bool tmp8 = (cx_ite1 != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(373)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(373)
								if ((tmp9)){
									HX_STACK_LINE(373)
									break;
								}
								HX_STACK_LINE(374)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(375)
								{
									HX_STACK_LINE(376)
									Float tmp10 = (ax->gnormx * v->x);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(376)
									Float tmp11 = (ax->gnormy * v->y);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(376)
									Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(376)
									Float k = tmp12;		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(377)
									bool tmp13 = (k < min);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(377)
									if ((tmp13)){
										HX_STACK_LINE(377)
										min = k;
									}
									HX_STACK_LINE(378)
									Float tmp14 = (min - ax->gprojection);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(378)
									Float tmp15 = max;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(378)
									bool tmp16 = (tmp14 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(378)
									if ((tmp16)){
										HX_STACK_LINE(378)
										break;
									}
								}
								HX_STACK_LINE(380)
								cx_ite1 = cx_ite1->next;
							}
						}
						HX_STACK_LINE(383)
						hx::SubEq(min,ax->gprojection);
						HX_STACK_LINE(384)
						bool tmp7 = (min >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(384)
						if ((tmp7)){
							HX_STACK_LINE(385)
							cont = false;
							HX_STACK_LINE(386)
							break;
						}
						HX_STACK_LINE(388)
						bool tmp8 = (min > max);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(388)
						if ((tmp8)){
							HX_STACK_LINE(389)
							max = min;
							HX_STACK_LINE(390)
							axis1 = ax;
							HX_STACK_LINE(391)
							maxi = (int)1;
						}
					}
					HX_STACK_LINE(394)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(397)
			bool tmp4 = cont;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(397)
			if ((tmp4)){
				HX_STACK_LINE(398)
				{
					HX_STACK_LINE(399)
					::zpp_nape::util::ZNPList_ZPP_Edge tmp5 = s2->polygon->edges;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(399)
					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp5->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(400)
					while((true)){
						HX_STACK_LINE(400)
						bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(400)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(400)
						if ((tmp7)){
							HX_STACK_LINE(400)
							break;
						}
						HX_STACK_LINE(401)
						::zpp_nape::shape::ZPP_Edge ax = cx_ite->elt;		HX_STACK_VAR(ax,"ax");
						HX_STACK_LINE(402)
						{
							HX_STACK_LINE(403)
							Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
							HX_STACK_LINE(404)
							{
								HX_STACK_LINE(405)
								::zpp_nape::geom::ZPP_Vec2 tmp8 = s1->polygon->gverts;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(405)
								::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp8->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
								HX_STACK_LINE(406)
								while((true)){
									HX_STACK_LINE(406)
									bool tmp9 = (cx_ite1 != null());		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(406)
									bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(406)
									if ((tmp10)){
										HX_STACK_LINE(406)
										break;
									}
									HX_STACK_LINE(407)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(408)
									{
										HX_STACK_LINE(409)
										Float tmp11 = (ax->gnormx * v->x);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(409)
										Float tmp12 = (ax->gnormy * v->y);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(409)
										Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(409)
										Float k = tmp13;		HX_STACK_VAR(k,"k");
										HX_STACK_LINE(410)
										bool tmp14 = (k < min);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(410)
										if ((tmp14)){
											HX_STACK_LINE(410)
											min = k;
										}
										HX_STACK_LINE(411)
										Float tmp15 = (min - ax->gprojection);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(411)
										Float tmp16 = max;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(411)
										bool tmp17 = (tmp15 <= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(411)
										if ((tmp17)){
											HX_STACK_LINE(411)
											break;
										}
									}
									HX_STACK_LINE(413)
									cx_ite1 = cx_ite1->next;
								}
							}
							HX_STACK_LINE(416)
							hx::SubEq(min,ax->gprojection);
							HX_STACK_LINE(417)
							bool tmp8 = (min >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(417)
							if ((tmp8)){
								HX_STACK_LINE(418)
								cont = false;
								HX_STACK_LINE(419)
								break;
							}
							HX_STACK_LINE(421)
							bool tmp9 = (min > max);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(421)
							if ((tmp9)){
								HX_STACK_LINE(422)
								max = min;
								HX_STACK_LINE(423)
								axis2 = ax;
								HX_STACK_LINE(424)
								maxi = (int)2;
							}
						}
						HX_STACK_LINE(427)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(430)
				bool tmp5 = cont;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(430)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(430)
				if ((tmp6)){
					HX_STACK_LINE(430)
					return false;
				}
				else{
					HX_STACK_LINE(432)
					::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
					HX_STACK_LINE(432)
					::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
					HX_STACK_LINE(432)
					::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
					HX_STACK_LINE(432)
					Float scale;		HX_STACK_VAR(scale,"scale");
					HX_STACK_LINE(433)
					bool tmp7 = (maxi == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(433)
					if ((tmp7)){
						HX_STACK_LINE(434)
						q1 = s1->polygon;
						HX_STACK_LINE(435)
						q2 = s2->polygon;
						HX_STACK_LINE(436)
						ax = axis1;
						HX_STACK_LINE(437)
						scale = ((Float)1.0);
					}
					else{
						HX_STACK_LINE(440)
						q1 = s2->polygon;
						HX_STACK_LINE(441)
						q2 = s1->polygon;
						HX_STACK_LINE(442)
						ax = axis2;
						HX_STACK_LINE(443)
						scale = ((Float)-1.0);
					}
					HX_STACK_LINE(445)
					::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
					HX_STACK_LINE(446)
					Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(448)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp8 = q2->edges->head;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(448)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp8;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(449)
						while((true)){
							HX_STACK_LINE(449)
							bool tmp9 = (cx_ite != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(449)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(449)
							if ((tmp10)){
								HX_STACK_LINE(449)
								break;
							}
							HX_STACK_LINE(450)
							::zpp_nape::shape::ZPP_Edge axis = cx_ite->elt;		HX_STACK_VAR(axis,"axis");
							HX_STACK_LINE(451)
							{
								HX_STACK_LINE(452)
								Float tmp11 = (ax->gnormx * axis->gnormx);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(452)
								Float tmp12 = (ax->gnormy * axis->gnormy);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(452)
								Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(452)
								Float k = tmp13;		HX_STACK_VAR(k,"k");
								HX_STACK_LINE(453)
								bool tmp14 = (k < min);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(453)
								if ((tmp14)){
									HX_STACK_LINE(454)
									min = k;
									HX_STACK_LINE(455)
									ay = axis;
								}
							}
							HX_STACK_LINE(458)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(461)
					Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
					HX_STACK_LINE(462)
					Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
					HX_STACK_LINE(463)
					{
						HX_STACK_LINE(464)
						Float tmp8 = ay->gp0->x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(464)
						c0x = tmp8;
						HX_STACK_LINE(465)
						Float tmp9 = ay->gp0->y;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(465)
						c0y = tmp9;
						HX_STACK_LINE(474)
						{
						}
					}
					HX_STACK_LINE(483)
					Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
					HX_STACK_LINE(484)
					Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
					HX_STACK_LINE(485)
					{
						HX_STACK_LINE(486)
						Float tmp8 = ay->gp1->x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(486)
						c1x = tmp8;
						HX_STACK_LINE(487)
						Float tmp9 = ay->gp1->y;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(487)
						c1y = tmp9;
						HX_STACK_LINE(496)
						{
						}
					}
					HX_STACK_LINE(505)
					Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
					HX_STACK_LINE(506)
					Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
					HX_STACK_LINE(507)
					{
						HX_STACK_LINE(508)
						Float tmp8 = (c1x - c0x);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(508)
						dvx = tmp8;
						HX_STACK_LINE(509)
						Float tmp9 = (c1y - c0y);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(509)
						dvy = tmp9;
					}
					HX_STACK_LINE(511)
					Float tmp8 = (ax->gnormy * c0x);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(511)
					Float tmp9 = (ax->gnormx * c0y);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(511)
					Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(511)
					Float d0 = tmp10;		HX_STACK_VAR(d0,"d0");
					HX_STACK_LINE(512)
					Float tmp11 = (ax->gnormy * c1x);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(512)
					Float tmp12 = (ax->gnormx * c1y);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(512)
					Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(512)
					Float d1 = tmp13;		HX_STACK_VAR(d1,"d1");
					HX_STACK_LINE(513)
					Float tmp14 = (d1 - d0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(513)
					Float tmp15 = (Float((int)1) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(513)
					Float den = tmp15;		HX_STACK_VAR(den,"den");
					HX_STACK_LINE(514)
					Float tmp16 = ax->tp1;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(514)
					Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(514)
					Float tmp18 = d0;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(514)
					Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(514)
					Float tmp20 = den;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(514)
					Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(514)
					Float t = tmp21;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(515)
					Float tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(515)
					Float tmp23 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(515)
					bool tmp24 = (tmp22 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(515)
					if ((tmp24)){
						HX_STACK_LINE(516)
						Float t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(525)
						Float tmp25 = (dvx * t1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(525)
						hx::AddEq(c0x,tmp25);
						HX_STACK_LINE(526)
						Float tmp26 = (dvy * t1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(526)
						hx::AddEq(c0y,tmp26);
					}
					HX_STACK_LINE(528)
					Float tmp25 = ax->tp0;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(528)
					Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(528)
					Float tmp27 = d1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(528)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(528)
					Float tmp29 = den;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(528)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(528)
					Float t1 = tmp30;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(529)
					Float tmp31 = t1;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(529)
					Float tmp32 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(529)
					Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(529)
					bool tmp34 = (tmp31 < tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(529)
					if ((tmp34)){
						HX_STACK_LINE(530)
						Float t2 = t1;		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(539)
						Float tmp35 = (dvx * t2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(539)
						hx::AddEq(c1x,tmp35);
						HX_STACK_LINE(540)
						Float tmp36 = (dvy * t2);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(540)
						hx::AddEq(c1y,tmp36);
					}
					HX_STACK_LINE(542)
					Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(543)
					Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
					HX_STACK_LINE(544)
					{
						HX_STACK_LINE(545)
						Float t2 = scale;		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(554)
						Float tmp35 = (ax->gnormx * t2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(554)
						nx = tmp35;
						HX_STACK_LINE(555)
						Float tmp36 = (ax->gnormy * t2);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(555)
						ny = tmp36;
					}
					HX_STACK_LINE(557)
					{
						HX_STACK_LINE(558)
						arb->lnormx = ax->lnormx;
						HX_STACK_LINE(559)
						arb->lnormy = ax->lnormy;
						HX_STACK_LINE(568)
						{
						}
					}
					HX_STACK_LINE(577)
					arb->lproj = ax->lprojection;
					HX_STACK_LINE(578)
					arb->radius = (int)0;
					HX_STACK_LINE(579)
					bool tmp35 = rev;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(579)
					bool tmp36 = (scale == (int)-1);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(579)
					bool tmp37 = (tmp35 != tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(579)
					arb->rev = tmp37;
					HX_STACK_LINE(580)
					bool tmp38 = arb->rev;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(580)
					int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(580)
					if ((tmp38)){
						HX_STACK_LINE(580)
						tmp39 = (int)1;
					}
					else{
						HX_STACK_LINE(580)
						tmp39 = (int)0;
					}
					HX_STACK_LINE(580)
					arb->ptype = tmp39;
					HX_STACK_LINE(581)
					Float tmp40 = (c0x * ax->gnormx);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(581)
					Float tmp41 = (c0y * ax->gnormy);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(581)
					Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(581)
					Float tmp43 = ax->gprojection;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(581)
					Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(581)
					Float c0d = tmp44;		HX_STACK_VAR(c0d,"c0d");
					HX_STACK_LINE(582)
					Float tmp45 = (c1x * ax->gnormx);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(582)
					Float tmp46 = (c1y * ax->gnormy);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(582)
					Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(582)
					Float tmp48 = ax->gprojection;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(582)
					Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(582)
					Float c1d = tmp49;		HX_STACK_VAR(c1d,"c1d");
					HX_STACK_LINE(583)
					bool tmp50 = (c0d > (int)0);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(583)
					bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(583)
					if ((tmp50)){
						HX_STACK_LINE(583)
						tmp51 = (c1d > (int)0);
					}
					else{
						HX_STACK_LINE(583)
						tmp51 = false;
					}
					HX_STACK_LINE(583)
					if ((tmp51)){
						HX_STACK_LINE(584)
						return false;
					}
					else{
						HX_STACK_LINE(587)
						bool tmp52 = rev;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(587)
						if ((tmp52)){
							HX_STACK_LINE(588)
							Float tmp53 = nx;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(588)
							Float tmp54 = -(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(588)
							nx = tmp54;
							HX_STACK_LINE(589)
							Float tmp55 = ny;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(589)
							Float tmp56 = -(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(589)
							ny = tmp56;
						}
						HX_STACK_LINE(591)
						::zpp_nape::dynamics::ZPP_Contact tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(591)
						{
							HX_STACK_LINE(591)
							bool tmp54 = arb->rev;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(591)
							int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(591)
							if ((tmp54)){
								HX_STACK_LINE(591)
								tmp55 = (int)1;
							}
							else{
								HX_STACK_LINE(591)
								tmp55 = (int)0;
							}
							HX_STACK_LINE(591)
							int hash = tmp55;		HX_STACK_VAR(hash,"hash");
							HX_STACK_LINE(591)
							::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(591)
							{
								HX_STACK_LINE(591)
								::zpp_nape::dynamics::ZPP_Contact tmp56 = arb->contacts->next;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(591)
								::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp56;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(591)
								while((true)){
									HX_STACK_LINE(591)
									bool tmp57 = (cx_ite != null());		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(591)
									bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(591)
									if ((tmp58)){
										HX_STACK_LINE(591)
										break;
									}
									HX_STACK_LINE(591)
									::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(591)
									bool tmp59 = (hash == cur->hash);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(591)
									if ((tmp59)){
										HX_STACK_LINE(591)
										c = cur;
										HX_STACK_LINE(591)
										break;
									}
									HX_STACK_LINE(591)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(591)
							bool tmp56 = (c == null());		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(591)
							if ((tmp56)){
								HX_STACK_LINE(591)
								{
									HX_STACK_LINE(591)
									::zpp_nape::dynamics::ZPP_Contact tmp57 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(591)
									bool tmp58 = (tmp57 == null());		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(591)
									if ((tmp58)){
										HX_STACK_LINE(591)
										::zpp_nape::dynamics::ZPP_Contact tmp59 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(591)
										c = tmp59;
									}
									else{
										HX_STACK_LINE(591)
										::zpp_nape::dynamics::ZPP_Contact tmp59 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(591)
										c = tmp59;
										HX_STACK_LINE(591)
										::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
										HX_STACK_LINE(591)
										c->next = null();
									}
									HX_STACK_LINE(591)
									Dynamic();
								}
								HX_STACK_LINE(591)
								::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
								HX_STACK_LINE(591)
								Float tmp57 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(591)
								ci->jnAcc = tmp57;
								HX_STACK_LINE(591)
								c->hash = hash;
								HX_STACK_LINE(591)
								c->fresh = true;
								HX_STACK_LINE(591)
								c->arbiter = arb;
								HX_STACK_LINE(591)
								arb->jrAcc = (int)0;
								HX_STACK_LINE(591)
								{
									HX_STACK_LINE(591)
									::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(591)
									::zpp_nape::dynamics::ZPP_Contact tmp58;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(591)
									{
										HX_STACK_LINE(591)
										c->_inuse = true;
										HX_STACK_LINE(591)
										tmp58 = c;
									}
									HX_STACK_LINE(591)
									::zpp_nape::dynamics::ZPP_Contact temp = tmp58;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(591)
									temp->next = _this->next;
									HX_STACK_LINE(591)
									_this->next = temp;
									HX_STACK_LINE(591)
									_this->modified = true;
									HX_STACK_LINE(591)
									(_this->length)++;
									HX_STACK_LINE(591)
									c;
								}
								HX_STACK_LINE(591)
								::zpp_nape::dynamics::ZPP_IContact tmp58 = ci;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(591)
								arb->innards->add(tmp58);
							}
							else{
								HX_STACK_LINE(591)
								c->fresh = false;
							}
							HX_STACK_LINE(591)
							{
								HX_STACK_LINE(591)
								Float tmp57 = c0x;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(591)
								Float tmp58 = (ax->gnormx * c0d);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(591)
								Float tmp59 = (tmp58 * ((Float)0.5));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(591)
								Float tmp60 = (tmp57 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(591)
								c->px = tmp60;
								HX_STACK_LINE(591)
								Float tmp61 = c0y;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(591)
								Float tmp62 = (ax->gnormy * c0d);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(591)
								Float tmp63 = (tmp62 * ((Float)0.5));		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(591)
								Float tmp64 = (tmp61 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(591)
								c->py = tmp64;
								HX_STACK_LINE(591)
								{
								}
							}
							HX_STACK_LINE(591)
							{
								HX_STACK_LINE(591)
								arb->nx = nx;
								HX_STACK_LINE(591)
								arb->ny = ny;
								HX_STACK_LINE(591)
								{
								}
							}
							HX_STACK_LINE(591)
							c->dist = c0d;
							HX_STACK_LINE(591)
							c->stamp = arb->stamp;
							HX_STACK_LINE(591)
							bool tmp57 = (c0d > (int)0);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(591)
							c->posOnly = tmp57;
							HX_STACK_LINE(591)
							tmp53 = c;
						}
						HX_STACK_LINE(591)
						::zpp_nape::dynamics::ZPP_Contact con = tmp53;		HX_STACK_VAR(con,"con");
						HX_STACK_LINE(592)
						{
							HX_STACK_LINE(593)
							Float t2 = ((Float)1.0);		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(602)
							Float tmp54 = q2->body->posx;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(602)
							Float tmp55 = t2;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(602)
							Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(602)
							hx::SubEq(c0x,tmp56);
							HX_STACK_LINE(603)
							Float tmp57 = q2->body->posy;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(603)
							Float tmp58 = t2;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(603)
							Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(603)
							hx::SubEq(c0y,tmp59);
						}
						HX_STACK_LINE(605)
						{
							HX_STACK_LINE(606)
							Float tmp54 = c0x;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(606)
							Float tmp55 = q2->body->axisy;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(606)
							Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(606)
							Float tmp57 = c0y;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(606)
							Float tmp58 = q2->body->axisx;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(606)
							Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(606)
							Float tmp60 = (tmp56 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(606)
							con->inner->lr1x = tmp60;
							HX_STACK_LINE(607)
							Float tmp61 = c0y;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(607)
							Float tmp62 = q2->body->axisy;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(607)
							Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(607)
							Float tmp64 = c0x;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(607)
							Float tmp65 = q2->body->axisx;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(607)
							Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(607)
							Float tmp67 = (tmp63 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(607)
							con->inner->lr1y = tmp67;
						}
						HX_STACK_LINE(609)
						::zpp_nape::dynamics::ZPP_Contact tmp54;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(609)
						{
							HX_STACK_LINE(609)
							bool tmp55 = arb->rev;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(609)
							int tmp56;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(609)
							if ((tmp55)){
								HX_STACK_LINE(609)
								tmp56 = (int)0;
							}
							else{
								HX_STACK_LINE(609)
								tmp56 = (int)1;
							}
							HX_STACK_LINE(609)
							int hash = tmp56;		HX_STACK_VAR(hash,"hash");
							HX_STACK_LINE(609)
							::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(609)
							{
								HX_STACK_LINE(609)
								::zpp_nape::dynamics::ZPP_Contact tmp57 = arb->contacts->next;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(609)
								::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp57;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(609)
								while((true)){
									HX_STACK_LINE(609)
									bool tmp58 = (cx_ite != null());		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(609)
									bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(609)
									if ((tmp59)){
										HX_STACK_LINE(609)
										break;
									}
									HX_STACK_LINE(609)
									::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(609)
									bool tmp60 = (hash == cur->hash);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(609)
									if ((tmp60)){
										HX_STACK_LINE(609)
										c = cur;
										HX_STACK_LINE(609)
										break;
									}
									HX_STACK_LINE(609)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(609)
							bool tmp57 = (c == null());		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(609)
							if ((tmp57)){
								HX_STACK_LINE(609)
								{
									HX_STACK_LINE(609)
									::zpp_nape::dynamics::ZPP_Contact tmp58 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(609)
									bool tmp59 = (tmp58 == null());		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(609)
									if ((tmp59)){
										HX_STACK_LINE(609)
										::zpp_nape::dynamics::ZPP_Contact tmp60 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(609)
										c = tmp60;
									}
									else{
										HX_STACK_LINE(609)
										::zpp_nape::dynamics::ZPP_Contact tmp60 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(609)
										c = tmp60;
										HX_STACK_LINE(609)
										::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
										HX_STACK_LINE(609)
										c->next = null();
									}
									HX_STACK_LINE(609)
									Dynamic();
								}
								HX_STACK_LINE(609)
								::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
								HX_STACK_LINE(609)
								Float tmp58 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(609)
								ci->jnAcc = tmp58;
								HX_STACK_LINE(609)
								c->hash = hash;
								HX_STACK_LINE(609)
								c->fresh = true;
								HX_STACK_LINE(609)
								c->arbiter = arb;
								HX_STACK_LINE(609)
								arb->jrAcc = (int)0;
								HX_STACK_LINE(609)
								{
									HX_STACK_LINE(609)
									::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(609)
									::zpp_nape::dynamics::ZPP_Contact tmp59;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(609)
									{
										HX_STACK_LINE(609)
										c->_inuse = true;
										HX_STACK_LINE(609)
										tmp59 = c;
									}
									HX_STACK_LINE(609)
									::zpp_nape::dynamics::ZPP_Contact temp = tmp59;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(609)
									temp->next = _this->next;
									HX_STACK_LINE(609)
									_this->next = temp;
									HX_STACK_LINE(609)
									_this->modified = true;
									HX_STACK_LINE(609)
									(_this->length)++;
									HX_STACK_LINE(609)
									c;
								}
								HX_STACK_LINE(609)
								::zpp_nape::dynamics::ZPP_IContact tmp59 = ci;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(609)
								arb->innards->add(tmp59);
							}
							else{
								HX_STACK_LINE(609)
								c->fresh = false;
							}
							HX_STACK_LINE(609)
							{
								HX_STACK_LINE(609)
								Float tmp58 = c1x;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(609)
								Float tmp59 = (ax->gnormx * c1d);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(609)
								Float tmp60 = (tmp59 * ((Float)0.5));		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(609)
								Float tmp61 = (tmp58 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(609)
								c->px = tmp61;
								HX_STACK_LINE(609)
								Float tmp62 = c1y;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(609)
								Float tmp63 = (ax->gnormy * c1d);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(609)
								Float tmp64 = (tmp63 * ((Float)0.5));		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(609)
								Float tmp65 = (tmp62 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(609)
								c->py = tmp65;
								HX_STACK_LINE(609)
								{
								}
							}
							HX_STACK_LINE(609)
							{
								HX_STACK_LINE(609)
								arb->nx = nx;
								HX_STACK_LINE(609)
								arb->ny = ny;
								HX_STACK_LINE(609)
								{
								}
							}
							HX_STACK_LINE(609)
							c->dist = c1d;
							HX_STACK_LINE(609)
							c->stamp = arb->stamp;
							HX_STACK_LINE(609)
							bool tmp58 = (c1d > (int)0);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(609)
							c->posOnly = tmp58;
							HX_STACK_LINE(609)
							tmp54 = c;
						}
						HX_STACK_LINE(609)
						con = tmp54;
						HX_STACK_LINE(610)
						{
							HX_STACK_LINE(611)
							Float t2 = ((Float)1.0);		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(620)
							Float tmp55 = q2->body->posx;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(620)
							Float tmp56 = t2;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(620)
							Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(620)
							hx::SubEq(c1x,tmp57);
							HX_STACK_LINE(621)
							Float tmp58 = q2->body->posy;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(621)
							Float tmp59 = t2;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(621)
							Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(621)
							hx::SubEq(c1y,tmp60);
						}
						HX_STACK_LINE(623)
						{
							HX_STACK_LINE(624)
							Float tmp55 = c1x;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(624)
							Float tmp56 = q2->body->axisy;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(624)
							Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(624)
							Float tmp58 = c1y;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(624)
							Float tmp59 = q2->body->axisx;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(624)
							Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(624)
							Float tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(624)
							con->inner->lr1x = tmp61;
							HX_STACK_LINE(625)
							Float tmp62 = c1y;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(625)
							Float tmp63 = q2->body->axisy;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(625)
							Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(625)
							Float tmp65 = c1x;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(625)
							Float tmp66 = q2->body->axisx;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(625)
							Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(625)
							Float tmp68 = (tmp64 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(625)
							con->inner->lr1y = tmp68;
						}
						HX_STACK_LINE(627)
						bool tmp55 = (maxi == (int)1);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(627)
						if ((tmp55)){
							HX_STACK_LINE(628)
							arb->__ref_edge1 = ax;
							HX_STACK_LINE(629)
							arb->__ref_edge2 = ay;
						}
						else{
							HX_STACK_LINE(632)
							arb->__ref_edge2 = ax;
							HX_STACK_LINE(633)
							arb->__ref_edge1 = ay;
						}
						HX_STACK_LINE(635)
						return true;
					}
				}
			}
			else{
				HX_STACK_LINE(639)
				return false;
			}
		}
		else{
			HX_STACK_LINE(642)
			Float tmp2 = ((Float)-1e+100);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(642)
			Float max = tmp2;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(643)
			Float tmp3 = ((Float)-1e+100);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(643)
			Float minmax = tmp3;		HX_STACK_VAR(minmax,"minmax");
			HX_STACK_LINE(644)
			bool cont = true;		HX_STACK_VAR(cont,"cont");
			HX_STACK_LINE(645)
			::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
			HX_STACK_LINE(645)
			::zpp_nape::geom::ZPP_Vec2 vi = null();		HX_STACK_VAR(vi,"vi");
			HX_STACK_LINE(646)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = s2->polygon->gverts;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(646)
			::zpp_nape::geom::ZPP_Vec2 vite = tmp4->next;		HX_STACK_VAR(vite,"vite");
			HX_STACK_LINE(647)
			{
				HX_STACK_LINE(648)
				::zpp_nape::util::ZNPList_ZPP_Edge tmp5 = s2->polygon->edges;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(648)
				::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp5->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(649)
				while((true)){
					HX_STACK_LINE(649)
					bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(649)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(649)
					if ((tmp7)){
						HX_STACK_LINE(649)
						break;
					}
					HX_STACK_LINE(650)
					::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(651)
					{
						HX_STACK_LINE(652)
						Float tmp8 = a->gnormx;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(652)
						Float tmp9 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(652)
						Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(652)
						Float tmp11 = a->gnormy;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(652)
						Float tmp12 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(652)
						Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(652)
						Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(652)
						Float tmp15 = a->gprojection;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(652)
						Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(652)
						Float tmp17 = s1->circle->radius;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(652)
						Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(652)
						Float dist = tmp18;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(653)
						bool tmp19 = (dist > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(653)
						if ((tmp19)){
							HX_STACK_LINE(654)
							cont = false;
							HX_STACK_LINE(655)
							break;
						}
						HX_STACK_LINE(657)
						bool tmp20 = (dist > max);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(657)
						if ((tmp20)){
							HX_STACK_LINE(658)
							max = dist;
							HX_STACK_LINE(659)
							a0 = a;
							HX_STACK_LINE(660)
							vi = vite;
						}
						HX_STACK_LINE(662)
						vite = vite->next;
					}
					HX_STACK_LINE(664)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(667)
			bool tmp5 = cont;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(667)
			if ((tmp5)){
				HX_STACK_LINE(668)
				::zpp_nape::geom::ZPP_Vec2 v0 = vi;		HX_STACK_VAR(v0,"v0");
				HX_STACK_LINE(669)
				bool tmp6 = (vi->next == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(669)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(669)
				if ((tmp6)){
					HX_STACK_LINE(669)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = s2->polygon->gverts;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(669)
					tmp7 = tmp8->next;
				}
				else{
					HX_STACK_LINE(669)
					tmp7 = vi->next;
				}
				HX_STACK_LINE(669)
				::zpp_nape::geom::ZPP_Vec2 v1 = tmp7;		HX_STACK_VAR(v1,"v1");
				HX_STACK_LINE(670)
				Float tmp8 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(670)
				Float tmp9 = a0->gnormx;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(670)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(670)
				Float tmp11 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(670)
				Float tmp12 = a0->gnormy;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(670)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(670)
				Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(670)
				Float dt = tmp14;		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(671)
				Float tmp15 = dt;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(671)
				Float tmp16 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(671)
				Float tmp17 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(671)
				Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(671)
				bool tmp19 = (tmp15 <= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(671)
				if ((tmp19)){
					HX_STACK_LINE(672)
					::zpp_nape::dynamics::ZPP_Contact tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(672)
					{
						HX_STACK_LINE(673)
						Float tmp21 = s1->circle->radius;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(673)
						Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(673)
						Float minDist = tmp22;		HX_STACK_VAR(minDist,"minDist");
						HX_STACK_LINE(674)
						Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(675)
						Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
						HX_STACK_LINE(676)
						{
							HX_STACK_LINE(677)
							Float tmp23 = v0->x;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(677)
							Float tmp24 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(677)
							Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(677)
							px = tmp25;
							HX_STACK_LINE(678)
							Float tmp26 = v0->y;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(678)
							Float tmp27 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(678)
							Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(678)
							py = tmp28;
						}
						HX_STACK_LINE(680)
						Float tmp23 = (px * px);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(680)
						Float tmp24 = (py * py);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(680)
						Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(680)
						Float distSqr = tmp25;		HX_STACK_VAR(distSqr,"distSqr");
						HX_STACK_LINE(681)
						Float tmp26 = distSqr;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(681)
						Float tmp27 = (minDist * minDist);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(681)
						bool tmp28 = (tmp26 > tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(681)
						if ((tmp28)){
							HX_STACK_LINE(681)
							tmp20 = null();
						}
						else{
							HX_STACK_LINE(682)
							Float tmp29 = distSqr;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(682)
							Float tmp30 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(682)
							Float tmp31 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(682)
							Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(682)
							bool tmp33 = (tmp29 < tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(682)
							if ((tmp33)){
								HX_STACK_LINE(682)
								bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
								HX_STACK_LINE(682)
								::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(682)
								{
									HX_STACK_LINE(682)
									::zpp_nape::dynamics::ZPP_Contact tmp34 = arb->contacts->next;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(682)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp34;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(682)
									while((true)){
										HX_STACK_LINE(682)
										bool tmp35 = (cx_ite != null());		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(682)
										bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(682)
										if ((tmp36)){
											HX_STACK_LINE(682)
											break;
										}
										HX_STACK_LINE(682)
										::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
										HX_STACK_LINE(682)
										bool tmp37 = ((int)0 == cur->hash);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(682)
										if ((tmp37)){
											HX_STACK_LINE(682)
											c = cur;
											HX_STACK_LINE(682)
											break;
										}
										HX_STACK_LINE(682)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(682)
								bool tmp34 = (c == null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(682)
								if ((tmp34)){
									HX_STACK_LINE(682)
									{
										HX_STACK_LINE(682)
										::zpp_nape::dynamics::ZPP_Contact tmp35 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(682)
										bool tmp36 = (tmp35 == null());		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(682)
										if ((tmp36)){
											HX_STACK_LINE(682)
											::zpp_nape::dynamics::ZPP_Contact tmp37 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(682)
											c = tmp37;
										}
										else{
											HX_STACK_LINE(682)
											::zpp_nape::dynamics::ZPP_Contact tmp37 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(682)
											c = tmp37;
											HX_STACK_LINE(682)
											::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
											HX_STACK_LINE(682)
											c->next = null();
										}
										HX_STACK_LINE(682)
										Dynamic();
									}
									HX_STACK_LINE(682)
									::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
									HX_STACK_LINE(682)
									Float tmp35 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(682)
									ci->jnAcc = tmp35;
									HX_STACK_LINE(682)
									c->hash = (int)0;
									HX_STACK_LINE(682)
									c->fresh = true;
									HX_STACK_LINE(682)
									c->arbiter = arb;
									HX_STACK_LINE(682)
									arb->jrAcc = (int)0;
									HX_STACK_LINE(682)
									{
										HX_STACK_LINE(682)
										::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(682)
										::zpp_nape::dynamics::ZPP_Contact tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(682)
										{
											HX_STACK_LINE(682)
											c->_inuse = true;
											HX_STACK_LINE(682)
											tmp36 = c;
										}
										HX_STACK_LINE(682)
										::zpp_nape::dynamics::ZPP_Contact temp = tmp36;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(682)
										temp->next = _this->next;
										HX_STACK_LINE(682)
										_this->next = temp;
										HX_STACK_LINE(682)
										_this->modified = true;
										HX_STACK_LINE(682)
										(_this->length)++;
										HX_STACK_LINE(682)
										c;
									}
									HX_STACK_LINE(682)
									::zpp_nape::dynamics::ZPP_IContact tmp36 = ci;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(682)
									arb->innards->add(tmp36);
								}
								else{
									HX_STACK_LINE(682)
									c->fresh = false;
								}
								HX_STACK_LINE(682)
								{
									HX_STACK_LINE(682)
									Float tmp35 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(682)
									c->px = tmp35;
									HX_STACK_LINE(682)
									Float tmp36 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(682)
									c->py = tmp36;
									HX_STACK_LINE(682)
									{
									}
								}
								HX_STACK_LINE(682)
								{
									HX_STACK_LINE(682)
									arb->nx = (int)1;
									HX_STACK_LINE(682)
									arb->ny = (int)0;
									HX_STACK_LINE(682)
									{
									}
								}
								HX_STACK_LINE(682)
								Float tmp35 = minDist;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(682)
								Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(682)
								c->dist = tmp36;
								HX_STACK_LINE(682)
								c->stamp = arb->stamp;
								HX_STACK_LINE(682)
								c->posOnly = posOnly;
								HX_STACK_LINE(682)
								tmp20 = c;
							}
							else{
								HX_STACK_LINE(684)
								Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(684)
								{
									HX_STACK_LINE(684)
									Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(684)
									{
										HX_STACK_LINE(684)
										Float tmp36 = distSqr;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(684)
										tmp35 = ::Math_obj::sqrt(tmp36);
									}
									HX_STACK_LINE(684)
									tmp34 = (Float(((Float)1.0)) / Float(tmp35));
								}
								HX_STACK_LINE(684)
								Float invDist = tmp34;		HX_STACK_VAR(invDist,"invDist");
								HX_STACK_LINE(685)
								Float tmp35 = invDist;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(685)
								Float tmp36 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(685)
								bool tmp37 = (tmp35 < tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(685)
								Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(685)
								if ((tmp37)){
									HX_STACK_LINE(685)
									tmp38 = ((Float)1e100);
								}
								else{
									HX_STACK_LINE(685)
									tmp38 = (Float(((Float)1.0)) / Float(invDist));
								}
								HX_STACK_LINE(685)
								Float dist = tmp38;		HX_STACK_VAR(dist,"dist");
								HX_STACK_LINE(686)
								Float tmp39 = s1->circle->radius;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(686)
								Float tmp40 = (((Float)0.5) * minDist);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(686)
								Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(686)
								Float tmp42 = invDist;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(686)
								Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(686)
								Float tmp44 = (((Float)0.5) + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(686)
								Float df = tmp44;		HX_STACK_VAR(df,"df");
								HX_STACK_LINE(687)
								bool tmp45 = rev;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(687)
								if ((tmp45)){
									HX_STACK_LINE(687)
									bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
									HX_STACK_LINE(687)
									::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(687)
									{
										HX_STACK_LINE(687)
										::zpp_nape::dynamics::ZPP_Contact tmp46 = arb->contacts->next;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(687)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp46;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(687)
										while((true)){
											HX_STACK_LINE(687)
											bool tmp47 = (cx_ite != null());		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(687)
											bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(687)
											if ((tmp48)){
												HX_STACK_LINE(687)
												break;
											}
											HX_STACK_LINE(687)
											::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
											HX_STACK_LINE(687)
											bool tmp49 = ((int)0 == cur->hash);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(687)
											if ((tmp49)){
												HX_STACK_LINE(687)
												c = cur;
												HX_STACK_LINE(687)
												break;
											}
											HX_STACK_LINE(687)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(687)
									bool tmp46 = (c == null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(687)
									if ((tmp46)){
										HX_STACK_LINE(687)
										{
											HX_STACK_LINE(687)
											::zpp_nape::dynamics::ZPP_Contact tmp47 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(687)
											bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(687)
											if ((tmp48)){
												HX_STACK_LINE(687)
												::zpp_nape::dynamics::ZPP_Contact tmp49 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(687)
												c = tmp49;
											}
											else{
												HX_STACK_LINE(687)
												::zpp_nape::dynamics::ZPP_Contact tmp49 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(687)
												c = tmp49;
												HX_STACK_LINE(687)
												::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
												HX_STACK_LINE(687)
												c->next = null();
											}
											HX_STACK_LINE(687)
											Dynamic();
										}
										HX_STACK_LINE(687)
										::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
										HX_STACK_LINE(687)
										Float tmp47 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(687)
										ci->jnAcc = tmp47;
										HX_STACK_LINE(687)
										c->hash = (int)0;
										HX_STACK_LINE(687)
										c->fresh = true;
										HX_STACK_LINE(687)
										c->arbiter = arb;
										HX_STACK_LINE(687)
										arb->jrAcc = (int)0;
										HX_STACK_LINE(687)
										{
											HX_STACK_LINE(687)
											::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(687)
											::zpp_nape::dynamics::ZPP_Contact tmp48;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(687)
											{
												HX_STACK_LINE(687)
												c->_inuse = true;
												HX_STACK_LINE(687)
												tmp48 = c;
											}
											HX_STACK_LINE(687)
											::zpp_nape::dynamics::ZPP_Contact temp = tmp48;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(687)
											temp->next = _this->next;
											HX_STACK_LINE(687)
											_this->next = temp;
											HX_STACK_LINE(687)
											_this->modified = true;
											HX_STACK_LINE(687)
											(_this->length)++;
											HX_STACK_LINE(687)
											c;
										}
										HX_STACK_LINE(687)
										::zpp_nape::dynamics::ZPP_IContact tmp48 = ci;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(687)
										arb->innards->add(tmp48);
									}
									else{
										HX_STACK_LINE(687)
										c->fresh = false;
									}
									HX_STACK_LINE(687)
									{
										HX_STACK_LINE(687)
										Float tmp47 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(687)
										Float tmp48 = (px * df);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(687)
										Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(687)
										c->px = tmp49;
										HX_STACK_LINE(687)
										Float tmp50 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(687)
										Float tmp51 = (py * df);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(687)
										Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(687)
										c->py = tmp52;
										HX_STACK_LINE(687)
										{
										}
									}
									HX_STACK_LINE(687)
									{
										HX_STACK_LINE(687)
										Float tmp47 = px;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(687)
										Float tmp48 = -(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(687)
										Float tmp49 = invDist;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(687)
										Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(687)
										arb->nx = tmp50;
										HX_STACK_LINE(687)
										Float tmp51 = py;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(687)
										Float tmp52 = -(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(687)
										Float tmp53 = invDist;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(687)
										Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(687)
										arb->ny = tmp54;
										HX_STACK_LINE(687)
										{
										}
									}
									HX_STACK_LINE(687)
									Float tmp47 = (dist - minDist);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(687)
									c->dist = tmp47;
									HX_STACK_LINE(687)
									c->stamp = arb->stamp;
									HX_STACK_LINE(687)
									c->posOnly = posOnly;
									HX_STACK_LINE(687)
									tmp20 = c;
								}
								else{
									HX_STACK_LINE(688)
									bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
									HX_STACK_LINE(688)
									::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(688)
									{
										HX_STACK_LINE(688)
										::zpp_nape::dynamics::ZPP_Contact tmp46 = arb->contacts->next;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(688)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp46;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(688)
										while((true)){
											HX_STACK_LINE(688)
											bool tmp47 = (cx_ite != null());		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(688)
											bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(688)
											if ((tmp48)){
												HX_STACK_LINE(688)
												break;
											}
											HX_STACK_LINE(688)
											::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
											HX_STACK_LINE(688)
											bool tmp49 = ((int)0 == cur->hash);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(688)
											if ((tmp49)){
												HX_STACK_LINE(688)
												c = cur;
												HX_STACK_LINE(688)
												break;
											}
											HX_STACK_LINE(688)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(688)
									bool tmp46 = (c == null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(688)
									if ((tmp46)){
										HX_STACK_LINE(688)
										{
											HX_STACK_LINE(688)
											::zpp_nape::dynamics::ZPP_Contact tmp47 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(688)
											bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(688)
											if ((tmp48)){
												HX_STACK_LINE(688)
												::zpp_nape::dynamics::ZPP_Contact tmp49 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(688)
												c = tmp49;
											}
											else{
												HX_STACK_LINE(688)
												::zpp_nape::dynamics::ZPP_Contact tmp49 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(688)
												c = tmp49;
												HX_STACK_LINE(688)
												::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
												HX_STACK_LINE(688)
												c->next = null();
											}
											HX_STACK_LINE(688)
											Dynamic();
										}
										HX_STACK_LINE(688)
										::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
										HX_STACK_LINE(688)
										Float tmp47 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(688)
										ci->jnAcc = tmp47;
										HX_STACK_LINE(688)
										c->hash = (int)0;
										HX_STACK_LINE(688)
										c->fresh = true;
										HX_STACK_LINE(688)
										c->arbiter = arb;
										HX_STACK_LINE(688)
										arb->jrAcc = (int)0;
										HX_STACK_LINE(688)
										{
											HX_STACK_LINE(688)
											::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(688)
											::zpp_nape::dynamics::ZPP_Contact tmp48;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(688)
											{
												HX_STACK_LINE(688)
												c->_inuse = true;
												HX_STACK_LINE(688)
												tmp48 = c;
											}
											HX_STACK_LINE(688)
											::zpp_nape::dynamics::ZPP_Contact temp = tmp48;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(688)
											temp->next = _this->next;
											HX_STACK_LINE(688)
											_this->next = temp;
											HX_STACK_LINE(688)
											_this->modified = true;
											HX_STACK_LINE(688)
											(_this->length)++;
											HX_STACK_LINE(688)
											c;
										}
										HX_STACK_LINE(688)
										::zpp_nape::dynamics::ZPP_IContact tmp48 = ci;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(688)
										arb->innards->add(tmp48);
									}
									else{
										HX_STACK_LINE(688)
										c->fresh = false;
									}
									HX_STACK_LINE(688)
									{
										HX_STACK_LINE(688)
										Float tmp47 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(688)
										Float tmp48 = (px * df);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(688)
										Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(688)
										c->px = tmp49;
										HX_STACK_LINE(688)
										Float tmp50 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(688)
										Float tmp51 = (py * df);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(688)
										Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(688)
										c->py = tmp52;
										HX_STACK_LINE(688)
										{
										}
									}
									HX_STACK_LINE(688)
									{
										HX_STACK_LINE(688)
										Float tmp47 = (px * invDist);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(688)
										arb->nx = tmp47;
										HX_STACK_LINE(688)
										Float tmp48 = (py * invDist);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(688)
										arb->ny = tmp48;
										HX_STACK_LINE(688)
										{
										}
									}
									HX_STACK_LINE(688)
									Float tmp47 = (dist - minDist);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(688)
									c->dist = tmp47;
									HX_STACK_LINE(688)
									c->stamp = arb->stamp;
									HX_STACK_LINE(688)
									c->posOnly = posOnly;
									HX_STACK_LINE(688)
									tmp20 = c;
								}
							}
						}
					}
					HX_STACK_LINE(672)
					::zpp_nape::dynamics::ZPP_Contact co = tmp20;		HX_STACK_VAR(co,"co");
					HX_STACK_LINE(691)
					bool tmp21 = (co != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(691)
					if ((tmp21)){
						HX_STACK_LINE(692)
						::zpp_nape::dynamics::ZPP_IContact con = co->inner;		HX_STACK_VAR(con,"con");
						HX_STACK_LINE(693)
						arb->ptype = (int)2;
						HX_STACK_LINE(694)
						Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
						HX_STACK_LINE(695)
						Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
						HX_STACK_LINE(696)
						{
							HX_STACK_LINE(697)
							Float tmp22 = v0->x;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(697)
							::zpp_nape::phys::ZPP_Body tmp23 = s2->polygon->body;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(697)
							Float tmp24 = tmp23->posx;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(697)
							Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(697)
							vx = tmp25;
							HX_STACK_LINE(698)
							Float tmp26 = v0->y;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(698)
							::zpp_nape::phys::ZPP_Body tmp27 = s2->polygon->body;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(698)
							Float tmp28 = tmp27->posy;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(698)
							Float tmp29 = (tmp26 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(698)
							vy = tmp29;
						}
						HX_STACK_LINE(700)
						arb->__ref_edge1 = a0;
						HX_STACK_LINE(701)
						arb->__ref_vertex = (int)-1;
						HX_STACK_LINE(702)
						bool tmp22 = rev;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(702)
						if ((tmp22)){
							HX_STACK_LINE(703)
							{
								HX_STACK_LINE(704)
								Float tmp23 = vx;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(704)
								::zpp_nape::phys::ZPP_Body tmp24 = s2->polygon->body;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(704)
								Float tmp25 = tmp24->axisy;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(704)
								Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(704)
								Float tmp27 = vy;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(704)
								::zpp_nape::phys::ZPP_Body tmp28 = s2->polygon->body;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(704)
								Float tmp29 = tmp28->axisx;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(704)
								Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(704)
								Float tmp31 = (tmp26 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(704)
								con->lr1x = tmp31;
								HX_STACK_LINE(705)
								Float tmp32 = vy;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(705)
								::zpp_nape::phys::ZPP_Body tmp33 = s2->polygon->body;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(705)
								Float tmp34 = tmp33->axisy;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(705)
								Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(705)
								Float tmp36 = vx;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(705)
								::zpp_nape::phys::ZPP_Body tmp37 = s2->polygon->body;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(705)
								Float tmp38 = tmp37->axisx;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(705)
								Float tmp39 = (tmp36 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(705)
								Float tmp40 = (tmp35 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(705)
								con->lr1y = tmp40;
							}
							HX_STACK_LINE(707)
							{
								HX_STACK_LINE(708)
								Float tmp23 = s1->circle->localCOMx;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(708)
								con->lr2x = tmp23;
								HX_STACK_LINE(709)
								Float tmp24 = s1->circle->localCOMy;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(709)
								con->lr2y = tmp24;
								HX_STACK_LINE(718)
								{
								}
							}
						}
						else{
							HX_STACK_LINE(729)
							{
								HX_STACK_LINE(730)
								Float tmp23 = vx;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(730)
								::zpp_nape::phys::ZPP_Body tmp24 = s2->polygon->body;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(730)
								Float tmp25 = tmp24->axisy;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(730)
								Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(730)
								Float tmp27 = vy;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(730)
								::zpp_nape::phys::ZPP_Body tmp28 = s2->polygon->body;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(730)
								Float tmp29 = tmp28->axisx;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(730)
								Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(730)
								Float tmp31 = (tmp26 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(730)
								con->lr2x = tmp31;
								HX_STACK_LINE(731)
								Float tmp32 = vy;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(731)
								::zpp_nape::phys::ZPP_Body tmp33 = s2->polygon->body;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(731)
								Float tmp34 = tmp33->axisy;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(731)
								Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(731)
								Float tmp36 = vx;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(731)
								::zpp_nape::phys::ZPP_Body tmp37 = s2->polygon->body;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(731)
								Float tmp38 = tmp37->axisx;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(731)
								Float tmp39 = (tmp36 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(731)
								Float tmp40 = (tmp35 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(731)
								con->lr2y = tmp40;
							}
							HX_STACK_LINE(733)
							{
								HX_STACK_LINE(734)
								Float tmp23 = s1->circle->localCOMx;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(734)
								con->lr1x = tmp23;
								HX_STACK_LINE(735)
								Float tmp24 = s1->circle->localCOMy;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(735)
								con->lr1y = tmp24;
								HX_STACK_LINE(744)
								{
								}
							}
						}
						HX_STACK_LINE(754)
						Float tmp23 = s1->circle->radius;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(754)
						arb->radius = tmp23;
					}
					HX_STACK_LINE(756)
					bool tmp22 = (co != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(756)
					return tmp22;
				}
				else{
					HX_STACK_LINE(758)
					Float tmp20 = dt;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(758)
					Float tmp21 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(758)
					Float tmp22 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(758)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(758)
					bool tmp24 = (tmp20 >= tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(758)
					if ((tmp24)){
						HX_STACK_LINE(759)
						::zpp_nape::dynamics::ZPP_Contact tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(759)
						{
							HX_STACK_LINE(760)
							Float tmp26 = s1->circle->radius;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(760)
							Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(760)
							Float minDist = tmp27;		HX_STACK_VAR(minDist,"minDist");
							HX_STACK_LINE(761)
							Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
							HX_STACK_LINE(762)
							Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(764)
								Float tmp28 = v1->x;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(764)
								Float tmp29 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(764)
								Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(764)
								px = tmp30;
								HX_STACK_LINE(765)
								Float tmp31 = v1->y;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(765)
								Float tmp32 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(765)
								Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(765)
								py = tmp33;
							}
							HX_STACK_LINE(767)
							Float tmp28 = (px * px);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(767)
							Float tmp29 = (py * py);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(767)
							Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(767)
							Float distSqr = tmp30;		HX_STACK_VAR(distSqr,"distSqr");
							HX_STACK_LINE(768)
							Float tmp31 = distSqr;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(768)
							Float tmp32 = (minDist * minDist);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(768)
							bool tmp33 = (tmp31 > tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(768)
							if ((tmp33)){
								HX_STACK_LINE(768)
								tmp25 = null();
							}
							else{
								HX_STACK_LINE(769)
								Float tmp34 = distSqr;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(769)
								Float tmp35 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(769)
								Float tmp36 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(769)
								Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(769)
								bool tmp38 = (tmp34 < tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(769)
								if ((tmp38)){
									HX_STACK_LINE(769)
									bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
									HX_STACK_LINE(769)
									::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(769)
									{
										HX_STACK_LINE(769)
										::zpp_nape::dynamics::ZPP_Contact tmp39 = arb->contacts->next;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(769)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp39;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(769)
										while((true)){
											HX_STACK_LINE(769)
											bool tmp40 = (cx_ite != null());		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(769)
											bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(769)
											if ((tmp41)){
												HX_STACK_LINE(769)
												break;
											}
											HX_STACK_LINE(769)
											::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
											HX_STACK_LINE(769)
											bool tmp42 = ((int)0 == cur->hash);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(769)
											if ((tmp42)){
												HX_STACK_LINE(769)
												c = cur;
												HX_STACK_LINE(769)
												break;
											}
											HX_STACK_LINE(769)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(769)
									bool tmp39 = (c == null());		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(769)
									if ((tmp39)){
										HX_STACK_LINE(769)
										{
											HX_STACK_LINE(769)
											::zpp_nape::dynamics::ZPP_Contact tmp40 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(769)
											bool tmp41 = (tmp40 == null());		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(769)
											if ((tmp41)){
												HX_STACK_LINE(769)
												::zpp_nape::dynamics::ZPP_Contact tmp42 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(769)
												c = tmp42;
											}
											else{
												HX_STACK_LINE(769)
												::zpp_nape::dynamics::ZPP_Contact tmp42 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(769)
												c = tmp42;
												HX_STACK_LINE(769)
												::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
												HX_STACK_LINE(769)
												c->next = null();
											}
											HX_STACK_LINE(769)
											Dynamic();
										}
										HX_STACK_LINE(769)
										::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
										HX_STACK_LINE(769)
										Float tmp40 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(769)
										ci->jnAcc = tmp40;
										HX_STACK_LINE(769)
										c->hash = (int)0;
										HX_STACK_LINE(769)
										c->fresh = true;
										HX_STACK_LINE(769)
										c->arbiter = arb;
										HX_STACK_LINE(769)
										arb->jrAcc = (int)0;
										HX_STACK_LINE(769)
										{
											HX_STACK_LINE(769)
											::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(769)
											::zpp_nape::dynamics::ZPP_Contact tmp41;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(769)
											{
												HX_STACK_LINE(769)
												c->_inuse = true;
												HX_STACK_LINE(769)
												tmp41 = c;
											}
											HX_STACK_LINE(769)
											::zpp_nape::dynamics::ZPP_Contact temp = tmp41;		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(769)
											temp->next = _this->next;
											HX_STACK_LINE(769)
											_this->next = temp;
											HX_STACK_LINE(769)
											_this->modified = true;
											HX_STACK_LINE(769)
											(_this->length)++;
											HX_STACK_LINE(769)
											c;
										}
										HX_STACK_LINE(769)
										::zpp_nape::dynamics::ZPP_IContact tmp41 = ci;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(769)
										arb->innards->add(tmp41);
									}
									else{
										HX_STACK_LINE(769)
										c->fresh = false;
									}
									HX_STACK_LINE(769)
									{
										HX_STACK_LINE(769)
										Float tmp40 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(769)
										c->px = tmp40;
										HX_STACK_LINE(769)
										Float tmp41 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(769)
										c->py = tmp41;
										HX_STACK_LINE(769)
										{
										}
									}
									HX_STACK_LINE(769)
									{
										HX_STACK_LINE(769)
										arb->nx = (int)1;
										HX_STACK_LINE(769)
										arb->ny = (int)0;
										HX_STACK_LINE(769)
										{
										}
									}
									HX_STACK_LINE(769)
									Float tmp40 = minDist;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(769)
									Float tmp41 = -(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(769)
									c->dist = tmp41;
									HX_STACK_LINE(769)
									c->stamp = arb->stamp;
									HX_STACK_LINE(769)
									c->posOnly = posOnly;
									HX_STACK_LINE(769)
									tmp25 = c;
								}
								else{
									HX_STACK_LINE(771)
									Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(771)
									{
										HX_STACK_LINE(771)
										Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(771)
										{
											HX_STACK_LINE(771)
											Float tmp41 = distSqr;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(771)
											tmp40 = ::Math_obj::sqrt(tmp41);
										}
										HX_STACK_LINE(771)
										tmp39 = (Float(((Float)1.0)) / Float(tmp40));
									}
									HX_STACK_LINE(771)
									Float invDist = tmp39;		HX_STACK_VAR(invDist,"invDist");
									HX_STACK_LINE(772)
									Float tmp40 = invDist;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(772)
									Float tmp41 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(772)
									bool tmp42 = (tmp40 < tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(772)
									Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(772)
									if ((tmp42)){
										HX_STACK_LINE(772)
										tmp43 = ((Float)1e100);
									}
									else{
										HX_STACK_LINE(772)
										tmp43 = (Float(((Float)1.0)) / Float(invDist));
									}
									HX_STACK_LINE(772)
									Float dist = tmp43;		HX_STACK_VAR(dist,"dist");
									HX_STACK_LINE(773)
									Float tmp44 = s1->circle->radius;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(773)
									Float tmp45 = (((Float)0.5) * minDist);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(773)
									Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(773)
									Float tmp47 = invDist;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(773)
									Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(773)
									Float tmp49 = (((Float)0.5) + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(773)
									Float df = tmp49;		HX_STACK_VAR(df,"df");
									HX_STACK_LINE(774)
									bool tmp50 = rev;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(774)
									if ((tmp50)){
										HX_STACK_LINE(774)
										bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
										HX_STACK_LINE(774)
										::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(774)
										{
											HX_STACK_LINE(774)
											::zpp_nape::dynamics::ZPP_Contact tmp51 = arb->contacts->next;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(774)
											::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp51;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(774)
											while((true)){
												HX_STACK_LINE(774)
												bool tmp52 = (cx_ite != null());		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(774)
												bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(774)
												if ((tmp53)){
													HX_STACK_LINE(774)
													break;
												}
												HX_STACK_LINE(774)
												::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
												HX_STACK_LINE(774)
												bool tmp54 = ((int)0 == cur->hash);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(774)
												if ((tmp54)){
													HX_STACK_LINE(774)
													c = cur;
													HX_STACK_LINE(774)
													break;
												}
												HX_STACK_LINE(774)
												cx_ite = cx_ite->next;
											}
										}
										HX_STACK_LINE(774)
										bool tmp51 = (c == null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(774)
										if ((tmp51)){
											HX_STACK_LINE(774)
											{
												HX_STACK_LINE(774)
												::zpp_nape::dynamics::ZPP_Contact tmp52 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(774)
												bool tmp53 = (tmp52 == null());		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(774)
												if ((tmp53)){
													HX_STACK_LINE(774)
													::zpp_nape::dynamics::ZPP_Contact tmp54 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(774)
													c = tmp54;
												}
												else{
													HX_STACK_LINE(774)
													::zpp_nape::dynamics::ZPP_Contact tmp54 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(774)
													c = tmp54;
													HX_STACK_LINE(774)
													::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
													HX_STACK_LINE(774)
													c->next = null();
												}
												HX_STACK_LINE(774)
												Dynamic();
											}
											HX_STACK_LINE(774)
											::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
											HX_STACK_LINE(774)
											Float tmp52 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(774)
											ci->jnAcc = tmp52;
											HX_STACK_LINE(774)
											c->hash = (int)0;
											HX_STACK_LINE(774)
											c->fresh = true;
											HX_STACK_LINE(774)
											c->arbiter = arb;
											HX_STACK_LINE(774)
											arb->jrAcc = (int)0;
											HX_STACK_LINE(774)
											{
												HX_STACK_LINE(774)
												::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(774)
												::zpp_nape::dynamics::ZPP_Contact tmp53;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(774)
												{
													HX_STACK_LINE(774)
													c->_inuse = true;
													HX_STACK_LINE(774)
													tmp53 = c;
												}
												HX_STACK_LINE(774)
												::zpp_nape::dynamics::ZPP_Contact temp = tmp53;		HX_STACK_VAR(temp,"temp");
												HX_STACK_LINE(774)
												temp->next = _this->next;
												HX_STACK_LINE(774)
												_this->next = temp;
												HX_STACK_LINE(774)
												_this->modified = true;
												HX_STACK_LINE(774)
												(_this->length)++;
												HX_STACK_LINE(774)
												c;
											}
											HX_STACK_LINE(774)
											::zpp_nape::dynamics::ZPP_IContact tmp53 = ci;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(774)
											arb->innards->add(tmp53);
										}
										else{
											HX_STACK_LINE(774)
											c->fresh = false;
										}
										HX_STACK_LINE(774)
										{
											HX_STACK_LINE(774)
											Float tmp52 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(774)
											Float tmp53 = (px * df);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(774)
											Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(774)
											c->px = tmp54;
											HX_STACK_LINE(774)
											Float tmp55 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(774)
											Float tmp56 = (py * df);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(774)
											Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(774)
											c->py = tmp57;
											HX_STACK_LINE(774)
											{
											}
										}
										HX_STACK_LINE(774)
										{
											HX_STACK_LINE(774)
											Float tmp52 = px;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(774)
											Float tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(774)
											Float tmp54 = invDist;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(774)
											Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(774)
											arb->nx = tmp55;
											HX_STACK_LINE(774)
											Float tmp56 = py;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(774)
											Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(774)
											Float tmp58 = invDist;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(774)
											Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(774)
											arb->ny = tmp59;
											HX_STACK_LINE(774)
											{
											}
										}
										HX_STACK_LINE(774)
										Float tmp52 = (dist - minDist);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(774)
										c->dist = tmp52;
										HX_STACK_LINE(774)
										c->stamp = arb->stamp;
										HX_STACK_LINE(774)
										c->posOnly = posOnly;
										HX_STACK_LINE(774)
										tmp25 = c;
									}
									else{
										HX_STACK_LINE(775)
										bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
										HX_STACK_LINE(775)
										::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(775)
										{
											HX_STACK_LINE(775)
											::zpp_nape::dynamics::ZPP_Contact tmp51 = arb->contacts->next;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(775)
											::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp51;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(775)
											while((true)){
												HX_STACK_LINE(775)
												bool tmp52 = (cx_ite != null());		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(775)
												bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(775)
												if ((tmp53)){
													HX_STACK_LINE(775)
													break;
												}
												HX_STACK_LINE(775)
												::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
												HX_STACK_LINE(775)
												bool tmp54 = ((int)0 == cur->hash);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(775)
												if ((tmp54)){
													HX_STACK_LINE(775)
													c = cur;
													HX_STACK_LINE(775)
													break;
												}
												HX_STACK_LINE(775)
												cx_ite = cx_ite->next;
											}
										}
										HX_STACK_LINE(775)
										bool tmp51 = (c == null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(775)
										if ((tmp51)){
											HX_STACK_LINE(775)
											{
												HX_STACK_LINE(775)
												::zpp_nape::dynamics::ZPP_Contact tmp52 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(775)
												bool tmp53 = (tmp52 == null());		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(775)
												if ((tmp53)){
													HX_STACK_LINE(775)
													::zpp_nape::dynamics::ZPP_Contact tmp54 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(775)
													c = tmp54;
												}
												else{
													HX_STACK_LINE(775)
													::zpp_nape::dynamics::ZPP_Contact tmp54 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(775)
													c = tmp54;
													HX_STACK_LINE(775)
													::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
													HX_STACK_LINE(775)
													c->next = null();
												}
												HX_STACK_LINE(775)
												Dynamic();
											}
											HX_STACK_LINE(775)
											::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
											HX_STACK_LINE(775)
											Float tmp52 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(775)
											ci->jnAcc = tmp52;
											HX_STACK_LINE(775)
											c->hash = (int)0;
											HX_STACK_LINE(775)
											c->fresh = true;
											HX_STACK_LINE(775)
											c->arbiter = arb;
											HX_STACK_LINE(775)
											arb->jrAcc = (int)0;
											HX_STACK_LINE(775)
											{
												HX_STACK_LINE(775)
												::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(775)
												::zpp_nape::dynamics::ZPP_Contact tmp53;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(775)
												{
													HX_STACK_LINE(775)
													c->_inuse = true;
													HX_STACK_LINE(775)
													tmp53 = c;
												}
												HX_STACK_LINE(775)
												::zpp_nape::dynamics::ZPP_Contact temp = tmp53;		HX_STACK_VAR(temp,"temp");
												HX_STACK_LINE(775)
												temp->next = _this->next;
												HX_STACK_LINE(775)
												_this->next = temp;
												HX_STACK_LINE(775)
												_this->modified = true;
												HX_STACK_LINE(775)
												(_this->length)++;
												HX_STACK_LINE(775)
												c;
											}
											HX_STACK_LINE(775)
											::zpp_nape::dynamics::ZPP_IContact tmp53 = ci;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(775)
											arb->innards->add(tmp53);
										}
										else{
											HX_STACK_LINE(775)
											c->fresh = false;
										}
										HX_STACK_LINE(775)
										{
											HX_STACK_LINE(775)
											Float tmp52 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(775)
											Float tmp53 = (px * df);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(775)
											Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(775)
											c->px = tmp54;
											HX_STACK_LINE(775)
											Float tmp55 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(775)
											Float tmp56 = (py * df);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(775)
											Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(775)
											c->py = tmp57;
											HX_STACK_LINE(775)
											{
											}
										}
										HX_STACK_LINE(775)
										{
											HX_STACK_LINE(775)
											Float tmp52 = (px * invDist);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(775)
											arb->nx = tmp52;
											HX_STACK_LINE(775)
											Float tmp53 = (py * invDist);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(775)
											arb->ny = tmp53;
											HX_STACK_LINE(775)
											{
											}
										}
										HX_STACK_LINE(775)
										Float tmp52 = (dist - minDist);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(775)
										c->dist = tmp52;
										HX_STACK_LINE(775)
										c->stamp = arb->stamp;
										HX_STACK_LINE(775)
										c->posOnly = posOnly;
										HX_STACK_LINE(775)
										tmp25 = c;
									}
								}
							}
						}
						HX_STACK_LINE(759)
						::zpp_nape::dynamics::ZPP_Contact co = tmp25;		HX_STACK_VAR(co,"co");
						HX_STACK_LINE(778)
						bool tmp26 = (co != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(778)
						if ((tmp26)){
							HX_STACK_LINE(779)
							::zpp_nape::dynamics::ZPP_IContact con = co->inner;		HX_STACK_VAR(con,"con");
							HX_STACK_LINE(780)
							arb->ptype = (int)2;
							HX_STACK_LINE(781)
							Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
							HX_STACK_LINE(782)
							Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
							HX_STACK_LINE(783)
							{
								HX_STACK_LINE(784)
								Float tmp27 = v1->x;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(784)
								::zpp_nape::phys::ZPP_Body tmp28 = s2->polygon->body;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(784)
								Float tmp29 = tmp28->posx;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(784)
								Float tmp30 = (tmp27 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(784)
								vx = tmp30;
								HX_STACK_LINE(785)
								Float tmp31 = v1->y;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(785)
								::zpp_nape::phys::ZPP_Body tmp32 = s2->polygon->body;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(785)
								Float tmp33 = tmp32->posy;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(785)
								Float tmp34 = (tmp31 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(785)
								vy = tmp34;
							}
							HX_STACK_LINE(787)
							arb->__ref_edge1 = a0;
							HX_STACK_LINE(788)
							arb->__ref_vertex = (int)1;
							HX_STACK_LINE(789)
							bool tmp27 = rev;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(789)
							if ((tmp27)){
								HX_STACK_LINE(790)
								{
									HX_STACK_LINE(791)
									Float tmp28 = vx;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(791)
									::zpp_nape::phys::ZPP_Body tmp29 = s2->polygon->body;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(791)
									Float tmp30 = tmp29->axisy;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(791)
									Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(791)
									Float tmp32 = vy;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(791)
									::zpp_nape::phys::ZPP_Body tmp33 = s2->polygon->body;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(791)
									Float tmp34 = tmp33->axisx;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(791)
									Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(791)
									Float tmp36 = (tmp31 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(791)
									con->lr1x = tmp36;
									HX_STACK_LINE(792)
									Float tmp37 = vy;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(792)
									::zpp_nape::phys::ZPP_Body tmp38 = s2->polygon->body;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(792)
									Float tmp39 = tmp38->axisy;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(792)
									Float tmp40 = (tmp37 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(792)
									Float tmp41 = vx;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(792)
									::zpp_nape::phys::ZPP_Body tmp42 = s2->polygon->body;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(792)
									Float tmp43 = tmp42->axisx;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(792)
									Float tmp44 = (tmp41 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(792)
									Float tmp45 = (tmp40 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(792)
									con->lr1y = tmp45;
								}
								HX_STACK_LINE(794)
								{
									HX_STACK_LINE(795)
									Float tmp28 = s1->circle->localCOMx;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(795)
									con->lr2x = tmp28;
									HX_STACK_LINE(796)
									Float tmp29 = s1->circle->localCOMy;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(796)
									con->lr2y = tmp29;
									HX_STACK_LINE(805)
									{
									}
								}
							}
							else{
								HX_STACK_LINE(816)
								{
									HX_STACK_LINE(817)
									Float tmp28 = vx;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(817)
									::zpp_nape::phys::ZPP_Body tmp29 = s2->polygon->body;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(817)
									Float tmp30 = tmp29->axisy;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(817)
									Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(817)
									Float tmp32 = vy;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(817)
									::zpp_nape::phys::ZPP_Body tmp33 = s2->polygon->body;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(817)
									Float tmp34 = tmp33->axisx;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(817)
									Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(817)
									Float tmp36 = (tmp31 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(817)
									con->lr2x = tmp36;
									HX_STACK_LINE(818)
									Float tmp37 = vy;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(818)
									::zpp_nape::phys::ZPP_Body tmp38 = s2->polygon->body;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(818)
									Float tmp39 = tmp38->axisy;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(818)
									Float tmp40 = (tmp37 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(818)
									Float tmp41 = vx;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(818)
									::zpp_nape::phys::ZPP_Body tmp42 = s2->polygon->body;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(818)
									Float tmp43 = tmp42->axisx;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(818)
									Float tmp44 = (tmp41 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(818)
									Float tmp45 = (tmp40 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(818)
									con->lr2y = tmp45;
								}
								HX_STACK_LINE(820)
								{
									HX_STACK_LINE(821)
									Float tmp28 = s1->circle->localCOMx;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(821)
									con->lr1x = tmp28;
									HX_STACK_LINE(822)
									Float tmp29 = s1->circle->localCOMy;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(822)
									con->lr1y = tmp29;
									HX_STACK_LINE(831)
									{
									}
								}
							}
							HX_STACK_LINE(841)
							Float tmp28 = s1->circle->radius;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(841)
							arb->radius = tmp28;
						}
						HX_STACK_LINE(843)
						bool tmp27 = (co != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(843)
						return tmp27;
					}
					else{
						HX_STACK_LINE(846)
						Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
						HX_STACK_LINE(847)
						Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
						HX_STACK_LINE(848)
						{
							HX_STACK_LINE(849)
							Float tmp25 = s1->circle->radius;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(849)
							Float tmp26 = (max * ((Float)0.5));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(849)
							Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(849)
							Float t = tmp27;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(858)
							Float tmp28 = (a0->gnormx * t);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(858)
							nx = tmp28;
							HX_STACK_LINE(859)
							Float tmp29 = (a0->gnormy * t);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(859)
							ny = tmp29;
						}
						HX_STACK_LINE(861)
						Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(862)
						Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
						HX_STACK_LINE(863)
						{
							HX_STACK_LINE(864)
							Float tmp25 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(864)
							Float tmp26 = nx;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(864)
							Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(864)
							px = tmp27;
							HX_STACK_LINE(865)
							Float tmp28 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(865)
							Float tmp29 = ny;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(865)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(865)
							py = tmp30;
						}
						HX_STACK_LINE(867)
						bool tmp25 = rev;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(867)
						::zpp_nape::dynamics::ZPP_Contact tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(867)
						if ((tmp25)){
							HX_STACK_LINE(867)
							bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
							HX_STACK_LINE(867)
							::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(867)
							{
								HX_STACK_LINE(867)
								::zpp_nape::dynamics::ZPP_Contact tmp27 = arb->contacts->next;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(867)
								::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp27;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(867)
								while((true)){
									HX_STACK_LINE(867)
									bool tmp28 = (cx_ite != null());		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(867)
									bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(867)
									if ((tmp29)){
										HX_STACK_LINE(867)
										break;
									}
									HX_STACK_LINE(867)
									::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(867)
									bool tmp30 = ((int)0 == cur->hash);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(867)
									if ((tmp30)){
										HX_STACK_LINE(867)
										c = cur;
										HX_STACK_LINE(867)
										break;
									}
									HX_STACK_LINE(867)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(867)
							bool tmp27 = (c == null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(867)
							if ((tmp27)){
								HX_STACK_LINE(867)
								{
									HX_STACK_LINE(867)
									::zpp_nape::dynamics::ZPP_Contact tmp28 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(867)
									bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(867)
									if ((tmp29)){
										HX_STACK_LINE(867)
										::zpp_nape::dynamics::ZPP_Contact tmp30 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(867)
										c = tmp30;
									}
									else{
										HX_STACK_LINE(867)
										::zpp_nape::dynamics::ZPP_Contact tmp30 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(867)
										c = tmp30;
										HX_STACK_LINE(867)
										::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
										HX_STACK_LINE(867)
										c->next = null();
									}
									HX_STACK_LINE(867)
									Dynamic();
								}
								HX_STACK_LINE(867)
								::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
								HX_STACK_LINE(867)
								Float tmp28 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(867)
								ci->jnAcc = tmp28;
								HX_STACK_LINE(867)
								c->hash = (int)0;
								HX_STACK_LINE(867)
								c->fresh = true;
								HX_STACK_LINE(867)
								c->arbiter = arb;
								HX_STACK_LINE(867)
								arb->jrAcc = (int)0;
								HX_STACK_LINE(867)
								{
									HX_STACK_LINE(867)
									::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(867)
									::zpp_nape::dynamics::ZPP_Contact tmp29;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(867)
									{
										HX_STACK_LINE(867)
										c->_inuse = true;
										HX_STACK_LINE(867)
										tmp29 = c;
									}
									HX_STACK_LINE(867)
									::zpp_nape::dynamics::ZPP_Contact temp = tmp29;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(867)
									temp->next = _this->next;
									HX_STACK_LINE(867)
									_this->next = temp;
									HX_STACK_LINE(867)
									_this->modified = true;
									HX_STACK_LINE(867)
									(_this->length)++;
									HX_STACK_LINE(867)
									c;
								}
								HX_STACK_LINE(867)
								::zpp_nape::dynamics::ZPP_IContact tmp29 = ci;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(867)
								arb->innards->add(tmp29);
							}
							else{
								HX_STACK_LINE(867)
								c->fresh = false;
							}
							HX_STACK_LINE(867)
							{
								HX_STACK_LINE(867)
								c->px = px;
								HX_STACK_LINE(867)
								c->py = py;
								HX_STACK_LINE(867)
								{
								}
							}
							HX_STACK_LINE(867)
							{
								HX_STACK_LINE(867)
								arb->nx = a0->gnormx;
								HX_STACK_LINE(867)
								arb->ny = a0->gnormy;
								HX_STACK_LINE(867)
								{
								}
							}
							HX_STACK_LINE(867)
							c->dist = max;
							HX_STACK_LINE(867)
							c->stamp = arb->stamp;
							HX_STACK_LINE(867)
							c->posOnly = posOnly;
							HX_STACK_LINE(867)
							tmp26 = c;
						}
						else{
							HX_STACK_LINE(868)
							bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
							HX_STACK_LINE(868)
							::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(868)
							{
								HX_STACK_LINE(868)
								::zpp_nape::dynamics::ZPP_Contact tmp27 = arb->contacts->next;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(868)
								::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp27;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(868)
								while((true)){
									HX_STACK_LINE(868)
									bool tmp28 = (cx_ite != null());		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(868)
									bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(868)
									if ((tmp29)){
										HX_STACK_LINE(868)
										break;
									}
									HX_STACK_LINE(868)
									::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(868)
									bool tmp30 = ((int)0 == cur->hash);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(868)
									if ((tmp30)){
										HX_STACK_LINE(868)
										c = cur;
										HX_STACK_LINE(868)
										break;
									}
									HX_STACK_LINE(868)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(868)
							bool tmp27 = (c == null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(868)
							if ((tmp27)){
								HX_STACK_LINE(868)
								{
									HX_STACK_LINE(868)
									::zpp_nape::dynamics::ZPP_Contact tmp28 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(868)
									bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(868)
									if ((tmp29)){
										HX_STACK_LINE(868)
										::zpp_nape::dynamics::ZPP_Contact tmp30 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(868)
										c = tmp30;
									}
									else{
										HX_STACK_LINE(868)
										::zpp_nape::dynamics::ZPP_Contact tmp30 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(868)
										c = tmp30;
										HX_STACK_LINE(868)
										::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
										HX_STACK_LINE(868)
										c->next = null();
									}
									HX_STACK_LINE(868)
									Dynamic();
								}
								HX_STACK_LINE(868)
								::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
								HX_STACK_LINE(868)
								Float tmp28 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(868)
								ci->jnAcc = tmp28;
								HX_STACK_LINE(868)
								c->hash = (int)0;
								HX_STACK_LINE(868)
								c->fresh = true;
								HX_STACK_LINE(868)
								c->arbiter = arb;
								HX_STACK_LINE(868)
								arb->jrAcc = (int)0;
								HX_STACK_LINE(868)
								{
									HX_STACK_LINE(868)
									::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(868)
									::zpp_nape::dynamics::ZPP_Contact tmp29;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(868)
									{
										HX_STACK_LINE(868)
										c->_inuse = true;
										HX_STACK_LINE(868)
										tmp29 = c;
									}
									HX_STACK_LINE(868)
									::zpp_nape::dynamics::ZPP_Contact temp = tmp29;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(868)
									temp->next = _this->next;
									HX_STACK_LINE(868)
									_this->next = temp;
									HX_STACK_LINE(868)
									_this->modified = true;
									HX_STACK_LINE(868)
									(_this->length)++;
									HX_STACK_LINE(868)
									c;
								}
								HX_STACK_LINE(868)
								::zpp_nape::dynamics::ZPP_IContact tmp29 = ci;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(868)
								arb->innards->add(tmp29);
							}
							else{
								HX_STACK_LINE(868)
								c->fresh = false;
							}
							HX_STACK_LINE(868)
							{
								HX_STACK_LINE(868)
								c->px = px;
								HX_STACK_LINE(868)
								c->py = py;
								HX_STACK_LINE(868)
								{
								}
							}
							HX_STACK_LINE(868)
							{
								HX_STACK_LINE(868)
								Float tmp28 = a0->gnormx;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(868)
								Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(868)
								arb->nx = tmp29;
								HX_STACK_LINE(868)
								Float tmp30 = a0->gnormy;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(868)
								Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(868)
								arb->ny = tmp31;
								HX_STACK_LINE(868)
								{
								}
							}
							HX_STACK_LINE(868)
							c->dist = max;
							HX_STACK_LINE(868)
							c->stamp = arb->stamp;
							HX_STACK_LINE(868)
							c->posOnly = posOnly;
							HX_STACK_LINE(868)
							tmp26 = c;
						}
						HX_STACK_LINE(867)
						::zpp_nape::dynamics::ZPP_Contact con = tmp26;		HX_STACK_VAR(con,"con");
						HX_STACK_LINE(869)
						bool tmp27 = rev;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(869)
						int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(869)
						if ((tmp27)){
							HX_STACK_LINE(869)
							tmp28 = (int)0;
						}
						else{
							HX_STACK_LINE(869)
							tmp28 = (int)1;
						}
						HX_STACK_LINE(869)
						arb->ptype = tmp28;
						HX_STACK_LINE(870)
						{
							HX_STACK_LINE(871)
							arb->lnormx = a0->lnormx;
							HX_STACK_LINE(872)
							arb->lnormy = a0->lnormy;
							HX_STACK_LINE(881)
							{
							}
						}
						HX_STACK_LINE(890)
						bool tmp29 = rev;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(890)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(890)
						arb->rev = tmp30;
						HX_STACK_LINE(891)
						arb->lproj = a0->lprojection;
						HX_STACK_LINE(892)
						Float tmp31 = s1->circle->radius;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(892)
						arb->radius = tmp31;
						HX_STACK_LINE(893)
						{
							HX_STACK_LINE(894)
							Float tmp32 = s1->circle->localCOMx;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(894)
							con->inner->lr1x = tmp32;
							HX_STACK_LINE(895)
							Float tmp33 = s1->circle->localCOMy;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(895)
							con->inner->lr1y = tmp33;
							HX_STACK_LINE(904)
							{
							}
						}
						HX_STACK_LINE(913)
						arb->__ref_edge1 = a0;
						HX_STACK_LINE(914)
						arb->__ref_vertex = (int)0;
						HX_STACK_LINE(915)
						return true;
					}
				}
			}
			else{
				HX_STACK_LINE(918)
				return false;
			}
		}
	}
	else{
		HX_STACK_LINE(922)
		::zpp_nape::dynamics::ZPP_Contact tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(922)
		{
			HX_STACK_LINE(923)
			Float tmp2 = s1->circle->radius;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(923)
			Float tmp3 = s2->circle->radius;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(923)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(923)
			Float minDist = tmp4;		HX_STACK_VAR(minDist,"minDist");
			HX_STACK_LINE(924)
			Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(925)
			Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
			HX_STACK_LINE(926)
			{
				HX_STACK_LINE(927)
				Float tmp5 = s2->circle->worldCOMx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(927)
				Float tmp6 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(927)
				Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(927)
				px = tmp7;
				HX_STACK_LINE(928)
				Float tmp8 = s2->circle->worldCOMy;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(928)
				Float tmp9 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(928)
				Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(928)
				py = tmp10;
			}
			HX_STACK_LINE(930)
			Float tmp5 = (px * px);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(930)
			Float tmp6 = (py * py);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(930)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(930)
			Float distSqr = tmp7;		HX_STACK_VAR(distSqr,"distSqr");
			HX_STACK_LINE(931)
			Float tmp8 = distSqr;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(931)
			Float tmp9 = (minDist * minDist);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(931)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(931)
			if ((tmp10)){
				HX_STACK_LINE(931)
				tmp1 = null();
			}
			else{
				HX_STACK_LINE(932)
				Float tmp11 = distSqr;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(932)
				Float tmp12 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(932)
				Float tmp13 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(932)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(932)
				bool tmp15 = (tmp11 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(932)
				if ((tmp15)){
					HX_STACK_LINE(932)
					bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
					HX_STACK_LINE(932)
					::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(932)
					{
						HX_STACK_LINE(932)
						::zpp_nape::dynamics::ZPP_Contact tmp16 = arb->contacts->next;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(932)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(932)
						while((true)){
							HX_STACK_LINE(932)
							bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(932)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(932)
							if ((tmp18)){
								HX_STACK_LINE(932)
								break;
							}
							HX_STACK_LINE(932)
							::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
							HX_STACK_LINE(932)
							bool tmp19 = ((int)0 == cur->hash);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(932)
							if ((tmp19)){
								HX_STACK_LINE(932)
								c = cur;
								HX_STACK_LINE(932)
								break;
							}
							HX_STACK_LINE(932)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(932)
					bool tmp16 = (c == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(932)
					if ((tmp16)){
						HX_STACK_LINE(932)
						{
							HX_STACK_LINE(932)
							::zpp_nape::dynamics::ZPP_Contact tmp17 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(932)
							bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(932)
							if ((tmp18)){
								HX_STACK_LINE(932)
								::zpp_nape::dynamics::ZPP_Contact tmp19 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(932)
								c = tmp19;
							}
							else{
								HX_STACK_LINE(932)
								::zpp_nape::dynamics::ZPP_Contact tmp19 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(932)
								c = tmp19;
								HX_STACK_LINE(932)
								::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
								HX_STACK_LINE(932)
								c->next = null();
							}
							HX_STACK_LINE(932)
							Dynamic();
						}
						HX_STACK_LINE(932)
						::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
						HX_STACK_LINE(932)
						Float tmp17 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(932)
						ci->jnAcc = tmp17;
						HX_STACK_LINE(932)
						c->hash = (int)0;
						HX_STACK_LINE(932)
						c->fresh = true;
						HX_STACK_LINE(932)
						c->arbiter = arb;
						HX_STACK_LINE(932)
						arb->jrAcc = (int)0;
						HX_STACK_LINE(932)
						{
							HX_STACK_LINE(932)
							::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(932)
							::zpp_nape::dynamics::ZPP_Contact tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(932)
							{
								HX_STACK_LINE(932)
								c->_inuse = true;
								HX_STACK_LINE(932)
								tmp18 = c;
							}
							HX_STACK_LINE(932)
							::zpp_nape::dynamics::ZPP_Contact temp = tmp18;		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(932)
							temp->next = _this->next;
							HX_STACK_LINE(932)
							_this->next = temp;
							HX_STACK_LINE(932)
							_this->modified = true;
							HX_STACK_LINE(932)
							(_this->length)++;
							HX_STACK_LINE(932)
							c;
						}
						HX_STACK_LINE(932)
						::zpp_nape::dynamics::ZPP_IContact tmp18 = ci;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(932)
						arb->innards->add(tmp18);
					}
					else{
						HX_STACK_LINE(932)
						c->fresh = false;
					}
					HX_STACK_LINE(932)
					{
						HX_STACK_LINE(932)
						Float tmp17 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(932)
						c->px = tmp17;
						HX_STACK_LINE(932)
						Float tmp18 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(932)
						c->py = tmp18;
						HX_STACK_LINE(932)
						{
						}
					}
					HX_STACK_LINE(932)
					{
						HX_STACK_LINE(932)
						arb->nx = (int)1;
						HX_STACK_LINE(932)
						arb->ny = (int)0;
						HX_STACK_LINE(932)
						{
						}
					}
					HX_STACK_LINE(932)
					Float tmp17 = minDist;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(932)
					Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(932)
					c->dist = tmp18;
					HX_STACK_LINE(932)
					c->stamp = arb->stamp;
					HX_STACK_LINE(932)
					c->posOnly = posOnly;
					HX_STACK_LINE(932)
					tmp1 = c;
				}
				else{
					HX_STACK_LINE(934)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(934)
					{
						HX_STACK_LINE(934)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(934)
						{
							HX_STACK_LINE(934)
							Float tmp18 = distSqr;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(934)
							tmp17 = ::Math_obj::sqrt(tmp18);
						}
						HX_STACK_LINE(934)
						tmp16 = (Float(((Float)1.0)) / Float(tmp17));
					}
					HX_STACK_LINE(934)
					Float invDist = tmp16;		HX_STACK_VAR(invDist,"invDist");
					HX_STACK_LINE(935)
					Float tmp17 = invDist;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(935)
					Float tmp18 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(935)
					bool tmp19 = (tmp17 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(935)
					Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(935)
					if ((tmp19)){
						HX_STACK_LINE(935)
						tmp20 = ((Float)1e100);
					}
					else{
						HX_STACK_LINE(935)
						tmp20 = (Float(((Float)1.0)) / Float(invDist));
					}
					HX_STACK_LINE(935)
					Float dist = tmp20;		HX_STACK_VAR(dist,"dist");
					HX_STACK_LINE(936)
					Float tmp21 = s1->circle->radius;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(936)
					Float tmp22 = (((Float)0.5) * minDist);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(936)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(936)
					Float tmp24 = invDist;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(936)
					Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(936)
					Float tmp26 = (((Float)0.5) + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(936)
					Float df = tmp26;		HX_STACK_VAR(df,"df");
					HX_STACK_LINE(937)
					bool tmp27 = rev;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(937)
					if ((tmp27)){
						HX_STACK_LINE(937)
						bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
						HX_STACK_LINE(937)
						::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(937)
						{
							HX_STACK_LINE(937)
							::zpp_nape::dynamics::ZPP_Contact tmp28 = arb->contacts->next;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(937)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp28;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(937)
							while((true)){
								HX_STACK_LINE(937)
								bool tmp29 = (cx_ite != null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(937)
								bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(937)
								if ((tmp30)){
									HX_STACK_LINE(937)
									break;
								}
								HX_STACK_LINE(937)
								::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(937)
								bool tmp31 = ((int)0 == cur->hash);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(937)
								if ((tmp31)){
									HX_STACK_LINE(937)
									c = cur;
									HX_STACK_LINE(937)
									break;
								}
								HX_STACK_LINE(937)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(937)
						bool tmp28 = (c == null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(937)
						if ((tmp28)){
							HX_STACK_LINE(937)
							{
								HX_STACK_LINE(937)
								::zpp_nape::dynamics::ZPP_Contact tmp29 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(937)
								bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(937)
								if ((tmp30)){
									HX_STACK_LINE(937)
									::zpp_nape::dynamics::ZPP_Contact tmp31 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(937)
									c = tmp31;
								}
								else{
									HX_STACK_LINE(937)
									::zpp_nape::dynamics::ZPP_Contact tmp31 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(937)
									c = tmp31;
									HX_STACK_LINE(937)
									::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
									HX_STACK_LINE(937)
									c->next = null();
								}
								HX_STACK_LINE(937)
								Dynamic();
							}
							HX_STACK_LINE(937)
							::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
							HX_STACK_LINE(937)
							Float tmp29 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(937)
							ci->jnAcc = tmp29;
							HX_STACK_LINE(937)
							c->hash = (int)0;
							HX_STACK_LINE(937)
							c->fresh = true;
							HX_STACK_LINE(937)
							c->arbiter = arb;
							HX_STACK_LINE(937)
							arb->jrAcc = (int)0;
							HX_STACK_LINE(937)
							{
								HX_STACK_LINE(937)
								::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(937)
								::zpp_nape::dynamics::ZPP_Contact tmp30;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(937)
								{
									HX_STACK_LINE(937)
									c->_inuse = true;
									HX_STACK_LINE(937)
									tmp30 = c;
								}
								HX_STACK_LINE(937)
								::zpp_nape::dynamics::ZPP_Contact temp = tmp30;		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(937)
								temp->next = _this->next;
								HX_STACK_LINE(937)
								_this->next = temp;
								HX_STACK_LINE(937)
								_this->modified = true;
								HX_STACK_LINE(937)
								(_this->length)++;
								HX_STACK_LINE(937)
								c;
							}
							HX_STACK_LINE(937)
							::zpp_nape::dynamics::ZPP_IContact tmp30 = ci;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(937)
							arb->innards->add(tmp30);
						}
						else{
							HX_STACK_LINE(937)
							c->fresh = false;
						}
						HX_STACK_LINE(937)
						{
							HX_STACK_LINE(937)
							Float tmp29 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(937)
							Float tmp30 = (px * df);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(937)
							Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(937)
							c->px = tmp31;
							HX_STACK_LINE(937)
							Float tmp32 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(937)
							Float tmp33 = (py * df);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(937)
							Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(937)
							c->py = tmp34;
							HX_STACK_LINE(937)
							{
							}
						}
						HX_STACK_LINE(937)
						{
							HX_STACK_LINE(937)
							Float tmp29 = px;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(937)
							Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(937)
							Float tmp31 = invDist;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(937)
							Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(937)
							arb->nx = tmp32;
							HX_STACK_LINE(937)
							Float tmp33 = py;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(937)
							Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(937)
							Float tmp35 = invDist;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(937)
							Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(937)
							arb->ny = tmp36;
							HX_STACK_LINE(937)
							{
							}
						}
						HX_STACK_LINE(937)
						Float tmp29 = (dist - minDist);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(937)
						c->dist = tmp29;
						HX_STACK_LINE(937)
						c->stamp = arb->stamp;
						HX_STACK_LINE(937)
						c->posOnly = posOnly;
						HX_STACK_LINE(937)
						tmp1 = c;
					}
					else{
						HX_STACK_LINE(938)
						bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
						HX_STACK_LINE(938)
						::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(938)
						{
							HX_STACK_LINE(938)
							::zpp_nape::dynamics::ZPP_Contact tmp28 = arb->contacts->next;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(938)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp28;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(938)
							while((true)){
								HX_STACK_LINE(938)
								bool tmp29 = (cx_ite != null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(938)
								bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(938)
								if ((tmp30)){
									HX_STACK_LINE(938)
									break;
								}
								HX_STACK_LINE(938)
								::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(938)
								bool tmp31 = ((int)0 == cur->hash);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(938)
								if ((tmp31)){
									HX_STACK_LINE(938)
									c = cur;
									HX_STACK_LINE(938)
									break;
								}
								HX_STACK_LINE(938)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(938)
						bool tmp28 = (c == null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(938)
						if ((tmp28)){
							HX_STACK_LINE(938)
							{
								HX_STACK_LINE(938)
								::zpp_nape::dynamics::ZPP_Contact tmp29 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(938)
								bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(938)
								if ((tmp30)){
									HX_STACK_LINE(938)
									::zpp_nape::dynamics::ZPP_Contact tmp31 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(938)
									c = tmp31;
								}
								else{
									HX_STACK_LINE(938)
									::zpp_nape::dynamics::ZPP_Contact tmp31 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(938)
									c = tmp31;
									HX_STACK_LINE(938)
									::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
									HX_STACK_LINE(938)
									c->next = null();
								}
								HX_STACK_LINE(938)
								Dynamic();
							}
							HX_STACK_LINE(938)
							::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
							HX_STACK_LINE(938)
							Float tmp29 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(938)
							ci->jnAcc = tmp29;
							HX_STACK_LINE(938)
							c->hash = (int)0;
							HX_STACK_LINE(938)
							c->fresh = true;
							HX_STACK_LINE(938)
							c->arbiter = arb;
							HX_STACK_LINE(938)
							arb->jrAcc = (int)0;
							HX_STACK_LINE(938)
							{
								HX_STACK_LINE(938)
								::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(938)
								::zpp_nape::dynamics::ZPP_Contact tmp30;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(938)
								{
									HX_STACK_LINE(938)
									c->_inuse = true;
									HX_STACK_LINE(938)
									tmp30 = c;
								}
								HX_STACK_LINE(938)
								::zpp_nape::dynamics::ZPP_Contact temp = tmp30;		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(938)
								temp->next = _this->next;
								HX_STACK_LINE(938)
								_this->next = temp;
								HX_STACK_LINE(938)
								_this->modified = true;
								HX_STACK_LINE(938)
								(_this->length)++;
								HX_STACK_LINE(938)
								c;
							}
							HX_STACK_LINE(938)
							::zpp_nape::dynamics::ZPP_IContact tmp30 = ci;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(938)
							arb->innards->add(tmp30);
						}
						else{
							HX_STACK_LINE(938)
							c->fresh = false;
						}
						HX_STACK_LINE(938)
						{
							HX_STACK_LINE(938)
							Float tmp29 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(938)
							Float tmp30 = (px * df);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(938)
							Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(938)
							c->px = tmp31;
							HX_STACK_LINE(938)
							Float tmp32 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(938)
							Float tmp33 = (py * df);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(938)
							Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(938)
							c->py = tmp34;
							HX_STACK_LINE(938)
							{
							}
						}
						HX_STACK_LINE(938)
						{
							HX_STACK_LINE(938)
							Float tmp29 = (px * invDist);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(938)
							arb->nx = tmp29;
							HX_STACK_LINE(938)
							Float tmp30 = (py * invDist);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(938)
							arb->ny = tmp30;
							HX_STACK_LINE(938)
							{
							}
						}
						HX_STACK_LINE(938)
						Float tmp29 = (dist - minDist);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(938)
						c->dist = tmp29;
						HX_STACK_LINE(938)
						c->stamp = arb->stamp;
						HX_STACK_LINE(938)
						c->posOnly = posOnly;
						HX_STACK_LINE(938)
						tmp1 = c;
					}
				}
			}
		}
		HX_STACK_LINE(922)
		::zpp_nape::dynamics::ZPP_Contact co = tmp1;		HX_STACK_VAR(co,"co");
		HX_STACK_LINE(941)
		bool tmp2 = (co != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(941)
		if ((tmp2)){
			HX_STACK_LINE(942)
			::zpp_nape::dynamics::ZPP_IContact con = co->inner;		HX_STACK_VAR(con,"con");
			HX_STACK_LINE(943)
			bool tmp3 = rev;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(943)
			if ((tmp3)){
				HX_STACK_LINE(944)
				{
					HX_STACK_LINE(945)
					Float tmp4 = s2->circle->localCOMx;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(945)
					con->lr1x = tmp4;
					HX_STACK_LINE(946)
					Float tmp5 = s2->circle->localCOMy;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(946)
					con->lr1y = tmp5;
					HX_STACK_LINE(955)
					{
					}
				}
				HX_STACK_LINE(964)
				{
					HX_STACK_LINE(965)
					Float tmp4 = s1->circle->localCOMx;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(965)
					con->lr2x = tmp4;
					HX_STACK_LINE(966)
					Float tmp5 = s1->circle->localCOMy;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(966)
					con->lr2y = tmp5;
					HX_STACK_LINE(975)
					{
					}
				}
			}
			else{
				HX_STACK_LINE(986)
				{
					HX_STACK_LINE(987)
					Float tmp4 = s1->circle->localCOMx;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(987)
					con->lr1x = tmp4;
					HX_STACK_LINE(988)
					Float tmp5 = s1->circle->localCOMy;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(988)
					con->lr1y = tmp5;
					HX_STACK_LINE(997)
					{
					}
				}
				HX_STACK_LINE(1006)
				{
					HX_STACK_LINE(1007)
					Float tmp4 = s2->circle->localCOMx;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1007)
					con->lr2x = tmp4;
					HX_STACK_LINE(1008)
					Float tmp5 = s2->circle->localCOMy;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1008)
					con->lr2y = tmp5;
					HX_STACK_LINE(1017)
					{
					}
				}
			}
			HX_STACK_LINE(1027)
			Float tmp4 = s1->circle->radius;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1027)
			Float tmp5 = s2->circle->radius;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1027)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1027)
			arb->radius = tmp6;
			HX_STACK_LINE(1028)
			arb->ptype = (int)2;
			HX_STACK_LINE(1029)
			return true;
		}
		else{
			HX_STACK_LINE(1031)
			return false;
		}
	}
	HX_STACK_LINE(357)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_Collide_obj,contactCollide,return )

bool ZPP_Collide_obj::testCollide_safe( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Collide","testCollide_safe",0xe9023886,"zpp_nape.geom.ZPP_Collide.testCollide_safe","zpp_nape/geom/Collide.hx",1034,0x9b695611)
	HX_STACK_ARG(s1,"s1")
	HX_STACK_ARG(s2,"s2")
	HX_STACK_LINE(1035)
	bool tmp = (s2->type == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1035)
	if ((tmp)){
		HX_STACK_LINE(1036)
		::zpp_nape::shape::ZPP_Shape t = s1;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1037)
		s1 = s2;
		HX_STACK_LINE(1038)
		s2 = t;
	}
	HX_STACK_LINE(1040)
	::zpp_nape::shape::ZPP_Shape tmp1 = s1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1040)
	::zpp_nape::shape::ZPP_Shape tmp2 = s2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1040)
	bool tmp3 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1040)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,testCollide_safe,return )

bool ZPP_Collide_obj::testCollide( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Collide","testCollide",0x3af49ee6,"zpp_nape.geom.ZPP_Collide.testCollide","zpp_nape/geom/Collide.hx",1042,0x9b695611)
	HX_STACK_ARG(s1,"s1")
	HX_STACK_ARG(s2,"s2")
	HX_STACK_LINE(1043)
	bool tmp = (s2->type == (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1043)
	if ((tmp)){
		HX_STACK_LINE(1044)
		bool tmp1 = (s1->type == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1044)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1044)
		if ((tmp1)){
			HX_STACK_LINE(1045)
			bool cont = true;		HX_STACK_VAR(cont,"cont");
			HX_STACK_LINE(1046)
			{
				HX_STACK_LINE(1047)
				::zpp_nape::util::ZNPList_ZPP_Edge tmp3 = s1->polygon->edges;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1047)
				::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp3->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1048)
				while((true)){
					HX_STACK_LINE(1048)
					bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1048)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1048)
					if ((tmp5)){
						HX_STACK_LINE(1048)
						break;
					}
					HX_STACK_LINE(1049)
					::zpp_nape::shape::ZPP_Edge ax = cx_ite->elt;		HX_STACK_VAR(ax,"ax");
					HX_STACK_LINE(1050)
					{
						HX_STACK_LINE(1051)
						Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(1052)
						{
							HX_STACK_LINE(1053)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = s2->polygon->gverts;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1053)
							::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp6->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
							HX_STACK_LINE(1054)
							while((true)){
								HX_STACK_LINE(1054)
								bool tmp7 = (cx_ite1 != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1054)
								bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1054)
								if ((tmp8)){
									HX_STACK_LINE(1054)
									break;
								}
								HX_STACK_LINE(1055)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1056)
								{
									HX_STACK_LINE(1057)
									Float tmp9 = (ax->gnormx * v->x);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1057)
									Float tmp10 = (ax->gnormy * v->y);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1057)
									Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1057)
									Float k = tmp11;		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(1058)
									bool tmp12 = (k < min);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1058)
									if ((tmp12)){
										HX_STACK_LINE(1058)
										min = k;
									}
								}
								HX_STACK_LINE(1060)
								cx_ite1 = cx_ite1->next;
							}
						}
						HX_STACK_LINE(1063)
						hx::SubEq(min,ax->gprojection);
						HX_STACK_LINE(1064)
						bool tmp6 = (min > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1064)
						if ((tmp6)){
							HX_STACK_LINE(1065)
							cont = false;
							HX_STACK_LINE(1066)
							break;
						}
					}
					HX_STACK_LINE(1069)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1072)
			bool tmp3 = cont;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1072)
			if ((tmp3)){
				HX_STACK_LINE(1073)
				{
					HX_STACK_LINE(1074)
					::zpp_nape::util::ZNPList_ZPP_Edge tmp4 = s2->polygon->edges;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1074)
					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp4->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1075)
					while((true)){
						HX_STACK_LINE(1075)
						bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1075)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1075)
						if ((tmp6)){
							HX_STACK_LINE(1075)
							break;
						}
						HX_STACK_LINE(1076)
						::zpp_nape::shape::ZPP_Edge ax = cx_ite->elt;		HX_STACK_VAR(ax,"ax");
						HX_STACK_LINE(1077)
						{
							HX_STACK_LINE(1078)
							Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
							HX_STACK_LINE(1079)
							{
								HX_STACK_LINE(1080)
								::zpp_nape::geom::ZPP_Vec2 tmp7 = s1->polygon->gverts;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1080)
								::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp7->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
								HX_STACK_LINE(1081)
								while((true)){
									HX_STACK_LINE(1081)
									bool tmp8 = (cx_ite1 != null());		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1081)
									bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1081)
									if ((tmp9)){
										HX_STACK_LINE(1081)
										break;
									}
									HX_STACK_LINE(1082)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1083)
									{
										HX_STACK_LINE(1084)
										Float tmp10 = (ax->gnormx * v->x);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(1084)
										Float tmp11 = (ax->gnormy * v->y);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1084)
										Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1084)
										Float k = tmp12;		HX_STACK_VAR(k,"k");
										HX_STACK_LINE(1085)
										bool tmp13 = (k < min);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1085)
										if ((tmp13)){
											HX_STACK_LINE(1085)
											min = k;
										}
									}
									HX_STACK_LINE(1087)
									cx_ite1 = cx_ite1->next;
								}
							}
							HX_STACK_LINE(1090)
							hx::SubEq(min,ax->gprojection);
							HX_STACK_LINE(1091)
							bool tmp7 = (min > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1091)
							if ((tmp7)){
								HX_STACK_LINE(1092)
								cont = false;
								HX_STACK_LINE(1093)
								break;
							}
						}
						HX_STACK_LINE(1096)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(1099)
				tmp2 = cont;
			}
			else{
				HX_STACK_LINE(1101)
				tmp2 = false;
			}
		}
		else{
			HX_STACK_LINE(1104)
			::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
			HX_STACK_LINE(1104)
			::zpp_nape::geom::ZPP_Vec2 vi = null();		HX_STACK_VAR(vi,"vi");
			HX_STACK_LINE(1105)
			bool cont = true;		HX_STACK_VAR(cont,"cont");
			HX_STACK_LINE(1106)
			Float tmp3 = ((Float)-1e+100);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1106)
			Float max = tmp3;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(1107)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = s2->polygon->gverts;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1107)
			::zpp_nape::geom::ZPP_Vec2 vite = tmp4->next;		HX_STACK_VAR(vite,"vite");
			HX_STACK_LINE(1108)
			{
				HX_STACK_LINE(1109)
				::zpp_nape::util::ZNPList_ZPP_Edge tmp5 = s2->polygon->edges;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1109)
				::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp5->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1110)
				while((true)){
					HX_STACK_LINE(1110)
					bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1110)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1110)
					if ((tmp7)){
						HX_STACK_LINE(1110)
						break;
					}
					HX_STACK_LINE(1111)
					::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1112)
					{
						HX_STACK_LINE(1113)
						Float tmp8 = a->gnormx;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1113)
						Float tmp9 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1113)
						Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1113)
						Float tmp11 = a->gnormy;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1113)
						Float tmp12 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1113)
						Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1113)
						Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1113)
						Float tmp15 = a->gprojection;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1113)
						Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1113)
						Float tmp17 = s1->circle->radius;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1113)
						Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1113)
						Float dist = tmp18;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(1114)
						bool tmp19 = (dist > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1114)
						if ((tmp19)){
							HX_STACK_LINE(1115)
							cont = false;
							HX_STACK_LINE(1116)
							break;
						}
						HX_STACK_LINE(1118)
						bool tmp20 = (dist > max);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1118)
						if ((tmp20)){
							HX_STACK_LINE(1119)
							max = dist;
							HX_STACK_LINE(1120)
							a0 = a;
							HX_STACK_LINE(1121)
							vi = vite;
						}
						HX_STACK_LINE(1123)
						vite = vite->next;
					}
					HX_STACK_LINE(1125)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1128)
			bool tmp5 = cont;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1128)
			if ((tmp5)){
				HX_STACK_LINE(1129)
				::zpp_nape::geom::ZPP_Vec2 v0 = vi;		HX_STACK_VAR(v0,"v0");
				HX_STACK_LINE(1130)
				bool tmp6 = (vi->next == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1130)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1130)
				if ((tmp6)){
					HX_STACK_LINE(1130)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = s2->polygon->gverts;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1130)
					tmp7 = tmp8->next;
				}
				else{
					HX_STACK_LINE(1130)
					tmp7 = vi->next;
				}
				HX_STACK_LINE(1130)
				::zpp_nape::geom::ZPP_Vec2 v1 = tmp7;		HX_STACK_VAR(v1,"v1");
				HX_STACK_LINE(1131)
				Float tmp8 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1131)
				Float tmp9 = a0->gnormx;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1131)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1131)
				Float tmp11 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1131)
				Float tmp12 = a0->gnormy;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1131)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1131)
				Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1131)
				Float dt = tmp14;		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(1132)
				Float tmp15 = dt;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1132)
				Float tmp16 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1132)
				Float tmp17 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1132)
				Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1132)
				bool tmp19 = (tmp15 <= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1132)
				if ((tmp19)){
					HX_STACK_LINE(1133)
					Float tmp20 = s1->circle->radius;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1133)
					Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1133)
					Float minDist = tmp21;		HX_STACK_VAR(minDist,"minDist");
					HX_STACK_LINE(1134)
					Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
					HX_STACK_LINE(1135)
					Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
					HX_STACK_LINE(1136)
					{
						HX_STACK_LINE(1137)
						Float tmp22 = v0->x;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1137)
						Float tmp23 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1137)
						Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1137)
						px = tmp24;
						HX_STACK_LINE(1138)
						Float tmp25 = v0->y;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1138)
						Float tmp26 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1138)
						Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1138)
						py = tmp27;
					}
					HX_STACK_LINE(1140)
					Float tmp22 = (px * px);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1140)
					Float tmp23 = (py * py);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1140)
					Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1140)
					Float distSqr = tmp24;		HX_STACK_VAR(distSqr,"distSqr");
					HX_STACK_LINE(1141)
					Float tmp25 = distSqr;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1141)
					Float tmp26 = (minDist * minDist);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1141)
					tmp2 = (tmp25 <= tmp26);
				}
				else{
					HX_STACK_LINE(1143)
					Float tmp20 = dt;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1143)
					Float tmp21 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1143)
					Float tmp22 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1143)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1143)
					bool tmp24 = (tmp20 >= tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1143)
					if ((tmp24)){
						HX_STACK_LINE(1144)
						Float tmp25 = s1->circle->radius;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1144)
						Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1144)
						Float minDist = tmp26;		HX_STACK_VAR(minDist,"minDist");
						HX_STACK_LINE(1145)
						Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(1146)
						Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
						HX_STACK_LINE(1147)
						{
							HX_STACK_LINE(1148)
							Float tmp27 = v1->x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1148)
							Float tmp28 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1148)
							Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1148)
							px = tmp29;
							HX_STACK_LINE(1149)
							Float tmp30 = v1->y;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1149)
							Float tmp31 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1149)
							Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1149)
							py = tmp32;
						}
						HX_STACK_LINE(1151)
						Float tmp27 = (px * px);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1151)
						Float tmp28 = (py * py);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1151)
						Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1151)
						Float distSqr = tmp29;		HX_STACK_VAR(distSqr,"distSqr");
						HX_STACK_LINE(1152)
						Float tmp30 = distSqr;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1152)
						Float tmp31 = (minDist * minDist);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1152)
						tmp2 = (tmp30 <= tmp31);
					}
					else{
						HX_STACK_LINE(1154)
						tmp2 = true;
					}
				}
			}
			else{
				HX_STACK_LINE(1156)
				tmp2 = false;
			}
		}
		HX_STACK_LINE(1044)
		return tmp2;
	}
	else{
		HX_STACK_LINE(1159)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1159)
		{
			HX_STACK_LINE(1160)
			Float tmp2 = s1->circle->radius;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1160)
			Float tmp3 = s2->circle->radius;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1160)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1160)
			Float minDist = tmp4;		HX_STACK_VAR(minDist,"minDist");
			HX_STACK_LINE(1161)
			Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(1162)
			Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
			HX_STACK_LINE(1163)
			{
				HX_STACK_LINE(1164)
				Float tmp5 = s2->circle->worldCOMx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1164)
				Float tmp6 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1164)
				Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1164)
				px = tmp7;
				HX_STACK_LINE(1165)
				Float tmp8 = s2->circle->worldCOMy;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1165)
				Float tmp9 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1165)
				Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1165)
				py = tmp10;
			}
			HX_STACK_LINE(1167)
			Float tmp5 = (px * px);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1167)
			Float tmp6 = (py * py);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1167)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1167)
			Float distSqr = tmp7;		HX_STACK_VAR(distSqr,"distSqr");
			HX_STACK_LINE(1168)
			Float tmp8 = distSqr;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1168)
			Float tmp9 = (minDist * minDist);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1168)
			tmp1 = (tmp8 <= tmp9);
		}
		HX_STACK_LINE(1159)
		return tmp1;
	}
	HX_STACK_LINE(1043)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,testCollide,return )

bool ZPP_Collide_obj::flowCollide( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,::zpp_nape::dynamics::ZPP_FluidArbiter arb){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Collide","flowCollide",0xd0a5baca,"zpp_nape.geom.ZPP_Collide.flowCollide","zpp_nape/geom/Collide.hx",1171,0x9b695611)
	HX_STACK_ARG(s1,"s1")
	HX_STACK_ARG(s2,"s2")
	HX_STACK_ARG(arb,"arb")
	HX_STACK_LINE(1172)
	bool tmp = (s2->type == (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1172)
	if ((tmp)){
		HX_STACK_LINE(1173)
		bool tmp1 = (s1->type == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1173)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1173)
		if ((tmp1)){
			HX_STACK_LINE(1174)
			Array< bool > out1 = Array_obj< bool >::__new();		HX_STACK_VAR(out1,"out1");
			HX_STACK_LINE(1175)
			Array< bool > out2 = Array_obj< bool >::__new();		HX_STACK_VAR(out2,"out2");
			HX_STACK_LINE(1176)
			bool cont = true;		HX_STACK_VAR(cont,"cont");
			HX_STACK_LINE(1177)
			bool total = true;		HX_STACK_VAR(total,"total");
			HX_STACK_LINE(1178)
			{
				HX_STACK_LINE(1179)
				::zpp_nape::util::ZNPList_ZPP_Edge tmp3 = s1->polygon->edges;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1179)
				::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp3->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1180)
				while((true)){
					HX_STACK_LINE(1180)
					bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1180)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1180)
					if ((tmp5)){
						HX_STACK_LINE(1180)
						break;
					}
					HX_STACK_LINE(1181)
					::zpp_nape::shape::ZPP_Edge ax = cx_ite->elt;		HX_STACK_VAR(ax,"ax");
					HX_STACK_LINE(1182)
					{
						HX_STACK_LINE(1183)
						Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(1184)
						int ind = (int)0;		HX_STACK_VAR(ind,"ind");
						HX_STACK_LINE(1185)
						{
							HX_STACK_LINE(1186)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = s2->polygon->gverts;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1186)
							::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp6->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
							HX_STACK_LINE(1187)
							while((true)){
								HX_STACK_LINE(1187)
								bool tmp7 = (cx_ite1 != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1187)
								bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1187)
								if ((tmp8)){
									HX_STACK_LINE(1187)
									break;
								}
								HX_STACK_LINE(1188)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1189)
								{
									HX_STACK_LINE(1190)
									Float tmp9 = (ax->gnormx * v->x);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1190)
									Float tmp10 = (ax->gnormy * v->y);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1190)
									Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1190)
									Float k = tmp11;		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(1191)
									bool tmp12 = (k < min);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1191)
									if ((tmp12)){
										HX_STACK_LINE(1191)
										min = k;
									}
									HX_STACK_LINE(1192)
									Float tmp13 = k;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1192)
									Float tmp14 = ax->gprojection;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1192)
									Float tmp15 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1192)
									Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1192)
									bool tmp17 = (tmp13 >= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1192)
									if ((tmp17)){
										HX_STACK_LINE(1193)
										out2[ind] = true;
										HX_STACK_LINE(1194)
										total = false;
									}
									HX_STACK_LINE(1196)
									(ind)++;
								}
								HX_STACK_LINE(1198)
								cx_ite1 = cx_ite1->next;
							}
						}
						HX_STACK_LINE(1201)
						hx::SubEq(min,ax->gprojection);
						HX_STACK_LINE(1202)
						bool tmp6 = (min > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1202)
						if ((tmp6)){
							HX_STACK_LINE(1203)
							cont = false;
							HX_STACK_LINE(1204)
							break;
						}
					}
					HX_STACK_LINE(1207)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1210)
			bool tmp3 = total;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1210)
			if ((tmp3)){
				HX_STACK_LINE(1211)
				{
					HX_STACK_LINE(1211)
					::zpp_nape::shape::ZPP_Polygon _this = s2->polygon;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1211)
					bool tmp4 = _this->zip_worldCOM;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1211)
					if ((tmp4)){
						HX_STACK_LINE(1211)
						bool tmp5 = (_this->body != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1211)
						if ((tmp5)){
							HX_STACK_LINE(1211)
							_this->zip_worldCOM = false;
							HX_STACK_LINE(1211)
							{
								HX_STACK_LINE(1211)
								bool tmp6 = _this->zip_localCOM;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(1211)
								if ((tmp6)){
									HX_STACK_LINE(1211)
									_this->zip_localCOM = false;
									HX_STACK_LINE(1211)
									bool tmp7 = (_this->type == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(1211)
									if ((tmp7)){
										HX_STACK_LINE(1211)
										::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1211)
										::zpp_nape::geom::ZPP_Vec2 tmp8 = _this1->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(1211)
										bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(1211)
										if ((tmp9)){
											HX_STACK_LINE(1211)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
										}
										HX_STACK_LINE(1211)
										::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(1211)
										::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->next;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1211)
										bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1211)
										if ((tmp12)){
											HX_STACK_LINE(1211)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = _this1->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1211)
											_this1->localCOMx = tmp13->x;
											HX_STACK_LINE(1211)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = _this1->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1211)
											_this1->localCOMy = tmp14->y;
											HX_STACK_LINE(1211)
											Dynamic();
										}
										else{
											HX_STACK_LINE(1211)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = _this1->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1211)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = tmp13->next->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1211)
											bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1211)
											if ((tmp15)){
												HX_STACK_LINE(1211)
												{
													HX_STACK_LINE(1211)
													::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1211)
													_this1->localCOMx = tmp16->x;
													HX_STACK_LINE(1211)
													::zpp_nape::geom::ZPP_Vec2 tmp17 = _this1->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1211)
													_this1->localCOMy = tmp17->y;
													HX_STACK_LINE(1211)
													{
													}
												}
												HX_STACK_LINE(1211)
												{
													HX_STACK_LINE(1211)
													Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(1211)
													::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1211)
													Float tmp17 = tmp16->next->x;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1211)
													Float tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(1211)
													Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(1211)
													hx::AddEq(_this1->localCOMx,tmp19);
													HX_STACK_LINE(1211)
													::zpp_nape::geom::ZPP_Vec2 tmp20 = _this1->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1211)
													Float tmp21 = tmp20->next->y;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1211)
													Float tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1211)
													Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1211)
													hx::AddEq(_this1->localCOMy,tmp23);
												}
												HX_STACK_LINE(1211)
												{
													HX_STACK_LINE(1211)
													Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(1211)
													hx::MultEq(_this1->localCOMx,t);
													HX_STACK_LINE(1211)
													hx::MultEq(_this1->localCOMy,t);
												}
											}
											else{
												HX_STACK_LINE(1211)
												{
													HX_STACK_LINE(1211)
													_this1->localCOMx = (int)0;
													HX_STACK_LINE(1211)
													_this1->localCOMy = (int)0;
													HX_STACK_LINE(1211)
													{
													}
												}
												HX_STACK_LINE(1211)
												Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
												HX_STACK_LINE(1211)
												{
													HX_STACK_LINE(1211)
													::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1211)
													::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(1211)
													::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
													HX_STACK_LINE(1211)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(1211)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(1211)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(1211)
													while((true)){
														HX_STACK_LINE(1211)
														bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(1211)
														bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1211)
														if ((tmp18)){
															HX_STACK_LINE(1211)
															break;
														}
														HX_STACK_LINE(1211)
														::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
														HX_STACK_LINE(1211)
														{
															HX_STACK_LINE(1211)
															Float tmp19 = v->x;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(1211)
															Float tmp20 = (w->y - u->y);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(1211)
															Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(1211)
															hx::AddEq(area,tmp21);
															HX_STACK_LINE(1211)
															Float tmp22 = (w->y * v->x);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1211)
															Float tmp23 = (w->x * v->y);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1211)
															Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1211)
															Float cf = tmp24;		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(1211)
															Float tmp25 = (v->x + w->x);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(1211)
															Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(1211)
															Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(1211)
															hx::AddEq(_this1->localCOMx,tmp27);
															HX_STACK_LINE(1211)
															Float tmp28 = (v->y + w->y);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1211)
															Float tmp29 = cf;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1211)
															Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1211)
															hx::AddEq(_this1->localCOMy,tmp30);
														}
														HX_STACK_LINE(1211)
														u = v;
														HX_STACK_LINE(1211)
														v = w;
														HX_STACK_LINE(1211)
														cx_ite = cx_ite->next;
													}
													HX_STACK_LINE(1211)
													::zpp_nape::geom::ZPP_Vec2 tmp17 = _this1->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1211)
													cx_ite = tmp17;
													HX_STACK_LINE(1211)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(1211)
													{
														HX_STACK_LINE(1211)
														Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1211)
														Float tmp19 = (w->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1211)
														Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1211)
														hx::AddEq(area,tmp20);
														HX_STACK_LINE(1211)
														Float tmp21 = (w->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1211)
														Float tmp22 = (w->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(1211)
														Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1211)
														Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(1211)
														Float tmp24 = (v->x + w->x);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1211)
														Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1211)
														Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1211)
														hx::AddEq(_this1->localCOMx,tmp26);
														HX_STACK_LINE(1211)
														Float tmp27 = (v->y + w->y);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1211)
														Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1211)
														Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1211)
														hx::AddEq(_this1->localCOMy,tmp29);
													}
													HX_STACK_LINE(1211)
													u = v;
													HX_STACK_LINE(1211)
													v = w;
													HX_STACK_LINE(1211)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(1211)
													::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
													HX_STACK_LINE(1211)
													{
														HX_STACK_LINE(1211)
														Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1211)
														Float tmp19 = (w1->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1211)
														Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1211)
														hx::AddEq(area,tmp20);
														HX_STACK_LINE(1211)
														Float tmp21 = (w1->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1211)
														Float tmp22 = (w1->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(1211)
														Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1211)
														Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(1211)
														Float tmp24 = (v->x + w1->x);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1211)
														Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1211)
														Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1211)
														hx::AddEq(_this1->localCOMx,tmp26);
														HX_STACK_LINE(1211)
														Float tmp27 = (v->y + w1->y);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1211)
														Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1211)
														Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1211)
														hx::AddEq(_this1->localCOMy,tmp29);
													}
												}
												HX_STACK_LINE(1211)
												Float tmp16 = ((int)3 * area);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1211)
												Float tmp17 = (Float((int)1) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1211)
												area = tmp17;
												HX_STACK_LINE(1211)
												{
													HX_STACK_LINE(1211)
													Float t = area;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(1211)
													hx::MultEq(_this1->localCOMx,t);
													HX_STACK_LINE(1211)
													hx::MultEq(_this1->localCOMy,t);
												}
											}
										}
									}
									HX_STACK_LINE(1211)
									bool tmp8 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1211)
									if ((tmp8)){
										HX_STACK_LINE(1211)
										::zpp_nape::geom::ZPP_Vec2 tmp9 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(1211)
										tmp9->x = _this->localCOMx;
										HX_STACK_LINE(1211)
										::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(1211)
										tmp10->y = _this->localCOMy;
										HX_STACK_LINE(1211)
										{
										}
									}
								}
							}
							HX_STACK_LINE(1211)
							{
								HX_STACK_LINE(1211)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1211)
								bool tmp6 = _this1->zip_axis;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(1211)
								if ((tmp6)){
									HX_STACK_LINE(1211)
									_this1->zip_axis = false;
									HX_STACK_LINE(1211)
									{
										HX_STACK_LINE(1211)
										Float tmp7 = _this1->rot;		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(1211)
										Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(1211)
										_this1->axisx = tmp8;
										HX_STACK_LINE(1211)
										Float tmp9 = _this1->rot;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(1211)
										Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(1211)
										_this1->axisy = tmp10;
										HX_STACK_LINE(1211)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(1211)
							{
								HX_STACK_LINE(1211)
								Float tmp6 = _this->body->posx;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(1211)
								Float tmp7 = _this->body->axisy;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1211)
								Float tmp8 = _this->localCOMx;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1211)
								Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1211)
								Float tmp10 = _this->body->axisx;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1211)
								Float tmp11 = _this->localCOMy;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1211)
								Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1211)
								Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1211)
								Float tmp14 = (tmp6 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1211)
								_this->worldCOMx = tmp14;
								HX_STACK_LINE(1211)
								Float tmp15 = _this->body->posy;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1211)
								Float tmp16 = _this->localCOMx;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1211)
								Float tmp17 = _this->body->axisx;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1211)
								Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1211)
								Float tmp19 = _this->localCOMy;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1211)
								Float tmp20 = _this->body->axisy;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1211)
								Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1211)
								Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1211)
								Float tmp23 = (tmp15 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1211)
								_this->worldCOMy = tmp23;
							}
						}
					}
				}
				HX_STACK_LINE(1212)
				{
					HX_STACK_LINE(1212)
					Float tmp4 = s2->polygon->area;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1212)
					arb->overlap = tmp4;
					HX_STACK_LINE(1212)
					{
						HX_STACK_LINE(1212)
						Float tmp5 = s2->polygon->worldCOMx;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1212)
						arb->centroidx = tmp5;
						HX_STACK_LINE(1212)
						Float tmp6 = s2->polygon->worldCOMy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1212)
						arb->centroidy = tmp6;
						HX_STACK_LINE(1212)
						Dynamic();
					}
				}
				HX_STACK_LINE(1213)
				tmp2 = true;
			}
			else{
				HX_STACK_LINE(1215)
				bool tmp4 = cont;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1215)
				if ((tmp4)){
					HX_STACK_LINE(1216)
					total = true;
					HX_STACK_LINE(1217)
					{
						HX_STACK_LINE(1218)
						::zpp_nape::util::ZNPList_ZPP_Edge tmp5 = s2->polygon->edges;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1218)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp5->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1219)
						while((true)){
							HX_STACK_LINE(1219)
							bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1219)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1219)
							if ((tmp7)){
								HX_STACK_LINE(1219)
								break;
							}
							HX_STACK_LINE(1220)
							::zpp_nape::shape::ZPP_Edge ax = cx_ite->elt;		HX_STACK_VAR(ax,"ax");
							HX_STACK_LINE(1221)
							{
								HX_STACK_LINE(1222)
								Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(1223)
								int ind = (int)0;		HX_STACK_VAR(ind,"ind");
								HX_STACK_LINE(1224)
								{
									HX_STACK_LINE(1225)
									::zpp_nape::geom::ZPP_Vec2 tmp8 = s1->polygon->gverts;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1225)
									::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp8->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(1226)
									while((true)){
										HX_STACK_LINE(1226)
										bool tmp9 = (cx_ite1 != null());		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(1226)
										bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(1226)
										if ((tmp10)){
											HX_STACK_LINE(1226)
											break;
										}
										HX_STACK_LINE(1227)
										::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1228)
										{
											HX_STACK_LINE(1229)
											Float tmp11 = (ax->gnormx * v->x);		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(1229)
											Float tmp12 = (ax->gnormy * v->y);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(1229)
											Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1229)
											Float k = tmp13;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(1230)
											bool tmp14 = (k < min);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1230)
											if ((tmp14)){
												HX_STACK_LINE(1230)
												min = k;
											}
											HX_STACK_LINE(1231)
											Float tmp15 = k;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1231)
											Float tmp16 = ax->gprojection;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1231)
											Float tmp17 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1231)
											Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1231)
											bool tmp19 = (tmp15 >= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1231)
											if ((tmp19)){
												HX_STACK_LINE(1232)
												out1[ind] = true;
												HX_STACK_LINE(1233)
												total = false;
											}
											HX_STACK_LINE(1235)
											(ind)++;
										}
										HX_STACK_LINE(1237)
										cx_ite1 = cx_ite1->next;
									}
								}
								HX_STACK_LINE(1240)
								hx::SubEq(min,ax->gprojection);
								HX_STACK_LINE(1241)
								bool tmp8 = (min > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1241)
								if ((tmp8)){
									HX_STACK_LINE(1242)
									cont = false;
									HX_STACK_LINE(1243)
									break;
								}
							}
							HX_STACK_LINE(1246)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(1249)
					bool tmp5 = total;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1249)
					if ((tmp5)){
						HX_STACK_LINE(1250)
						{
							HX_STACK_LINE(1250)
							::zpp_nape::shape::ZPP_Polygon _this = s1->polygon;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1250)
							bool tmp6 = _this->zip_worldCOM;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1250)
							if ((tmp6)){
								HX_STACK_LINE(1250)
								bool tmp7 = (_this->body != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1250)
								if ((tmp7)){
									HX_STACK_LINE(1250)
									_this->zip_worldCOM = false;
									HX_STACK_LINE(1250)
									{
										HX_STACK_LINE(1250)
										bool tmp8 = _this->zip_localCOM;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(1250)
										if ((tmp8)){
											HX_STACK_LINE(1250)
											_this->zip_localCOM = false;
											HX_STACK_LINE(1250)
											bool tmp9 = (_this->type == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(1250)
											if ((tmp9)){
												HX_STACK_LINE(1250)
												::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1250)
												::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(1250)
												bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(1250)
												if ((tmp11)){
													HX_STACK_LINE(1250)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
												}
												HX_STACK_LINE(1250)
												::zpp_nape::geom::ZPP_Vec2 tmp12 = _this1->lverts->next;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(1250)
												::zpp_nape::geom::ZPP_Vec2 tmp13 = tmp12->next;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(1250)
												bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(1250)
												if ((tmp14)){
													HX_STACK_LINE(1250)
													::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(1250)
													_this1->localCOMx = tmp15->x;
													HX_STACK_LINE(1250)
													::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1250)
													_this1->localCOMy = tmp16->y;
													HX_STACK_LINE(1250)
													Dynamic();
												}
												else{
													HX_STACK_LINE(1250)
													::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(1250)
													::zpp_nape::geom::ZPP_Vec2 tmp16 = tmp15->next->next;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1250)
													bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1250)
													if ((tmp17)){
														HX_STACK_LINE(1250)
														{
															HX_STACK_LINE(1250)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = _this1->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(1250)
															_this1->localCOMx = tmp18->x;
															HX_STACK_LINE(1250)
															::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(1250)
															_this1->localCOMy = tmp19->y;
															HX_STACK_LINE(1250)
															{
															}
														}
														HX_STACK_LINE(1250)
														{
															HX_STACK_LINE(1250)
															Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(1250)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = _this1->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(1250)
															Float tmp19 = tmp18->next->x;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(1250)
															Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(1250)
															Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(1250)
															hx::AddEq(_this1->localCOMx,tmp21);
															HX_STACK_LINE(1250)
															::zpp_nape::geom::ZPP_Vec2 tmp22 = _this1->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1250)
															Float tmp23 = tmp22->next->y;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1250)
															Float tmp24 = t;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1250)
															Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(1250)
															hx::AddEq(_this1->localCOMy,tmp25);
														}
														HX_STACK_LINE(1250)
														{
															HX_STACK_LINE(1250)
															Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(1250)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(1250)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
													else{
														HX_STACK_LINE(1250)
														{
															HX_STACK_LINE(1250)
															_this1->localCOMx = (int)0;
															HX_STACK_LINE(1250)
															_this1->localCOMy = (int)0;
															HX_STACK_LINE(1250)
															{
															}
														}
														HX_STACK_LINE(1250)
														Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
														HX_STACK_LINE(1250)
														{
															HX_STACK_LINE(1250)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = _this1->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(1250)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp18;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(1250)
															::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
															HX_STACK_LINE(1250)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(1250)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(1250)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(1250)
															while((true)){
																HX_STACK_LINE(1250)
																bool tmp19 = (cx_ite != null());		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(1250)
																bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1250)
																if ((tmp20)){
																	HX_STACK_LINE(1250)
																	break;
																}
																HX_STACK_LINE(1250)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(1250)
																{
																	HX_STACK_LINE(1250)
																	Float tmp21 = v->x;		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(1250)
																	Float tmp22 = (w->y - u->y);		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(1250)
																	Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(1250)
																	hx::AddEq(area,tmp23);
																	HX_STACK_LINE(1250)
																	Float tmp24 = (w->y * v->x);		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(1250)
																	Float tmp25 = (w->x * v->y);		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(1250)
																	Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(1250)
																	Float cf = tmp26;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(1250)
																	Float tmp27 = (v->x + w->x);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(1250)
																	Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(1250)
																	Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(1250)
																	hx::AddEq(_this1->localCOMx,tmp29);
																	HX_STACK_LINE(1250)
																	Float tmp30 = (v->y + w->y);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(1250)
																	Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(1250)
																	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(1250)
																	hx::AddEq(_this1->localCOMy,tmp32);
																}
																HX_STACK_LINE(1250)
																u = v;
																HX_STACK_LINE(1250)
																v = w;
																HX_STACK_LINE(1250)
																cx_ite = cx_ite->next;
															}
															HX_STACK_LINE(1250)
															::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(1250)
															cx_ite = tmp19;
															HX_STACK_LINE(1250)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(1250)
															{
																HX_STACK_LINE(1250)
																Float tmp20 = v->x;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1250)
																Float tmp21 = (w->y - u->y);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(1250)
																Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(1250)
																hx::AddEq(area,tmp22);
																HX_STACK_LINE(1250)
																Float tmp23 = (w->y * v->x);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(1250)
																Float tmp24 = (w->x * v->y);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(1250)
																Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(1250)
																Float cf = tmp25;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(1250)
																Float tmp26 = (v->x + w->x);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(1250)
																Float tmp27 = cf;		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(1250)
																Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(1250)
																hx::AddEq(_this1->localCOMx,tmp28);
																HX_STACK_LINE(1250)
																Float tmp29 = (v->y + w->y);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1250)
																Float tmp30 = cf;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1250)
																Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1250)
																hx::AddEq(_this1->localCOMy,tmp31);
															}
															HX_STACK_LINE(1250)
															u = v;
															HX_STACK_LINE(1250)
															v = w;
															HX_STACK_LINE(1250)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(1250)
															::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
															HX_STACK_LINE(1250)
															{
																HX_STACK_LINE(1250)
																Float tmp20 = v->x;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1250)
																Float tmp21 = (w1->y - u->y);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(1250)
																Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(1250)
																hx::AddEq(area,tmp22);
																HX_STACK_LINE(1250)
																Float tmp23 = (w1->y * v->x);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(1250)
																Float tmp24 = (w1->x * v->y);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(1250)
																Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(1250)
																Float cf = tmp25;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(1250)
																Float tmp26 = (v->x + w1->x);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(1250)
																Float tmp27 = cf;		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(1250)
																Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(1250)
																hx::AddEq(_this1->localCOMx,tmp28);
																HX_STACK_LINE(1250)
																Float tmp29 = (v->y + w1->y);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1250)
																Float tmp30 = cf;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1250)
																Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1250)
																hx::AddEq(_this1->localCOMy,tmp31);
															}
														}
														HX_STACK_LINE(1250)
														Float tmp18 = ((int)3 * area);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1250)
														Float tmp19 = (Float((int)1) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1250)
														area = tmp19;
														HX_STACK_LINE(1250)
														{
															HX_STACK_LINE(1250)
															Float t = area;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(1250)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(1250)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
												}
											}
											HX_STACK_LINE(1250)
											bool tmp10 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(1250)
											if ((tmp10)){
												HX_STACK_LINE(1250)
												::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(1250)
												tmp11->x = _this->localCOMx;
												HX_STACK_LINE(1250)
												::zpp_nape::geom::ZPP_Vec2 tmp12 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(1250)
												tmp12->y = _this->localCOMy;
												HX_STACK_LINE(1250)
												{
												}
											}
										}
									}
									HX_STACK_LINE(1250)
									{
										HX_STACK_LINE(1250)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1250)
										bool tmp8 = _this1->zip_axis;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(1250)
										if ((tmp8)){
											HX_STACK_LINE(1250)
											_this1->zip_axis = false;
											HX_STACK_LINE(1250)
											{
												HX_STACK_LINE(1250)
												Float tmp9 = _this1->rot;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(1250)
												Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(1250)
												_this1->axisx = tmp10;
												HX_STACK_LINE(1250)
												Float tmp11 = _this1->rot;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(1250)
												Float tmp12 = ::Math_obj::cos(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(1250)
												_this1->axisy = tmp12;
												HX_STACK_LINE(1250)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(1250)
									{
										HX_STACK_LINE(1250)
										Float tmp8 = _this->body->posx;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(1250)
										Float tmp9 = _this->body->axisy;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(1250)
										Float tmp10 = _this->localCOMx;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(1250)
										Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1250)
										Float tmp12 = _this->body->axisx;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1250)
										Float tmp13 = _this->localCOMy;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1250)
										Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1250)
										Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1250)
										Float tmp16 = (tmp8 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1250)
										_this->worldCOMx = tmp16;
										HX_STACK_LINE(1250)
										Float tmp17 = _this->body->posy;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1250)
										Float tmp18 = _this->localCOMx;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1250)
										Float tmp19 = _this->body->axisx;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1250)
										Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1250)
										Float tmp21 = _this->localCOMy;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1250)
										Float tmp22 = _this->body->axisy;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1250)
										Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1250)
										Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1250)
										Float tmp25 = (tmp17 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1250)
										_this->worldCOMy = tmp25;
									}
								}
							}
						}
						HX_STACK_LINE(1251)
						{
							HX_STACK_LINE(1251)
							Float tmp6 = s1->polygon->area;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1251)
							arb->overlap = tmp6;
							HX_STACK_LINE(1251)
							{
								HX_STACK_LINE(1251)
								Float tmp7 = s1->polygon->worldCOMx;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1251)
								arb->centroidx = tmp7;
								HX_STACK_LINE(1251)
								Float tmp8 = s1->polygon->worldCOMy;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1251)
								arb->centroidy = tmp8;
								HX_STACK_LINE(1251)
								Dynamic();
							}
						}
						HX_STACK_LINE(1252)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(1254)
						bool tmp6 = cont;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1254)
						if ((tmp6)){
							HX_STACK_LINE(1255)
							while((true)){
								HX_STACK_LINE(1255)
								::zpp_nape::util::ZNPList_ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1255)
								::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp8 = tmp7->head;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1255)
								bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1255)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1255)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1255)
								if ((tmp11)){
									HX_STACK_LINE(1255)
									break;
								}
								HX_STACK_LINE(1256)
								::zpp_nape::util::ZNPList_ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1256)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = tmp12->pop_unsafe();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1256)
								::zpp_nape::geom::ZPP_Vec2 p = tmp13;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1257)
								bool tmp14 = p->_inuse;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1257)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1257)
								if ((tmp15)){
									HX_STACK_LINE(1258)
									::zpp_nape::geom::ZPP_Vec2 o = p;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1267)
									{
										HX_STACK_LINE(1267)
										bool tmp16 = (o->outer != null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1267)
										if ((tmp16)){
											HX_STACK_LINE(1267)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1267)
											o->outer = null();
										}
										HX_STACK_LINE(1267)
										o->_isimmutable = null();
										HX_STACK_LINE(1267)
										o->_validate = null();
										HX_STACK_LINE(1267)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1268)
									::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1268)
									o->next = tmp16;
									HX_STACK_LINE(1269)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1275)
							::zpp_nape::geom::ZPP_Vec2 fst_vert = null();		HX_STACK_VAR(fst_vert,"fst_vert");
							HX_STACK_LINE(1276)
							bool poly1 = false;		HX_STACK_VAR(poly1,"poly1");
							HX_STACK_LINE(1277)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = s1->polygon->gverts;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1277)
							::zpp_nape::geom::ZPP_Vec2 ite1 = tmp7->next;		HX_STACK_VAR(ite1,"ite1");
							HX_STACK_LINE(1278)
							int ind1 = (int)0;		HX_STACK_VAR(ind1,"ind1");
							HX_STACK_LINE(1279)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = s2->polygon->gverts;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1279)
							::zpp_nape::geom::ZPP_Vec2 ite2 = tmp8->next;		HX_STACK_VAR(ite2,"ite2");
							HX_STACK_LINE(1280)
							int ind2 = (int)0;		HX_STACK_VAR(ind2,"ind2");
							HX_STACK_LINE(1281)
							{
								HX_STACK_LINE(1281)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(1281)
								int tmp9 = s2->polygon->edgeCnt;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1281)
								int _g = tmp9;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1281)
								while((true)){
									HX_STACK_LINE(1281)
									bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1281)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1281)
									if ((tmp11)){
										HX_STACK_LINE(1281)
										break;
									}
									HX_STACK_LINE(1281)
									int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1281)
									int i = tmp12;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1281)
									bool tmp13 = out2->__get(i);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1281)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1281)
									if ((tmp14)){
										HX_STACK_LINE(1282)
										ind2 = i;
										HX_STACK_LINE(1283)
										break;
									}
									else{
										HX_STACK_LINE(1285)
										ite2 = ite2->next;
									}
								}
							}
							HX_STACK_LINE(1286)
							bool tmp9 = (ite2 == null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1286)
							if ((tmp9)){
								HX_STACK_LINE(1287)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = s2->polygon->gverts;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1287)
								ite2 = tmp10->next;
								HX_STACK_LINE(1288)
								poly1 = true;
								HX_STACK_LINE(1289)
								{
									HX_STACK_LINE(1289)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(1289)
									int tmp11 = s1->polygon->edgeCnt;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1289)
									int _g = tmp11;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1289)
									while((true)){
										HX_STACK_LINE(1289)
										bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1289)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1289)
										if ((tmp13)){
											HX_STACK_LINE(1289)
											break;
										}
										HX_STACK_LINE(1289)
										int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1289)
										int i = tmp14;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1289)
										bool tmp15 = out1->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1289)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1289)
										if ((tmp16)){
											HX_STACK_LINE(1290)
											ind1 = i;
											HX_STACK_LINE(1291)
											break;
										}
										else{
											HX_STACK_LINE(1293)
											ite1 = ite1->next;
										}
									}
								}
								HX_STACK_LINE(1294)
								bool tmp11 = (ite1 == null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1294)
								if ((tmp11)){
									HX_STACK_LINE(1294)
									::zpp_nape::geom::ZPP_Vec2 tmp12 = s1->polygon->gverts;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1294)
									ite1 = tmp12->next;
								}
								else{
									HX_STACK_LINE(1296)
									::zpp_nape::util::ZNPList_ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1296)
									::zpp_nape::geom::ZPP_Vec2 tmp13 = ite1;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1296)
									tmp12->add(tmp13);
									HX_STACK_LINE(1297)
									::zpp_nape::util::ZNPList_ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1297)
									::zpp_nape::geom::ZPP_Vec2 tmp15 = tmp14->head->elt;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1297)
									fst_vert = tmp15;
								}
							}
							else{
								HX_STACK_LINE(1301)
								::zpp_nape::util::ZNPList_ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1301)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = ite2;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1301)
								tmp10->add(tmp11);
								HX_STACK_LINE(1302)
								::zpp_nape::util::ZNPList_ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1302)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = tmp12->head->elt;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1302)
								fst_vert = tmp13;
							}
							HX_STACK_LINE(1304)
							int cnt = (int)1;		HX_STACK_VAR(cnt,"cnt");
							HX_STACK_LINE(1305)
							::zpp_nape::util::ZNPList_ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1305)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp11 = tmp10->head;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1305)
							bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1305)
							if ((tmp12)){
								HX_STACK_LINE(1306)
								{
									HX_STACK_LINE(1307)
									bool cx_cont = true;		HX_STACK_VAR(cx_cont,"cx_cont");
									HX_STACK_LINE(1308)
									::zpp_nape::geom::ZPP_Vec2 tmp13 = s1->polygon->gverts;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1308)
									::zpp_nape::geom::ZPP_Vec2 cx_itei = tmp13->next;		HX_STACK_VAR(cx_itei,"cx_itei");
									HX_STACK_LINE(1309)
									::zpp_nape::geom::ZPP_Vec2 u = cx_itei;		HX_STACK_VAR(u,"u");
									HX_STACK_LINE(1310)
									::zpp_nape::geom::ZPP_Vec2 cx_itej = cx_itei->next;		HX_STACK_VAR(cx_itej,"cx_itej");
									HX_STACK_LINE(1311)
									while((true)){
										HX_STACK_LINE(1311)
										bool tmp14 = (cx_itej != null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1311)
										bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1311)
										if ((tmp15)){
											HX_STACK_LINE(1311)
											break;
										}
										HX_STACK_LINE(1312)
										::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1313)
										{
											HX_STACK_LINE(1314)
											Float min = ((Float)2.0);		HX_STACK_VAR(min,"min");
											HX_STACK_LINE(1315)
											{
												HX_STACK_LINE(1316)
												bool cx_cont1 = true;		HX_STACK_VAR(cx_cont1,"cx_cont1");
												HX_STACK_LINE(1317)
												::zpp_nape::geom::ZPP_Vec2 tmp16 = s2->polygon->gverts;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1317)
												::zpp_nape::geom::ZPP_Vec2 cx_itei1 = tmp16->next;		HX_STACK_VAR(cx_itei1,"cx_itei1");
												HX_STACK_LINE(1318)
												::zpp_nape::geom::ZPP_Vec2 a = cx_itei1;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(1319)
												::zpp_nape::geom::ZPP_Vec2 cx_itej1 = cx_itei1->next;		HX_STACK_VAR(cx_itej1,"cx_itej1");
												HX_STACK_LINE(1320)
												while((true)){
													HX_STACK_LINE(1320)
													bool tmp17 = (cx_itej1 != null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1320)
													bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(1320)
													if ((tmp18)){
														HX_STACK_LINE(1320)
														break;
													}
													HX_STACK_LINE(1321)
													::zpp_nape::geom::ZPP_Vec2 b = cx_itej1;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(1322)
													{
														HX_STACK_LINE(1323)
														Float t = ((Float)0.0);		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(1324)
														bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1324)
														{
															HX_STACK_LINE(1325)
															Float _sx = ((Float)0.0);		HX_STACK_VAR(_sx,"_sx");
															HX_STACK_LINE(1326)
															Float _sy = ((Float)0.0);		HX_STACK_VAR(_sy,"_sy");
															HX_STACK_LINE(1327)
															{
																HX_STACK_LINE(1328)
																Float tmp20 = (u->x - a->x);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1328)
																_sx = tmp20;
																HX_STACK_LINE(1329)
																Float tmp21 = (u->y - a->y);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(1329)
																_sy = tmp21;
															}
															HX_STACK_LINE(1331)
															Float _vx = ((Float)0.0);		HX_STACK_VAR(_vx,"_vx");
															HX_STACK_LINE(1332)
															Float _vy = ((Float)0.0);		HX_STACK_VAR(_vy,"_vy");
															HX_STACK_LINE(1333)
															{
																HX_STACK_LINE(1334)
																Float tmp20 = (v->x - u->x);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1334)
																_vx = tmp20;
																HX_STACK_LINE(1335)
																Float tmp21 = (v->y - u->y);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(1335)
																_vy = tmp21;
															}
															HX_STACK_LINE(1337)
															Float _qx = ((Float)0.0);		HX_STACK_VAR(_qx,"_qx");
															HX_STACK_LINE(1338)
															Float _qy = ((Float)0.0);		HX_STACK_VAR(_qy,"_qy");
															HX_STACK_LINE(1339)
															{
																HX_STACK_LINE(1340)
																Float tmp20 = (b->x - a->x);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1340)
																_qx = tmp20;
																HX_STACK_LINE(1341)
																Float tmp21 = (b->y - a->y);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(1341)
																_qy = tmp21;
															}
															HX_STACK_LINE(1343)
															Float tmp20 = (_vy * _qx);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(1343)
															Float tmp21 = (_vx * _qy);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(1343)
															Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1343)
															Float den = tmp22;		HX_STACK_VAR(den,"den");
															HX_STACK_LINE(1344)
															Float tmp23 = (den * den);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1344)
															Float tmp24 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1344)
															Float tmp25 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(1344)
															Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(1344)
															bool tmp27 = (tmp23 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(1344)
															if ((tmp27)){
																HX_STACK_LINE(1345)
																Float tmp28 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(1345)
																den = tmp28;
																HX_STACK_LINE(1346)
																Float tmp29 = (_qy * _sx);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1346)
																Float tmp30 = (_qx * _sy);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1346)
																Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1346)
																Float tmp32 = den;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1346)
																Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1346)
																Float txx = tmp33;		HX_STACK_VAR(txx,"txx");
																HX_STACK_LINE(1347)
																Float tmp34 = txx;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1347)
																Float tmp35 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1347)
																bool tmp36 = (tmp34 > tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1347)
																bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1347)
																if ((tmp36)){
																	HX_STACK_LINE(1347)
																	Float tmp38 = txx;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1347)
																	Float tmp39 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1347)
																	Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1347)
																	Float tmp41 = ((int)1 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1347)
																	Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1347)
																	tmp37 = (tmp38 < tmp42);
																}
																else{
																	HX_STACK_LINE(1347)
																	tmp37 = false;
																}
																HX_STACK_LINE(1347)
																if ((tmp37)){
																	HX_STACK_LINE(1348)
																	Float tmp38 = (_vy * _sx);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1348)
																	Float tmp39 = (_vx * _sy);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1348)
																	Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1348)
																	Float tmp41 = den;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1348)
																	Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1348)
																	Float sxx = tmp42;		HX_STACK_VAR(sxx,"sxx");
																	HX_STACK_LINE(1349)
																	Float tmp43 = sxx;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(1349)
																	Float tmp44 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(1349)
																	bool tmp45 = (tmp43 > tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(1349)
																	bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(1349)
																	if ((tmp45)){
																		HX_STACK_LINE(1349)
																		Float tmp47 = sxx;		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(1349)
																		Float tmp48 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(1349)
																		Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																		HX_STACK_LINE(1349)
																		Float tmp50 = ((int)1 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
																		HX_STACK_LINE(1349)
																		Float tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
																		HX_STACK_LINE(1349)
																		tmp46 = (tmp47 < tmp51);
																	}
																	else{
																		HX_STACK_LINE(1349)
																		tmp46 = false;
																	}
																	HX_STACK_LINE(1349)
																	if ((tmp46)){
																		HX_STACK_LINE(1350)
																		t = txx;
																		HX_STACK_LINE(1351)
																		tmp19 = true;
																	}
																	else{
																		HX_STACK_LINE(1353)
																		tmp19 = false;
																	}
																}
																else{
																	HX_STACK_LINE(1355)
																	tmp19 = false;
																}
															}
															else{
																HX_STACK_LINE(1357)
																tmp19 = false;
															}
														}
														HX_STACK_LINE(1324)
														if ((tmp19)){
															HX_STACK_LINE(1359)
															bool tmp20 = (t < min);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(1359)
															if ((tmp20)){
																HX_STACK_LINE(1360)
																min = t;
																HX_STACK_LINE(1361)
																ite2 = cx_itei1;
															}
														}
													}
													HX_STACK_LINE(1365)
													{
														HX_STACK_LINE(1366)
														cx_itei1 = cx_itej1;
														HX_STACK_LINE(1367)
														a = b;
														HX_STACK_LINE(1368)
														cx_itej1 = cx_itej1->next;
													}
												}
												HX_STACK_LINE(1371)
												bool tmp17 = cx_cont1;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1371)
												if ((tmp17)){
													HX_STACK_LINE(1372)
													while((true)){
														HX_STACK_LINE(1373)
														::zpp_nape::geom::ZPP_Vec2 tmp18 = s2->polygon->gverts;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1373)
														cx_itej1 = tmp18->next;
														HX_STACK_LINE(1374)
														::zpp_nape::geom::ZPP_Vec2 b = cx_itej1;		HX_STACK_VAR(b,"b");
														HX_STACK_LINE(1375)
														{
															HX_STACK_LINE(1376)
															Float t = ((Float)0.0);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(1377)
															bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(1377)
															{
																HX_STACK_LINE(1378)
																Float _sx = ((Float)0.0);		HX_STACK_VAR(_sx,"_sx");
																HX_STACK_LINE(1379)
																Float _sy = ((Float)0.0);		HX_STACK_VAR(_sy,"_sy");
																HX_STACK_LINE(1380)
																{
																	HX_STACK_LINE(1381)
																	Float tmp20 = (u->x - a->x);		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(1381)
																	_sx = tmp20;
																	HX_STACK_LINE(1382)
																	Float tmp21 = (u->y - a->y);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(1382)
																	_sy = tmp21;
																}
																HX_STACK_LINE(1384)
																Float _vx = ((Float)0.0);		HX_STACK_VAR(_vx,"_vx");
																HX_STACK_LINE(1385)
																Float _vy = ((Float)0.0);		HX_STACK_VAR(_vy,"_vy");
																HX_STACK_LINE(1386)
																{
																	HX_STACK_LINE(1387)
																	Float tmp20 = (v->x - u->x);		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(1387)
																	_vx = tmp20;
																	HX_STACK_LINE(1388)
																	Float tmp21 = (v->y - u->y);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(1388)
																	_vy = tmp21;
																}
																HX_STACK_LINE(1390)
																Float _qx = ((Float)0.0);		HX_STACK_VAR(_qx,"_qx");
																HX_STACK_LINE(1391)
																Float _qy = ((Float)0.0);		HX_STACK_VAR(_qy,"_qy");
																HX_STACK_LINE(1392)
																{
																	HX_STACK_LINE(1393)
																	Float tmp20 = (b->x - a->x);		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(1393)
																	_qx = tmp20;
																	HX_STACK_LINE(1394)
																	Float tmp21 = (b->y - a->y);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(1394)
																	_qy = tmp21;
																}
																HX_STACK_LINE(1396)
																Float tmp20 = (_vy * _qx);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1396)
																Float tmp21 = (_vx * _qy);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(1396)
																Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(1396)
																Float den = tmp22;		HX_STACK_VAR(den,"den");
																HX_STACK_LINE(1397)
																Float tmp23 = (den * den);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(1397)
																Float tmp24 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(1397)
																Float tmp25 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(1397)
																Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(1397)
																bool tmp27 = (tmp23 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(1397)
																if ((tmp27)){
																	HX_STACK_LINE(1398)
																	Float tmp28 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(1398)
																	den = tmp28;
																	HX_STACK_LINE(1399)
																	Float tmp29 = (_qy * _sx);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(1399)
																	Float tmp30 = (_qx * _sy);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(1399)
																	Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(1399)
																	Float tmp32 = den;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(1399)
																	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(1399)
																	Float txx = tmp33;		HX_STACK_VAR(txx,"txx");
																	HX_STACK_LINE(1400)
																	Float tmp34 = txx;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1400)
																	Float tmp35 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1400)
																	bool tmp36 = (tmp34 > tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1400)
																	bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1400)
																	if ((tmp36)){
																		HX_STACK_LINE(1400)
																		Float tmp38 = txx;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1400)
																		Float tmp39 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1400)
																		Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1400)
																		Float tmp41 = ((int)1 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1400)
																		Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1400)
																		tmp37 = (tmp38 < tmp42);
																	}
																	else{
																		HX_STACK_LINE(1400)
																		tmp37 = false;
																	}
																	HX_STACK_LINE(1400)
																	if ((tmp37)){
																		HX_STACK_LINE(1401)
																		Float tmp38 = (_vy * _sx);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1401)
																		Float tmp39 = (_vx * _sy);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1401)
																		Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1401)
																		Float tmp41 = den;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1401)
																		Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1401)
																		Float sxx = tmp42;		HX_STACK_VAR(sxx,"sxx");
																		HX_STACK_LINE(1402)
																		Float tmp43 = sxx;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1402)
																		Float tmp44 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1402)
																		bool tmp45 = (tmp43 > tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1402)
																		bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1402)
																		if ((tmp45)){
																			HX_STACK_LINE(1402)
																			Float tmp47 = sxx;		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1402)
																			Float tmp48 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1402)
																			Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1402)
																			Float tmp50 = ((int)1 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
																			HX_STACK_LINE(1402)
																			Float tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
																			HX_STACK_LINE(1402)
																			tmp46 = (tmp47 < tmp51);
																		}
																		else{
																			HX_STACK_LINE(1402)
																			tmp46 = false;
																		}
																		HX_STACK_LINE(1402)
																		if ((tmp46)){
																			HX_STACK_LINE(1403)
																			t = txx;
																			HX_STACK_LINE(1404)
																			tmp19 = true;
																		}
																		else{
																			HX_STACK_LINE(1406)
																			tmp19 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1408)
																		tmp19 = false;
																	}
																}
																else{
																	HX_STACK_LINE(1410)
																	tmp19 = false;
																}
															}
															HX_STACK_LINE(1377)
															if ((tmp19)){
																HX_STACK_LINE(1412)
																bool tmp20 = (t < min);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1412)
																if ((tmp20)){
																	HX_STACK_LINE(1413)
																	min = t;
																	HX_STACK_LINE(1414)
																	ite2 = cx_itei1;
																}
															}
														}
														HX_STACK_LINE(1419)
														bool tmp19 = true;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1372)
														if ((tmp19)){
															HX_STACK_LINE(1372)
															break;
														}
													}
												}
											}
											HX_STACK_LINE(1422)
											bool tmp16 = (min != ((Float)2.0));		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1422)
											if ((tmp16)){
												HX_STACK_LINE(1423)
												Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
												HX_STACK_LINE(1424)
												Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
												HX_STACK_LINE(1425)
												{
													HX_STACK_LINE(1426)
													Float T = min;		HX_STACK_VAR(T,"T");
													HX_STACK_LINE(1435)
													Float tmp17 = u->x;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1435)
													Float tmp18 = (v->x - u->x);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(1435)
													Float tmp19 = T;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(1435)
													Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1435)
													Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1435)
													cx = tmp21;
													HX_STACK_LINE(1436)
													Float tmp22 = u->y;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1436)
													Float tmp23 = (v->y - u->y);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1436)
													Float tmp24 = T;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1436)
													Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1436)
													Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1436)
													cy = tmp26;
												}
												HX_STACK_LINE(1438)
												::zpp_nape::geom::ZPP_Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1438)
												{
													HX_STACK_LINE(1438)
													bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
													HX_STACK_LINE(1438)
													::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(1438)
													{
														HX_STACK_LINE(1438)
														::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1438)
														bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1438)
														if ((tmp19)){
															HX_STACK_LINE(1438)
															::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(1438)
															ret = tmp20;
														}
														else{
															HX_STACK_LINE(1438)
															::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(1438)
															ret = tmp20;
															HX_STACK_LINE(1438)
															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
															HX_STACK_LINE(1438)
															ret->next = null();
														}
														HX_STACK_LINE(1438)
														ret->weak = false;
													}
													HX_STACK_LINE(1438)
													ret->_immutable = immutable;
													HX_STACK_LINE(1438)
													{
														HX_STACK_LINE(1438)
														ret->x = cx;
														HX_STACK_LINE(1438)
														ret->y = cy;
														HX_STACK_LINE(1438)
														{
														}
													}
													HX_STACK_LINE(1438)
													tmp17 = ret;
												}
												HX_STACK_LINE(1438)
												fst_vert = tmp17;
												HX_STACK_LINE(1439)
												::zpp_nape::util::ZNPList_ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1439)
												::zpp_nape::geom::ZPP_Vec2 tmp19 = fst_vert;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1439)
												tmp18->add(tmp19);
												HX_STACK_LINE(1440)
												poly1 = true;
												HX_STACK_LINE(1441)
												ite1 = cx_itei;
												HX_STACK_LINE(1442)
												{
													HX_STACK_LINE(1443)
													cx_cont = false;
													HX_STACK_LINE(1444)
													break;
												}
											}
										}
										HX_STACK_LINE(1448)
										{
											HX_STACK_LINE(1449)
											cx_itei = cx_itej;
											HX_STACK_LINE(1450)
											u = v;
											HX_STACK_LINE(1451)
											cx_itej = cx_itej->next;
										}
									}
									HX_STACK_LINE(1454)
									bool tmp14 = cx_cont;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1454)
									if ((tmp14)){
										HX_STACK_LINE(1455)
										while((true)){
											HX_STACK_LINE(1456)
											::zpp_nape::geom::ZPP_Vec2 tmp15 = s1->polygon->gverts;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1456)
											cx_itej = tmp15->next;
											HX_STACK_LINE(1457)
											::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1458)
											{
												HX_STACK_LINE(1459)
												Float min = ((Float)2.0);		HX_STACK_VAR(min,"min");
												HX_STACK_LINE(1460)
												{
													HX_STACK_LINE(1461)
													bool cx_cont1 = true;		HX_STACK_VAR(cx_cont1,"cx_cont1");
													HX_STACK_LINE(1462)
													::zpp_nape::geom::ZPP_Vec2 tmp16 = s2->polygon->gverts;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1462)
													::zpp_nape::geom::ZPP_Vec2 cx_itei1 = tmp16->next;		HX_STACK_VAR(cx_itei1,"cx_itei1");
													HX_STACK_LINE(1463)
													::zpp_nape::geom::ZPP_Vec2 a = cx_itei1;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(1464)
													::zpp_nape::geom::ZPP_Vec2 cx_itej1 = cx_itei1->next;		HX_STACK_VAR(cx_itej1,"cx_itej1");
													HX_STACK_LINE(1465)
													while((true)){
														HX_STACK_LINE(1465)
														bool tmp17 = (cx_itej1 != null());		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(1465)
														bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1465)
														if ((tmp18)){
															HX_STACK_LINE(1465)
															break;
														}
														HX_STACK_LINE(1466)
														::zpp_nape::geom::ZPP_Vec2 b = cx_itej1;		HX_STACK_VAR(b,"b");
														HX_STACK_LINE(1467)
														{
															HX_STACK_LINE(1468)
															Float t = ((Float)0.0);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(1469)
															bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(1469)
															{
																HX_STACK_LINE(1470)
																Float _sx = ((Float)0.0);		HX_STACK_VAR(_sx,"_sx");
																HX_STACK_LINE(1471)
																Float _sy = ((Float)0.0);		HX_STACK_VAR(_sy,"_sy");
																HX_STACK_LINE(1472)
																{
																	HX_STACK_LINE(1473)
																	Float tmp20 = (u->x - a->x);		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(1473)
																	_sx = tmp20;
																	HX_STACK_LINE(1474)
																	Float tmp21 = (u->y - a->y);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(1474)
																	_sy = tmp21;
																}
																HX_STACK_LINE(1476)
																Float _vx = ((Float)0.0);		HX_STACK_VAR(_vx,"_vx");
																HX_STACK_LINE(1477)
																Float _vy = ((Float)0.0);		HX_STACK_VAR(_vy,"_vy");
																HX_STACK_LINE(1478)
																{
																	HX_STACK_LINE(1479)
																	Float tmp20 = (v->x - u->x);		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(1479)
																	_vx = tmp20;
																	HX_STACK_LINE(1480)
																	Float tmp21 = (v->y - u->y);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(1480)
																	_vy = tmp21;
																}
																HX_STACK_LINE(1482)
																Float _qx = ((Float)0.0);		HX_STACK_VAR(_qx,"_qx");
																HX_STACK_LINE(1483)
																Float _qy = ((Float)0.0);		HX_STACK_VAR(_qy,"_qy");
																HX_STACK_LINE(1484)
																{
																	HX_STACK_LINE(1485)
																	Float tmp20 = (b->x - a->x);		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(1485)
																	_qx = tmp20;
																	HX_STACK_LINE(1486)
																	Float tmp21 = (b->y - a->y);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(1486)
																	_qy = tmp21;
																}
																HX_STACK_LINE(1488)
																Float tmp20 = (_vy * _qx);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1488)
																Float tmp21 = (_vx * _qy);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(1488)
																Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(1488)
																Float den = tmp22;		HX_STACK_VAR(den,"den");
																HX_STACK_LINE(1489)
																Float tmp23 = (den * den);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(1489)
																Float tmp24 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(1489)
																Float tmp25 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(1489)
																Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(1489)
																bool tmp27 = (tmp23 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(1489)
																if ((tmp27)){
																	HX_STACK_LINE(1490)
																	Float tmp28 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(1490)
																	den = tmp28;
																	HX_STACK_LINE(1491)
																	Float tmp29 = (_qy * _sx);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(1491)
																	Float tmp30 = (_qx * _sy);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(1491)
																	Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(1491)
																	Float tmp32 = den;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(1491)
																	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(1491)
																	Float txx = tmp33;		HX_STACK_VAR(txx,"txx");
																	HX_STACK_LINE(1492)
																	Float tmp34 = txx;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1492)
																	Float tmp35 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1492)
																	bool tmp36 = (tmp34 > tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1492)
																	bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1492)
																	if ((tmp36)){
																		HX_STACK_LINE(1492)
																		Float tmp38 = txx;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1492)
																		Float tmp39 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1492)
																		Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1492)
																		Float tmp41 = ((int)1 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1492)
																		Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1492)
																		tmp37 = (tmp38 < tmp42);
																	}
																	else{
																		HX_STACK_LINE(1492)
																		tmp37 = false;
																	}
																	HX_STACK_LINE(1492)
																	if ((tmp37)){
																		HX_STACK_LINE(1493)
																		Float tmp38 = (_vy * _sx);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1493)
																		Float tmp39 = (_vx * _sy);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1493)
																		Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1493)
																		Float tmp41 = den;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1493)
																		Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(1493)
																		Float sxx = tmp42;		HX_STACK_VAR(sxx,"sxx");
																		HX_STACK_LINE(1494)
																		Float tmp43 = sxx;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(1494)
																		Float tmp44 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(1494)
																		bool tmp45 = (tmp43 > tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(1494)
																		bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(1494)
																		if ((tmp45)){
																			HX_STACK_LINE(1494)
																			Float tmp47 = sxx;		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(1494)
																			Float tmp48 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(1494)
																			Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(1494)
																			Float tmp50 = ((int)1 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
																			HX_STACK_LINE(1494)
																			Float tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
																			HX_STACK_LINE(1494)
																			tmp46 = (tmp47 < tmp51);
																		}
																		else{
																			HX_STACK_LINE(1494)
																			tmp46 = false;
																		}
																		HX_STACK_LINE(1494)
																		if ((tmp46)){
																			HX_STACK_LINE(1495)
																			t = txx;
																			HX_STACK_LINE(1496)
																			tmp19 = true;
																		}
																		else{
																			HX_STACK_LINE(1498)
																			tmp19 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1500)
																		tmp19 = false;
																	}
																}
																else{
																	HX_STACK_LINE(1502)
																	tmp19 = false;
																}
															}
															HX_STACK_LINE(1469)
															if ((tmp19)){
																HX_STACK_LINE(1504)
																bool tmp20 = (t < min);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1504)
																if ((tmp20)){
																	HX_STACK_LINE(1505)
																	min = t;
																	HX_STACK_LINE(1506)
																	ite2 = cx_itei1;
																}
															}
														}
														HX_STACK_LINE(1510)
														{
															HX_STACK_LINE(1511)
															cx_itei1 = cx_itej1;
															HX_STACK_LINE(1512)
															a = b;
															HX_STACK_LINE(1513)
															cx_itej1 = cx_itej1->next;
														}
													}
													HX_STACK_LINE(1516)
													bool tmp17 = cx_cont1;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1516)
													if ((tmp17)){
														HX_STACK_LINE(1517)
														while((true)){
															HX_STACK_LINE(1518)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = s2->polygon->gverts;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(1518)
															cx_itej1 = tmp18->next;
															HX_STACK_LINE(1519)
															::zpp_nape::geom::ZPP_Vec2 b = cx_itej1;		HX_STACK_VAR(b,"b");
															HX_STACK_LINE(1520)
															{
																HX_STACK_LINE(1521)
																Float t = ((Float)0.0);		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1522)
																bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(1522)
																{
																	HX_STACK_LINE(1523)
																	Float _sx = ((Float)0.0);		HX_STACK_VAR(_sx,"_sx");
																	HX_STACK_LINE(1524)
																	Float _sy = ((Float)0.0);		HX_STACK_VAR(_sy,"_sy");
																	HX_STACK_LINE(1525)
																	{
																		HX_STACK_LINE(1526)
																		Float tmp20 = (u->x - a->x);		HX_STACK_VAR(tmp20,"tmp20");
																		HX_STACK_LINE(1526)
																		_sx = tmp20;
																		HX_STACK_LINE(1527)
																		Float tmp21 = (u->y - a->y);		HX_STACK_VAR(tmp21,"tmp21");
																		HX_STACK_LINE(1527)
																		_sy = tmp21;
																	}
																	HX_STACK_LINE(1529)
																	Float _vx = ((Float)0.0);		HX_STACK_VAR(_vx,"_vx");
																	HX_STACK_LINE(1530)
																	Float _vy = ((Float)0.0);		HX_STACK_VAR(_vy,"_vy");
																	HX_STACK_LINE(1531)
																	{
																		HX_STACK_LINE(1532)
																		Float tmp20 = (v->x - u->x);		HX_STACK_VAR(tmp20,"tmp20");
																		HX_STACK_LINE(1532)
																		_vx = tmp20;
																		HX_STACK_LINE(1533)
																		Float tmp21 = (v->y - u->y);		HX_STACK_VAR(tmp21,"tmp21");
																		HX_STACK_LINE(1533)
																		_vy = tmp21;
																	}
																	HX_STACK_LINE(1535)
																	Float _qx = ((Float)0.0);		HX_STACK_VAR(_qx,"_qx");
																	HX_STACK_LINE(1536)
																	Float _qy = ((Float)0.0);		HX_STACK_VAR(_qy,"_qy");
																	HX_STACK_LINE(1537)
																	{
																		HX_STACK_LINE(1538)
																		Float tmp20 = (b->x - a->x);		HX_STACK_VAR(tmp20,"tmp20");
																		HX_STACK_LINE(1538)
																		_qx = tmp20;
																		HX_STACK_LINE(1539)
																		Float tmp21 = (b->y - a->y);		HX_STACK_VAR(tmp21,"tmp21");
																		HX_STACK_LINE(1539)
																		_qy = tmp21;
																	}
																	HX_STACK_LINE(1541)
																	Float tmp20 = (_vy * _qx);		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(1541)
																	Float tmp21 = (_vx * _qy);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(1541)
																	Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(1541)
																	Float den = tmp22;		HX_STACK_VAR(den,"den");
																	HX_STACK_LINE(1542)
																	Float tmp23 = (den * den);		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(1542)
																	Float tmp24 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(1542)
																	Float tmp25 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(1542)
																	Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(1542)
																	bool tmp27 = (tmp23 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(1542)
																	if ((tmp27)){
																		HX_STACK_LINE(1543)
																		Float tmp28 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp28,"tmp28");
																		HX_STACK_LINE(1543)
																		den = tmp28;
																		HX_STACK_LINE(1544)
																		Float tmp29 = (_qy * _sx);		HX_STACK_VAR(tmp29,"tmp29");
																		HX_STACK_LINE(1544)
																		Float tmp30 = (_qx * _sy);		HX_STACK_VAR(tmp30,"tmp30");
																		HX_STACK_LINE(1544)
																		Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(1544)
																		Float tmp32 = den;		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(1544)
																		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(1544)
																		Float txx = tmp33;		HX_STACK_VAR(txx,"txx");
																		HX_STACK_LINE(1545)
																		Float tmp34 = txx;		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(1545)
																		Float tmp35 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1545)
																		bool tmp36 = (tmp34 > tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1545)
																		bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1545)
																		if ((tmp36)){
																			HX_STACK_LINE(1545)
																			Float tmp38 = txx;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1545)
																			Float tmp39 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1545)
																			Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1545)
																			Float tmp41 = ((int)1 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1545)
																			Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1545)
																			tmp37 = (tmp38 < tmp42);
																		}
																		else{
																			HX_STACK_LINE(1545)
																			tmp37 = false;
																		}
																		HX_STACK_LINE(1545)
																		if ((tmp37)){
																			HX_STACK_LINE(1546)
																			Float tmp38 = (_vy * _sx);		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1546)
																			Float tmp39 = (_vx * _sy);		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1546)
																			Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1546)
																			Float tmp41 = den;		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(1546)
																			Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(1546)
																			Float sxx = tmp42;		HX_STACK_VAR(sxx,"sxx");
																			HX_STACK_LINE(1547)
																			Float tmp43 = sxx;		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(1547)
																			Float tmp44 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(1547)
																			bool tmp45 = (tmp43 > tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(1547)
																			bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
																			HX_STACK_LINE(1547)
																			if ((tmp45)){
																				HX_STACK_LINE(1547)
																				Float tmp47 = sxx;		HX_STACK_VAR(tmp47,"tmp47");
																				HX_STACK_LINE(1547)
																				Float tmp48 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp48,"tmp48");
																				HX_STACK_LINE(1547)
																				Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
																				HX_STACK_LINE(1547)
																				Float tmp50 = ((int)1 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
																				HX_STACK_LINE(1547)
																				Float tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
																				HX_STACK_LINE(1547)
																				tmp46 = (tmp47 < tmp51);
																			}
																			else{
																				HX_STACK_LINE(1547)
																				tmp46 = false;
																			}
																			HX_STACK_LINE(1547)
																			if ((tmp46)){
																				HX_STACK_LINE(1548)
																				t = txx;
																				HX_STACK_LINE(1549)
																				tmp19 = true;
																			}
																			else{
																				HX_STACK_LINE(1551)
																				tmp19 = false;
																			}
																		}
																		else{
																			HX_STACK_LINE(1553)
																			tmp19 = false;
																		}
																	}
																	else{
																		HX_STACK_LINE(1555)
																		tmp19 = false;
																	}
																}
																HX_STACK_LINE(1522)
																if ((tmp19)){
																	HX_STACK_LINE(1557)
																	bool tmp20 = (t < min);		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(1557)
																	if ((tmp20)){
																		HX_STACK_LINE(1558)
																		min = t;
																		HX_STACK_LINE(1559)
																		ite2 = cx_itei1;
																	}
																}
															}
															HX_STACK_LINE(1564)
															bool tmp19 = true;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(1517)
															if ((tmp19)){
																HX_STACK_LINE(1517)
																break;
															}
														}
													}
												}
												HX_STACK_LINE(1567)
												bool tmp16 = (min != ((Float)2.0));		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1567)
												if ((tmp16)){
													HX_STACK_LINE(1568)
													Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
													HX_STACK_LINE(1569)
													Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
													HX_STACK_LINE(1570)
													{
														HX_STACK_LINE(1571)
														Float T = min;		HX_STACK_VAR(T,"T");
														HX_STACK_LINE(1580)
														Float tmp17 = u->x;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(1580)
														Float tmp18 = (v->x - u->x);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1580)
														Float tmp19 = T;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1580)
														Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1580)
														Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1580)
														cx = tmp21;
														HX_STACK_LINE(1581)
														Float tmp22 = u->y;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(1581)
														Float tmp23 = (v->y - u->y);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1581)
														Float tmp24 = T;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1581)
														Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1581)
														Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1581)
														cy = tmp26;
													}
													HX_STACK_LINE(1583)
													::zpp_nape::geom::ZPP_Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1583)
													{
														HX_STACK_LINE(1583)
														bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
														HX_STACK_LINE(1583)
														::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(1583)
														{
															HX_STACK_LINE(1583)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(1583)
															bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(1583)
															if ((tmp19)){
																HX_STACK_LINE(1583)
																::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1583)
																ret = tmp20;
															}
															else{
																HX_STACK_LINE(1583)
																::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1583)
																ret = tmp20;
																HX_STACK_LINE(1583)
																::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																HX_STACK_LINE(1583)
																ret->next = null();
															}
															HX_STACK_LINE(1583)
															ret->weak = false;
														}
														HX_STACK_LINE(1583)
														ret->_immutable = immutable;
														HX_STACK_LINE(1583)
														{
															HX_STACK_LINE(1583)
															ret->x = cx;
															HX_STACK_LINE(1583)
															ret->y = cy;
															HX_STACK_LINE(1583)
															{
															}
														}
														HX_STACK_LINE(1583)
														tmp17 = ret;
													}
													HX_STACK_LINE(1583)
													fst_vert = tmp17;
													HX_STACK_LINE(1584)
													::zpp_nape::util::ZNPList_ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(1584)
													::zpp_nape::geom::ZPP_Vec2 tmp19 = fst_vert;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(1584)
													tmp18->add(tmp19);
													HX_STACK_LINE(1585)
													poly1 = true;
													HX_STACK_LINE(1586)
													ite1 = cx_itei;
													HX_STACK_LINE(1587)
													break;
												}
											}
											HX_STACK_LINE(1591)
											bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1455)
											if ((tmp16)){
												HX_STACK_LINE(1455)
												break;
											}
										}
									}
								}
								HX_STACK_LINE(1594)
								cnt = (int)2;
							}
							HX_STACK_LINE(1596)
							while((true)){
								HX_STACK_LINE(1597)
								bool tmp13 = poly1;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1597)
								if ((tmp13)){
									HX_STACK_LINE(1598)
									ite1 = ite1->next;
									HX_STACK_LINE(1599)
									(ind1)++;
									HX_STACK_LINE(1600)
									bool tmp14 = (ite1 == null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1600)
									if ((tmp14)){
										HX_STACK_LINE(1601)
										::zpp_nape::geom::ZPP_Vec2 tmp15 = s1->polygon->gverts;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1601)
										ite1 = tmp15->next;
										HX_STACK_LINE(1602)
										ind1 = (int)0;
									}
									HX_STACK_LINE(1604)
									bool tmp15 = out1->__get(ind1);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1604)
									bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1604)
									if ((tmp16)){
										HX_STACK_LINE(1605)
										::zpp_nape::geom::ZPP_Vec2 ex = ite1;		HX_STACK_VAR(ex,"ex");
										HX_STACK_LINE(1606)
										bool tmp17 = (fst_vert != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1606)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1606)
										if ((tmp17)){
											HX_STACK_LINE(1606)
											Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1606)
											{
												HX_STACK_LINE(1606)
												Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
												HX_STACK_LINE(1606)
												Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
												HX_STACK_LINE(1606)
												{
													HX_STACK_LINE(1606)
													Float tmp20 = (ex->x - fst_vert->x);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1606)
													Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1606)
													dx = tmp21;
													HX_STACK_LINE(1606)
													Float tmp22 = (ex->y - fst_vert->y);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1606)
													Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1606)
													dy = tmp23;
												}
												HX_STACK_LINE(1606)
												Float tmp20 = (dx * dx);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1606)
												Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1606)
												Float tmp22 = (dy * dy);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1606)
												Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1606)
												Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1606)
												tmp19 = tmp24;
											}
											HX_STACK_LINE(1606)
											Float tmp20 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1606)
											Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1606)
											tmp18 = (tmp19 < tmp21);
										}
										else{
											HX_STACK_LINE(1606)
											tmp18 = false;
										}
										HX_STACK_LINE(1606)
										if ((tmp18)){
											HX_STACK_LINE(1606)
											break;
										}
										HX_STACK_LINE(1607)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1607)
										::zpp_nape::geom::ZPP_Vec2 tmp20 = ex;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1607)
										tmp19->add(tmp20);
										HX_STACK_LINE(1608)
										bool tmp21 = (fst_vert == null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1608)
										if ((tmp21)){
											HX_STACK_LINE(1608)
											::zpp_nape::util::ZNPList_ZPP_Vec2 tmp22 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1608)
											::zpp_nape::geom::ZPP_Vec2 tmp23 = tmp22->head->elt;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1608)
											fst_vert = tmp23;
										}
										HX_STACK_LINE(1609)
										cnt = (int)1;
									}
									else{
										HX_STACK_LINE(1612)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1612)
										::zpp_nape::geom::ZPP_Vec2 tmp18 = tmp17->head->elt;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1612)
										::zpp_nape::geom::ZPP_Vec2 a = tmp18;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1613)
										::zpp_nape::geom::ZPP_Vec2 b = ite1;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1614)
										::zpp_nape::geom::ZPP_Vec2 u = ite2;		HX_STACK_VAR(u,"u");
										HX_STACK_LINE(1615)
										::zpp_nape::geom::ZPP_Vec2 itm = ite2->next;		HX_STACK_VAR(itm,"itm");
										HX_STACK_LINE(1616)
										bool tmp19 = (itm == null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1616)
										if ((tmp19)){
											HX_STACK_LINE(1616)
											::zpp_nape::geom::ZPP_Vec2 tmp20 = s2->polygon->gverts;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1616)
											itm = tmp20->next;
										}
										HX_STACK_LINE(1617)
										Float max = ((Float)-1.0);		HX_STACK_VAR(max,"max");
										HX_STACK_LINE(1618)
										::zpp_nape::geom::ZPP_Vec2 itmo = null();		HX_STACK_VAR(itmo,"itmo");
										HX_STACK_LINE(1619)
										int indo = (int)0;		HX_STACK_VAR(indo,"indo");
										HX_STACK_LINE(1620)
										int icnt = (int)0;		HX_STACK_VAR(icnt,"icnt");
										HX_STACK_LINE(1621)
										{
											HX_STACK_LINE(1622)
											::zpp_nape::geom::ZPP_Vec2 beg_ite = itm;		HX_STACK_VAR(beg_ite,"beg_ite");
											HX_STACK_LINE(1623)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = itm;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(1624)
											while((true)){
												HX_STACK_LINE(1625)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(1626)
												{
													HX_STACK_LINE(1627)
													Float t = ((Float)0.0);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(1628)
													bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1628)
													{
														HX_STACK_LINE(1629)
														Float _sx = ((Float)0.0);		HX_STACK_VAR(_sx,"_sx");
														HX_STACK_LINE(1630)
														Float _sy = ((Float)0.0);		HX_STACK_VAR(_sy,"_sy");
														HX_STACK_LINE(1631)
														{
															HX_STACK_LINE(1632)
															Float tmp21 = (u->x - a->x);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(1632)
															_sx = tmp21;
															HX_STACK_LINE(1633)
															Float tmp22 = (u->y - a->y);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1633)
															_sy = tmp22;
														}
														HX_STACK_LINE(1635)
														Float _vx = ((Float)0.0);		HX_STACK_VAR(_vx,"_vx");
														HX_STACK_LINE(1636)
														Float _vy = ((Float)0.0);		HX_STACK_VAR(_vy,"_vy");
														HX_STACK_LINE(1637)
														{
															HX_STACK_LINE(1638)
															Float tmp21 = (v->x - u->x);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(1638)
															_vx = tmp21;
															HX_STACK_LINE(1639)
															Float tmp22 = (v->y - u->y);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1639)
															_vy = tmp22;
														}
														HX_STACK_LINE(1641)
														Float _qx = ((Float)0.0);		HX_STACK_VAR(_qx,"_qx");
														HX_STACK_LINE(1642)
														Float _qy = ((Float)0.0);		HX_STACK_VAR(_qy,"_qy");
														HX_STACK_LINE(1643)
														{
															HX_STACK_LINE(1644)
															Float tmp21 = (b->x - a->x);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(1644)
															_qx = tmp21;
															HX_STACK_LINE(1645)
															Float tmp22 = (b->y - a->y);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1645)
															_qy = tmp22;
														}
														HX_STACK_LINE(1647)
														Float tmp21 = (_vy * _qx);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1647)
														Float tmp22 = (_vx * _qy);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(1647)
														Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1647)
														Float den = tmp23;		HX_STACK_VAR(den,"den");
														HX_STACK_LINE(1648)
														Float tmp24 = (den * den);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1648)
														Float tmp25 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1648)
														Float tmp26 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1648)
														Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1648)
														bool tmp28 = (tmp24 > tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1648)
														if ((tmp28)){
															HX_STACK_LINE(1649)
															Float tmp29 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1649)
															den = tmp29;
															HX_STACK_LINE(1650)
															Float tmp30 = (_qy * _sx);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1650)
															Float tmp31 = (_qx * _sy);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1650)
															Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1650)
															Float tmp33 = den;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1650)
															Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1650)
															Float txx = tmp34;		HX_STACK_VAR(txx,"txx");
															HX_STACK_LINE(1651)
															Float tmp35 = txx;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1651)
															Float tmp36 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1651)
															bool tmp37 = (tmp35 > tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1651)
															bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(1651)
															if ((tmp37)){
																HX_STACK_LINE(1651)
																Float tmp39 = txx;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1651)
																Float tmp40 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1651)
																Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1651)
																Float tmp42 = ((int)1 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1651)
																Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(1651)
																tmp38 = (tmp39 < tmp43);
															}
															else{
																HX_STACK_LINE(1651)
																tmp38 = false;
															}
															HX_STACK_LINE(1651)
															if ((tmp38)){
																HX_STACK_LINE(1652)
																Float tmp39 = (_vy * _sx);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1652)
																Float tmp40 = (_vx * _sy);		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1652)
																Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1652)
																Float tmp42 = den;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1652)
																Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(1652)
																Float sxx = tmp43;		HX_STACK_VAR(sxx,"sxx");
																HX_STACK_LINE(1653)
																Float tmp44 = sxx;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(1653)
																Float tmp45 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(1653)
																bool tmp46 = (tmp44 > tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(1653)
																bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(1653)
																if ((tmp46)){
																	HX_STACK_LINE(1653)
																	Float tmp48 = sxx;		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(1653)
																	Float tmp49 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(1653)
																	Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(1653)
																	Float tmp51 = ((int)1 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(1653)
																	Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(1653)
																	tmp47 = (tmp48 < tmp52);
																}
																else{
																	HX_STACK_LINE(1653)
																	tmp47 = false;
																}
																HX_STACK_LINE(1653)
																if ((tmp47)){
																	HX_STACK_LINE(1654)
																	t = txx;
																	HX_STACK_LINE(1655)
																	tmp20 = true;
																}
																else{
																	HX_STACK_LINE(1657)
																	tmp20 = false;
																}
															}
															else{
																HX_STACK_LINE(1659)
																tmp20 = false;
															}
														}
														else{
															HX_STACK_LINE(1661)
															tmp20 = false;
														}
													}
													HX_STACK_LINE(1628)
													if ((tmp20)){
														HX_STACK_LINE(1663)
														bool tmp21 = (t >= max);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1663)
														if ((tmp21)){
															HX_STACK_LINE(1664)
															itmo = ite2;
															HX_STACK_LINE(1665)
															indo = ind2;
															HX_STACK_LINE(1666)
															int tmp22 = ++(icnt);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1666)
															int tmp23 = cnt;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1666)
															bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1666)
															if ((tmp24)){
																HX_STACK_LINE(1667)
																max = t;
																HX_STACK_LINE(1668)
																{
																	HX_STACK_LINE(1669)
																	cx_ite = beg_ite;
																	HX_STACK_LINE(1670)
																	break;
																}
															}
															else{
																HX_STACK_LINE(1673)
																max = t;
															}
														}
													}
													HX_STACK_LINE(1676)
													u = v;
													HX_STACK_LINE(1677)
													ite2 = cx_ite;
													HX_STACK_LINE(1678)
													(ind2)++;
													HX_STACK_LINE(1679)
													int tmp21 = ind2;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1679)
													int tmp22 = s2->polygon->edgeCnt;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1679)
													bool tmp23 = (tmp21 >= tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1679)
													if ((tmp23)){
														HX_STACK_LINE(1679)
														ind2 = (int)0;
													}
												}
												HX_STACK_LINE(1681)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(1682)
												bool tmp20 = (cx_ite == null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1682)
												if ((tmp20)){
													HX_STACK_LINE(1682)
													::zpp_nape::geom::ZPP_Vec2 tmp21 = s2->polygon->gverts;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1682)
													cx_ite = tmp21->next;
												}
												HX_STACK_LINE(1684)
												bool tmp21 = true;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1624)
												if ((tmp21)){
													HX_STACK_LINE(1624)
													break;
												}
											}
											HX_STACK_LINE(1685)
											while((true)){
												HX_STACK_LINE(1685)
												bool tmp20 = (cx_ite != beg_ite);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1685)
												bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1685)
												if ((tmp21)){
													HX_STACK_LINE(1685)
													break;
												}
												HX_STACK_LINE(1686)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(1687)
												{
													HX_STACK_LINE(1688)
													Float t = ((Float)0.0);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(1689)
													bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1689)
													{
														HX_STACK_LINE(1690)
														Float _sx = ((Float)0.0);		HX_STACK_VAR(_sx,"_sx");
														HX_STACK_LINE(1691)
														Float _sy = ((Float)0.0);		HX_STACK_VAR(_sy,"_sy");
														HX_STACK_LINE(1692)
														{
															HX_STACK_LINE(1693)
															Float tmp23 = (u->x - a->x);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1693)
															_sx = tmp23;
															HX_STACK_LINE(1694)
															Float tmp24 = (u->y - a->y);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1694)
															_sy = tmp24;
														}
														HX_STACK_LINE(1696)
														Float _vx = ((Float)0.0);		HX_STACK_VAR(_vx,"_vx");
														HX_STACK_LINE(1697)
														Float _vy = ((Float)0.0);		HX_STACK_VAR(_vy,"_vy");
														HX_STACK_LINE(1698)
														{
															HX_STACK_LINE(1699)
															Float tmp23 = (v->x - u->x);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1699)
															_vx = tmp23;
															HX_STACK_LINE(1700)
															Float tmp24 = (v->y - u->y);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1700)
															_vy = tmp24;
														}
														HX_STACK_LINE(1702)
														Float _qx = ((Float)0.0);		HX_STACK_VAR(_qx,"_qx");
														HX_STACK_LINE(1703)
														Float _qy = ((Float)0.0);		HX_STACK_VAR(_qy,"_qy");
														HX_STACK_LINE(1704)
														{
															HX_STACK_LINE(1705)
															Float tmp23 = (b->x - a->x);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1705)
															_qx = tmp23;
															HX_STACK_LINE(1706)
															Float tmp24 = (b->y - a->y);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1706)
															_qy = tmp24;
														}
														HX_STACK_LINE(1708)
														Float tmp23 = (_vy * _qx);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1708)
														Float tmp24 = (_vx * _qy);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1708)
														Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1708)
														Float den = tmp25;		HX_STACK_VAR(den,"den");
														HX_STACK_LINE(1709)
														Float tmp26 = (den * den);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1709)
														Float tmp27 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1709)
														Float tmp28 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1709)
														Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1709)
														bool tmp30 = (tmp26 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1709)
														if ((tmp30)){
															HX_STACK_LINE(1710)
															Float tmp31 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1710)
															den = tmp31;
															HX_STACK_LINE(1711)
															Float tmp32 = (_qy * _sx);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1711)
															Float tmp33 = (_qx * _sy);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1711)
															Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1711)
															Float tmp35 = den;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1711)
															Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1711)
															Float txx = tmp36;		HX_STACK_VAR(txx,"txx");
															HX_STACK_LINE(1712)
															Float tmp37 = txx;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1712)
															Float tmp38 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(1712)
															bool tmp39 = (tmp37 > tmp38);		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(1712)
															bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(1712)
															if ((tmp39)){
																HX_STACK_LINE(1712)
																Float tmp41 = txx;		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1712)
																Float tmp42 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1712)
																Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(1712)
																Float tmp44 = ((int)1 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(1712)
																Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(1712)
																tmp40 = (tmp41 < tmp45);
															}
															else{
																HX_STACK_LINE(1712)
																tmp40 = false;
															}
															HX_STACK_LINE(1712)
															if ((tmp40)){
																HX_STACK_LINE(1713)
																Float tmp41 = (_vy * _sx);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1713)
																Float tmp42 = (_vx * _sy);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1713)
																Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(1713)
																Float tmp44 = den;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(1713)
																Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(1713)
																Float sxx = tmp45;		HX_STACK_VAR(sxx,"sxx");
																HX_STACK_LINE(1714)
																Float tmp46 = sxx;		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(1714)
																Float tmp47 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(1714)
																bool tmp48 = (tmp46 > tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(1714)
																bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(1714)
																if ((tmp48)){
																	HX_STACK_LINE(1714)
																	Float tmp50 = sxx;		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(1714)
																	Float tmp51 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(1714)
																	Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(1714)
																	Float tmp53 = ((int)1 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(1714)
																	Float tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(1714)
																	tmp49 = (tmp50 < tmp54);
																}
																else{
																	HX_STACK_LINE(1714)
																	tmp49 = false;
																}
																HX_STACK_LINE(1714)
																if ((tmp49)){
																	HX_STACK_LINE(1715)
																	t = txx;
																	HX_STACK_LINE(1716)
																	tmp22 = true;
																}
																else{
																	HX_STACK_LINE(1718)
																	tmp22 = false;
																}
															}
															else{
																HX_STACK_LINE(1720)
																tmp22 = false;
															}
														}
														else{
															HX_STACK_LINE(1722)
															tmp22 = false;
														}
													}
													HX_STACK_LINE(1689)
													if ((tmp22)){
														HX_STACK_LINE(1724)
														bool tmp23 = (t >= max);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1724)
														if ((tmp23)){
															HX_STACK_LINE(1725)
															itmo = ite2;
															HX_STACK_LINE(1726)
															indo = ind2;
															HX_STACK_LINE(1727)
															int tmp24 = ++(icnt);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1727)
															int tmp25 = cnt;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(1727)
															bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(1727)
															if ((tmp26)){
																HX_STACK_LINE(1728)
																max = t;
																HX_STACK_LINE(1729)
																{
																	HX_STACK_LINE(1730)
																	cx_ite = beg_ite;
																	HX_STACK_LINE(1731)
																	break;
																}
															}
															else{
																HX_STACK_LINE(1734)
																max = t;
															}
														}
													}
													HX_STACK_LINE(1737)
													u = v;
													HX_STACK_LINE(1738)
													ite2 = cx_ite;
													HX_STACK_LINE(1739)
													(ind2)++;
													HX_STACK_LINE(1740)
													int tmp23 = ind2;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1740)
													int tmp24 = s2->polygon->edgeCnt;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1740)
													bool tmp25 = (tmp23 >= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1740)
													if ((tmp25)){
														HX_STACK_LINE(1740)
														ind2 = (int)0;
													}
												}
												HX_STACK_LINE(1742)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(1743)
												bool tmp22 = (cx_ite == null());		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1743)
												if ((tmp22)){
													HX_STACK_LINE(1743)
													::zpp_nape::geom::ZPP_Vec2 tmp23 = s2->polygon->gverts;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1743)
													cx_ite = tmp23->next;
												}
											}
										}
										HX_STACK_LINE(1746)
										bool tmp20 = (itmo == null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1746)
										if ((tmp20)){
											HX_STACK_LINE(1746)
											break;
										}
										HX_STACK_LINE(1747)
										::zpp_nape::geom::ZPP_Vec2 u1 = itmo;		HX_STACK_VAR(u1,"u1");
										HX_STACK_LINE(1748)
										::zpp_nape::geom::ZPP_Vec2 itm2 = itmo->next;		HX_STACK_VAR(itm2,"itm2");
										HX_STACK_LINE(1749)
										bool tmp21 = (itm2 == null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1749)
										if ((tmp21)){
											HX_STACK_LINE(1749)
											::zpp_nape::geom::ZPP_Vec2 tmp22 = s2->polygon->gverts;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1749)
											itm2 = tmp22->next;
										}
										HX_STACK_LINE(1750)
										::zpp_nape::geom::ZPP_Vec2 v = itm2;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1751)
										Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
										HX_STACK_LINE(1752)
										Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
										HX_STACK_LINE(1753)
										{
											HX_STACK_LINE(1754)
											Float T = max;		HX_STACK_VAR(T,"T");
											HX_STACK_LINE(1763)
											Float tmp22 = u1->x;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1763)
											Float tmp23 = (v->x - u1->x);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1763)
											Float tmp24 = T;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1763)
											Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1763)
											Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1763)
											cx = tmp26;
											HX_STACK_LINE(1764)
											Float tmp27 = u1->y;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1764)
											Float tmp28 = (v->y - u1->y);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1764)
											Float tmp29 = T;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1764)
											Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1764)
											Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1764)
											cy = tmp31;
										}
										HX_STACK_LINE(1766)
										bool tmp22 = (fst_vert != null());		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1766)
										bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1766)
										if ((tmp22)){
											HX_STACK_LINE(1766)
											Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1766)
											{
												HX_STACK_LINE(1766)
												Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
												HX_STACK_LINE(1766)
												Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
												HX_STACK_LINE(1766)
												{
													HX_STACK_LINE(1766)
													Float tmp25 = (cx - fst_vert->x);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1766)
													Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1766)
													dx = tmp26;
													HX_STACK_LINE(1766)
													Float tmp27 = (cy - fst_vert->y);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1766)
													Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1766)
													dy = tmp28;
												}
												HX_STACK_LINE(1766)
												Float tmp25 = (dx * dx);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1766)
												Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1766)
												Float tmp27 = (dy * dy);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1766)
												Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1766)
												Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1766)
												tmp24 = tmp29;
											}
											HX_STACK_LINE(1766)
											Float tmp25 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1766)
											Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1766)
											tmp23 = (tmp24 < tmp26);
										}
										else{
											HX_STACK_LINE(1766)
											tmp23 = false;
										}
										HX_STACK_LINE(1766)
										if ((tmp23)){
											HX_STACK_LINE(1766)
											break;
										}
										HX_STACK_LINE(1767)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp24 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1767)
										::zpp_nape::geom::ZPP_Vec2 tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1767)
										{
											HX_STACK_LINE(1767)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1767)
											::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1767)
											{
												HX_STACK_LINE(1767)
												::zpp_nape::geom::ZPP_Vec2 tmp26 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1767)
												bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1767)
												if ((tmp27)){
													HX_STACK_LINE(1767)
													::zpp_nape::geom::ZPP_Vec2 tmp28 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1767)
													ret = tmp28;
												}
												else{
													HX_STACK_LINE(1767)
													::zpp_nape::geom::ZPP_Vec2 tmp28 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1767)
													ret = tmp28;
													HX_STACK_LINE(1767)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
													HX_STACK_LINE(1767)
													ret->next = null();
												}
												HX_STACK_LINE(1767)
												ret->weak = false;
											}
											HX_STACK_LINE(1767)
											ret->_immutable = immutable;
											HX_STACK_LINE(1767)
											{
												HX_STACK_LINE(1767)
												ret->x = cx;
												HX_STACK_LINE(1767)
												ret->y = cy;
												HX_STACK_LINE(1767)
												{
												}
											}
											HX_STACK_LINE(1767)
											tmp25 = ret;
										}
										HX_STACK_LINE(1767)
										tmp24->add(tmp25);
										HX_STACK_LINE(1768)
										bool tmp26 = (fst_vert == null());		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1768)
										if ((tmp26)){
											HX_STACK_LINE(1768)
											::zpp_nape::util::ZNPList_ZPP_Vec2 tmp27 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1768)
											::zpp_nape::geom::ZPP_Vec2 tmp28 = tmp27->head->elt;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1768)
											fst_vert = tmp28;
										}
										HX_STACK_LINE(1769)
										ite2 = itmo;
										HX_STACK_LINE(1770)
										ind2 = indo;
										HX_STACK_LINE(1771)
										bool tmp27 = poly1;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1771)
										bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1771)
										poly1 = tmp28;
										HX_STACK_LINE(1772)
										cnt = (int)2;
									}
								}
								else{
									HX_STACK_LINE(1776)
									ite2 = ite2->next;
									HX_STACK_LINE(1777)
									(ind2)++;
									HX_STACK_LINE(1778)
									bool tmp14 = (ite2 == null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1778)
									if ((tmp14)){
										HX_STACK_LINE(1779)
										::zpp_nape::geom::ZPP_Vec2 tmp15 = s2->polygon->gverts;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1779)
										ite2 = tmp15->next;
										HX_STACK_LINE(1780)
										ind2 = (int)0;
									}
									HX_STACK_LINE(1782)
									bool tmp15 = out2->__get(ind2);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1782)
									bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1782)
									if ((tmp16)){
										HX_STACK_LINE(1783)
										::zpp_nape::geom::ZPP_Vec2 ex = ite2;		HX_STACK_VAR(ex,"ex");
										HX_STACK_LINE(1784)
										bool tmp17 = (fst_vert != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1784)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1784)
										if ((tmp17)){
											HX_STACK_LINE(1784)
											Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1784)
											{
												HX_STACK_LINE(1784)
												Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
												HX_STACK_LINE(1784)
												Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
												HX_STACK_LINE(1784)
												{
													HX_STACK_LINE(1784)
													Float tmp20 = (ex->x - fst_vert->x);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1784)
													Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1784)
													dx = tmp21;
													HX_STACK_LINE(1784)
													Float tmp22 = (ex->y - fst_vert->y);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1784)
													Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1784)
													dy = tmp23;
												}
												HX_STACK_LINE(1784)
												Float tmp20 = (dx * dx);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1784)
												Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1784)
												Float tmp22 = (dy * dy);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1784)
												Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1784)
												Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1784)
												tmp19 = tmp24;
											}
											HX_STACK_LINE(1784)
											Float tmp20 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1784)
											Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1784)
											tmp18 = (tmp19 < tmp21);
										}
										else{
											HX_STACK_LINE(1784)
											tmp18 = false;
										}
										HX_STACK_LINE(1784)
										if ((tmp18)){
											HX_STACK_LINE(1784)
											break;
										}
										HX_STACK_LINE(1785)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1785)
										::zpp_nape::geom::ZPP_Vec2 tmp20 = ex;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1785)
										tmp19->add(tmp20);
										HX_STACK_LINE(1786)
										bool tmp21 = (fst_vert == null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1786)
										if ((tmp21)){
											HX_STACK_LINE(1786)
											::zpp_nape::util::ZNPList_ZPP_Vec2 tmp22 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1786)
											::zpp_nape::geom::ZPP_Vec2 tmp23 = tmp22->head->elt;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1786)
											fst_vert = tmp23;
										}
										HX_STACK_LINE(1787)
										cnt = (int)1;
									}
									else{
										HX_STACK_LINE(1790)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1790)
										::zpp_nape::geom::ZPP_Vec2 tmp18 = tmp17->head->elt;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1790)
										::zpp_nape::geom::ZPP_Vec2 a = tmp18;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1791)
										::zpp_nape::geom::ZPP_Vec2 b = ite2;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1792)
										::zpp_nape::geom::ZPP_Vec2 u = ite1;		HX_STACK_VAR(u,"u");
										HX_STACK_LINE(1793)
										::zpp_nape::geom::ZPP_Vec2 itm = ite1->next;		HX_STACK_VAR(itm,"itm");
										HX_STACK_LINE(1794)
										bool tmp19 = (itm == null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1794)
										if ((tmp19)){
											HX_STACK_LINE(1794)
											::zpp_nape::geom::ZPP_Vec2 tmp20 = s1->polygon->gverts;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1794)
											itm = tmp20->next;
										}
										HX_STACK_LINE(1795)
										Float max = ((Float)-1.0);		HX_STACK_VAR(max,"max");
										HX_STACK_LINE(1796)
										::zpp_nape::geom::ZPP_Vec2 itmo = null();		HX_STACK_VAR(itmo,"itmo");
										HX_STACK_LINE(1797)
										int indo = (int)0;		HX_STACK_VAR(indo,"indo");
										HX_STACK_LINE(1798)
										int icnt = (int)0;		HX_STACK_VAR(icnt,"icnt");
										HX_STACK_LINE(1799)
										{
											HX_STACK_LINE(1800)
											::zpp_nape::geom::ZPP_Vec2 beg_ite = itm;		HX_STACK_VAR(beg_ite,"beg_ite");
											HX_STACK_LINE(1801)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = itm;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(1802)
											while((true)){
												HX_STACK_LINE(1803)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(1804)
												{
													HX_STACK_LINE(1805)
													Float t = ((Float)0.0);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(1806)
													bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1806)
													{
														HX_STACK_LINE(1807)
														Float _sx = ((Float)0.0);		HX_STACK_VAR(_sx,"_sx");
														HX_STACK_LINE(1808)
														Float _sy = ((Float)0.0);		HX_STACK_VAR(_sy,"_sy");
														HX_STACK_LINE(1809)
														{
															HX_STACK_LINE(1810)
															Float tmp21 = (u->x - a->x);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(1810)
															_sx = tmp21;
															HX_STACK_LINE(1811)
															Float tmp22 = (u->y - a->y);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1811)
															_sy = tmp22;
														}
														HX_STACK_LINE(1813)
														Float _vx = ((Float)0.0);		HX_STACK_VAR(_vx,"_vx");
														HX_STACK_LINE(1814)
														Float _vy = ((Float)0.0);		HX_STACK_VAR(_vy,"_vy");
														HX_STACK_LINE(1815)
														{
															HX_STACK_LINE(1816)
															Float tmp21 = (v->x - u->x);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(1816)
															_vx = tmp21;
															HX_STACK_LINE(1817)
															Float tmp22 = (v->y - u->y);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1817)
															_vy = tmp22;
														}
														HX_STACK_LINE(1819)
														Float _qx = ((Float)0.0);		HX_STACK_VAR(_qx,"_qx");
														HX_STACK_LINE(1820)
														Float _qy = ((Float)0.0);		HX_STACK_VAR(_qy,"_qy");
														HX_STACK_LINE(1821)
														{
															HX_STACK_LINE(1822)
															Float tmp21 = (b->x - a->x);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(1822)
															_qx = tmp21;
															HX_STACK_LINE(1823)
															Float tmp22 = (b->y - a->y);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1823)
															_qy = tmp22;
														}
														HX_STACK_LINE(1825)
														Float tmp21 = (_vy * _qx);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1825)
														Float tmp22 = (_vx * _qy);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(1825)
														Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1825)
														Float den = tmp23;		HX_STACK_VAR(den,"den");
														HX_STACK_LINE(1826)
														Float tmp24 = (den * den);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1826)
														Float tmp25 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1826)
														Float tmp26 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1826)
														Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1826)
														bool tmp28 = (tmp24 > tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1826)
														if ((tmp28)){
															HX_STACK_LINE(1827)
															Float tmp29 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1827)
															den = tmp29;
															HX_STACK_LINE(1828)
															Float tmp30 = (_qy * _sx);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1828)
															Float tmp31 = (_qx * _sy);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1828)
															Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1828)
															Float tmp33 = den;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1828)
															Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1828)
															Float txx = tmp34;		HX_STACK_VAR(txx,"txx");
															HX_STACK_LINE(1829)
															Float tmp35 = txx;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1829)
															Float tmp36 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1829)
															bool tmp37 = (tmp35 > tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1829)
															bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(1829)
															if ((tmp37)){
																HX_STACK_LINE(1829)
																Float tmp39 = txx;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1829)
																Float tmp40 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1829)
																Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1829)
																Float tmp42 = ((int)1 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1829)
																Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(1829)
																tmp38 = (tmp39 < tmp43);
															}
															else{
																HX_STACK_LINE(1829)
																tmp38 = false;
															}
															HX_STACK_LINE(1829)
															if ((tmp38)){
																HX_STACK_LINE(1830)
																Float tmp39 = (_vy * _sx);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(1830)
																Float tmp40 = (_vx * _sy);		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(1830)
																Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1830)
																Float tmp42 = den;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1830)
																Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(1830)
																Float sxx = tmp43;		HX_STACK_VAR(sxx,"sxx");
																HX_STACK_LINE(1831)
																Float tmp44 = sxx;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(1831)
																Float tmp45 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(1831)
																bool tmp46 = (tmp44 > tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(1831)
																bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(1831)
																if ((tmp46)){
																	HX_STACK_LINE(1831)
																	Float tmp48 = sxx;		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(1831)
																	Float tmp49 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(1831)
																	Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(1831)
																	Float tmp51 = ((int)1 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(1831)
																	Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(1831)
																	tmp47 = (tmp48 < tmp52);
																}
																else{
																	HX_STACK_LINE(1831)
																	tmp47 = false;
																}
																HX_STACK_LINE(1831)
																if ((tmp47)){
																	HX_STACK_LINE(1832)
																	t = txx;
																	HX_STACK_LINE(1833)
																	tmp20 = true;
																}
																else{
																	HX_STACK_LINE(1835)
																	tmp20 = false;
																}
															}
															else{
																HX_STACK_LINE(1837)
																tmp20 = false;
															}
														}
														else{
															HX_STACK_LINE(1839)
															tmp20 = false;
														}
													}
													HX_STACK_LINE(1806)
													if ((tmp20)){
														HX_STACK_LINE(1841)
														bool tmp21 = (t >= max);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1841)
														if ((tmp21)){
															HX_STACK_LINE(1842)
															itmo = ite1;
															HX_STACK_LINE(1843)
															indo = ind1;
															HX_STACK_LINE(1844)
															int tmp22 = ++(icnt);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1844)
															int tmp23 = cnt;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1844)
															bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1844)
															if ((tmp24)){
																HX_STACK_LINE(1845)
																max = t;
																HX_STACK_LINE(1846)
																{
																	HX_STACK_LINE(1847)
																	cx_ite = beg_ite;
																	HX_STACK_LINE(1848)
																	break;
																}
															}
															else{
																HX_STACK_LINE(1851)
																max = t;
															}
														}
													}
													HX_STACK_LINE(1854)
													u = v;
													HX_STACK_LINE(1855)
													ite1 = cx_ite;
													HX_STACK_LINE(1856)
													(ind1)++;
													HX_STACK_LINE(1857)
													int tmp21 = ind1;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1857)
													int tmp22 = s1->polygon->edgeCnt;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1857)
													bool tmp23 = (tmp21 >= tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1857)
													if ((tmp23)){
														HX_STACK_LINE(1857)
														ind1 = (int)0;
													}
												}
												HX_STACK_LINE(1859)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(1860)
												bool tmp20 = (cx_ite == null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1860)
												if ((tmp20)){
													HX_STACK_LINE(1860)
													::zpp_nape::geom::ZPP_Vec2 tmp21 = s1->polygon->gverts;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1860)
													cx_ite = tmp21->next;
												}
												HX_STACK_LINE(1862)
												bool tmp21 = true;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1802)
												if ((tmp21)){
													HX_STACK_LINE(1802)
													break;
												}
											}
											HX_STACK_LINE(1863)
											while((true)){
												HX_STACK_LINE(1863)
												bool tmp20 = (cx_ite != beg_ite);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1863)
												bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1863)
												if ((tmp21)){
													HX_STACK_LINE(1863)
													break;
												}
												HX_STACK_LINE(1864)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(1865)
												{
													HX_STACK_LINE(1866)
													Float t = ((Float)0.0);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(1867)
													bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1867)
													{
														HX_STACK_LINE(1868)
														Float _sx = ((Float)0.0);		HX_STACK_VAR(_sx,"_sx");
														HX_STACK_LINE(1869)
														Float _sy = ((Float)0.0);		HX_STACK_VAR(_sy,"_sy");
														HX_STACK_LINE(1870)
														{
															HX_STACK_LINE(1871)
															Float tmp23 = (u->x - a->x);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1871)
															_sx = tmp23;
															HX_STACK_LINE(1872)
															Float tmp24 = (u->y - a->y);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1872)
															_sy = tmp24;
														}
														HX_STACK_LINE(1874)
														Float _vx = ((Float)0.0);		HX_STACK_VAR(_vx,"_vx");
														HX_STACK_LINE(1875)
														Float _vy = ((Float)0.0);		HX_STACK_VAR(_vy,"_vy");
														HX_STACK_LINE(1876)
														{
															HX_STACK_LINE(1877)
															Float tmp23 = (v->x - u->x);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1877)
															_vx = tmp23;
															HX_STACK_LINE(1878)
															Float tmp24 = (v->y - u->y);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1878)
															_vy = tmp24;
														}
														HX_STACK_LINE(1880)
														Float _qx = ((Float)0.0);		HX_STACK_VAR(_qx,"_qx");
														HX_STACK_LINE(1881)
														Float _qy = ((Float)0.0);		HX_STACK_VAR(_qy,"_qy");
														HX_STACK_LINE(1882)
														{
															HX_STACK_LINE(1883)
															Float tmp23 = (b->x - a->x);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1883)
															_qx = tmp23;
															HX_STACK_LINE(1884)
															Float tmp24 = (b->y - a->y);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1884)
															_qy = tmp24;
														}
														HX_STACK_LINE(1886)
														Float tmp23 = (_vy * _qx);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1886)
														Float tmp24 = (_vx * _qy);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1886)
														Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1886)
														Float den = tmp25;		HX_STACK_VAR(den,"den");
														HX_STACK_LINE(1887)
														Float tmp26 = (den * den);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1887)
														Float tmp27 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1887)
														Float tmp28 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1887)
														Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1887)
														bool tmp30 = (tmp26 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1887)
														if ((tmp30)){
															HX_STACK_LINE(1888)
															Float tmp31 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1888)
															den = tmp31;
															HX_STACK_LINE(1889)
															Float tmp32 = (_qy * _sx);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1889)
															Float tmp33 = (_qx * _sy);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1889)
															Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1889)
															Float tmp35 = den;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1889)
															Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(1889)
															Float txx = tmp36;		HX_STACK_VAR(txx,"txx");
															HX_STACK_LINE(1890)
															Float tmp37 = txx;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(1890)
															Float tmp38 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(1890)
															bool tmp39 = (tmp37 > tmp38);		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(1890)
															bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(1890)
															if ((tmp39)){
																HX_STACK_LINE(1890)
																Float tmp41 = txx;		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1890)
																Float tmp42 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1890)
																Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(1890)
																Float tmp44 = ((int)1 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(1890)
																Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(1890)
																tmp40 = (tmp41 < tmp45);
															}
															else{
																HX_STACK_LINE(1890)
																tmp40 = false;
															}
															HX_STACK_LINE(1890)
															if ((tmp40)){
																HX_STACK_LINE(1891)
																Float tmp41 = (_vy * _sx);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(1891)
																Float tmp42 = (_vx * _sy);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(1891)
																Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(1891)
																Float tmp44 = den;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(1891)
																Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(1891)
																Float sxx = tmp45;		HX_STACK_VAR(sxx,"sxx");
																HX_STACK_LINE(1892)
																Float tmp46 = sxx;		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(1892)
																Float tmp47 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(1892)
																bool tmp48 = (tmp46 > tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(1892)
																bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(1892)
																if ((tmp48)){
																	HX_STACK_LINE(1892)
																	Float tmp50 = sxx;		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(1892)
																	Float tmp51 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(1892)
																	Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(1892)
																	Float tmp53 = ((int)1 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(1892)
																	Float tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(1892)
																	tmp49 = (tmp50 < tmp54);
																}
																else{
																	HX_STACK_LINE(1892)
																	tmp49 = false;
																}
																HX_STACK_LINE(1892)
																if ((tmp49)){
																	HX_STACK_LINE(1893)
																	t = txx;
																	HX_STACK_LINE(1894)
																	tmp22 = true;
																}
																else{
																	HX_STACK_LINE(1896)
																	tmp22 = false;
																}
															}
															else{
																HX_STACK_LINE(1898)
																tmp22 = false;
															}
														}
														else{
															HX_STACK_LINE(1900)
															tmp22 = false;
														}
													}
													HX_STACK_LINE(1867)
													if ((tmp22)){
														HX_STACK_LINE(1902)
														bool tmp23 = (t >= max);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1902)
														if ((tmp23)){
															HX_STACK_LINE(1903)
															itmo = ite1;
															HX_STACK_LINE(1904)
															indo = ind1;
															HX_STACK_LINE(1905)
															int tmp24 = ++(icnt);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1905)
															int tmp25 = cnt;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(1905)
															bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(1905)
															if ((tmp26)){
																HX_STACK_LINE(1906)
																max = t;
																HX_STACK_LINE(1907)
																{
																	HX_STACK_LINE(1908)
																	cx_ite = beg_ite;
																	HX_STACK_LINE(1909)
																	break;
																}
															}
															else{
																HX_STACK_LINE(1912)
																max = t;
															}
														}
													}
													HX_STACK_LINE(1915)
													u = v;
													HX_STACK_LINE(1916)
													ite1 = cx_ite;
													HX_STACK_LINE(1917)
													(ind1)++;
													HX_STACK_LINE(1918)
													int tmp23 = ind1;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1918)
													int tmp24 = s1->polygon->edgeCnt;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1918)
													bool tmp25 = (tmp23 >= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1918)
													if ((tmp25)){
														HX_STACK_LINE(1918)
														ind1 = (int)0;
													}
												}
												HX_STACK_LINE(1920)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(1921)
												bool tmp22 = (cx_ite == null());		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1921)
												if ((tmp22)){
													HX_STACK_LINE(1921)
													::zpp_nape::geom::ZPP_Vec2 tmp23 = s1->polygon->gverts;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1921)
													cx_ite = tmp23->next;
												}
											}
										}
										HX_STACK_LINE(1924)
										bool tmp20 = (itmo == null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1924)
										if ((tmp20)){
											HX_STACK_LINE(1924)
											break;
										}
										HX_STACK_LINE(1925)
										::zpp_nape::geom::ZPP_Vec2 u1 = itmo;		HX_STACK_VAR(u1,"u1");
										HX_STACK_LINE(1926)
										::zpp_nape::geom::ZPP_Vec2 itm2 = itmo->next;		HX_STACK_VAR(itm2,"itm2");
										HX_STACK_LINE(1927)
										bool tmp21 = (itm2 == null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1927)
										if ((tmp21)){
											HX_STACK_LINE(1927)
											::zpp_nape::geom::ZPP_Vec2 tmp22 = s1->polygon->gverts;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1927)
											itm2 = tmp22->next;
										}
										HX_STACK_LINE(1928)
										::zpp_nape::geom::ZPP_Vec2 v = itm2;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1929)
										Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
										HX_STACK_LINE(1930)
										Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
										HX_STACK_LINE(1931)
										{
											HX_STACK_LINE(1932)
											Float T = max;		HX_STACK_VAR(T,"T");
											HX_STACK_LINE(1941)
											Float tmp22 = u1->x;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1941)
											Float tmp23 = (v->x - u1->x);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1941)
											Float tmp24 = T;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1941)
											Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1941)
											Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1941)
											cx = tmp26;
											HX_STACK_LINE(1942)
											Float tmp27 = u1->y;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1942)
											Float tmp28 = (v->y - u1->y);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1942)
											Float tmp29 = T;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1942)
											Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1942)
											Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1942)
											cy = tmp31;
										}
										HX_STACK_LINE(1944)
										bool tmp22 = (fst_vert != null());		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1944)
										bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1944)
										if ((tmp22)){
											HX_STACK_LINE(1944)
											Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1944)
											{
												HX_STACK_LINE(1944)
												Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
												HX_STACK_LINE(1944)
												Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
												HX_STACK_LINE(1944)
												{
													HX_STACK_LINE(1944)
													Float tmp25 = (cx - fst_vert->x);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1944)
													Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1944)
													dx = tmp26;
													HX_STACK_LINE(1944)
													Float tmp27 = (cy - fst_vert->y);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1944)
													Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1944)
													dy = tmp28;
												}
												HX_STACK_LINE(1944)
												Float tmp25 = (dx * dx);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1944)
												Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1944)
												Float tmp27 = (dy * dy);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1944)
												Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1944)
												Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1944)
												tmp24 = tmp29;
											}
											HX_STACK_LINE(1944)
											Float tmp25 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1944)
											Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1944)
											tmp23 = (tmp24 < tmp26);
										}
										else{
											HX_STACK_LINE(1944)
											tmp23 = false;
										}
										HX_STACK_LINE(1944)
										if ((tmp23)){
											HX_STACK_LINE(1944)
											break;
										}
										HX_STACK_LINE(1945)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp24 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1945)
										::zpp_nape::geom::ZPP_Vec2 tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1945)
										{
											HX_STACK_LINE(1945)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1945)
											::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1945)
											{
												HX_STACK_LINE(1945)
												::zpp_nape::geom::ZPP_Vec2 tmp26 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1945)
												bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1945)
												if ((tmp27)){
													HX_STACK_LINE(1945)
													::zpp_nape::geom::ZPP_Vec2 tmp28 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1945)
													ret = tmp28;
												}
												else{
													HX_STACK_LINE(1945)
													::zpp_nape::geom::ZPP_Vec2 tmp28 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1945)
													ret = tmp28;
													HX_STACK_LINE(1945)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
													HX_STACK_LINE(1945)
													ret->next = null();
												}
												HX_STACK_LINE(1945)
												ret->weak = false;
											}
											HX_STACK_LINE(1945)
											ret->_immutable = immutable;
											HX_STACK_LINE(1945)
											{
												HX_STACK_LINE(1945)
												ret->x = cx;
												HX_STACK_LINE(1945)
												ret->y = cy;
												HX_STACK_LINE(1945)
												{
												}
											}
											HX_STACK_LINE(1945)
											tmp25 = ret;
										}
										HX_STACK_LINE(1945)
										tmp24->add(tmp25);
										HX_STACK_LINE(1946)
										bool tmp26 = (fst_vert == null());		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1946)
										if ((tmp26)){
											HX_STACK_LINE(1946)
											::zpp_nape::util::ZNPList_ZPP_Vec2 tmp27 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1946)
											::zpp_nape::geom::ZPP_Vec2 tmp28 = tmp27->head->elt;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1946)
											fst_vert = tmp28;
										}
										HX_STACK_LINE(1947)
										ite1 = itmo;
										HX_STACK_LINE(1948)
										ind1 = indo;
										HX_STACK_LINE(1949)
										bool tmp27 = poly1;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1949)
										bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1949)
										poly1 = tmp28;
										HX_STACK_LINE(1950)
										cnt = (int)2;
									}
								}
							}
							HX_STACK_LINE(1954)
							::zpp_nape::util::ZNPList_ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1954)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp14 = tmp13->head;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1954)
							bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1954)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1954)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1954)
							if ((tmp16)){
								HX_STACK_LINE(1954)
								::zpp_nape::util::ZNPList_ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1954)
								::zpp_nape::util::ZNPList_ZPP_Vec2 tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1954)
								::zpp_nape::util::ZNPList_ZPP_Vec2 tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1954)
								::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp21 = tmp20->head->next;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1954)
								::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1954)
								::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1954)
								tmp17 = (tmp23 != null());
							}
							else{
								HX_STACK_LINE(1954)
								tmp17 = false;
							}
							HX_STACK_LINE(1954)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1954)
							if ((tmp17)){
								HX_STACK_LINE(1954)
								::zpp_nape::util::ZNPList_ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1954)
								::zpp_nape::util::ZNPList_ZPP_Vec2 tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1954)
								::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp21 = tmp20->head->next;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1954)
								::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1954)
								::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp23 = tmp22->next;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1954)
								tmp18 = (tmp23 != null());
							}
							else{
								HX_STACK_LINE(1954)
								tmp18 = false;
							}
							HX_STACK_LINE(1954)
							if ((tmp18)){
								HX_STACK_LINE(1955)
								Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(1956)
								Float COMx = ((Float)0.0);		HX_STACK_VAR(COMx,"COMx");
								HX_STACK_LINE(1957)
								Float COMy = ((Float)0.0);		HX_STACK_VAR(COMy,"COMy");
								HX_STACK_LINE(1958)
								{
									HX_STACK_LINE(1959)
									{
										HX_STACK_LINE(1960)
										COMx = (int)0;
										HX_STACK_LINE(1961)
										COMy = (int)0;
										HX_STACK_LINE(1970)
										{
										}
									}
									HX_STACK_LINE(1979)
									area = ((Float)0.0);
									HX_STACK_LINE(1980)
									{
										HX_STACK_LINE(1981)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1981)
										::zpp_nape::util::ZNPNode_ZPP_Vec2 cx_ite = tmp19->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(1982)
										::zpp_nape::geom::ZPP_Vec2 u = cx_ite->elt;		HX_STACK_VAR(u,"u");
										HX_STACK_LINE(1983)
										cx_ite = cx_ite->next;
										HX_STACK_LINE(1984)
										::zpp_nape::geom::ZPP_Vec2 v = cx_ite->elt;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1985)
										cx_ite = cx_ite->next;
										HX_STACK_LINE(1986)
										while((true)){
											HX_STACK_LINE(1986)
											bool tmp20 = (cx_ite != null());		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1986)
											bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1986)
											if ((tmp21)){
												HX_STACK_LINE(1986)
												break;
											}
											HX_STACK_LINE(1987)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite->elt;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(1988)
											{
												HX_STACK_LINE(1989)
												Float tmp22 = v->x;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1989)
												Float tmp23 = (w->y - u->y);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1989)
												Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1989)
												hx::AddEq(area,tmp24);
												HX_STACK_LINE(1990)
												Float tmp25 = (w->y * v->x);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1990)
												Float tmp26 = (w->x * v->y);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1990)
												Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1990)
												Float cf = tmp27;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(1991)
												Float tmp28 = (v->x + w->x);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1991)
												Float tmp29 = cf;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1991)
												Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1991)
												hx::AddEq(COMx,tmp30);
												HX_STACK_LINE(1992)
												Float tmp31 = (v->y + w->y);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1992)
												Float tmp32 = cf;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1992)
												Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1992)
												hx::AddEq(COMy,tmp33);
											}
											HX_STACK_LINE(1994)
											u = v;
											HX_STACK_LINE(1995)
											v = w;
											HX_STACK_LINE(1996)
											cx_ite = cx_ite->next;
										}
										HX_STACK_LINE(1998)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1998)
										cx_ite = tmp20->head;
										HX_STACK_LINE(1999)
										::zpp_nape::geom::ZPP_Vec2 w = cx_ite->elt;		HX_STACK_VAR(w,"w");
										HX_STACK_LINE(2000)
										{
											HX_STACK_LINE(2001)
											Float tmp21 = v->x;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(2001)
											Float tmp22 = (w->y - u->y);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(2001)
											Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(2001)
											hx::AddEq(area,tmp23);
											HX_STACK_LINE(2002)
											Float tmp24 = (w->y * v->x);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(2002)
											Float tmp25 = (w->x * v->y);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(2002)
											Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(2002)
											Float cf = tmp26;		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(2003)
											Float tmp27 = (v->x + w->x);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(2003)
											Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(2003)
											Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(2003)
											hx::AddEq(COMx,tmp29);
											HX_STACK_LINE(2004)
											Float tmp30 = (v->y + w->y);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(2004)
											Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(2004)
											Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(2004)
											hx::AddEq(COMy,tmp32);
										}
										HX_STACK_LINE(2006)
										u = v;
										HX_STACK_LINE(2007)
										v = w;
										HX_STACK_LINE(2008)
										cx_ite = cx_ite->next;
										HX_STACK_LINE(2009)
										::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite->elt;		HX_STACK_VAR(w1,"w1");
										HX_STACK_LINE(2010)
										{
											HX_STACK_LINE(2011)
											Float tmp21 = v->x;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(2011)
											Float tmp22 = (w1->y - u->y);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(2011)
											Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(2011)
											hx::AddEq(area,tmp23);
											HX_STACK_LINE(2012)
											Float tmp24 = (w1->y * v->x);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(2012)
											Float tmp25 = (w1->x * v->y);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(2012)
											Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(2012)
											Float cf = tmp26;		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(2013)
											Float tmp27 = (v->x + w1->x);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(2013)
											Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(2013)
											Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(2013)
											hx::AddEq(COMx,tmp29);
											HX_STACK_LINE(2014)
											Float tmp30 = (v->y + w1->y);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(2014)
											Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(2014)
											Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(2014)
											hx::AddEq(COMy,tmp32);
										}
									}
									HX_STACK_LINE(2017)
									hx::MultEq(area,((Float)0.5));
									HX_STACK_LINE(2018)
									Float tmp19 = ((int)6 * area);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2018)
									Float tmp20 = (Float((int)1) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(2018)
									Float ia = tmp20;		HX_STACK_VAR(ia,"ia");
									HX_STACK_LINE(2019)
									{
										HX_STACK_LINE(2020)
										Float t = ia;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(2029)
										hx::MultEq(COMx,t);
										HX_STACK_LINE(2030)
										hx::MultEq(COMy,t);
									}
								}
								HX_STACK_LINE(2033)
								{
									HX_STACK_LINE(2033)
									Float tmp19 = area;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2033)
									Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(2033)
									arb->overlap = tmp20;
									HX_STACK_LINE(2033)
									{
										HX_STACK_LINE(2033)
										arb->centroidx = COMx;
										HX_STACK_LINE(2033)
										arb->centroidy = COMy;
										HX_STACK_LINE(2033)
										Dynamic();
									}
								}
								HX_STACK_LINE(2034)
								tmp2 = true;
							}
							else{
								HX_STACK_LINE(2036)
								tmp2 = false;
							}
						}
						else{
							HX_STACK_LINE(2038)
							tmp2 = false;
						}
					}
				}
				else{
					HX_STACK_LINE(2040)
					tmp2 = false;
				}
			}
		}
		else{
			HX_STACK_LINE(2043)
			Array< bool > inte = Array_obj< bool >::__new();		HX_STACK_VAR(inte,"inte");
			HX_STACK_LINE(2044)
			bool total = true;		HX_STACK_VAR(total,"total");
			HX_STACK_LINE(2045)
			::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
			HX_STACK_LINE(2045)
			::zpp_nape::geom::ZPP_Vec2 vi = null();		HX_STACK_VAR(vi,"vi");
			HX_STACK_LINE(2046)
			Float tmp3 = ((Float)-1e+100);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2046)
			Float max = tmp3;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(2047)
			bool cont = true;		HX_STACK_VAR(cont,"cont");
			HX_STACK_LINE(2048)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = s2->polygon->gverts;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2048)
			::zpp_nape::geom::ZPP_Vec2 vite = tmp4->next;		HX_STACK_VAR(vite,"vite");
			HX_STACK_LINE(2049)
			int ind = (int)0;		HX_STACK_VAR(ind,"ind");
			HX_STACK_LINE(2050)
			{
				HX_STACK_LINE(2051)
				::zpp_nape::util::ZNPList_ZPP_Edge tmp5 = s2->polygon->edges;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2051)
				::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp5->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(2052)
				while((true)){
					HX_STACK_LINE(2052)
					bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2052)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2052)
					if ((tmp7)){
						HX_STACK_LINE(2052)
						break;
					}
					HX_STACK_LINE(2053)
					::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(2054)
					{
						HX_STACK_LINE(2055)
						Float tmp8 = a->gnormx;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2055)
						Float tmp9 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2055)
						Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2055)
						Float tmp11 = a->gnormy;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2055)
						Float tmp12 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2055)
						Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2055)
						Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2055)
						Float dist = tmp14;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(2056)
						Float tmp15 = dist;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2056)
						Float tmp16 = a->gprojection;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2056)
						Float tmp17 = s1->circle->radius;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2056)
						Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(2056)
						bool tmp19 = (tmp15 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(2056)
						if ((tmp19)){
							HX_STACK_LINE(2057)
							cont = false;
							HX_STACK_LINE(2058)
							break;
						}
						else{
							HX_STACK_LINE(2060)
							Float tmp20 = dist;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(2060)
							Float tmp21 = s1->circle->radius;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(2060)
							Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2060)
							Float tmp23 = a->gprojection;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2060)
							Float tmp24 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2060)
							Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2060)
							bool tmp26 = (tmp22 > tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2060)
							if ((tmp26)){
								HX_STACK_LINE(2061)
								total = false;
								HX_STACK_LINE(2062)
								inte[ind] = true;
							}
						}
						HX_STACK_LINE(2064)
						Float tmp20 = a->gprojection;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2064)
						Float tmp21 = s1->circle->radius;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2064)
						Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2064)
						hx::SubEq(dist,tmp22);
						HX_STACK_LINE(2065)
						bool tmp23 = (dist > max);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2065)
						if ((tmp23)){
							HX_STACK_LINE(2066)
							max = dist;
							HX_STACK_LINE(2067)
							a0 = a;
							HX_STACK_LINE(2068)
							vi = vite;
						}
						HX_STACK_LINE(2070)
						vite = vite->next;
						HX_STACK_LINE(2071)
						(ind)++;
					}
					HX_STACK_LINE(2073)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(2076)
			bool tmp5 = cont;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2076)
			if ((tmp5)){
				HX_STACK_LINE(2077)
				bool tmp6 = total;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2077)
				if ((tmp6)){
					HX_STACK_LINE(2078)
					{
						HX_STACK_LINE(2078)
						Float tmp7 = s1->circle->area;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2078)
						arb->overlap = tmp7;
						HX_STACK_LINE(2078)
						{
							HX_STACK_LINE(2078)
							Float tmp8 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(2078)
							arb->centroidx = tmp8;
							HX_STACK_LINE(2078)
							Float tmp9 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2078)
							arb->centroidy = tmp9;
							HX_STACK_LINE(2078)
							Dynamic();
						}
					}
					HX_STACK_LINE(2079)
					tmp2 = true;
				}
				else{
					HX_STACK_LINE(2082)
					::zpp_nape::geom::ZPP_Vec2 v0 = vi;		HX_STACK_VAR(v0,"v0");
					HX_STACK_LINE(2083)
					bool tmp7 = (vi->next == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2083)
					::zpp_nape::geom::ZPP_Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2083)
					if ((tmp7)){
						HX_STACK_LINE(2083)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = s2->polygon->gverts;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2083)
						tmp8 = tmp9->next;
					}
					else{
						HX_STACK_LINE(2083)
						tmp8 = vi->next;
					}
					HX_STACK_LINE(2083)
					::zpp_nape::geom::ZPP_Vec2 v1 = tmp8;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(2084)
					Float tmp9 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2084)
					Float tmp10 = a0->gnormx;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2084)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2084)
					Float tmp12 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2084)
					Float tmp13 = a0->gnormy;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2084)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2084)
					Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2084)
					Float dt = tmp15;		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(2085)
					Float tmp16 = dt;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2085)
					Float tmp17 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2085)
					Float tmp18 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2085)
					Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2085)
					bool tmp20 = (tmp16 <= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2085)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2085)
					if ((tmp20)){
						HX_STACK_LINE(2086)
						Float tmp22 = s1->circle->radius;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2086)
						Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2086)
						Float minDist = tmp23;		HX_STACK_VAR(minDist,"minDist");
						HX_STACK_LINE(2087)
						Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(2088)
						Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
						HX_STACK_LINE(2089)
						{
							HX_STACK_LINE(2090)
							Float tmp24 = v0->x;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2090)
							Float tmp25 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2090)
							Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2090)
							px = tmp26;
							HX_STACK_LINE(2091)
							Float tmp27 = v0->y;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2091)
							Float tmp28 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2091)
							Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2091)
							py = tmp29;
						}
						HX_STACK_LINE(2093)
						Float tmp24 = (px * px);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2093)
						Float tmp25 = (py * py);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2093)
						Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2093)
						Float distSqr = tmp26;		HX_STACK_VAR(distSqr,"distSqr");
						HX_STACK_LINE(2094)
						Float tmp27 = distSqr;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2094)
						Float tmp28 = (minDist * minDist);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(2094)
						tmp21 = (tmp27 <= tmp28);
					}
					else{
						HX_STACK_LINE(2096)
						Float tmp22 = dt;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2096)
						Float tmp23 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2096)
						Float tmp24 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2096)
						Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2096)
						bool tmp26 = (tmp22 >= tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2096)
						if ((tmp26)){
							HX_STACK_LINE(2097)
							Float tmp27 = s1->circle->radius;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2097)
							Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2097)
							Float minDist = tmp28;		HX_STACK_VAR(minDist,"minDist");
							HX_STACK_LINE(2098)
							Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
							HX_STACK_LINE(2099)
							Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
							HX_STACK_LINE(2100)
							{
								HX_STACK_LINE(2101)
								Float tmp29 = v1->x;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2101)
								Float tmp30 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2101)
								Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2101)
								px = tmp31;
								HX_STACK_LINE(2102)
								Float tmp32 = v1->y;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2102)
								Float tmp33 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(2102)
								Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2102)
								py = tmp34;
							}
							HX_STACK_LINE(2104)
							Float tmp29 = (px * px);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2104)
							Float tmp30 = (py * py);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2104)
							Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2104)
							Float distSqr = tmp31;		HX_STACK_VAR(distSqr,"distSqr");
							HX_STACK_LINE(2105)
							Float tmp32 = distSqr;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(2105)
							Float tmp33 = (minDist * minDist);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(2105)
							tmp21 = (tmp32 <= tmp33);
						}
						else{
							HX_STACK_LINE(2107)
							tmp21 = true;
						}
					}
					HX_STACK_LINE(2085)
					if ((tmp21)){
						HX_STACK_LINE(2108)
						Array< bool > ins = Array_obj< bool >::__new();		HX_STACK_VAR(ins,"ins");
						HX_STACK_LINE(2109)
						int ind1 = (int)0;		HX_STACK_VAR(ind1,"ind1");
						HX_STACK_LINE(2110)
						bool total1 = true;		HX_STACK_VAR(total1,"total1");
						HX_STACK_LINE(2111)
						::zpp_nape::geom::ZPP_Vec2 vi1 = null();		HX_STACK_VAR(vi1,"vi1");
						HX_STACK_LINE(2112)
						int vind = (int)0;		HX_STACK_VAR(vind,"vind");
						HX_STACK_LINE(2113)
						{
							HX_STACK_LINE(2114)
							::zpp_nape::geom::ZPP_Vec2 tmp22 = s2->polygon->gverts;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2114)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp22->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(2115)
							while((true)){
								HX_STACK_LINE(2115)
								bool tmp23 = (cx_ite != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(2115)
								bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(2115)
								if ((tmp24)){
									HX_STACK_LINE(2115)
									break;
								}
								HX_STACK_LINE(2116)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(2117)
								{
									HX_STACK_LINE(2118)
									Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(2118)
									{
										HX_STACK_LINE(2118)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(2118)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(2118)
										{
											HX_STACK_LINE(2118)
											Float tmp26 = v->x;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(2118)
											Float tmp27 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(2118)
											Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(2118)
											dx = tmp28;
											HX_STACK_LINE(2118)
											Float tmp29 = v->y;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(2118)
											Float tmp30 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(2118)
											Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(2118)
											dy = tmp31;
										}
										HX_STACK_LINE(2118)
										Float tmp26 = (dx * dx);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(2118)
										Float tmp27 = (dy * dy);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(2118)
										tmp25 = (tmp26 + tmp27);
									}
									HX_STACK_LINE(2118)
									Float dist = tmp25;		HX_STACK_VAR(dist,"dist");
									HX_STACK_LINE(2119)
									Float tmp26 = dist;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(2119)
									Float tmp27 = s1->circle->radius;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(2119)
									Float tmp28 = s1->circle->radius;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(2119)
									Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(2119)
									bool tmp30 = (tmp26 <= tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2119)
									bool tmp31 = ins[ind1] = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2119)
									bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2119)
									if ((tmp32)){
										HX_STACK_LINE(2119)
										total1 = false;
									}
									else{
										HX_STACK_LINE(2121)
										vind = ind1;
										HX_STACK_LINE(2122)
										vi1 = cx_ite;
									}
									HX_STACK_LINE(2124)
									(ind1)++;
								}
								HX_STACK_LINE(2126)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(2129)
						bool tmp22 = total1;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2129)
						if ((tmp22)){
							HX_STACK_LINE(2130)
							{
								HX_STACK_LINE(2130)
								::zpp_nape::shape::ZPP_Polygon _this = s2->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2130)
								bool tmp23 = _this->zip_worldCOM;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(2130)
								if ((tmp23)){
									HX_STACK_LINE(2130)
									bool tmp24 = (_this->body != null());		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(2130)
									if ((tmp24)){
										HX_STACK_LINE(2130)
										_this->zip_worldCOM = false;
										HX_STACK_LINE(2130)
										{
											HX_STACK_LINE(2130)
											bool tmp25 = _this->zip_localCOM;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(2130)
											if ((tmp25)){
												HX_STACK_LINE(2130)
												_this->zip_localCOM = false;
												HX_STACK_LINE(2130)
												bool tmp26 = (_this->type == (int)1);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(2130)
												if ((tmp26)){
													HX_STACK_LINE(2130)
													::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(2130)
													::zpp_nape::geom::ZPP_Vec2 tmp27 = _this1->lverts->next;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(2130)
													bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(2130)
													if ((tmp28)){
														HX_STACK_LINE(2130)
														HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
													}
													HX_STACK_LINE(2130)
													::zpp_nape::geom::ZPP_Vec2 tmp29 = _this1->lverts->next;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(2130)
													::zpp_nape::geom::ZPP_Vec2 tmp30 = tmp29->next;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(2130)
													bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(2130)
													if ((tmp31)){
														HX_STACK_LINE(2130)
														::zpp_nape::geom::ZPP_Vec2 tmp32 = _this1->lverts->next;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(2130)
														_this1->localCOMx = tmp32->x;
														HX_STACK_LINE(2130)
														::zpp_nape::geom::ZPP_Vec2 tmp33 = _this1->lverts->next;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(2130)
														_this1->localCOMy = tmp33->y;
														HX_STACK_LINE(2130)
														Dynamic();
													}
													else{
														HX_STACK_LINE(2130)
														::zpp_nape::geom::ZPP_Vec2 tmp32 = _this1->lverts->next;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(2130)
														::zpp_nape::geom::ZPP_Vec2 tmp33 = tmp32->next->next;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(2130)
														bool tmp34 = (tmp33 == null());		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(2130)
														if ((tmp34)){
															HX_STACK_LINE(2130)
															{
																HX_STACK_LINE(2130)
																::zpp_nape::geom::ZPP_Vec2 tmp35 = _this1->lverts->next;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(2130)
																_this1->localCOMx = tmp35->x;
																HX_STACK_LINE(2130)
																::zpp_nape::geom::ZPP_Vec2 tmp36 = _this1->lverts->next;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(2130)
																_this1->localCOMy = tmp36->y;
																HX_STACK_LINE(2130)
																{
																}
															}
															HX_STACK_LINE(2130)
															{
																HX_STACK_LINE(2130)
																Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(2130)
																::zpp_nape::geom::ZPP_Vec2 tmp35 = _this1->lverts->next;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(2130)
																Float tmp36 = tmp35->next->x;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(2130)
																Float tmp37 = t;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(2130)
																Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(2130)
																hx::AddEq(_this1->localCOMx,tmp38);
																HX_STACK_LINE(2130)
																::zpp_nape::geom::ZPP_Vec2 tmp39 = _this1->lverts->next;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(2130)
																Float tmp40 = tmp39->next->y;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(2130)
																Float tmp41 = t;		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(2130)
																Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(2130)
																hx::AddEq(_this1->localCOMy,tmp42);
															}
															HX_STACK_LINE(2130)
															{
																HX_STACK_LINE(2130)
																Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(2130)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(2130)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
														else{
															HX_STACK_LINE(2130)
															{
																HX_STACK_LINE(2130)
																_this1->localCOMx = (int)0;
																HX_STACK_LINE(2130)
																_this1->localCOMy = (int)0;
																HX_STACK_LINE(2130)
																{
																}
															}
															HX_STACK_LINE(2130)
															Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
															HX_STACK_LINE(2130)
															{
																HX_STACK_LINE(2130)
																::zpp_nape::geom::ZPP_Vec2 tmp35 = _this1->lverts->next;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(2130)
																::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp35;		HX_STACK_VAR(cx_ite,"cx_ite");
																HX_STACK_LINE(2130)
																::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																HX_STACK_LINE(2130)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(2130)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(2130)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(2130)
																while((true)){
																	HX_STACK_LINE(2130)
																	bool tmp36 = (cx_ite != null());		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(2130)
																	bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(2130)
																	if ((tmp37)){
																		HX_STACK_LINE(2130)
																		break;
																	}
																	HX_STACK_LINE(2130)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(2130)
																	{
																		HX_STACK_LINE(2130)
																		Float tmp38 = v->x;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(2130)
																		Float tmp39 = (w->y - u->y);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(2130)
																		Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(2130)
																		hx::AddEq(area,tmp40);
																		HX_STACK_LINE(2130)
																		Float tmp41 = (w->y * v->x);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(2130)
																		Float tmp42 = (w->x * v->y);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(2130)
																		Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(2130)
																		Float cf = tmp43;		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(2130)
																		Float tmp44 = (v->x + w->x);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(2130)
																		Float tmp45 = cf;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(2130)
																		Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(2130)
																		hx::AddEq(_this1->localCOMx,tmp46);
																		HX_STACK_LINE(2130)
																		Float tmp47 = (v->y + w->y);		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(2130)
																		Float tmp48 = cf;		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(2130)
																		Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
																		HX_STACK_LINE(2130)
																		hx::AddEq(_this1->localCOMy,tmp49);
																	}
																	HX_STACK_LINE(2130)
																	u = v;
																	HX_STACK_LINE(2130)
																	v = w;
																	HX_STACK_LINE(2130)
																	cx_ite = cx_ite->next;
																}
																HX_STACK_LINE(2130)
																::zpp_nape::geom::ZPP_Vec2 tmp36 = _this1->lverts->next;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(2130)
																cx_ite = tmp36;
																HX_STACK_LINE(2130)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(2130)
																{
																	HX_STACK_LINE(2130)
																	Float tmp37 = v->x;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(2130)
																	Float tmp38 = (w->y - u->y);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(2130)
																	Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(2130)
																	hx::AddEq(area,tmp39);
																	HX_STACK_LINE(2130)
																	Float tmp40 = (w->y * v->x);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(2130)
																	Float tmp41 = (w->x * v->y);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(2130)
																	Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(2130)
																	Float cf = tmp42;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(2130)
																	Float tmp43 = (v->x + w->x);		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(2130)
																	Float tmp44 = cf;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(2130)
																	Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(2130)
																	hx::AddEq(_this1->localCOMx,tmp45);
																	HX_STACK_LINE(2130)
																	Float tmp46 = (v->y + w->y);		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(2130)
																	Float tmp47 = cf;		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(2130)
																	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(2130)
																	hx::AddEq(_this1->localCOMy,tmp48);
																}
																HX_STACK_LINE(2130)
																u = v;
																HX_STACK_LINE(2130)
																v = w;
																HX_STACK_LINE(2130)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(2130)
																::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																HX_STACK_LINE(2130)
																{
																	HX_STACK_LINE(2130)
																	Float tmp37 = v->x;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(2130)
																	Float tmp38 = (w1->y - u->y);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(2130)
																	Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(2130)
																	hx::AddEq(area,tmp39);
																	HX_STACK_LINE(2130)
																	Float tmp40 = (w1->y * v->x);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(2130)
																	Float tmp41 = (w1->x * v->y);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(2130)
																	Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(2130)
																	Float cf = tmp42;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(2130)
																	Float tmp43 = (v->x + w1->x);		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(2130)
																	Float tmp44 = cf;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(2130)
																	Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(2130)
																	hx::AddEq(_this1->localCOMx,tmp45);
																	HX_STACK_LINE(2130)
																	Float tmp46 = (v->y + w1->y);		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(2130)
																	Float tmp47 = cf;		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(2130)
																	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(2130)
																	hx::AddEq(_this1->localCOMy,tmp48);
																}
															}
															HX_STACK_LINE(2130)
															Float tmp35 = ((int)3 * area);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(2130)
															Float tmp36 = (Float((int)1) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(2130)
															area = tmp36;
															HX_STACK_LINE(2130)
															{
																HX_STACK_LINE(2130)
																Float t = area;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(2130)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(2130)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
													}
												}
												HX_STACK_LINE(2130)
												bool tmp27 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(2130)
												if ((tmp27)){
													HX_STACK_LINE(2130)
													::zpp_nape::geom::ZPP_Vec2 tmp28 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(2130)
													tmp28->x = _this->localCOMx;
													HX_STACK_LINE(2130)
													::zpp_nape::geom::ZPP_Vec2 tmp29 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(2130)
													tmp29->y = _this->localCOMy;
													HX_STACK_LINE(2130)
													{
													}
												}
											}
										}
										HX_STACK_LINE(2130)
										{
											HX_STACK_LINE(2130)
											::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(2130)
											bool tmp25 = _this1->zip_axis;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(2130)
											if ((tmp25)){
												HX_STACK_LINE(2130)
												_this1->zip_axis = false;
												HX_STACK_LINE(2130)
												{
													HX_STACK_LINE(2130)
													Float tmp26 = _this1->rot;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(2130)
													Float tmp27 = ::Math_obj::sin(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(2130)
													_this1->axisx = tmp27;
													HX_STACK_LINE(2130)
													Float tmp28 = _this1->rot;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(2130)
													Float tmp29 = ::Math_obj::cos(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(2130)
													_this1->axisy = tmp29;
													HX_STACK_LINE(2130)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(2130)
										{
											HX_STACK_LINE(2130)
											Float tmp25 = _this->body->posx;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(2130)
											Float tmp26 = _this->body->axisy;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(2130)
											Float tmp27 = _this->localCOMx;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(2130)
											Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(2130)
											Float tmp29 = _this->body->axisx;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(2130)
											Float tmp30 = _this->localCOMy;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(2130)
											Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(2130)
											Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(2130)
											Float tmp33 = (tmp25 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(2130)
											_this->worldCOMx = tmp33;
											HX_STACK_LINE(2130)
											Float tmp34 = _this->body->posy;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(2130)
											Float tmp35 = _this->localCOMx;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(2130)
											Float tmp36 = _this->body->axisx;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2130)
											Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2130)
											Float tmp38 = _this->localCOMy;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2130)
											Float tmp39 = _this->body->axisy;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(2130)
											Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(2130)
											Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(2130)
											Float tmp42 = (tmp34 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(2130)
											_this->worldCOMy = tmp42;
										}
									}
								}
							}
							HX_STACK_LINE(2131)
							{
								HX_STACK_LINE(2131)
								Float tmp23 = s2->polygon->area;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(2131)
								arb->overlap = tmp23;
								HX_STACK_LINE(2131)
								{
									HX_STACK_LINE(2131)
									Float tmp24 = s2->polygon->worldCOMx;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(2131)
									arb->centroidx = tmp24;
									HX_STACK_LINE(2131)
									Float tmp25 = s2->polygon->worldCOMy;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(2131)
									arb->centroidy = tmp25;
									HX_STACK_LINE(2131)
									Dynamic();
								}
							}
							HX_STACK_LINE(2132)
							tmp2 = true;
						}
						else{
							HX_STACK_LINE(2135)
							while((true)){
								HX_STACK_LINE(2135)
								::zpp_nape::util::ZNPList_ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(2135)
								::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp24 = tmp23->head;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(2135)
								bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2135)
								bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2135)
								bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2135)
								if ((tmp27)){
									HX_STACK_LINE(2135)
									break;
								}
								HX_STACK_LINE(2136)
								::zpp_nape::util::ZNPList_ZPP_Vec2 tmp28 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2136)
								::zpp_nape::geom::ZPP_Vec2 tmp29 = tmp28->pop_unsafe();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2136)
								::zpp_nape::geom::ZPP_Vec2 p = tmp29;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(2137)
								bool tmp30 = p->_inuse;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2137)
								bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2137)
								if ((tmp31)){
									HX_STACK_LINE(2138)
									::zpp_nape::geom::ZPP_Vec2 o = p;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(2147)
									{
										HX_STACK_LINE(2147)
										bool tmp32 = (o->outer != null());		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(2147)
										if ((tmp32)){
											HX_STACK_LINE(2147)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(2147)
											o->outer = null();
										}
										HX_STACK_LINE(2147)
										o->_isimmutable = null();
										HX_STACK_LINE(2147)
										o->_validate = null();
										HX_STACK_LINE(2147)
										o->_invalidate = null();
									}
									HX_STACK_LINE(2148)
									::zpp_nape::geom::ZPP_Vec2 tmp32 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2148)
									o->next = tmp32;
									HX_STACK_LINE(2149)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(2155)
							::zpp_nape::util::ZNPList_ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2155)
							tmp23->clear();
							HX_STACK_LINE(2156)
							::zpp_nape::geom::ZPP_Vec2 fst_vert = null();		HX_STACK_VAR(fst_vert,"fst_vert");
							HX_STACK_LINE(2157)
							int state = (int)1;		HX_STACK_VAR(state,"state");
							HX_STACK_LINE(2158)
							bool tmp24 = (vi1 == null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2158)
							if ((tmp24)){
								HX_STACK_LINE(2159)
								::zpp_nape::geom::ZPP_Vec2 tmp25 = s2->polygon->gverts;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2159)
								vi1 = tmp25->next;
								HX_STACK_LINE(2160)
								state = (int)2;
							}
							else{
								HX_STACK_LINE(2162)
								::zpp_nape::util::ZNPList_ZPP_Vec2 tmp25 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2162)
								::zpp_nape::geom::ZPP_Vec2 tmp26 = fst_vert = vi1;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2162)
								tmp25->add(tmp26);
							}
							HX_STACK_LINE(2163)
							while((true)){
								HX_STACK_LINE(2163)
								bool tmp25 = (state != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2163)
								bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2163)
								if ((tmp26)){
									HX_STACK_LINE(2163)
									break;
								}
								HX_STACK_LINE(2164)
								bool tmp27 = (state == (int)1);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2164)
								if ((tmp27)){
									HX_STACK_LINE(2165)
									vi1 = vi1->next;
									HX_STACK_LINE(2166)
									bool tmp28 = (vi1 == null());		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(2166)
									if ((tmp28)){
										HX_STACK_LINE(2166)
										::zpp_nape::geom::ZPP_Vec2 tmp29 = s2->polygon->gverts;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(2166)
										vi1 = tmp29->next;
									}
									HX_STACK_LINE(2167)
									(vind)++;
									HX_STACK_LINE(2168)
									int tmp29 = vind;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(2168)
									int tmp30 = s2->polygon->edgeCnt;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2168)
									bool tmp31 = (tmp29 >= tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2168)
									if ((tmp31)){
										HX_STACK_LINE(2168)
										vind = (int)0;
									}
									HX_STACK_LINE(2169)
									bool tmp32 = ins->__get(vind);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2169)
									if ((tmp32)){
										HX_STACK_LINE(2170)
										Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2170)
										{
											HX_STACK_LINE(2170)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(2170)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(2170)
											{
												HX_STACK_LINE(2170)
												Float tmp34 = (fst_vert->x - vi1->x);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(2170)
												dx = tmp34;
												HX_STACK_LINE(2170)
												Float tmp35 = (fst_vert->y - vi1->y);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(2170)
												dy = tmp35;
											}
											HX_STACK_LINE(2170)
											Float tmp34 = (dx * dx);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(2170)
											Float tmp35 = (dy * dy);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(2170)
											tmp33 = (tmp34 + tmp35);
										}
										HX_STACK_LINE(2170)
										Float tmp34 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2170)
										bool tmp35 = (tmp33 < tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(2170)
										if ((tmp35)){
											HX_STACK_LINE(2170)
											break;
										}
										HX_STACK_LINE(2171)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp36 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(2171)
										::zpp_nape::geom::ZPP_Vec2 tmp37 = vi1;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(2171)
										tmp36->add(tmp37);
									}
									else{
										HX_STACK_LINE(2174)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp33 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2174)
										::zpp_nape::geom::ZPP_Vec2 tmp34 = tmp33->head->elt;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2174)
										::zpp_nape::geom::ZPP_Vec2 u = tmp34;		HX_STACK_VAR(u,"u");
										HX_STACK_LINE(2175)
										::zpp_nape::geom::ZPP_Vec2 v = vi1;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(2176)
										Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(2176)
										{
											HX_STACK_LINE(2177)
											Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
											HX_STACK_LINE(2178)
											Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
											HX_STACK_LINE(2179)
											{
												HX_STACK_LINE(2180)
												Float tmp36 = (v->x - u->x);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(2180)
												vx = tmp36;
												HX_STACK_LINE(2181)
												Float tmp37 = (v->y - u->y);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(2181)
												vy = tmp37;
											}
											HX_STACK_LINE(2183)
											Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
											HX_STACK_LINE(2184)
											Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
											HX_STACK_LINE(2185)
											{
												HX_STACK_LINE(2186)
												Float tmp36 = u->x;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(2186)
												Float tmp37 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(2186)
												Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(2186)
												qx = tmp38;
												HX_STACK_LINE(2187)
												Float tmp39 = u->y;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(2187)
												Float tmp40 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(2187)
												Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(2187)
												qy = tmp41;
											}
											HX_STACK_LINE(2189)
											Float tmp36 = (vx * vx);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2189)
											Float tmp37 = (vy * vy);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2189)
											Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2189)
											Float A = tmp38;		HX_STACK_VAR(A,"A");
											HX_STACK_LINE(2190)
											Float tmp39 = (qx * vx);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(2190)
											Float tmp40 = (qy * vy);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(2190)
											Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(2190)
											Float tmp42 = ((int)2 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(2190)
											Float B = tmp42;		HX_STACK_VAR(B,"B");
											HX_STACK_LINE(2191)
											Float tmp43 = (qx * qx);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(2191)
											Float tmp44 = (qy * qy);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(2191)
											Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(2191)
											Float tmp46 = s1->circle->radius;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(2191)
											Float tmp47 = s1->circle->radius;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(2191)
											Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(2191)
											Float tmp49 = (tmp45 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(2191)
											Float C = tmp49;		HX_STACK_VAR(C,"C");
											HX_STACK_LINE(2192)
											Float tmp50 = (B * B);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(2192)
											Float tmp51 = ((int)4 * A);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(2192)
											Float tmp52 = C;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(2192)
											Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(2192)
											Float tmp54 = (tmp50 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(2192)
											Float tmp55 = ::Math_obj::sqrt(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(2192)
											Float D = tmp55;		HX_STACK_VAR(D,"D");
											HX_STACK_LINE(2193)
											Float tmp56 = ((int)2 * A);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(2193)
											Float tmp57 = (Float((int)1) / Float(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(2193)
											A = tmp57;
											HX_STACK_LINE(2194)
											Float tmp58 = B;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(2194)
											Float tmp59 = -(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(2194)
											Float tmp60 = D;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(2194)
											Float tmp61 = (tmp59 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(2194)
											Float tmp62 = A;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(2194)
											Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(2194)
											Float t = tmp63;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(2195)
											Float tmp64 = t;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(2195)
											Float tmp65 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(2195)
											bool tmp66 = (tmp64 < tmp65);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(2195)
											if ((tmp66)){
												HX_STACK_LINE(2195)
												Float tmp67 = B;		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(2195)
												Float tmp68 = -(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(2195)
												Float tmp69 = D;		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(2195)
												Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(2195)
												Float tmp71 = A;		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(2195)
												tmp35 = (tmp70 * tmp71);
											}
											else{
												HX_STACK_LINE(2196)
												tmp35 = t;
											}
										}
										HX_STACK_LINE(2176)
										Float tval = tmp35;		HX_STACK_VAR(tval,"tval");
										HX_STACK_LINE(2198)
										Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
										HX_STACK_LINE(2199)
										Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
										HX_STACK_LINE(2200)
										{
											HX_STACK_LINE(2201)
											Float T = tval;		HX_STACK_VAR(T,"T");
											HX_STACK_LINE(2210)
											Float tmp36 = u->x;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2210)
											Float tmp37 = (v->x - u->x);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2210)
											Float tmp38 = T;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2210)
											Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(2210)
											Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(2210)
											cx = tmp40;
											HX_STACK_LINE(2211)
											Float tmp41 = u->y;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(2211)
											Float tmp42 = (v->y - u->y);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(2211)
											Float tmp43 = T;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(2211)
											Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(2211)
											Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(2211)
											cy = tmp45;
										}
										HX_STACK_LINE(2213)
										Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(2213)
										{
											HX_STACK_LINE(2213)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(2213)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(2213)
											{
												HX_STACK_LINE(2213)
												Float tmp37 = (fst_vert->x - cx);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(2213)
												dx = tmp37;
												HX_STACK_LINE(2213)
												Float tmp38 = (fst_vert->y - cy);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(2213)
												dy = tmp38;
											}
											HX_STACK_LINE(2213)
											Float tmp37 = (dx * dx);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2213)
											Float tmp38 = (dy * dy);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2213)
											tmp36 = (tmp37 + tmp38);
										}
										HX_STACK_LINE(2213)
										Float tmp37 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(2213)
										bool tmp38 = (tmp36 < tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(2213)
										if ((tmp38)){
											HX_STACK_LINE(2213)
											break;
										}
										HX_STACK_LINE(2214)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp39 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(2214)
										::zpp_nape::geom::ZPP_Vec2 tmp40;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(2214)
										{
											HX_STACK_LINE(2214)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(2214)
											::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(2214)
											{
												HX_STACK_LINE(2214)
												::zpp_nape::geom::ZPP_Vec2 tmp41 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(2214)
												bool tmp42 = (tmp41 == null());		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(2214)
												if ((tmp42)){
													HX_STACK_LINE(2214)
													::zpp_nape::geom::ZPP_Vec2 tmp43 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(2214)
													ret = tmp43;
												}
												else{
													HX_STACK_LINE(2214)
													::zpp_nape::geom::ZPP_Vec2 tmp43 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(2214)
													ret = tmp43;
													HX_STACK_LINE(2214)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
													HX_STACK_LINE(2214)
													ret->next = null();
												}
												HX_STACK_LINE(2214)
												ret->weak = false;
											}
											HX_STACK_LINE(2214)
											ret->_immutable = immutable;
											HX_STACK_LINE(2214)
											{
												HX_STACK_LINE(2214)
												ret->x = cx;
												HX_STACK_LINE(2214)
												ret->y = cy;
												HX_STACK_LINE(2214)
												{
												}
											}
											HX_STACK_LINE(2214)
											tmp40 = ret;
										}
										HX_STACK_LINE(2214)
										tmp39->add(tmp40);
										HX_STACK_LINE(2215)
										state = (int)2;
									}
								}
								else{
									HX_STACK_LINE(2218)
									bool tmp28 = (state == (int)2);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(2218)
									if ((tmp28)){
										HX_STACK_LINE(2219)
										::zpp_nape::geom::ZPP_Vec2 vi2 = vi1->next;		HX_STACK_VAR(vi2,"vi2");
										HX_STACK_LINE(2220)
										bool tmp29 = (vi2 == null());		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(2220)
										if ((tmp29)){
											HX_STACK_LINE(2220)
											::zpp_nape::geom::ZPP_Vec2 tmp30 = s2->polygon->gverts;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(2220)
											vi2 = tmp30->next;
										}
										HX_STACK_LINE(2221)
										::zpp_nape::geom::ZPP_Vec2 u = vi1;		HX_STACK_VAR(u,"u");
										HX_STACK_LINE(2222)
										state = (int)0;
										HX_STACK_LINE(2223)
										{
											HX_STACK_LINE(2224)
											::zpp_nape::geom::ZPP_Vec2 beg_ite = vi2;		HX_STACK_VAR(beg_ite,"beg_ite");
											HX_STACK_LINE(2225)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = vi2;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(2226)
											while((true)){
												HX_STACK_LINE(2227)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2228)
												{
													HX_STACK_LINE(2229)
													int tmp30 = (vind + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(2229)
													int vind2 = tmp30;		HX_STACK_VAR(vind2,"vind2");
													HX_STACK_LINE(2230)
													int tmp31 = vind2;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(2230)
													int tmp32 = s2->polygon->edgeCnt;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(2230)
													bool tmp33 = (tmp31 == tmp32);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(2230)
													if ((tmp33)){
														HX_STACK_LINE(2230)
														vind2 = (int)0;
													}
													HX_STACK_LINE(2231)
													bool tmp34 = inte->__get(vind);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(2231)
													if ((tmp34)){
														HX_STACK_LINE(2232)
														bool tmp35 = ins->__get(vind2);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(2232)
														if ((tmp35)){
															HX_STACK_LINE(2233)
															Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(2233)
															{
																HX_STACK_LINE(2234)
																Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
																HX_STACK_LINE(2235)
																Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
																HX_STACK_LINE(2236)
																{
																	HX_STACK_LINE(2237)
																	Float tmp37 = (v->x - u->x);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(2237)
																	vx = tmp37;
																	HX_STACK_LINE(2238)
																	Float tmp38 = (v->y - u->y);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(2238)
																	vy = tmp38;
																}
																HX_STACK_LINE(2240)
																Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
																HX_STACK_LINE(2241)
																Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
																HX_STACK_LINE(2242)
																{
																	HX_STACK_LINE(2243)
																	Float tmp37 = u->x;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(2243)
																	Float tmp38 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(2243)
																	Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(2243)
																	qx = tmp39;
																	HX_STACK_LINE(2244)
																	Float tmp40 = u->y;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(2244)
																	Float tmp41 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(2244)
																	Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(2244)
																	qy = tmp42;
																}
																HX_STACK_LINE(2246)
																Float tmp37 = (vx * vx);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(2246)
																Float tmp38 = (vy * vy);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(2246)
																Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(2246)
																Float A = tmp39;		HX_STACK_VAR(A,"A");
																HX_STACK_LINE(2247)
																Float tmp40 = (qx * vx);		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(2247)
																Float tmp41 = (qy * vy);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(2247)
																Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(2247)
																Float tmp43 = ((int)2 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(2247)
																Float B = tmp43;		HX_STACK_VAR(B,"B");
																HX_STACK_LINE(2248)
																Float tmp44 = (qx * qx);		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(2248)
																Float tmp45 = (qy * qy);		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(2248)
																Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(2248)
																Float tmp47 = s1->circle->radius;		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(2248)
																Float tmp48 = s1->circle->radius;		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(2248)
																Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(2248)
																Float tmp50 = (tmp46 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(2248)
																Float C = tmp50;		HX_STACK_VAR(C,"C");
																HX_STACK_LINE(2249)
																Float tmp51 = (B * B);		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(2249)
																Float tmp52 = ((int)4 * A);		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(2249)
																Float tmp53 = C;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(2249)
																Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(2249)
																Float tmp55 = (tmp51 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(2249)
																Float tmp56 = ::Math_obj::sqrt(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
																HX_STACK_LINE(2249)
																Float D = tmp56;		HX_STACK_VAR(D,"D");
																HX_STACK_LINE(2250)
																Float tmp57 = ((int)2 * A);		HX_STACK_VAR(tmp57,"tmp57");
																HX_STACK_LINE(2250)
																Float tmp58 = (Float((int)1) / Float(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
																HX_STACK_LINE(2250)
																A = tmp58;
																HX_STACK_LINE(2251)
																Float tmp59 = B;		HX_STACK_VAR(tmp59,"tmp59");
																HX_STACK_LINE(2251)
																Float tmp60 = -(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
																HX_STACK_LINE(2251)
																Float tmp61 = D;		HX_STACK_VAR(tmp61,"tmp61");
																HX_STACK_LINE(2251)
																Float tmp62 = (tmp60 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
																HX_STACK_LINE(2251)
																Float tmp63 = A;		HX_STACK_VAR(tmp63,"tmp63");
																HX_STACK_LINE(2251)
																Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
																HX_STACK_LINE(2251)
																Float t = tmp64;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(2252)
																Float tmp65 = t;		HX_STACK_VAR(tmp65,"tmp65");
																HX_STACK_LINE(2252)
																Float tmp66 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp66,"tmp66");
																HX_STACK_LINE(2252)
																bool tmp67 = (tmp65 < tmp66);		HX_STACK_VAR(tmp67,"tmp67");
																HX_STACK_LINE(2252)
																if ((tmp67)){
																	HX_STACK_LINE(2252)
																	Float tmp68 = B;		HX_STACK_VAR(tmp68,"tmp68");
																	HX_STACK_LINE(2252)
																	Float tmp69 = -(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
																	HX_STACK_LINE(2252)
																	Float tmp70 = D;		HX_STACK_VAR(tmp70,"tmp70");
																	HX_STACK_LINE(2252)
																	Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
																	HX_STACK_LINE(2252)
																	Float tmp72 = A;		HX_STACK_VAR(tmp72,"tmp72");
																	HX_STACK_LINE(2252)
																	tmp36 = (tmp71 * tmp72);
																}
																else{
																	HX_STACK_LINE(2253)
																	tmp36 = t;
																}
															}
															HX_STACK_LINE(2233)
															Float tval = tmp36;		HX_STACK_VAR(tval,"tval");
															HX_STACK_LINE(2255)
															Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
															HX_STACK_LINE(2256)
															Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
															HX_STACK_LINE(2257)
															{
																HX_STACK_LINE(2258)
																Float T = tval;		HX_STACK_VAR(T,"T");
																HX_STACK_LINE(2267)
																Float tmp37 = u->x;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(2267)
																Float tmp38 = (v->x - u->x);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(2267)
																Float tmp39 = T;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(2267)
																Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(2267)
																Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(2267)
																cx = tmp41;
																HX_STACK_LINE(2268)
																Float tmp42 = u->y;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(2268)
																Float tmp43 = (v->y - u->y);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(2268)
																Float tmp44 = T;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(2268)
																Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(2268)
																Float tmp46 = (tmp42 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(2268)
																cy = tmp46;
															}
															HX_STACK_LINE(2270)
															Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(2270)
															{
																HX_STACK_LINE(2270)
																Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
																HX_STACK_LINE(2270)
																Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
																HX_STACK_LINE(2270)
																{
																	HX_STACK_LINE(2270)
																	Float tmp38 = (fst_vert->x - cx);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(2270)
																	dx = tmp38;
																	HX_STACK_LINE(2270)
																	Float tmp39 = (fst_vert->y - cy);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(2270)
																	dy = tmp39;
																}
																HX_STACK_LINE(2270)
																Float tmp38 = (dx * dx);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(2270)
																Float tmp39 = (dy * dy);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(2270)
																tmp37 = (tmp38 + tmp39);
															}
															HX_STACK_LINE(2270)
															Float tmp38 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(2270)
															bool tmp39 = (tmp37 < tmp38);		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(2270)
															if ((tmp39)){
																HX_STACK_LINE(2271)
																state = (int)0;
																HX_STACK_LINE(2272)
																{
																	HX_STACK_LINE(2273)
																	cx_ite = beg_ite;
																	HX_STACK_LINE(2274)
																	break;
																}
															}
															HX_STACK_LINE(2277)
															::zpp_nape::geom::ZPP_Vec2 tmp40;		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(2277)
															{
																HX_STACK_LINE(2277)
																bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																HX_STACK_LINE(2277)
																::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																HX_STACK_LINE(2277)
																{
																	HX_STACK_LINE(2277)
																	::zpp_nape::geom::ZPP_Vec2 tmp41 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(2277)
																	bool tmp42 = (tmp41 == null());		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(2277)
																	if ((tmp42)){
																		HX_STACK_LINE(2277)
																		::zpp_nape::geom::ZPP_Vec2 tmp43 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(2277)
																		ret = tmp43;
																	}
																	else{
																		HX_STACK_LINE(2277)
																		::zpp_nape::geom::ZPP_Vec2 tmp43 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(2277)
																		ret = tmp43;
																		HX_STACK_LINE(2277)
																		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																		HX_STACK_LINE(2277)
																		ret->next = null();
																	}
																	HX_STACK_LINE(2277)
																	ret->weak = false;
																}
																HX_STACK_LINE(2277)
																ret->_immutable = immutable;
																HX_STACK_LINE(2277)
																{
																	HX_STACK_LINE(2277)
																	ret->x = cx;
																	HX_STACK_LINE(2277)
																	ret->y = cy;
																	HX_STACK_LINE(2277)
																	{
																	}
																}
																HX_STACK_LINE(2277)
																tmp40 = ret;
															}
															HX_STACK_LINE(2277)
															::zpp_nape::geom::ZPP_Vec2 cp = tmp40;		HX_STACK_VAR(cp,"cp");
															HX_STACK_LINE(2278)
															::zpp_nape::util::ZNPList_ZPP_Vec2 tmp41 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(2278)
															::zpp_nape::util::ZNPList_ZPP_Vec2 tmp42 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(2278)
															::zpp_nape::geom::ZPP_Vec2 tmp43 = tmp42->head->elt;		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(2278)
															tmp41->add(tmp43);
															HX_STACK_LINE(2279)
															::zpp_nape::util::ZNPList_ZPP_Vec2 tmp44 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(2279)
															::zpp_nape::geom::ZPP_Vec2 tmp45 = cp;		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(2279)
															tmp44->add(tmp45);
															HX_STACK_LINE(2280)
															::zpp_nape::util::ZNPList_ZPP_Vec2 tmp46 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(2280)
															::zpp_nape::geom::ZPP_Vec2 tmp47 = cp;		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(2280)
															tmp46->add(tmp47);
															HX_STACK_LINE(2281)
															state = (int)1;
															HX_STACK_LINE(2282)
															{
																HX_STACK_LINE(2283)
																cx_ite = beg_ite;
																HX_STACK_LINE(2284)
																break;
															}
														}
														else{
															HX_STACK_LINE(2288)
															Float t0 = ((Float)0.0);		HX_STACK_VAR(t0,"t0");
															HX_STACK_LINE(2289)
															Float t1 = ((Float)0.0);		HX_STACK_VAR(t1,"t1");
															HX_STACK_LINE(2290)
															bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(2290)
															{
																HX_STACK_LINE(2291)
																Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
																HX_STACK_LINE(2292)
																Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
																HX_STACK_LINE(2293)
																{
																	HX_STACK_LINE(2294)
																	Float tmp37 = (v->x - u->x);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(2294)
																	vx = tmp37;
																	HX_STACK_LINE(2295)
																	Float tmp38 = (v->y - u->y);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(2295)
																	vy = tmp38;
																}
																HX_STACK_LINE(2297)
																Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
																HX_STACK_LINE(2298)
																Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
																HX_STACK_LINE(2299)
																{
																	HX_STACK_LINE(2300)
																	Float tmp37 = u->x;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(2300)
																	Float tmp38 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(2300)
																	Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(2300)
																	qx = tmp39;
																	HX_STACK_LINE(2301)
																	Float tmp40 = u->y;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(2301)
																	Float tmp41 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(2301)
																	Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(2301)
																	qy = tmp42;
																}
																HX_STACK_LINE(2303)
																Float tmp37 = (vx * vx);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(2303)
																Float tmp38 = (vy * vy);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(2303)
																Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(2303)
																Float A = tmp39;		HX_STACK_VAR(A,"A");
																HX_STACK_LINE(2304)
																Float tmp40 = (qx * vx);		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(2304)
																Float tmp41 = (qy * vy);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(2304)
																Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(2304)
																Float tmp43 = ((int)2 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(2304)
																Float B = tmp43;		HX_STACK_VAR(B,"B");
																HX_STACK_LINE(2305)
																Float tmp44 = (qx * qx);		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(2305)
																Float tmp45 = (qy * qy);		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(2305)
																Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(2305)
																Float tmp47 = s1->circle->radius;		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(2305)
																Float tmp48 = s1->circle->radius;		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(2305)
																Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(2305)
																Float tmp50 = (tmp46 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(2305)
																Float C = tmp50;		HX_STACK_VAR(C,"C");
																HX_STACK_LINE(2306)
																Float tmp51 = (B * B);		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(2306)
																Float tmp52 = ((int)4 * A);		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(2306)
																Float tmp53 = C;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(2306)
																Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(2306)
																Float tmp55 = (tmp51 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(2306)
																Float D = tmp55;		HX_STACK_VAR(D,"D");
																HX_STACK_LINE(2307)
																Float tmp56 = (D * D);		HX_STACK_VAR(tmp56,"tmp56");
																HX_STACK_LINE(2307)
																Float tmp57 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp57,"tmp57");
																HX_STACK_LINE(2307)
																bool tmp58 = (tmp56 < tmp57);		HX_STACK_VAR(tmp58,"tmp58");
																HX_STACK_LINE(2307)
																if ((tmp58)){
																	HX_STACK_LINE(2308)
																	bool tmp59 = (D < (int)0);		HX_STACK_VAR(tmp59,"tmp59");
																	HX_STACK_LINE(2308)
																	if ((tmp59)){
																		HX_STACK_LINE(2308)
																		t0 = ((Float)10.0);
																	}
																	else{
																		HX_STACK_LINE(2309)
																		Float tmp60 = B;		HX_STACK_VAR(tmp60,"tmp60");
																		HX_STACK_LINE(2309)
																		Float tmp61 = -(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
																		HX_STACK_LINE(2309)
																		Float tmp62 = ((int)2 * A);		HX_STACK_VAR(tmp62,"tmp62");
																		HX_STACK_LINE(2309)
																		Float tmp63 = (Float(tmp61) / Float(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
																		HX_STACK_LINE(2309)
																		Float tmp64 = t1 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(2309)
																		t0 = tmp64;
																	}
																	HX_STACK_LINE(2310)
																	tmp36 = false;
																}
																else{
																	HX_STACK_LINE(2313)
																	Float tmp59 = D;		HX_STACK_VAR(tmp59,"tmp59");
																	HX_STACK_LINE(2313)
																	Float tmp60 = ::Math_obj::sqrt(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
																	HX_STACK_LINE(2313)
																	D = tmp60;
																	HX_STACK_LINE(2314)
																	Float tmp61 = ((int)2 * A);		HX_STACK_VAR(tmp61,"tmp61");
																	HX_STACK_LINE(2314)
																	Float tmp62 = (Float((int)1) / Float(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
																	HX_STACK_LINE(2314)
																	A = tmp62;
																	HX_STACK_LINE(2315)
																	Float tmp63 = B;		HX_STACK_VAR(tmp63,"tmp63");
																	HX_STACK_LINE(2315)
																	Float tmp64 = -(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
																	HX_STACK_LINE(2315)
																	Float tmp65 = D;		HX_STACK_VAR(tmp65,"tmp65");
																	HX_STACK_LINE(2315)
																	Float tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
																	HX_STACK_LINE(2315)
																	Float tmp67 = A;		HX_STACK_VAR(tmp67,"tmp67");
																	HX_STACK_LINE(2315)
																	Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
																	HX_STACK_LINE(2315)
																	t0 = tmp68;
																	HX_STACK_LINE(2316)
																	Float tmp69 = B;		HX_STACK_VAR(tmp69,"tmp69");
																	HX_STACK_LINE(2316)
																	Float tmp70 = -(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
																	HX_STACK_LINE(2316)
																	Float tmp71 = D;		HX_STACK_VAR(tmp71,"tmp71");
																	HX_STACK_LINE(2316)
																	Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
																	HX_STACK_LINE(2316)
																	Float tmp73 = A;		HX_STACK_VAR(tmp73,"tmp73");
																	HX_STACK_LINE(2316)
																	Float tmp74 = (tmp72 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
																	HX_STACK_LINE(2316)
																	t1 = tmp74;
																	HX_STACK_LINE(2317)
																	tmp36 = true;
																}
															}
															HX_STACK_LINE(2290)
															bool two = tmp36;		HX_STACK_VAR(two,"two");
															HX_STACK_LINE(2320)
															Float tmp37 = t0;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(2320)
															Float tmp38 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(2320)
															Float tmp39 = ((int)1 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(2320)
															bool tmp40 = (tmp37 < tmp39);		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(2320)
															bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(2320)
															if ((tmp40)){
																HX_STACK_LINE(2320)
																Float tmp42 = t1;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(2320)
																Float tmp43 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(2320)
																Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(2320)
																tmp41 = (tmp42 > tmp44);
															}
															else{
																HX_STACK_LINE(2320)
																tmp41 = false;
															}
															HX_STACK_LINE(2320)
															if ((tmp41)){
																HX_STACK_LINE(2321)
																Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
																HX_STACK_LINE(2322)
																Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
																HX_STACK_LINE(2323)
																{
																	HX_STACK_LINE(2324)
																	Float T = t0;		HX_STACK_VAR(T,"T");
																	HX_STACK_LINE(2333)
																	Float tmp42 = u->x;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(2333)
																	Float tmp43 = (v->x - u->x);		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(2333)
																	Float tmp44 = T;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(2333)
																	Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(2333)
																	Float tmp46 = (tmp42 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(2333)
																	cx = tmp46;
																	HX_STACK_LINE(2334)
																	Float tmp47 = u->y;		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(2334)
																	Float tmp48 = (v->y - u->y);		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(2334)
																	Float tmp49 = T;		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(2334)
																	Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(2334)
																	Float tmp51 = (tmp47 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(2334)
																	cy = tmp51;
																}
																HX_STACK_LINE(2336)
																bool tmp42 = (fst_vert != null());		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(2336)
																bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(2336)
																if ((tmp42)){
																	HX_STACK_LINE(2336)
																	Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(2336)
																	{
																		HX_STACK_LINE(2336)
																		Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
																		HX_STACK_LINE(2336)
																		Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
																		HX_STACK_LINE(2336)
																		{
																			HX_STACK_LINE(2336)
																			Float tmp45 = (fst_vert->x - cx);		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(2336)
																			Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																			HX_STACK_LINE(2336)
																			dx = tmp46;
																			HX_STACK_LINE(2336)
																			Float tmp47 = (fst_vert->y - cy);		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(2336)
																			Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(2336)
																			dy = tmp48;
																		}
																		HX_STACK_LINE(2336)
																		Float tmp45 = (dx * dx);		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(2336)
																		Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(2336)
																		Float tmp47 = (dy * dy);		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(2336)
																		Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(2336)
																		Float tmp49 = (tmp46 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
																		HX_STACK_LINE(2336)
																		tmp44 = tmp49;
																	}
																	HX_STACK_LINE(2336)
																	Float tmp45 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(2336)
																	Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(2336)
																	tmp43 = (tmp44 < tmp46);
																}
																else{
																	HX_STACK_LINE(2336)
																	tmp43 = false;
																}
																HX_STACK_LINE(2336)
																if ((tmp43)){
																	HX_STACK_LINE(2337)
																	state = (int)0;
																	HX_STACK_LINE(2338)
																	{
																		HX_STACK_LINE(2339)
																		cx_ite = beg_ite;
																		HX_STACK_LINE(2340)
																		break;
																	}
																}
																HX_STACK_LINE(2343)
																::zpp_nape::geom::ZPP_Vec2 tmp44;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(2343)
																{
																	HX_STACK_LINE(2343)
																	bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																	HX_STACK_LINE(2343)
																	::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																	HX_STACK_LINE(2343)
																	{
																		HX_STACK_LINE(2343)
																		::zpp_nape::geom::ZPP_Vec2 tmp45 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(2343)
																		bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(2343)
																		if ((tmp46)){
																			HX_STACK_LINE(2343)
																			::zpp_nape::geom::ZPP_Vec2 tmp47 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(2343)
																			ret = tmp47;
																		}
																		else{
																			HX_STACK_LINE(2343)
																			::zpp_nape::geom::ZPP_Vec2 tmp47 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(2343)
																			ret = tmp47;
																			HX_STACK_LINE(2343)
																			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																			HX_STACK_LINE(2343)
																			ret->next = null();
																		}
																		HX_STACK_LINE(2343)
																		ret->weak = false;
																	}
																	HX_STACK_LINE(2343)
																	ret->_immutable = immutable;
																	HX_STACK_LINE(2343)
																	{
																		HX_STACK_LINE(2343)
																		ret->x = cx;
																		HX_STACK_LINE(2343)
																		ret->y = cy;
																		HX_STACK_LINE(2343)
																		{
																		}
																	}
																	HX_STACK_LINE(2343)
																	tmp44 = ret;
																}
																HX_STACK_LINE(2343)
																::zpp_nape::geom::ZPP_Vec2 cp = tmp44;		HX_STACK_VAR(cp,"cp");
																HX_STACK_LINE(2344)
																::zpp_nape::util::ZNPList_ZPP_Vec2 tmp45 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(2344)
																::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp46 = tmp45->head;		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(2344)
																bool tmp47 = (tmp46 == null());		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(2344)
																bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(2344)
																if ((tmp48)){
																	HX_STACK_LINE(2345)
																	::zpp_nape::util::ZNPList_ZPP_Vec2 tmp49 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(2345)
																	::zpp_nape::util::ZNPList_ZPP_Vec2 tmp50 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(2345)
																	::zpp_nape::geom::ZPP_Vec2 tmp51 = tmp50->head->elt;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(2345)
																	tmp49->add(tmp51);
																	HX_STACK_LINE(2346)
																	::zpp_nape::util::ZNPList_ZPP_Vec2 tmp52 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(2346)
																	::zpp_nape::geom::ZPP_Vec2 tmp53 = cp;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(2346)
																	tmp52->add(tmp53);
																}
																HX_STACK_LINE(2348)
																::zpp_nape::util::ZNPList_ZPP_Vec2 tmp49 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(2348)
																::zpp_nape::geom::ZPP_Vec2 tmp50 = cp;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(2348)
																tmp49->add(tmp50);
																HX_STACK_LINE(2349)
																bool tmp51 = (fst_vert == null());		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(2349)
																if ((tmp51)){
																	HX_STACK_LINE(2349)
																	::zpp_nape::util::ZNPList_ZPP_Vec2 tmp52 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(2349)
																	::zpp_nape::geom::ZPP_Vec2 tmp53 = tmp52->head->elt;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(2349)
																	fst_vert = tmp53;
																}
																HX_STACK_LINE(2350)
																bool tmp52 = two;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(2350)
																if ((tmp52)){
																	HX_STACK_LINE(2351)
																	Float cx1 = ((Float)0.0);		HX_STACK_VAR(cx1,"cx1");
																	HX_STACK_LINE(2352)
																	Float cy1 = ((Float)0.0);		HX_STACK_VAR(cy1,"cy1");
																	HX_STACK_LINE(2353)
																	{
																		HX_STACK_LINE(2354)
																		Float T = t1;		HX_STACK_VAR(T,"T");
																		HX_STACK_LINE(2363)
																		Float tmp53 = u->x;		HX_STACK_VAR(tmp53,"tmp53");
																		HX_STACK_LINE(2363)
																		Float tmp54 = (v->x - u->x);		HX_STACK_VAR(tmp54,"tmp54");
																		HX_STACK_LINE(2363)
																		Float tmp55 = T;		HX_STACK_VAR(tmp55,"tmp55");
																		HX_STACK_LINE(2363)
																		Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
																		HX_STACK_LINE(2363)
																		Float tmp57 = (tmp53 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
																		HX_STACK_LINE(2363)
																		cx1 = tmp57;
																		HX_STACK_LINE(2364)
																		Float tmp58 = u->y;		HX_STACK_VAR(tmp58,"tmp58");
																		HX_STACK_LINE(2364)
																		Float tmp59 = (v->y - u->y);		HX_STACK_VAR(tmp59,"tmp59");
																		HX_STACK_LINE(2364)
																		Float tmp60 = T;		HX_STACK_VAR(tmp60,"tmp60");
																		HX_STACK_LINE(2364)
																		Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
																		HX_STACK_LINE(2364)
																		Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
																		HX_STACK_LINE(2364)
																		cy1 = tmp62;
																	}
																	HX_STACK_LINE(2366)
																	::zpp_nape::util::ZNPList_ZPP_Vec2 tmp53 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(2366)
																	::zpp_nape::geom::ZPP_Vec2 tmp54;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(2366)
																	{
																		HX_STACK_LINE(2366)
																		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																		HX_STACK_LINE(2366)
																		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																		HX_STACK_LINE(2366)
																		{
																			HX_STACK_LINE(2366)
																			::zpp_nape::geom::ZPP_Vec2 tmp55 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp55,"tmp55");
																			HX_STACK_LINE(2366)
																			bool tmp56 = (tmp55 == null());		HX_STACK_VAR(tmp56,"tmp56");
																			HX_STACK_LINE(2366)
																			if ((tmp56)){
																				HX_STACK_LINE(2366)
																				::zpp_nape::geom::ZPP_Vec2 tmp57 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp57,"tmp57");
																				HX_STACK_LINE(2366)
																				ret = tmp57;
																			}
																			else{
																				HX_STACK_LINE(2366)
																				::zpp_nape::geom::ZPP_Vec2 tmp57 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp57,"tmp57");
																				HX_STACK_LINE(2366)
																				ret = tmp57;
																				HX_STACK_LINE(2366)
																				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																				HX_STACK_LINE(2366)
																				ret->next = null();
																			}
																			HX_STACK_LINE(2366)
																			ret->weak = false;
																		}
																		HX_STACK_LINE(2366)
																		ret->_immutable = immutable;
																		HX_STACK_LINE(2366)
																		{
																			HX_STACK_LINE(2366)
																			ret->x = cx1;
																			HX_STACK_LINE(2366)
																			ret->y = cy1;
																			HX_STACK_LINE(2366)
																			{
																			}
																		}
																		HX_STACK_LINE(2366)
																		tmp54 = ret;
																	}
																	HX_STACK_LINE(2366)
																	tmp53->add(tmp54);
																}
															}
														}
													}
													HX_STACK_LINE(2371)
													u = v;
													HX_STACK_LINE(2372)
													vi1 = cx_ite;
													HX_STACK_LINE(2373)
													vind = vind2;
												}
												HX_STACK_LINE(2375)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(2376)
												bool tmp30 = (cx_ite == null());		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(2376)
												if ((tmp30)){
													HX_STACK_LINE(2376)
													::zpp_nape::geom::ZPP_Vec2 tmp31 = s2->polygon->gverts;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(2376)
													cx_ite = tmp31->next;
												}
												HX_STACK_LINE(2378)
												bool tmp31 = true;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(2226)
												if ((tmp31)){
													HX_STACK_LINE(2226)
													break;
												}
											}
											HX_STACK_LINE(2379)
											while((true)){
												HX_STACK_LINE(2379)
												bool tmp30 = (cx_ite != beg_ite);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(2379)
												bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(2379)
												if ((tmp31)){
													HX_STACK_LINE(2379)
													break;
												}
												HX_STACK_LINE(2380)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2381)
												{
													HX_STACK_LINE(2382)
													int tmp32 = (vind + (int)1);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(2382)
													int vind2 = tmp32;		HX_STACK_VAR(vind2,"vind2");
													HX_STACK_LINE(2383)
													int tmp33 = vind2;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(2383)
													int tmp34 = s2->polygon->edgeCnt;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(2383)
													bool tmp35 = (tmp33 == tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(2383)
													if ((tmp35)){
														HX_STACK_LINE(2383)
														vind2 = (int)0;
													}
													HX_STACK_LINE(2384)
													bool tmp36 = inte->__get(vind);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(2384)
													if ((tmp36)){
														HX_STACK_LINE(2385)
														bool tmp37 = ins->__get(vind2);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(2385)
														if ((tmp37)){
															HX_STACK_LINE(2386)
															Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(2386)
															{
																HX_STACK_LINE(2387)
																Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
																HX_STACK_LINE(2388)
																Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
																HX_STACK_LINE(2389)
																{
																	HX_STACK_LINE(2390)
																	Float tmp39 = (v->x - u->x);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(2390)
																	vx = tmp39;
																	HX_STACK_LINE(2391)
																	Float tmp40 = (v->y - u->y);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(2391)
																	vy = tmp40;
																}
																HX_STACK_LINE(2393)
																Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
																HX_STACK_LINE(2394)
																Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
																HX_STACK_LINE(2395)
																{
																	HX_STACK_LINE(2396)
																	Float tmp39 = u->x;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(2396)
																	Float tmp40 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(2396)
																	Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(2396)
																	qx = tmp41;
																	HX_STACK_LINE(2397)
																	Float tmp42 = u->y;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(2397)
																	Float tmp43 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(2397)
																	Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(2397)
																	qy = tmp44;
																}
																HX_STACK_LINE(2399)
																Float tmp39 = (vx * vx);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(2399)
																Float tmp40 = (vy * vy);		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(2399)
																Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(2399)
																Float A = tmp41;		HX_STACK_VAR(A,"A");
																HX_STACK_LINE(2400)
																Float tmp42 = (qx * vx);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(2400)
																Float tmp43 = (qy * vy);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(2400)
																Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(2400)
																Float tmp45 = ((int)2 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(2400)
																Float B = tmp45;		HX_STACK_VAR(B,"B");
																HX_STACK_LINE(2401)
																Float tmp46 = (qx * qx);		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(2401)
																Float tmp47 = (qy * qy);		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(2401)
																Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(2401)
																Float tmp49 = s1->circle->radius;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(2401)
																Float tmp50 = s1->circle->radius;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(2401)
																Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(2401)
																Float tmp52 = (tmp48 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(2401)
																Float C = tmp52;		HX_STACK_VAR(C,"C");
																HX_STACK_LINE(2402)
																Float tmp53 = (B * B);		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(2402)
																Float tmp54 = ((int)4 * A);		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(2402)
																Float tmp55 = C;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(2402)
																Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
																HX_STACK_LINE(2402)
																Float tmp57 = (tmp53 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
																HX_STACK_LINE(2402)
																Float tmp58 = ::Math_obj::sqrt(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
																HX_STACK_LINE(2402)
																Float D = tmp58;		HX_STACK_VAR(D,"D");
																HX_STACK_LINE(2403)
																Float tmp59 = ((int)2 * A);		HX_STACK_VAR(tmp59,"tmp59");
																HX_STACK_LINE(2403)
																Float tmp60 = (Float((int)1) / Float(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
																HX_STACK_LINE(2403)
																A = tmp60;
																HX_STACK_LINE(2404)
																Float tmp61 = B;		HX_STACK_VAR(tmp61,"tmp61");
																HX_STACK_LINE(2404)
																Float tmp62 = -(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
																HX_STACK_LINE(2404)
																Float tmp63 = D;		HX_STACK_VAR(tmp63,"tmp63");
																HX_STACK_LINE(2404)
																Float tmp64 = (tmp62 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
																HX_STACK_LINE(2404)
																Float tmp65 = A;		HX_STACK_VAR(tmp65,"tmp65");
																HX_STACK_LINE(2404)
																Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
																HX_STACK_LINE(2404)
																Float t = tmp66;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(2405)
																Float tmp67 = t;		HX_STACK_VAR(tmp67,"tmp67");
																HX_STACK_LINE(2405)
																Float tmp68 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp68,"tmp68");
																HX_STACK_LINE(2405)
																bool tmp69 = (tmp67 < tmp68);		HX_STACK_VAR(tmp69,"tmp69");
																HX_STACK_LINE(2405)
																if ((tmp69)){
																	HX_STACK_LINE(2405)
																	Float tmp70 = B;		HX_STACK_VAR(tmp70,"tmp70");
																	HX_STACK_LINE(2405)
																	Float tmp71 = -(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
																	HX_STACK_LINE(2405)
																	Float tmp72 = D;		HX_STACK_VAR(tmp72,"tmp72");
																	HX_STACK_LINE(2405)
																	Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
																	HX_STACK_LINE(2405)
																	Float tmp74 = A;		HX_STACK_VAR(tmp74,"tmp74");
																	HX_STACK_LINE(2405)
																	tmp38 = (tmp73 * tmp74);
																}
																else{
																	HX_STACK_LINE(2406)
																	tmp38 = t;
																}
															}
															HX_STACK_LINE(2386)
															Float tval = tmp38;		HX_STACK_VAR(tval,"tval");
															HX_STACK_LINE(2408)
															Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
															HX_STACK_LINE(2409)
															Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
															HX_STACK_LINE(2410)
															{
																HX_STACK_LINE(2411)
																Float T = tval;		HX_STACK_VAR(T,"T");
																HX_STACK_LINE(2420)
																Float tmp39 = u->x;		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(2420)
																Float tmp40 = (v->x - u->x);		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(2420)
																Float tmp41 = T;		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(2420)
																Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(2420)
																Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(2420)
																cx = tmp43;
																HX_STACK_LINE(2421)
																Float tmp44 = u->y;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(2421)
																Float tmp45 = (v->y - u->y);		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(2421)
																Float tmp46 = T;		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(2421)
																Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(2421)
																Float tmp48 = (tmp44 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(2421)
																cy = tmp48;
															}
															HX_STACK_LINE(2423)
															Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(2423)
															{
																HX_STACK_LINE(2423)
																Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
																HX_STACK_LINE(2423)
																Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
																HX_STACK_LINE(2423)
																{
																	HX_STACK_LINE(2423)
																	Float tmp40 = (fst_vert->x - cx);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(2423)
																	dx = tmp40;
																	HX_STACK_LINE(2423)
																	Float tmp41 = (fst_vert->y - cy);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(2423)
																	dy = tmp41;
																}
																HX_STACK_LINE(2423)
																Float tmp40 = (dx * dx);		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(2423)
																Float tmp41 = (dy * dy);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(2423)
																tmp39 = (tmp40 + tmp41);
															}
															HX_STACK_LINE(2423)
															Float tmp40 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(2423)
															bool tmp41 = (tmp39 < tmp40);		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(2423)
															if ((tmp41)){
																HX_STACK_LINE(2424)
																state = (int)0;
																HX_STACK_LINE(2425)
																{
																	HX_STACK_LINE(2426)
																	cx_ite = beg_ite;
																	HX_STACK_LINE(2427)
																	break;
																}
															}
															HX_STACK_LINE(2430)
															::zpp_nape::geom::ZPP_Vec2 tmp42;		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(2430)
															{
																HX_STACK_LINE(2430)
																bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																HX_STACK_LINE(2430)
																::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																HX_STACK_LINE(2430)
																{
																	HX_STACK_LINE(2430)
																	::zpp_nape::geom::ZPP_Vec2 tmp43 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(2430)
																	bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(2430)
																	if ((tmp44)){
																		HX_STACK_LINE(2430)
																		::zpp_nape::geom::ZPP_Vec2 tmp45 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(2430)
																		ret = tmp45;
																	}
																	else{
																		HX_STACK_LINE(2430)
																		::zpp_nape::geom::ZPP_Vec2 tmp45 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(2430)
																		ret = tmp45;
																		HX_STACK_LINE(2430)
																		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																		HX_STACK_LINE(2430)
																		ret->next = null();
																	}
																	HX_STACK_LINE(2430)
																	ret->weak = false;
																}
																HX_STACK_LINE(2430)
																ret->_immutable = immutable;
																HX_STACK_LINE(2430)
																{
																	HX_STACK_LINE(2430)
																	ret->x = cx;
																	HX_STACK_LINE(2430)
																	ret->y = cy;
																	HX_STACK_LINE(2430)
																	{
																	}
																}
																HX_STACK_LINE(2430)
																tmp42 = ret;
															}
															HX_STACK_LINE(2430)
															::zpp_nape::geom::ZPP_Vec2 cp = tmp42;		HX_STACK_VAR(cp,"cp");
															HX_STACK_LINE(2431)
															::zpp_nape::util::ZNPList_ZPP_Vec2 tmp43 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(2431)
															::zpp_nape::util::ZNPList_ZPP_Vec2 tmp44 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(2431)
															::zpp_nape::geom::ZPP_Vec2 tmp45 = tmp44->head->elt;		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(2431)
															tmp43->add(tmp45);
															HX_STACK_LINE(2432)
															::zpp_nape::util::ZNPList_ZPP_Vec2 tmp46 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(2432)
															::zpp_nape::geom::ZPP_Vec2 tmp47 = cp;		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(2432)
															tmp46->add(tmp47);
															HX_STACK_LINE(2433)
															::zpp_nape::util::ZNPList_ZPP_Vec2 tmp48 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(2433)
															::zpp_nape::geom::ZPP_Vec2 tmp49 = cp;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(2433)
															tmp48->add(tmp49);
															HX_STACK_LINE(2434)
															state = (int)1;
															HX_STACK_LINE(2435)
															{
																HX_STACK_LINE(2436)
																cx_ite = beg_ite;
																HX_STACK_LINE(2437)
																break;
															}
														}
														else{
															HX_STACK_LINE(2441)
															Float t0 = ((Float)0.0);		HX_STACK_VAR(t0,"t0");
															HX_STACK_LINE(2442)
															Float t1 = ((Float)0.0);		HX_STACK_VAR(t1,"t1");
															HX_STACK_LINE(2443)
															bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(2443)
															{
																HX_STACK_LINE(2444)
																Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
																HX_STACK_LINE(2445)
																Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
																HX_STACK_LINE(2446)
																{
																	HX_STACK_LINE(2447)
																	Float tmp39 = (v->x - u->x);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(2447)
																	vx = tmp39;
																	HX_STACK_LINE(2448)
																	Float tmp40 = (v->y - u->y);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(2448)
																	vy = tmp40;
																}
																HX_STACK_LINE(2450)
																Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
																HX_STACK_LINE(2451)
																Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
																HX_STACK_LINE(2452)
																{
																	HX_STACK_LINE(2453)
																	Float tmp39 = u->x;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(2453)
																	Float tmp40 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(2453)
																	Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(2453)
																	qx = tmp41;
																	HX_STACK_LINE(2454)
																	Float tmp42 = u->y;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(2454)
																	Float tmp43 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(2454)
																	Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(2454)
																	qy = tmp44;
																}
																HX_STACK_LINE(2456)
																Float tmp39 = (vx * vx);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(2456)
																Float tmp40 = (vy * vy);		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(2456)
																Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(2456)
																Float A = tmp41;		HX_STACK_VAR(A,"A");
																HX_STACK_LINE(2457)
																Float tmp42 = (qx * vx);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(2457)
																Float tmp43 = (qy * vy);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(2457)
																Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(2457)
																Float tmp45 = ((int)2 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(2457)
																Float B = tmp45;		HX_STACK_VAR(B,"B");
																HX_STACK_LINE(2458)
																Float tmp46 = (qx * qx);		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(2458)
																Float tmp47 = (qy * qy);		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(2458)
																Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(2458)
																Float tmp49 = s1->circle->radius;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(2458)
																Float tmp50 = s1->circle->radius;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(2458)
																Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(2458)
																Float tmp52 = (tmp48 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(2458)
																Float C = tmp52;		HX_STACK_VAR(C,"C");
																HX_STACK_LINE(2459)
																Float tmp53 = (B * B);		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(2459)
																Float tmp54 = ((int)4 * A);		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(2459)
																Float tmp55 = C;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(2459)
																Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
																HX_STACK_LINE(2459)
																Float tmp57 = (tmp53 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
																HX_STACK_LINE(2459)
																Float D = tmp57;		HX_STACK_VAR(D,"D");
																HX_STACK_LINE(2460)
																Float tmp58 = (D * D);		HX_STACK_VAR(tmp58,"tmp58");
																HX_STACK_LINE(2460)
																Float tmp59 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp59,"tmp59");
																HX_STACK_LINE(2460)
																bool tmp60 = (tmp58 < tmp59);		HX_STACK_VAR(tmp60,"tmp60");
																HX_STACK_LINE(2460)
																if ((tmp60)){
																	HX_STACK_LINE(2461)
																	bool tmp61 = (D < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
																	HX_STACK_LINE(2461)
																	if ((tmp61)){
																		HX_STACK_LINE(2461)
																		t0 = ((Float)10.0);
																	}
																	else{
																		HX_STACK_LINE(2462)
																		Float tmp62 = B;		HX_STACK_VAR(tmp62,"tmp62");
																		HX_STACK_LINE(2462)
																		Float tmp63 = -(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
																		HX_STACK_LINE(2462)
																		Float tmp64 = ((int)2 * A);		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(2462)
																		Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
																		HX_STACK_LINE(2462)
																		Float tmp66 = t1 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
																		HX_STACK_LINE(2462)
																		t0 = tmp66;
																	}
																	HX_STACK_LINE(2463)
																	tmp38 = false;
																}
																else{
																	HX_STACK_LINE(2466)
																	Float tmp61 = D;		HX_STACK_VAR(tmp61,"tmp61");
																	HX_STACK_LINE(2466)
																	Float tmp62 = ::Math_obj::sqrt(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
																	HX_STACK_LINE(2466)
																	D = tmp62;
																	HX_STACK_LINE(2467)
																	Float tmp63 = ((int)2 * A);		HX_STACK_VAR(tmp63,"tmp63");
																	HX_STACK_LINE(2467)
																	Float tmp64 = (Float((int)1) / Float(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
																	HX_STACK_LINE(2467)
																	A = tmp64;
																	HX_STACK_LINE(2468)
																	Float tmp65 = B;		HX_STACK_VAR(tmp65,"tmp65");
																	HX_STACK_LINE(2468)
																	Float tmp66 = -(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
																	HX_STACK_LINE(2468)
																	Float tmp67 = D;		HX_STACK_VAR(tmp67,"tmp67");
																	HX_STACK_LINE(2468)
																	Float tmp68 = (tmp66 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
																	HX_STACK_LINE(2468)
																	Float tmp69 = A;		HX_STACK_VAR(tmp69,"tmp69");
																	HX_STACK_LINE(2468)
																	Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
																	HX_STACK_LINE(2468)
																	t0 = tmp70;
																	HX_STACK_LINE(2469)
																	Float tmp71 = B;		HX_STACK_VAR(tmp71,"tmp71");
																	HX_STACK_LINE(2469)
																	Float tmp72 = -(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
																	HX_STACK_LINE(2469)
																	Float tmp73 = D;		HX_STACK_VAR(tmp73,"tmp73");
																	HX_STACK_LINE(2469)
																	Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
																	HX_STACK_LINE(2469)
																	Float tmp75 = A;		HX_STACK_VAR(tmp75,"tmp75");
																	HX_STACK_LINE(2469)
																	Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
																	HX_STACK_LINE(2469)
																	t1 = tmp76;
																	HX_STACK_LINE(2470)
																	tmp38 = true;
																}
															}
															HX_STACK_LINE(2443)
															bool two = tmp38;		HX_STACK_VAR(two,"two");
															HX_STACK_LINE(2473)
															Float tmp39 = t0;		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(2473)
															Float tmp40 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(2473)
															Float tmp41 = ((int)1 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(2473)
															bool tmp42 = (tmp39 < tmp41);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(2473)
															bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(2473)
															if ((tmp42)){
																HX_STACK_LINE(2473)
																Float tmp44 = t1;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(2473)
																Float tmp45 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(2473)
																Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(2473)
																tmp43 = (tmp44 > tmp46);
															}
															else{
																HX_STACK_LINE(2473)
																tmp43 = false;
															}
															HX_STACK_LINE(2473)
															if ((tmp43)){
																HX_STACK_LINE(2474)
																Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
																HX_STACK_LINE(2475)
																Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
																HX_STACK_LINE(2476)
																{
																	HX_STACK_LINE(2477)
																	Float T = t0;		HX_STACK_VAR(T,"T");
																	HX_STACK_LINE(2486)
																	Float tmp44 = u->x;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(2486)
																	Float tmp45 = (v->x - u->x);		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(2486)
																	Float tmp46 = T;		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(2486)
																	Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(2486)
																	Float tmp48 = (tmp44 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(2486)
																	cx = tmp48;
																	HX_STACK_LINE(2487)
																	Float tmp49 = u->y;		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(2487)
																	Float tmp50 = (v->y - u->y);		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(2487)
																	Float tmp51 = T;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(2487)
																	Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(2487)
																	Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(2487)
																	cy = tmp53;
																}
																HX_STACK_LINE(2489)
																bool tmp44 = (fst_vert != null());		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(2489)
																bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(2489)
																if ((tmp44)){
																	HX_STACK_LINE(2489)
																	Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(2489)
																	{
																		HX_STACK_LINE(2489)
																		Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
																		HX_STACK_LINE(2489)
																		Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
																		HX_STACK_LINE(2489)
																		{
																			HX_STACK_LINE(2489)
																			Float tmp47 = (fst_vert->x - cx);		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(2489)
																			Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(2489)
																			dx = tmp48;
																			HX_STACK_LINE(2489)
																			Float tmp49 = (fst_vert->y - cy);		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(2489)
																			Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																			HX_STACK_LINE(2489)
																			dy = tmp50;
																		}
																		HX_STACK_LINE(2489)
																		Float tmp47 = (dx * dx);		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(2489)
																		Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(2489)
																		Float tmp49 = (dy * dy);		HX_STACK_VAR(tmp49,"tmp49");
																		HX_STACK_LINE(2489)
																		Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																		HX_STACK_LINE(2489)
																		Float tmp51 = (tmp48 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
																		HX_STACK_LINE(2489)
																		tmp46 = tmp51;
																	}
																	HX_STACK_LINE(2489)
																	Float tmp47 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(2489)
																	Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(2489)
																	tmp45 = (tmp46 < tmp48);
																}
																else{
																	HX_STACK_LINE(2489)
																	tmp45 = false;
																}
																HX_STACK_LINE(2489)
																if ((tmp45)){
																	HX_STACK_LINE(2490)
																	state = (int)0;
																	HX_STACK_LINE(2491)
																	{
																		HX_STACK_LINE(2492)
																		cx_ite = beg_ite;
																		HX_STACK_LINE(2493)
																		break;
																	}
																}
																HX_STACK_LINE(2496)
																::zpp_nape::geom::ZPP_Vec2 tmp46;		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(2496)
																{
																	HX_STACK_LINE(2496)
																	bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																	HX_STACK_LINE(2496)
																	::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																	HX_STACK_LINE(2496)
																	{
																		HX_STACK_LINE(2496)
																		::zpp_nape::geom::ZPP_Vec2 tmp47 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(2496)
																		bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(2496)
																		if ((tmp48)){
																			HX_STACK_LINE(2496)
																			::zpp_nape::geom::ZPP_Vec2 tmp49 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(2496)
																			ret = tmp49;
																		}
																		else{
																			HX_STACK_LINE(2496)
																			::zpp_nape::geom::ZPP_Vec2 tmp49 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(2496)
																			ret = tmp49;
																			HX_STACK_LINE(2496)
																			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																			HX_STACK_LINE(2496)
																			ret->next = null();
																		}
																		HX_STACK_LINE(2496)
																		ret->weak = false;
																	}
																	HX_STACK_LINE(2496)
																	ret->_immutable = immutable;
																	HX_STACK_LINE(2496)
																	{
																		HX_STACK_LINE(2496)
																		ret->x = cx;
																		HX_STACK_LINE(2496)
																		ret->y = cy;
																		HX_STACK_LINE(2496)
																		{
																		}
																	}
																	HX_STACK_LINE(2496)
																	tmp46 = ret;
																}
																HX_STACK_LINE(2496)
																::zpp_nape::geom::ZPP_Vec2 cp = tmp46;		HX_STACK_VAR(cp,"cp");
																HX_STACK_LINE(2497)
																::zpp_nape::util::ZNPList_ZPP_Vec2 tmp47 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(2497)
																::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp48 = tmp47->head;		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(2497)
																bool tmp49 = (tmp48 == null());		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(2497)
																bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(2497)
																if ((tmp50)){
																	HX_STACK_LINE(2498)
																	::zpp_nape::util::ZNPList_ZPP_Vec2 tmp51 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(2498)
																	::zpp_nape::util::ZNPList_ZPP_Vec2 tmp52 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(2498)
																	::zpp_nape::geom::ZPP_Vec2 tmp53 = tmp52->head->elt;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(2498)
																	tmp51->add(tmp53);
																	HX_STACK_LINE(2499)
																	::zpp_nape::util::ZNPList_ZPP_Vec2 tmp54 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(2499)
																	::zpp_nape::geom::ZPP_Vec2 tmp55 = cp;		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(2499)
																	tmp54->add(tmp55);
																}
																HX_STACK_LINE(2501)
																::zpp_nape::util::ZNPList_ZPP_Vec2 tmp51 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(2501)
																::zpp_nape::geom::ZPP_Vec2 tmp52 = cp;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(2501)
																tmp51->add(tmp52);
																HX_STACK_LINE(2502)
																bool tmp53 = (fst_vert == null());		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(2502)
																if ((tmp53)){
																	HX_STACK_LINE(2502)
																	::zpp_nape::util::ZNPList_ZPP_Vec2 tmp54 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(2502)
																	::zpp_nape::geom::ZPP_Vec2 tmp55 = tmp54->head->elt;		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(2502)
																	fst_vert = tmp55;
																}
																HX_STACK_LINE(2503)
																bool tmp54 = two;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(2503)
																if ((tmp54)){
																	HX_STACK_LINE(2504)
																	Float cx1 = ((Float)0.0);		HX_STACK_VAR(cx1,"cx1");
																	HX_STACK_LINE(2505)
																	Float cy1 = ((Float)0.0);		HX_STACK_VAR(cy1,"cy1");
																	HX_STACK_LINE(2506)
																	{
																		HX_STACK_LINE(2507)
																		Float T = t1;		HX_STACK_VAR(T,"T");
																		HX_STACK_LINE(2516)
																		Float tmp55 = u->x;		HX_STACK_VAR(tmp55,"tmp55");
																		HX_STACK_LINE(2516)
																		Float tmp56 = (v->x - u->x);		HX_STACK_VAR(tmp56,"tmp56");
																		HX_STACK_LINE(2516)
																		Float tmp57 = T;		HX_STACK_VAR(tmp57,"tmp57");
																		HX_STACK_LINE(2516)
																		Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
																		HX_STACK_LINE(2516)
																		Float tmp59 = (tmp55 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
																		HX_STACK_LINE(2516)
																		cx1 = tmp59;
																		HX_STACK_LINE(2517)
																		Float tmp60 = u->y;		HX_STACK_VAR(tmp60,"tmp60");
																		HX_STACK_LINE(2517)
																		Float tmp61 = (v->y - u->y);		HX_STACK_VAR(tmp61,"tmp61");
																		HX_STACK_LINE(2517)
																		Float tmp62 = T;		HX_STACK_VAR(tmp62,"tmp62");
																		HX_STACK_LINE(2517)
																		Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
																		HX_STACK_LINE(2517)
																		Float tmp64 = (tmp60 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(2517)
																		cy1 = tmp64;
																	}
																	HX_STACK_LINE(2519)
																	::zpp_nape::util::ZNPList_ZPP_Vec2 tmp55 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(2519)
																	::zpp_nape::geom::ZPP_Vec2 tmp56;		HX_STACK_VAR(tmp56,"tmp56");
																	HX_STACK_LINE(2519)
																	{
																		HX_STACK_LINE(2519)
																		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																		HX_STACK_LINE(2519)
																		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																		HX_STACK_LINE(2519)
																		{
																			HX_STACK_LINE(2519)
																			::zpp_nape::geom::ZPP_Vec2 tmp57 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp57,"tmp57");
																			HX_STACK_LINE(2519)
																			bool tmp58 = (tmp57 == null());		HX_STACK_VAR(tmp58,"tmp58");
																			HX_STACK_LINE(2519)
																			if ((tmp58)){
																				HX_STACK_LINE(2519)
																				::zpp_nape::geom::ZPP_Vec2 tmp59 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp59,"tmp59");
																				HX_STACK_LINE(2519)
																				ret = tmp59;
																			}
																			else{
																				HX_STACK_LINE(2519)
																				::zpp_nape::geom::ZPP_Vec2 tmp59 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp59,"tmp59");
																				HX_STACK_LINE(2519)
																				ret = tmp59;
																				HX_STACK_LINE(2519)
																				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																				HX_STACK_LINE(2519)
																				ret->next = null();
																			}
																			HX_STACK_LINE(2519)
																			ret->weak = false;
																		}
																		HX_STACK_LINE(2519)
																		ret->_immutable = immutable;
																		HX_STACK_LINE(2519)
																		{
																			HX_STACK_LINE(2519)
																			ret->x = cx1;
																			HX_STACK_LINE(2519)
																			ret->y = cy1;
																			HX_STACK_LINE(2519)
																			{
																			}
																		}
																		HX_STACK_LINE(2519)
																		tmp56 = ret;
																	}
																	HX_STACK_LINE(2519)
																	tmp55->add(tmp56);
																}
															}
														}
													}
													HX_STACK_LINE(2524)
													u = v;
													HX_STACK_LINE(2525)
													vi1 = cx_ite;
													HX_STACK_LINE(2526)
													vind = vind2;
												}
												HX_STACK_LINE(2528)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(2529)
												bool tmp32 = (cx_ite == null());		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(2529)
												if ((tmp32)){
													HX_STACK_LINE(2529)
													::zpp_nape::geom::ZPP_Vec2 tmp33 = s2->polygon->gverts;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(2529)
													cx_ite = tmp33->next;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(2534)
							::zpp_nape::util::ZNPList_ZPP_Vec2 tmp25 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2534)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp26 = tmp25->head;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2534)
							bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2534)
							if ((tmp27)){
								HX_STACK_LINE(2535)
								tmp2 = false;
							}
							else{
								HX_STACK_LINE(2537)
								::zpp_nape::util::ZNPList_ZPP_Vec2 tmp28 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2537)
								::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp29 = tmp28->head->next;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2537)
								bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2537)
								if ((tmp30)){
									HX_STACK_LINE(2538)
									bool all = true;		HX_STACK_VAR(all,"all");
									HX_STACK_LINE(2539)
									{
										HX_STACK_LINE(2540)
										::zpp_nape::util::ZNPList_ZPP_Edge tmp31 = s2->polygon->edges;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(2540)
										::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp31->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(2541)
										while((true)){
											HX_STACK_LINE(2541)
											bool tmp32 = (cx_ite != null());		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(2541)
											bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(2541)
											if ((tmp33)){
												HX_STACK_LINE(2541)
												break;
											}
											HX_STACK_LINE(2542)
											::zpp_nape::shape::ZPP_Edge e = cx_ite->elt;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(2543)
											{
												HX_STACK_LINE(2544)
												Float tmp34 = e->gnormx;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(2544)
												Float tmp35 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(2544)
												Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(2544)
												Float tmp37 = e->gnormy;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(2544)
												Float tmp38 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(2544)
												Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(2544)
												Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(2544)
												Float dist = tmp40;		HX_STACK_VAR(dist,"dist");
												HX_STACK_LINE(2545)
												bool tmp41 = (dist > e->gprojection);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(2545)
												if ((tmp41)){
													HX_STACK_LINE(2546)
													all = false;
													HX_STACK_LINE(2547)
													break;
												}
											}
											HX_STACK_LINE(2550)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(2553)
									bool tmp31 = all;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2553)
									if ((tmp31)){
										HX_STACK_LINE(2554)
										{
											HX_STACK_LINE(2554)
											Float tmp32 = s1->circle->area;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(2554)
											arb->overlap = tmp32;
											HX_STACK_LINE(2554)
											{
												HX_STACK_LINE(2554)
												Float tmp33 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(2554)
												arb->centroidx = tmp33;
												HX_STACK_LINE(2554)
												Float tmp34 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(2554)
												arb->centroidy = tmp34;
												HX_STACK_LINE(2554)
												Dynamic();
											}
										}
										HX_STACK_LINE(2555)
										tmp2 = true;
									}
									else{
										HX_STACK_LINE(2557)
										tmp2 = false;
									}
								}
								else{
									HX_STACK_LINE(2560)
									Float COMx = (int)0;		HX_STACK_VAR(COMx,"COMx");
									HX_STACK_LINE(2561)
									Float COMy = (int)0;		HX_STACK_VAR(COMy,"COMy");
									HX_STACK_LINE(2578)
									Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
									HX_STACK_LINE(2579)
									::zpp_nape::util::ZNPList_ZPP_Vec2 tmp31 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2579)
									::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp32 = tmp31->head->next;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2579)
									::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp33 = tmp32->next;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(2579)
									bool tmp34 = (tmp33 != null());		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(2579)
									if ((tmp34)){
										HX_STACK_LINE(2580)
										Float parea = ((Float)0.0);		HX_STACK_VAR(parea,"parea");
										HX_STACK_LINE(2581)
										Float pCOMx = ((Float)0.0);		HX_STACK_VAR(pCOMx,"pCOMx");
										HX_STACK_LINE(2582)
										Float pCOMy = ((Float)0.0);		HX_STACK_VAR(pCOMy,"pCOMy");
										HX_STACK_LINE(2583)
										{
											HX_STACK_LINE(2584)
											{
												HX_STACK_LINE(2585)
												pCOMx = (int)0;
												HX_STACK_LINE(2586)
												pCOMy = (int)0;
												HX_STACK_LINE(2595)
												{
												}
											}
											HX_STACK_LINE(2604)
											parea = ((Float)0.0);
											HX_STACK_LINE(2605)
											{
												HX_STACK_LINE(2606)
												::zpp_nape::util::ZNPList_ZPP_Vec2 tmp35 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(2606)
												::zpp_nape::util::ZNPNode_ZPP_Vec2 cx_ite = tmp35->head;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(2607)
												::zpp_nape::geom::ZPP_Vec2 u = cx_ite->elt;		HX_STACK_VAR(u,"u");
												HX_STACK_LINE(2608)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(2609)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite->elt;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2610)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(2611)
												while((true)){
													HX_STACK_LINE(2611)
													bool tmp36 = (cx_ite != null());		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(2611)
													bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(2611)
													if ((tmp37)){
														HX_STACK_LINE(2611)
														break;
													}
													HX_STACK_LINE(2612)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite->elt;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(2613)
													{
														HX_STACK_LINE(2614)
														Float tmp38 = v->x;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(2614)
														Float tmp39 = (w->y - u->y);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(2614)
														Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(2614)
														hx::AddEq(parea,tmp40);
														HX_STACK_LINE(2615)
														Float tmp41 = (w->y * v->x);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(2615)
														Float tmp42 = (w->x * v->y);		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(2615)
														Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(2615)
														Float cf = tmp43;		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(2616)
														Float tmp44 = (v->x + w->x);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(2616)
														Float tmp45 = cf;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(2616)
														Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(2616)
														hx::AddEq(pCOMx,tmp46);
														HX_STACK_LINE(2617)
														Float tmp47 = (v->y + w->y);		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(2617)
														Float tmp48 = cf;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(2617)
														Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(2617)
														hx::AddEq(pCOMy,tmp49);
													}
													HX_STACK_LINE(2619)
													u = v;
													HX_STACK_LINE(2620)
													v = w;
													HX_STACK_LINE(2621)
													cx_ite = cx_ite->next;
												}
												HX_STACK_LINE(2623)
												::zpp_nape::util::ZNPList_ZPP_Vec2 tmp36 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(2623)
												cx_ite = tmp36->head;
												HX_STACK_LINE(2624)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite->elt;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(2625)
												{
													HX_STACK_LINE(2626)
													Float tmp37 = v->x;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(2626)
													Float tmp38 = (w->y - u->y);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(2626)
													Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(2626)
													hx::AddEq(parea,tmp39);
													HX_STACK_LINE(2627)
													Float tmp40 = (w->y * v->x);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(2627)
													Float tmp41 = (w->x * v->y);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(2627)
													Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(2627)
													Float cf = tmp42;		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(2628)
													Float tmp43 = (v->x + w->x);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(2628)
													Float tmp44 = cf;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(2628)
													Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(2628)
													hx::AddEq(pCOMx,tmp45);
													HX_STACK_LINE(2629)
													Float tmp46 = (v->y + w->y);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(2629)
													Float tmp47 = cf;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(2629)
													Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(2629)
													hx::AddEq(pCOMy,tmp48);
												}
												HX_STACK_LINE(2631)
												u = v;
												HX_STACK_LINE(2632)
												v = w;
												HX_STACK_LINE(2633)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(2634)
												::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite->elt;		HX_STACK_VAR(w1,"w1");
												HX_STACK_LINE(2635)
												{
													HX_STACK_LINE(2636)
													Float tmp37 = v->x;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(2636)
													Float tmp38 = (w1->y - u->y);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(2636)
													Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(2636)
													hx::AddEq(parea,tmp39);
													HX_STACK_LINE(2637)
													Float tmp40 = (w1->y * v->x);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(2637)
													Float tmp41 = (w1->x * v->y);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(2637)
													Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(2637)
													Float cf = tmp42;		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(2638)
													Float tmp43 = (v->x + w1->x);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(2638)
													Float tmp44 = cf;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(2638)
													Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(2638)
													hx::AddEq(pCOMx,tmp45);
													HX_STACK_LINE(2639)
													Float tmp46 = (v->y + w1->y);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(2639)
													Float tmp47 = cf;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(2639)
													Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(2639)
													hx::AddEq(pCOMy,tmp48);
												}
											}
											HX_STACK_LINE(2642)
											hx::MultEq(parea,((Float)0.5));
											HX_STACK_LINE(2643)
											Float tmp35 = ((int)6 * parea);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(2643)
											Float tmp36 = (Float((int)1) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2643)
											Float ia = tmp36;		HX_STACK_VAR(ia,"ia");
											HX_STACK_LINE(2644)
											{
												HX_STACK_LINE(2645)
												Float t = ia;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(2654)
												hx::MultEq(pCOMx,t);
												HX_STACK_LINE(2655)
												hx::MultEq(pCOMy,t);
											}
										}
										HX_STACK_LINE(2658)
										{
											HX_STACK_LINE(2659)
											Float tmp35 = parea;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(2659)
											Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2659)
											Float t = tmp36;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(2668)
											Float tmp37 = (pCOMx * t);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2668)
											hx::AddEq(COMx,tmp37);
											HX_STACK_LINE(2669)
											Float tmp38 = (pCOMy * t);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2669)
											hx::AddEq(COMy,tmp38);
										}
										HX_STACK_LINE(2671)
										hx::SubEq(area,parea);
									}
									else{
										HX_STACK_LINE(2674)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp35 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(2674)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp36 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(2674)
										::zpp_nape::geom::ZPP_Vec2 tmp37 = tmp36->head->elt;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(2674)
										tmp35->add(tmp37);
										HX_STACK_LINE(2675)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp38 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(2675)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp39 = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(2675)
										::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp40 = tmp39->head->next;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(2675)
										::zpp_nape::geom::ZPP_Vec2 tmp41 = tmp40->elt;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(2675)
										tmp38->add(tmp41);
									}
									HX_STACK_LINE(2677)
									while((true)){
										HX_STACK_LINE(2677)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp35 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(2677)
										::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp36 = tmp35->head;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(2677)
										bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(2677)
										bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(2677)
										bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(2677)
										if ((tmp39)){
											HX_STACK_LINE(2677)
											break;
										}
										HX_STACK_LINE(2678)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp40 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(2678)
										::zpp_nape::geom::ZPP_Vec2 tmp41 = tmp40->pop_unsafe();		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(2678)
										::zpp_nape::geom::ZPP_Vec2 u = tmp41;		HX_STACK_VAR(u,"u");
										HX_STACK_LINE(2679)
										::zpp_nape::util::ZNPList_ZPP_Vec2 tmp42 = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(2679)
										::zpp_nape::geom::ZPP_Vec2 tmp43 = tmp42->pop_unsafe();		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(2679)
										::zpp_nape::geom::ZPP_Vec2 v = tmp43;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(2680)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(2681)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(2682)
										{
											HX_STACK_LINE(2683)
											Float tmp44 = (v->x - u->x);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(2683)
											dx = tmp44;
											HX_STACK_LINE(2684)
											Float tmp45 = (v->y - u->y);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(2684)
											dy = tmp45;
										}
										HX_STACK_LINE(2686)
										Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
										HX_STACK_LINE(2687)
										Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
										HX_STACK_LINE(2688)
										{
											HX_STACK_LINE(2689)
											nx = dx;
											HX_STACK_LINE(2690)
											ny = dy;
											HX_STACK_LINE(2699)
											{
											}
										}
										HX_STACK_LINE(2708)
										{
											HX_STACK_LINE(2709)
											{
												HX_STACK_LINE(2710)
												Float tmp44 = (nx * nx);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(2710)
												Float tmp45 = (ny * ny);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(2710)
												Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(2710)
												Float d = tmp46;		HX_STACK_VAR(d,"d");
												HX_STACK_LINE(2719)
												Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(2719)
												{
													HX_STACK_LINE(2719)
													Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(2719)
													{
														HX_STACK_LINE(2719)
														Float tmp49 = d;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(2719)
														tmp48 = ::Math_obj::sqrt(tmp49);
													}
													HX_STACK_LINE(2719)
													tmp47 = (Float(((Float)1.0)) / Float(tmp48));
												}
												HX_STACK_LINE(2719)
												Float imag = tmp47;		HX_STACK_VAR(imag,"imag");
												HX_STACK_LINE(2720)
												{
													HX_STACK_LINE(2721)
													Float t = imag;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(2730)
													hx::MultEq(nx,t);
													HX_STACK_LINE(2731)
													hx::MultEq(ny,t);
												}
											}
											HX_STACK_LINE(2734)
											{
												HX_STACK_LINE(2735)
												Float t = nx;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(2736)
												Float tmp44 = ny;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(2736)
												Float tmp45 = -(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(2736)
												nx = tmp45;
												HX_STACK_LINE(2737)
												ny = t;
											}
										}
										HX_STACK_LINE(2740)
										Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
										HX_STACK_LINE(2741)
										Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
										HX_STACK_LINE(2742)
										{
											HX_STACK_LINE(2743)
											Float tmp44 = (u->x + v->x);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(2743)
											cx = tmp44;
											HX_STACK_LINE(2744)
											Float tmp45 = (u->y + v->y);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(2744)
											cy = tmp45;
										}
										HX_STACK_LINE(2746)
										{
											HX_STACK_LINE(2747)
											Float tmp44 = ((Float)0.5);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(2747)
											Float t = tmp44;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(2756)
											hx::MultEq(cx,t);
											HX_STACK_LINE(2757)
											hx::MultEq(cy,t);
										}
										HX_STACK_LINE(2759)
										{
											HX_STACK_LINE(2760)
											Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(2769)
											Float tmp44 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(2769)
											Float tmp45 = t;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(2769)
											Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(2769)
											hx::SubEq(cx,tmp46);
											HX_STACK_LINE(2770)
											Float tmp47 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(2770)
											Float tmp48 = t;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(2770)
											Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(2770)
											hx::SubEq(cy,tmp49);
										}
										HX_STACK_LINE(2772)
										Float tmp44 = (nx * cx);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(2772)
										Float tmp45 = (ny * cy);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(2772)
										Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(2772)
										Float xd = tmp46;		HX_STACK_VAR(xd,"xd");
										HX_STACK_LINE(2773)
										Float carea = ((Float)0.0);		HX_STACK_VAR(carea,"carea");
										HX_STACK_LINE(2774)
										Float ccom = ((Float)0.0);		HX_STACK_VAR(ccom,"ccom");
										HX_STACK_LINE(2775)
										{
											HX_STACK_LINE(2776)
											Float X = xd;		HX_STACK_VAR(X,"X");
											HX_STACK_LINE(2777)
											Float tmp47 = X;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(2777)
											Float tmp48 = s1->circle->radius;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(2777)
											Float tmp49 = (Float(tmp47) / Float(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(2777)
											Float cos = tmp49;		HX_STACK_VAR(cos,"cos");
											HX_STACK_LINE(2778)
											Float tmp50 = (cos * cos);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(2778)
											Float tmp51 = ((int)1 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(2778)
											Float tmp52 = ::Math_obj::sqrt(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(2778)
											Float sin = tmp52;		HX_STACK_VAR(sin,"sin");
											HX_STACK_LINE(2779)
											Float tmp53 = cos;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(2779)
											Float tmp54 = ::Math_obj::acos(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(2779)
											Float theta = tmp54;		HX_STACK_VAR(theta,"theta");
											HX_STACK_LINE(2780)
											Float tmp55 = s1->circle->radius;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(2780)
											Float tmp56 = s1->circle->radius;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(2780)
											Float tmp57 = theta;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(2780)
											Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(2780)
											Float tmp59 = (X * sin);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(2780)
											Float tmp60 = (tmp58 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(2780)
											Float tmp61 = (tmp55 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(2780)
											carea = tmp61;
											HX_STACK_LINE(2781)
											Float tmp62 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(2781)
											Float tmp63 = s1->circle->radius;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(2781)
											Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(2781)
											Float tmp65 = sin;		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(2781)
											Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(2781)
											Float tmp67 = sin;		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(2781)
											Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(2781)
											Float tmp69 = sin;		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(2781)
											Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(2781)
											Float tmp71 = theta;		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(2781)
											Float tmp72 = (cos * sin);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(2781)
											Float tmp73 = (tmp71 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(2781)
											Float tmp74 = (Float(tmp70) / Float(tmp73));		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(2781)
											ccom = tmp74;
										}
										HX_STACK_LINE(2783)
										{
											HX_STACK_LINE(2784)
											Float tmp47 = s1->circle->worldCOMx;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(2784)
											cx = tmp47;
											HX_STACK_LINE(2785)
											Float tmp48 = s1->circle->worldCOMy;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(2785)
											cy = tmp48;
											HX_STACK_LINE(2794)
											{
											}
										}
										HX_STACK_LINE(2803)
										{
											HX_STACK_LINE(2804)
											Float t = ccom;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(2813)
											Float tmp47 = (nx * t);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(2813)
											hx::AddEq(cx,tmp47);
											HX_STACK_LINE(2814)
											Float tmp48 = (ny * t);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(2814)
											hx::AddEq(cy,tmp48);
										}
										HX_STACK_LINE(2816)
										{
											HX_STACK_LINE(2817)
											Float t = carea;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(2826)
											Float tmp47 = (cx * t);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(2826)
											hx::AddEq(COMx,tmp47);
											HX_STACK_LINE(2827)
											Float tmp48 = (cy * t);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(2827)
											hx::AddEq(COMy,tmp48);
										}
										HX_STACK_LINE(2829)
										hx::AddEq(area,carea);
									}
									HX_STACK_LINE(2831)
									{
										HX_STACK_LINE(2832)
										Float tmp35 = (Float(((Float)1.0)) / Float(area));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(2832)
										Float t = tmp35;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(2841)
										hx::MultEq(COMx,t);
										HX_STACK_LINE(2842)
										hx::MultEq(COMy,t);
									}
									HX_STACK_LINE(2844)
									{
										HX_STACK_LINE(2844)
										arb->overlap = area;
										HX_STACK_LINE(2844)
										{
											HX_STACK_LINE(2844)
											arb->centroidx = COMx;
											HX_STACK_LINE(2844)
											arb->centroidy = COMy;
											HX_STACK_LINE(2844)
											Dynamic();
										}
									}
									HX_STACK_LINE(2845)
									tmp2 = true;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2849)
						tmp2 = false;
					}
				}
			}
			else{
				HX_STACK_LINE(2852)
				tmp2 = false;
			}
		}
		HX_STACK_LINE(1173)
		return tmp2;
	}
	else{
		HX_STACK_LINE(2855)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2855)
		{
			HX_STACK_LINE(2856)
			::zpp_nape::shape::ZPP_Circle c1 = s1->circle;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(2857)
			::zpp_nape::shape::ZPP_Circle c2 = s2->circle;		HX_STACK_VAR(c2,"c2");
			HX_STACK_LINE(2858)
			Float deltax = ((Float)0.0);		HX_STACK_VAR(deltax,"deltax");
			HX_STACK_LINE(2859)
			Float deltay = ((Float)0.0);		HX_STACK_VAR(deltay,"deltay");
			HX_STACK_LINE(2860)
			{
				HX_STACK_LINE(2861)
				Float tmp2 = (c2->worldCOMx - c1->worldCOMx);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2861)
				deltax = tmp2;
				HX_STACK_LINE(2862)
				Float tmp3 = (c2->worldCOMy - c1->worldCOMy);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2862)
				deltay = tmp3;
			}
			HX_STACK_LINE(2864)
			Float tmp2 = (c1->radius + c2->radius);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2864)
			Float cr = tmp2;		HX_STACK_VAR(cr,"cr");
			HX_STACK_LINE(2865)
			Float tmp3 = (deltax * deltax);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2865)
			Float tmp4 = (deltay * deltay);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2865)
			Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2865)
			Float ds = tmp5;		HX_STACK_VAR(ds,"ds");
			HX_STACK_LINE(2866)
			Float tmp6 = ds;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2866)
			Float tmp7 = (cr * cr);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2866)
			bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2866)
			if ((tmp8)){
				HX_STACK_LINE(2866)
				tmp1 = false;
			}
			else{
				HX_STACK_LINE(2867)
				Float tmp9 = ds;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2867)
				Float tmp10 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2867)
				Float tmp11 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2867)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2867)
				bool tmp13 = (tmp9 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2867)
				if ((tmp13)){
					HX_STACK_LINE(2868)
					bool tmp14 = (c1->radius < c2->radius);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2868)
					if ((tmp14)){
						HX_STACK_LINE(2868)
						arb->overlap = c1->area;
						HX_STACK_LINE(2868)
						{
							HX_STACK_LINE(2868)
							arb->centroidx = c1->worldCOMx;
							HX_STACK_LINE(2868)
							arb->centroidy = c1->worldCOMy;
							HX_STACK_LINE(2868)
							Dynamic();
						}
					}
					else{
						HX_STACK_LINE(2869)
						arb->overlap = c2->area;
						HX_STACK_LINE(2869)
						{
							HX_STACK_LINE(2869)
							arb->centroidx = c2->worldCOMx;
							HX_STACK_LINE(2869)
							arb->centroidy = c2->worldCOMy;
							HX_STACK_LINE(2869)
							Dynamic();
						}
					}
					HX_STACK_LINE(2870)
					tmp1 = true;
				}
				else{
					HX_STACK_LINE(2873)
					Float tmp14 = ds;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2873)
					Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2873)
					Float d = tmp15;		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(2874)
					Float tmp16 = (Float((int)1) / Float(d));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2874)
					Float id = tmp16;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(2875)
					Float tmp17 = d;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2875)
					Float tmp18 = (c2->radius * c2->radius);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2875)
					Float tmp19 = (c1->radius * c1->radius);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2875)
					Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2875)
					Float tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2875)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2875)
					Float tmp23 = (tmp17 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2875)
					Float tmp24 = (((Float)0.5) * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2875)
					Float x1 = tmp24;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(2876)
					Float tmp25 = x1;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2876)
					Float tmp26 = c1->radius;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2876)
					Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2876)
					bool tmp28 = (tmp25 <= tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(2876)
					if ((tmp28)){
						HX_STACK_LINE(2876)
						arb->overlap = c1->area;
						HX_STACK_LINE(2876)
						{
							HX_STACK_LINE(2876)
							arb->centroidx = c1->worldCOMx;
							HX_STACK_LINE(2876)
							arb->centroidy = c1->worldCOMy;
							HX_STACK_LINE(2876)
							Dynamic();
						}
					}
					else{
						HX_STACK_LINE(2878)
						Float tmp29 = (d - x1);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(2878)
						Float x2 = tmp29;		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(2879)
						Float tmp30 = x2;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(2879)
						Float tmp31 = c2->radius;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(2879)
						Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(2879)
						bool tmp33 = (tmp30 <= tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(2879)
						if ((tmp33)){
							HX_STACK_LINE(2879)
							arb->overlap = c2->area;
							HX_STACK_LINE(2879)
							{
								HX_STACK_LINE(2879)
								arb->centroidx = c2->worldCOMx;
								HX_STACK_LINE(2879)
								arb->centroidy = c2->worldCOMy;
								HX_STACK_LINE(2879)
								Dynamic();
							}
						}
						else{
							HX_STACK_LINE(2881)
							Float area1 = ((Float)0.0);		HX_STACK_VAR(area1,"area1");
							HX_STACK_LINE(2882)
							Float y1 = ((Float)0.0);		HX_STACK_VAR(y1,"y1");
							HX_STACK_LINE(2883)
							Float area2 = ((Float)0.0);		HX_STACK_VAR(area2,"area2");
							HX_STACK_LINE(2884)
							Float y2 = ((Float)0.0);		HX_STACK_VAR(y2,"y2");
							HX_STACK_LINE(2885)
							{
								HX_STACK_LINE(2886)
								Float X = x1;		HX_STACK_VAR(X,"X");
								HX_STACK_LINE(2887)
								Float tmp34 = (Float(X) / Float(c1->radius));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2887)
								Float cos = tmp34;		HX_STACK_VAR(cos,"cos");
								HX_STACK_LINE(2888)
								Float tmp35 = (cos * cos);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2888)
								Float tmp36 = ((int)1 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2888)
								Float tmp37 = ::Math_obj::sqrt(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(2888)
								Float sin = tmp37;		HX_STACK_VAR(sin,"sin");
								HX_STACK_LINE(2889)
								Float tmp38 = cos;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(2889)
								Float tmp39 = ::Math_obj::acos(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(2889)
								Float theta = tmp39;		HX_STACK_VAR(theta,"theta");
								HX_STACK_LINE(2890)
								Float tmp40 = c1->radius;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(2890)
								Float tmp41 = (c1->radius * theta);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(2890)
								Float tmp42 = (X * sin);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(2890)
								Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(2890)
								Float tmp44 = (tmp40 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(2890)
								area1 = tmp44;
								HX_STACK_LINE(2891)
								Float tmp45 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(2891)
								Float tmp46 = c1->radius;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(2891)
								Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(2891)
								Float tmp48 = sin;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(2891)
								Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(2891)
								Float tmp50 = sin;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(2891)
								Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(2891)
								Float tmp52 = sin;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(2891)
								Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(2891)
								Float tmp54 = theta;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(2891)
								Float tmp55 = (cos * sin);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(2891)
								Float tmp56 = (tmp54 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(2891)
								Float tmp57 = (Float(tmp53) / Float(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(2891)
								y1 = tmp57;
							}
							HX_STACK_LINE(2893)
							{
								HX_STACK_LINE(2894)
								Float X = x2;		HX_STACK_VAR(X,"X");
								HX_STACK_LINE(2895)
								Float tmp34 = (Float(X) / Float(c2->radius));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2895)
								Float cos = tmp34;		HX_STACK_VAR(cos,"cos");
								HX_STACK_LINE(2896)
								Float tmp35 = (cos * cos);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2896)
								Float tmp36 = ((int)1 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2896)
								Float tmp37 = ::Math_obj::sqrt(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(2896)
								Float sin = tmp37;		HX_STACK_VAR(sin,"sin");
								HX_STACK_LINE(2897)
								Float tmp38 = cos;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(2897)
								Float tmp39 = ::Math_obj::acos(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(2897)
								Float theta = tmp39;		HX_STACK_VAR(theta,"theta");
								HX_STACK_LINE(2898)
								Float tmp40 = c2->radius;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(2898)
								Float tmp41 = (c2->radius * theta);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(2898)
								Float tmp42 = (X * sin);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(2898)
								Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(2898)
								Float tmp44 = (tmp40 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(2898)
								area2 = tmp44;
								HX_STACK_LINE(2899)
								Float tmp45 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(2899)
								Float tmp46 = c2->radius;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(2899)
								Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(2899)
								Float tmp48 = sin;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(2899)
								Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(2899)
								Float tmp50 = sin;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(2899)
								Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(2899)
								Float tmp52 = sin;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(2899)
								Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(2899)
								Float tmp54 = theta;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(2899)
								Float tmp55 = (cos * sin);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(2899)
								Float tmp56 = (tmp54 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(2899)
								Float tmp57 = (Float(tmp53) / Float(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(2899)
								y2 = tmp57;
							}
							HX_STACK_LINE(2901)
							Float tmp34 = (area1 + area2);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(2901)
							Float tarea = tmp34;		HX_STACK_VAR(tarea,"tarea");
							HX_STACK_LINE(2902)
							Float tmp35 = (y1 * area1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(2902)
							Float tmp36 = (d - y2);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(2902)
							Float tmp37 = area2;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(2902)
							Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(2902)
							Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(2902)
							Float tmp40 = tarea;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(2902)
							Float tmp41 = (Float(tmp39) / Float(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(2902)
							Float tmp42 = id;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(2902)
							Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(2902)
							Float ya = tmp43;		HX_STACK_VAR(ya,"ya");
							HX_STACK_LINE(2903)
							{
								HX_STACK_LINE(2903)
								arb->overlap = tarea;
								HX_STACK_LINE(2903)
								{
									HX_STACK_LINE(2903)
									Float tmp44 = c1->worldCOMx;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(2903)
									Float tmp45 = (deltax * ya);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(2903)
									Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(2903)
									arb->centroidx = tmp46;
									HX_STACK_LINE(2903)
									Float tmp47 = c1->worldCOMy;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(2903)
									Float tmp48 = (deltay * ya);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(2903)
									Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(2903)
									arb->centroidy = tmp49;
									HX_STACK_LINE(2903)
									Dynamic();
								}
							}
						}
					}
					HX_STACK_LINE(2906)
					tmp1 = true;
				}
			}
		}
		HX_STACK_LINE(2855)
		return tmp1;
	}
	HX_STACK_LINE(1172)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Collide_obj,flowCollide,return )

::zpp_nape::util::ZNPList_ZPP_Vec2 ZPP_Collide_obj::flowpoly;

::zpp_nape::util::ZNPList_ZPP_Vec2 ZPP_Collide_obj::flowsegs;


ZPP_Collide_obj::ZPP_Collide_obj()
{
}

bool ZPP_Collide_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flowpoly") ) { outValue = flowpoly; return true;  }
		if (HX_FIELD_EQ(inName,"flowsegs") ) { outValue = flowsegs; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"containTest") ) { outValue = containTest_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"testCollide") ) { outValue = testCollide_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"flowCollide") ) { outValue = flowCollide_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"polyContains") ) { outValue = polyContains_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bodyContains") ) { outValue = bodyContains_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shapeContains") ) { outValue = shapeContains_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"circleContains") ) { outValue = circleContains_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"contactCollide") ) { outValue = contactCollide_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"testCollide_safe") ) { outValue = testCollide_safe_dyn(); return true;  }
	}
	return false;
}

bool ZPP_Collide_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flowpoly") ) { flowpoly=ioValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Vec2 >(); return true; }
		if (HX_FIELD_EQ(inName,"flowsegs") ) { flowsegs=ioValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Vec2 >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Vec2*/ ,(void *) &ZPP_Collide_obj::flowpoly,HX_HCSTRING("flowpoly","\x3a","\x25","\xd0","\x85")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Vec2*/ ,(void *) &ZPP_Collide_obj::flowsegs,HX_HCSTRING("flowsegs","\x2c","\x2e","\xc4","\x87")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Collide_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Collide_obj::flowpoly,"flowpoly");
	HX_MARK_MEMBER_NAME(ZPP_Collide_obj::flowsegs,"flowsegs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Collide_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Collide_obj::flowpoly,"flowpoly");
	HX_VISIT_MEMBER_NAME(ZPP_Collide_obj::flowsegs,"flowsegs");
};

#endif

hx::Class ZPP_Collide_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("circleContains","\x4f","\x18","\x13","\x61"),
	HX_HCSTRING("polyContains","\x8b","\xc0","\xe2","\x7d"),
	HX_HCSTRING("shapeContains","\x60","\x82","\x83","\x3f"),
	HX_HCSTRING("bodyContains","\xe1","\x02","\x17","\xe3"),
	HX_HCSTRING("containTest","\x46","\xee","\xe5","\x0f"),
	HX_HCSTRING("contactCollide","\xbe","\xf0","\xaa","\x41"),
	HX_HCSTRING("testCollide_safe","\x60","\x48","\x78","\x60"),
	HX_HCSTRING("testCollide","\x4c","\x9d","\x2c","\xaa"),
	HX_HCSTRING("flowCollide","\x30","\xb9","\xdd","\x3f"),
	HX_HCSTRING("flowpoly","\x3a","\x25","\xd0","\x85"),
	HX_HCSTRING("flowsegs","\x2c","\x2e","\xc4","\x87"),
	::String(null()) };

void ZPP_Collide_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_Collide","\x08","\xe3","\x95","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Collide_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Collide_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_Collide_obj >;
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

void ZPP_Collide_obj::__boot()
{
	flowpoly= ::zpp_nape::util::ZNPList_ZPP_Vec2_obj::__new();
	flowsegs= ::zpp_nape::util::ZNPList_ZPP_Vec2_obj::__new();
}

} // end namespace zpp_nape
} // end namespace geom
