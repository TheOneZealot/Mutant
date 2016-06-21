#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Geom
#include <zpp_nape/geom/ZPP_Geom.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Geom_obj::__construct()
{
	return null();
}

//ZPP_Geom_obj::~ZPP_Geom_obj() { }

Dynamic ZPP_Geom_obj::__CreateEmpty() { return  new ZPP_Geom_obj; }
hx::ObjectPtr< ZPP_Geom_obj > ZPP_Geom_obj::__new()
{  hx::ObjectPtr< ZPP_Geom_obj > _result_ = new ZPP_Geom_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Geom_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Geom_obj > _result_ = new ZPP_Geom_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Geom_obj::validateShape( ::zpp_nape::shape::ZPP_Shape s){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Geom","validateShape",0x53c3322f,"zpp_nape.geom.ZPP_Geom.validateShape","zpp_nape/geom/Geom.hx",175,0x229d5cd1)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(176)
		bool tmp = (s->type == (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		if ((tmp)){
			HX_STACK_LINE(176)
			::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(176)
			bool tmp1 = _this->zip_gaxi;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			if ((tmp1)){
				HX_STACK_LINE(176)
				bool tmp2 = (_this->body != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(176)
				if ((tmp2)){
					HX_STACK_LINE(176)
					_this->zip_gaxi = false;
					HX_STACK_LINE(176)
					_this->validate_laxi();
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(176)
						bool tmp3 = _this1->zip_axis;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(176)
						if ((tmp3)){
							HX_STACK_LINE(176)
							_this1->zip_axis = false;
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								Float tmp4 = _this1->rot;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(176)
								Float tmp5 = ::Math_obj::sin(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(176)
								_this1->axisx = tmp5;
								HX_STACK_LINE(176)
								Float tmp6 = _this1->rot;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(176)
								Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(176)
								_this1->axisy = tmp7;
								HX_STACK_LINE(176)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						bool tmp3 = _this->zip_gverts;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(176)
						if ((tmp3)){
							HX_STACK_LINE(176)
							bool tmp4 = (_this->body != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(176)
							if ((tmp4)){
								HX_STACK_LINE(176)
								_this->zip_gverts = false;
								HX_STACK_LINE(176)
								_this->validate_lverts();
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(176)
									bool tmp5 = _this1->zip_axis;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(176)
									if ((tmp5)){
										HX_STACK_LINE(176)
										_this1->zip_axis = false;
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											Float tmp6 = _this1->rot;		HX_STACK_VAR(tmp6,"tmp6");
											HX_STACK_LINE(176)
											Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
											HX_STACK_LINE(176)
											_this1->axisx = tmp7;
											HX_STACK_LINE(176)
											Float tmp8 = _this1->rot;		HX_STACK_VAR(tmp8,"tmp8");
											HX_STACK_LINE(176)
											Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(176)
											_this1->axisy = tmp9;
											HX_STACK_LINE(176)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(176)
								::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->lverts->next;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(176)
								::zpp_nape::geom::ZPP_Vec2 li = tmp5;		HX_STACK_VAR(li,"li");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->gverts->next;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(176)
									while((true)){
										HX_STACK_LINE(176)
										bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(176)
										bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(176)
										if ((tmp8)){
											HX_STACK_LINE(176)
											break;
										}
										HX_STACK_LINE(176)
										::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(176)
											li = li->next;
											HX_STACK_LINE(176)
											{
												HX_STACK_LINE(176)
												Float tmp9 = _this->body->posx;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(176)
												Float tmp10 = _this->body->axisy;		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(176)
												Float tmp11 = l->x;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(176)
												Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(176)
												Float tmp13 = _this->body->axisx;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(176)
												Float tmp14 = l->y;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(176)
												Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(176)
												Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(176)
												Float tmp17 = (tmp9 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(176)
												g->x = tmp17;
												HX_STACK_LINE(176)
												Float tmp18 = _this->body->posy;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												Float tmp19 = l->x;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												Float tmp20 = _this->body->axisx;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(176)
												Float tmp22 = l->y;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(176)
												Float tmp23 = _this->body->axisy;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(176)
												Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(176)
												Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(176)
												Float tmp26 = (tmp18 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(176)
												g->y = tmp26;
											}
										}
										HX_STACK_LINE(176)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
					HX_STACK_LINE(176)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = _this->edges->head;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(176)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp3;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = _this->gverts->next;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(176)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(176)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(176)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(176)
						while((true)){
							HX_STACK_LINE(176)
							bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(176)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(176)
							if ((tmp6)){
								HX_STACK_LINE(176)
								break;
							}
							HX_STACK_LINE(176)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(176)
								ite = ite->next;
								HX_STACK_LINE(176)
								e->gp0 = u;
								HX_STACK_LINE(176)
								e->gp1 = v;
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									Float tmp7 = _this->body->axisy;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(176)
									Float tmp8 = e->lnormx;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(176)
									Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(176)
									Float tmp10 = _this->body->axisx;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(176)
									Float tmp11 = e->lnormy;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(176)
									Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(176)
									Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(176)
									e->gnormx = tmp13;
									HX_STACK_LINE(176)
									Float tmp14 = e->lnormx;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(176)
									Float tmp15 = _this->body->axisx;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(176)
									Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(176)
									Float tmp17 = e->lnormy;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									Float tmp18 = _this->body->axisy;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									e->gnormy = tmp20;
								}
								HX_STACK_LINE(176)
								Float tmp7 = _this->body->posx;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(176)
								Float tmp8 = e->gnormx;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(176)
								Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(176)
								Float tmp10 = _this->body->posy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(176)
								Float tmp11 = e->gnormy;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(176)
								Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(176)
								Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								Float tmp14 = e->lprojection;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								e->gprojection = tmp15;
								HX_STACK_LINE(176)
								bool tmp16 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								if ((tmp16)){
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 tmp17 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									tmp17->x = e->gnormx;
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 tmp18 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									tmp18->y = e->gnormy;
									HX_STACK_LINE(176)
									{
									}
								}
								HX_STACK_LINE(176)
								Float tmp17 = e->gp0->y;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								Float tmp18 = e->gnormx;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								Float tmp20 = e->gp0->x;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								Float tmp21 = e->gnormy;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(176)
								Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(176)
								e->tp0 = tmp23;
								HX_STACK_LINE(176)
								Float tmp24 = e->gp1->y;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(176)
								Float tmp25 = e->gnormx;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(176)
								Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(176)
								Float tmp27 = e->gp1->x;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(176)
								Float tmp28 = e->gnormy;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(176)
								Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(176)
								Float tmp30 = (tmp26 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(176)
								e->tp1 = tmp30;
							}
							HX_STACK_LINE(176)
							u = v;
							HX_STACK_LINE(176)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(176)
						::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->gverts->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(176)
						::zpp_nape::geom::ZPP_Vec2 v = tmp5;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(176)
							ite = ite->next;
							HX_STACK_LINE(176)
							e->gp0 = u;
							HX_STACK_LINE(176)
							e->gp1 = v;
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								Float tmp6 = _this->body->axisy;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(176)
								Float tmp7 = e->lnormx;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(176)
								Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(176)
								Float tmp9 = _this->body->axisx;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(176)
								Float tmp10 = e->lnormy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(176)
								Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(176)
								Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(176)
								e->gnormx = tmp12;
								HX_STACK_LINE(176)
								Float tmp13 = e->lnormx;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								Float tmp14 = _this->body->axisx;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								Float tmp16 = e->lnormy;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								Float tmp17 = _this->body->axisy;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								e->gnormy = tmp19;
							}
							HX_STACK_LINE(176)
							Float tmp6 = _this->body->posx;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(176)
							Float tmp7 = e->gnormx;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(176)
							Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(176)
							Float tmp9 = _this->body->posy;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(176)
							Float tmp10 = e->gnormy;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(176)
							Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(176)
							Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							Float tmp13 = e->lprojection;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(176)
							Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(176)
							e->gprojection = tmp14;
							HX_STACK_LINE(176)
							bool tmp15 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							if ((tmp15)){
								HX_STACK_LINE(176)
								::zpp_nape::geom::ZPP_Vec2 tmp16 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								tmp16->x = e->gnormx;
								HX_STACK_LINE(176)
								::zpp_nape::geom::ZPP_Vec2 tmp17 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								tmp17->y = e->gnormy;
								HX_STACK_LINE(176)
								{
								}
							}
							HX_STACK_LINE(176)
							Float tmp16 = e->gp0->y;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(176)
							Float tmp17 = e->gnormx;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(176)
							Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(176)
							Float tmp19 = e->gp0->x;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(176)
							Float tmp20 = e->gnormy;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(176)
							Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(176)
							Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(176)
							e->tp0 = tmp22;
							HX_STACK_LINE(176)
							Float tmp23 = e->gp1->y;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(176)
							Float tmp24 = e->gnormx;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(176)
							Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(176)
							Float tmp26 = e->gp1->x;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(176)
							Float tmp27 = e->gnormy;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(176)
							Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(176)
							Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(176)
							e->tp1 = tmp29;
						}
					}
				}
			}
		}
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			bool tmp1 = s->zip_aabb;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(177)
			if ((tmp1)){
				HX_STACK_LINE(177)
				bool tmp2 = (s->body != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(177)
				if ((tmp2)){
					HX_STACK_LINE(177)
					s->zip_aabb = false;
					HX_STACK_LINE(177)
					bool tmp3 = (s->type == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(177)
					if ((tmp3)){
						HX_STACK_LINE(177)
						::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							bool tmp4 = _this->zip_worldCOM;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(177)
							if ((tmp4)){
								HX_STACK_LINE(177)
								bool tmp5 = (_this->body != null());		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(177)
								if ((tmp5)){
									HX_STACK_LINE(177)
									_this->zip_worldCOM = false;
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										bool tmp6 = _this->zip_localCOM;		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(177)
										if ((tmp6)){
											HX_STACK_LINE(177)
											_this->zip_localCOM = false;
											HX_STACK_LINE(177)
											bool tmp7 = (_this->type == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
											HX_STACK_LINE(177)
											if ((tmp7)){
												HX_STACK_LINE(177)
												::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 tmp8 = _this1->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
												HX_STACK_LINE(177)
												bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(177)
												if ((tmp9)){
													HX_STACK_LINE(177)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
												}
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->next;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(177)
												bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(177)
												if ((tmp12)){
													HX_STACK_LINE(177)
													::zpp_nape::geom::ZPP_Vec2 tmp13 = _this1->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(177)
													_this1->localCOMx = tmp13->x;
													HX_STACK_LINE(177)
													::zpp_nape::geom::ZPP_Vec2 tmp14 = _this1->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(177)
													_this1->localCOMy = tmp14->y;
													HX_STACK_LINE(177)
													Dynamic();
												}
												else{
													HX_STACK_LINE(177)
													::zpp_nape::geom::ZPP_Vec2 tmp13 = _this1->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(177)
													::zpp_nape::geom::ZPP_Vec2 tmp14 = tmp13->next->next;		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(177)
													bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(177)
													if ((tmp15)){
														HX_STACK_LINE(177)
														{
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
															HX_STACK_LINE(177)
															_this1->localCOMx = tmp16->x;
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 tmp17 = _this1->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(177)
															_this1->localCOMy = tmp17->y;
															HX_STACK_LINE(177)
															{
															}
														}
														HX_STACK_LINE(177)
														{
															HX_STACK_LINE(177)
															Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
															HX_STACK_LINE(177)
															Float tmp17 = tmp16->next->x;		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(177)
															Float tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(177)
															Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(177)
															hx::AddEq(_this1->localCOMx,tmp19);
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 tmp20 = _this1->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(177)
															Float tmp21 = tmp20->next->y;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(177)
															Float tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(177)
															Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(177)
															hx::AddEq(_this1->localCOMy,tmp23);
														}
														HX_STACK_LINE(177)
														{
															HX_STACK_LINE(177)
															Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(177)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(177)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
													else{
														HX_STACK_LINE(177)
														{
															HX_STACK_LINE(177)
															_this1->localCOMx = (int)0;
															HX_STACK_LINE(177)
															_this1->localCOMy = (int)0;
															HX_STACK_LINE(177)
															{
															}
														}
														HX_STACK_LINE(177)
														Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
														HX_STACK_LINE(177)
														{
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
															HX_STACK_LINE(177)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(177)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(177)
															while((true)){
																HX_STACK_LINE(177)
																bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
																HX_STACK_LINE(177)
																bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
																HX_STACK_LINE(177)
																if ((tmp18)){
																	HX_STACK_LINE(177)
																	break;
																}
																HX_STACK_LINE(177)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(177)
																{
																	HX_STACK_LINE(177)
																	Float tmp19 = v->x;		HX_STACK_VAR(tmp19,"tmp19");
																	HX_STACK_LINE(177)
																	Float tmp20 = (w->y - u->y);		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(177)
																	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(177)
																	hx::AddEq(area,tmp21);
																	HX_STACK_LINE(177)
																	Float tmp22 = (w->y * v->x);		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(177)
																	Float tmp23 = (w->x * v->y);		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(177)
																	Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(177)
																	Float cf = tmp24;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(177)
																	Float tmp25 = (v->x + w->x);		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(177)
																	Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(177)
																	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(177)
																	hx::AddEq(_this1->localCOMx,tmp27);
																	HX_STACK_LINE(177)
																	Float tmp28 = (v->y + w->y);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(177)
																	Float tmp29 = cf;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(177)
																	Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(177)
																	hx::AddEq(_this1->localCOMy,tmp30);
																}
																HX_STACK_LINE(177)
																u = v;
																HX_STACK_LINE(177)
																v = w;
																HX_STACK_LINE(177)
																cx_ite = cx_ite->next;
															}
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 tmp17 = _this1->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(177)
															cx_ite = tmp17;
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(177)
															{
																HX_STACK_LINE(177)
																Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
																HX_STACK_LINE(177)
																Float tmp19 = (w->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(177)
																Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(177)
																hx::AddEq(area,tmp20);
																HX_STACK_LINE(177)
																Float tmp21 = (w->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(177)
																Float tmp22 = (w->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(177)
																Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(177)
																Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(177)
																Float tmp24 = (v->x + w->x);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(177)
																Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(177)
																Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(177)
																hx::AddEq(_this1->localCOMx,tmp26);
																HX_STACK_LINE(177)
																Float tmp27 = (v->y + w->y);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(177)
																Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(177)
																Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(177)
																hx::AddEq(_this1->localCOMy,tmp29);
															}
															HX_STACK_LINE(177)
															u = v;
															HX_STACK_LINE(177)
															v = w;
															HX_STACK_LINE(177)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
															HX_STACK_LINE(177)
															{
																HX_STACK_LINE(177)
																Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
																HX_STACK_LINE(177)
																Float tmp19 = (w1->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(177)
																Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(177)
																hx::AddEq(area,tmp20);
																HX_STACK_LINE(177)
																Float tmp21 = (w1->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(177)
																Float tmp22 = (w1->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(177)
																Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(177)
																Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(177)
																Float tmp24 = (v->x + w1->x);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(177)
																Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(177)
																Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(177)
																hx::AddEq(_this1->localCOMx,tmp26);
																HX_STACK_LINE(177)
																Float tmp27 = (v->y + w1->y);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(177)
																Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(177)
																Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(177)
																hx::AddEq(_this1->localCOMy,tmp29);
															}
														}
														HX_STACK_LINE(177)
														Float tmp16 = ((int)3 * area);		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(177)
														Float tmp17 = (Float((int)1) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(177)
														area = tmp17;
														HX_STACK_LINE(177)
														{
															HX_STACK_LINE(177)
															Float t = area;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(177)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(177)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
												}
											}
											HX_STACK_LINE(177)
											bool tmp8 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp8,"tmp8");
											HX_STACK_LINE(177)
											if ((tmp8)){
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 tmp9 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(177)
												tmp9->x = _this->localCOMx;
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(177)
												tmp10->y = _this->localCOMy;
												HX_STACK_LINE(177)
												{
												}
											}
										}
									}
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(177)
										bool tmp6 = _this1->zip_axis;		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(177)
										if ((tmp6)){
											HX_STACK_LINE(177)
											_this1->zip_axis = false;
											HX_STACK_LINE(177)
											{
												HX_STACK_LINE(177)
												Float tmp7 = _this1->rot;		HX_STACK_VAR(tmp7,"tmp7");
												HX_STACK_LINE(177)
												Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
												HX_STACK_LINE(177)
												_this1->axisx = tmp8;
												HX_STACK_LINE(177)
												Float tmp9 = _this1->rot;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(177)
												Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(177)
												_this1->axisy = tmp10;
												HX_STACK_LINE(177)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										Float tmp6 = _this->body->posx;		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(177)
										Float tmp7 = _this->body->axisy;		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(177)
										Float tmp8 = _this->localCOMx;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(177)
										Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(177)
										Float tmp10 = _this->body->axisx;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(177)
										Float tmp11 = _this->localCOMy;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(177)
										Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(177)
										Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(177)
										Float tmp14 = (tmp6 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(177)
										_this->worldCOMx = tmp14;
										HX_STACK_LINE(177)
										Float tmp15 = _this->body->posy;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(177)
										Float tmp16 = _this->localCOMx;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(177)
										Float tmp17 = _this->body->axisx;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(177)
										Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(177)
										Float tmp19 = _this->localCOMy;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(177)
										Float tmp20 = _this->body->axisy;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(177)
										Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(177)
										Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(177)
										Float tmp23 = (tmp15 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(177)
										_this->worldCOMy = tmp23;
									}
								}
							}
						}
						HX_STACK_LINE(177)
						Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(177)
						Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							Float tmp4 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(177)
							_this->aabb->minx = tmp4;
							HX_STACK_LINE(177)
							Float tmp5 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(177)
							_this->aabb->miny = tmp5;
						}
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							Float tmp4 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(177)
							_this->aabb->maxx = tmp4;
							HX_STACK_LINE(177)
							Float tmp5 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(177)
							_this->aabb->maxy = tmp5;
						}
					}
					else{
						HX_STACK_LINE(177)
						::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							bool tmp4 = _this->zip_gverts;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(177)
							if ((tmp4)){
								HX_STACK_LINE(177)
								bool tmp5 = (_this->body != null());		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(177)
								if ((tmp5)){
									HX_STACK_LINE(177)
									_this->zip_gverts = false;
									HX_STACK_LINE(177)
									_this->validate_lverts();
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(177)
										bool tmp6 = _this1->zip_axis;		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(177)
										if ((tmp6)){
											HX_STACK_LINE(177)
											_this1->zip_axis = false;
											HX_STACK_LINE(177)
											{
												HX_STACK_LINE(177)
												Float tmp7 = _this1->rot;		HX_STACK_VAR(tmp7,"tmp7");
												HX_STACK_LINE(177)
												Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
												HX_STACK_LINE(177)
												_this1->axisx = tmp8;
												HX_STACK_LINE(177)
												Float tmp9 = _this1->rot;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(177)
												Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(177)
												_this1->axisy = tmp10;
												HX_STACK_LINE(177)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(177)
									::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->lverts->next;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(177)
									::zpp_nape::geom::ZPP_Vec2 li = tmp6;		HX_STACK_VAR(li,"li");
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->gverts->next;		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(177)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp7;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(177)
										while((true)){
											HX_STACK_LINE(177)
											bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
											HX_STACK_LINE(177)
											bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(177)
											if ((tmp9)){
												HX_STACK_LINE(177)
												break;
											}
											HX_STACK_LINE(177)
											::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(177)
											{
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(177)
												li = li->next;
												HX_STACK_LINE(177)
												{
													HX_STACK_LINE(177)
													Float tmp10 = _this->body->posx;		HX_STACK_VAR(tmp10,"tmp10");
													HX_STACK_LINE(177)
													Float tmp11 = _this->body->axisy;		HX_STACK_VAR(tmp11,"tmp11");
													HX_STACK_LINE(177)
													Float tmp12 = l->x;		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(177)
													Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(177)
													Float tmp14 = _this->body->axisx;		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(177)
													Float tmp15 = l->y;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(177)
													Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(177)
													Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(177)
													Float tmp18 = (tmp10 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(177)
													g->x = tmp18;
													HX_STACK_LINE(177)
													Float tmp19 = _this->body->posy;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(177)
													Float tmp20 = l->x;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(177)
													Float tmp21 = _this->body->axisx;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(177)
													Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(177)
													Float tmp23 = l->y;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(177)
													Float tmp24 = _this->body->axisy;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(177)
													Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(177)
													Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(177)
													Float tmp27 = (tmp19 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(177)
													g->y = tmp27;
												}
											}
											HX_STACK_LINE(177)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(177)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = _this->lverts->next;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(177)
						bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(177)
						if ((tmp5)){
							HX_STACK_LINE(177)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
						}
						HX_STACK_LINE(177)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->gverts->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(177)
						::zpp_nape::geom::ZPP_Vec2 p0 = tmp6;		HX_STACK_VAR(p0,"p0");
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							_this->aabb->minx = p0->x;
							HX_STACK_LINE(177)
							_this->aabb->miny = p0->y;
							HX_STACK_LINE(177)
							{
							}
						}
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							_this->aabb->maxx = p0->x;
							HX_STACK_LINE(177)
							_this->aabb->maxy = p0->y;
							HX_STACK_LINE(177)
							{
							}
						}
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->gverts->next;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(177)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp7->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(177)
							while((true)){
								HX_STACK_LINE(177)
								bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(177)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(177)
								if ((tmp9)){
									HX_STACK_LINE(177)
									break;
								}
								HX_STACK_LINE(177)
								::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(177)
								{
									HX_STACK_LINE(177)
									Float tmp10 = p->x;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(177)
									Float tmp11 = _this->aabb->minx;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(177)
									bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(177)
									if ((tmp12)){
										HX_STACK_LINE(177)
										_this->aabb->minx = p->x;
									}
									HX_STACK_LINE(177)
									Float tmp13 = p->x;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(177)
									Float tmp14 = _this->aabb->maxx;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(177)
									bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(177)
									if ((tmp15)){
										HX_STACK_LINE(177)
										_this->aabb->maxx = p->x;
									}
									HX_STACK_LINE(177)
									Float tmp16 = p->y;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(177)
									Float tmp17 = _this->aabb->miny;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(177)
									bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(177)
									if ((tmp18)){
										HX_STACK_LINE(177)
										_this->aabb->miny = p->y;
									}
									HX_STACK_LINE(177)
									Float tmp19 = p->y;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(177)
									Float tmp20 = _this->aabb->maxy;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(177)
									bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(177)
									if ((tmp21)){
										HX_STACK_LINE(177)
										_this->aabb->maxy = p->y;
									}
								}
								HX_STACK_LINE(177)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			bool tmp1 = s->zip_worldCOM;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(178)
			if ((tmp1)){
				HX_STACK_LINE(178)
				bool tmp2 = (s->body != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(178)
				if ((tmp2)){
					HX_STACK_LINE(178)
					s->zip_worldCOM = false;
					HX_STACK_LINE(178)
					{
						HX_STACK_LINE(178)
						bool tmp3 = s->zip_localCOM;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(178)
						if ((tmp3)){
							HX_STACK_LINE(178)
							s->zip_localCOM = false;
							HX_STACK_LINE(178)
							bool tmp4 = (s->type == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(178)
							if ((tmp4)){
								HX_STACK_LINE(178)
								::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(178)
								::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->lverts->next;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(178)
								bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(178)
								if ((tmp6)){
									HX_STACK_LINE(178)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
								}
								HX_STACK_LINE(178)
								::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->lverts->next;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(178)
								::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7->next;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(178)
								bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(178)
								if ((tmp9)){
									HX_STACK_LINE(178)
									::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(178)
									_this->localCOMx = tmp10->x;
									HX_STACK_LINE(178)
									::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->lverts->next;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(178)
									_this->localCOMy = tmp11->y;
									HX_STACK_LINE(178)
									Dynamic();
								}
								else{
									HX_STACK_LINE(178)
									::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(178)
									::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->next->next;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(178)
									bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(178)
									if ((tmp12)){
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(178)
											_this->localCOMx = tmp13->x;
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(178)
											_this->localCOMy = tmp14->y;
											HX_STACK_LINE(178)
											{
											}
										}
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(178)
											Float tmp14 = tmp13->next->x;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(178)
											Float tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(178)
											Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(178)
											hx::AddEq(_this->localCOMx,tmp16);
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(178)
											Float tmp18 = tmp17->next->y;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(178)
											Float tmp19 = t;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(178)
											Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(178)
											hx::AddEq(_this->localCOMy,tmp20);
										}
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(178)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(178)
											hx::MultEq(_this->localCOMy,t);
										}
									}
									else{
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											_this->localCOMx = (int)0;
											HX_STACK_LINE(178)
											_this->localCOMy = (int)0;
											HX_STACK_LINE(178)
											{
											}
										}
										HX_STACK_LINE(178)
										Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
											HX_STACK_LINE(178)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(178)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(178)
											while((true)){
												HX_STACK_LINE(178)
												bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(178)
												bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(178)
												if ((tmp15)){
													HX_STACK_LINE(178)
													break;
												}
												HX_STACK_LINE(178)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(178)
												{
													HX_STACK_LINE(178)
													Float tmp16 = v->x;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(178)
													Float tmp17 = (w->y - u->y);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(178)
													Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(178)
													hx::AddEq(area,tmp18);
													HX_STACK_LINE(178)
													Float tmp19 = (w->y * v->x);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(178)
													Float tmp20 = (w->x * v->y);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(178)
													Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(178)
													Float cf = tmp21;		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(178)
													Float tmp22 = (v->x + w->x);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(178)
													Float tmp23 = cf;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(178)
													Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(178)
													hx::AddEq(_this->localCOMx,tmp24);
													HX_STACK_LINE(178)
													Float tmp25 = (v->y + w->y);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(178)
													Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(178)
													Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(178)
													hx::AddEq(_this->localCOMy,tmp27);
												}
												HX_STACK_LINE(178)
												u = v;
												HX_STACK_LINE(178)
												v = w;
												HX_STACK_LINE(178)
												cx_ite = cx_ite->next;
											}
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(178)
											cx_ite = tmp14;
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(178)
											{
												HX_STACK_LINE(178)
												Float tmp15 = v->x;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(178)
												Float tmp16 = (w->y - u->y);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(178)
												Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(178)
												hx::AddEq(area,tmp17);
												HX_STACK_LINE(178)
												Float tmp18 = (w->y * v->x);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(178)
												Float tmp19 = (w->x * v->y);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(178)
												Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(178)
												Float cf = tmp20;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(178)
												Float tmp21 = (v->x + w->x);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(178)
												Float tmp22 = cf;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(178)
												Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(178)
												hx::AddEq(_this->localCOMx,tmp23);
												HX_STACK_LINE(178)
												Float tmp24 = (v->y + w->y);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(178)
												Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(178)
												Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(178)
												hx::AddEq(_this->localCOMy,tmp26);
											}
											HX_STACK_LINE(178)
											u = v;
											HX_STACK_LINE(178)
											v = w;
											HX_STACK_LINE(178)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
											HX_STACK_LINE(178)
											{
												HX_STACK_LINE(178)
												Float tmp15 = v->x;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(178)
												Float tmp16 = (w1->y - u->y);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(178)
												Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(178)
												hx::AddEq(area,tmp17);
												HX_STACK_LINE(178)
												Float tmp18 = (w1->y * v->x);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(178)
												Float tmp19 = (w1->x * v->y);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(178)
												Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(178)
												Float cf = tmp20;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(178)
												Float tmp21 = (v->x + w1->x);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(178)
												Float tmp22 = cf;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(178)
												Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(178)
												hx::AddEq(_this->localCOMx,tmp23);
												HX_STACK_LINE(178)
												Float tmp24 = (v->y + w1->y);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(178)
												Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(178)
												Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(178)
												hx::AddEq(_this->localCOMy,tmp26);
											}
										}
										HX_STACK_LINE(178)
										Float tmp13 = ((int)3 * area);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(178)
										Float tmp14 = (Float((int)1) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(178)
										area = tmp14;
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											Float t = area;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(178)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(178)
											hx::MultEq(_this->localCOMy,t);
										}
									}
								}
							}
							HX_STACK_LINE(178)
							bool tmp5 = (s->wrap_localCOM != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(178)
							if ((tmp5)){
								HX_STACK_LINE(178)
								::zpp_nape::geom::ZPP_Vec2 tmp6 = s->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(178)
								tmp6->x = s->localCOMx;
								HX_STACK_LINE(178)
								::zpp_nape::geom::ZPP_Vec2 tmp7 = s->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(178)
								tmp7->y = s->localCOMy;
								HX_STACK_LINE(178)
								{
								}
							}
						}
					}
					HX_STACK_LINE(178)
					{
						HX_STACK_LINE(178)
						::zpp_nape::phys::ZPP_Body _this = s->body;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(178)
						bool tmp3 = _this->zip_axis;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(178)
						if ((tmp3)){
							HX_STACK_LINE(178)
							_this->zip_axis = false;
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								Float tmp4 = _this->rot;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(178)
								Float tmp5 = ::Math_obj::sin(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(178)
								_this->axisx = tmp5;
								HX_STACK_LINE(178)
								Float tmp6 = _this->rot;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(178)
								Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(178)
								_this->axisy = tmp7;
								HX_STACK_LINE(178)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(178)
					{
						HX_STACK_LINE(178)
						Float tmp3 = s->body->posx;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(178)
						Float tmp4 = s->body->axisy;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(178)
						Float tmp5 = s->localCOMx;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(178)
						Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(178)
						Float tmp7 = s->body->axisx;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(178)
						Float tmp8 = s->localCOMy;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(178)
						Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(178)
						Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(178)
						Float tmp11 = (tmp3 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(178)
						s->worldCOMx = tmp11;
						HX_STACK_LINE(178)
						Float tmp12 = s->body->posy;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(178)
						Float tmp13 = s->localCOMx;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						Float tmp14 = s->body->axisx;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(178)
						Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(178)
						Float tmp16 = s->localCOMy;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(178)
						Float tmp17 = s->body->axisy;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(178)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(178)
						Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(178)
						Float tmp20 = (tmp12 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(178)
						s->worldCOMy = tmp20;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Geom_obj,validateShape,(void))


ZPP_Geom_obj::ZPP_Geom_obj()
{
}

bool ZPP_Geom_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"validateShape") ) { outValue = validateShape_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Geom_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Geom_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_Geom_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("validateShape","\xab","\xa2","\x1c","\xa8"),
	::String(null()) };

void ZPP_Geom_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_Geom","\xf2","\x90","\xc8","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Geom_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_Geom_obj >;
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
