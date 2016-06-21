#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_UserConstraint
#include <nape/constraint/UserConstraint.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserBody
#include <zpp_nape/constraint/ZPP_UserBody.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserConstraint
#include <zpp_nape/constraint/ZPP_UserConstraint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_UserConstraint_obj::__construct(int dim,bool velonly)
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","new",0x54ee5fef,"zpp_nape.constraint.ZPP_UserConstraint.new","zpp_nape/constraint/UserConstraint.hx",174,0x968ba4a6)
HX_STACK_THIS(this)
HX_STACK_ARG(dim,"dim")
HX_STACK_ARG(velonly,"velonly")
{
	HX_STACK_LINE(498)
	this->jOld = null();
	HX_STACK_LINE(497)
	this->J = null();
	HX_STACK_LINE(476)
	this->vec3 = null();
	HX_STACK_LINE(440)
	this->Keff = null();
	HX_STACK_LINE(439)
	this->jMax = ((Float)0.0);
	HX_STACK_LINE(438)
	this->velonly = false;
	HX_STACK_LINE(437)
	this->gamma = ((Float)0.0);
	HX_STACK_LINE(436)
	this->soft = ((Float)0.0);
	HX_STACK_LINE(414)
	this->y = null();
	HX_STACK_LINE(391)
	this->L = null();
	HX_STACK_LINE(253)
	this->stepped = false;
	HX_STACK_LINE(182)
	this->bias = null();
	HX_STACK_LINE(181)
	this->jAcc = null();
	HX_STACK_LINE(180)
	this->dim = (int)0;
	HX_STACK_LINE(179)
	this->bodies = null();
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(261)
	super::__construct();
	HX_STACK_LINE(262)
	this->bodies = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(265)
	this->dim = dim;
	HX_STACK_LINE(266)
	this->velonly = velonly;
	HX_STACK_LINE(267)
	this->jAcc = Array_obj< Float >::__new();
	HX_STACK_LINE(270)
	this->bias = Array_obj< Float >::__new();
	HX_STACK_LINE(273)
	this->L = Array_obj< Float >::__new();
	HX_STACK_LINE(276)
	this->J = Array_obj< Float >::__new();
	HX_STACK_LINE(279)
	this->jOld = Array_obj< Float >::__new();
	HX_STACK_LINE(282)
	this->y = Array_obj< Float >::__new();
	HX_STACK_LINE(285)
	this->Keff = Array_obj< Float >::__new();
	HX_STACK_LINE(288)
	::nape::geom::Vec3 tmp = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	this->vec3 = tmp;
	HX_STACK_LINE(289)
	{
		HX_STACK_LINE(289)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(289)
		while((true)){
			HX_STACK_LINE(289)
			bool tmp1 = (_g < dim);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(289)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			if ((tmp2)){
				HX_STACK_LINE(289)
				break;
			}
			HX_STACK_LINE(289)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(290)
			Float tmp4 = this->y[i] = ((Float)0.0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(290)
			Float tmp5 = this->jOld[i] = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(290)
			Float tmp6 = this->J[i] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(290)
			Float tmp7 = this->bias[i] = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(290)
			this->jAcc[i] = tmp7;
			HX_STACK_LINE(291)
			{
				HX_STACK_LINE(291)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(291)
				while((true)){
					HX_STACK_LINE(291)
					bool tmp8 = (_g1 < dim);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(291)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(291)
					if ((tmp9)){
						HX_STACK_LINE(291)
						break;
					}
					HX_STACK_LINE(291)
					int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(291)
					int j = tmp10;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(291)
					int tmp11 = (i * dim);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(291)
					int tmp12 = j;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(291)
					int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(291)
					this->L[tmp13] = ((Float)0.0);
				}
			}
		}
	}
	HX_STACK_LINE(293)
	this->stepped = false;
}
;
	return null();
}

//ZPP_UserConstraint_obj::~ZPP_UserConstraint_obj() { }

Dynamic ZPP_UserConstraint_obj::__CreateEmpty() { return  new ZPP_UserConstraint_obj; }
hx::ObjectPtr< ZPP_UserConstraint_obj > ZPP_UserConstraint_obj::__new(int dim,bool velonly)
{  hx::ObjectPtr< ZPP_UserConstraint_obj > _result_ = new ZPP_UserConstraint_obj();
	_result_->__construct(dim,velonly);
	return _result_;}

Dynamic ZPP_UserConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_UserConstraint_obj > _result_ = new ZPP_UserConstraint_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ZPP_UserConstraint_obj::bindVec2_invalidate( ::zpp_nape::geom::ZPP_Vec2 _){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","bindVec2_invalidate",0x941f4c4e,"zpp_nape.constraint.ZPP_UserConstraint.bindVec2_invalidate","zpp_nape/constraint/UserConstraint.hx",176,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(177)
		::nape::constraint::UserConstraint tmp = this->outer_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		tmp->__invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,bindVec2_invalidate,(void))

