#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <zpp_nape/util/ZPP_ArbiterList.h>
#endif
namespace nape{
namespace dynamics{

Void ArbiterList_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.ArbiterList","new",0xbcb70d25,"nape.dynamics.ArbiterList.new","nape/dynamics/ArbiterList.hx",234,0xfd301dcb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(238)
	this->zpp_inner = null();
	HX_STACK_LINE(696)
	::zpp_nape::util::ZPP_ArbiterList tmp = ::zpp_nape::util::ZPP_ArbiterList_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(696)
	this->zpp_inner = tmp;
	HX_STACK_LINE(697)
	::zpp_nape::util::ZPP_ArbiterList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(697)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ArbiterList_obj::~ArbiterList_obj() { }

Dynamic ArbiterList_obj::__CreateEmpty() { return  new ArbiterList_obj; }
hx::ObjectPtr< ArbiterList_obj > ArbiterList_obj::__new()
{  hx::ObjectPtr< ArbiterList_obj > _result_ = new ArbiterList_obj();
	_result_->__construct();
	return _result_;}

Dynamic ArbiterList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArbiterList_obj > _result_ = new ArbiterList_obj();
	_result_->__construct();
	return _result_;}

int ArbiterList_obj::get_length( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","get_length",0x4c1d1a8a,"nape.dynamics.ArbiterList.get_length","nape/dynamics/ArbiterList.hx",263,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	int tmp = this->zpp_gl();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(264)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,get_length,return )

int ArbiterList_obj::zpp_gl( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","zpp_gl",0x9d3c9fe5,"nape.dynamics.ArbiterList.zpp_gl","nape/dynamics/ArbiterList.hx",269,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(270)
	::zpp_nape::util::ZPP_ArbiterList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	tmp->valmod();
	HX_STACK_LINE(271)
	::zpp_nape::util::ZPP_ArbiterList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	bool tmp2 = tmp1->zip_length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(271)
	if ((tmp2)){
		HX_STACK_LINE(272)
		::zpp_nape::util::ZPP_ArbiterList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		tmp3->zip_length = false;
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(274)
			::zpp_nape::util::ZPP_ArbiterList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(274)
			tmp4->user_length = (int)0;
			HX_STACK_LINE(275)
			{
				HX_STACK_LINE(276)
				::zpp_nape::util::ZPP_ArbiterList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(276)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp6 = tmp5->inner->head;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(276)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(277)
				while((true)){
					HX_STACK_LINE(277)
					bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(277)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(277)
					if ((tmp8)){
						HX_STACK_LINE(277)
						break;
					}
					HX_STACK_LINE(278)
					::zpp_nape::dynamics::ZPP_Arbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(279)
					bool tmp9 = i->active;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(279)
					if ((tmp9)){
						HX_STACK_LINE(279)
						::zpp_nape::util::ZPP_ArbiterList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(279)
						(tmp10->user_length)++;
					}
					HX_STACK_LINE(280)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
	HX_STACK_LINE(286)
	::zpp_nape::util::ZPP_ArbiterList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	int tmp4 = tmp3->user_length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(286)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,zpp_gl,return )

Void ArbiterList_obj::zpp_vm( ){
{
		HX_STACK_FRAME("nape.dynamics.ArbiterList","zpp_vm",0x9d3cacf7,"nape.dynamics.ArbiterList.zpp_vm","nape/dynamics/ArbiterList.hx",291,0xfd301dcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		::zpp_nape::util::ZPP_ArbiterList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		tmp->valmod();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,zpp_vm,(void))

bool ArbiterList_obj::has( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","has",0xbcb27c1f,"nape.dynamics.ArbiterList.has","nape/dynamics/ArbiterList.hx",346,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(348)
	this->zpp_vm();
	HX_STACK_LINE(350)
	::zpp_nape::util::ZPP_ArbiterList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(350)
	::zpp_nape::dynamics::ZPP_Arbiter tmp1 = obj->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(350)
	bool tmp2 = tmp->inner->has(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(350)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,has,return )

::nape::dynamics::Arbiter ArbiterList_obj::at( int index){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","at",0xbbf797ce,"nape.dynamics.ArbiterList.at","nape/dynamics/ArbiterList.hx",363,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(365)
	this->zpp_vm();
	HX_STACK_LINE(368)
	bool tmp = (index < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(368)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(368)
	if ((tmp1)){
		HX_STACK_LINE(368)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(368)
		int tmp4 = this->zpp_gl();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(368)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(368)
		tmp2 = (tmp3 >= tmp5);
	}
	else{
		HX_STACK_LINE(368)
		tmp2 = true;
	}
	HX_STACK_LINE(368)
	if ((tmp2)){
		HX_STACK_LINE(368)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Index out of bounds","\x10","\xf3","\x5b","\x3f"));
	}
	HX_STACK_LINE(370)
	::zpp_nape::util::ZPP_ArbiterList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(370)
	bool tmp4 = tmp3->reverse_flag;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(370)
	if ((tmp4)){
		HX_STACK_LINE(370)
		int tmp5 = this->zpp_gl();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(370)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(370)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(370)
		int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(370)
		index = tmp8;
	}
	HX_STACK_LINE(371)
	bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(371)
	if ((tmp5)){
		HX_STACK_LINE(372)
		int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(372)
		::zpp_nape::util::ZPP_ArbiterList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(372)
		int tmp8 = tmp7->at_index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(372)
		bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(372)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(372)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(372)
		if ((tmp10)){
			HX_STACK_LINE(372)
			::zpp_nape::util::ZPP_ArbiterList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZPP_ArbiterList tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp14 = tmp13->at_ite;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(372)
			tmp11 = (tmp14 == null());
		}
		else{
			HX_STACK_LINE(372)
			tmp11 = true;
		}
		HX_STACK_LINE(372)
		if ((tmp11)){
			HX_STACK_LINE(373)
			::zpp_nape::util::ZPP_ArbiterList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(373)
			tmp12->at_index = index;
			HX_STACK_LINE(374)
			::zpp_nape::util::ZPP_ArbiterList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(374)
			int tmp14 = index;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(374)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp15 = tmp13->inner->iterator_at(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(374)
			::zpp_nape::util::ZPP_ArbiterList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(374)
			tmp16->at_ite = tmp15;
		}
		else{
			HX_STACK_LINE(377)
			while((true)){
				HX_STACK_LINE(377)
				::zpp_nape::util::ZPP_ArbiterList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(377)
				int tmp13 = tmp12->at_index;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(377)
				int tmp14 = index;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(377)
				bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(377)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(377)
				if ((tmp16)){
					HX_STACK_LINE(377)
					break;
				}
				HX_STACK_LINE(378)
				::zpp_nape::util::ZPP_ArbiterList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(378)
				(tmp17->at_index)++;
				HX_STACK_LINE(379)
				::zpp_nape::util::ZPP_ArbiterList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(379)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp19 = tmp18->at_ite->next;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(379)
				::zpp_nape::util::ZPP_ArbiterList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(379)
				tmp20->at_ite = tmp19;
			}
		}
	}
	else{
		HX_STACK_LINE(384)
		int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(384)
		::zpp_nape::util::ZPP_ArbiterList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(384)
		int tmp8 = tmp7->at_index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(384)
		bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(384)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(384)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(384)
		if ((tmp10)){
			HX_STACK_LINE(384)
			::zpp_nape::util::ZPP_ArbiterList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(384)
			::zpp_nape::util::ZPP_ArbiterList tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(384)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp14 = tmp13->at_ite;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(384)
			tmp11 = (tmp14 == null());
		}
		else{
			HX_STACK_LINE(384)
			tmp11 = true;
		}
		HX_STACK_LINE(384)
		if ((tmp11)){
			HX_STACK_LINE(385)
			::zpp_nape::util::ZPP_ArbiterList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(385)
			tmp12->at_index = (int)0;
			HX_STACK_LINE(386)
			::zpp_nape::util::ZPP_ArbiterList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(386)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp14 = tmp13->inner->head;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(386)
			::zpp_nape::util::ZPP_ArbiterList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(386)
			tmp15->at_ite = tmp14;
			HX_STACK_LINE(387)
			while((true)){
				HX_STACK_LINE(388)
				::zpp_nape::util::ZPP_ArbiterList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(388)
				::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16->at_ite->elt;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(388)
				::zpp_nape::dynamics::ZPP_Arbiter x = tmp17;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(389)
				bool tmp18 = x->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(389)
				if ((tmp18)){
					HX_STACK_LINE(389)
					break;
				}
				HX_STACK_LINE(390)
				::zpp_nape::util::ZPP_ArbiterList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(390)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp20 = tmp19->at_ite->next;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(390)
				::zpp_nape::util::ZPP_ArbiterList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(390)
				tmp21->at_ite = tmp20;
			}
		}
		HX_STACK_LINE(393)
		while((true)){
			HX_STACK_LINE(393)
			::zpp_nape::util::ZPP_ArbiterList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(393)
			int tmp13 = tmp12->at_index;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(393)
			int tmp14 = index;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(393)
			bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(393)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(393)
			if ((tmp16)){
				HX_STACK_LINE(393)
				break;
			}
			HX_STACK_LINE(394)
			::zpp_nape::util::ZPP_ArbiterList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(394)
			(tmp17->at_index)++;
			HX_STACK_LINE(395)
			::zpp_nape::util::ZPP_ArbiterList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(395)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp19 = tmp18->at_ite->next;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(395)
			::zpp_nape::util::ZPP_ArbiterList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(395)
			tmp20->at_ite = tmp19;
			HX_STACK_LINE(396)
			while((true)){
				HX_STACK_LINE(397)
				::zpp_nape::util::ZPP_ArbiterList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(397)
				::zpp_nape::dynamics::ZPP_Arbiter tmp22 = tmp21->at_ite->elt;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(397)
				::zpp_nape::dynamics::ZPP_Arbiter x = tmp22;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(398)
				bool tmp23 = x->active;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(398)
				if ((tmp23)){
					HX_STACK_LINE(398)
					break;
				}
				HX_STACK_LINE(399)
				::zpp_nape::util::ZPP_ArbiterList tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(399)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp25 = tmp24->at_ite->next;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(399)
				::zpp_nape::util::ZPP_ArbiterList tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(399)
				tmp26->at_ite = tmp25;
			}
		}
	}
	HX_STACK_LINE(403)
	::zpp_nape::util::ZPP_ArbiterList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(403)
	::zpp_nape::dynamics::ZPP_Arbiter tmp7 = tmp6->at_ite->elt;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(403)
	::nape::dynamics::Arbiter tmp8 = tmp7->wrapper();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(403)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,at,return )

bool ArbiterList_obj::push( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","push",0x64d30175,"nape.dynamics.ArbiterList.push","nape/dynamics/ArbiterList.hx",416,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(418)
	::zpp_nape::util::ZPP_ArbiterList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(418)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	if ((tmp1)){
		HX_STACK_LINE(418)
		::String tmp2 = HX_HCSTRING("Error: Arbiter","\x3b","\x05","\xef","\x18");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(418)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(418)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(420)
	::zpp_nape::util::ZPP_ArbiterList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(420)
	tmp2->modify_test();
	HX_STACK_LINE(422)
	this->zpp_vm();
	HX_STACK_LINE(424)
	::zpp_nape::util::ZPP_ArbiterList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(424)
	Dynamic tmp4 = tmp3->adder;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(424)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(424)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(424)
	if ((tmp5)){
		HX_STACK_LINE(424)
		::zpp_nape::util::ZPP_ArbiterList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(424)
		::nape::dynamics::Arbiter tmp8 = obj;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(424)
		tmp6 = tmp7->adder(tmp8);
	}
	else{
		HX_STACK_LINE(424)
		tmp6 = true;
	}
	HX_STACK_LINE(424)
	bool cont = tmp6;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(425)
	bool tmp7 = cont;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(425)
	if ((tmp7)){
		HX_STACK_LINE(426)
		::zpp_nape::util::ZPP_ArbiterList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(426)
		bool tmp9 = tmp8->reverse_flag;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(426)
		if ((tmp9)){
			HX_STACK_LINE(426)
			::zpp_nape::util::ZPP_ArbiterList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(426)
			::zpp_nape::dynamics::ZPP_Arbiter tmp11 = obj->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(426)
			tmp10->inner->add(tmp11);
		}
		else{
			HX_STACK_LINE(428)
			::zpp_nape::util::ZPP_ArbiterList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(428)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp11 = tmp10->push_ite;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(428)
			bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(428)
			if ((tmp12)){
				HX_STACK_LINE(428)
				bool tmp13 = this->empty();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(428)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(428)
				if ((tmp13)){
					HX_STACK_LINE(428)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(428)
					::zpp_nape::util::ZPP_ArbiterList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(428)
					int tmp16 = this->zpp_gl();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(428)
					int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(428)
					tmp14 = tmp15->inner->iterator_at(tmp17);
				}
				HX_STACK_LINE(428)
				::zpp_nape::util::ZPP_ArbiterList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(428)
				tmp15->push_ite = tmp14;
			}
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_ArbiterList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_ArbiterList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp15 = tmp14->push_ite;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(429)
			::zpp_nape::dynamics::ZPP_Arbiter tmp16 = obj->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp17 = tmp13->inner->insert(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_ArbiterList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(429)
			tmp18->push_ite = tmp17;
		}
		HX_STACK_LINE(431)
		::zpp_nape::util::ZPP_ArbiterList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(431)
		tmp10->invalidate();
		HX_STACK_LINE(432)
		::zpp_nape::util::ZPP_ArbiterList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(432)
		Dynamic tmp12 = tmp11->post_adder;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(432)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(432)
		if ((tmp13)){
			HX_STACK_LINE(432)
			::zpp_nape::util::ZPP_ArbiterList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(432)
			::nape::dynamics::Arbiter tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(432)
			tmp14->post_adder(tmp15);
		}
	}
	HX_STACK_LINE(434)
	bool tmp8 = cont;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(434)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,push,return )

bool ArbiterList_obj::unshift( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","unshift",0x1b5566ce,"nape.dynamics.ArbiterList.unshift","nape/dynamics/ArbiterList.hx",447,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(449)
	::zpp_nape::util::ZPP_ArbiterList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(449)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(449)
	if ((tmp1)){
		HX_STACK_LINE(449)
		::String tmp2 = HX_HCSTRING("Error: Arbiter","\x3b","\x05","\xef","\x18");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(449)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(449)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(451)
	::zpp_nape::util::ZPP_ArbiterList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(451)
	tmp2->modify_test();
	HX_STACK_LINE(453)
	this->zpp_vm();
	HX_STACK_LINE(455)
	::zpp_nape::util::ZPP_ArbiterList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(455)
	Dynamic tmp4 = tmp3->adder;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(455)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(455)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(455)
	if ((tmp5)){
		HX_STACK_LINE(455)
		::zpp_nape::util::ZPP_ArbiterList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(455)
		::nape::dynamics::Arbiter tmp8 = obj;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(455)
		tmp6 = tmp7->adder(tmp8);
	}
	else{
		HX_STACK_LINE(455)
		tmp6 = true;
	}
	HX_STACK_LINE(455)
	bool cont = tmp6;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(456)
	bool tmp7 = cont;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(456)
	if ((tmp7)){
		HX_STACK_LINE(457)
		::zpp_nape::util::ZPP_ArbiterList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(457)
		bool tmp9 = tmp8->reverse_flag;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(457)
		if ((tmp9)){
			HX_STACK_LINE(458)
			::zpp_nape::util::ZPP_ArbiterList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(458)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp11 = tmp10->push_ite;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(458)
			bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(458)
			if ((tmp12)){
				HX_STACK_LINE(458)
				bool tmp13 = this->empty();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(458)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(458)
				if ((tmp13)){
					HX_STACK_LINE(458)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(458)
					::zpp_nape::util::ZPP_ArbiterList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(458)
					int tmp16 = this->zpp_gl();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(458)
					int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(458)
					tmp14 = tmp15->inner->iterator_at(tmp17);
				}
				HX_STACK_LINE(458)
				::zpp_nape::util::ZPP_ArbiterList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(458)
				tmp15->push_ite = tmp14;
			}
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_ArbiterList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_ArbiterList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp15 = tmp14->push_ite;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(459)
			::zpp_nape::dynamics::ZPP_Arbiter tmp16 = obj->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp17 = tmp13->inner->insert(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_ArbiterList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(459)
			tmp18->push_ite = tmp17;
		}
		else{
			HX_STACK_LINE(461)
			::zpp_nape::util::ZPP_ArbiterList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(461)
			::zpp_nape::dynamics::ZPP_Arbiter tmp11 = obj->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(461)
			tmp10->inner->add(tmp11);
		}
		HX_STACK_LINE(462)
		::zpp_nape::util::ZPP_ArbiterList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(462)
		tmp10->invalidate();
		HX_STACK_LINE(463)
		::zpp_nape::util::ZPP_ArbiterList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(463)
		Dynamic tmp12 = tmp11->post_adder;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(463)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(463)
		if ((tmp13)){
			HX_STACK_LINE(463)
			::zpp_nape::util::ZPP_ArbiterList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(463)
			::nape::dynamics::Arbiter tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(463)
			tmp14->post_adder(tmp15);
		}
	}
	HX_STACK_LINE(465)
	bool tmp8 = cont;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(465)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,unshift,return )

::nape::dynamics::Arbiter ArbiterList_obj::pop( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","pop",0xbcb89a56,"nape.dynamics.ArbiterList.pop","nape/dynamics/ArbiterList.hx",478,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(480)
	::zpp_nape::util::ZPP_ArbiterList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(480)
	if ((tmp1)){
		HX_STACK_LINE(480)
		::String tmp2 = HX_HCSTRING("Error: Arbiter","\x3b","\x05","\xef","\x18");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(480)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(482)
	::zpp_nape::util::ZPP_ArbiterList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(482)
	tmp2->modify_test();
	HX_STACK_LINE(484)
	bool tmp3 = this->empty();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(484)
	if ((tmp3)){
		HX_STACK_LINE(484)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot remove from empty list","\x3a","\x7e","\x61","\x8d"));
	}
	HX_STACK_LINE(487)
	this->zpp_vm();
	HX_STACK_LINE(489)
	::zpp_nape::dynamics::ZPP_Arbiter ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(490)
	::zpp_nape::util::ZPP_ArbiterList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(490)
	bool tmp5 = tmp4->reverse_flag;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(490)
	if ((tmp5)){
		HX_STACK_LINE(491)
		::zpp_nape::util::ZPP_ArbiterList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(491)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp7 = tmp6->inner->head;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(491)
		ret = tmp7->elt;
		HX_STACK_LINE(492)
		::nape::dynamics::Arbiter tmp8 = ret->wrapper();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(492)
		::nape::dynamics::Arbiter retx = tmp8;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		::zpp_nape::util::ZPP_ArbiterList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(493)
		Dynamic tmp10 = tmp9->subber;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(493)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(493)
		if ((tmp11)){
			HX_STACK_LINE(493)
			::zpp_nape::util::ZPP_ArbiterList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(493)
			::nape::dynamics::Arbiter tmp13 = retx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(493)
			tmp12->subber(tmp13);
		}
		HX_STACK_LINE(494)
		::zpp_nape::util::ZPP_ArbiterList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(494)
		bool tmp13 = tmp12->dontremove;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(494)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(494)
		if ((tmp14)){
			HX_STACK_LINE(494)
			::zpp_nape::util::ZPP_ArbiterList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(494)
			tmp15->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(497)
		::zpp_nape::util::ZPP_ArbiterList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(497)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp7 = tmp6->at_ite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(497)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(497)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(497)
		if ((tmp8)){
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_ArbiterList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_ArbiterList tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp12 = tmp11->at_ite->next;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(497)
			tmp9 = (tmp13 == null());
		}
		else{
			HX_STACK_LINE(497)
			tmp9 = false;
		}
		HX_STACK_LINE(497)
		if ((tmp9)){
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_ArbiterList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(497)
			tmp10->at_ite = null();
		}
		HX_STACK_LINE(498)
		int tmp10 = this->zpp_gl();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(498)
		bool tmp11 = (tmp10 == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(498)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(498)
		if ((tmp11)){
			HX_STACK_LINE(498)
			tmp12 = null();
		}
		else{
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_ArbiterList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(498)
			int tmp14 = this->zpp_gl();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(498)
			int tmp15 = (tmp14 - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(498)
			tmp12 = tmp13->inner->iterator_at(tmp15);
		}
		HX_STACK_LINE(498)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter ite = tmp12;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(499)
		bool tmp13 = (ite == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(499)
		::zpp_nape::dynamics::ZPP_Arbiter tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(499)
		if ((tmp13)){
			HX_STACK_LINE(499)
			::zpp_nape::util::ZPP_ArbiterList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(499)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp16 = tmp15->inner->head;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(499)
			tmp14 = tmp16->elt;
		}
		else{
			HX_STACK_LINE(499)
			tmp14 = ite->next->elt;
		}
		HX_STACK_LINE(499)
		ret = tmp14;
		HX_STACK_LINE(500)
		::nape::dynamics::Arbiter tmp15 = ret->wrapper();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(500)
		::nape::dynamics::Arbiter retx = tmp15;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(501)
		::zpp_nape::util::ZPP_ArbiterList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(501)
		Dynamic tmp17 = tmp16->subber;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(501)
		bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(501)
		if ((tmp18)){
			HX_STACK_LINE(501)
			::zpp_nape::util::ZPP_ArbiterList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(501)
			::nape::dynamics::Arbiter tmp20 = retx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(501)
			tmp19->subber(tmp20);
		}
		HX_STACK_LINE(502)
		::zpp_nape::util::ZPP_ArbiterList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(502)
		bool tmp20 = tmp19->dontremove;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(502)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(502)
		if ((tmp21)){
			HX_STACK_LINE(502)
			::zpp_nape::util::ZPP_ArbiterList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(502)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp23 = ite;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(502)
			tmp22->inner->erase(tmp23);
		}
	}
	HX_STACK_LINE(504)
	::zpp_nape::util::ZPP_ArbiterList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(504)
	tmp6->invalidate();
	HX_STACK_LINE(505)
	::nape::dynamics::Arbiter tmp7 = ret->wrapper();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(505)
	::nape::dynamics::Arbiter retx = tmp7;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(506)
	::nape::dynamics::Arbiter tmp8 = retx;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(506)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,pop,return )

::nape::dynamics::Arbiter ArbiterList_obj::shift( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","shift",0x8562a487,"nape.dynamics.ArbiterList.shift","nape/dynamics/ArbiterList.hx",519,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(521)
	::zpp_nape::util::ZPP_ArbiterList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(521)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(521)
	if ((tmp1)){
		HX_STACK_LINE(521)
		::String tmp2 = HX_HCSTRING("Error: Arbiter","\x3b","\x05","\xef","\x18");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(521)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(521)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(523)
	::zpp_nape::util::ZPP_ArbiterList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(523)
	tmp2->modify_test();
	HX_STACK_LINE(525)
	bool tmp3 = this->empty();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(525)
	if ((tmp3)){
		HX_STACK_LINE(525)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot remove from empty list","\x3a","\x7e","\x61","\x8d"));
	}
	HX_STACK_LINE(528)
	this->zpp_vm();
	HX_STACK_LINE(530)
	::zpp_nape::dynamics::ZPP_Arbiter ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(531)
	::zpp_nape::util::ZPP_ArbiterList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(531)
	bool tmp5 = tmp4->reverse_flag;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(531)
	if ((tmp5)){
		HX_STACK_LINE(532)
		::zpp_nape::util::ZPP_ArbiterList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(532)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp7 = tmp6->at_ite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(532)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(532)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(532)
		if ((tmp8)){
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_ArbiterList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_ArbiterList tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp12 = tmp11->at_ite->next;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(532)
			tmp9 = (tmp13 == null());
		}
		else{
			HX_STACK_LINE(532)
			tmp9 = false;
		}
		HX_STACK_LINE(532)
		if ((tmp9)){
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_ArbiterList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(532)
			tmp10->at_ite = null();
		}
		HX_STACK_LINE(533)
		int tmp10 = this->zpp_gl();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(533)
		bool tmp11 = (tmp10 == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(533)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(533)
		if ((tmp11)){
			HX_STACK_LINE(533)
			tmp12 = null();
		}
		else{
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_ArbiterList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(533)
			int tmp14 = this->zpp_gl();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(533)
			int tmp15 = (tmp14 - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(533)
			tmp12 = tmp13->inner->iterator_at(tmp15);
		}
		HX_STACK_LINE(533)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter ite = tmp12;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(534)
		bool tmp13 = (ite == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(534)
		::zpp_nape::dynamics::ZPP_Arbiter tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(534)
		if ((tmp13)){
			HX_STACK_LINE(534)
			::zpp_nape::util::ZPP_ArbiterList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(534)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp16 = tmp15->inner->head;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(534)
			tmp14 = tmp16->elt;
		}
		else{
			HX_STACK_LINE(534)
			tmp14 = ite->next->elt;
		}
		HX_STACK_LINE(534)
		ret = tmp14;
		HX_STACK_LINE(535)
		::nape::dynamics::Arbiter tmp15 = ret->wrapper();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(535)
		::nape::dynamics::Arbiter retx = tmp15;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(536)
		::zpp_nape::util::ZPP_ArbiterList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(536)
		Dynamic tmp17 = tmp16->subber;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(536)
		bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(536)
		if ((tmp18)){
			HX_STACK_LINE(536)
			::zpp_nape::util::ZPP_ArbiterList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(536)
			::nape::dynamics::Arbiter tmp20 = retx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(536)
			tmp19->subber(tmp20);
		}
		HX_STACK_LINE(537)
		::zpp_nape::util::ZPP_ArbiterList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(537)
		bool tmp20 = tmp19->dontremove;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(537)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(537)
		if ((tmp21)){
			HX_STACK_LINE(537)
			::zpp_nape::util::ZPP_ArbiterList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(537)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp23 = ite;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(537)
			tmp22->inner->erase(tmp23);
		}
	}
	else{
		HX_STACK_LINE(540)
		::zpp_nape::util::ZPP_ArbiterList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(540)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp7 = tmp6->inner->head;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(540)
		ret = tmp7->elt;
		HX_STACK_LINE(541)
		::nape::dynamics::Arbiter tmp8 = ret->wrapper();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(541)
		::nape::dynamics::Arbiter retx = tmp8;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(542)
		::zpp_nape::util::ZPP_ArbiterList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(542)
		Dynamic tmp10 = tmp9->subber;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(542)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(542)
		if ((tmp11)){
			HX_STACK_LINE(542)
			::zpp_nape::util::ZPP_ArbiterList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(542)
			::nape::dynamics::Arbiter tmp13 = retx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(542)
			tmp12->subber(tmp13);
		}
		HX_STACK_LINE(543)
		::zpp_nape::util::ZPP_ArbiterList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(543)
		bool tmp13 = tmp12->dontremove;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(543)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(543)
		if ((tmp14)){
			HX_STACK_LINE(543)
			::zpp_nape::util::ZPP_ArbiterList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(543)
			tmp15->inner->pop();
		}
	}
	HX_STACK_LINE(545)
	::zpp_nape::util::ZPP_ArbiterList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(545)
	tmp6->invalidate();
	HX_STACK_LINE(546)
	::nape::dynamics::Arbiter tmp7 = ret->wrapper();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(546)
	::nape::dynamics::Arbiter retx = tmp7;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(547)
	::nape::dynamics::Arbiter tmp8 = retx;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(547)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,shift,return )

bool ArbiterList_obj::add( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","add",0xbcad2ee6,"nape.dynamics.ArbiterList.add","nape/dynamics/ArbiterList.hx",563,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(564)
	::zpp_nape::util::ZPP_ArbiterList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	bool tmp1 = tmp->reverse_flag;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(564)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(564)
	if ((tmp1)){
		HX_STACK_LINE(564)
		::nape::dynamics::Arbiter tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		tmp2 = this->push(tmp3);
	}
	else{
		HX_STACK_LINE(564)
		::nape::dynamics::Arbiter tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		tmp2 = this->unshift(tmp3);
	}
	HX_STACK_LINE(564)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,add,return )

bool ArbiterList_obj::remove( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","remove",0x1309e89f,"nape.dynamics.ArbiterList.remove","nape/dynamics/ArbiterList.hx",576,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(578)
	::zpp_nape::util::ZPP_ArbiterList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(578)
	if ((tmp1)){
		HX_STACK_LINE(578)
		::String tmp2 = HX_HCSTRING("Error: Arbiter","\x3b","\x05","\xef","\x18");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(578)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(578)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(580)
	::zpp_nape::util::ZPP_ArbiterList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(580)
	tmp2->modify_test();
	HX_STACK_LINE(582)
	this->zpp_vm();
	HX_STACK_LINE(584)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(586)
		ret = false;
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(588)
			::zpp_nape::util::ZPP_ArbiterList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = tmp3->inner->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(589)
			while((true)){
				HX_STACK_LINE(589)
				bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(589)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(589)
				if ((tmp6)){
					HX_STACK_LINE(589)
					break;
				}
				HX_STACK_LINE(590)
				::zpp_nape::dynamics::ZPP_Arbiter x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(591)
				{
					HX_STACK_LINE(592)
					bool tmp7 = (x == obj->zpp_inner);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(592)
					if ((tmp7)){
						HX_STACK_LINE(593)
						ret = true;
						HX_STACK_LINE(594)
						break;
					}
				}
				HX_STACK_LINE(597)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(601)
	bool tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(601)
	if ((tmp3)){
		HX_STACK_LINE(602)
		::zpp_nape::util::ZPP_ArbiterList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(602)
		Dynamic tmp5 = tmp4->subber;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(602)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(602)
		if ((tmp6)){
			HX_STACK_LINE(602)
			::zpp_nape::util::ZPP_ArbiterList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(602)
			::nape::dynamics::Arbiter tmp8 = obj;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(602)
			tmp7->subber(tmp8);
		}
		HX_STACK_LINE(603)
		::zpp_nape::util::ZPP_ArbiterList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(603)
		bool tmp8 = tmp7->dontremove;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(603)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(603)
		if ((tmp9)){
			HX_STACK_LINE(603)
			::zpp_nape::util::ZPP_ArbiterList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(603)
			::zpp_nape::dynamics::ZPP_Arbiter tmp11 = obj->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(603)
			tmp10->inner->remove(tmp11);
		}
		HX_STACK_LINE(604)
		::zpp_nape::util::ZPP_ArbiterList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(604)
		tmp10->invalidate();
	}
	HX_STACK_LINE(606)
	bool tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(606)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,remove,return )

Void ArbiterList_obj::clear( ){
{
		HX_STACK_FRAME("nape.dynamics.ArbiterList","clear",0x519b2992,"nape.dynamics.ArbiterList.clear","nape/dynamics/ArbiterList.hx",614,0xfd301dcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(616)
		::zpp_nape::util::ZPP_ArbiterList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(616)
		bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(616)
		if ((tmp1)){
			HX_STACK_LINE(616)
			::String tmp2 = HX_HCSTRING("Error: Arbiter","\x3b","\x05","\xef","\x18");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(616)
			::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(616)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(618)
		::zpp_nape::util::ZPP_ArbiterList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(618)
		bool tmp3 = tmp2->reverse_flag;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(618)
		if ((tmp3)){
			HX_STACK_LINE(619)
			while((true)){
				HX_STACK_LINE(619)
				bool tmp4 = this->empty();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(619)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(619)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(619)
				if ((tmp6)){
					HX_STACK_LINE(619)
					break;
				}
				HX_STACK_LINE(619)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(622)
			while((true)){
				HX_STACK_LINE(622)
				bool tmp4 = this->empty();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(622)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(622)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(622)
				if ((tmp6)){
					HX_STACK_LINE(622)
					break;
				}
				HX_STACK_LINE(622)
				this->shift();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,clear,(void))

bool ArbiterList_obj::empty( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","empty",0x7919f292,"nape.dynamics.ArbiterList.empty","nape/dynamics/ArbiterList.hx",631,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(634)
	int tmp = this->zpp_gl();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(634)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(634)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,empty,return )

::nape::dynamics::ArbiterIterator ArbiterList_obj::iterator( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","iterator",0x3e4ba309,"nape.dynamics.ArbiterList.iterator","nape/dynamics/ArbiterList.hx",647,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(649)
	this->zpp_vm();
	HX_STACK_LINE(651)
	::nape::dynamics::ArbiterIterator tmp = ::nape::dynamics::ArbiterIterator_obj::get(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(651)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,iterator,return )

::nape::dynamics::ArbiterList ArbiterList_obj::copy( hx::Null< bool >  __o_deep){
bool deep = __o_deep.Default(false);
	HX_STACK_FRAME("nape.dynamics.ArbiterList","copy",0x5c36ab50,"nape.dynamics.ArbiterList.copy","nape/dynamics/ArbiterList.hx",662,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deep,"deep")
{
		HX_STACK_LINE(663)
		::nape::dynamics::ArbiterList tmp = ::nape::dynamics::ArbiterList_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(663)
		::nape::dynamics::ArbiterList ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			::nape::dynamics::ArbiterIterator tmp1 = this->iterator();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(664)
			::nape::dynamics::ArbiterIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					::zpp_nape::util::ZPP_ArbiterList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(664)
					tmp3->valmod();
					HX_STACK_LINE(664)
					int tmp4 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(664)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(664)
					_g->zpp_critical = true;
					HX_STACK_LINE(664)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(664)
					if ((tmp5)){
						HX_STACK_LINE(664)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							::nape::dynamics::ArbiterIterator tmp6 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(664)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(664)
							::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(664)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(664)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(664)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(664)
				if ((tmp3)){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				::nape::dynamics::Arbiter tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					_g->zpp_critical = false;
					HX_STACK_LINE(664)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(664)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(664)
				::nape::dynamics::Arbiter i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(664)
				bool tmp5 = deep;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(664)
				::nape::dynamics::Arbiter tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(664)
				if ((tmp5)){
					HX_STACK_LINE(666)
					::String tmp7 = HX_HCSTRING("Error: Arbiter","\x3b","\x05","\xef","\x18");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(666)
					::String tmp8 = (tmp7 + HX_HCSTRING(" is not a copyable type","\x89","\xec","\x2e","\x8b"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(666)
					HX_STACK_DO_THROW(tmp8);
					HX_STACK_LINE(668)
					tmp6 = null();
				}
				else{
					HX_STACK_LINE(670)
					tmp6 = i;
				}
				HX_STACK_LINE(664)
				ret->push(tmp6);
			}
		}
		HX_STACK_LINE(671)
		::nape::dynamics::ArbiterList tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(671)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,copy,return )

Void ArbiterList_obj::merge( ::nape::dynamics::ArbiterList xs){
{
		HX_STACK_FRAME("nape.dynamics.ArbiterList","merge",0x0f065abd,"nape.dynamics.ArbiterList.merge","nape/dynamics/ArbiterList.hx",684,0xfd301dcb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xs,"xs")
		HX_STACK_LINE(686)
		bool tmp = (xs == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(686)
		if ((tmp)){
			HX_STACK_LINE(686)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot merge with null list","\xf4","\x38","\x16","\xfb"));
		}
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			::nape::dynamics::ArbiterIterator tmp1 = xs->iterator();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(688)
			::nape::dynamics::ArbiterIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(688)
			while((true)){
				HX_STACK_LINE(688)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					::zpp_nape::util::ZPP_ArbiterList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(688)
					tmp3->valmod();
					HX_STACK_LINE(688)
					int tmp4 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(688)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(688)
					_g->zpp_critical = true;
					HX_STACK_LINE(688)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(688)
					if ((tmp5)){
						HX_STACK_LINE(688)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							::nape::dynamics::ArbiterIterator tmp6 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(688)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(688)
							::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(688)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(688)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(688)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(688)
				if ((tmp3)){
					HX_STACK_LINE(688)
					break;
				}
				HX_STACK_LINE(688)
				::nape::dynamics::Arbiter tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					_g->zpp_critical = false;
					HX_STACK_LINE(688)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(688)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(688)
				::nape::dynamics::Arbiter x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(689)
				::nape::dynamics::Arbiter tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(689)
				bool tmp6 = this->has(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(689)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(689)
				if ((tmp7)){
					HX_STACK_LINE(689)
					::nape::dynamics::Arbiter tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(689)
					this->add(tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,merge,(void))

::String ArbiterList_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","toString",0xe32029c7,"nape.dynamics.ArbiterList.toString","nape/dynamics/ArbiterList.hx",702,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(703)
	::String ret = HX_HCSTRING("[","\x5b","\x00","\x00","\x00");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(704)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(705)
	{
		HX_STACK_LINE(705)
		::nape::dynamics::ArbiterIterator tmp = this->iterator();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(705)
		::nape::dynamics::ArbiterIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(705)
		while((true)){
			HX_STACK_LINE(705)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				::zpp_nape::util::ZPP_ArbiterList tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(705)
				tmp2->valmod();
				HX_STACK_LINE(705)
				int tmp3 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(705)
				int length = tmp3;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(705)
				_g->zpp_critical = true;
				HX_STACK_LINE(705)
				bool tmp4 = (_g->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(705)
				if ((tmp4)){
					HX_STACK_LINE(705)
					tmp1 = true;
				}
				else{
					HX_STACK_LINE(705)
					{
						HX_STACK_LINE(705)
						::nape::dynamics::ArbiterIterator tmp5 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(705)
						_g->zpp_next = tmp5;
						HX_STACK_LINE(705)
						::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
						HX_STACK_LINE(705)
						_g->zpp_inner = null();
					}
					HX_STACK_LINE(705)
					tmp1 = false;
				}
			}
			HX_STACK_LINE(705)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(705)
			if ((tmp2)){
				HX_STACK_LINE(705)
				break;
			}
			HX_STACK_LINE(705)
			::nape::dynamics::Arbiter tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				_g->zpp_critical = false;
				HX_STACK_LINE(705)
				int tmp4 = (_g->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(705)
				tmp3 = _g->zpp_inner->at(tmp4);
			}
			HX_STACK_LINE(705)
			::nape::dynamics::Arbiter i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(706)
			bool tmp4 = fst;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(706)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(706)
			if ((tmp5)){
				HX_STACK_LINE(706)
				hx::AddEq(ret,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(707)
			bool tmp6 = (i == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(707)
			::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(707)
			if ((tmp6)){
				HX_STACK_LINE(707)
				tmp7 = HX_HCSTRING("NULL","\x87","\x66","\xcf","\x33");
			}
			else{
				HX_STACK_LINE(707)
				tmp7 = i->toString();
			}
			HX_STACK_LINE(707)
			hx::AddEq(ret,tmp7);
			HX_STACK_LINE(708)
			fst = false;
		}
	}
	HX_STACK_LINE(710)
	::String tmp = (ret + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(710)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterList_obj,toString,return )

::nape::dynamics::ArbiterList ArbiterList_obj::foreach( Dynamic lambda){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","foreach",0x7c8680cf,"nape.dynamics.ArbiterList.foreach","nape/dynamics/ArbiterList.hx",732,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(734)
	bool tmp = (lambda == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(734)
	if ((tmp)){
		HX_STACK_LINE(734)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot execute null on list elements","\x97","\xfe","\x61","\x00"));
	}
	HX_STACK_LINE(736)
	::nape::dynamics::ArbiterIterator tmp1 = this->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(736)
	::nape::dynamics::ArbiterIterator it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(737)
	while((true)){
		HX_STACK_LINE(737)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(737)
		{
			HX_STACK_LINE(737)
			::zpp_nape::util::ZPP_ArbiterList tmp3 = it->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(737)
			tmp3->valmod();
			HX_STACK_LINE(737)
			int tmp4 = it->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(737)
			int length = tmp4;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(737)
			it->zpp_critical = true;
			HX_STACK_LINE(737)
			bool tmp5 = (it->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(737)
			if ((tmp5)){
				HX_STACK_LINE(737)
				tmp2 = true;
			}
			else{
				HX_STACK_LINE(737)
				{
					HX_STACK_LINE(737)
					::nape::dynamics::ArbiterIterator tmp6 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(737)
					it->zpp_next = tmp6;
					HX_STACK_LINE(737)
					::nape::dynamics::ArbiterIterator_obj::zpp_pool = it;
					HX_STACK_LINE(737)
					it->zpp_inner = null();
				}
				HX_STACK_LINE(737)
				tmp2 = false;
			}
		}
		HX_STACK_LINE(737)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(737)
		if ((tmp3)){
			HX_STACK_LINE(737)
			break;
		}
		HX_STACK_LINE(738)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(739)
			::nape::dynamics::Arbiter tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(739)
			{
				HX_STACK_LINE(739)
				it->zpp_critical = false;
				HX_STACK_LINE(739)
				int tmp5 = (it->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(739)
				tmp4 = it->zpp_inner->at(tmp5);
			}
			HX_STACK_LINE(739)
			lambda(tmp4).Cast< Void >();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(742)
					{
						HX_STACK_LINE(743)
						::nape::dynamics::ArbiterIterator tmp4 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(743)
						it->zpp_next = tmp4;
						HX_STACK_LINE(744)
						::nape::dynamics::ArbiterIterator_obj::zpp_pool = it;
						HX_STACK_LINE(745)
						it->zpp_inner = null();
					}
					HX_STACK_LINE(747)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(750)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,foreach,return )

::nape::dynamics::ArbiterList ArbiterList_obj::filter( Dynamic lambda){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","filter",0x93b66c13,"nape.dynamics.ArbiterList.filter","nape/dynamics/ArbiterList.hx",779,0xfd301dcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(781)
	bool tmp = (lambda == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(781)
	if ((tmp)){
		HX_STACK_LINE(781)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot select elements of list with null","\x14","\xa8","\xf1","\x3b"));
	}
	HX_STACK_LINE(783)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(784)
	while((true)){
		HX_STACK_LINE(784)
		int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(784)
		int tmp2 = this->zpp_gl();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(784)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(784)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(784)
		if ((tmp4)){
			HX_STACK_LINE(784)
			break;
		}
		HX_STACK_LINE(785)
		int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(785)
		::nape::dynamics::Arbiter tmp6 = this->at(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(785)
		::nape::dynamics::Arbiter x = tmp6;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(786)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(787)
			::nape::dynamics::Arbiter tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(787)
			bool tmp8 = lambda(tmp7).Cast< bool >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(787)
			if ((tmp8)){
				HX_STACK_LINE(787)
				(i)++;
			}
			else{
				HX_STACK_LINE(788)
				::nape::dynamics::Arbiter tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(788)
				this->remove(tmp9);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(791)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(794)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,filter,return )

::nape::dynamics::ArbiterList ArbiterList_obj::fromArray( Array< ::Dynamic > array){
	HX_STACK_FRAME("nape.dynamics.ArbiterList","fromArray",0x8a94f654,"nape.dynamics.ArbiterList.fromArray","nape/dynamics/ArbiterList.hx",304,0xfd301dcb)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(306)
	bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	if ((tmp)){
		HX_STACK_LINE(307)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot convert null Array to Nape list","\x35","\xf1","\x7a","\x22"));
	}
	HX_STACK_LINE(310)
	::nape::dynamics::ArbiterList tmp1 = ::nape::dynamics::ArbiterList_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(310)
	::nape::dynamics::ArbiterList ret = tmp1;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		while((true)){
			HX_STACK_LINE(311)
			bool tmp2 = (_g < array->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(311)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			if ((tmp3)){
				HX_STACK_LINE(311)
				break;
			}
			HX_STACK_LINE(311)
			::nape::dynamics::Arbiter tmp4 = array->__get(_g).StaticCast< ::nape::dynamics::Arbiter >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(311)
			::nape::dynamics::Arbiter i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(316)
			::nape::dynamics::Arbiter tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(316)
			ret->push(tmp5);
		}
	}
	HX_STACK_LINE(318)
	::nape::dynamics::ArbiterList tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(318)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArbiterList_obj,fromArray,return )


ArbiterList_obj::ArbiterList_obj()
{
}

void ArbiterList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArbiterList);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void ArbiterList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic ArbiterList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"zpp_gl") ) { return zpp_gl_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_vm") ) { return zpp_vm_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		if (HX_FIELD_EQ(inName,"foreach") ) { return foreach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ArbiterList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true;  }
	}
	return false;
}

Dynamic ArbiterList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_ArbiterList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArbiterList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_ArbiterList*/ ,(int)offsetof(ArbiterList_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("zpp_gl","\x8a","\x53","\xbb","\x8e"),
	HX_HCSTRING("zpp_vm","\x9c","\x60","\xbb","\x8e"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("foreach","\x8a","\xfd","\xe4","\xd9"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArbiterList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArbiterList_obj::__mClass,"__mClass");
};

#endif

hx::Class ArbiterList_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromArray","\xcf","\x57","\x18","\xda"),
	::String(null()) };

void ArbiterList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.ArbiterList","\xb3","\x96","\x3e","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArbiterList_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArbiterList_obj >;
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

} // end namespace nape
} // end namespace dynamics