Void ZPP_UserConstraint_obj::addBody( ::zpp_nape::phys::ZPP_Body b){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","addBody",0xca33c072,"zpp_nape.constraint.ZPP_UserConstraint.addBody","zpp_nape/constraint/UserConstraint.hx",183,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(192)
		::zpp_nape::constraint::ZPP_UserBody match = null();		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			Array< ::Dynamic > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			while((true)){
				HX_STACK_LINE(193)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(193)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(193)
				if ((tmp1)){
					HX_STACK_LINE(193)
					break;
				}
				HX_STACK_LINE(193)
				::zpp_nape::constraint::ZPP_UserBody tmp2 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(193)
				::zpp_nape::constraint::ZPP_UserBody x = tmp2;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(193)
				++(_g);
				HX_STACK_LINE(194)
				bool tmp3 = (x->body == b);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(194)
				if ((tmp3)){
					HX_STACK_LINE(195)
					match = x;
					HX_STACK_LINE(196)
					break;
				}
			}
		}
		HX_STACK_LINE(199)
		bool tmp = (match == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		if ((tmp)){
			HX_STACK_LINE(200)
			::zpp_nape::constraint::ZPP_UserBody tmp1 = ::zpp_nape::constraint::ZPP_UserBody_obj::__new((int)1,b);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(200)
			this->bodies->push(tmp1);
			HX_STACK_LINE(201)
			bool tmp2 = this->active;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(201)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(201)
			if ((tmp2)){
				HX_STACK_LINE(201)
				::zpp_nape::space::ZPP_Space tmp4 = this->space;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(201)
				::zpp_nape::space::ZPP_Space tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				tmp3 = (tmp5 != null());
			}
			else{
				HX_STACK_LINE(201)
				tmp3 = false;
			}
			HX_STACK_LINE(201)
			if ((tmp3)){
				HX_STACK_LINE(202)
				bool tmp4 = (b != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(202)
				if ((tmp4)){
					HX_STACK_LINE(202)
					b->constraints->add(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
		else{
			HX_STACK_LINE(205)
			(match->cnt)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,addBody,(void))

bool ZPP_UserConstraint_obj::remBody( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","remBody",0x2217382b,"zpp_nape.constraint.ZPP_UserConstraint.remBody","zpp_nape/constraint/UserConstraint.hx",207,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(216)
	::zpp_nape::constraint::ZPP_UserBody match = null();		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(217)
	int tmp = this->bodies->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	int bl = tmp1;		HX_STACK_VAR(bl,"bl");
	HX_STACK_LINE(218)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(219)
	while((true)){
		HX_STACK_LINE(219)
		bool tmp2 = (i < bl);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		if ((tmp3)){
			HX_STACK_LINE(219)
			break;
		}
		HX_STACK_LINE(220)
		::zpp_nape::constraint::ZPP_UserBody tmp4 = this->bodies->__get(i).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		::zpp_nape::constraint::ZPP_UserBody x = tmp4;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(221)
		bool tmp5 = (x->body == b);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		if ((tmp5)){
			HX_STACK_LINE(222)
			(x->cnt)--;
			HX_STACK_LINE(223)
			bool tmp6 = (x->cnt == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(223)
			if ((tmp6)){
				HX_STACK_LINE(224)
				bool tmp7 = (bl > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(224)
				if ((tmp7)){
					HX_STACK_LINE(224)
					int tmp8 = (bl - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(224)
					::zpp_nape::constraint::ZPP_UserBody tmp9 = this->bodies->__get(tmp8).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(224)
					this->bodies[i] = tmp9;
				}
				HX_STACK_LINE(225)
				this->bodies->pop().StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();
				HX_STACK_LINE(226)
				bool tmp8 = this->active;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(226)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(226)
				if ((tmp8)){
					HX_STACK_LINE(226)
					::zpp_nape::space::ZPP_Space tmp10 = this->space;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(226)
					::zpp_nape::space::ZPP_Space tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(226)
					tmp9 = (tmp11 != null());
				}
				else{
					HX_STACK_LINE(226)
					tmp9 = false;
				}
				HX_STACK_LINE(226)
				if ((tmp9)){
					HX_STACK_LINE(227)
					bool tmp10 = (b != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(227)
					if ((tmp10)){
						HX_STACK_LINE(227)
						b->constraints->remove(hx::ObjectPtr<OBJ_>(this));
					}
				}
			}
			HX_STACK_LINE(230)
			match = x;
			HX_STACK_LINE(231)
			break;
		}
		HX_STACK_LINE(233)
		(i)++;
	}
	HX_STACK_LINE(235)
	bool tmp2 = (match != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,remBody,return )

::nape::geom::Vec3 ZPP_UserConstraint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","bodyImpulse",0x8cbdacc2,"zpp_nape.constraint.ZPP_UserConstraint.bodyImpulse","zpp_nape/constraint/UserConstraint.hx",237,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(238)
		int tmp = this->dim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(238)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(238)
		while((true)){
			HX_STACK_LINE(238)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(238)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			if ((tmp2)){
				HX_STACK_LINE(238)
				break;
			}
			HX_STACK_LINE(238)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(238)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(238)
			Float tmp4 = this->jAcc->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(238)
			this->J[i] = tmp4;
		}
	}
	HX_STACK_LINE(239)
	::nape::geom::Vec3 tmp = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	::nape::geom::Vec3 ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(240)
	bool tmp1 = this->stepped;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	if ((tmp1)){
		HX_STACK_LINE(240)
		::nape::constraint::UserConstraint tmp2 = this->outer_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		::nape::phys::Body tmp3 = b->outer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		::nape::geom::Vec3 tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		tmp2->__impulse(this->J,tmp3,tmp4);
	}
	HX_STACK_LINE(241)
	::nape::geom::Vec3 tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,bodyImpulse,return )

Void ZPP_UserConstraint_obj::activeBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","activeBodies",0x05acf077,"zpp_nape.constraint.ZPP_UserConstraint.activeBodies","zpp_nape/constraint/UserConstraint.hx",244,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(244)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(244)
		Array< ::Dynamic > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(244)
		while((true)){
			HX_STACK_LINE(244)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(244)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(244)
			if ((tmp1)){
				HX_STACK_LINE(244)
				break;
			}
			HX_STACK_LINE(244)
			::zpp_nape::constraint::ZPP_UserBody tmp2 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(244)
			::zpp_nape::constraint::ZPP_UserBody b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(244)
			++(_g);
			HX_STACK_LINE(245)
			bool tmp3 = (b->body != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(245)
			if ((tmp3)){
				HX_STACK_LINE(245)
				::zpp_nape::util::ZNPList_ZPP_Constraint tmp4 = b->body->constraints;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(245)
				tmp4->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_UserConstraint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","inactiveBodies",0x5295961c,"zpp_nape.constraint.ZPP_UserConstraint.inactiveBodies","zpp_nape/constraint/UserConstraint.hx",249,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(249)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(249)
		Array< ::Dynamic > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(249)
		while((true)){
			HX_STACK_LINE(249)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(249)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(249)
			if ((tmp1)){
				HX_STACK_LINE(249)
				break;
			}
			HX_STACK_LINE(249)
			::zpp_nape::constraint::ZPP_UserBody tmp2 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			::zpp_nape::constraint::ZPP_UserBody b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(249)
			++(_g);
			HX_STACK_LINE(250)
			bool tmp3 = (b->body != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(250)
			if ((tmp3)){
				HX_STACK_LINE(250)
				::zpp_nape::util::ZNPList_ZPP_Constraint tmp4 = b->body->constraints;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(250)
				tmp4->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


::nape::constraint::Constraint ZPP_UserConstraint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","copy",0xf467c946,"zpp_nape.constraint.ZPP_UserConstraint.copy","zpp_nape/constraint/UserConstraint.hx",254,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(255)
	::nape::constraint::UserConstraint tmp = this->outer_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	::nape::constraint::UserConstraint tmp1 = tmp->__copy();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	::nape::constraint::UserConstraint ret = tmp1;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(256)
	::nape::constraint::UserConstraint tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	this->copyto(tmp2);
	HX_STACK_LINE(257)
	HX_STACK_DO_THROW(HX_HCSTRING("not done yet","\x37","\x63","\x5d","\x38"));
	HX_STACK_LINE(258)
	::nape::constraint::UserConstraint tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(258)
	return tmp3;
}


Void ZPP_UserConstraint_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","validate",0xf7ab7aa7,"zpp_nape.constraint.ZPP_UserConstraint.validate","zpp_nape/constraint/UserConstraint.hx",295,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(296)
			Array< ::Dynamic > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(296)
			while((true)){
				HX_STACK_LINE(296)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(296)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(296)
				if ((tmp1)){
					HX_STACK_LINE(296)
					break;
				}
				HX_STACK_LINE(296)
				::zpp_nape::constraint::ZPP_UserBody tmp2 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(296)
				::zpp_nape::constraint::ZPP_UserBody b = tmp2;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(296)
				++(_g);
				HX_STACK_LINE(296)
				::zpp_nape::space::ZPP_Space tmp3 = b->body->space;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(296)
				::zpp_nape::space::ZPP_Space tmp4 = this->space;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(296)
				bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(296)
				if ((tmp5)){
					HX_STACK_LINE(296)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraints must have each body within the same sapce to which the constraint has been assigned","\xe6","\xbc","\x3b","\x9a"));
				}
			}
		}
		HX_STACK_LINE(297)
		::nape::constraint::UserConstraint tmp = this->outer_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(297)
		tmp->__validate();
	}
return null();
}


Void ZPP_UserConstraint_obj::wake_connected( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","wake_connected",0x03addc7f,"zpp_nape.constraint.ZPP_UserConstraint.wake_connected","zpp_nape/constraint/UserConstraint.hx",300,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(300)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(300)
		Array< ::Dynamic > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(300)
		while((true)){
			HX_STACK_LINE(300)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(300)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(300)
			if ((tmp1)){
				HX_STACK_LINE(300)
				break;
			}
			HX_STACK_LINE(300)
			::zpp_nape::constraint::ZPP_UserBody tmp2 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(300)
			::zpp_nape::constraint::ZPP_UserBody b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(300)
			++(_g);
			HX_STACK_LINE(301)
			int tmp3 = b->body->type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(301)
			bool tmp4 = (tmp3 == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(301)
			if ((tmp4)){
				HX_STACK_LINE(301)
				b->body->wake();
			}
		}
	}
return null();
}


Void ZPP_UserConstraint_obj::forest( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","forest",0xe936e0ae,"zpp_nape.constraint.ZPP_UserConstraint.forest","zpp_nape/constraint/UserConstraint.hx",305,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(305)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(305)
		Array< ::Dynamic > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(305)
		while((true)){
			HX_STACK_LINE(305)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(305)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(305)
			if ((tmp1)){
				HX_STACK_LINE(305)
				break;
			}
			HX_STACK_LINE(305)
			::zpp_nape::constraint::ZPP_UserBody tmp2 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(305)
			::zpp_nape::constraint::ZPP_UserBody b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(305)
			++(_g);
			HX_STACK_LINE(306)
			int tmp3 = b->body->type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(306)
			bool tmp4 = (tmp3 == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(306)
			if ((tmp4)){
				HX_STACK_LINE(307)
				::zpp_nape::space::ZPP_Component tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(308)
					::zpp_nape::space::ZPP_Component tmp6 = b->body->component;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(308)
					::zpp_nape::space::ZPP_Component tmp7 = b->body->component;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(308)
					::zpp_nape::space::ZPP_Component tmp8 = tmp7->parent;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(308)
					bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(308)
					if ((tmp9)){
						HX_STACK_LINE(308)
						tmp5 = b->body->component;
					}
					else{
						HX_STACK_LINE(310)
						::zpp_nape::space::ZPP_Component tmp10 = b->body->component;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(310)
						::zpp_nape::space::ZPP_Component obj = tmp10;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(311)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(312)
						while((true)){
							HX_STACK_LINE(312)
							bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(312)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(312)
							if ((tmp12)){
								HX_STACK_LINE(312)
								break;
							}
							HX_STACK_LINE(313)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(314)
							obj->parent = stack;
							HX_STACK_LINE(315)
							stack = obj;
							HX_STACK_LINE(316)
							obj = nxt;
						}
						HX_STACK_LINE(318)
						while((true)){
							HX_STACK_LINE(318)
							bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(318)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(318)
							if ((tmp12)){
								HX_STACK_LINE(318)
								break;
							}
							HX_STACK_LINE(319)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(320)
							stack->parent = obj;
							HX_STACK_LINE(321)
							stack = nxt;
						}
						HX_STACK_LINE(323)
						tmp5 = obj;
					}
				}
				HX_STACK_LINE(307)
				::zpp_nape::space::ZPP_Component xr = tmp5;		HX_STACK_VAR(xr,"xr");
				HX_STACK_LINE(326)
				::zpp_nape::space::ZPP_Component tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(326)
				{
					HX_STACK_LINE(327)
					::zpp_nape::space::ZPP_Component tmp7 = this->component;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(327)
					::zpp_nape::space::ZPP_Component tmp8 = this->component;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(327)
					::zpp_nape::space::ZPP_Component tmp9 = tmp8->parent;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(327)
					bool tmp10 = (tmp7 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(327)
					if ((tmp10)){
						HX_STACK_LINE(327)
						tmp6 = this->component;
					}
					else{
						HX_STACK_LINE(329)
						::zpp_nape::space::ZPP_Component tmp11 = this->component;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(329)
						::zpp_nape::space::ZPP_Component obj = tmp11;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(330)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(331)
						while((true)){
							HX_STACK_LINE(331)
							bool tmp12 = (obj != obj->parent);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(331)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(331)
							if ((tmp13)){
								HX_STACK_LINE(331)
								break;
							}
							HX_STACK_LINE(332)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(333)
							obj->parent = stack;
							HX_STACK_LINE(334)
							stack = obj;
							HX_STACK_LINE(335)
							obj = nxt;
						}
						HX_STACK_LINE(337)
						while((true)){
							HX_STACK_LINE(337)
							bool tmp12 = (stack != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(337)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(337)
							if ((tmp13)){
								HX_STACK_LINE(337)
								break;
							}
							HX_STACK_LINE(338)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(339)
							stack->parent = obj;
							HX_STACK_LINE(340)
							stack = nxt;
						}
						HX_STACK_LINE(342)
						tmp6 = obj;
					}
				}
				HX_STACK_LINE(326)
				::zpp_nape::space::ZPP_Component yr = tmp6;		HX_STACK_VAR(yr,"yr");
				HX_STACK_LINE(345)
				bool tmp7 = (xr != yr);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(345)
				if ((tmp7)){
					HX_STACK_LINE(346)
					bool tmp8 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(346)
					if ((tmp8)){
						HX_STACK_LINE(346)
						xr->parent = yr;
					}
					else{
						HX_STACK_LINE(347)
						bool tmp9 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(347)
						if ((tmp9)){
							HX_STACK_LINE(347)
							yr->parent = xr;
						}
						else{
							HX_STACK_LINE(349)
							yr->parent = xr;
							HX_STACK_LINE(350)
							(xr->rank)++;
						}
					}
				}
			}
		}
	}
return null();
}


bool ZPP_UserConstraint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","pair_exists",0x9673a130,"zpp_nape.constraint.ZPP_UserConstraint.pair_exists","zpp_nape/constraint/UserConstraint.hx",356,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(357)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(358)
	int tmp = this->bodies->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(358)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(358)
	int bl = tmp1;		HX_STACK_VAR(bl,"bl");
	HX_STACK_LINE(359)
	{
		HX_STACK_LINE(359)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(359)
		while((true)){
			HX_STACK_LINE(359)
			bool tmp2 = (_g < bl);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(359)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(359)
			if ((tmp3)){
				HX_STACK_LINE(359)
				break;
			}
			HX_STACK_LINE(359)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(359)
			int bi = tmp4;		HX_STACK_VAR(bi,"bi");
			HX_STACK_LINE(360)
			::zpp_nape::constraint::ZPP_UserBody tmp5 = this->bodies->__get(bi).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(360)
			::zpp_nape::phys::ZPP_Body b = tmp5->body;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				int tmp6 = (bi + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(361)
				int _g1 = tmp6;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(361)
				while((true)){
					HX_STACK_LINE(361)
					bool tmp7 = (_g1 < bl);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(361)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(361)
					if ((tmp8)){
						HX_STACK_LINE(361)
						break;
					}
					HX_STACK_LINE(361)
					int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(361)
					int ci = tmp9;		HX_STACK_VAR(ci,"ci");
					HX_STACK_LINE(362)
					::zpp_nape::constraint::ZPP_UserBody tmp10 = this->bodies->__get(ci).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(362)
					::zpp_nape::phys::ZPP_Body c = tmp10->body;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(363)
					bool tmp11 = (b->id == id);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(363)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(363)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(363)
					if ((tmp12)){
						HX_STACK_LINE(363)
						tmp13 = (c->id == di);
					}
					else{
						HX_STACK_LINE(363)
						tmp13 = false;
					}
					HX_STACK_LINE(363)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(363)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(363)
					if ((tmp14)){
						HX_STACK_LINE(363)
						bool tmp16 = (b->id == di);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(363)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(363)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(363)
						if ((tmp18)){
							HX_STACK_LINE(363)
							tmp15 = (c->id == id);
						}
						else{
							HX_STACK_LINE(363)
							tmp15 = false;
						}
					}
					else{
						HX_STACK_LINE(363)
						tmp15 = true;
					}
					HX_STACK_LINE(363)
					if ((tmp15)){
						HX_STACK_LINE(364)
						ret = true;
						HX_STACK_LINE(365)
						break;
					}
				}
			}
			HX_STACK_LINE(368)
			bool tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(368)
			if ((tmp6)){
				HX_STACK_LINE(368)
				break;
			}
		}
	}
	HX_STACK_LINE(370)
	bool tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(370)
	return tmp2;
}


Void ZPP_UserConstraint_obj::broken( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","broken",0x08060a26,"zpp_nape.constraint.ZPP_UserConstraint.broken","zpp_nape/constraint/UserConstraint.hx",372,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(373)
		::nape::constraint::UserConstraint tmp = this->outer_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		tmp->__broken();
	}
return null();
}


Void ZPP_UserConstraint_obj::clearcache( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","clearcache",0x768479e6,"zpp_nape.constraint.ZPP_UserConstraint.clearcache","zpp_nape/constraint/UserConstraint.hx",375,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(376)
			int tmp = this->dim;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(376)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(376)
			while((true)){
				HX_STACK_LINE(376)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(376)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(376)
				if ((tmp2)){
					HX_STACK_LINE(376)
					break;
				}
				HX_STACK_LINE(376)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(376)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(376)
				this->jAcc[i] = ((Float)0.0);
			}
		}
		HX_STACK_LINE(377)
		this->pre_dt = ((Float)-1.0);
	}
return null();
}


Float ZPP_UserConstraint_obj::lsq( Array< Float > v){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","lsq",0x54ece799,"zpp_nape.constraint.ZPP_UserConstraint.lsq","zpp_nape/constraint/UserConstraint.hx",379,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(380)
	Float sum = ((Float)0.0);		HX_STACK_VAR(sum,"sum");
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(381)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(381)
		int tmp = this->dim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(381)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(381)
		while((true)){
			HX_STACK_LINE(381)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(381)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(381)
			if ((tmp2)){
				HX_STACK_LINE(381)
				break;
			}
			HX_STACK_LINE(381)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(381)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(381)
			Float tmp4 = v->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(381)
			Float tmp5 = v->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(381)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(381)
			hx::AddEq(sum,tmp6);
		}
	}
	HX_STACK_LINE(382)
	Float tmp = sum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,lsq,return )

Void ZPP_UserConstraint_obj::_clamp( Array< Float > v,Float max){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","_clamp",0x2fee0e0d,"zpp_nape.constraint.ZPP_UserConstraint._clamp","zpp_nape/constraint/UserConstraint.hx",384,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(385)
		Float tmp = this->lsq(v);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		Float x = tmp;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(386)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(386)
		Float tmp2 = (max * max);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(386)
		bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(386)
		if ((tmp3)){
			HX_STACK_LINE(387)
			Float tmp4 = max;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(387)
			Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(387)
			Float tmp6 = ::Math_obj::sqrt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(387)
			Float tmp7 = (Float(tmp4) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(387)
			Float scale = tmp7;		HX_STACK_VAR(scale,"scale");
			HX_STACK_LINE(388)
			{
				HX_STACK_LINE(388)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(388)
				int tmp8 = this->dim;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(388)
				int _g = tmp8;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(388)
				while((true)){
					HX_STACK_LINE(388)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(388)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(388)
					if ((tmp10)){
						HX_STACK_LINE(388)
						break;
					}
					HX_STACK_LINE(388)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(388)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(388)
					Float tmp12 = scale;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(388)
					hx::MultEq(v[i],tmp12);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_UserConstraint_obj,_clamp,(void))

Array< Float > ZPP_UserConstraint_obj::solve( Array< Float > m){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","solve",0x1cce90ce,"zpp_nape.constraint.ZPP_UserConstraint.solve","zpp_nape/constraint/UserConstraint.hx",392,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(393)
	int ind = (int)0;		HX_STACK_VAR(ind,"ind");
	HX_STACK_LINE(394)
	{
		HX_STACK_LINE(394)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(394)
		int tmp = this->dim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(394)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(394)
		while((true)){
			HX_STACK_LINE(394)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(394)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(394)
			if ((tmp2)){
				HX_STACK_LINE(394)
				break;
			}
			HX_STACK_LINE(394)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(394)
			int j = tmp3;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(395)
			Float sum = ((Float)0.0);		HX_STACK_VAR(sum,"sum");
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(396)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(396)
				int tmp4 = (j - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(396)
				int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(396)
				while((true)){
					HX_STACK_LINE(396)
					bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(396)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(396)
					if ((tmp6)){
						HX_STACK_LINE(396)
						break;
					}
					HX_STACK_LINE(396)
					int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(396)
					int k = tmp7;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(396)
					int tmp8 = j;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(396)
					int tmp9 = this->dim;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(396)
					int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(396)
					int tmp11 = k;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(396)
					int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(396)
					Float tmp13 = this->L->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(396)
					int tmp14 = j;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(396)
					int tmp15 = this->dim;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(396)
					int tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(396)
					int tmp17 = k;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(396)
					int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(396)
					Float tmp19 = this->L->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(396)
					Float tmp20 = (tmp13 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(396)
					hx::AddEq(sum,tmp20);
				}
			}
			HX_STACK_LINE(397)
			int tmp4 = (ind)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(397)
			Float tmp5 = m->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(397)
			Float tmp6 = sum;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(397)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(397)
			Float tmp8 = ::Math_obj::sqrt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(397)
			Float rec = tmp8;		HX_STACK_VAR(rec,"rec");
			HX_STACK_LINE(398)
			int tmp9 = j;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(398)
			int tmp10 = this->dim;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(398)
			int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(398)
			int tmp12 = j;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(398)
			int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(398)
			Float tmp14 = rec;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(398)
			this->L[tmp13] = tmp14;
			HX_STACK_LINE(399)
			bool tmp15 = (rec != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(399)
			if ((tmp15)){
				HX_STACK_LINE(400)
				Float tmp16 = (Float(((Float)1.0)) / Float(rec));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(400)
				rec = tmp16;
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					int tmp17 = (j + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(401)
					int _g3 = tmp17;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(401)
					int tmp18 = this->dim;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(401)
					int _g2 = tmp18;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(401)
					while((true)){
						HX_STACK_LINE(401)
						bool tmp19 = (_g3 < _g2);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(401)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(401)
						if ((tmp20)){
							HX_STACK_LINE(401)
							break;
						}
						HX_STACK_LINE(401)
						int tmp21 = (_g3)++;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(401)
						int i = tmp21;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(402)
						Float sum1 = ((Float)0.0);		HX_STACK_VAR(sum1,"sum1");
						HX_STACK_LINE(403)
						{
							HX_STACK_LINE(403)
							int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(403)
							int tmp22 = (j - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(403)
							int _g4 = tmp22;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(403)
							while((true)){
								HX_STACK_LINE(403)
								bool tmp23 = (_g5 < _g4);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(403)
								bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(403)
								if ((tmp24)){
									HX_STACK_LINE(403)
									break;
								}
								HX_STACK_LINE(403)
								int tmp25 = (_g5)++;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(403)
								int k = tmp25;		HX_STACK_VAR(k,"k");
								HX_STACK_LINE(403)
								int tmp26 = i;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(403)
								int tmp27 = this->dim;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(403)
								int tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(403)
								int tmp29 = k;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(403)
								int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(403)
								Float tmp31 = this->L->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(403)
								int tmp32 = j;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(403)
								int tmp33 = this->dim;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(403)
								int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(403)
								int tmp35 = k;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(403)
								int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(403)
								Float tmp37 = this->L->__get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(403)
								Float tmp38 = (tmp31 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(403)
								hx::AddEq(sum1,tmp38);
							}
						}
						HX_STACK_LINE(404)
						int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(404)
						int tmp23 = this->dim;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(404)
						int tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(404)
						int tmp25 = j;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(404)
						int tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(404)
						Float tmp27 = rec;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(404)
						int tmp28 = (ind)++;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(404)
						Float tmp29 = m->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(404)
						Float tmp30 = sum1;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(404)
						Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(404)
						Float tmp32 = (tmp27 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(404)
						this->L[tmp26] = tmp32;
					}
				}
			}
			else{
				HX_STACK_LINE(408)
				{
					HX_STACK_LINE(408)
					int tmp16 = (j + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(408)
					int _g3 = tmp16;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(408)
					int tmp17 = this->dim;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(408)
					int _g2 = tmp17;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(408)
					while((true)){
						HX_STACK_LINE(408)
						bool tmp18 = (_g3 < _g2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(408)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(408)
						if ((tmp19)){
							HX_STACK_LINE(408)
							break;
						}
						HX_STACK_LINE(408)
						int tmp20 = (_g3)++;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(408)
						int i = tmp20;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(408)
						int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(408)
						int tmp22 = this->dim;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(408)
						int tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(408)
						int tmp24 = j;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(408)
						int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(408)
						this->L[tmp25] = ((Float)0.0);
					}
				}
				HX_STACK_LINE(409)
				int tmp16 = this->dim;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(409)
				int tmp17 = j;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(409)
				int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(409)
				int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(409)
				hx::AddEq(ind,tmp19);
			}
		}
	}
	HX_STACK_LINE(412)
	return this->L;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,solve,return )

Void ZPP_UserConstraint_obj::transform( Array< Float > L,Array< Float > x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","transform",0xc180523b,"zpp_nape.constraint.ZPP_UserConstraint.transform","zpp_nape/constraint/UserConstraint.hx",415,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(L,"L")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(416)
			int tmp = this->dim;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(416)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(416)
			while((true)){
				HX_STACK_LINE(416)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(416)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(416)
				if ((tmp2)){
					HX_STACK_LINE(416)
					break;
				}
				HX_STACK_LINE(416)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(416)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(417)
				Float tmp4 = x->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(417)
				Float sum = tmp4;		HX_STACK_VAR(sum,"sum");
				HX_STACK_LINE(418)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(418)
				int tmp6 = this->dim;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(418)
				int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(418)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(418)
				int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(418)
				Float tmp10 = L->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(418)
				Float lii = tmp10;		HX_STACK_VAR(lii,"lii");
				HX_STACK_LINE(419)
				bool tmp11 = (lii != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(419)
				if ((tmp11)){
					HX_STACK_LINE(420)
					{
						HX_STACK_LINE(420)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(420)
						while((true)){
							HX_STACK_LINE(420)
							bool tmp12 = (_g2 < i);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(420)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(420)
							if ((tmp13)){
								HX_STACK_LINE(420)
								break;
							}
							HX_STACK_LINE(420)
							int tmp14 = (_g2)++;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(420)
							int k = tmp14;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(420)
							int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(420)
							int tmp16 = this->dim;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(420)
							int tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(420)
							int tmp18 = k;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(420)
							int tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(420)
							Float tmp20 = L->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(420)
							Float tmp21 = this->y->__get(k);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(420)
							Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(420)
							hx::SubEq(sum,tmp22);
						}
					}
					HX_STACK_LINE(421)
					Float tmp12 = (Float(sum) / Float(lii));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(421)
					this->y[i] = tmp12;
				}
				else{
					HX_STACK_LINE(423)
					this->y[i] = ((Float)0.0);
				}
			}
		}
		HX_STACK_LINE(425)
		{
			HX_STACK_LINE(425)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(425)
			int tmp = this->dim;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(425)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(425)
			while((true)){
				HX_STACK_LINE(425)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(425)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(425)
				if ((tmp2)){
					HX_STACK_LINE(425)
					break;
				}
				HX_STACK_LINE(425)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(425)
				int ix = tmp3;		HX_STACK_VAR(ix,"ix");
				HX_STACK_LINE(426)
				int tmp4 = this->dim;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(426)
				int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(426)
				int tmp6 = ix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(426)
				int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(426)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(427)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(427)
				int tmp9 = this->dim;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(427)
				int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(427)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(427)
				int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(427)
				Float tmp13 = L->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(427)
				Float lii = tmp13;		HX_STACK_VAR(lii,"lii");
				HX_STACK_LINE(428)
				bool tmp14 = (lii != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(428)
				if ((tmp14)){
					HX_STACK_LINE(429)
					Float tmp15 = this->y->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(429)
					Float sum = tmp15;		HX_STACK_VAR(sum,"sum");
					HX_STACK_LINE(430)
					{
						HX_STACK_LINE(430)
						int tmp16 = (i + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(430)
						int _g3 = tmp16;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(430)
						int tmp17 = this->dim;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(430)
						int _g2 = tmp17;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(430)
						while((true)){
							HX_STACK_LINE(430)
							bool tmp18 = (_g3 < _g2);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(430)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(430)
							if ((tmp19)){
								HX_STACK_LINE(430)
								break;
							}
							HX_STACK_LINE(430)
							int tmp20 = (_g3)++;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(430)
							int k = tmp20;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(430)
							int tmp21 = k;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(430)
							int tmp22 = this->dim;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(430)
							int tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(430)
							int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(430)
							int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(430)
							Float tmp26 = L->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(430)
							Float tmp27 = x->__get(k);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(430)
							Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(430)
							hx::SubEq(sum,tmp28);
						}
					}
					HX_STACK_LINE(431)
					Float tmp16 = (Float(sum) / Float(lii));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(431)
					x[i] = tmp16;
				}
				else{
					HX_STACK_LINE(433)
					x[i] = ((Float)0.0);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_UserConstraint_obj,transform,(void))

bool ZPP_UserConstraint_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","preStep",0x719bc41e,"zpp_nape.constraint.ZPP_UserConstraint.preStep","zpp_nape/constraint/UserConstraint.hx",441,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(445)
	Float tmp = this->pre_dt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(445)
	bool tmp1 = (tmp == ((Float)-1.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(445)
	if ((tmp1)){
		HX_STACK_LINE(445)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(446)
	Float tmp2 = dt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(446)
	Float tmp3 = this->pre_dt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(446)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(446)
	Float dtratio = tmp4;		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(447)
	this->pre_dt = dt;
	HX_STACK_LINE(448)
	this->stepped = true;
	HX_STACK_LINE(449)
	::nape::constraint::UserConstraint tmp5 = this->outer_zn;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(449)
	tmp5->__prepare();
	HX_STACK_LINE(450)
	::nape::constraint::UserConstraint tmp6 = this->outer_zn;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(450)
	tmp6->__eff_mass(this->Keff);
	HX_STACK_LINE(451)
	this->L = this->solve(this->Keff);
	HX_STACK_LINE(452)
	bool tmp7 = this->stiff;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(452)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(452)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(452)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(452)
	if ((tmp9)){
		HX_STACK_LINE(452)
		bool tmp11 = this->velonly;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(452)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(452)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(452)
		tmp10 = !(tmp13);
	}
	else{
		HX_STACK_LINE(452)
		tmp10 = false;
	}
	HX_STACK_LINE(452)
	if ((tmp10)){
		HX_STACK_LINE(453)
		Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
		HX_STACK_LINE(454)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(454)
		{
			HX_STACK_LINE(455)
			Float tmp12 = ::Math_obj::PI;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(455)
			Float tmp13 = ((int)2 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(455)
			Float tmp14 = this->frequency;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(455)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(455)
			Float omega = tmp15;		HX_STACK_VAR(omega,"omega");
			HX_STACK_LINE(456)
			Float tmp16 = (dt * omega);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(456)
			Float tmp17 = this->damping;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(456)
			Float tmp18 = ((int)2 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(456)
			Float tmp19 = (omega * dt);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(456)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(456)
			Float tmp21 = (tmp16 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(456)
			Float tmp22 = (Float((int)1) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(456)
			this->gamma = tmp22;
			HX_STACK_LINE(457)
			Float tmp23 = this->gamma;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(457)
			Float tmp24 = ((int)1 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(457)
			Float tmp25 = (Float((int)1) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(457)
			Float ig = tmp25;		HX_STACK_VAR(ig,"ig");
			HX_STACK_LINE(458)
			Float tmp26 = (dt * omega);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(458)
			Float tmp27 = omega;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(458)
			Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(458)
			Float tmp29 = this->gamma;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(458)
			Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(458)
			biasCoef = tmp30;
			HX_STACK_LINE(459)
			hx::MultEq(this->gamma,ig);
			HX_STACK_LINE(460)
			tmp11 = ig;
		}
		HX_STACK_LINE(454)
		this->soft = tmp11;
		HX_STACK_LINE(462)
		::nape::constraint::UserConstraint tmp12 = this->outer_zn;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(462)
		tmp12->__position(this->bias);
		HX_STACK_LINE(463)
		bool tmp13 = this->breakUnderError;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(463)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(463)
		if ((tmp13)){
			HX_STACK_LINE(463)
			Float tmp15 = this->lsq(this->bias);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(463)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(463)
			Float tmp17 = this->maxError;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(463)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(463)
			Float tmp19 = this->maxError;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(463)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(463)
			Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(463)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(463)
			tmp14 = (tmp16 > tmp22);
		}
		else{
			HX_STACK_LINE(463)
			tmp14 = false;
		}
		HX_STACK_LINE(463)
		if ((tmp14)){
			HX_STACK_LINE(463)
			return true;
		}
		HX_STACK_LINE(464)
		{
			HX_STACK_LINE(464)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(464)
			int tmp15 = this->dim;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(464)
			int _g = tmp15;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(464)
			while((true)){
				HX_STACK_LINE(464)
				bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(464)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(464)
				if ((tmp17)){
					HX_STACK_LINE(464)
					break;
				}
				HX_STACK_LINE(464)
				int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(464)
				int i = tmp18;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(464)
				Float tmp19 = biasCoef;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(464)
				Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(464)
				hx::MultEq(this->bias[i],tmp20);
			}
		}
		HX_STACK_LINE(465)
		Float tmp15 = this->maxError;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(465)
		this->_clamp(this->bias,tmp15);
	}
	else{
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(468)
			int tmp11 = this->dim;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(468)
			int _g = tmp11;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(468)
			while((true)){
				HX_STACK_LINE(468)
				bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(468)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(468)
				if ((tmp13)){
					HX_STACK_LINE(468)
					break;
				}
				HX_STACK_LINE(468)
				int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(468)
				int i = tmp14;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(468)
				this->bias[i] = ((Float)0.0);
			}
		}
		HX_STACK_LINE(469)
		this->gamma = ((Float)0.0);
		HX_STACK_LINE(470)
		this->soft = ((Float)1.0);
	}
	HX_STACK_LINE(472)
	{
		HX_STACK_LINE(472)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(472)
		int tmp11 = this->dim;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(472)
		int _g = tmp11;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(472)
		while((true)){
			HX_STACK_LINE(472)
			bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(472)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(472)
			if ((tmp13)){
				HX_STACK_LINE(472)
				break;
			}
			HX_STACK_LINE(472)
			int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(472)
			int i = tmp14;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(472)
			Float tmp15 = dtratio;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(472)
			hx::MultEq(this->jAcc[i],tmp15);
		}
	}
	HX_STACK_LINE(473)
	Float tmp11 = this->maxForce;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(473)
	Float tmp12 = dt;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(473)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(473)
	this->jMax = tmp13;
	HX_STACK_LINE(474)
	return false;
}


Void ZPP_UserConstraint_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","warmStart",0x66f04cac,"zpp_nape.constraint.ZPP_UserConstraint.warmStart","zpp_nape/constraint/UserConstraint.hx",478,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(478)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(478)
		Array< ::Dynamic > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(478)
		while((true)){
			HX_STACK_LINE(478)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(478)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(478)
			if ((tmp1)){
				HX_STACK_LINE(478)
				break;
			}
			HX_STACK_LINE(478)
			::zpp_nape::constraint::ZPP_UserBody tmp2 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(478)
			::zpp_nape::constraint::ZPP_UserBody bs = tmp2;		HX_STACK_VAR(bs,"bs");
			HX_STACK_LINE(478)
			++(_g);
			HX_STACK_LINE(479)
			::zpp_nape::phys::ZPP_Body b = bs->body;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(480)
			::nape::constraint::UserConstraint tmp3 = this->outer_zn;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(480)
			::nape::phys::Body tmp4 = b->outer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(480)
			::nape::geom::Vec3 tmp5 = this->vec3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(480)
			tmp3->__impulse(this->jAcc,tmp4,tmp5);
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(482)
				Float t = b->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(491)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(491)
				{
					HX_STACK_LINE(491)
					::nape::geom::Vec3 tmp7 = this->vec3;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(491)
					::nape::geom::Vec3 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(491)
					{
						HX_STACK_LINE(491)
						bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(491)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(491)
						if ((tmp8)){
							HX_STACK_LINE(491)
							tmp9 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(491)
							tmp9 = false;
						}
						HX_STACK_LINE(491)
						if ((tmp9)){
							HX_STACK_LINE(491)
							::String tmp10 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(491)
							::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(491)
							HX_STACK_DO_THROW(tmp11);
						}
					}
					HX_STACK_LINE(491)
					{
						HX_STACK_LINE(491)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(491)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(491)
						if ((tmp8)){
							HX_STACK_LINE(491)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(491)
					tmp6 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(491)
				Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(491)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(491)
				hx::AddEq(b->velx,tmp8);
				HX_STACK_LINE(492)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					::nape::geom::Vec3 tmp10 = this->vec3;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(492)
					::nape::geom::Vec3 _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(492)
					{
						HX_STACK_LINE(492)
						bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(492)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(492)
						if ((tmp11)){
							HX_STACK_LINE(492)
							tmp12 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(492)
							tmp12 = false;
						}
						HX_STACK_LINE(492)
						if ((tmp12)){
							HX_STACK_LINE(492)
							::String tmp13 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(492)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(492)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(492)
					{
						HX_STACK_LINE(492)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(492)
						bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(492)
						if ((tmp11)){
							HX_STACK_LINE(492)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(492)
					tmp9 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(492)
				Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(492)
				Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(492)
				hx::AddEq(b->vely,tmp11);
			}
			HX_STACK_LINE(494)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				::nape::geom::Vec3 tmp7 = this->vec3;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(494)
				::nape::geom::Vec3 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(494)
				{
					HX_STACK_LINE(494)
					bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(494)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(494)
					if ((tmp8)){
						HX_STACK_LINE(494)
						tmp9 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(494)
						tmp9 = false;
					}
					HX_STACK_LINE(494)
					if ((tmp9)){
						HX_STACK_LINE(494)
						::String tmp10 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(494)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(494)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(494)
				{
					HX_STACK_LINE(494)
					::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(494)
					bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(494)
					if ((tmp8)){
						HX_STACK_LINE(494)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(494)
				tmp6 = _this->zpp_inner->z;
			}
			HX_STACK_LINE(494)
			Float tmp7 = b->iinertia;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(494)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(494)
			hx::AddEq(b->angvel,tmp8);
		}
	}
return null();
}


bool ZPP_UserConstraint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","applyImpulseVel",0x6f8bf1c5,"zpp_nape.constraint.ZPP_UserConstraint.applyImpulseVel","zpp_nape/constraint/UserConstraint.hx",499,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(500)
	::nape::constraint::UserConstraint tmp = this->outer_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(500)
	tmp->__velocity(this->J);
	HX_STACK_LINE(501)
	{
		HX_STACK_LINE(501)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(501)
		int tmp1 = this->dim;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(501)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(501)
		while((true)){
			HX_STACK_LINE(501)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(501)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(501)
			if ((tmp3)){
				HX_STACK_LINE(501)
				break;
			}
			HX_STACK_LINE(501)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(501)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(501)
			Float tmp5 = this->bias->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(501)
			Float tmp6 = this->J->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(501)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(501)
			this->J[i] = tmp7;
		}
	}
	HX_STACK_LINE(502)
	this->transform(this->L,this->J);
	HX_STACK_LINE(503)
	{
		HX_STACK_LINE(503)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(503)
		int tmp1 = this->dim;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(503)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(503)
		while((true)){
			HX_STACK_LINE(503)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(503)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(503)
			if ((tmp3)){
				HX_STACK_LINE(503)
				break;
			}
			HX_STACK_LINE(503)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(503)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(504)
			Float tmp5 = this->jAcc->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(504)
			this->jOld[i] = tmp5;
			HX_STACK_LINE(505)
			Float tmp6 = this->J->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(505)
			Float tmp7 = this->soft;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(505)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(505)
			Float tmp9 = this->jAcc->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(505)
			Float tmp10 = this->gamma;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(505)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(505)
			Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(505)
			Float tmp13 = this->J[i] = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(505)
			hx::AddEq(this->jAcc[i],tmp13);
		}
	}
	HX_STACK_LINE(507)
	::nape::constraint::UserConstraint tmp1 = this->outer_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(507)
	tmp1->__clamp(this->jAcc);
	HX_STACK_LINE(508)
	bool tmp2 = this->breakUnderForce;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(508)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(508)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(508)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(508)
	if ((tmp4)){
		HX_STACK_LINE(508)
		bool tmp6 = this->stiff;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(508)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(508)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(508)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(508)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(508)
		tmp5 = !(tmp10);
	}
	else{
		HX_STACK_LINE(508)
		tmp5 = true;
	}
	HX_STACK_LINE(508)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(508)
	if ((tmp5)){
		HX_STACK_LINE(508)
		Float tmp7 = this->lsq(this->jAcc);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(508)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(508)
		Float tmp9 = this->jMax;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(508)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(508)
		Float tmp11 = this->jMax;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(508)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(508)
		Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(508)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(508)
		tmp6 = (tmp8 > tmp14);
	}
	else{
		HX_STACK_LINE(508)
		tmp6 = false;
	}
	HX_STACK_LINE(508)
	if ((tmp6)){
		HX_STACK_LINE(509)
		bool tmp7 = this->breakUnderForce;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(509)
		if ((tmp7)){
			HX_STACK_LINE(509)
			return true;
		}
		else{
			HX_STACK_LINE(510)
			bool tmp8 = this->stiff;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(510)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(510)
			if ((tmp9)){
				HX_STACK_LINE(510)
				Float tmp10 = this->jMax;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(510)
				this->_clamp(this->jAcc,tmp10);
			}
		}
	}
	HX_STACK_LINE(512)
	{
		HX_STACK_LINE(512)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(512)
		int tmp7 = this->dim;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(512)
		int _g = tmp7;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(512)
		while((true)){
			HX_STACK_LINE(512)
			bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(512)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(512)
			if ((tmp9)){
				HX_STACK_LINE(512)
				break;
			}
			HX_STACK_LINE(512)
			int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(512)
			int i = tmp10;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(512)
			Float tmp11 = this->jAcc->__get(i);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(512)
			Float tmp12 = this->jOld->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(512)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(512)
			this->J[i] = tmp13;
		}
	}
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(513)
		Array< ::Dynamic > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(513)
		while((true)){
			HX_STACK_LINE(513)
			bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(513)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(513)
			if ((tmp8)){
				HX_STACK_LINE(513)
				break;
			}
			HX_STACK_LINE(513)
			::zpp_nape::constraint::ZPP_UserBody tmp9 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(513)
			::zpp_nape::constraint::ZPP_UserBody bs = tmp9;		HX_STACK_VAR(bs,"bs");
			HX_STACK_LINE(513)
			++(_g);
			HX_STACK_LINE(514)
			::zpp_nape::phys::ZPP_Body b = bs->body;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(515)
			::nape::constraint::UserConstraint tmp10 = this->outer_zn;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(515)
			::nape::phys::Body tmp11 = b->outer;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(515)
			::nape::geom::Vec3 tmp12 = this->vec3;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(515)
			tmp10->__impulse(this->J,tmp11,tmp12);
			HX_STACK_LINE(516)
			{
				HX_STACK_LINE(517)
				Float t = b->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(526)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(526)
				{
					HX_STACK_LINE(526)
					::nape::geom::Vec3 tmp14 = this->vec3;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(526)
					::nape::geom::Vec3 _this = tmp14;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(526)
					{
						HX_STACK_LINE(526)
						bool tmp15 = (_this != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(526)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(526)
						if ((tmp15)){
							HX_STACK_LINE(526)
							tmp16 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(526)
							tmp16 = false;
						}
						HX_STACK_LINE(526)
						if ((tmp16)){
							HX_STACK_LINE(526)
							::String tmp17 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(526)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(526)
							HX_STACK_DO_THROW(tmp18);
						}
					}
					HX_STACK_LINE(526)
					{
						HX_STACK_LINE(526)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(526)
						bool tmp15 = (_this1->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(526)
						if ((tmp15)){
							HX_STACK_LINE(526)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(526)
					tmp13 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(526)
				Float tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(526)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(526)
				hx::AddEq(b->velx,tmp15);
				HX_STACK_LINE(527)
				Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(527)
				{
					HX_STACK_LINE(527)
					::nape::geom::Vec3 tmp17 = this->vec3;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(527)
					::nape::geom::Vec3 _this = tmp17;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(527)
					{
						HX_STACK_LINE(527)
						bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(527)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(527)
						if ((tmp18)){
							HX_STACK_LINE(527)
							tmp19 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(527)
							tmp19 = false;
						}
						HX_STACK_LINE(527)
						if ((tmp19)){
							HX_STACK_LINE(527)
							::String tmp20 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(527)
							::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(527)
							HX_STACK_DO_THROW(tmp21);
						}
					}
					HX_STACK_LINE(527)
					{
						HX_STACK_LINE(527)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(527)
						bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(527)
						if ((tmp18)){
							HX_STACK_LINE(527)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(527)
					tmp16 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(527)
				Float tmp17 = t;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(527)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(527)
				hx::AddEq(b->vely,tmp18);
			}
			HX_STACK_LINE(529)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(529)
			{
				HX_STACK_LINE(529)
				::nape::geom::Vec3 tmp14 = this->vec3;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(529)
				::nape::geom::Vec3 _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(529)
				{
					HX_STACK_LINE(529)
					bool tmp15 = (_this != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(529)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(529)
					if ((tmp15)){
						HX_STACK_LINE(529)
						tmp16 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(529)
						tmp16 = false;
					}
					HX_STACK_LINE(529)
					if ((tmp16)){
						HX_STACK_LINE(529)
						::String tmp17 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(529)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(529)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(529)
				{
					HX_STACK_LINE(529)
					::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(529)
					bool tmp15 = (_this1->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(529)
					if ((tmp15)){
						HX_STACK_LINE(529)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(529)
				tmp13 = _this->zpp_inner->z;
			}
			HX_STACK_LINE(529)
			Float tmp14 = b->iinertia;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(529)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(529)
			hx::AddEq(b->angvel,tmp15);
		}
	}
	HX_STACK_LINE(531)
	return false;
}


bool ZPP_UserConstraint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","applyImpulsePos",0x6f876cfc,"zpp_nape.constraint.ZPP_UserConstraint.applyImpulsePos","zpp_nape/constraint/UserConstraint.hx",533,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(534)
	bool tmp = this->velonly;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(534)
	if ((tmp)){
		HX_STACK_LINE(534)
		return false;
	}
	HX_STACK_LINE(535)
	::nape::constraint::UserConstraint tmp1 = this->outer_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(535)
	tmp1->__prepare();
	HX_STACK_LINE(536)
	::nape::constraint::UserConstraint tmp2 = this->outer_zn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(536)
	tmp2->__position(this->J);
	HX_STACK_LINE(537)
	Float tmp3 = this->lsq(this->J);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(537)
	Float lj = tmp3;		HX_STACK_VAR(lj,"lj");
	HX_STACK_LINE(538)
	bool tmp4 = this->breakUnderError;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(538)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(538)
	if ((tmp4)){
		HX_STACK_LINE(538)
		Float tmp6 = lj;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(538)
		Float tmp7 = this->maxError;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(538)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(538)
		Float tmp9 = this->maxError;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(538)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(538)
		Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(538)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(538)
		tmp5 = (tmp6 > tmp12);
	}
	else{
		HX_STACK_LINE(538)
		tmp5 = false;
	}
	HX_STACK_LINE(538)
	if ((tmp5)){
		HX_STACK_LINE(538)
		return true;
	}
	else{
		HX_STACK_LINE(539)
		Float tmp6 = lj;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(539)
		Float tmp7 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(539)
		Float tmp8 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(539)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(539)
		bool tmp10 = (tmp6 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(539)
		if ((tmp10)){
			HX_STACK_LINE(539)
			return false;
		}
	}
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(540)
		int tmp6 = this->dim;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(540)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(540)
		while((true)){
			HX_STACK_LINE(540)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(540)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(540)
			if ((tmp8)){
				HX_STACK_LINE(540)
				break;
			}
			HX_STACK_LINE(540)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(540)
			int i = tmp9;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(540)
			hx::MultEq(this->J[i],(int)-1);
		}
	}
	HX_STACK_LINE(541)
	::nape::constraint::UserConstraint tmp6 = this->outer_zn;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(541)
	tmp6->__eff_mass(this->Keff);
	HX_STACK_LINE(542)
	this->transform(this->solve(this->Keff),this->J);
	HX_STACK_LINE(543)
	::nape::constraint::UserConstraint tmp7 = this->outer_zn;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(543)
	tmp7->__clamp(this->J);
	HX_STACK_LINE(544)
	{
		HX_STACK_LINE(544)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(544)
		Array< ::Dynamic > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(544)
		while((true)){
			HX_STACK_LINE(544)
			bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(544)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(544)
			if ((tmp9)){
				HX_STACK_LINE(544)
				break;
			}
			HX_STACK_LINE(544)
			::zpp_nape::constraint::ZPP_UserBody tmp10 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(544)
			::zpp_nape::constraint::ZPP_UserBody bs = tmp10;		HX_STACK_VAR(bs,"bs");
			HX_STACK_LINE(544)
			++(_g);
			HX_STACK_LINE(545)
			::zpp_nape::phys::ZPP_Body b = bs->body;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(546)
			::nape::constraint::UserConstraint tmp11 = this->outer_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(546)
			::nape::phys::Body tmp12 = b->outer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(546)
			::nape::geom::Vec3 tmp13 = this->vec3;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(546)
			tmp11->__impulse(this->J,tmp12,tmp13);
			HX_STACK_LINE(547)
			{
				HX_STACK_LINE(548)
				Float t = b->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(557)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(557)
				{
					HX_STACK_LINE(557)
					::nape::geom::Vec3 tmp15 = this->vec3;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(557)
					::nape::geom::Vec3 _this = tmp15;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(557)
					{
						HX_STACK_LINE(557)
						bool tmp16 = (_this != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(557)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(557)
						if ((tmp16)){
							HX_STACK_LINE(557)
							tmp17 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(557)
							tmp17 = false;
						}
						HX_STACK_LINE(557)
						if ((tmp17)){
							HX_STACK_LINE(557)
							::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(557)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(557)
							HX_STACK_DO_THROW(tmp19);
						}
					}
					HX_STACK_LINE(557)
					{
						HX_STACK_LINE(557)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(557)
						bool tmp16 = (_this1->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(557)
						if ((tmp16)){
							HX_STACK_LINE(557)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(557)
					tmp14 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(557)
				Float tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(557)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(557)
				hx::AddEq(b->posx,tmp16);
				HX_STACK_LINE(558)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(558)
				{
					HX_STACK_LINE(558)
					::nape::geom::Vec3 tmp18 = this->vec3;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(558)
					::nape::geom::Vec3 _this = tmp18;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(558)
					{
						HX_STACK_LINE(558)
						bool tmp19 = (_this != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(558)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(558)
						if ((tmp19)){
							HX_STACK_LINE(558)
							tmp20 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(558)
							tmp20 = false;
						}
						HX_STACK_LINE(558)
						if ((tmp20)){
							HX_STACK_LINE(558)
							::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(558)
							::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(558)
							HX_STACK_DO_THROW(tmp22);
						}
					}
					HX_STACK_LINE(558)
					{
						HX_STACK_LINE(558)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(558)
						bool tmp19 = (_this1->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(558)
						if ((tmp19)){
							HX_STACK_LINE(558)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(558)
					tmp17 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(558)
				Float tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(558)
				Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(558)
				hx::AddEq(b->posy,tmp19);
			}
			HX_STACK_LINE(560)
			{
				HX_STACK_LINE(560)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(560)
				{
					HX_STACK_LINE(560)
					::nape::geom::Vec3 tmp15 = this->vec3;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(560)
					::nape::geom::Vec3 _this = tmp15;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(560)
					bool tmp16 = (_this != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(560)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(560)
					if ((tmp16)){
						HX_STACK_LINE(560)
						tmp17 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(560)
						tmp17 = false;
					}
					HX_STACK_LINE(560)
					if ((tmp17)){
						HX_STACK_LINE(560)
						::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(560)
						::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(560)
						HX_STACK_DO_THROW(tmp19);
					}
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(560)
						bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(560)
						if ((tmp18)){
							HX_STACK_LINE(560)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(560)
					tmp14 = _this->zpp_inner->z;
				}
				HX_STACK_LINE(560)
				Float tmp15 = b->iinertia;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(560)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(560)
				Float dr = tmp16;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(560)
				hx::AddEq(b->rot,dr);
				HX_STACK_LINE(560)
				Float tmp17 = (dr * dr);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(560)
				bool tmp18 = (tmp17 > ((Float)0.0001));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(560)
				if ((tmp18)){
					HX_STACK_LINE(560)
					Float tmp19 = b->rot;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(560)
					Float tmp20 = ::Math_obj::sin(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(560)
					b->axisx = tmp20;
					HX_STACK_LINE(560)
					Float tmp21 = b->rot;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(560)
					Float tmp22 = ::Math_obj::cos(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(560)
					b->axisy = tmp22;
					HX_STACK_LINE(560)
					Dynamic();
				}
				else{
					HX_STACK_LINE(560)
					Float tmp19 = (dr * dr);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(560)
					Float d2 = tmp19;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(560)
					Float tmp20 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(560)
					Float tmp21 = ((int)1 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(560)
					Float p = tmp21;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(560)
					Float tmp22 = (d2 * d2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(560)
					Float tmp23 = (Float(tmp22) / Float((int)8));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(560)
					Float tmp24 = ((int)1 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(560)
					Float m = tmp24;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(560)
					Float tmp25 = (p * b->axisx);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(560)
					Float tmp26 = (dr * b->axisy);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(560)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(560)
					Float tmp28 = m;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(560)
					Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(560)
					Float nx = tmp29;		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(560)
					Float tmp30 = (p * b->axisy);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(560)
					Float tmp31 = (dr * b->axisx);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(560)
					Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(560)
					Float tmp33 = m;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(560)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(560)
					b->axisy = tmp34;
					HX_STACK_LINE(560)
					b->axisx = nx;
				}
			}
		}
	}
	HX_STACK_LINE(562)
	return false;
}


Void ZPP_UserConstraint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","draw",0xf5133995,"zpp_nape.constraint.ZPP_UserConstraint.draw","zpp_nape/constraint/UserConstraint.hx",564,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(565)
		::nape::constraint::UserConstraint tmp = this->outer_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(565)
		::nape::util::Debug tmp1 = g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(565)
		tmp->__draw(tmp1);
	}
return null();
}



ZPP_UserConstraint_obj::ZPP_UserConstraint_obj()
{
}

void ZPP_UserConstraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_UserConstraint);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(bodies,"bodies");
	HX_MARK_MEMBER_NAME(dim,"dim");
	HX_MARK_MEMBER_NAME(jAcc,"jAcc");
	HX_MARK_MEMBER_NAME(bias,"bias");
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	HX_MARK_MEMBER_NAME(L,"L");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(soft,"soft");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(velonly,"velonly");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(Keff,"Keff");
	HX_MARK_MEMBER_NAME(vec3,"vec3");
	HX_MARK_MEMBER_NAME(J,"J");
	HX_MARK_MEMBER_NAME(jOld,"jOld");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_UserConstraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(bodies,"bodies");
	HX_VISIT_MEMBER_NAME(dim,"dim");
	HX_VISIT_MEMBER_NAME(jAcc,"jAcc");
	HX_VISIT_MEMBER_NAME(bias,"bias");
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	HX_VISIT_MEMBER_NAME(L,"L");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(soft,"soft");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(velonly,"velonly");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(Keff,"Keff");
	HX_VISIT_MEMBER_NAME(vec3,"vec3");
	HX_VISIT_MEMBER_NAME(J,"J");
	HX_VISIT_MEMBER_NAME(jOld,"jOld");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_UserConstraint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"L") ) { return L; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"J") ) { return J; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dim") ) { return dim; }
		if (HX_FIELD_EQ(inName,"lsq") ) { return lsq_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jAcc") ) { return jAcc; }
		if (HX_FIELD_EQ(inName,"bias") ) { return bias; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"soft") ) { return soft; }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"Keff") ) { return Keff; }
		if (HX_FIELD_EQ(inName,"vec3") ) { return vec3; }
		if (HX_FIELD_EQ(inName,"jOld") ) { return jOld; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"solve") ) { return solve_dyn(); }
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { return bodies; }
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		if (HX_FIELD_EQ(inName,"broken") ) { return broken_dyn(); }
		if (HX_FIELD_EQ(inName,"_clamp") ) { return _clamp_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addBody") ) { return addBody_dyn(); }
		if (HX_FIELD_EQ(inName,"remBody") ) { return remBody_dyn(); }
		if (HX_FIELD_EQ(inName,"stepped") ) { return stepped; }
		if (HX_FIELD_EQ(inName,"velonly") ) { return velonly; }
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearcache") ) { return clearcache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"pair_exists") ) { return pair_exists_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeBodies") ) { return activeBodies_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inactiveBodies") ) { return inactiveBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"wake_connected") ) { return wake_connected_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulsePos") ) { return applyImpulsePos_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"bindVec2_invalidate") ) { return bindVec2_invalidate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_UserConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"L") ) { L=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"J") ) { J=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dim") ) { dim=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jAcc") ) { jAcc=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bias") ) { bias=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soft") ) { soft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Keff") ) { Keff=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vec3") ) { vec3=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jOld") ) { jOld=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { bodies=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velonly") ) { velonly=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::UserConstraint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_UserConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
	outFields->push(HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a"));
	outFields->push(HX_HCSTRING("dim","\x48","\x3d","\x4c","\x00"));
	outFields->push(HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46"));
	outFields->push(HX_HCSTRING("bias","\x79","\xea","\x16","\x41"));
	outFields->push(HX_HCSTRING("stepped","\x03","\x05","\x60","\x81"));
	outFields->push(HX_HCSTRING("L","\x4c","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("soft","\xea","\x1c","\x58","\x4c"));
	outFields->push(HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e"));
	outFields->push(HX_HCSTRING("velonly","\x49","\x5a","\xe9","\x05"));
	outFields->push(HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"));
	outFields->push(HX_HCSTRING("Keff","\x7a","\xfd","\xdf","\x31"));
	outFields->push(HX_HCSTRING("vec3","\x5f","\x27","\x4c","\x4e"));
	outFields->push(HX_HCSTRING("J","\x4a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("jOld","\x5d","\xee","\x4c","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::constraint::UserConstraint*/ ,(int)offsetof(ZPP_UserConstraint_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ZPP_UserConstraint_obj,bodies),HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a")},
	{hx::fsInt,(int)offsetof(ZPP_UserConstraint_obj,dim),HX_HCSTRING("dim","\x48","\x3d","\x4c","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,jAcc),HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,bias),HX_HCSTRING("bias","\x79","\xea","\x16","\x41")},
	{hx::fsBool,(int)offsetof(ZPP_UserConstraint_obj,stepped),HX_HCSTRING("stepped","\x03","\x05","\x60","\x81")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,L),HX_HCSTRING("L","\x4c","\x00","\x00","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_UserConstraint_obj,soft),HX_HCSTRING("soft","\xea","\x1c","\x58","\x4c")},
	{hx::fsFloat,(int)offsetof(ZPP_UserConstraint_obj,gamma),HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e")},
	{hx::fsBool,(int)offsetof(ZPP_UserConstraint_obj,velonly),HX_HCSTRING("velonly","\x49","\x5a","\xe9","\x05")},
	{hx::fsFloat,(int)offsetof(ZPP_UserConstraint_obj,jMax),HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,Keff),HX_HCSTRING("Keff","\x7a","\xfd","\xdf","\x31")},
	{hx::fsObject /*::nape::geom::Vec3*/ ,(int)offsetof(ZPP_UserConstraint_obj,vec3),HX_HCSTRING("vec3","\x5f","\x27","\x4c","\x4e")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,J),HX_HCSTRING("J","\x4a","\x00","\x00","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,jOld),HX_HCSTRING("jOld","\x5d","\xee","\x4c","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
	HX_HCSTRING("bindVec2_invalidate","\xbf","\x6e","\x04","\x93"),
	HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a"),
	HX_HCSTRING("dim","\x48","\x3d","\x4c","\x00"),
	HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46"),
	HX_HCSTRING("bias","\x79","\xea","\x16","\x41"),
	HX_HCSTRING("addBody","\x63","\xbd","\x58","\x7d"),
	HX_HCSTRING("remBody","\x1c","\x35","\x3c","\xd5"),
	HX_HCSTRING("bodyImpulse","\x33","\x76","\xa2","\x5f"),
	HX_HCSTRING("activeBodies","\xe6","\x69","\xf8","\xba"),
	HX_HCSTRING("inactiveBodies","\x4b","\x89","\xc5","\x8c"),
	HX_HCSTRING("stepped","\x03","\x05","\x60","\x81"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("wake_connected","\xae","\xcf","\xdd","\x3d"),
	HX_HCSTRING("forest","\xdd","\x8c","\x88","\xfd"),
	HX_HCSTRING("pair_exists","\xa1","\x6a","\x58","\x69"),
	HX_HCSTRING("broken","\x55","\xb6","\x57","\x1c"),
	HX_HCSTRING("clearcache","\x95","\x69","\xf1","\x82"),
	HX_HCSTRING("lsq","\x0a","\x58","\x52","\x00"),
	HX_HCSTRING("_clamp","\x3c","\xba","\x3f","\x44"),
	HX_HCSTRING("L","\x4c","\x00","\x00","\x00"),
	HX_HCSTRING("solve","\x7f","\xbf","\xc5","\x80"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("soft","\xea","\x1c","\x58","\x4c"),
	HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e"),
	HX_HCSTRING("velonly","\x49","\x5a","\xe9","\x05"),
	HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"),
	HX_HCSTRING("Keff","\x7a","\xfd","\xdf","\x31"),
	HX_HCSTRING("preStep","\x0f","\xc1","\xc0","\x24"),
	HX_HCSTRING("vec3","\x5f","\x27","\x4c","\x4e"),
	HX_HCSTRING("warmStart","\xdd","\x27","\x03","\xeb"),
	HX_HCSTRING("J","\x4a","\x00","\x00","\x00"),
	HX_HCSTRING("jOld","\x5d","\xee","\x4c","\x46"),
	HX_HCSTRING("applyImpulseVel","\xb6","\xc7","\x50","\x1f"),
	HX_HCSTRING("applyImpulsePos","\xed","\x42","\x4c","\x1f"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_UserConstraint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_UserConstraint_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_UserConstraint_obj::__mClass;

void ZPP_UserConstraint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_UserConstraint","\x7d","\x3c","\x4e","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_UserConstraint_obj >;
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
} // end namespace constraint
